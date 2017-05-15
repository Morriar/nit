#include "nitc__rapid_type_analysis.sep.0.h"
/* method rapid_type_analysis#ModelBuilder#do_rapid_type_analysis for (self: ModelBuilder, MModule): RapidTypeAnalysis */
val* nitc__rapid_type_analysis___ModelBuilder___do_rapid_type_analysis(val* self, val* p0) {
val* var /* : RapidTypeAnalysis */;
val* var_mainmodule /* var mainmodule: MModule */;
val* var1 /* : RapidTypeAnalysis */;
val* var_analysis /* var analysis: RapidTypeAnalysis */;
val* var2 /* : ToolContext */;
val* var4 /* : ToolContext */;
val* var5 /* : OptionBool */;
val* var7 /* : OptionBool */;
val* var8 /* : nullable Object */;
val* var10 /* : nullable Object */;
short int var11 /* : Bool */;
val* var12 /* : ToolContext */;
val* var14 /* : ToolContext */;
val* var15 /* : String */;
val* var17 /* : String */;
val* var18 /* : String */;
val* var20 /* : String */;
val* var21 /* : String */;
val* var_basename /* var basename: String */;
val* var22 /* : OrderedTree[Object] */;
static val* varonce;
val* var23 /* : String */;
char* var24 /* : CString */;
val* var25 /* : String */;
val* var26 /* : Text */;
val* var27 /* : CsvDocument */;
static val* varonce28;
val* var29 /* : String */;
char* var30 /* : CString */;
val* var31 /* : String */;
val* var32 /* : Text */;
var_mainmodule = p0;
var1 = NEW_nitc__RapidTypeAnalysis(&type_nitc__RapidTypeAnalysis);
{
((void(*)(val* self, val* p0))(var1->class->vft[COLOR_nitc__rapid_type_analysis__RapidTypeAnalysis__modelbuilder_61d]))(var1, self); /* modelbuilder= on <var1:RapidTypeAnalysis>*/
}
{
((void(*)(val* self, val* p0))(var1->class->vft[COLOR_nitc__rapid_type_analysis__RapidTypeAnalysis__mainmodule_61d]))(var1, var_mainmodule); /* mainmodule= on <var1:RapidTypeAnalysis>*/
}
{
((void(*)(val* self))(var1->class->vft[COLOR_core__kernel__Object__init]))(var1); /* init on <var1:RapidTypeAnalysis>*/
}
var_analysis = var1;
{
nitc___nitc__RapidTypeAnalysis___run_analysis(var_analysis); /* Direct call rapid_type_analysis#RapidTypeAnalysis#run_analysis on <var_analysis:RapidTypeAnalysis>*/
}
{
{ /* Inline modelbuilder_base#ModelBuilder#toolcontext (self) on <self:ModelBuilder> */
var4 = self->attrs[COLOR_nitc__modelbuilder_base__ModelBuilder___toolcontext].val; /* _toolcontext on <self:ModelBuilder> */
if (unlikely(var4 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelbuilder_base, 47);
fatal_exit(1);
}
var2 = var4;
RET_LABEL3:(void)0;
}
}
{
{ /* Inline toolcontext#ToolContext#opt_log (var2) on <var2:ToolContext> */
var7 = var2->attrs[COLOR_nitc__toolcontext__ToolContext___opt_log].val; /* _opt_log on <var2:ToolContext> */
if (unlikely(var7 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_log");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__toolcontext, 369);
fatal_exit(1);
}
var5 = var7;
RET_LABEL6:(void)0;
}
}
{
{ /* Inline opts#Option#value (var5) on <var5:OptionBool> */
var10 = var5->attrs[COLOR_opts__Option___value].val; /* _value on <var5:OptionBool> */
var8 = var10;
RET_LABEL9:(void)0;
}
}
var11 = (short int)((long)(var8)>>2);
if (var11){
{
{ /* Inline modelbuilder_base#ModelBuilder#toolcontext (self) on <self:ModelBuilder> */
var14 = self->attrs[COLOR_nitc__modelbuilder_base__ModelBuilder___toolcontext].val; /* _toolcontext on <self:ModelBuilder> */
if (unlikely(var14 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelbuilder_base, 47);
fatal_exit(1);
}
var12 = var14;
RET_LABEL13:(void)0;
}
}
{
{ /* Inline toolcontext#ToolContext#log_directory (var12) on <var12:ToolContext> */
var17 = var12->attrs[COLOR_nitc__toolcontext__ToolContext___log_directory].val; /* _log_directory on <var12:ToolContext> */
if (unlikely(var17 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _log_directory");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__toolcontext, 151);
fatal_exit(1);
}
var15 = var17;
RET_LABEL16:(void)0;
}
}
{
{ /* Inline mmodule#MModule#name (var_mainmodule) on <var_mainmodule:MModule> */
var20 = var_mainmodule->attrs[COLOR_nitc__mmodule__MModule___name].val; /* _name on <var_mainmodule:MModule> */
if (unlikely(var20 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__mmodule, 100);
fatal_exit(1);
}
var18 = var20;
RET_LABEL19:(void)0;
}
}
{
var21 = core__file___String____47d(var15, var18);
}
var_basename = var21;
{
var22 = nitc___nitc__RapidTypeAnalysis___live_methods_to_tree(var_analysis);
}
if (likely(varonce!=NULL)) {
var23 = varonce;
} else {
var24 = ".rta_methods.txt";
var25 = core__abstract_text___CString___to_s_full(var24, 16l, 16l);
var23 = var25;
varonce = var23;
}
{
var26 = ((val*(*)(val* self, val* p0))(var_basename->class->vft[COLOR_core__abstract_text__Text___43d]))(var_basename, var23); /* + on <var_basename:String>*/
}
{
core__file___Writable___write_to_file(var22, var26); /* Direct call file#Writable#write_to_file on <var22:OrderedTree[Object]>*/
}
{
var27 = nitc___nitc__RapidTypeAnalysis___live_types_to_csv(var_analysis);
}
if (likely(varonce28!=NULL)) {
var29 = varonce28;
} else {
var30 = ".rta_types.csv";
var31 = core__abstract_text___CString___to_s_full(var30, 14l, 14l);
var29 = var31;
varonce28 = var29;
}
{
var32 = ((val*(*)(val* self, val* p0))(var_basename->class->vft[COLOR_core__abstract_text__Text___43d]))(var_basename, var29); /* + on <var_basename:String>*/
}
{
core__file___Writable___write_to_file(var27, var32); /* Direct call file#Writable#write_to_file on <var27:CsvDocument>*/
}
} else {
}
var = var_analysis;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method rapid_type_analysis#RapidTypeAnalysis#modelbuilder for (self: RapidTypeAnalysis): ModelBuilder */
val* nitc___nitc__RapidTypeAnalysis___modelbuilder(val* self) {
val* var /* : ModelBuilder */;
val* var1 /* : ModelBuilder */;
var1 = self->attrs[COLOR_nitc__rapid_type_analysis__RapidTypeAnalysis___modelbuilder].val; /* _modelbuilder on <self:RapidTypeAnalysis> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__rapid_type_analysis, 53);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method rapid_type_analysis#RapidTypeAnalysis#modelbuilder= for (self: RapidTypeAnalysis, ModelBuilder) */
void nitc___nitc__RapidTypeAnalysis___modelbuilder_61d(val* self, val* p0) {
self->attrs[COLOR_nitc__rapid_type_analysis__RapidTypeAnalysis___modelbuilder].val = p0; /* _modelbuilder on <self:RapidTypeAnalysis> */
RET_LABEL:;
}
/* method rapid_type_analysis#RapidTypeAnalysis#mainmodule for (self: RapidTypeAnalysis): MModule */
val* nitc___nitc__RapidTypeAnalysis___mainmodule(val* self) {
val* var /* : MModule */;
val* var1 /* : MModule */;
var1 = self->attrs[COLOR_nitc__rapid_type_analysis__RapidTypeAnalysis___mainmodule].val; /* _mainmodule on <self:RapidTypeAnalysis> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mainmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__rapid_type_analysis, 56);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method rapid_type_analysis#RapidTypeAnalysis#mainmodule= for (self: RapidTypeAnalysis, MModule) */
void nitc___nitc__RapidTypeAnalysis___mainmodule_61d(val* self, val* p0) {
self->attrs[COLOR_nitc__rapid_type_analysis__RapidTypeAnalysis___mainmodule].val = p0; /* _mainmodule on <self:RapidTypeAnalysis> */
RET_LABEL:;
}
/* method rapid_type_analysis#RapidTypeAnalysis#live_types for (self: RapidTypeAnalysis): HashSet[MClassType] */
val* nitc___nitc__RapidTypeAnalysis___live_types(val* self) {
val* var /* : HashSet[MClassType] */;
val* var1 /* : HashSet[MClassType] */;
var1 = self->attrs[COLOR_nitc__rapid_type_analysis__RapidTypeAnalysis___live_types].val; /* _live_types on <self:RapidTypeAnalysis> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _live_types");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__rapid_type_analysis, 60);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method rapid_type_analysis#RapidTypeAnalysis#live_open_types for (self: RapidTypeAnalysis): HashSet[MClassType] */
val* nitc___nitc__RapidTypeAnalysis___live_open_types(val* self) {
val* var /* : HashSet[MClassType] */;
val* var1 /* : HashSet[MClassType] */;
var1 = self->attrs[COLOR_nitc__rapid_type_analysis__RapidTypeAnalysis___live_open_types].val; /* _live_open_types on <self:RapidTypeAnalysis> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _live_open_types");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__rapid_type_analysis, 65);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method rapid_type_analysis#RapidTypeAnalysis#live_classes for (self: RapidTypeAnalysis): HashSet[MClass] */
val* nitc___nitc__RapidTypeAnalysis___live_classes(val* self) {
val* var /* : HashSet[MClass] */;
val* var1 /* : HashSet[MClass] */;
var1 = self->attrs[COLOR_nitc__rapid_type_analysis__RapidTypeAnalysis___live_classes].val; /* _live_classes on <self:RapidTypeAnalysis> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _live_classes");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__rapid_type_analysis, 69);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method rapid_type_analysis#RapidTypeAnalysis#live_cast_types for (self: RapidTypeAnalysis): HashSet[MType] */
val* nitc___nitc__RapidTypeAnalysis___live_cast_types(val* self) {
val* var /* : HashSet[MType] */;
val* var1 /* : HashSet[MType] */;
var1 = self->attrs[COLOR_nitc__rapid_type_analysis__RapidTypeAnalysis___live_cast_types].val; /* _live_cast_types on <self:RapidTypeAnalysis> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _live_cast_types");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__rapid_type_analysis, 72);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method rapid_type_analysis#RapidTypeAnalysis#live_open_cast_types for (self: RapidTypeAnalysis): HashSet[MType] */
val* nitc___nitc__RapidTypeAnalysis___live_open_cast_types(val* self) {
val* var /* : HashSet[MType] */;
val* var1 /* : HashSet[MType] */;
var1 = self->attrs[COLOR_nitc__rapid_type_analysis__RapidTypeAnalysis___live_open_cast_types].val; /* _live_open_cast_types on <self:RapidTypeAnalysis> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _live_open_cast_types");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__rapid_type_analysis, 75);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method rapid_type_analysis#RapidTypeAnalysis#live_methoddefs for (self: RapidTypeAnalysis): HashSet[MMethodDef] */
val* nitc___nitc__RapidTypeAnalysis___live_methoddefs(val* self) {
val* var /* : HashSet[MMethodDef] */;
val* var1 /* : HashSet[MMethodDef] */;
var1 = self->attrs[COLOR_nitc__rapid_type_analysis__RapidTypeAnalysis___live_methoddefs].val; /* _live_methoddefs on <self:RapidTypeAnalysis> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _live_methoddefs");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__rapid_type_analysis, 79);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method rapid_type_analysis#RapidTypeAnalysis#live_methods for (self: RapidTypeAnalysis): HashSet[MMethod] */
val* nitc___nitc__RapidTypeAnalysis___live_methods(val* self) {
val* var /* : HashSet[MMethod] */;
val* var1 /* : HashSet[MMethod] */;
var1 = self->attrs[COLOR_nitc__rapid_type_analysis__RapidTypeAnalysis___live_methods].val; /* _live_methods on <self:RapidTypeAnalysis> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _live_methods");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__rapid_type_analysis, 82);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method rapid_type_analysis#RapidTypeAnalysis#live_mmodules for (self: RapidTypeAnalysis): HashSet[MModule] */
val* nitc___nitc__RapidTypeAnalysis___live_mmodules(val* self) {
val* var /* : HashSet[MModule] */;
val* var1 /* : HashSet[MModule] */;
var1 = self->attrs[COLOR_nitc__rapid_type_analysis__RapidTypeAnalysis___live_mmodules].val; /* _live_mmodules on <self:RapidTypeAnalysis> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _live_mmodules");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__rapid_type_analysis, 85);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method rapid_type_analysis#RapidTypeAnalysis#live_callsites for (self: RapidTypeAnalysis): HashSet[CallSite] */
val* nitc___nitc__RapidTypeAnalysis___live_callsites(val* self) {
val* var /* : HashSet[CallSite] */;
val* var1 /* : HashSet[CallSite] */;
var1 = self->attrs[COLOR_nitc__rapid_type_analysis__RapidTypeAnalysis___live_callsites].val; /* _live_callsites on <self:RapidTypeAnalysis> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _live_callsites");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__rapid_type_analysis, 89);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method rapid_type_analysis#RapidTypeAnalysis#live_targets_cache for (self: RapidTypeAnalysis): HashMap2[MType, MProperty, Set[MMethodDef]] */
val* nitc___nitc__RapidTypeAnalysis___live_targets_cache(val* self) {
val* var /* : HashMap2[MType, MProperty, Set[MMethodDef]] */;
val* var1 /* : HashMap2[MType, MProperty, Set[MMethodDef]] */;
var1 = self->attrs[COLOR_nitc__rapid_type_analysis__RapidTypeAnalysis___live_targets_cache].val; /* _live_targets_cache on <self:RapidTypeAnalysis> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _live_targets_cache");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__rapid_type_analysis, 92);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method rapid_type_analysis#RapidTypeAnalysis#live_targets for (self: RapidTypeAnalysis, CallSite): Set[MMethodDef] */
val* nitc___nitc__RapidTypeAnalysis___live_targets(val* self, val* p0) {
val* var /* : Set[MMethodDef] */;
val* var_callsite /* var callsite: CallSite */;
val* var1 /* : MType */;
val* var3 /* : MType */;
val* var_mtype /* var mtype: MType */;
val* var4 /* : nullable MClassType */;
val* var6 /* : nullable MClassType */;
val* var_anchor /* var anchor: nullable MClassType */;
short int var7 /* : Bool */;
short int var8 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var10 /* : Bool */;
short int var11 /* : Bool */;
val* var12 /* : MModule */;
val* var14 /* : MModule */;
val* var15 /* : MType */;
val* var16 /* : MType */;
short int var17 /* : Bool */;
int cltype;
int idtype;
val* var18 /* : MClass */;
val* var20 /* : MClass */;
val* var21 /* : MClassDef */;
val* var23 /* : MClassDef */;
val* var24 /* : MClassType */;
val* var26 /* : MClassType */;
val* var27 /* : MMethod */;
val* var29 /* : MMethod */;
val* var_mproperty /* var mproperty: MMethod */;
val* var30 /* : HashMap2[MType, MProperty, Set[MMethodDef]] */;
val* var32 /* : HashMap2[MType, MProperty, Set[MMethodDef]] */;
val* var33 /* : nullable Object */;
val* var_res /* var res: nullable Set[MMethodDef] */;
short int var34 /* : Bool */;
short int var35 /* : Bool */;
short int var37 /* : Bool */;
short int var38 /* : Bool */;
val* var39 /* : ArraySet[MMethodDef] */;
val* var40 /* : HashMap2[MType, MProperty, Set[MMethodDef]] */;
val* var42 /* : HashMap2[MType, MProperty, Set[MMethodDef]] */;
val* var43 /* : HashSet[MClass] */;
val* var45 /* : HashSet[MClass] */;
val* var_ /* var : HashSet[MClass] */;
val* var46 /* : Iterator[nullable Object] */;
val* var_47 /* var : Iterator[MClass] */;
short int var48 /* : Bool */;
val* var49 /* : nullable Object */;
val* var_c /* var c: MClass */;
val* var50 /* : MClassDef */;
val* var52 /* : MClassDef */;
val* var53 /* : MClassType */;
val* var55 /* : MClassType */;
val* var_tc /* var tc: MClassType */;
val* var56 /* : MModule */;
val* var58 /* : MModule */;
short int var59 /* : Bool */;
short int var60 /* : Bool */;
val* var62 /* : MModule */;
val* var64 /* : MModule */;
val* var65 /* : MPropDef */;
val* var_d /* var d: MMethodDef */;
var_callsite = p0;
{
{ /* Inline typing#CallSite#recv (var_callsite) on <var_callsite:CallSite> */
var3 = var_callsite->attrs[COLOR_nitc__typing__CallSite___recv].val; /* _recv on <var_callsite:CallSite> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _recv");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__typing, 642);
fatal_exit(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
var_mtype = var1;
{
{ /* Inline typing#CallSite#anchor (var_callsite) on <var_callsite:CallSite> */
var6 = var_callsite->attrs[COLOR_nitc__typing__CallSite___anchor].val; /* _anchor on <var_callsite:CallSite> */
var4 = var6;
RET_LABEL5:(void)0;
}
}
var_anchor = var4;
if (var_anchor == NULL) {
var7 = 0; /* is null */
} else {
var7 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_anchor,((val*)NULL)) on <var_anchor:nullable MClassType> */
var_other = ((val*)NULL);
{
var10 = ((short int(*)(val* self, val* p0))(var_anchor->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_anchor, var_other); /* == on <var_anchor:nullable MClassType(MClassType)>*/
}
var11 = !var10;
var8 = var11;
goto RET_LABEL9;
RET_LABEL9:(void)0;
}
var7 = var8;
}
if (var7){
{
{ /* Inline typing#CallSite#mmodule (var_callsite) on <var_callsite:CallSite> */
var14 = var_callsite->attrs[COLOR_nitc__typing__CallSite___mmodule].val; /* _mmodule on <var_callsite:CallSite> */
if (unlikely(var14 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__typing, 645);
fatal_exit(1);
}
var12 = var14;
RET_LABEL13:(void)0;
}
}
{
var15 = ((val*(*)(val* self, val* p0, val* p1))(var_mtype->class->vft[COLOR_nitc__model__MType__anchor_to]))(var_mtype, var12, var_anchor); /* anchor_to on <var_mtype:MType>*/
}
var_mtype = var15;
} else {
}
{
var16 = ((val*(*)(val* self))(var_mtype->class->vft[COLOR_nitc__model__MType__undecorate]))(var_mtype); /* undecorate on <var_mtype:MType>*/
}
var_mtype = var16;
/* <var_mtype:MType> isa MClassType */
cltype = type_nitc__MClassType.color;
idtype = type_nitc__MClassType.id;
if(cltype >= var_mtype->type->table_size) {
var17 = 0;
} else {
var17 = var_mtype->type->type_table[cltype] == idtype;
}
if (var17){
{
{ /* Inline model#MClassType#mclass (var_mtype) on <var_mtype:MType(MClassType)> */
var20 = var_mtype->attrs[COLOR_nitc__model__MClassType___mclass].val; /* _mclass on <var_mtype:MType(MClassType)> */
if (unlikely(var20 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1197);
fatal_exit(1);
}
var18 = var20;
RET_LABEL19:(void)0;
}
}
{
{ /* Inline model#MClass#intro (var18) on <var18:MClass> */
var23 = var18->attrs[COLOR_nitc__model__MClass___intro].val; /* _intro on <var18:MClass> */
if (unlikely(var23 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 496);
fatal_exit(1);
}
var21 = var23;
RET_LABEL22:(void)0;
}
}
{
{ /* Inline model#MClassDef#bound_mtype (var21) on <var21:MClassDef> */
var26 = var21->attrs[COLOR_nitc__model__MClassDef___bound_mtype].val; /* _bound_mtype on <var21:MClassDef> */
if (unlikely(var26 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _bound_mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 594);
fatal_exit(1);
}
var24 = var26;
RET_LABEL25:(void)0;
}
}
var_mtype = var24;
} else {
}
{
{ /* Inline typing#CallSite#mproperty (var_callsite) on <var_callsite:CallSite> */
var29 = var_callsite->attrs[COLOR_nitc__typing__CallSite___mproperty].val; /* _mproperty on <var_callsite:CallSite> */
if (unlikely(var29 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__typing, 656);
fatal_exit(1);
}
var27 = var29;
RET_LABEL28:(void)0;
}
}
var_mproperty = var27;
{
{ /* Inline rapid_type_analysis#RapidTypeAnalysis#live_targets_cache (self) on <self:RapidTypeAnalysis> */
var32 = self->attrs[COLOR_nitc__rapid_type_analysis__RapidTypeAnalysis___live_targets_cache].val; /* _live_targets_cache on <self:RapidTypeAnalysis> */
if (unlikely(var32 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _live_targets_cache");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__rapid_type_analysis, 92);
fatal_exit(1);
}
var30 = var32;
RET_LABEL31:(void)0;
}
}
{
var33 = more_collections___more_collections__HashMap2____91d_93d(var30, var_mtype, var_mproperty);
}
var_res = var33;
if (var_res == NULL) {
var34 = 0; /* is null */
} else {
var34 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_res,((val*)NULL)) on <var_res:nullable Set[MMethodDef]> */
var_other = ((val*)NULL);
{
var37 = ((short int(*)(val* self, val* p0))((((long)var_res&3)?class_info[((long)var_res&3)]:var_res->class)->vft[COLOR_core__kernel__Object___61d_61d]))(var_res, var_other); /* == on <var_res:nullable Set[MMethodDef](Set[MMethodDef])>*/
}
var38 = !var37;
var35 = var38;
goto RET_LABEL36;
RET_LABEL36:(void)0;
}
var34 = var35;
}
if (var34){
var = var_res;
goto RET_LABEL;
} else {
}
var39 = NEW_core__ArraySet(&type_core__ArraySet__nitc__MMethodDef);
{
core___core__ArraySet___core__kernel__Object__init(var39); /* Direct call array#ArraySet#init on <var39:ArraySet[MMethodDef]>*/
}
var_res = var39;
{
{ /* Inline rapid_type_analysis#RapidTypeAnalysis#live_targets_cache (self) on <self:RapidTypeAnalysis> */
var42 = self->attrs[COLOR_nitc__rapid_type_analysis__RapidTypeAnalysis___live_targets_cache].val; /* _live_targets_cache on <self:RapidTypeAnalysis> */
if (unlikely(var42 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _live_targets_cache");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__rapid_type_analysis, 92);
fatal_exit(1);
}
var40 = var42;
RET_LABEL41:(void)0;
}
}
{
more_collections___more_collections__HashMap2____91d_93d_61d(var40, var_mtype, var_mproperty, var_res); /* Direct call more_collections#HashMap2#[]= on <var40:HashMap2[MType, MProperty, Set[MMethodDef]]>*/
}
{
{ /* Inline rapid_type_analysis#RapidTypeAnalysis#live_classes (self) on <self:RapidTypeAnalysis> */
var45 = self->attrs[COLOR_nitc__rapid_type_analysis__RapidTypeAnalysis___live_classes].val; /* _live_classes on <self:RapidTypeAnalysis> */
if (unlikely(var45 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _live_classes");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__rapid_type_analysis, 69);
fatal_exit(1);
}
var43 = var45;
RET_LABEL44:(void)0;
}
}
var_ = var43;
{
var46 = core___core__HashSet___core__abstract_collection__Collection__iterator(var_);
}
var_47 = var46;
for(;;) {
{
var48 = ((short int(*)(val* self))((((long)var_47&3)?class_info[((long)var_47&3)]:var_47->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_47); /* is_ok on <var_47:Iterator[MClass]>*/
}
if (var48){
} else {
goto BREAK_label;
}
{
var49 = ((val*(*)(val* self))((((long)var_47&3)?class_info[((long)var_47&3)]:var_47->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_47); /* item on <var_47:Iterator[MClass]>*/
}
var_c = var49;
{
{ /* Inline model#MClass#intro (var_c) on <var_c:MClass> */
var52 = var_c->attrs[COLOR_nitc__model__MClass___intro].val; /* _intro on <var_c:MClass> */
if (unlikely(var52 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 496);
fatal_exit(1);
}
var50 = var52;
RET_LABEL51:(void)0;
}
}
{
{ /* Inline model#MClassDef#bound_mtype (var50) on <var50:MClassDef> */
var55 = var50->attrs[COLOR_nitc__model__MClassDef___bound_mtype].val; /* _bound_mtype on <var50:MClassDef> */
if (unlikely(var55 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _bound_mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 594);
fatal_exit(1);
}
var53 = var55;
RET_LABEL54:(void)0;
}
}
var_tc = var53;
{
{ /* Inline rapid_type_analysis#RapidTypeAnalysis#mainmodule (self) on <self:RapidTypeAnalysis> */
var58 = self->attrs[COLOR_nitc__rapid_type_analysis__RapidTypeAnalysis___mainmodule].val; /* _mainmodule on <self:RapidTypeAnalysis> */
if (unlikely(var58 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mainmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__rapid_type_analysis, 56);
fatal_exit(1);
}
var56 = var58;
RET_LABEL57:(void)0;
}
}
{
var59 = nitc___nitc__MType___is_subtype(var_tc, var56, ((val*)NULL), var_mtype);
}
var60 = !var59;
if (var60){
goto BREAK_label61;
} else {
}
{
{ /* Inline rapid_type_analysis#RapidTypeAnalysis#mainmodule (self) on <self:RapidTypeAnalysis> */
var64 = self->attrs[COLOR_nitc__rapid_type_analysis__RapidTypeAnalysis___mainmodule].val; /* _mainmodule on <self:RapidTypeAnalysis> */
if (unlikely(var64 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mainmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__rapid_type_analysis, 56);
fatal_exit(1);
}
var62 = var64;
RET_LABEL63:(void)0;
}
}
{
var65 = nitc___nitc__MProperty___lookup_first_definition(var_mproperty, var62, var_tc);
}
var_d = var65;
{
core___core__ArraySet___core__abstract_collection__SimpleCollection__add(var_res, var_d); /* Direct call array#ArraySet#add on <var_res:nullable Set[MMethodDef](ArraySet[MMethodDef])>*/
}
BREAK_label61: (void)0;
{
((void(*)(val* self))((((long)var_47&3)?class_info[((long)var_47&3)]:var_47->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_47); /* next on <var_47:Iterator[MClass]>*/
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_47&3)?class_info[((long)var_47&3)]:var_47->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_47); /* finish on <var_47:Iterator[MClass]>*/
}
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method rapid_type_analysis#RapidTypeAnalysis#live_super_sends for (self: RapidTypeAnalysis): HashSet[MMethodDef] */
val* nitc___nitc__RapidTypeAnalysis___live_super_sends(val* self) {
val* var /* : HashSet[MMethodDef] */;
val* var1 /* : HashSet[MMethodDef] */;
var1 = self->attrs[COLOR_nitc__rapid_type_analysis__RapidTypeAnalysis___live_super_sends].val; /* _live_super_sends on <self:RapidTypeAnalysis> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _live_super_sends");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__rapid_type_analysis, 118);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method rapid_type_analysis#RapidTypeAnalysis#live_types_to_csv for (self: RapidTypeAnalysis): CsvDocument */
val* nitc___nitc__RapidTypeAnalysis___live_types_to_csv(val* self) {
val* var /* : CsvDocument */;
val* var1 /* : HashSet[MType] */;
val* var_typeset /* var typeset: HashSet[MType] */;
val* var2 /* : HashSet[MClassType] */;
val* var4 /* : HashSet[MClassType] */;
val* var5 /* : HashSet[MClassType] */;
val* var7 /* : HashSet[MClassType] */;
val* var8 /* : HashSet[MType] */;
val* var10 /* : HashSet[MType] */;
val* var11 /* : HashSet[MType] */;
val* var13 /* : HashSet[MType] */;
val* var14 /* : Array[nullable Object] */;
val* var_types /* var types: Array[MType] */;
val* var15 /* : CachedAlphaComparator */;
val* var17 /* : CsvDocument */;
val* var_res /* var res: CsvDocument */;
val* var20 /* : Array[String] */;
val* var_ /* var : Array[String] */;
static val* varonce;
val* var21 /* : String */;
char* var22 /* : CString */;
val* var23 /* : String */;
static val* varonce24;
val* var25 /* : String */;
char* var26 /* : CString */;
val* var27 /* : String */;
static val* varonce28;
val* var29 /* : String */;
char* var30 /* : CString */;
val* var31 /* : String */;
static val* varonce32;
val* var33 /* : String */;
char* var34 /* : CString */;
val* var35 /* : String */;
val* var_37 /* var : Array[MType] */;
val* var38 /* : IndexedIterator[nullable Object] */;
val* var_39 /* var : IndexedIterator[MType] */;
short int var40 /* : Bool */;
val* var41 /* : nullable Object */;
val* var_t /* var t: MType */;
short int var42 /* : Bool */;
static val* varonce43;
val* var44 /* : String */;
char* var45 /* : CString */;
val* var46 /* : String */;
val* var_reso /* var reso: nullable Object */;
static val* varonce47;
val* var48 /* : String */;
char* var49 /* : CString */;
val* var50 /* : String */;
short int var51 /* : Bool */;
short int var52 /* : Bool */;
int cltype;
int idtype;
short int var_53 /* var : Bool */;
short int var54 /* : Bool */;
val* var55 /* : HashSet[MClassType] */;
val* var57 /* : HashSet[MClassType] */;
short int var58 /* : Bool */;
short int var_59 /* var : Bool */;
val* var60 /* : HashSet[MClassType] */;
val* var62 /* : HashSet[MClassType] */;
short int var63 /* : Bool */;
static val* varonce64;
val* var65 /* : String */;
char* var66 /* : CString */;
val* var67 /* : String */;
val* var_live /* var live: nullable Object */;
static val* varonce68;
val* var69 /* : String */;
char* var70 /* : CString */;
val* var71 /* : String */;
short int var72 /* : Bool */;
val* var73 /* : HashSet[MType] */;
val* var75 /* : HashSet[MType] */;
short int var76 /* : Bool */;
short int var_77 /* var : Bool */;
val* var78 /* : HashSet[MType] */;
val* var80 /* : HashSet[MType] */;
short int var81 /* : Bool */;
static val* varonce82;
val* var83 /* : String */;
char* var84 /* : CString */;
val* var85 /* : String */;
val* var_cast /* var cast: nullable Object */;
static val* varonce86;
val* var87 /* : String */;
char* var88 /* : CString */;
val* var89 /* : String */;
val* var90 /* : Array[Object] */;
val* var91 /* : NativeArray[Object] */;
var1 = NEW_core__HashSet(&type_core__HashSet__nitc__MType);
{
core___core__HashSet___core__kernel__Object__init(var1); /* Direct call hash_collection#HashSet#init on <var1:HashSet[MType]>*/
}
var_typeset = var1;
{
{ /* Inline rapid_type_analysis#RapidTypeAnalysis#live_types (self) on <self:RapidTypeAnalysis> */
var4 = self->attrs[COLOR_nitc__rapid_type_analysis__RapidTypeAnalysis___live_types].val; /* _live_types on <self:RapidTypeAnalysis> */
if (unlikely(var4 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _live_types");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__rapid_type_analysis, 60);
fatal_exit(1);
}
var2 = var4;
RET_LABEL3:(void)0;
}
}
{
core___core__SimpleCollection___add_all(var_typeset, var2); /* Direct call abstract_collection#SimpleCollection#add_all on <var_typeset:HashSet[MType]>*/
}
{
{ /* Inline rapid_type_analysis#RapidTypeAnalysis#live_open_types (self) on <self:RapidTypeAnalysis> */
var7 = self->attrs[COLOR_nitc__rapid_type_analysis__RapidTypeAnalysis___live_open_types].val; /* _live_open_types on <self:RapidTypeAnalysis> */
if (unlikely(var7 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _live_open_types");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__rapid_type_analysis, 65);
fatal_exit(1);
}
var5 = var7;
RET_LABEL6:(void)0;
}
}
{
core___core__SimpleCollection___add_all(var_typeset, var5); /* Direct call abstract_collection#SimpleCollection#add_all on <var_typeset:HashSet[MType]>*/
}
{
{ /* Inline rapid_type_analysis#RapidTypeAnalysis#live_cast_types (self) on <self:RapidTypeAnalysis> */
var10 = self->attrs[COLOR_nitc__rapid_type_analysis__RapidTypeAnalysis___live_cast_types].val; /* _live_cast_types on <self:RapidTypeAnalysis> */
if (unlikely(var10 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _live_cast_types");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__rapid_type_analysis, 72);
fatal_exit(1);
}
var8 = var10;
RET_LABEL9:(void)0;
}
}
{
core___core__SimpleCollection___add_all(var_typeset, var8); /* Direct call abstract_collection#SimpleCollection#add_all on <var_typeset:HashSet[MType]>*/
}
{
{ /* Inline rapid_type_analysis#RapidTypeAnalysis#live_open_cast_types (self) on <self:RapidTypeAnalysis> */
var13 = self->attrs[COLOR_nitc__rapid_type_analysis__RapidTypeAnalysis___live_open_cast_types].val; /* _live_open_cast_types on <self:RapidTypeAnalysis> */
if (unlikely(var13 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _live_open_cast_types");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__rapid_type_analysis, 75);
fatal_exit(1);
}
var11 = var13;
RET_LABEL12:(void)0;
}
}
{
core___core__SimpleCollection___add_all(var_typeset, var11); /* Direct call abstract_collection#SimpleCollection#add_all on <var_typeset:HashSet[MType]>*/
}
{
var14 = core__array___Collection___to_a(var_typeset);
}
var_types = var14;
var15 = NEW_core__CachedAlphaComparator(&type_core__CachedAlphaComparator);
{
{ /* Inline kernel#Object#init (var15) on <var15:CachedAlphaComparator> */
RET_LABEL16:(void)0;
}
}
{
core___core__Comparator___sort(var15, var_types); /* Direct call sorter#Comparator#sort on <var15:CachedAlphaComparator>*/
}
var17 = NEW_csv__CsvDocument(&type_csv__CsvDocument);
{
{ /* Inline kernel#Object#init (var17) on <var17:CsvDocument> */
RET_LABEL18:(void)0;
}
}
var_res = var17;
{
{ /* Inline csv#CsvStream#separator= (var_res,';') on <var_res:CsvDocument> */
var_res->attrs[COLOR_csv__CsvStream___separator].c = ';'; /* _separator on <var_res:CsvDocument> */
RET_LABEL19:(void)0;
}
}
var20 = NEW_core__Array(&type_core__Array__core__String);
{
core___core__Array___with_capacity(var20, 4l); /* Direct call array#Array#with_capacity on <var20:Array[String]>*/
}
var_ = var20;
if (likely(varonce!=NULL)) {
var21 = varonce;
} else {
var22 = "Type";
var23 = core__abstract_text___CString___to_s_full(var22, 4l, 4l);
var21 = var23;
varonce = var21;
}
{
core___core__AbstractArray___core__abstract_collection__Sequence__push(var_, var21); /* Direct call array#AbstractArray#push on <var_:Array[String]>*/
}
if (likely(varonce24!=NULL)) {
var25 = varonce24;
} else {
var26 = "Resolution";
var27 = core__abstract_text___CString___to_s_full(var26, 10l, 10l);
var25 = var27;
varonce24 = var25;
}
{
core___core__AbstractArray___core__abstract_collection__Sequence__push(var_, var25); /* Direct call array#AbstractArray#push on <var_:Array[String]>*/
}
if (likely(varonce28!=NULL)) {
var29 = varonce28;
} else {
var30 = "Liveness";
var31 = core__abstract_text___CString___to_s_full(var30, 8l, 8l);
var29 = var31;
varonce28 = var29;
}
{
core___core__AbstractArray___core__abstract_collection__Sequence__push(var_, var29); /* Direct call array#AbstractArray#push on <var_:Array[String]>*/
}
if (likely(varonce32!=NULL)) {
var33 = varonce32;
} else {
var34 = "Cast-liveness";
var35 = core__abstract_text___CString___to_s_full(var34, 13l, 13l);
var33 = var35;
varonce32 = var33;
}
{
core___core__AbstractArray___core__abstract_collection__Sequence__push(var_, var33); /* Direct call array#AbstractArray#push on <var_:Array[String]>*/
}
{
{ /* Inline csv#CsvDocument#header= (var_res,var_) on <var_res:CsvDocument> */
var_res->attrs[COLOR_csv__CsvDocument___header].val = var_; /* _header on <var_res:CsvDocument> */
RET_LABEL36:(void)0;
}
}
var_37 = var_types;
{
var38 = core___core__AbstractArrayRead___core__abstract_collection__Collection__iterator(var_37);
}
var_39 = var38;
for(;;) {
{
var40 = ((short int(*)(val* self))((((long)var_39&3)?class_info[((long)var_39&3)]:var_39->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_39); /* is_ok on <var_39:IndexedIterator[MType]>*/
}
if (var40){
} else {
goto BREAK_label;
}
{
var41 = ((val*(*)(val* self))((((long)var_39&3)?class_info[((long)var_39&3)]:var_39->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_39); /* item on <var_39:IndexedIterator[MType]>*/
}
var_t = var41;
{
var42 = ((short int(*)(val* self))(var_t->class->vft[COLOR_nitc__model__MType__need_anchor]))(var_t); /* need_anchor on <var_t:MType>*/
}
if (var42){
if (likely(varonce43!=NULL)) {
var44 = varonce43;
} else {
var45 = "OPEN ";
var46 = core__abstract_text___CString___to_s_full(var45, 5l, 5l);
var44 = var46;
varonce43 = var44;
}
var_reso = var44;
} else {
if (likely(varonce47!=NULL)) {
var48 = varonce47;
} else {
var49 = "CLOSED";
var50 = core__abstract_text___CString___to_s_full(var49, 6l, 6l);
var48 = var50;
varonce47 = var48;
}
var_reso = var48;
}
/* <var_t:MType> isa MClassType */
cltype = type_nitc__MClassType.color;
idtype = type_nitc__MClassType.id;
if(cltype >= var_t->type->table_size) {
var52 = 0;
} else {
var52 = var_t->type->type_table[cltype] == idtype;
}
var_53 = var52;
if (var52){
{
{ /* Inline rapid_type_analysis#RapidTypeAnalysis#live_types (self) on <self:RapidTypeAnalysis> */
var57 = self->attrs[COLOR_nitc__rapid_type_analysis__RapidTypeAnalysis___live_types].val; /* _live_types on <self:RapidTypeAnalysis> */
if (unlikely(var57 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _live_types");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__rapid_type_analysis, 60);
fatal_exit(1);
}
var55 = var57;
RET_LABEL56:(void)0;
}
}
{
var58 = core___core__HashSet___core__abstract_collection__Collection__has(var55, var_t);
}
var_59 = var58;
if (var58){
var54 = var_59;
} else {
{
{ /* Inline rapid_type_analysis#RapidTypeAnalysis#live_open_types (self) on <self:RapidTypeAnalysis> */
var62 = self->attrs[COLOR_nitc__rapid_type_analysis__RapidTypeAnalysis___live_open_types].val; /* _live_open_types on <self:RapidTypeAnalysis> */
if (unlikely(var62 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _live_open_types");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__rapid_type_analysis, 65);
fatal_exit(1);
}
var60 = var62;
RET_LABEL61:(void)0;
}
}
{
var63 = core___core__HashSet___core__abstract_collection__Collection__has(var60, var_t);
}
var54 = var63;
}
var51 = var54;
} else {
var51 = var_53;
}
if (var51){
if (likely(varonce64!=NULL)) {
var65 = varonce64;
} else {
var66 = "LIVE";
var67 = core__abstract_text___CString___to_s_full(var66, 4l, 4l);
var65 = var67;
varonce64 = var65;
}
var_live = var65;
} else {
if (likely(varonce68!=NULL)) {
var69 = varonce68;
} else {
var70 = "DEAD";
var71 = core__abstract_text___CString___to_s_full(var70, 4l, 4l);
var69 = var71;
varonce68 = var69;
}
var_live = var69;
}
{
{ /* Inline rapid_type_analysis#RapidTypeAnalysis#live_cast_types (self) on <self:RapidTypeAnalysis> */
var75 = self->attrs[COLOR_nitc__rapid_type_analysis__RapidTypeAnalysis___live_cast_types].val; /* _live_cast_types on <self:RapidTypeAnalysis> */
if (unlikely(var75 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _live_cast_types");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__rapid_type_analysis, 72);
fatal_exit(1);
}
var73 = var75;
RET_LABEL74:(void)0;
}
}
{
var76 = core___core__HashSet___core__abstract_collection__Collection__has(var73, var_t);
}
var_77 = var76;
if (var76){
var72 = var_77;
} else {
{
{ /* Inline rapid_type_analysis#RapidTypeAnalysis#live_open_cast_types (self) on <self:RapidTypeAnalysis> */
var80 = self->attrs[COLOR_nitc__rapid_type_analysis__RapidTypeAnalysis___live_open_cast_types].val; /* _live_open_cast_types on <self:RapidTypeAnalysis> */
if (unlikely(var80 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _live_open_cast_types");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__rapid_type_analysis, 75);
fatal_exit(1);
}
var78 = var80;
RET_LABEL79:(void)0;
}
}
{
var81 = core___core__HashSet___core__abstract_collection__Collection__has(var78, var_t);
}
var72 = var81;
}
if (var72){
if (likely(varonce82!=NULL)) {
var83 = varonce82;
} else {
var84 = "CAST LIVE";
var85 = core__abstract_text___CString___to_s_full(var84, 9l, 9l);
var83 = var85;
varonce82 = var83;
}
var_cast = var83;
} else {
if (likely(varonce86!=NULL)) {
var87 = varonce86;
} else {
var88 = "CAST DEAD";
var89 = core__abstract_text___CString___to_s_full(var88, 9l, 9l);
var87 = var89;
varonce86 = var87;
}
var_cast = var87;
}
var90 = NEW_core__Array(&type_core__Array__core__Object);
{ /* var90 = array_instance Array[Object] */
var91 = NEW_core__NativeArray(4l, &type_core__NativeArray__core__Object);
((struct instance_core__NativeArray*)var91)->values[0] = (val*) var_t;
((struct instance_core__NativeArray*)var91)->values[1] = (val*) var_reso;
((struct instance_core__NativeArray*)var91)->values[2] = (val*) var_live;
((struct instance_core__NativeArray*)var91)->values[3] = (val*) var_cast;
{
((void(*)(val* self, val* p0, long p1))(var90->class->vft[COLOR_core__array__Array__with_native]))(var90, var91, 4l); /* with_native on <var90:Array[Object]>*/
}
}
{
csv___csv__CsvDocument___add_record(var_res, var90); /* Direct call csv#CsvDocument#add_record on <var_res:CsvDocument>*/
}
{
((void(*)(val* self))((((long)var_39&3)?class_info[((long)var_39&3)]:var_39->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_39); /* next on <var_39:IndexedIterator[MType]>*/
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_39&3)?class_info[((long)var_39&3)]:var_39->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_39); /* finish on <var_39:IndexedIterator[MType]>*/
}
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method rapid_type_analysis#RapidTypeAnalysis#live_methods_to_tree for (self: RapidTypeAnalysis): OrderedTree[Object] */
val* nitc___nitc__RapidTypeAnalysis___live_methods_to_tree(val* self) {
val* var /* : OrderedTree[Object] */;
val* var1 /* : OrderedTree[Object] */;
val* var_tree /* var tree: OrderedTree[Object] */;
val* var3 /* : HashSet[MMethod] */;
val* var5 /* : HashSet[MMethod] */;
val* var_ /* var : HashSet[MMethod] */;
val* var6 /* : Iterator[nullable Object] */;
val* var_7 /* var : Iterator[MMethod] */;
short int var8 /* : Bool */;
val* var9 /* : nullable Object */;
val* var_x /* var x: MMethod */;
val* var10 /* : String */;
val* var_xn /* var xn: String */;
val* var11 /* : Array[MPropDef] */;
val* var13 /* : Array[MPropDef] */;
val* var_14 /* var : Array[MMethodDef] */;
val* var15 /* : IndexedIterator[nullable Object] */;
val* var_16 /* var : IndexedIterator[MMethodDef] */;
short int var17 /* : Bool */;
val* var19 /* : nullable Object */;
val* var_z /* var z: MMethodDef */;
val* var20 /* : String */;
val* var22 /* : String */;
val* var_zn /* var zn: String */;
val* var23 /* : HashSet[MMethodDef] */;
val* var25 /* : HashSet[MMethodDef] */;
short int var26 /* : Bool */;
val* var27 /* : HashSet[MMethodDef] */;
val* var29 /* : HashSet[MMethodDef] */;
short int var30 /* : Bool */;
static val* varonce;
val* var31 /* : String */;
char* var32 /* : CString */;
val* var33 /* : String */;
val* var34 /* : Text */;
val* var35 /* : HashSet[MMethodDef] */;
val* var37 /* : HashSet[MMethodDef] */;
short int var38 /* : Bool */;
static val* varonce39;
val* var40 /* : String */;
char* var41 /* : CString */;
val* var42 /* : String */;
val* var43 /* : Text */;
val* var44 /* : Sys */;
val* var45 /* : Comparator */;
var1 = NEW_ordered_tree__OrderedTree(&type_ordered_tree__OrderedTree__core__Object);
{
{ /* Inline kernel#Object#init (var1) on <var1:OrderedTree[Object]> */
RET_LABEL2:(void)0;
}
}
var_tree = var1;
{
{ /* Inline rapid_type_analysis#RapidTypeAnalysis#live_methods (self) on <self:RapidTypeAnalysis> */
var5 = self->attrs[COLOR_nitc__rapid_type_analysis__RapidTypeAnalysis___live_methods].val; /* _live_methods on <self:RapidTypeAnalysis> */
if (unlikely(var5 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _live_methods");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__rapid_type_analysis, 82);
fatal_exit(1);
}
var3 = var5;
RET_LABEL4:(void)0;
}
}
var_ = var3;
{
var6 = core___core__HashSet___core__abstract_collection__Collection__iterator(var_);
}
var_7 = var6;
for(;;) {
{
var8 = ((short int(*)(val* self))((((long)var_7&3)?class_info[((long)var_7&3)]:var_7->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_7); /* is_ok on <var_7:Iterator[MMethod]>*/
}
if (var8){
} else {
goto BREAK_label;
}
{
var9 = ((val*(*)(val* self))((((long)var_7&3)?class_info[((long)var_7&3)]:var_7->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_7); /* item on <var_7:Iterator[MMethod]>*/
}
var_x = var9;
{
var10 = nitc___nitc__MProperty___nitc__model_base__MEntity__full_name(var_x);
}
var_xn = var10;
{
ordered_tree___ordered_tree__OrderedTree___add(var_tree, ((val*)NULL), var_xn); /* Direct call ordered_tree#OrderedTree#add on <var_tree:OrderedTree[Object]>*/
}
{
{ /* Inline model#MProperty#mpropdefs (var_x) on <var_x:MMethod> */
var13 = var_x->attrs[COLOR_nitc__model__MProperty___mpropdefs].val; /* _mpropdefs on <var_x:MMethod> */
if (unlikely(var13 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mpropdefs");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2092);
fatal_exit(1);
}
var11 = var13;
RET_LABEL12:(void)0;
}
}
var_14 = var11;
{
var15 = core___core__AbstractArrayRead___core__abstract_collection__Collection__iterator(var_14);
}
var_16 = var15;
for(;;) {
{
var17 = ((short int(*)(val* self))((((long)var_16&3)?class_info[((long)var_16&3)]:var_16->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_16); /* is_ok on <var_16:IndexedIterator[MMethodDef]>*/
}
if (var17){
} else {
goto BREAK_label18;
}
{
var19 = ((val*(*)(val* self))((((long)var_16&3)?class_info[((long)var_16&3)]:var_16->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_16); /* item on <var_16:IndexedIterator[MMethodDef]>*/
}
var_z = var19;
{
{ /* Inline model#MPropDef#to_s (var_z) on <var_z:MMethodDef> */
var22 = var_z->attrs[COLOR_nitc__model__MPropDef___to_s].val; /* _to_s on <var_z:MMethodDef> */
if (unlikely(var22 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _to_s");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2450);
fatal_exit(1);
}
var20 = var22;
RET_LABEL21:(void)0;
}
}
var_zn = var20;
{
{ /* Inline rapid_type_analysis#RapidTypeAnalysis#live_methoddefs (self) on <self:RapidTypeAnalysis> */
var25 = self->attrs[COLOR_nitc__rapid_type_analysis__RapidTypeAnalysis___live_methoddefs].val; /* _live_methoddefs on <self:RapidTypeAnalysis> */
if (unlikely(var25 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _live_methoddefs");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__rapid_type_analysis, 79);
fatal_exit(1);
}
var23 = var25;
RET_LABEL24:(void)0;
}
}
{
var26 = core___core__HashSet___core__abstract_collection__Collection__has(var23, var_z);
}
if (var26){
{
ordered_tree___ordered_tree__OrderedTree___add(var_tree, var_xn, var_zn); /* Direct call ordered_tree#OrderedTree#add on <var_tree:OrderedTree[Object]>*/
}
{
{ /* Inline rapid_type_analysis#RapidTypeAnalysis#live_super_sends (self) on <self:RapidTypeAnalysis> */
var29 = self->attrs[COLOR_nitc__rapid_type_analysis__RapidTypeAnalysis___live_super_sends].val; /* _live_super_sends on <self:RapidTypeAnalysis> */
if (unlikely(var29 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _live_super_sends");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__rapid_type_analysis, 118);
fatal_exit(1);
}
var27 = var29;
RET_LABEL28:(void)0;
}
}
{
var30 = core___core__HashSet___core__abstract_collection__Collection__has(var27, var_z);
}
if (var30){
if (likely(varonce!=NULL)) {
var31 = varonce;
} else {
var32 = "(super)";
var33 = core__abstract_text___CString___to_s_full(var32, 7l, 7l);
var31 = var33;
varonce = var31;
}
{
var34 = ((val*(*)(val* self, val* p0))(var_zn->class->vft[COLOR_core__abstract_text__Text___43d]))(var_zn, var31); /* + on <var_zn:String>*/
}
{
ordered_tree___ordered_tree__OrderedTree___add(var_tree, var_zn, var34); /* Direct call ordered_tree#OrderedTree#add on <var_tree:OrderedTree[Object]>*/
}
} else {
}
} else {
{
{ /* Inline rapid_type_analysis#RapidTypeAnalysis#live_super_sends (self) on <self:RapidTypeAnalysis> */
var37 = self->attrs[COLOR_nitc__rapid_type_analysis__RapidTypeAnalysis___live_super_sends].val; /* _live_super_sends on <self:RapidTypeAnalysis> */
if (unlikely(var37 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _live_super_sends");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__rapid_type_analysis, 118);
fatal_exit(1);
}
var35 = var37;
RET_LABEL36:(void)0;
}
}
{
var38 = core___core__HashSet___core__abstract_collection__Collection__has(var35, var_z);
}
if (var38){
if (likely(varonce39!=NULL)) {
var40 = varonce39;
} else {
var41 = "(super)";
var42 = core__abstract_text___CString___to_s_full(var41, 7l, 7l);
var40 = var42;
varonce39 = var40;
}
{
var43 = ((val*(*)(val* self, val* p0))(var_zn->class->vft[COLOR_core__abstract_text__Text___43d]))(var_zn, var40); /* + on <var_zn:String>*/
}
{
ordered_tree___ordered_tree__OrderedTree___add(var_tree, var_xn, var43); /* Direct call ordered_tree#OrderedTree#add on <var_tree:OrderedTree[Object]>*/
}
} else {
}
}
{
((void(*)(val* self))((((long)var_16&3)?class_info[((long)var_16&3)]:var_16->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_16); /* next on <var_16:IndexedIterator[MMethodDef]>*/
}
}
BREAK_label18: (void)0;
{
((void(*)(val* self))((((long)var_16&3)?class_info[((long)var_16&3)]:var_16->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_16); /* finish on <var_16:IndexedIterator[MMethodDef]>*/
}
{
((void(*)(val* self))((((long)var_7&3)?class_info[((long)var_7&3)]:var_7->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_7); /* next on <var_7:Iterator[MMethod]>*/
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_7&3)?class_info[((long)var_7&3)]:var_7->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_7); /* finish on <var_7:Iterator[MMethod]>*/
}
var44 = glob_sys;
{
var45 = core__abstract_text___Sys___alpha_comparator(var44);
}
{
ordered_tree___ordered_tree__OrderedTree___sort_with(var_tree, var45); /* Direct call ordered_tree#OrderedTree#sort_with on <var_tree:OrderedTree[Object]>*/
}
var = var_tree;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method rapid_type_analysis#RapidTypeAnalysis#totry_methods for (self: RapidTypeAnalysis): HashSet[MMethod] */
val* nitc___nitc__RapidTypeAnalysis___totry_methods(val* self) {
val* var /* : HashSet[MMethod] */;
val* var1 /* : HashSet[MMethod] */;
var1 = self->attrs[COLOR_nitc__rapid_type_analysis__RapidTypeAnalysis___totry_methods].val; /* _totry_methods on <self:RapidTypeAnalysis> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _totry_methods");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__rapid_type_analysis, 173);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method rapid_type_analysis#RapidTypeAnalysis#totry_methods_to_remove for (self: RapidTypeAnalysis): Array[MMethod] */
val* nitc___nitc__RapidTypeAnalysis___totry_methods_to_remove(val* self) {
val* var /* : Array[MMethod] */;
val* var1 /* : Array[MMethod] */;
var1 = self->attrs[COLOR_nitc__rapid_type_analysis__RapidTypeAnalysis___totry_methods_to_remove].val; /* _totry_methods_to_remove on <self:RapidTypeAnalysis> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _totry_methods_to_remove");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__rapid_type_analysis, 176);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method rapid_type_analysis#RapidTypeAnalysis#try_methods for (self: RapidTypeAnalysis): HashSet[MMethod] */
val* nitc___nitc__RapidTypeAnalysis___try_methods(val* self) {
val* var /* : HashSet[MMethod] */;
val* var1 /* : HashSet[MMethod] */;
var1 = self->attrs[COLOR_nitc__rapid_type_analysis__RapidTypeAnalysis___try_methods].val; /* _try_methods on <self:RapidTypeAnalysis> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _try_methods");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__rapid_type_analysis, 179);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method rapid_type_analysis#RapidTypeAnalysis#todo for (self: RapidTypeAnalysis): List[MMethodDef] */
val* nitc___nitc__RapidTypeAnalysis___todo(val* self) {
val* var /* : List[MMethodDef] */;
val* var1 /* : List[MMethodDef] */;
var1 = self->attrs[COLOR_nitc__rapid_type_analysis__RapidTypeAnalysis___todo].val; /* _todo on <self:RapidTypeAnalysis> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _todo");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__rapid_type_analysis, 183);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method rapid_type_analysis#RapidTypeAnalysis#force_alive for (self: RapidTypeAnalysis, String) */
void nitc___nitc__RapidTypeAnalysis___force_alive(val* self, val* p0) {
val* var_classname /* var classname: String */;
val* var /* : ModelBuilder */;
val* var2 /* : ModelBuilder */;
val* var3 /* : Model */;
val* var5 /* : Model */;
val* var6 /* : nullable Array[MClass] */;
val* var_classes /* var classes: nullable Array[MClass] */;
short int var7 /* : Bool */;
short int var8 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var10 /* : Bool */;
short int var11 /* : Bool */;
val* var_ /* var : Array[MClass] */;
val* var12 /* : IndexedIterator[nullable Object] */;
val* var_13 /* var : IndexedIterator[MClass] */;
short int var14 /* : Bool */;
val* var15 /* : nullable Object */;
val* var_c /* var c: MClass */;
val* var16 /* : MClassType */;
val* var18 /* : MClassType */;
val* var19 /* : MClassType */;
val* var21 /* : MClassType */;
var_classname = p0;
{
{ /* Inline rapid_type_analysis#RapidTypeAnalysis#modelbuilder (self) on <self:RapidTypeAnalysis> */
var2 = self->attrs[COLOR_nitc__rapid_type_analysis__RapidTypeAnalysis___modelbuilder].val; /* _modelbuilder on <self:RapidTypeAnalysis> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__rapid_type_analysis, 53);
fatal_exit(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
{ /* Inline modelbuilder_base#ModelBuilder#model (var) on <var:ModelBuilder> */
var5 = var->attrs[COLOR_nitc__modelbuilder_base__ModelBuilder___model].val; /* _model on <var:ModelBuilder> */
if (unlikely(var5 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _model");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelbuilder_base, 44);
fatal_exit(1);
}
var3 = var5;
RET_LABEL4:(void)0;
}
}
{
var6 = nitc__model___Model___get_mclasses_by_name(var3, var_classname);
}
var_classes = var6;
if (var_classes == NULL) {
var7 = 0; /* is null */
} else {
var7 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_classes,((val*)NULL)) on <var_classes:nullable Array[MClass]> */
var_other = ((val*)NULL);
{
var10 = ((short int(*)(val* self, val* p0))(var_classes->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_classes, var_other); /* == on <var_classes:nullable Array[MClass](Array[MClass])>*/
}
var11 = !var10;
var8 = var11;
goto RET_LABEL9;
RET_LABEL9:(void)0;
}
var7 = var8;
}
if (var7){
var_ = var_classes;
{
var12 = core___core__AbstractArrayRead___core__abstract_collection__Collection__iterator(var_);
}
var_13 = var12;
for(;;) {
{
var14 = ((short int(*)(val* self))((((long)var_13&3)?class_info[((long)var_13&3)]:var_13->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_13); /* is_ok on <var_13:IndexedIterator[MClass]>*/
}
if (var14){
} else {
goto BREAK_label;
}
{
var15 = ((val*(*)(val* self))((((long)var_13&3)?class_info[((long)var_13&3)]:var_13->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_13); /* item on <var_13:IndexedIterator[MClass]>*/
}
var_c = var15;
{
{ /* Inline model#MClass#mclass_type (var_c) on <var_c:MClass> */
var18 = var_c->attrs[COLOR_nitc__model__MClass___mclass_type].val; /* _mclass_type on <var_c:MClass> */
if (unlikely(var18 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass_type");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 520);
fatal_exit(1);
}
var16 = var18;
RET_LABEL17:(void)0;
}
}
{
{ /* Inline model#MClass#mclass_type (var_c) on <var_c:MClass> */
var21 = var_c->attrs[COLOR_nitc__model__MClass___mclass_type].val; /* _mclass_type on <var_c:MClass> */
if (unlikely(var21 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass_type");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 520);
fatal_exit(1);
}
var19 = var21;
RET_LABEL20:(void)0;
}
}
{
nitc___nitc__RapidTypeAnalysis___add_new(self, var16, var19); /* Direct call rapid_type_analysis#RapidTypeAnalysis#add_new on <self:RapidTypeAnalysis>*/
}
{
((void(*)(val* self))((((long)var_13&3)?class_info[((long)var_13&3)]:var_13->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_13); /* next on <var_13:IndexedIterator[MClass]>*/
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_13&3)?class_info[((long)var_13&3)]:var_13->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_13); /* finish on <var_13:IndexedIterator[MClass]>*/
}
} else {
}
RET_LABEL:;
}
/* method rapid_type_analysis#RapidTypeAnalysis#run_analysis for (self: RapidTypeAnalysis) */
void nitc___nitc__RapidTypeAnalysis___run_analysis(val* self) {
val* var /* : MModule */;
val* var2 /* : MModule */;
val* var3 /* : nullable MClassType */;
val* var_maintype /* var maintype: nullable MClassType */;
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
val* var_initprop /* var initprop: nullable MMethod */;
short int var20 /* : Bool */;
short int var21 /* : Bool */;
val* var_other23 /* var other: nullable Object */;
short int var24 /* : Bool */;
short int var25 /* : Bool */;
val* var26 /* : nullable MMethod */;
val* var27 /* : MModule */;
val* var29 /* : MModule */;
static val* varonce30;
val* var31 /* : String */;
char* var32 /* : CString */;
val* var33 /* : String */;
val* var34 /* : MClass */;
val* var36 /* : MClass */;
val* var37 /* : nullable MMethod */;
val* var38 /* : MModule */;
val* var40 /* : MModule */;
static val* varonce41;
val* var42 /* : String */;
char* var43 /* : CString */;
val* var44 /* : String */;
val* var45 /* : MClass */;
val* var47 /* : MClass */;
val* var48 /* : nullable MMethod */;
val* var_mainprop /* var mainprop: nullable MMethod */;
short int var49 /* : Bool */;
short int var50 /* : Bool */;
short int var52 /* : Bool */;
short int var53 /* : Bool */;
val* var54 /* : MModule */;
val* var56 /* : MModule */;
val* var57 /* : nullable MClassType */;
val* var_finalizable_type /* var finalizable_type: nullable MClassType */;
short int var58 /* : Bool */;
short int var59 /* : Bool */;
short int var61 /* : Bool */;
short int var62 /* : Bool */;
val* var63 /* : MModule */;
val* var65 /* : MModule */;
static val* varonce66;
val* var67 /* : String */;
char* var68 /* : CString */;
val* var69 /* : String */;
val* var70 /* : MClass */;
val* var72 /* : MClass */;
val* var73 /* : nullable MMethod */;
val* var_finalize_meth /* var finalize_meth: nullable MMethod */;
short int var74 /* : Bool */;
short int var75 /* : Bool */;
short int var77 /* : Bool */;
short int var78 /* : Bool */;
static val* varonce79;
val* var80 /* : String */;
char* var81 /* : CString */;
val* var82 /* : String */;
static val* varonce83;
val* var84 /* : String */;
char* var85 /* : CString */;
val* var86 /* : String */;
static val* varonce87;
val* var88 /* : String */;
char* var89 /* : CString */;
val* var90 /* : String */;
static val* varonce91;
val* var92 /* : String */;
char* var93 /* : CString */;
val* var94 /* : String */;
static val* varonce95;
val* var96 /* : String */;
char* var97 /* : CString */;
val* var98 /* : String */;
static val* varonce99;
val* var100 /* : String */;
char* var101 /* : CString */;
val* var102 /* : String */;
static val* varonce103;
val* var104 /* : String */;
char* var105 /* : CString */;
val* var106 /* : String */;
static val* varonce107;
val* var108 /* : String */;
char* var109 /* : CString */;
val* var110 /* : String */;
static val* varonce111;
val* var112 /* : String */;
char* var113 /* : CString */;
val* var114 /* : String */;
static val* varonce115;
val* var116 /* : String */;
char* var117 /* : CString */;
val* var118 /* : String */;
static val* varonce119;
val* var120 /* : String */;
char* var121 /* : CString */;
val* var122 /* : String */;
val* var123 /* : List[MMethodDef] */;
val* var125 /* : List[MMethodDef] */;
short int var126 /* : Bool */;
short int var127 /* : Bool */;
val* var128 /* : List[MMethodDef] */;
val* var130 /* : List[MMethodDef] */;
val* var131 /* : nullable Object */;
val* var_mmethoddef /* var mmethoddef: MMethodDef */;
val* var132 /* : MProperty */;
val* var134 /* : MProperty */;
val* var_mmeth /* var mmeth: MMethod */;
val* var135 /* : nullable MSignature */;
val* var137 /* : nullable MSignature */;
val* var_msignature /* var msignature: nullable MSignature */;
short int var138 /* : Bool */;
short int var139 /* : Bool */;
short int var141 /* : Bool */;
short int var143 /* : Bool */;
val* var144 /* : RapidTypeVisitor */;
val* var145 /* : MClassDef */;
val* var147 /* : MClassDef */;
val* var148 /* : MClassType */;
val* var150 /* : MClassType */;
val* var_v /* var v: RapidTypeVisitor */;
long var151 /* : Int */;
long var153 /* : Int */;
long var_vararg_rank /* var vararg_rank: Int */;
long var154 /* : Int */;
long var156 /* : Int */;
short int var157 /* : Bool */;
short int var159 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var160 /* : Bool */;
val* var161 /* : ModelBuilder */;
val* var163 /* : ModelBuilder */;
val* var164 /* : nullable ANode */;
val* var_node /* var node: nullable ANode */;
val* var165 /* : Array[MParameter] */;
val* var167 /* : Array[MParameter] */;
val* var168 /* : nullable Object */;
val* var169 /* : MType */;
val* var171 /* : MType */;
val* var_elttype /* var elttype: MType */;
val* var172 /* : MModule */;
val* var174 /* : MModule */;
val* var175 /* : MClassType */;
val* var_vararg /* var vararg: MClassType */;
val* var176 /* : MModule */;
val* var178 /* : MModule */;
val* var179 /* : MClassType */;
val* var_native /* var native: MClassType */;
val* var180 /* : ModelBuilder */;
val* var182 /* : ModelBuilder */;
static val* varonce183;
val* var184 /* : String */;
char* var185 /* : CString */;
val* var186 /* : String */;
val* var187 /* : MClass */;
val* var189 /* : MClass */;
val* var190 /* : MModule */;
val* var192 /* : MModule */;
val* var193 /* : MMethod */;
val* var_sig /* var sig: MSignature */;
val* var194 /* : MPropDef */;
val* var196 /* : MPropDef */;
val* var197 /* : nullable MSignature */;
val* var199 /* : nullable MSignature */;
val* var_osig /* var osig: MSignature */;
long var_i /* var i: Int */;
long var200 /* : Int */;
long var_ /* var : Int */;
short int var201 /* : Bool */;
short int var203 /* : Bool */;
int cltype204;
int idtype205;
const char* var_class_name206;
short int var207 /* : Bool */;
val* var209 /* : Array[MParameter] */;
val* var211 /* : Array[MParameter] */;
val* var212 /* : nullable Object */;
val* var213 /* : MType */;
val* var215 /* : MType */;
val* var_origtype /* var origtype: MType */;
short int var216 /* : Bool */;
short int var217 /* : Bool */;
val* var219 /* : Array[MParameter] */;
val* var221 /* : Array[MParameter] */;
val* var222 /* : nullable Object */;
val* var223 /* : MType */;
val* var225 /* : MType */;
val* var_paramtype /* var paramtype: MType */;
long var226 /* : Int */;
short int var227 /* : Bool */;
short int var229 /* : Bool */;
val* var230 /* : ModelBuilder */;
val* var232 /* : ModelBuilder */;
val* var233 /* : nullable ANode */;
val* var_npropdef /* var npropdef: nullable ANode */;
short int var234 /* : Bool */;
int cltype235;
int idtype236;
val* var237 /* : MProperty */;
val* var239 /* : MProperty */;
short int var240 /* : Bool */;
short int var242 /* : Bool */;
short int var243 /* : Bool */;
short int var244 /* : Bool */;
val* var245 /* : MClassType */;
val* var247 /* : MClassType */;
val* var249 /* : NativeArray[String] */;
static val* varonce248;
static val* varonce250;
val* var251 /* : String */;
char* var252 /* : CString */;
val* var253 /* : String */;
val* var254 /* : String */;
val* var255 /* : String */;
val* var256 /* : nullable Object */;
val* var258 /* : nullable Object */;
short int var259 /* : Bool */;
short int var260 /* : Bool */;
val* var261 /* : nullable MType */;
val* var263 /* : nullable MType */;
short int var264 /* : Bool */;
int cltype265;
int idtype266;
const char* var_class_name267;
short int var268 /* : Bool */;
short int var269 /* : Bool */;
short int var271 /* : Bool */;
short int var273 /* : Bool */;
short int var274 /* : Bool */;
int cltype275;
int idtype276;
val* var277 /* : nullable Array[CallSite] */;
val* var279 /* : nullable Array[CallSite] */;
val* var_auto_super_inits /* var auto_super_inits: nullable Array[CallSite] */;
short int var280 /* : Bool */;
short int var281 /* : Bool */;
short int var283 /* : Bool */;
short int var284 /* : Bool */;
val* var_285 /* var : Array[CallSite] */;
val* var286 /* : IndexedIterator[nullable Object] */;
val* var_287 /* var : IndexedIterator[CallSite] */;
short int var288 /* : Bool */;
val* var290 /* : nullable Object */;
val* var_auto_super_init /* var auto_super_init: CallSite */;
short int var291 /* : Bool */;
short int var293 /* : Bool */;
val* var294 /* : MClassType */;
val* var296 /* : MClassType */;
short int var297 /* : Bool */;
short int var298 /* : Bool */;
short int var300 /* : Bool */;
short int var_301 /* var : Bool */;
short int var302 /* : Bool */;
short int var304 /* : Bool */;
val* var305 /* : nullable MType */;
val* var307 /* : nullable MType */;
val* var_ret /* var ret: nullable MType */;
short int var308 /* : Bool */;
short int var309 /* : Bool */;
short int var310 /* : Bool */;
short int var311 /* : Bool */;
short int var312 /* : Bool */;
short int var314 /* : Bool */;
short int var315 /* : Bool */;
short int var_316 /* var : Bool */;
short int var317 /* : Bool */;
int cltype318;
int idtype319;
short int var_320 /* var : Bool */;
val* var321 /* : MClass */;
val* var323 /* : MClass */;
val* var324 /* : MClassKind */;
val* var326 /* : MClassKind */;
val* var327 /* : Sys */;
val* var328 /* : MClassKind */;
short int var329 /* : Bool */;
short int var331 /* : Bool */;
short int var332 /* : Bool */;
short int var_333 /* var : Bool */;
val* var334 /* : MClass */;
val* var336 /* : MClass */;
val* var337 /* : MClassKind */;
val* var339 /* : MClassKind */;
val* var340 /* : Sys */;
val* var341 /* : MClassKind */;
short int var342 /* : Bool */;
short int var344 /* : Bool */;
short int var345 /* : Bool */;
val* var347 /* : List[MClassType] */;
val* var_todo_types /* var todo_types: List[MClassType] */;
val* var349 /* : HashSet[MClassType] */;
val* var351 /* : HashSet[MClassType] */;
short int var352 /* : Bool */;
short int var353 /* : Bool */;
val* var354 /* : nullable Object */;
val* var_t /* var t: MClassType */;
val* var355 /* : HashSet[MClassType] */;
val* var357 /* : HashSet[MClassType] */;
val* var_358 /* var : HashSet[MClassType] */;
val* var359 /* : Iterator[nullable Object] */;
val* var_360 /* var : Iterator[MClassType] */;
short int var361 /* : Bool */;
val* var363 /* : nullable Object */;
val* var_ot /* var ot: MClassType */;
val* var364 /* : MModule */;
val* var366 /* : MModule */;
short int var367 /* : Bool */;
short int var368 /* : Bool */;
val* var370 /* : MModule */;
val* var372 /* : MModule */;
val* var373 /* : MClassType */;
val* var_rt /* var rt: MClassType */;
val* var374 /* : HashSet[MClassType] */;
val* var376 /* : HashSet[MClassType] */;
short int var377 /* : Bool */;
val* var378 /* : MModule */;
val* var380 /* : MModule */;
short int var381 /* : Bool */;
short int var382 /* : Bool */;
short int var383 /* : Bool */;
short int var384 /* : Bool */;
val* var385 /* : HashSet[MClassType] */;
val* var387 /* : HashSet[MClassType] */;
val* var389 /* : HashSet[MType] */;
val* var391 /* : HashSet[MType] */;
val* var_392 /* var : HashSet[MType] */;
val* var393 /* : Iterator[nullable Object] */;
val* var_394 /* var : Iterator[MType] */;
short int var395 /* : Bool */;
val* var397 /* : nullable Object */;
val* var_ot398 /* var ot: MType */;
val* var399 /* : HashSet[MClassType] */;
val* var401 /* : HashSet[MClassType] */;
val* var_402 /* var : HashSet[MClassType] */;
val* var403 /* : Iterator[nullable Object] */;
val* var_404 /* var : Iterator[MClassType] */;
short int var405 /* : Bool */;
val* var407 /* : nullable Object */;
val* var_t408 /* var t: MClassType */;
val* var409 /* : MModule */;
val* var411 /* : MModule */;
short int var412 /* : Bool */;
short int var413 /* : Bool */;
val* var415 /* : MModule */;
val* var417 /* : MModule */;
val* var418 /* : MType */;
val* var_rt419 /* var rt: MType */;
val* var420 /* : MModule */;
val* var422 /* : MModule */;
short int var423 /* : Bool */;
short int var424 /* : Bool */;
val* var425 /* : HashSet[MType] */;
val* var427 /* : HashSet[MType] */;
{
{ /* Inline rapid_type_analysis#RapidTypeAnalysis#mainmodule (self) on <self:RapidTypeAnalysis> */
var2 = self->attrs[COLOR_nitc__rapid_type_analysis__RapidTypeAnalysis___mainmodule].val; /* _mainmodule on <self:RapidTypeAnalysis> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mainmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__rapid_type_analysis, 56);
fatal_exit(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
var3 = nitc__model___MModule___sys_type(var);
}
var_maintype = var3;
if (var_maintype == NULL) {
var4 = 1; /* is null */
} else {
var4 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_maintype,((val*)NULL)) on <var_maintype:nullable MClassType> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_maintype,var_other) on <var_maintype:nullable MClassType(MClassType)> */
var9 = var_maintype == var_other;
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
nitc___nitc__RapidTypeAnalysis___add_new(self, var_maintype, var_maintype); /* Direct call rapid_type_analysis#RapidTypeAnalysis#add_new on <self:RapidTypeAnalysis>*/
}
{
{ /* Inline rapid_type_analysis#RapidTypeAnalysis#mainmodule (self) on <self:RapidTypeAnalysis> */
var12 = self->attrs[COLOR_nitc__rapid_type_analysis__RapidTypeAnalysis___mainmodule].val; /* _mainmodule on <self:RapidTypeAnalysis> */
if (unlikely(var12 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mainmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__rapid_type_analysis, 56);
fatal_exit(1);
}
var10 = var12;
RET_LABEL11:(void)0;
}
}
if (likely(varonce!=NULL)) {
var13 = varonce;
} else {
var14 = "init";
var15 = core__abstract_text___CString___to_s_full(var14, 4l, 4l);
var13 = var15;
varonce = var13;
}
{
{ /* Inline model#MClassType#mclass (var_maintype) on <var_maintype:nullable MClassType(MClassType)> */
var18 = var_maintype->attrs[COLOR_nitc__model__MClassType___mclass].val; /* _mclass on <var_maintype:nullable MClassType(MClassType)> */
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
var_initprop = var19;
if (var_initprop == NULL) {
var20 = 0; /* is null */
} else {
var20 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_initprop,((val*)NULL)) on <var_initprop:nullable MMethod> */
var_other23 = ((val*)NULL);
{
var24 = ((short int(*)(val* self, val* p0))(var_initprop->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_initprop, var_other23); /* == on <var_initprop:nullable MMethod(MMethod)>*/
}
var25 = !var24;
var21 = var25;
goto RET_LABEL22;
RET_LABEL22:(void)0;
}
var20 = var21;
}
if (var20){
{
nitc___nitc__RapidTypeAnalysis___add_send(self, var_maintype, var_initprop); /* Direct call rapid_type_analysis#RapidTypeAnalysis#add_send on <self:RapidTypeAnalysis>*/
}
} else {
}
{
{ /* Inline rapid_type_analysis#RapidTypeAnalysis#mainmodule (self) on <self:RapidTypeAnalysis> */
var29 = self->attrs[COLOR_nitc__rapid_type_analysis__RapidTypeAnalysis___mainmodule].val; /* _mainmodule on <self:RapidTypeAnalysis> */
if (unlikely(var29 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mainmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__rapid_type_analysis, 56);
fatal_exit(1);
}
var27 = var29;
RET_LABEL28:(void)0;
}
}
if (likely(varonce30!=NULL)) {
var31 = varonce30;
} else {
var32 = "run";
var33 = core__abstract_text___CString___to_s_full(var32, 3l, 3l);
var31 = var33;
varonce30 = var31;
}
{
{ /* Inline model#MClassType#mclass (var_maintype) on <var_maintype:nullable MClassType(MClassType)> */
var36 = var_maintype->attrs[COLOR_nitc__model__MClassType___mclass].val; /* _mclass on <var_maintype:nullable MClassType(MClassType)> */
if (unlikely(var36 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1197);
fatal_exit(1);
}
var34 = var36;
RET_LABEL35:(void)0;
}
}
{
var37 = nitc__model___MModule___try_get_primitive_method(var27, var31, var34);
}
if (var37!=NULL) {
var26 = var37;
} else {
{
{ /* Inline rapid_type_analysis#RapidTypeAnalysis#mainmodule (self) on <self:RapidTypeAnalysis> */
var40 = self->attrs[COLOR_nitc__rapid_type_analysis__RapidTypeAnalysis___mainmodule].val; /* _mainmodule on <self:RapidTypeAnalysis> */
if (unlikely(var40 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mainmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__rapid_type_analysis, 56);
fatal_exit(1);
}
var38 = var40;
RET_LABEL39:(void)0;
}
}
if (likely(varonce41!=NULL)) {
var42 = varonce41;
} else {
var43 = "main";
var44 = core__abstract_text___CString___to_s_full(var43, 4l, 4l);
var42 = var44;
varonce41 = var42;
}
{
{ /* Inline model#MClassType#mclass (var_maintype) on <var_maintype:nullable MClassType(MClassType)> */
var47 = var_maintype->attrs[COLOR_nitc__model__MClassType___mclass].val; /* _mclass on <var_maintype:nullable MClassType(MClassType)> */
if (unlikely(var47 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1197);
fatal_exit(1);
}
var45 = var47;
RET_LABEL46:(void)0;
}
}
{
var48 = nitc__model___MModule___try_get_primitive_method(var38, var42, var45);
}
var26 = var48;
}
var_mainprop = var26;
if (var_mainprop == NULL) {
var49 = 0; /* is null */
} else {
var49 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_mainprop,((val*)NULL)) on <var_mainprop:nullable MMethod> */
var_other23 = ((val*)NULL);
{
var52 = ((short int(*)(val* self, val* p0))(var_mainprop->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_mainprop, var_other23); /* == on <var_mainprop:nullable MMethod(MMethod)>*/
}
var53 = !var52;
var50 = var53;
goto RET_LABEL51;
RET_LABEL51:(void)0;
}
var49 = var50;
}
if (var49){
{
nitc___nitc__RapidTypeAnalysis___add_send(self, var_maintype, var_mainprop); /* Direct call rapid_type_analysis#RapidTypeAnalysis#add_send on <self:RapidTypeAnalysis>*/
}
} else {
}
{
{ /* Inline rapid_type_analysis#RapidTypeAnalysis#mainmodule (self) on <self:RapidTypeAnalysis> */
var56 = self->attrs[COLOR_nitc__rapid_type_analysis__RapidTypeAnalysis___mainmodule].val; /* _mainmodule on <self:RapidTypeAnalysis> */
if (unlikely(var56 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mainmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__rapid_type_analysis, 56);
fatal_exit(1);
}
var54 = var56;
RET_LABEL55:(void)0;
}
}
{
var57 = nitc__model___MModule___finalizable_type(var54);
}
var_finalizable_type = var57;
if (var_finalizable_type == NULL) {
var58 = 0; /* is null */
} else {
var58 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_finalizable_type,((val*)NULL)) on <var_finalizable_type:nullable MClassType> */
var_other23 = ((val*)NULL);
{
var61 = ((short int(*)(val* self, val* p0))(var_finalizable_type->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_finalizable_type, var_other23); /* == on <var_finalizable_type:nullable MClassType(MClassType)>*/
}
var62 = !var61;
var59 = var62;
goto RET_LABEL60;
RET_LABEL60:(void)0;
}
var58 = var59;
}
if (var58){
{
{ /* Inline rapid_type_analysis#RapidTypeAnalysis#mainmodule (self) on <self:RapidTypeAnalysis> */
var65 = self->attrs[COLOR_nitc__rapid_type_analysis__RapidTypeAnalysis___mainmodule].val; /* _mainmodule on <self:RapidTypeAnalysis> */
if (unlikely(var65 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mainmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__rapid_type_analysis, 56);
fatal_exit(1);
}
var63 = var65;
RET_LABEL64:(void)0;
}
}
if (likely(varonce66!=NULL)) {
var67 = varonce66;
} else {
var68 = "finalize";
var69 = core__abstract_text___CString___to_s_full(var68, 8l, 8l);
var67 = var69;
varonce66 = var67;
}
{
{ /* Inline model#MClassType#mclass (var_finalizable_type) on <var_finalizable_type:nullable MClassType(MClassType)> */
var72 = var_finalizable_type->attrs[COLOR_nitc__model__MClassType___mclass].val; /* _mclass on <var_finalizable_type:nullable MClassType(MClassType)> */
if (unlikely(var72 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1197);
fatal_exit(1);
}
var70 = var72;
RET_LABEL71:(void)0;
}
}
{
var73 = nitc__model___MModule___try_get_primitive_method(var63, var67, var70);
}
var_finalize_meth = var73;
if (var_finalize_meth == NULL) {
var74 = 0; /* is null */
} else {
var74 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_finalize_meth,((val*)NULL)) on <var_finalize_meth:nullable MMethod> */
var_other23 = ((val*)NULL);
{
var77 = ((short int(*)(val* self, val* p0))(var_finalize_meth->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_finalize_meth, var_other23); /* == on <var_finalize_meth:nullable MMethod(MMethod)>*/
}
var78 = !var77;
var75 = var78;
goto RET_LABEL76;
RET_LABEL76:(void)0;
}
var74 = var75;
}
if (var74){
{
nitc___nitc__RapidTypeAnalysis___add_send(self, var_finalizable_type, var_finalize_meth); /* Direct call rapid_type_analysis#RapidTypeAnalysis#add_send on <self:RapidTypeAnalysis>*/
}
} else {
}
} else {
}
if (likely(varonce79!=NULL)) {
var80 = varonce79;
} else {
var81 = "Bool";
var82 = core__abstract_text___CString___to_s_full(var81, 4l, 4l);
var80 = var82;
varonce79 = var80;
}
{
nitc___nitc__RapidTypeAnalysis___force_alive(self, var80); /* Direct call rapid_type_analysis#RapidTypeAnalysis#force_alive on <self:RapidTypeAnalysis>*/
}
if (likely(varonce83!=NULL)) {
var84 = varonce83;
} else {
var85 = "Float";
var86 = core__abstract_text___CString___to_s_full(var85, 5l, 5l);
var84 = var86;
varonce83 = var84;
}
{
nitc___nitc__RapidTypeAnalysis___force_alive(self, var84); /* Direct call rapid_type_analysis#RapidTypeAnalysis#force_alive on <self:RapidTypeAnalysis>*/
}
if (likely(varonce87!=NULL)) {
var88 = varonce87;
} else {
var89 = "Char";
var90 = core__abstract_text___CString___to_s_full(var89, 4l, 4l);
var88 = var90;
varonce87 = var88;
}
{
nitc___nitc__RapidTypeAnalysis___force_alive(self, var88); /* Direct call rapid_type_analysis#RapidTypeAnalysis#force_alive on <self:RapidTypeAnalysis>*/
}
if (likely(varonce91!=NULL)) {
var92 = varonce91;
} else {
var93 = "Pointer";
var94 = core__abstract_text___CString___to_s_full(var93, 7l, 7l);
var92 = var94;
varonce91 = var92;
}
{
nitc___nitc__RapidTypeAnalysis___force_alive(self, var92); /* Direct call rapid_type_analysis#RapidTypeAnalysis#force_alive on <self:RapidTypeAnalysis>*/
}
if (likely(varonce95!=NULL)) {
var96 = varonce95;
} else {
var97 = "Byte";
var98 = core__abstract_text___CString___to_s_full(var97, 4l, 4l);
var96 = var98;
varonce95 = var96;
}
{
nitc___nitc__RapidTypeAnalysis___force_alive(self, var96); /* Direct call rapid_type_analysis#RapidTypeAnalysis#force_alive on <self:RapidTypeAnalysis>*/
}
if (likely(varonce99!=NULL)) {
var100 = varonce99;
} else {
var101 = "Int";
var102 = core__abstract_text___CString___to_s_full(var101, 3l, 3l);
var100 = var102;
varonce99 = var100;
}
{
nitc___nitc__RapidTypeAnalysis___force_alive(self, var100); /* Direct call rapid_type_analysis#RapidTypeAnalysis#force_alive on <self:RapidTypeAnalysis>*/
}
if (likely(varonce103!=NULL)) {
var104 = varonce103;
} else {
var105 = "Int8";
var106 = core__abstract_text___CString___to_s_full(var105, 4l, 4l);
var104 = var106;
varonce103 = var104;
}
{
nitc___nitc__RapidTypeAnalysis___force_alive(self, var104); /* Direct call rapid_type_analysis#RapidTypeAnalysis#force_alive on <self:RapidTypeAnalysis>*/
}
if (likely(varonce107!=NULL)) {
var108 = varonce107;
} else {
var109 = "Int16";
var110 = core__abstract_text___CString___to_s_full(var109, 5l, 5l);
var108 = var110;
varonce107 = var108;
}
{
nitc___nitc__RapidTypeAnalysis___force_alive(self, var108); /* Direct call rapid_type_analysis#RapidTypeAnalysis#force_alive on <self:RapidTypeAnalysis>*/
}
if (likely(varonce111!=NULL)) {
var112 = varonce111;
} else {
var113 = "UInt16";
var114 = core__abstract_text___CString___to_s_full(var113, 6l, 6l);
var112 = var114;
varonce111 = var112;
}
{
nitc___nitc__RapidTypeAnalysis___force_alive(self, var112); /* Direct call rapid_type_analysis#RapidTypeAnalysis#force_alive on <self:RapidTypeAnalysis>*/
}
if (likely(varonce115!=NULL)) {
var116 = varonce115;
} else {
var117 = "Int32";
var118 = core__abstract_text___CString___to_s_full(var117, 5l, 5l);
var116 = var118;
varonce115 = var116;
}
{
nitc___nitc__RapidTypeAnalysis___force_alive(self, var116); /* Direct call rapid_type_analysis#RapidTypeAnalysis#force_alive on <self:RapidTypeAnalysis>*/
}
if (likely(varonce119!=NULL)) {
var120 = varonce119;
} else {
var121 = "UInt32";
var122 = core__abstract_text___CString___to_s_full(var121, 6l, 6l);
var120 = var122;
varonce119 = var120;
}
{
nitc___nitc__RapidTypeAnalysis___force_alive(self, var120); /* Direct call rapid_type_analysis#RapidTypeAnalysis#force_alive on <self:RapidTypeAnalysis>*/
}
for(;;) {
{
{ /* Inline rapid_type_analysis#RapidTypeAnalysis#todo (self) on <self:RapidTypeAnalysis> */
var125 = self->attrs[COLOR_nitc__rapid_type_analysis__RapidTypeAnalysis___todo].val; /* _todo on <self:RapidTypeAnalysis> */
if (unlikely(var125 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _todo");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__rapid_type_analysis, 183);
fatal_exit(1);
}
var123 = var125;
RET_LABEL124:(void)0;
}
}
{
var126 = core___core__List___core__abstract_collection__Collection__is_empty(var123);
}
var127 = !var126;
if (var127){
{
{ /* Inline rapid_type_analysis#RapidTypeAnalysis#todo (self) on <self:RapidTypeAnalysis> */
var130 = self->attrs[COLOR_nitc__rapid_type_analysis__RapidTypeAnalysis___todo].val; /* _todo on <self:RapidTypeAnalysis> */
if (unlikely(var130 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _todo");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__rapid_type_analysis, 183);
fatal_exit(1);
}
var128 = var130;
RET_LABEL129:(void)0;
}
}
{
var131 = core___core__List___core__abstract_collection__Sequence__shift(var128);
}
var_mmethoddef = var131;
{
{ /* Inline model#MPropDef#mproperty (var_mmethoddef) on <var_mmethoddef:MMethodDef> */
var134 = var_mmethoddef->attrs[COLOR_nitc__model__MPropDef___mproperty].val; /* _mproperty on <var_mmethoddef:MMethodDef> */
if (unlikely(var134 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2357);
fatal_exit(1);
}
var132 = var134;
RET_LABEL133:(void)0;
}
}
var_mmeth = var132;
{
{ /* Inline model#MMethodDef#msignature (var_mmethoddef) on <var_mmethoddef:MMethodDef> */
var137 = var_mmethoddef->attrs[COLOR_nitc__model__MMethodDef___msignature].val; /* _msignature on <var_mmethoddef:MMethodDef> */
var135 = var137;
RET_LABEL136:(void)0;
}
}
var_msignature = var135;
if (var_msignature == NULL) {
var138 = 1; /* is null */
} else {
var138 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_msignature,((val*)NULL)) on <var_msignature:nullable MSignature> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_msignature,var_other) on <var_msignature:nullable MSignature(MSignature)> */
var143 = var_msignature == var_other;
var141 = var143;
goto RET_LABEL142;
RET_LABEL142:(void)0;
}
}
var139 = var141;
goto RET_LABEL140;
RET_LABEL140:(void)0;
}
var138 = var139;
}
if (var138){
goto BREAK_label;
} else {
}
var144 = NEW_nitc__RapidTypeVisitor(&type_nitc__RapidTypeVisitor);
{
{ /* Inline model#MPropDef#mclassdef (var_mmethoddef) on <var_mmethoddef:MMethodDef> */
var147 = var_mmethoddef->attrs[COLOR_nitc__model__MPropDef___mclassdef].val; /* _mclassdef on <var_mmethoddef:MMethodDef> */
if (unlikely(var147 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2354);
fatal_exit(1);
}
var145 = var147;
RET_LABEL146:(void)0;
}
}
{
{ /* Inline model#MClassDef#bound_mtype (var145) on <var145:MClassDef> */
var150 = var145->attrs[COLOR_nitc__model__MClassDef___bound_mtype].val; /* _bound_mtype on <var145:MClassDef> */
if (unlikely(var150 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _bound_mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 594);
fatal_exit(1);
}
var148 = var150;
RET_LABEL149:(void)0;
}
}
{
((void(*)(val* self, val* p0))(var144->class->vft[COLOR_nitc__rapid_type_analysis__RapidTypeVisitor__analysis_61d]))(var144, self); /* analysis= on <var144:RapidTypeVisitor>*/
}
{
((void(*)(val* self, val* p0))(var144->class->vft[COLOR_nitc__rapid_type_analysis__RapidTypeVisitor__receiver_61d]))(var144, var148); /* receiver= on <var144:RapidTypeVisitor>*/
}
{
((void(*)(val* self, val* p0))(var144->class->vft[COLOR_nitc__rapid_type_analysis__RapidTypeVisitor__mpropdef_61d]))(var144, var_mmethoddef); /* mpropdef= on <var144:RapidTypeVisitor>*/
}
{
((void(*)(val* self))(var144->class->vft[COLOR_core__kernel__Object__init]))(var144); /* init on <var144:RapidTypeVisitor>*/
}
var_v = var144;
{
{ /* Inline model#MSignature#vararg_rank (var_msignature) on <var_msignature:nullable MSignature(MSignature)> */
var153 = var_msignature->attrs[COLOR_nitc__model__MSignature___vararg_rank].l; /* _vararg_rank on <var_msignature:nullable MSignature(MSignature)> */
var151 = var153;
RET_LABEL152:(void)0;
}
}
var_vararg_rank = var151;
{
{ /* Inline kernel#Int#unary - (1l) on <1l:Int> */
var156 = -1l;
var154 = var156;
goto RET_LABEL155;
RET_LABEL155:(void)0;
}
}
{
{ /* Inline kernel#Int#> (var_vararg_rank,var154) on <var_vararg_rank:Int> */
/* Covariant cast for argument 0 (i) <var154:Int> isa OTHER */
/* <var154:Int> isa OTHER */
var159 = 1; /* easy <var154:Int> isa OTHER*/
if (unlikely(!var159)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 727);
fatal_exit(1);
}
var160 = var_vararg_rank > var154;
var157 = var160;
goto RET_LABEL158;
RET_LABEL158:(void)0;
}
}
if (var157){
{
{ /* Inline rapid_type_analysis#RapidTypeAnalysis#modelbuilder (self) on <self:RapidTypeAnalysis> */
var163 = self->attrs[COLOR_nitc__rapid_type_analysis__RapidTypeAnalysis___modelbuilder].val; /* _modelbuilder on <self:RapidTypeAnalysis> */
if (unlikely(var163 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__rapid_type_analysis, 53);
fatal_exit(1);
}
var161 = var163;
RET_LABEL162:(void)0;
}
}
{
var164 = nitc__modelize_property___ModelBuilder___mpropdef2node(var161, var_mmethoddef);
}
var_node = var164;
{
{ /* Inline model#MSignature#mparameters (var_msignature) on <var_msignature:nullable MSignature(MSignature)> */
var167 = var_msignature->attrs[COLOR_nitc__model__MSignature___mparameters].val; /* _mparameters on <var_msignature:nullable MSignature(MSignature)> */
if (unlikely(var167 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mparameters");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1879);
fatal_exit(1);
}
var165 = var167;
RET_LABEL166:(void)0;
}
}
{
var168 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var165, var_vararg_rank);
}
{
{ /* Inline model#MParameter#mtype (var168) on <var168:nullable Object(MParameter)> */
var171 = var168->attrs[COLOR_nitc__model__MParameter___mtype].val; /* _mtype on <var168:nullable Object(MParameter)> */
if (unlikely(var171 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1996);
fatal_exit(1);
}
var169 = var171;
RET_LABEL170:(void)0;
}
}
var_elttype = var169;
{
{ /* Inline rapid_type_analysis#RapidTypeAnalysis#mainmodule (self) on <self:RapidTypeAnalysis> */
var174 = self->attrs[COLOR_nitc__rapid_type_analysis__RapidTypeAnalysis___mainmodule].val; /* _mainmodule on <self:RapidTypeAnalysis> */
if (unlikely(var174 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mainmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__rapid_type_analysis, 56);
fatal_exit(1);
}
var172 = var174;
RET_LABEL173:(void)0;
}
}
{
var175 = nitc__model___MModule___array_type(var172, var_elttype);
}
var_vararg = var175;
{
nitc___nitc__RapidTypeVisitor___add_type(var_v, var_vararg); /* Direct call rapid_type_analysis#RapidTypeVisitor#add_type on <var_v:RapidTypeVisitor>*/
}
{
{ /* Inline rapid_type_analysis#RapidTypeAnalysis#mainmodule (self) on <self:RapidTypeAnalysis> */
var178 = self->attrs[COLOR_nitc__rapid_type_analysis__RapidTypeAnalysis___mainmodule].val; /* _mainmodule on <self:RapidTypeAnalysis> */
if (unlikely(var178 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mainmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__rapid_type_analysis, 56);
fatal_exit(1);
}
var176 = var178;
RET_LABEL177:(void)0;
}
}
{
var179 = nitc__model___MModule___native_array_type(var176, var_elttype);
}
var_native = var179;
{
nitc___nitc__RapidTypeVisitor___add_type(var_v, var_native); /* Direct call rapid_type_analysis#RapidTypeVisitor#add_type on <var_v:RapidTypeVisitor>*/
}
{
{ /* Inline rapid_type_analysis#RapidTypeAnalysis#modelbuilder (self) on <self:RapidTypeAnalysis> */
var182 = self->attrs[COLOR_nitc__rapid_type_analysis__RapidTypeAnalysis___modelbuilder].val; /* _modelbuilder on <self:RapidTypeAnalysis> */
if (unlikely(var182 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__rapid_type_analysis, 53);
fatal_exit(1);
}
var180 = var182;
RET_LABEL181:(void)0;
}
}
if (likely(varonce183!=NULL)) {
var184 = varonce183;
} else {
var185 = "with_native";
var186 = core__abstract_text___CString___to_s_full(var185, 11l, 11l);
var184 = var186;
varonce183 = var184;
}
{
{ /* Inline model#MClassType#mclass (var_vararg) on <var_vararg:MClassType> */
var189 = var_vararg->attrs[COLOR_nitc__model__MClassType___mclass].val; /* _mclass on <var_vararg:MClassType> */
if (unlikely(var189 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1197);
fatal_exit(1);
}
var187 = var189;
RET_LABEL188:(void)0;
}
}
{
{ /* Inline rapid_type_analysis#RapidTypeAnalysis#mainmodule (self) on <self:RapidTypeAnalysis> */
var192 = self->attrs[COLOR_nitc__rapid_type_analysis__RapidTypeAnalysis___mainmodule].val; /* _mainmodule on <self:RapidTypeAnalysis> */
if (unlikely(var192 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mainmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__rapid_type_analysis, 56);
fatal_exit(1);
}
var190 = var192;
RET_LABEL191:(void)0;
}
}
{
var193 = nitc___nitc__ModelBuilder___force_get_primitive_method(var180, var_node, var184, var187, var190);
}
{
nitc___nitc__RapidTypeVisitor___add_monomorphic_send(var_v, var_vararg, var193); /* Direct call rapid_type_analysis#RapidTypeVisitor#add_monomorphic_send on <var_v:RapidTypeVisitor>*/
}
} else {
}
var_sig = var_msignature;
{
{ /* Inline model#MProperty#intro (var_mmeth) on <var_mmeth:MMethod> */
var196 = var_mmeth->attrs[COLOR_nitc__model__MProperty___intro].val; /* _intro on <var_mmeth:MMethod> */
if (unlikely(var196 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2097);
fatal_exit(1);
}
var194 = var196;
RET_LABEL195:(void)0;
}
}
{
{ /* Inline model#MMethodDef#msignature (var194) on <var194:MPropDef(MMethodDef)> */
var199 = var194->attrs[COLOR_nitc__model__MMethodDef___msignature].val; /* _msignature on <var194:MPropDef(MMethodDef)> */
var197 = var199;
RET_LABEL198:(void)0;
}
}
if (unlikely(var197 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__rapid_type_analysis, 250);
fatal_exit(1);
}
var_osig = var197;
var_i = 0l;
{
var200 = nitc___nitc__MSignature___arity(var_sig);
}
var_ = var200;
for(;;) {
{
{ /* Inline kernel#Int#< (var_i,var_) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var_:Int> isa OTHER */
/* <var_:Int> isa OTHER */
var203 = 1; /* easy <var_:Int> isa OTHER*/
if (unlikely(!var203)) {
var_class_name206 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name206);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var207 = var_i < var_;
var201 = var207;
goto RET_LABEL202;
RET_LABEL202:(void)0;
}
}
if (var201){
} else {
goto BREAK_label208;
}
{
{ /* Inline model#MSignature#mparameters (var_osig) on <var_osig:MSignature> */
var211 = var_osig->attrs[COLOR_nitc__model__MSignature___mparameters].val; /* _mparameters on <var_osig:MSignature> */
if (unlikely(var211 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mparameters");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1879);
fatal_exit(1);
}
var209 = var211;
RET_LABEL210:(void)0;
}
}
{
var212 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var209, var_i);
}
{
{ /* Inline model#MParameter#mtype (var212) on <var212:nullable Object(MParameter)> */
var215 = var212->attrs[COLOR_nitc__model__MParameter___mtype].val; /* _mtype on <var212:nullable Object(MParameter)> */
if (unlikely(var215 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1996);
fatal_exit(1);
}
var213 = var215;
RET_LABEL214:(void)0;
}
}
var_origtype = var213;
{
var216 = ((short int(*)(val* self))(var_origtype->class->vft[COLOR_nitc__model__MType__need_anchor]))(var_origtype); /* need_anchor on <var_origtype:MType>*/
}
var217 = !var216;
if (var217){
goto BREAK_label218;
} else {
}
{
{ /* Inline model#MSignature#mparameters (var_sig) on <var_sig:MSignature> */
var221 = var_sig->attrs[COLOR_nitc__model__MSignature___mparameters].val; /* _mparameters on <var_sig:MSignature> */
if (unlikely(var221 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mparameters");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1879);
fatal_exit(1);
}
var219 = var221;
RET_LABEL220:(void)0;
}
}
{
var222 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var219, var_i);
}
{
{ /* Inline model#MParameter#mtype (var222) on <var222:nullable Object(MParameter)> */
var225 = var222->attrs[COLOR_nitc__model__MParameter___mtype].val; /* _mtype on <var222:nullable Object(MParameter)> */
if (unlikely(var225 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1996);
fatal_exit(1);
}
var223 = var225;
RET_LABEL224:(void)0;
}
}
var_paramtype = var223;
{
nitc___nitc__RapidTypeAnalysis___add_cast(self, var_paramtype); /* Direct call rapid_type_analysis#RapidTypeAnalysis#add_cast on <self:RapidTypeAnalysis>*/
}
BREAK_label218: (void)0;
{
var226 = core___core__Int___Discrete__successor(var_i, 1l);
}
var_i = var226;
}
BREAK_label208: (void)0;
{
{ /* Inline model#MMethodDef#is_abstract (var_mmethoddef) on <var_mmethoddef:MMethodDef> */
var229 = var_mmethoddef->attrs[COLOR_nitc__model__MMethodDef___is_abstract].s; /* _is_abstract on <var_mmethoddef:MMethodDef> */
var227 = var229;
RET_LABEL228:(void)0;
}
}
if (var227){
goto BREAK_label;
} else {
}
{
{ /* Inline rapid_type_analysis#RapidTypeAnalysis#modelbuilder (self) on <self:RapidTypeAnalysis> */
var232 = self->attrs[COLOR_nitc__rapid_type_analysis__RapidTypeAnalysis___modelbuilder].val; /* _modelbuilder on <self:RapidTypeAnalysis> */
if (unlikely(var232 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__rapid_type_analysis, 53);
fatal_exit(1);
}
var230 = var232;
RET_LABEL231:(void)0;
}
}
{
var233 = nitc__modelize_property___ModelBuilder___mpropdef2node(var230, var_mmethoddef);
}
var_npropdef = var233;
/* <var_npropdef:nullable ANode> isa AClassdef */
cltype235 = type_nitc__AClassdef.color;
idtype236 = type_nitc__AClassdef.id;
if(var_npropdef == NULL) {
var234 = 0;
} else {
if(cltype235 >= var_npropdef->type->table_size) {
var234 = 0;
} else {
var234 = var_npropdef->type->type_table[cltype235] == idtype236;
}
}
if (var234){
{
{ /* Inline model#MPropDef#mproperty (var_mmethoddef) on <var_mmethoddef:MMethodDef> */
var239 = var_mmethoddef->attrs[COLOR_nitc__model__MPropDef___mproperty].val; /* _mproperty on <var_mmethoddef:MMethodDef> */
if (unlikely(var239 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2357);
fatal_exit(1);
}
var237 = var239;
RET_LABEL238:(void)0;
}
}
{
{ /* Inline model#MMethod#is_root_init (var237) on <var237:MProperty(MMethod)> */
var242 = var237->attrs[COLOR_nitc__model__MMethod___is_root_init].s; /* _is_root_init on <var237:MProperty(MMethod)> */
var240 = var242;
RET_LABEL241:(void)0;
}
}
if (var240){
{
var243 = nitc___nitc__MPropDef___is_intro(var_mmethoddef);
}
var244 = !var243;
if (var244){
{
{ /* Inline rapid_type_analysis#RapidTypeVisitor#receiver (var_v) on <var_v:RapidTypeVisitor> */
var247 = var_v->attrs[COLOR_nitc__rapid_type_analysis__RapidTypeVisitor___receiver].val; /* _receiver on <var_v:RapidTypeVisitor> */
if (unlikely(var247 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _receiver");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__rapid_type_analysis, 466);
fatal_exit(1);
}
var245 = var247;
RET_LABEL246:(void)0;
}
}
{
nitc___nitc__RapidTypeAnalysis___add_super_send(self, var245, var_mmethoddef); /* Direct call rapid_type_analysis#RapidTypeAnalysis#add_super_send on <self:RapidTypeAnalysis>*/
}
} else {
}
} else {
if (unlikely(varonce248==NULL)) {
var249 = NEW_core__NativeArray(2l, &type_core__NativeArray__core__String);
if (likely(varonce250!=NULL)) {
var251 = varonce250;
} else {
var252 = "cannot RTA ";
var253 = core__abstract_text___CString___to_s_full(var252, 11l, 11l);
var251 = var253;
varonce250 = var251;
}
((struct instance_core__NativeArray*)var249)->values[0]=var251;
} else {
var249 = varonce248;
varonce248 = NULL;
}
{
var254 = ((val*(*)(val* self))(var_mmethoddef->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_mmethoddef); /* to_s on <var_mmethoddef:MMethodDef>*/
}
((struct instance_core__NativeArray*)var249)->values[1]=var254;
{
var255 = ((val*(*)(val* self))(var249->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var249); /* native_to_s on <var249:NativeArray[String]>*/
}
varonce248 = var249;
{
nitc___nitc__ANode___debug(var_npropdef, var255); /* Direct call parser_nodes#ANode#debug on <var_npropdef:nullable ANode(AClassdef)>*/
}
PRINT_ERROR("Runtime error: %s", "Aborted");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__rapid_type_analysis, 269);
fatal_exit(1);
}
goto BREAK_label;
} else {
{
{ /* Inline model#MMethodDef#constant_value (var_mmethoddef) on <var_mmethoddef:MMethodDef> */
var258 = var_mmethoddef->attrs[COLOR_nitc__model__MMethodDef___constant_value].val; /* _constant_value on <var_mmethoddef:MMethodDef> */
var256 = var258;
RET_LABEL257:(void)0;
}
}
if (var256 == NULL) {
var259 = 0; /* is null */
} else {
var259 = 1; /* arg is null and recv is not */
}
if (0) {
var260 = ((short int(*)(val* self, val* p0))((((long)var256&3)?class_info[((long)var256&3)]:var256->class)->vft[COLOR_core__kernel__Object___33d_61d]))(var256, ((val*)NULL)); /* != on <var256:nullable Object>*/
var259 = var260;
}
if (var259){
{
{ /* Inline model#MSignature#return_mtype (var_msignature) on <var_msignature:nullable MSignature(MSignature)> */
var263 = var_msignature->attrs[COLOR_nitc__model__MSignature___return_mtype].val; /* _return_mtype on <var_msignature:nullable MSignature(MSignature)> */
var261 = var263;
RET_LABEL262:(void)0;
}
}
/* <var261:nullable MType> isa MClassType */
cltype265 = type_nitc__MClassType.color;
idtype266 = type_nitc__MClassType.id;
if(var261 == NULL) {
var264 = 0;
} else {
if(cltype265 >= var261->type->table_size) {
var264 = 0;
} else {
var264 = var261->type->type_table[cltype265] == idtype266;
}
}
if (unlikely(!var264)) {
var_class_name267 = var261 == NULL ? "null" : var261->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "MClassType", var_class_name267);
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__rapid_type_analysis, 274);
fatal_exit(1);
}
{
nitc___nitc__RapidTypeVisitor___add_type(var_v, var261); /* Direct call rapid_type_analysis#RapidTypeVisitor#add_type on <var_v:RapidTypeVisitor>*/
}
goto BREAK_label;
} else {
if (var_npropdef == NULL) {
var268 = 1; /* is null */
} else {
var268 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_npropdef,((val*)NULL)) on <var_npropdef:nullable ANode> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_npropdef,var_other) on <var_npropdef:nullable ANode(ANode)> */
var273 = var_npropdef == var_other;
var271 = var273;
goto RET_LABEL272;
RET_LABEL272:(void)0;
}
}
var269 = var271;
goto RET_LABEL270;
RET_LABEL270:(void)0;
}
var268 = var269;
}
if (var268){
PRINT_ERROR("Runtime error: %s", "Aborted");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__rapid_type_analysis, 277);
fatal_exit(1);
} else {
}
}
}
/* <var_npropdef:nullable ANode(ANode)> isa AMethPropdef */
cltype275 = type_nitc__AMethPropdef.color;
idtype276 = type_nitc__AMethPropdef.id;
if(cltype275 >= var_npropdef->type->table_size) {
var274 = 0;
} else {
var274 = var_npropdef->type->type_table[cltype275] == idtype276;
}
if (var274){
{
{ /* Inline auto_super_init#AMethPropdef#auto_super_inits (var_npropdef) on <var_npropdef:nullable ANode(AMethPropdef)> */
var279 = var_npropdef->attrs[COLOR_nitc__auto_super_init__AMethPropdef___auto_super_inits].val; /* _auto_super_inits on <var_npropdef:nullable ANode(AMethPropdef)> */
var277 = var279;
RET_LABEL278:(void)0;
}
}
var_auto_super_inits = var277;
if (var_auto_super_inits == NULL) {
var280 = 0; /* is null */
} else {
var280 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_auto_super_inits,((val*)NULL)) on <var_auto_super_inits:nullable Array[CallSite]> */
var_other23 = ((val*)NULL);
{
var283 = ((short int(*)(val* self, val* p0))(var_auto_super_inits->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_auto_super_inits, var_other23); /* == on <var_auto_super_inits:nullable Array[CallSite](Array[CallSite])>*/
}
var284 = !var283;
var281 = var284;
goto RET_LABEL282;
RET_LABEL282:(void)0;
}
var280 = var281;
}
if (var280){
var_285 = var_auto_super_inits;
{
var286 = core___core__AbstractArrayRead___core__abstract_collection__Collection__iterator(var_285);
}
var_287 = var286;
for(;;) {
{
var288 = ((short int(*)(val* self))((((long)var_287&3)?class_info[((long)var_287&3)]:var_287->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_287); /* is_ok on <var_287:IndexedIterator[CallSite]>*/
}
if (var288){
} else {
goto BREAK_label289;
}
{
var290 = ((val*(*)(val* self))((((long)var_287&3)?class_info[((long)var_287&3)]:var_287->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_287); /* item on <var_287:IndexedIterator[CallSite]>*/
}
var_auto_super_init = var290;
{
nitc___nitc__RapidTypeVisitor___add_callsite(var_v, var_auto_super_init); /* Direct call rapid_type_analysis#RapidTypeVisitor#add_callsite on <var_v:RapidTypeVisitor>*/
}
{
((void(*)(val* self))((((long)var_287&3)?class_info[((long)var_287&3)]:var_287->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_287); /* next on <var_287:IndexedIterator[CallSite]>*/
}
}
BREAK_label289: (void)0;
{
((void(*)(val* self))((((long)var_287&3)?class_info[((long)var_287&3)]:var_287->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_287); /* finish on <var_287:IndexedIterator[CallSite]>*/
}
} else {
}
{
{ /* Inline auto_super_init#AMethPropdef#auto_super_call (var_npropdef) on <var_npropdef:nullable ANode(AMethPropdef)> */
var293 = var_npropdef->attrs[COLOR_nitc__auto_super_init__AMethPropdef___auto_super_call].s; /* _auto_super_call on <var_npropdef:nullable ANode(AMethPropdef)> */
var291 = var293;
RET_LABEL292:(void)0;
}
}
if (var291){
{
{ /* Inline rapid_type_analysis#RapidTypeVisitor#receiver (var_v) on <var_v:RapidTypeVisitor> */
var296 = var_v->attrs[COLOR_nitc__rapid_type_analysis__RapidTypeVisitor___receiver].val; /* _receiver on <var_v:RapidTypeVisitor> */
if (unlikely(var296 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _receiver");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__rapid_type_analysis, 466);
fatal_exit(1);
}
var294 = var296;
RET_LABEL295:(void)0;
}
}
{
nitc___nitc__RapidTypeAnalysis___add_super_send(self, var294, var_mmethoddef); /* Direct call rapid_type_analysis#RapidTypeAnalysis#add_super_send on <self:RapidTypeAnalysis>*/
}
} else {
}
} else {
}
{
{ /* Inline model#MMethodDef#is_intern (var_mmethoddef) on <var_mmethoddef:MMethodDef> */
var300 = var_mmethoddef->attrs[COLOR_nitc__model__MMethodDef___is_intern].s; /* _is_intern on <var_mmethoddef:MMethodDef> */
var298 = var300;
RET_LABEL299:(void)0;
}
}
var_301 = var298;
if (var298){
var297 = var_301;
} else {
{
{ /* Inline model#MMethodDef#is_extern (var_mmethoddef) on <var_mmethoddef:MMethodDef> */
var304 = var_mmethoddef->attrs[COLOR_nitc__model__MMethodDef___is_extern].s; /* _is_extern on <var_mmethoddef:MMethodDef> */
var302 = var304;
RET_LABEL303:(void)0;
}
}
var297 = var302;
}
if (var297){
{
{ /* Inline model#MSignature#return_mtype (var_msignature) on <var_msignature:nullable MSignature(MSignature)> */
var307 = var_msignature->attrs[COLOR_nitc__model__MSignature___return_mtype].val; /* _return_mtype on <var_msignature:nullable MSignature(MSignature)> */
var305 = var307;
RET_LABEL306:(void)0;
}
}
var_ret = var305;
if (var_ret == NULL) {
var311 = 0; /* is null */
} else {
var311 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_ret,((val*)NULL)) on <var_ret:nullable MType> */
var_other23 = ((val*)NULL);
{
var314 = ((short int(*)(val* self, val* p0))(var_ret->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_ret, var_other23); /* == on <var_ret:nullable MType(MType)>*/
}
var315 = !var314;
var312 = var315;
goto RET_LABEL313;
RET_LABEL313:(void)0;
}
var311 = var312;
}
var_316 = var311;
if (var311){
/* <var_ret:nullable MType(MType)> isa MClassType */
cltype318 = type_nitc__MClassType.color;
idtype319 = type_nitc__MClassType.id;
if(cltype318 >= var_ret->type->table_size) {
var317 = 0;
} else {
var317 = var_ret->type->type_table[cltype318] == idtype319;
}
var310 = var317;
} else {
var310 = var_316;
}
var_320 = var310;
if (var310){
{
{ /* Inline model#MClassType#mclass (var_ret) on <var_ret:nullable MType(MClassType)> */
var323 = var_ret->attrs[COLOR_nitc__model__MClassType___mclass].val; /* _mclass on <var_ret:nullable MType(MClassType)> */
if (unlikely(var323 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1197);
fatal_exit(1);
}
var321 = var323;
RET_LABEL322:(void)0;
}
}
{
{ /* Inline model#MClass#kind (var321) on <var321:MClass> */
var326 = var321->attrs[COLOR_nitc__model__MClass___kind].val; /* _kind on <var321:MClass> */
if (unlikely(var326 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _kind");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 472);
fatal_exit(1);
}
var324 = var326;
RET_LABEL325:(void)0;
}
}
var327 = glob_sys;
{
var328 = nitc__model___core__Sys___abstract_kind(var327);
}
{
{ /* Inline kernel#Object#!= (var324,var328) on <var324:MClassKind> */
var_other23 = var328;
{
var331 = ((short int(*)(val* self, val* p0))(var324->class->vft[COLOR_core__kernel__Object___61d_61d]))(var324, var_other23); /* == on <var324:MClassKind>*/
}
var332 = !var331;
var329 = var332;
goto RET_LABEL330;
RET_LABEL330:(void)0;
}
}
var309 = var329;
} else {
var309 = var_320;
}
var_333 = var309;
if (var309){
{
{ /* Inline model#MClassType#mclass (var_ret) on <var_ret:nullable MType(MClassType)> */
var336 = var_ret->attrs[COLOR_nitc__model__MClassType___mclass].val; /* _mclass on <var_ret:nullable MType(MClassType)> */
if (unlikely(var336 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1197);
fatal_exit(1);
}
var334 = var336;
RET_LABEL335:(void)0;
}
}
{
{ /* Inline model#MClass#kind (var334) on <var334:MClass> */
var339 = var334->attrs[COLOR_nitc__model__MClass___kind].val; /* _kind on <var334:MClass> */
if (unlikely(var339 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _kind");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 472);
fatal_exit(1);
}
var337 = var339;
RET_LABEL338:(void)0;
}
}
var340 = glob_sys;
{
var341 = nitc__model___core__Sys___interface_kind(var340);
}
{
{ /* Inline kernel#Object#!= (var337,var341) on <var337:MClassKind> */
var_other23 = var341;
{
var344 = ((short int(*)(val* self, val* p0))(var337->class->vft[COLOR_core__kernel__Object___61d_61d]))(var337, var_other23); /* == on <var337:MClassKind>*/
}
var345 = !var344;
var342 = var345;
goto RET_LABEL343;
RET_LABEL343:(void)0;
}
}
var308 = var342;
} else {
var308 = var_333;
}
if (var308){
{
nitc___nitc__RapidTypeVisitor___add_type(var_v, var_ret); /* Direct call rapid_type_analysis#RapidTypeVisitor#add_type on <var_v:RapidTypeVisitor>*/
}
} else {
}
} else {
}
{
nitc___nitc__Visitor___enter_visit(var_v, var_npropdef); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:RapidTypeVisitor>*/
}
} else {
goto BREAK_label346;
}
BREAK_label: (void)0;
}
BREAK_label346: (void)0;
var347 = NEW_core__List(&type_core__List__nitc__MClassType);
{
{ /* Inline list#List#init (var347) on <var347:List[MClassType]> */
{
((void(*)(val* self))(var347->class->vft[COLOR_core___core__List___core__kernel__Object__init]))(var347); /* init on <var347:List[MClassType]>*/
}
RET_LABEL348:(void)0;
}
}
var_todo_types = var347;
{
{ /* Inline rapid_type_analysis#RapidTypeAnalysis#live_types (self) on <self:RapidTypeAnalysis> */
var351 = self->attrs[COLOR_nitc__rapid_type_analysis__RapidTypeAnalysis___live_types].val; /* _live_types on <self:RapidTypeAnalysis> */
if (unlikely(var351 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _live_types");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__rapid_type_analysis, 60);
fatal_exit(1);
}
var349 = var351;
RET_LABEL350:(void)0;
}
}
{
core___core__SimpleCollection___add_all(var_todo_types, var349); /* Direct call abstract_collection#SimpleCollection#add_all on <var_todo_types:List[MClassType]>*/
}
for(;;) {
{
var352 = core___core__List___core__abstract_collection__Collection__is_empty(var_todo_types);
}
var353 = !var352;
if (var353){
{
var354 = core___core__List___core__abstract_collection__Sequence__shift(var_todo_types);
}
var_t = var354;
{
{ /* Inline rapid_type_analysis#RapidTypeAnalysis#live_open_types (self) on <self:RapidTypeAnalysis> */
var357 = self->attrs[COLOR_nitc__rapid_type_analysis__RapidTypeAnalysis___live_open_types].val; /* _live_open_types on <self:RapidTypeAnalysis> */
if (unlikely(var357 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _live_open_types");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__rapid_type_analysis, 65);
fatal_exit(1);
}
var355 = var357;
RET_LABEL356:(void)0;
}
}
var_358 = var355;
{
var359 = core___core__HashSet___core__abstract_collection__Collection__iterator(var_358);
}
var_360 = var359;
for(;;) {
{
var361 = ((short int(*)(val* self))((((long)var_360&3)?class_info[((long)var_360&3)]:var_360->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_360); /* is_ok on <var_360:Iterator[MClassType]>*/
}
if (var361){
} else {
goto BREAK_label362;
}
{
var363 = ((val*(*)(val* self))((((long)var_360&3)?class_info[((long)var_360&3)]:var_360->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_360); /* item on <var_360:Iterator[MClassType]>*/
}
var_ot = var363;
{
{ /* Inline rapid_type_analysis#RapidTypeAnalysis#mainmodule (self) on <self:RapidTypeAnalysis> */
var366 = self->attrs[COLOR_nitc__rapid_type_analysis__RapidTypeAnalysis___mainmodule].val; /* _mainmodule on <self:RapidTypeAnalysis> */
if (unlikely(var366 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mainmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__rapid_type_analysis, 56);
fatal_exit(1);
}
var364 = var366;
RET_LABEL365:(void)0;
}
}
{
var367 = ((short int(*)(val* self, val* p0, val* p1, val* p2))(var_ot->class->vft[COLOR_nitc__model__MType__can_resolve_for]))(var_ot, var_t, var_t, var364); /* can_resolve_for on <var_ot:MClassType>*/
}
var368 = !var367;
if (var368){
goto BREAK_label369;
} else {
}
{
{ /* Inline rapid_type_analysis#RapidTypeAnalysis#mainmodule (self) on <self:RapidTypeAnalysis> */
var372 = self->attrs[COLOR_nitc__rapid_type_analysis__RapidTypeAnalysis___mainmodule].val; /* _mainmodule on <self:RapidTypeAnalysis> */
if (unlikely(var372 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mainmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__rapid_type_analysis, 56);
fatal_exit(1);
}
var370 = var372;
RET_LABEL371:(void)0;
}
}
{
var373 = nitc___nitc__MClassType___MType__anchor_to(var_ot, var370, var_t);
}
var_rt = var373;
{
{ /* Inline rapid_type_analysis#RapidTypeAnalysis#live_types (self) on <self:RapidTypeAnalysis> */
var376 = self->attrs[COLOR_nitc__rapid_type_analysis__RapidTypeAnalysis___live_types].val; /* _live_types on <self:RapidTypeAnalysis> */
if (unlikely(var376 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _live_types");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__rapid_type_analysis, 60);
fatal_exit(1);
}
var374 = var376;
RET_LABEL375:(void)0;
}
}
{
var377 = core___core__HashSet___core__abstract_collection__Collection__has(var374, var_rt);
}
if (var377){
goto BREAK_label369;
} else {
}
{
{ /* Inline rapid_type_analysis#RapidTypeAnalysis#mainmodule (self) on <self:RapidTypeAnalysis> */
var380 = self->attrs[COLOR_nitc__rapid_type_analysis__RapidTypeAnalysis___mainmodule].val; /* _mainmodule on <self:RapidTypeAnalysis> */
if (unlikely(var380 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mainmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__rapid_type_analysis, 56);
fatal_exit(1);
}
var378 = var380;
RET_LABEL379:(void)0;
}
}
{
var381 = ((short int(*)(val* self, val* p0, val* p1))(var_rt->class->vft[COLOR_nitc__model__MType__is_legal_in]))(var_rt, var378, ((val*)NULL)); /* is_legal_in on <var_rt:MClassType>*/
}
var382 = !var381;
if (var382){
goto BREAK_label369;
} else {
}
{
var383 = nitc___nitc__RapidTypeAnalysis___check_depth(self, var_rt);
}
var384 = !var383;
if (var384){
goto BREAK_label369;
} else {
}
{
{ /* Inline rapid_type_analysis#RapidTypeAnalysis#live_types (self) on <self:RapidTypeAnalysis> */
var387 = self->attrs[COLOR_nitc__rapid_type_analysis__RapidTypeAnalysis___live_types].val; /* _live_types on <self:RapidTypeAnalysis> */
if (unlikely(var387 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _live_types");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__rapid_type_analysis, 60);
fatal_exit(1);
}
var385 = var387;
RET_LABEL386:(void)0;
}
}
{
core___core__HashSet___core__abstract_collection__SimpleCollection__add(var385, var_rt); /* Direct call hash_collection#HashSet#add on <var385:HashSet[MClassType]>*/
}
{
core___core__List___core__abstract_collection__Sequence__unshift(var_todo_types, var_rt); /* Direct call list#List#unshift on <var_todo_types:List[MClassType]>*/
}
BREAK_label369: (void)0;
{
((void(*)(val* self))((((long)var_360&3)?class_info[((long)var_360&3)]:var_360->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_360); /* next on <var_360:Iterator[MClassType]>*/
}
}
BREAK_label362: (void)0;
{
((void(*)(val* self))((((long)var_360&3)?class_info[((long)var_360&3)]:var_360->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_360); /* finish on <var_360:Iterator[MClassType]>*/
}
} else {
goto BREAK_label388;
}
}
BREAK_label388: (void)0;
{
{ /* Inline rapid_type_analysis#RapidTypeAnalysis#live_open_cast_types (self) on <self:RapidTypeAnalysis> */
var391 = self->attrs[COLOR_nitc__rapid_type_analysis__RapidTypeAnalysis___live_open_cast_types].val; /* _live_open_cast_types on <self:RapidTypeAnalysis> */
if (unlikely(var391 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _live_open_cast_types");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__rapid_type_analysis, 75);
fatal_exit(1);
}
var389 = var391;
RET_LABEL390:(void)0;
}
}
var_392 = var389;
{
var393 = core___core__HashSet___core__abstract_collection__Collection__iterator(var_392);
}
var_394 = var393;
for(;;) {
{
var395 = ((short int(*)(val* self))((((long)var_394&3)?class_info[((long)var_394&3)]:var_394->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_394); /* is_ok on <var_394:Iterator[MType]>*/
}
if (var395){
} else {
goto BREAK_label396;
}
{
var397 = ((val*(*)(val* self))((((long)var_394&3)?class_info[((long)var_394&3)]:var_394->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_394); /* item on <var_394:Iterator[MType]>*/
}
var_ot398 = var397;
{
{ /* Inline rapid_type_analysis#RapidTypeAnalysis#live_types (self) on <self:RapidTypeAnalysis> */
var401 = self->attrs[COLOR_nitc__rapid_type_analysis__RapidTypeAnalysis___live_types].val; /* _live_types on <self:RapidTypeAnalysis> */
if (unlikely(var401 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _live_types");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__rapid_type_analysis, 60);
fatal_exit(1);
}
var399 = var401;
RET_LABEL400:(void)0;
}
}
var_402 = var399;
{
var403 = core___core__HashSet___core__abstract_collection__Collection__iterator(var_402);
}
var_404 = var403;
for(;;) {
{
var405 = ((short int(*)(val* self))((((long)var_404&3)?class_info[((long)var_404&3)]:var_404->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_404); /* is_ok on <var_404:Iterator[MClassType]>*/
}
if (var405){
} else {
goto BREAK_label406;
}
{
var407 = ((val*(*)(val* self))((((long)var_404&3)?class_info[((long)var_404&3)]:var_404->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_404); /* item on <var_404:Iterator[MClassType]>*/
}
var_t408 = var407;
{
{ /* Inline rapid_type_analysis#RapidTypeAnalysis#mainmodule (self) on <self:RapidTypeAnalysis> */
var411 = self->attrs[COLOR_nitc__rapid_type_analysis__RapidTypeAnalysis___mainmodule].val; /* _mainmodule on <self:RapidTypeAnalysis> */
if (unlikely(var411 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mainmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__rapid_type_analysis, 56);
fatal_exit(1);
}
var409 = var411;
RET_LABEL410:(void)0;
}
}
{
var412 = ((short int(*)(val* self, val* p0, val* p1, val* p2))(var_ot398->class->vft[COLOR_nitc__model__MType__can_resolve_for]))(var_ot398, var_t408, var_t408, var409); /* can_resolve_for on <var_ot398:MType>*/
}
var413 = !var412;
if (var413){
goto BREAK_label414;
} else {
}
{
{ /* Inline rapid_type_analysis#RapidTypeAnalysis#mainmodule (self) on <self:RapidTypeAnalysis> */
var417 = self->attrs[COLOR_nitc__rapid_type_analysis__RapidTypeAnalysis___mainmodule].val; /* _mainmodule on <self:RapidTypeAnalysis> */
if (unlikely(var417 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mainmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__rapid_type_analysis, 56);
fatal_exit(1);
}
var415 = var417;
RET_LABEL416:(void)0;
}
}
{
var418 = ((val*(*)(val* self, val* p0, val* p1))(var_ot398->class->vft[COLOR_nitc__model__MType__anchor_to]))(var_ot398, var415, var_t408); /* anchor_to on <var_ot398:MType>*/
}
var_rt419 = var418;
{
{ /* Inline rapid_type_analysis#RapidTypeAnalysis#mainmodule (self) on <self:RapidTypeAnalysis> */
var422 = self->attrs[COLOR_nitc__rapid_type_analysis__RapidTypeAnalysis___mainmodule].val; /* _mainmodule on <self:RapidTypeAnalysis> */
if (unlikely(var422 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mainmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__rapid_type_analysis, 56);
fatal_exit(1);
}
var420 = var422;
RET_LABEL421:(void)0;
}
}
{
var423 = ((short int(*)(val* self, val* p0, val* p1))(var_rt419->class->vft[COLOR_nitc__model__MType__is_legal_in]))(var_rt419, var420, ((val*)NULL)); /* is_legal_in on <var_rt419:MType>*/
}
var424 = !var423;
if (var424){
goto BREAK_label414;
} else {
}
{
{ /* Inline rapid_type_analysis#RapidTypeAnalysis#live_cast_types (self) on <self:RapidTypeAnalysis> */
var427 = self->attrs[COLOR_nitc__rapid_type_analysis__RapidTypeAnalysis___live_cast_types].val; /* _live_cast_types on <self:RapidTypeAnalysis> */
if (unlikely(var427 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _live_cast_types");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__rapid_type_analysis, 72);
fatal_exit(1);
}
var425 = var427;
RET_LABEL426:(void)0;
}
}
{
core___core__HashSet___core__abstract_collection__SimpleCollection__add(var425, var_rt419); /* Direct call hash_collection#HashSet#add on <var425:HashSet[MType]>*/
}
BREAK_label414: (void)0;
{
((void(*)(val* self))((((long)var_404&3)?class_info[((long)var_404&3)]:var_404->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_404); /* next on <var_404:Iterator[MClassType]>*/
}
}
BREAK_label406: (void)0;
{
((void(*)(val* self))((((long)var_404&3)?class_info[((long)var_404&3)]:var_404->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_404); /* finish on <var_404:Iterator[MClassType]>*/
}
{
((void(*)(val* self))((((long)var_394&3)?class_info[((long)var_394&3)]:var_394->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_394); /* next on <var_394:Iterator[MType]>*/
}
}
BREAK_label396: (void)0;
{
((void(*)(val* self))((((long)var_394&3)?class_info[((long)var_394&3)]:var_394->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_394); /* finish on <var_394:Iterator[MType]>*/
}
RET_LABEL:;
}
/* method rapid_type_analysis#RapidTypeAnalysis#check_depth for (self: RapidTypeAnalysis, MClassType): Bool */
short int nitc___nitc__RapidTypeAnalysis___check_depth(val* self, val* p0) {
short int var /* : Bool */;
val* var_mtype /* var mtype: MClassType */;
long var1 /* : Int */;
long var_d /* var d: Int */;
short int var2 /* : Bool */;
short int var4 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var5 /* : Bool */;
val* var6 /* : ModelBuilder */;
val* var8 /* : ModelBuilder */;
val* var9 /* : ToolContext */;
val* var11 /* : ToolContext */;
val* var12 /* : NativeArray[String] */;
static val* varonce;
static val* varonce13;
val* var14 /* : String */;
char* var15 /* : CString */;
val* var16 /* : String */;
static val* varonce17;
val* var18 /* : String */;
char* var19 /* : CString */;
val* var20 /* : String */;
static val* varonce21;
val* var22 /* : String */;
char* var23 /* : CString */;
val* var24 /* : String */;
val* var25 /* : String */;
val* var26 /* : String */;
val* var27 /* : String */;
var_mtype = p0;
{
var1 = ((long(*)(val* self))(var_mtype->class->vft[COLOR_nitc__model__MType__length]))(var_mtype); /* length on <var_mtype:MClassType>*/
}
var_d = var1;
{
{ /* Inline kernel#Int#> (var_d,255l) on <var_d:Int> */
/* Covariant cast for argument 0 (i) <255l:Int> isa OTHER */
/* <255l:Int> isa OTHER */
var4 = 1; /* easy <255l:Int> isa OTHER*/
if (unlikely(!var4)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 727);
fatal_exit(1);
}
var5 = var_d > 255l;
var2 = var5;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
}
if (var2){
{
{ /* Inline rapid_type_analysis#RapidTypeAnalysis#modelbuilder (self) on <self:RapidTypeAnalysis> */
var8 = self->attrs[COLOR_nitc__rapid_type_analysis__RapidTypeAnalysis___modelbuilder].val; /* _modelbuilder on <self:RapidTypeAnalysis> */
if (unlikely(var8 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__rapid_type_analysis, 53);
fatal_exit(1);
}
var6 = var8;
RET_LABEL7:(void)0;
}
}
{
{ /* Inline modelbuilder_base#ModelBuilder#toolcontext (var6) on <var6:ModelBuilder> */
var11 = var6->attrs[COLOR_nitc__modelbuilder_base__ModelBuilder___toolcontext].val; /* _toolcontext on <var6:ModelBuilder> */
if (unlikely(var11 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelbuilder_base, 47);
fatal_exit(1);
}
var9 = var11;
RET_LABEL10:(void)0;
}
}
if (unlikely(varonce==NULL)) {
var12 = NEW_core__NativeArray(5l, &type_core__NativeArray__core__String);
if (likely(varonce13!=NULL)) {
var14 = varonce13;
} else {
var15 = "Fatal Error: limitation in the rapidtype analysis engine: a type depth of ";
var16 = core__abstract_text___CString___to_s_full(var15, 74l, 74l);
var14 = var16;
varonce13 = var14;
}
((struct instance_core__NativeArray*)var12)->values[0]=var14;
if (likely(varonce17!=NULL)) {
var18 = varonce17;
} else {
var19 = " is too important, the problematic type is `";
var20 = core__abstract_text___CString___to_s_full(var19, 44l, 44l);
var18 = var20;
varonce17 = var18;
}
((struct instance_core__NativeArray*)var12)->values[2]=var18;
if (likely(varonce21!=NULL)) {
var22 = varonce21;
} else {
var23 = "`.";
var24 = core__abstract_text___CString___to_s_full(var23, 2l, 2l);
var22 = var24;
varonce21 = var22;
}
((struct instance_core__NativeArray*)var12)->values[4]=var22;
} else {
var12 = varonce;
varonce = NULL;
}
var25 = core__flat___Int___core__abstract_text__Object__to_s(var_d);
((struct instance_core__NativeArray*)var12)->values[1]=var25;
{
var26 = ((val*(*)(val* self))(var_mtype->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_mtype); /* to_s on <var_mtype:MClassType>*/
}
((struct instance_core__NativeArray*)var12)->values[3]=var26;
{
var27 = ((val*(*)(val* self))(var12->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var12); /* native_to_s on <var12:NativeArray[String]>*/
}
varonce = var12;
{
nitc___nitc__ToolContext___fatal_error(var9, ((val*)NULL), var27); /* Direct call toolcontext#ToolContext#fatal_error on <var9:ToolContext>*/
}
var = 0;
goto RET_LABEL;
} else {
}
var = 1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method rapid_type_analysis#RapidTypeAnalysis#add_new for (self: RapidTypeAnalysis, MClassType, MClassType) */
void nitc___nitc__RapidTypeAnalysis___add_new(val* self, val* p0, val* p1) {
val* var_recv /* var recv: MClassType */;
val* var_mtype /* var mtype: MClassType */;
short int var /* : Bool */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var3 /* : HashSet[MClassType] */;
val* var5 /* : HashSet[MClassType] */;
short int var6 /* : Bool */;
val* var7 /* : HashSet[MClassType] */;
val* var9 /* : HashSet[MClassType] */;
val* var10 /* : HashSet[MClassType] */;
val* var12 /* : HashSet[MClassType] */;
short int var13 /* : Bool */;
val* var14 /* : HashSet[MClassType] */;
val* var16 /* : HashSet[MClassType] */;
val* var17 /* : MClass */;
val* var19 /* : MClass */;
val* var_mclass /* var mclass: MClass */;
val* var20 /* : HashSet[MClass] */;
val* var22 /* : HashSet[MClass] */;
short int var23 /* : Bool */;
val* var24 /* : HashSet[MClass] */;
val* var26 /* : HashSet[MClass] */;
val* var27 /* : HashSet[MMethod] */;
val* var29 /* : HashSet[MMethod] */;
val* var_ /* var : HashSet[MMethod] */;
val* var30 /* : Iterator[nullable Object] */;
val* var_31 /* var : Iterator[MMethod] */;
short int var32 /* : Bool */;
val* var33 /* : nullable Object */;
val* var_p /* var p: MMethod */;
val* var34 /* : HashSet[MMethodDef] */;
val* var36 /* : HashSet[MMethodDef] */;
val* var_37 /* var : HashSet[MMethodDef] */;
val* var38 /* : Iterator[nullable Object] */;
val* var_39 /* var : Iterator[MMethodDef] */;
short int var40 /* : Bool */;
val* var42 /* : nullable Object */;
val* var_p43 /* var p: MMethodDef */;
val* var44 /* : Array[MMethod] */;
val* var46 /* : Array[MMethod] */;
val* var_47 /* var : Array[MMethod] */;
val* var48 /* : IndexedIterator[nullable Object] */;
val* var_49 /* var : IndexedIterator[MMethod] */;
short int var50 /* : Bool */;
val* var52 /* : nullable Object */;
val* var_p53 /* var p: MMethod */;
val* var54 /* : HashSet[MMethod] */;
val* var56 /* : HashSet[MMethod] */;
val* var57 /* : Array[MMethod] */;
val* var59 /* : Array[MMethod] */;
val* var60 /* : MModule */;
val* var62 /* : MModule */;
val* var63 /* : MClassType */;
val* var_bound_mtype /* var bound_mtype: MClassType */;
val* var64 /* : MModule */;
val* var66 /* : MModule */;
val* var67 /* : Set[MClassDef] */;
val* var_68 /* var : Set[MClassDef] */;
val* var69 /* : Iterator[nullable Object] */;
val* var_70 /* var : Iterator[MClassDef] */;
short int var71 /* : Bool */;
val* var73 /* : nullable Object */;
val* var_cd /* var cd: MClassDef */;
val* var74 /* : ModelBuilder */;
val* var76 /* : ModelBuilder */;
val* var77 /* : Array[AAttrPropdef] */;
val* var_78 /* var : Array[AAttrPropdef] */;
val* var79 /* : IndexedIterator[nullable Object] */;
val* var_80 /* var : IndexedIterator[AAttrPropdef] */;
short int var81 /* : Bool */;
val* var83 /* : nullable Object */;
val* var_npropdef /* var npropdef: AAttrPropdef */;
short int var84 /* : Bool */;
short int var86 /* : Bool */;
short int var87 /* : Bool */;
val* var89 /* : nullable MMethodDef */;
val* var91 /* : nullable MMethodDef */;
val* var_mpropdef /* var mpropdef: MMethodDef */;
val* var92 /* : RapidTypeVisitor */;
val* var_v /* var v: RapidTypeVisitor */;
val* var93 /* : nullable AExpr */;
val* var95 /* : nullable AExpr */;
val* var96 /* : nullable AExpr */;
val* var98 /* : nullable AExpr */;
var_recv = p0;
var_mtype = p1;
{
var = ((short int(*)(val* self))(var_recv->class->vft[COLOR_nitc__model__MType__need_anchor]))(var_recv); /* need_anchor on <var_recv:MClassType>*/
}
var1 = !var;
if (unlikely(!var1)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__rapid_type_analysis, 353);
fatal_exit(1);
}
{
var2 = ((short int(*)(val* self))(var_mtype->class->vft[COLOR_nitc__model__MType__need_anchor]))(var_mtype); /* need_anchor on <var_mtype:MClassType>*/
}
if (var2){
{
{ /* Inline rapid_type_analysis#RapidTypeAnalysis#live_open_types (self) on <self:RapidTypeAnalysis> */
var5 = self->attrs[COLOR_nitc__rapid_type_analysis__RapidTypeAnalysis___live_open_types].val; /* _live_open_types on <self:RapidTypeAnalysis> */
if (unlikely(var5 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _live_open_types");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__rapid_type_analysis, 65);
fatal_exit(1);
}
var3 = var5;
RET_LABEL4:(void)0;
}
}
{
var6 = core___core__HashSet___core__abstract_collection__Collection__has(var3, var_mtype);
}
if (var6){
goto RET_LABEL;
} else {
}
{
{ /* Inline rapid_type_analysis#RapidTypeAnalysis#live_open_types (self) on <self:RapidTypeAnalysis> */
var9 = self->attrs[COLOR_nitc__rapid_type_analysis__RapidTypeAnalysis___live_open_types].val; /* _live_open_types on <self:RapidTypeAnalysis> */
if (unlikely(var9 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _live_open_types");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__rapid_type_analysis, 65);
fatal_exit(1);
}
var7 = var9;
RET_LABEL8:(void)0;
}
}
{
core___core__HashSet___core__abstract_collection__SimpleCollection__add(var7, var_mtype); /* Direct call hash_collection#HashSet#add on <var7:HashSet[MClassType]>*/
}
} else {
{
{ /* Inline rapid_type_analysis#RapidTypeAnalysis#live_types (self) on <self:RapidTypeAnalysis> */
var12 = self->attrs[COLOR_nitc__rapid_type_analysis__RapidTypeAnalysis___live_types].val; /* _live_types on <self:RapidTypeAnalysis> */
if (unlikely(var12 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _live_types");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__rapid_type_analysis, 60);
fatal_exit(1);
}
var10 = var12;
RET_LABEL11:(void)0;
}
}
{
var13 = core___core__HashSet___core__abstract_collection__Collection__has(var10, var_mtype);
}
if (var13){
goto RET_LABEL;
} else {
}
{
{ /* Inline rapid_type_analysis#RapidTypeAnalysis#live_types (self) on <self:RapidTypeAnalysis> */
var16 = self->attrs[COLOR_nitc__rapid_type_analysis__RapidTypeAnalysis___live_types].val; /* _live_types on <self:RapidTypeAnalysis> */
if (unlikely(var16 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _live_types");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__rapid_type_analysis, 60);
fatal_exit(1);
}
var14 = var16;
RET_LABEL15:(void)0;
}
}
{
core___core__HashSet___core__abstract_collection__SimpleCollection__add(var14, var_mtype); /* Direct call hash_collection#HashSet#add on <var14:HashSet[MClassType]>*/
}
}
{
{ /* Inline model#MClassType#mclass (var_mtype) on <var_mtype:MClassType> */
var19 = var_mtype->attrs[COLOR_nitc__model__MClassType___mclass].val; /* _mclass on <var_mtype:MClassType> */
if (unlikely(var19 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1197);
fatal_exit(1);
}
var17 = var19;
RET_LABEL18:(void)0;
}
}
var_mclass = var17;
{
{ /* Inline rapid_type_analysis#RapidTypeAnalysis#live_classes (self) on <self:RapidTypeAnalysis> */
var22 = self->attrs[COLOR_nitc__rapid_type_analysis__RapidTypeAnalysis___live_classes].val; /* _live_classes on <self:RapidTypeAnalysis> */
if (unlikely(var22 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _live_classes");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__rapid_type_analysis, 69);
fatal_exit(1);
}
var20 = var22;
RET_LABEL21:(void)0;
}
}
{
var23 = core___core__HashSet___core__abstract_collection__Collection__has(var20, var_mclass);
}
if (var23){
goto RET_LABEL;
} else {
}
{
{ /* Inline rapid_type_analysis#RapidTypeAnalysis#live_classes (self) on <self:RapidTypeAnalysis> */
var26 = self->attrs[COLOR_nitc__rapid_type_analysis__RapidTypeAnalysis___live_classes].val; /* _live_classes on <self:RapidTypeAnalysis> */
if (unlikely(var26 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _live_classes");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__rapid_type_analysis, 69);
fatal_exit(1);
}
var24 = var26;
RET_LABEL25:(void)0;
}
}
{
core___core__HashSet___core__abstract_collection__SimpleCollection__add(var24, var_mclass); /* Direct call hash_collection#HashSet#add on <var24:HashSet[MClass]>*/
}
{
{ /* Inline rapid_type_analysis#RapidTypeAnalysis#totry_methods (self) on <self:RapidTypeAnalysis> */
var29 = self->attrs[COLOR_nitc__rapid_type_analysis__RapidTypeAnalysis___totry_methods].val; /* _totry_methods on <self:RapidTypeAnalysis> */
if (unlikely(var29 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _totry_methods");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__rapid_type_analysis, 173);
fatal_exit(1);
}
var27 = var29;
RET_LABEL28:(void)0;
}
}
var_ = var27;
{
var30 = core___core__HashSet___core__abstract_collection__Collection__iterator(var_);
}
var_31 = var30;
for(;;) {
{
var32 = ((short int(*)(val* self))((((long)var_31&3)?class_info[((long)var_31&3)]:var_31->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_31); /* is_ok on <var_31:Iterator[MMethod]>*/
}
if (var32){
} else {
goto BREAK_label;
}
{
var33 = ((val*(*)(val* self))((((long)var_31&3)?class_info[((long)var_31&3)]:var_31->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_31); /* item on <var_31:Iterator[MMethod]>*/
}
var_p = var33;
{
nitc___nitc__RapidTypeAnalysis___try_send(self, var_mtype, var_p); /* Direct call rapid_type_analysis#RapidTypeAnalysis#try_send on <self:RapidTypeAnalysis>*/
}
{
((void(*)(val* self))((((long)var_31&3)?class_info[((long)var_31&3)]:var_31->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_31); /* next on <var_31:Iterator[MMethod]>*/
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_31&3)?class_info[((long)var_31&3)]:var_31->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_31); /* finish on <var_31:Iterator[MMethod]>*/
}
{
{ /* Inline rapid_type_analysis#RapidTypeAnalysis#live_super_sends (self) on <self:RapidTypeAnalysis> */
var36 = self->attrs[COLOR_nitc__rapid_type_analysis__RapidTypeAnalysis___live_super_sends].val; /* _live_super_sends on <self:RapidTypeAnalysis> */
if (unlikely(var36 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _live_super_sends");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__rapid_type_analysis, 118);
fatal_exit(1);
}
var34 = var36;
RET_LABEL35:(void)0;
}
}
var_37 = var34;
{
var38 = core___core__HashSet___core__abstract_collection__Collection__iterator(var_37);
}
var_39 = var38;
for(;;) {
{
var40 = ((short int(*)(val* self))((((long)var_39&3)?class_info[((long)var_39&3)]:var_39->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_39); /* is_ok on <var_39:Iterator[MMethodDef]>*/
}
if (var40){
} else {
goto BREAK_label41;
}
{
var42 = ((val*(*)(val* self))((((long)var_39&3)?class_info[((long)var_39&3)]:var_39->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_39); /* item on <var_39:Iterator[MMethodDef]>*/
}
var_p43 = var42;
{
nitc___nitc__RapidTypeAnalysis___try_super_send(self, var_mtype, var_p43); /* Direct call rapid_type_analysis#RapidTypeAnalysis#try_super_send on <self:RapidTypeAnalysis>*/
}
{
((void(*)(val* self))((((long)var_39&3)?class_info[((long)var_39&3)]:var_39->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_39); /* next on <var_39:Iterator[MMethodDef]>*/
}
}
BREAK_label41: (void)0;
{
((void(*)(val* self))((((long)var_39&3)?class_info[((long)var_39&3)]:var_39->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_39); /* finish on <var_39:Iterator[MMethodDef]>*/
}
{
{ /* Inline rapid_type_analysis#RapidTypeAnalysis#totry_methods_to_remove (self) on <self:RapidTypeAnalysis> */
var46 = self->attrs[COLOR_nitc__rapid_type_analysis__RapidTypeAnalysis___totry_methods_to_remove].val; /* _totry_methods_to_remove on <self:RapidTypeAnalysis> */
if (unlikely(var46 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _totry_methods_to_remove");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__rapid_type_analysis, 176);
fatal_exit(1);
}
var44 = var46;
RET_LABEL45:(void)0;
}
}
var_47 = var44;
{
var48 = core___core__AbstractArrayRead___core__abstract_collection__Collection__iterator(var_47);
}
var_49 = var48;
for(;;) {
{
var50 = ((short int(*)(val* self))((((long)var_49&3)?class_info[((long)var_49&3)]:var_49->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_49); /* is_ok on <var_49:IndexedIterator[MMethod]>*/
}
if (var50){
} else {
goto BREAK_label51;
}
{
var52 = ((val*(*)(val* self))((((long)var_49&3)?class_info[((long)var_49&3)]:var_49->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_49); /* item on <var_49:IndexedIterator[MMethod]>*/
}
var_p53 = var52;
{
{ /* Inline rapid_type_analysis#RapidTypeAnalysis#totry_methods (self) on <self:RapidTypeAnalysis> */
var56 = self->attrs[COLOR_nitc__rapid_type_analysis__RapidTypeAnalysis___totry_methods].val; /* _totry_methods on <self:RapidTypeAnalysis> */
if (unlikely(var56 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _totry_methods");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__rapid_type_analysis, 173);
fatal_exit(1);
}
var54 = var56;
RET_LABEL55:(void)0;
}
}
{
core___core__HashSet___core__abstract_collection__RemovableCollection__remove(var54, var_p53); /* Direct call hash_collection#HashSet#remove on <var54:HashSet[MMethod]>*/
}
{
((void(*)(val* self))((((long)var_49&3)?class_info[((long)var_49&3)]:var_49->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_49); /* next on <var_49:IndexedIterator[MMethod]>*/
}
}
BREAK_label51: (void)0;
{
((void(*)(val* self))((((long)var_49&3)?class_info[((long)var_49&3)]:var_49->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_49); /* finish on <var_49:IndexedIterator[MMethod]>*/
}
{
{ /* Inline rapid_type_analysis#RapidTypeAnalysis#totry_methods_to_remove (self) on <self:RapidTypeAnalysis> */
var59 = self->attrs[COLOR_nitc__rapid_type_analysis__RapidTypeAnalysis___totry_methods_to_remove].val; /* _totry_methods_to_remove on <self:RapidTypeAnalysis> */
if (unlikely(var59 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _totry_methods_to_remove");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__rapid_type_analysis, 176);
fatal_exit(1);
}
var57 = var59;
RET_LABEL58:(void)0;
}
}
{
core___core__AbstractArray___core__abstract_collection__RemovableCollection__clear(var57); /* Direct call array#AbstractArray#clear on <var57:Array[MMethod]>*/
}
{
{ /* Inline rapid_type_analysis#RapidTypeAnalysis#mainmodule (self) on <self:RapidTypeAnalysis> */
var62 = self->attrs[COLOR_nitc__rapid_type_analysis__RapidTypeAnalysis___mainmodule].val; /* _mainmodule on <self:RapidTypeAnalysis> */
if (unlikely(var62 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mainmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__rapid_type_analysis, 56);
fatal_exit(1);
}
var60 = var62;
RET_LABEL61:(void)0;
}
}
{
var63 = nitc___nitc__MClassType___MType__anchor_to(var_mtype, var60, var_recv);
}
var_bound_mtype = var63;
{
{ /* Inline rapid_type_analysis#RapidTypeAnalysis#mainmodule (self) on <self:RapidTypeAnalysis> */
var66 = self->attrs[COLOR_nitc__rapid_type_analysis__RapidTypeAnalysis___mainmodule].val; /* _mainmodule on <self:RapidTypeAnalysis> */
if (unlikely(var66 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mainmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__rapid_type_analysis, 56);
fatal_exit(1);
}
var64 = var66;
RET_LABEL65:(void)0;
}
}
{
var67 = nitc___nitc__MClassType___MType__collect_mclassdefs(var_bound_mtype, var64);
}
var_68 = var67;
{
var69 = ((val*(*)(val* self))((((long)var_68&3)?class_info[((long)var_68&3)]:var_68->class)->vft[COLOR_core__abstract_collection__Collection__iterator]))(var_68); /* iterator on <var_68:Set[MClassDef]>*/
}
var_70 = var69;
for(;;) {
{
var71 = ((short int(*)(val* self))((((long)var_70&3)?class_info[((long)var_70&3)]:var_70->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_70); /* is_ok on <var_70:Iterator[MClassDef]>*/
}
if (var71){
} else {
goto BREAK_label72;
}
{
var73 = ((val*(*)(val* self))((((long)var_70&3)?class_info[((long)var_70&3)]:var_70->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_70); /* item on <var_70:Iterator[MClassDef]>*/
}
var_cd = var73;
{
{ /* Inline rapid_type_analysis#RapidTypeAnalysis#modelbuilder (self) on <self:RapidTypeAnalysis> */
var76 = self->attrs[COLOR_nitc__rapid_type_analysis__RapidTypeAnalysis___modelbuilder].val; /* _modelbuilder on <self:RapidTypeAnalysis> */
if (unlikely(var76 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__rapid_type_analysis, 53);
fatal_exit(1);
}
var74 = var76;
RET_LABEL75:(void)0;
}
}
{
var77 = nitc__modelize_property___ModelBuilder___collect_attr_propdef(var74, var_cd);
}
var_78 = var77;
{
var79 = core___core__AbstractArrayRead___core__abstract_collection__Collection__iterator(var_78);
}
var_80 = var79;
for(;;) {
{
var81 = ((short int(*)(val* self))((((long)var_80&3)?class_info[((long)var_80&3)]:var_80->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_80); /* is_ok on <var_80:IndexedIterator[AAttrPropdef]>*/
}
if (var81){
} else {
goto BREAK_label82;
}
{
var83 = ((val*(*)(val* self))((((long)var_80&3)?class_info[((long)var_80&3)]:var_80->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_80); /* item on <var_80:IndexedIterator[AAttrPropdef]>*/
}
var_npropdef = var83;
{
{ /* Inline modelize_property#AAttrPropdef#has_value (var_npropdef) on <var_npropdef:AAttrPropdef> */
var86 = var_npropdef->attrs[COLOR_nitc__modelize_property__AAttrPropdef___has_value].s; /* _has_value on <var_npropdef:AAttrPropdef> */
var84 = var86;
RET_LABEL85:(void)0;
}
}
var87 = !var84;
if (var87){
goto BREAK_label88;
} else {
}
{
{ /* Inline modelize_property#AAttrPropdef#mreadpropdef (var_npropdef) on <var_npropdef:AAttrPropdef> */
var91 = var_npropdef->attrs[COLOR_nitc__modelize_property__AAttrPropdef___mreadpropdef].val; /* _mreadpropdef on <var_npropdef:AAttrPropdef> */
var89 = var91;
RET_LABEL90:(void)0;
}
}
if (unlikely(var89 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__rapid_type_analysis, 379);
fatal_exit(1);
}
var_mpropdef = var89;
var92 = NEW_nitc__RapidTypeVisitor(&type_nitc__RapidTypeVisitor);
{
((void(*)(val* self, val* p0))(var92->class->vft[COLOR_nitc__rapid_type_analysis__RapidTypeVisitor__analysis_61d]))(var92, self); /* analysis= on <var92:RapidTypeVisitor>*/
}
{
((void(*)(val* self, val* p0))(var92->class->vft[COLOR_nitc__rapid_type_analysis__RapidTypeVisitor__receiver_61d]))(var92, var_bound_mtype); /* receiver= on <var92:RapidTypeVisitor>*/
}
{
((void(*)(val* self, val* p0))(var92->class->vft[COLOR_nitc__rapid_type_analysis__RapidTypeVisitor__mpropdef_61d]))(var92, var_mpropdef); /* mpropdef= on <var92:RapidTypeVisitor>*/
}
{
((void(*)(val* self))(var92->class->vft[COLOR_core__kernel__Object__init]))(var92); /* init on <var92:RapidTypeVisitor>*/
}
var_v = var92;
{
{ /* Inline parser_nodes#AAttrPropdef#n_expr (var_npropdef) on <var_npropdef:AAttrPropdef> */
var95 = var_npropdef->attrs[COLOR_nitc__parser_nodes__AAttrPropdef___n_expr].val; /* _n_expr on <var_npropdef:AAttrPropdef> */
var93 = var95;
RET_LABEL94:(void)0;
}
}
{
nitc___nitc__Visitor___enter_visit(var_v, var93); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:RapidTypeVisitor>*/
}
{
{ /* Inline parser_nodes#AAttrPropdef#n_block (var_npropdef) on <var_npropdef:AAttrPropdef> */
var98 = var_npropdef->attrs[COLOR_nitc__parser_nodes__AAttrPropdef___n_block].val; /* _n_block on <var_npropdef:AAttrPropdef> */
var96 = var98;
RET_LABEL97:(void)0;
}
}
{
nitc___nitc__Visitor___enter_visit(var_v, var96); /* Direct call parser_nodes#Visitor#enter_visit on <var_v:RapidTypeVisitor>*/
}
BREAK_label88: (void)0;
{
((void(*)(val* self))((((long)var_80&3)?class_info[((long)var_80&3)]:var_80->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_80); /* next on <var_80:IndexedIterator[AAttrPropdef]>*/
}
}
BREAK_label82: (void)0;
{
((void(*)(val* self))((((long)var_80&3)?class_info[((long)var_80&3)]:var_80->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_80); /* finish on <var_80:IndexedIterator[AAttrPropdef]>*/
}
{
((void(*)(val* self))((((long)var_70&3)?class_info[((long)var_70&3)]:var_70->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_70); /* next on <var_70:Iterator[MClassDef]>*/
}
}
BREAK_label72: (void)0;
{
((void(*)(val* self))((((long)var_70&3)?class_info[((long)var_70&3)]:var_70->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_70); /* finish on <var_70:Iterator[MClassDef]>*/
}
RET_LABEL:;
}
/* method rapid_type_analysis#RapidTypeAnalysis#add_cast for (self: RapidTypeAnalysis, MType) */
void nitc___nitc__RapidTypeAnalysis___add_cast(val* self, val* p0) {
val* var_mtype /* var mtype: MType */;
short int var /* : Bool */;
val* var1 /* : HashSet[MType] */;
val* var3 /* : HashSet[MType] */;
val* var4 /* : HashSet[MType] */;
val* var6 /* : HashSet[MType] */;
var_mtype = p0;
{
var = ((short int(*)(val* self))(var_mtype->class->vft[COLOR_nitc__model__MType__need_anchor]))(var_mtype); /* need_anchor on <var_mtype:MType>*/
}
if (var){
{
{ /* Inline rapid_type_analysis#RapidTypeAnalysis#live_open_cast_types (self) on <self:RapidTypeAnalysis> */
var3 = self->attrs[COLOR_nitc__rapid_type_analysis__RapidTypeAnalysis___live_open_cast_types].val; /* _live_open_cast_types on <self:RapidTypeAnalysis> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _live_open_cast_types");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__rapid_type_analysis, 75);
fatal_exit(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
core___core__HashSet___core__abstract_collection__SimpleCollection__add(var1, var_mtype); /* Direct call hash_collection#HashSet#add on <var1:HashSet[MType]>*/
}
} else {
{
{ /* Inline rapid_type_analysis#RapidTypeAnalysis#live_cast_types (self) on <self:RapidTypeAnalysis> */
var6 = self->attrs[COLOR_nitc__rapid_type_analysis__RapidTypeAnalysis___live_cast_types].val; /* _live_cast_types on <self:RapidTypeAnalysis> */
if (unlikely(var6 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _live_cast_types");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__rapid_type_analysis, 72);
fatal_exit(1);
}
var4 = var6;
RET_LABEL5:(void)0;
}
}
{
core___core__HashSet___core__abstract_collection__SimpleCollection__add(var4, var_mtype); /* Direct call hash_collection#HashSet#add on <var4:HashSet[MType]>*/
}
}
RET_LABEL:;
}
/* method rapid_type_analysis#RapidTypeAnalysis#try_send for (self: RapidTypeAnalysis, MClassType, MMethod) */
void nitc___nitc__RapidTypeAnalysis___try_send(val* self, val* p0, val* p1) {
val* var_recv /* var recv: MClassType */;
val* var_mproperty /* var mproperty: MMethod */;
val* var /* : MClass */;
val* var2 /* : MClass */;
val* var3 /* : MClassDef */;
val* var5 /* : MClassDef */;
val* var6 /* : MClassType */;
val* var8 /* : MClassType */;
val* var9 /* : MModule */;
val* var11 /* : MModule */;
short int var12 /* : Bool */;
short int var13 /* : Bool */;
val* var14 /* : MModule */;
val* var16 /* : MModule */;
val* var17 /* : MPropDef */;
val* var_d /* var d: MMethodDef */;
var_recv = p0;
var_mproperty = p1;
{
{ /* Inline model#MClassType#mclass (var_recv) on <var_recv:MClassType> */
var2 = var_recv->attrs[COLOR_nitc__model__MClassType___mclass].val; /* _mclass on <var_recv:MClassType> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1197);
fatal_exit(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
{ /* Inline model#MClass#intro (var) on <var:MClass> */
var5 = var->attrs[COLOR_nitc__model__MClass___intro].val; /* _intro on <var:MClass> */
if (unlikely(var5 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 496);
fatal_exit(1);
}
var3 = var5;
RET_LABEL4:(void)0;
}
}
{
{ /* Inline model#MClassDef#bound_mtype (var3) on <var3:MClassDef> */
var8 = var3->attrs[COLOR_nitc__model__MClassDef___bound_mtype].val; /* _bound_mtype on <var3:MClassDef> */
if (unlikely(var8 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _bound_mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 594);
fatal_exit(1);
}
var6 = var8;
RET_LABEL7:(void)0;
}
}
var_recv = var6;
{
{ /* Inline rapid_type_analysis#RapidTypeAnalysis#mainmodule (self) on <self:RapidTypeAnalysis> */
var11 = self->attrs[COLOR_nitc__rapid_type_analysis__RapidTypeAnalysis___mainmodule].val; /* _mainmodule on <self:RapidTypeAnalysis> */
if (unlikely(var11 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mainmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__rapid_type_analysis, 56);
fatal_exit(1);
}
var9 = var11;
RET_LABEL10:(void)0;
}
}
{
var12 = nitc___nitc__MType___has_mproperty(var_recv, var9, var_mproperty);
}
var13 = !var12;
if (var13){
goto RET_LABEL;
} else {
}
{
{ /* Inline rapid_type_analysis#RapidTypeAnalysis#mainmodule (self) on <self:RapidTypeAnalysis> */
var16 = self->attrs[COLOR_nitc__rapid_type_analysis__RapidTypeAnalysis___mainmodule].val; /* _mainmodule on <self:RapidTypeAnalysis> */
if (unlikely(var16 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mainmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__rapid_type_analysis, 56);
fatal_exit(1);
}
var14 = var16;
RET_LABEL15:(void)0;
}
}
{
var17 = nitc___nitc__MProperty___lookup_first_definition(var_mproperty, var14, var_recv);
}
var_d = var17;
{
nitc___nitc__RapidTypeAnalysis___add_call(self, var_d); /* Direct call rapid_type_analysis#RapidTypeAnalysis#add_call on <self:RapidTypeAnalysis>*/
}
RET_LABEL:;
}
/* method rapid_type_analysis#RapidTypeAnalysis#add_call for (self: RapidTypeAnalysis, MMethodDef) */
void nitc___nitc__RapidTypeAnalysis___add_call(val* self, val* p0) {
val* var_mpropdef /* var mpropdef: MMethodDef */;
val* var /* : HashSet[MMethodDef] */;
val* var2 /* : HashSet[MMethodDef] */;
short int var3 /* : Bool */;
val* var4 /* : HashSet[MMethodDef] */;
val* var6 /* : HashSet[MMethodDef] */;
val* var7 /* : HashSet[MModule] */;
val* var9 /* : HashSet[MModule] */;
val* var10 /* : MClassDef */;
val* var12 /* : MClassDef */;
val* var13 /* : MModule */;
val* var15 /* : MModule */;
val* var16 /* : List[MMethodDef] */;
val* var18 /* : List[MMethodDef] */;
val* var19 /* : MProperty */;
val* var21 /* : MProperty */;
val* var_mproperty /* var mproperty: MMethod */;
val* var22 /* : Array[MPropDef] */;
val* var24 /* : Array[MPropDef] */;
long var25 /* : Int */;
long var27 /* : Int */;
short int var28 /* : Bool */;
short int var30 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var31 /* : Bool */;
val* var32 /* : Array[MPropDef] */;
val* var34 /* : Array[MPropDef] */;
val* var_ /* var : Array[MMethodDef] */;
val* var35 /* : IndexedIterator[nullable Object] */;
val* var_36 /* var : IndexedIterator[MMethodDef] */;
short int var37 /* : Bool */;
val* var38 /* : nullable Object */;
val* var_d /* var d: MMethodDef */;
val* var39 /* : HashSet[MMethodDef] */;
val* var41 /* : HashSet[MMethodDef] */;
short int var42 /* : Bool */;
short int var43 /* : Bool */;
val* var44 /* : Array[MMethod] */;
val* var46 /* : Array[MMethod] */;
val* var47 /* : MProperty */;
val* var49 /* : MProperty */;
var_mpropdef = p0;
{
{ /* Inline rapid_type_analysis#RapidTypeAnalysis#live_methoddefs (self) on <self:RapidTypeAnalysis> */
var2 = self->attrs[COLOR_nitc__rapid_type_analysis__RapidTypeAnalysis___live_methoddefs].val; /* _live_methoddefs on <self:RapidTypeAnalysis> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _live_methoddefs");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__rapid_type_analysis, 79);
fatal_exit(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
var3 = core___core__HashSet___core__abstract_collection__Collection__has(var, var_mpropdef);
}
if (var3){
goto RET_LABEL;
} else {
}
{
{ /* Inline rapid_type_analysis#RapidTypeAnalysis#live_methoddefs (self) on <self:RapidTypeAnalysis> */
var6 = self->attrs[COLOR_nitc__rapid_type_analysis__RapidTypeAnalysis___live_methoddefs].val; /* _live_methoddefs on <self:RapidTypeAnalysis> */
if (unlikely(var6 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _live_methoddefs");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__rapid_type_analysis, 79);
fatal_exit(1);
}
var4 = var6;
RET_LABEL5:(void)0;
}
}
{
core___core__HashSet___core__abstract_collection__SimpleCollection__add(var4, var_mpropdef); /* Direct call hash_collection#HashSet#add on <var4:HashSet[MMethodDef]>*/
}
{
{ /* Inline rapid_type_analysis#RapidTypeAnalysis#live_mmodules (self) on <self:RapidTypeAnalysis> */
var9 = self->attrs[COLOR_nitc__rapid_type_analysis__RapidTypeAnalysis___live_mmodules].val; /* _live_mmodules on <self:RapidTypeAnalysis> */
if (unlikely(var9 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _live_mmodules");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__rapid_type_analysis, 85);
fatal_exit(1);
}
var7 = var9;
RET_LABEL8:(void)0;
}
}
{
{ /* Inline model#MPropDef#mclassdef (var_mpropdef) on <var_mpropdef:MMethodDef> */
var12 = var_mpropdef->attrs[COLOR_nitc__model__MPropDef___mclassdef].val; /* _mclassdef on <var_mpropdef:MMethodDef> */
if (unlikely(var12 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2354);
fatal_exit(1);
}
var10 = var12;
RET_LABEL11:(void)0;
}
}
{
{ /* Inline model#MClassDef#mmodule (var10) on <var10:MClassDef> */
var15 = var10->attrs[COLOR_nitc__model__MClassDef___mmodule].val; /* _mmodule on <var10:MClassDef> */
if (unlikely(var15 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 588);
fatal_exit(1);
}
var13 = var15;
RET_LABEL14:(void)0;
}
}
{
core___core__HashSet___core__abstract_collection__SimpleCollection__add(var7, var13); /* Direct call hash_collection#HashSet#add on <var7:HashSet[MModule]>*/
}
{
{ /* Inline rapid_type_analysis#RapidTypeAnalysis#todo (self) on <self:RapidTypeAnalysis> */
var18 = self->attrs[COLOR_nitc__rapid_type_analysis__RapidTypeAnalysis___todo].val; /* _todo on <self:RapidTypeAnalysis> */
if (unlikely(var18 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _todo");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__rapid_type_analysis, 183);
fatal_exit(1);
}
var16 = var18;
RET_LABEL17:(void)0;
}
}
{
core___core__Sequence___SimpleCollection__add(var16, var_mpropdef); /* Direct call abstract_collection#Sequence#add on <var16:List[MMethodDef]>*/
}
{
{ /* Inline model#MPropDef#mproperty (var_mpropdef) on <var_mpropdef:MMethodDef> */
var21 = var_mpropdef->attrs[COLOR_nitc__model__MPropDef___mproperty].val; /* _mproperty on <var_mpropdef:MMethodDef> */
if (unlikely(var21 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2357);
fatal_exit(1);
}
var19 = var21;
RET_LABEL20:(void)0;
}
}
var_mproperty = var19;
{
{ /* Inline model#MProperty#mpropdefs (var_mproperty) on <var_mproperty:MMethod> */
var24 = var_mproperty->attrs[COLOR_nitc__model__MProperty___mpropdefs].val; /* _mpropdefs on <var_mproperty:MMethod> */
if (unlikely(var24 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mpropdefs");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2092);
fatal_exit(1);
}
var22 = var24;
RET_LABEL23:(void)0;
}
}
{
{ /* Inline array#AbstractArrayRead#length (var22) on <var22:Array[MPropDef](Array[MMethodDef])> */
var27 = var22->attrs[COLOR_core__array__AbstractArrayRead___length].l; /* _length on <var22:Array[MPropDef](Array[MMethodDef])> */
var25 = var27;
RET_LABEL26:(void)0;
}
}
{
{ /* Inline kernel#Int#<= (var25,1l) on <var25:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var30 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var30)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 724);
fatal_exit(1);
}
var31 = var25 <= 1l;
var28 = var31;
goto RET_LABEL29;
RET_LABEL29:(void)0;
}
}
if (var28){
goto RET_LABEL;
} else {
}
{
{ /* Inline model#MProperty#mpropdefs (var_mproperty) on <var_mproperty:MMethod> */
var34 = var_mproperty->attrs[COLOR_nitc__model__MProperty___mpropdefs].val; /* _mpropdefs on <var_mproperty:MMethod> */
if (unlikely(var34 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mpropdefs");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2092);
fatal_exit(1);
}
var32 = var34;
RET_LABEL33:(void)0;
}
}
var_ = var32;
{
var35 = core___core__AbstractArrayRead___core__abstract_collection__Collection__iterator(var_);
}
var_36 = var35;
for(;;) {
{
var37 = ((short int(*)(val* self))((((long)var_36&3)?class_info[((long)var_36&3)]:var_36->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_36); /* is_ok on <var_36:IndexedIterator[MMethodDef]>*/
}
if (var37){
} else {
goto BREAK_label;
}
{
var38 = ((val*(*)(val* self))((((long)var_36&3)?class_info[((long)var_36&3)]:var_36->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_36); /* item on <var_36:IndexedIterator[MMethodDef]>*/
}
var_d = var38;
{
{ /* Inline rapid_type_analysis#RapidTypeAnalysis#live_methoddefs (self) on <self:RapidTypeAnalysis> */
var41 = self->attrs[COLOR_nitc__rapid_type_analysis__RapidTypeAnalysis___live_methoddefs].val; /* _live_methoddefs on <self:RapidTypeAnalysis> */
if (unlikely(var41 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _live_methoddefs");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__rapid_type_analysis, 79);
fatal_exit(1);
}
var39 = var41;
RET_LABEL40:(void)0;
}
}
{
var42 = core___core__HashSet___core__abstract_collection__Collection__has(var39, var_d);
}
var43 = !var42;
if (var43){
goto RET_LABEL;
} else {
}
{
((void(*)(val* self))((((long)var_36&3)?class_info[((long)var_36&3)]:var_36->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_36); /* next on <var_36:IndexedIterator[MMethodDef]>*/
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_36&3)?class_info[((long)var_36&3)]:var_36->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_36); /* finish on <var_36:IndexedIterator[MMethodDef]>*/
}
{
{ /* Inline rapid_type_analysis#RapidTypeAnalysis#totry_methods_to_remove (self) on <self:RapidTypeAnalysis> */
var46 = self->attrs[COLOR_nitc__rapid_type_analysis__RapidTypeAnalysis___totry_methods_to_remove].val; /* _totry_methods_to_remove on <self:RapidTypeAnalysis> */
if (unlikely(var46 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _totry_methods_to_remove");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__rapid_type_analysis, 176);
fatal_exit(1);
}
var44 = var46;
RET_LABEL45:(void)0;
}
}
{
{ /* Inline model#MPropDef#mproperty (var_mpropdef) on <var_mpropdef:MMethodDef> */
var49 = var_mpropdef->attrs[COLOR_nitc__model__MPropDef___mproperty].val; /* _mproperty on <var_mpropdef:MMethodDef> */
if (unlikely(var49 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2357);
fatal_exit(1);
}
var47 = var49;
RET_LABEL48:(void)0;
}
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var44, var47); /* Direct call array#Array#add on <var44:Array[MMethod]>*/
}
RET_LABEL:;
}
/* method rapid_type_analysis#RapidTypeAnalysis#add_send for (self: RapidTypeAnalysis, MType, MMethod) */
void nitc___nitc__RapidTypeAnalysis___add_send(val* self, val* p0, val* p1) {
val* var_recv /* var recv: MType */;
val* var_mproperty /* var mproperty: MMethod */;
val* var /* : HashSet[MMethod] */;
val* var2 /* : HashSet[MMethod] */;
short int var3 /* : Bool */;
val* var4 /* : HashSet[MMethod] */;
val* var6 /* : HashSet[MMethod] */;
val* var7 /* : HashSet[MMethod] */;
val* var9 /* : HashSet[MMethod] */;
val* var10 /* : Array[MPropDef] */;
val* var12 /* : Array[MPropDef] */;
long var13 /* : Int */;
long var15 /* : Int */;
short int var16 /* : Bool */;
short int var18 /* : Bool */;
val* var19 /* : Array[MPropDef] */;
val* var21 /* : Array[MPropDef] */;
val* var22 /* : nullable Object */;
val* var_d /* var d: MMethodDef */;
val* var23 /* : HashSet[MMethod] */;
val* var25 /* : HashSet[MMethod] */;
val* var26 /* : HashSet[MClass] */;
val* var28 /* : HashSet[MClass] */;
val* var_ /* var : HashSet[MClass] */;
val* var29 /* : Iterator[nullable Object] */;
val* var_30 /* var : Iterator[MClass] */;
short int var31 /* : Bool */;
val* var32 /* : nullable Object */;
val* var_c /* var c: MClass */;
val* var33 /* : MClassDef */;
val* var35 /* : MClassDef */;
val* var36 /* : MClassType */;
val* var38 /* : MClassType */;
var_recv = p0;
var_mproperty = p1;
{
{ /* Inline rapid_type_analysis#RapidTypeAnalysis#try_methods (self) on <self:RapidTypeAnalysis> */
var2 = self->attrs[COLOR_nitc__rapid_type_analysis__RapidTypeAnalysis___try_methods].val; /* _try_methods on <self:RapidTypeAnalysis> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _try_methods");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__rapid_type_analysis, 179);
fatal_exit(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
var3 = core___core__HashSet___core__abstract_collection__Collection__has(var, var_mproperty);
}
if (var3){
goto RET_LABEL;
} else {
}
{
{ /* Inline rapid_type_analysis#RapidTypeAnalysis#live_methods (self) on <self:RapidTypeAnalysis> */
var6 = self->attrs[COLOR_nitc__rapid_type_analysis__RapidTypeAnalysis___live_methods].val; /* _live_methods on <self:RapidTypeAnalysis> */
if (unlikely(var6 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _live_methods");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__rapid_type_analysis, 82);
fatal_exit(1);
}
var4 = var6;
RET_LABEL5:(void)0;
}
}
{
core___core__HashSet___core__abstract_collection__SimpleCollection__add(var4, var_mproperty); /* Direct call hash_collection#HashSet#add on <var4:HashSet[MMethod]>*/
}
{
{ /* Inline rapid_type_analysis#RapidTypeAnalysis#try_methods (self) on <self:RapidTypeAnalysis> */
var9 = self->attrs[COLOR_nitc__rapid_type_analysis__RapidTypeAnalysis___try_methods].val; /* _try_methods on <self:RapidTypeAnalysis> */
if (unlikely(var9 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _try_methods");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__rapid_type_analysis, 179);
fatal_exit(1);
}
var7 = var9;
RET_LABEL8:(void)0;
}
}
{
core___core__HashSet___core__abstract_collection__SimpleCollection__add(var7, var_mproperty); /* Direct call hash_collection#HashSet#add on <var7:HashSet[MMethod]>*/
}
{
{ /* Inline model#MProperty#mpropdefs (var_mproperty) on <var_mproperty:MMethod> */
var12 = var_mproperty->attrs[COLOR_nitc__model__MProperty___mpropdefs].val; /* _mpropdefs on <var_mproperty:MMethod> */
if (unlikely(var12 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mpropdefs");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2092);
fatal_exit(1);
}
var10 = var12;
RET_LABEL11:(void)0;
}
}
{
{ /* Inline array#AbstractArrayRead#length (var10) on <var10:Array[MPropDef](Array[MMethodDef])> */
var15 = var10->attrs[COLOR_core__array__AbstractArrayRead___length].l; /* _length on <var10:Array[MPropDef](Array[MMethodDef])> */
var13 = var15;
RET_LABEL14:(void)0;
}
}
{
{ /* Inline kernel#Int#== (var13,1l) on <var13:Int> */
var18 = var13 == 1l;
var16 = var18;
goto RET_LABEL17;
RET_LABEL17:(void)0;
}
}
if (var16){
{
{ /* Inline model#MProperty#mpropdefs (var_mproperty) on <var_mproperty:MMethod> */
var21 = var_mproperty->attrs[COLOR_nitc__model__MProperty___mpropdefs].val; /* _mpropdefs on <var_mproperty:MMethod> */
if (unlikely(var21 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mpropdefs");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2092);
fatal_exit(1);
}
var19 = var21;
RET_LABEL20:(void)0;
}
}
{
var22 = core___core__SequenceRead___Collection__first(var19);
}
var_d = var22;
{
nitc___nitc__RapidTypeAnalysis___add_call(self, var_d); /* Direct call rapid_type_analysis#RapidTypeAnalysis#add_call on <self:RapidTypeAnalysis>*/
}
goto RET_LABEL;
} else {
}
{
{ /* Inline rapid_type_analysis#RapidTypeAnalysis#totry_methods (self) on <self:RapidTypeAnalysis> */
var25 = self->attrs[COLOR_nitc__rapid_type_analysis__RapidTypeAnalysis___totry_methods].val; /* _totry_methods on <self:RapidTypeAnalysis> */
if (unlikely(var25 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _totry_methods");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__rapid_type_analysis, 173);
fatal_exit(1);
}
var23 = var25;
RET_LABEL24:(void)0;
}
}
{
core___core__HashSet___core__abstract_collection__SimpleCollection__add(var23, var_mproperty); /* Direct call hash_collection#HashSet#add on <var23:HashSet[MMethod]>*/
}
{
{ /* Inline rapid_type_analysis#RapidTypeAnalysis#live_classes (self) on <self:RapidTypeAnalysis> */
var28 = self->attrs[COLOR_nitc__rapid_type_analysis__RapidTypeAnalysis___live_classes].val; /* _live_classes on <self:RapidTypeAnalysis> */
if (unlikely(var28 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _live_classes");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__rapid_type_analysis, 69);
fatal_exit(1);
}
var26 = var28;
RET_LABEL27:(void)0;
}
}
var_ = var26;
{
var29 = core___core__HashSet___core__abstract_collection__Collection__iterator(var_);
}
var_30 = var29;
for(;;) {
{
var31 = ((short int(*)(val* self))((((long)var_30&3)?class_info[((long)var_30&3)]:var_30->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_30); /* is_ok on <var_30:Iterator[MClass]>*/
}
if (var31){
} else {
goto BREAK_label;
}
{
var32 = ((val*(*)(val* self))((((long)var_30&3)?class_info[((long)var_30&3)]:var_30->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_30); /* item on <var_30:Iterator[MClass]>*/
}
var_c = var32;
{
{ /* Inline model#MClass#intro (var_c) on <var_c:MClass> */
var35 = var_c->attrs[COLOR_nitc__model__MClass___intro].val; /* _intro on <var_c:MClass> */
if (unlikely(var35 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 496);
fatal_exit(1);
}
var33 = var35;
RET_LABEL34:(void)0;
}
}
{
{ /* Inline model#MClassDef#bound_mtype (var33) on <var33:MClassDef> */
var38 = var33->attrs[COLOR_nitc__model__MClassDef___bound_mtype].val; /* _bound_mtype on <var33:MClassDef> */
if (unlikely(var38 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _bound_mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 594);
fatal_exit(1);
}
var36 = var38;
RET_LABEL37:(void)0;
}
}
{
nitc___nitc__RapidTypeAnalysis___try_send(self, var36, var_mproperty); /* Direct call rapid_type_analysis#RapidTypeAnalysis#try_send on <self:RapidTypeAnalysis>*/
}
{
((void(*)(val* self))((((long)var_30&3)?class_info[((long)var_30&3)]:var_30->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_30); /* next on <var_30:Iterator[MClass]>*/
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_30&3)?class_info[((long)var_30&3)]:var_30->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_30); /* finish on <var_30:Iterator[MClass]>*/
}
RET_LABEL:;
}
/* method rapid_type_analysis#RapidTypeAnalysis#try_super_send for (self: RapidTypeAnalysis, MClassType, MMethodDef) */
void nitc___nitc__RapidTypeAnalysis___try_super_send(val* self, val* p0, val* p1) {
val* var_recv /* var recv: MClassType */;
val* var_mpropdef /* var mpropdef: MMethodDef */;
val* var /* : MClass */;
val* var2 /* : MClass */;
val* var3 /* : MClassDef */;
val* var5 /* : MClassDef */;
val* var6 /* : MClassType */;
val* var8 /* : MClassType */;
val* var9 /* : MModule */;
val* var11 /* : MModule */;
val* var12 /* : Set[MClassDef] */;
val* var13 /* : MClassDef */;
val* var15 /* : MClassDef */;
short int var16 /* : Bool */;
short int var17 /* : Bool */;
val* var18 /* : MModule */;
val* var20 /* : MModule */;
val* var21 /* : MPropDef */;
val* var_d /* var d: MMethodDef */;
var_recv = p0;
var_mpropdef = p1;
{
{ /* Inline model#MClassType#mclass (var_recv) on <var_recv:MClassType> */
var2 = var_recv->attrs[COLOR_nitc__model__MClassType___mclass].val; /* _mclass on <var_recv:MClassType> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1197);
fatal_exit(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
{ /* Inline model#MClass#intro (var) on <var:MClass> */
var5 = var->attrs[COLOR_nitc__model__MClass___intro].val; /* _intro on <var:MClass> */
if (unlikely(var5 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 496);
fatal_exit(1);
}
var3 = var5;
RET_LABEL4:(void)0;
}
}
{
{ /* Inline model#MClassDef#bound_mtype (var3) on <var3:MClassDef> */
var8 = var3->attrs[COLOR_nitc__model__MClassDef___bound_mtype].val; /* _bound_mtype on <var3:MClassDef> */
if (unlikely(var8 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _bound_mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 594);
fatal_exit(1);
}
var6 = var8;
RET_LABEL7:(void)0;
}
}
var_recv = var6;
{
{ /* Inline rapid_type_analysis#RapidTypeAnalysis#mainmodule (self) on <self:RapidTypeAnalysis> */
var11 = self->attrs[COLOR_nitc__rapid_type_analysis__RapidTypeAnalysis___mainmodule].val; /* _mainmodule on <self:RapidTypeAnalysis> */
if (unlikely(var11 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mainmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__rapid_type_analysis, 56);
fatal_exit(1);
}
var9 = var11;
RET_LABEL10:(void)0;
}
}
{
var12 = nitc___nitc__MClassType___MType__collect_mclassdefs(var_recv, var9);
}
{
{ /* Inline model#MPropDef#mclassdef (var_mpropdef) on <var_mpropdef:MMethodDef> */
var15 = var_mpropdef->attrs[COLOR_nitc__model__MPropDef___mclassdef].val; /* _mclassdef on <var_mpropdef:MMethodDef> */
if (unlikely(var15 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2354);
fatal_exit(1);
}
var13 = var15;
RET_LABEL14:(void)0;
}
}
{
var16 = ((short int(*)(val* self, val* p0))((((long)var12&3)?class_info[((long)var12&3)]:var12->class)->vft[COLOR_core__abstract_collection__Collection__has]))(var12, var13); /* has on <var12:Set[MClassDef]>*/
}
var17 = !var16;
if (var17){
goto RET_LABEL;
} else {
}
{
{ /* Inline rapid_type_analysis#RapidTypeAnalysis#mainmodule (self) on <self:RapidTypeAnalysis> */
var20 = self->attrs[COLOR_nitc__rapid_type_analysis__RapidTypeAnalysis___mainmodule].val; /* _mainmodule on <self:RapidTypeAnalysis> */
if (unlikely(var20 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mainmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__rapid_type_analysis, 56);
fatal_exit(1);
}
var18 = var20;
RET_LABEL19:(void)0;
}
}
{
var21 = nitc___nitc__MPropDef___lookup_next_definition(var_mpropdef, var18, var_recv);
}
var_d = var21;
{
nitc___nitc__RapidTypeAnalysis___add_call(self, var_d); /* Direct call rapid_type_analysis#RapidTypeAnalysis#add_call on <self:RapidTypeAnalysis>*/
}
RET_LABEL:;
}
/* method rapid_type_analysis#RapidTypeAnalysis#add_super_send for (self: RapidTypeAnalysis, MType, MMethodDef) */
void nitc___nitc__RapidTypeAnalysis___add_super_send(val* self, val* p0, val* p1) {
val* var_recv /* var recv: MType */;
val* var_mpropdef /* var mpropdef: MMethodDef */;
short int var /* : Bool */;
short int var2 /* : Bool */;
val* var3 /* : HashSet[MMethodDef] */;
val* var5 /* : HashSet[MMethodDef] */;
short int var6 /* : Bool */;
val* var7 /* : HashSet[MMethodDef] */;
val* var9 /* : HashSet[MMethodDef] */;
val* var10 /* : HashSet[MClass] */;
val* var12 /* : HashSet[MClass] */;
val* var_ /* var : HashSet[MClass] */;
val* var13 /* : Iterator[nullable Object] */;
val* var_14 /* var : Iterator[MClass] */;
short int var15 /* : Bool */;
val* var16 /* : nullable Object */;
val* var_c /* var c: MClass */;
val* var17 /* : MClassDef */;
val* var19 /* : MClassDef */;
val* var20 /* : MClassType */;
val* var22 /* : MClassType */;
var_recv = p0;
var_mpropdef = p1;
{
{ /* Inline modelize_property#MPropDef#has_supercall (var_mpropdef) on <var_mpropdef:MMethodDef> */
var2 = var_mpropdef->attrs[COLOR_nitc__modelize_property__MPropDef___has_supercall].s; /* _has_supercall on <var_mpropdef:MMethodDef> */
var = var2;
RET_LABEL1:(void)0;
}
}
if (unlikely(!var)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__rapid_type_analysis, 452);
fatal_exit(1);
}
{
{ /* Inline rapid_type_analysis#RapidTypeAnalysis#live_super_sends (self) on <self:RapidTypeAnalysis> */
var5 = self->attrs[COLOR_nitc__rapid_type_analysis__RapidTypeAnalysis___live_super_sends].val; /* _live_super_sends on <self:RapidTypeAnalysis> */
if (unlikely(var5 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _live_super_sends");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__rapid_type_analysis, 118);
fatal_exit(1);
}
var3 = var5;
RET_LABEL4:(void)0;
}
}
{
var6 = core___core__HashSet___core__abstract_collection__Collection__has(var3, var_mpropdef);
}
if (var6){
goto RET_LABEL;
} else {
}
{
{ /* Inline rapid_type_analysis#RapidTypeAnalysis#live_super_sends (self) on <self:RapidTypeAnalysis> */
var9 = self->attrs[COLOR_nitc__rapid_type_analysis__RapidTypeAnalysis___live_super_sends].val; /* _live_super_sends on <self:RapidTypeAnalysis> */
if (unlikely(var9 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _live_super_sends");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__rapid_type_analysis, 118);
fatal_exit(1);
}
var7 = var9;
RET_LABEL8:(void)0;
}
}
{
core___core__HashSet___core__abstract_collection__SimpleCollection__add(var7, var_mpropdef); /* Direct call hash_collection#HashSet#add on <var7:HashSet[MMethodDef]>*/
}
{
{ /* Inline rapid_type_analysis#RapidTypeAnalysis#live_classes (self) on <self:RapidTypeAnalysis> */
var12 = self->attrs[COLOR_nitc__rapid_type_analysis__RapidTypeAnalysis___live_classes].val; /* _live_classes on <self:RapidTypeAnalysis> */
if (unlikely(var12 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _live_classes");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__rapid_type_analysis, 69);
fatal_exit(1);
}
var10 = var12;
RET_LABEL11:(void)0;
}
}
var_ = var10;
{
var13 = core___core__HashSet___core__abstract_collection__Collection__iterator(var_);
}
var_14 = var13;
for(;;) {
{
var15 = ((short int(*)(val* self))((((long)var_14&3)?class_info[((long)var_14&3)]:var_14->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_14); /* is_ok on <var_14:Iterator[MClass]>*/
}
if (var15){
} else {
goto BREAK_label;
}
{
var16 = ((val*(*)(val* self))((((long)var_14&3)?class_info[((long)var_14&3)]:var_14->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_14); /* item on <var_14:Iterator[MClass]>*/
}
var_c = var16;
{
{ /* Inline model#MClass#intro (var_c) on <var_c:MClass> */
var19 = var_c->attrs[COLOR_nitc__model__MClass___intro].val; /* _intro on <var_c:MClass> */
if (unlikely(var19 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 496);
fatal_exit(1);
}
var17 = var19;
RET_LABEL18:(void)0;
}
}
{
{ /* Inline model#MClassDef#bound_mtype (var17) on <var17:MClassDef> */
var22 = var17->attrs[COLOR_nitc__model__MClassDef___bound_mtype].val; /* _bound_mtype on <var17:MClassDef> */
if (unlikely(var22 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _bound_mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 594);
fatal_exit(1);
}
var20 = var22;
RET_LABEL21:(void)0;
}
}
{
nitc___nitc__RapidTypeAnalysis___try_super_send(self, var20, var_mpropdef); /* Direct call rapid_type_analysis#RapidTypeAnalysis#try_super_send on <self:RapidTypeAnalysis>*/
}
{
((void(*)(val* self))((((long)var_14&3)?class_info[((long)var_14&3)]:var_14->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_14); /* next on <var_14:Iterator[MClass]>*/
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_14&3)?class_info[((long)var_14&3)]:var_14->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_14); /* finish on <var_14:Iterator[MClass]>*/
}
RET_LABEL:;
}
/* method rapid_type_analysis#RapidTypeAnalysis#init for (self: RapidTypeAnalysis) */
void nitc___nitc__RapidTypeAnalysis___core__kernel__Object__init(val* self) {
{
((void(*)(val* self))(self->class->vft[COLOR_nitc___nitc__RapidTypeAnalysis___core__kernel__Object__init]))(self); /* init on <self:RapidTypeAnalysis>*/
}
RET_LABEL:;
}
/* method rapid_type_analysis#RapidTypeVisitor#analysis for (self: RapidTypeVisitor): RapidTypeAnalysis */
val* nitc___nitc__RapidTypeVisitor___analysis(val* self) {
val* var /* : RapidTypeAnalysis */;
val* var1 /* : RapidTypeAnalysis */;
var1 = self->attrs[COLOR_nitc__rapid_type_analysis__RapidTypeVisitor___analysis].val; /* _analysis on <self:RapidTypeVisitor> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _analysis");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__rapid_type_analysis, 465);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method rapid_type_analysis#RapidTypeVisitor#analysis= for (self: RapidTypeVisitor, RapidTypeAnalysis) */
void nitc___nitc__RapidTypeVisitor___analysis_61d(val* self, val* p0) {
self->attrs[COLOR_nitc__rapid_type_analysis__RapidTypeVisitor___analysis].val = p0; /* _analysis on <self:RapidTypeVisitor> */
RET_LABEL:;
}
/* method rapid_type_analysis#RapidTypeVisitor#receiver for (self: RapidTypeVisitor): MClassType */
val* nitc___nitc__RapidTypeVisitor___receiver(val* self) {
val* var /* : MClassType */;
val* var1 /* : MClassType */;
var1 = self->attrs[COLOR_nitc__rapid_type_analysis__RapidTypeVisitor___receiver].val; /* _receiver on <self:RapidTypeVisitor> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _receiver");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__rapid_type_analysis, 466);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method rapid_type_analysis#RapidTypeVisitor#receiver= for (self: RapidTypeVisitor, MClassType) */
void nitc___nitc__RapidTypeVisitor___receiver_61d(val* self, val* p0) {
self->attrs[COLOR_nitc__rapid_type_analysis__RapidTypeVisitor___receiver].val = p0; /* _receiver on <self:RapidTypeVisitor> */
RET_LABEL:;
}
/* method rapid_type_analysis#RapidTypeVisitor#mpropdef= for (self: RapidTypeVisitor, MPropDef) */
void nitc___nitc__RapidTypeVisitor___mpropdef_61d(val* self, val* p0) {
self->attrs[COLOR_nitc__rapid_type_analysis__RapidTypeVisitor___mpropdef].val = p0; /* _mpropdef on <self:RapidTypeVisitor> */
RET_LABEL:;
}
/* method rapid_type_analysis#RapidTypeVisitor#init for (self: RapidTypeVisitor) */
void nitc___nitc__RapidTypeVisitor___core__kernel__Object__init(val* self) {
val* var /* : MClassType */;
val* var2 /* : MClassType */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
{
((void(*)(val* self))(self->class->vft[COLOR_nitc___nitc__RapidTypeVisitor___core__kernel__Object__init]))(self); /* init on <self:RapidTypeVisitor>*/
}
{
{ /* Inline rapid_type_analysis#RapidTypeVisitor#receiver (self) on <self:RapidTypeVisitor> */
var2 = self->attrs[COLOR_nitc__rapid_type_analysis__RapidTypeVisitor___receiver].val; /* _receiver on <self:RapidTypeVisitor> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _receiver");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__rapid_type_analysis, 466);
fatal_exit(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
var3 = ((short int(*)(val* self))(var->class->vft[COLOR_nitc__model__MType__need_anchor]))(var); /* need_anchor on <var:MClassType>*/
}
var4 = !var3;
if (unlikely(!var4)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__rapid_type_analysis, 471);
fatal_exit(1);
}
RET_LABEL:;
}
/* method rapid_type_analysis#RapidTypeVisitor#visit for (self: RapidTypeVisitor, ANode) */
void nitc___nitc__RapidTypeVisitor___nitc__parser_nodes__Visitor__visit(val* self, val* p0) {
val* var_n /* var n: ANode */;
short int var /* : Bool */;
int cltype;
int idtype;
short int var1 /* : Bool */;
val* var2 /* : nullable MType */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var6 /* : Bool */;
short int var7 /* : Bool */;
short int var_ /* var : Bool */;
short int var8 /* : Bool */;
short int var10 /* : Bool */;
val* var11 /* : nullable MType */;
val* var13 /* : nullable MType */;
val* var_implicit_cast_to /* var implicit_cast_to: nullable MType */;
short int var14 /* : Bool */;
short int var15 /* : Bool */;
short int var17 /* : Bool */;
short int var18 /* : Bool */;
short int var19 /* : Bool */;
int cltype20;
int idtype21;
short int var22 /* : Bool */;
var_n = p0;
/* <var_n:ANode> isa AExpr */
cltype = type_nitc__AExpr.color;
idtype = type_nitc__AExpr.id;
if(cltype >= var_n->type->table_size) {
var = 0;
} else {
var = var_n->type->type_table[cltype] == idtype;
}
if (var){
{
var2 = ((val*(*)(val* self))(var_n->class->vft[COLOR_nitc__typing__AExpr__mtype]))(var_n); /* mtype on <var_n:ANode(AExpr)>*/
}
if (var2 == NULL) {
var3 = 0; /* is null */
} else {
var3 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var2,((val*)NULL)) on <var2:nullable MType> */
var_other = ((val*)NULL);
{
var6 = ((short int(*)(val* self, val* p0))(var2->class->vft[COLOR_core__kernel__Object___61d_61d]))(var2, var_other); /* == on <var2:nullable MType(MType)>*/
}
var7 = !var6;
var4 = var7;
goto RET_LABEL5;
RET_LABEL5:(void)0;
}
var3 = var4;
}
var_ = var3;
if (var3){
var1 = var_;
} else {
{
{ /* Inline typing#AExpr#is_typed (var_n) on <var_n:ANode(AExpr)> */
var10 = var_n->attrs[COLOR_nitc__typing__AExpr___is_typed].s; /* _is_typed on <var_n:ANode(AExpr)> */
var8 = var10;
RET_LABEL9:(void)0;
}
}
var1 = var8;
}
if (var1){
{
((void(*)(val* self, val* p0))(var_n->class->vft[COLOR_nitc__rapid_type_analysis__ANode__accept_rapid_type_visitor]))(var_n, self); /* accept_rapid_type_visitor on <var_n:ANode(AExpr)>*/
}
{
{ /* Inline typing#AExpr#implicit_cast_to (var_n) on <var_n:ANode(AExpr)> */
var13 = var_n->attrs[COLOR_nitc__typing__AExpr___implicit_cast_to].val; /* _implicit_cast_to on <var_n:ANode(AExpr)> */
var11 = var13;
RET_LABEL12:(void)0;
}
}
var_implicit_cast_to = var11;
if (var_implicit_cast_to == NULL) {
var14 = 0; /* is null */
} else {
var14 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_implicit_cast_to,((val*)NULL)) on <var_implicit_cast_to:nullable MType> */
var_other = ((val*)NULL);
{
var17 = ((short int(*)(val* self, val* p0))(var_implicit_cast_to->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_implicit_cast_to, var_other); /* == on <var_implicit_cast_to:nullable MType(MType)>*/
}
var18 = !var17;
var15 = var18;
goto RET_LABEL16;
RET_LABEL16:(void)0;
}
var14 = var15;
}
if (var14){
{
nitc___nitc__RapidTypeVisitor___add_cast_type(self, var_implicit_cast_to); /* Direct call rapid_type_analysis#RapidTypeVisitor#add_cast_type on <self:RapidTypeVisitor>*/
}
} else {
}
} else {
}
} else {
{
((void(*)(val* self, val* p0))(var_n->class->vft[COLOR_nitc__rapid_type_analysis__ANode__accept_rapid_type_visitor]))(var_n, self); /* accept_rapid_type_visitor on <var_n:ANode>*/
}
}
/* <var_n:ANode> isa AAnnotations */
cltype20 = type_nitc__AAnnotations.color;
idtype21 = type_nitc__AAnnotations.id;
if(cltype20 >= var_n->type->table_size) {
var19 = 0;
} else {
var19 = var_n->type->type_table[cltype20] == idtype21;
}
var22 = !var19;
if (var22){
{
((void(*)(val* self, val* p0))(var_n->class->vft[COLOR_nitc__parser_nodes__ANode__visit_all]))(var_n, self); /* visit_all on <var_n:ANode>*/
}
} else {
}
RET_LABEL:;
}
/* method rapid_type_analysis#RapidTypeVisitor#cleanup_type for (self: RapidTypeVisitor, MType): nullable MClassType */
val* nitc___nitc__RapidTypeVisitor___cleanup_type(val* self, val* p0) {
val* var /* : nullable MClassType */;
val* var_mtype /* var mtype: MType */;
val* var1 /* : RapidTypeAnalysis */;
val* var3 /* : RapidTypeAnalysis */;
val* var4 /* : MModule */;
val* var6 /* : MModule */;
val* var7 /* : MClassType */;
val* var9 /* : MClassType */;
val* var10 /* : MType */;
short int var11 /* : Bool */;
int cltype;
int idtype;
val* var12 /* : MType */;
short int var13 /* : Bool */;
int cltype14;
int idtype15;
short int var16 /* : Bool */;
short int var17 /* : Bool */;
var_mtype = p0;
{
{ /* Inline rapid_type_analysis#RapidTypeVisitor#analysis (self) on <self:RapidTypeVisitor> */
var3 = self->attrs[COLOR_nitc__rapid_type_analysis__RapidTypeVisitor___analysis].val; /* _analysis on <self:RapidTypeVisitor> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _analysis");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__rapid_type_analysis, 465);
fatal_exit(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
{ /* Inline rapid_type_analysis#RapidTypeAnalysis#mainmodule (var1) on <var1:RapidTypeAnalysis> */
var6 = var1->attrs[COLOR_nitc__rapid_type_analysis__RapidTypeAnalysis___mainmodule].val; /* _mainmodule on <var1:RapidTypeAnalysis> */
if (unlikely(var6 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mainmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__rapid_type_analysis, 56);
fatal_exit(1);
}
var4 = var6;
RET_LABEL5:(void)0;
}
}
{
{ /* Inline rapid_type_analysis#RapidTypeVisitor#receiver (self) on <self:RapidTypeVisitor> */
var9 = self->attrs[COLOR_nitc__rapid_type_analysis__RapidTypeVisitor___receiver].val; /* _receiver on <self:RapidTypeVisitor> */
if (unlikely(var9 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _receiver");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__rapid_type_analysis, 466);
fatal_exit(1);
}
var7 = var9;
RET_LABEL8:(void)0;
}
}
{
var10 = ((val*(*)(val* self, val* p0, val* p1))(var_mtype->class->vft[COLOR_nitc__model__MType__anchor_to]))(var_mtype, var4, var7); /* anchor_to on <var_mtype:MType>*/
}
var_mtype = var10;
/* <var_mtype:MType> isa MNullType */
cltype = type_nitc__MNullType.color;
idtype = type_nitc__MNullType.id;
if(cltype >= var_mtype->type->table_size) {
var11 = 0;
} else {
var11 = var_mtype->type->type_table[cltype] == idtype;
}
if (var11){
var = ((val*)NULL);
goto RET_LABEL;
} else {
}
{
var12 = ((val*(*)(val* self))(var_mtype->class->vft[COLOR_nitc__model__MType__undecorate]))(var_mtype); /* undecorate on <var_mtype:MType>*/
}
var_mtype = var12;
/* <var_mtype:MType> isa MClassType */
cltype14 = type_nitc__MClassType.color;
idtype15 = type_nitc__MClassType.id;
if(cltype14 >= var_mtype->type->table_size) {
var13 = 0;
} else {
var13 = var_mtype->type->type_table[cltype14] == idtype15;
}
if (unlikely(!var13)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__rapid_type_analysis, 497);
fatal_exit(1);
}
{
var16 = ((short int(*)(val* self))(var_mtype->class->vft[COLOR_nitc__model__MType__need_anchor]))(var_mtype); /* need_anchor on <var_mtype:MType(MClassType)>*/
}
var17 = !var16;
if (unlikely(!var17)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__rapid_type_analysis, 498);
fatal_exit(1);
}
var = var_mtype;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method rapid_type_analysis#RapidTypeVisitor#get_method for (self: RapidTypeVisitor, MType, String): MMethod */
val* nitc___nitc__RapidTypeVisitor___get_method(val* self, val* p0, val* p1) {
val* var /* : MMethod */;
val* var_recv /* var recv: MType */;
val* var_name /* var name: String */;
val* var1 /* : nullable MClassType */;
val* var_mtype /* var mtype: nullable MClassType */;
short int var2 /* : Bool */;
short int var3 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
val* var7 /* : RapidTypeAnalysis */;
val* var9 /* : RapidTypeAnalysis */;
val* var10 /* : ModelBuilder */;
val* var12 /* : ModelBuilder */;
val* var13 /* : nullable ANode */;
val* var15 /* : nullable ANode */;
val* var16 /* : MClass */;
val* var18 /* : MClass */;
val* var19 /* : RapidTypeAnalysis */;
val* var21 /* : RapidTypeAnalysis */;
val* var22 /* : MModule */;
val* var24 /* : MModule */;
val* var25 /* : MMethod */;
var_recv = p0;
var_name = p1;
{
var1 = nitc___nitc__RapidTypeVisitor___cleanup_type(self, var_recv);
}
var_mtype = var1;
if (var_mtype == NULL) {
var2 = 0; /* is null */
} else {
var2 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_mtype,((val*)NULL)) on <var_mtype:nullable MClassType> */
var_other = ((val*)NULL);
{
var5 = ((short int(*)(val* self, val* p0))(var_mtype->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_mtype, var_other); /* == on <var_mtype:nullable MClassType(MClassType)>*/
}
var6 = !var5;
var3 = var6;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
var2 = var3;
}
if (unlikely(!var2)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__rapid_type_analysis, 505);
fatal_exit(1);
}
{
{ /* Inline rapid_type_analysis#RapidTypeVisitor#analysis (self) on <self:RapidTypeVisitor> */
var9 = self->attrs[COLOR_nitc__rapid_type_analysis__RapidTypeVisitor___analysis].val; /* _analysis on <self:RapidTypeVisitor> */
if (unlikely(var9 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _analysis");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__rapid_type_analysis, 465);
fatal_exit(1);
}
var7 = var9;
RET_LABEL8:(void)0;
}
}
{
{ /* Inline rapid_type_analysis#RapidTypeAnalysis#modelbuilder (var7) on <var7:RapidTypeAnalysis> */
var12 = var7->attrs[COLOR_nitc__rapid_type_analysis__RapidTypeAnalysis___modelbuilder].val; /* _modelbuilder on <var7:RapidTypeAnalysis> */
if (unlikely(var12 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__rapid_type_analysis, 53);
fatal_exit(1);
}
var10 = var12;
RET_LABEL11:(void)0;
}
}
{
{ /* Inline parser_nodes#Visitor#current_node (self) on <self:RapidTypeVisitor> */
var15 = self->attrs[COLOR_nitc__parser_nodes__Visitor___current_node].val; /* _current_node on <self:RapidTypeVisitor> */
var13 = var15;
RET_LABEL14:(void)0;
}
}
if (unlikely(var13 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__rapid_type_analysis, 506);
fatal_exit(1);
}
{
{ /* Inline model#MClassType#mclass (var_mtype) on <var_mtype:nullable MClassType(MClassType)> */
var18 = var_mtype->attrs[COLOR_nitc__model__MClassType___mclass].val; /* _mclass on <var_mtype:nullable MClassType(MClassType)> */
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
{ /* Inline rapid_type_analysis#RapidTypeVisitor#analysis (self) on <self:RapidTypeVisitor> */
var21 = self->attrs[COLOR_nitc__rapid_type_analysis__RapidTypeVisitor___analysis].val; /* _analysis on <self:RapidTypeVisitor> */
if (unlikely(var21 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _analysis");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__rapid_type_analysis, 465);
fatal_exit(1);
}
var19 = var21;
RET_LABEL20:(void)0;
}
}
{
{ /* Inline rapid_type_analysis#RapidTypeAnalysis#mainmodule (var19) on <var19:RapidTypeAnalysis> */
var24 = var19->attrs[COLOR_nitc__rapid_type_analysis__RapidTypeAnalysis___mainmodule].val; /* _mainmodule on <var19:RapidTypeAnalysis> */
if (unlikely(var24 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mainmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__rapid_type_analysis, 56);
fatal_exit(1);
}
var22 = var24;
RET_LABEL23:(void)0;
}
}
{
var25 = nitc___nitc__ModelBuilder___force_get_primitive_method(var10, var13, var_name, var16, var22);
}
var = var25;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method rapid_type_analysis#RapidTypeVisitor#add_type for (self: RapidTypeVisitor, MClassType) */
void nitc___nitc__RapidTypeVisitor___add_type(val* self, val* p0) {
val* var_mtype /* var mtype: MClassType */;
val* var /* : RapidTypeAnalysis */;
val* var2 /* : RapidTypeAnalysis */;
val* var3 /* : MClassType */;
val* var5 /* : MClassType */;
var_mtype = p0;
{
{ /* Inline rapid_type_analysis#RapidTypeVisitor#analysis (self) on <self:RapidTypeVisitor> */
var2 = self->attrs[COLOR_nitc__rapid_type_analysis__RapidTypeVisitor___analysis].val; /* _analysis on <self:RapidTypeVisitor> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _analysis");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__rapid_type_analysis, 465);
fatal_exit(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
{ /* Inline rapid_type_analysis#RapidTypeVisitor#receiver (self) on <self:RapidTypeVisitor> */
var5 = self->attrs[COLOR_nitc__rapid_type_analysis__RapidTypeVisitor___receiver].val; /* _receiver on <self:RapidTypeVisitor> */
if (unlikely(var5 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _receiver");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__rapid_type_analysis, 466);
fatal_exit(1);
}
var3 = var5;
RET_LABEL4:(void)0;
}
}
{
nitc___nitc__RapidTypeAnalysis___add_new(var, var3, var_mtype); /* Direct call rapid_type_analysis#RapidTypeAnalysis#add_new on <var:RapidTypeAnalysis>*/
}
RET_LABEL:;
}
/* method rapid_type_analysis#RapidTypeVisitor#add_monomorphic_send for (self: RapidTypeVisitor, MType, MMethod) */
void nitc___nitc__RapidTypeVisitor___add_monomorphic_send(val* self, val* p0, val* p1) {
val* var_mtype /* var mtype: MType */;
val* var_mproperty /* var mproperty: MMethod */;
val* var /* : RapidTypeAnalysis */;
val* var2 /* : RapidTypeAnalysis */;
val* var3 /* : HashSet[MMethod] */;
val* var5 /* : HashSet[MMethod] */;
val* var6 /* : RapidTypeAnalysis */;
val* var8 /* : RapidTypeAnalysis */;
short int var9 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
var_mtype = p0;
var_mproperty = p1;
{
{ /* Inline rapid_type_analysis#RapidTypeVisitor#analysis (self) on <self:RapidTypeVisitor> */
var2 = self->attrs[COLOR_nitc__rapid_type_analysis__RapidTypeVisitor___analysis].val; /* _analysis on <self:RapidTypeVisitor> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _analysis");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__rapid_type_analysis, 465);
fatal_exit(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
{ /* Inline rapid_type_analysis#RapidTypeAnalysis#live_methods (var) on <var:RapidTypeAnalysis> */
var5 = var->attrs[COLOR_nitc__rapid_type_analysis__RapidTypeAnalysis___live_methods].val; /* _live_methods on <var:RapidTypeAnalysis> */
if (unlikely(var5 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _live_methods");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__rapid_type_analysis, 82);
fatal_exit(1);
}
var3 = var5;
RET_LABEL4:(void)0;
}
}
{
core___core__HashSet___core__abstract_collection__SimpleCollection__add(var3, var_mproperty); /* Direct call hash_collection#HashSet#add on <var3:HashSet[MMethod]>*/
}
{
{ /* Inline rapid_type_analysis#RapidTypeVisitor#analysis (self) on <self:RapidTypeVisitor> */
var8 = self->attrs[COLOR_nitc__rapid_type_analysis__RapidTypeVisitor___analysis].val; /* _analysis on <self:RapidTypeVisitor> */
if (unlikely(var8 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _analysis");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__rapid_type_analysis, 465);
fatal_exit(1);
}
var6 = var8;
RET_LABEL7:(void)0;
}
}
/* <var_mtype:MType> isa MClassType */
cltype = type_nitc__MClassType.color;
idtype = type_nitc__MClassType.id;
if(cltype >= var_mtype->type->table_size) {
var9 = 0;
} else {
var9 = var_mtype->type->type_table[cltype] == idtype;
}
if (unlikely(!var9)) {
var_class_name = var_mtype == NULL ? "null" : var_mtype->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "MClassType", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__rapid_type_analysis, 514);
fatal_exit(1);
}
{
nitc___nitc__RapidTypeAnalysis___try_send(var6, var_mtype, var_mproperty); /* Direct call rapid_type_analysis#RapidTypeAnalysis#try_send on <var6:RapidTypeAnalysis>*/
}
RET_LABEL:;
}
/* method rapid_type_analysis#RapidTypeVisitor#add_send for (self: RapidTypeVisitor, MType, MMethod) */
void nitc___nitc__RapidTypeVisitor___add_send(val* self, val* p0, val* p1) {
val* var_mtype /* var mtype: MType */;
val* var_mproperty /* var mproperty: MMethod */;
val* var /* : RapidTypeAnalysis */;
val* var2 /* : RapidTypeAnalysis */;
var_mtype = p0;
var_mproperty = p1;
{
{ /* Inline rapid_type_analysis#RapidTypeVisitor#analysis (self) on <self:RapidTypeVisitor> */
var2 = self->attrs[COLOR_nitc__rapid_type_analysis__RapidTypeVisitor___analysis].val; /* _analysis on <self:RapidTypeVisitor> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _analysis");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__rapid_type_analysis, 465);
fatal_exit(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
nitc___nitc__RapidTypeAnalysis___add_send(var, var_mtype, var_mproperty); /* Direct call rapid_type_analysis#RapidTypeAnalysis#add_send on <var:RapidTypeAnalysis>*/
}
RET_LABEL:;
}
/* method rapid_type_analysis#RapidTypeVisitor#add_cast_type for (self: RapidTypeVisitor, MType) */
void nitc___nitc__RapidTypeVisitor___add_cast_type(val* self, val* p0) {
val* var_mtype /* var mtype: MType */;
val* var /* : RapidTypeAnalysis */;
val* var2 /* : RapidTypeAnalysis */;
var_mtype = p0;
{
{ /* Inline rapid_type_analysis#RapidTypeVisitor#analysis (self) on <self:RapidTypeVisitor> */
var2 = self->attrs[COLOR_nitc__rapid_type_analysis__RapidTypeVisitor___analysis].val; /* _analysis on <self:RapidTypeVisitor> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _analysis");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__rapid_type_analysis, 465);
fatal_exit(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
nitc___nitc__RapidTypeAnalysis___add_cast(var, var_mtype); /* Direct call rapid_type_analysis#RapidTypeAnalysis#add_cast on <var:RapidTypeAnalysis>*/
}
RET_LABEL:;
}
/* method rapid_type_analysis#RapidTypeVisitor#add_callsite for (self: RapidTypeVisitor, nullable CallSite) */
void nitc___nitc__RapidTypeVisitor___add_callsite(val* self, val* p0) {
val* var_callsite /* var callsite: nullable CallSite */;
short int var /* : Bool */;
short int var1 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
val* var5 /* : MMethodDef */;
val* var7 /* : MMethodDef */;
val* var8 /* : Array[MProperty] */;
val* var10 /* : Array[MProperty] */;
val* var_ /* var : Array[MProperty] */;
val* var11 /* : IndexedIterator[nullable Object] */;
val* var_12 /* var : IndexedIterator[MProperty] */;
short int var13 /* : Bool */;
val* var14 /* : nullable Object */;
val* var_m /* var m: MProperty */;
short int var15 /* : Bool */;
int cltype;
int idtype;
val* var16 /* : RapidTypeAnalysis */;
val* var18 /* : RapidTypeAnalysis */;
val* var19 /* : MType */;
val* var21 /* : MType */;
val* var22 /* : RapidTypeAnalysis */;
val* var24 /* : RapidTypeAnalysis */;
val* var25 /* : MType */;
val* var27 /* : MType */;
val* var28 /* : MMethod */;
val* var30 /* : MMethod */;
val* var31 /* : RapidTypeAnalysis */;
val* var33 /* : RapidTypeAnalysis */;
val* var34 /* : HashSet[CallSite] */;
val* var36 /* : HashSet[CallSite] */;
var_callsite = p0;
if (var_callsite == NULL) {
var = 0; /* is null */
} else {
var = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_callsite,((val*)NULL)) on <var_callsite:nullable CallSite> */
var_other = ((val*)NULL);
{
var3 = ((short int(*)(val* self, val* p0))(var_callsite->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_callsite, var_other); /* == on <var_callsite:nullable CallSite(CallSite)>*/
}
var4 = !var3;
var1 = var4;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
var = var1;
}
if (var){
{
{ /* Inline typing#CallSite#mpropdef (var_callsite) on <var_callsite:nullable CallSite(CallSite)> */
var7 = var_callsite->attrs[COLOR_nitc__typing__CallSite___mpropdef].val; /* _mpropdef on <var_callsite:nullable CallSite(CallSite)> */
if (unlikely(var7 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mpropdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__typing, 659);
fatal_exit(1);
}
var5 = var7;
RET_LABEL6:(void)0;
}
}
{
{ /* Inline model#MMethodDef#initializers (var5) on <var5:MMethodDef> */
var10 = var5->attrs[COLOR_nitc__model__MMethodDef___initializers].val; /* _initializers on <var5:MMethodDef> */
if (unlikely(var10 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _initializers");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2492);
fatal_exit(1);
}
var8 = var10;
RET_LABEL9:(void)0;
}
}
var_ = var8;
{
var11 = core___core__AbstractArrayRead___core__abstract_collection__Collection__iterator(var_);
}
var_12 = var11;
for(;;) {
{
var13 = ((short int(*)(val* self))((((long)var_12&3)?class_info[((long)var_12&3)]:var_12->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_12); /* is_ok on <var_12:IndexedIterator[MProperty]>*/
}
if (var13){
} else {
goto BREAK_label;
}
{
var14 = ((val*(*)(val* self))((((long)var_12&3)?class_info[((long)var_12&3)]:var_12->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_12); /* item on <var_12:IndexedIterator[MProperty]>*/
}
var_m = var14;
/* <var_m:MProperty> isa MMethod */
cltype = type_nitc__MMethod.color;
idtype = type_nitc__MMethod.id;
if(cltype >= var_m->type->table_size) {
var15 = 0;
} else {
var15 = var_m->type->type_table[cltype] == idtype;
}
if (var15){
{
{ /* Inline rapid_type_analysis#RapidTypeVisitor#analysis (self) on <self:RapidTypeVisitor> */
var18 = self->attrs[COLOR_nitc__rapid_type_analysis__RapidTypeVisitor___analysis].val; /* _analysis on <self:RapidTypeVisitor> */
if (unlikely(var18 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _analysis");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__rapid_type_analysis, 465);
fatal_exit(1);
}
var16 = var18;
RET_LABEL17:(void)0;
}
}
{
{ /* Inline typing#CallSite#recv (var_callsite) on <var_callsite:nullable CallSite(CallSite)> */
var21 = var_callsite->attrs[COLOR_nitc__typing__CallSite___recv].val; /* _recv on <var_callsite:nullable CallSite(CallSite)> */
if (unlikely(var21 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _recv");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__typing, 642);
fatal_exit(1);
}
var19 = var21;
RET_LABEL20:(void)0;
}
}
{
nitc___nitc__RapidTypeAnalysis___add_send(var16, var19, var_m); /* Direct call rapid_type_analysis#RapidTypeAnalysis#add_send on <var16:RapidTypeAnalysis>*/
}
} else {
}
{
((void(*)(val* self))((((long)var_12&3)?class_info[((long)var_12&3)]:var_12->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_12); /* next on <var_12:IndexedIterator[MProperty]>*/
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_12&3)?class_info[((long)var_12&3)]:var_12->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_12); /* finish on <var_12:IndexedIterator[MProperty]>*/
}
{
{ /* Inline rapid_type_analysis#RapidTypeVisitor#analysis (self) on <self:RapidTypeVisitor> */
var24 = self->attrs[COLOR_nitc__rapid_type_analysis__RapidTypeVisitor___analysis].val; /* _analysis on <self:RapidTypeVisitor> */
if (unlikely(var24 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _analysis");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__rapid_type_analysis, 465);
fatal_exit(1);
}
var22 = var24;
RET_LABEL23:(void)0;
}
}
{
{ /* Inline typing#CallSite#recv (var_callsite) on <var_callsite:nullable CallSite(CallSite)> */
var27 = var_callsite->attrs[COLOR_nitc__typing__CallSite___recv].val; /* _recv on <var_callsite:nullable CallSite(CallSite)> */
if (unlikely(var27 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _recv");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__typing, 642);
fatal_exit(1);
}
var25 = var27;
RET_LABEL26:(void)0;
}
}
{
{ /* Inline typing#CallSite#mproperty (var_callsite) on <var_callsite:nullable CallSite(CallSite)> */
var30 = var_callsite->attrs[COLOR_nitc__typing__CallSite___mproperty].val; /* _mproperty on <var_callsite:nullable CallSite(CallSite)> */
if (unlikely(var30 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__typing, 656);
fatal_exit(1);
}
var28 = var30;
RET_LABEL29:(void)0;
}
}
{
nitc___nitc__RapidTypeAnalysis___add_send(var22, var25, var28); /* Direct call rapid_type_analysis#RapidTypeAnalysis#add_send on <var22:RapidTypeAnalysis>*/
}
{
{ /* Inline rapid_type_analysis#RapidTypeVisitor#analysis (self) on <self:RapidTypeVisitor> */
var33 = self->attrs[COLOR_nitc__rapid_type_analysis__RapidTypeVisitor___analysis].val; /* _analysis on <self:RapidTypeVisitor> */
if (unlikely(var33 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _analysis");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__rapid_type_analysis, 465);
fatal_exit(1);
}
var31 = var33;
RET_LABEL32:(void)0;
}
}
{
{ /* Inline rapid_type_analysis#RapidTypeAnalysis#live_callsites (var31) on <var31:RapidTypeAnalysis> */
var36 = var31->attrs[COLOR_nitc__rapid_type_analysis__RapidTypeAnalysis___live_callsites].val; /* _live_callsites on <var31:RapidTypeAnalysis> */
if (unlikely(var36 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _live_callsites");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__rapid_type_analysis, 89);
fatal_exit(1);
}
var34 = var36;
RET_LABEL35:(void)0;
}
}
{
core___core__HashSet___core__abstract_collection__SimpleCollection__add(var34, var_callsite); /* Direct call hash_collection#HashSet#add on <var34:HashSet[CallSite]>*/
}
} else {
}
RET_LABEL:;
}
/* method rapid_type_analysis#ANode#accept_rapid_type_visitor for (self: ANode, RapidTypeVisitor) */
void nitc__rapid_type_analysis___ANode___accept_rapid_type_visitor(val* self, val* p0) {
val* var_v /* var v: RapidTypeVisitor */;
var_v = p0;
RET_LABEL:;
}
/* method rapid_type_analysis#AExpr#allocate_mtype for (self: AExpr, RapidTypeVisitor) */
void nitc__rapid_type_analysis___AExpr___allocate_mtype(val* self, val* p0) {
val* var_v /* var v: RapidTypeVisitor */;
val* var /* : nullable MType */;
val* var_mtype /* var mtype: nullable MType */;
short int var1 /* : Bool */;
int cltype;
int idtype;
short int var2 /* : Bool */;
val* var3 /* : nullable MType */;
short int var4 /* : Bool */;
int cltype5;
int idtype6;
const char* var_class_name;
var_v = p0;
{
var = ((val*(*)(val* self))(self->class->vft[COLOR_nitc__typing__AExpr__mtype]))(self); /* mtype on <self:AExpr>*/
}
var_mtype = var;
/* <var_mtype:nullable MType> isa MClassType */
cltype = type_nitc__MClassType.color;
idtype = type_nitc__MClassType.id;
if(var_mtype == NULL) {
var1 = 0;
} else {
if(cltype >= var_mtype->type->table_size) {
var1 = 0;
} else {
var1 = var_mtype->type->type_table[cltype] == idtype;
}
}
var2 = !var1;
if (var2){
goto RET_LABEL;
} else {
}
{
var3 = ((val*(*)(val* self))(self->class->vft[COLOR_nitc__typing__AExpr__mtype]))(self); /* mtype on <self:AExpr>*/
}
/* <var3:nullable MType> isa MClassType */
cltype5 = type_nitc__MClassType.color;
idtype6 = type_nitc__MClassType.id;
if(var3 == NULL) {
var4 = 0;
} else {
if(cltype5 >= var3->type->table_size) {
var4 = 0;
} else {
var4 = var3->type->type_table[cltype5] == idtype6;
}
}
if (unlikely(!var4)) {
var_class_name = var3 == NULL ? "null" : var3->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "MClassType", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__rapid_type_analysis, 547);
fatal_exit(1);
}
{
nitc___nitc__RapidTypeVisitor___add_type(var_v, var3); /* Direct call rapid_type_analysis#RapidTypeVisitor#add_type on <var_v:RapidTypeVisitor>*/
}
RET_LABEL:;
}
/* method rapid_type_analysis#AIntegerExpr#accept_rapid_type_visitor for (self: AIntegerExpr, RapidTypeVisitor) */
void nitc__rapid_type_analysis___AIntegerExpr___ANode__accept_rapid_type_visitor(val* self, val* p0) {
val* var_v /* var v: RapidTypeVisitor */;
var_v = p0;
{
nitc__rapid_type_analysis___AExpr___allocate_mtype(self, var_v); /* Direct call rapid_type_analysis#AExpr#allocate_mtype on <self:AIntegerExpr>*/
}
RET_LABEL:;
}
/* method rapid_type_analysis#AFloatExpr#accept_rapid_type_visitor for (self: AFloatExpr, RapidTypeVisitor) */
void nitc__rapid_type_analysis___AFloatExpr___ANode__accept_rapid_type_visitor(val* self, val* p0) {
val* var_v /* var v: RapidTypeVisitor */;
var_v = p0;
{
nitc__rapid_type_analysis___AExpr___allocate_mtype(self, var_v); /* Direct call rapid_type_analysis#AExpr#allocate_mtype on <self:AFloatExpr>*/
}
RET_LABEL:;
}
/* method rapid_type_analysis#ACharExpr#accept_rapid_type_visitor for (self: ACharExpr, RapidTypeVisitor) */
void nitc__rapid_type_analysis___ACharExpr___ANode__accept_rapid_type_visitor(val* self, val* p0) {
val* var_v /* var v: RapidTypeVisitor */;
var_v = p0;
{
nitc__rapid_type_analysis___AExpr___allocate_mtype(self, var_v); /* Direct call rapid_type_analysis#AExpr#allocate_mtype on <self:ACharExpr>*/
}
RET_LABEL:;
}
/* method rapid_type_analysis#AArrayExpr#accept_rapid_type_visitor for (self: AArrayExpr, RapidTypeVisitor) */
void nitc__rapid_type_analysis___AArrayExpr___ANode__accept_rapid_type_visitor(val* self, val* p0) {
val* var_v /* var v: RapidTypeVisitor */;
val* var /* : nullable MType */;
val* var2 /* : nullable MType */;
short int var3 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
val* var_mtype /* var mtype: MClassType */;
val* var4 /* : RapidTypeAnalysis */;
val* var6 /* : RapidTypeAnalysis */;
val* var7 /* : MModule */;
val* var9 /* : MModule */;
val* var10 /* : Array[MType] */;
val* var11 /* : nullable Object */;
val* var12 /* : MClassType */;
val* var_native /* var native: MClassType */;
val* var13 /* : nullable MClassType */;
static val* varonce;
val* var14 /* : String */;
char* var15 /* : CString */;
val* var16 /* : String */;
val* var17 /* : MMethod */;
val* var_prop /* var prop: MMethod */;
val* var18 /* : nullable CallSite */;
val* var20 /* : nullable CallSite */;
val* var21 /* : nullable CallSite */;
val* var23 /* : nullable CallSite */;
var_v = p0;
{
{ /* Inline typing#AExpr#mtype (self) on <self:AArrayExpr> */
var2 = self->attrs[COLOR_nitc__typing__AExpr___mtype].val; /* _mtype on <self:AArrayExpr> */
var = var2;
RET_LABEL1:(void)0;
}
}
/* <var:nullable MType> isa MClassType */
cltype = type_nitc__MClassType.color;
idtype = type_nitc__MClassType.id;
if(var == NULL) {
var3 = 0;
} else {
if(cltype >= var->type->table_size) {
var3 = 0;
} else {
var3 = var->type->type_table[cltype] == idtype;
}
}
if (unlikely(!var3)) {
var_class_name = var == NULL ? "null" : var->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "MClassType", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__rapid_type_analysis, 575);
fatal_exit(1);
}
var_mtype = var;
{
nitc___nitc__RapidTypeVisitor___add_type(var_v, var_mtype); /* Direct call rapid_type_analysis#RapidTypeVisitor#add_type on <var_v:RapidTypeVisitor>*/
}
{
{ /* Inline rapid_type_analysis#RapidTypeVisitor#analysis (var_v) on <var_v:RapidTypeVisitor> */
var6 = var_v->attrs[COLOR_nitc__rapid_type_analysis__RapidTypeVisitor___analysis].val; /* _analysis on <var_v:RapidTypeVisitor> */
if (unlikely(var6 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _analysis");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__rapid_type_analysis, 465);
fatal_exit(1);
}
var4 = var6;
RET_LABEL5:(void)0;
}
}
{
{ /* Inline rapid_type_analysis#RapidTypeAnalysis#mainmodule (var4) on <var4:RapidTypeAnalysis> */
var9 = var4->attrs[COLOR_nitc__rapid_type_analysis__RapidTypeAnalysis___mainmodule].val; /* _mainmodule on <var4:RapidTypeAnalysis> */
if (unlikely(var9 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mainmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__rapid_type_analysis, 56);
fatal_exit(1);
}
var7 = var9;
RET_LABEL8:(void)0;
}
}
{
var10 = ((val*(*)(val* self))(var_mtype->class->vft[COLOR_nitc__model__MClassType__arguments]))(var_mtype); /* arguments on <var_mtype:MClassType>*/
}
{
var11 = core___core__SequenceRead___Collection__first(var10);
}
{
var12 = nitc__model___MModule___native_array_type(var7, var11);
}
var_native = var12;
{
nitc___nitc__RapidTypeVisitor___add_type(var_v, var_native); /* Direct call rapid_type_analysis#RapidTypeVisitor#add_type on <var_v:RapidTypeVisitor>*/
}
{
var13 = nitc___nitc__RapidTypeVisitor___cleanup_type(var_v, var_mtype);
}
if (unlikely(var13 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__rapid_type_analysis, 579);
fatal_exit(1);
}
var_mtype = var13;
if (likely(varonce!=NULL)) {
var14 = varonce;
} else {
var15 = "with_native";
var16 = core__abstract_text___CString___to_s_full(var15, 11l, 11l);
var14 = var16;
varonce = var14;
}
{
var17 = nitc___nitc__RapidTypeVisitor___get_method(var_v, var_mtype, var14);
}
var_prop = var17;
{
nitc___nitc__RapidTypeVisitor___add_monomorphic_send(var_v, var_mtype, var_prop); /* Direct call rapid_type_analysis#RapidTypeVisitor#add_monomorphic_send on <var_v:RapidTypeVisitor>*/
}
{
{ /* Inline typing#AArrayExpr#with_capacity_callsite (self) on <self:AArrayExpr> */
var20 = self->attrs[COLOR_nitc__typing__AArrayExpr___with_capacity_callsite].val; /* _with_capacity_callsite on <self:AArrayExpr> */
var18 = var20;
RET_LABEL19:(void)0;
}
}
{
nitc___nitc__RapidTypeVisitor___add_callsite(var_v, var18); /* Direct call rapid_type_analysis#RapidTypeVisitor#add_callsite on <var_v:RapidTypeVisitor>*/
}
{
{ /* Inline typing#AArrayExpr#push_callsite (self) on <self:AArrayExpr> */
var23 = self->attrs[COLOR_nitc__typing__AArrayExpr___push_callsite].val; /* _push_callsite on <self:AArrayExpr> */
var21 = var23;
RET_LABEL22:(void)0;
}
}
{
nitc___nitc__RapidTypeVisitor___add_callsite(var_v, var21); /* Direct call rapid_type_analysis#RapidTypeVisitor#add_callsite on <var_v:RapidTypeVisitor>*/
}
RET_LABEL:;
}
/* method rapid_type_analysis#AStringFormExpr#accept_rapid_type_visitor for (self: AStringFormExpr, RapidTypeVisitor) */
void nitc__rapid_type_analysis___AStringFormExpr___ANode__accept_rapid_type_visitor(val* self, val* p0) {
val* var_v /* var v: RapidTypeVisitor */;
val* var /* : RapidTypeAnalysis */;
val* var2 /* : RapidTypeAnalysis */;
val* var3 /* : MModule */;
val* var5 /* : MModule */;
val* var6 /* : MClassType */;
val* var_native /* var native: MClassType */;
static val* varonce;
val* var7 /* : String */;
char* var8 /* : CString */;
val* var9 /* : String */;
val* var10 /* : MMethod */;
val* var_prop /* var prop: MMethod */;
val* var11 /* : nullable CallSite */;
val* var13 /* : nullable CallSite */;
val* var14 /* : nullable CallSite */;
val* var16 /* : nullable CallSite */;
val* var17 /* : nullable CallSite */;
val* var19 /* : nullable CallSite */;
val* var20 /* : nullable CallSite */;
val* var22 /* : nullable CallSite */;
val* var23 /* : nullable CallSite */;
val* var25 /* : nullable CallSite */;
var_v = p0;
{
{ /* Inline rapid_type_analysis#RapidTypeVisitor#analysis (var_v) on <var_v:RapidTypeVisitor> */
var2 = var_v->attrs[COLOR_nitc__rapid_type_analysis__RapidTypeVisitor___analysis].val; /* _analysis on <var_v:RapidTypeVisitor> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _analysis");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__rapid_type_analysis, 465);
fatal_exit(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
{ /* Inline rapid_type_analysis#RapidTypeAnalysis#mainmodule (var) on <var:RapidTypeAnalysis> */
var5 = var->attrs[COLOR_nitc__rapid_type_analysis__RapidTypeAnalysis___mainmodule].val; /* _mainmodule on <var:RapidTypeAnalysis> */
if (unlikely(var5 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mainmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__rapid_type_analysis, 56);
fatal_exit(1);
}
var3 = var5;
RET_LABEL4:(void)0;
}
}
{
var6 = nitc__model___MModule___c_string_type(var3);
}
var_native = var6;
{
nitc___nitc__RapidTypeVisitor___add_type(var_v, var_native); /* Direct call rapid_type_analysis#RapidTypeVisitor#add_type on <var_v:RapidTypeVisitor>*/
}
if (likely(varonce!=NULL)) {
var7 = varonce;
} else {
var8 = "to_s_unsafe";
var9 = core__abstract_text___CString___to_s_full(var8, 11l, 11l);
var7 = var9;
varonce = var7;
}
{
var10 = nitc___nitc__RapidTypeVisitor___get_method(var_v, var_native, var7);
}
var_prop = var10;
{
nitc___nitc__RapidTypeVisitor___add_monomorphic_send(var_v, var_native, var_prop); /* Direct call rapid_type_analysis#RapidTypeVisitor#add_monomorphic_send on <var_v:RapidTypeVisitor>*/
}
{
{ /* Inline typing#AugmentedStringFormExpr#to_re (self) on <self:AStringFormExpr> */
var13 = self->attrs[COLOR_nitc__typing__AugmentedStringFormExpr___to_re].val; /* _to_re on <self:AStringFormExpr> */
var11 = var13;
RET_LABEL12:(void)0;
}
}
{
nitc___nitc__RapidTypeVisitor___add_callsite(var_v, var11); /* Direct call rapid_type_analysis#RapidTypeVisitor#add_callsite on <var_v:RapidTypeVisitor>*/
}
{
{ /* Inline typing#AugmentedStringFormExpr#ignore_case (self) on <self:AStringFormExpr> */
var16 = self->attrs[COLOR_nitc__typing__AugmentedStringFormExpr___ignore_case].val; /* _ignore_case on <self:AStringFormExpr> */
var14 = var16;
RET_LABEL15:(void)0;
}
}
{
nitc___nitc__RapidTypeVisitor___add_callsite(var_v, var14); /* Direct call rapid_type_analysis#RapidTypeVisitor#add_callsite on <var_v:RapidTypeVisitor>*/
}
{
{ /* Inline typing#AugmentedStringFormExpr#newline (self) on <self:AStringFormExpr> */
var19 = self->attrs[COLOR_nitc__typing__AugmentedStringFormExpr___newline].val; /* _newline on <self:AStringFormExpr> */
var17 = var19;
RET_LABEL18:(void)0;
}
}
{
nitc___nitc__RapidTypeVisitor___add_callsite(var_v, var17); /* Direct call rapid_type_analysis#RapidTypeVisitor#add_callsite on <var_v:RapidTypeVisitor>*/
}
{
{ /* Inline typing#AugmentedStringFormExpr#extended (self) on <self:AStringFormExpr> */
var22 = self->attrs[COLOR_nitc__typing__AugmentedStringFormExpr___extended].val; /* _extended on <self:AStringFormExpr> */
var20 = var22;
RET_LABEL21:(void)0;
}
}
{
nitc___nitc__RapidTypeVisitor___add_callsite(var_v, var20); /* Direct call rapid_type_analysis#RapidTypeVisitor#add_callsite on <var_v:RapidTypeVisitor>*/
}
{
{ /* Inline typing#AugmentedStringFormExpr#to_bytes_with_copy (self) on <self:AStringFormExpr> */
var25 = self->attrs[COLOR_nitc__typing__AugmentedStringFormExpr___to_bytes_with_copy].val; /* _to_bytes_with_copy on <self:AStringFormExpr> */
var23 = var25;
RET_LABEL24:(void)0;
}
}
{
nitc___nitc__RapidTypeVisitor___add_callsite(var_v, var23); /* Direct call rapid_type_analysis#RapidTypeVisitor#add_callsite on <var_v:RapidTypeVisitor>*/
}
RET_LABEL:;
}
/* method rapid_type_analysis#ASuperstringExpr#accept_rapid_type_visitor for (self: ASuperstringExpr, RapidTypeVisitor) */
void nitc__rapid_type_analysis___ASuperstringExpr___ANode__accept_rapid_type_visitor(val* self, val* p0) {
val* var_v /* var v: RapidTypeVisitor */;
val* var /* : RapidTypeAnalysis */;
val* var2 /* : RapidTypeAnalysis */;
val* var3 /* : MModule */;
val* var5 /* : MModule */;
val* var_mmodule /* var mmodule: MModule */;
val* var6 /* : MClassType */;
val* var_object_type /* var object_type: MClassType */;
val* var7 /* : MClassType */;
val* var_arraytype /* var arraytype: MClassType */;
val* var8 /* : MClassType */;
val* var_nattype /* var nattype: MClassType */;
static val* varonce;
val* var9 /* : String */;
char* var10 /* : CString */;
val* var11 /* : String */;
val* var12 /* : MMethod */;
val* var_prop /* var prop: MMethod */;
static val* varonce13;
val* var14 /* : String */;
char* var15 /* : CString */;
val* var16 /* : String */;
val* var17 /* : MMethod */;
val* var_prop2 /* var prop2: MMethod */;
static val* varonce18;
val* var19 /* : String */;
char* var20 /* : CString */;
val* var21 /* : String */;
val* var22 /* : MMethod */;
var_v = p0;
{
{ /* Inline rapid_type_analysis#RapidTypeVisitor#analysis (var_v) on <var_v:RapidTypeVisitor> */
var2 = var_v->attrs[COLOR_nitc__rapid_type_analysis__RapidTypeVisitor___analysis].val; /* _analysis on <var_v:RapidTypeVisitor> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _analysis");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__rapid_type_analysis, 465);
fatal_exit(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
{ /* Inline rapid_type_analysis#RapidTypeAnalysis#mainmodule (var) on <var:RapidTypeAnalysis> */
var5 = var->attrs[COLOR_nitc__rapid_type_analysis__RapidTypeAnalysis___mainmodule].val; /* _mainmodule on <var:RapidTypeAnalysis> */
if (unlikely(var5 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mainmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__rapid_type_analysis, 56);
fatal_exit(1);
}
var3 = var5;
RET_LABEL4:(void)0;
}
}
var_mmodule = var3;
{
var6 = nitc__model___MModule___string_type(var_mmodule);
}
var_object_type = var6;
{
var7 = nitc__model___MModule___array_type(var_mmodule, var_object_type);
}
var_arraytype = var7;
{
nitc___nitc__RapidTypeVisitor___add_type(var_v, var_arraytype); /* Direct call rapid_type_analysis#RapidTypeVisitor#add_type on <var_v:RapidTypeVisitor>*/
}
{
var8 = nitc__model___MModule___native_array_type(var_mmodule, var_object_type);
}
var_nattype = var8;
{
nitc___nitc__RapidTypeVisitor___add_type(var_v, var_nattype); /* Direct call rapid_type_analysis#RapidTypeVisitor#add_type on <var_v:RapidTypeVisitor>*/
}
if (likely(varonce!=NULL)) {
var9 = varonce;
} else {
var10 = "join";
var11 = core__abstract_text___CString___to_s_full(var10, 4l, 4l);
var9 = var11;
varonce = var9;
}
{
var12 = nitc___nitc__RapidTypeVisitor___get_method(var_v, var_arraytype, var9);
}
var_prop = var12;
{
nitc___nitc__RapidTypeVisitor___add_monomorphic_send(var_v, var_arraytype, var_prop); /* Direct call rapid_type_analysis#RapidTypeVisitor#add_monomorphic_send on <var_v:RapidTypeVisitor>*/
}
if (likely(varonce13!=NULL)) {
var14 = varonce13;
} else {
var15 = "with_native";
var16 = core__abstract_text___CString___to_s_full(var15, 11l, 11l);
var14 = var16;
varonce13 = var14;
}
{
var17 = nitc___nitc__RapidTypeVisitor___get_method(var_v, var_arraytype, var14);
}
var_prop2 = var17;
{
nitc___nitc__RapidTypeVisitor___add_monomorphic_send(var_v, var_arraytype, var_prop2); /* Direct call rapid_type_analysis#RapidTypeVisitor#add_monomorphic_send on <var_v:RapidTypeVisitor>*/
}
if (likely(varonce18!=NULL)) {
var19 = varonce18;
} else {
var20 = "native_to_s";
var21 = core__abstract_text___CString___to_s_full(var20, 11l, 11l);
var19 = var21;
varonce18 = var19;
}
{
var22 = nitc___nitc__RapidTypeVisitor___get_method(var_v, var_nattype, var19);
}
{
nitc___nitc__RapidTypeVisitor___add_monomorphic_send(var_v, var_nattype, var22); /* Direct call rapid_type_analysis#RapidTypeVisitor#add_monomorphic_send on <var_v:RapidTypeVisitor>*/
}
RET_LABEL:;
}
/* method rapid_type_analysis#ACrangeExpr#accept_rapid_type_visitor for (self: ACrangeExpr, RapidTypeVisitor) */
void nitc__rapid_type_analysis___ACrangeExpr___ANode__accept_rapid_type_visitor(val* self, val* p0) {
val* var_v /* var v: RapidTypeVisitor */;
val* var /* : nullable MType */;
val* var2 /* : nullable MType */;
val* var_mtype /* var mtype: nullable MType */;
short int var3 /* : Bool */;
int cltype;
int idtype;
short int var4 /* : Bool */;
val* var5 /* : nullable CallSite */;
val* var7 /* : nullable CallSite */;
var_v = p0;
{
{ /* Inline typing#AExpr#mtype (self) on <self:ACrangeExpr> */
var2 = self->attrs[COLOR_nitc__typing__AExpr___mtype].val; /* _mtype on <self:ACrangeExpr> */
var = var2;
RET_LABEL1:(void)0;
}
}
var_mtype = var;
/* <var_mtype:nullable MType> isa MClassType */
cltype = type_nitc__MClassType.color;
idtype = type_nitc__MClassType.id;
if(var_mtype == NULL) {
var3 = 0;
} else {
if(cltype >= var_mtype->type->table_size) {
var3 = 0;
} else {
var3 = var_mtype->type->type_table[cltype] == idtype;
}
}
var4 = !var3;
if (var4){
goto RET_LABEL;
} else {
}
{
nitc___nitc__RapidTypeVisitor___add_type(var_v, var_mtype); /* Direct call rapid_type_analysis#RapidTypeVisitor#add_type on <var_v:RapidTypeVisitor>*/
}
{
{ /* Inline typing#ARangeExpr#init_callsite (self) on <self:ACrangeExpr> */
var7 = self->attrs[COLOR_nitc__typing__ARangeExpr___init_callsite].val; /* _init_callsite on <self:ACrangeExpr> */
var5 = var7;
RET_LABEL6:(void)0;
}
}
{
nitc___nitc__RapidTypeVisitor___add_callsite(var_v, var5); /* Direct call rapid_type_analysis#RapidTypeVisitor#add_callsite on <var_v:RapidTypeVisitor>*/
}
RET_LABEL:;
}
/* method rapid_type_analysis#AOrangeExpr#accept_rapid_type_visitor for (self: AOrangeExpr, RapidTypeVisitor) */
void nitc__rapid_type_analysis___AOrangeExpr___ANode__accept_rapid_type_visitor(val* self, val* p0) {
val* var_v /* var v: RapidTypeVisitor */;
val* var /* : nullable MType */;
val* var2 /* : nullable MType */;
val* var_mtype /* var mtype: nullable MType */;
short int var3 /* : Bool */;
int cltype;
int idtype;
short int var4 /* : Bool */;
val* var5 /* : nullable CallSite */;
val* var7 /* : nullable CallSite */;
var_v = p0;
{
{ /* Inline typing#AExpr#mtype (self) on <self:AOrangeExpr> */
var2 = self->attrs[COLOR_nitc__typing__AExpr___mtype].val; /* _mtype on <self:AOrangeExpr> */
var = var2;
RET_LABEL1:(void)0;
}
}
var_mtype = var;
/* <var_mtype:nullable MType> isa MClassType */
cltype = type_nitc__MClassType.color;
idtype = type_nitc__MClassType.id;
if(var_mtype == NULL) {
var3 = 0;
} else {
if(cltype >= var_mtype->type->table_size) {
var3 = 0;
} else {
var3 = var_mtype->type->type_table[cltype] == idtype;
}
}
var4 = !var3;
if (var4){
goto RET_LABEL;
} else {
}
{
nitc___nitc__RapidTypeVisitor___add_type(var_v, var_mtype); /* Direct call rapid_type_analysis#RapidTypeVisitor#add_type on <var_v:RapidTypeVisitor>*/
}
{
{ /* Inline typing#ARangeExpr#init_callsite (self) on <self:AOrangeExpr> */
var7 = self->attrs[COLOR_nitc__typing__ARangeExpr___init_callsite].val; /* _init_callsite on <self:AOrangeExpr> */
var5 = var7;
RET_LABEL6:(void)0;
}
}
{
nitc___nitc__RapidTypeVisitor___add_callsite(var_v, var5); /* Direct call rapid_type_analysis#RapidTypeVisitor#add_callsite on <var_v:RapidTypeVisitor>*/
}
RET_LABEL:;
}
/* method rapid_type_analysis#ATrueExpr#accept_rapid_type_visitor for (self: ATrueExpr, RapidTypeVisitor) */
void nitc__rapid_type_analysis___ATrueExpr___ANode__accept_rapid_type_visitor(val* self, val* p0) {
val* var_v /* var v: RapidTypeVisitor */;
var_v = p0;
{
nitc__rapid_type_analysis___AExpr___allocate_mtype(self, var_v); /* Direct call rapid_type_analysis#AExpr#allocate_mtype on <self:ATrueExpr>*/
}
RET_LABEL:;
}
/* method rapid_type_analysis#AFalseExpr#accept_rapid_type_visitor for (self: AFalseExpr, RapidTypeVisitor) */
void nitc__rapid_type_analysis___AFalseExpr___ANode__accept_rapid_type_visitor(val* self, val* p0) {
val* var_v /* var v: RapidTypeVisitor */;
var_v = p0;
{
nitc__rapid_type_analysis___AExpr___allocate_mtype(self, var_v); /* Direct call rapid_type_analysis#AExpr#allocate_mtype on <self:AFalseExpr>*/
}
RET_LABEL:;
}
/* method rapid_type_analysis#AIsaExpr#accept_rapid_type_visitor for (self: AIsaExpr, RapidTypeVisitor) */
void nitc__rapid_type_analysis___AIsaExpr___ANode__accept_rapid_type_visitor(val* self, val* p0) {
val* var_v /* var v: RapidTypeVisitor */;
val* var /* : nullable MType */;
val* var2 /* : nullable MType */;
val* var_cast_type /* var cast_type: nullable MType */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var6 /* : Bool */;
short int var8 /* : Bool */;
var_v = p0;
{
{ /* Inline typing#AIsaExpr#cast_type (self) on <self:AIsaExpr> */
var2 = self->attrs[COLOR_nitc__typing__AIsaExpr___cast_type].val; /* _cast_type on <self:AIsaExpr> */
var = var2;
RET_LABEL1:(void)0;
}
}
var_cast_type = var;
if (var_cast_type == NULL) {
var3 = 1; /* is null */
} else {
var3 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_cast_type,((val*)NULL)) on <var_cast_type:nullable MType> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_cast_type,var_other) on <var_cast_type:nullable MType(MType)> */
var8 = var_cast_type == var_other;
var6 = var8;
goto RET_LABEL7;
RET_LABEL7:(void)0;
}
}
var4 = var6;
goto RET_LABEL5;
RET_LABEL5:(void)0;
}
var3 = var4;
}
if (var3){
goto RET_LABEL;
} else {
}
{
nitc___nitc__RapidTypeVisitor___add_cast_type(var_v, var_cast_type); /* Direct call rapid_type_analysis#RapidTypeVisitor#add_cast_type on <var_v:RapidTypeVisitor>*/
}
RET_LABEL:;
}
/* method rapid_type_analysis#AAsCastExpr#accept_rapid_type_visitor for (self: AAsCastExpr, RapidTypeVisitor) */
void nitc__rapid_type_analysis___AAsCastExpr___ANode__accept_rapid_type_visitor(val* self, val* p0) {
val* var_v /* var v: RapidTypeVisitor */;
val* var /* : nullable MType */;
val* var2 /* : nullable MType */;
val* var_mtype /* var mtype: nullable MType */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var6 /* : Bool */;
short int var8 /* : Bool */;
var_v = p0;
{
{ /* Inline typing#AExpr#mtype (self) on <self:AAsCastExpr> */
var2 = self->attrs[COLOR_nitc__typing__AExpr___mtype].val; /* _mtype on <self:AAsCastExpr> */
var = var2;
RET_LABEL1:(void)0;
}
}
var_mtype = var;
if (var_mtype == NULL) {
var3 = 1; /* is null */
} else {
var3 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_mtype,((val*)NULL)) on <var_mtype:nullable MType> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_mtype,var_other) on <var_mtype:nullable MType(MType)> */
var8 = var_mtype == var_other;
var6 = var8;
goto RET_LABEL7;
RET_LABEL7:(void)0;
}
}
var4 = var6;
goto RET_LABEL5;
RET_LABEL5:(void)0;
}
var3 = var4;
}
if (var3){
goto RET_LABEL;
} else {
}
{
nitc___nitc__RapidTypeVisitor___add_cast_type(var_v, var_mtype); /* Direct call rapid_type_analysis#RapidTypeVisitor#add_cast_type on <var_v:RapidTypeVisitor>*/
}
RET_LABEL:;
}
/* method rapid_type_analysis#ASendExpr#accept_rapid_type_visitor for (self: ASendExpr, RapidTypeVisitor) */
void nitc__rapid_type_analysis___ASendExpr___ANode__accept_rapid_type_visitor(val* self, val* p0) {
val* var_v /* var v: RapidTypeVisitor */;
val* var /* : nullable CallSite */;
val* var2 /* : nullable CallSite */;
var_v = p0;
{
{ /* Inline typing#ASendExpr#callsite (self) on <self:ASendExpr> */
var2 = self->attrs[COLOR_nitc__typing__ASendExpr___callsite].val; /* _callsite on <self:ASendExpr> */
var = var2;
RET_LABEL1:(void)0;
}
}
{
nitc___nitc__RapidTypeVisitor___add_callsite(var_v, var); /* Direct call rapid_type_analysis#RapidTypeVisitor#add_callsite on <var_v:RapidTypeVisitor>*/
}
RET_LABEL:;
}
/* method rapid_type_analysis#ASendReassignFormExpr#accept_rapid_type_visitor for (self: ASendReassignFormExpr, RapidTypeVisitor) */
void nitc__rapid_type_analysis___ASendReassignFormExpr___ANode__accept_rapid_type_visitor(val* self, val* p0) {
val* var_v /* var v: RapidTypeVisitor */;
val* var /* : nullable CallSite */;
val* var2 /* : nullable CallSite */;
val* var3 /* : nullable CallSite */;
val* var5 /* : nullable CallSite */;
val* var6 /* : nullable CallSite */;
val* var8 /* : nullable CallSite */;
var_v = p0;
{
{ /* Inline typing#ASendExpr#callsite (self) on <self:ASendReassignFormExpr> */
var2 = self->attrs[COLOR_nitc__typing__ASendExpr___callsite].val; /* _callsite on <self:ASendReassignFormExpr> */
var = var2;
RET_LABEL1:(void)0;
}
}
{
nitc___nitc__RapidTypeVisitor___add_callsite(var_v, var); /* Direct call rapid_type_analysis#RapidTypeVisitor#add_callsite on <var_v:RapidTypeVisitor>*/
}
{
{ /* Inline typing#AReassignFormExpr#reassign_callsite (self) on <self:ASendReassignFormExpr> */
var5 = self->attrs[COLOR_nitc__typing__AReassignFormExpr___reassign_callsite].val; /* _reassign_callsite on <self:ASendReassignFormExpr> */
var3 = var5;
RET_LABEL4:(void)0;
}
}
{
nitc___nitc__RapidTypeVisitor___add_callsite(var_v, var3); /* Direct call rapid_type_analysis#RapidTypeVisitor#add_callsite on <var_v:RapidTypeVisitor>*/
}
{
{ /* Inline typing#ASendReassignFormExpr#write_callsite (self) on <self:ASendReassignFormExpr> */
var8 = self->attrs[COLOR_nitc__typing__ASendReassignFormExpr___write_callsite].val; /* _write_callsite on <self:ASendReassignFormExpr> */
var6 = var8;
RET_LABEL7:(void)0;
}
}
{
nitc___nitc__RapidTypeVisitor___add_callsite(var_v, var6); /* Direct call rapid_type_analysis#RapidTypeVisitor#add_callsite on <var_v:RapidTypeVisitor>*/
}
RET_LABEL:;
}
/* method rapid_type_analysis#AVarReassignExpr#accept_rapid_type_visitor for (self: AVarReassignExpr, RapidTypeVisitor) */
void nitc__rapid_type_analysis___AVarReassignExpr___ANode__accept_rapid_type_visitor(val* self, val* p0) {
val* var_v /* var v: RapidTypeVisitor */;
val* var /* : nullable CallSite */;
val* var2 /* : nullable CallSite */;
var_v = p0;
{
{ /* Inline typing#AReassignFormExpr#reassign_callsite (self) on <self:AVarReassignExpr> */
var2 = self->attrs[COLOR_nitc__typing__AReassignFormExpr___reassign_callsite].val; /* _reassign_callsite on <self:AVarReassignExpr> */
var = var2;
RET_LABEL1:(void)0;
}
}
{
nitc___nitc__RapidTypeVisitor___add_callsite(var_v, var); /* Direct call rapid_type_analysis#RapidTypeVisitor#add_callsite on <var_v:RapidTypeVisitor>*/
}
RET_LABEL:;
}
/* method rapid_type_analysis#AAttrReassignExpr#accept_rapid_type_visitor for (self: AAttrReassignExpr, RapidTypeVisitor) */
void nitc__rapid_type_analysis___AAttrReassignExpr___ANode__accept_rapid_type_visitor(val* self, val* p0) {
val* var_v /* var v: RapidTypeVisitor */;
val* var /* : nullable CallSite */;
val* var2 /* : nullable CallSite */;
var_v = p0;
{
{ /* Inline typing#AReassignFormExpr#reassign_callsite (self) on <self:AAttrReassignExpr> */
var2 = self->attrs[COLOR_nitc__typing__AReassignFormExpr___reassign_callsite].val; /* _reassign_callsite on <self:AAttrReassignExpr> */
var = var2;
RET_LABEL1:(void)0;
}
}
{
nitc___nitc__RapidTypeVisitor___add_callsite(var_v, var); /* Direct call rapid_type_analysis#RapidTypeVisitor#add_callsite on <var_v:RapidTypeVisitor>*/
}
RET_LABEL:;
}
/* method rapid_type_analysis#ASuperExpr#accept_rapid_type_visitor for (self: ASuperExpr, RapidTypeVisitor) */
void nitc__rapid_type_analysis___ASuperExpr___ANode__accept_rapid_type_visitor(val* self, val* p0) {
val* var_v /* var v: RapidTypeVisitor */;
val* var /* : nullable CallSite */;
val* var2 /* : nullable CallSite */;
val* var_callsite /* var callsite: nullable CallSite */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var6 /* : Bool */;
short int var7 /* : Bool */;
val* var8 /* : RapidTypeAnalysis */;
val* var10 /* : RapidTypeAnalysis */;
val* var11 /* : MClassType */;
val* var13 /* : MClassType */;
val* var14 /* : nullable MMethodDef */;
val* var16 /* : nullable MMethodDef */;
var_v = p0;
{
{ /* Inline typing#ASuperExpr#callsite (self) on <self:ASuperExpr> */
var2 = self->attrs[COLOR_nitc__typing__ASuperExpr___callsite].val; /* _callsite on <self:ASuperExpr> */
var = var2;
RET_LABEL1:(void)0;
}
}
var_callsite = var;
if (var_callsite == NULL) {
var3 = 0; /* is null */
} else {
var3 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_callsite,((val*)NULL)) on <var_callsite:nullable CallSite> */
var_other = ((val*)NULL);
{
var6 = ((short int(*)(val* self, val* p0))(var_callsite->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_callsite, var_other); /* == on <var_callsite:nullable CallSite(CallSite)>*/
}
var7 = !var6;
var4 = var7;
goto RET_LABEL5;
RET_LABEL5:(void)0;
}
var3 = var4;
}
if (var3){
{
nitc___nitc__RapidTypeVisitor___add_callsite(var_v, var_callsite); /* Direct call rapid_type_analysis#RapidTypeVisitor#add_callsite on <var_v:RapidTypeVisitor>*/
}
goto RET_LABEL;
} else {
}
{
{ /* Inline rapid_type_analysis#RapidTypeVisitor#analysis (var_v) on <var_v:RapidTypeVisitor> */
var10 = var_v->attrs[COLOR_nitc__rapid_type_analysis__RapidTypeVisitor___analysis].val; /* _analysis on <var_v:RapidTypeVisitor> */
if (unlikely(var10 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _analysis");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__rapid_type_analysis, 465);
fatal_exit(1);
}
var8 = var10;
RET_LABEL9:(void)0;
}
}
{
{ /* Inline rapid_type_analysis#RapidTypeVisitor#receiver (var_v) on <var_v:RapidTypeVisitor> */
var13 = var_v->attrs[COLOR_nitc__rapid_type_analysis__RapidTypeVisitor___receiver].val; /* _receiver on <var_v:RapidTypeVisitor> */
if (unlikely(var13 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _receiver");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__rapid_type_analysis, 466);
fatal_exit(1);
}
var11 = var13;
RET_LABEL12:(void)0;
}
}
{
{ /* Inline typing#ASuperExpr#mpropdef (self) on <self:ASuperExpr> */
var16 = self->attrs[COLOR_nitc__typing__ASuperExpr___mpropdef].val; /* _mpropdef on <self:ASuperExpr> */
var14 = var16;
RET_LABEL15:(void)0;
}
}
if (unlikely(var14 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__rapid_type_analysis, 711);
fatal_exit(1);
}
{
nitc___nitc__RapidTypeAnalysis___add_super_send(var8, var11, var14); /* Direct call rapid_type_analysis#RapidTypeAnalysis#add_super_send on <var8:RapidTypeAnalysis>*/
}
RET_LABEL:;
}
/* method rapid_type_analysis#AForGroup#accept_rapid_type_visitor for (self: AForGroup, RapidTypeVisitor) */
void nitc__rapid_type_analysis___AForGroup___ANode__accept_rapid_type_visitor(val* self, val* p0) {
val* var_v /* var v: RapidTypeVisitor */;
val* var /* : nullable CallSite */;
val* var2 /* : nullable CallSite */;
val* var3 /* : nullable CallSite */;
val* var5 /* : nullable CallSite */;
val* var6 /* : nullable Array[Variable] */;
val* var8 /* : nullable Array[Variable] */;
long var9 /* : Int */;
long var11 /* : Int */;
short int var12 /* : Bool */;
short int var14 /* : Bool */;
val* var15 /* : nullable CallSite */;
val* var17 /* : nullable CallSite */;
val* var18 /* : nullable Array[Variable] */;
val* var20 /* : nullable Array[Variable] */;
long var21 /* : Int */;
long var23 /* : Int */;
short int var24 /* : Bool */;
short int var26 /* : Bool */;
val* var27 /* : nullable CallSite */;
val* var29 /* : nullable CallSite */;
val* var30 /* : nullable CallSite */;
val* var32 /* : nullable CallSite */;
val* var33 /* : nullable CallSite */;
val* var35 /* : nullable CallSite */;
val* var36 /* : nullable CallSite */;
val* var38 /* : nullable CallSite */;
val* var_mf /* var mf: nullable CallSite */;
short int var39 /* : Bool */;
short int var40 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var42 /* : Bool */;
short int var43 /* : Bool */;
var_v = p0;
{
{ /* Inline typing#AForGroup#method_iterator (self) on <self:AForGroup> */
var2 = self->attrs[COLOR_nitc__typing__AForGroup___method_iterator].val; /* _method_iterator on <self:AForGroup> */
var = var2;
RET_LABEL1:(void)0;
}
}
{
nitc___nitc__RapidTypeVisitor___add_callsite(var_v, var); /* Direct call rapid_type_analysis#RapidTypeVisitor#add_callsite on <var_v:RapidTypeVisitor>*/
}
{
{ /* Inline typing#AForGroup#method_is_ok (self) on <self:AForGroup> */
var5 = self->attrs[COLOR_nitc__typing__AForGroup___method_is_ok].val; /* _method_is_ok on <self:AForGroup> */
var3 = var5;
RET_LABEL4:(void)0;
}
}
{
nitc___nitc__RapidTypeVisitor___add_callsite(var_v, var3); /* Direct call rapid_type_analysis#RapidTypeVisitor#add_callsite on <var_v:RapidTypeVisitor>*/
}
{
{ /* Inline scope#AForGroup#variables (self) on <self:AForGroup> */
var8 = self->attrs[COLOR_nitc__scope__AForGroup___variables].val; /* _variables on <self:AForGroup> */
var6 = var8;
RET_LABEL7:(void)0;
}
}
if (var6 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__rapid_type_analysis, 720);
fatal_exit(1);
} else {
{ /* Inline array#AbstractArrayRead#length (var6) on <var6:nullable Array[Variable]> */
if (unlikely(var6 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_core__array, 26);
fatal_exit(1);
}
var11 = var6->attrs[COLOR_core__array__AbstractArrayRead___length].l; /* _length on <var6:nullable Array[Variable]> */
var9 = var11;
RET_LABEL10:(void)0;
}
}
{
{ /* Inline kernel#Int#== (var9,1l) on <var9:Int> */
var14 = var9 == 1l;
var12 = var14;
goto RET_LABEL13;
RET_LABEL13:(void)0;
}
}
if (var12){
{
{ /* Inline typing#AForGroup#method_item (self) on <self:AForGroup> */
var17 = self->attrs[COLOR_nitc__typing__AForGroup___method_item].val; /* _method_item on <self:AForGroup> */
var15 = var17;
RET_LABEL16:(void)0;
}
}
{
nitc___nitc__RapidTypeVisitor___add_callsite(var_v, var15); /* Direct call rapid_type_analysis#RapidTypeVisitor#add_callsite on <var_v:RapidTypeVisitor>*/
}
} else {
{
{ /* Inline scope#AForGroup#variables (self) on <self:AForGroup> */
var20 = self->attrs[COLOR_nitc__scope__AForGroup___variables].val; /* _variables on <self:AForGroup> */
var18 = var20;
RET_LABEL19:(void)0;
}
}
if (var18 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__rapid_type_analysis, 722);
fatal_exit(1);
} else {
{ /* Inline array#AbstractArrayRead#length (var18) on <var18:nullable Array[Variable]> */
if (unlikely(var18 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_core__array, 26);
fatal_exit(1);
}
var23 = var18->attrs[COLOR_core__array__AbstractArrayRead___length].l; /* _length on <var18:nullable Array[Variable]> */
var21 = var23;
RET_LABEL22:(void)0;
}
}
{
{ /* Inline kernel#Int#== (var21,2l) on <var21:Int> */
var26 = var21 == 2l;
var24 = var26;
goto RET_LABEL25;
RET_LABEL25:(void)0;
}
}
if (var24){
{
{ /* Inline typing#AForGroup#method_key (self) on <self:AForGroup> */
var29 = self->attrs[COLOR_nitc__typing__AForGroup___method_key].val; /* _method_key on <self:AForGroup> */
var27 = var29;
RET_LABEL28:(void)0;
}
}
{
nitc___nitc__RapidTypeVisitor___add_callsite(var_v, var27); /* Direct call rapid_type_analysis#RapidTypeVisitor#add_callsite on <var_v:RapidTypeVisitor>*/
}
{
{ /* Inline typing#AForGroup#method_item (self) on <self:AForGroup> */
var32 = self->attrs[COLOR_nitc__typing__AForGroup___method_item].val; /* _method_item on <self:AForGroup> */
var30 = var32;
RET_LABEL31:(void)0;
}
}
{
nitc___nitc__RapidTypeVisitor___add_callsite(var_v, var30); /* Direct call rapid_type_analysis#RapidTypeVisitor#add_callsite on <var_v:RapidTypeVisitor>*/
}
} else {
PRINT_ERROR("Runtime error: %s", "Aborted");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__rapid_type_analysis, 726);
fatal_exit(1);
}
}
{
{ /* Inline typing#AForGroup#method_next (self) on <self:AForGroup> */
var35 = self->attrs[COLOR_nitc__typing__AForGroup___method_next].val; /* _method_next on <self:AForGroup> */
var33 = var35;
RET_LABEL34:(void)0;
}
}
{
nitc___nitc__RapidTypeVisitor___add_callsite(var_v, var33); /* Direct call rapid_type_analysis#RapidTypeVisitor#add_callsite on <var_v:RapidTypeVisitor>*/
}
{
{ /* Inline typing#AForGroup#method_finish (self) on <self:AForGroup> */
var38 = self->attrs[COLOR_nitc__typing__AForGroup___method_finish].val; /* _method_finish on <self:AForGroup> */
var36 = var38;
RET_LABEL37:(void)0;
}
}
var_mf = var36;
if (var_mf == NULL) {
var39 = 0; /* is null */
} else {
var39 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_mf,((val*)NULL)) on <var_mf:nullable CallSite> */
var_other = ((val*)NULL);
{
var42 = ((short int(*)(val* self, val* p0))(var_mf->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_mf, var_other); /* == on <var_mf:nullable CallSite(CallSite)>*/
}
var43 = !var42;
var40 = var43;
goto RET_LABEL41;
RET_LABEL41:(void)0;
}
var39 = var40;
}
if (var39){
{
nitc___nitc__RapidTypeVisitor___add_callsite(var_v, var_mf); /* Direct call rapid_type_analysis#RapidTypeVisitor#add_callsite on <var_v:RapidTypeVisitor>*/
}
} else {
}
RET_LABEL:;
}
/* method rapid_type_analysis#ANewExpr#accept_rapid_type_visitor for (self: ANewExpr, RapidTypeVisitor) */
void nitc__rapid_type_analysis___ANewExpr___ANode__accept_rapid_type_visitor(val* self, val* p0) {
val* var_v /* var v: RapidTypeVisitor */;
val* var /* : nullable MClassType */;
val* var2 /* : nullable MClassType */;
val* var_mtype /* var mtype: MClassType */;
val* var3 /* : nullable CallSite */;
val* var5 /* : nullable CallSite */;
var_v = p0;
{
{ /* Inline typing#ANewExpr#recvtype (self) on <self:ANewExpr> */
var2 = self->attrs[COLOR_nitc__typing__ANewExpr___recvtype].val; /* _recvtype on <self:ANewExpr> */
var = var2;
RET_LABEL1:(void)0;
}
}
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__rapid_type_analysis, 737);
fatal_exit(1);
}
var_mtype = var;
{
nitc___nitc__RapidTypeVisitor___add_type(var_v, var_mtype); /* Direct call rapid_type_analysis#RapidTypeVisitor#add_type on <var_v:RapidTypeVisitor>*/
}
{
{ /* Inline typing#ANewExpr#callsite (self) on <self:ANewExpr> */
var5 = self->attrs[COLOR_nitc__typing__ANewExpr___callsite].val; /* _callsite on <self:ANewExpr> */
var3 = var5;
RET_LABEL4:(void)0;
}
}
{
nitc___nitc__RapidTypeVisitor___add_callsite(var_v, var3); /* Direct call rapid_type_analysis#RapidTypeVisitor#add_callsite on <var_v:RapidTypeVisitor>*/
}
RET_LABEL:;
}
