#include "nitc__mmodule_data.sep.0.h"
/* method mmodule_data#MModuleData#model for (self: MModuleData[Object]): Model */
val* nitc___nitc__MModuleData___model(val* self) {
val* var /* : Model */;
val* var1 /* : Model */;
var1 = self->attrs[COLOR_nitc__mmodule_data__MModuleData___model].val; /* _model on <self:MModuleData[Object]> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _model");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__mmodule_data, 26);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method mmodule_data#MModuleData#model= for (self: MModuleData[Object], Model) */
void nitc___nitc__MModuleData___model_61d(val* self, val* p0) {
self->attrs[COLOR_nitc__mmodule_data__MModuleData___model].val = p0; /* _model on <self:MModuleData[Object]> */
RET_LABEL:;
}
/* method mmodule_data#MModuleData#has_mmodule for (self: MModuleData[Object], MModule): Bool */
short int nitc___nitc__MModuleData___has_mmodule(val* self, val* p0) {
short int var /* : Bool */;
val* var_mmodule /* var mmodule: MModule */;
val* var1 /* : HashMap[MModule, Object] */;
val* var3 /* : HashMap[MModule, Object] */;
short int var4 /* : Bool */;
var_mmodule = p0;
{
{ /* Inline mmodule_data#MModuleData#defs (self) on <self:MModuleData[Object]> */
var3 = self->attrs[COLOR_nitc__mmodule_data__MModuleData___defs].val; /* _defs on <self:MModuleData[Object]> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _defs");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__mmodule_data, 54);
fatal_exit(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
var4 = core___core__HashMap___core__abstract_collection__MapRead__has_key(var1, var_mmodule);
}
var = var4;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method mmodule_data#MModuleData#[] for (self: MModuleData[Object], MModule): nullable Object */
val* nitc___nitc__MModuleData____91d_93d(val* self, val* p0) {
val* var /* : nullable Object */;
val* var_mmodule /* var mmodule: MModule */;
val* var1 /* : HashMap[MModule, Object] */;
val* var3 /* : HashMap[MModule, Object] */;
val* var4 /* : nullable Object */;
var_mmodule = p0;
{
{ /* Inline mmodule_data#MModuleData#defs (self) on <self:MModuleData[Object]> */
var3 = self->attrs[COLOR_nitc__mmodule_data__MModuleData___defs].val; /* _defs on <self:MModuleData[Object]> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _defs");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__mmodule_data, 54);
fatal_exit(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
var4 = core___core__HashMap___core__abstract_collection__MapRead__get_or_null(var1, var_mmodule);
}
var = var4;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method mmodule_data#MModuleData#[]= for (self: MModuleData[Object], MModule, nullable Object) */
void nitc___nitc__MModuleData____91d_93d_61d(val* self, val* p0, val* p1) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
val* var_mmodule /* var mmodule: MModule */;
val* var_value /* var value: nullable Object */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var3 /* : HashMap[MModule, Object] */;
val* var5 /* : HashMap[MModule, Object] */;
val* var6 /* : RemovableCollection[nullable Object] */;
val* var7 /* : HashMap[MModule, Object] */;
val* var9 /* : HashMap[MModule, Object] */;
/* Covariant cast for argument 1 (value) <p1:nullable Object> isa nullable E */
/* <p1:nullable Object> isa nullable E */
type_struct = self->type->resolution_table->types[COLOR_nullable__nitc__MModuleData___35dE];
cltype = type_struct->color;
idtype = type_struct->id;
if(p1 == NULL) {
var = 1;
} else {
if(cltype >= (((long)p1&3)?type_info[((long)p1&3)]:p1->type)->table_size) {
var = 0;
} else {
var = (((long)p1&3)?type_info[((long)p1&3)]:p1->type)->type_table[cltype] == idtype;
}
}
if (unlikely(!var)) {
var_class_name = p1 == NULL ? "null" : (((long)p1&3)?type_info[((long)p1&3)]:p1->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "nullable E", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__mmodule_data, 43);
fatal_exit(1);
}
var_mmodule = p0;
var_value = p1;
if (var_value == NULL) {
var1 = 1; /* is null */
} else {
var1 = 0; /* arg is null but recv is not */
}
if (0) {
var2 = ((short int(*)(val* self, val* p0))((((long)var_value&3)?class_info[((long)var_value&3)]:var_value->class)->vft[COLOR_core__kernel__Object___61d_61d]))(var_value, ((val*)NULL)); /* == on <var_value:nullable Object>*/
var1 = var2;
}
if (var1){
{
{ /* Inline mmodule_data#MModuleData#defs (self) on <self:MModuleData[Object]> */
var5 = self->attrs[COLOR_nitc__mmodule_data__MModuleData___defs].val; /* _defs on <self:MModuleData[Object]> */
if (unlikely(var5 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _defs");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__mmodule_data, 54);
fatal_exit(1);
}
var3 = var5;
RET_LABEL4:(void)0;
}
}
{
var6 = core___core__HashMap___core__abstract_collection__MapRead__keys(var3);
}
{
((void(*)(val* self, val* p0))((((long)var6&3)?class_info[((long)var6&3)]:var6->class)->vft[COLOR_core__abstract_collection__RemovableCollection__remove]))(var6, var_mmodule); /* remove on <var6:RemovableCollection[nullable Object](RemovableCollection[MModule])>*/
}
} else {
{
{ /* Inline mmodule_data#MModuleData#defs (self) on <self:MModuleData[Object]> */
var9 = self->attrs[COLOR_nitc__mmodule_data__MModuleData___defs].val; /* _defs on <self:MModuleData[Object]> */
if (unlikely(var9 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _defs");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__mmodule_data, 54);
fatal_exit(1);
}
var7 = var9;
RET_LABEL8:(void)0;
}
}
{
core___core__HashMap___core__abstract_collection__Map___91d_93d_61d(var7, var_mmodule, var_value); /* Direct call hash_collection#HashMap#[]= on <var7:HashMap[MModule, Object]>*/
}
}
RET_LABEL:;
}
/* method mmodule_data#MModuleData#defs for (self: MModuleData[Object]): HashMap[MModule, Object] */
val* nitc___nitc__MModuleData___defs(val* self) {
val* var /* : HashMap[MModule, Object] */;
val* var1 /* : HashMap[MModule, Object] */;
var1 = self->attrs[COLOR_nitc__mmodule_data__MModuleData___defs].val; /* _defs on <self:MModuleData[Object]> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _defs");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__mmodule_data, 54);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method mmodule_data#MModuleData#lookup_all_modules for (self: MModuleData[Object], MModule, MVisibility): Sequence[MModule] */
val* nitc___nitc__MModuleData___lookup_all_modules(val* self, val* p0, val* p1) {
val* var /* : Sequence[MModule] */;
val* var_mmodule /* var mmodule: MModule */;
val* var_min_visibility /* var min_visibility: MVisibility */;
val* var1 /* : Array[MModule] */;
val* var_res /* var res: Array[MModule] */;
val* var2 /* : POSetElement[MModule] */;
val* var4 /* : POSetElement[MModule] */;
val* var5 /* : Collection[nullable Object] */;
val* var_ /* var : Collection[MModule] */;
val* var6 /* : Iterator[nullable Object] */;
val* var_7 /* var : Iterator[MModule] */;
short int var8 /* : Bool */;
val* var9 /* : nullable Object */;
val* var_m /* var m: MModule */;
val* var10 /* : MVisibility */;
short int var11 /* : Bool */;
val* var13 /* : HashMap[MModule, Object] */;
val* var15 /* : HashMap[MModule, Object] */;
short int var16 /* : Bool */;
var_mmodule = p0;
var_min_visibility = p1;
var1 = NEW_core__Array(&type_core__Array__nitc__MModule);
{
core___core__Array___core__kernel__Object__init(var1); /* Direct call array#Array#init on <var1:Array[MModule]>*/
}
var_res = var1;
{
{ /* Inline mmodule#MModule#in_importation (var_mmodule) on <var_mmodule:MModule> */
var4 = var_mmodule->attrs[COLOR_nitc__mmodule__MModule___in_importation].val; /* _in_importation on <var_mmodule:MModule> */
if (unlikely(var4 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _in_importation");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__mmodule, 108);
fatal_exit(1);
}
var2 = var4;
RET_LABEL3:(void)0;
}
}
{
var5 = poset___poset__POSetElement___greaters(var2);
}
var_ = var5;
{
var6 = ((val*(*)(val* self))((((long)var_&3)?class_info[((long)var_&3)]:var_->class)->vft[COLOR_core__abstract_collection__Collection__iterator]))(var_); /* iterator on <var_:Collection[MModule]>*/
}
var_7 = var6;
for(;;) {
{
var8 = ((short int(*)(val* self))((((long)var_7&3)?class_info[((long)var_7&3)]:var_7->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_7); /* is_ok on <var_7:Iterator[MModule]>*/
}
if (var8){
} else {
goto BREAK_label;
}
{
var9 = ((val*(*)(val* self))((((long)var_7&3)?class_info[((long)var_7&3)]:var_7->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_7); /* item on <var_7:Iterator[MModule]>*/
}
var_m = var9;
{
var10 = nitc___nitc__MModule___visibility_for(var_mmodule, var_m);
}
{
var11 = nitc___nitc__MVisibility___core__kernel__Comparable___60d(var10, var_min_visibility);
}
if (var11){
goto BREAK_label12;
} else {
}
{
{ /* Inline mmodule_data#MModuleData#defs (self) on <self:MModuleData[Object]> */
var15 = self->attrs[COLOR_nitc__mmodule_data__MModuleData___defs].val; /* _defs on <self:MModuleData[Object]> */
if (unlikely(var15 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _defs");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__mmodule_data, 54);
fatal_exit(1);
}
var13 = var15;
RET_LABEL14:(void)0;
}
}
{
var16 = core___core__HashMap___core__abstract_collection__MapRead__has_key(var13, var_m);
}
if (var16){
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_res, var_m); /* Direct call array#Array#add on <var_res:Array[MModule]>*/
}
} else {
}
BREAK_label12: (void)0;
{
((void(*)(val* self))((((long)var_7&3)?class_info[((long)var_7&3)]:var_7->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_7); /* next on <var_7:Iterator[MModule]>*/
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_7&3)?class_info[((long)var_7&3)]:var_7->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_7); /* finish on <var_7:Iterator[MModule]>*/
}
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method mmodule_data#MModuleData#lookup_values for (self: MModuleData[Object], MModule, MVisibility): Sequence[Object] */
val* nitc___nitc__MModuleData___lookup_values(val* self, val* p0, val* p1) {
val* var /* : Sequence[Object] */;
val* var_mmodule /* var mmodule: MModule */;
val* var_min_visibility /* var min_visibility: MVisibility */;
val* var1 /* : Sequence[MModule] */;
val* var_mmodules /* var mmodules: Sequence[MModule] */;
val* var2 /* : Model */;
val* var4 /* : Model */;
val* var5 /* : POSet[MModule] */;
val* var7 /* : POSet[MModule] */;
val* var8 /* : Array[nullable Object] */;
val* var9 /* : Array[Object] */;
val* var_res /* var res: Array[Object] */;
val* var_ /* var : Array[MModule] */;
val* var10 /* : IndexedIterator[nullable Object] */;
val* var_11 /* var : IndexedIterator[MModule] */;
short int var12 /* : Bool */;
val* var13 /* : nullable Object */;
val* var_m /* var m: MModule */;
val* var14 /* : HashMap[MModule, Object] */;
val* var16 /* : HashMap[MModule, Object] */;
val* var17 /* : nullable Object */;
var_mmodule = p0;
var_min_visibility = p1;
{
var1 = nitc___nitc__MModuleData___lookup_all_modules(self, var_mmodule, var_min_visibility);
}
var_mmodules = var1;
{
{ /* Inline mmodule_data#MModuleData#model (self) on <self:MModuleData[Object]> */
var4 = self->attrs[COLOR_nitc__mmodule_data__MModuleData___model].val; /* _model on <self:MModuleData[Object]> */
if (unlikely(var4 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _model");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__mmodule_data, 26);
fatal_exit(1);
}
var2 = var4;
RET_LABEL3:(void)0;
}
}
{
{ /* Inline mmodule#Model#mmodule_importation_hierarchy (var2) on <var2:Model> */
var7 = var2->attrs[COLOR_nitc__mmodule__Model___mmodule_importation_hierarchy].val; /* _mmodule_importation_hierarchy on <var2:Model> */
if (unlikely(var7 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule_importation_hierarchy");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__mmodule, 33);
fatal_exit(1);
}
var5 = var7;
RET_LABEL6:(void)0;
}
}
{
var8 = poset___poset__POSet___select_smallest(var5, var_mmodules);
}
var_mmodules = var8;
var9 = NEW_core__Array(self->type->resolution_table->types[COLOR_core__Array__nitc__MModuleData___35dE]);
{
core___core__Array___core__kernel__Object__init(var9); /* Direct call array#Array#init on <var9:Array[Object]>*/
}
var_res = var9;
var_ = var_mmodules;
{
var10 = core___core__AbstractArrayRead___core__abstract_collection__Collection__iterator(var_);
}
var_11 = var10;
for(;;) {
{
var12 = ((short int(*)(val* self))((((long)var_11&3)?class_info[((long)var_11&3)]:var_11->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_11); /* is_ok on <var_11:IndexedIterator[MModule]>*/
}
if (var12){
} else {
goto BREAK_label;
}
{
var13 = ((val*(*)(val* self))((((long)var_11&3)?class_info[((long)var_11&3)]:var_11->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_11); /* item on <var_11:IndexedIterator[MModule]>*/
}
var_m = var13;
{
{ /* Inline mmodule_data#MModuleData#defs (self) on <self:MModuleData[Object]> */
var16 = self->attrs[COLOR_nitc__mmodule_data__MModuleData___defs].val; /* _defs on <self:MModuleData[Object]> */
if (unlikely(var16 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _defs");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__mmodule_data, 54);
fatal_exit(1);
}
var14 = var16;
RET_LABEL15:(void)0;
}
}
{
var17 = core___core__HashMap___core__abstract_collection__MapRead___91d_93d(var14, var_m);
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_res, var17); /* Direct call array#Array#add on <var_res:Array[Object]>*/
}
{
((void(*)(val* self))((((long)var_11&3)?class_info[((long)var_11&3)]:var_11->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_11); /* next on <var_11:IndexedIterator[MModule]>*/
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_11&3)?class_info[((long)var_11&3)]:var_11->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_11); /* finish on <var_11:IndexedIterator[MModule]>*/
}
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method mmodule_data#MModuleData#init for (self: MModuleData[Object]) */
void nitc___nitc__MModuleData___core__kernel__Object__init(val* self) {
{
((void(*)(val* self))(self->class->vft[COLOR_nitc___nitc__MModuleData___core__kernel__Object__init]))(self); /* init on <self:MModuleData[Object]>*/
}
RET_LABEL:;
}
/* method mmodule_data#MModuleMultiData#[] for (self: MModuleMultiData[nullable Object], MModule): nullable Array[nullable Object] */
val* nitc___nitc__MModuleMultiData___MModuleData___91d_93d(val* self, val* p0) {
val* var /* : nullable Array[nullable Object] */;
val* var_mmodule /* var mmodule: MModule */;
val* var1 /* : nullable Object */;
val* var_res /* var res: nullable Array[nullable Object] */;
short int var2 /* : Bool */;
short int var3 /* : Bool */;
val* var4 /* : Array[nullable Object] */;
val* var5 /* : HashMap[MModule, Object] */;
val* var7 /* : HashMap[MModule, Object] */;
var_mmodule = p0;
{
var1 = ((val*(*)(val* self, val* p0))(self->class->vft[COLOR_nitc___nitc__MModuleMultiData___MModuleData___91d_93d]))(self, p0); /* [] on <self:MModuleMultiData[nullable Object]>*/
}
var_res = var1;
if (var_res == NULL) {
var2 = 1; /* is null */
} else {
var2 = 0; /* arg is null but recv is not */
}
if (0) {
var3 = core___core__Array___core__kernel__Object___61d_61d(var_res, ((val*)NULL));
var2 = var3;
}
if (var2){
var4 = NEW_core__Array(self->type->resolution_table->types[COLOR_core__Array__nitc__MModuleMultiData___35dE]);
{
core___core__Array___core__kernel__Object__init(var4); /* Direct call array#Array#init on <var4:Array[nullable Object]>*/
}
var_res = var4;
{
{ /* Inline mmodule_data#MModuleData#defs (self) on <self:MModuleMultiData[nullable Object]> */
var7 = self->attrs[COLOR_nitc__mmodule_data__MModuleData___defs].val; /* _defs on <self:MModuleMultiData[nullable Object]> */
if (unlikely(var7 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _defs");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__mmodule_data, 54);
fatal_exit(1);
}
var5 = var7;
RET_LABEL6:(void)0;
}
}
{
core___core__HashMap___core__abstract_collection__Map___91d_93d_61d(var5, var_mmodule, var_res); /* Direct call hash_collection#HashMap#[]= on <var5:HashMap[MModule, Object](HashMap[MModule, Array[nullable Object]])>*/
}
} else {
}
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method mmodule_data#MModuleMultiData#lookup_joined_values for (self: MModuleMultiData[nullable Object], MModule, MVisibility): Sequence[nullable Object] */
val* nitc___nitc__MModuleMultiData___lookup_joined_values(val* self, val* p0, val* p1) {
val* var /* : Sequence[nullable Object] */;
val* var_mmodule /* var mmodule: MModule */;
val* var_min_visibility /* var min_visibility: MVisibility */;
val* var1 /* : Sequence[MModule] */;
val* var_mmodules /* var mmodules: Sequence[MModule] */;
val* var2 /* : Model */;
val* var4 /* : Model */;
val* var5 /* : POSet[MModule] */;
val* var7 /* : POSet[MModule] */;
val* var8 /* : Array[nullable Object] */;
val* var9 /* : Array[nullable Object] */;
val* var_res /* var res: Array[nullable Object] */;
val* var_ /* var : Array[MModule] */;
val* var10 /* : IndexedIterator[nullable Object] */;
val* var_11 /* var : IndexedIterator[MModule] */;
short int var12 /* : Bool */;
val* var13 /* : nullable Object */;
val* var_m /* var m: MModule */;
val* var14 /* : HashMap[MModule, Object] */;
val* var16 /* : HashMap[MModule, Object] */;
val* var17 /* : nullable Object */;
var_mmodule = p0;
var_min_visibility = p1;
{
var1 = nitc___nitc__MModuleData___lookup_all_modules(self, var_mmodule, var_min_visibility);
}
var_mmodules = var1;
{
{ /* Inline mmodule_data#MModuleData#model (self) on <self:MModuleMultiData[nullable Object]> */
var4 = self->attrs[COLOR_nitc__mmodule_data__MModuleData___model].val; /* _model on <self:MModuleMultiData[nullable Object]> */
if (unlikely(var4 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _model");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__mmodule_data, 26);
fatal_exit(1);
}
var2 = var4;
RET_LABEL3:(void)0;
}
}
{
{ /* Inline mmodule#Model#mmodule_importation_hierarchy (var2) on <var2:Model> */
var7 = var2->attrs[COLOR_nitc__mmodule__Model___mmodule_importation_hierarchy].val; /* _mmodule_importation_hierarchy on <var2:Model> */
if (unlikely(var7 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule_importation_hierarchy");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__mmodule, 33);
fatal_exit(1);
}
var5 = var7;
RET_LABEL6:(void)0;
}
}
{
var8 = poset___poset__POSet___linearize(var5, var_mmodules);
}
var_mmodules = var8;
var9 = NEW_core__Array(self->type->resolution_table->types[COLOR_core__Array__nitc__MModuleMultiData___35dE]);
{
core___core__Array___core__kernel__Object__init(var9); /* Direct call array#Array#init on <var9:Array[nullable Object]>*/
}
var_res = var9;
var_ = var_mmodules;
{
var10 = core___core__AbstractArrayRead___core__abstract_collection__Collection__iterator(var_);
}
var_11 = var10;
for(;;) {
{
var12 = ((short int(*)(val* self))((((long)var_11&3)?class_info[((long)var_11&3)]:var_11->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_11); /* is_ok on <var_11:IndexedIterator[MModule]>*/
}
if (var12){
} else {
goto BREAK_label;
}
{
var13 = ((val*(*)(val* self))((((long)var_11&3)?class_info[((long)var_11&3)]:var_11->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_11); /* item on <var_11:IndexedIterator[MModule]>*/
}
var_m = var13;
{
{ /* Inline mmodule_data#MModuleData#defs (self) on <self:MModuleMultiData[nullable Object]> */
var16 = self->attrs[COLOR_nitc__mmodule_data__MModuleData___defs].val; /* _defs on <self:MModuleMultiData[nullable Object]> */
if (unlikely(var16 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _defs");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__mmodule_data, 54);
fatal_exit(1);
}
var14 = var16;
RET_LABEL15:(void)0;
}
}
{
var17 = core___core__HashMap___core__abstract_collection__MapRead___91d_93d(var14, var_m);
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add_all(var_res, var17); /* Direct call array#Array#add_all on <var_res:Array[nullable Object]>*/
}
{
((void(*)(val* self))((((long)var_11&3)?class_info[((long)var_11&3)]:var_11->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_11); /* next on <var_11:IndexedIterator[MModule]>*/
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_11&3)?class_info[((long)var_11&3)]:var_11->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_11); /* finish on <var_11:IndexedIterator[MModule]>*/
}
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
