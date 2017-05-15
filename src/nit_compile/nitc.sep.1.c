#include "nitc.sep.0.h"
/* method nitc#ToolContext#process_options for (self: ToolContext, Sequence[String]) */
void nitc___ToolContext___process_options(val* self, val* p0) {
val* var_args /* var args: Sequence[String] */;
val* var /* : OptionBool */;
val* var2 /* : OptionBool */;
val* var3 /* : nullable Object */;
val* var5 /* : nullable Object */;
long var6 /* : Int */;
short int var7 /* : Bool */;
val* var8 /* : OptionBool */;
val* var10 /* : OptionBool */;
val* var11 /* : nullable Object */;
val* var13 /* : nullable Object */;
long var14 /* : Int */;
short int var15 /* : Bool */;
long var16 /* : Int */;
short int var18 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var19 /* : Int */;
val* var20 /* : OptionBool */;
val* var22 /* : OptionBool */;
val* var23 /* : nullable Object */;
val* var25 /* : nullable Object */;
long var26 /* : Int */;
short int var27 /* : Bool */;
long var28 /* : Int */;
short int var30 /* : Bool */;
int cltype31;
int idtype32;
const char* var_class_name33;
long var34 /* : Int */;
long var_sum /* var sum: Int */;
short int var35 /* : Bool */;
short int var37 /* : Bool */;
int cltype38;
int idtype39;
const char* var_class_name40;
short int var41 /* : Bool */;
val* var42 /* : Sys */;
static val* varonce;
val* var43 /* : String */;
char* var44 /* : CString */;
val* var45 /* : String */;
val* var46 /* : Sys */;
short int var48 /* : Bool */;
short int var50 /* : Bool */;
val* var51 /* : OptionBool */;
val* var53 /* : OptionBool */;
short int var55 /* : Bool */;
int cltype56;
int idtype57;
const struct type* type_struct;
const char* var_class_name58;
val* var59 /* : nullable Object */;
var_args = p0;
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nitc___ToolContext___process_options]))(self, p0); /* process_options on <self:ToolContext>*/
}
{
{ /* Inline global_compiler#ToolContext#opt_global (self) on <self:ToolContext> */
var2 = self->attrs[COLOR_nitc__global_compiler__ToolContext___opt_global].val; /* _opt_global on <self:ToolContext> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_global");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__global_compiler, 30);
fatal_exit(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
{ /* Inline opts#Option#value (var) on <var:OptionBool> */
var5 = var->attrs[COLOR_opts__Option___value].val; /* _value on <var:OptionBool> */
var3 = var5;
RET_LABEL4:(void)0;
}
}
{
var7 = (short int)((long)(var3)>>2);
var6 = core___core__Bool___to_i(var7);
}
{
{ /* Inline separate_compiler#ToolContext#opt_separate (self) on <self:ToolContext> */
var10 = self->attrs[COLOR_nitc__separate_compiler__ToolContext___opt_separate].val; /* _opt_separate on <self:ToolContext> */
if (unlikely(var10 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_separate");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__separate_compiler, 24);
fatal_exit(1);
}
var8 = var10;
RET_LABEL9:(void)0;
}
}
{
{ /* Inline opts#Option#value (var8) on <var8:OptionBool> */
var13 = var8->attrs[COLOR_opts__Option___value].val; /* _value on <var8:OptionBool> */
var11 = var13;
RET_LABEL12:(void)0;
}
}
{
var15 = (short int)((long)(var11)>>2);
var14 = core___core__Bool___to_i(var15);
}
{
{ /* Inline kernel#Int#+ (var6,var14) on <var6:Int> */
/* Covariant cast for argument 0 (i) <var14:Int> isa OTHER */
/* <var14:Int> isa OTHER */
var18 = 1; /* easy <var14:Int> isa OTHER*/
if (unlikely(!var18)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var19 = var6 + var14;
var16 = var19;
goto RET_LABEL17;
RET_LABEL17:(void)0;
}
}
{
{ /* Inline separate_erasure_compiler#ToolContext#opt_erasure (self) on <self:ToolContext> */
var22 = self->attrs[COLOR_nitc__separate_erasure_compiler__ToolContext___opt_erasure].val; /* _opt_erasure on <self:ToolContext> */
if (unlikely(var22 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_erasure");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__separate_erasure_compiler, 22);
fatal_exit(1);
}
var20 = var22;
RET_LABEL21:(void)0;
}
}
{
{ /* Inline opts#Option#value (var20) on <var20:OptionBool> */
var25 = var20->attrs[COLOR_opts__Option___value].val; /* _value on <var20:OptionBool> */
var23 = var25;
RET_LABEL24:(void)0;
}
}
{
var27 = (short int)((long)(var23)>>2);
var26 = core___core__Bool___to_i(var27);
}
{
{ /* Inline kernel#Int#+ (var16,var26) on <var16:Int> */
/* Covariant cast for argument 0 (i) <var26:Int> isa OTHER */
/* <var26:Int> isa OTHER */
var30 = 1; /* easy <var26:Int> isa OTHER*/
if (unlikely(!var30)) {
var_class_name33 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name33);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var34 = var16 + var26;
var28 = var34;
goto RET_LABEL29;
RET_LABEL29:(void)0;
}
}
var_sum = var28;
{
{ /* Inline kernel#Int#> (var_sum,1l) on <var_sum:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var37 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var37)) {
var_class_name40 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name40);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 727);
fatal_exit(1);
}
var41 = var_sum > 1l;
var35 = var41;
goto RET_LABEL36;
RET_LABEL36:(void)0;
}
}
if (var35){
var42 = glob_sys;
if (likely(varonce!=NULL)) {
var43 = varonce;
} else {
var44 = "Options --global, --separate and --erasure are exclusive";
var45 = core__abstract_text___CString___to_s_full(var44, 56l, 56l);
var43 = var45;
varonce = var43;
}
{
core__file___Sys___print(var42, var43); /* Direct call file#Sys#print on <var42:Sys>*/
}
var46 = glob_sys;
{
{ /* Inline kernel#Sys#exit (var46,1l) on <var46:Sys> */
exit(1l);
RET_LABEL47:(void)0;
}
}
} else {
{
{ /* Inline kernel#Int#== (var_sum,0l) on <var_sum:Int> */
var50 = var_sum == 0l;
var48 = var50;
goto RET_LABEL49;
RET_LABEL49:(void)0;
}
}
if (var48){
{
{ /* Inline separate_compiler#ToolContext#opt_separate (self) on <self:ToolContext> */
var53 = self->attrs[COLOR_nitc__separate_compiler__ToolContext___opt_separate].val; /* _opt_separate on <self:ToolContext> */
if (unlikely(var53 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_separate");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__separate_compiler, 24);
fatal_exit(1);
}
var51 = var53;
RET_LABEL52:(void)0;
}
}
{
{ /* Inline opts#Option#value= (var51,1) on <var51:OptionBool> */
/* Covariant cast for argument 0 (value) <1:Bool> isa VALUE */
/* <1:Bool> isa VALUE */
type_struct = var51->type->resolution_table->types[COLOR_opts__Option__VALUE];
cltype56 = type_struct->color;
idtype57 = type_struct->id;
if(cltype56 >= (&type_core__Bool)->table_size) {
var55 = 0;
} else {
var55 = (&type_core__Bool)->type_table[cltype56] == idtype57;
}
if (unlikely(!var55)) {
var_class_name58 = type_core__Bool.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "VALUE", var_class_name58);
PRINT_ERROR(" (%s:%d)\n", FILE_opts, 40);
fatal_exit(1);
}
var59 = (val*)((long)(1)<<2|3);
var51->attrs[COLOR_opts__Option___value].val = var59; /* _value on <var51:OptionBool> */
RET_LABEL54:(void)0;
}
}
} else {
}
}
RET_LABEL:;
}
