#include "core__error.sep.0.h"
/* method error$Error$message for (self: Error): String */
val* core___core__Error___message(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = self->attrs[COLOR_core__error__Error___message].val; /* _message on <self:Error> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _message");
PRINT_ERROR(" (%s:%d)\n", FILE_core__error, 19);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method error$Error$message= for (self: Error, String) */
void core___core__Error___message_61d(val* self, val* p0) {
self->attrs[COLOR_core__error__Error___message].val = p0; /* _message on <self:Error> */
RET_LABEL:;
}
/* method error$Error$cause for (self: Error): nullable Error */
val* core___core__Error___cause(val* self) {
val* var /* : nullable Error */;
val* var1 /* : nullable Error */;
var1 = self->attrs[COLOR_core__error__Error___cause].val; /* _cause on <self:Error> */
var = var1;
RET_LABEL:;
return var;
}
/* method error$Error$cause= for (self: Error, nullable Error) */
void core___core__Error___cause_61d(val* self, val* p0) {
self->attrs[COLOR_core__error__Error___cause].val = p0; /* _cause on <self:Error> */
RET_LABEL:;
}
/* method error$Error$to_s for (self: Error): String */
val* core___core__Error___core__abstract_text__Object__to_s(val* self) {
val* var /* : String */;
val* var1 /* : String */;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_core__error__Error__message]))(self); /* message on <self:Error>*/
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method error$Error$init for (self: Error) */
void core___core__Error___core__kernel__Object__init(val* self) {
{
((void(*)(val* self))(self->class->vft[COLOR_core___core__Error___core__kernel__Object__init]))(self); /* init on <self:Error>*/
}
RET_LABEL:;
}
/* method error$MaybeError$maybe_value for (self: MaybeError[nullable Object, Error]): nullable Object */
val* core___core__MaybeError___maybe_value(val* self) {
val* var /* : nullable Object */;
val* var1 /* : nullable Object */;
var1 = self->attrs[COLOR_core__error__MaybeError___maybe_value].val; /* _maybe_value on <self:MaybeError[nullable Object, Error]> */
var = var1;
RET_LABEL:;
return var;
}
/* method error$MaybeError$maybe_value= for (self: MaybeError[nullable Object, Error], nullable Object) */
void core___core__MaybeError___maybe_value_61d(val* self, val* p0) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
/* Covariant cast for argument 0 (maybe_value) <p0:nullable Object> isa nullable V */
/* <p0:nullable Object> isa nullable V */
type_struct = self->type->resolution_table->types[COLOR_nullable__core__MaybeError___35dV];
cltype = type_struct->color;
idtype = type_struct->id;
if(p0 == NULL) {
var = 1;
} else {
if(cltype >= (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->table_size) {
var = 0;
} else {
var = (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var)) {
var_class_name = p0 == NULL ? "null" : (((long)p0&3)?type_info[((long)p0&3)]:p0->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "nullable V", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__error, 69);
fatal_exit(1);
}
self->attrs[COLOR_core__error__MaybeError___maybe_value].val = p0; /* _maybe_value on <self:MaybeError[nullable Object, Error]> */
RET_LABEL:;
}
/* method error$MaybeError$maybe_error for (self: MaybeError[nullable Object, Error]): nullable Error */
val* core___core__MaybeError___maybe_error(val* self) {
val* var /* : nullable Error */;
val* var1 /* : nullable Error */;
var1 = self->attrs[COLOR_core__error__MaybeError___maybe_error].val; /* _maybe_error on <self:MaybeError[nullable Object, Error]> */
var = var1;
RET_LABEL:;
return var;
}
/* method error$MaybeError$maybe_error= for (self: MaybeError[nullable Object, Error], nullable Error) */
void core___core__MaybeError___maybe_error_61d(val* self, val* p0) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
/* Covariant cast for argument 0 (maybe_error) <p0:nullable Error> isa nullable E */
/* <p0:nullable Error> isa nullable E */
type_struct = self->type->resolution_table->types[COLOR_nullable__core__MaybeError___35dE];
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
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "nullable E", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__error, 72);
fatal_exit(1);
}
self->attrs[COLOR_core__error__MaybeError___maybe_error].val = p0; /* _maybe_error on <self:MaybeError[nullable Object, Error]> */
RET_LABEL:;
}
/* method error$MaybeError$is_error for (self: MaybeError[nullable Object, Error]): Bool */
short int core___core__MaybeError___is_error(val* self) {
short int var /* : Bool */;
val* var1 /* : nullable Error */;
short int var2 /* : Bool */;
short int var3 /* : Bool */;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_core__error__MaybeError__maybe_error]))(self); /* maybe_error on <self:MaybeError[nullable Object, Error]>*/
}
if (var1 == NULL) {
var2 = 0; /* is null */
} else {
var2 = 1; /* arg is null and recv is not */
}
if (0) {
var3 = ((short int(*)(val* self, val* p0))(var1->class->vft[COLOR_core__kernel__Object___33d_61d]))(var1, ((val*)NULL)); /* != on <var1:nullable Error>*/
var2 = var3;
}
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method error$MaybeError$value for (self: MaybeError[nullable Object, Error]): nullable Object */
val* core___core__MaybeError___value(val* self) {
val* var /* : nullable Object */;
val* var1 /* : nullable Object */;
short int var2 /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
short int is_nullable;
const char* var_class_name;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_core__error__MaybeError__maybe_value]))(self); /* maybe_value on <self:MaybeError[nullable Object, Error]>*/
}
/* <var1:nullable Object> isa V */
type_struct = self->type->resolution_table->types[COLOR_core__MaybeError___35dV];
cltype = type_struct->color;
idtype = type_struct->id;
is_nullable = type_struct->is_nullable;
if(var1 == NULL) {
var2 = is_nullable;
} else {
if(cltype >= (((long)var1&3)?type_info[((long)var1&3)]:var1->type)->table_size) {
var2 = 0;
} else {
var2 = (((long)var1&3)?type_info[((long)var1&3)]:var1->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var2)) {
var_class_name = var1 == NULL ? "null" : (((long)var1&3)?type_info[((long)var1&3)]:var1->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "V", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__error, 80);
fatal_exit(1);
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method error$MaybeError$error for (self: MaybeError[nullable Object, Error]): Error */
val* core___core__MaybeError___error(val* self) {
val* var /* : Error */;
val* var1 /* : nullable Error */;
short int var2 /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
short int is_nullable;
const char* var_class_name;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_core__error__MaybeError__maybe_error]))(self); /* maybe_error on <self:MaybeError[nullable Object, Error]>*/
}
/* <var1:nullable Error> isa E */
type_struct = self->type->resolution_table->types[COLOR_core__MaybeError___35dE];
cltype = type_struct->color;
idtype = type_struct->id;
is_nullable = type_struct->is_nullable;
if(var1 == NULL) {
var2 = is_nullable;
} else {
if(cltype >= var1->type->table_size) {
var2 = 0;
} else {
var2 = var1->type->type_table[cltype] == idtype;
}
}
if (unlikely(!var2)) {
var_class_name = var1 == NULL ? "null" : var1->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "E", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__error, 84);
fatal_exit(1);
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method error$MaybeError$to_s for (self: MaybeError[nullable Object, Error]): String */
val* core___core__MaybeError___core__abstract_text__Object__to_s(val* self) {
val* var /* : String */;
val* var1 /* : nullable Error */;
val* var_e /* var e: nullable Error */;
short int var2 /* : Bool */;
short int var3 /* : Bool */;
val* var4 /* : String */;
val* var5 /* : nullable Object */;
val* var6 /* : String */;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_core__error__MaybeError__maybe_error]))(self); /* maybe_error on <self:MaybeError[nullable Object, Error]>*/
}
var_e = var1;
if (var_e == NULL) {
var2 = 0; /* is null */
} else {
var2 = 1; /* arg is null and recv is not */
}
if (0) {
var3 = ((short int(*)(val* self, val* p0))(var_e->class->vft[COLOR_core__kernel__Object___33d_61d]))(var_e, ((val*)NULL)); /* != on <var_e:nullable Error>*/
var2 = var3;
}
if (var2){
{
var4 = ((val*(*)(val* self))(var_e->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_e); /* to_s on <var_e:nullable Error(Error)>*/
}
var = var4;
goto RET_LABEL;
} else {
}
{
var5 = ((val*(*)(val* self))(self->class->vft[COLOR_core__error__MaybeError__value]))(self); /* value on <self:MaybeError[nullable Object, Error]>*/
}
if (unlikely(var5 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_core__error, 89);
fatal_exit(1);
}
{
var6 = ((val*(*)(val* self))((((long)var5&3)?class_info[((long)var5&3)]:var5->class)->vft[COLOR_core__abstract_text__Object__to_s]))(var5); /* to_s on <var5:nullable Object(Object)>*/
}
var = var6;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method error$MaybeError$init for (self: MaybeError[nullable Object, Error]) */
void core___core__MaybeError___core__kernel__Object__init(val* self) {
{
((void(*)(val* self))(self->class->vft[COLOR_core___core__MaybeError___core__kernel__Object__init]))(self); /* init on <self:MaybeError[nullable Object, Error]>*/
}
RET_LABEL:;
}
