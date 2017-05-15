#include "nitc__abstract_compiler.sep.0.h"
/* method abstract_compiler#ToolContext#opt_output for (self: ToolContext): OptionString */
val* nitc__abstract_compiler___ToolContext___opt_output(val* self) {
val* var /* : OptionString */;
val* var1 /* : OptionString */;
var1 = self->attrs[COLOR_nitc__abstract_compiler__ToolContext___opt_output].val; /* _opt_output on <self:ToolContext> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_output");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 30);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#ToolContext#opt_dir for (self: ToolContext): OptionString */
val* nitc__abstract_compiler___ToolContext___opt_dir(val* self) {
val* var /* : OptionString */;
val* var1 /* : OptionString */;
var1 = self->attrs[COLOR_nitc__abstract_compiler__ToolContext___opt_dir].val; /* _opt_dir on <self:ToolContext> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_dir");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 32);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#ToolContext#opt_no_cc for (self: ToolContext): OptionBool */
val* nitc__abstract_compiler___ToolContext___opt_no_cc(val* self) {
val* var /* : OptionBool */;
val* var1 /* : OptionBool */;
var1 = self->attrs[COLOR_nitc__abstract_compiler__ToolContext___opt_no_cc].val; /* _opt_no_cc on <self:ToolContext> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_no_cc");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 34);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#ToolContext#opt_no_main for (self: ToolContext): OptionBool */
val* nitc__abstract_compiler___ToolContext___opt_no_main(val* self) {
val* var /* : OptionBool */;
val* var1 /* : OptionBool */;
var1 = self->attrs[COLOR_nitc__abstract_compiler__ToolContext___opt_no_main].val; /* _opt_no_main on <self:ToolContext> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_no_main");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 36);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#ToolContext#opt_make_flags for (self: ToolContext): OptionString */
val* nitc__abstract_compiler___ToolContext___opt_make_flags(val* self) {
val* var /* : OptionString */;
val* var1 /* : OptionString */;
var1 = self->attrs[COLOR_nitc__abstract_compiler__ToolContext___opt_make_flags].val; /* _opt_make_flags on <self:ToolContext> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_make_flags");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 38);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#ToolContext#opt_max_c_lines for (self: ToolContext): OptionInt */
val* nitc__abstract_compiler___ToolContext___opt_max_c_lines(val* self) {
val* var /* : OptionInt */;
val* var1 /* : OptionInt */;
var1 = self->attrs[COLOR_nitc__abstract_compiler__ToolContext___opt_max_c_lines].val; /* _opt_max_c_lines on <self:ToolContext> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_max_c_lines");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 40);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#ToolContext#opt_group_c_files for (self: ToolContext): OptionBool */
val* nitc__abstract_compiler___ToolContext___opt_group_c_files(val* self) {
val* var /* : OptionBool */;
val* var1 /* : OptionBool */;
var1 = self->attrs[COLOR_nitc__abstract_compiler__ToolContext___opt_group_c_files].val; /* _opt_group_c_files on <self:ToolContext> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_group_c_files");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 42);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#ToolContext#opt_compile_dir for (self: ToolContext): OptionString */
val* nitc__abstract_compiler___ToolContext___opt_compile_dir(val* self) {
val* var /* : OptionString */;
val* var1 /* : OptionString */;
var1 = self->attrs[COLOR_nitc__abstract_compiler__ToolContext___opt_compile_dir].val; /* _opt_compile_dir on <self:ToolContext> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_compile_dir");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 44);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#ToolContext#opt_hardening for (self: ToolContext): OptionBool */
val* nitc__abstract_compiler___ToolContext___opt_hardening(val* self) {
val* var /* : OptionBool */;
val* var1 /* : OptionBool */;
var1 = self->attrs[COLOR_nitc__abstract_compiler__ToolContext___opt_hardening].val; /* _opt_hardening on <self:ToolContext> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_hardening");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 46);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#ToolContext#opt_no_check_covariance for (self: ToolContext): OptionBool */
val* nitc__abstract_compiler___ToolContext___opt_no_check_covariance(val* self) {
val* var /* : OptionBool */;
val* var1 /* : OptionBool */;
var1 = self->attrs[COLOR_nitc__abstract_compiler__ToolContext___opt_no_check_covariance].val; /* _opt_no_check_covariance on <self:ToolContext> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_no_check_covariance");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 48);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#ToolContext#opt_no_check_attr_isset for (self: ToolContext): OptionBool */
val* nitc__abstract_compiler___ToolContext___opt_no_check_attr_isset(val* self) {
val* var /* : OptionBool */;
val* var1 /* : OptionBool */;
var1 = self->attrs[COLOR_nitc__abstract_compiler__ToolContext___opt_no_check_attr_isset].val; /* _opt_no_check_attr_isset on <self:ToolContext> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_no_check_attr_isset");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 50);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#ToolContext#opt_no_check_assert for (self: ToolContext): OptionBool */
val* nitc__abstract_compiler___ToolContext___opt_no_check_assert(val* self) {
val* var /* : OptionBool */;
val* var1 /* : OptionBool */;
var1 = self->attrs[COLOR_nitc__abstract_compiler__ToolContext___opt_no_check_assert].val; /* _opt_no_check_assert on <self:ToolContext> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_no_check_assert");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 52);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#ToolContext#opt_no_check_autocast for (self: ToolContext): OptionBool */
val* nitc__abstract_compiler___ToolContext___opt_no_check_autocast(val* self) {
val* var /* : OptionBool */;
val* var1 /* : OptionBool */;
var1 = self->attrs[COLOR_nitc__abstract_compiler__ToolContext___opt_no_check_autocast].val; /* _opt_no_check_autocast on <self:ToolContext> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_no_check_autocast");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 54);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#ToolContext#opt_no_check_null for (self: ToolContext): OptionBool */
val* nitc__abstract_compiler___ToolContext___opt_no_check_null(val* self) {
val* var /* : OptionBool */;
val* var1 /* : OptionBool */;
var1 = self->attrs[COLOR_nitc__abstract_compiler__ToolContext___opt_no_check_null].val; /* _opt_no_check_null on <self:ToolContext> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_no_check_null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 56);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#ToolContext#opt_no_check_all for (self: ToolContext): OptionBool */
val* nitc__abstract_compiler___ToolContext___opt_no_check_all(val* self) {
val* var /* : OptionBool */;
val* var1 /* : OptionBool */;
var1 = self->attrs[COLOR_nitc__abstract_compiler__ToolContext___opt_no_check_all].val; /* _opt_no_check_all on <self:ToolContext> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_no_check_all");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 58);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#ToolContext#opt_typing_test_metrics for (self: ToolContext): OptionBool */
val* nitc__abstract_compiler___ToolContext___opt_typing_test_metrics(val* self) {
val* var /* : OptionBool */;
val* var1 /* : OptionBool */;
var1 = self->attrs[COLOR_nitc__abstract_compiler__ToolContext___opt_typing_test_metrics].val; /* _opt_typing_test_metrics on <self:ToolContext> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_typing_test_metrics");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 60);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#ToolContext#opt_invocation_metrics for (self: ToolContext): OptionBool */
val* nitc__abstract_compiler___ToolContext___opt_invocation_metrics(val* self) {
val* var /* : OptionBool */;
val* var1 /* : OptionBool */;
var1 = self->attrs[COLOR_nitc__abstract_compiler__ToolContext___opt_invocation_metrics].val; /* _opt_invocation_metrics on <self:ToolContext> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_invocation_metrics");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 62);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#ToolContext#opt_isset_checks_metrics for (self: ToolContext): OptionBool */
val* nitc__abstract_compiler___ToolContext___opt_isset_checks_metrics(val* self) {
val* var /* : OptionBool */;
val* var1 /* : OptionBool */;
var1 = self->attrs[COLOR_nitc__abstract_compiler__ToolContext___opt_isset_checks_metrics].val; /* _opt_isset_checks_metrics on <self:ToolContext> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_isset_checks_metrics");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 64);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#ToolContext#opt_no_stacktrace for (self: ToolContext): OptionBool */
val* nitc__abstract_compiler___ToolContext___opt_no_stacktrace(val* self) {
val* var /* : OptionBool */;
val* var1 /* : OptionBool */;
var1 = self->attrs[COLOR_nitc__abstract_compiler__ToolContext___opt_no_stacktrace].val; /* _opt_no_stacktrace on <self:ToolContext> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_no_stacktrace");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 66);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#ToolContext#opt_no_gcc_directive for (self: ToolContext): OptionArray */
val* nitc__abstract_compiler___ToolContext___opt_no_gcc_directive(val* self) {
val* var /* : OptionArray */;
val* var1 /* : OptionArray */;
var1 = self->attrs[COLOR_nitc__abstract_compiler__ToolContext___opt_no_gcc_directive].val; /* _opt_no_gcc_directive on <self:ToolContext> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_no_gcc_directive");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 68);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#ToolContext#opt_release for (self: ToolContext): OptionBool */
val* nitc__abstract_compiler___ToolContext___opt_release(val* self) {
val* var /* : OptionBool */;
val* var1 /* : OptionBool */;
var1 = self->attrs[COLOR_nitc__abstract_compiler__ToolContext___opt_release].val; /* _opt_release on <self:ToolContext> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_release");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 70);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#ToolContext#opt_debug for (self: ToolContext): OptionBool */
val* nitc__abstract_compiler___ToolContext___opt_debug(val* self) {
val* var /* : OptionBool */;
val* var1 /* : OptionBool */;
var1 = self->attrs[COLOR_nitc__abstract_compiler__ToolContext___opt_debug].val; /* _opt_debug on <self:ToolContext> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_debug");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 72);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#ToolContext#init for (self: ToolContext) */
void nitc__abstract_compiler___ToolContext___core__kernel__Object__init(val* self) {
val* var /* : OptionContext */;
val* var2 /* : OptionContext */;
val* var3 /* : OptionString */;
val* var5 /* : OptionString */;
val* var6 /* : OptionString */;
val* var8 /* : OptionString */;
val* var9 /* : OptionBool */;
val* var11 /* : OptionBool */;
val* var12 /* : OptionBool */;
val* var14 /* : OptionBool */;
val* var15 /* : OptionString */;
val* var17 /* : OptionString */;
val* var18 /* : OptionString */;
val* var20 /* : OptionString */;
val* var21 /* : OptionBool */;
val* var23 /* : OptionBool */;
val* var24 /* : Array[Option] */;
val* var25 /* : NativeArray[Option] */;
val* var26 /* : OptionContext */;
val* var28 /* : OptionContext */;
val* var29 /* : OptionBool */;
val* var31 /* : OptionBool */;
val* var32 /* : OptionBool */;
val* var34 /* : OptionBool */;
val* var35 /* : OptionBool */;
val* var37 /* : OptionBool */;
val* var38 /* : OptionBool */;
val* var40 /* : OptionBool */;
val* var41 /* : OptionBool */;
val* var43 /* : OptionBool */;
val* var44 /* : OptionBool */;
val* var46 /* : OptionBool */;
val* var47 /* : Array[Option] */;
val* var48 /* : NativeArray[Option] */;
val* var49 /* : OptionContext */;
val* var51 /* : OptionContext */;
val* var52 /* : OptionBool */;
val* var54 /* : OptionBool */;
val* var55 /* : OptionBool */;
val* var57 /* : OptionBool */;
val* var58 /* : OptionBool */;
val* var60 /* : OptionBool */;
val* var61 /* : Array[Option] */;
val* var62 /* : NativeArray[Option] */;
val* var63 /* : OptionContext */;
val* var65 /* : OptionContext */;
val* var66 /* : OptionBool */;
val* var68 /* : OptionBool */;
val* var69 /* : Array[Option] */;
val* var70 /* : NativeArray[Option] */;
val* var71 /* : OptionContext */;
val* var73 /* : OptionContext */;
val* var74 /* : OptionArray */;
val* var76 /* : OptionArray */;
val* var77 /* : Array[Option] */;
val* var78 /* : NativeArray[Option] */;
val* var79 /* : OptionContext */;
val* var81 /* : OptionContext */;
val* var82 /* : OptionBool */;
val* var84 /* : OptionBool */;
val* var85 /* : Array[Option] */;
val* var86 /* : NativeArray[Option] */;
val* var87 /* : OptionContext */;
val* var89 /* : OptionContext */;
val* var90 /* : OptionInt */;
val* var92 /* : OptionInt */;
val* var93 /* : OptionBool */;
val* var95 /* : OptionBool */;
val* var96 /* : Array[Option] */;
val* var97 /* : NativeArray[Option] */;
val* var98 /* : OptionContext */;
val* var100 /* : OptionContext */;
val* var101 /* : OptionBool */;
val* var103 /* : OptionBool */;
val* var104 /* : Array[Option] */;
val* var105 /* : NativeArray[Option] */;
val* var106 /* : OptionBool */;
val* var108 /* : OptionBool */;
{
((void(*)(val* self))(self->class->vft[COLOR_nitc__abstract_compiler___ToolContext___core__kernel__Object__init]))(self); /* init on <self:ToolContext>*/
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
{ /* Inline abstract_compiler#ToolContext#opt_output (self) on <self:ToolContext> */
var5 = self->attrs[COLOR_nitc__abstract_compiler__ToolContext___opt_output].val; /* _opt_output on <self:ToolContext> */
if (unlikely(var5 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_output");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 30);
fatal_exit(1);
}
var3 = var5;
RET_LABEL4:(void)0;
}
}
{
{ /* Inline abstract_compiler#ToolContext#opt_dir (self) on <self:ToolContext> */
var8 = self->attrs[COLOR_nitc__abstract_compiler__ToolContext___opt_dir].val; /* _opt_dir on <self:ToolContext> */
if (unlikely(var8 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_dir");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 32);
fatal_exit(1);
}
var6 = var8;
RET_LABEL7:(void)0;
}
}
{
{ /* Inline abstract_compiler#ToolContext#opt_no_cc (self) on <self:ToolContext> */
var11 = self->attrs[COLOR_nitc__abstract_compiler__ToolContext___opt_no_cc].val; /* _opt_no_cc on <self:ToolContext> */
if (unlikely(var11 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_no_cc");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 34);
fatal_exit(1);
}
var9 = var11;
RET_LABEL10:(void)0;
}
}
{
{ /* Inline abstract_compiler#ToolContext#opt_no_main (self) on <self:ToolContext> */
var14 = self->attrs[COLOR_nitc__abstract_compiler__ToolContext___opt_no_main].val; /* _opt_no_main on <self:ToolContext> */
if (unlikely(var14 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_no_main");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 36);
fatal_exit(1);
}
var12 = var14;
RET_LABEL13:(void)0;
}
}
{
{ /* Inline abstract_compiler#ToolContext#opt_make_flags (self) on <self:ToolContext> */
var17 = self->attrs[COLOR_nitc__abstract_compiler__ToolContext___opt_make_flags].val; /* _opt_make_flags on <self:ToolContext> */
if (unlikely(var17 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_make_flags");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 38);
fatal_exit(1);
}
var15 = var17;
RET_LABEL16:(void)0;
}
}
{
{ /* Inline abstract_compiler#ToolContext#opt_compile_dir (self) on <self:ToolContext> */
var20 = self->attrs[COLOR_nitc__abstract_compiler__ToolContext___opt_compile_dir].val; /* _opt_compile_dir on <self:ToolContext> */
if (unlikely(var20 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_compile_dir");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 44);
fatal_exit(1);
}
var18 = var20;
RET_LABEL19:(void)0;
}
}
{
{ /* Inline abstract_compiler#ToolContext#opt_hardening (self) on <self:ToolContext> */
var23 = self->attrs[COLOR_nitc__abstract_compiler__ToolContext___opt_hardening].val; /* _opt_hardening on <self:ToolContext> */
if (unlikely(var23 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_hardening");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 46);
fatal_exit(1);
}
var21 = var23;
RET_LABEL22:(void)0;
}
}
var24 = NEW_core__Array(&type_core__Array__opts__Option);
{ /* var24 = array_instance Array[Option] */
var25 = NEW_core__NativeArray(7l, &type_core__NativeArray__opts__Option);
((struct instance_core__NativeArray*)var25)->values[0] = (val*) var3;
((struct instance_core__NativeArray*)var25)->values[1] = (val*) var6;
((struct instance_core__NativeArray*)var25)->values[2] = (val*) var9;
((struct instance_core__NativeArray*)var25)->values[3] = (val*) var12;
((struct instance_core__NativeArray*)var25)->values[4] = (val*) var15;
((struct instance_core__NativeArray*)var25)->values[5] = (val*) var18;
((struct instance_core__NativeArray*)var25)->values[6] = (val*) var21;
{
((void(*)(val* self, val* p0, long p1))(var24->class->vft[COLOR_core__array__Array__with_native]))(var24, var25, 7l); /* with_native on <var24:Array[Option]>*/
}
}
{
opts___opts__OptionContext___add_option(var, var24); /* Direct call opts#OptionContext#add_option on <var:OptionContext>*/
}
{
{ /* Inline toolcontext#ToolContext#option_context (self) on <self:ToolContext> */
var28 = self->attrs[COLOR_nitc__toolcontext__ToolContext___option_context].val; /* _option_context on <self:ToolContext> */
if (unlikely(var28 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _option_context");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__toolcontext, 357);
fatal_exit(1);
}
var26 = var28;
RET_LABEL27:(void)0;
}
}
{
{ /* Inline abstract_compiler#ToolContext#opt_no_check_covariance (self) on <self:ToolContext> */
var31 = self->attrs[COLOR_nitc__abstract_compiler__ToolContext___opt_no_check_covariance].val; /* _opt_no_check_covariance on <self:ToolContext> */
if (unlikely(var31 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_no_check_covariance");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 48);
fatal_exit(1);
}
var29 = var31;
RET_LABEL30:(void)0;
}
}
{
{ /* Inline abstract_compiler#ToolContext#opt_no_check_attr_isset (self) on <self:ToolContext> */
var34 = self->attrs[COLOR_nitc__abstract_compiler__ToolContext___opt_no_check_attr_isset].val; /* _opt_no_check_attr_isset on <self:ToolContext> */
if (unlikely(var34 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_no_check_attr_isset");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 50);
fatal_exit(1);
}
var32 = var34;
RET_LABEL33:(void)0;
}
}
{
{ /* Inline abstract_compiler#ToolContext#opt_no_check_assert (self) on <self:ToolContext> */
var37 = self->attrs[COLOR_nitc__abstract_compiler__ToolContext___opt_no_check_assert].val; /* _opt_no_check_assert on <self:ToolContext> */
if (unlikely(var37 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_no_check_assert");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 52);
fatal_exit(1);
}
var35 = var37;
RET_LABEL36:(void)0;
}
}
{
{ /* Inline abstract_compiler#ToolContext#opt_no_check_autocast (self) on <self:ToolContext> */
var40 = self->attrs[COLOR_nitc__abstract_compiler__ToolContext___opt_no_check_autocast].val; /* _opt_no_check_autocast on <self:ToolContext> */
if (unlikely(var40 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_no_check_autocast");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 54);
fatal_exit(1);
}
var38 = var40;
RET_LABEL39:(void)0;
}
}
{
{ /* Inline abstract_compiler#ToolContext#opt_no_check_null (self) on <self:ToolContext> */
var43 = self->attrs[COLOR_nitc__abstract_compiler__ToolContext___opt_no_check_null].val; /* _opt_no_check_null on <self:ToolContext> */
if (unlikely(var43 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_no_check_null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 56);
fatal_exit(1);
}
var41 = var43;
RET_LABEL42:(void)0;
}
}
{
{ /* Inline abstract_compiler#ToolContext#opt_no_check_all (self) on <self:ToolContext> */
var46 = self->attrs[COLOR_nitc__abstract_compiler__ToolContext___opt_no_check_all].val; /* _opt_no_check_all on <self:ToolContext> */
if (unlikely(var46 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_no_check_all");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 58);
fatal_exit(1);
}
var44 = var46;
RET_LABEL45:(void)0;
}
}
var47 = NEW_core__Array(&type_core__Array__opts__Option);
{ /* var47 = array_instance Array[Option] */
var48 = NEW_core__NativeArray(6l, &type_core__NativeArray__opts__Option);
((struct instance_core__NativeArray*)var48)->values[0] = (val*) var29;
((struct instance_core__NativeArray*)var48)->values[1] = (val*) var32;
((struct instance_core__NativeArray*)var48)->values[2] = (val*) var35;
((struct instance_core__NativeArray*)var48)->values[3] = (val*) var38;
((struct instance_core__NativeArray*)var48)->values[4] = (val*) var41;
((struct instance_core__NativeArray*)var48)->values[5] = (val*) var44;
{
((void(*)(val* self, val* p0, long p1))(var47->class->vft[COLOR_core__array__Array__with_native]))(var47, var48, 6l); /* with_native on <var47:Array[Option]>*/
}
}
{
opts___opts__OptionContext___add_option(var26, var47); /* Direct call opts#OptionContext#add_option on <var26:OptionContext>*/
}
{
{ /* Inline toolcontext#ToolContext#option_context (self) on <self:ToolContext> */
var51 = self->attrs[COLOR_nitc__toolcontext__ToolContext___option_context].val; /* _option_context on <self:ToolContext> */
if (unlikely(var51 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _option_context");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__toolcontext, 357);
fatal_exit(1);
}
var49 = var51;
RET_LABEL50:(void)0;
}
}
{
{ /* Inline abstract_compiler#ToolContext#opt_typing_test_metrics (self) on <self:ToolContext> */
var54 = self->attrs[COLOR_nitc__abstract_compiler__ToolContext___opt_typing_test_metrics].val; /* _opt_typing_test_metrics on <self:ToolContext> */
if (unlikely(var54 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_typing_test_metrics");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 60);
fatal_exit(1);
}
var52 = var54;
RET_LABEL53:(void)0;
}
}
{
{ /* Inline abstract_compiler#ToolContext#opt_invocation_metrics (self) on <self:ToolContext> */
var57 = self->attrs[COLOR_nitc__abstract_compiler__ToolContext___opt_invocation_metrics].val; /* _opt_invocation_metrics on <self:ToolContext> */
if (unlikely(var57 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_invocation_metrics");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 62);
fatal_exit(1);
}
var55 = var57;
RET_LABEL56:(void)0;
}
}
{
{ /* Inline abstract_compiler#ToolContext#opt_isset_checks_metrics (self) on <self:ToolContext> */
var60 = self->attrs[COLOR_nitc__abstract_compiler__ToolContext___opt_isset_checks_metrics].val; /* _opt_isset_checks_metrics on <self:ToolContext> */
if (unlikely(var60 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_isset_checks_metrics");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 64);
fatal_exit(1);
}
var58 = var60;
RET_LABEL59:(void)0;
}
}
var61 = NEW_core__Array(&type_core__Array__opts__Option);
{ /* var61 = array_instance Array[Option] */
var62 = NEW_core__NativeArray(3l, &type_core__NativeArray__opts__Option);
((struct instance_core__NativeArray*)var62)->values[0] = (val*) var52;
((struct instance_core__NativeArray*)var62)->values[1] = (val*) var55;
((struct instance_core__NativeArray*)var62)->values[2] = (val*) var58;
{
((void(*)(val* self, val* p0, long p1))(var61->class->vft[COLOR_core__array__Array__with_native]))(var61, var62, 3l); /* with_native on <var61:Array[Option]>*/
}
}
{
opts___opts__OptionContext___add_option(var49, var61); /* Direct call opts#OptionContext#add_option on <var49:OptionContext>*/
}
{
{ /* Inline toolcontext#ToolContext#option_context (self) on <self:ToolContext> */
var65 = self->attrs[COLOR_nitc__toolcontext__ToolContext___option_context].val; /* _option_context on <self:ToolContext> */
if (unlikely(var65 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _option_context");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__toolcontext, 357);
fatal_exit(1);
}
var63 = var65;
RET_LABEL64:(void)0;
}
}
{
{ /* Inline abstract_compiler#ToolContext#opt_no_stacktrace (self) on <self:ToolContext> */
var68 = self->attrs[COLOR_nitc__abstract_compiler__ToolContext___opt_no_stacktrace].val; /* _opt_no_stacktrace on <self:ToolContext> */
if (unlikely(var68 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_no_stacktrace");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 66);
fatal_exit(1);
}
var66 = var68;
RET_LABEL67:(void)0;
}
}
var69 = NEW_core__Array(&type_core__Array__opts__Option);
{ /* var69 = array_instance Array[Option] */
var70 = NEW_core__NativeArray(1l, &type_core__NativeArray__opts__Option);
((struct instance_core__NativeArray*)var70)->values[0] = (val*) var66;
{
((void(*)(val* self, val* p0, long p1))(var69->class->vft[COLOR_core__array__Array__with_native]))(var69, var70, 1l); /* with_native on <var69:Array[Option]>*/
}
}
{
opts___opts__OptionContext___add_option(var63, var69); /* Direct call opts#OptionContext#add_option on <var63:OptionContext>*/
}
{
{ /* Inline toolcontext#ToolContext#option_context (self) on <self:ToolContext> */
var73 = self->attrs[COLOR_nitc__toolcontext__ToolContext___option_context].val; /* _option_context on <self:ToolContext> */
if (unlikely(var73 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _option_context");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__toolcontext, 357);
fatal_exit(1);
}
var71 = var73;
RET_LABEL72:(void)0;
}
}
{
{ /* Inline abstract_compiler#ToolContext#opt_no_gcc_directive (self) on <self:ToolContext> */
var76 = self->attrs[COLOR_nitc__abstract_compiler__ToolContext___opt_no_gcc_directive].val; /* _opt_no_gcc_directive on <self:ToolContext> */
if (unlikely(var76 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_no_gcc_directive");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 68);
fatal_exit(1);
}
var74 = var76;
RET_LABEL75:(void)0;
}
}
var77 = NEW_core__Array(&type_core__Array__opts__Option);
{ /* var77 = array_instance Array[Option] */
var78 = NEW_core__NativeArray(1l, &type_core__NativeArray__opts__Option);
((struct instance_core__NativeArray*)var78)->values[0] = (val*) var74;
{
((void(*)(val* self, val* p0, long p1))(var77->class->vft[COLOR_core__array__Array__with_native]))(var77, var78, 1l); /* with_native on <var77:Array[Option]>*/
}
}
{
opts___opts__OptionContext___add_option(var71, var77); /* Direct call opts#OptionContext#add_option on <var71:OptionContext>*/
}
{
{ /* Inline toolcontext#ToolContext#option_context (self) on <self:ToolContext> */
var81 = self->attrs[COLOR_nitc__toolcontext__ToolContext___option_context].val; /* _option_context on <self:ToolContext> */
if (unlikely(var81 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _option_context");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__toolcontext, 357);
fatal_exit(1);
}
var79 = var81;
RET_LABEL80:(void)0;
}
}
{
{ /* Inline abstract_compiler#ToolContext#opt_release (self) on <self:ToolContext> */
var84 = self->attrs[COLOR_nitc__abstract_compiler__ToolContext___opt_release].val; /* _opt_release on <self:ToolContext> */
if (unlikely(var84 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_release");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 70);
fatal_exit(1);
}
var82 = var84;
RET_LABEL83:(void)0;
}
}
var85 = NEW_core__Array(&type_core__Array__opts__Option);
{ /* var85 = array_instance Array[Option] */
var86 = NEW_core__NativeArray(1l, &type_core__NativeArray__opts__Option);
((struct instance_core__NativeArray*)var86)->values[0] = (val*) var82;
{
((void(*)(val* self, val* p0, long p1))(var85->class->vft[COLOR_core__array__Array__with_native]))(var85, var86, 1l); /* with_native on <var85:Array[Option]>*/
}
}
{
opts___opts__OptionContext___add_option(var79, var85); /* Direct call opts#OptionContext#add_option on <var79:OptionContext>*/
}
{
{ /* Inline toolcontext#ToolContext#option_context (self) on <self:ToolContext> */
var89 = self->attrs[COLOR_nitc__toolcontext__ToolContext___option_context].val; /* _option_context on <self:ToolContext> */
if (unlikely(var89 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _option_context");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__toolcontext, 357);
fatal_exit(1);
}
var87 = var89;
RET_LABEL88:(void)0;
}
}
{
{ /* Inline abstract_compiler#ToolContext#opt_max_c_lines (self) on <self:ToolContext> */
var92 = self->attrs[COLOR_nitc__abstract_compiler__ToolContext___opt_max_c_lines].val; /* _opt_max_c_lines on <self:ToolContext> */
if (unlikely(var92 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_max_c_lines");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 40);
fatal_exit(1);
}
var90 = var92;
RET_LABEL91:(void)0;
}
}
{
{ /* Inline abstract_compiler#ToolContext#opt_group_c_files (self) on <self:ToolContext> */
var95 = self->attrs[COLOR_nitc__abstract_compiler__ToolContext___opt_group_c_files].val; /* _opt_group_c_files on <self:ToolContext> */
if (unlikely(var95 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_group_c_files");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 42);
fatal_exit(1);
}
var93 = var95;
RET_LABEL94:(void)0;
}
}
var96 = NEW_core__Array(&type_core__Array__opts__Option);
{ /* var96 = array_instance Array[Option] */
var97 = NEW_core__NativeArray(2l, &type_core__NativeArray__opts__Option);
((struct instance_core__NativeArray*)var97)->values[0] = (val*) var90;
((struct instance_core__NativeArray*)var97)->values[1] = (val*) var93;
{
((void(*)(val* self, val* p0, long p1))(var96->class->vft[COLOR_core__array__Array__with_native]))(var96, var97, 2l); /* with_native on <var96:Array[Option]>*/
}
}
{
opts___opts__OptionContext___add_option(var87, var96); /* Direct call opts#OptionContext#add_option on <var87:OptionContext>*/
}
{
{ /* Inline toolcontext#ToolContext#option_context (self) on <self:ToolContext> */
var100 = self->attrs[COLOR_nitc__toolcontext__ToolContext___option_context].val; /* _option_context on <self:ToolContext> */
if (unlikely(var100 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _option_context");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__toolcontext, 357);
fatal_exit(1);
}
var98 = var100;
RET_LABEL99:(void)0;
}
}
{
{ /* Inline abstract_compiler#ToolContext#opt_debug (self) on <self:ToolContext> */
var103 = self->attrs[COLOR_nitc__abstract_compiler__ToolContext___opt_debug].val; /* _opt_debug on <self:ToolContext> */
if (unlikely(var103 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_debug");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 72);
fatal_exit(1);
}
var101 = var103;
RET_LABEL102:(void)0;
}
}
var104 = NEW_core__Array(&type_core__Array__opts__Option);
{ /* var104 = array_instance Array[Option] */
var105 = NEW_core__NativeArray(1l, &type_core__NativeArray__opts__Option);
((struct instance_core__NativeArray*)var105)->values[0] = (val*) var101;
{
((void(*)(val* self, val* p0, long p1))(var104->class->vft[COLOR_core__array__Array__with_native]))(var104, var105, 1l); /* with_native on <var104:Array[Option]>*/
}
}
{
opts___opts__OptionContext___add_option(var98, var104); /* Direct call opts#OptionContext#add_option on <var98:OptionContext>*/
}
{
{ /* Inline abstract_compiler#ToolContext#opt_no_main (self) on <self:ToolContext> */
var108 = self->attrs[COLOR_nitc__abstract_compiler__ToolContext___opt_no_main].val; /* _opt_no_main on <self:ToolContext> */
if (unlikely(var108 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_no_main");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 36);
fatal_exit(1);
}
var106 = var108;
RET_LABEL107:(void)0;
}
}
{
{ /* Inline opts#Option#hidden= (var106,1) on <var106:OptionBool> */
var106->attrs[COLOR_opts__Option___hidden].s = 1; /* _hidden on <var106:OptionBool> */
RET_LABEL109:(void)0;
}
}
RET_LABEL:;
}
/* method abstract_compiler#ToolContext#process_options for (self: ToolContext, Sequence[String]) */
void nitc__abstract_compiler___ToolContext___process_options(val* self, val* p0) {
val* var_args /* var args: Sequence[String] */;
short int var /* : Bool */;
val* var1 /* : OptionString */;
val* var3 /* : OptionString */;
val* var4 /* : nullable Object */;
val* var6 /* : nullable Object */;
short int var7 /* : Bool */;
short int var8 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var10 /* : Bool */;
short int var11 /* : Bool */;
short int var_ /* var : Bool */;
val* var12 /* : OptionString */;
val* var14 /* : OptionString */;
val* var15 /* : nullable Object */;
val* var17 /* : nullable Object */;
short int var18 /* : Bool */;
short int var19 /* : Bool */;
short int var21 /* : Bool */;
short int var22 /* : Bool */;
val* var23 /* : Sys */;
static val* varonce;
val* var24 /* : String */;
char* var25 /* : CString */;
val* var26 /* : String */;
val* var27 /* : Sys */;
val* var29 /* : OptionBool */;
val* var31 /* : OptionBool */;
val* var32 /* : nullable Object */;
val* var34 /* : nullable Object */;
short int var35 /* : Bool */;
val* var36 /* : OptionBool */;
val* var38 /* : OptionBool */;
short int var40 /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
val* var41 /* : nullable Object */;
val* var42 /* : OptionBool */;
val* var44 /* : OptionBool */;
short int var46 /* : Bool */;
int cltype47;
int idtype48;
const struct type* type_struct49;
const char* var_class_name50;
val* var51 /* : nullable Object */;
val* var52 /* : OptionBool */;
val* var54 /* : OptionBool */;
short int var56 /* : Bool */;
int cltype57;
int idtype58;
const struct type* type_struct59;
const char* var_class_name60;
val* var61 /* : nullable Object */;
val* var62 /* : OptionBool */;
val* var64 /* : OptionBool */;
short int var66 /* : Bool */;
int cltype67;
int idtype68;
const struct type* type_struct69;
const char* var_class_name70;
val* var71 /* : nullable Object */;
val* var72 /* : OptionBool */;
val* var74 /* : OptionBool */;
short int var76 /* : Bool */;
int cltype77;
int idtype78;
const struct type* type_struct79;
const char* var_class_name80;
val* var81 /* : nullable Object */;
var_args = p0;
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nitc__abstract_compiler___ToolContext___process_options]))(self, p0); /* process_options on <self:ToolContext>*/
}
{
{ /* Inline abstract_compiler#ToolContext#opt_output (self) on <self:ToolContext> */
var3 = self->attrs[COLOR_nitc__abstract_compiler__ToolContext___opt_output].val; /* _opt_output on <self:ToolContext> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_output");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 30);
fatal_exit(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
{ /* Inline opts#Option#value (var1) on <var1:OptionString> */
var6 = var1->attrs[COLOR_opts__Option___value].val; /* _value on <var1:OptionString> */
var4 = var6;
RET_LABEL5:(void)0;
}
}
if (var4 == NULL) {
var7 = 0; /* is null */
} else {
var7 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var4,((val*)NULL)) on <var4:nullable Object(nullable String)> */
var_other = ((val*)NULL);
{
var10 = ((short int(*)(val* self, val* p0))(var4->class->vft[COLOR_core__kernel__Object___61d_61d]))(var4, var_other); /* == on <var4:nullable String(String)>*/
}
var11 = !var10;
var8 = var11;
goto RET_LABEL9;
RET_LABEL9:(void)0;
}
var7 = var8;
}
var_ = var7;
if (var7){
{
{ /* Inline abstract_compiler#ToolContext#opt_dir (self) on <self:ToolContext> */
var14 = self->attrs[COLOR_nitc__abstract_compiler__ToolContext___opt_dir].val; /* _opt_dir on <self:ToolContext> */
if (unlikely(var14 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_dir");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 32);
fatal_exit(1);
}
var12 = var14;
RET_LABEL13:(void)0;
}
}
{
{ /* Inline opts#Option#value (var12) on <var12:OptionString> */
var17 = var12->attrs[COLOR_opts__Option___value].val; /* _value on <var12:OptionString> */
var15 = var17;
RET_LABEL16:(void)0;
}
}
if (var15 == NULL) {
var18 = 0; /* is null */
} else {
var18 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var15,((val*)NULL)) on <var15:nullable Object(nullable String)> */
var_other = ((val*)NULL);
{
var21 = ((short int(*)(val* self, val* p0))(var15->class->vft[COLOR_core__kernel__Object___61d_61d]))(var15, var_other); /* == on <var15:nullable String(String)>*/
}
var22 = !var21;
var19 = var22;
goto RET_LABEL20;
RET_LABEL20:(void)0;
}
var18 = var19;
}
var = var18;
} else {
var = var_;
}
if (var){
var23 = glob_sys;
if (likely(varonce!=NULL)) {
var24 = varonce;
} else {
var25 = "Option Error: cannot use both --dir and --output";
var26 = core__abstract_text___CString___to_s_full(var25, 48l, 48l);
var24 = var26;
varonce = var24;
}
{
core__file___Sys___print(var23, var24); /* Direct call file#Sys#print on <var23:Sys>*/
}
var27 = glob_sys;
{
{ /* Inline kernel#Sys#exit (var27,1l) on <var27:Sys> */
exit(1l);
RET_LABEL28:(void)0;
}
}
} else {
}
{
{ /* Inline abstract_compiler#ToolContext#opt_no_check_all (self) on <self:ToolContext> */
var31 = self->attrs[COLOR_nitc__abstract_compiler__ToolContext___opt_no_check_all].val; /* _opt_no_check_all on <self:ToolContext> */
if (unlikely(var31 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_no_check_all");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 58);
fatal_exit(1);
}
var29 = var31;
RET_LABEL30:(void)0;
}
}
{
{ /* Inline opts#Option#value (var29) on <var29:OptionBool> */
var34 = var29->attrs[COLOR_opts__Option___value].val; /* _value on <var29:OptionBool> */
var32 = var34;
RET_LABEL33:(void)0;
}
}
var35 = (short int)((long)(var32)>>2);
if (var35){
{
{ /* Inline abstract_compiler#ToolContext#opt_no_check_covariance (self) on <self:ToolContext> */
var38 = self->attrs[COLOR_nitc__abstract_compiler__ToolContext___opt_no_check_covariance].val; /* _opt_no_check_covariance on <self:ToolContext> */
if (unlikely(var38 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_no_check_covariance");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 48);
fatal_exit(1);
}
var36 = var38;
RET_LABEL37:(void)0;
}
}
{
{ /* Inline opts#Option#value= (var36,1) on <var36:OptionBool> */
/* Covariant cast for argument 0 (value) <1:Bool> isa VALUE */
/* <1:Bool> isa VALUE */
type_struct = var36->type->resolution_table->types[COLOR_opts__Option__VALUE];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= (&type_core__Bool)->table_size) {
var40 = 0;
} else {
var40 = (&type_core__Bool)->type_table[cltype] == idtype;
}
if (unlikely(!var40)) {
var_class_name = type_core__Bool.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "VALUE", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_opts, 40);
fatal_exit(1);
}
var41 = (val*)((long)(1)<<2|3);
var36->attrs[COLOR_opts__Option___value].val = var41; /* _value on <var36:OptionBool> */
RET_LABEL39:(void)0;
}
}
{
{ /* Inline abstract_compiler#ToolContext#opt_no_check_attr_isset (self) on <self:ToolContext> */
var44 = self->attrs[COLOR_nitc__abstract_compiler__ToolContext___opt_no_check_attr_isset].val; /* _opt_no_check_attr_isset on <self:ToolContext> */
if (unlikely(var44 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_no_check_attr_isset");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 50);
fatal_exit(1);
}
var42 = var44;
RET_LABEL43:(void)0;
}
}
{
{ /* Inline opts#Option#value= (var42,1) on <var42:OptionBool> */
/* Covariant cast for argument 0 (value) <1:Bool> isa VALUE */
/* <1:Bool> isa VALUE */
type_struct49 = var42->type->resolution_table->types[COLOR_opts__Option__VALUE];
cltype47 = type_struct49->color;
idtype48 = type_struct49->id;
if(cltype47 >= (&type_core__Bool)->table_size) {
var46 = 0;
} else {
var46 = (&type_core__Bool)->type_table[cltype47] == idtype48;
}
if (unlikely(!var46)) {
var_class_name50 = type_core__Bool.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "VALUE", var_class_name50);
PRINT_ERROR(" (%s:%d)\n", FILE_opts, 40);
fatal_exit(1);
}
var51 = (val*)((long)(1)<<2|3);
var42->attrs[COLOR_opts__Option___value].val = var51; /* _value on <var42:OptionBool> */
RET_LABEL45:(void)0;
}
}
{
{ /* Inline abstract_compiler#ToolContext#opt_no_check_assert (self) on <self:ToolContext> */
var54 = self->attrs[COLOR_nitc__abstract_compiler__ToolContext___opt_no_check_assert].val; /* _opt_no_check_assert on <self:ToolContext> */
if (unlikely(var54 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_no_check_assert");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 52);
fatal_exit(1);
}
var52 = var54;
RET_LABEL53:(void)0;
}
}
{
{ /* Inline opts#Option#value= (var52,1) on <var52:OptionBool> */
/* Covariant cast for argument 0 (value) <1:Bool> isa VALUE */
/* <1:Bool> isa VALUE */
type_struct59 = var52->type->resolution_table->types[COLOR_opts__Option__VALUE];
cltype57 = type_struct59->color;
idtype58 = type_struct59->id;
if(cltype57 >= (&type_core__Bool)->table_size) {
var56 = 0;
} else {
var56 = (&type_core__Bool)->type_table[cltype57] == idtype58;
}
if (unlikely(!var56)) {
var_class_name60 = type_core__Bool.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "VALUE", var_class_name60);
PRINT_ERROR(" (%s:%d)\n", FILE_opts, 40);
fatal_exit(1);
}
var61 = (val*)((long)(1)<<2|3);
var52->attrs[COLOR_opts__Option___value].val = var61; /* _value on <var52:OptionBool> */
RET_LABEL55:(void)0;
}
}
{
{ /* Inline abstract_compiler#ToolContext#opt_no_check_autocast (self) on <self:ToolContext> */
var64 = self->attrs[COLOR_nitc__abstract_compiler__ToolContext___opt_no_check_autocast].val; /* _opt_no_check_autocast on <self:ToolContext> */
if (unlikely(var64 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_no_check_autocast");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 54);
fatal_exit(1);
}
var62 = var64;
RET_LABEL63:(void)0;
}
}
{
{ /* Inline opts#Option#value= (var62,1) on <var62:OptionBool> */
/* Covariant cast for argument 0 (value) <1:Bool> isa VALUE */
/* <1:Bool> isa VALUE */
type_struct69 = var62->type->resolution_table->types[COLOR_opts__Option__VALUE];
cltype67 = type_struct69->color;
idtype68 = type_struct69->id;
if(cltype67 >= (&type_core__Bool)->table_size) {
var66 = 0;
} else {
var66 = (&type_core__Bool)->type_table[cltype67] == idtype68;
}
if (unlikely(!var66)) {
var_class_name70 = type_core__Bool.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "VALUE", var_class_name70);
PRINT_ERROR(" (%s:%d)\n", FILE_opts, 40);
fatal_exit(1);
}
var71 = (val*)((long)(1)<<2|3);
var62->attrs[COLOR_opts__Option___value].val = var71; /* _value on <var62:OptionBool> */
RET_LABEL65:(void)0;
}
}
{
{ /* Inline abstract_compiler#ToolContext#opt_no_check_null (self) on <self:ToolContext> */
var74 = self->attrs[COLOR_nitc__abstract_compiler__ToolContext___opt_no_check_null].val; /* _opt_no_check_null on <self:ToolContext> */
if (unlikely(var74 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_no_check_null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 56);
fatal_exit(1);
}
var72 = var74;
RET_LABEL73:(void)0;
}
}
{
{ /* Inline opts#Option#value= (var72,1) on <var72:OptionBool> */
/* Covariant cast for argument 0 (value) <1:Bool> isa VALUE */
/* <1:Bool> isa VALUE */
type_struct79 = var72->type->resolution_table->types[COLOR_opts__Option__VALUE];
cltype77 = type_struct79->color;
idtype78 = type_struct79->id;
if(cltype77 >= (&type_core__Bool)->table_size) {
var76 = 0;
} else {
var76 = (&type_core__Bool)->type_table[cltype77] == idtype78;
}
if (unlikely(!var76)) {
var_class_name80 = type_core__Bool.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "VALUE", var_class_name80);
PRINT_ERROR(" (%s:%d)\n", FILE_opts, 40);
fatal_exit(1);
}
var81 = (val*)((long)(1)<<2|3);
var72->attrs[COLOR_opts__Option___value].val = var81; /* _value on <var72:OptionBool> */
RET_LABEL75:(void)0;
}
}
} else {
}
RET_LABEL:;
}
/* method abstract_compiler#ModelBuilder#write_and_make for (self: ModelBuilder, AbstractCompiler) */
void nitc__abstract_compiler___ModelBuilder___write_and_make(val* self, val* p0) {
val* var_compiler /* var compiler: AbstractCompiler */;
val* var /* : Platform */;
val* var2 /* : Platform */;
val* var_platform /* var platform: Platform */;
val* var3 /* : ToolContext */;
val* var5 /* : ToolContext */;
val* var6 /* : Toolchain */;
val* var_toolchain /* var toolchain: Toolchain */;
var_compiler = p0;
{
{ /* Inline abstract_compiler#AbstractCompiler#target_platform (var_compiler) on <var_compiler:AbstractCompiler> */
var2 = var_compiler->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___target_platform].val; /* _target_platform on <var_compiler:AbstractCompiler> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _target_platform");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 549);
fatal_exit(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
var_platform = var;
{
{ /* Inline modelbuilder_base#ModelBuilder#toolcontext (self) on <self:ModelBuilder> */
var5 = self->attrs[COLOR_nitc__modelbuilder_base__ModelBuilder___toolcontext].val; /* _toolcontext on <self:ModelBuilder> */
if (unlikely(var5 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelbuilder_base, 47);
fatal_exit(1);
}
var3 = var5;
RET_LABEL4:(void)0;
}
}
{
var6 = ((val*(*)(val* self, val* p0, val* p1))(var_platform->class->vft[COLOR_nitc__abstract_compiler__Platform__toolchain]))(var_platform, var3, var_compiler); /* toolchain on <var_platform:Platform>*/
}
var_toolchain = var6;
{
{ /* Inline abstract_compiler#AbstractCompiler#toolchain= (var_compiler,var_toolchain) on <var_compiler:AbstractCompiler> */
var_compiler->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___toolchain].val = var_toolchain; /* _toolchain on <var_compiler:AbstractCompiler> */
RET_LABEL7:(void)0;
}
}
{
nitc___nitc__MakefileToolchain___Toolchain__write_and_make(var_toolchain); /* Direct call abstract_compiler#MakefileToolchain#write_and_make on <var_toolchain:Toolchain>*/
}
RET_LABEL:;
}
/* method abstract_compiler#Platform#toolchain for (self: Platform, ToolContext, AbstractCompiler): Toolchain */
val* nitc__abstract_compiler___Platform___toolchain(val* self, val* p0, val* p1) {
val* var /* : Toolchain */;
val* var_toolcontext /* var toolcontext: ToolContext */;
val* var_compiler /* var compiler: AbstractCompiler */;
val* var1 /* : MakefileToolchain */;
var_toolcontext = p0;
var_compiler = p1;
var1 = NEW_nitc__MakefileToolchain(&type_nitc__MakefileToolchain);
{
((void(*)(val* self, val* p0))(var1->class->vft[COLOR_nitc__abstract_compiler__Toolchain__toolcontext_61d]))(var1, var_toolcontext); /* toolcontext= on <var1:MakefileToolchain>*/
}
{
((void(*)(val* self, val* p0))(var1->class->vft[COLOR_nitc__abstract_compiler__Toolchain__compiler_61d]))(var1, var_compiler); /* compiler= on <var1:MakefileToolchain>*/
}
{
((void(*)(val* self))(var1->class->vft[COLOR_core__kernel__Object__init]))(var1); /* init on <var1:MakefileToolchain>*/
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler#Toolchain#toolcontext for (self: Toolchain): ToolContext */
val* nitc___nitc__Toolchain___toolcontext(val* self) {
val* var /* : ToolContext */;
val* var1 /* : ToolContext */;
var1 = self->attrs[COLOR_nitc__abstract_compiler__Toolchain___toolcontext].val; /* _toolcontext on <self:Toolchain> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 131);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#Toolchain#toolcontext= for (self: Toolchain, ToolContext) */
void nitc___nitc__Toolchain___toolcontext_61d(val* self, val* p0) {
self->attrs[COLOR_nitc__abstract_compiler__Toolchain___toolcontext].val = p0; /* _toolcontext on <self:Toolchain> */
RET_LABEL:;
}
/* method abstract_compiler#Toolchain#compiler for (self: Toolchain): AbstractCompiler */
val* nitc___nitc__Toolchain___compiler(val* self) {
val* var /* : AbstractCompiler */;
val* var1 /* : AbstractCompiler */;
var1 = self->attrs[COLOR_nitc__abstract_compiler__Toolchain___compiler].val; /* _compiler on <self:Toolchain> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 134);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#Toolchain#compiler= for (self: Toolchain, AbstractCompiler) */
void nitc___nitc__Toolchain___compiler_61d(val* self, val* p0) {
self->attrs[COLOR_nitc__abstract_compiler__Toolchain___compiler].val = p0; /* _compiler on <self:Toolchain> */
RET_LABEL:;
}
/* method abstract_compiler#Toolchain#root_compile_dir for (self: Toolchain): String */
val* nitc___nitc__Toolchain___root_compile_dir(val* self) {
val* var /* : String */;
val* var1 /* : ToolContext */;
val* var3 /* : ToolContext */;
val* var4 /* : OptionString */;
val* var6 /* : OptionString */;
val* var7 /* : nullable Object */;
val* var9 /* : nullable Object */;
val* var_compile_dir /* var compile_dir: nullable String */;
short int var10 /* : Bool */;
short int var11 /* : Bool */;
static val* varonce;
val* var12 /* : String */;
char* var13 /* : CString */;
val* var14 /* : String */;
{
{ /* Inline abstract_compiler#Toolchain#toolcontext (self) on <self:Toolchain> */
var3 = self->attrs[COLOR_nitc__abstract_compiler__Toolchain___toolcontext].val; /* _toolcontext on <self:Toolchain> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 131);
fatal_exit(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
{ /* Inline abstract_compiler#ToolContext#opt_compile_dir (var1) on <var1:ToolContext> */
var6 = var1->attrs[COLOR_nitc__abstract_compiler__ToolContext___opt_compile_dir].val; /* _opt_compile_dir on <var1:ToolContext> */
if (unlikely(var6 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_compile_dir");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 44);
fatal_exit(1);
}
var4 = var6;
RET_LABEL5:(void)0;
}
}
{
{ /* Inline opts#Option#value (var4) on <var4:OptionString> */
var9 = var4->attrs[COLOR_opts__Option___value].val; /* _value on <var4:OptionString> */
var7 = var9;
RET_LABEL8:(void)0;
}
}
var_compile_dir = var7;
if (var_compile_dir == NULL) {
var10 = 1; /* is null */
} else {
var10 = 0; /* arg is null but recv is not */
}
if (0) {
var11 = ((short int(*)(val* self, val* p0))(var_compile_dir->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_compile_dir, ((val*)NULL)); /* == on <var_compile_dir:nullable String>*/
var10 = var11;
}
if (var10){
if (likely(varonce!=NULL)) {
var12 = varonce;
} else {
var13 = "nit_compile";
var14 = core__abstract_text___CString___to_s_full(var13, 11l, 11l);
var12 = var14;
varonce = var12;
}
var_compile_dir = var12;
} else {
}
var = var_compile_dir;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler#Toolchain#compile_dir for (self: Toolchain): String */
val* nitc___nitc__Toolchain___compile_dir(val* self) {
val* var /* : String */;
val* var1 /* : String */;
{
var1 = nitc___nitc__Toolchain___root_compile_dir(self);
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler#Toolchain#init for (self: Toolchain) */
void nitc___nitc__Toolchain___core__kernel__Object__init(val* self) {
{
((void(*)(val* self))(self->class->vft[COLOR_nitc___nitc__Toolchain___core__kernel__Object__init]))(self); /* init on <self:Toolchain>*/
}
RET_LABEL:;
}
/* method abstract_compiler#MakefileToolchain#write_and_make for (self: MakefileToolchain) */
void nitc___nitc__MakefileToolchain___Toolchain__write_and_make(val* self) {
val* var /* : ToolContext */;
val* var2 /* : ToolContext */;
val* var3 /* : OptionBool */;
val* var5 /* : OptionBool */;
val* var6 /* : nullable Object */;
val* var8 /* : nullable Object */;
short int var9 /* : Bool */;
short int var_debug /* var debug: Bool */;
val* var10 /* : String */;
val* var_compile_dir /* var compile_dir: String */;
val* var11 /* : ToolContext */;
val* var13 /* : ToolContext */;
val* var14 /* : OptionString */;
val* var16 /* : OptionString */;
val* var17 /* : nullable Object */;
val* var19 /* : nullable Object */;
short int var20 /* : Bool */;
short int var21 /* : Bool */;
short int var_auto_remove /* var auto_remove: Bool */;
val* var22 /* : Sys */;
long var23 /* : Int */;
long var25 /* : Int */;
long var_time0 /* var time0: Int */;
val* var26 /* : ToolContext */;
val* var28 /* : ToolContext */;
static val* varonce;
val* var29 /* : String */;
char* var30 /* : CString */;
val* var31 /* : String */;
val* var32 /* : String */;
val* var33 /* : nullable Error */;
val* var34 /* : nullable Error */;
val* var35 /* : Array[String] */;
val* var_cfiles /* var cfiles: Array[String] */;
val* var36 /* : Sys */;
long var37 /* : Int */;
long var39 /* : Int */;
long var_time1 /* var time1: Int */;
val* var40 /* : ToolContext */;
val* var42 /* : ToolContext */;
val* var44 /* : NativeArray[String] */;
static val* varonce43;
static val* varonce45;
val* var46 /* : String */;
char* var47 /* : CString */;
val* var48 /* : String */;
static val* varonce49;
val* var50 /* : String */;
char* var51 /* : CString */;
val* var52 /* : String */;
long var53 /* : Int */;
short int var55 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var56 /* : Int */;
val* var57 /* : String */;
val* var58 /* : String */;
val* var59 /* : ToolContext */;
val* var61 /* : ToolContext */;
val* var62 /* : OptionBool */;
val* var64 /* : OptionBool */;
val* var65 /* : nullable Object */;
val* var67 /* : nullable Object */;
short int var68 /* : Bool */;
val* var69 /* : ToolContext */;
val* var71 /* : ToolContext */;
static val* varonce72;
val* var73 /* : String */;
char* var74 /* : CString */;
val* var75 /* : String */;
val* var76 /* : Sys */;
val* var78 /* : Sys */;
val* var80 /* : NativeArray[String] */;
static val* varonce79;
static val* varonce81;
val* var82 /* : String */;
char* var83 /* : CString */;
val* var84 /* : String */;
static val* varonce85;
val* var86 /* : String */;
char* var87 /* : CString */;
val* var88 /* : String */;
val* var89 /* : String */;
val* var90 /* : String */;
val* var91 /* : String */;
long var92 /* : Int */;
val* var93 /* : Sys */;
long var94 /* : Int */;
long var96 /* : Int */;
val* var97 /* : ToolContext */;
val* var99 /* : ToolContext */;
val* var101 /* : NativeArray[String] */;
static val* varonce100;
static val* varonce102;
val* var103 /* : String */;
char* var104 /* : CString */;
val* var105 /* : String */;
static val* varonce106;
val* var107 /* : String */;
char* var108 /* : CString */;
val* var109 /* : String */;
long var110 /* : Int */;
short int var112 /* : Bool */;
int cltype113;
int idtype114;
const char* var_class_name115;
long var116 /* : Int */;
val* var117 /* : String */;
val* var118 /* : String */;
{
{ /* Inline abstract_compiler#Toolchain#toolcontext (self) on <self:MakefileToolchain> */
var2 = self->attrs[COLOR_nitc__abstract_compiler__Toolchain___toolcontext].val; /* _toolcontext on <self:MakefileToolchain> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 131);
fatal_exit(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
{ /* Inline abstract_compiler#ToolContext#opt_debug (var) on <var:ToolContext> */
var5 = var->attrs[COLOR_nitc__abstract_compiler__ToolContext___opt_debug].val; /* _opt_debug on <var:ToolContext> */
if (unlikely(var5 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_debug");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 72);
fatal_exit(1);
}
var3 = var5;
RET_LABEL4:(void)0;
}
}
{
{ /* Inline opts#Option#value (var3) on <var3:OptionBool> */
var8 = var3->attrs[COLOR_opts__Option___value].val; /* _value on <var3:OptionBool> */
var6 = var8;
RET_LABEL7:(void)0;
}
}
var9 = (short int)((long)(var6)>>2);
var_debug = var9;
{
var10 = ((val*(*)(val* self))(self->class->vft[COLOR_nitc__abstract_compiler__Toolchain__compile_dir]))(self); /* compile_dir on <self:MakefileToolchain>*/
}
var_compile_dir = var10;
{
{ /* Inline abstract_compiler#Toolchain#toolcontext (self) on <self:MakefileToolchain> */
var13 = self->attrs[COLOR_nitc__abstract_compiler__Toolchain___toolcontext].val; /* _toolcontext on <self:MakefileToolchain> */
if (unlikely(var13 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 131);
fatal_exit(1);
}
var11 = var13;
RET_LABEL12:(void)0;
}
}
{
{ /* Inline abstract_compiler#ToolContext#opt_compile_dir (var11) on <var11:ToolContext> */
var16 = var11->attrs[COLOR_nitc__abstract_compiler__ToolContext___opt_compile_dir].val; /* _opt_compile_dir on <var11:ToolContext> */
if (unlikely(var16 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_compile_dir");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 44);
fatal_exit(1);
}
var14 = var16;
RET_LABEL15:(void)0;
}
}
{
{ /* Inline opts#Option#value (var14) on <var14:OptionString> */
var19 = var14->attrs[COLOR_opts__Option___value].val; /* _value on <var14:OptionString> */
var17 = var19;
RET_LABEL18:(void)0;
}
}
if (var17 == NULL) {
var20 = 1; /* is null */
} else {
var20 = 0; /* arg is null but recv is not */
}
if (0) {
var21 = ((short int(*)(val* self, val* p0))(var17->class->vft[COLOR_core__kernel__Object___61d_61d]))(var17, ((val*)NULL)); /* == on <var17:nullable Object(nullable String)>*/
var20 = var21;
}
var_auto_remove = var20;
if (var_debug){
var_auto_remove = 0;
} else {
}
var22 = glob_sys;
{
{ /* Inline time#Sys#get_time (var22) on <var22:Sys> */
struct nitni_instance* var_for_c_0;
var_for_c_0 = nit_alloc(sizeof(struct nitni_instance));
var_for_c_0->value = var22;
var25 = time___Sys_get_time___impl(var_for_c_0);
var23 = var25;
goto RET_LABEL24;
RET_LABEL24:(void)0;
}
}
var_time0 = var23;
{
{ /* Inline abstract_compiler#Toolchain#toolcontext (self) on <self:MakefileToolchain> */
var28 = self->attrs[COLOR_nitc__abstract_compiler__Toolchain___toolcontext].val; /* _toolcontext on <self:MakefileToolchain> */
if (unlikely(var28 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 131);
fatal_exit(1);
}
var26 = var28;
RET_LABEL27:(void)0;
}
}
if (likely(varonce!=NULL)) {
var29 = varonce;
} else {
var30 = "*** WRITING C ***";
var31 = core__abstract_text___CString___to_s_full(var30, 17l, 17l);
var29 = var31;
varonce = var29;
}
{
nitc___nitc__ToolContext___info(var26, var29, 1l); /* Direct call toolcontext#ToolContext#info on <var26:ToolContext>*/
}
{
var32 = nitc___nitc__Toolchain___root_compile_dir(self);
}
{
var33 = core__file___String___mkdir(var32, ((val*)NULL));
}
{
var34 = core__file___String___mkdir(var_compile_dir, ((val*)NULL));
}
var35 = NEW_core__Array(&type_core__Array__core__String);
{
core___core__Array___core__kernel__Object__init(var35); /* Direct call array#Array#init on <var35:Array[String]>*/
}
var_cfiles = var35;
{
((void(*)(val* self, val* p0, val* p1))(self->class->vft[COLOR_nitc__abstract_compiler__MakefileToolchain__write_files]))(self, var_compile_dir, var_cfiles); /* write_files on <self:MakefileToolchain>*/
}
{
((void(*)(val* self, val* p0, val* p1))(self->class->vft[COLOR_nitc__abstract_compiler__MakefileToolchain__write_makefile]))(self, var_compile_dir, var_cfiles); /* write_makefile on <self:MakefileToolchain>*/
}
var36 = glob_sys;
{
{ /* Inline time#Sys#get_time (var36) on <var36:Sys> */
struct nitni_instance* var_for_c_0;
var_for_c_0 = nit_alloc(sizeof(struct nitni_instance));
var_for_c_0->value = var36;
var39 = time___Sys_get_time___impl(var_for_c_0);
var37 = var39;
goto RET_LABEL38;
RET_LABEL38:(void)0;
}
}
var_time1 = var37;
{
{ /* Inline abstract_compiler#Toolchain#toolcontext (self) on <self:MakefileToolchain> */
var42 = self->attrs[COLOR_nitc__abstract_compiler__Toolchain___toolcontext].val; /* _toolcontext on <self:MakefileToolchain> */
if (unlikely(var42 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 131);
fatal_exit(1);
}
var40 = var42;
RET_LABEL41:(void)0;
}
}
if (unlikely(varonce43==NULL)) {
var44 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce45!=NULL)) {
var46 = varonce45;
} else {
var47 = "*** END WRITING C: ";
var48 = core__abstract_text___CString___to_s_full(var47, 19l, 19l);
var46 = var48;
varonce45 = var46;
}
((struct instance_core__NativeArray*)var44)->values[0]=var46;
if (likely(varonce49!=NULL)) {
var50 = varonce49;
} else {
var51 = " ***";
var52 = core__abstract_text___CString___to_s_full(var51, 4l, 4l);
var50 = var52;
varonce49 = var50;
}
((struct instance_core__NativeArray*)var44)->values[2]=var50;
} else {
var44 = varonce43;
varonce43 = NULL;
}
{
{ /* Inline kernel#Int#- (var_time1,var_time0) on <var_time1:Int> */
/* Covariant cast for argument 0 (i) <var_time0:Int> isa OTHER */
/* <var_time0:Int> isa OTHER */
var55 = 1; /* easy <var_time0:Int> isa OTHER*/
if (unlikely(!var55)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var56 = var_time1 - var_time0;
var53 = var56;
goto RET_LABEL54;
RET_LABEL54:(void)0;
}
}
var57 = core__flat___Int___core__abstract_text__Object__to_s(var53);
((struct instance_core__NativeArray*)var44)->values[1]=var57;
{
var58 = ((val*(*)(val* self))(var44->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var44); /* native_to_s on <var44:NativeArray[String]>*/
}
varonce43 = var44;
{
nitc___nitc__ToolContext___info(var40, var58, 2l); /* Direct call toolcontext#ToolContext#info on <var40:ToolContext>*/
}
{
{ /* Inline abstract_compiler#Toolchain#toolcontext (self) on <self:MakefileToolchain> */
var61 = self->attrs[COLOR_nitc__abstract_compiler__Toolchain___toolcontext].val; /* _toolcontext on <self:MakefileToolchain> */
if (unlikely(var61 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 131);
fatal_exit(1);
}
var59 = var61;
RET_LABEL60:(void)0;
}
}
{
{ /* Inline abstract_compiler#ToolContext#opt_no_cc (var59) on <var59:ToolContext> */
var64 = var59->attrs[COLOR_nitc__abstract_compiler__ToolContext___opt_no_cc].val; /* _opt_no_cc on <var59:ToolContext> */
if (unlikely(var64 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_no_cc");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 34);
fatal_exit(1);
}
var62 = var64;
RET_LABEL63:(void)0;
}
}
{
{ /* Inline opts#Option#value (var62) on <var62:OptionBool> */
var67 = var62->attrs[COLOR_opts__Option___value].val; /* _value on <var62:OptionBool> */
var65 = var67;
RET_LABEL66:(void)0;
}
}
var68 = (short int)((long)(var65)>>2);
if (var68){
goto RET_LABEL;
} else {
}
var_time0 = var_time1;
{
{ /* Inline abstract_compiler#Toolchain#toolcontext (self) on <self:MakefileToolchain> */
var71 = self->attrs[COLOR_nitc__abstract_compiler__Toolchain___toolcontext].val; /* _toolcontext on <self:MakefileToolchain> */
if (unlikely(var71 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 131);
fatal_exit(1);
}
var69 = var71;
RET_LABEL70:(void)0;
}
}
if (likely(varonce72!=NULL)) {
var73 = varonce72;
} else {
var74 = "*** COMPILING C ***";
var75 = core__abstract_text___CString___to_s_full(var74, 19l, 19l);
var73 = var75;
varonce72 = var73;
}
{
nitc___nitc__ToolContext___info(var69, var73, 1l); /* Direct call toolcontext#ToolContext#info on <var69:ToolContext>*/
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nitc__abstract_compiler__MakefileToolchain__compile_c_code]))(self, var_compile_dir); /* compile_c_code on <self:MakefileToolchain>*/
}
if (var_auto_remove){
{
{ /* Inline kernel#Object#sys (self) on <self:MakefileToolchain> */
var78 = glob_sys;
var76 = var78;
goto RET_LABEL77;
RET_LABEL77:(void)0;
}
}
if (unlikely(varonce79==NULL)) {
var80 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce81!=NULL)) {
var82 = varonce81;
} else {
var83 = "rm -r -- \'";
var84 = core__abstract_text___CString___to_s_full(var83, 10l, 10l);
var82 = var84;
varonce81 = var82;
}
((struct instance_core__NativeArray*)var80)->values[0]=var82;
if (likely(varonce85!=NULL)) {
var86 = varonce85;
} else {
var87 = "/\'";
var88 = core__abstract_text___CString___to_s_full(var87, 2l, 2l);
var86 = var88;
varonce85 = var86;
}
((struct instance_core__NativeArray*)var80)->values[2]=var86;
} else {
var80 = varonce79;
varonce79 = NULL;
}
{
var89 = nitc___nitc__Toolchain___root_compile_dir(self);
}
{
var90 = core___core__Text___escape_to_sh(var89);
}
((struct instance_core__NativeArray*)var80)->values[1]=var90;
{
var91 = ((val*(*)(val* self))(var80->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var80); /* native_to_s on <var80:NativeArray[String]>*/
}
varonce79 = var80;
{
var92 = core__exec___Sys___system(var76, var91);
}
} else {
}
var93 = glob_sys;
{
{ /* Inline time#Sys#get_time (var93) on <var93:Sys> */
struct nitni_instance* var_for_c_0;
var_for_c_0 = nit_alloc(sizeof(struct nitni_instance));
var_for_c_0->value = var93;
var96 = time___Sys_get_time___impl(var_for_c_0);
var94 = var96;
goto RET_LABEL95;
RET_LABEL95:(void)0;
}
}
var_time1 = var94;
{
{ /* Inline abstract_compiler#Toolchain#toolcontext (self) on <self:MakefileToolchain> */
var99 = self->attrs[COLOR_nitc__abstract_compiler__Toolchain___toolcontext].val; /* _toolcontext on <self:MakefileToolchain> */
if (unlikely(var99 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 131);
fatal_exit(1);
}
var97 = var99;
RET_LABEL98:(void)0;
}
}
if (unlikely(varonce100==NULL)) {
var101 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce102!=NULL)) {
var103 = varonce102;
} else {
var104 = "*** END COMPILING C: ";
var105 = core__abstract_text___CString___to_s_full(var104, 21l, 21l);
var103 = var105;
varonce102 = var103;
}
((struct instance_core__NativeArray*)var101)->values[0]=var103;
if (likely(varonce106!=NULL)) {
var107 = varonce106;
} else {
var108 = " ***";
var109 = core__abstract_text___CString___to_s_full(var108, 4l, 4l);
var107 = var109;
varonce106 = var107;
}
((struct instance_core__NativeArray*)var101)->values[2]=var107;
} else {
var101 = varonce100;
varonce100 = NULL;
}
{
{ /* Inline kernel#Int#- (var_time1,var_time0) on <var_time1:Int> */
/* Covariant cast for argument 0 (i) <var_time0:Int> isa OTHER */
/* <var_time0:Int> isa OTHER */
var112 = 1; /* easy <var_time0:Int> isa OTHER*/
if (unlikely(!var112)) {
var_class_name115 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name115);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var116 = var_time1 - var_time0;
var110 = var116;
goto RET_LABEL111;
RET_LABEL111:(void)0;
}
}
var117 = core__flat___Int___core__abstract_text__Object__to_s(var110);
((struct instance_core__NativeArray*)var101)->values[1]=var117;
{
var118 = ((val*(*)(val* self))(var101->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var101); /* native_to_s on <var101:NativeArray[String]>*/
}
varonce100 = var101;
{
nitc___nitc__ToolContext___info(var97, var118, 2l); /* Direct call toolcontext#ToolContext#info on <var97:ToolContext>*/
}
RET_LABEL:;
}
/* method abstract_compiler#MakefileToolchain#write_files for (self: MakefileToolchain, String, Array[String]) */
void nitc___nitc__MakefileToolchain___write_files(val* self, val* p0, val* p1) {
val* var_compile_dir /* var compile_dir: String */;
val* var_cfiles /* var cfiles: Array[String] */;
val* var /* : AbstractCompiler */;
val* var2 /* : AbstractCompiler */;
val* var3 /* : Platform */;
val* var5 /* : Platform */;
val* var_platform /* var platform: Platform */;
short int var6 /* : Bool */;
val* var7 /* : AbstractCompiler */;
val* var9 /* : AbstractCompiler */;
static val* varonce;
val* var10 /* : String */;
char* var11 /* : CString */;
val* var12 /* : String */;
val* var_cc_opt_with_libgc /* var cc_opt_with_libgc: String */;
short int var13 /* : Bool */;
short int var14 /* : Bool */;
static val* varonce15;
val* var16 /* : String */;
char* var17 /* : CString */;
val* var18 /* : String */;
val* var19 /* : ExternCFile */;
static val* varonce20;
val* var21 /* : String */;
char* var22 /* : CString */;
val* var23 /* : String */;
val* var_gc_chooser /* var gc_chooser: ExternCFile */;
static val* varonce24;
val* var25 /* : String */;
char* var26 /* : CString */;
val* var27 /* : String */;
short int var28 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var30 /* : Bool */;
short int var31 /* : Bool */;
val* var32 /* : Array[String] */;
val* var34 /* : Array[String] */;
static val* varonce35;
val* var36 /* : String */;
char* var37 /* : CString */;
val* var38 /* : String */;
val* var39 /* : AbstractCompiler */;
val* var41 /* : AbstractCompiler */;
val* var42 /* : Array[ExternFile] */;
val* var44 /* : Array[ExternFile] */;
val* var45 /* : ToolContext */;
val* var47 /* : ToolContext */;
val* var48 /* : nullable String */;
val* var50 /* : nullable String */;
static val* varonce51;
val* var52 /* : String */;
char* var53 /* : CString */;
val* var54 /* : String */;
val* var55 /* : String */;
val* var_clib /* var clib: String */;
val* var56 /* : AbstractCompiler */;
val* var58 /* : AbstractCompiler */;
val* var59 /* : Array[String] */;
val* var61 /* : Array[String] */;
val* var63 /* : NativeArray[String] */;
static val* varonce62;
static val* varonce64;
val* var65 /* : String */;
char* var66 /* : CString */;
val* var67 /* : String */;
val* var68 /* : String */;
val* var69 /* : AbstractCompiler */;
val* var71 /* : AbstractCompiler */;
val* var72 /* : Array[String] */;
val* var74 /* : Array[String] */;
val* var76 /* : NativeArray[String] */;
static val* varonce75;
static val* varonce77;
val* var78 /* : String */;
char* var79 /* : CString */;
val* var80 /* : String */;
val* var81 /* : String */;
val* var82 /* : AbstractCompiler */;
val* var84 /* : AbstractCompiler */;
val* var85 /* : MModule */;
val* var87 /* : MModule */;
val* var88 /* : POSetElement[MModule] */;
val* var90 /* : POSetElement[MModule] */;
val* var91 /* : Collection[nullable Object] */;
val* var_ /* var : Collection[MModule] */;
val* var92 /* : Iterator[nullable Object] */;
val* var_93 /* var : Iterator[MModule] */;
short int var94 /* : Bool */;
val* var95 /* : nullable Object */;
val* var_m /* var m: MModule */;
val* var96 /* : AbstractCompiler */;
val* var98 /* : AbstractCompiler */;
val* var99 /* : AbstractCompiler */;
val* var101 /* : AbstractCompiler */;
val* var102 /* : Array[String] */;
val* var104 /* : Array[String] */;
val* var_105 /* var : Array[String] */;
val* var106 /* : IndexedIterator[nullable Object] */;
val* var_107 /* var : IndexedIterator[String] */;
short int var108 /* : Bool */;
val* var110 /* : nullable Object */;
val* var_src /* var src: String */;
val* var111 /* : String */;
val* var_basename /* var basename: String */;
val* var113 /* : NativeArray[String] */;
static val* varonce112;
static val* varonce114;
val* var115 /* : String */;
char* var116 /* : CString */;
val* var117 /* : String */;
val* var118 /* : String */;
val* var_dst /* var dst: String */;
val* var119 /* : AbstractCompiler */;
val* var121 /* : AbstractCompiler */;
val* var122 /* : CodeWriter */;
val* var124 /* : CodeWriter */;
val* var125 /* : CodeFile */;
val* var127 /* : CodeFile */;
val* var128 /* : String */;
val* var130 /* : String */;
static val* varonce131;
val* var132 /* : String */;
char* var133 /* : CString */;
val* var134 /* : String */;
val* var135 /* : Text */;
val* var_hfilename /* var hfilename: String */;
val* var137 /* : NativeArray[String] */;
static val* varonce136;
static val* varonce138;
val* var139 /* : String */;
char* var140 /* : CString */;
val* var141 /* : String */;
val* var142 /* : String */;
val* var_hfilepath /* var hfilepath: String */;
val* var143 /* : FileWriter */;
val* var_h /* var h: FileWriter */;
val* var144 /* : AbstractCompiler */;
val* var146 /* : AbstractCompiler */;
val* var147 /* : CodeWriter */;
val* var149 /* : CodeWriter */;
val* var150 /* : Array[String] */;
val* var152 /* : Array[String] */;
val* var_153 /* var : Array[String] */;
val* var154 /* : IndexedIterator[nullable Object] */;
val* var_155 /* var : IndexedIterator[String] */;
short int var156 /* : Bool */;
val* var158 /* : nullable Object */;
val* var_l /* var l: String */;
static val* varonce159;
val* var160 /* : String */;
char* var161 /* : CString */;
val* var162 /* : String */;
val* var163 /* : AbstractCompiler */;
val* var165 /* : AbstractCompiler */;
val* var166 /* : CodeWriter */;
val* var168 /* : CodeWriter */;
val* var169 /* : Array[String] */;
val* var171 /* : Array[String] */;
val* var_172 /* var : Array[String] */;
val* var173 /* : IndexedIterator[nullable Object] */;
val* var_174 /* var : IndexedIterator[String] */;
short int var175 /* : Bool */;
val* var177 /* : nullable Object */;
val* var_l178 /* var l: String */;
static val* varonce179;
val* var180 /* : String */;
char* var181 /* : CString */;
val* var182 /* : String */;
val* var183 /* : ToolContext */;
val* var185 /* : ToolContext */;
val* var186 /* : OptionInt */;
val* var188 /* : OptionInt */;
val* var189 /* : nullable Object */;
val* var191 /* : nullable Object */;
long var192 /* : Int */;
long var_max_c_lines /* var max_c_lines: Int */;
val* var193 /* : AbstractCompiler */;
val* var195 /* : AbstractCompiler */;
val* var196 /* : Array[CodeFile] */;
val* var198 /* : Array[CodeFile] */;
val* var_199 /* var : Array[CodeFile] */;
val* var200 /* : IndexedIterator[nullable Object] */;
val* var_201 /* var : IndexedIterator[CodeFile] */;
short int var202 /* : Bool */;
val* var204 /* : nullable Object */;
val* var_f /* var f: CodeFile */;
long var_i /* var i: Int */;
long var_count /* var count: Int */;
val* var_file /* var file: nullable FileWriter */;
val* var205 /* : Array[CodeWriter] */;
val* var207 /* : Array[CodeWriter] */;
val* var_208 /* var : Array[CodeWriter] */;
val* var209 /* : IndexedIterator[nullable Object] */;
val* var_210 /* var : IndexedIterator[CodeWriter] */;
short int var211 /* : Bool */;
val* var213 /* : nullable Object */;
val* var_vis /* var vis: CodeWriter */;
val* var214 /* : AbstractCompiler */;
val* var216 /* : AbstractCompiler */;
val* var217 /* : CodeWriter */;
val* var219 /* : CodeWriter */;
short int var220 /* : Bool */;
val* var_other222 /* var other: nullable Object */;
short int var223 /* : Bool */;
short int var225 /* : Bool */;
val* var227 /* : Array[String] */;
val* var229 /* : Array[String] */;
long var230 /* : Int */;
long var232 /* : Int */;
val* var233 /* : Array[String] */;
val* var235 /* : Array[String] */;
long var236 /* : Int */;
long var238 /* : Int */;
long var239 /* : Int */;
short int var241 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var242 /* : Int */;
long var_total_lines /* var total_lines: Int */;
short int var243 /* : Bool */;
short int var245 /* : Bool */;
long var246 /* : Int */;
short int var248 /* : Bool */;
int cltype249;
int idtype250;
const char* var_class_name251;
long var252 /* : Int */;
short int var253 /* : Bool */;
short int var254 /* : Bool */;
short int var255 /* : Bool */;
short int var257 /* : Bool */;
short int var259 /* : Bool */;
short int var_260 /* var : Bool */;
short int var261 /* : Bool */;
short int var262 /* : Bool */;
short int var264 /* : Bool */;
int cltype265;
int idtype266;
const char* var_class_name267;
short int var268 /* : Bool */;
short int var_269 /* var : Bool */;
short int var270 /* : Bool */;
short int var272 /* : Bool */;
int cltype273;
int idtype274;
const char* var_class_name275;
short int var276 /* : Bool */;
long var277 /* : Int */;
short int var279 /* : Bool */;
int cltype280;
int idtype281;
const char* var_class_name282;
long var283 /* : Int */;
short int var284 /* : Bool */;
short int var285 /* : Bool */;
short int var287 /* : Bool */;
short int var288 /* : Bool */;
val* var290 /* : NativeArray[String] */;
static val* varonce289;
static val* varonce291;
val* var292 /* : String */;
char* var293 /* : CString */;
val* var294 /* : String */;
static val* varonce295;
val* var296 /* : String */;
char* var297 /* : CString */;
val* var298 /* : String */;
val* var299 /* : String */;
val* var301 /* : String */;
val* var302 /* : String */;
val* var303 /* : String */;
val* var_cfilename /* var cfilename: String */;
val* var305 /* : NativeArray[String] */;
static val* varonce304;
static val* varonce306;
val* var307 /* : String */;
char* var308 /* : CString */;
val* var309 /* : String */;
val* var310 /* : String */;
val* var_cfilepath /* var cfilepath: String */;
val* var311 /* : ToolContext */;
val* var313 /* : ToolContext */;
val* var315 /* : NativeArray[String] */;
static val* varonce314;
static val* varonce316;
val* var317 /* : String */;
char* var318 /* : CString */;
val* var319 /* : String */;
val* var320 /* : String */;
val* var321 /* : FileWriter */;
val* var323 /* : NativeArray[String] */;
static val* varonce322;
static val* varonce324;
val* var325 /* : String */;
char* var326 /* : CString */;
val* var327 /* : String */;
static val* varonce328;
val* var329 /* : String */;
char* var330 /* : CString */;
val* var331 /* : String */;
val* var332 /* : String */;
val* var334 /* : String */;
val* var335 /* : String */;
val* var336 /* : Array[String] */;
val* var338 /* : Array[String] */;
val* var_339 /* var : Array[String] */;
val* var340 /* : IndexedIterator[nullable Object] */;
val* var_341 /* var : IndexedIterator[String] */;
short int var342 /* : Bool */;
val* var344 /* : nullable Object */;
val* var_l345 /* var l: String */;
static val* varonce346;
val* var347 /* : String */;
char* var348 /* : CString */;
val* var349 /* : String */;
val* var350 /* : Array[String] */;
val* var352 /* : Array[String] */;
val* var_353 /* var : Array[String] */;
val* var354 /* : IndexedIterator[nullable Object] */;
val* var_355 /* var : IndexedIterator[String] */;
short int var356 /* : Bool */;
val* var358 /* : nullable Object */;
val* var_l359 /* var l: String */;
static val* varonce360;
val* var361 /* : String */;
char* var362 /* : CString */;
val* var363 /* : String */;
short int var364 /* : Bool */;
short int var365 /* : Bool */;
short int var367 /* : Bool */;
short int var369 /* : Bool */;
val* var372 /* : NativeArray[String] */;
static val* varonce371;
static val* varonce373;
val* var374 /* : String */;
char* var375 /* : CString */;
val* var376 /* : String */;
val* var377 /* : String */;
val* var379 /* : String */;
val* var380 /* : String */;
val* var_cfilename381 /* var cfilename: String */;
val* var383 /* : NativeArray[String] */;
static val* varonce382;
static val* varonce384;
val* var385 /* : String */;
char* var386 /* : CString */;
val* var387 /* : String */;
val* var388 /* : String */;
val* var_cfilepath389 /* var cfilepath: String */;
val* var_hfile /* var hfile: nullable FileWriter */;
val* var390 /* : FileWriter */;
val* var392 /* : NativeArray[String] */;
static val* varonce391;
static val* varonce393;
val* var394 /* : String */;
char* var395 /* : CString */;
val* var396 /* : String */;
static val* varonce397;
val* var398 /* : String */;
char* var399 /* : CString */;
val* var400 /* : String */;
val* var401 /* : String */;
val* var402 /* : HashSet[String] */;
val* var404 /* : HashSet[String] */;
val* var_405 /* var : HashSet[String] */;
val* var406 /* : Iterator[nullable Object] */;
val* var_407 /* var : Iterator[String] */;
short int var408 /* : Bool */;
val* var410 /* : nullable Object */;
val* var_key /* var key: String */;
val* var411 /* : AbstractCompiler */;
val* var413 /* : AbstractCompiler */;
val* var414 /* : HashMap[String, String] */;
val* var416 /* : HashMap[String, String] */;
short int var417 /* : Bool */;
short int var418 /* : Bool */;
val* var419 /* : AbstractCompiler */;
val* var421 /* : AbstractCompiler */;
val* var422 /* : HashMap[String, ANode] */;
val* var424 /* : HashMap[String, ANode] */;
val* var425 /* : nullable Object */;
val* var_node /* var node: nullable ANode */;
short int var426 /* : Bool */;
short int var427 /* : Bool */;
short int var429 /* : Bool */;
short int var430 /* : Bool */;
val* var432 /* : NativeArray[String] */;
static val* varonce431;
static val* varonce433;
val* var434 /* : String */;
char* var435 /* : CString */;
val* var436 /* : String */;
val* var437 /* : String */;
val* var438 /* : Sys */;
val* var440 /* : NativeArray[String] */;
static val* varonce439;
static val* varonce441;
val* var442 /* : String */;
char* var443 /* : CString */;
val* var444 /* : String */;
val* var445 /* : String */;
val* var446 /* : AbstractCompiler */;
val* var448 /* : AbstractCompiler */;
val* var449 /* : HashMap[String, String] */;
val* var451 /* : HashMap[String, String] */;
val* var452 /* : nullable Object */;
static val* varonce453;
val* var454 /* : String */;
char* var455 /* : CString */;
val* var456 /* : String */;
val* var457 /* : ToolContext */;
val* var459 /* : ToolContext */;
val* var461 /* : NativeArray[String] */;
static val* varonce460;
static val* varonce462;
val* var463 /* : String */;
char* var464 /* : CString */;
val* var465 /* : String */;
long var466 /* : Int */;
long var468 /* : Int */;
val* var469 /* : String */;
val* var470 /* : String */;
var_compile_dir = p0;
var_cfiles = p1;
{
{ /* Inline abstract_compiler#Toolchain#compiler (self) on <self:MakefileToolchain> */
var2 = self->attrs[COLOR_nitc__abstract_compiler__Toolchain___compiler].val; /* _compiler on <self:MakefileToolchain> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 134);
fatal_exit(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompiler#target_platform (var) on <var:AbstractCompiler> */
var5 = var->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___target_platform].val; /* _target_platform on <var:AbstractCompiler> */
if (unlikely(var5 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _target_platform");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 549);
fatal_exit(1);
}
var3 = var5;
RET_LABEL4:(void)0;
}
}
var_platform = var3;
{
var6 = ((short int(*)(val* self))(var_platform->class->vft[COLOR_nitc__platform__Platform__supports_libunwind]))(var_platform); /* supports_libunwind on <var_platform:Platform>*/
}
if (var6){
{
{ /* Inline abstract_compiler#Toolchain#compiler (self) on <self:MakefileToolchain> */
var9 = self->attrs[COLOR_nitc__abstract_compiler__Toolchain___compiler].val; /* _compiler on <self:MakefileToolchain> */
if (unlikely(var9 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 134);
fatal_exit(1);
}
var7 = var9;
RET_LABEL8:(void)0;
}
}
{
nitc___nitc__AbstractCompiler___build_c_to_nit_bindings(var7); /* Direct call abstract_compiler#AbstractCompiler#build_c_to_nit_bindings on <var7:AbstractCompiler>*/
}
} else {
}
if (likely(varonce!=NULL)) {
var10 = varonce;
} else {
var11 = "-DWITH_LIBGC";
var12 = core__abstract_text___CString___to_s_full(var11, 12l, 12l);
var10 = var12;
varonce = var10;
}
var_cc_opt_with_libgc = var10;
{
var13 = ((short int(*)(val* self))(var_platform->class->vft[COLOR_nitc__platform__Platform__supports_libgc]))(var_platform); /* supports_libgc on <var_platform:Platform>*/
}
var14 = !var13;
if (var14){
if (likely(varonce15!=NULL)) {
var16 = varonce15;
} else {
var17 = "";
var18 = core__abstract_text___CString___to_s_full(var17, 0l, 0l);
var16 = var18;
varonce15 = var16;
}
var_cc_opt_with_libgc = var16;
} else {
}
var19 = NEW_nitc__ExternCFile(&type_nitc__ExternCFile);
if (likely(varonce20!=NULL)) {
var21 = varonce20;
} else {
var22 = "gc_chooser.c";
var23 = core__abstract_text___CString___to_s_full(var22, 12l, 12l);
var21 = var23;
varonce20 = var21;
}
{
((void(*)(val* self, val* p0))(var19->class->vft[COLOR_nitc__c_tools__ExternFile__filename_61d]))(var19, var21); /* filename= on <var19:ExternCFile>*/
}
{
((void(*)(val* self, val* p0))(var19->class->vft[COLOR_nitc__c_tools__ExternCFile__cflags_61d]))(var19, var_cc_opt_with_libgc); /* cflags= on <var19:ExternCFile>*/
}
{
((void(*)(val* self))(var19->class->vft[COLOR_core__kernel__Object__init]))(var19); /* init on <var19:ExternCFile>*/
}
var_gc_chooser = var19;
if (likely(varonce24!=NULL)) {
var25 = varonce24;
} else {
var26 = "";
var27 = core__abstract_text___CString___to_s_full(var26, 0l, 0l);
var25 = var27;
varonce24 = var25;
}
{
{ /* Inline kernel#Object#!= (var_cc_opt_with_libgc,var25) on <var_cc_opt_with_libgc:String> */
var_other = var25;
{
var30 = ((short int(*)(val* self, val* p0))(var_cc_opt_with_libgc->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_cc_opt_with_libgc, var_other); /* == on <var_cc_opt_with_libgc:String>*/
}
var31 = !var30;
var28 = var31;
goto RET_LABEL29;
RET_LABEL29:(void)0;
}
}
if (var28){
{
{ /* Inline c_tools#ExternFile#pkgconfigs (var_gc_chooser) on <var_gc_chooser:ExternCFile> */
var34 = var_gc_chooser->attrs[COLOR_nitc__c_tools__ExternFile___pkgconfigs].val; /* _pkgconfigs on <var_gc_chooser:ExternCFile> */
if (unlikely(var34 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _pkgconfigs");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__c_tools, 123);
fatal_exit(1);
}
var32 = var34;
RET_LABEL33:(void)0;
}
}
if (likely(varonce35!=NULL)) {
var36 = varonce35;
} else {
var37 = "bdw-gc";
var38 = core__abstract_text___CString___to_s_full(var37, 6l, 6l);
var36 = var38;
varonce35 = var36;
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var32, var36); /* Direct call array#Array#add on <var32:Array[String]>*/
}
} else {
}
{
{ /* Inline abstract_compiler#Toolchain#compiler (self) on <self:MakefileToolchain> */
var41 = self->attrs[COLOR_nitc__abstract_compiler__Toolchain___compiler].val; /* _compiler on <self:MakefileToolchain> */
if (unlikely(var41 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 134);
fatal_exit(1);
}
var39 = var41;
RET_LABEL40:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompiler#extern_bodies (var39) on <var39:AbstractCompiler> */
var44 = var39->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___extern_bodies].val; /* _extern_bodies on <var39:AbstractCompiler> */
if (unlikely(var44 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _extern_bodies");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1061);
fatal_exit(1);
}
var42 = var44;
RET_LABEL43:(void)0;
}
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var42, var_gc_chooser); /* Direct call array#Array#add on <var42:Array[ExternFile]>*/
}
{
{ /* Inline abstract_compiler#Toolchain#toolcontext (self) on <self:MakefileToolchain> */
var47 = self->attrs[COLOR_nitc__abstract_compiler__Toolchain___toolcontext].val; /* _toolcontext on <self:MakefileToolchain> */
if (unlikely(var47 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 131);
fatal_exit(1);
}
var45 = var47;
RET_LABEL46:(void)0;
}
}
{
{ /* Inline toolcontext#ToolContext#nit_dir (var45) on <var45:ToolContext> */
var50 = var45->attrs[COLOR_nitc__toolcontext__ToolContext___nit_dir].val; /* _nit_dir on <var45:ToolContext> */
var48 = var50;
RET_LABEL49:(void)0;
}
}
if (likely(varonce51!=NULL)) {
var52 = varonce51;
} else {
var53 = "clib";
var54 = core__abstract_text___CString___to_s_full(var53, 4l, 4l);
var52 = var54;
varonce51 = var52;
}
if (var48 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 218);
fatal_exit(1);
} else {
var55 = core__file___String____47d(var48, var52);
}
var_clib = var55;
{
{ /* Inline abstract_compiler#Toolchain#compiler (self) on <self:MakefileToolchain> */
var58 = self->attrs[COLOR_nitc__abstract_compiler__Toolchain___compiler].val; /* _compiler on <self:MakefileToolchain> */
if (unlikely(var58 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 134);
fatal_exit(1);
}
var56 = var58;
RET_LABEL57:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompiler#files_to_copy (var56) on <var56:AbstractCompiler> */
var61 = var56->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___files_to_copy].val; /* _files_to_copy on <var56:AbstractCompiler> */
if (unlikely(var61 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _files_to_copy");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1064);
fatal_exit(1);
}
var59 = var61;
RET_LABEL60:(void)0;
}
}
if (unlikely(varonce62==NULL)) {
var63 = NEW_core__NativeArray(2l, &type_core__NativeArray__core__String);
if (likely(varonce64!=NULL)) {
var65 = varonce64;
} else {
var66 = "/gc_chooser.c";
var67 = core__abstract_text___CString___to_s_full(var66, 13l, 13l);
var65 = var67;
varonce64 = var65;
}
((struct instance_core__NativeArray*)var63)->values[1]=var65;
} else {
var63 = varonce62;
varonce62 = NULL;
}
((struct instance_core__NativeArray*)var63)->values[0]=var_clib;
{
var68 = ((val*(*)(val* self))(var63->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var63); /* native_to_s on <var63:NativeArray[String]>*/
}
varonce62 = var63;
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var59, var68); /* Direct call array#Array#add on <var59:Array[String]>*/
}
{
{ /* Inline abstract_compiler#Toolchain#compiler (self) on <self:MakefileToolchain> */
var71 = self->attrs[COLOR_nitc__abstract_compiler__Toolchain___compiler].val; /* _compiler on <self:MakefileToolchain> */
if (unlikely(var71 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 134);
fatal_exit(1);
}
var69 = var71;
RET_LABEL70:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompiler#files_to_copy (var69) on <var69:AbstractCompiler> */
var74 = var69->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___files_to_copy].val; /* _files_to_copy on <var69:AbstractCompiler> */
if (unlikely(var74 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _files_to_copy");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1064);
fatal_exit(1);
}
var72 = var74;
RET_LABEL73:(void)0;
}
}
if (unlikely(varonce75==NULL)) {
var76 = NEW_core__NativeArray(2l, &type_core__NativeArray__core__String);
if (likely(varonce77!=NULL)) {
var78 = varonce77;
} else {
var79 = "/gc_chooser.h";
var80 = core__abstract_text___CString___to_s_full(var79, 13l, 13l);
var78 = var80;
varonce77 = var78;
}
((struct instance_core__NativeArray*)var76)->values[1]=var78;
} else {
var76 = varonce75;
varonce75 = NULL;
}
((struct instance_core__NativeArray*)var76)->values[0]=var_clib;
{
var81 = ((val*(*)(val* self))(var76->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var76); /* native_to_s on <var76:NativeArray[String]>*/
}
varonce75 = var76;
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var72, var81); /* Direct call array#Array#add on <var72:Array[String]>*/
}
{
{ /* Inline abstract_compiler#Toolchain#compiler (self) on <self:MakefileToolchain> */
var84 = self->attrs[COLOR_nitc__abstract_compiler__Toolchain___compiler].val; /* _compiler on <self:MakefileToolchain> */
if (unlikely(var84 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 134);
fatal_exit(1);
}
var82 = var84;
RET_LABEL83:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompiler#mainmodule (var82) on <var82:AbstractCompiler> */
var87 = var82->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___mainmodule].val; /* _mainmodule on <var82:AbstractCompiler> */
if (unlikely(var87 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mainmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 531);
fatal_exit(1);
}
var85 = var87;
RET_LABEL86:(void)0;
}
}
{
{ /* Inline mmodule#MModule#in_importation (var85) on <var85:MModule> */
var90 = var85->attrs[COLOR_nitc__mmodule__MModule___in_importation].val; /* _in_importation on <var85:MModule> */
if (unlikely(var90 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _in_importation");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__mmodule, 108);
fatal_exit(1);
}
var88 = var90;
RET_LABEL89:(void)0;
}
}
{
var91 = poset___poset__POSetElement___greaters(var88);
}
var_ = var91;
{
var92 = ((val*(*)(val* self))((((long)var_&3)?class_info[((long)var_&3)]:var_->class)->vft[COLOR_core__abstract_collection__Collection__iterator]))(var_); /* iterator on <var_:Collection[MModule]>*/
}
var_93 = var92;
for(;;) {
{
var94 = ((short int(*)(val* self))((((long)var_93&3)?class_info[((long)var_93&3)]:var_93->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_93); /* is_ok on <var_93:Iterator[MModule]>*/
}
if (var94){
} else {
goto BREAK_label;
}
{
var95 = ((val*(*)(val* self))((((long)var_93&3)?class_info[((long)var_93&3)]:var_93->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_93); /* item on <var_93:Iterator[MModule]>*/
}
var_m = var95;
{
{ /* Inline abstract_compiler#Toolchain#compiler (self) on <self:MakefileToolchain> */
var98 = self->attrs[COLOR_nitc__abstract_compiler__Toolchain___compiler].val; /* _compiler on <self:MakefileToolchain> */
if (unlikely(var98 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 134);
fatal_exit(1);
}
var96 = var98;
RET_LABEL97:(void)0;
}
}
{
((void(*)(val* self, val* p0))(var96->class->vft[COLOR_nitc__abstract_compiler__AbstractCompiler__finalize_ffi_for_module]))(var96, var_m); /* finalize_ffi_for_module on <var96:AbstractCompiler>*/
}
{
((void(*)(val* self))((((long)var_93&3)?class_info[((long)var_93&3)]:var_93->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_93); /* next on <var_93:Iterator[MModule]>*/
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_93&3)?class_info[((long)var_93&3)]:var_93->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_93); /* finish on <var_93:Iterator[MModule]>*/
}
{
{ /* Inline abstract_compiler#Toolchain#compiler (self) on <self:MakefileToolchain> */
var101 = self->attrs[COLOR_nitc__abstract_compiler__Toolchain___compiler].val; /* _compiler on <self:MakefileToolchain> */
if (unlikely(var101 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 134);
fatal_exit(1);
}
var99 = var101;
RET_LABEL100:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompiler#files_to_copy (var99) on <var99:AbstractCompiler> */
var104 = var99->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___files_to_copy].val; /* _files_to_copy on <var99:AbstractCompiler> */
if (unlikely(var104 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _files_to_copy");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1064);
fatal_exit(1);
}
var102 = var104;
RET_LABEL103:(void)0;
}
}
var_105 = var102;
{
var106 = core___core__AbstractArrayRead___core__abstract_collection__Collection__iterator(var_105);
}
var_107 = var106;
for(;;) {
{
var108 = ((short int(*)(val* self))((((long)var_107&3)?class_info[((long)var_107&3)]:var_107->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_107); /* is_ok on <var_107:IndexedIterator[String]>*/
}
if (var108){
} else {
goto BREAK_label109;
}
{
var110 = ((val*(*)(val* self))((((long)var_107&3)?class_info[((long)var_107&3)]:var_107->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_107); /* item on <var_107:IndexedIterator[String]>*/
}
var_src = var110;
{
var111 = ((val*(*)(val* self, val* p0))(var_src->class->vft[COLOR_core__file__String__basename]))(var_src, ((val*)NULL)); /* basename on <var_src:String>*/
}
var_basename = var111;
if (unlikely(varonce112==NULL)) {
var113 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce114!=NULL)) {
var115 = varonce114;
} else {
var116 = "/";
var117 = core__abstract_text___CString___to_s_full(var116, 1l, 1l);
var115 = var117;
varonce114 = var115;
}
((struct instance_core__NativeArray*)var113)->values[1]=var115;
} else {
var113 = varonce112;
varonce112 = NULL;
}
((struct instance_core__NativeArray*)var113)->values[0]=var_compile_dir;
((struct instance_core__NativeArray*)var113)->values[2]=var_basename;
{
var118 = ((val*(*)(val* self))(var113->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var113); /* native_to_s on <var113:NativeArray[String]>*/
}
varonce112 = var113;
var_dst = var118;
{
core__file___String___file_copy_to(var_src, var_dst); /* Direct call file#String#file_copy_to on <var_src:String>*/
}
{
((void(*)(val* self))((((long)var_107&3)?class_info[((long)var_107&3)]:var_107->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_107); /* next on <var_107:IndexedIterator[String]>*/
}
}
BREAK_label109: (void)0;
{
((void(*)(val* self))((((long)var_107&3)?class_info[((long)var_107&3)]:var_107->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_107); /* finish on <var_107:IndexedIterator[String]>*/
}
{
{ /* Inline abstract_compiler#Toolchain#compiler (self) on <self:MakefileToolchain> */
var121 = self->attrs[COLOR_nitc__abstract_compiler__Toolchain___compiler].val; /* _compiler on <self:MakefileToolchain> */
if (unlikely(var121 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 134);
fatal_exit(1);
}
var119 = var121;
RET_LABEL120:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompiler#header (var119) on <var119:AbstractCompiler> */
var124 = var119->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___header].val; /* _header on <var119:AbstractCompiler> */
if (unlikely(var124 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 585);
fatal_exit(1);
}
var122 = var124;
RET_LABEL123:(void)0;
}
}
{
{ /* Inline abstract_compiler#CodeWriter#file (var122) on <var122:CodeWriter> */
var127 = var122->attrs[COLOR_nitc__abstract_compiler__CodeWriter___file].val; /* _file on <var122:CodeWriter> */
if (unlikely(var127 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _file");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1172);
fatal_exit(1);
}
var125 = var127;
RET_LABEL126:(void)0;
}
}
{
{ /* Inline abstract_compiler#CodeFile#name (var125) on <var125:CodeFile> */
var130 = var125->attrs[COLOR_nitc__abstract_compiler__CodeFile___name].val; /* _name on <var125:CodeFile> */
if (unlikely(var130 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1156);
fatal_exit(1);
}
var128 = var130;
RET_LABEL129:(void)0;
}
}
if (likely(varonce131!=NULL)) {
var132 = varonce131;
} else {
var133 = ".h";
var134 = core__abstract_text___CString___to_s_full(var133, 2l, 2l);
var132 = var134;
varonce131 = var132;
}
{
var135 = ((val*(*)(val* self, val* p0))(var128->class->vft[COLOR_core__abstract_text__Text___43d]))(var128, var132); /* + on <var128:String>*/
}
var_hfilename = var135;
if (unlikely(varonce136==NULL)) {
var137 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce138!=NULL)) {
var139 = varonce138;
} else {
var140 = "/";
var141 = core__abstract_text___CString___to_s_full(var140, 1l, 1l);
var139 = var141;
varonce138 = var139;
}
((struct instance_core__NativeArray*)var137)->values[1]=var139;
} else {
var137 = varonce136;
varonce136 = NULL;
}
((struct instance_core__NativeArray*)var137)->values[0]=var_compile_dir;
((struct instance_core__NativeArray*)var137)->values[2]=var_hfilename;
{
var142 = ((val*(*)(val* self))(var137->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var137); /* native_to_s on <var137:NativeArray[String]>*/
}
varonce136 = var137;
var_hfilepath = var142;
var143 = NEW_core__FileWriter(&type_core__FileWriter);
{
core___core__FileWriter___open(var143, var_hfilepath); /* Direct call file#FileWriter#open on <var143:FileWriter>*/
}
var_h = var143;
{
{ /* Inline abstract_compiler#Toolchain#compiler (self) on <self:MakefileToolchain> */
var146 = self->attrs[COLOR_nitc__abstract_compiler__Toolchain___compiler].val; /* _compiler on <self:MakefileToolchain> */
if (unlikely(var146 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 134);
fatal_exit(1);
}
var144 = var146;
RET_LABEL145:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompiler#header (var144) on <var144:AbstractCompiler> */
var149 = var144->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___header].val; /* _header on <var144:AbstractCompiler> */
if (unlikely(var149 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 585);
fatal_exit(1);
}
var147 = var149;
RET_LABEL148:(void)0;
}
}
{
{ /* Inline abstract_compiler#CodeWriter#decl_lines (var147) on <var147:CodeWriter> */
var152 = var147->attrs[COLOR_nitc__abstract_compiler__CodeWriter___decl_lines].val; /* _decl_lines on <var147:CodeWriter> */
if (unlikely(var152 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _decl_lines");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1178);
fatal_exit(1);
}
var150 = var152;
RET_LABEL151:(void)0;
}
}
var_153 = var150;
{
var154 = core___core__AbstractArrayRead___core__abstract_collection__Collection__iterator(var_153);
}
var_155 = var154;
for(;;) {
{
var156 = ((short int(*)(val* self))((((long)var_155&3)?class_info[((long)var_155&3)]:var_155->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_155); /* is_ok on <var_155:IndexedIterator[String]>*/
}
if (var156){
} else {
goto BREAK_label157;
}
{
var158 = ((val*(*)(val* self))((((long)var_155&3)?class_info[((long)var_155&3)]:var_155->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_155); /* item on <var_155:IndexedIterator[String]>*/
}
var_l = var158;
{
core___core__FileWriter___core__stream__Writer__write(var_h, var_l); /* Direct call file#FileWriter#write on <var_h:FileWriter>*/
}
if (likely(varonce159!=NULL)) {
var160 = varonce159;
} else {
var161 = "\n";
var162 = core__abstract_text___CString___to_s_full(var161, 1l, 1l);
var160 = var162;
varonce159 = var160;
}
{
core___core__FileWriter___core__stream__Writer__write(var_h, var160); /* Direct call file#FileWriter#write on <var_h:FileWriter>*/
}
{
((void(*)(val* self))((((long)var_155&3)?class_info[((long)var_155&3)]:var_155->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_155); /* next on <var_155:IndexedIterator[String]>*/
}
}
BREAK_label157: (void)0;
{
((void(*)(val* self))((((long)var_155&3)?class_info[((long)var_155&3)]:var_155->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_155); /* finish on <var_155:IndexedIterator[String]>*/
}
{
{ /* Inline abstract_compiler#Toolchain#compiler (self) on <self:MakefileToolchain> */
var165 = self->attrs[COLOR_nitc__abstract_compiler__Toolchain___compiler].val; /* _compiler on <self:MakefileToolchain> */
if (unlikely(var165 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 134);
fatal_exit(1);
}
var163 = var165;
RET_LABEL164:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompiler#header (var163) on <var163:AbstractCompiler> */
var168 = var163->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___header].val; /* _header on <var163:AbstractCompiler> */
if (unlikely(var168 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 585);
fatal_exit(1);
}
var166 = var168;
RET_LABEL167:(void)0;
}
}
{
{ /* Inline abstract_compiler#CodeWriter#lines (var166) on <var166:CodeWriter> */
var171 = var166->attrs[COLOR_nitc__abstract_compiler__CodeWriter___lines].val; /* _lines on <var166:CodeWriter> */
if (unlikely(var171 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _lines");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1175);
fatal_exit(1);
}
var169 = var171;
RET_LABEL170:(void)0;
}
}
var_172 = var169;
{
var173 = core___core__AbstractArrayRead___core__abstract_collection__Collection__iterator(var_172);
}
var_174 = var173;
for(;;) {
{
var175 = ((short int(*)(val* self))((((long)var_174&3)?class_info[((long)var_174&3)]:var_174->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_174); /* is_ok on <var_174:IndexedIterator[String]>*/
}
if (var175){
} else {
goto BREAK_label176;
}
{
var177 = ((val*(*)(val* self))((((long)var_174&3)?class_info[((long)var_174&3)]:var_174->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_174); /* item on <var_174:IndexedIterator[String]>*/
}
var_l178 = var177;
{
core___core__FileWriter___core__stream__Writer__write(var_h, var_l178); /* Direct call file#FileWriter#write on <var_h:FileWriter>*/
}
if (likely(varonce179!=NULL)) {
var180 = varonce179;
} else {
var181 = "\n";
var182 = core__abstract_text___CString___to_s_full(var181, 1l, 1l);
var180 = var182;
varonce179 = var180;
}
{
core___core__FileWriter___core__stream__Writer__write(var_h, var180); /* Direct call file#FileWriter#write on <var_h:FileWriter>*/
}
{
((void(*)(val* self))((((long)var_174&3)?class_info[((long)var_174&3)]:var_174->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_174); /* next on <var_174:IndexedIterator[String]>*/
}
}
BREAK_label176: (void)0;
{
((void(*)(val* self))((((long)var_174&3)?class_info[((long)var_174&3)]:var_174->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_174); /* finish on <var_174:IndexedIterator[String]>*/
}
{
core___core__FileWriter___core__stream__Stream__close(var_h); /* Direct call file#FileWriter#close on <var_h:FileWriter>*/
}
{
{ /* Inline abstract_compiler#Toolchain#toolcontext (self) on <self:MakefileToolchain> */
var185 = self->attrs[COLOR_nitc__abstract_compiler__Toolchain___toolcontext].val; /* _toolcontext on <self:MakefileToolchain> */
if (unlikely(var185 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 131);
fatal_exit(1);
}
var183 = var185;
RET_LABEL184:(void)0;
}
}
{
{ /* Inline abstract_compiler#ToolContext#opt_max_c_lines (var183) on <var183:ToolContext> */
var188 = var183->attrs[COLOR_nitc__abstract_compiler__ToolContext___opt_max_c_lines].val; /* _opt_max_c_lines on <var183:ToolContext> */
if (unlikely(var188 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_max_c_lines");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 40);
fatal_exit(1);
}
var186 = var188;
RET_LABEL187:(void)0;
}
}
{
{ /* Inline opts#Option#value (var186) on <var186:OptionInt> */
var191 = var186->attrs[COLOR_opts__Option___value].val; /* _value on <var186:OptionInt> */
var189 = var191;
RET_LABEL190:(void)0;
}
}
var192 = (long)(var189)>>2;
var_max_c_lines = var192;
{
{ /* Inline abstract_compiler#Toolchain#compiler (self) on <self:MakefileToolchain> */
var195 = self->attrs[COLOR_nitc__abstract_compiler__Toolchain___compiler].val; /* _compiler on <self:MakefileToolchain> */
if (unlikely(var195 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 134);
fatal_exit(1);
}
var193 = var195;
RET_LABEL194:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompiler#files (var193) on <var193:AbstractCompiler> */
var198 = var193->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___files].val; /* _files on <var193:AbstractCompiler> */
if (unlikely(var198 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _files");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 578);
fatal_exit(1);
}
var196 = var198;
RET_LABEL197:(void)0;
}
}
var_199 = var196;
{
var200 = core___core__AbstractArrayRead___core__abstract_collection__Collection__iterator(var_199);
}
var_201 = var200;
for(;;) {
{
var202 = ((short int(*)(val* self))((((long)var_201&3)?class_info[((long)var_201&3)]:var_201->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_201); /* is_ok on <var_201:IndexedIterator[CodeFile]>*/
}
if (var202){
} else {
goto BREAK_label203;
}
{
var204 = ((val*(*)(val* self))((((long)var_201&3)?class_info[((long)var_201&3)]:var_201->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_201); /* item on <var_201:IndexedIterator[CodeFile]>*/
}
var_f = var204;
var_i = 0l;
var_count = 0l;
var_file = ((val*)NULL);
{
{ /* Inline abstract_compiler#CodeFile#writers (var_f) on <var_f:CodeFile> */
var207 = var_f->attrs[COLOR_nitc__abstract_compiler__CodeFile___writers].val; /* _writers on <var_f:CodeFile> */
if (unlikely(var207 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _writers");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1159);
fatal_exit(1);
}
var205 = var207;
RET_LABEL206:(void)0;
}
}
var_208 = var205;
{
var209 = core___core__AbstractArrayRead___core__abstract_collection__Collection__iterator(var_208);
}
var_210 = var209;
for(;;) {
{
var211 = ((short int(*)(val* self))((((long)var_210&3)?class_info[((long)var_210&3)]:var_210->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_210); /* is_ok on <var_210:IndexedIterator[CodeWriter]>*/
}
if (var211){
} else {
goto BREAK_label212;
}
{
var213 = ((val*(*)(val* self))((((long)var_210&3)?class_info[((long)var_210&3)]:var_210->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_210); /* item on <var_210:IndexedIterator[CodeWriter]>*/
}
var_vis = var213;
{
{ /* Inline abstract_compiler#Toolchain#compiler (self) on <self:MakefileToolchain> */
var216 = self->attrs[COLOR_nitc__abstract_compiler__Toolchain___compiler].val; /* _compiler on <self:MakefileToolchain> */
if (unlikely(var216 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 134);
fatal_exit(1);
}
var214 = var216;
RET_LABEL215:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompiler#header (var214) on <var214:AbstractCompiler> */
var219 = var214->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___header].val; /* _header on <var214:AbstractCompiler> */
if (unlikely(var219 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 585);
fatal_exit(1);
}
var217 = var219;
RET_LABEL218:(void)0;
}
}
{
{ /* Inline kernel#Object#== (var_vis,var217) on <var_vis:CodeWriter> */
var_other222 = var217;
{
{ /* Inline kernel#Object#is_same_instance (var_vis,var_other222) on <var_vis:CodeWriter> */
var225 = var_vis == var_other222;
var223 = var225;
goto RET_LABEL224;
RET_LABEL224:(void)0;
}
}
var220 = var223;
goto RET_LABEL221;
RET_LABEL221:(void)0;
}
}
if (var220){
goto BREAK_label226;
} else {
}
{
{ /* Inline abstract_compiler#CodeWriter#lines (var_vis) on <var_vis:CodeWriter> */
var229 = var_vis->attrs[COLOR_nitc__abstract_compiler__CodeWriter___lines].val; /* _lines on <var_vis:CodeWriter> */
if (unlikely(var229 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _lines");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1175);
fatal_exit(1);
}
var227 = var229;
RET_LABEL228:(void)0;
}
}
{
{ /* Inline array#AbstractArrayRead#length (var227) on <var227:Array[String]> */
var232 = var227->attrs[COLOR_core__array__AbstractArrayRead___length].l; /* _length on <var227:Array[String]> */
var230 = var232;
RET_LABEL231:(void)0;
}
}
{
{ /* Inline abstract_compiler#CodeWriter#decl_lines (var_vis) on <var_vis:CodeWriter> */
var235 = var_vis->attrs[COLOR_nitc__abstract_compiler__CodeWriter___decl_lines].val; /* _decl_lines on <var_vis:CodeWriter> */
if (unlikely(var235 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _decl_lines");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1178);
fatal_exit(1);
}
var233 = var235;
RET_LABEL234:(void)0;
}
}
{
{ /* Inline array#AbstractArrayRead#length (var233) on <var233:Array[String]> */
var238 = var233->attrs[COLOR_core__array__AbstractArrayRead___length].l; /* _length on <var233:Array[String]> */
var236 = var238;
RET_LABEL237:(void)0;
}
}
{
{ /* Inline kernel#Int#+ (var230,var236) on <var230:Int> */
/* Covariant cast for argument 0 (i) <var236:Int> isa OTHER */
/* <var236:Int> isa OTHER */
var241 = 1; /* easy <var236:Int> isa OTHER*/
if (unlikely(!var241)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var242 = var230 + var236;
var239 = var242;
goto RET_LABEL240;
RET_LABEL240:(void)0;
}
}
var_total_lines = var239;
{
{ /* Inline kernel#Int#== (var_total_lines,0l) on <var_total_lines:Int> */
var245 = var_total_lines == 0l;
var243 = var245;
goto RET_LABEL244;
RET_LABEL244:(void)0;
}
}
if (var243){
goto BREAK_label226;
} else {
}
{
{ /* Inline kernel#Int#+ (var_count,var_total_lines) on <var_count:Int> */
/* Covariant cast for argument 0 (i) <var_total_lines:Int> isa OTHER */
/* <var_total_lines:Int> isa OTHER */
var248 = 1; /* easy <var_total_lines:Int> isa OTHER*/
if (unlikely(!var248)) {
var_class_name251 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name251);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var252 = var_count + var_total_lines;
var246 = var252;
goto RET_LABEL247;
RET_LABEL247:(void)0;
}
}
var_count = var246;
if (var_file == NULL) {
var254 = 1; /* is null */
} else {
var254 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_file,((val*)NULL)) on <var_file:nullable FileWriter> */
var_other222 = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_file,var_other222) on <var_file:nullable FileWriter(FileWriter)> */
var259 = var_file == var_other222;
var257 = var259;
goto RET_LABEL258;
RET_LABEL258:(void)0;
}
}
var255 = var257;
goto RET_LABEL256;
RET_LABEL256:(void)0;
}
var254 = var255;
}
var_260 = var254;
if (var254){
var253 = var_260;
} else {
{
{ /* Inline kernel#Int#> (var_count,var_max_c_lines) on <var_count:Int> */
/* Covariant cast for argument 0 (i) <var_max_c_lines:Int> isa OTHER */
/* <var_max_c_lines:Int> isa OTHER */
var264 = 1; /* easy <var_max_c_lines:Int> isa OTHER*/
if (unlikely(!var264)) {
var_class_name267 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name267);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 727);
fatal_exit(1);
}
var268 = var_count > var_max_c_lines;
var262 = var268;
goto RET_LABEL263;
RET_LABEL263:(void)0;
}
}
var_269 = var262;
if (var262){
{
{ /* Inline kernel#Int#> (var_max_c_lines,0l) on <var_max_c_lines:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var272 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var272)) {
var_class_name275 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name275);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 727);
fatal_exit(1);
}
var276 = var_max_c_lines > 0l;
var270 = var276;
goto RET_LABEL271;
RET_LABEL271:(void)0;
}
}
var261 = var270;
} else {
var261 = var_269;
}
var253 = var261;
}
if (var253){
{
{ /* Inline kernel#Int#+ (var_i,1l) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var279 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var279)) {
var_class_name282 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name282);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var283 = var_i + 1l;
var277 = var283;
goto RET_LABEL278;
RET_LABEL278:(void)0;
}
}
var_i = var277;
if (var_file == NULL) {
var284 = 0; /* is null */
} else {
var284 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_file,((val*)NULL)) on <var_file:nullable FileWriter> */
var_other = ((val*)NULL);
{
var287 = ((short int(*)(val* self, val* p0))(var_file->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_file, var_other); /* == on <var_file:nullable FileWriter(FileWriter)>*/
}
var288 = !var287;
var285 = var288;
goto RET_LABEL286;
RET_LABEL286:(void)0;
}
var284 = var285;
}
if (var284){
{
core___core__FileWriter___core__stream__Stream__close(var_file); /* Direct call file#FileWriter#close on <var_file:nullable FileWriter(FileWriter)>*/
}
} else {
}
if (unlikely(varonce289==NULL)) {
var290 = NEW_core__NativeArray(4l, &type_core__NativeArray__core__String);
if (likely(varonce291!=NULL)) {
var292 = varonce291;
} else {
var293 = ".";
var294 = core__abstract_text___CString___to_s_full(var293, 1l, 1l);
var292 = var294;
varonce291 = var292;
}
((struct instance_core__NativeArray*)var290)->values[1]=var292;
if (likely(varonce295!=NULL)) {
var296 = varonce295;
} else {
var297 = ".c";
var298 = core__abstract_text___CString___to_s_full(var297, 2l, 2l);
var296 = var298;
varonce295 = var296;
}
((struct instance_core__NativeArray*)var290)->values[3]=var296;
} else {
var290 = varonce289;
varonce289 = NULL;
}
{
{ /* Inline abstract_compiler#CodeFile#name (var_f) on <var_f:CodeFile> */
var301 = var_f->attrs[COLOR_nitc__abstract_compiler__CodeFile___name].val; /* _name on <var_f:CodeFile> */
if (unlikely(var301 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1156);
fatal_exit(1);
}
var299 = var301;
RET_LABEL300:(void)0;
}
}
((struct instance_core__NativeArray*)var290)->values[0]=var299;
var302 = core__flat___Int___core__abstract_text__Object__to_s(var_i);
((struct instance_core__NativeArray*)var290)->values[2]=var302;
{
var303 = ((val*(*)(val* self))(var290->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var290); /* native_to_s on <var290:NativeArray[String]>*/
}
varonce289 = var290;
var_cfilename = var303;
if (unlikely(varonce304==NULL)) {
var305 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce306!=NULL)) {
var307 = varonce306;
} else {
var308 = "/";
var309 = core__abstract_text___CString___to_s_full(var308, 1l, 1l);
var307 = var309;
varonce306 = var307;
}
((struct instance_core__NativeArray*)var305)->values[1]=var307;
} else {
var305 = varonce304;
varonce304 = NULL;
}
((struct instance_core__NativeArray*)var305)->values[0]=var_compile_dir;
((struct instance_core__NativeArray*)var305)->values[2]=var_cfilename;
{
var310 = ((val*(*)(val* self))(var305->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var305); /* native_to_s on <var305:NativeArray[String]>*/
}
varonce304 = var305;
var_cfilepath = var310;
{
{ /* Inline abstract_compiler#Toolchain#toolcontext (self) on <self:MakefileToolchain> */
var313 = self->attrs[COLOR_nitc__abstract_compiler__Toolchain___toolcontext].val; /* _toolcontext on <self:MakefileToolchain> */
if (unlikely(var313 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 131);
fatal_exit(1);
}
var311 = var313;
RET_LABEL312:(void)0;
}
}
if (unlikely(varonce314==NULL)) {
var315 = NEW_core__NativeArray(2l, &type_core__NativeArray__core__String);
if (likely(varonce316!=NULL)) {
var317 = varonce316;
} else {
var318 = "new C source files to compile: ";
var319 = core__abstract_text___CString___to_s_full(var318, 31l, 31l);
var317 = var319;
varonce316 = var317;
}
((struct instance_core__NativeArray*)var315)->values[0]=var317;
} else {
var315 = varonce314;
varonce314 = NULL;
}
((struct instance_core__NativeArray*)var315)->values[1]=var_cfilepath;
{
var320 = ((val*(*)(val* self))(var315->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var315); /* native_to_s on <var315:NativeArray[String]>*/
}
varonce314 = var315;
{
nitc___nitc__ToolContext___info(var311, var320, 3l); /* Direct call toolcontext#ToolContext#info on <var311:ToolContext>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_cfiles, var_cfilename); /* Direct call array#Array#add on <var_cfiles:Array[String]>*/
}
var321 = NEW_core__FileWriter(&type_core__FileWriter);
{
core___core__FileWriter___open(var321, var_cfilepath); /* Direct call file#FileWriter#open on <var321:FileWriter>*/
}
var_file = var321;
if (unlikely(varonce322==NULL)) {
var323 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce324!=NULL)) {
var325 = varonce324;
} else {
var326 = "#include \"";
var327 = core__abstract_text___CString___to_s_full(var326, 10l, 10l);
var325 = var327;
varonce324 = var325;
}
((struct instance_core__NativeArray*)var323)->values[0]=var325;
if (likely(varonce328!=NULL)) {
var329 = varonce328;
} else {
var330 = ".0.h\"\n";
var331 = core__abstract_text___CString___to_s_full(var330, 6l, 6l);
var329 = var331;
varonce328 = var329;
}
((struct instance_core__NativeArray*)var323)->values[2]=var329;
} else {
var323 = varonce322;
varonce322 = NULL;
}
{
{ /* Inline abstract_compiler#CodeFile#name (var_f) on <var_f:CodeFile> */
var334 = var_f->attrs[COLOR_nitc__abstract_compiler__CodeFile___name].val; /* _name on <var_f:CodeFile> */
if (unlikely(var334 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1156);
fatal_exit(1);
}
var332 = var334;
RET_LABEL333:(void)0;
}
}
((struct instance_core__NativeArray*)var323)->values[1]=var332;
{
var335 = ((val*(*)(val* self))(var323->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var323); /* native_to_s on <var323:NativeArray[String]>*/
}
varonce322 = var323;
{
core___core__FileWriter___core__stream__Writer__write(var_file, var335); /* Direct call file#FileWriter#write on <var_file:nullable FileWriter(FileWriter)>*/
}
var_count = var_total_lines;
} else {
}
{
{ /* Inline abstract_compiler#CodeWriter#decl_lines (var_vis) on <var_vis:CodeWriter> */
var338 = var_vis->attrs[COLOR_nitc__abstract_compiler__CodeWriter___decl_lines].val; /* _decl_lines on <var_vis:CodeWriter> */
if (unlikely(var338 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _decl_lines");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1178);
fatal_exit(1);
}
var336 = var338;
RET_LABEL337:(void)0;
}
}
var_339 = var336;
{
var340 = core___core__AbstractArrayRead___core__abstract_collection__Collection__iterator(var_339);
}
var_341 = var340;
for(;;) {
{
var342 = ((short int(*)(val* self))((((long)var_341&3)?class_info[((long)var_341&3)]:var_341->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_341); /* is_ok on <var_341:IndexedIterator[String]>*/
}
if (var342){
} else {
goto BREAK_label343;
}
{
var344 = ((val*(*)(val* self))((((long)var_341&3)?class_info[((long)var_341&3)]:var_341->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_341); /* item on <var_341:IndexedIterator[String]>*/
}
var_l345 = var344;
{
core___core__FileWriter___core__stream__Writer__write(var_file, var_l345); /* Direct call file#FileWriter#write on <var_file:nullable FileWriter(FileWriter)>*/
}
if (likely(varonce346!=NULL)) {
var347 = varonce346;
} else {
var348 = "\n";
var349 = core__abstract_text___CString___to_s_full(var348, 1l, 1l);
var347 = var349;
varonce346 = var347;
}
{
core___core__FileWriter___core__stream__Writer__write(var_file, var347); /* Direct call file#FileWriter#write on <var_file:nullable FileWriter(FileWriter)>*/
}
{
((void(*)(val* self))((((long)var_341&3)?class_info[((long)var_341&3)]:var_341->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_341); /* next on <var_341:IndexedIterator[String]>*/
}
}
BREAK_label343: (void)0;
{
((void(*)(val* self))((((long)var_341&3)?class_info[((long)var_341&3)]:var_341->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_341); /* finish on <var_341:IndexedIterator[String]>*/
}
{
{ /* Inline abstract_compiler#CodeWriter#lines (var_vis) on <var_vis:CodeWriter> */
var352 = var_vis->attrs[COLOR_nitc__abstract_compiler__CodeWriter___lines].val; /* _lines on <var_vis:CodeWriter> */
if (unlikely(var352 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _lines");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1175);
fatal_exit(1);
}
var350 = var352;
RET_LABEL351:(void)0;
}
}
var_353 = var350;
{
var354 = core___core__AbstractArrayRead___core__abstract_collection__Collection__iterator(var_353);
}
var_355 = var354;
for(;;) {
{
var356 = ((short int(*)(val* self))((((long)var_355&3)?class_info[((long)var_355&3)]:var_355->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_355); /* is_ok on <var_355:IndexedIterator[String]>*/
}
if (var356){
} else {
goto BREAK_label357;
}
{
var358 = ((val*(*)(val* self))((((long)var_355&3)?class_info[((long)var_355&3)]:var_355->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_355); /* item on <var_355:IndexedIterator[String]>*/
}
var_l359 = var358;
{
core___core__FileWriter___core__stream__Writer__write(var_file, var_l359); /* Direct call file#FileWriter#write on <var_file:nullable FileWriter(FileWriter)>*/
}
if (likely(varonce360!=NULL)) {
var361 = varonce360;
} else {
var362 = "\n";
var363 = core__abstract_text___CString___to_s_full(var362, 1l, 1l);
var361 = var363;
varonce360 = var361;
}
{
core___core__FileWriter___core__stream__Writer__write(var_file, var361); /* Direct call file#FileWriter#write on <var_file:nullable FileWriter(FileWriter)>*/
}
{
((void(*)(val* self))((((long)var_355&3)?class_info[((long)var_355&3)]:var_355->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_355); /* next on <var_355:IndexedIterator[String]>*/
}
}
BREAK_label357: (void)0;
{
((void(*)(val* self))((((long)var_355&3)?class_info[((long)var_355&3)]:var_355->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_355); /* finish on <var_355:IndexedIterator[String]>*/
}
BREAK_label226: (void)0;
{
((void(*)(val* self))((((long)var_210&3)?class_info[((long)var_210&3)]:var_210->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_210); /* next on <var_210:IndexedIterator[CodeWriter]>*/
}
}
BREAK_label212: (void)0;
{
((void(*)(val* self))((((long)var_210&3)?class_info[((long)var_210&3)]:var_210->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_210); /* finish on <var_210:IndexedIterator[CodeWriter]>*/
}
if (var_file == NULL) {
var364 = 1; /* is null */
} else {
var364 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_file,((val*)NULL)) on <var_file:nullable FileWriter> */
var_other222 = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_file,var_other222) on <var_file:nullable FileWriter(FileWriter)> */
var369 = var_file == var_other222;
var367 = var369;
goto RET_LABEL368;
RET_LABEL368:(void)0;
}
}
var365 = var367;
goto RET_LABEL366;
RET_LABEL366:(void)0;
}
var364 = var365;
}
if (var364){
goto BREAK_label370;
} else {
}
{
core___core__FileWriter___core__stream__Stream__close(var_file); /* Direct call file#FileWriter#close on <var_file:nullable FileWriter(FileWriter)>*/
}
if (unlikely(varonce371==NULL)) {
var372 = NEW_core__NativeArray(2l, &type_core__NativeArray__core__String);
if (likely(varonce373!=NULL)) {
var374 = varonce373;
} else {
var375 = ".0.h";
var376 = core__abstract_text___CString___to_s_full(var375, 4l, 4l);
var374 = var376;
varonce373 = var374;
}
((struct instance_core__NativeArray*)var372)->values[1]=var374;
} else {
var372 = varonce371;
varonce371 = NULL;
}
{
{ /* Inline abstract_compiler#CodeFile#name (var_f) on <var_f:CodeFile> */
var379 = var_f->attrs[COLOR_nitc__abstract_compiler__CodeFile___name].val; /* _name on <var_f:CodeFile> */
if (unlikely(var379 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1156);
fatal_exit(1);
}
var377 = var379;
RET_LABEL378:(void)0;
}
}
((struct instance_core__NativeArray*)var372)->values[0]=var377;
{
var380 = ((val*(*)(val* self))(var372->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var372); /* native_to_s on <var372:NativeArray[String]>*/
}
varonce371 = var372;
var_cfilename381 = var380;
if (unlikely(varonce382==NULL)) {
var383 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce384!=NULL)) {
var385 = varonce384;
} else {
var386 = "/";
var387 = core__abstract_text___CString___to_s_full(var386, 1l, 1l);
var385 = var387;
varonce384 = var385;
}
((struct instance_core__NativeArray*)var383)->values[1]=var385;
} else {
var383 = varonce382;
varonce382 = NULL;
}
((struct instance_core__NativeArray*)var383)->values[0]=var_compile_dir;
((struct instance_core__NativeArray*)var383)->values[2]=var_cfilename381;
{
var388 = ((val*(*)(val* self))(var383->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var383); /* native_to_s on <var383:NativeArray[String]>*/
}
varonce382 = var383;
var_cfilepath389 = var388;
var_hfile = ((val*)NULL);
var390 = NEW_core__FileWriter(&type_core__FileWriter);
{
core___core__FileWriter___open(var390, var_cfilepath389); /* Direct call file#FileWriter#open on <var390:FileWriter>*/
}
var_hfile = var390;
if (unlikely(varonce391==NULL)) {
var392 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce393!=NULL)) {
var394 = varonce393;
} else {
var395 = "#include \"";
var396 = core__abstract_text___CString___to_s_full(var395, 10l, 10l);
var394 = var396;
varonce393 = var394;
}
((struct instance_core__NativeArray*)var392)->values[0]=var394;
if (likely(varonce397!=NULL)) {
var398 = varonce397;
} else {
var399 = "\"\n";
var400 = core__abstract_text___CString___to_s_full(var399, 2l, 2l);
var398 = var400;
varonce397 = var398;
}
((struct instance_core__NativeArray*)var392)->values[2]=var398;
} else {
var392 = varonce391;
varonce391 = NULL;
}
((struct instance_core__NativeArray*)var392)->values[1]=var_hfilename;
{
var401 = ((val*(*)(val* self))(var392->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var392); /* native_to_s on <var392:NativeArray[String]>*/
}
varonce391 = var392;
{
core___core__FileWriter___core__stream__Writer__write(var_hfile, var401); /* Direct call file#FileWriter#write on <var_hfile:nullable FileWriter(FileWriter)>*/
}
{
{ /* Inline abstract_compiler#CodeFile#required_declarations (var_f) on <var_f:CodeFile> */
var404 = var_f->attrs[COLOR_nitc__abstract_compiler__CodeFile___required_declarations].val; /* _required_declarations on <var_f:CodeFile> */
if (unlikely(var404 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _required_declarations");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1162);
fatal_exit(1);
}
var402 = var404;
RET_LABEL403:(void)0;
}
}
var_405 = var402;
{
var406 = core___core__HashSet___core__abstract_collection__Collection__iterator(var_405);
}
var_407 = var406;
for(;;) {
{
var408 = ((short int(*)(val* self))((((long)var_407&3)?class_info[((long)var_407&3)]:var_407->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_407); /* is_ok on <var_407:Iterator[String]>*/
}
if (var408){
} else {
goto BREAK_label409;
}
{
var410 = ((val*(*)(val* self))((((long)var_407&3)?class_info[((long)var_407&3)]:var_407->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_407); /* item on <var_407:Iterator[String]>*/
}
var_key = var410;
{
{ /* Inline abstract_compiler#Toolchain#compiler (self) on <self:MakefileToolchain> */
var413 = self->attrs[COLOR_nitc__abstract_compiler__Toolchain___compiler].val; /* _compiler on <self:MakefileToolchain> */
if (unlikely(var413 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 134);
fatal_exit(1);
}
var411 = var413;
RET_LABEL412:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompiler#provided_declarations (var411) on <var411:AbstractCompiler> */
var416 = var411->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___provided_declarations].val; /* _provided_declarations on <var411:AbstractCompiler> */
if (unlikely(var416 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _provided_declarations");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 601);
fatal_exit(1);
}
var414 = var416;
RET_LABEL415:(void)0;
}
}
{
var417 = core___core__HashMap___core__abstract_collection__MapRead__has_key(var414, var_key);
}
var418 = !var417;
if (var418){
{
{ /* Inline abstract_compiler#Toolchain#compiler (self) on <self:MakefileToolchain> */
var421 = self->attrs[COLOR_nitc__abstract_compiler__Toolchain___compiler].val; /* _compiler on <self:MakefileToolchain> */
if (unlikely(var421 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 134);
fatal_exit(1);
}
var419 = var421;
RET_LABEL420:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompiler#requirers_of_declarations (var419) on <var419:AbstractCompiler> */
var424 = var419->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___requirers_of_declarations].val; /* _requirers_of_declarations on <var419:AbstractCompiler> */
if (unlikely(var424 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _requirers_of_declarations");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 603);
fatal_exit(1);
}
var422 = var424;
RET_LABEL423:(void)0;
}
}
{
var425 = core___core__HashMap___core__abstract_collection__MapRead__get_or_null(var422, var_key);
}
var_node = var425;
if (var_node == NULL) {
var426 = 0; /* is null */
} else {
var426 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_node,((val*)NULL)) on <var_node:nullable ANode> */
var_other = ((val*)NULL);
{
var429 = ((short int(*)(val* self, val* p0))(var_node->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_node, var_other); /* == on <var_node:nullable ANode(ANode)>*/
}
var430 = !var429;
var427 = var430;
goto RET_LABEL428;
RET_LABEL428:(void)0;
}
var426 = var427;
}
if (var426){
if (unlikely(varonce431==NULL)) {
var432 = NEW_core__NativeArray(2l, &type_core__NativeArray__core__String);
if (likely(varonce433!=NULL)) {
var434 = varonce433;
} else {
var435 = "No provided declaration for ";
var436 = core__abstract_text___CString___to_s_full(var435, 28l, 28l);
var434 = var436;
varonce433 = var434;
}
((struct instance_core__NativeArray*)var432)->values[0]=var434;
} else {
var432 = varonce431;
varonce431 = NULL;
}
((struct instance_core__NativeArray*)var432)->values[1]=var_key;
{
var437 = ((val*(*)(val* self))(var432->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var432); /* native_to_s on <var432:NativeArray[String]>*/
}
varonce431 = var432;
{
nitc___nitc__ANode___debug(var_node, var437); /* Direct call parser_nodes#ANode#debug on <var_node:nullable ANode(ANode)>*/
}
} else {
var438 = glob_sys;
if (unlikely(varonce439==NULL)) {
var440 = NEW_core__NativeArray(2l, &type_core__NativeArray__core__String);
if (likely(varonce441!=NULL)) {
var442 = varonce441;
} else {
var443 = "No provided declaration for ";
var444 = core__abstract_text___CString___to_s_full(var443, 28l, 28l);
var442 = var444;
varonce441 = var442;
}
((struct instance_core__NativeArray*)var440)->values[0]=var442;
} else {
var440 = varonce439;
varonce439 = NULL;
}
((struct instance_core__NativeArray*)var440)->values[1]=var_key;
{
var445 = ((val*(*)(val* self))(var440->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var440); /* native_to_s on <var440:NativeArray[String]>*/
}
varonce439 = var440;
{
core__file___Sys___print(var438, var445); /* Direct call file#Sys#print on <var438:Sys>*/
}
}
PRINT_ERROR("Runtime error: %s", "Aborted");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 293);
fatal_exit(1);
} else {
}
{
{ /* Inline abstract_compiler#Toolchain#compiler (self) on <self:MakefileToolchain> */
var448 = self->attrs[COLOR_nitc__abstract_compiler__Toolchain___compiler].val; /* _compiler on <self:MakefileToolchain> */
if (unlikely(var448 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 134);
fatal_exit(1);
}
var446 = var448;
RET_LABEL447:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompiler#provided_declarations (var446) on <var446:AbstractCompiler> */
var451 = var446->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___provided_declarations].val; /* _provided_declarations on <var446:AbstractCompiler> */
if (unlikely(var451 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _provided_declarations");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 601);
fatal_exit(1);
}
var449 = var451;
RET_LABEL450:(void)0;
}
}
{
var452 = core___core__HashMap___core__abstract_collection__MapRead___91d_93d(var449, var_key);
}
{
core___core__FileWriter___core__stream__Writer__write(var_hfile, var452); /* Direct call file#FileWriter#write on <var_hfile:nullable FileWriter(FileWriter)>*/
}
if (likely(varonce453!=NULL)) {
var454 = varonce453;
} else {
var455 = "\n";
var456 = core__abstract_text___CString___to_s_full(var455, 1l, 1l);
var454 = var456;
varonce453 = var454;
}
{
core___core__FileWriter___core__stream__Writer__write(var_hfile, var454); /* Direct call file#FileWriter#write on <var_hfile:nullable FileWriter(FileWriter)>*/
}
{
((void(*)(val* self))((((long)var_407&3)?class_info[((long)var_407&3)]:var_407->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_407); /* next on <var_407:Iterator[String]>*/
}
}
BREAK_label409: (void)0;
{
((void(*)(val* self))((((long)var_407&3)?class_info[((long)var_407&3)]:var_407->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_407); /* finish on <var_407:Iterator[String]>*/
}
{
core___core__FileWriter___core__stream__Stream__close(var_hfile); /* Direct call file#FileWriter#close on <var_hfile:nullable FileWriter(FileWriter)>*/
}
BREAK_label370: (void)0;
{
((void(*)(val* self))((((long)var_201&3)?class_info[((long)var_201&3)]:var_201->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_201); /* next on <var_201:IndexedIterator[CodeFile]>*/
}
}
BREAK_label203: (void)0;
{
((void(*)(val* self))((((long)var_201&3)?class_info[((long)var_201&3)]:var_201->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_201); /* finish on <var_201:IndexedIterator[CodeFile]>*/
}
{
{ /* Inline abstract_compiler#Toolchain#toolcontext (self) on <self:MakefileToolchain> */
var459 = self->attrs[COLOR_nitc__abstract_compiler__Toolchain___toolcontext].val; /* _toolcontext on <self:MakefileToolchain> */
if (unlikely(var459 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 131);
fatal_exit(1);
}
var457 = var459;
RET_LABEL458:(void)0;
}
}
if (unlikely(varonce460==NULL)) {
var461 = NEW_core__NativeArray(2l, &type_core__NativeArray__core__String);
if (likely(varonce462!=NULL)) {
var463 = varonce462;
} else {
var464 = "Total C source files to compile: ";
var465 = core__abstract_text___CString___to_s_full(var464, 33l, 33l);
var463 = var465;
varonce462 = var463;
}
((struct instance_core__NativeArray*)var461)->values[0]=var463;
} else {
var461 = varonce460;
varonce460 = NULL;
}
{
{ /* Inline array#AbstractArrayRead#length (var_cfiles) on <var_cfiles:Array[String]> */
var468 = var_cfiles->attrs[COLOR_core__array__AbstractArrayRead___length].l; /* _length on <var_cfiles:Array[String]> */
var466 = var468;
RET_LABEL467:(void)0;
}
}
var469 = core__flat___Int___core__abstract_text__Object__to_s(var466);
((struct instance_core__NativeArray*)var461)->values[1]=var469;
{
var470 = ((val*(*)(val* self))(var461->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var461); /* native_to_s on <var461:NativeArray[String]>*/
}
varonce460 = var461;
{
nitc___nitc__ToolContext___info(var457, var470, 2l); /* Direct call toolcontext#ToolContext#info on <var457:ToolContext>*/
}
RET_LABEL:;
}
/* method abstract_compiler#MakefileToolchain#makefile_name for (self: MakefileToolchain): String */
val* nitc___nitc__MakefileToolchain___makefile_name(val* self) {
val* var /* : String */;
val* var1 /* : NativeArray[String] */;
static val* varonce;
static val* varonce2;
val* var3 /* : String */;
char* var4 /* : CString */;
val* var5 /* : String */;
val* var6 /* : AbstractCompiler */;
val* var8 /* : AbstractCompiler */;
val* var9 /* : MModule */;
val* var11 /* : MModule */;
val* var12 /* : String */;
val* var13 /* : String */;
if (unlikely(varonce==NULL)) {
var1 = NEW_core__NativeArray(2l, &type_core__NativeArray__core__String);
if (likely(varonce2!=NULL)) {
var3 = varonce2;
} else {
var4 = ".mk";
var5 = core__abstract_text___CString___to_s_full(var4, 3l, 3l);
var3 = var5;
varonce2 = var3;
}
((struct instance_core__NativeArray*)var1)->values[1]=var3;
} else {
var1 = varonce;
varonce = NULL;
}
{
{ /* Inline abstract_compiler#Toolchain#compiler (self) on <self:MakefileToolchain> */
var8 = self->attrs[COLOR_nitc__abstract_compiler__Toolchain___compiler].val; /* _compiler on <self:MakefileToolchain> */
if (unlikely(var8 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 134);
fatal_exit(1);
}
var6 = var8;
RET_LABEL7:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompiler#mainmodule (var6) on <var6:AbstractCompiler> */
var11 = var6->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___mainmodule].val; /* _mainmodule on <var6:AbstractCompiler> */
if (unlikely(var11 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mainmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 531);
fatal_exit(1);
}
var9 = var11;
RET_LABEL10:(void)0;
}
}
{
var12 = nitc___nitc__MModule___nitc__model_base__MEntity__c_name(var9);
}
((struct instance_core__NativeArray*)var1)->values[0]=var12;
{
var13 = ((val*(*)(val* self))(var1->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var1); /* native_to_s on <var1:NativeArray[String]>*/
}
varonce = var1;
var = var13;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler#MakefileToolchain#default_outname for (self: MakefileToolchain): String */
val* nitc___nitc__MakefileToolchain___default_outname(val* self) {
val* var /* : String */;
val* var1 /* : AbstractCompiler */;
val* var3 /* : AbstractCompiler */;
val* var4 /* : MModule */;
val* var6 /* : MModule */;
val* var7 /* : MModule */;
val* var9 /* : MModule */;
val* var_mainmodule /* var mainmodule: MModule */;
val* var10 /* : String */;
val* var12 /* : String */;
{
{ /* Inline abstract_compiler#Toolchain#compiler (self) on <self:MakefileToolchain> */
var3 = self->attrs[COLOR_nitc__abstract_compiler__Toolchain___compiler].val; /* _compiler on <self:MakefileToolchain> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 134);
fatal_exit(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompiler#mainmodule (var1) on <var1:AbstractCompiler> */
var6 = var1->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___mainmodule].val; /* _mainmodule on <var1:AbstractCompiler> */
if (unlikely(var6 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mainmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 531);
fatal_exit(1);
}
var4 = var6;
RET_LABEL5:(void)0;
}
}
{
{ /* Inline mmodule#MModule#first_real_mmodule (var4) on <var4:MModule> */
var9 = var4->attrs[COLOR_nitc__mmodule__MModule___first_real_mmodule].val; /* _first_real_mmodule on <var4:MModule> */
if (unlikely(var9 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _first_real_mmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__mmodule, 254);
fatal_exit(1);
}
var7 = var9;
RET_LABEL8:(void)0;
}
}
var_mainmodule = var7;
{
{ /* Inline mmodule#MModule#name (var_mainmodule) on <var_mainmodule:MModule> */
var12 = var_mainmodule->attrs[COLOR_nitc__mmodule__MModule___name].val; /* _name on <var_mainmodule:MModule> */
if (unlikely(var12 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__mmodule, 100);
fatal_exit(1);
}
var10 = var12;
RET_LABEL11:(void)0;
}
}
var = var10;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler#MakefileToolchain#outfile for (self: MakefileToolchain, MModule): String */
val* nitc___nitc__MakefileToolchain___outfile(val* self, val* p0) {
val* var /* : String */;
val* var_mainmodule /* var mainmodule: MModule */;
val* var1 /* : ToolContext */;
val* var3 /* : ToolContext */;
val* var4 /* : OptionString */;
val* var6 /* : OptionString */;
val* var7 /* : nullable Object */;
val* var9 /* : nullable Object */;
val* var_res /* var res: nullable String */;
short int var10 /* : Bool */;
short int var11 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var13 /* : Bool */;
short int var14 /* : Bool */;
val* var15 /* : String */;
val* var16 /* : ToolContext */;
val* var18 /* : ToolContext */;
val* var19 /* : OptionString */;
val* var21 /* : OptionString */;
val* var22 /* : nullable Object */;
val* var24 /* : nullable Object */;
val* var_dir /* var dir: nullable String */;
short int var25 /* : Bool */;
short int var26 /* : Bool */;
short int var28 /* : Bool */;
short int var29 /* : Bool */;
val* var30 /* : String */;
var_mainmodule = p0;
{
{ /* Inline abstract_compiler#Toolchain#toolcontext (self) on <self:MakefileToolchain> */
var3 = self->attrs[COLOR_nitc__abstract_compiler__Toolchain___toolcontext].val; /* _toolcontext on <self:MakefileToolchain> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 131);
fatal_exit(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
{ /* Inline abstract_compiler#ToolContext#opt_output (var1) on <var1:ToolContext> */
var6 = var1->attrs[COLOR_nitc__abstract_compiler__ToolContext___opt_output].val; /* _opt_output on <var1:ToolContext> */
if (unlikely(var6 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_output");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 30);
fatal_exit(1);
}
var4 = var6;
RET_LABEL5:(void)0;
}
}
{
{ /* Inline opts#Option#value (var4) on <var4:OptionString> */
var9 = var4->attrs[COLOR_opts__Option___value].val; /* _value on <var4:OptionString> */
var7 = var9;
RET_LABEL8:(void)0;
}
}
var_res = var7;
if (var_res == NULL) {
var10 = 0; /* is null */
} else {
var10 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_res,((val*)NULL)) on <var_res:nullable String> */
var_other = ((val*)NULL);
{
var13 = ((short int(*)(val* self, val* p0))(var_res->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_res, var_other); /* == on <var_res:nullable String(String)>*/
}
var14 = !var13;
var11 = var14;
goto RET_LABEL12;
RET_LABEL12:(void)0;
}
var10 = var11;
}
if (var10){
var = var_res;
goto RET_LABEL;
} else {
}
{
var15 = ((val*(*)(val* self))(self->class->vft[COLOR_nitc__abstract_compiler__MakefileToolchain__default_outname]))(self); /* default_outname on <self:MakefileToolchain>*/
}
var_res = var15;
{
{ /* Inline abstract_compiler#Toolchain#toolcontext (self) on <self:MakefileToolchain> */
var18 = self->attrs[COLOR_nitc__abstract_compiler__Toolchain___toolcontext].val; /* _toolcontext on <self:MakefileToolchain> */
if (unlikely(var18 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 131);
fatal_exit(1);
}
var16 = var18;
RET_LABEL17:(void)0;
}
}
{
{ /* Inline abstract_compiler#ToolContext#opt_dir (var16) on <var16:ToolContext> */
var21 = var16->attrs[COLOR_nitc__abstract_compiler__ToolContext___opt_dir].val; /* _opt_dir on <var16:ToolContext> */
if (unlikely(var21 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_dir");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 32);
fatal_exit(1);
}
var19 = var21;
RET_LABEL20:(void)0;
}
}
{
{ /* Inline opts#Option#value (var19) on <var19:OptionString> */
var24 = var19->attrs[COLOR_opts__Option___value].val; /* _value on <var19:OptionString> */
var22 = var24;
RET_LABEL23:(void)0;
}
}
var_dir = var22;
if (var_dir == NULL) {
var25 = 0; /* is null */
} else {
var25 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_dir,((val*)NULL)) on <var_dir:nullable String> */
var_other = ((val*)NULL);
{
var28 = ((short int(*)(val* self, val* p0))(var_dir->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_dir, var_other); /* == on <var_dir:nullable String(String)>*/
}
var29 = !var28;
var26 = var29;
goto RET_LABEL27;
RET_LABEL27:(void)0;
}
var25 = var26;
}
if (var25){
{
var30 = core__file___String___join_path(var_dir, var_res);
}
var = var30;
goto RET_LABEL;
} else {
}
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler#MakefileToolchain#write_makefile for (self: MakefileToolchain, String, Array[String]) */
void nitc___nitc__MakefileToolchain___write_makefile(val* self, val* p0, val* p1) {
val* var_compile_dir /* var compile_dir: String */;
val* var_cfiles /* var cfiles: Array[String] */;
val* var /* : AbstractCompiler */;
val* var2 /* : AbstractCompiler */;
val* var3 /* : MModule */;
val* var5 /* : MModule */;
val* var_mainmodule /* var mainmodule: MModule */;
val* var6 /* : AbstractCompiler */;
val* var8 /* : AbstractCompiler */;
val* var9 /* : Platform */;
val* var11 /* : Platform */;
val* var_platform /* var platform: Platform */;
val* var12 /* : String */;
val* var_outname /* var outname: String */;
val* var13 /* : String */;
val* var_real_outpath /* var real_outpath: String */;
val* var14 /* : String */;
val* var_outpath /* var outpath: String */;
short int var15 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var17 /* : Bool */;
short int var18 /* : Bool */;
val* var19 /* : String */;
val* var20 /* : String */;
val* var_makename /* var makename: String */;
val* var21 /* : NativeArray[String] */;
static val* varonce;
static val* varonce22;
val* var23 /* : String */;
char* var24 /* : CString */;
val* var25 /* : String */;
val* var26 /* : String */;
val* var_makepath /* var makepath: String */;
val* var27 /* : FileWriter */;
val* var_makefile /* var makefile: FileWriter */;
val* var28 /* : HashSet[String] */;
val* var_linker_options /* var linker_options: HashSet[String] */;
val* var29 /* : POSetElement[MModule] */;
val* var31 /* : POSetElement[MModule] */;
val* var32 /* : Collection[nullable Object] */;
val* var_ /* var : Collection[MModule] */;
val* var33 /* : Iterator[nullable Object] */;
val* var_34 /* var : Iterator[MModule] */;
short int var35 /* : Bool */;
val* var36 /* : nullable Object */;
val* var_m /* var m: MModule */;
val* var37 /* : nullable Array[String] */;
val* var_libs /* var libs: nullable Array[String] */;
short int var38 /* : Bool */;
short int var39 /* : Bool */;
short int var41 /* : Bool */;
short int var42 /* : Bool */;
val* var43 /* : ToolContext */;
val* var45 /* : ToolContext */;
val* var46 /* : OptionBool */;
val* var48 /* : OptionBool */;
val* var49 /* : nullable Object */;
val* var51 /* : nullable Object */;
short int var52 /* : Bool */;
short int var_debug /* var debug: Bool */;
val* var54 /* : NativeArray[String] */;
static val* varonce53;
static val* varonce55;
val* var56 /* : String */;
char* var57 /* : CString */;
val* var58 /* : String */;
static val* varonce59;
val* var60 /* : String */;
char* var61 /* : CString */;
val* var62 /* : String */;
static val* varonce63;
val* var64 /* : String */;
char* var65 /* : CString */;
val* var66 /* : String */;
val* var67 /* : String */;
short int var68 /* : Bool */;
static val* varonce69;
val* var70 /* : String */;
char* var71 /* : CString */;
val* var72 /* : String */;
static val* varonce73;
val* var74 /* : String */;
char* var75 /* : CString */;
val* var76 /* : String */;
static val* varonce77;
val* var78 /* : String */;
char* var79 /* : CString */;
val* var80 /* : String */;
val* var81 /* : String */;
val* var82 /* : String */;
static val* varonce83;
val* var84 /* : String */;
char* var85 /* : CString */;
val* var86 /* : String */;
short int var87 /* : Bool */;
val* var88 /* : ToolContext */;
val* var90 /* : ToolContext */;
val* var91 /* : OptionBool */;
val* var93 /* : OptionBool */;
val* var94 /* : nullable Object */;
val* var96 /* : nullable Object */;
short int var97 /* : Bool */;
static val* varonce98;
val* var99 /* : String */;
char* var100 /* : CString */;
val* var101 /* : String */;
static val* varonce102;
val* var103 /* : String */;
char* var104 /* : CString */;
val* var105 /* : String */;
static val* varonce106;
val* var107 /* : String */;
char* var108 /* : CString */;
val* var109 /* : String */;
static val* varonce110;
val* var111 /* : String */;
char* var112 /* : CString */;
val* var113 /* : String */;
static val* varonce114;
val* var115 /* : String */;
char* var116 /* : CString */;
val* var117 /* : String */;
short int var118 /* : Bool */;
static val* varonce119;
val* var120 /* : String */;
char* var121 /* : CString */;
val* var122 /* : String */;
static val* varonce123;
val* var124 /* : String */;
char* var125 /* : CString */;
val* var126 /* : String */;
static val* varonce127;
val* var128 /* : String */;
char* var129 /* : CString */;
val* var130 /* : String */;
val* var132 /* : NativeArray[String] */;
static val* varonce131;
static val* varonce133;
val* var134 /* : String */;
char* var135 /* : CString */;
val* var136 /* : String */;
static val* varonce137;
val* var138 /* : String */;
char* var139 /* : CString */;
val* var140 /* : String */;
val* var141 /* : String */;
short int var142 /* : Bool */;
short int var144 /* : Bool */;
short int var145 /* : Bool */;
val* var147 /* : NativeArray[String] */;
static val* varonce146;
static val* varonce148;
val* var149 /* : String */;
char* var150 /* : CString */;
val* var151 /* : String */;
static val* varonce152;
val* var153 /* : String */;
char* var154 /* : CString */;
val* var155 /* : String */;
val* var156 /* : String */;
val* var157 /* : String */;
static val* varonce158;
val* var159 /* : String */;
char* var160 /* : CString */;
val* var161 /* : String */;
static val* varonce162;
val* var163 /* : String */;
char* var164 /* : CString */;
val* var165 /* : String */;
val* var166 /* : String */;
val* var167 /* : String */;
static val* varonce168;
val* var169 /* : String */;
char* var170 /* : CString */;
val* var171 /* : String */;
val* var172 /* : Array[String] */;
val* var_ofiles /* var ofiles: Array[String] */;
val* var173 /* : Array[String] */;
val* var_dep_rules /* var dep_rules: Array[String] */;
val* var_174 /* var : Array[String] */;
val* var175 /* : IndexedIterator[nullable Object] */;
val* var_176 /* var : IndexedIterator[String] */;
short int var177 /* : Bool */;
val* var179 /* : nullable Object */;
val* var_f /* var f: String */;
static val* varonce180;
val* var181 /* : String */;
char* var182 /* : CString */;
val* var183 /* : String */;
val* var184 /* : String */;
static val* varonce185;
val* var186 /* : String */;
char* var187 /* : CString */;
val* var188 /* : String */;
val* var189 /* : Text */;
val* var_o /* var o: String */;
val* var191 /* : NativeArray[String] */;
static val* varonce190;
static val* varonce192;
val* var193 /* : String */;
char* var194 /* : CString */;
val* var195 /* : String */;
static val* varonce196;
val* var197 /* : String */;
char* var198 /* : CString */;
val* var199 /* : String */;
static val* varonce200;
val* var201 /* : String */;
char* var202 /* : CString */;
val* var203 /* : String */;
static val* varonce204;
val* var205 /* : String */;
char* var206 /* : CString */;
val* var207 /* : String */;
val* var208 /* : String */;
val* var209 /* : AbstractCompiler */;
val* var211 /* : AbstractCompiler */;
val* var212 /* : Array[String] */;
val* var214 /* : Array[String] */;
short int var215 /* : Bool */;
short int var216 /* : Bool */;
val* var218 /* : NativeArray[String] */;
static val* varonce217;
static val* varonce219;
val* var220 /* : String */;
char* var221 /* : CString */;
val* var222 /* : String */;
val* var223 /* : String */;
val* var_linker_script_path /* var linker_script_path: String */;
static val* varonce224;
val* var225 /* : String */;
char* var226 /* : CString */;
val* var227 /* : String */;
val* var228 /* : FileWriter */;
val* var_f229 /* var f: FileWriter */;
val* var230 /* : AbstractCompiler */;
val* var232 /* : AbstractCompiler */;
val* var233 /* : Array[String] */;
val* var235 /* : Array[String] */;
val* var_236 /* var : Array[String] */;
val* var237 /* : IndexedIterator[nullable Object] */;
val* var_238 /* var : IndexedIterator[String] */;
short int var239 /* : Bool */;
val* var241 /* : nullable Object */;
val* var_l /* var l: String */;
static val* varonce242;
val* var243 /* : String */;
char* var244 /* : CString */;
val* var245 /* : String */;
val* var246 /* : Array[ExternFile] */;
val* var_java_files /* var java_files: Array[ExternFile] */;
val* var247 /* : Array[String] */;
val* var_pkgconfigs /* var pkgconfigs: Array[String] */;
val* var248 /* : AbstractCompiler */;
val* var250 /* : AbstractCompiler */;
val* var251 /* : Array[ExternFile] */;
val* var253 /* : Array[ExternFile] */;
val* var_254 /* var : Array[ExternFile] */;
val* var255 /* : IndexedIterator[nullable Object] */;
val* var_256 /* var : IndexedIterator[ExternFile] */;
short int var257 /* : Bool */;
val* var259 /* : nullable Object */;
val* var_f260 /* var f: ExternFile */;
val* var261 /* : Array[String] */;
val* var263 /* : Array[String] */;
short int var264 /* : Bool */;
short int var265 /* : Bool */;
static val* varonce266;
val* var267 /* : String */;
char* var268 /* : CString */;
val* var269 /* : String */;
val* var_270 /* var : Array[String] */;
val* var271 /* : IndexedIterator[nullable Object] */;
val* var_272 /* var : IndexedIterator[String] */;
short int var273 /* : Bool */;
val* var275 /* : nullable Object */;
val* var_p /* var p: String */;
val* var277 /* : NativeArray[String] */;
static val* varonce276;
static val* varonce278;
val* var279 /* : String */;
char* var280 /* : CString */;
val* var281 /* : String */;
static val* varonce282;
val* var283 /* : String */;
char* var284 /* : CString */;
val* var285 /* : String */;
static val* varonce286;
val* var287 /* : String */;
char* var288 /* : CString */;
val* var289 /* : String */;
static val* varonce290;
val* var291 /* : String */;
char* var292 /* : CString */;
val* var293 /* : String */;
val* var294 /* : String */;
val* var295 /* : AbstractCompiler */;
val* var297 /* : AbstractCompiler */;
val* var298 /* : Array[ExternFile] */;
val* var300 /* : Array[ExternFile] */;
val* var_301 /* var : Array[ExternFile] */;
val* var302 /* : IndexedIterator[nullable Object] */;
val* var_303 /* var : IndexedIterator[ExternFile] */;
short int var304 /* : Bool */;
val* var306 /* : nullable Object */;
val* var_f307 /* var f: ExternFile */;
val* var308 /* : String */;
val* var_o309 /* var o: String */;
val* var310 /* : String */;
val* var312 /* : String */;
val* var313 /* : String */;
val* var_ff /* var ff: String */;
val* var315 /* : NativeArray[String] */;
static val* varonce314;
static val* varonce316;
val* var317 /* : String */;
char* var318 /* : CString */;
val* var319 /* : String */;
static val* varonce320;
val* var321 /* : String */;
char* var322 /* : CString */;
val* var323 /* : String */;
val* var324 /* : String */;
val* var326 /* : NativeArray[String] */;
static val* varonce325;
static val* varonce327;
val* var328 /* : String */;
char* var329 /* : CString */;
val* var330 /* : String */;
static val* varonce331;
val* var332 /* : String */;
char* var333 /* : CString */;
val* var334 /* : String */;
val* var335 /* : String */;
val* var336 /* : String */;
val* var337 /* : String */;
short int var338 /* : Bool */;
short int var339 /* : Bool */;
short int var340 /* : Bool */;
short int var341 /* : Bool */;
val* var343 /* : NativeArray[String] */;
static val* varonce342;
static val* varonce344;
val* var345 /* : String */;
char* var346 /* : CString */;
val* var347 /* : String */;
val* var348 /* : String */;
val* var_jar_file /* var jar_file: String */;
val* var349 /* : Array[String] */;
val* var_class_files_array /* var class_files_array: Array[String] */;
val* var_350 /* var : Array[ExternFile] */;
val* var351 /* : IndexedIterator[nullable Object] */;
val* var_352 /* var : IndexedIterator[ExternFile] */;
short int var353 /* : Bool */;
val* var355 /* : nullable Object */;
val* var_f356 /* var f: ExternFile */;
val* var357 /* : String */;
static val* varonce358;
val* var359 /* : String */;
char* var360 /* : CString */;
val* var361 /* : String */;
val* var362 /* : String */;
val* var_class_files /* var class_files: String */;
val* var364 /* : NativeArray[String] */;
static val* varonce363;
static val* varonce365;
val* var366 /* : String */;
char* var367 /* : CString */;
val* var368 /* : String */;
static val* varonce369;
val* var370 /* : String */;
char* var371 /* : CString */;
val* var372 /* : String */;
val* var373 /* : String */;
val* var375 /* : NativeArray[String] */;
static val* varonce374;
static val* varonce376;
val* var377 /* : String */;
char* var378 /* : CString */;
val* var379 /* : String */;
static val* varonce380;
val* var381 /* : String */;
char* var382 /* : CString */;
val* var383 /* : String */;
static val* varonce384;
val* var385 /* : String */;
char* var386 /* : CString */;
val* var387 /* : String */;
val* var388 /* : String */;
static val* varonce389;
val* var390 /* : String */;
char* var391 /* : CString */;
val* var392 /* : String */;
val* var_pkg /* var pkg: String */;
short int var393 /* : Bool */;
short int var394 /* : Bool */;
val* var396 /* : NativeArray[String] */;
static val* varonce395;
static val* varonce397;
val* var398 /* : String */;
char* var399 /* : CString */;
val* var400 /* : String */;
static val* varonce401;
val* var402 /* : String */;
char* var403 /* : CString */;
val* var404 /* : String */;
static val* varonce405;
val* var406 /* : String */;
char* var407 /* : CString */;
val* var408 /* : String */;
val* var409 /* : String */;
val* var410 /* : String */;
val* var412 /* : NativeArray[String] */;
static val* varonce411;
static val* varonce413;
val* var414 /* : String */;
char* var415 /* : CString */;
val* var416 /* : String */;
static val* varonce417;
val* var418 /* : String */;
char* var419 /* : CString */;
val* var420 /* : String */;
static val* varonce421;
val* var422 /* : String */;
char* var423 /* : CString */;
val* var424 /* : String */;
static val* varonce425;
val* var426 /* : String */;
char* var427 /* : CString */;
val* var428 /* : String */;
static val* varonce429;
val* var430 /* : String */;
char* var431 /* : CString */;
val* var432 /* : String */;
static val* varonce433;
val* var434 /* : String */;
char* var435 /* : CString */;
val* var436 /* : String */;
val* var437 /* : String */;
val* var438 /* : String */;
static val* varonce439;
val* var440 /* : String */;
char* var441 /* : CString */;
val* var442 /* : String */;
val* var443 /* : String */;
val* var444 /* : String */;
val* var446 /* : NativeArray[String] */;
static val* varonce445;
static val* varonce447;
val* var448 /* : String */;
char* var449 /* : CString */;
val* var450 /* : String */;
static val* varonce451;
val* var452 /* : String */;
char* var453 /* : CString */;
val* var454 /* : String */;
static val* varonce455;
val* var456 /* : String */;
char* var457 /* : CString */;
val* var458 /* : String */;
val* var459 /* : String */;
val* var460 /* : String */;
short int var461 /* : Bool */;
short int var463 /* : Bool */;
short int var464 /* : Bool */;
val* var466 /* : NativeArray[String] */;
static val* varonce465;
static val* varonce467;
val* var468 /* : String */;
char* var469 /* : CString */;
val* var470 /* : String */;
static val* varonce471;
val* var472 /* : String */;
char* var473 /* : CString */;
val* var474 /* : String */;
val* var475 /* : String */;
val* var476 /* : String */;
val* var477 /* : ToolContext */;
val* var479 /* : ToolContext */;
val* var481 /* : NativeArray[String] */;
static val* varonce480;
static val* varonce482;
val* var483 /* : String */;
char* var484 /* : CString */;
val* var485 /* : String */;
val* var486 /* : String */;
val* var488 /* : NativeArray[String] */;
static val* varonce487;
static val* varonce489;
val* var490 /* : String */;
char* var491 /* : CString */;
val* var492 /* : String */;
val* var493 /* : String */;
var_compile_dir = p0;
var_cfiles = p1;
{
{ /* Inline abstract_compiler#Toolchain#compiler (self) on <self:MakefileToolchain> */
var2 = self->attrs[COLOR_nitc__abstract_compiler__Toolchain___compiler].val; /* _compiler on <self:MakefileToolchain> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 134);
fatal_exit(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompiler#mainmodule (var) on <var:AbstractCompiler> */
var5 = var->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___mainmodule].val; /* _mainmodule on <var:AbstractCompiler> */
if (unlikely(var5 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mainmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 531);
fatal_exit(1);
}
var3 = var5;
RET_LABEL4:(void)0;
}
}
var_mainmodule = var3;
{
{ /* Inline abstract_compiler#Toolchain#compiler (self) on <self:MakefileToolchain> */
var8 = self->attrs[COLOR_nitc__abstract_compiler__Toolchain___compiler].val; /* _compiler on <self:MakefileToolchain> */
if (unlikely(var8 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 134);
fatal_exit(1);
}
var6 = var8;
RET_LABEL7:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompiler#target_platform (var6) on <var6:AbstractCompiler> */
var11 = var6->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___target_platform].val; /* _target_platform on <var6:AbstractCompiler> */
if (unlikely(var11 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _target_platform");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 549);
fatal_exit(1);
}
var9 = var11;
RET_LABEL10:(void)0;
}
}
var_platform = var9;
{
var12 = nitc___nitc__MakefileToolchain___outfile(self, var_mainmodule);
}
var_outname = var12;
{
var13 = core__file___String___relpath(var_compile_dir, var_outname);
}
var_real_outpath = var13;
{
var14 = core___core__Text___escape_to_mk(var_real_outpath);
}
var_outpath = var14;
{
{ /* Inline kernel#Object#!= (var_outpath,var_real_outpath) on <var_outpath:String> */
var_other = var_real_outpath;
{
var17 = ((short int(*)(val* self, val* p0))(var_outpath->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_outpath, var_other); /* == on <var_outpath:String>*/
}
var18 = !var17;
var15 = var18;
goto RET_LABEL16;
RET_LABEL16:(void)0;
}
}
if (var15){
{
var19 = nitc___nitc__MModule___nitc__model_base__MEntity__c_name(var_mainmodule);
}
var_outpath = var19;
} else {
}
{
var20 = ((val*(*)(val* self))(self->class->vft[COLOR_nitc__abstract_compiler__MakefileToolchain__makefile_name]))(self); /* makefile_name on <self:MakefileToolchain>*/
}
var_makename = var20;
if (unlikely(varonce==NULL)) {
var21 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce22!=NULL)) {
var23 = varonce22;
} else {
var24 = "/";
var25 = core__abstract_text___CString___to_s_full(var24, 1l, 1l);
var23 = var25;
varonce22 = var23;
}
((struct instance_core__NativeArray*)var21)->values[1]=var23;
} else {
var21 = varonce;
varonce = NULL;
}
((struct instance_core__NativeArray*)var21)->values[0]=var_compile_dir;
((struct instance_core__NativeArray*)var21)->values[2]=var_makename;
{
var26 = ((val*(*)(val* self))(var21->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var21); /* native_to_s on <var21:NativeArray[String]>*/
}
varonce = var21;
var_makepath = var26;
var27 = NEW_core__FileWriter(&type_core__FileWriter);
{
core___core__FileWriter___open(var27, var_makepath); /* Direct call file#FileWriter#open on <var27:FileWriter>*/
}
var_makefile = var27;
var28 = NEW_core__HashSet(&type_core__HashSet__core__String);
{
core___core__HashSet___core__kernel__Object__init(var28); /* Direct call hash_collection#HashSet#init on <var28:HashSet[String]>*/
}
var_linker_options = var28;
{
{ /* Inline mmodule#MModule#in_importation (var_mainmodule) on <var_mainmodule:MModule> */
var31 = var_mainmodule->attrs[COLOR_nitc__mmodule__MModule___in_importation].val; /* _in_importation on <var_mainmodule:MModule> */
if (unlikely(var31 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _in_importation");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__mmodule, 108);
fatal_exit(1);
}
var29 = var31;
RET_LABEL30:(void)0;
}
}
{
var32 = poset___poset__POSetElement___greaters(var29);
}
var_ = var32;
{
var33 = ((val*(*)(val* self))((((long)var_&3)?class_info[((long)var_&3)]:var_->class)->vft[COLOR_core__abstract_collection__Collection__iterator]))(var_); /* iterator on <var_:Collection[MModule]>*/
}
var_34 = var33;
for(;;) {
{
var35 = ((short int(*)(val* self))((((long)var_34&3)?class_info[((long)var_34&3)]:var_34->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_34); /* is_ok on <var_34:Iterator[MModule]>*/
}
if (var35){
} else {
goto BREAK_label;
}
{
var36 = ((val*(*)(val* self))((((long)var_34&3)?class_info[((long)var_34&3)]:var_34->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_34); /* item on <var_34:Iterator[MModule]>*/
}
var_m = var36;
{
var37 = nitc__light___MModule___collect_linker_libs(var_m);
}
var_libs = var37;
if (var_libs == NULL) {
var38 = 0; /* is null */
} else {
var38 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_libs,((val*)NULL)) on <var_libs:nullable Array[String]> */
var_other = ((val*)NULL);
{
var41 = ((short int(*)(val* self, val* p0))(var_libs->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_libs, var_other); /* == on <var_libs:nullable Array[String](Array[String])>*/
}
var42 = !var41;
var39 = var42;
goto RET_LABEL40;
RET_LABEL40:(void)0;
}
var38 = var39;
}
if (var38){
{
core___core__SimpleCollection___add_all(var_linker_options, var_libs); /* Direct call abstract_collection#SimpleCollection#add_all on <var_linker_options:HashSet[String]>*/
}
} else {
}
{
((void(*)(val* self))((((long)var_34&3)?class_info[((long)var_34&3)]:var_34->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_34); /* next on <var_34:Iterator[MModule]>*/
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_34&3)?class_info[((long)var_34&3)]:var_34->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_34); /* finish on <var_34:Iterator[MModule]>*/
}
{
{ /* Inline abstract_compiler#Toolchain#toolcontext (self) on <self:MakefileToolchain> */
var45 = self->attrs[COLOR_nitc__abstract_compiler__Toolchain___toolcontext].val; /* _toolcontext on <self:MakefileToolchain> */
if (unlikely(var45 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 131);
fatal_exit(1);
}
var43 = var45;
RET_LABEL44:(void)0;
}
}
{
{ /* Inline abstract_compiler#ToolContext#opt_debug (var43) on <var43:ToolContext> */
var48 = var43->attrs[COLOR_nitc__abstract_compiler__ToolContext___opt_debug].val; /* _opt_debug on <var43:ToolContext> */
if (unlikely(var48 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_debug");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 72);
fatal_exit(1);
}
var46 = var48;
RET_LABEL47:(void)0;
}
}
{
{ /* Inline opts#Option#value (var46) on <var46:OptionBool> */
var51 = var46->attrs[COLOR_opts__Option___value].val; /* _value on <var46:OptionBool> */
var49 = var51;
RET_LABEL50:(void)0;
}
}
var52 = (short int)((long)(var49)>>2);
var_debug = var52;
if (unlikely(varonce53==NULL)) {
var54 = NEW_core__NativeArray(5l, &type_core__NativeArray__core__String);
if (likely(varonce55!=NULL)) {
var56 = varonce55;
} else {
var57 = "CC = ccache cc\nCXX = ccache c++\nCFLAGS = -g";
var58 = core__abstract_text___CString___to_s_full(var57, 43l, 43l);
var56 = var58;
varonce55 = var56;
}
((struct instance_core__NativeArray*)var54)->values[0]=var56;
if (likely(varonce59!=NULL)) {
var60 = varonce59;
} else {
var61 = "-Wno-unused-value -Wno-switch -Wno-attributes -Wno-trigraphs\nCINCL =\nLDFLAGS ?= \nLDLIBS  ?= -lm ";
var62 = core__abstract_text___CString___to_s_full(var61, 96l, 96l);
var60 = var62;
varonce59 = var60;
}
((struct instance_core__NativeArray*)var54)->values[2]=var60;
if (likely(varonce63!=NULL)) {
var64 = varonce63;
} else {
var65 = "\n\n";
var66 = core__abstract_text___CString___to_s_full(var65, 2l, 2l);
var64 = var66;
varonce63 = var64;
}
((struct instance_core__NativeArray*)var54)->values[4]=var64;
} else {
var54 = varonce53;
varonce53 = NULL;
}
var68 = !var_debug;
if (var68){
if (likely(varonce69!=NULL)) {
var70 = varonce69;
} else {
var71 = " -O2 ";
var72 = core__abstract_text___CString___to_s_full(var71, 5l, 5l);
var70 = var72;
varonce69 = var70;
}
var67 = var70;
} else {
if (likely(varonce73!=NULL)) {
var74 = varonce73;
} else {
var75 = " ";
var76 = core__abstract_text___CString___to_s_full(var75, 1l, 1l);
var74 = var76;
varonce73 = var74;
}
var67 = var74;
}
((struct instance_core__NativeArray*)var54)->values[1]=var67;
if (likely(varonce77!=NULL)) {
var78 = varonce77;
} else {
var79 = " ";
var80 = core__abstract_text___CString___to_s_full(var79, 1l, 1l);
var78 = var80;
varonce77 = var78;
}
{
var81 = core__abstract_text___Collection___join(var_linker_options, var78, ((val*)NULL));
}
((struct instance_core__NativeArray*)var54)->values[3]=var81;
{
var82 = ((val*(*)(val* self))(var54->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var54); /* native_to_s on <var54:NativeArray[String]>*/
}
varonce53 = var54;
{
core___core__FileWriter___core__stream__Writer__write(var_makefile, var82); /* Direct call file#FileWriter#write on <var_makefile:FileWriter>*/
}
if (likely(varonce83!=NULL)) {
var84 = varonce83;
} else {
var85 = "\n# SPECIAL CONFIGURATION FLAGS\n";
var86 = core__abstract_text___CString___to_s_full(var85, 31l, 31l);
var84 = var86;
varonce83 = var84;
}
{
core___core__FileWriter___core__stream__Writer__write(var_makefile, var84); /* Direct call file#FileWriter#write on <var_makefile:FileWriter>*/
}
{
var87 = ((short int(*)(val* self))(var_platform->class->vft[COLOR_nitc__platform__Platform__supports_libunwind]))(var_platform); /* supports_libunwind on <var_platform:Platform>*/
}
if (var87){
{
{ /* Inline abstract_compiler#Toolchain#toolcontext (self) on <self:MakefileToolchain> */
var90 = self->attrs[COLOR_nitc__abstract_compiler__Toolchain___toolcontext].val; /* _toolcontext on <self:MakefileToolchain> */
if (unlikely(var90 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 131);
fatal_exit(1);
}
var88 = var90;
RET_LABEL89:(void)0;
}
}
{
{ /* Inline abstract_compiler#ToolContext#opt_no_stacktrace (var88) on <var88:ToolContext> */
var93 = var88->attrs[COLOR_nitc__abstract_compiler__ToolContext___opt_no_stacktrace].val; /* _opt_no_stacktrace on <var88:ToolContext> */
if (unlikely(var93 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_no_stacktrace");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 66);
fatal_exit(1);
}
var91 = var93;
RET_LABEL92:(void)0;
}
}
{
{ /* Inline opts#Option#value (var91) on <var91:OptionBool> */
var96 = var91->attrs[COLOR_opts__Option___value].val; /* _value on <var91:OptionBool> */
var94 = var96;
RET_LABEL95:(void)0;
}
}
var97 = (short int)((long)(var94)>>2);
if (var97){
if (likely(varonce98!=NULL)) {
var99 = varonce98;
} else {
var100 = "NO_STACKTRACE=True";
var101 = core__abstract_text___CString___to_s_full(var100, 18l, 18l);
var99 = var101;
varonce98 = var99;
}
{
core___core__FileWriter___core__stream__Writer__write(var_makefile, var99); /* Direct call file#FileWriter#write on <var_makefile:FileWriter>*/
}
} else {
if (likely(varonce102!=NULL)) {
var103 = varonce102;
} else {
var104 = "NO_STACKTRACE= # Set to `True` to enable";
var105 = core__abstract_text___CString___to_s_full(var104, 40l, 40l);
var103 = var105;
varonce102 = var103;
}
{
core___core__FileWriter___core__stream__Writer__write(var_makefile, var103); /* Direct call file#FileWriter#write on <var_makefile:FileWriter>*/
}
}
} else {
}
if (likely(varonce106!=NULL)) {
var107 = varonce106;
} else {
var108 = "\n\n";
var109 = core__abstract_text___CString___to_s_full(var108, 2l, 2l);
var107 = var109;
varonce106 = var107;
}
{
core___core__FileWriter___core__stream__Writer__write(var_makefile, var107); /* Direct call file#FileWriter#write on <var_makefile:FileWriter>*/
}
if (likely(varonce110!=NULL)) {
var111 = varonce110;
} else {
var112 = "uname_S := $(shell sh -c \'uname -s 2>/dev/null || echo not\')\n";
var113 = core__abstract_text___CString___to_s_full(var112, 61l, 61l);
var111 = var113;
varonce110 = var111;
}
{
core___core__FileWriter___core__stream__Writer__write(var_makefile, var111); /* Direct call file#FileWriter#write on <var_makefile:FileWriter>*/
}
if (likely(varonce114!=NULL)) {
var115 = varonce114;
} else {
var116 = "clang_check := $(shell sh -c \'$(CC) -v 2>&1 | grep -q clang; echo $$?\')\nifeq ($(clang_check), 0)\n\tCFLAGS += -Qunused-arguments\nendif\n";
var117 = core__abstract_text___CString___to_s_full(var116, 133l, 133l);
var115 = var117;
varonce114 = var115;
}
{
core___core__FileWriter___core__stream__Writer__write(var_makefile, var115); /* Direct call file#FileWriter#write on <var_makefile:FileWriter>*/
}
{
var118 = ((short int(*)(val* self))(var_platform->class->vft[COLOR_nitc__platform__Platform__supports_libunwind]))(var_platform); /* supports_libunwind on <var_platform:Platform>*/
}
if (var118){
if (likely(varonce119!=NULL)) {
var120 = varonce119;
} else {
var121 = "ifneq ($(NO_STACKTRACE), True)\n  # Check and include lib-unwind in a portable way\n  ifneq ($(uname_S),Darwin)\n    # already included on macosx, but need to get the correct flags in other supported platforms.\n    ifeq ($(shell pkg-config --exists \'libunwind\'; echo $$?), 0)\n      LDLIBS += `pkg-config --libs libunwind`\n      CFLAGS += `pkg-config --cflags libunwind`\n    else\n      $(warning \"[_] stack-traces disabled. Please install libunwind-dev.\")\n      CFLAGS += -D NO_STACKTRACE\n    endif\n  endif\nelse\n  # Stacktraces disabled\n  CFLAGS += -D NO_STACKTRACE\nendif\n\n";
var122 = core__abstract_text___CString___to_s_full(var121, 569l, 569l);
var120 = var122;
varonce119 = var120;
}
{
core___core__FileWriter___core__stream__Writer__write(var_makefile, var120); /* Direct call file#FileWriter#write on <var_makefile:FileWriter>*/
}
} else {
if (likely(varonce123!=NULL)) {
var124 = varonce123;
} else {
var125 = "CFLAGS += -D NO_STACKTRACE\n\n";
var126 = core__abstract_text___CString___to_s_full(var125, 28l, 28l);
var124 = var126;
varonce123 = var124;
}
{
core___core__FileWriter___core__stream__Writer__write(var_makefile, var124); /* Direct call file#FileWriter#write on <var_makefile:FileWriter>*/
}
}
if (likely(varonce127!=NULL)) {
var128 = varonce127;
} else {
var129 = "# Special configuration for Darwin\nifeq ($(uname_S),Darwin)\n\t# Remove POSIX flag -lrt\n\tLDLIBS := $(filter-out -lrt,$(LDLIBS))\nendif\n\n";
var130 = core__abstract_text___CString___to_s_full(var129, 133l, 133l);
var128 = var130;
varonce127 = var128;
}
{
core___core__FileWriter___core__stream__Writer__write(var_makefile, var128); /* Direct call file#FileWriter#write on <var_makefile:FileWriter>*/
}
if (unlikely(varonce131==NULL)) {
var132 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce133!=NULL)) {
var134 = varonce133;
} else {
var135 = "all: ";
var136 = core__abstract_text___CString___to_s_full(var135, 5l, 5l);
var134 = var136;
varonce133 = var134;
}
((struct instance_core__NativeArray*)var132)->values[0]=var134;
if (likely(varonce137!=NULL)) {
var138 = varonce137;
} else {
var139 = "\n";
var140 = core__abstract_text___CString___to_s_full(var139, 1l, 1l);
var138 = var140;
varonce137 = var138;
}
((struct instance_core__NativeArray*)var132)->values[2]=var138;
} else {
var132 = varonce131;
varonce131 = NULL;
}
((struct instance_core__NativeArray*)var132)->values[1]=var_outpath;
{
var141 = ((val*(*)(val* self))(var132->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var132); /* native_to_s on <var132:NativeArray[String]>*/
}
varonce131 = var132;
{
core___core__FileWriter___core__stream__Writer__write(var_makefile, var141); /* Direct call file#FileWriter#write on <var_makefile:FileWriter>*/
}
{
{ /* Inline kernel#Object#!= (var_outpath,var_real_outpath) on <var_outpath:String> */
var_other = var_real_outpath;
{
var144 = ((short int(*)(val* self, val* p0))(var_outpath->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_outpath, var_other); /* == on <var_outpath:String>*/
}
var145 = !var144;
var142 = var145;
goto RET_LABEL143;
RET_LABEL143:(void)0;
}
}
if (var142){
if (unlikely(varonce146==NULL)) {
var147 = NEW_core__NativeArray(4l, &type_core__NativeArray__core__String);
if (likely(varonce148!=NULL)) {
var149 = varonce148;
} else {
var150 = "\tcp -- ";
var151 = core__abstract_text___CString___to_s_full(var150, 7l, 7l);
var149 = var151;
varonce148 = var149;
}
((struct instance_core__NativeArray*)var147)->values[0]=var149;
if (likely(varonce152!=NULL)) {
var153 = varonce152;
} else {
var154 = " ";
var155 = core__abstract_text___CString___to_s_full(var154, 1l, 1l);
var153 = var155;
varonce152 = var153;
}
((struct instance_core__NativeArray*)var147)->values[2]=var153;
} else {
var147 = varonce146;
varonce146 = NULL;
}
{
var156 = core___core__Text___escape_to_sh(var_outpath);
}
((struct instance_core__NativeArray*)var147)->values[1]=var156;
{
var157 = core___core__Text___escape_to_sh(var_real_outpath);
}
if (likely(varonce158!=NULL)) {
var159 = varonce158;
} else {
var160 = "$";
var161 = core__abstract_text___CString___to_s_full(var160, 1l, 1l);
var159 = var161;
varonce158 = var159;
}
if (likely(varonce162!=NULL)) {
var163 = varonce162;
} else {
var164 = "$$";
var165 = core__abstract_text___CString___to_s_full(var164, 2l, 2l);
var163 = var165;
varonce162 = var163;
}
{
var166 = core__string_search___Text___replace(var157, var159, var163);
}
((struct instance_core__NativeArray*)var147)->values[3]=var166;
{
var167 = ((val*(*)(val* self))(var147->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var147); /* native_to_s on <var147:NativeArray[String]>*/
}
varonce146 = var147;
{
core___core__FileWriter___core__stream__Writer__write(var_makefile, var167); /* Direct call file#FileWriter#write on <var_makefile:FileWriter>*/
}
} else {
}
if (likely(varonce168!=NULL)) {
var169 = varonce168;
} else {
var170 = "\n";
var171 = core__abstract_text___CString___to_s_full(var170, 1l, 1l);
var169 = var171;
varonce168 = var169;
}
{
core___core__FileWriter___core__stream__Writer__write(var_makefile, var169); /* Direct call file#FileWriter#write on <var_makefile:FileWriter>*/
}
var172 = NEW_core__Array(&type_core__Array__core__String);
{
core___core__Array___core__kernel__Object__init(var172); /* Direct call array#Array#init on <var172:Array[String]>*/
}
var_ofiles = var172;
var173 = NEW_core__Array(&type_core__Array__core__String);
{
core___core__Array___core__kernel__Object__init(var173); /* Direct call array#Array#init on <var173:Array[String]>*/
}
var_dep_rules = var173;
var_174 = var_cfiles;
{
var175 = core___core__AbstractArrayRead___core__abstract_collection__Collection__iterator(var_174);
}
var_176 = var175;
for(;;) {
{
var177 = ((short int(*)(val* self))((((long)var_176&3)?class_info[((long)var_176&3)]:var_176->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_176); /* is_ok on <var_176:IndexedIterator[String]>*/
}
if (var177){
} else {
goto BREAK_label178;
}
{
var179 = ((val*(*)(val* self))((((long)var_176&3)?class_info[((long)var_176&3)]:var_176->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_176); /* item on <var_176:IndexedIterator[String]>*/
}
var_f = var179;
if (likely(varonce180!=NULL)) {
var181 = varonce180;
} else {
var182 = ".c";
var183 = core__abstract_text___CString___to_s_full(var182, 2l, 2l);
var181 = var183;
varonce180 = var181;
}
{
var184 = core__file___String___strip_extension(var_f, var181);
}
if (likely(varonce185!=NULL)) {
var186 = varonce185;
} else {
var187 = ".o";
var188 = core__abstract_text___CString___to_s_full(var187, 2l, 2l);
var186 = var188;
varonce185 = var186;
}
{
var189 = ((val*(*)(val* self, val* p0))(var184->class->vft[COLOR_core__abstract_text__Text___43d]))(var184, var186); /* + on <var184:String>*/
}
var_o = var189;
if (unlikely(varonce190==NULL)) {
var191 = NEW_core__NativeArray(8l, &type_core__NativeArray__core__String);
if (likely(varonce192!=NULL)) {
var193 = varonce192;
} else {
var194 = ": ";
var195 = core__abstract_text___CString___to_s_full(var194, 2l, 2l);
var193 = var195;
varonce192 = var193;
}
((struct instance_core__NativeArray*)var191)->values[1]=var193;
if (likely(varonce196!=NULL)) {
var197 = varonce196;
} else {
var198 = "\n\t$(CC) $(CFLAGS) $(CINCL) -c -o ";
var199 = core__abstract_text___CString___to_s_full(var198, 33l, 33l);
var197 = var199;
varonce196 = var197;
}
((struct instance_core__NativeArray*)var191)->values[3]=var197;
if (likely(varonce200!=NULL)) {
var201 = varonce200;
} else {
var202 = " ";
var203 = core__abstract_text___CString___to_s_full(var202, 1l, 1l);
var201 = var203;
varonce200 = var201;
}
((struct instance_core__NativeArray*)var191)->values[5]=var201;
if (likely(varonce204!=NULL)) {
var205 = varonce204;
} else {
var206 = "\n\n";
var207 = core__abstract_text___CString___to_s_full(var206, 2l, 2l);
var205 = var207;
varonce204 = var205;
}
((struct instance_core__NativeArray*)var191)->values[7]=var205;
} else {
var191 = varonce190;
varonce190 = NULL;
}
((struct instance_core__NativeArray*)var191)->values[0]=var_o;
((struct instance_core__NativeArray*)var191)->values[2]=var_f;
((struct instance_core__NativeArray*)var191)->values[4]=var_o;
((struct instance_core__NativeArray*)var191)->values[6]=var_f;
{
var208 = ((val*(*)(val* self))(var191->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var191); /* native_to_s on <var191:NativeArray[String]>*/
}
varonce190 = var191;
{
core___core__FileWriter___core__stream__Writer__write(var_makefile, var208); /* Direct call file#FileWriter#write on <var_makefile:FileWriter>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_ofiles, var_o); /* Direct call array#Array#add on <var_ofiles:Array[String]>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_dep_rules, var_o); /* Direct call array#Array#add on <var_dep_rules:Array[String]>*/
}
{
((void(*)(val* self))((((long)var_176&3)?class_info[((long)var_176&3)]:var_176->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_176); /* next on <var_176:IndexedIterator[String]>*/
}
}
BREAK_label178: (void)0;
{
((void(*)(val* self))((((long)var_176&3)?class_info[((long)var_176&3)]:var_176->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_176); /* finish on <var_176:IndexedIterator[String]>*/
}
{
{ /* Inline abstract_compiler#Toolchain#compiler (self) on <self:MakefileToolchain> */
var211 = self->attrs[COLOR_nitc__abstract_compiler__Toolchain___compiler].val; /* _compiler on <self:MakefileToolchain> */
if (unlikely(var211 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 134);
fatal_exit(1);
}
var209 = var211;
RET_LABEL210:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompiler#linker_script (var209) on <var209:AbstractCompiler> */
var214 = var209->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___linker_script].val; /* _linker_script on <var209:AbstractCompiler> */
if (unlikely(var214 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _linker_script");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 588);
fatal_exit(1);
}
var212 = var214;
RET_LABEL213:(void)0;
}
}
{
var215 = core___core__AbstractArrayRead___core__abstract_collection__Collection__is_empty(var212);
}
var216 = !var215;
if (var216){
if (unlikely(varonce217==NULL)) {
var218 = NEW_core__NativeArray(2l, &type_core__NativeArray__core__String);
if (likely(varonce219!=NULL)) {
var220 = varonce219;
} else {
var221 = "/linker_script";
var222 = core__abstract_text___CString___to_s_full(var221, 14l, 14l);
var220 = var222;
varonce219 = var220;
}
((struct instance_core__NativeArray*)var218)->values[1]=var220;
} else {
var218 = varonce217;
varonce217 = NULL;
}
((struct instance_core__NativeArray*)var218)->values[0]=var_compile_dir;
{
var223 = ((val*(*)(val* self))(var218->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var218); /* native_to_s on <var218:NativeArray[String]>*/
}
varonce217 = var218;
var_linker_script_path = var223;
if (likely(varonce224!=NULL)) {
var225 = varonce224;
} else {
var226 = "linker_script";
var227 = core__abstract_text___CString___to_s_full(var226, 13l, 13l);
var225 = var227;
varonce224 = var225;
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_ofiles, var225); /* Direct call array#Array#add on <var_ofiles:Array[String]>*/
}
var228 = NEW_core__FileWriter(&type_core__FileWriter);
{
core___core__FileWriter___open(var228, var_linker_script_path); /* Direct call file#FileWriter#open on <var228:FileWriter>*/
}
var_f229 = var228;
{
{ /* Inline abstract_compiler#Toolchain#compiler (self) on <self:MakefileToolchain> */
var232 = self->attrs[COLOR_nitc__abstract_compiler__Toolchain___compiler].val; /* _compiler on <self:MakefileToolchain> */
if (unlikely(var232 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 134);
fatal_exit(1);
}
var230 = var232;
RET_LABEL231:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompiler#linker_script (var230) on <var230:AbstractCompiler> */
var235 = var230->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___linker_script].val; /* _linker_script on <var230:AbstractCompiler> */
if (unlikely(var235 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _linker_script");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 588);
fatal_exit(1);
}
var233 = var235;
RET_LABEL234:(void)0;
}
}
var_236 = var233;
{
var237 = core___core__AbstractArrayRead___core__abstract_collection__Collection__iterator(var_236);
}
var_238 = var237;
for(;;) {
{
var239 = ((short int(*)(val* self))((((long)var_238&3)?class_info[((long)var_238&3)]:var_238->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_238); /* is_ok on <var_238:IndexedIterator[String]>*/
}
if (var239){
} else {
goto BREAK_label240;
}
{
var241 = ((val*(*)(val* self))((((long)var_238&3)?class_info[((long)var_238&3)]:var_238->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_238); /* item on <var_238:IndexedIterator[String]>*/
}
var_l = var241;
{
core___core__FileWriter___core__stream__Writer__write(var_f229, var_l); /* Direct call file#FileWriter#write on <var_f229:FileWriter>*/
}
if (likely(varonce242!=NULL)) {
var243 = varonce242;
} else {
var244 = "\n";
var245 = core__abstract_text___CString___to_s_full(var244, 1l, 1l);
var243 = var245;
varonce242 = var243;
}
{
core___core__FileWriter___core__stream__Writer__write(var_f229, var243); /* Direct call file#FileWriter#write on <var_f229:FileWriter>*/
}
{
((void(*)(val* self))((((long)var_238&3)?class_info[((long)var_238&3)]:var_238->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_238); /* next on <var_238:IndexedIterator[String]>*/
}
}
BREAK_label240: (void)0;
{
((void(*)(val* self))((((long)var_238&3)?class_info[((long)var_238&3)]:var_238->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_238); /* finish on <var_238:IndexedIterator[String]>*/
}
{
core___core__FileWriter___core__stream__Stream__close(var_f229); /* Direct call file#FileWriter#close on <var_f229:FileWriter>*/
}
} else {
}
var246 = NEW_core__Array(&type_core__Array__nitc__ExternFile);
{
core___core__Array___core__kernel__Object__init(var246); /* Direct call array#Array#init on <var246:Array[ExternFile]>*/
}
var_java_files = var246;
var247 = NEW_core__Array(&type_core__Array__core__String);
{
core___core__Array___core__kernel__Object__init(var247); /* Direct call array#Array#init on <var247:Array[String]>*/
}
var_pkgconfigs = var247;
{
{ /* Inline abstract_compiler#Toolchain#compiler (self) on <self:MakefileToolchain> */
var250 = self->attrs[COLOR_nitc__abstract_compiler__Toolchain___compiler].val; /* _compiler on <self:MakefileToolchain> */
if (unlikely(var250 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 134);
fatal_exit(1);
}
var248 = var250;
RET_LABEL249:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompiler#extern_bodies (var248) on <var248:AbstractCompiler> */
var253 = var248->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___extern_bodies].val; /* _extern_bodies on <var248:AbstractCompiler> */
if (unlikely(var253 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _extern_bodies");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1061);
fatal_exit(1);
}
var251 = var253;
RET_LABEL252:(void)0;
}
}
var_254 = var251;
{
var255 = core___core__AbstractArrayRead___core__abstract_collection__Collection__iterator(var_254);
}
var_256 = var255;
for(;;) {
{
var257 = ((short int(*)(val* self))((((long)var_256&3)?class_info[((long)var_256&3)]:var_256->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_256); /* is_ok on <var_256:IndexedIterator[ExternFile]>*/
}
if (var257){
} else {
goto BREAK_label258;
}
{
var259 = ((val*(*)(val* self))((((long)var_256&3)?class_info[((long)var_256&3)]:var_256->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_256); /* item on <var_256:IndexedIterator[ExternFile]>*/
}
var_f260 = var259;
{
{ /* Inline c_tools#ExternFile#pkgconfigs (var_f260) on <var_f260:ExternFile> */
var263 = var_f260->attrs[COLOR_nitc__c_tools__ExternFile___pkgconfigs].val; /* _pkgconfigs on <var_f260:ExternFile> */
if (unlikely(var263 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _pkgconfigs");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__c_tools, 123);
fatal_exit(1);
}
var261 = var263;
RET_LABEL262:(void)0;
}
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add_all(var_pkgconfigs, var261); /* Direct call array#Array#add_all on <var_pkgconfigs:Array[String]>*/
}
{
((void(*)(val* self))((((long)var_256&3)?class_info[((long)var_256&3)]:var_256->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_256); /* next on <var_256:IndexedIterator[ExternFile]>*/
}
}
BREAK_label258: (void)0;
{
((void(*)(val* self))((((long)var_256&3)?class_info[((long)var_256&3)]:var_256->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_256); /* finish on <var_256:IndexedIterator[ExternFile]>*/
}
{
var264 = core___core__AbstractArrayRead___core__abstract_collection__Collection__is_empty(var_pkgconfigs);
}
var265 = !var264;
if (var265){
if (likely(varonce266!=NULL)) {
var267 = varonce266;
} else {
var268 = "# does pkg-config exists?\nifneq ($(shell which pkg-config >/dev/null; echo $$?), 0)\n$(error \"Command `pkg-config` not found. Please install it\")\nendif\n";
var269 = core__abstract_text___CString___to_s_full(var268, 151l, 151l);
var267 = var269;
varonce266 = var267;
}
{
core___core__FileWriter___core__stream__Writer__write(var_makefile, var267); /* Direct call file#FileWriter#write on <var_makefile:FileWriter>*/
}
var_270 = var_pkgconfigs;
{
var271 = core___core__AbstractArrayRead___core__abstract_collection__Collection__iterator(var_270);
}
var_272 = var271;
for(;;) {
{
var273 = ((short int(*)(val* self))((((long)var_272&3)?class_info[((long)var_272&3)]:var_272->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_272); /* is_ok on <var_272:IndexedIterator[String]>*/
}
if (var273){
} else {
goto BREAK_label274;
}
{
var275 = ((val*(*)(val* self))((((long)var_272&3)?class_info[((long)var_272&3)]:var_272->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_272); /* item on <var_272:IndexedIterator[String]>*/
}
var_p = var275;
if (unlikely(varonce276==NULL)) {
var277 = NEW_core__NativeArray(7l, &type_core__NativeArray__core__String);
if (likely(varonce278!=NULL)) {
var279 = varonce278;
} else {
var280 = "# Check for library ";
var281 = core__abstract_text___CString___to_s_full(var280, 20l, 20l);
var279 = var281;
varonce278 = var279;
}
((struct instance_core__NativeArray*)var277)->values[0]=var279;
if (likely(varonce282!=NULL)) {
var283 = varonce282;
} else {
var284 = "\nifneq ($(shell pkg-config --exists \'";
var285 = core__abstract_text___CString___to_s_full(var284, 37l, 37l);
var283 = var285;
varonce282 = var283;
}
((struct instance_core__NativeArray*)var277)->values[2]=var283;
if (likely(varonce286!=NULL)) {
var287 = varonce286;
} else {
var288 = "\'; echo $$?), 0)\n$(error \"pkg-config: package ";
var289 = core__abstract_text___CString___to_s_full(var288, 46l, 46l);
var287 = var289;
varonce286 = var287;
}
((struct instance_core__NativeArray*)var277)->values[4]=var287;
if (likely(varonce290!=NULL)) {
var291 = varonce290;
} else {
var292 = " is not found.\")\nendif\n";
var293 = core__abstract_text___CString___to_s_full(var292, 23l, 23l);
var291 = var293;
varonce290 = var291;
}
((struct instance_core__NativeArray*)var277)->values[6]=var291;
} else {
var277 = varonce276;
varonce276 = NULL;
}
((struct instance_core__NativeArray*)var277)->values[1]=var_p;
((struct instance_core__NativeArray*)var277)->values[3]=var_p;
((struct instance_core__NativeArray*)var277)->values[5]=var_p;
{
var294 = ((val*(*)(val* self))(var277->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var277); /* native_to_s on <var277:NativeArray[String]>*/
}
varonce276 = var277;
{
core___core__FileWriter___core__stream__Writer__write(var_makefile, var294); /* Direct call file#FileWriter#write on <var_makefile:FileWriter>*/
}
{
((void(*)(val* self))((((long)var_272&3)?class_info[((long)var_272&3)]:var_272->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_272); /* next on <var_272:IndexedIterator[String]>*/
}
}
BREAK_label274: (void)0;
{
((void(*)(val* self))((((long)var_272&3)?class_info[((long)var_272&3)]:var_272->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_272); /* finish on <var_272:IndexedIterator[String]>*/
}
} else {
}
{
{ /* Inline abstract_compiler#Toolchain#compiler (self) on <self:MakefileToolchain> */
var297 = self->attrs[COLOR_nitc__abstract_compiler__Toolchain___compiler].val; /* _compiler on <self:MakefileToolchain> */
if (unlikely(var297 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 134);
fatal_exit(1);
}
var295 = var297;
RET_LABEL296:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompiler#extern_bodies (var295) on <var295:AbstractCompiler> */
var300 = var295->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___extern_bodies].val; /* _extern_bodies on <var295:AbstractCompiler> */
if (unlikely(var300 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _extern_bodies");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1061);
fatal_exit(1);
}
var298 = var300;
RET_LABEL299:(void)0;
}
}
var_301 = var298;
{
var302 = core___core__AbstractArrayRead___core__abstract_collection__Collection__iterator(var_301);
}
var_303 = var302;
for(;;) {
{
var304 = ((short int(*)(val* self))((((long)var_303&3)?class_info[((long)var_303&3)]:var_303->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_303); /* is_ok on <var_303:IndexedIterator[ExternFile]>*/
}
if (var304){
} else {
goto BREAK_label305;
}
{
var306 = ((val*(*)(val* self))((((long)var_303&3)?class_info[((long)var_303&3)]:var_303->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_303); /* item on <var_303:IndexedIterator[ExternFile]>*/
}
var_f307 = var306;
{
var308 = ((val*(*)(val* self))(var_f307->class->vft[COLOR_nitc__c_tools__ExternFile__makefile_rule_name]))(var_f307); /* makefile_rule_name on <var_f307:ExternFile>*/
}
var_o309 = var308;
{
{ /* Inline c_tools#ExternFile#filename (var_f307) on <var_f307:ExternFile> */
var312 = var_f307->attrs[COLOR_nitc__c_tools__ExternFile___filename].val; /* _filename on <var_f307:ExternFile> */
if (unlikely(var312 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _filename");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__c_tools, 108);
fatal_exit(1);
}
var310 = var312;
RET_LABEL311:(void)0;
}
}
{
var313 = ((val*(*)(val* self, val* p0))(var310->class->vft[COLOR_core__file__String__basename]))(var310, ((val*)NULL)); /* basename on <var310:String>*/
}
var_ff = var313;
if (unlikely(varonce314==NULL)) {
var315 = NEW_core__NativeArray(4l, &type_core__NativeArray__core__String);
if (likely(varonce316!=NULL)) {
var317 = varonce316;
} else {
var318 = ": ";
var319 = core__abstract_text___CString___to_s_full(var318, 2l, 2l);
var317 = var319;
varonce316 = var317;
}
((struct instance_core__NativeArray*)var315)->values[1]=var317;
if (likely(varonce320!=NULL)) {
var321 = varonce320;
} else {
var322 = "\n";
var323 = core__abstract_text___CString___to_s_full(var322, 1l, 1l);
var321 = var323;
varonce320 = var321;
}
((struct instance_core__NativeArray*)var315)->values[3]=var321;
} else {
var315 = varonce314;
varonce314 = NULL;
}
((struct instance_core__NativeArray*)var315)->values[0]=var_o309;
((struct instance_core__NativeArray*)var315)->values[2]=var_ff;
{
var324 = ((val*(*)(val* self))(var315->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var315); /* native_to_s on <var315:NativeArray[String]>*/
}
varonce314 = var315;
{
core___core__FileWriter___core__stream__Writer__write(var_makefile, var324); /* Direct call file#FileWriter#write on <var_makefile:FileWriter>*/
}
if (unlikely(varonce325==NULL)) {
var326 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce327!=NULL)) {
var328 = varonce327;
} else {
var329 = "\t";
var330 = core__abstract_text___CString___to_s_full(var329, 1l, 1l);
var328 = var330;
varonce327 = var328;
}
((struct instance_core__NativeArray*)var326)->values[0]=var328;
if (likely(varonce331!=NULL)) {
var332 = varonce331;
} else {
var333 = "\n\n";
var334 = core__abstract_text___CString___to_s_full(var333, 2l, 2l);
var332 = var334;
varonce331 = var332;
}
((struct instance_core__NativeArray*)var326)->values[2]=var332;
} else {
var326 = varonce325;
varonce325 = NULL;
}
{
var335 = ((val*(*)(val* self))(var_f307->class->vft[COLOR_nitc__c_tools__ExternFile__makefile_rule_content]))(var_f307); /* makefile_rule_content on <var_f307:ExternFile>*/
}
((struct instance_core__NativeArray*)var326)->values[1]=var335;
{
var336 = ((val*(*)(val* self))(var326->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var326); /* native_to_s on <var326:NativeArray[String]>*/
}
varonce325 = var326;
{
core___core__FileWriter___core__stream__Writer__write(var_makefile, var336); /* Direct call file#FileWriter#write on <var_makefile:FileWriter>*/
}
{
var337 = ((val*(*)(val* self))(var_f307->class->vft[COLOR_nitc__c_tools__ExternFile__makefile_rule_name]))(var_f307); /* makefile_rule_name on <var_f307:ExternFile>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_dep_rules, var337); /* Direct call array#Array#add on <var_dep_rules:Array[String]>*/
}
{
var338 = ((short int(*)(val* self))(var_f307->class->vft[COLOR_nitc__c_tools__ExternFile__compiles_to_o_file]))(var_f307); /* compiles_to_o_file on <var_f307:ExternFile>*/
}
if (var338){
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_ofiles, var_o309); /* Direct call array#Array#add on <var_ofiles:Array[String]>*/
}
} else {
}
{
var339 = ((short int(*)(val* self))(var_f307->class->vft[COLOR_nitc__c_tools__ExternFile__add_to_jar]))(var_f307); /* add_to_jar on <var_f307:ExternFile>*/
}
if (var339){
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_java_files, var_f307); /* Direct call array#Array#add on <var_java_files:Array[ExternFile]>*/
}
} else {
}
{
((void(*)(val* self))((((long)var_303&3)?class_info[((long)var_303&3)]:var_303->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_303); /* next on <var_303:IndexedIterator[ExternFile]>*/
}
}
BREAK_label305: (void)0;
{
((void(*)(val* self))((((long)var_303&3)?class_info[((long)var_303&3)]:var_303->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_303); /* finish on <var_303:IndexedIterator[ExternFile]>*/
}
{
var340 = core___core__AbstractArrayRead___core__abstract_collection__Collection__is_empty(var_java_files);
}
var341 = !var340;
if (var341){
if (unlikely(varonce342==NULL)) {
var343 = NEW_core__NativeArray(2l, &type_core__NativeArray__core__String);
if (likely(varonce344!=NULL)) {
var345 = varonce344;
} else {
var346 = ".jar";
var347 = core__abstract_text___CString___to_s_full(var346, 4l, 4l);
var345 = var347;
varonce344 = var345;
}
((struct instance_core__NativeArray*)var343)->values[1]=var345;
} else {
var343 = varonce342;
varonce342 = NULL;
}
((struct instance_core__NativeArray*)var343)->values[0]=var_outpath;
{
var348 = ((val*(*)(val* self))(var343->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var343); /* native_to_s on <var343:NativeArray[String]>*/
}
varonce342 = var343;
var_jar_file = var348;
var349 = NEW_core__Array(&type_core__Array__core__String);
{
core___core__Array___core__kernel__Object__init(var349); /* Direct call array#Array#init on <var349:Array[String]>*/
}
var_class_files_array = var349;
var_350 = var_java_files;
{
var351 = core___core__AbstractArrayRead___core__abstract_collection__Collection__iterator(var_350);
}
var_352 = var351;
for(;;) {
{
var353 = ((short int(*)(val* self))((((long)var_352&3)?class_info[((long)var_352&3)]:var_352->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_352); /* is_ok on <var_352:IndexedIterator[ExternFile]>*/
}
if (var353){
} else {
goto BREAK_label354;
}
{
var355 = ((val*(*)(val* self))((((long)var_352&3)?class_info[((long)var_352&3)]:var_352->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_352); /* item on <var_352:IndexedIterator[ExternFile]>*/
}
var_f356 = var355;
{
var357 = ((val*(*)(val* self))(var_f356->class->vft[COLOR_nitc__c_tools__ExternFile__makefile_rule_name]))(var_f356); /* makefile_rule_name on <var_f356:ExternFile>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_class_files_array, var357); /* Direct call array#Array#add on <var_class_files_array:Array[String]>*/
}
{
((void(*)(val* self))((((long)var_352&3)?class_info[((long)var_352&3)]:var_352->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_352); /* next on <var_352:IndexedIterator[ExternFile]>*/
}
}
BREAK_label354: (void)0;
{
((void(*)(val* self))((((long)var_352&3)?class_info[((long)var_352&3)]:var_352->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_352); /* finish on <var_352:IndexedIterator[ExternFile]>*/
}
if (likely(varonce358!=NULL)) {
var359 = varonce358;
} else {
var360 = " ";
var361 = core__abstract_text___CString___to_s_full(var360, 1l, 1l);
var359 = var361;
varonce358 = var359;
}
{
var362 = core__abstract_text___Collection___join(var_class_files_array, var359, ((val*)NULL));
}
var_class_files = var362;
if (unlikely(varonce363==NULL)) {
var364 = NEW_core__NativeArray(4l, &type_core__NativeArray__core__String);
if (likely(varonce365!=NULL)) {
var366 = varonce365;
} else {
var367 = ": ";
var368 = core__abstract_text___CString___to_s_full(var367, 2l, 2l);
var366 = var368;
varonce365 = var366;
}
((struct instance_core__NativeArray*)var364)->values[1]=var366;
if (likely(varonce369!=NULL)) {
var370 = varonce369;
} else {
var371 = "\n";
var372 = core__abstract_text___CString___to_s_full(var371, 1l, 1l);
var370 = var372;
varonce369 = var370;
}
((struct instance_core__NativeArray*)var364)->values[3]=var370;
} else {
var364 = varonce363;
varonce363 = NULL;
}
((struct instance_core__NativeArray*)var364)->values[0]=var_jar_file;
((struct instance_core__NativeArray*)var364)->values[2]=var_class_files;
{
var373 = ((val*(*)(val* self))(var364->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var364); /* native_to_s on <var364:NativeArray[String]>*/
}
varonce363 = var364;
{
core___core__FileWriter___core__stream__Writer__write(var_makefile, var373); /* Direct call file#FileWriter#write on <var_makefile:FileWriter>*/
}
if (unlikely(varonce374==NULL)) {
var375 = NEW_core__NativeArray(5l, &type_core__NativeArray__core__String);
if (likely(varonce376!=NULL)) {
var377 = varonce376;
} else {
var378 = "\tjar cf ";
var379 = core__abstract_text___CString___to_s_full(var378, 8l, 8l);
var377 = var379;
varonce376 = var377;
}
((struct instance_core__NativeArray*)var375)->values[0]=var377;
if (likely(varonce380!=NULL)) {
var381 = varonce380;
} else {
var382 = " ";
var383 = core__abstract_text___CString___to_s_full(var382, 1l, 1l);
var381 = var383;
varonce380 = var381;
}
((struct instance_core__NativeArray*)var375)->values[2]=var381;
if (likely(varonce384!=NULL)) {
var385 = varonce384;
} else {
var386 = "\n\n";
var387 = core__abstract_text___CString___to_s_full(var386, 2l, 2l);
var385 = var387;
varonce384 = var385;
}
((struct instance_core__NativeArray*)var375)->values[4]=var385;
} else {
var375 = varonce374;
varonce374 = NULL;
}
((struct instance_core__NativeArray*)var375)->values[1]=var_jar_file;
((struct instance_core__NativeArray*)var375)->values[3]=var_class_files;
{
var388 = ((val*(*)(val* self))(var375->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var375); /* native_to_s on <var375:NativeArray[String]>*/
}
varonce374 = var375;
{
core___core__FileWriter___core__stream__Writer__write(var_makefile, var388); /* Direct call file#FileWriter#write on <var_makefile:FileWriter>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_dep_rules, var_jar_file); /* Direct call array#Array#add on <var_dep_rules:Array[String]>*/
}
} else {
}
if (likely(varonce389!=NULL)) {
var390 = varonce389;
} else {
var391 = "";
var392 = core__abstract_text___CString___to_s_full(var391, 0l, 0l);
var390 = var392;
varonce389 = var390;
}
var_pkg = var390;
{
var393 = core___core__AbstractArrayRead___core__abstract_collection__Collection__is_empty(var_pkgconfigs);
}
var394 = !var393;
if (var394){
if (unlikely(varonce395==NULL)) {
var396 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce397!=NULL)) {
var398 = varonce397;
} else {
var399 = "`pkg-config --libs ";
var400 = core__abstract_text___CString___to_s_full(var399, 19l, 19l);
var398 = var400;
varonce397 = var398;
}
((struct instance_core__NativeArray*)var396)->values[0]=var398;
if (likely(varonce401!=NULL)) {
var402 = varonce401;
} else {
var403 = "`";
var404 = core__abstract_text___CString___to_s_full(var403, 1l, 1l);
var402 = var404;
varonce401 = var402;
}
((struct instance_core__NativeArray*)var396)->values[2]=var402;
} else {
var396 = varonce395;
varonce395 = NULL;
}
if (likely(varonce405!=NULL)) {
var406 = varonce405;
} else {
var407 = " ";
var408 = core__abstract_text___CString___to_s_full(var407, 1l, 1l);
var406 = var408;
varonce405 = var406;
}
{
var409 = core__abstract_text___Collection___join(var_pkgconfigs, var406, ((val*)NULL));
}
((struct instance_core__NativeArray*)var396)->values[1]=var409;
{
var410 = ((val*(*)(val* self))(var396->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var396); /* native_to_s on <var396:NativeArray[String]>*/
}
varonce395 = var396;
var_pkg = var410;
} else {
}
if (unlikely(varonce411==NULL)) {
var412 = NEW_core__NativeArray(10l, &type_core__NativeArray__core__String);
if (likely(varonce413!=NULL)) {
var414 = varonce413;
} else {
var415 = ": ";
var416 = core__abstract_text___CString___to_s_full(var415, 2l, 2l);
var414 = var416;
varonce413 = var414;
}
((struct instance_core__NativeArray*)var412)->values[1]=var414;
if (likely(varonce417!=NULL)) {
var418 = varonce417;
} else {
var419 = "\n\t$(CC) $(LDFLAGS) -o ";
var420 = core__abstract_text___CString___to_s_full(var419, 22l, 22l);
var418 = var420;
varonce417 = var418;
}
((struct instance_core__NativeArray*)var412)->values[3]=var418;
if (likely(varonce421!=NULL)) {
var422 = varonce421;
} else {
var423 = " ";
var424 = core__abstract_text___CString___to_s_full(var423, 1l, 1l);
var422 = var424;
varonce421 = var422;
}
((struct instance_core__NativeArray*)var412)->values[5]=var422;
if (likely(varonce425!=NULL)) {
var426 = varonce425;
} else {
var427 = " $(LDLIBS) ";
var428 = core__abstract_text___CString___to_s_full(var427, 11l, 11l);
var426 = var428;
varonce425 = var426;
}
((struct instance_core__NativeArray*)var412)->values[7]=var426;
if (likely(varonce429!=NULL)) {
var430 = varonce429;
} else {
var431 = "\n\n";
var432 = core__abstract_text___CString___to_s_full(var431, 2l, 2l);
var430 = var432;
varonce429 = var430;
}
((struct instance_core__NativeArray*)var412)->values[9]=var430;
} else {
var412 = varonce411;
varonce411 = NULL;
}
((struct instance_core__NativeArray*)var412)->values[0]=var_outpath;
if (likely(varonce433!=NULL)) {
var434 = varonce433;
} else {
var435 = " ";
var436 = core__abstract_text___CString___to_s_full(var435, 1l, 1l);
var434 = var436;
varonce433 = var434;
}
{
var437 = core__abstract_text___Collection___join(var_dep_rules, var434, ((val*)NULL));
}
((struct instance_core__NativeArray*)var412)->values[2]=var437;
{
var438 = core___core__Text___escape_to_sh(var_outpath);
}
((struct instance_core__NativeArray*)var412)->values[4]=var438;
if (likely(varonce439!=NULL)) {
var440 = varonce439;
} else {
var441 = " ";
var442 = core__abstract_text___CString___to_s_full(var441, 1l, 1l);
var440 = var442;
varonce439 = var440;
}
{
var443 = core__abstract_text___Collection___join(var_ofiles, var440, ((val*)NULL));
}
((struct instance_core__NativeArray*)var412)->values[6]=var443;
((struct instance_core__NativeArray*)var412)->values[8]=var_pkg;
{
var444 = ((val*(*)(val* self))(var412->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var412); /* native_to_s on <var412:NativeArray[String]>*/
}
varonce411 = var412;
{
core___core__FileWriter___core__stream__Writer__write(var_makefile, var444); /* Direct call file#FileWriter#write on <var_makefile:FileWriter>*/
}
if (unlikely(varonce445==NULL)) {
var446 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce447!=NULL)) {
var448 = varonce447;
} else {
var449 = "clean:\n\trm ";
var450 = core__abstract_text___CString___to_s_full(var449, 11l, 11l);
var448 = var450;
varonce447 = var448;
}
((struct instance_core__NativeArray*)var446)->values[0]=var448;
if (likely(varonce451!=NULL)) {
var452 = varonce451;
} else {
var453 = " 2>/dev/null\n";
var454 = core__abstract_text___CString___to_s_full(var453, 13l, 13l);
var452 = var454;
varonce451 = var452;
}
((struct instance_core__NativeArray*)var446)->values[2]=var452;
} else {
var446 = varonce445;
varonce445 = NULL;
}
if (likely(varonce455!=NULL)) {
var456 = varonce455;
} else {
var457 = " ";
var458 = core__abstract_text___CString___to_s_full(var457, 1l, 1l);
var456 = var458;
varonce455 = var456;
}
{
var459 = core__abstract_text___Collection___join(var_ofiles, var456, ((val*)NULL));
}
((struct instance_core__NativeArray*)var446)->values[1]=var459;
{
var460 = ((val*(*)(val* self))(var446->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var446); /* native_to_s on <var446:NativeArray[String]>*/
}
varonce445 = var446;
{
core___core__FileWriter___core__stream__Writer__write(var_makefile, var460); /* Direct call file#FileWriter#write on <var_makefile:FileWriter>*/
}
{
{ /* Inline kernel#Object#!= (var_outpath,var_real_outpath) on <var_outpath:String> */
var_other = var_real_outpath;
{
var463 = ((short int(*)(val* self, val* p0))(var_outpath->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_outpath, var_other); /* == on <var_outpath:String>*/
}
var464 = !var463;
var461 = var464;
goto RET_LABEL462;
RET_LABEL462:(void)0;
}
}
if (var461){
if (unlikely(varonce465==NULL)) {
var466 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce467!=NULL)) {
var468 = varonce467;
} else {
var469 = "\trm -- ";
var470 = core__abstract_text___CString___to_s_full(var469, 7l, 7l);
var468 = var470;
varonce467 = var468;
}
((struct instance_core__NativeArray*)var466)->values[0]=var468;
if (likely(varonce471!=NULL)) {
var472 = varonce471;
} else {
var473 = " 2>/dev/null\n";
var474 = core__abstract_text___CString___to_s_full(var473, 13l, 13l);
var472 = var474;
varonce471 = var472;
}
((struct instance_core__NativeArray*)var466)->values[2]=var472;
} else {
var466 = varonce465;
varonce465 = NULL;
}
{
var475 = core___core__Text___escape_to_sh(var_outpath);
}
((struct instance_core__NativeArray*)var466)->values[1]=var475;
{
var476 = ((val*(*)(val* self))(var466->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var466); /* native_to_s on <var466:NativeArray[String]>*/
}
varonce465 = var466;
{
core___core__FileWriter___core__stream__Writer__write(var_makefile, var476); /* Direct call file#FileWriter#write on <var_makefile:FileWriter>*/
}
} else {
}
{
core___core__FileWriter___core__stream__Stream__close(var_makefile); /* Direct call file#FileWriter#close on <var_makefile:FileWriter>*/
}
{
{ /* Inline abstract_compiler#Toolchain#toolcontext (self) on <self:MakefileToolchain> */
var479 = self->attrs[COLOR_nitc__abstract_compiler__Toolchain___toolcontext].val; /* _toolcontext on <self:MakefileToolchain> */
if (unlikely(var479 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 131);
fatal_exit(1);
}
var477 = var479;
RET_LABEL478:(void)0;
}
}
if (unlikely(varonce480==NULL)) {
var481 = NEW_core__NativeArray(2l, &type_core__NativeArray__core__String);
if (likely(varonce482!=NULL)) {
var483 = varonce482;
} else {
var484 = "Generated makefile: ";
var485 = core__abstract_text___CString___to_s_full(var484, 20l, 20l);
var483 = var485;
varonce482 = var483;
}
((struct instance_core__NativeArray*)var481)->values[0]=var483;
} else {
var481 = varonce480;
varonce480 = NULL;
}
((struct instance_core__NativeArray*)var481)->values[1]=var_makepath;
{
var486 = ((val*(*)(val* self))(var481->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var481); /* native_to_s on <var481:NativeArray[String]>*/
}
varonce480 = var481;
{
nitc___nitc__ToolContext___info(var477, var486, 2l); /* Direct call toolcontext#ToolContext#info on <var477:ToolContext>*/
}
if (unlikely(varonce487==NULL)) {
var488 = NEW_core__NativeArray(2l, &type_core__NativeArray__core__String);
if (likely(varonce489!=NULL)) {
var490 = varonce489;
} else {
var491 = "/Makefile";
var492 = core__abstract_text___CString___to_s_full(var491, 9l, 9l);
var490 = var492;
varonce489 = var490;
}
((struct instance_core__NativeArray*)var488)->values[1]=var490;
} else {
var488 = varonce487;
varonce487 = NULL;
}
((struct instance_core__NativeArray*)var488)->values[0]=var_compile_dir;
{
var493 = ((val*(*)(val* self))(var488->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var488); /* native_to_s on <var488:NativeArray[String]>*/
}
varonce487 = var488;
{
core__file___String___file_copy_to(var_makepath, var493); /* Direct call file#String#file_copy_to on <var_makepath:String>*/
}
RET_LABEL:;
}
/* method abstract_compiler#MakefileToolchain#compile_c_code for (self: MakefileToolchain, String) */
void nitc___nitc__MakefileToolchain___compile_c_code(val* self, val* p0) {
val* var_compile_dir /* var compile_dir: String */;
val* var /* : String */;
val* var_makename /* var makename: String */;
val* var1 /* : ToolContext */;
val* var3 /* : ToolContext */;
val* var4 /* : OptionString */;
val* var6 /* : OptionString */;
val* var7 /* : nullable Object */;
val* var9 /* : nullable Object */;
val* var_makeflags /* var makeflags: nullable String */;
short int var10 /* : Bool */;
short int var11 /* : Bool */;
static val* varonce;
val* var12 /* : String */;
char* var13 /* : CString */;
val* var14 /* : String */;
val* var16 /* : NativeArray[String] */;
static val* varonce15;
static val* varonce17;
val* var18 /* : String */;
char* var19 /* : CString */;
val* var20 /* : String */;
static val* varonce21;
val* var22 /* : String */;
char* var23 /* : CString */;
val* var24 /* : String */;
static val* varonce25;
val* var26 /* : String */;
char* var27 /* : CString */;
val* var28 /* : String */;
val* var29 /* : String */;
val* var_command /* var command: String */;
val* var30 /* : ToolContext */;
val* var32 /* : ToolContext */;
short int var33 /* : Bool */;
val* var34 /* : ToolContext */;
val* var36 /* : ToolContext */;
long var37 /* : Int */;
long var39 /* : Int */;
short int var40 /* : Bool */;
short int var42 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var43 /* : Bool */;
short int var_ /* var : Bool */;
val* var44 /* : Sys */;
short int var45 /* : Bool */;
short int var47 /* : Bool */;
val* var48 /* : Sys */;
val* var50 /* : Sys */;
val* var52 /* : NativeArray[String] */;
static val* varonce51;
static val* varonce53;
val* var54 /* : String */;
char* var55 /* : CString */;
val* var56 /* : String */;
val* var57 /* : String */;
long var58 /* : Int */;
val* var59 /* : nullable Object */;
val* var_res /* var res: nullable Object */;
val* var60 /* : Sys */;
val* var62 /* : Sys */;
val* var64 /* : NativeArray[String] */;
static val* varonce63;
static val* varonce65;
val* var66 /* : String */;
char* var67 /* : CString */;
val* var68 /* : String */;
val* var69 /* : String */;
long var70 /* : Int */;
val* var71 /* : nullable Object */;
short int var72 /* : Bool */;
short int var74 /* : Bool */;
long var75 /* : Int */;
short int var76 /* : Bool */;
val* var77 /* : ToolContext */;
val* var79 /* : ToolContext */;
val* var81 /* : NativeArray[String] */;
static val* varonce80;
static val* varonce82;
val* var83 /* : String */;
char* var84 /* : CString */;
val* var85 /* : String */;
static val* varonce86;
val* var87 /* : String */;
char* var88 /* : CString */;
val* var89 /* : String */;
static val* varonce90;
val* var91 /* : String */;
char* var92 /* : CString */;
val* var93 /* : String */;
val* var94 /* : String */;
long var95 /* : Int */;
val* var96 /* : String */;
val* var97 /* : Message */;
var_compile_dir = p0;
{
var = ((val*(*)(val* self))(self->class->vft[COLOR_nitc__abstract_compiler__MakefileToolchain__makefile_name]))(self); /* makefile_name on <self:MakefileToolchain>*/
}
var_makename = var;
{
{ /* Inline abstract_compiler#Toolchain#toolcontext (self) on <self:MakefileToolchain> */
var3 = self->attrs[COLOR_nitc__abstract_compiler__Toolchain___toolcontext].val; /* _toolcontext on <self:MakefileToolchain> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 131);
fatal_exit(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
{ /* Inline abstract_compiler#ToolContext#opt_make_flags (var1) on <var1:ToolContext> */
var6 = var1->attrs[COLOR_nitc__abstract_compiler__ToolContext___opt_make_flags].val; /* _opt_make_flags on <var1:ToolContext> */
if (unlikely(var6 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_make_flags");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 38);
fatal_exit(1);
}
var4 = var6;
RET_LABEL5:(void)0;
}
}
{
{ /* Inline opts#Option#value (var4) on <var4:OptionString> */
var9 = var4->attrs[COLOR_opts__Option___value].val; /* _value on <var4:OptionString> */
var7 = var9;
RET_LABEL8:(void)0;
}
}
var_makeflags = var7;
if (var_makeflags == NULL) {
var10 = 1; /* is null */
} else {
var10 = 0; /* arg is null but recv is not */
}
if (0) {
var11 = ((short int(*)(val* self, val* p0))(var_makeflags->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_makeflags, ((val*)NULL)); /* == on <var_makeflags:nullable String>*/
var10 = var11;
}
if (var10){
if (likely(varonce!=NULL)) {
var12 = varonce;
} else {
var13 = "";
var14 = core__abstract_text___CString___to_s_full(var13, 0l, 0l);
var12 = var14;
varonce = var12;
}
var_makeflags = var12;
} else {
}
if (unlikely(varonce15==NULL)) {
var16 = NEW_core__NativeArray(6l, &type_core__NativeArray__core__String);
if (likely(varonce17!=NULL)) {
var18 = varonce17;
} else {
var19 = "make -B -C ";
var20 = core__abstract_text___CString___to_s_full(var19, 11l, 11l);
var18 = var20;
varonce17 = var18;
}
((struct instance_core__NativeArray*)var16)->values[0]=var18;
if (likely(varonce21!=NULL)) {
var22 = varonce21;
} else {
var23 = " -f ";
var24 = core__abstract_text___CString___to_s_full(var23, 4l, 4l);
var22 = var24;
varonce21 = var22;
}
((struct instance_core__NativeArray*)var16)->values[2]=var22;
if (likely(varonce25!=NULL)) {
var26 = varonce25;
} else {
var27 = " -j 4 ";
var28 = core__abstract_text___CString___to_s_full(var27, 6l, 6l);
var26 = var28;
varonce25 = var26;
}
((struct instance_core__NativeArray*)var16)->values[4]=var26;
} else {
var16 = varonce15;
varonce15 = NULL;
}
((struct instance_core__NativeArray*)var16)->values[1]=var_compile_dir;
((struct instance_core__NativeArray*)var16)->values[3]=var_makename;
((struct instance_core__NativeArray*)var16)->values[5]=var_makeflags;
{
var29 = ((val*(*)(val* self))(var16->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var16); /* native_to_s on <var16:NativeArray[String]>*/
}
varonce15 = var16;
var_command = var29;
{
{ /* Inline abstract_compiler#Toolchain#toolcontext (self) on <self:MakefileToolchain> */
var32 = self->attrs[COLOR_nitc__abstract_compiler__Toolchain___toolcontext].val; /* _toolcontext on <self:MakefileToolchain> */
if (unlikely(var32 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 131);
fatal_exit(1);
}
var30 = var32;
RET_LABEL31:(void)0;
}
}
{
nitc___nitc__ToolContext___info(var30, var_command, 2l); /* Direct call toolcontext#ToolContext#info on <var30:ToolContext>*/
}
{
{ /* Inline abstract_compiler#Toolchain#toolcontext (self) on <self:MakefileToolchain> */
var36 = self->attrs[COLOR_nitc__abstract_compiler__Toolchain___toolcontext].val; /* _toolcontext on <self:MakefileToolchain> */
if (unlikely(var36 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 131);
fatal_exit(1);
}
var34 = var36;
RET_LABEL35:(void)0;
}
}
{
{ /* Inline toolcontext#ToolContext#verbose_level (var34) on <var34:ToolContext> */
var39 = var34->attrs[COLOR_nitc__toolcontext__ToolContext___verbose_level].l; /* _verbose_level on <var34:ToolContext> */
var37 = var39;
RET_LABEL38:(void)0;
}
}
{
{ /* Inline kernel#Int#>= (var37,3l) on <var37:Int> */
/* Covariant cast for argument 0 (i) <3l:Int> isa OTHER */
/* <3l:Int> isa OTHER */
var42 = 1; /* easy <3l:Int> isa OTHER*/
if (unlikely(!var42)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 726);
fatal_exit(1);
}
var43 = var37 >= 3l;
var40 = var43;
goto RET_LABEL41;
RET_LABEL41:(void)0;
}
}
var_ = var40;
if (var40){
var33 = var_;
} else {
var44 = glob_sys;
{
{ /* Inline kernel#Sys#is_windows (var44) on <var44:Sys> */
struct nitni_instance* var_for_c_0;
var_for_c_0 = nit_alloc(sizeof(struct nitni_instance));
var_for_c_0->value = var44;
var47 = kernel___Sys_is_windows___impl(var_for_c_0);
var45 = var47;
goto RET_LABEL46;
RET_LABEL46:(void)0;
}
}
var33 = var45;
}
if (var33){
{
{ /* Inline kernel#Object#sys (self) on <self:MakefileToolchain> */
var50 = glob_sys;
var48 = var50;
goto RET_LABEL49;
RET_LABEL49:(void)0;
}
}
if (unlikely(varonce51==NULL)) {
var52 = NEW_core__NativeArray(2l, &type_core__NativeArray__core__String);
if (likely(varonce53!=NULL)) {
var54 = varonce53;
} else {
var55 = " 2>&1";
var56 = core__abstract_text___CString___to_s_full(var55, 5l, 5l);
var54 = var56;
varonce53 = var54;
}
((struct instance_core__NativeArray*)var52)->values[1]=var54;
} else {
var52 = varonce51;
varonce51 = NULL;
}
((struct instance_core__NativeArray*)var52)->values[0]=var_command;
{
var57 = ((val*(*)(val* self))(var52->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var52); /* native_to_s on <var52:NativeArray[String]>*/
}
varonce51 = var52;
{
var58 = core__exec___Sys___system(var48, var57);
}
var59 = (val*)(var58<<2|1);
var_res = var59;
} else {
{
{ /* Inline kernel#Object#sys (self) on <self:MakefileToolchain> */
var62 = glob_sys;
var60 = var62;
goto RET_LABEL61;
RET_LABEL61:(void)0;
}
}
if (unlikely(varonce63==NULL)) {
var64 = NEW_core__NativeArray(2l, &type_core__NativeArray__core__String);
if (likely(varonce65!=NULL)) {
var66 = varonce65;
} else {
var67 = " 2>&1 >/dev/null";
var68 = core__abstract_text___CString___to_s_full(var67, 16l, 16l);
var66 = var68;
varonce65 = var66;
}
((struct instance_core__NativeArray*)var64)->values[1]=var66;
} else {
var64 = varonce63;
varonce63 = NULL;
}
((struct instance_core__NativeArray*)var64)->values[0]=var_command;
{
var69 = ((val*(*)(val* self))(var64->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var64); /* native_to_s on <var64:NativeArray[String]>*/
}
varonce63 = var64;
{
var70 = core__exec___Sys___system(var60, var69);
}
var71 = (val*)(var70<<2|1);
var_res = var71;
}
{
{ /* Inline kernel#Int#!= (var_res,0l) on <var_res:nullable Object(Int)> */
var75 = (long)(var_res)>>2;
var74 = var75 == 0l;
var76 = !var74;
var72 = var76;
goto RET_LABEL73;
RET_LABEL73:(void)0;
}
}
if (var72){
{
{ /* Inline abstract_compiler#Toolchain#toolcontext (self) on <self:MakefileToolchain> */
var79 = self->attrs[COLOR_nitc__abstract_compiler__Toolchain___toolcontext].val; /* _toolcontext on <self:MakefileToolchain> */
if (unlikely(var79 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 131);
fatal_exit(1);
}
var77 = var79;
RET_LABEL78:(void)0;
}
}
if (unlikely(varonce80==NULL)) {
var81 = NEW_core__NativeArray(5l, &type_core__NativeArray__core__String);
if (likely(varonce82!=NULL)) {
var83 = varonce82;
} else {
var84 = "Compilation Error: `make` failed with error code: ";
var85 = core__abstract_text___CString___to_s_full(var84, 50l, 50l);
var83 = var85;
varonce82 = var83;
}
((struct instance_core__NativeArray*)var81)->values[0]=var83;
if (likely(varonce86!=NULL)) {
var87 = varonce86;
} else {
var88 = ". The command was `";
var89 = core__abstract_text___CString___to_s_full(var88, 19l, 19l);
var87 = var89;
varonce86 = var87;
}
((struct instance_core__NativeArray*)var81)->values[2]=var87;
if (likely(varonce90!=NULL)) {
var91 = varonce90;
} else {
var92 = "`.";
var93 = core__abstract_text___CString___to_s_full(var92, 2l, 2l);
var91 = var93;
varonce90 = var91;
}
((struct instance_core__NativeArray*)var81)->values[4]=var91;
} else {
var81 = varonce80;
varonce80 = NULL;
}
var95 = (long)(var_res)>>2;
var94 = core__flat___Int___core__abstract_text__Object__to_s(var95);
((struct instance_core__NativeArray*)var81)->values[1]=var94;
((struct instance_core__NativeArray*)var81)->values[3]=var_command;
{
var96 = ((val*(*)(val* self))(var81->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var81); /* native_to_s on <var81:NativeArray[String]>*/
}
varonce80 = var81;
{
var97 = nitc___nitc__ToolContext___error(var77, ((val*)NULL), var96);
}
} else {
}
RET_LABEL:;
}
/* method abstract_compiler#AbstractCompiler#names for (self: AbstractCompiler): HashMap[String, String] */
val* nitc___nitc__AbstractCompiler___names(val* self) {
val* var /* : HashMap[String, String] */;
val* var1 /* : HashMap[String, String] */;
var1 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___names].val; /* _names on <self:AbstractCompiler> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _names");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 528);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AbstractCompiler#mainmodule for (self: AbstractCompiler): MModule */
val* nitc___nitc__AbstractCompiler___mainmodule(val* self) {
val* var /* : MModule */;
val* var1 /* : MModule */;
var1 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___mainmodule].val; /* _mainmodule on <self:AbstractCompiler> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mainmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 531);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AbstractCompiler#mainmodule= for (self: AbstractCompiler, MModule) */
void nitc___nitc__AbstractCompiler___mainmodule_61d(val* self, val* p0) {
self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___mainmodule].val = p0; /* _mainmodule on <self:AbstractCompiler> */
RET_LABEL:;
}
/* method abstract_compiler#AbstractCompiler#realmainmodule for (self: AbstractCompiler): MModule */
val* nitc___nitc__AbstractCompiler___realmainmodule(val* self) {
val* var /* : MModule */;
val* var1 /* : MModule */;
var1 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___realmainmodule].val; /* _realmainmodule on <self:AbstractCompiler> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _realmainmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 535);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AbstractCompiler#realmainmodule= for (self: AbstractCompiler, MModule) */
void nitc___nitc__AbstractCompiler___realmainmodule_61d(val* self, val* p0) {
self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___realmainmodule].val = p0; /* _realmainmodule on <self:AbstractCompiler> */
RET_LABEL:;
}
/* method abstract_compiler#AbstractCompiler#modelbuilder for (self: AbstractCompiler): ModelBuilder */
val* nitc___nitc__AbstractCompiler___modelbuilder(val* self) {
val* var /* : ModelBuilder */;
val* var1 /* : ModelBuilder */;
var1 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___modelbuilder].val; /* _modelbuilder on <self:AbstractCompiler> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 538);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AbstractCompiler#modelbuilder= for (self: AbstractCompiler, ModelBuilder) */
void nitc___nitc__AbstractCompiler___modelbuilder_61d(val* self, val* p0) {
self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___modelbuilder].val = p0; /* _modelbuilder on <self:AbstractCompiler> */
RET_LABEL:;
}
/* method abstract_compiler#AbstractCompiler#toolchain for (self: AbstractCompiler): Toolchain */
val* nitc___nitc__AbstractCompiler___toolchain(val* self) {
val* var /* : Toolchain */;
val* var1 /* : Toolchain */;
var1 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___toolchain].val; /* _toolchain on <self:AbstractCompiler> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolchain");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 541);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AbstractCompiler#toolchain= for (self: AbstractCompiler, Toolchain) */
void nitc___nitc__AbstractCompiler___toolchain_61d(val* self, val* p0) {
self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___toolchain].val = p0; /* _toolchain on <self:AbstractCompiler> */
RET_LABEL:;
}
/* method abstract_compiler#AbstractCompiler#hardening for (self: AbstractCompiler): Bool */
short int nitc___nitc__AbstractCompiler___hardening(val* self) {
short int var /* : Bool */;
val* var1 /* : ModelBuilder */;
val* var3 /* : ModelBuilder */;
val* var4 /* : ToolContext */;
val* var6 /* : ToolContext */;
val* var7 /* : OptionBool */;
val* var9 /* : OptionBool */;
val* var10 /* : nullable Object */;
val* var12 /* : nullable Object */;
short int var13 /* : Bool */;
{
{ /* Inline abstract_compiler#AbstractCompiler#modelbuilder (self) on <self:AbstractCompiler> */
var3 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___modelbuilder].val; /* _modelbuilder on <self:AbstractCompiler> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 538);
fatal_exit(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
{ /* Inline modelbuilder_base#ModelBuilder#toolcontext (var1) on <var1:ModelBuilder> */
var6 = var1->attrs[COLOR_nitc__modelbuilder_base__ModelBuilder___toolcontext].val; /* _toolcontext on <var1:ModelBuilder> */
if (unlikely(var6 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelbuilder_base, 47);
fatal_exit(1);
}
var4 = var6;
RET_LABEL5:(void)0;
}
}
{
{ /* Inline abstract_compiler#ToolContext#opt_hardening (var4) on <var4:ToolContext> */
var9 = var4->attrs[COLOR_nitc__abstract_compiler__ToolContext___opt_hardening].val; /* _opt_hardening on <var4:ToolContext> */
if (unlikely(var9 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_hardening");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 46);
fatal_exit(1);
}
var7 = var9;
RET_LABEL8:(void)0;
}
}
{
{ /* Inline opts#Option#value (var7) on <var7:OptionBool> */
var12 = var7->attrs[COLOR_opts__Option___value].val; /* _value on <var7:OptionBool> */
var10 = var12;
RET_LABEL11:(void)0;
}
}
var13 = (short int)((long)(var10)>>2);
var = var13;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AbstractCompiler#target_platform for (self: AbstractCompiler): Platform */
val* nitc___nitc__AbstractCompiler___target_platform(val* self) {
val* var /* : Platform */;
val* var1 /* : Platform */;
var1 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___target_platform].val; /* _target_platform on <self:AbstractCompiler> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _target_platform");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 549);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AbstractCompiler#target_platform= for (self: AbstractCompiler, Platform) */
void nitc___nitc__AbstractCompiler___target_platform_61d(val* self, val* p0) {
self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___target_platform].val = p0; /* _target_platform on <self:AbstractCompiler> */
RET_LABEL:;
}
/* method abstract_compiler#AbstractCompiler#init for (self: AbstractCompiler) */
void nitc___nitc__AbstractCompiler___core__kernel__Object__init(val* self) {
val* var /* : MModule */;
val* var2 /* : MModule */;
val* var4 /* : Platform */;
val* var5 /* : MModule */;
val* var7 /* : MModule */;
val* var8 /* : nullable Platform */;
val* var9 /* : Platform */;
{
((void(*)(val* self))(self->class->vft[COLOR_nitc___nitc__AbstractCompiler___core__kernel__Object__init]))(self); /* init on <self:AbstractCompiler>*/
}
{
{ /* Inline abstract_compiler#AbstractCompiler#mainmodule (self) on <self:AbstractCompiler> */
var2 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___mainmodule].val; /* _mainmodule on <self:AbstractCompiler> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mainmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 531);
fatal_exit(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompiler#realmainmodule= (self,var) on <self:AbstractCompiler> */
self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___realmainmodule].val = var; /* _realmainmodule on <self:AbstractCompiler> */
RET_LABEL3:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompiler#mainmodule (self) on <self:AbstractCompiler> */
var7 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___mainmodule].val; /* _mainmodule on <self:AbstractCompiler> */
if (unlikely(var7 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mainmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 531);
fatal_exit(1);
}
var5 = var7;
RET_LABEL6:(void)0;
}
}
{
var8 = nitc__platform___MModule___target_platform(var5);
}
if (var8!=NULL) {
var4 = var8;
} else {
var9 = NEW_nitc__Platform(&type_nitc__Platform);
{
{ /* Inline kernel#Object#init (var9) on <var9:Platform> */
RET_LABEL10:(void)0;
}
}
var4 = var9;
}
{
{ /* Inline abstract_compiler#AbstractCompiler#target_platform= (self,var4) on <self:AbstractCompiler> */
self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___target_platform].val = var4; /* _target_platform on <self:AbstractCompiler> */
RET_LABEL11:(void)0;
}
}
RET_LABEL:;
}
/* method abstract_compiler#AbstractCompiler#new_file for (self: AbstractCompiler, String): CodeFile */
val* nitc___nitc__AbstractCompiler___new_file(val* self, val* p0) {
val* var /* : CodeFile */;
val* var_name /* var name: String */;
val* var1 /* : ModelBuilder */;
val* var3 /* : ModelBuilder */;
val* var4 /* : ToolContext */;
val* var6 /* : ToolContext */;
val* var7 /* : OptionBool */;
val* var9 /* : OptionBool */;
val* var10 /* : nullable Object */;
val* var12 /* : nullable Object */;
short int var13 /* : Bool */;
val* var14 /* : Array[CodeFile] */;
val* var16 /* : Array[CodeFile] */;
short int var17 /* : Bool */;
val* var18 /* : CodeFile */;
val* var19 /* : MModule */;
val* var21 /* : MModule */;
val* var22 /* : String */;
val* var_f /* var f: CodeFile */;
val* var23 /* : Array[CodeFile] */;
val* var25 /* : Array[CodeFile] */;
val* var26 /* : Array[CodeFile] */;
val* var28 /* : Array[CodeFile] */;
val* var29 /* : nullable Object */;
val* var30 /* : CodeFile */;
val* var_f31 /* var f: CodeFile */;
val* var32 /* : Array[CodeFile] */;
val* var34 /* : Array[CodeFile] */;
var_name = p0;
{
{ /* Inline abstract_compiler#AbstractCompiler#modelbuilder (self) on <self:AbstractCompiler> */
var3 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___modelbuilder].val; /* _modelbuilder on <self:AbstractCompiler> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 538);
fatal_exit(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
{ /* Inline modelbuilder_base#ModelBuilder#toolcontext (var1) on <var1:ModelBuilder> */
var6 = var1->attrs[COLOR_nitc__modelbuilder_base__ModelBuilder___toolcontext].val; /* _toolcontext on <var1:ModelBuilder> */
if (unlikely(var6 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelbuilder_base, 47);
fatal_exit(1);
}
var4 = var6;
RET_LABEL5:(void)0;
}
}
{
{ /* Inline abstract_compiler#ToolContext#opt_group_c_files (var4) on <var4:ToolContext> */
var9 = var4->attrs[COLOR_nitc__abstract_compiler__ToolContext___opt_group_c_files].val; /* _opt_group_c_files on <var4:ToolContext> */
if (unlikely(var9 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_group_c_files");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 42);
fatal_exit(1);
}
var7 = var9;
RET_LABEL8:(void)0;
}
}
{
{ /* Inline opts#Option#value (var7) on <var7:OptionBool> */
var12 = var7->attrs[COLOR_opts__Option___value].val; /* _value on <var7:OptionBool> */
var10 = var12;
RET_LABEL11:(void)0;
}
}
var13 = (short int)((long)(var10)>>2);
if (var13){
{
{ /* Inline abstract_compiler#AbstractCompiler#files (self) on <self:AbstractCompiler> */
var16 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___files].val; /* _files on <self:AbstractCompiler> */
if (unlikely(var16 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _files");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 578);
fatal_exit(1);
}
var14 = var16;
RET_LABEL15:(void)0;
}
}
{
var17 = core___core__AbstractArrayRead___core__abstract_collection__Collection__is_empty(var14);
}
if (var17){
var18 = NEW_nitc__CodeFile(&type_nitc__CodeFile);
{
{ /* Inline abstract_compiler#AbstractCompiler#mainmodule (self) on <self:AbstractCompiler> */
var21 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___mainmodule].val; /* _mainmodule on <self:AbstractCompiler> */
if (unlikely(var21 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mainmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 531);
fatal_exit(1);
}
var19 = var21;
RET_LABEL20:(void)0;
}
}
{
var22 = nitc___nitc__MModule___nitc__model_base__MEntity__c_name(var19);
}
{
((void(*)(val* self, val* p0))(var18->class->vft[COLOR_nitc__abstract_compiler__CodeFile__name_61d]))(var18, var22); /* name= on <var18:CodeFile>*/
}
{
((void(*)(val* self))(var18->class->vft[COLOR_core__kernel__Object__init]))(var18); /* init on <var18:CodeFile>*/
}
var_f = var18;
{
{ /* Inline abstract_compiler#AbstractCompiler#files (self) on <self:AbstractCompiler> */
var25 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___files].val; /* _files on <self:AbstractCompiler> */
if (unlikely(var25 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _files");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 578);
fatal_exit(1);
}
var23 = var25;
RET_LABEL24:(void)0;
}
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var23, var_f); /* Direct call array#Array#add on <var23:Array[CodeFile]>*/
}
} else {
}
{
{ /* Inline abstract_compiler#AbstractCompiler#files (self) on <self:AbstractCompiler> */
var28 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___files].val; /* _files on <self:AbstractCompiler> */
if (unlikely(var28 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _files");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 578);
fatal_exit(1);
}
var26 = var28;
RET_LABEL27:(void)0;
}
}
{
var29 = core___core__SequenceRead___Collection__first(var26);
}
var = var29;
goto RET_LABEL;
} else {
}
var30 = NEW_nitc__CodeFile(&type_nitc__CodeFile);
{
((void(*)(val* self, val* p0))(var30->class->vft[COLOR_nitc__abstract_compiler__CodeFile__name_61d]))(var30, var_name); /* name= on <var30:CodeFile>*/
}
{
((void(*)(val* self))(var30->class->vft[COLOR_core__kernel__Object__init]))(var30); /* init on <var30:CodeFile>*/
}
var_f31 = var30;
{
{ /* Inline abstract_compiler#AbstractCompiler#files (self) on <self:AbstractCompiler> */
var34 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___files].val; /* _files on <self:AbstractCompiler> */
if (unlikely(var34 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _files");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 578);
fatal_exit(1);
}
var32 = var34;
RET_LABEL33:(void)0;
}
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var32, var_f31); /* Direct call array#Array#add on <var32:Array[CodeFile]>*/
}
var = var_f31;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AbstractCompiler#files for (self: AbstractCompiler): Array[CodeFile] */
val* nitc___nitc__AbstractCompiler___files(val* self) {
val* var /* : Array[CodeFile] */;
val* var1 /* : Array[CodeFile] */;
var1 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___files].val; /* _files on <self:AbstractCompiler> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _files");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 578);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AbstractCompiler#header for (self: AbstractCompiler): CodeWriter */
val* nitc___nitc__AbstractCompiler___header(val* self) {
val* var /* : CodeWriter */;
val* var1 /* : CodeWriter */;
var1 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___header].val; /* _header on <self:AbstractCompiler> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 585);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AbstractCompiler#header= for (self: AbstractCompiler, CodeWriter) */
void nitc___nitc__AbstractCompiler___header_61d(val* self, val* p0) {
self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___header].val = p0; /* _header on <self:AbstractCompiler> */
RET_LABEL:;
}
/* method abstract_compiler#AbstractCompiler#linker_script for (self: AbstractCompiler): Array[String] */
val* nitc___nitc__AbstractCompiler___linker_script(val* self) {
val* var /* : Array[String] */;
val* var1 /* : Array[String] */;
var1 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___linker_script].val; /* _linker_script on <self:AbstractCompiler> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _linker_script");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 588);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AbstractCompiler#provide_declaration for (self: AbstractCompiler, String, String) */
void nitc___nitc__AbstractCompiler___provide_declaration(val* self, val* p0, val* p1) {
val* var_key /* var key: String */;
val* var_s /* var s: String */;
val* var /* : HashMap[String, String] */;
val* var2 /* : HashMap[String, String] */;
short int var3 /* : Bool */;
val* var4 /* : HashMap[String, String] */;
val* var6 /* : HashMap[String, String] */;
val* var7 /* : nullable Object */;
short int var8 /* : Bool */;
val* var9 /* : HashMap[String, String] */;
val* var11 /* : HashMap[String, String] */;
var_key = p0;
var_s = p1;
{
{ /* Inline abstract_compiler#AbstractCompiler#provided_declarations (self) on <self:AbstractCompiler> */
var2 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___provided_declarations].val; /* _provided_declarations on <self:AbstractCompiler> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _provided_declarations");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 601);
fatal_exit(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
var3 = core___core__HashMap___core__abstract_collection__MapRead__has_key(var, var_key);
}
if (var3){
{
{ /* Inline abstract_compiler#AbstractCompiler#provided_declarations (self) on <self:AbstractCompiler> */
var6 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___provided_declarations].val; /* _provided_declarations on <self:AbstractCompiler> */
if (unlikely(var6 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _provided_declarations");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 601);
fatal_exit(1);
}
var4 = var6;
RET_LABEL5:(void)0;
}
}
{
var7 = core___core__HashMap___core__abstract_collection__MapRead___91d_93d(var4, var_key);
}
{
var8 = ((short int(*)(val* self, val* p0))(var7->class->vft[COLOR_core__kernel__Object___61d_61d]))(var7, var_s); /* == on <var7:nullable Object(String)>*/
}
if (unlikely(!var8)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 596);
fatal_exit(1);
}
} else {
}
{
{ /* Inline abstract_compiler#AbstractCompiler#provided_declarations (self) on <self:AbstractCompiler> */
var11 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___provided_declarations].val; /* _provided_declarations on <self:AbstractCompiler> */
if (unlikely(var11 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _provided_declarations");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 601);
fatal_exit(1);
}
var9 = var11;
RET_LABEL10:(void)0;
}
}
{
core___core__HashMap___core__abstract_collection__Map___91d_93d_61d(var9, var_key, var_s); /* Direct call hash_collection#HashMap#[]= on <var9:HashMap[String, String]>*/
}
RET_LABEL:;
}
/* method abstract_compiler#AbstractCompiler#provided_declarations for (self: AbstractCompiler): HashMap[String, String] */
val* nitc___nitc__AbstractCompiler___provided_declarations(val* self) {
val* var /* : HashMap[String, String] */;
val* var1 /* : HashMap[String, String] */;
var1 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___provided_declarations].val; /* _provided_declarations on <self:AbstractCompiler> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _provided_declarations");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 601);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AbstractCompiler#requirers_of_declarations for (self: AbstractCompiler): HashMap[String, ANode] */
val* nitc___nitc__AbstractCompiler___requirers_of_declarations(val* self) {
val* var /* : HashMap[String, ANode] */;
val* var1 /* : HashMap[String, ANode] */;
var1 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___requirers_of_declarations].val; /* _requirers_of_declarations on <self:AbstractCompiler> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _requirers_of_declarations");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 603);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AbstractCompiler#build_c_to_nit_bindings for (self: AbstractCompiler) */
void nitc___nitc__AbstractCompiler___build_c_to_nit_bindings(val* self) {
val* var /* : Toolchain */;
val* var2 /* : Toolchain */;
val* var3 /* : String */;
val* var_compile_dir /* var compile_dir: String */;
val* var4 /* : FileWriter */;
val* var5 /* : NativeArray[String] */;
static val* varonce;
static val* varonce6;
val* var7 /* : String */;
char* var8 /* : CString */;
val* var9 /* : String */;
val* var10 /* : String */;
val* var_stream /* var stream: FileWriter */;
static val* varonce11;
val* var12 /* : String */;
char* var13 /* : CString */;
val* var14 /* : String */;
static val* varonce15;
val* var16 /* : String */;
char* var17 /* : CString */;
val* var18 /* : String */;
static val* varonce19;
val* var20 /* : String */;
char* var21 /* : CString */;
val* var22 /* : String */;
static val* varonce23;
val* var24 /* : String */;
char* var25 /* : CString */;
val* var26 /* : String */;
static val* varonce27;
val* var28 /* : String */;
char* var29 /* : CString */;
val* var30 /* : String */;
static val* varonce31;
val* var32 /* : String */;
char* var33 /* : CString */;
val* var34 /* : String */;
static val* varonce35;
val* var36 /* : String */;
char* var37 /* : CString */;
val* var38 /* : String */;
static val* varonce39;
val* var40 /* : String */;
char* var41 /* : CString */;
val* var42 /* : String */;
val* var44 /* : NativeArray[String] */;
static val* varonce43;
static val* varonce45;
val* var46 /* : String */;
char* var47 /* : CString */;
val* var48 /* : String */;
static val* varonce49;
val* var50 /* : String */;
char* var51 /* : CString */;
val* var52 /* : String */;
val* var53 /* : HashMap[String, String] */;
val* var55 /* : HashMap[String, String] */;
long var56 /* : Int */;
val* var57 /* : String */;
val* var58 /* : String */;
val* var59 /* : HashMap[String, String] */;
val* var61 /* : HashMap[String, String] */;
val* var62 /* : RemovableCollection[nullable Object] */;
val* var_ /* var : RemovableCollection[String] */;
val* var63 /* : Iterator[nullable Object] */;
val* var_64 /* var : Iterator[String] */;
short int var65 /* : Bool */;
val* var66 /* : nullable Object */;
val* var_i /* var i: String */;
static val* varonce67;
val* var68 /* : String */;
char* var69 /* : CString */;
val* var70 /* : String */;
val* var71 /* : String */;
static val* varonce72;
val* var73 /* : String */;
char* var74 /* : CString */;
val* var75 /* : String */;
val* var76 /* : HashMap[String, String] */;
val* var78 /* : HashMap[String, String] */;
val* var79 /* : nullable Object */;
val* var80 /* : String */;
static val* varonce81;
val* var82 /* : String */;
char* var83 /* : CString */;
val* var84 /* : String */;
static val* varonce85;
val* var86 /* : String */;
char* var87 /* : CString */;
val* var88 /* : String */;
static val* varonce89;
val* var90 /* : String */;
char* var91 /* : CString */;
val* var92 /* : String */;
val* var94 /* : NativeArray[String] */;
static val* varonce93;
static val* varonce95;
val* var96 /* : String */;
char* var97 /* : CString */;
val* var98 /* : String */;
static val* varonce99;
val* var100 /* : String */;
char* var101 /* : CString */;
val* var102 /* : String */;
val* var103 /* : HashMap[String, String] */;
val* var105 /* : HashMap[String, String] */;
long var106 /* : Int */;
val* var107 /* : String */;
val* var108 /* : String */;
static val* varonce109;
val* var110 /* : String */;
char* var111 /* : CString */;
val* var112 /* : String */;
static val* varonce113;
val* var114 /* : String */;
char* var115 /* : CString */;
val* var116 /* : String */;
static val* varonce117;
val* var118 /* : String */;
char* var119 /* : CString */;
val* var120 /* : String */;
static val* varonce121;
val* var122 /* : String */;
char* var123 /* : CString */;
val* var124 /* : String */;
static val* varonce125;
val* var126 /* : String */;
char* var127 /* : CString */;
val* var128 /* : String */;
static val* varonce129;
val* var130 /* : String */;
char* var131 /* : CString */;
val* var132 /* : String */;
static val* varonce133;
val* var134 /* : String */;
char* var135 /* : CString */;
val* var136 /* : String */;
static val* varonce137;
val* var138 /* : String */;
char* var139 /* : CString */;
val* var140 /* : String */;
val* var141 /* : FileWriter */;
val* var143 /* : NativeArray[String] */;
static val* varonce142;
static val* varonce144;
val* var145 /* : String */;
char* var146 /* : CString */;
val* var147 /* : String */;
val* var148 /* : String */;
static val* varonce149;
val* var150 /* : String */;
char* var151 /* : CString */;
val* var152 /* : String */;
val* var153 /* : Array[ExternFile] */;
val* var155 /* : Array[ExternFile] */;
val* var156 /* : ExternCFile */;
val* var158 /* : NativeArray[String] */;
static val* varonce157;
static val* varonce159;
val* var160 /* : String */;
char* var161 /* : CString */;
val* var162 /* : String */;
val* var163 /* : String */;
static val* varonce164;
val* var165 /* : String */;
char* var166 /* : CString */;
val* var167 /* : String */;
{
{ /* Inline abstract_compiler#AbstractCompiler#toolchain (self) on <self:AbstractCompiler> */
var2 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___toolchain].val; /* _toolchain on <self:AbstractCompiler> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolchain");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 541);
fatal_exit(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
var3 = ((val*(*)(val* self))(var->class->vft[COLOR_nitc__abstract_compiler__Toolchain__compile_dir]))(var); /* compile_dir on <var:Toolchain>*/
}
var_compile_dir = var3;
var4 = NEW_core__FileWriter(&type_core__FileWriter);
if (unlikely(varonce==NULL)) {
var5 = NEW_core__NativeArray(2l, &type_core__NativeArray__core__String);
if (likely(varonce6!=NULL)) {
var7 = varonce6;
} else {
var8 = "/c_functions_hash.c";
var9 = core__abstract_text___CString___to_s_full(var8, 19l, 19l);
var7 = var9;
varonce6 = var7;
}
((struct instance_core__NativeArray*)var5)->values[1]=var7;
} else {
var5 = varonce;
varonce = NULL;
}
((struct instance_core__NativeArray*)var5)->values[0]=var_compile_dir;
{
var10 = ((val*(*)(val* self))(var5->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var5); /* native_to_s on <var5:NativeArray[String]>*/
}
varonce = var5;
{
core___core__FileWriter___open(var4, var10); /* Direct call file#FileWriter#open on <var4:FileWriter>*/
}
var_stream = var4;
if (likely(varonce11!=NULL)) {
var12 = varonce11;
} else {
var13 = "#include <string.h>\n";
var14 = core__abstract_text___CString___to_s_full(var13, 20l, 20l);
var12 = var14;
varonce11 = var12;
}
{
core___core__FileWriter___core__stream__Writer__write(var_stream, var12); /* Direct call file#FileWriter#write on <var_stream:FileWriter>*/
}
if (likely(varonce15!=NULL)) {
var16 = varonce15;
} else {
var17 = "#include <stdlib.h>\n";
var18 = core__abstract_text___CString___to_s_full(var17, 20l, 20l);
var16 = var18;
varonce15 = var16;
}
{
core___core__FileWriter___core__stream__Writer__write(var_stream, var16); /* Direct call file#FileWriter#write on <var_stream:FileWriter>*/
}
if (likely(varonce19!=NULL)) {
var20 = varonce19;
} else {
var21 = "#include \"c_functions_hash.h\"\n";
var22 = core__abstract_text___CString___to_s_full(var21, 30l, 30l);
var20 = var22;
varonce19 = var20;
}
{
core___core__FileWriter___core__stream__Writer__write(var_stream, var20); /* Direct call file#FileWriter#write on <var_stream:FileWriter>*/
}
if (likely(varonce23!=NULL)) {
var24 = varonce23;
} else {
var25 = "typedef struct C_Nit_Names{char* name; char* nit_name;}C_Nit_Names;\n";
var26 = core__abstract_text___CString___to_s_full(var25, 68l, 68l);
var24 = var26;
varonce23 = var24;
}
{
core___core__FileWriter___core__stream__Writer__write(var_stream, var24); /* Direct call file#FileWriter#write on <var_stream:FileWriter>*/
}
if (likely(varonce27!=NULL)) {
var28 = varonce27;
} else {
var29 = "const char* get_nit_name(register const char* procproc, register unsigned int len){\n";
var30 = core__abstract_text___CString___to_s_full(var29, 84l, 84l);
var28 = var30;
varonce27 = var28;
}
{
core___core__FileWriter___core__stream__Writer__write(var_stream, var28); /* Direct call file#FileWriter#write on <var_stream:FileWriter>*/
}
if (likely(varonce31!=NULL)) {
var32 = varonce31;
} else {
var33 = "char* procname = malloc(len+1);";
var34 = core__abstract_text___CString___to_s_full(var33, 31l, 31l);
var32 = var34;
varonce31 = var32;
}
{
core___core__FileWriter___core__stream__Writer__write(var_stream, var32); /* Direct call file#FileWriter#write on <var_stream:FileWriter>*/
}
if (likely(varonce35!=NULL)) {
var36 = varonce35;
} else {
var37 = "memcpy(procname, procproc, len);";
var38 = core__abstract_text___CString___to_s_full(var37, 32l, 32l);
var36 = var38;
varonce35 = var36;
}
{
core___core__FileWriter___core__stream__Writer__write(var_stream, var36); /* Direct call file#FileWriter#write on <var_stream:FileWriter>*/
}
if (likely(varonce39!=NULL)) {
var40 = varonce39;
} else {
var41 = "procname[len] = \'\\0\';";
var42 = core__abstract_text___CString___to_s_full(var41, 21l, 21l);
var40 = var42;
varonce39 = var40;
}
{
core___core__FileWriter___core__stream__Writer__write(var_stream, var40); /* Direct call file#FileWriter#write on <var_stream:FileWriter>*/
}
if (unlikely(varonce43==NULL)) {
var44 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce45!=NULL)) {
var46 = varonce45;
} else {
var47 = "static const C_Nit_Names map[";
var48 = core__abstract_text___CString___to_s_full(var47, 29l, 29l);
var46 = var48;
varonce45 = var46;
}
((struct instance_core__NativeArray*)var44)->values[0]=var46;
if (likely(varonce49!=NULL)) {
var50 = varonce49;
} else {
var51 = "] = {\n";
var52 = core__abstract_text___CString___to_s_full(var51, 6l, 6l);
var50 = var52;
varonce49 = var50;
}
((struct instance_core__NativeArray*)var44)->values[2]=var50;
} else {
var44 = varonce43;
varonce43 = NULL;
}
{
{ /* Inline abstract_compiler#AbstractCompiler#names (self) on <self:AbstractCompiler> */
var55 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___names].val; /* _names on <self:AbstractCompiler> */
if (unlikely(var55 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _names");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 528);
fatal_exit(1);
}
var53 = var55;
RET_LABEL54:(void)0;
}
}
{
var56 = core___core__HashMap___core__abstract_collection__MapRead__length(var53);
}
var57 = core__flat___Int___core__abstract_text__Object__to_s(var56);
((struct instance_core__NativeArray*)var44)->values[1]=var57;
{
var58 = ((val*(*)(val* self))(var44->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var44); /* native_to_s on <var44:NativeArray[String]>*/
}
varonce43 = var44;
{
core___core__FileWriter___core__stream__Writer__write(var_stream, var58); /* Direct call file#FileWriter#write on <var_stream:FileWriter>*/
}
{
{ /* Inline abstract_compiler#AbstractCompiler#names (self) on <self:AbstractCompiler> */
var61 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___names].val; /* _names on <self:AbstractCompiler> */
if (unlikely(var61 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _names");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 528);
fatal_exit(1);
}
var59 = var61;
RET_LABEL60:(void)0;
}
}
{
var62 = core___core__HashMap___core__abstract_collection__MapRead__keys(var59);
}
var_ = var62;
{
var63 = ((val*(*)(val* self))((((long)var_&3)?class_info[((long)var_&3)]:var_->class)->vft[COLOR_core__abstract_collection__Collection__iterator]))(var_); /* iterator on <var_:RemovableCollection[String]>*/
}
var_64 = var63;
for(;;) {
{
var65 = ((short int(*)(val* self))((((long)var_64&3)?class_info[((long)var_64&3)]:var_64->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_64); /* is_ok on <var_64:Iterator[String]>*/
}
if (var65){
} else {
goto BREAK_label;
}
{
var66 = ((val*(*)(val* self))((((long)var_64&3)?class_info[((long)var_64&3)]:var_64->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_64); /* item on <var_64:Iterator[String]>*/
}
var_i = var66;
if (likely(varonce67!=NULL)) {
var68 = varonce67;
} else {
var69 = "{\"";
var70 = core__abstract_text___CString___to_s_full(var69, 2l, 2l);
var68 = var70;
varonce67 = var68;
}
{
core___core__FileWriter___core__stream__Writer__write(var_stream, var68); /* Direct call file#FileWriter#write on <var_stream:FileWriter>*/
}
{
var71 = ((val*(*)(val* self))(var_i->class->vft[COLOR_core__abstract_text__Text__escape_to_c]))(var_i); /* escape_to_c on <var_i:String>*/
}
{
core___core__FileWriter___core__stream__Writer__write(var_stream, var71); /* Direct call file#FileWriter#write on <var_stream:FileWriter>*/
}
if (likely(varonce72!=NULL)) {
var73 = varonce72;
} else {
var74 = "\",\"";
var75 = core__abstract_text___CString___to_s_full(var74, 3l, 3l);
var73 = var75;
varonce72 = var73;
}
{
core___core__FileWriter___core__stream__Writer__write(var_stream, var73); /* Direct call file#FileWriter#write on <var_stream:FileWriter>*/
}
{
{ /* Inline abstract_compiler#AbstractCompiler#names (self) on <self:AbstractCompiler> */
var78 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___names].val; /* _names on <self:AbstractCompiler> */
if (unlikely(var78 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _names");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 528);
fatal_exit(1);
}
var76 = var78;
RET_LABEL77:(void)0;
}
}
{
var79 = core___core__HashMap___core__abstract_collection__MapRead___91d_93d(var76, var_i);
}
{
var80 = ((val*(*)(val* self))(var79->class->vft[COLOR_core__abstract_text__Text__escape_to_c]))(var79); /* escape_to_c on <var79:nullable Object(String)>*/
}
{
core___core__FileWriter___core__stream__Writer__write(var_stream, var80); /* Direct call file#FileWriter#write on <var_stream:FileWriter>*/
}
if (likely(varonce81!=NULL)) {
var82 = varonce81;
} else {
var83 = "\"},\n";
var84 = core__abstract_text___CString___to_s_full(var83, 4l, 4l);
var82 = var84;
varonce81 = var82;
}
{
core___core__FileWriter___core__stream__Writer__write(var_stream, var82); /* Direct call file#FileWriter#write on <var_stream:FileWriter>*/
}
{
((void(*)(val* self))((((long)var_64&3)?class_info[((long)var_64&3)]:var_64->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_64); /* next on <var_64:Iterator[String]>*/
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_64&3)?class_info[((long)var_64&3)]:var_64->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_64); /* finish on <var_64:Iterator[String]>*/
}
if (likely(varonce85!=NULL)) {
var86 = varonce85;
} else {
var87 = "};\n";
var88 = core__abstract_text___CString___to_s_full(var87, 3l, 3l);
var86 = var88;
varonce85 = var86;
}
{
core___core__FileWriter___core__stream__Writer__write(var_stream, var86); /* Direct call file#FileWriter#write on <var_stream:FileWriter>*/
}
if (likely(varonce89!=NULL)) {
var90 = varonce89;
} else {
var91 = "int i;";
var92 = core__abstract_text___CString___to_s_full(var91, 6l, 6l);
var90 = var92;
varonce89 = var90;
}
{
core___core__FileWriter___core__stream__Writer__write(var_stream, var90); /* Direct call file#FileWriter#write on <var_stream:FileWriter>*/
}
if (unlikely(varonce93==NULL)) {
var94 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce95!=NULL)) {
var96 = varonce95;
} else {
var97 = "for(i = 0; i < ";
var98 = core__abstract_text___CString___to_s_full(var97, 15l, 15l);
var96 = var98;
varonce95 = var96;
}
((struct instance_core__NativeArray*)var94)->values[0]=var96;
if (likely(varonce99!=NULL)) {
var100 = varonce99;
} else {
var101 = "; i++){";
var102 = core__abstract_text___CString___to_s_full(var101, 7l, 7l);
var100 = var102;
varonce99 = var100;
}
((struct instance_core__NativeArray*)var94)->values[2]=var100;
} else {
var94 = varonce93;
varonce93 = NULL;
}
{
{ /* Inline abstract_compiler#AbstractCompiler#names (self) on <self:AbstractCompiler> */
var105 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___names].val; /* _names on <self:AbstractCompiler> */
if (unlikely(var105 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _names");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 528);
fatal_exit(1);
}
var103 = var105;
RET_LABEL104:(void)0;
}
}
{
var106 = core___core__HashMap___core__abstract_collection__MapRead__length(var103);
}
var107 = core__flat___Int___core__abstract_text__Object__to_s(var106);
((struct instance_core__NativeArray*)var94)->values[1]=var107;
{
var108 = ((val*(*)(val* self))(var94->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var94); /* native_to_s on <var94:NativeArray[String]>*/
}
varonce93 = var94;
{
core___core__FileWriter___core__stream__Writer__write(var_stream, var108); /* Direct call file#FileWriter#write on <var_stream:FileWriter>*/
}
if (likely(varonce109!=NULL)) {
var110 = varonce109;
} else {
var111 = "if(strcmp(procname,map[i].name) == 0){";
var112 = core__abstract_text___CString___to_s_full(var111, 38l, 38l);
var110 = var112;
varonce109 = var110;
}
{
core___core__FileWriter___core__stream__Writer__write(var_stream, var110); /* Direct call file#FileWriter#write on <var_stream:FileWriter>*/
}
if (likely(varonce113!=NULL)) {
var114 = varonce113;
} else {
var115 = "free(procname);";
var116 = core__abstract_text___CString___to_s_full(var115, 15l, 15l);
var114 = var116;
varonce113 = var114;
}
{
core___core__FileWriter___core__stream__Writer__write(var_stream, var114); /* Direct call file#FileWriter#write on <var_stream:FileWriter>*/
}
if (likely(varonce117!=NULL)) {
var118 = varonce117;
} else {
var119 = "return map[i].nit_name;";
var120 = core__abstract_text___CString___to_s_full(var119, 23l, 23l);
var118 = var120;
varonce117 = var118;
}
{
core___core__FileWriter___core__stream__Writer__write(var_stream, var118); /* Direct call file#FileWriter#write on <var_stream:FileWriter>*/
}
if (likely(varonce121!=NULL)) {
var122 = varonce121;
} else {
var123 = "}";
var124 = core__abstract_text___CString___to_s_full(var123, 1l, 1l);
var122 = var124;
varonce121 = var122;
}
{
core___core__FileWriter___core__stream__Writer__write(var_stream, var122); /* Direct call file#FileWriter#write on <var_stream:FileWriter>*/
}
if (likely(varonce125!=NULL)) {
var126 = varonce125;
} else {
var127 = "}";
var128 = core__abstract_text___CString___to_s_full(var127, 1l, 1l);
var126 = var128;
varonce125 = var126;
}
{
core___core__FileWriter___core__stream__Writer__write(var_stream, var126); /* Direct call file#FileWriter#write on <var_stream:FileWriter>*/
}
if (likely(varonce129!=NULL)) {
var130 = varonce129;
} else {
var131 = "free(procname);";
var132 = core__abstract_text___CString___to_s_full(var131, 15l, 15l);
var130 = var132;
varonce129 = var130;
}
{
core___core__FileWriter___core__stream__Writer__write(var_stream, var130); /* Direct call file#FileWriter#write on <var_stream:FileWriter>*/
}
if (likely(varonce133!=NULL)) {
var134 = varonce133;
} else {
var135 = "return NULL;";
var136 = core__abstract_text___CString___to_s_full(var135, 12l, 12l);
var134 = var136;
varonce133 = var134;
}
{
core___core__FileWriter___core__stream__Writer__write(var_stream, var134); /* Direct call file#FileWriter#write on <var_stream:FileWriter>*/
}
if (likely(varonce137!=NULL)) {
var138 = varonce137;
} else {
var139 = "}\n";
var140 = core__abstract_text___CString___to_s_full(var139, 2l, 2l);
var138 = var140;
varonce137 = var138;
}
{
core___core__FileWriter___core__stream__Writer__write(var_stream, var138); /* Direct call file#FileWriter#write on <var_stream:FileWriter>*/
}
{
core___core__FileWriter___core__stream__Stream__close(var_stream); /* Direct call file#FileWriter#close on <var_stream:FileWriter>*/
}
var141 = NEW_core__FileWriter(&type_core__FileWriter);
if (unlikely(varonce142==NULL)) {
var143 = NEW_core__NativeArray(2l, &type_core__NativeArray__core__String);
if (likely(varonce144!=NULL)) {
var145 = varonce144;
} else {
var146 = "/c_functions_hash.h";
var147 = core__abstract_text___CString___to_s_full(var146, 19l, 19l);
var145 = var147;
varonce144 = var145;
}
((struct instance_core__NativeArray*)var143)->values[1]=var145;
} else {
var143 = varonce142;
varonce142 = NULL;
}
((struct instance_core__NativeArray*)var143)->values[0]=var_compile_dir;
{
var148 = ((val*(*)(val* self))(var143->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var143); /* native_to_s on <var143:NativeArray[String]>*/
}
varonce142 = var143;
{
core___core__FileWriter___open(var141, var148); /* Direct call file#FileWriter#open on <var141:FileWriter>*/
}
var_stream = var141;
if (likely(varonce149!=NULL)) {
var150 = varonce149;
} else {
var151 = "const char* get_nit_name(register const char* procname, register unsigned int len);\n";
var152 = core__abstract_text___CString___to_s_full(var151, 84l, 84l);
var150 = var152;
varonce149 = var150;
}
{
core___core__FileWriter___core__stream__Writer__write(var_stream, var150); /* Direct call file#FileWriter#write on <var_stream:FileWriter>*/
}
{
core___core__FileWriter___core__stream__Stream__close(var_stream); /* Direct call file#FileWriter#close on <var_stream:FileWriter>*/
}
{
{ /* Inline abstract_compiler#AbstractCompiler#extern_bodies (self) on <self:AbstractCompiler> */
var155 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___extern_bodies].val; /* _extern_bodies on <self:AbstractCompiler> */
if (unlikely(var155 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _extern_bodies");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1061);
fatal_exit(1);
}
var153 = var155;
RET_LABEL154:(void)0;
}
}
var156 = NEW_nitc__ExternCFile(&type_nitc__ExternCFile);
if (unlikely(varonce157==NULL)) {
var158 = NEW_core__NativeArray(2l, &type_core__NativeArray__core__String);
if (likely(varonce159!=NULL)) {
var160 = varonce159;
} else {
var161 = "/c_functions_hash.c";
var162 = core__abstract_text___CString___to_s_full(var161, 19l, 19l);
var160 = var162;
varonce159 = var160;
}
((struct instance_core__NativeArray*)var158)->values[1]=var160;
} else {
var158 = varonce157;
varonce157 = NULL;
}
((struct instance_core__NativeArray*)var158)->values[0]=var_compile_dir;
{
var163 = ((val*(*)(val* self))(var158->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var158); /* native_to_s on <var158:NativeArray[String]>*/
}
varonce157 = var158;
if (likely(varonce164!=NULL)) {
var165 = varonce164;
} else {
var166 = "";
var167 = core__abstract_text___CString___to_s_full(var166, 0l, 0l);
var165 = var167;
varonce164 = var165;
}
{
((void(*)(val* self, val* p0))(var156->class->vft[COLOR_nitc__c_tools__ExternFile__filename_61d]))(var156, var163); /* filename= on <var156:ExternCFile>*/
}
{
((void(*)(val* self, val* p0))(var156->class->vft[COLOR_nitc__c_tools__ExternCFile__cflags_61d]))(var156, var165); /* cflags= on <var156:ExternCFile>*/
}
{
((void(*)(val* self))(var156->class->vft[COLOR_core__kernel__Object__init]))(var156); /* init on <var156:ExternCFile>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var153, var156); /* Direct call array#Array#add on <var153:Array[ExternFile]>*/
}
RET_LABEL:;
}
/* method abstract_compiler#AbstractCompiler#compile_header for (self: AbstractCompiler) */
void nitc___nitc__AbstractCompiler___compile_header(val* self) {
val* var /* : CodeWriter */;
val* var2 /* : CodeWriter */;
static val* varonce;
val* var3 /* : String */;
char* var4 /* : CString */;
val* var5 /* : String */;
val* var6 /* : CodeWriter */;
val* var8 /* : CodeWriter */;
static val* varonce9;
val* var10 /* : String */;
char* var11 /* : CString */;
val* var12 /* : String */;
val* var13 /* : CodeWriter */;
val* var15 /* : CodeWriter */;
static val* varonce16;
val* var17 /* : String */;
char* var18 /* : CString */;
val* var19 /* : String */;
val* var20 /* : CodeWriter */;
val* var22 /* : CodeWriter */;
static val* varonce23;
val* var24 /* : String */;
char* var25 /* : CString */;
val* var26 /* : String */;
val* var27 /* : CodeWriter */;
val* var29 /* : CodeWriter */;
static val* varonce30;
val* var31 /* : String */;
char* var32 /* : CString */;
val* var33 /* : String */;
val* var34 /* : CodeWriter */;
val* var36 /* : CodeWriter */;
static val* varonce37;
val* var38 /* : String */;
char* var39 /* : CString */;
val* var40 /* : String */;
val* var41 /* : CodeWriter */;
val* var43 /* : CodeWriter */;
static val* varonce44;
val* var45 /* : String */;
char* var46 /* : CString */;
val* var47 /* : String */;
val* var48 /* : CodeWriter */;
val* var50 /* : CodeWriter */;
static val* varonce51;
val* var52 /* : String */;
char* var53 /* : CString */;
val* var54 /* : String */;
val* var55 /* : CodeWriter */;
val* var57 /* : CodeWriter */;
static val* varonce58;
val* var59 /* : String */;
char* var60 /* : CString */;
val* var61 /* : String */;
val* var62 /* : CodeWriter */;
val* var64 /* : CodeWriter */;
static val* varonce65;
val* var66 /* : String */;
char* var67 /* : CString */;
val* var68 /* : String */;
val* var69 /* : CodeWriter */;
val* var71 /* : CodeWriter */;
static val* varonce72;
val* var73 /* : String */;
char* var74 /* : CString */;
val* var75 /* : String */;
val* var76 /* : CodeWriter */;
val* var78 /* : CodeWriter */;
static val* varonce79;
val* var80 /* : String */;
char* var81 /* : CString */;
val* var82 /* : String */;
val* var83 /* : CodeWriter */;
val* var85 /* : CodeWriter */;
static val* varonce86;
val* var87 /* : String */;
char* var88 /* : CString */;
val* var89 /* : String */;
val* var90 /* : CodeWriter */;
val* var92 /* : CodeWriter */;
static val* varonce93;
val* var94 /* : String */;
char* var95 /* : CString */;
val* var96 /* : String */;
val* var97 /* : CodeWriter */;
val* var99 /* : CodeWriter */;
static val* varonce100;
val* var101 /* : String */;
char* var102 /* : CString */;
val* var103 /* : String */;
val* var104 /* : CodeWriter */;
val* var106 /* : CodeWriter */;
static val* varonce107;
val* var108 /* : String */;
char* var109 /* : CString */;
val* var110 /* : String */;
val* var111 /* : CodeWriter */;
val* var113 /* : CodeWriter */;
static val* varonce114;
val* var115 /* : String */;
char* var116 /* : CString */;
val* var117 /* : String */;
val* var118 /* : CodeWriter */;
val* var120 /* : CodeWriter */;
static val* varonce121;
val* var122 /* : String */;
char* var123 /* : CString */;
val* var124 /* : String */;
val* var125 /* : CodeWriter */;
val* var127 /* : CodeWriter */;
static val* varonce128;
val* var129 /* : String */;
char* var130 /* : CString */;
val* var131 /* : String */;
val* var132 /* : CodeWriter */;
val* var134 /* : CodeWriter */;
static val* varonce135;
val* var136 /* : String */;
char* var137 /* : CString */;
val* var138 /* : String */;
val* var139 /* : CodeWriter */;
val* var141 /* : CodeWriter */;
static val* varonce142;
val* var143 /* : String */;
char* var144 /* : CString */;
val* var145 /* : String */;
val* var146 /* : CodeWriter */;
val* var148 /* : CodeWriter */;
static val* varonce149;
val* var150 /* : String */;
char* var151 /* : CString */;
val* var152 /* : String */;
val* var153 /* : CodeWriter */;
val* var155 /* : CodeWriter */;
static val* varonce156;
val* var157 /* : String */;
char* var158 /* : CString */;
val* var159 /* : String */;
val* var160 /* : CodeWriter */;
val* var162 /* : CodeWriter */;
static val* varonce163;
val* var164 /* : String */;
char* var165 /* : CString */;
val* var166 /* : String */;
val* var167 /* : CodeWriter */;
val* var169 /* : CodeWriter */;
static val* varonce170;
val* var171 /* : String */;
char* var172 /* : CString */;
val* var173 /* : String */;
val* var174 /* : CodeWriter */;
val* var176 /* : CodeWriter */;
static val* varonce177;
val* var178 /* : String */;
char* var179 /* : CString */;
val* var180 /* : String */;
val* var181 /* : CodeWriter */;
val* var183 /* : CodeWriter */;
static val* varonce184;
val* var185 /* : String */;
char* var186 /* : CString */;
val* var187 /* : String */;
val* var188 /* : CodeWriter */;
val* var190 /* : CodeWriter */;
static val* varonce191;
val* var192 /* : String */;
char* var193 /* : CString */;
val* var194 /* : String */;
val* var195 /* : CodeWriter */;
val* var197 /* : CodeWriter */;
static val* varonce198;
val* var199 /* : String */;
char* var200 /* : CString */;
val* var201 /* : String */;
val* var202 /* : CodeWriter */;
val* var204 /* : CodeWriter */;
static val* varonce205;
val* var206 /* : String */;
char* var207 /* : CString */;
val* var208 /* : String */;
val* var209 /* : CodeWriter */;
val* var211 /* : CodeWriter */;
static val* varonce212;
val* var213 /* : String */;
char* var214 /* : CString */;
val* var215 /* : String */;
val* var216 /* : CodeWriter */;
val* var218 /* : CodeWriter */;
static val* varonce219;
val* var220 /* : String */;
char* var221 /* : CString */;
val* var222 /* : String */;
val* var223 /* : CodeWriter */;
val* var225 /* : CodeWriter */;
static val* varonce226;
val* var227 /* : String */;
char* var228 /* : CString */;
val* var229 /* : String */;
val* var230 /* : CodeWriter */;
val* var232 /* : CodeWriter */;
static val* varonce233;
val* var234 /* : String */;
char* var235 /* : CString */;
val* var236 /* : String */;
val* var237 /* : CodeWriter */;
val* var239 /* : CodeWriter */;
static val* varonce240;
val* var241 /* : String */;
char* var242 /* : CString */;
val* var243 /* : String */;
val* var244 /* : CodeWriter */;
val* var246 /* : CodeWriter */;
static val* varonce247;
val* var248 /* : String */;
char* var249 /* : CString */;
val* var250 /* : String */;
val* var251 /* : ModelBuilder */;
val* var253 /* : ModelBuilder */;
val* var254 /* : ToolContext */;
val* var256 /* : ToolContext */;
val* var257 /* : OptionArray */;
val* var259 /* : OptionArray */;
val* var260 /* : nullable Object */;
val* var262 /* : nullable Object */;
val* var_gccd_disable /* var gccd_disable: Array[String] */;
short int var263 /* : Bool */;
static val* varonce264;
val* var265 /* : String */;
char* var266 /* : CString */;
val* var267 /* : String */;
short int var268 /* : Bool */;
short int var_ /* var : Bool */;
static val* varonce269;
val* var270 /* : String */;
char* var271 /* : CString */;
val* var272 /* : String */;
short int var273 /* : Bool */;
val* var274 /* : CodeWriter */;
val* var276 /* : CodeWriter */;
static val* varonce277;
val* var278 /* : String */;
char* var279 /* : CString */;
val* var280 /* : String */;
val* var281 /* : CodeWriter */;
val* var283 /* : CodeWriter */;
static val* varonce284;
val* var285 /* : String */;
char* var286 /* : CString */;
val* var287 /* : String */;
short int var288 /* : Bool */;
static val* varonce289;
val* var290 /* : String */;
char* var291 /* : CString */;
val* var292 /* : String */;
short int var293 /* : Bool */;
short int var_294 /* var : Bool */;
static val* varonce295;
val* var296 /* : String */;
char* var297 /* : CString */;
val* var298 /* : String */;
short int var299 /* : Bool */;
val* var300 /* : CodeWriter */;
val* var302 /* : CodeWriter */;
static val* varonce303;
val* var304 /* : String */;
char* var305 /* : CString */;
val* var306 /* : String */;
val* var307 /* : CodeWriter */;
val* var309 /* : CodeWriter */;
static val* varonce310;
val* var311 /* : String */;
char* var312 /* : CString */;
val* var313 /* : String */;
static val* varonce314;
val* var315 /* : String */;
char* var316 /* : CString */;
val* var317 /* : String */;
short int var318 /* : Bool */;
val* var319 /* : CodeWriter */;
val* var321 /* : CodeWriter */;
static val* varonce322;
val* var323 /* : String */;
char* var324 /* : CString */;
val* var325 /* : String */;
val* var326 /* : CodeWriter */;
val* var328 /* : CodeWriter */;
static val* varonce329;
val* var330 /* : String */;
char* var331 /* : CString */;
val* var332 /* : String */;
val* var333 /* : CodeWriter */;
val* var335 /* : CodeWriter */;
static val* varonce336;
val* var337 /* : String */;
char* var338 /* : CString */;
val* var339 /* : String */;
val* var340 /* : CodeWriter */;
val* var342 /* : CodeWriter */;
static val* varonce343;
val* var344 /* : String */;
char* var345 /* : CString */;
val* var346 /* : String */;
val* var347 /* : CodeWriter */;
val* var349 /* : CodeWriter */;
static val* varonce350;
val* var351 /* : String */;
char* var352 /* : CString */;
val* var353 /* : String */;
val* var354 /* : CodeWriter */;
val* var356 /* : CodeWriter */;
static val* varonce357;
val* var358 /* : String */;
char* var359 /* : CString */;
val* var360 /* : String */;
val* var361 /* : CodeWriter */;
val* var363 /* : CodeWriter */;
static val* varonce364;
val* var365 /* : String */;
char* var366 /* : CString */;
val* var367 /* : String */;
{
{ /* Inline abstract_compiler#AbstractCompiler#header (self) on <self:AbstractCompiler> */
var2 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___header].val; /* _header on <self:AbstractCompiler> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 585);
fatal_exit(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
if (likely(varonce!=NULL)) {
var3 = varonce;
} else {
var4 = "#include <stdlib.h>";
var5 = core__abstract_text___CString___to_s_full(var4, 19l, 19l);
var3 = var5;
varonce = var3;
}
{
nitc___nitc__CodeWriter___add_decl(var, var3); /* Direct call abstract_compiler#CodeWriter#add_decl on <var:CodeWriter>*/
}
{
{ /* Inline abstract_compiler#AbstractCompiler#header (self) on <self:AbstractCompiler> */
var8 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___header].val; /* _header on <self:AbstractCompiler> */
if (unlikely(var8 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 585);
fatal_exit(1);
}
var6 = var8;
RET_LABEL7:(void)0;
}
}
if (likely(varonce9!=NULL)) {
var10 = varonce9;
} else {
var11 = "#include <stdio.h>";
var12 = core__abstract_text___CString___to_s_full(var11, 18l, 18l);
var10 = var12;
varonce9 = var10;
}
{
nitc___nitc__CodeWriter___add_decl(var6, var10); /* Direct call abstract_compiler#CodeWriter#add_decl on <var6:CodeWriter>*/
}
{
{ /* Inline abstract_compiler#AbstractCompiler#header (self) on <self:AbstractCompiler> */
var15 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___header].val; /* _header on <self:AbstractCompiler> */
if (unlikely(var15 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 585);
fatal_exit(1);
}
var13 = var15;
RET_LABEL14:(void)0;
}
}
if (likely(varonce16!=NULL)) {
var17 = varonce16;
} else {
var18 = "#include <string.h>";
var19 = core__abstract_text___CString___to_s_full(var18, 19l, 19l);
var17 = var19;
varonce16 = var17;
}
{
nitc___nitc__CodeWriter___add_decl(var13, var17); /* Direct call abstract_compiler#CodeWriter#add_decl on <var13:CodeWriter>*/
}
{
{ /* Inline abstract_compiler#AbstractCompiler#header (self) on <self:AbstractCompiler> */
var22 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___header].val; /* _header on <self:AbstractCompiler> */
if (unlikely(var22 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 585);
fatal_exit(1);
}
var20 = var22;
RET_LABEL21:(void)0;
}
}
if (likely(varonce23!=NULL)) {
var24 = varonce23;
} else {
var25 = "#include <setjmp.h>\n";
var26 = core__abstract_text___CString___to_s_full(var25, 20l, 20l);
var24 = var26;
varonce23 = var24;
}
{
nitc___nitc__CodeWriter___add_decl(var20, var24); /* Direct call abstract_compiler#CodeWriter#add_decl on <var20:CodeWriter>*/
}
{
{ /* Inline abstract_compiler#AbstractCompiler#header (self) on <self:AbstractCompiler> */
var29 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___header].val; /* _header on <self:AbstractCompiler> */
if (unlikely(var29 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 585);
fatal_exit(1);
}
var27 = var29;
RET_LABEL28:(void)0;
}
}
if (likely(varonce30!=NULL)) {
var31 = varonce30;
} else {
var32 = "#include <sys/types.h>\n";
var33 = core__abstract_text___CString___to_s_full(var32, 23l, 23l);
var31 = var33;
varonce30 = var31;
}
{
nitc___nitc__CodeWriter___add_decl(var27, var31); /* Direct call abstract_compiler#CodeWriter#add_decl on <var27:CodeWriter>*/
}
{
{ /* Inline abstract_compiler#AbstractCompiler#header (self) on <self:AbstractCompiler> */
var36 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___header].val; /* _header on <self:AbstractCompiler> */
if (unlikely(var36 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 585);
fatal_exit(1);
}
var34 = var36;
RET_LABEL35:(void)0;
}
}
if (likely(varonce37!=NULL)) {
var38 = varonce37;
} else {
var39 = "#include <unistd.h>\n";
var40 = core__abstract_text___CString___to_s_full(var39, 20l, 20l);
var38 = var40;
varonce37 = var38;
}
{
nitc___nitc__CodeWriter___add_decl(var34, var38); /* Direct call abstract_compiler#CodeWriter#add_decl on <var34:CodeWriter>*/
}
{
{ /* Inline abstract_compiler#AbstractCompiler#header (self) on <self:AbstractCompiler> */
var43 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___header].val; /* _header on <self:AbstractCompiler> */
if (unlikely(var43 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 585);
fatal_exit(1);
}
var41 = var43;
RET_LABEL42:(void)0;
}
}
if (likely(varonce44!=NULL)) {
var45 = varonce44;
} else {
var46 = "#include <stdint.h>\n";
var47 = core__abstract_text___CString___to_s_full(var46, 20l, 20l);
var45 = var47;
varonce44 = var45;
}
{
nitc___nitc__CodeWriter___add_decl(var41, var45); /* Direct call abstract_compiler#CodeWriter#add_decl on <var41:CodeWriter>*/
}
{
{ /* Inline abstract_compiler#AbstractCompiler#header (self) on <self:AbstractCompiler> */
var50 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___header].val; /* _header on <self:AbstractCompiler> */
if (unlikely(var50 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 585);
fatal_exit(1);
}
var48 = var50;
RET_LABEL49:(void)0;
}
}
if (likely(varonce51!=NULL)) {
var52 = varonce51;
} else {
var53 = "#ifdef __linux__";
var54 = core__abstract_text___CString___to_s_full(var53, 16l, 16l);
var52 = var54;
varonce51 = var52;
}
{
nitc___nitc__CodeWriter___add_decl(var48, var52); /* Direct call abstract_compiler#CodeWriter#add_decl on <var48:CodeWriter>*/
}
{
{ /* Inline abstract_compiler#AbstractCompiler#header (self) on <self:AbstractCompiler> */
var57 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___header].val; /* _header on <self:AbstractCompiler> */
if (unlikely(var57 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 585);
fatal_exit(1);
}
var55 = var57;
RET_LABEL56:(void)0;
}
}
if (likely(varonce58!=NULL)) {
var59 = varonce58;
} else {
var60 = "\t#include <endian.h>";
var61 = core__abstract_text___CString___to_s_full(var60, 20l, 20l);
var59 = var61;
varonce58 = var59;
}
{
nitc___nitc__CodeWriter___add_decl(var55, var59); /* Direct call abstract_compiler#CodeWriter#add_decl on <var55:CodeWriter>*/
}
{
{ /* Inline abstract_compiler#AbstractCompiler#header (self) on <self:AbstractCompiler> */
var64 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___header].val; /* _header on <self:AbstractCompiler> */
if (unlikely(var64 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 585);
fatal_exit(1);
}
var62 = var64;
RET_LABEL63:(void)0;
}
}
if (likely(varonce65!=NULL)) {
var66 = varonce65;
} else {
var67 = "#endif";
var68 = core__abstract_text___CString___to_s_full(var67, 6l, 6l);
var66 = var68;
varonce65 = var66;
}
{
nitc___nitc__CodeWriter___add_decl(var62, var66); /* Direct call abstract_compiler#CodeWriter#add_decl on <var62:CodeWriter>*/
}
{
{ /* Inline abstract_compiler#AbstractCompiler#header (self) on <self:AbstractCompiler> */
var71 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___header].val; /* _header on <self:AbstractCompiler> */
if (unlikely(var71 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 585);
fatal_exit(1);
}
var69 = var71;
RET_LABEL70:(void)0;
}
}
if (likely(varonce72!=NULL)) {
var73 = varonce72;
} else {
var74 = "#include <inttypes.h>\n";
var75 = core__abstract_text___CString___to_s_full(var74, 22l, 22l);
var73 = var75;
varonce72 = var73;
}
{
nitc___nitc__CodeWriter___add_decl(var69, var73); /* Direct call abstract_compiler#CodeWriter#add_decl on <var69:CodeWriter>*/
}
{
{ /* Inline abstract_compiler#AbstractCompiler#header (self) on <self:AbstractCompiler> */
var78 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___header].val; /* _header on <self:AbstractCompiler> */
if (unlikely(var78 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 585);
fatal_exit(1);
}
var76 = var78;
RET_LABEL77:(void)0;
}
}
if (likely(varonce79!=NULL)) {
var80 = varonce79;
} else {
var81 = "#include \"gc_chooser.h\"";
var82 = core__abstract_text___CString___to_s_full(var81, 23l, 23l);
var80 = var82;
varonce79 = var80;
}
{
nitc___nitc__CodeWriter___add_decl(var76, var80); /* Direct call abstract_compiler#CodeWriter#add_decl on <var76:CodeWriter>*/
}
{
{ /* Inline abstract_compiler#AbstractCompiler#header (self) on <self:AbstractCompiler> */
var85 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___header].val; /* _header on <self:AbstractCompiler> */
if (unlikely(var85 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 585);
fatal_exit(1);
}
var83 = var85;
RET_LABEL84:(void)0;
}
}
if (likely(varonce86!=NULL)) {
var87 = varonce86;
} else {
var88 = "#ifdef __APPLE__";
var89 = core__abstract_text___CString___to_s_full(var88, 16l, 16l);
var87 = var89;
varonce86 = var87;
}
{
nitc___nitc__CodeWriter___add_decl(var83, var87); /* Direct call abstract_compiler#CodeWriter#add_decl on <var83:CodeWriter>*/
}
{
{ /* Inline abstract_compiler#AbstractCompiler#header (self) on <self:AbstractCompiler> */
var92 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___header].val; /* _header on <self:AbstractCompiler> */
if (unlikely(var92 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 585);
fatal_exit(1);
}
var90 = var92;
RET_LABEL91:(void)0;
}
}
if (likely(varonce93!=NULL)) {
var94 = varonce93;
} else {
var95 = "\t#include <TargetConditionals.h>";
var96 = core__abstract_text___CString___to_s_full(var95, 32l, 32l);
var94 = var96;
varonce93 = var94;
}
{
nitc___nitc__CodeWriter___add_decl(var90, var94); /* Direct call abstract_compiler#CodeWriter#add_decl on <var90:CodeWriter>*/
}
{
{ /* Inline abstract_compiler#AbstractCompiler#header (self) on <self:AbstractCompiler> */
var99 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___header].val; /* _header on <self:AbstractCompiler> */
if (unlikely(var99 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 585);
fatal_exit(1);
}
var97 = var99;
RET_LABEL98:(void)0;
}
}
if (likely(varonce100!=NULL)) {
var101 = varonce100;
} else {
var102 = "\t#include <syslog.h>";
var103 = core__abstract_text___CString___to_s_full(var102, 20l, 20l);
var101 = var103;
varonce100 = var101;
}
{
nitc___nitc__CodeWriter___add_decl(var97, var101); /* Direct call abstract_compiler#CodeWriter#add_decl on <var97:CodeWriter>*/
}
{
{ /* Inline abstract_compiler#AbstractCompiler#header (self) on <self:AbstractCompiler> */
var106 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___header].val; /* _header on <self:AbstractCompiler> */
if (unlikely(var106 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 585);
fatal_exit(1);
}
var104 = var106;
RET_LABEL105:(void)0;
}
}
if (likely(varonce107!=NULL)) {
var108 = varonce107;
} else {
var109 = "\t#include <libkern/OSByteOrder.h>";
var110 = core__abstract_text___CString___to_s_full(var109, 33l, 33l);
var108 = var110;
varonce107 = var108;
}
{
nitc___nitc__CodeWriter___add_decl(var104, var108); /* Direct call abstract_compiler#CodeWriter#add_decl on <var104:CodeWriter>*/
}
{
{ /* Inline abstract_compiler#AbstractCompiler#header (self) on <self:AbstractCompiler> */
var113 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___header].val; /* _header on <self:AbstractCompiler> */
if (unlikely(var113 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 585);
fatal_exit(1);
}
var111 = var113;
RET_LABEL112:(void)0;
}
}
if (likely(varonce114!=NULL)) {
var115 = varonce114;
} else {
var116 = "\t#define be32toh(x) OSSwapBigToHostInt32(x)";
var117 = core__abstract_text___CString___to_s_full(var116, 43l, 43l);
var115 = var117;
varonce114 = var115;
}
{
nitc___nitc__CodeWriter___add_decl(var111, var115); /* Direct call abstract_compiler#CodeWriter#add_decl on <var111:CodeWriter>*/
}
{
{ /* Inline abstract_compiler#AbstractCompiler#header (self) on <self:AbstractCompiler> */
var120 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___header].val; /* _header on <self:AbstractCompiler> */
if (unlikely(var120 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 585);
fatal_exit(1);
}
var118 = var120;
RET_LABEL119:(void)0;
}
}
if (likely(varonce121!=NULL)) {
var122 = varonce121;
} else {
var123 = "#endif";
var124 = core__abstract_text___CString___to_s_full(var123, 6l, 6l);
var122 = var124;
varonce121 = var122;
}
{
nitc___nitc__CodeWriter___add_decl(var118, var122); /* Direct call abstract_compiler#CodeWriter#add_decl on <var118:CodeWriter>*/
}
{
{ /* Inline abstract_compiler#AbstractCompiler#header (self) on <self:AbstractCompiler> */
var127 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___header].val; /* _header on <self:AbstractCompiler> */
if (unlikely(var127 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 585);
fatal_exit(1);
}
var125 = var127;
RET_LABEL126:(void)0;
}
}
if (likely(varonce128!=NULL)) {
var129 = varonce128;
} else {
var130 = "#ifdef _WIN32";
var131 = core__abstract_text___CString___to_s_full(var130, 13l, 13l);
var129 = var131;
varonce128 = var129;
}
{
nitc___nitc__CodeWriter___add_decl(var125, var129); /* Direct call abstract_compiler#CodeWriter#add_decl on <var125:CodeWriter>*/
}
{
{ /* Inline abstract_compiler#AbstractCompiler#header (self) on <self:AbstractCompiler> */
var134 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___header].val; /* _header on <self:AbstractCompiler> */
if (unlikely(var134 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 585);
fatal_exit(1);
}
var132 = var134;
RET_LABEL133:(void)0;
}
}
if (likely(varonce135!=NULL)) {
var136 = varonce135;
} else {
var137 = "\t#define be32toh(val) _byteswap_ulong(val)";
var138 = core__abstract_text___CString___to_s_full(var137, 42l, 42l);
var136 = var138;
varonce135 = var136;
}
{
nitc___nitc__CodeWriter___add_decl(var132, var136); /* Direct call abstract_compiler#CodeWriter#add_decl on <var132:CodeWriter>*/
}
{
{ /* Inline abstract_compiler#AbstractCompiler#header (self) on <self:AbstractCompiler> */
var141 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___header].val; /* _header on <self:AbstractCompiler> */
if (unlikely(var141 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 585);
fatal_exit(1);
}
var139 = var141;
RET_LABEL140:(void)0;
}
}
if (likely(varonce142!=NULL)) {
var143 = varonce142;
} else {
var144 = "#endif";
var145 = core__abstract_text___CString___to_s_full(var144, 6l, 6l);
var143 = var145;
varonce142 = var143;
}
{
nitc___nitc__CodeWriter___add_decl(var139, var143); /* Direct call abstract_compiler#CodeWriter#add_decl on <var139:CodeWriter>*/
}
{
{ /* Inline abstract_compiler#AbstractCompiler#header (self) on <self:AbstractCompiler> */
var148 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___header].val; /* _header on <self:AbstractCompiler> */
if (unlikely(var148 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 585);
fatal_exit(1);
}
var146 = var148;
RET_LABEL147:(void)0;
}
}
if (likely(varonce149!=NULL)) {
var150 = varonce149;
} else {
var151 = "#ifdef __pnacl__";
var152 = core__abstract_text___CString___to_s_full(var151, 16l, 16l);
var150 = var152;
varonce149 = var150;
}
{
nitc___nitc__CodeWriter___add_decl(var146, var150); /* Direct call abstract_compiler#CodeWriter#add_decl on <var146:CodeWriter>*/
}
{
{ /* Inline abstract_compiler#AbstractCompiler#header (self) on <self:AbstractCompiler> */
var155 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___header].val; /* _header on <self:AbstractCompiler> */
if (unlikely(var155 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 585);
fatal_exit(1);
}
var153 = var155;
RET_LABEL154:(void)0;
}
}
if (likely(varonce156!=NULL)) {
var157 = varonce156;
} else {
var158 = "\t#define be16toh(val) (((val) >> 8) | ((val) << 8))";
var159 = core__abstract_text___CString___to_s_full(var158, 51l, 51l);
var157 = var159;
varonce156 = var157;
}
{
nitc___nitc__CodeWriter___add_decl(var153, var157); /* Direct call abstract_compiler#CodeWriter#add_decl on <var153:CodeWriter>*/
}
{
{ /* Inline abstract_compiler#AbstractCompiler#header (self) on <self:AbstractCompiler> */
var162 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___header].val; /* _header on <self:AbstractCompiler> */
if (unlikely(var162 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 585);
fatal_exit(1);
}
var160 = var162;
RET_LABEL161:(void)0;
}
}
if (likely(varonce163!=NULL)) {
var164 = varonce163;
} else {
var165 = "\t#define be32toh(val) ((be16toh((val) << 16) | (be16toh((val) >> 16))))";
var166 = core__abstract_text___CString___to_s_full(var165, 71l, 71l);
var164 = var166;
varonce163 = var164;
}
{
nitc___nitc__CodeWriter___add_decl(var160, var164); /* Direct call abstract_compiler#CodeWriter#add_decl on <var160:CodeWriter>*/
}
{
{ /* Inline abstract_compiler#AbstractCompiler#header (self) on <self:AbstractCompiler> */
var169 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___header].val; /* _header on <self:AbstractCompiler> */
if (unlikely(var169 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 585);
fatal_exit(1);
}
var167 = var169;
RET_LABEL168:(void)0;
}
}
if (likely(varonce170!=NULL)) {
var171 = varonce170;
} else {
var172 = "#endif";
var173 = core__abstract_text___CString___to_s_full(var172, 6l, 6l);
var171 = var173;
varonce170 = var171;
}
{
nitc___nitc__CodeWriter___add_decl(var167, var171); /* Direct call abstract_compiler#CodeWriter#add_decl on <var167:CodeWriter>*/
}
{
{ /* Inline abstract_compiler#AbstractCompiler#header (self) on <self:AbstractCompiler> */
var176 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___header].val; /* _header on <self:AbstractCompiler> */
if (unlikely(var176 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 585);
fatal_exit(1);
}
var174 = var176;
RET_LABEL175:(void)0;
}
}
if (likely(varonce177!=NULL)) {
var178 = varonce177;
} else {
var179 = "#ifdef ANDROID";
var180 = core__abstract_text___CString___to_s_full(var179, 14l, 14l);
var178 = var180;
varonce177 = var178;
}
{
nitc___nitc__CodeWriter___add_decl(var174, var178); /* Direct call abstract_compiler#CodeWriter#add_decl on <var174:CodeWriter>*/
}
{
{ /* Inline abstract_compiler#AbstractCompiler#header (self) on <self:AbstractCompiler> */
var183 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___header].val; /* _header on <self:AbstractCompiler> */
if (unlikely(var183 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 585);
fatal_exit(1);
}
var181 = var183;
RET_LABEL182:(void)0;
}
}
if (likely(varonce184!=NULL)) {
var185 = varonce184;
} else {
var186 = "\t#ifndef be32toh";
var187 = core__abstract_text___CString___to_s_full(var186, 16l, 16l);
var185 = var187;
varonce184 = var185;
}
{
nitc___nitc__CodeWriter___add_decl(var181, var185); /* Direct call abstract_compiler#CodeWriter#add_decl on <var181:CodeWriter>*/
}
{
{ /* Inline abstract_compiler#AbstractCompiler#header (self) on <self:AbstractCompiler> */
var190 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___header].val; /* _header on <self:AbstractCompiler> */
if (unlikely(var190 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 585);
fatal_exit(1);
}
var188 = var190;
RET_LABEL189:(void)0;
}
}
if (likely(varonce191!=NULL)) {
var192 = varonce191;
} else {
var193 = "\t\t#define be32toh(val) betoh32(val)";
var194 = core__abstract_text___CString___to_s_full(var193, 35l, 35l);
var192 = var194;
varonce191 = var192;
}
{
nitc___nitc__CodeWriter___add_decl(var188, var192); /* Direct call abstract_compiler#CodeWriter#add_decl on <var188:CodeWriter>*/
}
{
{ /* Inline abstract_compiler#AbstractCompiler#header (self) on <self:AbstractCompiler> */
var197 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___header].val; /* _header on <self:AbstractCompiler> */
if (unlikely(var197 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 585);
fatal_exit(1);
}
var195 = var197;
RET_LABEL196:(void)0;
}
}
if (likely(varonce198!=NULL)) {
var199 = varonce198;
} else {
var200 = "\t#endif";
var201 = core__abstract_text___CString___to_s_full(var200, 7l, 7l);
var199 = var201;
varonce198 = var199;
}
{
nitc___nitc__CodeWriter___add_decl(var195, var199); /* Direct call abstract_compiler#CodeWriter#add_decl on <var195:CodeWriter>*/
}
{
{ /* Inline abstract_compiler#AbstractCompiler#header (self) on <self:AbstractCompiler> */
var204 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___header].val; /* _header on <self:AbstractCompiler> */
if (unlikely(var204 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 585);
fatal_exit(1);
}
var202 = var204;
RET_LABEL203:(void)0;
}
}
if (likely(varonce205!=NULL)) {
var206 = varonce205;
} else {
var207 = "\t#include <android/log.h>";
var208 = core__abstract_text___CString___to_s_full(var207, 25l, 25l);
var206 = var208;
varonce205 = var206;
}
{
nitc___nitc__CodeWriter___add_decl(var202, var206); /* Direct call abstract_compiler#CodeWriter#add_decl on <var202:CodeWriter>*/
}
{
{ /* Inline abstract_compiler#AbstractCompiler#header (self) on <self:AbstractCompiler> */
var211 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___header].val; /* _header on <self:AbstractCompiler> */
if (unlikely(var211 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 585);
fatal_exit(1);
}
var209 = var211;
RET_LABEL210:(void)0;
}
}
if (likely(varonce212!=NULL)) {
var213 = varonce212;
} else {
var214 = "\t#define PRINT_ERROR(...) (void)__android_log_print(ANDROID_LOG_WARN, \"Nit\", __VA_ARGS__)";
var215 = core__abstract_text___CString___to_s_full(var214, 89l, 89l);
var213 = var215;
varonce212 = var213;
}
{
nitc___nitc__CodeWriter___add_decl(var209, var213); /* Direct call abstract_compiler#CodeWriter#add_decl on <var209:CodeWriter>*/
}
{
{ /* Inline abstract_compiler#AbstractCompiler#header (self) on <self:AbstractCompiler> */
var218 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___header].val; /* _header on <self:AbstractCompiler> */
if (unlikely(var218 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 585);
fatal_exit(1);
}
var216 = var218;
RET_LABEL217:(void)0;
}
}
if (likely(varonce219!=NULL)) {
var220 = varonce219;
} else {
var221 = "#elif TARGET_OS_IPHONE";
var222 = core__abstract_text___CString___to_s_full(var221, 22l, 22l);
var220 = var222;
varonce219 = var220;
}
{
nitc___nitc__CodeWriter___add_decl(var216, var220); /* Direct call abstract_compiler#CodeWriter#add_decl on <var216:CodeWriter>*/
}
{
{ /* Inline abstract_compiler#AbstractCompiler#header (self) on <self:AbstractCompiler> */
var225 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___header].val; /* _header on <self:AbstractCompiler> */
if (unlikely(var225 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 585);
fatal_exit(1);
}
var223 = var225;
RET_LABEL224:(void)0;
}
}
if (likely(varonce226!=NULL)) {
var227 = varonce226;
} else {
var228 = "\t#define PRINT_ERROR(...) syslog(LOG_ERR, __VA_ARGS__)";
var229 = core__abstract_text___CString___to_s_full(var228, 54l, 54l);
var227 = var229;
varonce226 = var227;
}
{
nitc___nitc__CodeWriter___add_decl(var223, var227); /* Direct call abstract_compiler#CodeWriter#add_decl on <var223:CodeWriter>*/
}
{
{ /* Inline abstract_compiler#AbstractCompiler#header (self) on <self:AbstractCompiler> */
var232 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___header].val; /* _header on <self:AbstractCompiler> */
if (unlikely(var232 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 585);
fatal_exit(1);
}
var230 = var232;
RET_LABEL231:(void)0;
}
}
if (likely(varonce233!=NULL)) {
var234 = varonce233;
} else {
var235 = "#else";
var236 = core__abstract_text___CString___to_s_full(var235, 5l, 5l);
var234 = var236;
varonce233 = var234;
}
{
nitc___nitc__CodeWriter___add_decl(var230, var234); /* Direct call abstract_compiler#CodeWriter#add_decl on <var230:CodeWriter>*/
}
{
{ /* Inline abstract_compiler#AbstractCompiler#header (self) on <self:AbstractCompiler> */
var239 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___header].val; /* _header on <self:AbstractCompiler> */
if (unlikely(var239 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 585);
fatal_exit(1);
}
var237 = var239;
RET_LABEL238:(void)0;
}
}
if (likely(varonce240!=NULL)) {
var241 = varonce240;
} else {
var242 = "\t#define PRINT_ERROR(...) fprintf(stderr, __VA_ARGS__)";
var243 = core__abstract_text___CString___to_s_full(var242, 54l, 54l);
var241 = var243;
varonce240 = var241;
}
{
nitc___nitc__CodeWriter___add_decl(var237, var241); /* Direct call abstract_compiler#CodeWriter#add_decl on <var237:CodeWriter>*/
}
{
{ /* Inline abstract_compiler#AbstractCompiler#header (self) on <self:AbstractCompiler> */
var246 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___header].val; /* _header on <self:AbstractCompiler> */
if (unlikely(var246 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 585);
fatal_exit(1);
}
var244 = var246;
RET_LABEL245:(void)0;
}
}
if (likely(varonce247!=NULL)) {
var248 = varonce247;
} else {
var249 = "#endif";
var250 = core__abstract_text___CString___to_s_full(var249, 6l, 6l);
var248 = var250;
varonce247 = var248;
}
{
nitc___nitc__CodeWriter___add_decl(var244, var248); /* Direct call abstract_compiler#CodeWriter#add_decl on <var244:CodeWriter>*/
}
{
((void(*)(val* self))(self->class->vft[COLOR_nitc__abstract_compiler__AbstractCompiler__compile_header_structs]))(self); /* compile_header_structs on <self:AbstractCompiler>*/
}
{
((void(*)(val* self))(self->class->vft[COLOR_nitc__abstract_compiler__AbstractCompiler__compile_nitni_structs]))(self); /* compile_nitni_structs on <self:AbstractCompiler>*/
}
{
nitc___nitc__AbstractCompiler___compile_catch_stack(self); /* Direct call abstract_compiler#AbstractCompiler#compile_catch_stack on <self:AbstractCompiler>*/
}
{
{ /* Inline abstract_compiler#AbstractCompiler#modelbuilder (self) on <self:AbstractCompiler> */
var253 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___modelbuilder].val; /* _modelbuilder on <self:AbstractCompiler> */
if (unlikely(var253 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 538);
fatal_exit(1);
}
var251 = var253;
RET_LABEL252:(void)0;
}
}
{
{ /* Inline modelbuilder_base#ModelBuilder#toolcontext (var251) on <var251:ModelBuilder> */
var256 = var251->attrs[COLOR_nitc__modelbuilder_base__ModelBuilder___toolcontext].val; /* _toolcontext on <var251:ModelBuilder> */
if (unlikely(var256 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelbuilder_base, 47);
fatal_exit(1);
}
var254 = var256;
RET_LABEL255:(void)0;
}
}
{
{ /* Inline abstract_compiler#ToolContext#opt_no_gcc_directive (var254) on <var254:ToolContext> */
var259 = var254->attrs[COLOR_nitc__abstract_compiler__ToolContext___opt_no_gcc_directive].val; /* _opt_no_gcc_directive on <var254:ToolContext> */
if (unlikely(var259 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_no_gcc_directive");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 68);
fatal_exit(1);
}
var257 = var259;
RET_LABEL258:(void)0;
}
}
{
{ /* Inline opts#Option#value (var257) on <var257:OptionArray> */
var262 = var257->attrs[COLOR_opts__Option___value].val; /* _value on <var257:OptionArray> */
var260 = var262;
RET_LABEL261:(void)0;
}
}
var_gccd_disable = var260;
if (likely(varonce264!=NULL)) {
var265 = varonce264;
} else {
var266 = "noreturn";
var267 = core__abstract_text___CString___to_s_full(var266, 8l, 8l);
var265 = var267;
varonce264 = var265;
}
{
var268 = core___core__AbstractArrayRead___core__abstract_collection__Collection__has(var_gccd_disable, var265);
}
var_ = var268;
if (var268){
var263 = var_;
} else {
if (likely(varonce269!=NULL)) {
var270 = varonce269;
} else {
var271 = "all";
var272 = core__abstract_text___CString___to_s_full(var271, 3l, 3l);
var270 = var272;
varonce269 = var270;
}
{
var273 = core___core__AbstractArrayRead___core__abstract_collection__Collection__has(var_gccd_disable, var270);
}
var263 = var273;
}
if (var263){
{
{ /* Inline abstract_compiler#AbstractCompiler#header (self) on <self:AbstractCompiler> */
var276 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___header].val; /* _header on <self:AbstractCompiler> */
if (unlikely(var276 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 585);
fatal_exit(1);
}
var274 = var276;
RET_LABEL275:(void)0;
}
}
if (likely(varonce277!=NULL)) {
var278 = varonce277;
} else {
var279 = "void fatal_exit(int);";
var280 = core__abstract_text___CString___to_s_full(var279, 21l, 21l);
var278 = var280;
varonce277 = var278;
}
{
nitc___nitc__CodeWriter___add_decl(var274, var278); /* Direct call abstract_compiler#CodeWriter#add_decl on <var274:CodeWriter>*/
}
} else {
{
{ /* Inline abstract_compiler#AbstractCompiler#header (self) on <self:AbstractCompiler> */
var283 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___header].val; /* _header on <self:AbstractCompiler> */
if (unlikely(var283 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 585);
fatal_exit(1);
}
var281 = var283;
RET_LABEL282:(void)0;
}
}
if (likely(varonce284!=NULL)) {
var285 = varonce284;
} else {
var286 = "void fatal_exit(int) __attribute__ ((noreturn));";
var287 = core__abstract_text___CString___to_s_full(var286, 48l, 48l);
var285 = var287;
varonce284 = var285;
}
{
nitc___nitc__CodeWriter___add_decl(var281, var285); /* Direct call abstract_compiler#CodeWriter#add_decl on <var281:CodeWriter>*/
}
}
if (likely(varonce289!=NULL)) {
var290 = varonce289;
} else {
var291 = "likely";
var292 = core__abstract_text___CString___to_s_full(var291, 6l, 6l);
var290 = var292;
varonce289 = var290;
}
{
var293 = core___core__AbstractArrayRead___core__abstract_collection__Collection__has(var_gccd_disable, var290);
}
var_294 = var293;
if (var293){
var288 = var_294;
} else {
if (likely(varonce295!=NULL)) {
var296 = varonce295;
} else {
var297 = "all";
var298 = core__abstract_text___CString___to_s_full(var297, 3l, 3l);
var296 = var298;
varonce295 = var296;
}
{
var299 = core___core__AbstractArrayRead___core__abstract_collection__Collection__has(var_gccd_disable, var296);
}
var288 = var299;
}
if (var288){
{
{ /* Inline abstract_compiler#AbstractCompiler#header (self) on <self:AbstractCompiler> */
var302 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___header].val; /* _header on <self:AbstractCompiler> */
if (unlikely(var302 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 585);
fatal_exit(1);
}
var300 = var302;
RET_LABEL301:(void)0;
}
}
if (likely(varonce303!=NULL)) {
var304 = varonce303;
} else {
var305 = "#define likely(x)       (x)";
var306 = core__abstract_text___CString___to_s_full(var305, 27l, 27l);
var304 = var306;
varonce303 = var304;
}
{
nitc___nitc__CodeWriter___add_decl(var300, var304); /* Direct call abstract_compiler#CodeWriter#add_decl on <var300:CodeWriter>*/
}
{
{ /* Inline abstract_compiler#AbstractCompiler#header (self) on <self:AbstractCompiler> */
var309 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___header].val; /* _header on <self:AbstractCompiler> */
if (unlikely(var309 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 585);
fatal_exit(1);
}
var307 = var309;
RET_LABEL308:(void)0;
}
}
if (likely(varonce310!=NULL)) {
var311 = varonce310;
} else {
var312 = "#define unlikely(x)     (x)";
var313 = core__abstract_text___CString___to_s_full(var312, 27l, 27l);
var311 = var313;
varonce310 = var311;
}
{
nitc___nitc__CodeWriter___add_decl(var307, var311); /* Direct call abstract_compiler#CodeWriter#add_decl on <var307:CodeWriter>*/
}
} else {
if (likely(varonce314!=NULL)) {
var315 = varonce314;
} else {
var316 = "correct-likely";
var317 = core__abstract_text___CString___to_s_full(var316, 14l, 14l);
var315 = var317;
varonce314 = var315;
}
{
var318 = core___core__AbstractArrayRead___core__abstract_collection__Collection__has(var_gccd_disable, var315);
}
if (var318){
{
{ /* Inline abstract_compiler#AbstractCompiler#header (self) on <self:AbstractCompiler> */
var321 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___header].val; /* _header on <self:AbstractCompiler> */
if (unlikely(var321 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 585);
fatal_exit(1);
}
var319 = var321;
RET_LABEL320:(void)0;
}
}
if (likely(varonce322!=NULL)) {
var323 = varonce322;
} else {
var324 = "#define likely(x)       __builtin_expect((x),0)";
var325 = core__abstract_text___CString___to_s_full(var324, 47l, 47l);
var323 = var325;
varonce322 = var323;
}
{
nitc___nitc__CodeWriter___add_decl(var319, var323); /* Direct call abstract_compiler#CodeWriter#add_decl on <var319:CodeWriter>*/
}
{
{ /* Inline abstract_compiler#AbstractCompiler#header (self) on <self:AbstractCompiler> */
var328 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___header].val; /* _header on <self:AbstractCompiler> */
if (unlikely(var328 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 585);
fatal_exit(1);
}
var326 = var328;
RET_LABEL327:(void)0;
}
}
if (likely(varonce329!=NULL)) {
var330 = varonce329;
} else {
var331 = "#define unlikely(x)     __builtin_expect((x),1)";
var332 = core__abstract_text___CString___to_s_full(var331, 47l, 47l);
var330 = var332;
varonce329 = var330;
}
{
nitc___nitc__CodeWriter___add_decl(var326, var330); /* Direct call abstract_compiler#CodeWriter#add_decl on <var326:CodeWriter>*/
}
} else {
{
{ /* Inline abstract_compiler#AbstractCompiler#header (self) on <self:AbstractCompiler> */
var335 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___header].val; /* _header on <self:AbstractCompiler> */
if (unlikely(var335 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 585);
fatal_exit(1);
}
var333 = var335;
RET_LABEL334:(void)0;
}
}
if (likely(varonce336!=NULL)) {
var337 = varonce336;
} else {
var338 = "#define likely(x)       __builtin_expect((x),1)";
var339 = core__abstract_text___CString___to_s_full(var338, 47l, 47l);
var337 = var339;
varonce336 = var337;
}
{
nitc___nitc__CodeWriter___add_decl(var333, var337); /* Direct call abstract_compiler#CodeWriter#add_decl on <var333:CodeWriter>*/
}
{
{ /* Inline abstract_compiler#AbstractCompiler#header (self) on <self:AbstractCompiler> */
var342 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___header].val; /* _header on <self:AbstractCompiler> */
if (unlikely(var342 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 585);
fatal_exit(1);
}
var340 = var342;
RET_LABEL341:(void)0;
}
}
if (likely(varonce343!=NULL)) {
var344 = varonce343;
} else {
var345 = "#define unlikely(x)     __builtin_expect((x),0)";
var346 = core__abstract_text___CString___to_s_full(var345, 47l, 47l);
var344 = var346;
varonce343 = var344;
}
{
nitc___nitc__CodeWriter___add_decl(var340, var344); /* Direct call abstract_compiler#CodeWriter#add_decl on <var340:CodeWriter>*/
}
}
}
{
{ /* Inline abstract_compiler#AbstractCompiler#header (self) on <self:AbstractCompiler> */
var349 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___header].val; /* _header on <self:AbstractCompiler> */
if (unlikely(var349 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 585);
fatal_exit(1);
}
var347 = var349;
RET_LABEL348:(void)0;
}
}
if (likely(varonce350!=NULL)) {
var351 = varonce350;
} else {
var352 = "extern int glob_argc;";
var353 = core__abstract_text___CString___to_s_full(var352, 21l, 21l);
var351 = var353;
varonce350 = var351;
}
{
nitc___nitc__CodeWriter___add_decl(var347, var351); /* Direct call abstract_compiler#CodeWriter#add_decl on <var347:CodeWriter>*/
}
{
{ /* Inline abstract_compiler#AbstractCompiler#header (self) on <self:AbstractCompiler> */
var356 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___header].val; /* _header on <self:AbstractCompiler> */
if (unlikely(var356 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 585);
fatal_exit(1);
}
var354 = var356;
RET_LABEL355:(void)0;
}
}
if (likely(varonce357!=NULL)) {
var358 = varonce357;
} else {
var359 = "extern char **glob_argv;";
var360 = core__abstract_text___CString___to_s_full(var359, 24l, 24l);
var358 = var360;
varonce357 = var358;
}
{
nitc___nitc__CodeWriter___add_decl(var354, var358); /* Direct call abstract_compiler#CodeWriter#add_decl on <var354:CodeWriter>*/
}
{
{ /* Inline abstract_compiler#AbstractCompiler#header (self) on <self:AbstractCompiler> */
var363 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___header].val; /* _header on <self:AbstractCompiler> */
if (unlikely(var363 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 585);
fatal_exit(1);
}
var361 = var363;
RET_LABEL362:(void)0;
}
}
if (likely(varonce364!=NULL)) {
var365 = varonce364;
} else {
var366 = "extern val *glob_sys;";
var367 = core__abstract_text___CString___to_s_full(var366, 21l, 21l);
var365 = var367;
varonce364 = var365;
}
{
nitc___nitc__CodeWriter___add_decl(var361, var365); /* Direct call abstract_compiler#CodeWriter#add_decl on <var361:CodeWriter>*/
}
RET_LABEL:;
}
/* method abstract_compiler#AbstractCompiler#compile_catch_stack for (self: AbstractCompiler) */
void nitc___nitc__AbstractCompiler___compile_catch_stack(val* self) {
val* var /* : CodeWriter */;
val* var2 /* : CodeWriter */;
static val* varonce;
val* var3 /* : String */;
char* var4 /* : CString */;
val* var5 /* : String */;
{
{ /* Inline abstract_compiler#AbstractCompiler#header (self) on <self:AbstractCompiler> */
var2 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___header].val; /* _header on <self:AbstractCompiler> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 585);
fatal_exit(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
if (likely(varonce!=NULL)) {
var3 = varonce;
} else {
var4 = "struct catch_stack_t {\n\tint cursor;\n\tjmp_buf envs[100];\n};\nextern struct catch_stack_t catchStack;\n";
var5 = core__abstract_text___CString___to_s_full(var4, 99l, 99l);
var3 = var5;
varonce = var3;
}
{
nitc___nitc__CodeWriter___add_decl(var, var3); /* Direct call abstract_compiler#CodeWriter#add_decl on <var:CodeWriter>*/
}
RET_LABEL:;
}
/* method abstract_compiler#AbstractCompiler#compile_nitni_structs for (self: AbstractCompiler) */
void nitc___nitc__AbstractCompiler___compile_nitni_structs(val* self) {
val* var /* : CodeWriter */;
val* var2 /* : CodeWriter */;
static val* varonce;
val* var3 /* : String */;
char* var4 /* : CString */;
val* var5 /* : String */;
{
{ /* Inline abstract_compiler#AbstractCompiler#header (self) on <self:AbstractCompiler> */
var2 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___header].val; /* _header on <self:AbstractCompiler> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 585);
fatal_exit(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
if (likely(varonce!=NULL)) {
var3 = varonce;
} else {
var4 = "/* Native reference to Nit objects */\n/* This structure is used to represent every Nit type in extern methods and custom C code. */\nstruct nitni_ref {\n\tstruct nitni_ref *next,\n\t\t*prev; /* adjacent global references in global list */\n\tint count; /* number of time this global reference has been marked */\n};\n\n/* List of global references from C code to Nit objects */\n/* Instanciated empty at init of Nit system and filled explicitly by user in C code */\nstruct nitni_global_ref_list_t {\n\tstruct nitni_ref *head, *tail;\n};\nextern struct nitni_global_ref_list_t *nitni_global_ref_list;\n\n/* Initializer of global reference list */\nextern void nitni_global_ref_list_init();\n\n/* Intern function to add a global reference to the list */\nextern void nitni_global_ref_add( struct nitni_ref *ref );\n\n/* Intern function to remove a global reference from the list */\nextern void nitni_global_ref_remove( struct nitni_ref *ref );\n\n/* Increase count on an existing global reference */\nextern void nitni_global_ref_incr( struct nitni_ref *ref );\n\n/* Decrease count on an existing global reference */\nextern void nitni_global_ref_decr( struct nitni_ref *ref );\n";
var5 = core__abstract_text___CString___to_s_full(var4, 1146l, 1146l);
var3 = var5;
varonce = var3;
}
{
nitc___nitc__CodeWriter___add_decl(var, var3); /* Direct call abstract_compiler#CodeWriter#add_decl on <var:CodeWriter>*/
}
RET_LABEL:;
}
/* method abstract_compiler#AbstractCompiler#compile_finalizer_function for (self: AbstractCompiler) */
void nitc___nitc__AbstractCompiler___compile_finalizer_function(val* self) {
val* var /* : MModule */;
val* var2 /* : MModule */;
val* var3 /* : nullable MClassType */;
val* var_finalizable_type /* var finalizable_type: nullable MClassType */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var7 /* : Bool */;
short int var9 /* : Bool */;
val* var10 /* : MModule */;
val* var12 /* : MModule */;
static val* varonce;
val* var13 /* : String */;
char* var14 /* : CString */;
val* var15 /* : String */;
val* var16 /* : MClass */;
val* var18 /* : MClass */;
val* var19 /* : nullable MMethod */;
val* var_finalize_meth /* var finalize_meth: nullable MMethod */;
short int var20 /* : Bool */;
short int var21 /* : Bool */;
short int var23 /* : Bool */;
short int var25 /* : Bool */;
val* var26 /* : ModelBuilder */;
val* var28 /* : ModelBuilder */;
val* var29 /* : ToolContext */;
val* var31 /* : ToolContext */;
static val* varonce32;
val* var33 /* : String */;
char* var34 /* : CString */;
val* var35 /* : String */;
val* var36 /* : Message */;
val* var37 /* : AbstractCompilerVisitor */;
val* var_v /* var v: AbstractCompilerVisitor */;
static val* varonce38;
val* var39 /* : String */;
char* var40 /* : CString */;
val* var41 /* : String */;
static val* varonce42;
val* var43 /* : String */;
char* var44 /* : CString */;
val* var45 /* : String */;
val* var46 /* : RuntimeVariable */;
val* var_recv /* var recv: RuntimeVariable */;
val* var47 /* : Array[RuntimeVariable] */;
val* var_ /* var : Array[RuntimeVariable] */;
val* var48 /* : nullable RuntimeVariable */;
static val* varonce49;
val* var50 /* : String */;
char* var51 /* : CString */;
val* var52 /* : String */;
{
{ /* Inline abstract_compiler#AbstractCompiler#mainmodule (self) on <self:AbstractCompiler> */
var2 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___mainmodule].val; /* _mainmodule on <self:AbstractCompiler> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mainmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 531);
fatal_exit(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
var3 = nitc__model___MModule___finalizable_type(var);
}
var_finalizable_type = var3;
if (var_finalizable_type == NULL) {
var4 = 1; /* is null */
} else {
var4 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_finalizable_type,((val*)NULL)) on <var_finalizable_type:nullable MClassType> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_finalizable_type,var_other) on <var_finalizable_type:nullable MClassType(MClassType)> */
var9 = var_finalizable_type == var_other;
var7 = var9;
goto RET_LABEL8;
RET_LABEL8:(void)0;
}
}
var5 = var7;
goto RET_LABEL6;
RET_LABEL6:(void)0;
}
var4 = var5;
}
if (var4){
goto RET_LABEL;
} else {
}
{
{ /* Inline abstract_compiler#AbstractCompiler#mainmodule (self) on <self:AbstractCompiler> */
var12 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___mainmodule].val; /* _mainmodule on <self:AbstractCompiler> */
if (unlikely(var12 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mainmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 531);
fatal_exit(1);
}
var10 = var12;
RET_LABEL11:(void)0;
}
}
if (likely(varonce!=NULL)) {
var13 = varonce;
} else {
var14 = "finalize";
var15 = core__abstract_text___CString___to_s_full(var14, 8l, 8l);
var13 = var15;
varonce = var13;
}
{
{ /* Inline model#MClassType#mclass (var_finalizable_type) on <var_finalizable_type:nullable MClassType(MClassType)> */
var18 = var_finalizable_type->attrs[COLOR_nitc__model__MClassType___mclass].val; /* _mclass on <var_finalizable_type:nullable MClassType(MClassType)> */
if (unlikely(var18 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1197);
fatal_exit(1);
}
var16 = var18;
RET_LABEL17:(void)0;
}
}
{
var19 = nitc__model___MModule___try_get_primitive_method(var10, var13, var16);
}
var_finalize_meth = var19;
if (var_finalize_meth == NULL) {
var20 = 1; /* is null */
} else {
var20 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_finalize_meth,((val*)NULL)) on <var_finalize_meth:nullable MMethod> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_finalize_meth,var_other) on <var_finalize_meth:nullable MMethod(MMethod)> */
var25 = var_finalize_meth == var_other;
var23 = var25;
goto RET_LABEL24;
RET_LABEL24:(void)0;
}
}
var21 = var23;
goto RET_LABEL22;
RET_LABEL22:(void)0;
}
var20 = var21;
}
if (var20){
{
{ /* Inline abstract_compiler#AbstractCompiler#modelbuilder (self) on <self:AbstractCompiler> */
var28 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___modelbuilder].val; /* _modelbuilder on <self:AbstractCompiler> */
if (unlikely(var28 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 538);
fatal_exit(1);
}
var26 = var28;
RET_LABEL27:(void)0;
}
}
{
{ /* Inline modelbuilder_base#ModelBuilder#toolcontext (var26) on <var26:ModelBuilder> */
var31 = var26->attrs[COLOR_nitc__modelbuilder_base__ModelBuilder___toolcontext].val; /* _toolcontext on <var26:ModelBuilder> */
if (unlikely(var31 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelbuilder_base, 47);
fatal_exit(1);
}
var29 = var31;
RET_LABEL30:(void)0;
}
}
if (likely(varonce32!=NULL)) {
var33 = varonce32;
} else {
var34 = "Error: the `Finalizable` class does not declare the `finalize` method.";
var35 = core__abstract_text___CString___to_s_full(var34, 70l, 70l);
var33 = var35;
varonce32 = var33;
}
{
var36 = nitc___nitc__ToolContext___error(var29, ((val*)NULL), var33);
}
goto RET_LABEL;
} else {
}
{
var37 = ((val*(*)(val* self))(self->class->vft[COLOR_nitc__abstract_compiler__AbstractCompiler__new_visitor]))(self); /* new_visitor on <self:AbstractCompiler>*/
}
var_v = var37;
if (likely(varonce38!=NULL)) {
var39 = varonce38;
} else {
var40 = "void gc_finalize (void *obj, void *client_data) {";
var41 = core__abstract_text___CString___to_s_full(var40, 49l, 49l);
var39 = var41;
varonce38 = var39;
}
{
nitc___nitc__AbstractCompilerVisitor___add_decl(var_v, var39); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:AbstractCompilerVisitor>*/
}
if (likely(varonce42!=NULL)) {
var43 = varonce42;
} else {
var44 = "obj";
var45 = core__abstract_text___CString___to_s_full(var44, 3l, 3l);
var43 = var45;
varonce42 = var43;
}
{
var46 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var43, var_finalizable_type);
}
var_recv = var46;
var47 = NEW_core__Array(&type_core__Array__nitc__RuntimeVariable);
{
core___core__Array___with_capacity(var47, 1l); /* Direct call array#Array#with_capacity on <var47:Array[RuntimeVariable]>*/
}
var_ = var47;
{
core___core__AbstractArray___core__abstract_collection__Sequence__push(var_, var_recv); /* Direct call array#AbstractArray#push on <var_:Array[RuntimeVariable]>*/
}
{
var48 = ((val*(*)(val* self, val* p0, val* p1))(var_v->class->vft[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor__send]))(var_v, var_finalize_meth, var_); /* send on <var_v:AbstractCompilerVisitor>*/
}
if (likely(varonce49!=NULL)) {
var50 = varonce49;
} else {
var51 = "}";
var52 = core__abstract_text___CString___to_s_full(var51, 1l, 1l);
var50 = var52;
varonce49 = var50;
}
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var50); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
RET_LABEL:;
}
/* method abstract_compiler#AbstractCompiler#compile_before_main for (self: AbstractCompiler, AbstractCompilerVisitor) */
void nitc___nitc__AbstractCompiler___compile_before_main(val* self, val* p0) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
val* var_v /* var v: AbstractCompilerVisitor */;
/* Covariant cast for argument 0 (v) <p0:AbstractCompilerVisitor> isa VISITOR */
/* <p0:AbstractCompilerVisitor> isa VISITOR */
type_struct = self->type->resolution_table->types[COLOR_nitc__abstract_compiler__AbstractCompiler__VISITOR];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= p0->type->table_size) {
var = 0;
} else {
var = p0->type->type_table[cltype] == idtype;
}
if (unlikely(!var)) {
var_class_name = p0 == NULL ? "null" : p0->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "VISITOR", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 789);
fatal_exit(1);
}
var_v = p0;
RET_LABEL:;
}
