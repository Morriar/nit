#include "nitc__frontend.sep.0.h"
/* method frontend#ToolContext#do_dummy for (self: ToolContext): Bool */
short int nitc__frontend___ToolContext___do_dummy(val* self) {
short int var /* : Bool */;
val* var1 /* : POSet[Phase] */;
val* var3 /* : POSet[Phase] */;
val* var4 /* : Phase */;
val* var6 /* : Phase */;
val* var7 /* : Phase */;
val* var9 /* : Phase */;
val* var10 /* : POSet[Phase] */;
val* var12 /* : POSet[Phase] */;
val* var13 /* : Phase */;
val* var15 /* : Phase */;
val* var16 /* : Phase */;
val* var18 /* : Phase */;
val* var19 /* : POSet[Phase] */;
val* var21 /* : POSet[Phase] */;
val* var22 /* : Phase */;
val* var24 /* : Phase */;
val* var25 /* : Phase */;
val* var27 /* : Phase */;
val* var28 /* : POSet[Phase] */;
val* var30 /* : POSet[Phase] */;
val* var31 /* : Phase */;
val* var33 /* : Phase */;
val* var34 /* : Phase */;
val* var36 /* : Phase */;
val* var37 /* : POSet[Phase] */;
val* var39 /* : POSet[Phase] */;
val* var40 /* : Phase */;
val* var42 /* : Phase */;
val* var43 /* : Phase */;
val* var45 /* : Phase */;
val* var46 /* : POSet[Phase] */;
val* var48 /* : POSet[Phase] */;
val* var49 /* : Phase */;
val* var51 /* : Phase */;
val* var52 /* : Phase */;
val* var54 /* : Phase */;
{
{ /* Inline phase#ToolContext#phases (self) on <self:ToolContext> */
var3 = self->attrs[COLOR_nitc__phase__ToolContext___phases].val; /* _phases on <self:ToolContext> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _phases");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__phase, 23);
fatal_exit(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
{ /* Inline modelize_class#ToolContext#modelize_class_phase (self) on <self:ToolContext> */
var6 = self->attrs[COLOR_nitc__modelize_class__ToolContext___modelize_class_phase].val; /* _modelize_class_phase on <self:ToolContext> */
if (unlikely(var6 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelize_class_phase");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelize_class, 23);
fatal_exit(1);
}
var4 = var6;
RET_LABEL5:(void)0;
}
}
{
{ /* Inline no_warning#ToolContext#no_warning_phase (self) on <self:ToolContext> */
var9 = self->attrs[COLOR_nitc__no_warning__ToolContext___no_warning_phase].val; /* _no_warning_phase on <self:ToolContext> */
if (unlikely(var9 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _no_warning_phase");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__no_warning, 22);
fatal_exit(1);
}
var7 = var9;
RET_LABEL8:(void)0;
}
}
{
poset___poset__POSet___add_edge(var1, var4, var7); /* Direct call poset#POSet#add_edge on <var1:POSet[Phase]>*/
}
{
{ /* Inline phase#ToolContext#phases (self) on <self:ToolContext> */
var12 = self->attrs[COLOR_nitc__phase__ToolContext___phases].val; /* _phases on <self:ToolContext> */
if (unlikely(var12 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _phases");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__phase, 23);
fatal_exit(1);
}
var10 = var12;
RET_LABEL11:(void)0;
}
}
{
{ /* Inline simple_misc_analysis#ToolContext#simple_misc_analysis_phase (self) on <self:ToolContext> */
var15 = self->attrs[COLOR_nitc__simple_misc_analysis__ToolContext___simple_misc_analysis_phase].val; /* _simple_misc_analysis_phase on <self:ToolContext> */
if (unlikely(var15 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _simple_misc_analysis_phase");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__simple_misc_analysis, 27);
fatal_exit(1);
}
var13 = var15;
RET_LABEL14:(void)0;
}
}
{
{ /* Inline modelize_property#ToolContext#modelize_property_phase (self) on <self:ToolContext> */
var18 = self->attrs[COLOR_nitc__modelize_property__ToolContext___modelize_property_phase].val; /* _modelize_property_phase on <self:ToolContext> */
if (unlikely(var18 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelize_property_phase");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelize_property, 24);
fatal_exit(1);
}
var16 = var18;
RET_LABEL17:(void)0;
}
}
{
poset___poset__POSet___add_edge(var10, var13, var16); /* Direct call poset#POSet#add_edge on <var10:POSet[Phase]>*/
}
{
{ /* Inline phase#ToolContext#phases (self) on <self:ToolContext> */
var21 = self->attrs[COLOR_nitc__phase__ToolContext___phases].val; /* _phases on <self:ToolContext> */
if (unlikely(var21 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _phases");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__phase, 23);
fatal_exit(1);
}
var19 = var21;
RET_LABEL20:(void)0;
}
}
{
{ /* Inline scope#ToolContext#scope_phase (self) on <self:ToolContext> */
var24 = self->attrs[COLOR_nitc__scope__ToolContext___scope_phase].val; /* _scope_phase on <self:ToolContext> */
if (unlikely(var24 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _scope_phase");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__scope, 24);
fatal_exit(1);
}
var22 = var24;
RET_LABEL23:(void)0;
}
}
{
{ /* Inline simple_misc_analysis#ToolContext#simple_misc_analysis_phase (self) on <self:ToolContext> */
var27 = self->attrs[COLOR_nitc__simple_misc_analysis__ToolContext___simple_misc_analysis_phase].val; /* _simple_misc_analysis_phase on <self:ToolContext> */
if (unlikely(var27 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _simple_misc_analysis_phase");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__simple_misc_analysis, 27);
fatal_exit(1);
}
var25 = var27;
RET_LABEL26:(void)0;
}
}
{
poset___poset__POSet___add_edge(var19, var22, var25); /* Direct call poset#POSet#add_edge on <var19:POSet[Phase]>*/
}
{
{ /* Inline phase#ToolContext#phases (self) on <self:ToolContext> */
var30 = self->attrs[COLOR_nitc__phase__ToolContext___phases].val; /* _phases on <self:ToolContext> */
if (unlikely(var30 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _phases");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__phase, 23);
fatal_exit(1);
}
var28 = var30;
RET_LABEL29:(void)0;
}
}
{
{ /* Inline literal#ToolContext#literal_phase (self) on <self:ToolContext> */
var33 = self->attrs[COLOR_nitc__literal__ToolContext___literal_phase].val; /* _literal_phase on <self:ToolContext> */
if (unlikely(var33 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _literal_phase");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__literal, 23);
fatal_exit(1);
}
var31 = var33;
RET_LABEL32:(void)0;
}
}
{
{ /* Inline serialization_phase#ToolContext#serialization_phase_pre_model (self) on <self:ToolContext> */
var36 = self->attrs[COLOR_nitc__serialization_phase__ToolContext___serialization_phase_pre_model].val; /* _serialization_phase_pre_model on <self:ToolContext> */
if (unlikely(var36 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _serialization_phase_pre_model");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__serialization_phase, 32);
fatal_exit(1);
}
var34 = var36;
RET_LABEL35:(void)0;
}
}
{
poset___poset__POSet___add_edge(var28, var31, var34); /* Direct call poset#POSet#add_edge on <var28:POSet[Phase]>*/
}
{
{ /* Inline phase#ToolContext#phases (self) on <self:ToolContext> */
var39 = self->attrs[COLOR_nitc__phase__ToolContext___phases].val; /* _phases on <self:ToolContext> */
if (unlikely(var39 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _phases");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__phase, 23);
fatal_exit(1);
}
var37 = var39;
RET_LABEL38:(void)0;
}
}
{
{ /* Inline modelize_class#ToolContext#modelize_class_phase (self) on <self:ToolContext> */
var42 = self->attrs[COLOR_nitc__modelize_class__ToolContext___modelize_class_phase].val; /* _modelize_class_phase on <self:ToolContext> */
if (unlikely(var42 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelize_class_phase");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelize_class, 23);
fatal_exit(1);
}
var40 = var42;
RET_LABEL41:(void)0;
}
}
{
{ /* Inline serialization_phase#ToolContext#serialization_phase_pre_model (self) on <self:ToolContext> */
var45 = self->attrs[COLOR_nitc__serialization_phase__ToolContext___serialization_phase_pre_model].val; /* _serialization_phase_pre_model on <self:ToolContext> */
if (unlikely(var45 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _serialization_phase_pre_model");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__serialization_phase, 32);
fatal_exit(1);
}
var43 = var45;
RET_LABEL44:(void)0;
}
}
{
poset___poset__POSet___add_edge(var37, var40, var43); /* Direct call poset#POSet#add_edge on <var37:POSet[Phase]>*/
}
{
{ /* Inline phase#ToolContext#phases (self) on <self:ToolContext> */
var48 = self->attrs[COLOR_nitc__phase__ToolContext___phases].val; /* _phases on <self:ToolContext> */
if (unlikely(var48 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _phases");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__phase, 23);
fatal_exit(1);
}
var46 = var48;
RET_LABEL47:(void)0;
}
}
{
{ /* Inline modelize_class#ToolContext#modelize_class_phase (self) on <self:ToolContext> */
var51 = self->attrs[COLOR_nitc__modelize_class__ToolContext___modelize_class_phase].val; /* _modelize_class_phase on <self:ToolContext> */
if (unlikely(var51 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelize_class_phase");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelize_class, 23);
fatal_exit(1);
}
var49 = var51;
RET_LABEL50:(void)0;
}
}
{
{ /* Inline parallelization_phase#ToolContext#parallelization_phase (self) on <self:ToolContext> */
var54 = self->attrs[COLOR_nitc__parallelization_phase__ToolContext___parallelization_phase].val; /* _parallelization_phase on <self:ToolContext> */
if (unlikely(var54 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _parallelization_phase");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parallelization_phase, 28);
fatal_exit(1);
}
var52 = var54;
RET_LABEL53:(void)0;
}
}
{
poset___poset__POSet___add_edge(var46, var49, var52); /* Direct call poset#POSet#add_edge on <var46:POSet[Phase]>*/
}
var = 1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
