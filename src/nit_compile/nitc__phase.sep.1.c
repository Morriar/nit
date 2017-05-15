#include "nitc__phase.sep.0.h"
/* method phase#ToolContext#phases for (self: ToolContext): POSet[Phase] */
val* nitc__phase___ToolContext___phases(val* self) {
val* var /* : POSet[Phase] */;
val* var1 /* : POSet[Phase] */;
var1 = self->attrs[COLOR_nitc__phase__ToolContext___phases].val; /* _phases on <self:ToolContext> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _phases");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__phase, 23);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method phase#ToolContext#opt_disable_phase for (self: ToolContext): OptionArray */
val* nitc__phase___ToolContext___opt_disable_phase(val* self) {
val* var /* : OptionArray */;
val* var1 /* : OptionArray */;
var1 = self->attrs[COLOR_nitc__phase__ToolContext___opt_disable_phase].val; /* _opt_disable_phase on <self:ToolContext> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_disable_phase");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__phase, 30);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method phase#ToolContext#opt_sloppy for (self: ToolContext): OptionBool */
val* nitc__phase___ToolContext___opt_sloppy(val* self) {
val* var /* : OptionBool */;
val* var1 /* : OptionBool */;
var1 = self->attrs[COLOR_nitc__phase__ToolContext___opt_sloppy].val; /* _opt_sloppy on <self:ToolContext> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_sloppy");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__phase, 33);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method phase#ToolContext#init for (self: ToolContext) */
void nitc__phase___ToolContext___core__kernel__Object__init(val* self) {
val* var /* : OptionContext */;
val* var2 /* : OptionContext */;
val* var3 /* : OptionArray */;
val* var5 /* : OptionArray */;
val* var6 /* : OptionBool */;
val* var8 /* : OptionBool */;
val* var9 /* : Array[Option] */;
val* var10 /* : NativeArray[Option] */;
{
((void(*)(val* self))(self->class->vft[COLOR_nitc__phase___ToolContext___core__kernel__Object__init]))(self); /* init on <self:ToolContext>*/
}
{
{ /* Inline toolcontext#ToolContext#option_context (self) on <self:ToolContext> */
var2 = self->attrs[COLOR_nitc__toolcontext__ToolContext___option_context].val; /* _option_context on <self:ToolContext> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _option_context");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__toolcontext, 357);
fatal_exit(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
{ /* Inline phase#ToolContext#opt_disable_phase (self) on <self:ToolContext> */
var5 = self->attrs[COLOR_nitc__phase__ToolContext___opt_disable_phase].val; /* _opt_disable_phase on <self:ToolContext> */
if (unlikely(var5 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_disable_phase");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__phase, 30);
fatal_exit(1);
}
var3 = var5;
RET_LABEL4:(void)0;
}
}
{
{ /* Inline phase#ToolContext#opt_sloppy (self) on <self:ToolContext> */
var8 = self->attrs[COLOR_nitc__phase__ToolContext___opt_sloppy].val; /* _opt_sloppy on <self:ToolContext> */
if (unlikely(var8 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_sloppy");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__phase, 33);
fatal_exit(1);
}
var6 = var8;
RET_LABEL7:(void)0;
}
}
var9 = NEW_core__Array(&type_core__Array__opts__Option);
{ /* var9 = array_instance Array[Option] */
var10 = NEW_core__NativeArray(2l, &type_core__NativeArray__opts__Option);
((struct instance_core__NativeArray*)var10)->values[0] = (val*) var3;
((struct instance_core__NativeArray*)var10)->values[1] = (val*) var6;
{
((void(*)(val* self, val* p0, long p1))(var9->class->vft[COLOR_core__array__Array__with_native]))(var9, var10, 2l); /* with_native on <var9:Array[Option]>*/
}
}
{
opts___opts__OptionContext___add_option(var, var9); /* Direct call opts#OptionContext#add_option on <var:OptionContext>*/
}
RET_LABEL:;
}
/* method phase#ToolContext#process_options for (self: ToolContext, Sequence[String]) */
void nitc__phase___ToolContext___process_options(val* self, val* p0) {
val* var_args /* var args: Sequence[String] */;
val* var /* : OptionArray */;
val* var2 /* : OptionArray */;
val* var3 /* : nullable Object */;
val* var5 /* : nullable Object */;
val* var_ /* var : Array[String] */;
val* var6 /* : IndexedIterator[nullable Object] */;
val* var_7 /* var : IndexedIterator[String] */;
short int var8 /* : Bool */;
val* var9 /* : nullable Object */;
val* var_v /* var v: String */;
static val* varonce;
val* var10 /* : String */;
char* var11 /* : CString */;
val* var12 /* : String */;
short int var13 /* : Bool */;
val* var14 /* : Sequence[Phase] */;
val* var_15 /* var : Sequence[Phase] */;
val* var16 /* : Iterator[nullable Object] */;
val* var_17 /* var : IndexedIterator[Phase] */;
short int var18 /* : Bool */;
val* var20 /* : nullable Object */;
val* var_p /* var p: Phase */;
val* var21 /* : POSetElement[Phase] */;
val* var23 /* : POSetElement[Phase] */;
val* var24 /* : Collection[nullable Object] */;
val* var_deps /* var deps: Collection[Phase] */;
short int var25 /* : Bool */;
val* var26 /* : Sys */;
val* var27 /* : Sys */;
val* var29 /* : NativeArray[String] */;
static val* varonce28;
static val* varonce30;
val* var31 /* : String */;
char* var32 /* : CString */;
val* var33 /* : String */;
static val* varonce34;
val* var35 /* : String */;
char* var36 /* : CString */;
val* var37 /* : String */;
val* var38 /* : String */;
static val* varonce39;
val* var40 /* : String */;
char* var41 /* : CString */;
val* var42 /* : String */;
val* var43 /* : String */;
val* var44 /* : String */;
val* var45 /* : Sys */;
short int var_found /* var found: Bool */;
val* var47 /* : POSet[Phase] */;
val* var49 /* : POSet[Phase] */;
val* var_50 /* var : POSet[Phase] */;
val* var51 /* : Iterator[nullable Object] */;
val* var_52 /* var : Iterator[Phase] */;
short int var53 /* : Bool */;
val* var55 /* : nullable Object */;
val* var_p56 /* var p: Phase */;
val* var57 /* : String */;
short int var58 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var60 /* : Bool */;
short int var61 /* : Bool */;
short int var64 /* : Bool */;
val* var66 /* : NativeArray[String] */;
static val* varonce65;
static val* varonce67;
val* var68 /* : String */;
char* var69 /* : CString */;
val* var70 /* : String */;
static val* varonce71;
val* var72 /* : String */;
char* var73 /* : CString */;
val* var74 /* : String */;
val* var75 /* : String */;
val* var76 /* : OptionBool */;
val* var78 /* : OptionBool */;
val* var79 /* : nullable Object */;
val* var81 /* : nullable Object */;
short int var82 /* : Bool */;
var_args = p0;
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nitc__phase___ToolContext___process_options]))(self, p0); /* process_options on <self:ToolContext>*/
}
{
{ /* Inline phase#ToolContext#opt_disable_phase (self) on <self:ToolContext> */
var2 = self->attrs[COLOR_nitc__phase__ToolContext___opt_disable_phase].val; /* _opt_disable_phase on <self:ToolContext> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_disable_phase");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__phase, 30);
fatal_exit(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
{ /* Inline opts#Option#value (var) on <var:OptionArray> */
var5 = var->attrs[COLOR_opts__Option___value].val; /* _value on <var:OptionArray> */
var3 = var5;
RET_LABEL4:(void)0;
}
}
var_ = var3;
{
var6 = core___core__AbstractArrayRead___core__abstract_collection__Collection__iterator(var_);
}
var_7 = var6;
for(;;) {
{
var8 = ((short int(*)(val* self))((((long)var_7&3)?class_info[((long)var_7&3)]:var_7->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_7); /* is_ok on <var_7:IndexedIterator[String]>*/
}
if (var8){
} else {
goto BREAK_label;
}
{
var9 = ((val*(*)(val* self))((((long)var_7&3)?class_info[((long)var_7&3)]:var_7->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_7); /* item on <var_7:IndexedIterator[String]>*/
}
var_v = var9;
if (likely(varonce!=NULL)) {
var10 = varonce;
} else {
var11 = "list";
var12 = core__abstract_text___CString___to_s_full(var11, 4l, 4l);
var10 = var12;
varonce = var10;
}
{
var13 = ((short int(*)(val* self, val* p0))(var_v->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_v, var10); /* == on <var_v:String>*/
}
if (var13){
{
var14 = nitc__phase___ToolContext___phases_list(self);
}
var_15 = var14;
{
var16 = ((val*(*)(val* self))((((long)var_15&3)?class_info[((long)var_15&3)]:var_15->class)->vft[COLOR_core__abstract_collection__Collection__iterator]))(var_15); /* iterator on <var_15:Sequence[Phase]>*/
}
var_17 = var16;
for(;;) {
{
var18 = ((short int(*)(val* self))((((long)var_17&3)?class_info[((long)var_17&3)]:var_17->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_17); /* is_ok on <var_17:IndexedIterator[Phase]>*/
}
if (var18){
} else {
goto BREAK_label19;
}
{
var20 = ((val*(*)(val* self))((((long)var_17&3)?class_info[((long)var_17&3)]:var_17->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_17); /* item on <var_17:IndexedIterator[Phase]>*/
}
var_p = var20;
{
{ /* Inline phase#Phase#in_hierarchy (var_p) on <var_p:Phase> */
var23 = var_p->attrs[COLOR_nitc__phase__Phase___in_hierarchy].val; /* _in_hierarchy on <var_p:Phase> */
if (unlikely(var23 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _in_hierarchy");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__phase, 212);
fatal_exit(1);
}
var21 = var23;
RET_LABEL22:(void)0;
}
}
{
var24 = poset___poset__POSetElement___direct_greaters(var21);
}
var_deps = var24;
{
var25 = ((short int(*)(val* self))((((long)var_deps&3)?class_info[((long)var_deps&3)]:var_deps->class)->vft[COLOR_core__abstract_collection__Collection__is_empty]))(var_deps); /* is_empty on <var_deps:Collection[Phase]>*/
}
if (var25){
var26 = glob_sys;
{
core__file___Sys___print(var26, var_p); /* Direct call file#Sys#print on <var26:Sys>*/
}
} else {
var27 = glob_sys;
if (unlikely(varonce28==NULL)) {
var29 = NEW_core__NativeArray(4l, &type_core__NativeArray__core__String);
if (likely(varonce30!=NULL)) {
var31 = varonce30;
} else {
var32 = " (dep: ";
var33 = core__abstract_text___CString___to_s_full(var32, 7l, 7l);
var31 = var33;
varonce30 = var31;
}
((struct instance_core__NativeArray*)var29)->values[1]=var31;
if (likely(varonce34!=NULL)) {
var35 = varonce34;
} else {
var36 = ")";
var37 = core__abstract_text___CString___to_s_full(var36, 1l, 1l);
var35 = var37;
varonce34 = var35;
}
((struct instance_core__NativeArray*)var29)->values[3]=var35;
} else {
var29 = varonce28;
varonce28 = NULL;
}
{
var38 = ((val*(*)(val* self))(var_p->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_p); /* to_s on <var_p:Phase>*/
}
((struct instance_core__NativeArray*)var29)->values[0]=var38;
if (likely(varonce39!=NULL)) {
var40 = varonce39;
} else {
var41 = ", ";
var42 = core__abstract_text___CString___to_s_full(var41, 2l, 2l);
var40 = var42;
varonce39 = var40;
}
{
var43 = core__abstract_text___Collection___join(var_deps, var40, ((val*)NULL));
}
((struct instance_core__NativeArray*)var29)->values[2]=var43;
{
var44 = ((val*(*)(val* self))(var29->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var29); /* native_to_s on <var29:NativeArray[String]>*/
}
varonce28 = var29;
{
core__file___Sys___print(var27, var44); /* Direct call file#Sys#print on <var27:Sys>*/
}
}
{
((void(*)(val* self))((((long)var_17&3)?class_info[((long)var_17&3)]:var_17->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_17); /* next on <var_17:IndexedIterator[Phase]>*/
}
}
BREAK_label19: (void)0;
{
((void(*)(val* self))((((long)var_17&3)?class_info[((long)var_17&3)]:var_17->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_17); /* finish on <var_17:IndexedIterator[Phase]>*/
}
var45 = glob_sys;
{
{ /* Inline kernel#Sys#exit (var45,0l) on <var45:Sys> */
exit(0l);
RET_LABEL46:(void)0;
}
}
} else {
}
var_found = 0;
{
{ /* Inline phase#ToolContext#phases (self) on <self:ToolContext> */
var49 = self->attrs[COLOR_nitc__phase__ToolContext___phases].val; /* _phases on <self:ToolContext> */
if (unlikely(var49 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _phases");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__phase, 23);
fatal_exit(1);
}
var47 = var49;
RET_LABEL48:(void)0;
}
}
var_50 = var47;
{
var51 = poset___poset__POSet___core__abstract_collection__Collection__iterator(var_50);
}
var_52 = var51;
for(;;) {
{
var53 = ((short int(*)(val* self))((((long)var_52&3)?class_info[((long)var_52&3)]:var_52->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_52); /* is_ok on <var_52:Iterator[Phase]>*/
}
if (var53){
} else {
goto BREAK_label54;
}
{
var55 = ((val*(*)(val* self))((((long)var_52&3)?class_info[((long)var_52&3)]:var_52->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_52); /* item on <var_52:Iterator[Phase]>*/
}
var_p56 = var55;
{
var57 = nitc___nitc__Phase___core__abstract_text__Object__to_s(var_p56);
}
{
{ /* Inline kernel#Object#!= (var_v,var57) on <var_v:String> */
var_other = var57;
{
var60 = ((short int(*)(val* self, val* p0))(var_v->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_v, var_other); /* == on <var_v:String>*/
}
var61 = !var60;
var58 = var61;
goto RET_LABEL59;
RET_LABEL59:(void)0;
}
}
if (var58){
goto BREAK_label62;
} else {
}
var_found = 1;
{
{ /* Inline phase#Phase#disabled= (var_p56,1) on <var_p56:Phase> */
var_p56->attrs[COLOR_nitc__phase__Phase___disabled].s = 1; /* _disabled on <var_p56:Phase> */
RET_LABEL63:(void)0;
}
}
BREAK_label62: (void)0;
{
((void(*)(val* self))((((long)var_52&3)?class_info[((long)var_52&3)]:var_52->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_52); /* next on <var_52:Iterator[Phase]>*/
}
}
BREAK_label54: (void)0;
{
((void(*)(val* self))((((long)var_52&3)?class_info[((long)var_52&3)]:var_52->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_52); /* finish on <var_52:Iterator[Phase]>*/
}
var64 = !var_found;
if (var64){
if (unlikely(varonce65==NULL)) {
var66 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce67!=NULL)) {
var68 = varonce67;
} else {
var69 = "Error: no phase named `";
var70 = core__abstract_text___CString___to_s_full(var69, 23l, 23l);
var68 = var70;
varonce67 = var68;
}
((struct instance_core__NativeArray*)var66)->values[0]=var68;
if (likely(varonce71!=NULL)) {
var72 = varonce71;
} else {
var73 = "`. Use `list` to list all phases.";
var74 = core__abstract_text___CString___to_s_full(var73, 33l, 33l);
var72 = var74;
varonce71 = var72;
}
((struct instance_core__NativeArray*)var66)->values[2]=var72;
} else {
var66 = varonce65;
varonce65 = NULL;
}
((struct instance_core__NativeArray*)var66)->values[1]=var_v;
{
var75 = ((val*(*)(val* self))(var66->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var66); /* native_to_s on <var66:NativeArray[String]>*/
}
varonce65 = var66;
{
nitc___nitc__ToolContext___fatal_error(self, ((val*)NULL), var75); /* Direct call toolcontext#ToolContext#fatal_error on <self:ToolContext>*/
}
} else {
}
{
((void(*)(val* self))((((long)var_7&3)?class_info[((long)var_7&3)]:var_7->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_7); /* next on <var_7:IndexedIterator[String]>*/
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_7&3)?class_info[((long)var_7&3)]:var_7->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_7); /* finish on <var_7:IndexedIterator[String]>*/
}
{
{ /* Inline phase#ToolContext#opt_sloppy (self) on <self:ToolContext> */
var78 = self->attrs[COLOR_nitc__phase__ToolContext___opt_sloppy].val; /* _opt_sloppy on <self:ToolContext> */
if (unlikely(var78 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_sloppy");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__phase, 33);
fatal_exit(1);
}
var76 = var78;
RET_LABEL77:(void)0;
}
}
{
{ /* Inline opts#Option#value (var76) on <var76:OptionBool> */
var81 = var76->attrs[COLOR_opts__Option___value].val; /* _value on <var76:OptionBool> */
var79 = var81;
RET_LABEL80:(void)0;
}
}
var82 = (short int)((long)(var79)>>2);
if (var82){
{
{ /* Inline phase#ToolContext#semantize_is_lazy= (self,1) on <self:ToolContext> */
self->attrs[COLOR_nitc__phase__ToolContext___semantize_is_lazy].s = 1; /* _semantize_is_lazy on <self:ToolContext> */
RET_LABEL83:(void)0;
}
}
} else {
}
RET_LABEL:;
}
/* method phase#ToolContext#phases_list for (self: ToolContext): Sequence[Phase] */
val* nitc__phase___ToolContext___phases_list(val* self) {
val* var /* : Sequence[Phase] */;
short int var1 /* : Bool */;
val* var2 /* : Sequence[Phase] */;
val* var3 /* : Sequence[Phase] */;
val* var5 /* : POSet[Phase] */;
val* var7 /* : POSet[Phase] */;
val* var8 /* : Array[nullable Object] */;
val* var_phases /* var phases: Array[Phase] */;
val* var9 /* : POSet[Phase] */;
val* var11 /* : POSet[Phase] */;
var1 = self->attrs[COLOR_nitc__phase__ToolContext___phases_list].val != NULL; /* _phases_list on <self:ToolContext> */
if(likely(var1)) {
var2 = self->attrs[COLOR_nitc__phase__ToolContext___phases_list].val; /* _phases_list on <self:ToolContext> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _phases_list");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__phase, 72);
fatal_exit(1);
}
} else {
{
{
{ /* Inline phase#ToolContext#phases (self) on <self:ToolContext> */
var7 = self->attrs[COLOR_nitc__phase__ToolContext___phases].val; /* _phases on <self:ToolContext> */
if (unlikely(var7 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _phases");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__phase, 23);
fatal_exit(1);
}
var5 = var7;
RET_LABEL6:(void)0;
}
}
{
var8 = core__array___Collection___to_a(var5);
}
var_phases = var8;
{
{ /* Inline phase#ToolContext#phases (self) on <self:ToolContext> */
var11 = self->attrs[COLOR_nitc__phase__ToolContext___phases].val; /* _phases on <self:ToolContext> */
if (unlikely(var11 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _phases");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__phase, 23);
fatal_exit(1);
}
var9 = var11;
RET_LABEL10:(void)0;
}
}
{
core___core__Comparator___sort(var9, var_phases); /* Direct call sorter#Comparator#sort on <var9:POSet[Phase]>*/
}
var3 = var_phases;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
self->attrs[COLOR_nitc__phase__ToolContext___phases_list].val = var3; /* _phases_list on <self:ToolContext> */
var2 = var3;
}
var = var2;
RET_LABEL:;
return var;
}
/* method phase#ToolContext#semantize_is_lazy for (self: ToolContext): Bool */
short int nitc__phase___ToolContext___semantize_is_lazy(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = self->attrs[COLOR_nitc__phase__ToolContext___semantize_is_lazy].s; /* _semantize_is_lazy on <self:ToolContext> */
var = var1;
RET_LABEL:;
return var;
}
/* method phase#ToolContext#semantize_is_lazy= for (self: ToolContext, Bool) */
void nitc__phase___ToolContext___semantize_is_lazy_61d(val* self, short int p0) {
self->attrs[COLOR_nitc__phase__ToolContext___semantize_is_lazy].s = p0; /* _semantize_is_lazy on <self:ToolContext> */
RET_LABEL:;
}
/* method phase#ToolContext#phased_modules for (self: ToolContext): HashSet[AModule] */
val* nitc__phase___ToolContext___phased_modules(val* self) {
val* var /* : HashSet[AModule] */;
val* var1 /* : HashSet[AModule] */;
var1 = self->attrs[COLOR_nitc__phase__ToolContext___phased_modules].val; /* _phased_modules on <self:ToolContext> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _phased_modules");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__phase, 86);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method phase#ToolContext#todo_nmodules= for (self: ToolContext, Sequence[AModule]) */
void nitc__phase___ToolContext___todo_nmodules_61d(val* self, val* p0) {
self->attrs[COLOR_nitc__phase__ToolContext___todo_nmodules].val = p0; /* _todo_nmodules on <self:ToolContext> */
RET_LABEL:;
}
/* method phase#ToolContext#run_phases for (self: ToolContext, Collection[AModule]) */
void nitc__phase___ToolContext___run_phases(val* self, val* p0) {
val* var_nmodules /* var nmodules: Collection[AModule] */;
val* var /* : Sys */;
long var1 /* : Int */;
long var3 /* : Int */;
long var_time0 /* var time0: Int */;
static val* varonce;
val* var4 /* : String */;
char* var5 /* : CString */;
val* var6 /* : String */;
val* var7 /* : Sequence[Phase] */;
val* var_phases /* var phases: Sequence[Phase] */;
val* var_ /* var : Sequence[Phase] */;
val* var8 /* : Iterator[nullable Object] */;
val* var_9 /* var : IndexedIterator[Phase] */;
short int var10 /* : Bool */;
val* var11 /* : nullable Object */;
val* var_phase /* var phase: Phase */;
val* var13 /* : NativeArray[String] */;
static val* varonce12;
static val* varonce14;
val* var15 /* : String */;
char* var16 /* : CString */;
val* var17 /* : String */;
val* var18 /* : String */;
val* var19 /* : String */;
val* var20 /* : Array[nullable Object] */;
val* var_todo_nmodules /* var todo_nmodules: Array[AModule] */;
short int var22 /* : Bool */;
short int var23 /* : Bool */;
val* var24 /* : nullable Object */;
val* var_nmodule /* var nmodule: AModule */;
val* var25 /* : HashSet[AModule] */;
val* var27 /* : HashSet[AModule] */;
short int var28 /* : Bool */;
val* var30 /* : HashSet[AModule] */;
val* var32 /* : HashSet[AModule] */;
val* var34 /* : NativeArray[String] */;
static val* varonce33;
static val* varonce35;
val* var36 /* : String */;
char* var37 /* : CString */;
val* var38 /* : String */;
val* var39 /* : Location */;
val* var41 /* : Location */;
val* var42 /* : nullable SourceFile */;
val* var44 /* : nullable SourceFile */;
val* var45 /* : String */;
val* var47 /* : String */;
val* var48 /* : String */;
val* var49 /* : AnnotationPhaseVisitor */;
val* var_vannot /* var vannot: AnnotationPhaseVisitor */;
val* var_51 /* var : Sequence[Phase] */;
val* var52 /* : Iterator[nullable Object] */;
val* var_53 /* var : IndexedIterator[Phase] */;
short int var54 /* : Bool */;
val* var56 /* : nullable Object */;
val* var_phase57 /* var phase: Phase */;
short int var58 /* : Bool */;
short int var60 /* : Bool */;
val* var62 /* : ToolContext */;
val* var64 /* : ToolContext */;
short int var65 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var67 /* : Bool */;
short int var69 /* : Bool */;
long var70 /* : Int */;
long var72 /* : Int */;
long var_errcount /* var errcount: Int */;
long var73 /* : Int */;
long var75 /* : Int */;
short int var76 /* : Bool */;
short int var78 /* : Bool */;
short int var79 /* : Bool */;
short int var80 /* : Bool */;
long var81 /* : Int */;
long var83 /* : Int */;
val* var84 /* : ANodes[AClassdef] */;
val* var86 /* : ANodes[AClassdef] */;
val* var_87 /* var : ANodes[AClassdef] */;
val* var88 /* : Iterator[ANode] */;
val* var_89 /* var : Iterator[AClassdef] */;
short int var90 /* : Bool */;
val* var92 /* : nullable Object */;
val* var_nclassdef /* var nclassdef: AClassdef */;
val* var93 /* : ToolContext */;
val* var95 /* : ToolContext */;
short int var96 /* : Bool */;
short int var98 /* : Bool */;
short int var100 /* : Bool */;
short int var101 /* : Bool */;
short int var103 /* : Bool */;
short int var104 /* : Bool */;
val* var105 /* : ANodes[APropdef] */;
val* var107 /* : ANodes[APropdef] */;
val* var_108 /* var : ANodes[APropdef] */;
val* var109 /* : Iterator[ANode] */;
val* var_110 /* var : Iterator[APropdef] */;
short int var111 /* : Bool */;
val* var113 /* : nullable Object */;
val* var_npropdef /* var npropdef: APropdef */;
val* var114 /* : ToolContext */;
val* var116 /* : ToolContext */;
short int var117 /* : Bool */;
short int var119 /* : Bool */;
short int var121 /* : Bool */;
long var122 /* : Int */;
long var124 /* : Int */;
short int var125 /* : Bool */;
short int var127 /* : Bool */;
short int var128 /* : Bool */;
short int var129 /* : Bool */;
val* var130 /* : Array[AAnnotation] */;
val* var132 /* : Array[AAnnotation] */;
val* var_133 /* var : Array[AAnnotation] */;
val* var134 /* : IndexedIterator[nullable Object] */;
val* var_135 /* var : IndexedIterator[AAnnotation] */;
short int var136 /* : Bool */;
val* var138 /* : nullable Object */;
val* var_na /* var na: AAnnotation */;
val* var139 /* : nullable ANode */;
val* var141 /* : nullable ANode */;
val* var_p /* var p: nullable ANode */;
short int var142 /* : Bool */;
int cltype;
int idtype;
val* var143 /* : nullable ANode */;
val* var145 /* : nullable ANode */;
short int var146 /* : Bool */;
short int var147 /* : Bool */;
val* var_other149 /* var other: nullable Object */;
short int var150 /* : Bool */;
short int var151 /* : Bool */;
long var152 /* : Int */;
long var154 /* : Int */;
short int var155 /* : Bool */;
short int var157 /* : Bool */;
short int var158 /* : Bool */;
short int var159 /* : Bool */;
short int var160 /* : Bool */;
val* var162 /* : Sys */;
long var163 /* : Int */;
long var165 /* : Int */;
long var_time1 /* var time1: Int */;
val* var167 /* : NativeArray[String] */;
static val* varonce166;
static val* varonce168;
val* var169 /* : String */;
char* var170 /* : CString */;
val* var171 /* : String */;
static val* varonce172;
val* var173 /* : String */;
char* var174 /* : CString */;
val* var175 /* : String */;
long var176 /* : Int */;
short int var178 /* : Bool */;
int cltype179;
int idtype180;
const char* var_class_name;
long var181 /* : Int */;
val* var182 /* : String */;
val* var183 /* : String */;
short int var184 /* : Bool */;
var_nmodules = p0;
var = glob_sys;
{
{ /* Inline time#Sys#get_time (var) on <var:Sys> */
struct nitni_instance* var_for_c_0;
var_for_c_0 = nit_alloc(sizeof(struct nitni_instance));
var_for_c_0->value = var;
var3 = time___Sys_get_time___impl(var_for_c_0);
var1 = var3;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
}
var_time0 = var1;
if (likely(varonce!=NULL)) {
var4 = varonce;
} else {
var5 = "*** SEMANTIC ANALYSIS ***";
var6 = core__abstract_text___CString___to_s_full(var5, 25l, 25l);
var4 = var6;
varonce = var4;
}
{
nitc___nitc__ToolContext___info(self, var4, 1l); /* Direct call toolcontext#ToolContext#info on <self:ToolContext>*/
}
{
var7 = nitc__phase___ToolContext___phases_list(self);
}
var_phases = var7;
var_ = var_phases;
{
var8 = ((val*(*)(val* self))((((long)var_&3)?class_info[((long)var_&3)]:var_->class)->vft[COLOR_core__abstract_collection__Collection__iterator]))(var_); /* iterator on <var_:Sequence[Phase]>*/
}
var_9 = var8;
for(;;) {
{
var10 = ((short int(*)(val* self))((((long)var_9&3)?class_info[((long)var_9&3)]:var_9->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_9); /* is_ok on <var_9:IndexedIterator[Phase]>*/
}
if (var10){
} else {
goto BREAK_label;
}
{
var11 = ((val*(*)(val* self))((((long)var_9&3)?class_info[((long)var_9&3)]:var_9->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_9); /* item on <var_9:IndexedIterator[Phase]>*/
}
var_phase = var11;
if (unlikely(varonce12==NULL)) {
var13 = NEW_core__NativeArray(2l, &type_core__NativeArray__core__String);
if (likely(varonce14!=NULL)) {
var15 = varonce14;
} else {
var16 = " registered phases: ";
var17 = core__abstract_text___CString___to_s_full(var16, 20l, 20l);
var15 = var17;
varonce14 = var15;
}
((struct instance_core__NativeArray*)var13)->values[0]=var15;
} else {
var13 = varonce12;
varonce12 = NULL;
}
{
var18 = ((val*(*)(val* self))(var_phase->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_phase); /* to_s on <var_phase:Phase>*/
}
((struct instance_core__NativeArray*)var13)->values[1]=var18;
{
var19 = ((val*(*)(val* self))(var13->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var13); /* native_to_s on <var13:NativeArray[String]>*/
}
varonce12 = var13;
{
nitc___nitc__ToolContext___info(self, var19, 2l); /* Direct call toolcontext#ToolContext#info on <self:ToolContext>*/
}
{
((void(*)(val* self))((((long)var_9&3)?class_info[((long)var_9&3)]:var_9->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_9); /* next on <var_9:IndexedIterator[Phase]>*/
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_9&3)?class_info[((long)var_9&3)]:var_9->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_9); /* finish on <var_9:IndexedIterator[Phase]>*/
}
{
var20 = ((val*(*)(val* self))((((long)var_nmodules&3)?class_info[((long)var_nmodules&3)]:var_nmodules->class)->vft[COLOR_core__array__Collection__to_a]))(var_nmodules); /* to_a on <var_nmodules:Collection[AModule]>*/
}
var_todo_nmodules = var20;
{
{ /* Inline phase#ToolContext#todo_nmodules= (self,var_todo_nmodules) on <self:ToolContext> */
self->attrs[COLOR_nitc__phase__ToolContext___todo_nmodules].val = var_todo_nmodules; /* _todo_nmodules on <self:ToolContext> */
RET_LABEL21:(void)0;
}
}
for(;;) {
{
var22 = core___core__AbstractArrayRead___core__abstract_collection__Collection__is_empty(var_todo_nmodules);
}
var23 = !var22;
if (var23){
{
var24 = core___core__AbstractArray___core__abstract_collection__Sequence__shift(var_todo_nmodules);
}
var_nmodule = var24;
{
{ /* Inline phase#ToolContext#phased_modules (self) on <self:ToolContext> */
var27 = self->attrs[COLOR_nitc__phase__ToolContext___phased_modules].val; /* _phased_modules on <self:ToolContext> */
if (unlikely(var27 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _phased_modules");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__phase, 86);
fatal_exit(1);
}
var25 = var27;
RET_LABEL26:(void)0;
}
}
{
var28 = core___core__HashSet___core__abstract_collection__Collection__has(var25, var_nmodule);
}
if (var28){
goto BREAK_label29;
} else {
}
{
{ /* Inline phase#ToolContext#phased_modules (self) on <self:ToolContext> */
var32 = self->attrs[COLOR_nitc__phase__ToolContext___phased_modules].val; /* _phased_modules on <self:ToolContext> */
if (unlikely(var32 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _phased_modules");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__phase, 86);
fatal_exit(1);
}
var30 = var32;
RET_LABEL31:(void)0;
}
}
{
core___core__HashSet___core__abstract_collection__SimpleCollection__add(var30, var_nmodule); /* Direct call hash_collection#HashSet#add on <var30:HashSet[AModule]>*/
}
if (unlikely(varonce33==NULL)) {
var34 = NEW_core__NativeArray(2l, &type_core__NativeArray__core__String);
if (likely(varonce35!=NULL)) {
var36 = varonce35;
} else {
var37 = "Semantic analysis module ";
var38 = core__abstract_text___CString___to_s_full(var37, 25l, 25l);
var36 = var38;
varonce35 = var36;
}
((struct instance_core__NativeArray*)var34)->values[0]=var36;
} else {
var34 = varonce33;
varonce33 = NULL;
}
{
{ /* Inline parser_nodes#ANode#location (var_nmodule) on <var_nmodule:AModule> */
var41 = var_nmodule->attrs[COLOR_nitc__parser_nodes__ANode___location].val; /* _location on <var_nmodule:AModule> */
if (unlikely(var41 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _location");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 25);
fatal_exit(1);
}
var39 = var41;
RET_LABEL40:(void)0;
}
}
{
{ /* Inline location#Location#file (var39) on <var39:Location> */
var44 = var39->attrs[COLOR_nitc__location__Location___file].val; /* _file on <var39:Location> */
var42 = var44;
RET_LABEL43:(void)0;
}
}
if (var42 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__phase, 115);
fatal_exit(1);
} else {
{ /* Inline location#SourceFile#filename (var42) on <var42:nullable SourceFile> */
if (unlikely(var42 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__location, 22);
fatal_exit(1);
}
var47 = var42->attrs[COLOR_nitc__location__SourceFile___filename].val; /* _filename on <var42:nullable SourceFile> */
if (unlikely(var47 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _filename");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__location, 22);
fatal_exit(1);
}
var45 = var47;
RET_LABEL46:(void)0;
}
}
((struct instance_core__NativeArray*)var34)->values[1]=var45;
{
var48 = ((val*(*)(val* self))(var34->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var34); /* native_to_s on <var34:NativeArray[String]>*/
}
varonce33 = var34;
{
nitc___nitc__ToolContext___info(self, var48, 2l); /* Direct call toolcontext#ToolContext#info on <self:ToolContext>*/
}
var49 = NEW_nitc__phase__AnnotationPhaseVisitor(&type_nitc__phase__AnnotationPhaseVisitor);
{
{ /* Inline kernel#Object#init (var49) on <var49:AnnotationPhaseVisitor> */
RET_LABEL50:(void)0;
}
}
var_vannot = var49;
{
nitc___nitc__Visitor___enter_visit(var_vannot, var_nmodule); /* Direct call parser_nodes#Visitor#enter_visit on <var_vannot:AnnotationPhaseVisitor>*/
}
var_51 = var_phases;
{
var52 = ((val*(*)(val* self))((((long)var_51&3)?class_info[((long)var_51&3)]:var_51->class)->vft[COLOR_core__abstract_collection__Collection__iterator]))(var_51); /* iterator on <var_51:Sequence[Phase]>*/
}
var_53 = var52;
for(;;) {
{
var54 = ((short int(*)(val* self))((((long)var_53&3)?class_info[((long)var_53&3)]:var_53->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_53); /* is_ok on <var_53:IndexedIterator[Phase]>*/
}
if (var54){
} else {
goto BREAK_label55;
}
{
var56 = ((val*(*)(val* self))((((long)var_53&3)?class_info[((long)var_53&3)]:var_53->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_53); /* item on <var_53:IndexedIterator[Phase]>*/
}
var_phase57 = var56;
{
{ /* Inline phase#Phase#disabled (var_phase57) on <var_phase57:Phase> */
var60 = var_phase57->attrs[COLOR_nitc__phase__Phase___disabled].s; /* _disabled on <var_phase57:Phase> */
var58 = var60;
RET_LABEL59:(void)0;
}
}
if (var58){
goto BREAK_label61;
} else {
}
{
{ /* Inline phase#Phase#toolcontext (var_phase57) on <var_phase57:Phase> */
var64 = var_phase57->attrs[COLOR_nitc__phase__Phase___toolcontext].val; /* _toolcontext on <var_phase57:Phase> */
if (unlikely(var64 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__phase, 209);
fatal_exit(1);
}
var62 = var64;
RET_LABEL63:(void)0;
}
}
{
{ /* Inline kernel#Object#== (var62,self) on <var62:ToolContext> */
var_other = self;
{
{ /* Inline kernel#Object#is_same_instance (var62,var_other) on <var62:ToolContext> */
var69 = var62 == var_other;
var67 = var69;
goto RET_LABEL68;
RET_LABEL68:(void)0;
}
}
var65 = var67;
goto RET_LABEL66;
RET_LABEL66:(void)0;
}
}
if (unlikely(!var65)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__phase, 122);
fatal_exit(1);
}
{
{ /* Inline toolcontext#ToolContext#error_count (self) on <self:ToolContext> */
var72 = self->attrs[COLOR_nitc__toolcontext__ToolContext___error_count].l; /* _error_count on <self:ToolContext> */
var70 = var72;
RET_LABEL71:(void)0;
}
}
var_errcount = var70;
{
((void(*)(val* self, val* p0))(var_phase57->class->vft[COLOR_nitc__phase__Phase__process_nmodule]))(var_phase57, var_nmodule); /* process_nmodule on <var_phase57:Phase>*/
}
{
{ /* Inline toolcontext#ToolContext#error_count (self) on <self:ToolContext> */
var75 = self->attrs[COLOR_nitc__toolcontext__ToolContext___error_count].l; /* _error_count on <self:ToolContext> */
var73 = var75;
RET_LABEL74:(void)0;
}
}
{
{ /* Inline kernel#Int#!= (var_errcount,var73) on <var_errcount:Int> */
var78 = var_errcount == var73;
var79 = !var78;
var76 = var79;
goto RET_LABEL77;
RET_LABEL77:(void)0;
}
}
if (var76){
{
var80 = nitc___nitc__ToolContext___check_errors(self);
}
} else {
}
{
{ /* Inline toolcontext#ToolContext#error_count (self) on <self:ToolContext> */
var83 = self->attrs[COLOR_nitc__toolcontext__ToolContext___error_count].l; /* _error_count on <self:ToolContext> */
var81 = var83;
RET_LABEL82:(void)0;
}
}
var_errcount = var81;
{
{ /* Inline parser_nodes#AModule#n_classdefs (var_nmodule) on <var_nmodule:AModule> */
var86 = var_nmodule->attrs[COLOR_nitc__parser_nodes__AModule___n_classdefs].val; /* _n_classdefs on <var_nmodule:AModule> */
if (unlikely(var86 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_classdefs");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 1125);
fatal_exit(1);
}
var84 = var86;
RET_LABEL85:(void)0;
}
}
var_87 = var84;
{
var88 = nitc___nitc__ANodes___core__abstract_collection__Collection__iterator(var_87);
}
var_89 = var88;
for(;;) {
{
var90 = ((short int(*)(val* self))((((long)var_89&3)?class_info[((long)var_89&3)]:var_89->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_89); /* is_ok on <var_89:Iterator[AClassdef]>*/
}
if (var90){
} else {
goto BREAK_label91;
}
{
var92 = ((val*(*)(val* self))((((long)var_89&3)?class_info[((long)var_89&3)]:var_89->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_89); /* item on <var_89:Iterator[AClassdef]>*/
}
var_nclassdef = var92;
{
{ /* Inline phase#Phase#toolcontext (var_phase57) on <var_phase57:Phase> */
var95 = var_phase57->attrs[COLOR_nitc__phase__Phase___toolcontext].val; /* _toolcontext on <var_phase57:Phase> */
if (unlikely(var95 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__phase, 209);
fatal_exit(1);
}
var93 = var95;
RET_LABEL94:(void)0;
}
}
{
{ /* Inline kernel#Object#== (var93,self) on <var93:ToolContext> */
var_other = self;
{
{ /* Inline kernel#Object#is_same_instance (var93,var_other) on <var93:ToolContext> */
var100 = var93 == var_other;
var98 = var100;
goto RET_LABEL99;
RET_LABEL99:(void)0;
}
}
var96 = var98;
goto RET_LABEL97;
RET_LABEL97:(void)0;
}
}
if (unlikely(!var96)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__phase, 130);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(var_phase57->class->vft[COLOR_nitc__phase__Phase__process_nclassdef]))(var_phase57, var_nclassdef); /* process_nclassdef on <var_phase57:Phase>*/
}
{
{ /* Inline phase#ToolContext#semantize_is_lazy (self) on <self:ToolContext> */
var103 = self->attrs[COLOR_nitc__phase__ToolContext___semantize_is_lazy].s; /* _semantize_is_lazy on <self:ToolContext> */
var101 = var103;
RET_LABEL102:(void)0;
}
}
var104 = !var101;
if (var104){
{
{ /* Inline parser_nodes#AClassdef#n_propdefs (var_nclassdef) on <var_nclassdef:AClassdef> */
var107 = var_nclassdef->attrs[COLOR_nitc__parser_nodes__AClassdef___n_propdefs].val; /* _n_propdefs on <var_nclassdef:AClassdef> */
if (unlikely(var107 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_propdefs");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 1218);
fatal_exit(1);
}
var105 = var107;
RET_LABEL106:(void)0;
}
}
var_108 = var105;
{
var109 = nitc___nitc__ANodes___core__abstract_collection__Collection__iterator(var_108);
}
var_110 = var109;
for(;;) {
{
var111 = ((short int(*)(val* self))((((long)var_110&3)?class_info[((long)var_110&3)]:var_110->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_110); /* is_ok on <var_110:Iterator[APropdef]>*/
}
if (var111){
} else {
goto BREAK_label112;
}
{
var113 = ((val*(*)(val* self))((((long)var_110&3)?class_info[((long)var_110&3)]:var_110->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_110); /* item on <var_110:Iterator[APropdef]>*/
}
var_npropdef = var113;
{
{ /* Inline phase#Phase#toolcontext (var_phase57) on <var_phase57:Phase> */
var116 = var_phase57->attrs[COLOR_nitc__phase__Phase___toolcontext].val; /* _toolcontext on <var_phase57:Phase> */
if (unlikely(var116 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__phase, 209);
fatal_exit(1);
}
var114 = var116;
RET_LABEL115:(void)0;
}
}
{
{ /* Inline kernel#Object#== (var114,self) on <var114:ToolContext> */
var_other = self;
{
{ /* Inline kernel#Object#is_same_instance (var114,var_other) on <var114:ToolContext> */
var121 = var114 == var_other;
var119 = var121;
goto RET_LABEL120;
RET_LABEL120:(void)0;
}
}
var117 = var119;
goto RET_LABEL118;
RET_LABEL118:(void)0;
}
}
if (unlikely(!var117)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__phase, 133);
fatal_exit(1);
}
{
nitc__phase___ToolContext___phase_process_npropdef(self, var_phase57, var_npropdef); /* Direct call phase#ToolContext#phase_process_npropdef on <self:ToolContext>*/
}
{
((void(*)(val* self))((((long)var_110&3)?class_info[((long)var_110&3)]:var_110->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_110); /* next on <var_110:Iterator[APropdef]>*/
}
}
BREAK_label112: (void)0;
{
((void(*)(val* self))((((long)var_110&3)?class_info[((long)var_110&3)]:var_110->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_110); /* finish on <var_110:Iterator[APropdef]>*/
}
} else {
}
{
((void(*)(val* self))((((long)var_89&3)?class_info[((long)var_89&3)]:var_89->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_89); /* next on <var_89:Iterator[AClassdef]>*/
}
}
BREAK_label91: (void)0;
{
((void(*)(val* self))((((long)var_89&3)?class_info[((long)var_89&3)]:var_89->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_89); /* finish on <var_89:Iterator[AClassdef]>*/
}
{
{ /* Inline toolcontext#ToolContext#error_count (self) on <self:ToolContext> */
var124 = self->attrs[COLOR_nitc__toolcontext__ToolContext___error_count].l; /* _error_count on <self:ToolContext> */
var122 = var124;
RET_LABEL123:(void)0;
}
}
{
{ /* Inline kernel#Int#!= (var_errcount,var122) on <var_errcount:Int> */
var127 = var_errcount == var122;
var128 = !var127;
var125 = var128;
goto RET_LABEL126;
RET_LABEL126:(void)0;
}
}
if (var125){
{
var129 = nitc___nitc__ToolContext___check_errors(self);
}
} else {
}
{
{ /* Inline phase#AnnotationPhaseVisitor#annotations (var_vannot) on <var_vannot:AnnotationPhaseVisitor> */
var132 = var_vannot->attrs[COLOR_nitc__phase__AnnotationPhaseVisitor___annotations].val; /* _annotations on <var_vannot:AnnotationPhaseVisitor> */
if (unlikely(var132 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _annotations");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__phase, 196);
fatal_exit(1);
}
var130 = var132;
RET_LABEL131:(void)0;
}
}
var_133 = var130;
{
var134 = core___core__AbstractArrayRead___core__abstract_collection__Collection__iterator(var_133);
}
var_135 = var134;
for(;;) {
{
var136 = ((short int(*)(val* self))((((long)var_135&3)?class_info[((long)var_135&3)]:var_135->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_135); /* is_ok on <var_135:IndexedIterator[AAnnotation]>*/
}
if (var136){
} else {
goto BREAK_label137;
}
{
var138 = ((val*(*)(val* self))((((long)var_135&3)?class_info[((long)var_135&3)]:var_135->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_135); /* item on <var_135:IndexedIterator[AAnnotation]>*/
}
var_na = var138;
{
{ /* Inline parser_nodes#ANode#parent (var_na) on <var_na:AAnnotation> */
var141 = var_na->attrs[COLOR_nitc__parser_nodes__ANode___parent].val; /* _parent on <var_na:AAnnotation> */
var139 = var141;
RET_LABEL140:(void)0;
}
}
var_p = var139;
/* <var_p:nullable ANode> isa AAnnotations */
cltype = type_nitc__AAnnotations.color;
idtype = type_nitc__AAnnotations.id;
if(var_p == NULL) {
var142 = 0;
} else {
if(cltype >= var_p->type->table_size) {
var142 = 0;
} else {
var142 = var_p->type->type_table[cltype] == idtype;
}
}
if (var142){
{
{ /* Inline parser_nodes#ANode#parent (var_p) on <var_p:nullable ANode(AAnnotations)> */
var145 = var_p->attrs[COLOR_nitc__parser_nodes__ANode___parent].val; /* _parent on <var_p:nullable ANode(AAnnotations)> */
var143 = var145;
RET_LABEL144:(void)0;
}
}
var_p = var143;
} else {
}
if (var_p == NULL) {
var146 = 0; /* is null */
} else {
var146 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_p,((val*)NULL)) on <var_p:nullable ANode> */
var_other149 = ((val*)NULL);
{
var150 = ((short int(*)(val* self, val* p0))(var_p->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_p, var_other149); /* == on <var_p:nullable ANode(ANode)>*/
}
var151 = !var150;
var147 = var151;
goto RET_LABEL148;
RET_LABEL148:(void)0;
}
var146 = var147;
}
if (unlikely(!var146)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__phase, 143);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0, val* p1))(var_phase57->class->vft[COLOR_nitc__phase__Phase__process_annotated_node]))(var_phase57, var_p, var_na); /* process_annotated_node on <var_phase57:Phase>*/
}
{
((void(*)(val* self))((((long)var_135&3)?class_info[((long)var_135&3)]:var_135->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_135); /* next on <var_135:IndexedIterator[AAnnotation]>*/
}
}
BREAK_label137: (void)0;
{
((void(*)(val* self))((((long)var_135&3)?class_info[((long)var_135&3)]:var_135->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_135); /* finish on <var_135:IndexedIterator[AAnnotation]>*/
}
{
{ /* Inline toolcontext#ToolContext#error_count (self) on <self:ToolContext> */
var154 = self->attrs[COLOR_nitc__toolcontext__ToolContext___error_count].l; /* _error_count on <self:ToolContext> */
var152 = var154;
RET_LABEL153:(void)0;
}
}
{
{ /* Inline kernel#Int#!= (var_errcount,var152) on <var_errcount:Int> */
var157 = var_errcount == var152;
var158 = !var157;
var155 = var158;
goto RET_LABEL156;
RET_LABEL156:(void)0;
}
}
if (var155){
{
var159 = nitc___nitc__ToolContext___check_errors(self);
}
} else {
}
BREAK_label61: (void)0;
{
((void(*)(val* self))((((long)var_53&3)?class_info[((long)var_53&3)]:var_53->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_53); /* next on <var_53:IndexedIterator[Phase]>*/
}
}
BREAK_label55: (void)0;
{
((void(*)(val* self))((((long)var_53&3)?class_info[((long)var_53&3)]:var_53->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_53); /* finish on <var_53:IndexedIterator[Phase]>*/
}
{
var160 = nitc___nitc__ToolContext___check_errors(self);
}
} else {
goto BREAK_label161;
}
BREAK_label29: (void)0;
}
BREAK_label161: (void)0;
var162 = glob_sys;
{
{ /* Inline time#Sys#get_time (var162) on <var162:Sys> */
struct nitni_instance* var_for_c_0;
var_for_c_0 = nit_alloc(sizeof(struct nitni_instance));
var_for_c_0->value = var162;
var165 = time___Sys_get_time___impl(var_for_c_0);
var163 = var165;
goto RET_LABEL164;
RET_LABEL164:(void)0;
}
}
var_time1 = var163;
if (unlikely(varonce166==NULL)) {
var167 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce168!=NULL)) {
var169 = varonce168;
} else {
var170 = "*** END SEMANTIC ANALYSIS: ";
var171 = core__abstract_text___CString___to_s_full(var170, 27l, 27l);
var169 = var171;
varonce168 = var169;
}
((struct instance_core__NativeArray*)var167)->values[0]=var169;
if (likely(varonce172!=NULL)) {
var173 = varonce172;
} else {
var174 = " ***";
var175 = core__abstract_text___CString___to_s_full(var174, 4l, 4l);
var173 = var175;
varonce172 = var173;
}
((struct instance_core__NativeArray*)var167)->values[2]=var173;
} else {
var167 = varonce166;
varonce166 = NULL;
}
{
{ /* Inline kernel#Int#- (var_time1,var_time0) on <var_time1:Int> */
/* Covariant cast for argument 0 (i) <var_time0:Int> isa OTHER */
/* <var_time0:Int> isa OTHER */
var178 = 1; /* easy <var_time0:Int> isa OTHER*/
if (unlikely(!var178)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var181 = var_time1 - var_time0;
var176 = var181;
goto RET_LABEL177;
RET_LABEL177:(void)0;
}
}
var182 = core__flat___Int___core__abstract_text__Object__to_s(var176);
((struct instance_core__NativeArray*)var167)->values[1]=var182;
{
var183 = ((val*(*)(val* self))(var167->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var167); /* native_to_s on <var167:NativeArray[String]>*/
}
varonce166 = var167;
{
nitc___nitc__ToolContext___info(self, var183, 2l); /* Direct call toolcontext#ToolContext#info on <self:ToolContext>*/
}
{
var184 = nitc___nitc__ToolContext___check_errors(self);
}
RET_LABEL:;
}
/* method phase#ToolContext#phase_process_npropdef for (self: ToolContext, Phase, APropdef) */
void nitc__phase___ToolContext___phase_process_npropdef(val* self, val* p0, val* p1) {
val* var_phase /* var phase: Phase */;
val* var_npropdef /* var npropdef: APropdef */;
var_phase = p0;
var_npropdef = p1;
{
((void(*)(val* self, val* p0))(var_phase->class->vft[COLOR_nitc__phase__Phase__process_npropdef]))(var_phase, var_npropdef); /* process_npropdef on <var_phase:Phase>*/
}
RET_LABEL:;
}
/* method phase#ToolContext#run_phases_on_npropdef for (self: ToolContext, APropdef) */
void nitc__phase___ToolContext___run_phases_on_npropdef(val* self, val* p0) {
val* var_npropdef /* var npropdef: APropdef */;
short int var /* : Bool */;
short int var2 /* : Bool */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
short int var6 /* : Bool */;
val* var8 /* : Sequence[Phase] */;
val* var_phases /* var phases: Sequence[Phase] */;
val* var_ /* var : Sequence[Phase] */;
val* var9 /* : Iterator[nullable Object] */;
val* var_10 /* var : IndexedIterator[Phase] */;
short int var11 /* : Bool */;
val* var12 /* : nullable Object */;
val* var_phase /* var phase: Phase */;
short int var13 /* : Bool */;
short int var15 /* : Bool */;
val* var17 /* : ToolContext */;
val* var19 /* : ToolContext */;
short int var20 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var22 /* : Bool */;
short int var24 /* : Bool */;
short int var25 /* : Bool */;
var_npropdef = p0;
{
{ /* Inline phase#ToolContext#semantize_is_lazy (self) on <self:ToolContext> */
var2 = self->attrs[COLOR_nitc__phase__ToolContext___semantize_is_lazy].s; /* _semantize_is_lazy on <self:ToolContext> */
var = var2;
RET_LABEL1:(void)0;
}
}
var3 = !var;
if (var3){
goto RET_LABEL;
} else {
}
{
{ /* Inline phase#APropdef#is_phased (var_npropdef) on <var_npropdef:APropdef> */
var6 = var_npropdef->attrs[COLOR_nitc__phase__APropdef___is_phased].s; /* _is_phased on <var_npropdef:APropdef> */
var4 = var6;
RET_LABEL5:(void)0;
}
}
if (var4){
goto RET_LABEL;
} else {
}
{
{ /* Inline phase#APropdef#is_phased= (var_npropdef,1) on <var_npropdef:APropdef> */
var_npropdef->attrs[COLOR_nitc__phase__APropdef___is_phased].s = 1; /* _is_phased on <var_npropdef:APropdef> */
RET_LABEL7:(void)0;
}
}
{
var8 = nitc__phase___ToolContext___phases_list(self);
}
var_phases = var8;
var_ = var_phases;
{
var9 = ((val*(*)(val* self))((((long)var_&3)?class_info[((long)var_&3)]:var_->class)->vft[COLOR_core__abstract_collection__Collection__iterator]))(var_); /* iterator on <var_:Sequence[Phase]>*/
}
var_10 = var9;
for(;;) {
{
var11 = ((short int(*)(val* self))((((long)var_10&3)?class_info[((long)var_10&3)]:var_10->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_10); /* is_ok on <var_10:IndexedIterator[Phase]>*/
}
if (var11){
} else {
goto BREAK_label;
}
{
var12 = ((val*(*)(val* self))((((long)var_10&3)?class_info[((long)var_10&3)]:var_10->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_10); /* item on <var_10:IndexedIterator[Phase]>*/
}
var_phase = var12;
{
{ /* Inline phase#Phase#disabled (var_phase) on <var_phase:Phase> */
var15 = var_phase->attrs[COLOR_nitc__phase__Phase___disabled].s; /* _disabled on <var_phase:Phase> */
var13 = var15;
RET_LABEL14:(void)0;
}
}
if (var13){
goto BREAK_label16;
} else {
}
{
{ /* Inline phase#Phase#toolcontext (var_phase) on <var_phase:Phase> */
var19 = var_phase->attrs[COLOR_nitc__phase__Phase___toolcontext].val; /* _toolcontext on <var_phase:Phase> */
if (unlikely(var19 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__phase, 209);
fatal_exit(1);
}
var17 = var19;
RET_LABEL18:(void)0;
}
}
{
{ /* Inline kernel#Object#== (var17,self) on <var17:ToolContext> */
var_other = self;
{
{ /* Inline kernel#Object#is_same_instance (var17,var_other) on <var17:ToolContext> */
var24 = var17 == var_other;
var22 = var24;
goto RET_LABEL23;
RET_LABEL23:(void)0;
}
}
var20 = var22;
goto RET_LABEL21;
RET_LABEL21:(void)0;
}
}
if (unlikely(!var20)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__phase, 179);
fatal_exit(1);
}
{
nitc__phase___ToolContext___phase_process_npropdef(self, var_phase, var_npropdef); /* Direct call phase#ToolContext#phase_process_npropdef on <self:ToolContext>*/
}
{
var25 = nitc___nitc__ToolContext___check_errors(self);
}
BREAK_label16: (void)0;
{
((void(*)(val* self))((((long)var_10&3)?class_info[((long)var_10&3)]:var_10->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_10); /* next on <var_10:IndexedIterator[Phase]>*/
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_10&3)?class_info[((long)var_10&3)]:var_10->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_10); /* finish on <var_10:IndexedIterator[Phase]>*/
}
RET_LABEL:;
}
/* method phase#APropdef#is_phased for (self: APropdef): Bool */
short int nitc__phase___APropdef___is_phased(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = self->attrs[COLOR_nitc__phase__APropdef___is_phased].s; /* _is_phased on <self:APropdef> */
var = var1;
RET_LABEL:;
return var;
}
/* method phase#APropdef#is_phased= for (self: APropdef, Bool) */
void nitc__phase___APropdef___is_phased_61d(val* self, short int p0) {
self->attrs[COLOR_nitc__phase__APropdef___is_phased].s = p0; /* _is_phased on <self:APropdef> */
RET_LABEL:;
}
/* method phase#AnnotationPhaseVisitor#annotations for (self: AnnotationPhaseVisitor): Array[AAnnotation] */
val* nitc__phase___nitc__phase__AnnotationPhaseVisitor___annotations(val* self) {
val* var /* : Array[AAnnotation] */;
val* var1 /* : Array[AAnnotation] */;
var1 = self->attrs[COLOR_nitc__phase__AnnotationPhaseVisitor___annotations].val; /* _annotations on <self:AnnotationPhaseVisitor> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _annotations");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__phase, 196);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method phase#AnnotationPhaseVisitor#visit for (self: AnnotationPhaseVisitor, ANode) */
void nitc__phase___nitc__phase__AnnotationPhaseVisitor___nitc__parser_nodes__Visitor__visit(val* self, val* p0) {
val* var_n /* var n: ANode */;
short int var /* : Bool */;
int cltype;
int idtype;
val* var1 /* : Array[AAnnotation] */;
val* var3 /* : Array[AAnnotation] */;
var_n = p0;
{
((void(*)(val* self, val* p0))(var_n->class->vft[COLOR_nitc__parser_nodes__ANode__visit_all]))(var_n, self); /* visit_all on <var_n:ANode>*/
}
/* <var_n:ANode> isa AAnnotation */
cltype = type_nitc__AAnnotation.color;
idtype = type_nitc__AAnnotation.id;
if(cltype >= var_n->type->table_size) {
var = 0;
} else {
var = var_n->type->type_table[cltype] == idtype;
}
if (var){
{
{ /* Inline phase#AnnotationPhaseVisitor#annotations (self) on <self:AnnotationPhaseVisitor> */
var3 = self->attrs[COLOR_nitc__phase__AnnotationPhaseVisitor___annotations].val; /* _annotations on <self:AnnotationPhaseVisitor> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _annotations");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__phase, 196);
fatal_exit(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var1, var_n); /* Direct call array#Array#add on <var1:Array[AAnnotation]>*/
}
} else {
}
RET_LABEL:;
}
/* method phase#Phase#toolcontext for (self: Phase): ToolContext */
val* nitc___nitc__Phase___toolcontext(val* self) {
val* var /* : ToolContext */;
val* var1 /* : ToolContext */;
var1 = self->attrs[COLOR_nitc__phase__Phase___toolcontext].val; /* _toolcontext on <self:Phase> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__phase, 209);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method phase#Phase#toolcontext= for (self: Phase, ToolContext) */
void nitc___nitc__Phase___toolcontext_61d(val* self, val* p0) {
self->attrs[COLOR_nitc__phase__Phase___toolcontext].val = p0; /* _toolcontext on <self:Phase> */
RET_LABEL:;
}
/* method phase#Phase#in_hierarchy for (self: Phase): POSetElement[Phase] */
val* nitc___nitc__Phase___in_hierarchy(val* self) {
val* var /* : POSetElement[Phase] */;
val* var1 /* : POSetElement[Phase] */;
var1 = self->attrs[COLOR_nitc__phase__Phase___in_hierarchy].val; /* _in_hierarchy on <self:Phase> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _in_hierarchy");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__phase, 212);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method phase#Phase#in_hierarchy= for (self: Phase, POSetElement[Phase]) */
void nitc___nitc__Phase___in_hierarchy_61d(val* self, val* p0) {
self->attrs[COLOR_nitc__phase__Phase___in_hierarchy].val = p0; /* _in_hierarchy on <self:Phase> */
RET_LABEL:;
}
/* method phase#Phase#depends for (self: Phase): nullable Collection[Phase] */
val* nitc___nitc__Phase___depends(val* self) {
val* var /* : nullable Collection[Phase] */;
val* var1 /* : nullable Collection[Phase] */;
var1 = self->attrs[COLOR_nitc__phase__Phase___depends].val; /* _depends on <self:Phase> */
var = var1;
RET_LABEL:;
return var;
}
/* method phase#Phase#depends= for (self: Phase, nullable Collection[Phase]) */
void nitc___nitc__Phase___depends_61d(val* self, val* p0) {
self->attrs[COLOR_nitc__phase__Phase___depends].val = p0; /* _depends on <self:Phase> */
RET_LABEL:;
}
/* method phase#Phase#init for (self: Phase) */
void nitc___nitc__Phase___core__kernel__Object__init(val* self) {
val* var /* : ToolContext */;
val* var2 /* : ToolContext */;
val* var3 /* : POSet[Phase] */;
val* var5 /* : POSet[Phase] */;
val* var6 /* : POSetElement[nullable Object] */;
val* var8 /* : nullable Collection[Phase] */;
val* var10 /* : nullable Collection[Phase] */;
val* var_depends /* var depends: nullable Collection[Phase] */;
short int var11 /* : Bool */;
short int var12 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var14 /* : Bool */;
short int var15 /* : Bool */;
val* var_ /* var : Collection[Phase] */;
val* var16 /* : Iterator[nullable Object] */;
val* var_17 /* var : Iterator[Phase] */;
short int var18 /* : Bool */;
val* var19 /* : nullable Object */;
val* var_d /* var d: Phase */;
val* var20 /* : ToolContext */;
val* var22 /* : ToolContext */;
val* var23 /* : POSet[Phase] */;
val* var25 /* : POSet[Phase] */;
{
((void(*)(val* self))(self->class->vft[COLOR_nitc___nitc__Phase___core__kernel__Object__init]))(self); /* init on <self:Phase>*/
}
{
{ /* Inline phase#Phase#toolcontext (self) on <self:Phase> */
var2 = self->attrs[COLOR_nitc__phase__Phase___toolcontext].val; /* _toolcontext on <self:Phase> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__phase, 209);
fatal_exit(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
{ /* Inline phase#ToolContext#phases (var) on <var:ToolContext> */
var5 = var->attrs[COLOR_nitc__phase__ToolContext___phases].val; /* _phases on <var:ToolContext> */
if (unlikely(var5 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _phases");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__phase, 23);
fatal_exit(1);
}
var3 = var5;
RET_LABEL4:(void)0;
}
}
{
var6 = poset___poset__POSet___add_node(var3, self);
}
{
{ /* Inline phase#Phase#in_hierarchy= (self,var6) on <self:Phase> */
self->attrs[COLOR_nitc__phase__Phase___in_hierarchy].val = var6; /* _in_hierarchy on <self:Phase> */
RET_LABEL7:(void)0;
}
}
{
{ /* Inline phase#Phase#depends (self) on <self:Phase> */
var10 = self->attrs[COLOR_nitc__phase__Phase___depends].val; /* _depends on <self:Phase> */
var8 = var10;
RET_LABEL9:(void)0;
}
}
var_depends = var8;
if (var_depends == NULL) {
var11 = 0; /* is null */
} else {
var11 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_depends,((val*)NULL)) on <var_depends:nullable Collection[Phase]> */
var_other = ((val*)NULL);
{
var14 = ((short int(*)(val* self, val* p0))((((long)var_depends&3)?class_info[((long)var_depends&3)]:var_depends->class)->vft[COLOR_core__kernel__Object___61d_61d]))(var_depends, var_other); /* == on <var_depends:nullable Collection[Phase](Collection[Phase])>*/
}
var15 = !var14;
var12 = var15;
goto RET_LABEL13;
RET_LABEL13:(void)0;
}
var11 = var12;
}
if (var11){
var_ = var_depends;
{
var16 = ((val*(*)(val* self))((((long)var_&3)?class_info[((long)var_&3)]:var_->class)->vft[COLOR_core__abstract_collection__Collection__iterator]))(var_); /* iterator on <var_:Collection[Phase]>*/
}
var_17 = var16;
for(;;) {
{
var18 = ((short int(*)(val* self))((((long)var_17&3)?class_info[((long)var_17&3)]:var_17->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_17); /* is_ok on <var_17:Iterator[Phase]>*/
}
if (var18){
} else {
goto BREAK_label;
}
{
var19 = ((val*(*)(val* self))((((long)var_17&3)?class_info[((long)var_17&3)]:var_17->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_17); /* item on <var_17:Iterator[Phase]>*/
}
var_d = var19;
{
{ /* Inline phase#Phase#toolcontext (self) on <self:Phase> */
var22 = self->attrs[COLOR_nitc__phase__Phase___toolcontext].val; /* _toolcontext on <self:Phase> */
if (unlikely(var22 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__phase, 209);
fatal_exit(1);
}
var20 = var22;
RET_LABEL21:(void)0;
}
}
{
{ /* Inline phase#ToolContext#phases (var20) on <var20:ToolContext> */
var25 = var20->attrs[COLOR_nitc__phase__ToolContext___phases].val; /* _phases on <var20:ToolContext> */
if (unlikely(var25 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _phases");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__phase, 23);
fatal_exit(1);
}
var23 = var25;
RET_LABEL24:(void)0;
}
}
{
poset___poset__POSet___add_edge(var23, self, var_d); /* Direct call poset#POSet#add_edge on <var23:POSet[Phase]>*/
}
{
((void(*)(val* self))((((long)var_17&3)?class_info[((long)var_17&3)]:var_17->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_17); /* next on <var_17:Iterator[Phase]>*/
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_17&3)?class_info[((long)var_17&3)]:var_17->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_17); /* finish on <var_17:Iterator[Phase]>*/
}
} else {
}
RET_LABEL:;
}
/* method phase#Phase#to_s for (self: Phase): String */
val* nitc___nitc__Phase___core__abstract_text__Object__to_s(val* self) {
val* var /* : String */;
val* var1 /* : String */;
static val* varonce;
val* var2 /* : String */;
char* var3 /* : CString */;
val* var4 /* : String */;
val* var5 /* : String */;
val* var6 /* : String */;
{
var1 = core__abstract_text___Object___class_name(self);
}
if (likely(varonce!=NULL)) {
var2 = varonce;
} else {
var3 = "Phase";
var4 = core__abstract_text___CString___to_s_full(var3, 5l, 5l);
var2 = var4;
varonce = var2;
}
{
var5 = core__file___String___strip_extension(var1, var2);
}
{
var6 = core___core__String___Text__to_snake_case(var5);
}
var = var6;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method phase#Phase#disabled for (self: Phase): Bool */
short int nitc___nitc__Phase___disabled(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = self->attrs[COLOR_nitc__phase__Phase___disabled].s; /* _disabled on <self:Phase> */
var = var1;
RET_LABEL:;
return var;
}
/* method phase#Phase#disabled= for (self: Phase, Bool) */
void nitc___nitc__Phase___disabled_61d(val* self, short int p0) {
self->attrs[COLOR_nitc__phase__Phase___disabled].s = p0; /* _disabled on <self:Phase> */
RET_LABEL:;
}
/* method phase#Phase#process_nmodule for (self: Phase, AModule) */
void nitc___nitc__Phase___process_nmodule(val* self, val* p0) {
val* var_nmodule /* var nmodule: AModule */;
var_nmodule = p0;
RET_LABEL:;
}
/* method phase#Phase#process_nclassdef for (self: Phase, AClassdef) */
void nitc___nitc__Phase___process_nclassdef(val* self, val* p0) {
val* var_nclassdef /* var nclassdef: AClassdef */;
var_nclassdef = p0;
RET_LABEL:;
}
/* method phase#Phase#process_npropdef for (self: Phase, APropdef) */
void nitc___nitc__Phase___process_npropdef(val* self, val* p0) {
val* var_npropdef /* var npropdef: APropdef */;
var_npropdef = p0;
RET_LABEL:;
}
/* method phase#Phase#process_annotated_node for (self: Phase, ANode, AAnnotation) */
void nitc___nitc__Phase___process_annotated_node(val* self, val* p0, val* p1) {
val* var_node /* var node: ANode */;
val* var_nat /* var nat: AAnnotation */;
var_node = p0;
var_nat = p1;
RET_LABEL:;
}
