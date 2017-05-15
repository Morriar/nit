#include "nitc__nitni_callbacks.sep.0.h"
/* method nitni_callbacks#VerifyNitniCallbacksPhase#process_npropdef for (self: VerifyNitniCallbacksPhase, APropdef) */
void nitc___nitc__VerifyNitniCallbacksPhase___nitc__phase__Phase__process_npropdef(val* self, val* p0) {
val* var_npropdef /* var npropdef: APropdef */;
short int var /* : Bool */;
int cltype;
int idtype;
short int var1 /* : Bool */;
val* var2 /* : nullable MPropDef */;
val* var4 /* : nullable MPropDef */;
val* var_mpropdef /* var mpropdef: nullable MMethodDef */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var8 /* : Bool */;
short int var10 /* : Bool */;
short int var11 /* : Bool */;
short int var13 /* : Bool */;
short int var14 /* : Bool */;
val* var15 /* : ToolContext */;
val* var17 /* : ToolContext */;
var_npropdef = p0;
/* <var_npropdef:APropdef> isa AMethPropdef */
cltype = type_nitc__AMethPropdef.color;
idtype = type_nitc__AMethPropdef.id;
if(cltype >= var_npropdef->type->table_size) {
var = 0;
} else {
var = var_npropdef->type->type_table[cltype] == idtype;
}
var1 = !var;
if (var1){
goto RET_LABEL;
} else {
}
{
{ /* Inline modelize_property#APropdef#mpropdef (var_npropdef) on <var_npropdef:APropdef(AMethPropdef)> */
var4 = var_npropdef->attrs[COLOR_nitc__modelize_property__APropdef___mpropdef].val; /* _mpropdef on <var_npropdef:APropdef(AMethPropdef)> */
var2 = var4;
RET_LABEL3:(void)0;
}
}
var_mpropdef = var2;
if (var_mpropdef == NULL) {
var5 = 1; /* is null */
} else {
var5 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_mpropdef,((val*)NULL)) on <var_mpropdef:nullable MMethodDef> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_mpropdef,var_other) on <var_mpropdef:nullable MMethodDef(MMethodDef)> */
var10 = var_mpropdef == var_other;
var8 = var10;
goto RET_LABEL9;
RET_LABEL9:(void)0;
}
}
var6 = var8;
goto RET_LABEL7;
RET_LABEL7:(void)0;
}
var5 = var6;
}
if (var5){
goto RET_LABEL;
} else {
}
{
{ /* Inline model#MMethodDef#is_extern (var_mpropdef) on <var_mpropdef:nullable MMethodDef(MMethodDef)> */
var13 = var_mpropdef->attrs[COLOR_nitc__model__MMethodDef___is_extern].s; /* _is_extern on <var_mpropdef:nullable MMethodDef(MMethodDef)> */
var11 = var13;
RET_LABEL12:(void)0;
}
}
var14 = !var11;
if (var14){
goto RET_LABEL;
} else {
}
{
{ /* Inline phase#Phase#toolcontext (self) on <self:VerifyNitniCallbacksPhase> */
var17 = self->attrs[COLOR_nitc__phase__Phase___toolcontext].val; /* _toolcontext on <self:VerifyNitniCallbacksPhase> */
if (unlikely(var17 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__phase, 209);
fatal_exit(1);
}
var15 = var17;
RET_LABEL16:(void)0;
}
}
{
nitc__java___AMethPropdef___verify_nitni_callbacks(var_npropdef, var15); /* Direct call java#AMethPropdef#verify_nitni_callbacks on <var_npropdef:APropdef(AMethPropdef)>*/
}
RET_LABEL:;
}
/* method nitni_callbacks#ForeignCallbackSet#callbacks for (self: ForeignCallbackSet): Set[MExplicitCall] */
val* nitc___nitc__ForeignCallbackSet___callbacks(val* self) {
val* var /* : Set[MExplicitCall] */;
val* var1 /* : Set[MExplicitCall] */;
var1 = self->attrs[COLOR_nitc__nitni_callbacks__ForeignCallbackSet___callbacks].val; /* _callbacks on <self:ForeignCallbackSet> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _callbacks");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__nitni_callbacks, 47);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method nitni_callbacks#ForeignCallbackSet#supers for (self: ForeignCallbackSet): Set[MExplicitSuper] */
val* nitc___nitc__ForeignCallbackSet___supers(val* self) {
val* var /* : Set[MExplicitSuper] */;
val* var1 /* : Set[MExplicitSuper] */;
var1 = self->attrs[COLOR_nitc__nitni_callbacks__ForeignCallbackSet___supers].val; /* _supers on <self:ForeignCallbackSet> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _supers");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__nitni_callbacks, 50);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method nitni_callbacks#ForeignCallbackSet#types for (self: ForeignCallbackSet): Set[MType] */
val* nitc___nitc__ForeignCallbackSet___types(val* self) {
val* var /* : Set[MType] */;
val* var1 /* : Set[MType] */;
var1 = self->attrs[COLOR_nitc__nitni_callbacks__ForeignCallbackSet___types].val; /* _types on <self:ForeignCallbackSet> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _types");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__nitni_callbacks, 53);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method nitni_callbacks#ForeignCallbackSet#casts for (self: ForeignCallbackSet): Set[MExplicitCast] */
val* nitc___nitc__ForeignCallbackSet___casts(val* self) {
val* var /* : Set[MExplicitCast] */;
val* var1 /* : Set[MExplicitCast] */;
var1 = self->attrs[COLOR_nitc__nitni_callbacks__ForeignCallbackSet___casts].val; /* _casts on <self:ForeignCallbackSet> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _casts");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__nitni_callbacks, 56);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method nitni_callbacks#ForeignCallbackSet#all_cached for (self: ForeignCallbackSet): nullable Set[NitniCallback] */
val* nitc___nitc__ForeignCallbackSet___all_cached(val* self) {
val* var /* : nullable Set[NitniCallback] */;
val* var1 /* : nullable Set[NitniCallback] */;
var1 = self->attrs[COLOR_nitc__nitni_callbacks__ForeignCallbackSet___all_cached].val; /* _all_cached on <self:ForeignCallbackSet> */
var = var1;
RET_LABEL:;
return var;
}
/* method nitni_callbacks#ForeignCallbackSet#all_cached= for (self: ForeignCallbackSet, nullable Set[NitniCallback]) */
void nitc___nitc__ForeignCallbackSet___all_cached_61d(val* self, val* p0) {
self->attrs[COLOR_nitc__nitni_callbacks__ForeignCallbackSet___all_cached].val = p0; /* _all_cached on <self:ForeignCallbackSet> */
RET_LABEL:;
}
/* method nitni_callbacks#ForeignCallbackSet#all for (self: ForeignCallbackSet): Set[NitniCallback] */
val* nitc___nitc__ForeignCallbackSet___all(val* self) {
val* var /* : Set[NitniCallback] */;
val* var1 /* : nullable Set[NitniCallback] */;
val* var3 /* : nullable Set[NitniCallback] */;
val* var_cached /* var cached: nullable Set[NitniCallback] */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var7 /* : Bool */;
short int var8 /* : Bool */;
val* var9 /* : HashSet[NitniCallback] */;
val* var_set /* var set: HashSet[NitniCallback] */;
val* var10 /* : Set[MExplicitCall] */;
val* var12 /* : Set[MExplicitCall] */;
val* var13 /* : Set[MExplicitSuper] */;
val* var15 /* : Set[MExplicitSuper] */;
val* var16 /* : Set[MType] */;
val* var18 /* : Set[MType] */;
val* var19 /* : Set[MExplicitCast] */;
val* var21 /* : Set[MExplicitCast] */;
{
{ /* Inline nitni_callbacks#ForeignCallbackSet#all_cached (self) on <self:ForeignCallbackSet> */
var3 = self->attrs[COLOR_nitc__nitni_callbacks__ForeignCallbackSet___all_cached].val; /* _all_cached on <self:ForeignCallbackSet> */
var1 = var3;
RET_LABEL2:(void)0;
}
}
var_cached = var1;
if (var_cached == NULL) {
var4 = 0; /* is null */
} else {
var4 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_cached,((val*)NULL)) on <var_cached:nullable Set[NitniCallback]> */
var_other = ((val*)NULL);
{
var7 = ((short int(*)(val* self, val* p0))((((long)var_cached&3)?class_info[((long)var_cached&3)]:var_cached->class)->vft[COLOR_core__kernel__Object___61d_61d]))(var_cached, var_other); /* == on <var_cached:nullable Set[NitniCallback](Set[NitniCallback])>*/
}
var8 = !var7;
var5 = var8;
goto RET_LABEL6;
RET_LABEL6:(void)0;
}
var4 = var5;
}
if (var4){
var = var_cached;
goto RET_LABEL;
} else {
}
var9 = NEW_core__HashSet(&type_core__HashSet__nitc__NitniCallback);
{
core___core__HashSet___core__kernel__Object__init(var9); /* Direct call hash_collection#HashSet#init on <var9:HashSet[NitniCallback]>*/
}
var_set = var9;
{
{ /* Inline nitni_callbacks#ForeignCallbackSet#callbacks (self) on <self:ForeignCallbackSet> */
var12 = self->attrs[COLOR_nitc__nitni_callbacks__ForeignCallbackSet___callbacks].val; /* _callbacks on <self:ForeignCallbackSet> */
if (unlikely(var12 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _callbacks");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__nitni_callbacks, 47);
fatal_exit(1);
}
var10 = var12;
RET_LABEL11:(void)0;
}
}
{
core___core__SimpleCollection___add_all(var_set, var10); /* Direct call abstract_collection#SimpleCollection#add_all on <var_set:HashSet[NitniCallback]>*/
}
{
{ /* Inline nitni_callbacks#ForeignCallbackSet#supers (self) on <self:ForeignCallbackSet> */
var15 = self->attrs[COLOR_nitc__nitni_callbacks__ForeignCallbackSet___supers].val; /* _supers on <self:ForeignCallbackSet> */
if (unlikely(var15 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _supers");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__nitni_callbacks, 50);
fatal_exit(1);
}
var13 = var15;
RET_LABEL14:(void)0;
}
}
{
core___core__SimpleCollection___add_all(var_set, var13); /* Direct call abstract_collection#SimpleCollection#add_all on <var_set:HashSet[NitniCallback]>*/
}
{
{ /* Inline nitni_callbacks#ForeignCallbackSet#types (self) on <self:ForeignCallbackSet> */
var18 = self->attrs[COLOR_nitc__nitni_callbacks__ForeignCallbackSet___types].val; /* _types on <self:ForeignCallbackSet> */
if (unlikely(var18 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _types");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__nitni_callbacks, 53);
fatal_exit(1);
}
var16 = var18;
RET_LABEL17:(void)0;
}
}
{
core___core__SimpleCollection___add_all(var_set, var16); /* Direct call abstract_collection#SimpleCollection#add_all on <var_set:HashSet[NitniCallback]>*/
}
{
{ /* Inline nitni_callbacks#ForeignCallbackSet#casts (self) on <self:ForeignCallbackSet> */
var21 = self->attrs[COLOR_nitc__nitni_callbacks__ForeignCallbackSet___casts].val; /* _casts on <self:ForeignCallbackSet> */
if (unlikely(var21 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _casts");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__nitni_callbacks, 56);
fatal_exit(1);
}
var19 = var21;
RET_LABEL20:(void)0;
}
}
{
core___core__SimpleCollection___add_all(var_set, var19); /* Direct call abstract_collection#SimpleCollection#add_all on <var_set:HashSet[NitniCallback]>*/
}
{
{ /* Inline nitni_callbacks#ForeignCallbackSet#all_cached= (self,var_set) on <self:ForeignCallbackSet> */
self->attrs[COLOR_nitc__nitni_callbacks__ForeignCallbackSet___all_cached].val = var_set; /* _all_cached on <self:ForeignCallbackSet> */
RET_LABEL22:(void)0;
}
}
var = var_set;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method nitni_callbacks#ForeignCallbackSet#join for (self: ForeignCallbackSet, ForeignCallbackSet) */
void nitc___nitc__ForeignCallbackSet___join(val* self, val* p0) {
val* var_other /* var other: ForeignCallbackSet */;
val* var /* : Set[MExplicitCall] */;
val* var2 /* : Set[MExplicitCall] */;
val* var3 /* : Set[MExplicitCall] */;
val* var5 /* : Set[MExplicitCall] */;
val* var6 /* : Set[MExplicitSuper] */;
val* var8 /* : Set[MExplicitSuper] */;
val* var9 /* : Set[MExplicitSuper] */;
val* var11 /* : Set[MExplicitSuper] */;
val* var12 /* : Set[MType] */;
val* var14 /* : Set[MType] */;
val* var15 /* : Set[MType] */;
val* var17 /* : Set[MType] */;
val* var18 /* : Set[MExplicitCast] */;
val* var20 /* : Set[MExplicitCast] */;
val* var21 /* : Set[MExplicitCast] */;
val* var23 /* : Set[MExplicitCast] */;
var_other = p0;
{
{ /* Inline nitni_callbacks#ForeignCallbackSet#callbacks (self) on <self:ForeignCallbackSet> */
var2 = self->attrs[COLOR_nitc__nitni_callbacks__ForeignCallbackSet___callbacks].val; /* _callbacks on <self:ForeignCallbackSet> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _callbacks");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__nitni_callbacks, 47);
fatal_exit(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
{ /* Inline nitni_callbacks#ForeignCallbackSet#callbacks (var_other) on <var_other:ForeignCallbackSet> */
var5 = var_other->attrs[COLOR_nitc__nitni_callbacks__ForeignCallbackSet___callbacks].val; /* _callbacks on <var_other:ForeignCallbackSet> */
if (unlikely(var5 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _callbacks");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__nitni_callbacks, 47);
fatal_exit(1);
}
var3 = var5;
RET_LABEL4:(void)0;
}
}
{
core___core__SimpleCollection___add_all(var, var3); /* Direct call abstract_collection#SimpleCollection#add_all on <var:Set[MExplicitCall]>*/
}
{
{ /* Inline nitni_callbacks#ForeignCallbackSet#supers (self) on <self:ForeignCallbackSet> */
var8 = self->attrs[COLOR_nitc__nitni_callbacks__ForeignCallbackSet___supers].val; /* _supers on <self:ForeignCallbackSet> */
if (unlikely(var8 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _supers");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__nitni_callbacks, 50);
fatal_exit(1);
}
var6 = var8;
RET_LABEL7:(void)0;
}
}
{
{ /* Inline nitni_callbacks#ForeignCallbackSet#supers (var_other) on <var_other:ForeignCallbackSet> */
var11 = var_other->attrs[COLOR_nitc__nitni_callbacks__ForeignCallbackSet___supers].val; /* _supers on <var_other:ForeignCallbackSet> */
if (unlikely(var11 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _supers");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__nitni_callbacks, 50);
fatal_exit(1);
}
var9 = var11;
RET_LABEL10:(void)0;
}
}
{
core___core__SimpleCollection___add_all(var6, var9); /* Direct call abstract_collection#SimpleCollection#add_all on <var6:Set[MExplicitSuper]>*/
}
{
{ /* Inline nitni_callbacks#ForeignCallbackSet#types (self) on <self:ForeignCallbackSet> */
var14 = self->attrs[COLOR_nitc__nitni_callbacks__ForeignCallbackSet___types].val; /* _types on <self:ForeignCallbackSet> */
if (unlikely(var14 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _types");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__nitni_callbacks, 53);
fatal_exit(1);
}
var12 = var14;
RET_LABEL13:(void)0;
}
}
{
{ /* Inline nitni_callbacks#ForeignCallbackSet#types (var_other) on <var_other:ForeignCallbackSet> */
var17 = var_other->attrs[COLOR_nitc__nitni_callbacks__ForeignCallbackSet___types].val; /* _types on <var_other:ForeignCallbackSet> */
if (unlikely(var17 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _types");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__nitni_callbacks, 53);
fatal_exit(1);
}
var15 = var17;
RET_LABEL16:(void)0;
}
}
{
core___core__SimpleCollection___add_all(var12, var15); /* Direct call abstract_collection#SimpleCollection#add_all on <var12:Set[MType]>*/
}
{
{ /* Inline nitni_callbacks#ForeignCallbackSet#casts (self) on <self:ForeignCallbackSet> */
var20 = self->attrs[COLOR_nitc__nitni_callbacks__ForeignCallbackSet___casts].val; /* _casts on <self:ForeignCallbackSet> */
if (unlikely(var20 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _casts");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__nitni_callbacks, 56);
fatal_exit(1);
}
var18 = var20;
RET_LABEL19:(void)0;
}
}
{
{ /* Inline nitni_callbacks#ForeignCallbackSet#casts (var_other) on <var_other:ForeignCallbackSet> */
var23 = var_other->attrs[COLOR_nitc__nitni_callbacks__ForeignCallbackSet___casts].val; /* _casts on <var_other:ForeignCallbackSet> */
if (unlikely(var23 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _casts");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__nitni_callbacks, 56);
fatal_exit(1);
}
var21 = var23;
RET_LABEL22:(void)0;
}
}
{
core___core__SimpleCollection___add_all(var18, var21); /* Direct call abstract_collection#SimpleCollection#add_all on <var18:Set[MExplicitCast]>*/
}
RET_LABEL:;
}
/* method nitni_callbacks#AMethPropdef#foreign_callbacks_cache for (self: AMethPropdef): nullable ForeignCallbackSet */
val* nitc__nitni_callbacks___AMethPropdef___foreign_callbacks_cache(val* self) {
val* var /* : nullable ForeignCallbackSet */;
val* var1 /* : nullable ForeignCallbackSet */;
var1 = self->attrs[COLOR_nitc__nitni_callbacks__AMethPropdef___foreign_callbacks_cache].val; /* _foreign_callbacks_cache on <self:AMethPropdef> */
var = var1;
RET_LABEL:;
return var;
}
/* method nitni_callbacks#AMethPropdef#foreign_callbacks_cache= for (self: AMethPropdef, nullable ForeignCallbackSet) */
void nitc__nitni_callbacks___AMethPropdef___foreign_callbacks_cache_61d(val* self, val* p0) {
self->attrs[COLOR_nitc__nitni_callbacks__AMethPropdef___foreign_callbacks_cache].val = p0; /* _foreign_callbacks_cache on <self:AMethPropdef> */
RET_LABEL:;
}
/* method nitni_callbacks#AMethPropdef#foreign_callbacks for (self: AMethPropdef): ForeignCallbackSet */
val* nitc__nitni_callbacks___AMethPropdef___foreign_callbacks(val* self) {
val* var /* : ForeignCallbackSet */;
val* var1 /* : nullable ForeignCallbackSet */;
val* var3 /* : nullable ForeignCallbackSet */;
val* var_fcs /* var fcs: nullable ForeignCallbackSet */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var7 /* : Bool */;
short int var8 /* : Bool */;
val* var9 /* : Sys */;
static val* varonce;
val* var10 /* : String */;
char* var11 /* : CString */;
val* var12 /* : String */;
{
{ /* Inline nitni_callbacks#AMethPropdef#foreign_callbacks_cache (self) on <self:AMethPropdef> */
var3 = self->attrs[COLOR_nitc__nitni_callbacks__AMethPropdef___foreign_callbacks_cache].val; /* _foreign_callbacks_cache on <self:AMethPropdef> */
var1 = var3;
RET_LABEL2:(void)0;
}
}
var_fcs = var1;
if (var_fcs == NULL) {
var4 = 0; /* is null */
} else {
var4 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_fcs,((val*)NULL)) on <var_fcs:nullable ForeignCallbackSet> */
var_other = ((val*)NULL);
{
var7 = ((short int(*)(val* self, val* p0))(var_fcs->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_fcs, var_other); /* == on <var_fcs:nullable ForeignCallbackSet(ForeignCallbackSet)>*/
}
var8 = !var7;
var5 = var8;
goto RET_LABEL6;
RET_LABEL6:(void)0;
}
var4 = var5;
}
if (unlikely(!var4)) {
var9 = glob_sys;
if (likely(varonce!=NULL)) {
var10 = varonce;
} else {
var11 = "Error: attempting to access nitni callbacks before phase \'verify_nitni_callback_phase\'.";
var12 = core__abstract_text___CString___to_s_full(var11, 87l, 87l);
var10 = var12;
varonce = var10;
}
{
core__file___Sys___print(var9, var10); /* Direct call file#Sys#print on <var9:Sys>*/
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__nitni_callbacks, 93);
fatal_exit(1);
}
var = var_fcs;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method nitni_callbacks#AMethPropdef#verify_nitni_callbacks for (self: AMethPropdef, ToolContext) */
void nitc__nitni_callbacks___AMethPropdef___verify_nitni_callbacks(val* self, val* p0) {
val* var_toolcontext /* var toolcontext: ToolContext */;
val* var /* : nullable ForeignCallbackSet */;
val* var2 /* : nullable ForeignCallbackSet */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var6 /* : Bool */;
short int var7 /* : Bool */;
val* var8 /* : ForeignCallbackSet */;
val* var_fcs /* var fcs: ForeignCallbackSet */;
val* var10 /* : nullable MPropDef */;
val* var12 /* : nullable MPropDef */;
val* var13 /* : MClassDef */;
val* var15 /* : MClassDef */;
val* var16 /* : MModule */;
val* var18 /* : MModule */;
val* var_mmodule /* var mmodule: MModule */;
val* var19 /* : nullable MPropDef */;
val* var21 /* : nullable MPropDef */;
val* var22 /* : MClassDef */;
val* var24 /* : MClassDef */;
val* var25 /* : MClassType */;
val* var27 /* : MClassType */;
val* var_recv_type /* var recv_type: MClassType */;
val* var28 /* : Set[MType] */;
val* var30 /* : Set[MType] */;
val* var31 /* : nullable MPropDef */;
val* var33 /* : nullable MPropDef */;
val* var34 /* : nullable MSignature */;
val* var36 /* : nullable MSignature */;
val* var37 /* : nullable MType */;
val* var39 /* : nullable MType */;
val* var_rmt /* var rmt: nullable MType */;
short int var40 /* : Bool */;
short int var41 /* : Bool */;
short int var43 /* : Bool */;
short int var44 /* : Bool */;
short int var45 /* : Bool */;
int cltype;
int idtype;
val* var46 /* : nullable MPropDef */;
val* var48 /* : nullable MPropDef */;
val* var49 /* : MClassDef */;
val* var51 /* : MClassDef */;
val* var52 /* : MClassType */;
val* var54 /* : MClassType */;
val* var_mclass_type /* var mclass_type: MClassType */;
val* var55 /* : MType */;
val* var56 /* : MType */;
val* var_mtype /* var mtype: MType */;
val* var57 /* : Set[MType] */;
val* var59 /* : Set[MType] */;
val* var60 /* : nullable MPropDef */;
val* var62 /* : nullable MPropDef */;
val* var63 /* : nullable MSignature */;
val* var65 /* : nullable MSignature */;
val* var66 /* : Array[MParameter] */;
val* var68 /* : Array[MParameter] */;
val* var_ /* var : Array[MParameter] */;
val* var69 /* : IndexedIterator[nullable Object] */;
val* var_70 /* var : IndexedIterator[MParameter] */;
short int var71 /* : Bool */;
val* var72 /* : nullable Object */;
val* var_p /* var p: MParameter */;
val* var73 /* : MType */;
val* var75 /* : MType */;
val* var76 /* : MType */;
val* var_mtype77 /* var mtype: MType */;
short int var78 /* : Bool */;
int cltype79;
int idtype80;
val* var81 /* : nullable MPropDef */;
val* var83 /* : nullable MPropDef */;
val* var84 /* : MClassDef */;
val* var86 /* : MClassDef */;
val* var87 /* : MClassType */;
val* var89 /* : MClassType */;
val* var_mclass_type90 /* var mclass_type: MClassType */;
val* var91 /* : MType */;
val* var92 /* : Set[MType] */;
val* var94 /* : Set[MType] */;
val* var95 /* : nullable AExternCalls */;
val* var97 /* : nullable AExternCalls */;
short int var98 /* : Bool */;
short int var99 /* : Bool */;
short int var101 /* : Bool */;
short int var102 /* : Bool */;
val* var103 /* : nullable AExternCalls */;
val* var105 /* : nullable AExternCalls */;
val* var106 /* : ANodes[AExternCall] */;
val* var108 /* : ANodes[AExternCall] */;
val* var_109 /* var : ANodes[AExternCall] */;
val* var110 /* : Iterator[ANode] */;
val* var_111 /* var : Iterator[AExternCall] */;
short int var112 /* : Bool */;
val* var114 /* : nullable Object */;
val* var_ec /* var ec: AExternCall */;
var_toolcontext = p0;
{
{ /* Inline nitni_callbacks#AMethPropdef#foreign_callbacks_cache (self) on <self:AMethPropdef> */
var2 = self->attrs[COLOR_nitc__nitni_callbacks__AMethPropdef___foreign_callbacks_cache].val; /* _foreign_callbacks_cache on <self:AMethPropdef> */
var = var2;
RET_LABEL1:(void)0;
}
}
if (var == NULL) {
var3 = 0; /* is null */
} else {
var3 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var,((val*)NULL)) on <var:nullable ForeignCallbackSet> */
var_other = ((val*)NULL);
{
var6 = ((short int(*)(val* self, val* p0))(var->class->vft[COLOR_core__kernel__Object___61d_61d]))(var, var_other); /* == on <var:nullable ForeignCallbackSet(ForeignCallbackSet)>*/
}
var7 = !var6;
var4 = var7;
goto RET_LABEL5;
RET_LABEL5:(void)0;
}
var3 = var4;
}
if (var3){
goto RET_LABEL;
} else {
}
var8 = NEW_nitc__ForeignCallbackSet(&type_nitc__ForeignCallbackSet);
{
{ /* Inline kernel#Object#init (var8) on <var8:ForeignCallbackSet> */
RET_LABEL9:(void)0;
}
}
var_fcs = var8;
{
{ /* Inline modelize_property#APropdef#mpropdef (self) on <self:AMethPropdef> */
var12 = self->attrs[COLOR_nitc__modelize_property__APropdef___mpropdef].val; /* _mpropdef on <self:AMethPropdef> */
var10 = var12;
RET_LABEL11:(void)0;
}
}
if (var10 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__nitni_callbacks, 105);
fatal_exit(1);
} else {
{ /* Inline model#MPropDef#mclassdef (var10) on <var10:nullable MPropDef(nullable MMethodDef)> */
if (unlikely(var10 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2354);
fatal_exit(1);
}
var15 = var10->attrs[COLOR_nitc__model__MPropDef___mclassdef].val; /* _mclassdef on <var10:nullable MPropDef(nullable MMethodDef)> */
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
{ /* Inline model#MClassDef#mmodule (var13) on <var13:MClassDef> */
var18 = var13->attrs[COLOR_nitc__model__MClassDef___mmodule].val; /* _mmodule on <var13:MClassDef> */
if (unlikely(var18 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 588);
fatal_exit(1);
}
var16 = var18;
RET_LABEL17:(void)0;
}
}
var_mmodule = var16;
{
{ /* Inline modelize_property#APropdef#mpropdef (self) on <self:AMethPropdef> */
var21 = self->attrs[COLOR_nitc__modelize_property__APropdef___mpropdef].val; /* _mpropdef on <self:AMethPropdef> */
var19 = var21;
RET_LABEL20:(void)0;
}
}
if (var19 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__nitni_callbacks, 108);
fatal_exit(1);
} else {
{ /* Inline model#MPropDef#mclassdef (var19) on <var19:nullable MPropDef(nullable MMethodDef)> */
if (unlikely(var19 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2354);
fatal_exit(1);
}
var24 = var19->attrs[COLOR_nitc__model__MPropDef___mclassdef].val; /* _mclassdef on <var19:nullable MPropDef(nullable MMethodDef)> */
if (unlikely(var24 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2354);
fatal_exit(1);
}
var22 = var24;
RET_LABEL23:(void)0;
}
}
{
{ /* Inline model#MClassDef#bound_mtype (var22) on <var22:MClassDef> */
var27 = var22->attrs[COLOR_nitc__model__MClassDef___bound_mtype].val; /* _bound_mtype on <var22:MClassDef> */
if (unlikely(var27 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _bound_mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 594);
fatal_exit(1);
}
var25 = var27;
RET_LABEL26:(void)0;
}
}
var_recv_type = var25;
{
{ /* Inline nitni_callbacks#ForeignCallbackSet#types (var_fcs) on <var_fcs:ForeignCallbackSet> */
var30 = var_fcs->attrs[COLOR_nitc__nitni_callbacks__ForeignCallbackSet___types].val; /* _types on <var_fcs:ForeignCallbackSet> */
if (unlikely(var30 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _types");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__nitni_callbacks, 53);
fatal_exit(1);
}
var28 = var30;
RET_LABEL29:(void)0;
}
}
{
((void(*)(val* self, val* p0))((((long)var28&3)?class_info[((long)var28&3)]:var28->class)->vft[COLOR_core__abstract_collection__SimpleCollection__add]))(var28, var_recv_type); /* add on <var28:Set[MType]>*/
}
{
{ /* Inline modelize_property#APropdef#mpropdef (self) on <self:AMethPropdef> */
var33 = self->attrs[COLOR_nitc__modelize_property__APropdef___mpropdef].val; /* _mpropdef on <self:AMethPropdef> */
var31 = var33;
RET_LABEL32:(void)0;
}
}
if (var31 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__nitni_callbacks, 112);
fatal_exit(1);
} else {
{ /* Inline model#MMethodDef#msignature (var31) on <var31:nullable MPropDef(nullable MMethodDef)> */
if (unlikely(var31 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2483);
fatal_exit(1);
}
var36 = var31->attrs[COLOR_nitc__model__MMethodDef___msignature].val; /* _msignature on <var31:nullable MPropDef(nullable MMethodDef)> */
var34 = var36;
RET_LABEL35:(void)0;
}
}
if (var34 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__nitni_callbacks, 112);
fatal_exit(1);
} else {
{ /* Inline model#MSignature#return_mtype (var34) on <var34:nullable MSignature> */
if (unlikely(var34 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1891);
fatal_exit(1);
}
var39 = var34->attrs[COLOR_nitc__model__MSignature___return_mtype].val; /* _return_mtype on <var34:nullable MSignature> */
var37 = var39;
RET_LABEL38:(void)0;
}
}
var_rmt = var37;
if (var_rmt == NULL) {
var40 = 0; /* is null */
} else {
var40 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_rmt,((val*)NULL)) on <var_rmt:nullable MType> */
var_other = ((val*)NULL);
{
var43 = ((short int(*)(val* self, val* p0))(var_rmt->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_rmt, var_other); /* == on <var_rmt:nullable MType(MType)>*/
}
var44 = !var43;
var41 = var44;
goto RET_LABEL42;
RET_LABEL42:(void)0;
}
var40 = var41;
}
if (var40){
/* <var_rmt:nullable MType(MType)> isa MFormalType */
cltype = type_nitc__MFormalType.color;
idtype = type_nitc__MFormalType.id;
if(cltype >= var_rmt->type->table_size) {
var45 = 0;
} else {
var45 = var_rmt->type->type_table[cltype] == idtype;
}
if (var45){
{
{ /* Inline modelize_property#APropdef#mpropdef (self) on <self:AMethPropdef> */
var48 = self->attrs[COLOR_nitc__modelize_property__APropdef___mpropdef].val; /* _mpropdef on <self:AMethPropdef> */
var46 = var48;
RET_LABEL47:(void)0;
}
}
if (var46 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__nitni_callbacks, 115);
fatal_exit(1);
} else {
{ /* Inline model#MPropDef#mclassdef (var46) on <var46:nullable MPropDef(nullable MMethodDef)> */
if (unlikely(var46 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2354);
fatal_exit(1);
}
var51 = var46->attrs[COLOR_nitc__model__MPropDef___mclassdef].val; /* _mclassdef on <var46:nullable MPropDef(nullable MMethodDef)> */
if (unlikely(var51 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2354);
fatal_exit(1);
}
var49 = var51;
RET_LABEL50:(void)0;
}
}
{
{ /* Inline model#MClassDef#bound_mtype (var49) on <var49:MClassDef> */
var54 = var49->attrs[COLOR_nitc__model__MClassDef___bound_mtype].val; /* _bound_mtype on <var49:MClassDef> */
if (unlikely(var54 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _bound_mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 594);
fatal_exit(1);
}
var52 = var54;
RET_LABEL53:(void)0;
}
}
var_mclass_type = var52;
{
var55 = nitc___nitc__MType___anchor_to(var_rmt, var_mmodule, var_mclass_type);
}
var_rmt = var55;
} else {
}
{
var56 = ((val*(*)(val* self, val* p0, val* p1, val* p2, short int p3))(var_rmt->class->vft[COLOR_nitc__model__MType__resolve_for]))(var_rmt, var_recv_type, var_recv_type, var_mmodule, 1); /* resolve_for on <var_rmt:nullable MType(MType)>*/
}
var_mtype = var56;
{
{ /* Inline nitni_callbacks#ForeignCallbackSet#types (var_fcs) on <var_fcs:ForeignCallbackSet> */
var59 = var_fcs->attrs[COLOR_nitc__nitni_callbacks__ForeignCallbackSet___types].val; /* _types on <var_fcs:ForeignCallbackSet> */
if (unlikely(var59 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _types");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__nitni_callbacks, 53);
fatal_exit(1);
}
var57 = var59;
RET_LABEL58:(void)0;
}
}
{
((void(*)(val* self, val* p0))((((long)var57&3)?class_info[((long)var57&3)]:var57->class)->vft[COLOR_core__abstract_collection__SimpleCollection__add]))(var57, var_mtype); /* add on <var57:Set[MType]>*/
}
} else {
}
{
{ /* Inline modelize_property#APropdef#mpropdef (self) on <self:AMethPropdef> */
var62 = self->attrs[COLOR_nitc__modelize_property__APropdef___mpropdef].val; /* _mpropdef on <self:AMethPropdef> */
var60 = var62;
RET_LABEL61:(void)0;
}
}
if (var60 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__nitni_callbacks, 123);
fatal_exit(1);
} else {
{ /* Inline model#MMethodDef#msignature (var60) on <var60:nullable MPropDef(nullable MMethodDef)> */
if (unlikely(var60 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2483);
fatal_exit(1);
}
var65 = var60->attrs[COLOR_nitc__model__MMethodDef___msignature].val; /* _msignature on <var60:nullable MPropDef(nullable MMethodDef)> */
var63 = var65;
RET_LABEL64:(void)0;
}
}
if (var63 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__nitni_callbacks, 123);
fatal_exit(1);
} else {
{ /* Inline model#MSignature#mparameters (var63) on <var63:nullable MSignature> */
if (unlikely(var63 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1879);
fatal_exit(1);
}
var68 = var63->attrs[COLOR_nitc__model__MSignature___mparameters].val; /* _mparameters on <var63:nullable MSignature> */
if (unlikely(var68 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mparameters");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1879);
fatal_exit(1);
}
var66 = var68;
RET_LABEL67:(void)0;
}
}
var_ = var66;
{
var69 = core___core__AbstractArrayRead___core__abstract_collection__Collection__iterator(var_);
}
var_70 = var69;
for(;;) {
{
var71 = ((short int(*)(val* self))((((long)var_70&3)?class_info[((long)var_70&3)]:var_70->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_70); /* is_ok on <var_70:IndexedIterator[MParameter]>*/
}
if (var71){
} else {
goto BREAK_label;
}
{
var72 = ((val*(*)(val* self))((((long)var_70&3)?class_info[((long)var_70&3)]:var_70->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_70); /* item on <var_70:IndexedIterator[MParameter]>*/
}
var_p = var72;
{
{ /* Inline model#MParameter#mtype (var_p) on <var_p:MParameter> */
var75 = var_p->attrs[COLOR_nitc__model__MParameter___mtype].val; /* _mtype on <var_p:MParameter> */
if (unlikely(var75 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1996);
fatal_exit(1);
}
var73 = var75;
RET_LABEL74:(void)0;
}
}
{
var76 = ((val*(*)(val* self, val* p0, val* p1, val* p2, short int p3))(var73->class->vft[COLOR_nitc__model__MType__resolve_for]))(var73, var_recv_type, var_recv_type, var_mmodule, 1); /* resolve_for on <var73:MType>*/
}
var_mtype77 = var76;
/* <var_mtype77:MType> isa MFormalType */
cltype79 = type_nitc__MFormalType.color;
idtype80 = type_nitc__MFormalType.id;
if(cltype79 >= var_mtype77->type->table_size) {
var78 = 0;
} else {
var78 = var_mtype77->type->type_table[cltype79] == idtype80;
}
if (var78){
{
{ /* Inline modelize_property#APropdef#mpropdef (self) on <self:AMethPropdef> */
var83 = self->attrs[COLOR_nitc__modelize_property__APropdef___mpropdef].val; /* _mpropdef on <self:AMethPropdef> */
var81 = var83;
RET_LABEL82:(void)0;
}
}
if (var81 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__nitni_callbacks, 126);
fatal_exit(1);
} else {
{ /* Inline model#MPropDef#mclassdef (var81) on <var81:nullable MPropDef(nullable MMethodDef)> */
if (unlikely(var81 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2354);
fatal_exit(1);
}
var86 = var81->attrs[COLOR_nitc__model__MPropDef___mclassdef].val; /* _mclassdef on <var81:nullable MPropDef(nullable MMethodDef)> */
if (unlikely(var86 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2354);
fatal_exit(1);
}
var84 = var86;
RET_LABEL85:(void)0;
}
}
{
{ /* Inline model#MClassDef#bound_mtype (var84) on <var84:MClassDef> */
var89 = var84->attrs[COLOR_nitc__model__MClassDef___bound_mtype].val; /* _bound_mtype on <var84:MClassDef> */
if (unlikely(var89 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _bound_mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 594);
fatal_exit(1);
}
var87 = var89;
RET_LABEL88:(void)0;
}
}
var_mclass_type90 = var87;
{
var91 = nitc___nitc__MType___anchor_to(var_mtype77, var_mmodule, var_mclass_type90);
}
var_mtype77 = var91;
} else {
}
{
{ /* Inline nitni_callbacks#ForeignCallbackSet#types (var_fcs) on <var_fcs:ForeignCallbackSet> */
var94 = var_fcs->attrs[COLOR_nitc__nitni_callbacks__ForeignCallbackSet___types].val; /* _types on <var_fcs:ForeignCallbackSet> */
if (unlikely(var94 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _types");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__nitni_callbacks, 53);
fatal_exit(1);
}
var92 = var94;
RET_LABEL93:(void)0;
}
}
{
((void(*)(val* self, val* p0))((((long)var92&3)?class_info[((long)var92&3)]:var92->class)->vft[COLOR_core__abstract_collection__SimpleCollection__add]))(var92, var_mtype77); /* add on <var92:Set[MType]>*/
}
{
((void(*)(val* self))((((long)var_70&3)?class_info[((long)var_70&3)]:var_70->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_70); /* next on <var_70:IndexedIterator[MParameter]>*/
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_70&3)?class_info[((long)var_70&3)]:var_70->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_70); /* finish on <var_70:IndexedIterator[MParameter]>*/
}
{
{ /* Inline parser_nodes#AMethPropdef#n_extern_calls (self) on <self:AMethPropdef> */
var97 = self->attrs[COLOR_nitc__parser_nodes__AMethPropdef___n_extern_calls].val; /* _n_extern_calls on <self:AMethPropdef> */
var95 = var97;
RET_LABEL96:(void)0;
}
}
if (var95 == NULL) {
var98 = 0; /* is null */
} else {
var98 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var95,((val*)NULL)) on <var95:nullable AExternCalls> */
var_other = ((val*)NULL);
{
var101 = ((short int(*)(val* self, val* p0))(var95->class->vft[COLOR_core__kernel__Object___61d_61d]))(var95, var_other); /* == on <var95:nullable AExternCalls(AExternCalls)>*/
}
var102 = !var101;
var99 = var102;
goto RET_LABEL100;
RET_LABEL100:(void)0;
}
var98 = var99;
}
if (var98){
{
{ /* Inline parser_nodes#AMethPropdef#n_extern_calls (self) on <self:AMethPropdef> */
var105 = self->attrs[COLOR_nitc__parser_nodes__AMethPropdef___n_extern_calls].val; /* _n_extern_calls on <self:AMethPropdef> */
var103 = var105;
RET_LABEL104:(void)0;
}
}
if (var103 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__nitni_callbacks, 134);
fatal_exit(1);
} else {
{ /* Inline parser_nodes#AExternCalls#n_extern_calls (var103) on <var103:nullable AExternCalls> */
if (unlikely(var103 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 1444);
fatal_exit(1);
}
var108 = var103->attrs[COLOR_nitc__parser_nodes__AExternCalls___n_extern_calls].val; /* _n_extern_calls on <var103:nullable AExternCalls> */
if (unlikely(var108 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_extern_calls");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 1444);
fatal_exit(1);
}
var106 = var108;
RET_LABEL107:(void)0;
}
}
var_109 = var106;
{
var110 = nitc___nitc__ANodes___core__abstract_collection__Collection__iterator(var_109);
}
var_111 = var110;
for(;;) {
{
var112 = ((short int(*)(val* self))((((long)var_111&3)?class_info[((long)var_111&3)]:var_111->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_111); /* is_ok on <var_111:Iterator[AExternCall]>*/
}
if (var112){
} else {
goto BREAK_label113;
}
{
var114 = ((val*(*)(val* self))((((long)var_111&3)?class_info[((long)var_111&3)]:var_111->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_111); /* item on <var_111:Iterator[AExternCall]>*/
}
var_ec = var114;
{
((void(*)(val* self, val* p0, val* p1, val* p2))(var_ec->class->vft[COLOR_nitc__nitni_callbacks__AExternCall__verify_and_collect]))(var_ec, self, var_fcs, var_toolcontext); /* verify_and_collect on <var_ec:AExternCall>*/
}
{
((void(*)(val* self))((((long)var_111&3)?class_info[((long)var_111&3)]:var_111->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_111); /* next on <var_111:Iterator[AExternCall]>*/
}
}
BREAK_label113: (void)0;
{
((void(*)(val* self))((((long)var_111&3)?class_info[((long)var_111&3)]:var_111->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_111); /* finish on <var_111:Iterator[AExternCall]>*/
}
} else {
}
{
{ /* Inline nitni_callbacks#AMethPropdef#foreign_callbacks_cache= (self,var_fcs) on <self:AMethPropdef> */
self->attrs[COLOR_nitc__nitni_callbacks__AMethPropdef___foreign_callbacks_cache].val = var_fcs; /* _foreign_callbacks_cache on <self:AMethPropdef> */
RET_LABEL115:(void)0;
}
}
RET_LABEL:;
}
/* method nitni_callbacks#AMethPropdef#accept_rapid_type_visitor for (self: AMethPropdef, RapidTypeVisitor) */
void nitc__nitni_callbacks___AMethPropdef___nitc__rapid_type_analysis__ANode__accept_rapid_type_visitor(val* self, val* p0) {
val* var_v /* var v: RapidTypeVisitor */;
val* var /* : nullable ForeignCallbackSet */;
val* var2 /* : nullable ForeignCallbackSet */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var6 /* : Bool */;
short int var8 /* : Bool */;
val* var9 /* : ForeignCallbackSet */;
val* var10 /* : Set[MExplicitCall] */;
val* var12 /* : Set[MExplicitCall] */;
val* var_ /* var : Set[MExplicitCall] */;
val* var13 /* : Iterator[nullable Object] */;
val* var_14 /* var : Iterator[MExplicitCall] */;
short int var15 /* : Bool */;
val* var16 /* : nullable Object */;
val* var_cb /* var cb: MExplicitCall */;
val* var17 /* : MClassType */;
val* var19 /* : MClassType */;
val* var20 /* : MProperty */;
val* var22 /* : MProperty */;
short int var23 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
val* var24 /* : ForeignCallbackSet */;
val* var25 /* : Set[MExplicitCast] */;
val* var27 /* : Set[MExplicitCast] */;
val* var_28 /* var : Set[MExplicitCast] */;
val* var29 /* : Iterator[nullable Object] */;
val* var_30 /* var : Iterator[MExplicitCast] */;
short int var31 /* : Bool */;
val* var33 /* : nullable Object */;
val* var_cast /* var cast: MExplicitCast */;
val* var34 /* : MType */;
val* var36 /* : MType */;
val* var37 /* : ForeignCallbackSet */;
val* var38 /* : Set[MExplicitSuper] */;
val* var40 /* : Set[MExplicitSuper] */;
val* var_41 /* var : Set[MExplicitSuper] */;
val* var42 /* : Iterator[nullable Object] */;
val* var_43 /* var : Iterator[MExplicitSuper] */;
short int var44 /* : Bool */;
val* var46 /* : nullable Object */;
val* var_sup /* var sup: MExplicitSuper */;
val* var47 /* : RapidTypeAnalysis */;
val* var49 /* : RapidTypeAnalysis */;
val* var50 /* : MPropDef */;
val* var52 /* : MPropDef */;
val* var53 /* : MClassDef */;
val* var55 /* : MClassDef */;
val* var56 /* : MClass */;
val* var58 /* : MClass */;
val* var59 /* : MClassType */;
val* var61 /* : MClassType */;
val* var62 /* : MPropDef */;
val* var64 /* : MPropDef */;
short int var65 /* : Bool */;
int cltype66;
int idtype67;
const char* var_class_name68;
val* var69 /* : ForeignCallbackSet */;
val* var70 /* : Set[MType] */;
val* var72 /* : Set[MType] */;
val* var_73 /* var : Set[MType] */;
val* var74 /* : Iterator[nullable Object] */;
val* var_75 /* var : Iterator[MType] */;
short int var76 /* : Bool */;
val* var78 /* : nullable Object */;
val* var_t /* var t: MType */;
short int var79 /* : Bool */;
int cltype80;
int idtype81;
var_v = p0;
{
{ /* Inline nitni_callbacks#AMethPropdef#foreign_callbacks_cache (self) on <self:AMethPropdef> */
var2 = self->attrs[COLOR_nitc__nitni_callbacks__AMethPropdef___foreign_callbacks_cache].val; /* _foreign_callbacks_cache on <self:AMethPropdef> */
var = var2;
RET_LABEL1:(void)0;
}
}
if (var == NULL) {
var3 = 1; /* is null */
} else {
var3 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var,((val*)NULL)) on <var:nullable ForeignCallbackSet> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var,var_other) on <var:nullable ForeignCallbackSet(ForeignCallbackSet)> */
var8 = var == var_other;
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
var9 = nitc__nitni_callbacks___AMethPropdef___foreign_callbacks(self);
}
{
{ /* Inline nitni_callbacks#ForeignCallbackSet#callbacks (var9) on <var9:ForeignCallbackSet> */
var12 = var9->attrs[COLOR_nitc__nitni_callbacks__ForeignCallbackSet___callbacks].val; /* _callbacks on <var9:ForeignCallbackSet> */
if (unlikely(var12 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _callbacks");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__nitni_callbacks, 47);
fatal_exit(1);
}
var10 = var12;
RET_LABEL11:(void)0;
}
}
var_ = var10;
{
var13 = ((val*(*)(val* self))((((long)var_&3)?class_info[((long)var_&3)]:var_->class)->vft[COLOR_core__abstract_collection__Collection__iterator]))(var_); /* iterator on <var_:Set[MExplicitCall]>*/
}
var_14 = var13;
for(;;) {
{
var15 = ((short int(*)(val* self))((((long)var_14&3)?class_info[((long)var_14&3)]:var_14->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_14); /* is_ok on <var_14:Iterator[MExplicitCall]>*/
}
if (var15){
} else {
goto BREAK_label;
}
{
var16 = ((val*(*)(val* self))((((long)var_14&3)?class_info[((long)var_14&3)]:var_14->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_14); /* item on <var_14:Iterator[MExplicitCall]>*/
}
var_cb = var16;
{
{ /* Inline nitni_callbacks#MExplicitCall#recv_mtype (var_cb) on <var_cb:MExplicitCall> */
var19 = var_cb->attrs[COLOR_nitc__nitni_callbacks__MExplicitCall___recv_mtype].val; /* _recv_mtype on <var_cb:MExplicitCall> */
if (unlikely(var19 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _recv_mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__nitni_callbacks, 168);
fatal_exit(1);
}
var17 = var19;
RET_LABEL18:(void)0;
}
}
{
{ /* Inline nitni_callbacks#MExplicitCall#mproperty (var_cb) on <var_cb:MExplicitCall> */
var22 = var_cb->attrs[COLOR_nitc__nitni_callbacks__MExplicitCall___mproperty].val; /* _mproperty on <var_cb:MExplicitCall> */
if (unlikely(var22 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__nitni_callbacks, 170);
fatal_exit(1);
}
var20 = var22;
RET_LABEL21:(void)0;
}
}
/* <var20:MProperty> isa MMethod */
cltype = type_nitc__MMethod.color;
idtype = type_nitc__MMethod.id;
if(cltype >= var20->type->table_size) {
var23 = 0;
} else {
var23 = var20->type->type_table[cltype] == idtype;
}
if (unlikely(!var23)) {
var_class_name = var20 == NULL ? "null" : var20->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "MMethod", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__nitni_callbacks, 147);
fatal_exit(1);
}
{
nitc___nitc__RapidTypeVisitor___add_send(var_v, var17, var20); /* Direct call rapid_type_analysis#RapidTypeVisitor#add_send on <var_v:RapidTypeVisitor>*/
}
{
((void(*)(val* self))((((long)var_14&3)?class_info[((long)var_14&3)]:var_14->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_14); /* next on <var_14:Iterator[MExplicitCall]>*/
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_14&3)?class_info[((long)var_14&3)]:var_14->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_14); /* finish on <var_14:Iterator[MExplicitCall]>*/
}
{
var24 = nitc__nitni_callbacks___AMethPropdef___foreign_callbacks(self);
}
{
{ /* Inline nitni_callbacks#ForeignCallbackSet#casts (var24) on <var24:ForeignCallbackSet> */
var27 = var24->attrs[COLOR_nitc__nitni_callbacks__ForeignCallbackSet___casts].val; /* _casts on <var24:ForeignCallbackSet> */
if (unlikely(var27 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _casts");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__nitni_callbacks, 56);
fatal_exit(1);
}
var25 = var27;
RET_LABEL26:(void)0;
}
}
var_28 = var25;
{
var29 = ((val*(*)(val* self))((((long)var_28&3)?class_info[((long)var_28&3)]:var_28->class)->vft[COLOR_core__abstract_collection__Collection__iterator]))(var_28); /* iterator on <var_28:Set[MExplicitCast]>*/
}
var_30 = var29;
for(;;) {
{
var31 = ((short int(*)(val* self))((((long)var_30&3)?class_info[((long)var_30&3)]:var_30->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_30); /* is_ok on <var_30:Iterator[MExplicitCast]>*/
}
if (var31){
} else {
goto BREAK_label32;
}
{
var33 = ((val*(*)(val* self))((((long)var_30&3)?class_info[((long)var_30&3)]:var_30->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_30); /* item on <var_30:Iterator[MExplicitCast]>*/
}
var_cast = var33;
{
{ /* Inline nitni_callbacks#MExplicitCast#to (var_cast) on <var_cast:MExplicitCast> */
var36 = var_cast->attrs[COLOR_nitc__nitni_callbacks__MExplicitCast___to].val; /* _to on <var_cast:MExplicitCast> */
if (unlikely(var36 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _to");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__nitni_callbacks, 264);
fatal_exit(1);
}
var34 = var36;
RET_LABEL35:(void)0;
}
}
{
nitc___nitc__RapidTypeVisitor___add_cast_type(var_v, var34); /* Direct call rapid_type_analysis#RapidTypeVisitor#add_cast_type on <var_v:RapidTypeVisitor>*/
}
{
((void(*)(val* self))((((long)var_30&3)?class_info[((long)var_30&3)]:var_30->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_30); /* next on <var_30:Iterator[MExplicitCast]>*/
}
}
BREAK_label32: (void)0;
{
((void(*)(val* self))((((long)var_30&3)?class_info[((long)var_30&3)]:var_30->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_30); /* finish on <var_30:Iterator[MExplicitCast]>*/
}
{
var37 = nitc__nitni_callbacks___AMethPropdef___foreign_callbacks(self);
}
{
{ /* Inline nitni_callbacks#ForeignCallbackSet#supers (var37) on <var37:ForeignCallbackSet> */
var40 = var37->attrs[COLOR_nitc__nitni_callbacks__ForeignCallbackSet___supers].val; /* _supers on <var37:ForeignCallbackSet> */
if (unlikely(var40 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _supers");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__nitni_callbacks, 50);
fatal_exit(1);
}
var38 = var40;
RET_LABEL39:(void)0;
}
}
var_41 = var38;
{
var42 = ((val*(*)(val* self))((((long)var_41&3)?class_info[((long)var_41&3)]:var_41->class)->vft[COLOR_core__abstract_collection__Collection__iterator]))(var_41); /* iterator on <var_41:Set[MExplicitSuper]>*/
}
var_43 = var42;
for(;;) {
{
var44 = ((short int(*)(val* self))((((long)var_43&3)?class_info[((long)var_43&3)]:var_43->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_43); /* is_ok on <var_43:Iterator[MExplicitSuper]>*/
}
if (var44){
} else {
goto BREAK_label45;
}
{
var46 = ((val*(*)(val* self))((((long)var_43&3)?class_info[((long)var_43&3)]:var_43->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_43); /* item on <var_43:Iterator[MExplicitSuper]>*/
}
var_sup = var46;
{
{ /* Inline rapid_type_analysis#RapidTypeVisitor#analysis (var_v) on <var_v:RapidTypeVisitor> */
var49 = var_v->attrs[COLOR_nitc__rapid_type_analysis__RapidTypeVisitor___analysis].val; /* _analysis on <var_v:RapidTypeVisitor> */
if (unlikely(var49 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _analysis");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__rapid_type_analysis, 465);
fatal_exit(1);
}
var47 = var49;
RET_LABEL48:(void)0;
}
}
{
{ /* Inline nitni_callbacks#MExplicitSuper#from (var_sup) on <var_sup:MExplicitSuper> */
var52 = var_sup->attrs[COLOR_nitc__nitni_callbacks__MExplicitSuper___from].val; /* _from on <var_sup:MExplicitSuper> */
if (unlikely(var52 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _from");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__nitni_callbacks, 254);
fatal_exit(1);
}
var50 = var52;
RET_LABEL51:(void)0;
}
}
{
{ /* Inline model#MPropDef#mclassdef (var50) on <var50:MPropDef> */
var55 = var50->attrs[COLOR_nitc__model__MPropDef___mclassdef].val; /* _mclassdef on <var50:MPropDef> */
if (unlikely(var55 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2354);
fatal_exit(1);
}
var53 = var55;
RET_LABEL54:(void)0;
}
}
{
{ /* Inline model#MClassDef#mclass (var53) on <var53:MClassDef> */
var58 = var53->attrs[COLOR_nitc__model__MClassDef___mclass].val; /* _mclass on <var53:MClassDef> */
if (unlikely(var58 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 591);
fatal_exit(1);
}
var56 = var58;
RET_LABEL57:(void)0;
}
}
{
{ /* Inline model#MClass#mclass_type (var56) on <var56:MClass> */
var61 = var56->attrs[COLOR_nitc__model__MClass___mclass_type].val; /* _mclass_type on <var56:MClass> */
if (unlikely(var61 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass_type");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 520);
fatal_exit(1);
}
var59 = var61;
RET_LABEL60:(void)0;
}
}
{
{ /* Inline nitni_callbacks#MExplicitSuper#from (var_sup) on <var_sup:MExplicitSuper> */
var64 = var_sup->attrs[COLOR_nitc__nitni_callbacks__MExplicitSuper___from].val; /* _from on <var_sup:MExplicitSuper> */
if (unlikely(var64 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _from");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__nitni_callbacks, 254);
fatal_exit(1);
}
var62 = var64;
RET_LABEL63:(void)0;
}
}
/* <var62:MPropDef> isa MMethodDef */
cltype66 = type_nitc__MMethodDef.color;
idtype67 = type_nitc__MMethodDef.id;
if(cltype66 >= var62->type->table_size) {
var65 = 0;
} else {
var65 = var62->type->type_table[cltype66] == idtype67;
}
if (unlikely(!var65)) {
var_class_name68 = var62 == NULL ? "null" : var62->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "MMethodDef", var_class_name68);
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__nitni_callbacks, 150);
fatal_exit(1);
}
{
nitc___nitc__RapidTypeAnalysis___add_super_send(var47, var59, var62); /* Direct call rapid_type_analysis#RapidTypeAnalysis#add_super_send on <var47:RapidTypeAnalysis>*/
}
{
((void(*)(val* self))((((long)var_43&3)?class_info[((long)var_43&3)]:var_43->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_43); /* next on <var_43:Iterator[MExplicitSuper]>*/
}
}
BREAK_label45: (void)0;
{
((void(*)(val* self))((((long)var_43&3)?class_info[((long)var_43&3)]:var_43->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_43); /* finish on <var_43:Iterator[MExplicitSuper]>*/
}
{
var69 = nitc__nitni_callbacks___AMethPropdef___foreign_callbacks(self);
}
{
{ /* Inline nitni_callbacks#ForeignCallbackSet#types (var69) on <var69:ForeignCallbackSet> */
var72 = var69->attrs[COLOR_nitc__nitni_callbacks__ForeignCallbackSet___types].val; /* _types on <var69:ForeignCallbackSet> */
if (unlikely(var72 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _types");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__nitni_callbacks, 53);
fatal_exit(1);
}
var70 = var72;
RET_LABEL71:(void)0;
}
}
var_73 = var70;
{
var74 = ((val*(*)(val* self))((((long)var_73&3)?class_info[((long)var_73&3)]:var_73->class)->vft[COLOR_core__abstract_collection__Collection__iterator]))(var_73); /* iterator on <var_73:Set[MType]>*/
}
var_75 = var74;
for(;;) {
{
var76 = ((short int(*)(val* self))((((long)var_75&3)?class_info[((long)var_75&3)]:var_75->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_75); /* is_ok on <var_75:Iterator[MType]>*/
}
if (var76){
} else {
goto BREAK_label77;
}
{
var78 = ((val*(*)(val* self))((((long)var_75&3)?class_info[((long)var_75&3)]:var_75->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_75); /* item on <var_75:Iterator[MType]>*/
}
var_t = var78;
/* <var_t:MType> isa MClassType */
cltype80 = type_nitc__MClassType.color;
idtype81 = type_nitc__MClassType.id;
if(cltype80 >= var_t->type->table_size) {
var79 = 0;
} else {
var79 = var_t->type->type_table[cltype80] == idtype81;
}
if (var79){
{
nitc___nitc__RapidTypeVisitor___add_type(var_v, var_t); /* Direct call rapid_type_analysis#RapidTypeVisitor#add_type on <var_v:RapidTypeVisitor>*/
}
} else {
}
{
((void(*)(val* self))((((long)var_75&3)?class_info[((long)var_75&3)]:var_75->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_75); /* next on <var_75:Iterator[MType]>*/
}
}
BREAK_label77: (void)0;
{
((void(*)(val* self))((((long)var_75&3)?class_info[((long)var_75&3)]:var_75->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_75); /* finish on <var_75:Iterator[MType]>*/
}
RET_LABEL:;
}
/* method nitni_callbacks#MExplicitCall#recv_mtype for (self: MExplicitCall): MClassType */
val* nitc___nitc__MExplicitCall___recv_mtype(val* self) {
val* var /* : MClassType */;
val* var1 /* : MClassType */;
var1 = self->attrs[COLOR_nitc__nitni_callbacks__MExplicitCall___recv_mtype].val; /* _recv_mtype on <self:MExplicitCall> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _recv_mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__nitni_callbacks, 168);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method nitni_callbacks#MExplicitCall#recv_mtype= for (self: MExplicitCall, MClassType) */
void nitc___nitc__MExplicitCall___recv_mtype_61d(val* self, val* p0) {
self->attrs[COLOR_nitc__nitni_callbacks__MExplicitCall___recv_mtype].val = p0; /* _recv_mtype on <self:MExplicitCall> */
RET_LABEL:;
}
/* method nitni_callbacks#MExplicitCall#mproperty for (self: MExplicitCall): MProperty */
val* nitc___nitc__MExplicitCall___mproperty(val* self) {
val* var /* : MProperty */;
val* var1 /* : MProperty */;
var1 = self->attrs[COLOR_nitc__nitni_callbacks__MExplicitCall___mproperty].val; /* _mproperty on <self:MExplicitCall> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__nitni_callbacks, 170);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method nitni_callbacks#MExplicitCall#mproperty= for (self: MExplicitCall, MProperty) */
void nitc___nitc__MExplicitCall___mproperty_61d(val* self, val* p0) {
self->attrs[COLOR_nitc__nitni_callbacks__MExplicitCall___mproperty].val = p0; /* _mproperty on <self:MExplicitCall> */
RET_LABEL:;
}
/* method nitni_callbacks#MExplicitCall#from_mmodule= for (self: MExplicitCall, MModule) */
void nitc___nitc__MExplicitCall___from_mmodule_61d(val* self, val* p0) {
self->attrs[COLOR_nitc__nitni_callbacks__MExplicitCall___from_mmodule].val = p0; /* _from_mmodule on <self:MExplicitCall> */
RET_LABEL:;
}
/* method nitni_callbacks#MExplicitCall#fill_type_for for (self: MExplicitCall, ForeignCallbackSet, MModule) */
void nitc___nitc__MExplicitCall___fill_type_for(val* self, val* p0, val* p1) {
val* var_callback_set /* var callback_set: ForeignCallbackSet */;
val* var_from /* var from: MModule */;
val* var /* : MProperty */;
val* var2 /* : MProperty */;
val* var3 /* : MClassType */;
val* var5 /* : MClassType */;
val* var6 /* : MPropDef */;
val* var_first /* var first: MPropDef */;
val* var7 /* : MClassDef */;
val* var9 /* : MClassDef */;
val* var_mclassdef /* var mclassdef: MClassDef */;
val* var10 /* : MClassType */;
val* var12 /* : MClassType */;
val* var_bound_mtype /* var bound_mtype: MClassType */;
val* var13 /* : MClassType */;
val* var15 /* : MClassType */;
val* var16 /* : MType */;
val* var18 /* : MClassType */;
val* var20 /* : MClassType */;
val* var21 /* : MClassType */;
val* var23 /* : Set[MType] */;
val* var25 /* : Set[MType] */;
val* var26 /* : MClassType */;
val* var28 /* : MClassType */;
short int var29 /* : Bool */;
int cltype;
int idtype;
val* var30 /* : nullable MSignature */;
val* var32 /* : nullable MSignature */;
val* var33 /* : nullable MType */;
val* var35 /* : nullable MType */;
val* var_rmt /* var rmt: nullable MType */;
short int var36 /* : Bool */;
short int var37 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var39 /* : Bool */;
short int var40 /* : Bool */;
val* var41 /* : MType */;
val* var42 /* : MType */;
val* var43 /* : Set[MType] */;
val* var45 /* : Set[MType] */;
val* var46 /* : nullable MSignature */;
val* var48 /* : nullable MSignature */;
val* var49 /* : Array[MParameter] */;
val* var51 /* : Array[MParameter] */;
val* var_ /* var : Array[MParameter] */;
val* var52 /* : IndexedIterator[nullable Object] */;
val* var_53 /* var : IndexedIterator[MParameter] */;
short int var54 /* : Bool */;
val* var55 /* : nullable Object */;
val* var_p /* var p: MParameter */;
val* var56 /* : MType */;
val* var58 /* : MType */;
val* var59 /* : MClassType */;
val* var61 /* : MClassType */;
val* var62 /* : MClassType */;
val* var64 /* : MClassType */;
val* var65 /* : MType */;
val* var_param_mtype /* var param_mtype: MType */;
val* var66 /* : MType */;
val* var67 /* : MType */;
val* var68 /* : Set[MType] */;
val* var70 /* : Set[MType] */;
var_callback_set = p0;
var_from = p1;
{
{ /* Inline nitni_callbacks#MExplicitCall#mproperty (self) on <self:MExplicitCall> */
var2 = self->attrs[COLOR_nitc__nitni_callbacks__MExplicitCall___mproperty].val; /* _mproperty on <self:MExplicitCall> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__nitni_callbacks, 170);
fatal_exit(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
{ /* Inline nitni_callbacks#MExplicitCall#recv_mtype (self) on <self:MExplicitCall> */
var5 = self->attrs[COLOR_nitc__nitni_callbacks__MExplicitCall___recv_mtype].val; /* _recv_mtype on <self:MExplicitCall> */
if (unlikely(var5 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _recv_mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__nitni_callbacks, 168);
fatal_exit(1);
}
var3 = var5;
RET_LABEL4:(void)0;
}
}
{
var6 = nitc___nitc__MProperty___lookup_first_definition(var, var_from, var3);
}
var_first = var6;
{
{ /* Inline model#MPropDef#mclassdef (var_first) on <var_first:MPropDef> */
var9 = var_first->attrs[COLOR_nitc__model__MPropDef___mclassdef].val; /* _mclassdef on <var_first:MPropDef> */
if (unlikely(var9 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2354);
fatal_exit(1);
}
var7 = var9;
RET_LABEL8:(void)0;
}
}
var_mclassdef = var7;
{
{ /* Inline model#MClassDef#bound_mtype (var_mclassdef) on <var_mclassdef:MClassDef> */
var12 = var_mclassdef->attrs[COLOR_nitc__model__MClassDef___bound_mtype].val; /* _bound_mtype on <var_mclassdef:MClassDef> */
if (unlikely(var12 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _bound_mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 594);
fatal_exit(1);
}
var10 = var12;
RET_LABEL11:(void)0;
}
}
var_bound_mtype = var10;
{
{ /* Inline nitni_callbacks#MExplicitCall#recv_mtype (self) on <self:MExplicitCall> */
var15 = self->attrs[COLOR_nitc__nitni_callbacks__MExplicitCall___recv_mtype].val; /* _recv_mtype on <self:MExplicitCall> */
if (unlikely(var15 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _recv_mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__nitni_callbacks, 168);
fatal_exit(1);
}
var13 = var15;
RET_LABEL14:(void)0;
}
}
{
var16 = ((val*(*)(val* self, val* p0, val* p1, val* p2, short int p3))(var13->class->vft[COLOR_nitc__model__MType__resolve_for]))(var13, var_bound_mtype, var_bound_mtype, var_from, 1); /* resolve_for on <var13:MClassType>*/
}
{
{ /* Inline nitni_callbacks#MExplicitCall#recv_mtype= (self,var16) on <self:MExplicitCall> */
self->attrs[COLOR_nitc__nitni_callbacks__MExplicitCall___recv_mtype].val = var16; /* _recv_mtype on <self:MExplicitCall> */
RET_LABEL17:(void)0;
}
}
{
{ /* Inline nitni_callbacks#MExplicitCall#recv_mtype (self) on <self:MExplicitCall> */
var20 = self->attrs[COLOR_nitc__nitni_callbacks__MExplicitCall___recv_mtype].val; /* _recv_mtype on <self:MExplicitCall> */
if (unlikely(var20 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _recv_mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__nitni_callbacks, 168);
fatal_exit(1);
}
var18 = var20;
RET_LABEL19:(void)0;
}
}
{
var21 = nitc___nitc__MClassType___MType__anchor_to(var18, var_from, var_bound_mtype);
}
{
{ /* Inline nitni_callbacks#MExplicitCall#recv_mtype= (self,var21) on <self:MExplicitCall> */
self->attrs[COLOR_nitc__nitni_callbacks__MExplicitCall___recv_mtype].val = var21; /* _recv_mtype on <self:MExplicitCall> */
RET_LABEL22:(void)0;
}
}
{
{ /* Inline nitni_callbacks#ForeignCallbackSet#types (var_callback_set) on <var_callback_set:ForeignCallbackSet> */
var25 = var_callback_set->attrs[COLOR_nitc__nitni_callbacks__ForeignCallbackSet___types].val; /* _types on <var_callback_set:ForeignCallbackSet> */
if (unlikely(var25 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _types");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__nitni_callbacks, 53);
fatal_exit(1);
}
var23 = var25;
RET_LABEL24:(void)0;
}
}
{
{ /* Inline nitni_callbacks#MExplicitCall#recv_mtype (self) on <self:MExplicitCall> */
var28 = self->attrs[COLOR_nitc__nitni_callbacks__MExplicitCall___recv_mtype].val; /* _recv_mtype on <self:MExplicitCall> */
if (unlikely(var28 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _recv_mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__nitni_callbacks, 168);
fatal_exit(1);
}
var26 = var28;
RET_LABEL27:(void)0;
}
}
{
((void(*)(val* self, val* p0))((((long)var23&3)?class_info[((long)var23&3)]:var23->class)->vft[COLOR_core__abstract_collection__SimpleCollection__add]))(var23, var26); /* add on <var23:Set[MType]>*/
}
/* <var_first:MPropDef> isa MMethodDef */
cltype = type_nitc__MMethodDef.color;
idtype = type_nitc__MMethodDef.id;
if(cltype >= var_first->type->table_size) {
var29 = 0;
} else {
var29 = var_first->type->type_table[cltype] == idtype;
}
if (var29){
{
{ /* Inline model#MMethodDef#msignature (var_first) on <var_first:MPropDef(MMethodDef)> */
var32 = var_first->attrs[COLOR_nitc__model__MMethodDef___msignature].val; /* _msignature on <var_first:MPropDef(MMethodDef)> */
var30 = var32;
RET_LABEL31:(void)0;
}
}
if (var30 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__nitni_callbacks, 185);
fatal_exit(1);
} else {
{ /* Inline model#MSignature#return_mtype (var30) on <var30:nullable MSignature> */
if (unlikely(var30 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1891);
fatal_exit(1);
}
var35 = var30->attrs[COLOR_nitc__model__MSignature___return_mtype].val; /* _return_mtype on <var30:nullable MSignature> */
var33 = var35;
RET_LABEL34:(void)0;
}
}
var_rmt = var33;
if (var_rmt == NULL) {
var36 = 0; /* is null */
} else {
var36 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_rmt,((val*)NULL)) on <var_rmt:nullable MType> */
var_other = ((val*)NULL);
{
var39 = ((short int(*)(val* self, val* p0))(var_rmt->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_rmt, var_other); /* == on <var_rmt:nullable MType(MType)>*/
}
var40 = !var39;
var37 = var40;
goto RET_LABEL38;
RET_LABEL38:(void)0;
}
var36 = var37;
}
if (var36){
{
var41 = ((val*(*)(val* self, val* p0, val* p1, val* p2, short int p3))(var_rmt->class->vft[COLOR_nitc__model__MType__resolve_for]))(var_rmt, var_bound_mtype, var_bound_mtype, var_from, 1); /* resolve_for on <var_rmt:nullable MType(MType)>*/
}
var_rmt = var41;
{
var42 = ((val*(*)(val* self, val* p0, val* p1))(var_rmt->class->vft[COLOR_nitc__model__MType__anchor_to]))(var_rmt, var_from, var_bound_mtype); /* anchor_to on <var_rmt:nullable MType(MType)>*/
}
var_rmt = var42;
{
{ /* Inline nitni_callbacks#ForeignCallbackSet#types (var_callback_set) on <var_callback_set:ForeignCallbackSet> */
var45 = var_callback_set->attrs[COLOR_nitc__nitni_callbacks__ForeignCallbackSet___types].val; /* _types on <var_callback_set:ForeignCallbackSet> */
if (unlikely(var45 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _types");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__nitni_callbacks, 53);
fatal_exit(1);
}
var43 = var45;
RET_LABEL44:(void)0;
}
}
{
((void(*)(val* self, val* p0))((((long)var43&3)?class_info[((long)var43&3)]:var43->class)->vft[COLOR_core__abstract_collection__SimpleCollection__add]))(var43, var_rmt); /* add on <var43:Set[MType]>*/
}
} else {
}
{
{ /* Inline model#MMethodDef#msignature (var_first) on <var_first:MPropDef(MMethodDef)> */
var48 = var_first->attrs[COLOR_nitc__model__MMethodDef___msignature].val; /* _msignature on <var_first:MPropDef(MMethodDef)> */
var46 = var48;
RET_LABEL47:(void)0;
}
}
if (var46 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__nitni_callbacks, 192);
fatal_exit(1);
} else {
{ /* Inline model#MSignature#mparameters (var46) on <var46:nullable MSignature> */
if (unlikely(var46 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1879);
fatal_exit(1);
}
var51 = var46->attrs[COLOR_nitc__model__MSignature___mparameters].val; /* _mparameters on <var46:nullable MSignature> */
if (unlikely(var51 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mparameters");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1879);
fatal_exit(1);
}
var49 = var51;
RET_LABEL50:(void)0;
}
}
var_ = var49;
{
var52 = core___core__AbstractArrayRead___core__abstract_collection__Collection__iterator(var_);
}
var_53 = var52;
for(;;) {
{
var54 = ((short int(*)(val* self))((((long)var_53&3)?class_info[((long)var_53&3)]:var_53->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_53); /* is_ok on <var_53:IndexedIterator[MParameter]>*/
}
if (var54){
} else {
goto BREAK_label;
}
{
var55 = ((val*(*)(val* self))((((long)var_53&3)?class_info[((long)var_53&3)]:var_53->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_53); /* item on <var_53:IndexedIterator[MParameter]>*/
}
var_p = var55;
{
{ /* Inline model#MParameter#mtype (var_p) on <var_p:MParameter> */
var58 = var_p->attrs[COLOR_nitc__model__MParameter___mtype].val; /* _mtype on <var_p:MParameter> */
if (unlikely(var58 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1996);
fatal_exit(1);
}
var56 = var58;
RET_LABEL57:(void)0;
}
}
{
{ /* Inline nitni_callbacks#MExplicitCall#recv_mtype (self) on <self:MExplicitCall> */
var61 = self->attrs[COLOR_nitc__nitni_callbacks__MExplicitCall___recv_mtype].val; /* _recv_mtype on <self:MExplicitCall> */
if (unlikely(var61 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _recv_mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__nitni_callbacks, 168);
fatal_exit(1);
}
var59 = var61;
RET_LABEL60:(void)0;
}
}
{
{ /* Inline nitni_callbacks#MExplicitCall#recv_mtype (self) on <self:MExplicitCall> */
var64 = self->attrs[COLOR_nitc__nitni_callbacks__MExplicitCall___recv_mtype].val; /* _recv_mtype on <self:MExplicitCall> */
if (unlikely(var64 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _recv_mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__nitni_callbacks, 168);
fatal_exit(1);
}
var62 = var64;
RET_LABEL63:(void)0;
}
}
{
var65 = ((val*(*)(val* self, val* p0, val* p1, val* p2, short int p3))(var56->class->vft[COLOR_nitc__model__MType__resolve_for]))(var56, var59, var62, var_from, 1); /* resolve_for on <var56:MType>*/
}
var_param_mtype = var65;
{
var66 = ((val*(*)(val* self, val* p0, val* p1, val* p2, short int p3))(var_param_mtype->class->vft[COLOR_nitc__model__MType__resolve_for]))(var_param_mtype, var_bound_mtype, var_bound_mtype, var_from, 1); /* resolve_for on <var_param_mtype:MType>*/
}
var_param_mtype = var66;
{
var67 = ((val*(*)(val* self, val* p0, val* p1))(var_param_mtype->class->vft[COLOR_nitc__model__MType__anchor_to]))(var_param_mtype, var_from, var_bound_mtype); /* anchor_to on <var_param_mtype:MType>*/
}
var_param_mtype = var67;
{
{ /* Inline nitni_callbacks#ForeignCallbackSet#types (var_callback_set) on <var_callback_set:ForeignCallbackSet> */
var70 = var_callback_set->attrs[COLOR_nitc__nitni_callbacks__ForeignCallbackSet___types].val; /* _types on <var_callback_set:ForeignCallbackSet> */
if (unlikely(var70 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _types");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__nitni_callbacks, 53);
fatal_exit(1);
}
var68 = var70;
RET_LABEL69:(void)0;
}
}
{
((void(*)(val* self, val* p0))((((long)var68&3)?class_info[((long)var68&3)]:var68->class)->vft[COLOR_core__abstract_collection__SimpleCollection__add]))(var68, var_param_mtype); /* add on <var68:Set[MType]>*/
}
{
((void(*)(val* self))((((long)var_53&3)?class_info[((long)var_53&3)]:var_53->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_53); /* next on <var_53:IndexedIterator[MParameter]>*/
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_53&3)?class_info[((long)var_53&3)]:var_53->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_53); /* finish on <var_53:IndexedIterator[MParameter]>*/
}
} else {
}
RET_LABEL:;
}
/* method nitni_callbacks#MExplicitCall#hash for (self: MExplicitCall): Int */
long nitc___nitc__MExplicitCall___core__kernel__Object__hash(val* self) {
long var /* : Int */;
val* var1 /* : MClassType */;
val* var3 /* : MClassType */;
long var4 /* : Int */;
val* var5 /* : MProperty */;
val* var7 /* : MProperty */;
long var8 /* : Int */;
long var9 /* : Int */;
short int var11 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var12 /* : Int */;
long var13 /* : Int */;
short int var15 /* : Bool */;
int cltype16;
int idtype17;
const char* var_class_name18;
long var19 /* : Int */;
{
{ /* Inline nitni_callbacks#MExplicitCall#recv_mtype (self) on <self:MExplicitCall> */
var3 = self->attrs[COLOR_nitc__nitni_callbacks__MExplicitCall___recv_mtype].val; /* _recv_mtype on <self:MExplicitCall> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _recv_mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__nitni_callbacks, 168);
fatal_exit(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
var4 = core___core__Object___hash(var1);
}
{
{ /* Inline nitni_callbacks#MExplicitCall#mproperty (self) on <self:MExplicitCall> */
var7 = self->attrs[COLOR_nitc__nitni_callbacks__MExplicitCall___mproperty].val; /* _mproperty on <self:MExplicitCall> */
if (unlikely(var7 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__nitni_callbacks, 170);
fatal_exit(1);
}
var5 = var7;
RET_LABEL6:(void)0;
}
}
{
var8 = core___core__Object___hash(var5);
}
{
{ /* Inline kernel#Int#* (1024l,var8) on <1024l:Int> */
/* Covariant cast for argument 0 (i) <var8:Int> isa OTHER */
/* <var8:Int> isa OTHER */
var11 = 1; /* easy <var8:Int> isa OTHER*/
if (unlikely(!var11)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 732);
fatal_exit(1);
}
var12 = 1024l * var8;
var9 = var12;
goto RET_LABEL10;
RET_LABEL10:(void)0;
}
}
{
{ /* Inline kernel#Int#+ (var4,var9) on <var4:Int> */
/* Covariant cast for argument 0 (i) <var9:Int> isa OTHER */
/* <var9:Int> isa OTHER */
var15 = 1; /* easy <var9:Int> isa OTHER*/
if (unlikely(!var15)) {
var_class_name18 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name18);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var19 = var4 + var9;
var13 = var19;
goto RET_LABEL14;
RET_LABEL14:(void)0;
}
}
var = var13;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method nitni_callbacks#MExplicitCall#== for (self: MExplicitCall, nullable Object): Bool */
short int nitc___nitc__MExplicitCall___core__kernel__Object___61d_61d(val* self, val* p0) {
short int var /* : Bool */;
val* var_o /* var o: nullable Object */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
short int var3 /* : Bool */;
int cltype;
int idtype;
short int var_ /* var : Bool */;
val* var4 /* : MClassType */;
val* var6 /* : MClassType */;
val* var7 /* : MClassType */;
val* var9 /* : MClassType */;
short int var10 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var12 /* : Bool */;
short int var14 /* : Bool */;
short int var_15 /* var : Bool */;
val* var16 /* : MProperty */;
val* var18 /* : MProperty */;
val* var19 /* : MProperty */;
val* var21 /* : MProperty */;
short int var22 /* : Bool */;
short int var24 /* : Bool */;
short int var26 /* : Bool */;
var_o = p0;
/* <var_o:nullable Object> isa MExplicitCall */
cltype = type_nitc__MExplicitCall.color;
idtype = type_nitc__MExplicitCall.id;
if(var_o == NULL) {
var3 = 0;
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
{ /* Inline nitni_callbacks#MExplicitCall#recv_mtype (self) on <self:MExplicitCall> */
var6 = self->attrs[COLOR_nitc__nitni_callbacks__MExplicitCall___recv_mtype].val; /* _recv_mtype on <self:MExplicitCall> */
if (unlikely(var6 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _recv_mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__nitni_callbacks, 168);
fatal_exit(1);
}
var4 = var6;
RET_LABEL5:(void)0;
}
}
{
{ /* Inline nitni_callbacks#MExplicitCall#recv_mtype (var_o) on <var_o:nullable Object(MExplicitCall)> */
var9 = var_o->attrs[COLOR_nitc__nitni_callbacks__MExplicitCall___recv_mtype].val; /* _recv_mtype on <var_o:nullable Object(MExplicitCall)> */
if (unlikely(var9 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _recv_mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__nitni_callbacks, 168);
fatal_exit(1);
}
var7 = var9;
RET_LABEL8:(void)0;
}
}
{
{ /* Inline kernel#Object#== (var4,var7) on <var4:MClassType> */
var_other = var7;
{
{ /* Inline kernel#Object#is_same_instance (var4,var_other) on <var4:MClassType> */
var14 = var4 == var_other;
var12 = var14;
goto RET_LABEL13;
RET_LABEL13:(void)0;
}
}
var10 = var12;
goto RET_LABEL11;
RET_LABEL11:(void)0;
}
}
var2 = var10;
} else {
var2 = var_;
}
var_15 = var2;
if (var2){
{
{ /* Inline nitni_callbacks#MExplicitCall#mproperty (self) on <self:MExplicitCall> */
var18 = self->attrs[COLOR_nitc__nitni_callbacks__MExplicitCall___mproperty].val; /* _mproperty on <self:MExplicitCall> */
if (unlikely(var18 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__nitni_callbacks, 170);
fatal_exit(1);
}
var16 = var18;
RET_LABEL17:(void)0;
}
}
{
{ /* Inline nitni_callbacks#MExplicitCall#mproperty (var_o) on <var_o:nullable Object(MExplicitCall)> */
var21 = var_o->attrs[COLOR_nitc__nitni_callbacks__MExplicitCall___mproperty].val; /* _mproperty on <var_o:nullable Object(MExplicitCall)> */
if (unlikely(var21 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__nitni_callbacks, 170);
fatal_exit(1);
}
var19 = var21;
RET_LABEL20:(void)0;
}
}
{
{ /* Inline kernel#Object#== (var16,var19) on <var16:MProperty> */
var_other = var19;
{
{ /* Inline kernel#Object#is_same_instance (var16,var_other) on <var16:MProperty> */
var26 = var16 == var_other;
var24 = var26;
goto RET_LABEL25;
RET_LABEL25:(void)0;
}
}
var22 = var24;
goto RET_LABEL23;
RET_LABEL23:(void)0;
}
}
var1 = var22;
} else {
var1 = var_15;
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method nitni_callbacks#MExplicitCall#init for (self: MExplicitCall) */
void nitc___nitc__MExplicitCall___core__kernel__Object__init(val* self) {
{
((void(*)(val* self))(self->class->vft[COLOR_nitc___nitc__MExplicitCall___core__kernel__Object__init]))(self); /* init on <self:MExplicitCall>*/
}
RET_LABEL:;
}
/* method nitni_callbacks#MExplicitSuper#from for (self: MExplicitSuper): MPropDef */
val* nitc___nitc__MExplicitSuper___from(val* self) {
val* var /* : MPropDef */;
val* var1 /* : MPropDef */;
var1 = self->attrs[COLOR_nitc__nitni_callbacks__MExplicitSuper___from].val; /* _from on <self:MExplicitSuper> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _from");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__nitni_callbacks, 254);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method nitni_callbacks#MExplicitSuper#from= for (self: MExplicitSuper, MPropDef) */
void nitc___nitc__MExplicitSuper___from_61d(val* self, val* p0) {
self->attrs[COLOR_nitc__nitni_callbacks__MExplicitSuper___from].val = p0; /* _from on <self:MExplicitSuper> */
RET_LABEL:;
}
/* method nitni_callbacks#MExplicitSuper#hash for (self: MExplicitSuper): Int */
long nitc___nitc__MExplicitSuper___core__kernel__Object__hash(val* self) {
long var /* : Int */;
val* var1 /* : MPropDef */;
val* var3 /* : MPropDef */;
long var4 /* : Int */;
{
{ /* Inline nitni_callbacks#MExplicitSuper#from (self) on <self:MExplicitSuper> */
var3 = self->attrs[COLOR_nitc__nitni_callbacks__MExplicitSuper___from].val; /* _from on <self:MExplicitSuper> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _from");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__nitni_callbacks, 254);
fatal_exit(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
var4 = core___core__Object___hash(var1);
}
var = var4;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method nitni_callbacks#MExplicitSuper#== for (self: MExplicitSuper, nullable Object): Bool */
short int nitc___nitc__MExplicitSuper___core__kernel__Object___61d_61d(val* self, val* p0) {
short int var /* : Bool */;
val* var_o /* var o: nullable Object */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
int cltype;
int idtype;
short int var_ /* var : Bool */;
val* var3 /* : MPropDef */;
val* var5 /* : MPropDef */;
val* var6 /* : MPropDef */;
val* var8 /* : MPropDef */;
short int var9 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var11 /* : Bool */;
short int var13 /* : Bool */;
var_o = p0;
/* <var_o:nullable Object> isa MExplicitSuper */
cltype = type_nitc__MExplicitSuper.color;
idtype = type_nitc__MExplicitSuper.id;
if(var_o == NULL) {
var2 = 0;
} else {
if(cltype >= (((long)var_o&3)?type_info[((long)var_o&3)]:var_o->type)->table_size) {
var2 = 0;
} else {
var2 = (((long)var_o&3)?type_info[((long)var_o&3)]:var_o->type)->type_table[cltype] == idtype;
}
}
var_ = var2;
if (var2){
{
{ /* Inline nitni_callbacks#MExplicitSuper#from (self) on <self:MExplicitSuper> */
var5 = self->attrs[COLOR_nitc__nitni_callbacks__MExplicitSuper___from].val; /* _from on <self:MExplicitSuper> */
if (unlikely(var5 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _from");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__nitni_callbacks, 254);
fatal_exit(1);
}
var3 = var5;
RET_LABEL4:(void)0;
}
}
{
{ /* Inline nitni_callbacks#MExplicitSuper#from (var_o) on <var_o:nullable Object(MExplicitSuper)> */
var8 = var_o->attrs[COLOR_nitc__nitni_callbacks__MExplicitSuper___from].val; /* _from on <var_o:nullable Object(MExplicitSuper)> */
if (unlikely(var8 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _from");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__nitni_callbacks, 254);
fatal_exit(1);
}
var6 = var8;
RET_LABEL7:(void)0;
}
}
{
{ /* Inline kernel#Object#== (var3,var6) on <var3:MPropDef> */
var_other = var6;
{
{ /* Inline kernel#Object#is_same_instance (var3,var_other) on <var3:MPropDef> */
var13 = var3 == var_other;
var11 = var13;
goto RET_LABEL12;
RET_LABEL12:(void)0;
}
}
var9 = var11;
goto RET_LABEL10;
RET_LABEL10:(void)0;
}
}
var1 = var9;
} else {
var1 = var_;
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method nitni_callbacks#MExplicitSuper#init for (self: MExplicitSuper) */
void nitc___nitc__MExplicitSuper___core__kernel__Object__init(val* self) {
{
((void(*)(val* self))(self->class->vft[COLOR_nitc___nitc__MExplicitSuper___core__kernel__Object__init]))(self); /* init on <self:MExplicitSuper>*/
}
RET_LABEL:;
}
/* method nitni_callbacks#MExplicitCast#from for (self: MExplicitCast): MType */
val* nitc___nitc__MExplicitCast___from(val* self) {
val* var /* : MType */;
val* var1 /* : MType */;
var1 = self->attrs[COLOR_nitc__nitni_callbacks__MExplicitCast___from].val; /* _from on <self:MExplicitCast> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _from");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__nitni_callbacks, 263);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method nitni_callbacks#MExplicitCast#from= for (self: MExplicitCast, MType) */
void nitc___nitc__MExplicitCast___from_61d(val* self, val* p0) {
self->attrs[COLOR_nitc__nitni_callbacks__MExplicitCast___from].val = p0; /* _from on <self:MExplicitCast> */
RET_LABEL:;
}
/* method nitni_callbacks#MExplicitCast#to for (self: MExplicitCast): MType */
val* nitc___nitc__MExplicitCast___to(val* self) {
val* var /* : MType */;
val* var1 /* : MType */;
var1 = self->attrs[COLOR_nitc__nitni_callbacks__MExplicitCast___to].val; /* _to on <self:MExplicitCast> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _to");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__nitni_callbacks, 264);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method nitni_callbacks#MExplicitCast#to= for (self: MExplicitCast, MType) */
void nitc___nitc__MExplicitCast___to_61d(val* self, val* p0) {
self->attrs[COLOR_nitc__nitni_callbacks__MExplicitCast___to].val = p0; /* _to on <self:MExplicitCast> */
RET_LABEL:;
}
/* method nitni_callbacks#MExplicitCast#check_cname for (self: MExplicitCast): String */
val* nitc___nitc__MExplicitCast___check_cname(val* self) {
val* var /* : String */;
val* var1 /* : NativeArray[String] */;
static val* varonce;
static val* varonce2;
val* var3 /* : String */;
char* var4 /* : CString */;
val* var5 /* : String */;
val* var6 /* : MType */;
val* var8 /* : MType */;
val* var9 /* : String */;
val* var10 /* : MType */;
val* var12 /* : MType */;
val* var13 /* : String */;
val* var14 /* : String */;
if (unlikely(varonce==NULL)) {
var1 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce2!=NULL)) {
var3 = varonce2;
} else {
var4 = "_is_a_";
var5 = core__abstract_text___CString___to_s_full(var4, 6l, 6l);
var3 = var5;
varonce2 = var3;
}
((struct instance_core__NativeArray*)var1)->values[1]=var3;
} else {
var1 = varonce;
varonce = NULL;
}
{
{ /* Inline nitni_callbacks#MExplicitCast#from (self) on <self:MExplicitCast> */
var8 = self->attrs[COLOR_nitc__nitni_callbacks__MExplicitCast___from].val; /* _from on <self:MExplicitCast> */
if (unlikely(var8 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _from");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__nitni_callbacks, 263);
fatal_exit(1);
}
var6 = var8;
RET_LABEL7:(void)0;
}
}
{
var9 = ((val*(*)(val* self))(var6->class->vft[COLOR_nitc__nitni_base__MType__mangled_cname]))(var6); /* mangled_cname on <var6:MType>*/
}
((struct instance_core__NativeArray*)var1)->values[0]=var9;
{
{ /* Inline nitni_callbacks#MExplicitCast#to (self) on <self:MExplicitCast> */
var12 = self->attrs[COLOR_nitc__nitni_callbacks__MExplicitCast___to].val; /* _to on <self:MExplicitCast> */
if (unlikely(var12 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _to");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__nitni_callbacks, 264);
fatal_exit(1);
}
var10 = var12;
RET_LABEL11:(void)0;
}
}
{
var13 = ((val*(*)(val* self))(var10->class->vft[COLOR_nitc__nitni_base__MType__mangled_cname]))(var10); /* mangled_cname on <var10:MType>*/
}
((struct instance_core__NativeArray*)var1)->values[2]=var13;
{
var14 = ((val*(*)(val* self))(var1->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var1); /* native_to_s on <var1:NativeArray[String]>*/
}
varonce = var1;
var = var14;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method nitni_callbacks#MExplicitCast#cast_cname for (self: MExplicitCast): String */
val* nitc___nitc__MExplicitCast___cast_cname(val* self) {
val* var /* : String */;
val* var1 /* : NativeArray[String] */;
static val* varonce;
static val* varonce2;
val* var3 /* : String */;
char* var4 /* : CString */;
val* var5 /* : String */;
val* var6 /* : MType */;
val* var8 /* : MType */;
val* var9 /* : String */;
val* var10 /* : MType */;
val* var12 /* : MType */;
val* var13 /* : String */;
val* var14 /* : String */;
if (unlikely(varonce==NULL)) {
var1 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce2!=NULL)) {
var3 = varonce2;
} else {
var4 = "_as_";
var5 = core__abstract_text___CString___to_s_full(var4, 4l, 4l);
var3 = var5;
varonce2 = var3;
}
((struct instance_core__NativeArray*)var1)->values[1]=var3;
} else {
var1 = varonce;
varonce = NULL;
}
{
{ /* Inline nitni_callbacks#MExplicitCast#from (self) on <self:MExplicitCast> */
var8 = self->attrs[COLOR_nitc__nitni_callbacks__MExplicitCast___from].val; /* _from on <self:MExplicitCast> */
if (unlikely(var8 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _from");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__nitni_callbacks, 263);
fatal_exit(1);
}
var6 = var8;
RET_LABEL7:(void)0;
}
}
{
var9 = ((val*(*)(val* self))(var6->class->vft[COLOR_nitc__nitni_base__MType__mangled_cname]))(var6); /* mangled_cname on <var6:MType>*/
}
((struct instance_core__NativeArray*)var1)->values[0]=var9;
{
{ /* Inline nitni_callbacks#MExplicitCast#to (self) on <self:MExplicitCast> */
var12 = self->attrs[COLOR_nitc__nitni_callbacks__MExplicitCast___to].val; /* _to on <self:MExplicitCast> */
if (unlikely(var12 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _to");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__nitni_callbacks, 264);
fatal_exit(1);
}
var10 = var12;
RET_LABEL11:(void)0;
}
}
{
var13 = ((val*(*)(val* self))(var10->class->vft[COLOR_nitc__nitni_base__MType__mangled_cname]))(var10); /* mangled_cname on <var10:MType>*/
}
((struct instance_core__NativeArray*)var1)->values[2]=var13;
{
var14 = ((val*(*)(val* self))(var1->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var1); /* native_to_s on <var1:NativeArray[String]>*/
}
varonce = var1;
var = var14;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method nitni_callbacks#MExplicitCast#hash for (self: MExplicitCast): Int */
long nitc___nitc__MExplicitCast___core__kernel__Object__hash(val* self) {
long var /* : Int */;
val* var1 /* : MType */;
val* var3 /* : MType */;
long var4 /* : Int */;
val* var5 /* : MType */;
val* var7 /* : MType */;
long var8 /* : Int */;
long var9 /* : Int */;
short int var11 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var12 /* : Int */;
long var13 /* : Int */;
short int var15 /* : Bool */;
int cltype16;
int idtype17;
const char* var_class_name18;
long var19 /* : Int */;
{
{ /* Inline nitni_callbacks#MExplicitCast#from (self) on <self:MExplicitCast> */
var3 = self->attrs[COLOR_nitc__nitni_callbacks__MExplicitCast___from].val; /* _from on <self:MExplicitCast> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _from");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__nitni_callbacks, 263);
fatal_exit(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
var4 = core___core__Object___hash(var1);
}
{
{ /* Inline nitni_callbacks#MExplicitCast#to (self) on <self:MExplicitCast> */
var7 = self->attrs[COLOR_nitc__nitni_callbacks__MExplicitCast___to].val; /* _to on <self:MExplicitCast> */
if (unlikely(var7 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _to");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__nitni_callbacks, 264);
fatal_exit(1);
}
var5 = var7;
RET_LABEL6:(void)0;
}
}
{
var8 = core___core__Object___hash(var5);
}
{
{ /* Inline kernel#Int#* (1024l,var8) on <1024l:Int> */
/* Covariant cast for argument 0 (i) <var8:Int> isa OTHER */
/* <var8:Int> isa OTHER */
var11 = 1; /* easy <var8:Int> isa OTHER*/
if (unlikely(!var11)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 732);
fatal_exit(1);
}
var12 = 1024l * var8;
var9 = var12;
goto RET_LABEL10;
RET_LABEL10:(void)0;
}
}
{
{ /* Inline kernel#Int#+ (var4,var9) on <var4:Int> */
/* Covariant cast for argument 0 (i) <var9:Int> isa OTHER */
/* <var9:Int> isa OTHER */
var15 = 1; /* easy <var9:Int> isa OTHER*/
if (unlikely(!var15)) {
var_class_name18 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name18);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var19 = var4 + var9;
var13 = var19;
goto RET_LABEL14;
RET_LABEL14:(void)0;
}
}
var = var13;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method nitni_callbacks#MExplicitCast#== for (self: MExplicitCast, nullable Object): Bool */
short int nitc___nitc__MExplicitCast___core__kernel__Object___61d_61d(val* self, val* p0) {
short int var /* : Bool */;
val* var_o /* var o: nullable Object */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
short int var3 /* : Bool */;
int cltype;
int idtype;
short int var_ /* var : Bool */;
val* var4 /* : MType */;
val* var6 /* : MType */;
val* var7 /* : MType */;
val* var9 /* : MType */;
short int var10 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var12 /* : Bool */;
short int var14 /* : Bool */;
short int var_15 /* var : Bool */;
val* var16 /* : MType */;
val* var18 /* : MType */;
val* var19 /* : MType */;
val* var21 /* : MType */;
short int var22 /* : Bool */;
short int var24 /* : Bool */;
short int var26 /* : Bool */;
var_o = p0;
/* <var_o:nullable Object> isa MExplicitCast */
cltype = type_nitc__MExplicitCast.color;
idtype = type_nitc__MExplicitCast.id;
if(var_o == NULL) {
var3 = 0;
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
{ /* Inline nitni_callbacks#MExplicitCast#from (self) on <self:MExplicitCast> */
var6 = self->attrs[COLOR_nitc__nitni_callbacks__MExplicitCast___from].val; /* _from on <self:MExplicitCast> */
if (unlikely(var6 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _from");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__nitni_callbacks, 263);
fatal_exit(1);
}
var4 = var6;
RET_LABEL5:(void)0;
}
}
{
{ /* Inline nitni_callbacks#MExplicitCast#from (var_o) on <var_o:nullable Object(MExplicitCast)> */
var9 = var_o->attrs[COLOR_nitc__nitni_callbacks__MExplicitCast___from].val; /* _from on <var_o:nullable Object(MExplicitCast)> */
if (unlikely(var9 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _from");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__nitni_callbacks, 263);
fatal_exit(1);
}
var7 = var9;
RET_LABEL8:(void)0;
}
}
{
{ /* Inline kernel#Object#== (var4,var7) on <var4:MType> */
var_other = var7;
{
{ /* Inline kernel#Object#is_same_instance (var4,var_other) on <var4:MType> */
var14 = var4 == var_other;
var12 = var14;
goto RET_LABEL13;
RET_LABEL13:(void)0;
}
}
var10 = var12;
goto RET_LABEL11;
RET_LABEL11:(void)0;
}
}
var2 = var10;
} else {
var2 = var_;
}
var_15 = var2;
if (var2){
{
{ /* Inline nitni_callbacks#MExplicitCast#to (self) on <self:MExplicitCast> */
var18 = self->attrs[COLOR_nitc__nitni_callbacks__MExplicitCast___to].val; /* _to on <self:MExplicitCast> */
if (unlikely(var18 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _to");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__nitni_callbacks, 264);
fatal_exit(1);
}
var16 = var18;
RET_LABEL17:(void)0;
}
}
{
{ /* Inline nitni_callbacks#MExplicitCast#to (var_o) on <var_o:nullable Object(MExplicitCast)> */
var21 = var_o->attrs[COLOR_nitc__nitni_callbacks__MExplicitCast___to].val; /* _to on <var_o:nullable Object(MExplicitCast)> */
if (unlikely(var21 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _to");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__nitni_callbacks, 264);
fatal_exit(1);
}
var19 = var21;
RET_LABEL20:(void)0;
}
}
{
{ /* Inline kernel#Object#== (var16,var19) on <var16:MType> */
var_other = var19;
{
{ /* Inline kernel#Object#is_same_instance (var16,var_other) on <var16:MType> */
var26 = var16 == var_other;
var24 = var26;
goto RET_LABEL25;
RET_LABEL25:(void)0;
}
}
var22 = var24;
goto RET_LABEL23;
RET_LABEL23:(void)0;
}
}
var1 = var22;
} else {
var1 = var_15;
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method nitni_callbacks#MExplicitCast#init for (self: MExplicitCast) */
void nitc___nitc__MExplicitCast___core__kernel__Object__init(val* self) {
{
((void(*)(val* self))(self->class->vft[COLOR_nitc___nitc__MExplicitCast___core__kernel__Object__init]))(self); /* init on <self:MExplicitCast>*/
}
RET_LABEL:;
}
/* method nitni_callbacks#ALocalPropExternCall#verify_and_collect for (self: ALocalPropExternCall, AMethPropdef, ForeignCallbackSet, ToolContext) */
void nitc__nitni_callbacks___ALocalPropExternCall___AExternCall__verify_and_collect(val* self, val* p0, val* p1, val* p2) {
val* var_npropdef /* var npropdef: AMethPropdef */;
val* var_callback_set /* var callback_set: ForeignCallbackSet */;
val* var_toolcontext /* var toolcontext: ToolContext */;
val* var /* : nullable MPropDef */;
val* var2 /* : nullable MPropDef */;
val* var3 /* : MClassDef */;
val* var5 /* : MClassDef */;
val* var6 /* : MModule */;
val* var8 /* : MModule */;
val* var_mmodule /* var mmodule: MModule */;
val* var9 /* : nullable MPropDef */;
val* var11 /* : nullable MPropDef */;
val* var12 /* : MClassDef */;
val* var14 /* : MClassDef */;
val* var15 /* : MClassType */;
val* var17 /* : MClassType */;
val* var_mclass_type /* var mclass_type: MClassType */;
val* var18 /* : AMethid */;
val* var20 /* : AMethid */;
val* var21 /* : String */;
val* var_m_name /* var m_name: String */;
val* var22 /* : ModelBuilder */;
val* var23 /* : nullable MProperty */;
val* var_method /* var method: nullable MProperty */;
short int var24 /* : Bool */;
short int var25 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var27 /* : Bool */;
short int var29 /* : Bool */;
val* var30 /* : Location */;
val* var32 /* : Location */;
val* var33 /* : NativeArray[String] */;
static val* varonce;
static val* varonce34;
val* var35 /* : String */;
char* var36 /* : CString */;
val* var37 /* : String */;
static val* varonce38;
val* var39 /* : String */;
char* var40 /* : CString */;
val* var41 /* : String */;
val* var42 /* : String */;
val* var43 /* : Message */;
val* var44 /* : MExplicitCall */;
val* var_explicit_call /* var explicit_call: MExplicitCall */;
val* var45 /* : Set[MExplicitCall] */;
val* var47 /* : Set[MExplicitCall] */;
var_npropdef = p0;
var_callback_set = p1;
var_toolcontext = p2;
{
{ /* Inline modelize_property#APropdef#mpropdef (var_npropdef) on <var_npropdef:AMethPropdef> */
var2 = var_npropdef->attrs[COLOR_nitc__modelize_property__APropdef___mpropdef].val; /* _mpropdef on <var_npropdef:AMethPropdef> */
var = var2;
RET_LABEL1:(void)0;
}
}
if (var == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__nitni_callbacks, 283);
fatal_exit(1);
} else {
{ /* Inline model#MPropDef#mclassdef (var) on <var:nullable MPropDef(nullable MMethodDef)> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2354);
fatal_exit(1);
}
var5 = var->attrs[COLOR_nitc__model__MPropDef___mclassdef].val; /* _mclassdef on <var:nullable MPropDef(nullable MMethodDef)> */
if (unlikely(var5 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2354);
fatal_exit(1);
}
var3 = var5;
RET_LABEL4:(void)0;
}
}
{
{ /* Inline model#MClassDef#mmodule (var3) on <var3:MClassDef> */
var8 = var3->attrs[COLOR_nitc__model__MClassDef___mmodule].val; /* _mmodule on <var3:MClassDef> */
if (unlikely(var8 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 588);
fatal_exit(1);
}
var6 = var8;
RET_LABEL7:(void)0;
}
}
var_mmodule = var6;
{
{ /* Inline modelize_property#APropdef#mpropdef (var_npropdef) on <var_npropdef:AMethPropdef> */
var11 = var_npropdef->attrs[COLOR_nitc__modelize_property__APropdef___mpropdef].val; /* _mpropdef on <var_npropdef:AMethPropdef> */
var9 = var11;
RET_LABEL10:(void)0;
}
}
if (var9 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__nitni_callbacks, 284);
fatal_exit(1);
} else {
{ /* Inline model#MPropDef#mclassdef (var9) on <var9:nullable MPropDef(nullable MMethodDef)> */
if (unlikely(var9 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2354);
fatal_exit(1);
}
var14 = var9->attrs[COLOR_nitc__model__MPropDef___mclassdef].val; /* _mclassdef on <var9:nullable MPropDef(nullable MMethodDef)> */
if (unlikely(var14 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2354);
fatal_exit(1);
}
var12 = var14;
RET_LABEL13:(void)0;
}
}
{
{ /* Inline model#MClassDef#bound_mtype (var12) on <var12:MClassDef> */
var17 = var12->attrs[COLOR_nitc__model__MClassDef___bound_mtype].val; /* _bound_mtype on <var12:MClassDef> */
if (unlikely(var17 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _bound_mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 594);
fatal_exit(1);
}
var15 = var17;
RET_LABEL16:(void)0;
}
}
var_mclass_type = var15;
{
{ /* Inline parser_nodes#ALocalPropExternCall#n_methid (self) on <self:ALocalPropExternCall> */
var20 = self->attrs[COLOR_nitc__parser_nodes__ALocalPropExternCall___n_methid].val; /* _n_methid on <self:ALocalPropExternCall> */
if (unlikely(var20 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_methid");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 1462);
fatal_exit(1);
}
var18 = var20;
RET_LABEL19:(void)0;
}
}
{
var21 = nitc__parser_work___Prod___collect_text(var18);
}
var_m_name = var21;
{
var22 = nitc__modelbuilder_base___ToolContext___modelbuilder(var_toolcontext);
}
{
var23 = nitc___nitc__ModelBuilder___try_get_mproperty_by_name2(var22, self, var_mmodule, var_mclass_type, var_m_name);
}
var_method = var23;
if (var_method == NULL) {
var24 = 1; /* is null */
} else {
var24 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_method,((val*)NULL)) on <var_method:nullable MProperty> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_method,var_other) on <var_method:nullable MProperty(MProperty)> */
var29 = var_method == var_other;
var27 = var29;
goto RET_LABEL28;
RET_LABEL28:(void)0;
}
}
var25 = var27;
goto RET_LABEL26;
RET_LABEL26:(void)0;
}
var24 = var25;
}
if (var24){
{
{ /* Inline parser_nodes#ANode#location (self) on <self:ALocalPropExternCall> */
var32 = self->attrs[COLOR_nitc__parser_nodes__ANode___location].val; /* _location on <self:ALocalPropExternCall> */
if (unlikely(var32 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _location");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 25);
fatal_exit(1);
}
var30 = var32;
RET_LABEL31:(void)0;
}
}
if (unlikely(varonce==NULL)) {
var33 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce34!=NULL)) {
var35 = varonce34;
} else {
var36 = "Error: local method `";
var37 = core__abstract_text___CString___to_s_full(var36, 21l, 21l);
var35 = var37;
varonce34 = var35;
}
((struct instance_core__NativeArray*)var33)->values[0]=var35;
if (likely(varonce38!=NULL)) {
var39 = varonce38;
} else {
var40 = "` not found.";
var41 = core__abstract_text___CString___to_s_full(var40, 12l, 12l);
var39 = var41;
varonce38 = var39;
}
((struct instance_core__NativeArray*)var33)->values[2]=var39;
} else {
var33 = varonce;
varonce = NULL;
}
((struct instance_core__NativeArray*)var33)->values[1]=var_m_name;
{
var42 = ((val*(*)(val* self))(var33->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var33); /* native_to_s on <var33:NativeArray[String]>*/
}
varonce = var33;
{
var43 = nitc___nitc__ToolContext___error(var_toolcontext, var30, var42);
}
goto RET_LABEL;
} else {
}
var44 = NEW_nitc__MExplicitCall(&type_nitc__MExplicitCall);
{
((void(*)(val* self, val* p0))(var44->class->vft[COLOR_nitc__nitni_callbacks__MExplicitCall__recv_mtype_61d]))(var44, var_mclass_type); /* recv_mtype= on <var44:MExplicitCall>*/
}
{
((void(*)(val* self, val* p0))(var44->class->vft[COLOR_nitc__nitni_callbacks__MExplicitCall__mproperty_61d]))(var44, var_method); /* mproperty= on <var44:MExplicitCall>*/
}
{
((void(*)(val* self, val* p0))(var44->class->vft[COLOR_nitc__nitni_callbacks__MExplicitCall__from_mmodule_61d]))(var44, var_mmodule); /* from_mmodule= on <var44:MExplicitCall>*/
}
{
((void(*)(val* self))(var44->class->vft[COLOR_core__kernel__Object__init]))(var44); /* init on <var44:MExplicitCall>*/
}
var_explicit_call = var44;
{
{ /* Inline nitni_callbacks#ForeignCallbackSet#callbacks (var_callback_set) on <var_callback_set:ForeignCallbackSet> */
var47 = var_callback_set->attrs[COLOR_nitc__nitni_callbacks__ForeignCallbackSet___callbacks].val; /* _callbacks on <var_callback_set:ForeignCallbackSet> */
if (unlikely(var47 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _callbacks");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__nitni_callbacks, 47);
fatal_exit(1);
}
var45 = var47;
RET_LABEL46:(void)0;
}
}
{
((void(*)(val* self, val* p0))((((long)var45&3)?class_info[((long)var45&3)]:var45->class)->vft[COLOR_core__abstract_collection__SimpleCollection__add]))(var45, var_explicit_call); /* add on <var45:Set[MExplicitCall]>*/
}
{
nitc___nitc__MExplicitCall___fill_type_for(var_explicit_call, var_callback_set, var_mmodule); /* Direct call nitni_callbacks#MExplicitCall#fill_type_for on <var_explicit_call:MExplicitCall>*/
}
RET_LABEL:;
}
/* method nitni_callbacks#AFullPropExternCall#verify_and_collect for (self: AFullPropExternCall, AMethPropdef, ForeignCallbackSet, ToolContext) */
void nitc__nitni_callbacks___AFullPropExternCall___AExternCall__verify_and_collect(val* self, val* p0, val* p1, val* p2) {
val* var_npropdef /* var npropdef: AMethPropdef */;
val* var_callback_set /* var callback_set: ForeignCallbackSet */;
val* var_toolcontext /* var toolcontext: ToolContext */;
val* var /* : nullable MPropDef */;
val* var2 /* : nullable MPropDef */;
val* var3 /* : MClassDef */;
val* var5 /* : MClassDef */;
val* var6 /* : MModule */;
val* var8 /* : MModule */;
val* var_mmodule /* var mmodule: MModule */;
val* var9 /* : nullable MPropDef */;
val* var11 /* : nullable MPropDef */;
val* var12 /* : MClassDef */;
val* var14 /* : MClassDef */;
val* var_mclassdef /* var mclassdef: MClassDef */;
val* var15 /* : MClassType */;
val* var17 /* : MClassType */;
val* var_mclass_type /* var mclass_type: MClassType */;
val* var18 /* : ModelBuilder */;
val* var19 /* : AType */;
val* var21 /* : AType */;
val* var22 /* : nullable MType */;
val* var_mtype /* var mtype: nullable MType */;
short int var23 /* : Bool */;
short int var24 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var26 /* : Bool */;
short int var28 /* : Bool */;
short int var29 /* : Bool */;
int cltype;
int idtype;
val* var30 /* : MType */;
short int var31 /* : Bool */;
int cltype32;
int idtype33;
val* var34 /* : Location */;
val* var36 /* : Location */;
val* var37 /* : NativeArray[String] */;
static val* varonce;
static val* varonce38;
val* var39 /* : String */;
char* var40 /* : CString */;
val* var41 /* : String */;
static val* varonce42;
val* var43 /* : String */;
char* var44 /* : CString */;
val* var45 /* : String */;
val* var46 /* : AType */;
val* var48 /* : AType */;
val* var49 /* : String */;
val* var50 /* : String */;
val* var51 /* : Message */;
val* var52 /* : AMethid */;
val* var54 /* : AMethid */;
val* var55 /* : String */;
val* var_m_name /* var m_name: String */;
val* var56 /* : ModelBuilder */;
val* var57 /* : nullable MProperty */;
val* var_method /* var method: nullable MProperty */;
short int var58 /* : Bool */;
short int var59 /* : Bool */;
short int var61 /* : Bool */;
short int var63 /* : Bool */;
val* var64 /* : Location */;
val* var66 /* : Location */;
val* var68 /* : NativeArray[String] */;
static val* varonce67;
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
val* var81 /* : AType */;
val* var83 /* : AType */;
val* var84 /* : String */;
val* var85 /* : String */;
val* var86 /* : Message */;
val* var87 /* : MExplicitCall */;
short int var88 /* : Bool */;
int cltype89;
int idtype90;
const char* var_class_name;
val* var_explicit_call /* var explicit_call: MExplicitCall */;
val* var91 /* : Set[MExplicitCall] */;
val* var93 /* : Set[MExplicitCall] */;
var_npropdef = p0;
var_callback_set = p1;
var_toolcontext = p2;
{
{ /* Inline modelize_property#APropdef#mpropdef (var_npropdef) on <var_npropdef:AMethPropdef> */
var2 = var_npropdef->attrs[COLOR_nitc__modelize_property__APropdef___mpropdef].val; /* _mpropdef on <var_npropdef:AMethPropdef> */
var = var2;
RET_LABEL1:(void)0;
}
}
if (var == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__nitni_callbacks, 304);
fatal_exit(1);
} else {
{ /* Inline model#MPropDef#mclassdef (var) on <var:nullable MPropDef(nullable MMethodDef)> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2354);
fatal_exit(1);
}
var5 = var->attrs[COLOR_nitc__model__MPropDef___mclassdef].val; /* _mclassdef on <var:nullable MPropDef(nullable MMethodDef)> */
if (unlikely(var5 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2354);
fatal_exit(1);
}
var3 = var5;
RET_LABEL4:(void)0;
}
}
{
{ /* Inline model#MClassDef#mmodule (var3) on <var3:MClassDef> */
var8 = var3->attrs[COLOR_nitc__model__MClassDef___mmodule].val; /* _mmodule on <var3:MClassDef> */
if (unlikely(var8 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 588);
fatal_exit(1);
}
var6 = var8;
RET_LABEL7:(void)0;
}
}
var_mmodule = var6;
{
{ /* Inline modelize_property#APropdef#mpropdef (var_npropdef) on <var_npropdef:AMethPropdef> */
var11 = var_npropdef->attrs[COLOR_nitc__modelize_property__APropdef___mpropdef].val; /* _mpropdef on <var_npropdef:AMethPropdef> */
var9 = var11;
RET_LABEL10:(void)0;
}
}
if (var9 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__nitni_callbacks, 305);
fatal_exit(1);
} else {
{ /* Inline model#MPropDef#mclassdef (var9) on <var9:nullable MPropDef(nullable MMethodDef)> */
if (unlikely(var9 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2354);
fatal_exit(1);
}
var14 = var9->attrs[COLOR_nitc__model__MPropDef___mclassdef].val; /* _mclassdef on <var9:nullable MPropDef(nullable MMethodDef)> */
if (unlikely(var14 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2354);
fatal_exit(1);
}
var12 = var14;
RET_LABEL13:(void)0;
}
}
var_mclassdef = var12;
{
{ /* Inline model#MClassDef#bound_mtype (var_mclassdef) on <var_mclassdef:MClassDef> */
var17 = var_mclassdef->attrs[COLOR_nitc__model__MClassDef___bound_mtype].val; /* _bound_mtype on <var_mclassdef:MClassDef> */
if (unlikely(var17 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _bound_mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 594);
fatal_exit(1);
}
var15 = var17;
RET_LABEL16:(void)0;
}
}
var_mclass_type = var15;
{
var18 = nitc__modelbuilder_base___ToolContext___modelbuilder(var_toolcontext);
}
{
{ /* Inline parser_nodes#AFullPropExternCall#n_type (self) on <self:AFullPropExternCall> */
var21 = self->attrs[COLOR_nitc__parser_nodes__AFullPropExternCall___n_type].val; /* _n_type on <self:AFullPropExternCall> */
if (unlikely(var21 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_type");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 1470);
fatal_exit(1);
}
var19 = var21;
RET_LABEL20:(void)0;
}
}
{
var22 = nitc___nitc__ModelBuilder___resolve_mtype(var18, var_mmodule, var_mclassdef, var19);
}
var_mtype = var22;
if (var_mtype == NULL) {
var23 = 1; /* is null */
} else {
var23 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_mtype,((val*)NULL)) on <var_mtype:nullable MType> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_mtype,var_other) on <var_mtype:nullable MType(MType)> */
var28 = var_mtype == var_other;
var26 = var28;
goto RET_LABEL27;
RET_LABEL27:(void)0;
}
}
var24 = var26;
goto RET_LABEL25;
RET_LABEL25:(void)0;
}
var23 = var24;
}
if (var23){
goto RET_LABEL;
} else {
}
/* <var_mtype:nullable MType(MType)> isa MFormalType */
cltype = type_nitc__MFormalType.color;
idtype = type_nitc__MFormalType.id;
if(cltype >= var_mtype->type->table_size) {
var29 = 0;
} else {
var29 = var_mtype->type->type_table[cltype] == idtype;
}
if (var29){
{
var30 = nitc___nitc__MType___anchor_to(var_mtype, var_mmodule, var_mclass_type);
}
var_mtype = var30;
} else {
}
/* <var_mtype:nullable MType(MType)> isa MNullableType */
cltype32 = type_nitc__MNullableType.color;
idtype33 = type_nitc__MNullableType.id;
if(cltype32 >= var_mtype->type->table_size) {
var31 = 0;
} else {
var31 = var_mtype->type->type_table[cltype32] == idtype33;
}
if (var31){
{
{ /* Inline parser_nodes#ANode#location (self) on <self:AFullPropExternCall> */
var36 = self->attrs[COLOR_nitc__parser_nodes__ANode___location].val; /* _location on <self:AFullPropExternCall> */
if (unlikely(var36 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _location");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 25);
fatal_exit(1);
}
var34 = var36;
RET_LABEL35:(void)0;
}
}
if (unlikely(varonce==NULL)) {
var37 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce38!=NULL)) {
var39 = varonce38;
} else {
var40 = "Error: type `";
var41 = core__abstract_text___CString___to_s_full(var40, 13l, 13l);
var39 = var41;
varonce38 = var39;
}
((struct instance_core__NativeArray*)var37)->values[0]=var39;
if (likely(varonce42!=NULL)) {
var43 = varonce42;
} else {
var44 = "` is nullable and thus cannot be the receiver.";
var45 = core__abstract_text___CString___to_s_full(var44, 46l, 46l);
var43 = var45;
varonce42 = var43;
}
((struct instance_core__NativeArray*)var37)->values[2]=var43;
} else {
var37 = varonce;
varonce = NULL;
}
{
{ /* Inline parser_nodes#AFullPropExternCall#n_type (self) on <self:AFullPropExternCall> */
var48 = self->attrs[COLOR_nitc__parser_nodes__AFullPropExternCall___n_type].val; /* _n_type on <self:AFullPropExternCall> */
if (unlikely(var48 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_type");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 1470);
fatal_exit(1);
}
var46 = var48;
RET_LABEL47:(void)0;
}
}
{
var49 = nitc__parser_work___Prod___collect_text(var46);
}
((struct instance_core__NativeArray*)var37)->values[1]=var49;
{
var50 = ((val*(*)(val* self))(var37->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var37); /* native_to_s on <var37:NativeArray[String]>*/
}
varonce = var37;
{
var51 = nitc___nitc__ToolContext___error(var_toolcontext, var34, var50);
}
goto RET_LABEL;
} else {
}
{
{ /* Inline parser_nodes#AFullPropExternCall#n_methid (self) on <self:AFullPropExternCall> */
var54 = self->attrs[COLOR_nitc__parser_nodes__AFullPropExternCall___n_methid].val; /* _n_methid on <self:AFullPropExternCall> */
if (unlikely(var54 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_methid");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 1476);
fatal_exit(1);
}
var52 = var54;
RET_LABEL53:(void)0;
}
}
{
var55 = nitc__parser_work___Prod___collect_text(var52);
}
var_m_name = var55;
{
var56 = nitc__modelbuilder_base___ToolContext___modelbuilder(var_toolcontext);
}
{
var57 = nitc___nitc__ModelBuilder___try_get_mproperty_by_name2(var56, self, var_mmodule, var_mtype, var_m_name);
}
var_method = var57;
if (var_method == NULL) {
var58 = 1; /* is null */
} else {
var58 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_method,((val*)NULL)) on <var_method:nullable MProperty> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_method,var_other) on <var_method:nullable MProperty(MProperty)> */
var63 = var_method == var_other;
var61 = var63;
goto RET_LABEL62;
RET_LABEL62:(void)0;
}
}
var59 = var61;
goto RET_LABEL60;
RET_LABEL60:(void)0;
}
var58 = var59;
}
if (var58){
{
{ /* Inline parser_nodes#ANode#location (self) on <self:AFullPropExternCall> */
var66 = self->attrs[COLOR_nitc__parser_nodes__ANode___location].val; /* _location on <self:AFullPropExternCall> */
if (unlikely(var66 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _location");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 25);
fatal_exit(1);
}
var64 = var66;
RET_LABEL65:(void)0;
}
}
if (unlikely(varonce67==NULL)) {
var68 = NEW_core__NativeArray(5l, &type_core__NativeArray__core__String);
if (likely(varonce69!=NULL)) {
var70 = varonce69;
} else {
var71 = "Error: method `";
var72 = core__abstract_text___CString___to_s_full(var71, 15l, 15l);
var70 = var72;
varonce69 = var70;
}
((struct instance_core__NativeArray*)var68)->values[0]=var70;
if (likely(varonce73!=NULL)) {
var74 = varonce73;
} else {
var75 = "` not found in `";
var76 = core__abstract_text___CString___to_s_full(var75, 16l, 16l);
var74 = var76;
varonce73 = var74;
}
((struct instance_core__NativeArray*)var68)->values[2]=var74;
if (likely(varonce77!=NULL)) {
var78 = varonce77;
} else {
var79 = "`.";
var80 = core__abstract_text___CString___to_s_full(var79, 2l, 2l);
var78 = var80;
varonce77 = var78;
}
((struct instance_core__NativeArray*)var68)->values[4]=var78;
} else {
var68 = varonce67;
varonce67 = NULL;
}
((struct instance_core__NativeArray*)var68)->values[1]=var_m_name;
{
{ /* Inline parser_nodes#AFullPropExternCall#n_type (self) on <self:AFullPropExternCall> */
var83 = self->attrs[COLOR_nitc__parser_nodes__AFullPropExternCall___n_type].val; /* _n_type on <self:AFullPropExternCall> */
if (unlikely(var83 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_type");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 1470);
fatal_exit(1);
}
var81 = var83;
RET_LABEL82:(void)0;
}
}
{
var84 = nitc__parser_work___Prod___collect_text(var81);
}
((struct instance_core__NativeArray*)var68)->values[3]=var84;
{
var85 = ((val*(*)(val* self))(var68->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var68); /* native_to_s on <var68:NativeArray[String]>*/
}
varonce67 = var68;
{
var86 = nitc___nitc__ToolContext___error(var_toolcontext, var64, var85);
}
goto RET_LABEL;
} else {
}
var87 = NEW_nitc__MExplicitCall(&type_nitc__MExplicitCall);
/* <var_mtype:nullable MType(MType)> isa MClassType */
cltype89 = type_nitc__MClassType.color;
idtype90 = type_nitc__MClassType.id;
if(cltype89 >= var_mtype->type->table_size) {
var88 = 0;
} else {
var88 = var_mtype->type->type_table[cltype89] == idtype90;
}
if (unlikely(!var88)) {
var_class_name = var_mtype == NULL ? "null" : var_mtype->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "MClassType", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__nitni_callbacks, 329);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(var87->class->vft[COLOR_nitc__nitni_callbacks__MExplicitCall__recv_mtype_61d]))(var87, var_mtype); /* recv_mtype= on <var87:MExplicitCall>*/
}
{
((void(*)(val* self, val* p0))(var87->class->vft[COLOR_nitc__nitni_callbacks__MExplicitCall__mproperty_61d]))(var87, var_method); /* mproperty= on <var87:MExplicitCall>*/
}
{
((void(*)(val* self, val* p0))(var87->class->vft[COLOR_nitc__nitni_callbacks__MExplicitCall__from_mmodule_61d]))(var87, var_mmodule); /* from_mmodule= on <var87:MExplicitCall>*/
}
{
((void(*)(val* self))(var87->class->vft[COLOR_core__kernel__Object__init]))(var87); /* init on <var87:MExplicitCall>*/
}
var_explicit_call = var87;
{
{ /* Inline nitni_callbacks#ForeignCallbackSet#callbacks (var_callback_set) on <var_callback_set:ForeignCallbackSet> */
var93 = var_callback_set->attrs[COLOR_nitc__nitni_callbacks__ForeignCallbackSet___callbacks].val; /* _callbacks on <var_callback_set:ForeignCallbackSet> */
if (unlikely(var93 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _callbacks");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__nitni_callbacks, 47);
fatal_exit(1);
}
var91 = var93;
RET_LABEL92:(void)0;
}
}
{
((void(*)(val* self, val* p0))((((long)var91&3)?class_info[((long)var91&3)]:var91->class)->vft[COLOR_core__abstract_collection__SimpleCollection__add]))(var91, var_explicit_call); /* add on <var91:Set[MExplicitCall]>*/
}
{
nitc___nitc__MExplicitCall___fill_type_for(var_explicit_call, var_callback_set, var_mmodule); /* Direct call nitni_callbacks#MExplicitCall#fill_type_for on <var_explicit_call:MExplicitCall>*/
}
RET_LABEL:;
}
/* method nitni_callbacks#AInitPropExternCall#verify_and_collect for (self: AInitPropExternCall, AMethPropdef, ForeignCallbackSet, ToolContext) */
void nitc__nitni_callbacks___AInitPropExternCall___AExternCall__verify_and_collect(val* self, val* p0, val* p1, val* p2) {
val* var_npropdef /* var npropdef: AMethPropdef */;
val* var_callback_set /* var callback_set: ForeignCallbackSet */;
val* var_toolcontext /* var toolcontext: ToolContext */;
val* var /* : nullable MPropDef */;
val* var2 /* : nullable MPropDef */;
val* var3 /* : MClassDef */;
val* var5 /* : MClassDef */;
val* var6 /* : MModule */;
val* var8 /* : MModule */;
val* var_mmodule /* var mmodule: MModule */;
val* var9 /* : nullable MPropDef */;
val* var11 /* : nullable MPropDef */;
val* var12 /* : MClassDef */;
val* var14 /* : MClassDef */;
val* var_mclassdef /* var mclassdef: MClassDef */;
val* var15 /* : ModelBuilder */;
val* var16 /* : AType */;
val* var18 /* : AType */;
val* var19 /* : nullable MType */;
val* var_mtype /* var mtype: nullable MType */;
short int var20 /* : Bool */;
short int var21 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var23 /* : Bool */;
short int var25 /* : Bool */;
short int var26 /* : Bool */;
int cltype;
int idtype;
short int var27 /* : Bool */;
val* var28 /* : Location */;
val* var30 /* : Location */;
val* var31 /* : NativeArray[String] */;
static val* varonce;
static val* varonce32;
val* var33 /* : String */;
char* var34 /* : CString */;
val* var35 /* : String */;
static val* varonce36;
val* var37 /* : String */;
char* var38 /* : CString */;
val* var39 /* : String */;
val* var40 /* : AType */;
val* var42 /* : AType */;
val* var43 /* : String */;
val* var44 /* : String */;
val* var45 /* : Message */;
static val* varonce46;
val* var47 /* : String */;
char* var48 /* : CString */;
val* var49 /* : String */;
val* var_meth_name /* var meth_name: String */;
val* var50 /* : ModelBuilder */;
val* var51 /* : nullable MProperty */;
val* var_meth /* var meth: nullable MProperty */;
short int var52 /* : Bool */;
short int var53 /* : Bool */;
short int var55 /* : Bool */;
short int var57 /* : Bool */;
static val* varonce58;
val* var59 /* : String */;
char* var60 /* : CString */;
val* var61 /* : String */;
val* var62 /* : ModelBuilder */;
val* var63 /* : nullable MProperty */;
short int var64 /* : Bool */;
short int var65 /* : Bool */;
short int var67 /* : Bool */;
short int var69 /* : Bool */;
val* var70 /* : Location */;
val* var72 /* : Location */;
val* var74 /* : NativeArray[String] */;
static val* varonce73;
static val* varonce75;
val* var76 /* : String */;
char* var77 /* : CString */;
val* var78 /* : String */;
static val* varonce79;
val* var80 /* : String */;
char* var81 /* : CString */;
val* var82 /* : String */;
static val* varonce83;
val* var84 /* : String */;
char* var85 /* : CString */;
val* var86 /* : String */;
val* var87 /* : AType */;
val* var89 /* : AType */;
val* var90 /* : String */;
val* var91 /* : String */;
val* var92 /* : Message */;
val* var93 /* : MExplicitCall */;
val* var_explicit_call /* var explicit_call: MExplicitCall */;
val* var94 /* : Set[MExplicitCall] */;
val* var96 /* : Set[MExplicitCall] */;
var_npropdef = p0;
var_callback_set = p1;
var_toolcontext = p2;
{
{ /* Inline modelize_property#APropdef#mpropdef (var_npropdef) on <var_npropdef:AMethPropdef> */
var2 = var_npropdef->attrs[COLOR_nitc__modelize_property__APropdef___mpropdef].val; /* _mpropdef on <var_npropdef:AMethPropdef> */
var = var2;
RET_LABEL1:(void)0;
}
}
if (var == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__nitni_callbacks, 338);
fatal_exit(1);
} else {
{ /* Inline model#MPropDef#mclassdef (var) on <var:nullable MPropDef(nullable MMethodDef)> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2354);
fatal_exit(1);
}
var5 = var->attrs[COLOR_nitc__model__MPropDef___mclassdef].val; /* _mclassdef on <var:nullable MPropDef(nullable MMethodDef)> */
if (unlikely(var5 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2354);
fatal_exit(1);
}
var3 = var5;
RET_LABEL4:(void)0;
}
}
{
{ /* Inline model#MClassDef#mmodule (var3) on <var3:MClassDef> */
var8 = var3->attrs[COLOR_nitc__model__MClassDef___mmodule].val; /* _mmodule on <var3:MClassDef> */
if (unlikely(var8 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 588);
fatal_exit(1);
}
var6 = var8;
RET_LABEL7:(void)0;
}
}
var_mmodule = var6;
{
{ /* Inline modelize_property#APropdef#mpropdef (var_npropdef) on <var_npropdef:AMethPropdef> */
var11 = var_npropdef->attrs[COLOR_nitc__modelize_property__APropdef___mpropdef].val; /* _mpropdef on <var_npropdef:AMethPropdef> */
var9 = var11;
RET_LABEL10:(void)0;
}
}
if (var9 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__nitni_callbacks, 339);
fatal_exit(1);
} else {
{ /* Inline model#MPropDef#mclassdef (var9) on <var9:nullable MPropDef(nullable MMethodDef)> */
if (unlikely(var9 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2354);
fatal_exit(1);
}
var14 = var9->attrs[COLOR_nitc__model__MPropDef___mclassdef].val; /* _mclassdef on <var9:nullable MPropDef(nullable MMethodDef)> */
if (unlikely(var14 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2354);
fatal_exit(1);
}
var12 = var14;
RET_LABEL13:(void)0;
}
}
var_mclassdef = var12;
{
var15 = nitc__modelbuilder_base___ToolContext___modelbuilder(var_toolcontext);
}
{
{ /* Inline parser_nodes#AInitPropExternCall#n_type (self) on <self:AInitPropExternCall> */
var18 = self->attrs[COLOR_nitc__parser_nodes__AInitPropExternCall___n_type].val; /* _n_type on <self:AInitPropExternCall> */
if (unlikely(var18 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_type");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 1484);
fatal_exit(1);
}
var16 = var18;
RET_LABEL17:(void)0;
}
}
{
var19 = nitc___nitc__ModelBuilder___resolve_mtype(var15, var_mmodule, var_mclassdef, var16);
}
var_mtype = var19;
if (var_mtype == NULL) {
var20 = 1; /* is null */
} else {
var20 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_mtype,((val*)NULL)) on <var_mtype:nullable MType> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_mtype,var_other) on <var_mtype:nullable MType(MType)> */
var25 = var_mtype == var_other;
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
goto RET_LABEL;
} else {
}
/* <var_mtype:nullable MType(MType)> isa MClassType */
cltype = type_nitc__MClassType.color;
idtype = type_nitc__MClassType.id;
if(cltype >= var_mtype->type->table_size) {
var26 = 0;
} else {
var26 = var_mtype->type->type_table[cltype] == idtype;
}
var27 = !var26;
if (var27){
{
{ /* Inline parser_nodes#ANode#location (self) on <self:AInitPropExternCall> */
var30 = self->attrs[COLOR_nitc__parser_nodes__ANode___location].val; /* _location on <self:AInitPropExternCall> */
if (unlikely(var30 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _location");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 25);
fatal_exit(1);
}
var28 = var30;
RET_LABEL29:(void)0;
}
}
if (unlikely(varonce==NULL)) {
var31 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce32!=NULL)) {
var33 = varonce32;
} else {
var34 = "Error: type `";
var35 = core__abstract_text___CString___to_s_full(var34, 13l, 13l);
var33 = var35;
varonce32 = var33;
}
((struct instance_core__NativeArray*)var31)->values[0]=var33;
if (likely(varonce36!=NULL)) {
var37 = varonce36;
} else {
var38 = "` is not a class and thus cannot be used to instantiate a new instance.";
var39 = core__abstract_text___CString___to_s_full(var38, 71l, 71l);
var37 = var39;
varonce36 = var37;
}
((struct instance_core__NativeArray*)var31)->values[2]=var37;
} else {
var31 = varonce;
varonce = NULL;
}
{
{ /* Inline parser_nodes#AInitPropExternCall#n_type (self) on <self:AInitPropExternCall> */
var42 = self->attrs[COLOR_nitc__parser_nodes__AInitPropExternCall___n_type].val; /* _n_type on <self:AInitPropExternCall> */
if (unlikely(var42 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_type");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 1484);
fatal_exit(1);
}
var40 = var42;
RET_LABEL41:(void)0;
}
}
{
var43 = nitc__parser_work___Prod___collect_text(var40);
}
((struct instance_core__NativeArray*)var31)->values[1]=var43;
{
var44 = ((val*(*)(val* self))(var31->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var31); /* native_to_s on <var31:NativeArray[String]>*/
}
varonce = var31;
{
var45 = nitc___nitc__ToolContext___error(var_toolcontext, var28, var44);
}
goto RET_LABEL;
} else {
}
if (likely(varonce46!=NULL)) {
var47 = varonce46;
} else {
var48 = "new";
var49 = core__abstract_text___CString___to_s_full(var48, 3l, 3l);
var47 = var49;
varonce46 = var47;
}
var_meth_name = var47;
{
var50 = nitc__modelbuilder_base___ToolContext___modelbuilder(var_toolcontext);
}
{
var51 = nitc___nitc__ModelBuilder___try_get_mproperty_by_name2(var50, self, var_mmodule, var_mtype, var_meth_name);
}
var_meth = var51;
if (var_meth == NULL) {
var52 = 1; /* is null */
} else {
var52 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_meth,((val*)NULL)) on <var_meth:nullable MProperty> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_meth,var_other) on <var_meth:nullable MProperty(MProperty)> */
var57 = var_meth == var_other;
var55 = var57;
goto RET_LABEL56;
RET_LABEL56:(void)0;
}
}
var53 = var55;
goto RET_LABEL54;
RET_LABEL54:(void)0;
}
var52 = var53;
}
if (var52){
if (likely(varonce58!=NULL)) {
var59 = varonce58;
} else {
var60 = "init";
var61 = core__abstract_text___CString___to_s_full(var60, 4l, 4l);
var59 = var61;
varonce58 = var59;
}
var_meth_name = var59;
{
var62 = nitc__modelbuilder_base___ToolContext___modelbuilder(var_toolcontext);
}
{
var63 = nitc___nitc__ModelBuilder___try_get_mproperty_by_name2(var62, self, var_mmodule, var_mtype, var_meth_name);
}
var_meth = var63;
} else {
}
if (var_meth == NULL) {
var64 = 1; /* is null */
} else {
var64 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_meth,((val*)NULL)) on <var_meth:nullable MProperty> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_meth,var_other) on <var_meth:nullable MProperty(MProperty)> */
var69 = var_meth == var_other;
var67 = var69;
goto RET_LABEL68;
RET_LABEL68:(void)0;
}
}
var65 = var67;
goto RET_LABEL66;
RET_LABEL66:(void)0;
}
var64 = var65;
}
if (var64){
{
{ /* Inline parser_nodes#ANode#location (self) on <self:AInitPropExternCall> */
var72 = self->attrs[COLOR_nitc__parser_nodes__ANode___location].val; /* _location on <self:AInitPropExternCall> */
if (unlikely(var72 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _location");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 25);
fatal_exit(1);
}
var70 = var72;
RET_LABEL71:(void)0;
}
}
if (unlikely(varonce73==NULL)) {
var74 = NEW_core__NativeArray(5l, &type_core__NativeArray__core__String);
if (likely(varonce75!=NULL)) {
var76 = varonce75;
} else {
var77 = "Error: method `";
var78 = core__abstract_text___CString___to_s_full(var77, 15l, 15l);
var76 = var78;
varonce75 = var76;
}
((struct instance_core__NativeArray*)var74)->values[0]=var76;
if (likely(varonce79!=NULL)) {
var80 = varonce79;
} else {
var81 = "` not found in `";
var82 = core__abstract_text___CString___to_s_full(var81, 16l, 16l);
var80 = var82;
varonce79 = var80;
}
((struct instance_core__NativeArray*)var74)->values[2]=var80;
if (likely(varonce83!=NULL)) {
var84 = varonce83;
} else {
var85 = "`.";
var86 = core__abstract_text___CString___to_s_full(var85, 2l, 2l);
var84 = var86;
varonce83 = var84;
}
((struct instance_core__NativeArray*)var74)->values[4]=var84;
} else {
var74 = varonce73;
varonce73 = NULL;
}
((struct instance_core__NativeArray*)var74)->values[1]=var_meth_name;
{
{ /* Inline parser_nodes#AInitPropExternCall#n_type (self) on <self:AInitPropExternCall> */
var89 = self->attrs[COLOR_nitc__parser_nodes__AInitPropExternCall___n_type].val; /* _n_type on <self:AInitPropExternCall> */
if (unlikely(var89 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_type");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 1484);
fatal_exit(1);
}
var87 = var89;
RET_LABEL88:(void)0;
}
}
{
var90 = nitc__parser_work___Prod___collect_text(var87);
}
((struct instance_core__NativeArray*)var74)->values[3]=var90;
{
var91 = ((val*(*)(val* self))(var74->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var74); /* native_to_s on <var74:NativeArray[String]>*/
}
varonce73 = var74;
{
var92 = nitc___nitc__ToolContext___error(var_toolcontext, var70, var91);
}
goto RET_LABEL;
} else {
}
var93 = NEW_nitc__MExplicitCall(&type_nitc__MExplicitCall);
{
((void(*)(val* self, val* p0))(var93->class->vft[COLOR_nitc__nitni_callbacks__MExplicitCall__recv_mtype_61d]))(var93, var_mtype); /* recv_mtype= on <var93:MExplicitCall>*/
}
{
((void(*)(val* self, val* p0))(var93->class->vft[COLOR_nitc__nitni_callbacks__MExplicitCall__mproperty_61d]))(var93, var_meth); /* mproperty= on <var93:MExplicitCall>*/
}
{
((void(*)(val* self, val* p0))(var93->class->vft[COLOR_nitc__nitni_callbacks__MExplicitCall__from_mmodule_61d]))(var93, var_mmodule); /* from_mmodule= on <var93:MExplicitCall>*/
}
{
((void(*)(val* self))(var93->class->vft[COLOR_core__kernel__Object__init]))(var93); /* init on <var93:MExplicitCall>*/
}
var_explicit_call = var93;
{
{ /* Inline nitni_callbacks#ForeignCallbackSet#callbacks (var_callback_set) on <var_callback_set:ForeignCallbackSet> */
var96 = var_callback_set->attrs[COLOR_nitc__nitni_callbacks__ForeignCallbackSet___callbacks].val; /* _callbacks on <var_callback_set:ForeignCallbackSet> */
if (unlikely(var96 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _callbacks");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__nitni_callbacks, 47);
fatal_exit(1);
}
var94 = var96;
RET_LABEL95:(void)0;
}
}
{
((void(*)(val* self, val* p0))((((long)var94&3)?class_info[((long)var94&3)]:var94->class)->vft[COLOR_core__abstract_collection__SimpleCollection__add]))(var94, var_explicit_call); /* add on <var94:Set[MExplicitCall]>*/
}
{
nitc___nitc__MExplicitCall___fill_type_for(var_explicit_call, var_callback_set, var_mmodule); /* Direct call nitni_callbacks#MExplicitCall#fill_type_for on <var_explicit_call:MExplicitCall>*/
}
RET_LABEL:;
}
/* method nitni_callbacks#ASuperExternCall#verify_and_collect for (self: ASuperExternCall, AMethPropdef, ForeignCallbackSet, ToolContext) */
void nitc__nitni_callbacks___ASuperExternCall___AExternCall__verify_and_collect(val* self, val* p0, val* p1, val* p2) {
val* var_npropdef /* var npropdef: AMethPropdef */;
val* var_callback_set /* var callback_set: ForeignCallbackSet */;
val* var_toolcontext /* var toolcontext: ToolContext */;
val* var /* : Set[MExplicitSuper] */;
val* var2 /* : Set[MExplicitSuper] */;
val* var3 /* : MExplicitSuper */;
val* var4 /* : nullable MPropDef */;
val* var6 /* : nullable MPropDef */;
val* var7 /* : Set[MType] */;
val* var9 /* : Set[MType] */;
val* var10 /* : nullable MPropDef */;
val* var12 /* : nullable MPropDef */;
val* var13 /* : MClassDef */;
val* var15 /* : MClassDef */;
val* var16 /* : MClass */;
val* var18 /* : MClass */;
val* var19 /* : MClassType */;
val* var21 /* : MClassType */;
val* var22 /* : nullable MPropDef */;
val* var24 /* : nullable MPropDef */;
var_npropdef = p0;
var_callback_set = p1;
var_toolcontext = p2;
{
{ /* Inline nitni_callbacks#ForeignCallbackSet#supers (var_callback_set) on <var_callback_set:ForeignCallbackSet> */
var2 = var_callback_set->attrs[COLOR_nitc__nitni_callbacks__ForeignCallbackSet___supers].val; /* _supers on <var_callback_set:ForeignCallbackSet> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _supers");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__nitni_callbacks, 50);
fatal_exit(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
var3 = NEW_nitc__MExplicitSuper(&type_nitc__MExplicitSuper);
{
{ /* Inline modelize_property#APropdef#mpropdef (var_npropdef) on <var_npropdef:AMethPropdef> */
var6 = var_npropdef->attrs[COLOR_nitc__modelize_property__APropdef___mpropdef].val; /* _mpropdef on <var_npropdef:AMethPropdef> */
var4 = var6;
RET_LABEL5:(void)0;
}
}
if (unlikely(var4 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__nitni_callbacks, 372);
fatal_exit(1);
}
{
((void(*)(val* self, val* p0))(var3->class->vft[COLOR_nitc__nitni_callbacks__MExplicitSuper__from_61d]))(var3, var4); /* from= on <var3:MExplicitSuper>*/
}
{
((void(*)(val* self))(var3->class->vft[COLOR_core__kernel__Object__init]))(var3); /* init on <var3:MExplicitSuper>*/
}
{
((void(*)(val* self, val* p0))((((long)var&3)?class_info[((long)var&3)]:var->class)->vft[COLOR_core__abstract_collection__SimpleCollection__add]))(var, var3); /* add on <var:Set[MExplicitSuper]>*/
}
{
{ /* Inline nitni_callbacks#ForeignCallbackSet#types (var_callback_set) on <var_callback_set:ForeignCallbackSet> */
var9 = var_callback_set->attrs[COLOR_nitc__nitni_callbacks__ForeignCallbackSet___types].val; /* _types on <var_callback_set:ForeignCallbackSet> */
if (unlikely(var9 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _types");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__nitni_callbacks, 53);
fatal_exit(1);
}
var7 = var9;
RET_LABEL8:(void)0;
}
}
{
{ /* Inline modelize_property#APropdef#mpropdef (var_npropdef) on <var_npropdef:AMethPropdef> */
var12 = var_npropdef->attrs[COLOR_nitc__modelize_property__APropdef___mpropdef].val; /* _mpropdef on <var_npropdef:AMethPropdef> */
var10 = var12;
RET_LABEL11:(void)0;
}
}
if (var10 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__nitni_callbacks, 373);
fatal_exit(1);
} else {
{ /* Inline model#MPropDef#mclassdef (var10) on <var10:nullable MPropDef(nullable MMethodDef)> */
if (unlikely(var10 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2354);
fatal_exit(1);
}
var15 = var10->attrs[COLOR_nitc__model__MPropDef___mclassdef].val; /* _mclassdef on <var10:nullable MPropDef(nullable MMethodDef)> */
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
{ /* Inline model#MClassDef#mclass (var13) on <var13:MClassDef> */
var18 = var13->attrs[COLOR_nitc__model__MClassDef___mclass].val; /* _mclass on <var13:MClassDef> */
if (unlikely(var18 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 591);
fatal_exit(1);
}
var16 = var18;
RET_LABEL17:(void)0;
}
}
{
{ /* Inline model#MClass#mclass_type (var16) on <var16:MClass> */
var21 = var16->attrs[COLOR_nitc__model__MClass___mclass_type].val; /* _mclass_type on <var16:MClass> */
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
((void(*)(val* self, val* p0))((((long)var7&3)?class_info[((long)var7&3)]:var7->class)->vft[COLOR_core__abstract_collection__SimpleCollection__add]))(var7, var19); /* add on <var7:Set[MType]>*/
}
{
{ /* Inline modelize_property#APropdef#mpropdef (var_npropdef) on <var_npropdef:AMethPropdef> */
var24 = var_npropdef->attrs[COLOR_nitc__modelize_property__APropdef___mpropdef].val; /* _mpropdef on <var_npropdef:AMethPropdef> */
var22 = var24;
RET_LABEL23:(void)0;
}
}
if (var22 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__nitni_callbacks, 374);
fatal_exit(1);
} else {
{ /* Inline modelize_property#MPropDef#has_supercall= (var22,1) on <var22:nullable MPropDef(nullable MMethodDef)> */
if (unlikely(var22 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelize_property, 484);
fatal_exit(1);
}
var22->attrs[COLOR_nitc__modelize_property__MPropDef___has_supercall].s = 1; /* _has_supercall on <var22:nullable MPropDef(nullable MMethodDef)> */
RET_LABEL25:(void)0;
}
}
RET_LABEL:;
}
/* method nitni_callbacks#ACastExternCall#verify_and_collect for (self: ACastExternCall, AMethPropdef, ForeignCallbackSet, ToolContext) */
void nitc__nitni_callbacks___ACastExternCall___AExternCall__verify_and_collect(val* self, val* p0, val* p1, val* p2) {
val* var_npropdef /* var npropdef: AMethPropdef */;
val* var_callback_set /* var callback_set: ForeignCallbackSet */;
val* var_toolcontext /* var toolcontext: ToolContext */;
val* var /* : MType */;
val* var_from /* var from: MType */;
val* var1 /* : MType */;
val* var_to /* var to: MType */;
val* var2 /* : Set[MType] */;
val* var4 /* : Set[MType] */;
val* var5 /* : Set[MType] */;
val* var7 /* : Set[MType] */;
val* var8 /* : Set[MExplicitCast] */;
val* var10 /* : Set[MExplicitCast] */;
val* var11 /* : MExplicitCast */;
var_npropdef = p0;
var_callback_set = p1;
var_toolcontext = p2;
{
var = ((val*(*)(val* self))(self->class->vft[COLOR_nitc__nitni_callbacks__ACastExternCall__from_mtype]))(self); /* from_mtype on <self:ACastExternCall>*/
}
var_from = var;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_nitc__nitni_callbacks__ACastExternCall__to_mtype]))(self); /* to_mtype on <self:ACastExternCall>*/
}
var_to = var1;
{
{ /* Inline nitni_callbacks#ForeignCallbackSet#types (var_callback_set) on <var_callback_set:ForeignCallbackSet> */
var4 = var_callback_set->attrs[COLOR_nitc__nitni_callbacks__ForeignCallbackSet___types].val; /* _types on <var_callback_set:ForeignCallbackSet> */
if (unlikely(var4 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _types");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__nitni_callbacks, 53);
fatal_exit(1);
}
var2 = var4;
RET_LABEL3:(void)0;
}
}
{
((void(*)(val* self, val* p0))((((long)var2&3)?class_info[((long)var2&3)]:var2->class)->vft[COLOR_core__abstract_collection__SimpleCollection__add]))(var2, var_from); /* add on <var2:Set[MType]>*/
}
{
{ /* Inline nitni_callbacks#ForeignCallbackSet#types (var_callback_set) on <var_callback_set:ForeignCallbackSet> */
var7 = var_callback_set->attrs[COLOR_nitc__nitni_callbacks__ForeignCallbackSet___types].val; /* _types on <var_callback_set:ForeignCallbackSet> */
if (unlikely(var7 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _types");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__nitni_callbacks, 53);
fatal_exit(1);
}
var5 = var7;
RET_LABEL6:(void)0;
}
}
{
((void(*)(val* self, val* p0))((((long)var5&3)?class_info[((long)var5&3)]:var5->class)->vft[COLOR_core__abstract_collection__SimpleCollection__add]))(var5, var_to); /* add on <var5:Set[MType]>*/
}
{
{ /* Inline nitni_callbacks#ForeignCallbackSet#casts (var_callback_set) on <var_callback_set:ForeignCallbackSet> */
var10 = var_callback_set->attrs[COLOR_nitc__nitni_callbacks__ForeignCallbackSet___casts].val; /* _casts on <var_callback_set:ForeignCallbackSet> */
if (unlikely(var10 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _casts");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__nitni_callbacks, 56);
fatal_exit(1);
}
var8 = var10;
RET_LABEL9:(void)0;
}
}
var11 = NEW_nitc__MExplicitCast(&type_nitc__MExplicitCast);
{
((void(*)(val* self, val* p0))(var11->class->vft[COLOR_nitc__nitni_callbacks__MExplicitCast__from_61d]))(var11, var_from); /* from= on <var11:MExplicitCast>*/
}
{
((void(*)(val* self, val* p0))(var11->class->vft[COLOR_nitc__nitni_callbacks__MExplicitCast__to_61d]))(var11, var_to); /* to= on <var11:MExplicitCast>*/
}
{
((void(*)(val* self))(var11->class->vft[COLOR_core__kernel__Object__init]))(var11); /* init on <var11:MExplicitCast>*/
}
{
((void(*)(val* self, val* p0))((((long)var8&3)?class_info[((long)var8&3)]:var8->class)->vft[COLOR_core__abstract_collection__SimpleCollection__add]))(var8, var11); /* add on <var8:Set[MExplicitCast]>*/
}
RET_LABEL:;
}
/* method nitni_callbacks#ACastAsExternCall#from_mtype for (self: ACastAsExternCall): MType */
val* nitc__nitni_callbacks___ACastAsExternCall___ACastExternCall__from_mtype(val* self) {
val* var /* : MType */;
val* var1 /* : AType */;
val* var3 /* : AType */;
val* var4 /* : nullable MType */;
val* var6 /* : nullable MType */;
{
{ /* Inline parser_nodes#ACastAsExternCall#n_from_type (self) on <self:ACastAsExternCall> */
var3 = self->attrs[COLOR_nitc__parser_nodes__ACastAsExternCall___n_from_type].val; /* _n_from_type on <self:ACastAsExternCall> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_from_type");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 1505);
fatal_exit(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
{ /* Inline modelbuilder_base#AType#mtype (var1) on <var1:AType> */
var6 = var1->attrs[COLOR_nitc__modelbuilder_base__AType___mtype].val; /* _mtype on <var1:AType> */
var4 = var6;
RET_LABEL5:(void)0;
}
}
if (unlikely(var4 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__nitni_callbacks, 395);
fatal_exit(1);
}
var = var4;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method nitni_callbacks#ACastAsExternCall#to_mtype for (self: ACastAsExternCall): MType */
val* nitc__nitni_callbacks___ACastAsExternCall___ACastExternCall__to_mtype(val* self) {
val* var /* : MType */;
val* var1 /* : AType */;
val* var3 /* : AType */;
val* var4 /* : nullable MType */;
val* var6 /* : nullable MType */;
{
{ /* Inline parser_nodes#ACastAsExternCall#n_to_type (self) on <self:ACastAsExternCall> */
var3 = self->attrs[COLOR_nitc__parser_nodes__ACastAsExternCall___n_to_type].val; /* _n_to_type on <self:ACastAsExternCall> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_to_type");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 1514);
fatal_exit(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
{ /* Inline modelbuilder_base#AType#mtype (var1) on <var1:AType> */
var6 = var1->attrs[COLOR_nitc__modelbuilder_base__AType___mtype].val; /* _mtype on <var1:AType> */
var4 = var6;
RET_LABEL5:(void)0;
}
}
if (unlikely(var4 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__nitni_callbacks, 396);
fatal_exit(1);
}
var = var4;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method nitni_callbacks#ACastAsExternCall#verify_and_collect for (self: ACastAsExternCall, AMethPropdef, ForeignCallbackSet, ToolContext) */
void nitc__nitni_callbacks___ACastAsExternCall___AExternCall__verify_and_collect(val* self, val* p0, val* p1, val* p2) {
val* var_npropdef /* var npropdef: AMethPropdef */;
val* var_callback_set /* var callback_set: ForeignCallbackSet */;
val* var_toolcontext /* var toolcontext: ToolContext */;
val* var /* : nullable MPropDef */;
val* var2 /* : nullable MPropDef */;
val* var3 /* : MClassDef */;
val* var5 /* : MClassDef */;
val* var_mclassdef /* var mclassdef: MClassDef */;
val* var6 /* : MModule */;
val* var8 /* : MModule */;
val* var_mmodule /* var mmodule: MModule */;
val* var9 /* : ModelBuilder */;
val* var10 /* : AType */;
val* var12 /* : AType */;
val* var13 /* : nullable MType */;
val* var14 /* : ModelBuilder */;
val* var15 /* : AType */;
val* var17 /* : AType */;
val* var18 /* : nullable MType */;
var_npropdef = p0;
var_callback_set = p1;
var_toolcontext = p2;
{
{ /* Inline modelize_property#APropdef#mpropdef (var_npropdef) on <var_npropdef:AMethPropdef> */
var2 = var_npropdef->attrs[COLOR_nitc__modelize_property__APropdef___mpropdef].val; /* _mpropdef on <var_npropdef:AMethPropdef> */
var = var2;
RET_LABEL1:(void)0;
}
}
if (var == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__nitni_callbacks, 400);
fatal_exit(1);
} else {
{ /* Inline model#MPropDef#mclassdef (var) on <var:nullable MPropDef(nullable MMethodDef)> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2354);
fatal_exit(1);
}
var5 = var->attrs[COLOR_nitc__model__MPropDef___mclassdef].val; /* _mclassdef on <var:nullable MPropDef(nullable MMethodDef)> */
if (unlikely(var5 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2354);
fatal_exit(1);
}
var3 = var5;
RET_LABEL4:(void)0;
}
}
var_mclassdef = var3;
{
{ /* Inline model#MClassDef#mmodule (var_mclassdef) on <var_mclassdef:MClassDef> */
var8 = var_mclassdef->attrs[COLOR_nitc__model__MClassDef___mmodule].val; /* _mmodule on <var_mclassdef:MClassDef> */
if (unlikely(var8 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 588);
fatal_exit(1);
}
var6 = var8;
RET_LABEL7:(void)0;
}
}
var_mmodule = var6;
{
var9 = nitc__modelbuilder_base___ToolContext___modelbuilder(var_toolcontext);
}
{
{ /* Inline parser_nodes#ACastAsExternCall#n_from_type (self) on <self:ACastAsExternCall> */
var12 = self->attrs[COLOR_nitc__parser_nodes__ACastAsExternCall___n_from_type].val; /* _n_from_type on <self:ACastAsExternCall> */
if (unlikely(var12 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_from_type");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 1505);
fatal_exit(1);
}
var10 = var12;
RET_LABEL11:(void)0;
}
}
{
var13 = nitc___nitc__ModelBuilder___resolve_mtype_unchecked(var9, var_mmodule, var_mclassdef, var10, 1);
}
{
var14 = nitc__modelbuilder_base___ToolContext___modelbuilder(var_toolcontext);
}
{
{ /* Inline parser_nodes#ACastAsExternCall#n_to_type (self) on <self:ACastAsExternCall> */
var17 = self->attrs[COLOR_nitc__parser_nodes__ACastAsExternCall___n_to_type].val; /* _n_to_type on <self:ACastAsExternCall> */
if (unlikely(var17 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_to_type");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 1514);
fatal_exit(1);
}
var15 = var17;
RET_LABEL16:(void)0;
}
}
{
var18 = nitc___nitc__ModelBuilder___resolve_mtype_unchecked(var14, var_mmodule, var_mclassdef, var15, 1);
}
{
((void(*)(val* self, val* p0, val* p1, val* p2))(self->class->vft[COLOR_nitc__nitni_callbacks___ACastAsExternCall___AExternCall__verify_and_collect]))(self, p0, p1, p2); /* verify_and_collect on <self:ACastAsExternCall>*/
}
RET_LABEL:;
}
/* method nitni_callbacks#AAsNullableExternCall#from_mtype for (self: AAsNullableExternCall): MType */
val* nitc__nitni_callbacks___AAsNullableExternCall___ACastExternCall__from_mtype(val* self) {
val* var /* : MType */;
val* var1 /* : AType */;
val* var3 /* : AType */;
val* var4 /* : nullable MType */;
val* var6 /* : nullable MType */;
{
{ /* Inline parser_nodes#AAsNullableExternCall#n_type (self) on <self:AAsNullableExternCall> */
var3 = self->attrs[COLOR_nitc__parser_nodes__AAsNullableExternCall___n_type].val; /* _n_type on <self:AAsNullableExternCall> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_type");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 1522);
fatal_exit(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
{ /* Inline modelbuilder_base#AType#mtype (var1) on <var1:AType> */
var6 = var1->attrs[COLOR_nitc__modelbuilder_base__AType___mtype].val; /* _mtype on <var1:AType> */
var4 = var6;
RET_LABEL5:(void)0;
}
}
if (unlikely(var4 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__nitni_callbacks, 409);
fatal_exit(1);
}
var = var4;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method nitni_callbacks#AAsNullableExternCall#to_mtype for (self: AAsNullableExternCall): MType */
val* nitc__nitni_callbacks___AAsNullableExternCall___ACastExternCall__to_mtype(val* self) {
val* var /* : MType */;
val* var1 /* : AType */;
val* var3 /* : AType */;
val* var4 /* : nullable MType */;
val* var6 /* : nullable MType */;
val* var7 /* : MType */;
{
{ /* Inline parser_nodes#AAsNullableExternCall#n_type (self) on <self:AAsNullableExternCall> */
var3 = self->attrs[COLOR_nitc__parser_nodes__AAsNullableExternCall___n_type].val; /* _n_type on <self:AAsNullableExternCall> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_type");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 1522);
fatal_exit(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
{ /* Inline modelbuilder_base#AType#mtype (var1) on <var1:AType> */
var6 = var1->attrs[COLOR_nitc__modelbuilder_base__AType___mtype].val; /* _mtype on <var1:AType> */
var4 = var6;
RET_LABEL5:(void)0;
}
}
if (var4 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__nitni_callbacks, 410);
fatal_exit(1);
} else {
var7 = ((val*(*)(val* self))(var4->class->vft[COLOR_nitc__model__MType__as_nullable]))(var4); /* as_nullable on <var4:nullable MType>*/
}
var = var7;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method nitni_callbacks#AAsNullableExternCall#verify_and_collect for (self: AAsNullableExternCall, AMethPropdef, ForeignCallbackSet, ToolContext) */
void nitc__nitni_callbacks___AAsNullableExternCall___AExternCall__verify_and_collect(val* self, val* p0, val* p1, val* p2) {
val* var_npropdef /* var npropdef: AMethPropdef */;
val* var_callback_set /* var callback_set: ForeignCallbackSet */;
val* var_toolcontext /* var toolcontext: ToolContext */;
val* var /* : nullable MPropDef */;
val* var2 /* : nullable MPropDef */;
val* var3 /* : MClassDef */;
val* var5 /* : MClassDef */;
val* var_mclassdef /* var mclassdef: MClassDef */;
val* var6 /* : MModule */;
val* var8 /* : MModule */;
val* var_mmodule /* var mmodule: MModule */;
val* var9 /* : ModelBuilder */;
val* var10 /* : AType */;
val* var12 /* : AType */;
val* var13 /* : nullable MType */;
var_npropdef = p0;
var_callback_set = p1;
var_toolcontext = p2;
{
{ /* Inline modelize_property#APropdef#mpropdef (var_npropdef) on <var_npropdef:AMethPropdef> */
var2 = var_npropdef->attrs[COLOR_nitc__modelize_property__APropdef___mpropdef].val; /* _mpropdef on <var_npropdef:AMethPropdef> */
var = var2;
RET_LABEL1:(void)0;
}
}
if (var == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__nitni_callbacks, 414);
fatal_exit(1);
} else {
{ /* Inline model#MPropDef#mclassdef (var) on <var:nullable MPropDef(nullable MMethodDef)> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2354);
fatal_exit(1);
}
var5 = var->attrs[COLOR_nitc__model__MPropDef___mclassdef].val; /* _mclassdef on <var:nullable MPropDef(nullable MMethodDef)> */
if (unlikely(var5 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2354);
fatal_exit(1);
}
var3 = var5;
RET_LABEL4:(void)0;
}
}
var_mclassdef = var3;
{
{ /* Inline model#MClassDef#mmodule (var_mclassdef) on <var_mclassdef:MClassDef> */
var8 = var_mclassdef->attrs[COLOR_nitc__model__MClassDef___mmodule].val; /* _mmodule on <var_mclassdef:MClassDef> */
if (unlikely(var8 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 588);
fatal_exit(1);
}
var6 = var8;
RET_LABEL7:(void)0;
}
}
var_mmodule = var6;
{
var9 = nitc__modelbuilder_base___ToolContext___modelbuilder(var_toolcontext);
}
{
{ /* Inline parser_nodes#AAsNullableExternCall#n_type (self) on <self:AAsNullableExternCall> */
var12 = self->attrs[COLOR_nitc__parser_nodes__AAsNullableExternCall___n_type].val; /* _n_type on <self:AAsNullableExternCall> */
if (unlikely(var12 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_type");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 1522);
fatal_exit(1);
}
var10 = var12;
RET_LABEL11:(void)0;
}
}
{
var13 = nitc___nitc__ModelBuilder___resolve_mtype_unchecked(var9, var_mmodule, var_mclassdef, var10, 1);
}
{
((void(*)(val* self, val* p0, val* p1, val* p2))(self->class->vft[COLOR_nitc__nitni_callbacks___AAsNullableExternCall___AExternCall__verify_and_collect]))(self, p0, p1, p2); /* verify_and_collect on <self:AAsNullableExternCall>*/
}
RET_LABEL:;
}
/* method nitni_callbacks#AAsNotNullableExternCall#from_mtype for (self: AAsNotNullableExternCall): MType */
val* nitc__nitni_callbacks___AAsNotNullableExternCall___ACastExternCall__from_mtype(val* self) {
val* var /* : MType */;
val* var1 /* : AType */;
val* var3 /* : AType */;
val* var4 /* : nullable MType */;
val* var6 /* : nullable MType */;
val* var7 /* : MType */;
{
{ /* Inline parser_nodes#AAsNotNullableExternCall#n_type (self) on <self:AAsNotNullableExternCall> */
var3 = self->attrs[COLOR_nitc__parser_nodes__AAsNotNullableExternCall___n_type].val; /* _n_type on <self:AAsNotNullableExternCall> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_type");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 1536);
fatal_exit(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
{ /* Inline modelbuilder_base#AType#mtype (var1) on <var1:AType> */
var6 = var1->attrs[COLOR_nitc__modelbuilder_base__AType___mtype].val; /* _mtype on <var1:AType> */
var4 = var6;
RET_LABEL5:(void)0;
}
}
if (var4 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__nitni_callbacks, 422);
fatal_exit(1);
} else {
var7 = ((val*(*)(val* self))(var4->class->vft[COLOR_nitc__model__MType__as_nullable]))(var4); /* as_nullable on <var4:nullable MType>*/
}
var = var7;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method nitni_callbacks#AAsNotNullableExternCall#to_mtype for (self: AAsNotNullableExternCall): MType */
val* nitc__nitni_callbacks___AAsNotNullableExternCall___ACastExternCall__to_mtype(val* self) {
val* var /* : MType */;
val* var1 /* : AType */;
val* var3 /* : AType */;
val* var4 /* : nullable MType */;
val* var6 /* : nullable MType */;
val* var_mtype /* var mtype: MType */;
val* var7 /* : MType */;
{
{ /* Inline parser_nodes#AAsNotNullableExternCall#n_type (self) on <self:AAsNotNullableExternCall> */
var3 = self->attrs[COLOR_nitc__parser_nodes__AAsNotNullableExternCall___n_type].val; /* _n_type on <self:AAsNotNullableExternCall> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_type");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 1536);
fatal_exit(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
{ /* Inline modelbuilder_base#AType#mtype (var1) on <var1:AType> */
var6 = var1->attrs[COLOR_nitc__modelbuilder_base__AType___mtype].val; /* _mtype on <var1:AType> */
var4 = var6;
RET_LABEL5:(void)0;
}
}
if (unlikely(var4 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__nitni_callbacks, 424);
fatal_exit(1);
}
var_mtype = var4;
{
var7 = ((val*(*)(val* self))(var_mtype->class->vft[COLOR_nitc__model__MType__undecorate]))(var_mtype); /* undecorate on <var_mtype:MType>*/
}
var_mtype = var7;
var = var_mtype;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method nitni_callbacks#AAsNotNullableExternCall#verify_and_collect for (self: AAsNotNullableExternCall, AMethPropdef, ForeignCallbackSet, ToolContext) */
void nitc__nitni_callbacks___AAsNotNullableExternCall___AExternCall__verify_and_collect(val* self, val* p0, val* p1, val* p2) {
val* var_npropdef /* var npropdef: AMethPropdef */;
val* var_callback_set /* var callback_set: ForeignCallbackSet */;
val* var_toolcontext /* var toolcontext: ToolContext */;
val* var /* : nullable MPropDef */;
val* var2 /* : nullable MPropDef */;
val* var3 /* : MClassDef */;
val* var5 /* : MClassDef */;
val* var_mclassdef /* var mclassdef: MClassDef */;
val* var6 /* : MModule */;
val* var8 /* : MModule */;
val* var_mmodule /* var mmodule: MModule */;
val* var9 /* : ModelBuilder */;
val* var10 /* : AType */;
val* var12 /* : AType */;
val* var13 /* : nullable MType */;
var_npropdef = p0;
var_callback_set = p1;
var_toolcontext = p2;
{
{ /* Inline modelize_property#APropdef#mpropdef (var_npropdef) on <var_npropdef:AMethPropdef> */
var2 = var_npropdef->attrs[COLOR_nitc__modelize_property__APropdef___mpropdef].val; /* _mpropdef on <var_npropdef:AMethPropdef> */
var = var2;
RET_LABEL1:(void)0;
}
}
if (var == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__nitni_callbacks, 431);
fatal_exit(1);
} else {
{ /* Inline model#MPropDef#mclassdef (var) on <var:nullable MPropDef(nullable MMethodDef)> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2354);
fatal_exit(1);
}
var5 = var->attrs[COLOR_nitc__model__MPropDef___mclassdef].val; /* _mclassdef on <var:nullable MPropDef(nullable MMethodDef)> */
if (unlikely(var5 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2354);
fatal_exit(1);
}
var3 = var5;
RET_LABEL4:(void)0;
}
}
var_mclassdef = var3;
{
{ /* Inline model#MClassDef#mmodule (var_mclassdef) on <var_mclassdef:MClassDef> */
var8 = var_mclassdef->attrs[COLOR_nitc__model__MClassDef___mmodule].val; /* _mmodule on <var_mclassdef:MClassDef> */
if (unlikely(var8 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 588);
fatal_exit(1);
}
var6 = var8;
RET_LABEL7:(void)0;
}
}
var_mmodule = var6;
{
var9 = nitc__modelbuilder_base___ToolContext___modelbuilder(var_toolcontext);
}
{
{ /* Inline parser_nodes#AAsNotNullableExternCall#n_type (self) on <self:AAsNotNullableExternCall> */
var12 = self->attrs[COLOR_nitc__parser_nodes__AAsNotNullableExternCall___n_type].val; /* _n_type on <self:AAsNotNullableExternCall> */
if (unlikely(var12 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_type");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 1536);
fatal_exit(1);
}
var10 = var12;
RET_LABEL11:(void)0;
}
}
{
var13 = nitc___nitc__ModelBuilder___resolve_mtype_unchecked(var9, var_mmodule, var_mclassdef, var10, 1);
}
{
((void(*)(val* self, val* p0, val* p1, val* p2))(self->class->vft[COLOR_nitc__nitni_callbacks___AAsNotNullableExternCall___AExternCall__verify_and_collect]))(self, p0, p1, p2); /* verify_and_collect on <self:AAsNotNullableExternCall>*/
}
RET_LABEL:;
}
