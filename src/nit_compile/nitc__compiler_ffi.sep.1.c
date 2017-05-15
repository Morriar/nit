#include "nitc__compiler_ffi.sep.0.h"
/* method compiler_ffi#MModule#foreign_callbacks for (self: MModule): ForeignCallbackSet */
val* nitc__compiler_ffi___MModule___foreign_callbacks(val* self) {
val* var /* : ForeignCallbackSet */;
val* var1 /* : ForeignCallbackSet */;
var1 = self->attrs[COLOR_nitc__compiler_ffi__MModule___foreign_callbacks].val; /* _foreign_callbacks on <self:MModule> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _foreign_callbacks");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__compiler_ffi, 24);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method compiler_ffi#MModule#finalize_ffi for (self: MModule, AbstractCompiler) */
void nitc__compiler_ffi___MModule___finalize_ffi(val* self, val* p0) {
val* var_compiler /* var compiler: AbstractCompiler */;
short int var /* : Bool */;
short int var2 /* : Bool */;
short int var3 /* : Bool */;
val* var4 /* : Array[NitniCallback] */;
val* var6 /* : Array[NitniCallback] */;
var_compiler = p0;
{
{ /* Inline light_ffi#MModule#uses_ffi (self) on <self:MModule> */
var2 = self->attrs[COLOR_nitc__light_ffi__MModule___uses_ffi].s; /* _uses_ffi on <self:MModule> */
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
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nitc__compiler_ffi___MModule___finalize_ffi]))(self, p0); /* finalize_ffi on <self:MModule>*/
}
{
{ /* Inline compiler_ffi#MModule#compiled_callbacks (self) on <self:MModule> */
var6 = self->attrs[COLOR_nitc__compiler_ffi__MModule___compiled_callbacks].val; /* _compiled_callbacks on <self:MModule> */
if (unlikely(var6 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiled_callbacks");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__compiler_ffi, 36);
fatal_exit(1);
}
var4 = var6;
RET_LABEL5:(void)0;
}
}
{
core___core__AbstractArray___core__abstract_collection__RemovableCollection__clear(var4); /* Direct call array#AbstractArray#clear on <var4:Array[NitniCallback]>*/
}
RET_LABEL:;
}
/* method compiler_ffi#MModule#compiled_callbacks for (self: MModule): Array[NitniCallback] */
val* nitc__compiler_ffi___MModule___compiled_callbacks(val* self) {
val* var /* : Array[NitniCallback] */;
val* var1 /* : Array[NitniCallback] */;
var1 = self->attrs[COLOR_nitc__compiler_ffi__MModule___compiled_callbacks].val; /* _compiled_callbacks on <self:MModule> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiled_callbacks");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__compiler_ffi, 36);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method compiler_ffi#MModule#check_callback_compilation for (self: MModule, NitniCallback): Bool */
short int nitc__compiler_ffi___MModule___check_callback_compilation(val* self, val* p0) {
short int var /* : Bool */;
val* var_cb /* var cb: NitniCallback */;
val* var1 /* : Array[NitniCallback] */;
val* var3 /* : Array[NitniCallback] */;
short int var4 /* : Bool */;
short int var_compiled /* var compiled: Bool */;
short int var5 /* : Bool */;
val* var6 /* : Array[NitniCallback] */;
val* var8 /* : Array[NitniCallback] */;
short int var9 /* : Bool */;
var_cb = p0;
{
{ /* Inline compiler_ffi#MModule#compiled_callbacks (self) on <self:MModule> */
var3 = self->attrs[COLOR_nitc__compiler_ffi__MModule___compiled_callbacks].val; /* _compiled_callbacks on <self:MModule> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiled_callbacks");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__compiler_ffi, 36);
fatal_exit(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
var4 = core___core__AbstractArrayRead___core__abstract_collection__Collection__has(var1, var_cb);
}
var_compiled = var4;
var5 = !var_compiled;
if (var5){
{
{ /* Inline compiler_ffi#MModule#compiled_callbacks (self) on <self:MModule> */
var8 = self->attrs[COLOR_nitc__compiler_ffi__MModule___compiled_callbacks].val; /* _compiled_callbacks on <self:MModule> */
if (unlikely(var8 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiled_callbacks");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__compiler_ffi, 36);
fatal_exit(1);
}
var6 = var8;
RET_LABEL7:(void)0;
}
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var6, var_cb); /* Direct call array#Array#add on <var6:Array[NitniCallback]>*/
}
} else {
}
var9 = !var_compiled;
var = var9;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method compiler_ffi#AMethPropdef#compile_ffi_support_to_c for (self: AMethPropdef, AbstractCompilerVisitor) */
void nitc__compiler_ffi___AMethPropdef___compile_ffi_support_to_c(val* self, val* p0) {
val* var_v /* var v: AbstractCompilerVisitor */;
val* var /* : nullable MPropDef */;
val* var2 /* : nullable MPropDef */;
val* var3 /* : MClassDef */;
val* var5 /* : MClassDef */;
val* var6 /* : MModule */;
val* var8 /* : MModule */;
val* var_mmodule /* var mmodule: MModule */;
val* var9 /* : AbstractCompiler */;
val* var11 /* : AbstractCompiler */;
val* var12 /* : MModule */;
val* var14 /* : MModule */;
val* var_mainmodule /* var mainmodule: MModule */;
val* var15 /* : nullable CCompilationUnit */;
val* var17 /* : nullable CCompilationUnit */;
val* var_ccu /* var ccu: CCompilationUnit */;
val* var18 /* : ForeignCallbackSet */;
val* var19 /* : Set[MType] */;
val* var21 /* : Set[MType] */;
val* var_ /* var : Set[MType] */;
val* var22 /* : Iterator[nullable Object] */;
val* var_23 /* var : Iterator[MType] */;
short int var24 /* : Bool */;
val* var25 /* : nullable Object */;
val* var_mtype /* var mtype: MType */;
short int var26 /* : Bool */;
short int var27 /* : Bool */;
short int var28 /* : Bool */;
val* var29 /* : ForeignCallbackSet */;
val* var30 /* : Set[MExplicitCall] */;
val* var32 /* : Set[MExplicitCall] */;
val* var_33 /* var : Set[MExplicitCall] */;
val* var34 /* : Iterator[nullable Object] */;
val* var_35 /* var : Iterator[MExplicitCall] */;
short int var36 /* : Bool */;
val* var38 /* : nullable Object */;
val* var_cb /* var cb: MExplicitCall */;
short int var39 /* : Bool */;
val* var40 /* : ForeignCallbackSet */;
val* var41 /* : Set[MExplicitSuper] */;
val* var43 /* : Set[MExplicitSuper] */;
val* var_44 /* var : Set[MExplicitSuper] */;
val* var45 /* : Iterator[nullable Object] */;
val* var_46 /* var : Iterator[MExplicitSuper] */;
short int var47 /* : Bool */;
val* var49 /* : nullable Object */;
val* var_cb50 /* var cb: MExplicitSuper */;
short int var51 /* : Bool */;
val* var52 /* : ForeignCallbackSet */;
val* var53 /* : Set[MExplicitCast] */;
val* var55 /* : Set[MExplicitCast] */;
val* var_56 /* var : Set[MExplicitCast] */;
val* var57 /* : Iterator[nullable Object] */;
val* var_58 /* var : Iterator[MExplicitCast] */;
short int var59 /* : Bool */;
val* var61 /* : nullable Object */;
val* var_cb62 /* var cb: MExplicitCast */;
short int var63 /* : Bool */;
val* var64 /* : ForeignCallbackSet */;
val* var66 /* : ForeignCallbackSet */;
val* var67 /* : ForeignCallbackSet */;
var_v = p0;
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nitc__compiler_ffi___AMethPropdef___compile_ffi_support_to_c]))(self, p0); /* compile_ffi_support_to_c on <self:AMethPropdef>*/
}
{
{ /* Inline modelize_property#APropdef#mpropdef (self) on <self:AMethPropdef> */
var2 = self->attrs[COLOR_nitc__modelize_property__APropdef___mpropdef].val; /* _mpropdef on <self:AMethPropdef> */
var = var2;
RET_LABEL1:(void)0;
}
}
if (var == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__compiler_ffi, 52);
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
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler (var_v) on <var_v:AbstractCompilerVisitor> */
var11 = var_v->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <var_v:AbstractCompilerVisitor> */
if (unlikely(var11 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1200);
fatal_exit(1);
}
var9 = var11;
RET_LABEL10:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompiler#mainmodule (var9) on <var9:AbstractCompiler> */
var14 = var9->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___mainmodule].val; /* _mainmodule on <var9:AbstractCompiler> */
if (unlikely(var14 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mainmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 531);
fatal_exit(1);
}
var12 = var14;
RET_LABEL13:(void)0;
}
}
var_mainmodule = var12;
{
{ /* Inline light#MModule#nitni_ccu (var_mmodule) on <var_mmodule:MModule> */
var17 = var_mmodule->attrs[COLOR_nitc__light__MModule___nitni_ccu].val; /* _nitni_ccu on <var_mmodule:MModule> */
var15 = var17;
RET_LABEL16:(void)0;
}
}
if (unlikely(var15 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__compiler_ffi, 54);
fatal_exit(1);
}
var_ccu = var15;
{
var18 = nitc__nitni_callbacks___AMethPropdef___foreign_callbacks(self);
}
{
{ /* Inline nitni_callbacks#ForeignCallbackSet#types (var18) on <var18:ForeignCallbackSet> */
var21 = var18->attrs[COLOR_nitc__nitni_callbacks__ForeignCallbackSet___types].val; /* _types on <var18:ForeignCallbackSet> */
if (unlikely(var21 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _types");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__nitni_callbacks, 53);
fatal_exit(1);
}
var19 = var21;
RET_LABEL20:(void)0;
}
}
var_ = var19;
{
var22 = ((val*(*)(val* self))((((long)var_&3)?class_info[((long)var_&3)]:var_->class)->vft[COLOR_core__abstract_collection__Collection__iterator]))(var_); /* iterator on <var_:Set[MType]>*/
}
var_23 = var22;
for(;;) {
{
var24 = ((short int(*)(val* self))((((long)var_23&3)?class_info[((long)var_23&3)]:var_23->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_23); /* is_ok on <var_23:Iterator[MType]>*/
}
if (var24){
} else {
goto BREAK_label;
}
{
var25 = ((val*(*)(val* self))((((long)var_23&3)?class_info[((long)var_23&3)]:var_23->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_23); /* item on <var_23:Iterator[MType]>*/
}
var_mtype = var25;
{
var26 = ((short int(*)(val* self))(var_mtype->class->vft[COLOR_nitc__nitni_base__MType__is_cprimitive]))(var_mtype); /* is_cprimitive on <var_mtype:MType>*/
}
var27 = !var26;
if (var27){
{
nitc__light___MType___compile_extern_type(var_mtype, var_v, var_ccu); /* Direct call light#MType#compile_extern_type on <var_mtype:MType>*/
}
{
var28 = nitc__compiler_ffi___MModule___check_callback_compilation(var_mmodule, var_mtype);
}
{
((void(*)(val* self, val* p0, val* p1, short int p2))(var_mtype->class->vft[COLOR_nitc__compiler_ffi__MType__compile_extern_helper_functions]))(var_mtype, var_v, var_ccu, var28); /* compile_extern_helper_functions on <var_mtype:MType>*/
}
} else {
}
{
((void(*)(val* self))((((long)var_23&3)?class_info[((long)var_23&3)]:var_23->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_23); /* next on <var_23:Iterator[MType]>*/
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_23&3)?class_info[((long)var_23&3)]:var_23->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_23); /* finish on <var_23:Iterator[MType]>*/
}
{
var29 = nitc__nitni_callbacks___AMethPropdef___foreign_callbacks(self);
}
{
{ /* Inline nitni_callbacks#ForeignCallbackSet#callbacks (var29) on <var29:ForeignCallbackSet> */
var32 = var29->attrs[COLOR_nitc__nitni_callbacks__ForeignCallbackSet___callbacks].val; /* _callbacks on <var29:ForeignCallbackSet> */
if (unlikely(var32 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _callbacks");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__nitni_callbacks, 47);
fatal_exit(1);
}
var30 = var32;
RET_LABEL31:(void)0;
}
}
var_33 = var30;
{
var34 = ((val*(*)(val* self))((((long)var_33&3)?class_info[((long)var_33&3)]:var_33->class)->vft[COLOR_core__abstract_collection__Collection__iterator]))(var_33); /* iterator on <var_33:Set[MExplicitCall]>*/
}
var_35 = var34;
for(;;) {
{
var36 = ((short int(*)(val* self))((((long)var_35&3)?class_info[((long)var_35&3)]:var_35->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_35); /* is_ok on <var_35:Iterator[MExplicitCall]>*/
}
if (var36){
} else {
goto BREAK_label37;
}
{
var38 = ((val*(*)(val* self))((((long)var_35&3)?class_info[((long)var_35&3)]:var_35->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_35); /* item on <var_35:Iterator[MExplicitCall]>*/
}
var_cb = var38;
{
var39 = nitc__compiler_ffi___MModule___check_callback_compilation(var_mainmodule, var_cb);
}
{
nitc__compiler_ffi___MExplicitCall___compile_extern_callback(var_cb, var_v, var_ccu, var39); /* Direct call compiler_ffi#MExplicitCall#compile_extern_callback on <var_cb:MExplicitCall>*/
}
{
((void(*)(val* self))((((long)var_35&3)?class_info[((long)var_35&3)]:var_35->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_35); /* next on <var_35:Iterator[MExplicitCall]>*/
}
}
BREAK_label37: (void)0;
{
((void(*)(val* self))((((long)var_35&3)?class_info[((long)var_35&3)]:var_35->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_35); /* finish on <var_35:Iterator[MExplicitCall]>*/
}
{
var40 = nitc__nitni_callbacks___AMethPropdef___foreign_callbacks(self);
}
{
{ /* Inline nitni_callbacks#ForeignCallbackSet#supers (var40) on <var40:ForeignCallbackSet> */
var43 = var40->attrs[COLOR_nitc__nitni_callbacks__ForeignCallbackSet___supers].val; /* _supers on <var40:ForeignCallbackSet> */
if (unlikely(var43 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _supers");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__nitni_callbacks, 50);
fatal_exit(1);
}
var41 = var43;
RET_LABEL42:(void)0;
}
}
var_44 = var41;
{
var45 = ((val*(*)(val* self))((((long)var_44&3)?class_info[((long)var_44&3)]:var_44->class)->vft[COLOR_core__abstract_collection__Collection__iterator]))(var_44); /* iterator on <var_44:Set[MExplicitSuper]>*/
}
var_46 = var45;
for(;;) {
{
var47 = ((short int(*)(val* self))((((long)var_46&3)?class_info[((long)var_46&3)]:var_46->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_46); /* is_ok on <var_46:Iterator[MExplicitSuper]>*/
}
if (var47){
} else {
goto BREAK_label48;
}
{
var49 = ((val*(*)(val* self))((((long)var_46&3)?class_info[((long)var_46&3)]:var_46->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_46); /* item on <var_46:Iterator[MExplicitSuper]>*/
}
var_cb50 = var49;
{
var51 = nitc__compiler_ffi___MModule___check_callback_compilation(var_mainmodule, var_cb50);
}
{
nitc__compiler_ffi___MExplicitSuper___compile_extern_callback(var_cb50, var_v, var_ccu, var51); /* Direct call compiler_ffi#MExplicitSuper#compile_extern_callback on <var_cb50:MExplicitSuper>*/
}
{
((void(*)(val* self))((((long)var_46&3)?class_info[((long)var_46&3)]:var_46->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_46); /* next on <var_46:Iterator[MExplicitSuper]>*/
}
}
BREAK_label48: (void)0;
{
((void(*)(val* self))((((long)var_46&3)?class_info[((long)var_46&3)]:var_46->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_46); /* finish on <var_46:Iterator[MExplicitSuper]>*/
}
{
var52 = nitc__nitni_callbacks___AMethPropdef___foreign_callbacks(self);
}
{
{ /* Inline nitni_callbacks#ForeignCallbackSet#casts (var52) on <var52:ForeignCallbackSet> */
var55 = var52->attrs[COLOR_nitc__nitni_callbacks__ForeignCallbackSet___casts].val; /* _casts on <var52:ForeignCallbackSet> */
if (unlikely(var55 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _casts");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__nitni_callbacks, 56);
fatal_exit(1);
}
var53 = var55;
RET_LABEL54:(void)0;
}
}
var_56 = var53;
{
var57 = ((val*(*)(val* self))((((long)var_56&3)?class_info[((long)var_56&3)]:var_56->class)->vft[COLOR_core__abstract_collection__Collection__iterator]))(var_56); /* iterator on <var_56:Set[MExplicitCast]>*/
}
var_58 = var57;
for(;;) {
{
var59 = ((short int(*)(val* self))((((long)var_58&3)?class_info[((long)var_58&3)]:var_58->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_58); /* is_ok on <var_58:Iterator[MExplicitCast]>*/
}
if (var59){
} else {
goto BREAK_label60;
}
{
var61 = ((val*(*)(val* self))((((long)var_58&3)?class_info[((long)var_58&3)]:var_58->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_58); /* item on <var_58:Iterator[MExplicitCast]>*/
}
var_cb62 = var61;
{
var63 = nitc__compiler_ffi___MModule___check_callback_compilation(var_mainmodule, var_cb62);
}
{
nitc__compiler_ffi___MExplicitCast___compile_extern_callbacks(var_cb62, var_v, var_ccu, var63); /* Direct call compiler_ffi#MExplicitCast#compile_extern_callbacks on <var_cb62:MExplicitCast>*/
}
{
((void(*)(val* self))((((long)var_58&3)?class_info[((long)var_58&3)]:var_58->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_58); /* next on <var_58:Iterator[MExplicitCast]>*/
}
}
BREAK_label60: (void)0;
{
((void(*)(val* self))((((long)var_58&3)?class_info[((long)var_58&3)]:var_58->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_58); /* finish on <var_58:Iterator[MExplicitCast]>*/
}
{
{ /* Inline compiler_ffi#MModule#foreign_callbacks (var_mmodule) on <var_mmodule:MModule> */
var66 = var_mmodule->attrs[COLOR_nitc__compiler_ffi__MModule___foreign_callbacks].val; /* _foreign_callbacks on <var_mmodule:MModule> */
if (unlikely(var66 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _foreign_callbacks");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__compiler_ffi, 24);
fatal_exit(1);
}
var64 = var66;
RET_LABEL65:(void)0;
}
}
{
var67 = nitc__nitni_callbacks___AMethPropdef___foreign_callbacks(self);
}
{
nitc___nitc__ForeignCallbackSet___join(var64, var67); /* Direct call nitni_callbacks#ForeignCallbackSet#join on <var64:ForeignCallbackSet>*/
}
RET_LABEL:;
}
/* method compiler_ffi#MExplicitCall#compile_extern_callback for (self: MExplicitCall, AbstractCompilerVisitor, CCompilationUnit, Bool) */
void nitc__compiler_ffi___MExplicitCall___compile_extern_callback(val* self, val* p0, val* p1, short int p2) {
val* var_v /* var v: AbstractCompilerVisitor */;
val* var_ccu /* var ccu: CCompilationUnit */;
short int var_compile_implementation_too /* var compile_implementation_too: Bool */;
val* var /* : MProperty */;
val* var2 /* : MProperty */;
val* var_mproperty /* var mproperty: MProperty */;
short int var3 /* : Bool */;
int cltype;
int idtype;
val* var4 /* : MClassType */;
val* var6 /* : MClassType */;
val* var7 /* : AbstractCompiler */;
val* var9 /* : AbstractCompiler */;
val* var10 /* : MModule */;
val* var12 /* : MModule */;
val* var13 /* : Sys */;
val* var14 /* : SignatureLength */;
val* var15 /* : Sys */;
val* var16 /* : CallContext */;
val* var17 /* : String */;
val* var_full_friendly_csignature /* var full_friendly_csignature: String */;
val* var18 /* : Template */;
val* var20 /* : Template */;
val* var21 /* : NativeArray[String] */;
static val* varonce;
static val* varonce22;
val* var23 /* : String */;
char* var24 /* : CString */;
val* var25 /* : String */;
static val* varonce26;
val* var27 /* : String */;
char* var28 /* : CString */;
val* var29 /* : String */;
val* var30 /* : String */;
short int var31 /* : Bool */;
val* var32 /* : AbstractCompiler */;
val* var34 /* : AbstractCompiler */;
val* var35 /* : AbstractCompilerVisitor */;
val* var_nitni_visitor /* var nitni_visitor: AbstractCompilerVisitor */;
val* var36 /* : nullable StaticFrame */;
val* var38 /* : nullable StaticFrame */;
val* var40 /* : AbstractCompiler */;
val* var42 /* : AbstractCompiler */;
val* var43 /* : MModule */;
val* var45 /* : MModule */;
val* var46 /* : MClassType */;
val* var48 /* : MClassType */;
val* var49 /* : MPropDef */;
val* var50 /* : nullable MSignature */;
val* var52 /* : nullable MSignature */;
val* var_msignature /* var msignature: nullable MSignature */;
val* var53 /* : MClassType */;
val* var55 /* : MClassType */;
val* var56 /* : AbstractCompiler */;
val* var58 /* : AbstractCompiler */;
val* var59 /* : MModule */;
val* var61 /* : MModule */;
val* var62 /* : Sys */;
val* var63 /* : SignatureLength */;
val* var64 /* : Sys */;
val* var65 /* : CallContext */;
val* var66 /* : String */;
val* var_csignature_blind /* var csignature_blind: String */;
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
val* var77 /* : String */;
val* var78 /* : String */;
val* var80 /* : NativeArray[String] */;
static val* varonce79;
static val* varonce81;
val* var82 /* : String */;
char* var83 /* : CString */;
val* var84 /* : String */;
val* var85 /* : String */;
val* var86 /* : Array[RuntimeVariable] */;
val* var_vars /* var vars: Array[RuntimeVariable] */;
val* var87 /* : MClassType */;
val* var89 /* : MClassType */;
val* var_mtype /* var mtype: MType */;
val* var_recv_var /* var recv_var: nullable Object */;
short int var90 /* : Bool */;
short int var92 /* : Bool */;
val* var93 /* : MClassType */;
val* var95 /* : MClassType */;
val* var_recv_mtype /* var recv_mtype: MClassType */;
val* var96 /* : RuntimeVariable */;
val* var98 /* : NativeArray[String] */;
static val* varonce97;
static val* varonce99;
val* var100 /* : String */;
char* var101 /* : CString */;
val* var102 /* : String */;
static val* varonce103;
val* var104 /* : String */;
char* var105 /* : CString */;
val* var106 /* : String */;
val* var107 /* : String */;
val* var108 /* : String */;
val* var109 /* : String */;
val* var111 /* : NativeArray[String] */;
static val* varonce110;
static val* varonce112;
val* var113 /* : String */;
char* var114 /* : CString */;
val* var115 /* : String */;
static val* varonce116;
val* var117 /* : String */;
char* var118 /* : CString */;
val* var119 /* : String */;
val* var120 /* : String */;
val* var121 /* : String */;
val* var122 /* : AbstractCompiler */;
val* var124 /* : AbstractCompiler */;
val* var125 /* : MModule */;
val* var127 /* : MModule */;
val* var128 /* : MClassType */;
val* var130 /* : MClassType */;
val* var131 /* : MType */;
static val* varonce132;
val* var133 /* : String */;
char* var134 /* : CString */;
val* var135 /* : String */;
val* var136 /* : RuntimeVariable */;
val* var137 /* : RuntimeVariable */;
val* var138 /* : Array[MParameter] */;
val* var140 /* : Array[MParameter] */;
val* var_ /* var : Array[MParameter] */;
val* var141 /* : IndexedIterator[nullable Object] */;
val* var_142 /* var : IndexedIterator[MParameter] */;
short int var143 /* : Bool */;
val* var144 /* : nullable Object */;
val* var_p /* var p: MParameter */;
val* var145 /* : MType */;
val* var147 /* : MType */;
val* var148 /* : AbstractCompiler */;
val* var150 /* : AbstractCompiler */;
val* var151 /* : MModule */;
val* var153 /* : MModule */;
val* var154 /* : MClassType */;
val* var156 /* : MClassType */;
val* var157 /* : MType */;
val* var_arg_mtype /* var arg_mtype: MType */;
val* var158 /* : String */;
val* var160 /* : String */;
val* var161 /* : RuntimeVariable */;
val* var_arg /* var arg: RuntimeVariable */;
val* var162 /* : RuntimeVariable */;
val* var163 /* : nullable RuntimeVariable */;
val* var_ret_var /* var ret_var: nullable RuntimeVariable */;
val* var164 /* : nullable MType */;
val* var166 /* : nullable MType */;
val* var_return_mtype /* var return_mtype: nullable MType */;
short int var167 /* : Bool */;
short int var169 /* : Bool */;
val* var170 /* : MClassType */;
val* var172 /* : MClassType */;
val* var173 /* : MClass */;
val* var175 /* : MClass */;
val* var176 /* : MClassKind */;
val* var178 /* : MClassKind */;
val* var179 /* : Sys */;
val* var180 /* : MClassKind */;
short int var181 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var183 /* : Bool */;
short int var184 /* : Bool */;
val* var185 /* : MClassType */;
val* var187 /* : MClassType */;
short int var188 /* : Bool */;
short int var189 /* : Bool */;
short int var191 /* : Bool */;
short int var192 /* : Bool */;
short int var193 /* : Bool */;
short int var194 /* : Bool */;
short int var196 /* : Bool */;
short int var197 /* : Bool */;
val* var198 /* : AbstractCompiler */;
val* var200 /* : AbstractCompiler */;
val* var201 /* : MModule */;
val* var203 /* : MModule */;
val* var204 /* : MClassType */;
val* var206 /* : MClassType */;
val* var207 /* : MType */;
val* var208 /* : RuntimeVariable */;
val* var209 /* : RuntimeVariable */;
static val* varonce210;
val* var211 /* : String */;
char* var212 /* : CString */;
val* var213 /* : String */;
var_v = p0;
var_ccu = p1;
var_compile_implementation_too = p2;
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
var_mproperty = var;
/* <var_mproperty:MProperty> isa MMethod */
cltype = type_nitc__MMethod.color;
idtype = type_nitc__MMethod.id;
if(cltype >= var_mproperty->type->table_size) {
var3 = 0;
} else {
var3 = var_mproperty->type->type_table[cltype] == idtype;
}
if (unlikely(!var3)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__compiler_ffi, 87);
fatal_exit(1);
}
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
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler (var_v) on <var_v:AbstractCompilerVisitor> */
var9 = var_v->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <var_v:AbstractCompilerVisitor> */
if (unlikely(var9 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1200);
fatal_exit(1);
}
var7 = var9;
RET_LABEL8:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompiler#mainmodule (var7) on <var7:AbstractCompiler> */
var12 = var7->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___mainmodule].val; /* _mainmodule on <var7:AbstractCompiler> */
if (unlikely(var12 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mainmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 531);
fatal_exit(1);
}
var10 = var12;
RET_LABEL11:(void)0;
}
}
var13 = glob_sys;
{
var14 = nitc__nitni_utilities___core__Sys___long_signature(var13);
}
var15 = glob_sys;
{
var16 = nitc__nitni_utilities___core__Sys___internal_call_context(var15);
}
{
var17 = nitc__nitni_utilities___MMethod___build_csignature(var_mproperty, var4, var10, ((val*)NULL), var14, var16);
}
var_full_friendly_csignature = var17;
{
{ /* Inline c_tools#CCompilationUnit#header_decl (var_ccu) on <var_ccu:CCompilationUnit> */
var20 = var_ccu->attrs[COLOR_nitc__c_tools__CCompilationUnit___header_decl].val; /* _header_decl on <var_ccu:CCompilationUnit> */
if (unlikely(var20 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header_decl");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__c_tools, 34);
fatal_exit(1);
}
var18 = var20;
RET_LABEL19:(void)0;
}
}
if (unlikely(varonce==NULL)) {
var21 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce22!=NULL)) {
var23 = varonce22;
} else {
var24 = "extern ";
var25 = core__abstract_text___CString___to_s_full(var24, 7l, 7l);
var23 = var25;
varonce22 = var23;
}
((struct instance_core__NativeArray*)var21)->values[0]=var23;
if (likely(varonce26!=NULL)) {
var27 = varonce26;
} else {
var28 = ";\n";
var29 = core__abstract_text___CString___to_s_full(var28, 2l, 2l);
var27 = var29;
varonce26 = var27;
}
((struct instance_core__NativeArray*)var21)->values[2]=var27;
} else {
var21 = varonce;
varonce = NULL;
}
((struct instance_core__NativeArray*)var21)->values[1]=var_full_friendly_csignature;
{
var30 = ((val*(*)(val* self))(var21->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var21); /* native_to_s on <var21:NativeArray[String]>*/
}
varonce = var21;
{
template___template__Template___add(var18, var30); /* Direct call template#Template#add on <var18:Template>*/
}
var31 = !var_compile_implementation_too;
if (var31){
goto RET_LABEL;
} else {
}
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler (var_v) on <var_v:AbstractCompilerVisitor> */
var34 = var_v->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <var_v:AbstractCompilerVisitor> */
if (unlikely(var34 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1200);
fatal_exit(1);
}
var32 = var34;
RET_LABEL33:(void)0;
}
}
{
var35 = ((val*(*)(val* self))(var32->class->vft[COLOR_nitc__abstract_compiler__AbstractCompiler__new_visitor]))(var32); /* new_visitor on <var32:AbstractCompiler>*/
}
var_nitni_visitor = var35;
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#frame (var_v) on <var_v:AbstractCompilerVisitor> */
var38 = var_v->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___frame].val; /* _frame on <var_v:AbstractCompilerVisitor> */
var36 = var38;
RET_LABEL37:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#frame= (var_nitni_visitor,var36) on <var_nitni_visitor:AbstractCompilerVisitor> */
var_nitni_visitor->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___frame].val = var36; /* _frame on <var_nitni_visitor:AbstractCompilerVisitor> */
RET_LABEL39:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler (var_v) on <var_v:AbstractCompilerVisitor> */
var42 = var_v->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <var_v:AbstractCompilerVisitor> */
if (unlikely(var42 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1200);
fatal_exit(1);
}
var40 = var42;
RET_LABEL41:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompiler#mainmodule (var40) on <var40:AbstractCompiler> */
var45 = var40->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___mainmodule].val; /* _mainmodule on <var40:AbstractCompiler> */
if (unlikely(var45 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mainmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 531);
fatal_exit(1);
}
var43 = var45;
RET_LABEL44:(void)0;
}
}
{
{ /* Inline nitni_callbacks#MExplicitCall#recv_mtype (self) on <self:MExplicitCall> */
var48 = self->attrs[COLOR_nitc__nitni_callbacks__MExplicitCall___recv_mtype].val; /* _recv_mtype on <self:MExplicitCall> */
if (unlikely(var48 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _recv_mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__nitni_callbacks, 168);
fatal_exit(1);
}
var46 = var48;
RET_LABEL47:(void)0;
}
}
{
var49 = nitc___nitc__MProperty___lookup_first_definition(var_mproperty, var43, var46);
}
{
{ /* Inline model#MMethodDef#msignature (var49) on <var49:MPropDef(MMethodDef)> */
var52 = var49->attrs[COLOR_nitc__model__MMethodDef___msignature].val; /* _msignature on <var49:MPropDef(MMethodDef)> */
var50 = var52;
RET_LABEL51:(void)0;
}
}
var_msignature = var50;
{
{ /* Inline nitni_callbacks#MExplicitCall#recv_mtype (self) on <self:MExplicitCall> */
var55 = self->attrs[COLOR_nitc__nitni_callbacks__MExplicitCall___recv_mtype].val; /* _recv_mtype on <self:MExplicitCall> */
if (unlikely(var55 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _recv_mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__nitni_callbacks, 168);
fatal_exit(1);
}
var53 = var55;
RET_LABEL54:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler (var_v) on <var_v:AbstractCompilerVisitor> */
var58 = var_v->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <var_v:AbstractCompilerVisitor> */
if (unlikely(var58 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1200);
fatal_exit(1);
}
var56 = var58;
RET_LABEL57:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompiler#mainmodule (var56) on <var56:AbstractCompiler> */
var61 = var56->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___mainmodule].val; /* _mainmodule on <var56:AbstractCompiler> */
if (unlikely(var61 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mainmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 531);
fatal_exit(1);
}
var59 = var61;
RET_LABEL60:(void)0;
}
}
var62 = glob_sys;
{
var63 = nitc__nitni_utilities___core__Sys___long_signature(var62);
}
var64 = glob_sys;
{
var65 = nitc__nitni_utilities___core__Sys___internal_call_context(var64);
}
{
var66 = nitc__nitni_utilities___MMethod___build_csignature(var_mproperty, var53, var59, ((val*)NULL), var63, var65);
}
var_csignature_blind = var66;
if (unlikely(varonce67==NULL)) {
var68 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce69!=NULL)) {
var70 = varonce69;
} else {
var71 = "/* nitni callback for ";
var72 = core__abstract_text___CString___to_s_full(var71, 22l, 22l);
var70 = var72;
varonce69 = var70;
}
((struct instance_core__NativeArray*)var68)->values[0]=var70;
if (likely(varonce73!=NULL)) {
var74 = varonce73;
} else {
var75 = " */";
var76 = core__abstract_text___CString___to_s_full(var75, 3l, 3l);
var74 = var76;
varonce73 = var74;
}
((struct instance_core__NativeArray*)var68)->values[2]=var74;
} else {
var68 = varonce67;
varonce67 = NULL;
}
{
var77 = nitc___nitc__MProperty___nitc__model_base__MEntity__full_name(var_mproperty);
}
((struct instance_core__NativeArray*)var68)->values[1]=var77;
{
var78 = ((val*(*)(val* self))(var68->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var68); /* native_to_s on <var68:NativeArray[String]>*/
}
varonce67 = var68;
{
nitc___nitc__AbstractCompilerVisitor___add_decl(var_nitni_visitor, var78); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_nitni_visitor:AbstractCompilerVisitor>*/
}
if (unlikely(varonce79==NULL)) {
var80 = NEW_core__NativeArray(2l, &type_core__NativeArray__core__String);
if (likely(varonce81!=NULL)) {
var82 = varonce81;
} else {
var83 = " {";
var84 = core__abstract_text___CString___to_s_full(var83, 2l, 2l);
var82 = var84;
varonce81 = var82;
}
((struct instance_core__NativeArray*)var80)->values[1]=var82;
} else {
var80 = varonce79;
varonce79 = NULL;
}
((struct instance_core__NativeArray*)var80)->values[0]=var_csignature_blind;
{
var85 = ((val*(*)(val* self))(var80->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var80); /* native_to_s on <var80:NativeArray[String]>*/
}
varonce79 = var80;
{
nitc___nitc__AbstractCompilerVisitor___add_decl(var_nitni_visitor, var85); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_nitni_visitor:AbstractCompilerVisitor>*/
}
var86 = NEW_core__Array(&type_core__Array__nitc__RuntimeVariable);
{
core___core__Array___core__kernel__Object__init(var86); /* Direct call array#Array#init on <var86:Array[RuntimeVariable]>*/
}
var_vars = var86;
{
{ /* Inline nitni_callbacks#MExplicitCall#recv_mtype (self) on <self:MExplicitCall> */
var89 = self->attrs[COLOR_nitc__nitni_callbacks__MExplicitCall___recv_mtype].val; /* _recv_mtype on <self:MExplicitCall> */
if (unlikely(var89 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _recv_mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__nitni_callbacks, 168);
fatal_exit(1);
}
var87 = var89;
RET_LABEL88:(void)0;
}
}
var_mtype = var87;
var_recv_var = ((val*)NULL);
{
{ /* Inline model#MMethod#is_init (var_mproperty) on <var_mproperty:MProperty(MMethod)> */
var92 = var_mproperty->attrs[COLOR_nitc__model__MMethod___is_init].s; /* _is_init on <var_mproperty:MProperty(MMethod)> */
var90 = var92;
RET_LABEL91:(void)0;
}
}
if (var90){
{
{ /* Inline nitni_callbacks#MExplicitCall#recv_mtype (self) on <self:MExplicitCall> */
var95 = self->attrs[COLOR_nitc__nitni_callbacks__MExplicitCall___recv_mtype].val; /* _recv_mtype on <self:MExplicitCall> */
if (unlikely(var95 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _recv_mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__nitni_callbacks, 168);
fatal_exit(1);
}
var93 = var95;
RET_LABEL94:(void)0;
}
}
var_recv_mtype = var93;
{
var96 = nitc___nitc__AbstractCompilerVisitor___init_instance_or_extern(var_nitni_visitor, var_recv_mtype);
}
var_recv_var = var96;
if (unlikely(varonce97==NULL)) {
var98 = NEW_core__NativeArray(4l, &type_core__NativeArray__core__String);
if (likely(varonce99!=NULL)) {
var100 = varonce99;
} else {
var101 = " self /* var self: ";
var102 = core__abstract_text___CString___to_s_full(var101, 19l, 19l);
var100 = var102;
varonce99 = var100;
}
((struct instance_core__NativeArray*)var98)->values[1]=var100;
if (likely(varonce103!=NULL)) {
var104 = varonce103;
} else {
var105 = " */;";
var106 = core__abstract_text___CString___to_s_full(var105, 4l, 4l);
var104 = var106;
varonce103 = var104;
}
((struct instance_core__NativeArray*)var98)->values[3]=var104;
} else {
var98 = varonce97;
varonce97 = NULL;
}
{
var107 = ((val*(*)(val* self))(var_mtype->class->vft[COLOR_nitc__abstract_compiler__MType__ctype]))(var_mtype); /* ctype on <var_mtype:MType>*/
}
((struct instance_core__NativeArray*)var98)->values[0]=var107;
{
var108 = ((val*(*)(val* self))(var_mtype->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_mtype); /* to_s on <var_mtype:MType>*/
}
((struct instance_core__NativeArray*)var98)->values[2]=var108;
{
var109 = ((val*(*)(val* self))(var98->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var98); /* native_to_s on <var98:NativeArray[String]>*/
}
varonce97 = var98;
{
nitc___nitc__AbstractCompilerVisitor___add(var_nitni_visitor, var109); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_nitni_visitor:AbstractCompilerVisitor>*/
}
if (unlikely(varonce110==NULL)) {
var111 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce112!=NULL)) {
var113 = varonce112;
} else {
var114 = "self = ";
var115 = core__abstract_text___CString___to_s_full(var114, 7l, 7l);
var113 = var115;
varonce112 = var113;
}
((struct instance_core__NativeArray*)var111)->values[0]=var113;
if (likely(varonce116!=NULL)) {
var117 = varonce116;
} else {
var118 = ";";
var119 = core__abstract_text___CString___to_s_full(var118, 1l, 1l);
var117 = var119;
varonce116 = var117;
}
((struct instance_core__NativeArray*)var111)->values[2]=var117;
} else {
var111 = varonce110;
varonce110 = NULL;
}
{
var120 = ((val*(*)(val* self))(var_recv_var->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_recv_var); /* to_s on <var_recv_var:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var111)->values[1]=var120;
{
var121 = ((val*(*)(val* self))(var111->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var111); /* native_to_s on <var111:NativeArray[String]>*/
}
varonce110 = var111;
{
nitc___nitc__AbstractCompilerVisitor___add(var_nitni_visitor, var121); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_nitni_visitor:AbstractCompilerVisitor>*/
}
} else {
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler (var_v) on <var_v:AbstractCompilerVisitor> */
var124 = var_v->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <var_v:AbstractCompilerVisitor> */
if (unlikely(var124 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1200);
fatal_exit(1);
}
var122 = var124;
RET_LABEL123:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompiler#mainmodule (var122) on <var122:AbstractCompiler> */
var127 = var122->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___mainmodule].val; /* _mainmodule on <var122:AbstractCompiler> */
if (unlikely(var127 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mainmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 531);
fatal_exit(1);
}
var125 = var127;
RET_LABEL126:(void)0;
}
}
{
{ /* Inline nitni_callbacks#MExplicitCall#recv_mtype (self) on <self:MExplicitCall> */
var130 = self->attrs[COLOR_nitc__nitni_callbacks__MExplicitCall___recv_mtype].val; /* _recv_mtype on <self:MExplicitCall> */
if (unlikely(var130 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _recv_mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__nitni_callbacks, 168);
fatal_exit(1);
}
var128 = var130;
RET_LABEL129:(void)0;
}
}
{
var131 = ((val*(*)(val* self, val* p0, val* p1))(var_mtype->class->vft[COLOR_nitc__model__MType__anchor_to]))(var_mtype, var125, var128); /* anchor_to on <var_mtype:MType>*/
}
var_mtype = var131;
if (likely(varonce132!=NULL)) {
var133 = varonce132;
} else {
var134 = "self";
var135 = core__abstract_text___CString___to_s_full(var134, 4l, 4l);
var133 = var135;
varonce132 = var133;
}
{
var136 = nitc__light___AbstractCompilerVisitor___var_from_c(var_nitni_visitor, var133, var_mtype);
}
var_recv_var = var136;
{
var137 = ((val*(*)(val* self, val* p0, val* p1))(var_nitni_visitor->class->vft[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor__box_extern]))(var_nitni_visitor, var_recv_var, var_mtype); /* box_extern on <var_nitni_visitor:AbstractCompilerVisitor>*/
}
var_recv_var = var137;
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_vars, var_recv_var); /* Direct call array#Array#add on <var_vars:Array[RuntimeVariable]>*/
}
if (var_msignature == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__compiler_ffi, 120);
fatal_exit(1);
} else {
{ /* Inline model#MSignature#mparameters (var_msignature) on <var_msignature:nullable MSignature> */
if (unlikely(var_msignature == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1879);
fatal_exit(1);
}
var140 = var_msignature->attrs[COLOR_nitc__model__MSignature___mparameters].val; /* _mparameters on <var_msignature:nullable MSignature> */
if (unlikely(var140 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mparameters");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1879);
fatal_exit(1);
}
var138 = var140;
RET_LABEL139:(void)0;
}
}
var_ = var138;
{
var141 = core___core__AbstractArrayRead___core__abstract_collection__Collection__iterator(var_);
}
var_142 = var141;
for(;;) {
{
var143 = ((short int(*)(val* self))((((long)var_142&3)?class_info[((long)var_142&3)]:var_142->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_142); /* is_ok on <var_142:IndexedIterator[MParameter]>*/
}
if (var143){
} else {
goto BREAK_label;
}
{
var144 = ((val*(*)(val* self))((((long)var_142&3)?class_info[((long)var_142&3)]:var_142->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_142); /* item on <var_142:IndexedIterator[MParameter]>*/
}
var_p = var144;
{
{ /* Inline model#MParameter#mtype (var_p) on <var_p:MParameter> */
var147 = var_p->attrs[COLOR_nitc__model__MParameter___mtype].val; /* _mtype on <var_p:MParameter> */
if (unlikely(var147 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1996);
fatal_exit(1);
}
var145 = var147;
RET_LABEL146:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler (var_v) on <var_v:AbstractCompilerVisitor> */
var150 = var_v->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <var_v:AbstractCompilerVisitor> */
if (unlikely(var150 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1200);
fatal_exit(1);
}
var148 = var150;
RET_LABEL149:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompiler#mainmodule (var148) on <var148:AbstractCompiler> */
var153 = var148->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___mainmodule].val; /* _mainmodule on <var148:AbstractCompiler> */
if (unlikely(var153 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mainmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 531);
fatal_exit(1);
}
var151 = var153;
RET_LABEL152:(void)0;
}
}
{
{ /* Inline nitni_callbacks#MExplicitCall#recv_mtype (self) on <self:MExplicitCall> */
var156 = self->attrs[COLOR_nitc__nitni_callbacks__MExplicitCall___recv_mtype].val; /* _recv_mtype on <self:MExplicitCall> */
if (unlikely(var156 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _recv_mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__nitni_callbacks, 168);
fatal_exit(1);
}
var154 = var156;
RET_LABEL155:(void)0;
}
}
{
var157 = ((val*(*)(val* self, val* p0, val* p1))(var145->class->vft[COLOR_nitc__model__MType__anchor_to]))(var145, var151, var154); /* anchor_to on <var145:MType>*/
}
var_arg_mtype = var157;
{
{ /* Inline model#MParameter#name (var_p) on <var_p:MParameter> */
var160 = var_p->attrs[COLOR_nitc__model__MParameter___name].val; /* _name on <var_p:MParameter> */
if (unlikely(var160 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1993);
fatal_exit(1);
}
var158 = var160;
RET_LABEL159:(void)0;
}
}
{
var161 = nitc__light___AbstractCompilerVisitor___var_from_c(var_nitni_visitor, var158, var_arg_mtype);
}
var_arg = var161;
{
var162 = ((val*(*)(val* self, val* p0, val* p1))(var_nitni_visitor->class->vft[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor__box_extern]))(var_nitni_visitor, var_arg, var_arg_mtype); /* box_extern on <var_nitni_visitor:AbstractCompilerVisitor>*/
}
var_arg = var162;
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_vars, var_arg); /* Direct call array#Array#add on <var_vars:Array[RuntimeVariable]>*/
}
{
((void(*)(val* self))((((long)var_142&3)?class_info[((long)var_142&3)]:var_142->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_142); /* next on <var_142:IndexedIterator[MParameter]>*/
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_142&3)?class_info[((long)var_142&3)]:var_142->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_142); /* finish on <var_142:IndexedIterator[MParameter]>*/
}
{
var163 = ((val*(*)(val* self, val* p0, val* p1))(var_nitni_visitor->class->vft[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor__send]))(var_nitni_visitor, var_mproperty, var_vars); /* send on <var_nitni_visitor:AbstractCompilerVisitor>*/
}
var_ret_var = var163;
if (var_msignature == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__compiler_ffi, 129);
fatal_exit(1);
} else {
{ /* Inline model#MSignature#return_mtype (var_msignature) on <var_msignature:nullable MSignature> */
if (unlikely(var_msignature == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1891);
fatal_exit(1);
}
var166 = var_msignature->attrs[COLOR_nitc__model__MSignature___return_mtype].val; /* _return_mtype on <var_msignature:nullable MSignature> */
var164 = var166;
RET_LABEL165:(void)0;
}
}
var_return_mtype = var164;
{
{ /* Inline model#MMethod#is_init (var_mproperty) on <var_mproperty:MProperty(MMethod)> */
var169 = var_mproperty->attrs[COLOR_nitc__model__MMethod___is_init].s; /* _is_init on <var_mproperty:MProperty(MMethod)> */
var167 = var169;
RET_LABEL168:(void)0;
}
}
if (var167){
{
{ /* Inline nitni_callbacks#MExplicitCall#recv_mtype (self) on <self:MExplicitCall> */
var172 = self->attrs[COLOR_nitc__nitni_callbacks__MExplicitCall___recv_mtype].val; /* _recv_mtype on <self:MExplicitCall> */
if (unlikely(var172 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _recv_mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__nitni_callbacks, 168);
fatal_exit(1);
}
var170 = var172;
RET_LABEL171:(void)0;
}
}
{
{ /* Inline model#MClassType#mclass (var170) on <var170:MClassType> */
var175 = var170->attrs[COLOR_nitc__model__MClassType___mclass].val; /* _mclass on <var170:MClassType> */
if (unlikely(var175 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1197);
fatal_exit(1);
}
var173 = var175;
RET_LABEL174:(void)0;
}
}
{
{ /* Inline model#MClass#kind (var173) on <var173:MClass> */
var178 = var173->attrs[COLOR_nitc__model__MClass___kind].val; /* _kind on <var173:MClass> */
if (unlikely(var178 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _kind");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 472);
fatal_exit(1);
}
var176 = var178;
RET_LABEL177:(void)0;
}
}
var179 = glob_sys;
{
var180 = nitc__model___core__Sys___extern_kind(var179);
}
{
{ /* Inline kernel#Object#!= (var176,var180) on <var176:MClassKind> */
var_other = var180;
{
var183 = ((short int(*)(val* self, val* p0))(var176->class->vft[COLOR_core__kernel__Object___61d_61d]))(var176, var_other); /* == on <var176:MClassKind>*/
}
var184 = !var183;
var181 = var184;
goto RET_LABEL182;
RET_LABEL182:(void)0;
}
}
if (var181){
var_ret_var = var_recv_var;
} else {
}
{
{ /* Inline nitni_callbacks#MExplicitCall#recv_mtype (self) on <self:MExplicitCall> */
var187 = self->attrs[COLOR_nitc__nitni_callbacks__MExplicitCall___recv_mtype].val; /* _recv_mtype on <self:MExplicitCall> */
if (unlikely(var187 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _recv_mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__nitni_callbacks, 168);
fatal_exit(1);
}
var185 = var187;
RET_LABEL186:(void)0;
}
}
var_return_mtype = var185;
} else {
}
if (var_return_mtype == NULL) {
var188 = 0; /* is null */
} else {
var188 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_return_mtype,((val*)NULL)) on <var_return_mtype:nullable MType> */
var_other = ((val*)NULL);
{
var191 = ((short int(*)(val* self, val* p0))(var_return_mtype->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_return_mtype, var_other); /* == on <var_return_mtype:nullable MType(MType)>*/
}
var192 = !var191;
var189 = var192;
goto RET_LABEL190;
RET_LABEL190:(void)0;
}
var188 = var189;
}
if (var188){
if (var_ret_var == NULL) {
var193 = 0; /* is null */
} else {
var193 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_ret_var,((val*)NULL)) on <var_ret_var:nullable RuntimeVariable> */
var_other = ((val*)NULL);
{
var196 = ((short int(*)(val* self, val* p0))(var_ret_var->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_ret_var, var_other); /* == on <var_ret_var:nullable RuntimeVariable(RuntimeVariable)>*/
}
var197 = !var196;
var194 = var197;
goto RET_LABEL195;
RET_LABEL195:(void)0;
}
var193 = var194;
}
if (unlikely(!var193)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__compiler_ffi, 135);
fatal_exit(1);
}
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler (var_v) on <var_v:AbstractCompilerVisitor> */
var200 = var_v->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <var_v:AbstractCompilerVisitor> */
if (unlikely(var200 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1200);
fatal_exit(1);
}
var198 = var200;
RET_LABEL199:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompiler#mainmodule (var198) on <var198:AbstractCompiler> */
var203 = var198->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___mainmodule].val; /* _mainmodule on <var198:AbstractCompiler> */
if (unlikely(var203 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mainmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 531);
fatal_exit(1);
}
var201 = var203;
RET_LABEL202:(void)0;
}
}
{
{ /* Inline nitni_callbacks#MExplicitCall#recv_mtype (self) on <self:MExplicitCall> */
var206 = self->attrs[COLOR_nitc__nitni_callbacks__MExplicitCall___recv_mtype].val; /* _recv_mtype on <self:MExplicitCall> */
if (unlikely(var206 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _recv_mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__nitni_callbacks, 168);
fatal_exit(1);
}
var204 = var206;
RET_LABEL205:(void)0;
}
}
{
var207 = ((val*(*)(val* self, val* p0, val* p1))(var_return_mtype->class->vft[COLOR_nitc__model__MType__anchor_to]))(var_return_mtype, var201, var204); /* anchor_to on <var_return_mtype:nullable MType(MType)>*/
}
var_return_mtype = var207;
{
var208 = ((val*(*)(val* self, val* p0, val* p1))(var_nitni_visitor->class->vft[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor__autobox]))(var_nitni_visitor, var_ret_var, var_return_mtype); /* autobox on <var_nitni_visitor:AbstractCompilerVisitor>*/
}
var_ret_var = var208;
{
var209 = ((val*(*)(val* self, val* p0, val* p1))(var_nitni_visitor->class->vft[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor__unbox_extern]))(var_nitni_visitor, var_ret_var, var_return_mtype); /* unbox_extern on <var_nitni_visitor:AbstractCompilerVisitor>*/
}
var_ret_var = var209;
{
nitc__light___AbstractCompilerVisitor___ret_to_c(var_nitni_visitor, var_ret_var, var_return_mtype); /* Direct call light#AbstractCompilerVisitor#ret_to_c on <var_nitni_visitor:AbstractCompilerVisitor>*/
}
} else {
}
if (likely(varonce210!=NULL)) {
var211 = varonce210;
} else {
var212 = "}";
var213 = core__abstract_text___CString___to_s_full(var212, 1l, 1l);
var211 = var213;
varonce210 = var211;
}
{
nitc___nitc__AbstractCompilerVisitor___add(var_nitni_visitor, var211); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_nitni_visitor:AbstractCompilerVisitor>*/
}
RET_LABEL:;
}
/* method compiler_ffi#MType#compile_extern_helper_functions for (self: MType, AbstractCompilerVisitor, CCompilationUnit, Bool) */
void nitc__compiler_ffi___MType___compile_extern_helper_functions(val* self, val* p0, val* p1, short int p2) {
val* var_v /* var v: AbstractCompilerVisitor */;
val* var_ccu /* var ccu: CCompilationUnit */;
short int var_compile_implementation_too /* var compile_implementation_too: Bool */;
val* var /* : Sys */;
val* var1 /* : FromCCallContext */;
val* var_call_context /* var call_context: FromCCallContext */;
val* var2 /* : Template */;
val* var4 /* : Template */;
val* var5 /* : NativeArray[String] */;
static val* varonce;
static val* varonce6;
val* var7 /* : String */;
char* var8 /* : CString */;
val* var9 /* : String */;
static val* varonce10;
val* var11 /* : String */;
char* var12 /* : CString */;
val* var13 /* : String */;
val* var14 /* : String */;
val* var15 /* : String */;
val* var16 /* : Template */;
val* var18 /* : Template */;
val* var20 /* : NativeArray[String] */;
static val* varonce19;
static val* varonce21;
val* var22 /* : String */;
char* var23 /* : CString */;
val* var24 /* : String */;
static val* varonce25;
val* var26 /* : String */;
char* var27 /* : CString */;
val* var28 /* : String */;
static val* varonce29;
val* var30 /* : String */;
char* var31 /* : CString */;
val* var32 /* : String */;
val* var33 /* : String */;
val* var34 /* : String */;
val* var35 /* : String */;
val* var36 /* : Template */;
val* var38 /* : Template */;
static val* varonce39;
val* var40 /* : String */;
char* var41 /* : CString */;
val* var42 /* : String */;
val* var43 /* : Template */;
val* var45 /* : Template */;
val* var47 /* : NativeArray[String] */;
static val* varonce46;
static val* varonce48;
val* var49 /* : String */;
char* var50 /* : CString */;
val* var51 /* : String */;
static val* varonce52;
val* var53 /* : String */;
char* var54 /* : CString */;
val* var55 /* : String */;
val* var56 /* : String */;
val* var57 /* : String */;
val* var58 /* : Template */;
val* var60 /* : Template */;
val* var62 /* : NativeArray[String] */;
static val* varonce61;
static val* varonce63;
val* var64 /* : String */;
char* var65 /* : CString */;
val* var66 /* : String */;
static val* varonce67;
val* var68 /* : String */;
char* var69 /* : CString */;
val* var70 /* : String */;
static val* varonce71;
val* var72 /* : String */;
char* var73 /* : CString */;
val* var74 /* : String */;
val* var75 /* : String */;
val* var76 /* : String */;
val* var77 /* : String */;
val* var78 /* : Template */;
val* var80 /* : Template */;
static val* varonce81;
val* var82 /* : String */;
char* var83 /* : CString */;
val* var84 /* : String */;
var_v = p0;
var_ccu = p1;
var_compile_implementation_too = p2;
var = glob_sys;
{
var1 = nitc__light_c___core__Sys___from_c_call_context(var);
}
var_call_context = var1;
{
{ /* Inline c_tools#CCompilationUnit#header_decl (var_ccu) on <var_ccu:CCompilationUnit> */
var4 = var_ccu->attrs[COLOR_nitc__c_tools__CCompilationUnit___header_decl].val; /* _header_decl on <var_ccu:CCompilationUnit> */
if (unlikely(var4 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header_decl");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__c_tools, 34);
fatal_exit(1);
}
var2 = var4;
RET_LABEL3:(void)0;
}
}
if (unlikely(varonce==NULL)) {
var5 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce6!=NULL)) {
var7 = varonce6;
} else {
var8 = "#ifndef ";
var9 = core__abstract_text___CString___to_s_full(var8, 8l, 8l);
var7 = var9;
varonce6 = var7;
}
((struct instance_core__NativeArray*)var5)->values[0]=var7;
if (likely(varonce10!=NULL)) {
var11 = varonce10;
} else {
var12 = "_incr_ref\n";
var13 = core__abstract_text___CString___to_s_full(var12, 10l, 10l);
var11 = var13;
varonce10 = var11;
}
((struct instance_core__NativeArray*)var5)->values[2]=var11;
} else {
var5 = varonce;
varonce = NULL;
}
{
var14 = ((val*(*)(val* self))(self->class->vft[COLOR_nitc__nitni_base__MType__mangled_cname]))(self); /* mangled_cname on <self:MType>*/
}
((struct instance_core__NativeArray*)var5)->values[1]=var14;
{
var15 = ((val*(*)(val* self))(var5->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var5); /* native_to_s on <var5:NativeArray[String]>*/
}
varonce = var5;
{
template___template__Template___add(var2, var15); /* Direct call template#Template#add on <var2:Template>*/
}
{
{ /* Inline c_tools#CCompilationUnit#header_decl (var_ccu) on <var_ccu:CCompilationUnit> */
var18 = var_ccu->attrs[COLOR_nitc__c_tools__CCompilationUnit___header_decl].val; /* _header_decl on <var_ccu:CCompilationUnit> */
if (unlikely(var18 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header_decl");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__c_tools, 34);
fatal_exit(1);
}
var16 = var18;
RET_LABEL17:(void)0;
}
}
if (unlikely(varonce19==NULL)) {
var20 = NEW_core__NativeArray(5l, &type_core__NativeArray__core__String);
if (likely(varonce21!=NULL)) {
var22 = varonce21;
} else {
var23 = "\t#define ";
var24 = core__abstract_text___CString___to_s_full(var23, 9l, 9l);
var22 = var24;
varonce21 = var22;
}
((struct instance_core__NativeArray*)var20)->values[0]=var22;
if (likely(varonce25!=NULL)) {
var26 = varonce25;
} else {
var27 = "_incr_ref(from) nitni_global_ref_incr((";
var28 = core__abstract_text___CString___to_s_full(var27, 39l, 39l);
var26 = var28;
varonce25 = var26;
}
((struct instance_core__NativeArray*)var20)->values[2]=var26;
if (likely(varonce29!=NULL)) {
var30 = varonce29;
} else {
var31 = ")(from))\n";
var32 = core__abstract_text___CString___to_s_full(var31, 9l, 9l);
var30 = var32;
varonce29 = var30;
}
((struct instance_core__NativeArray*)var20)->values[4]=var30;
} else {
var20 = varonce19;
varonce19 = NULL;
}
{
var33 = ((val*(*)(val* self))(self->class->vft[COLOR_nitc__nitni_base__MType__mangled_cname]))(self); /* mangled_cname on <self:MType>*/
}
((struct instance_core__NativeArray*)var20)->values[1]=var33;
{
var34 = nitc___nitc__FromCCallContext___nitc__nitni_utilities__CallContext__name_mtype(var_call_context, self);
}
((struct instance_core__NativeArray*)var20)->values[3]=var34;
{
var35 = ((val*(*)(val* self))(var20->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var20); /* native_to_s on <var20:NativeArray[String]>*/
}
varonce19 = var20;
{
template___template__Template___add(var16, var35); /* Direct call template#Template#add on <var16:Template>*/
}
{
{ /* Inline c_tools#CCompilationUnit#header_decl (var_ccu) on <var_ccu:CCompilationUnit> */
var38 = var_ccu->attrs[COLOR_nitc__c_tools__CCompilationUnit___header_decl].val; /* _header_decl on <var_ccu:CCompilationUnit> */
if (unlikely(var38 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header_decl");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__c_tools, 34);
fatal_exit(1);
}
var36 = var38;
RET_LABEL37:(void)0;
}
}
if (likely(varonce39!=NULL)) {
var40 = varonce39;
} else {
var41 = "#endif\n";
var42 = core__abstract_text___CString___to_s_full(var41, 7l, 7l);
var40 = var42;
varonce39 = var40;
}
{
template___template__Template___add(var36, var40); /* Direct call template#Template#add on <var36:Template>*/
}
{
{ /* Inline c_tools#CCompilationUnit#header_decl (var_ccu) on <var_ccu:CCompilationUnit> */
var45 = var_ccu->attrs[COLOR_nitc__c_tools__CCompilationUnit___header_decl].val; /* _header_decl on <var_ccu:CCompilationUnit> */
if (unlikely(var45 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header_decl");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__c_tools, 34);
fatal_exit(1);
}
var43 = var45;
RET_LABEL44:(void)0;
}
}
if (unlikely(varonce46==NULL)) {
var47 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce48!=NULL)) {
var49 = varonce48;
} else {
var50 = "#ifndef ";
var51 = core__abstract_text___CString___to_s_full(var50, 8l, 8l);
var49 = var51;
varonce48 = var49;
}
((struct instance_core__NativeArray*)var47)->values[0]=var49;
if (likely(varonce52!=NULL)) {
var53 = varonce52;
} else {
var54 = "_decr_ref\n";
var55 = core__abstract_text___CString___to_s_full(var54, 10l, 10l);
var53 = var55;
varonce52 = var53;
}
((struct instance_core__NativeArray*)var47)->values[2]=var53;
} else {
var47 = varonce46;
varonce46 = NULL;
}
{
var56 = ((val*(*)(val* self))(self->class->vft[COLOR_nitc__nitni_base__MType__mangled_cname]))(self); /* mangled_cname on <self:MType>*/
}
((struct instance_core__NativeArray*)var47)->values[1]=var56;
{
var57 = ((val*(*)(val* self))(var47->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var47); /* native_to_s on <var47:NativeArray[String]>*/
}
varonce46 = var47;
{
template___template__Template___add(var43, var57); /* Direct call template#Template#add on <var43:Template>*/
}
{
{ /* Inline c_tools#CCompilationUnit#header_decl (var_ccu) on <var_ccu:CCompilationUnit> */
var60 = var_ccu->attrs[COLOR_nitc__c_tools__CCompilationUnit___header_decl].val; /* _header_decl on <var_ccu:CCompilationUnit> */
if (unlikely(var60 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header_decl");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__c_tools, 34);
fatal_exit(1);
}
var58 = var60;
RET_LABEL59:(void)0;
}
}
if (unlikely(varonce61==NULL)) {
var62 = NEW_core__NativeArray(5l, &type_core__NativeArray__core__String);
if (likely(varonce63!=NULL)) {
var64 = varonce63;
} else {
var65 = "\t#define ";
var66 = core__abstract_text___CString___to_s_full(var65, 9l, 9l);
var64 = var66;
varonce63 = var64;
}
((struct instance_core__NativeArray*)var62)->values[0]=var64;
if (likely(varonce67!=NULL)) {
var68 = varonce67;
} else {
var69 = "_decr_ref(from) nitni_global_ref_decr((";
var70 = core__abstract_text___CString___to_s_full(var69, 39l, 39l);
var68 = var70;
varonce67 = var68;
}
((struct instance_core__NativeArray*)var62)->values[2]=var68;
if (likely(varonce71!=NULL)) {
var72 = varonce71;
} else {
var73 = ")(from))\n";
var74 = core__abstract_text___CString___to_s_full(var73, 9l, 9l);
var72 = var74;
varonce71 = var72;
}
((struct instance_core__NativeArray*)var62)->values[4]=var72;
} else {
var62 = varonce61;
varonce61 = NULL;
}
{
var75 = ((val*(*)(val* self))(self->class->vft[COLOR_nitc__nitni_base__MType__mangled_cname]))(self); /* mangled_cname on <self:MType>*/
}
((struct instance_core__NativeArray*)var62)->values[1]=var75;
{
var76 = nitc___nitc__FromCCallContext___nitc__nitni_utilities__CallContext__name_mtype(var_call_context, self);
}
((struct instance_core__NativeArray*)var62)->values[3]=var76;
{
var77 = ((val*(*)(val* self))(var62->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var62); /* native_to_s on <var62:NativeArray[String]>*/
}
varonce61 = var62;
{
template___template__Template___add(var58, var77); /* Direct call template#Template#add on <var58:Template>*/
}
{
{ /* Inline c_tools#CCompilationUnit#header_decl (var_ccu) on <var_ccu:CCompilationUnit> */
var80 = var_ccu->attrs[COLOR_nitc__c_tools__CCompilationUnit___header_decl].val; /* _header_decl on <var_ccu:CCompilationUnit> */
if (unlikely(var80 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header_decl");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__c_tools, 34);
fatal_exit(1);
}
var78 = var80;
RET_LABEL79:(void)0;
}
}
if (likely(varonce81!=NULL)) {
var82 = varonce81;
} else {
var83 = "#endif\n";
var84 = core__abstract_text___CString___to_s_full(var83, 7l, 7l);
var82 = var84;
varonce81 = var82;
}
{
template___template__Template___add(var78, var82); /* Direct call template#Template#add on <var78:Template>*/
}
RET_LABEL:;
}
/* method compiler_ffi#MNullableType#compile_extern_helper_functions for (self: MNullableType, AbstractCompilerVisitor, CCompilationUnit, Bool) */
void nitc__compiler_ffi___MNullableType___MType__compile_extern_helper_functions(val* self, val* p0, val* p1, short int p2) {
val* var_v /* var v: AbstractCompilerVisitor */;
val* var_ccu /* var ccu: CCompilationUnit */;
short int var_compile_implementation_too /* var compile_implementation_too: Bool */;
val* var /* : NativeArray[String] */;
static val* varonce;
static val* varonce1;
val* var2 /* : String */;
char* var3 /* : CString */;
val* var4 /* : String */;
val* var5 /* : MType */;
val* var7 /* : MType */;
val* var8 /* : String */;
val* var9 /* : String */;
val* var_base_cname /* var base_cname: String */;
val* var11 /* : NativeArray[String] */;
static val* varonce10;
static val* varonce12;
val* var13 /* : String */;
char* var14 /* : CString */;
val* var15 /* : String */;
val* var16 /* : String */;
val* var_full_cname /* var full_cname: String */;
val* var18 /* : NativeArray[String] */;
static val* varonce17;
static val* varonce19;
val* var20 /* : String */;
char* var21 /* : CString */;
val* var22 /* : String */;
static val* varonce23;
val* var24 /* : String */;
char* var25 /* : CString */;
val* var26 /* : String */;
val* var27 /* : String */;
val* var28 /* : String */;
val* var_full_friendly_csignature /* var full_friendly_csignature: String */;
val* var29 /* : Template */;
val* var31 /* : Template */;
val* var33 /* : NativeArray[String] */;
static val* varonce32;
static val* varonce34;
val* var35 /* : String */;
char* var36 /* : CString */;
val* var37 /* : String */;
static val* varonce38;
val* var39 /* : String */;
char* var40 /* : CString */;
val* var41 /* : String */;
val* var42 /* : String */;
val* var43 /* : Template */;
val* var45 /* : Template */;
val* var47 /* : NativeArray[String] */;
static val* varonce46;
static val* varonce48;
val* var49 /* : String */;
char* var50 /* : CString */;
val* var51 /* : String */;
static val* varonce52;
val* var53 /* : String */;
char* var54 /* : CString */;
val* var55 /* : String */;
static val* varonce56;
val* var57 /* : String */;
char* var58 /* : CString */;
val* var59 /* : String */;
val* var60 /* : String */;
short int var61 /* : Bool */;
val* var62 /* : AbstractCompiler */;
val* var64 /* : AbstractCompiler */;
val* var65 /* : Array[MNullableType] */;
val* var67 /* : Array[MNullableType] */;
short int var68 /* : Bool */;
val* var69 /* : AbstractCompiler */;
val* var71 /* : AbstractCompiler */;
val* var72 /* : Array[MNullableType] */;
val* var74 /* : Array[MNullableType] */;
val* var75 /* : AbstractCompiler */;
val* var77 /* : AbstractCompiler */;
val* var78 /* : AbstractCompilerVisitor */;
val* var_nitni_visitor /* var nitni_visitor: AbstractCompilerVisitor */;
val* var79 /* : nullable StaticFrame */;
val* var81 /* : nullable StaticFrame */;
val* var84 /* : NativeArray[String] */;
static val* varonce83;
static val* varonce85;
val* var86 /* : String */;
char* var87 /* : CString */;
val* var88 /* : String */;
static val* varonce89;
val* var90 /* : String */;
char* var91 /* : CString */;
val* var92 /* : String */;
val* var93 /* : String */;
val* var94 /* : String */;
val* var_full_internal_csignature /* var full_internal_csignature: String */;
val* var96 /* : NativeArray[String] */;
static val* varonce95;
static val* varonce97;
val* var98 /* : String */;
char* var99 /* : CString */;
val* var100 /* : String */;
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
static val* varonce118;
val* var119 /* : String */;
char* var120 /* : CString */;
val* var121 /* : String */;
var_v = p0;
var_ccu = p1;
var_compile_implementation_too = p2;
{
((void(*)(val* self, val* p0, val* p1, short int p2))(self->class->vft[COLOR_nitc__compiler_ffi___MNullableType___MType__compile_extern_helper_functions]))(self, p0, p1, p2); /* compile_extern_helper_functions on <self:MNullableType>*/
}
if (unlikely(varonce==NULL)) {
var = NEW_core__NativeArray(2l, &type_core__NativeArray__core__String);
if (likely(varonce1!=NULL)) {
var2 = varonce1;
} else {
var3 = "null_";
var4 = core__abstract_text___CString___to_s_full(var3, 5l, 5l);
var2 = var4;
varonce1 = var2;
}
((struct instance_core__NativeArray*)var)->values[0]=var2;
} else {
var = varonce;
varonce = NULL;
}
{
{ /* Inline model#MProxyType#mtype (self) on <self:MNullableType> */
var7 = self->attrs[COLOR_nitc__model__MProxyType___mtype].val; /* _mtype on <self:MNullableType> */
if (unlikely(var7 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1689);
fatal_exit(1);
}
var5 = var7;
RET_LABEL6:(void)0;
}
}
{
var8 = ((val*(*)(val* self))(var5->class->vft[COLOR_nitc__nitni_base__MType__mangled_cname]))(var5); /* mangled_cname on <var5:MType>*/
}
((struct instance_core__NativeArray*)var)->values[1]=var8;
{
var9 = ((val*(*)(val* self))(var->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var); /* native_to_s on <var:NativeArray[String]>*/
}
varonce = var;
var_base_cname = var9;
if (unlikely(varonce10==NULL)) {
var11 = NEW_core__NativeArray(2l, &type_core__NativeArray__core__String);
if (likely(varonce12!=NULL)) {
var13 = varonce12;
} else {
var14 = "NIT_NULL___";
var15 = core__abstract_text___CString___to_s_full(var14, 11l, 11l);
var13 = var15;
varonce12 = var13;
}
((struct instance_core__NativeArray*)var11)->values[0]=var13;
} else {
var11 = varonce10;
varonce10 = NULL;
}
((struct instance_core__NativeArray*)var11)->values[1]=var_base_cname;
{
var16 = ((val*(*)(val* self))(var11->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var11); /* native_to_s on <var11:NativeArray[String]>*/
}
varonce10 = var11;
var_full_cname = var16;
if (unlikely(varonce17==NULL)) {
var18 = NEW_core__NativeArray(4l, &type_core__NativeArray__core__String);
if (likely(varonce19!=NULL)) {
var20 = varonce19;
} else {
var21 = " ";
var22 = core__abstract_text___CString___to_s_full(var21, 1l, 1l);
var20 = var22;
varonce19 = var20;
}
((struct instance_core__NativeArray*)var18)->values[1]=var20;
if (likely(varonce23!=NULL)) {
var24 = varonce23;
} else {
var25 = "()";
var26 = core__abstract_text___CString___to_s_full(var25, 2l, 2l);
var24 = var26;
varonce23 = var24;
}
((struct instance_core__NativeArray*)var18)->values[3]=var24;
} else {
var18 = varonce17;
varonce17 = NULL;
}
{
var27 = nitc__nitni_base___MType___cname_blind(self);
}
((struct instance_core__NativeArray*)var18)->values[0]=var27;
((struct instance_core__NativeArray*)var18)->values[2]=var_full_cname;
{
var28 = ((val*(*)(val* self))(var18->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var18); /* native_to_s on <var18:NativeArray[String]>*/
}
varonce17 = var18;
var_full_friendly_csignature = var28;
{
{ /* Inline c_tools#CCompilationUnit#header_decl (var_ccu) on <var_ccu:CCompilationUnit> */
var31 = var_ccu->attrs[COLOR_nitc__c_tools__CCompilationUnit___header_decl].val; /* _header_decl on <var_ccu:CCompilationUnit> */
if (unlikely(var31 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header_decl");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__c_tools, 34);
fatal_exit(1);
}
var29 = var31;
RET_LABEL30:(void)0;
}
}
if (unlikely(varonce32==NULL)) {
var33 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce34!=NULL)) {
var35 = varonce34;
} else {
var36 = "extern ";
var37 = core__abstract_text___CString___to_s_full(var36, 7l, 7l);
var35 = var37;
varonce34 = var35;
}
((struct instance_core__NativeArray*)var33)->values[0]=var35;
if (likely(varonce38!=NULL)) {
var39 = varonce38;
} else {
var40 = ";\n";
var41 = core__abstract_text___CString___to_s_full(var40, 2l, 2l);
var39 = var41;
varonce38 = var39;
}
((struct instance_core__NativeArray*)var33)->values[2]=var39;
} else {
var33 = varonce32;
varonce32 = NULL;
}
((struct instance_core__NativeArray*)var33)->values[1]=var_full_friendly_csignature;
{
var42 = ((val*(*)(val* self))(var33->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var33); /* native_to_s on <var33:NativeArray[String]>*/
}
varonce32 = var33;
{
template___template__Template___add(var29, var42); /* Direct call template#Template#add on <var29:Template>*/
}
{
{ /* Inline c_tools#CCompilationUnit#header_decl (var_ccu) on <var_ccu:CCompilationUnit> */
var45 = var_ccu->attrs[COLOR_nitc__c_tools__CCompilationUnit___header_decl].val; /* _header_decl on <var_ccu:CCompilationUnit> */
if (unlikely(var45 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header_decl");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__c_tools, 34);
fatal_exit(1);
}
var43 = var45;
RET_LABEL44:(void)0;
}
}
if (unlikely(varonce46==NULL)) {
var47 = NEW_core__NativeArray(5l, &type_core__NativeArray__core__String);
if (likely(varonce48!=NULL)) {
var49 = varonce48;
} else {
var50 = "#define ";
var51 = core__abstract_text___CString___to_s_full(var50, 8l, 8l);
var49 = var51;
varonce48 = var49;
}
((struct instance_core__NativeArray*)var47)->values[0]=var49;
if (likely(varonce52!=NULL)) {
var53 = varonce52;
} else {
var54 = " ";
var55 = core__abstract_text___CString___to_s_full(var54, 1l, 1l);
var53 = var55;
varonce52 = var53;
}
((struct instance_core__NativeArray*)var47)->values[2]=var53;
if (likely(varonce56!=NULL)) {
var57 = varonce56;
} else {
var58 = "\n";
var59 = core__abstract_text___CString___to_s_full(var58, 1l, 1l);
var57 = var59;
varonce56 = var57;
}
((struct instance_core__NativeArray*)var47)->values[4]=var57;
} else {
var47 = varonce46;
varonce46 = NULL;
}
((struct instance_core__NativeArray*)var47)->values[1]=var_base_cname;
((struct instance_core__NativeArray*)var47)->values[3]=var_full_cname;
{
var60 = ((val*(*)(val* self))(var47->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var47); /* native_to_s on <var47:NativeArray[String]>*/
}
varonce46 = var47;
{
template___template__Template___add(var43, var60); /* Direct call template#Template#add on <var43:Template>*/
}
var61 = !var_compile_implementation_too;
if (var61){
goto RET_LABEL;
} else {
}
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler (var_v) on <var_v:AbstractCompilerVisitor> */
var64 = var_v->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <var_v:AbstractCompilerVisitor> */
if (unlikely(var64 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1200);
fatal_exit(1);
}
var62 = var64;
RET_LABEL63:(void)0;
}
}
{
{ /* Inline light#AbstractCompiler#compiled_null_types (var62) on <var62:AbstractCompiler> */
var67 = var62->attrs[COLOR_nitc__light__AbstractCompiler___compiled_null_types].val; /* _compiled_null_types on <var62:AbstractCompiler> */
if (unlikely(var67 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiled_null_types");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__light, 241);
fatal_exit(1);
}
var65 = var67;
RET_LABEL66:(void)0;
}
}
{
var68 = core___core__AbstractArrayRead___core__abstract_collection__Collection__has(var65, self);
}
if (var68){
goto RET_LABEL;
} else {
}
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler (var_v) on <var_v:AbstractCompilerVisitor> */
var71 = var_v->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <var_v:AbstractCompilerVisitor> */
if (unlikely(var71 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1200);
fatal_exit(1);
}
var69 = var71;
RET_LABEL70:(void)0;
}
}
{
{ /* Inline light#AbstractCompiler#compiled_null_types (var69) on <var69:AbstractCompiler> */
var74 = var69->attrs[COLOR_nitc__light__AbstractCompiler___compiled_null_types].val; /* _compiled_null_types on <var69:AbstractCompiler> */
if (unlikely(var74 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiled_null_types");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__light, 241);
fatal_exit(1);
}
var72 = var74;
RET_LABEL73:(void)0;
}
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var72, self); /* Direct call array#Array#add on <var72:Array[MNullableType]>*/
}
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler (var_v) on <var_v:AbstractCompilerVisitor> */
var77 = var_v->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <var_v:AbstractCompilerVisitor> */
if (unlikely(var77 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1200);
fatal_exit(1);
}
var75 = var77;
RET_LABEL76:(void)0;
}
}
{
var78 = ((val*(*)(val* self))(var75->class->vft[COLOR_nitc__abstract_compiler__AbstractCompiler__new_visitor]))(var75); /* new_visitor on <var75:AbstractCompiler>*/
}
var_nitni_visitor = var78;
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#frame (var_v) on <var_v:AbstractCompilerVisitor> */
var81 = var_v->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___frame].val; /* _frame on <var_v:AbstractCompilerVisitor> */
var79 = var81;
RET_LABEL80:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#frame= (var_nitni_visitor,var79) on <var_nitni_visitor:AbstractCompilerVisitor> */
var_nitni_visitor->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___frame].val = var79; /* _frame on <var_nitni_visitor:AbstractCompilerVisitor> */
RET_LABEL82:(void)0;
}
}
if (unlikely(varonce83==NULL)) {
var84 = NEW_core__NativeArray(4l, &type_core__NativeArray__core__String);
if (likely(varonce85!=NULL)) {
var86 = varonce85;
} else {
var87 = " ";
var88 = core__abstract_text___CString___to_s_full(var87, 1l, 1l);
var86 = var88;
varonce85 = var86;
}
((struct instance_core__NativeArray*)var84)->values[1]=var86;
if (likely(varonce89!=NULL)) {
var90 = varonce89;
} else {
var91 = "()";
var92 = core__abstract_text___CString___to_s_full(var91, 2l, 2l);
var90 = var92;
varonce89 = var90;
}
((struct instance_core__NativeArray*)var84)->values[3]=var90;
} else {
var84 = varonce83;
varonce83 = NULL;
}
{
var93 = nitc__nitni_base___MType___cname_blind(self);
}
((struct instance_core__NativeArray*)var84)->values[0]=var93;
((struct instance_core__NativeArray*)var84)->values[2]=var_full_cname;
{
var94 = ((val*(*)(val* self))(var84->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var84); /* native_to_s on <var84:NativeArray[String]>*/
}
varonce83 = var84;
var_full_internal_csignature = var94;
if (unlikely(varonce95==NULL)) {
var96 = NEW_core__NativeArray(2l, &type_core__NativeArray__core__String);
if (likely(varonce97!=NULL)) {
var98 = varonce97;
} else {
var99 = " {";
var100 = core__abstract_text___CString___to_s_full(var99, 2l, 2l);
var98 = var100;
varonce97 = var98;
}
((struct instance_core__NativeArray*)var96)->values[1]=var98;
} else {
var96 = varonce95;
varonce95 = NULL;
}
((struct instance_core__NativeArray*)var96)->values[0]=var_full_internal_csignature;
{
var101 = ((val*(*)(val* self))(var96->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var96); /* native_to_s on <var96:NativeArray[String]>*/
}
varonce95 = var96;
{
nitc___nitc__AbstractCompilerVisitor___add(var_nitni_visitor, var101); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_nitni_visitor:AbstractCompilerVisitor>*/
}
if (likely(varonce102!=NULL)) {
var103 = varonce102;
} else {
var104 = "struct nitni_instance* ret_for_c;";
var105 = core__abstract_text___CString___to_s_full(var104, 33l, 33l);
var103 = var105;
varonce102 = var103;
}
{
nitc___nitc__AbstractCompilerVisitor___add(var_nitni_visitor, var103); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_nitni_visitor:AbstractCompilerVisitor>*/
}
if (likely(varonce106!=NULL)) {
var107 = varonce106;
} else {
var108 = "ret_for_c = nit_alloc(sizeof(struct nitni_instance));";
var109 = core__abstract_text___CString___to_s_full(var108, 53l, 53l);
var107 = var109;
varonce106 = var107;
}
{
nitc___nitc__AbstractCompilerVisitor___add(var_nitni_visitor, var107); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_nitni_visitor:AbstractCompilerVisitor>*/
}
if (likely(varonce110!=NULL)) {
var111 = varonce110;
} else {
var112 = "ret_for_c->value = NULL;";
var113 = core__abstract_text___CString___to_s_full(var112, 24l, 24l);
var111 = var113;
varonce110 = var111;
}
{
nitc___nitc__AbstractCompilerVisitor___add(var_nitni_visitor, var111); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_nitni_visitor:AbstractCompilerVisitor>*/
}
if (likely(varonce114!=NULL)) {
var115 = varonce114;
} else {
var116 = "return ret_for_c;";
var117 = core__abstract_text___CString___to_s_full(var116, 17l, 17l);
var115 = var117;
varonce114 = var115;
}
{
nitc___nitc__AbstractCompilerVisitor___add(var_nitni_visitor, var115); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_nitni_visitor:AbstractCompilerVisitor>*/
}
if (likely(varonce118!=NULL)) {
var119 = varonce118;
} else {
var120 = "}";
var121 = core__abstract_text___CString___to_s_full(var120, 1l, 1l);
var119 = var121;
varonce118 = var119;
}
{
nitc___nitc__AbstractCompilerVisitor___add(var_nitni_visitor, var119); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_nitni_visitor:AbstractCompilerVisitor>*/
}
RET_LABEL:;
}
/* method compiler_ffi#MExplicitSuper#compile_extern_callback for (self: MExplicitSuper, AbstractCompilerVisitor, CCompilationUnit, Bool) */
void nitc__compiler_ffi___MExplicitSuper___compile_extern_callback(val* self, val* p0, val* p1, short int p2) {
val* var_v /* var v: AbstractCompilerVisitor */;
val* var_ccu /* var ccu: CCompilationUnit */;
short int var_compile_implementation_too /* var compile_implementation_too: Bool */;
val* var /* : MPropDef */;
val* var2 /* : MPropDef */;
val* var3 /* : MProperty */;
val* var5 /* : MProperty */;
val* var_mproperty /* var mproperty: MProperty */;
short int var6 /* : Bool */;
int cltype;
int idtype;
val* var7 /* : MPropDef */;
val* var9 /* : MPropDef */;
val* var10 /* : MClassDef */;
val* var12 /* : MClassDef */;
val* var13 /* : MClass */;
val* var15 /* : MClass */;
val* var16 /* : MClassType */;
val* var18 /* : MClassType */;
val* var_mclass_type /* var mclass_type: MClassType */;
val* var19 /* : AbstractCompiler */;
val* var21 /* : AbstractCompiler */;
val* var22 /* : MModule */;
val* var24 /* : MModule */;
static val* varonce;
val* var25 /* : String */;
char* var26 /* : CString */;
val* var27 /* : String */;
val* var28 /* : Sys */;
val* var29 /* : SignatureLength */;
val* var30 /* : Sys */;
val* var31 /* : CallContext */;
val* var32 /* : String */;
val* var_internal_csignature /* var internal_csignature: String */;
val* var33 /* : Template */;
val* var35 /* : Template */;
val* var37 /* : NativeArray[String] */;
static val* varonce36;
static val* varonce38;
val* var39 /* : String */;
char* var40 /* : CString */;
val* var41 /* : String */;
static val* varonce42;
val* var43 /* : String */;
char* var44 /* : CString */;
val* var45 /* : String */;
val* var46 /* : String */;
val* var47 /* : AbstractCompiler */;
val* var49 /* : AbstractCompiler */;
val* var50 /* : MModule */;
val* var52 /* : MModule */;
static val* varonce53;
val* var54 /* : String */;
char* var55 /* : CString */;
val* var56 /* : String */;
val* var57 /* : Sys */;
val* var58 /* : SignatureLength */;
val* var59 /* : String */;
val* var_friendly_cname /* var friendly_cname: String */;
val* var60 /* : AbstractCompiler */;
val* var62 /* : AbstractCompiler */;
val* var63 /* : MModule */;
val* var65 /* : MModule */;
static val* varonce66;
val* var67 /* : String */;
char* var68 /* : CString */;
val* var69 /* : String */;
val* var70 /* : Sys */;
val* var71 /* : SignatureLength */;
val* var72 /* : String */;
val* var_internal_cname /* var internal_cname: String */;
val* var73 /* : Template */;
val* var75 /* : Template */;
val* var77 /* : NativeArray[String] */;
static val* varonce76;
static val* varonce78;
val* var79 /* : String */;
char* var80 /* : CString */;
val* var81 /* : String */;
static val* varonce82;
val* var83 /* : String */;
char* var84 /* : CString */;
val* var85 /* : String */;
static val* varonce86;
val* var87 /* : String */;
char* var88 /* : CString */;
val* var89 /* : String */;
val* var90 /* : String */;
short int var91 /* : Bool */;
val* var92 /* : AbstractCompiler */;
val* var94 /* : AbstractCompiler */;
val* var95 /* : AbstractCompilerVisitor */;
val* var_nitni_visitor /* var nitni_visitor: AbstractCompilerVisitor */;
val* var96 /* : nullable StaticFrame */;
val* var98 /* : nullable StaticFrame */;
val* var100 /* : AbstractCompiler */;
val* var102 /* : AbstractCompiler */;
val* var103 /* : MModule */;
val* var105 /* : MModule */;
val* var106 /* : MPropDef */;
val* var107 /* : nullable MSignature */;
val* var109 /* : nullable MSignature */;
val* var_msignature /* var msignature: nullable MSignature */;
val* var110 /* : AbstractCompiler */;
val* var112 /* : AbstractCompiler */;
val* var113 /* : MModule */;
val* var115 /* : MModule */;
static val* varonce116;
val* var117 /* : String */;
char* var118 /* : CString */;
val* var119 /* : String */;
val* var120 /* : Sys */;
val* var121 /* : SignatureLength */;
val* var122 /* : Sys */;
val* var123 /* : CallContext */;
val* var124 /* : String */;
val* var_csignature_blind /* var csignature_blind: String */;
val* var126 /* : NativeArray[String] */;
static val* varonce125;
static val* varonce127;
val* var128 /* : String */;
char* var129 /* : CString */;
val* var130 /* : String */;
static val* varonce131;
val* var132 /* : String */;
char* var133 /* : CString */;
val* var134 /* : String */;
val* var135 /* : String */;
val* var136 /* : String */;
val* var138 /* : NativeArray[String] */;
static val* varonce137;
static val* varonce139;
val* var140 /* : String */;
char* var141 /* : CString */;
val* var142 /* : String */;
val* var143 /* : String */;
val* var144 /* : Array[RuntimeVariable] */;
val* var_vars /* var vars: Array[RuntimeVariable] */;
static val* varonce145;
val* var146 /* : String */;
char* var147 /* : CString */;
val* var148 /* : String */;
val* var149 /* : RuntimeVariable */;
val* var_recv_var /* var recv_var: RuntimeVariable */;
val* var150 /* : RuntimeVariable */;
val* var151 /* : Array[MParameter] */;
val* var153 /* : Array[MParameter] */;
val* var_ /* var : Array[MParameter] */;
val* var154 /* : IndexedIterator[nullable Object] */;
val* var_155 /* var : IndexedIterator[MParameter] */;
short int var156 /* : Bool */;
val* var157 /* : nullable Object */;
val* var_p /* var p: MParameter */;
val* var158 /* : MType */;
val* var160 /* : MType */;
val* var161 /* : MType */;
val* var_arg_mtype /* var arg_mtype: MType */;
val* var162 /* : String */;
val* var164 /* : String */;
val* var165 /* : RuntimeVariable */;
val* var_arg /* var arg: RuntimeVariable */;
val* var166 /* : RuntimeVariable */;
val* var167 /* : MPropDef */;
val* var169 /* : MPropDef */;
short int var170 /* : Bool */;
int cltype171;
int idtype172;
const char* var_class_name;
val* var173 /* : nullable RuntimeVariable */;
val* var_ret_var /* var ret_var: nullable RuntimeVariable */;
val* var174 /* : nullable MType */;
val* var176 /* : nullable MType */;
val* var_return_mtype /* var return_mtype: nullable MType */;
short int var177 /* : Bool */;
short int var178 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var180 /* : Bool */;
short int var181 /* : Bool */;
short int var182 /* : Bool */;
short int var183 /* : Bool */;
short int var185 /* : Bool */;
short int var186 /* : Bool */;
val* var187 /* : MType */;
val* var188 /* : RuntimeVariable */;
val* var189 /* : RuntimeVariable */;
static val* varonce190;
val* var191 /* : String */;
char* var192 /* : CString */;
val* var193 /* : String */;
var_v = p0;
var_ccu = p1;
var_compile_implementation_too = p2;
{
{ /* Inline nitni_callbacks#MExplicitSuper#from (self) on <self:MExplicitSuper> */
var2 = self->attrs[COLOR_nitc__nitni_callbacks__MExplicitSuper___from].val; /* _from on <self:MExplicitSuper> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _from");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__nitni_callbacks, 254);
fatal_exit(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
{ /* Inline model#MPropDef#mproperty (var) on <var:MPropDef> */
var5 = var->attrs[COLOR_nitc__model__MPropDef___mproperty].val; /* _mproperty on <var:MPropDef> */
if (unlikely(var5 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2357);
fatal_exit(1);
}
var3 = var5;
RET_LABEL4:(void)0;
}
}
var_mproperty = var3;
/* <var_mproperty:MProperty> isa MMethod */
cltype = type_nitc__MMethod.color;
idtype = type_nitc__MMethod.id;
if(cltype >= var_mproperty->type->table_size) {
var6 = 0;
} else {
var6 = var_mproperty->type->type_table[cltype] == idtype;
}
if (unlikely(!var6)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__compiler_ffi, 203);
fatal_exit(1);
}
{
{ /* Inline nitni_callbacks#MExplicitSuper#from (self) on <self:MExplicitSuper> */
var9 = self->attrs[COLOR_nitc__nitni_callbacks__MExplicitSuper___from].val; /* _from on <self:MExplicitSuper> */
if (unlikely(var9 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _from");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__nitni_callbacks, 254);
fatal_exit(1);
}
var7 = var9;
RET_LABEL8:(void)0;
}
}
{
{ /* Inline model#MPropDef#mclassdef (var7) on <var7:MPropDef> */
var12 = var7->attrs[COLOR_nitc__model__MPropDef___mclassdef].val; /* _mclassdef on <var7:MPropDef> */
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
{ /* Inline model#MClassDef#mclass (var10) on <var10:MClassDef> */
var15 = var10->attrs[COLOR_nitc__model__MClassDef___mclass].val; /* _mclass on <var10:MClassDef> */
if (unlikely(var15 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 591);
fatal_exit(1);
}
var13 = var15;
RET_LABEL14:(void)0;
}
}
{
{ /* Inline model#MClass#mclass_type (var13) on <var13:MClass> */
var18 = var13->attrs[COLOR_nitc__model__MClass___mclass_type].val; /* _mclass_type on <var13:MClass> */
if (unlikely(var18 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass_type");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 520);
fatal_exit(1);
}
var16 = var18;
RET_LABEL17:(void)0;
}
}
var_mclass_type = var16;
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler (var_v) on <var_v:AbstractCompilerVisitor> */
var21 = var_v->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <var_v:AbstractCompilerVisitor> */
if (unlikely(var21 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1200);
fatal_exit(1);
}
var19 = var21;
RET_LABEL20:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompiler#mainmodule (var19) on <var19:AbstractCompiler> */
var24 = var19->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___mainmodule].val; /* _mainmodule on <var19:AbstractCompiler> */
if (unlikely(var24 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mainmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 531);
fatal_exit(1);
}
var22 = var24;
RET_LABEL23:(void)0;
}
}
if (likely(varonce!=NULL)) {
var25 = varonce;
} else {
var26 = "___super";
var27 = core__abstract_text___CString___to_s_full(var26, 8l, 8l);
var25 = var27;
varonce = var25;
}
var28 = glob_sys;
{
var29 = nitc__nitni_utilities___core__Sys___long_signature(var28);
}
var30 = glob_sys;
{
var31 = nitc__nitni_utilities___core__Sys___internal_call_context(var30);
}
{
var32 = nitc__nitni_utilities___MMethod___build_csignature(var_mproperty, var_mclass_type, var22, var25, var29, var31);
}
var_internal_csignature = var32;
{
{ /* Inline c_tools#CCompilationUnit#header_decl (var_ccu) on <var_ccu:CCompilationUnit> */
var35 = var_ccu->attrs[COLOR_nitc__c_tools__CCompilationUnit___header_decl].val; /* _header_decl on <var_ccu:CCompilationUnit> */
if (unlikely(var35 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header_decl");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__c_tools, 34);
fatal_exit(1);
}
var33 = var35;
RET_LABEL34:(void)0;
}
}
if (unlikely(varonce36==NULL)) {
var37 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce38!=NULL)) {
var39 = varonce38;
} else {
var40 = "extern ";
var41 = core__abstract_text___CString___to_s_full(var40, 7l, 7l);
var39 = var41;
varonce38 = var39;
}
((struct instance_core__NativeArray*)var37)->values[0]=var39;
if (likely(varonce42!=NULL)) {
var43 = varonce42;
} else {
var44 = ";\n";
var45 = core__abstract_text___CString___to_s_full(var44, 2l, 2l);
var43 = var45;
varonce42 = var43;
}
((struct instance_core__NativeArray*)var37)->values[2]=var43;
} else {
var37 = varonce36;
varonce36 = NULL;
}
((struct instance_core__NativeArray*)var37)->values[1]=var_internal_csignature;
{
var46 = ((val*(*)(val* self))(var37->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var37); /* native_to_s on <var37:NativeArray[String]>*/
}
varonce36 = var37;
{
template___template__Template___add(var33, var46); /* Direct call template#Template#add on <var33:Template>*/
}
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler (var_v) on <var_v:AbstractCompilerVisitor> */
var49 = var_v->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <var_v:AbstractCompilerVisitor> */
if (unlikely(var49 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1200);
fatal_exit(1);
}
var47 = var49;
RET_LABEL48:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompiler#mainmodule (var47) on <var47:AbstractCompiler> */
var52 = var47->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___mainmodule].val; /* _mainmodule on <var47:AbstractCompiler> */
if (unlikely(var52 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mainmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 531);
fatal_exit(1);
}
var50 = var52;
RET_LABEL51:(void)0;
}
}
if (likely(varonce53!=NULL)) {
var54 = varonce53;
} else {
var55 = "___super";
var56 = core__abstract_text___CString___to_s_full(var55, 8l, 8l);
var54 = var56;
varonce53 = var54;
}
var57 = glob_sys;
{
var58 = nitc__nitni_utilities___core__Sys___short_signature(var57);
}
{
var59 = nitc__nitni_utilities___MMethod___build_cname(var_mproperty, var_mclass_type, var50, var54, var58);
}
var_friendly_cname = var59;
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler (var_v) on <var_v:AbstractCompilerVisitor> */
var62 = var_v->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <var_v:AbstractCompilerVisitor> */
if (unlikely(var62 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1200);
fatal_exit(1);
}
var60 = var62;
RET_LABEL61:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompiler#mainmodule (var60) on <var60:AbstractCompiler> */
var65 = var60->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___mainmodule].val; /* _mainmodule on <var60:AbstractCompiler> */
if (unlikely(var65 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mainmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 531);
fatal_exit(1);
}
var63 = var65;
RET_LABEL64:(void)0;
}
}
if (likely(varonce66!=NULL)) {
var67 = varonce66;
} else {
var68 = "___super";
var69 = core__abstract_text___CString___to_s_full(var68, 8l, 8l);
var67 = var69;
varonce66 = var67;
}
var70 = glob_sys;
{
var71 = nitc__nitni_utilities___core__Sys___long_signature(var70);
}
{
var72 = nitc__nitni_utilities___MMethod___build_cname(var_mproperty, var_mclass_type, var63, var67, var71);
}
var_internal_cname = var72;
{
{ /* Inline c_tools#CCompilationUnit#header_decl (var_ccu) on <var_ccu:CCompilationUnit> */
var75 = var_ccu->attrs[COLOR_nitc__c_tools__CCompilationUnit___header_decl].val; /* _header_decl on <var_ccu:CCompilationUnit> */
if (unlikely(var75 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header_decl");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__c_tools, 34);
fatal_exit(1);
}
var73 = var75;
RET_LABEL74:(void)0;
}
}
if (unlikely(varonce76==NULL)) {
var77 = NEW_core__NativeArray(5l, &type_core__NativeArray__core__String);
if (likely(varonce78!=NULL)) {
var79 = varonce78;
} else {
var80 = "#define ";
var81 = core__abstract_text___CString___to_s_full(var80, 8l, 8l);
var79 = var81;
varonce78 = var79;
}
((struct instance_core__NativeArray*)var77)->values[0]=var79;
if (likely(varonce82!=NULL)) {
var83 = varonce82;
} else {
var84 = " ";
var85 = core__abstract_text___CString___to_s_full(var84, 1l, 1l);
var83 = var85;
varonce82 = var83;
}
((struct instance_core__NativeArray*)var77)->values[2]=var83;
if (likely(varonce86!=NULL)) {
var87 = varonce86;
} else {
var88 = "\n";
var89 = core__abstract_text___CString___to_s_full(var88, 1l, 1l);
var87 = var89;
varonce86 = var87;
}
((struct instance_core__NativeArray*)var77)->values[4]=var87;
} else {
var77 = varonce76;
varonce76 = NULL;
}
((struct instance_core__NativeArray*)var77)->values[1]=var_friendly_cname;
((struct instance_core__NativeArray*)var77)->values[3]=var_internal_cname;
{
var90 = ((val*(*)(val* self))(var77->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var77); /* native_to_s on <var77:NativeArray[String]>*/
}
varonce76 = var77;
{
template___template__Template___add(var73, var90); /* Direct call template#Template#add on <var73:Template>*/
}
var91 = !var_compile_implementation_too;
if (var91){
goto RET_LABEL;
} else {
}
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler (var_v) on <var_v:AbstractCompilerVisitor> */
var94 = var_v->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <var_v:AbstractCompilerVisitor> */
if (unlikely(var94 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1200);
fatal_exit(1);
}
var92 = var94;
RET_LABEL93:(void)0;
}
}
{
var95 = ((val*(*)(val* self))(var92->class->vft[COLOR_nitc__abstract_compiler__AbstractCompiler__new_visitor]))(var92); /* new_visitor on <var92:AbstractCompiler>*/
}
var_nitni_visitor = var95;
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#frame (var_v) on <var_v:AbstractCompilerVisitor> */
var98 = var_v->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___frame].val; /* _frame on <var_v:AbstractCompilerVisitor> */
var96 = var98;
RET_LABEL97:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#frame= (var_nitni_visitor,var96) on <var_nitni_visitor:AbstractCompilerVisitor> */
var_nitni_visitor->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___frame].val = var96; /* _frame on <var_nitni_visitor:AbstractCompilerVisitor> */
RET_LABEL99:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler (var_v) on <var_v:AbstractCompilerVisitor> */
var102 = var_v->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <var_v:AbstractCompilerVisitor> */
if (unlikely(var102 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1200);
fatal_exit(1);
}
var100 = var102;
RET_LABEL101:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompiler#mainmodule (var100) on <var100:AbstractCompiler> */
var105 = var100->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___mainmodule].val; /* _mainmodule on <var100:AbstractCompiler> */
if (unlikely(var105 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mainmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 531);
fatal_exit(1);
}
var103 = var105;
RET_LABEL104:(void)0;
}
}
{
var106 = nitc___nitc__MProperty___lookup_first_definition(var_mproperty, var103, var_mclass_type);
}
{
{ /* Inline model#MMethodDef#msignature (var106) on <var106:MPropDef(MMethodDef)> */
var109 = var106->attrs[COLOR_nitc__model__MMethodDef___msignature].val; /* _msignature on <var106:MPropDef(MMethodDef)> */
var107 = var109;
RET_LABEL108:(void)0;
}
}
var_msignature = var107;
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler (var_v) on <var_v:AbstractCompilerVisitor> */
var112 = var_v->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <var_v:AbstractCompilerVisitor> */
if (unlikely(var112 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1200);
fatal_exit(1);
}
var110 = var112;
RET_LABEL111:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompiler#mainmodule (var110) on <var110:AbstractCompiler> */
var115 = var110->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___mainmodule].val; /* _mainmodule on <var110:AbstractCompiler> */
if (unlikely(var115 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mainmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 531);
fatal_exit(1);
}
var113 = var115;
RET_LABEL114:(void)0;
}
}
if (likely(varonce116!=NULL)) {
var117 = varonce116;
} else {
var118 = "___super";
var119 = core__abstract_text___CString___to_s_full(var118, 8l, 8l);
var117 = var119;
varonce116 = var117;
}
var120 = glob_sys;
{
var121 = nitc__nitni_utilities___core__Sys___long_signature(var120);
}
var122 = glob_sys;
{
var123 = nitc__nitni_utilities___core__Sys___internal_call_context(var122);
}
{
var124 = nitc__nitni_utilities___MMethod___build_csignature(var_mproperty, var_mclass_type, var113, var117, var121, var123);
}
var_csignature_blind = var124;
if (unlikely(varonce125==NULL)) {
var126 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce127!=NULL)) {
var128 = varonce127;
} else {
var129 = "/* nitni callback to super for ";
var130 = core__abstract_text___CString___to_s_full(var129, 31l, 31l);
var128 = var130;
varonce127 = var128;
}
((struct instance_core__NativeArray*)var126)->values[0]=var128;
if (likely(varonce131!=NULL)) {
var132 = varonce131;
} else {
var133 = " */";
var134 = core__abstract_text___CString___to_s_full(var133, 3l, 3l);
var132 = var134;
varonce131 = var132;
}
((struct instance_core__NativeArray*)var126)->values[2]=var132;
} else {
var126 = varonce125;
varonce125 = NULL;
}
{
var135 = nitc___nitc__MProperty___nitc__model_base__MEntity__full_name(var_mproperty);
}
((struct instance_core__NativeArray*)var126)->values[1]=var135;
{
var136 = ((val*(*)(val* self))(var126->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var126); /* native_to_s on <var126:NativeArray[String]>*/
}
varonce125 = var126;
{
nitc___nitc__AbstractCompilerVisitor___add_decl(var_nitni_visitor, var136); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_nitni_visitor:AbstractCompilerVisitor>*/
}
if (unlikely(varonce137==NULL)) {
var138 = NEW_core__NativeArray(2l, &type_core__NativeArray__core__String);
if (likely(varonce139!=NULL)) {
var140 = varonce139;
} else {
var141 = " {";
var142 = core__abstract_text___CString___to_s_full(var141, 2l, 2l);
var140 = var142;
varonce139 = var140;
}
((struct instance_core__NativeArray*)var138)->values[1]=var140;
} else {
var138 = varonce137;
varonce137 = NULL;
}
((struct instance_core__NativeArray*)var138)->values[0]=var_csignature_blind;
{
var143 = ((val*(*)(val* self))(var138->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var138); /* native_to_s on <var138:NativeArray[String]>*/
}
varonce137 = var138;
{
nitc___nitc__AbstractCompilerVisitor___add_decl(var_nitni_visitor, var143); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_nitni_visitor:AbstractCompilerVisitor>*/
}
var144 = NEW_core__Array(&type_core__Array__nitc__RuntimeVariable);
{
core___core__Array___core__kernel__Object__init(var144); /* Direct call array#Array#init on <var144:Array[RuntimeVariable]>*/
}
var_vars = var144;
if (likely(varonce145!=NULL)) {
var146 = varonce145;
} else {
var147 = "self";
var148 = core__abstract_text___CString___to_s_full(var147, 4l, 4l);
var146 = var148;
varonce145 = var146;
}
{
var149 = nitc__light___AbstractCompilerVisitor___var_from_c(var_nitni_visitor, var146, var_mclass_type);
}
var_recv_var = var149;
{
var150 = ((val*(*)(val* self, val* p0, val* p1))(var_nitni_visitor->class->vft[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor__box_extern]))(var_nitni_visitor, var_recv_var, var_mclass_type); /* box_extern on <var_nitni_visitor:AbstractCompilerVisitor>*/
}
var_recv_var = var150;
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_vars, var_recv_var); /* Direct call array#Array#add on <var_vars:Array[RuntimeVariable]>*/
}
if (var_msignature == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__compiler_ffi, 233);
fatal_exit(1);
} else {
{ /* Inline model#MSignature#mparameters (var_msignature) on <var_msignature:nullable MSignature> */
if (unlikely(var_msignature == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1879);
fatal_exit(1);
}
var153 = var_msignature->attrs[COLOR_nitc__model__MSignature___mparameters].val; /* _mparameters on <var_msignature:nullable MSignature> */
if (unlikely(var153 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mparameters");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1879);
fatal_exit(1);
}
var151 = var153;
RET_LABEL152:(void)0;
}
}
var_ = var151;
{
var154 = core___core__AbstractArrayRead___core__abstract_collection__Collection__iterator(var_);
}
var_155 = var154;
for(;;) {
{
var156 = ((short int(*)(val* self))((((long)var_155&3)?class_info[((long)var_155&3)]:var_155->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_155); /* is_ok on <var_155:IndexedIterator[MParameter]>*/
}
if (var156){
} else {
goto BREAK_label;
}
{
var157 = ((val*(*)(val* self))((((long)var_155&3)?class_info[((long)var_155&3)]:var_155->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_155); /* item on <var_155:IndexedIterator[MParameter]>*/
}
var_p = var157;
{
{ /* Inline model#MParameter#mtype (var_p) on <var_p:MParameter> */
var160 = var_p->attrs[COLOR_nitc__model__MParameter___mtype].val; /* _mtype on <var_p:MParameter> */
if (unlikely(var160 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1996);
fatal_exit(1);
}
var158 = var160;
RET_LABEL159:(void)0;
}
}
{
var161 = nitc___nitc__AbstractCompilerVisitor___anchor(var_v, var158);
}
var_arg_mtype = var161;
{
{ /* Inline model#MParameter#name (var_p) on <var_p:MParameter> */
var164 = var_p->attrs[COLOR_nitc__model__MParameter___name].val; /* _name on <var_p:MParameter> */
if (unlikely(var164 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1993);
fatal_exit(1);
}
var162 = var164;
RET_LABEL163:(void)0;
}
}
{
var165 = nitc__light___AbstractCompilerVisitor___var_from_c(var_nitni_visitor, var162, var_arg_mtype);
}
var_arg = var165;
{
var166 = ((val*(*)(val* self, val* p0, val* p1))(var_nitni_visitor->class->vft[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor__box_extern]))(var_nitni_visitor, var_arg, var_arg_mtype); /* box_extern on <var_nitni_visitor:AbstractCompilerVisitor>*/
}
var_arg = var166;
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_vars, var_arg); /* Direct call array#Array#add on <var_vars:Array[RuntimeVariable]>*/
}
{
((void(*)(val* self))((((long)var_155&3)?class_info[((long)var_155&3)]:var_155->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_155); /* next on <var_155:IndexedIterator[MParameter]>*/
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_155&3)?class_info[((long)var_155&3)]:var_155->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_155); /* finish on <var_155:IndexedIterator[MParameter]>*/
}
{
{ /* Inline nitni_callbacks#MExplicitSuper#from (self) on <self:MExplicitSuper> */
var169 = self->attrs[COLOR_nitc__nitni_callbacks__MExplicitSuper___from].val; /* _from on <self:MExplicitSuper> */
if (unlikely(var169 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _from");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__nitni_callbacks, 254);
fatal_exit(1);
}
var167 = var169;
RET_LABEL168:(void)0;
}
}
/* <var167:MPropDef> isa MMethodDef */
cltype171 = type_nitc__MMethodDef.color;
idtype172 = type_nitc__MMethodDef.id;
if(cltype171 >= var167->type->table_size) {
var170 = 0;
} else {
var170 = var167->type->type_table[cltype171] == idtype172;
}
if (unlikely(!var170)) {
var_class_name = var167 == NULL ? "null" : var167->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "MMethodDef", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__compiler_ffi, 240);
fatal_exit(1);
}
{
var173 = ((val*(*)(val* self, val* p0, val* p1, val* p2))(var_nitni_visitor->class->vft[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor__supercall]))(var_nitni_visitor, var167, var_mclass_type, var_vars); /* supercall on <var_nitni_visitor:AbstractCompilerVisitor>*/
}
var_ret_var = var173;
if (var_msignature == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__compiler_ffi, 242);
fatal_exit(1);
} else {
{ /* Inline model#MSignature#return_mtype (var_msignature) on <var_msignature:nullable MSignature> */
if (unlikely(var_msignature == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1891);
fatal_exit(1);
}
var176 = var_msignature->attrs[COLOR_nitc__model__MSignature___return_mtype].val; /* _return_mtype on <var_msignature:nullable MSignature> */
var174 = var176;
RET_LABEL175:(void)0;
}
}
var_return_mtype = var174;
if (var_return_mtype == NULL) {
var177 = 0; /* is null */
} else {
var177 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_return_mtype,((val*)NULL)) on <var_return_mtype:nullable MType> */
var_other = ((val*)NULL);
{
var180 = ((short int(*)(val* self, val* p0))(var_return_mtype->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_return_mtype, var_other); /* == on <var_return_mtype:nullable MType(MType)>*/
}
var181 = !var180;
var178 = var181;
goto RET_LABEL179;
RET_LABEL179:(void)0;
}
var177 = var178;
}
if (var177){
if (var_ret_var == NULL) {
var182 = 0; /* is null */
} else {
var182 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_ret_var,((val*)NULL)) on <var_ret_var:nullable RuntimeVariable> */
var_other = ((val*)NULL);
{
var185 = ((short int(*)(val* self, val* p0))(var_ret_var->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_ret_var, var_other); /* == on <var_ret_var:nullable RuntimeVariable(RuntimeVariable)>*/
}
var186 = !var185;
var183 = var186;
goto RET_LABEL184;
RET_LABEL184:(void)0;
}
var182 = var183;
}
if (unlikely(!var182)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__compiler_ffi, 244);
fatal_exit(1);
}
{
var187 = nitc___nitc__AbstractCompilerVisitor___anchor(var_v, var_return_mtype);
}
var_return_mtype = var187;
{
var188 = ((val*(*)(val* self, val* p0, val* p1))(var_nitni_visitor->class->vft[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor__autobox]))(var_nitni_visitor, var_ret_var, var_return_mtype); /* autobox on <var_nitni_visitor:AbstractCompilerVisitor>*/
}
var_ret_var = var188;
{
var189 = ((val*(*)(val* self, val* p0, val* p1))(var_nitni_visitor->class->vft[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor__unbox_extern]))(var_nitni_visitor, var_ret_var, var_return_mtype); /* unbox_extern on <var_nitni_visitor:AbstractCompilerVisitor>*/
}
var_ret_var = var189;
{
nitc__light___AbstractCompilerVisitor___ret_to_c(var_nitni_visitor, var_ret_var, var_return_mtype); /* Direct call light#AbstractCompilerVisitor#ret_to_c on <var_nitni_visitor:AbstractCompilerVisitor>*/
}
} else {
}
if (likely(varonce190!=NULL)) {
var191 = varonce190;
} else {
var192 = "}";
var193 = core__abstract_text___CString___to_s_full(var192, 1l, 1l);
var191 = var193;
varonce190 = var191;
}
{
nitc___nitc__AbstractCompilerVisitor___add(var_nitni_visitor, var191); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_nitni_visitor:AbstractCompilerVisitor>*/
}
RET_LABEL:;
}
/* method compiler_ffi#MExplicitCast#compile_extern_callbacks for (self: MExplicitCast, AbstractCompilerVisitor, CCompilationUnit, Bool) */
void nitc__compiler_ffi___MExplicitCast___compile_extern_callbacks(val* self, val* p0, val* p1, short int p2) {
val* var_v /* var v: AbstractCompilerVisitor */;
val* var_ccu /* var ccu: CCompilationUnit */;
short int var_compile_implementation_too /* var compile_implementation_too: Bool */;
val* var /* : MType */;
val* var2 /* : MType */;
val* var_from /* var from: MType */;
val* var3 /* : MType */;
val* var5 /* : MType */;
val* var_to /* var to: MType */;
val* var6 /* : NativeArray[String] */;
static val* varonce;
static val* varonce7;
val* var8 /* : String */;
char* var9 /* : CString */;
val* var10 /* : String */;
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
val* var27 /* : AbstractCompiler */;
val* var29 /* : AbstractCompiler */;
val* var30 /* : MModule */;
val* var32 /* : MModule */;
val* var33 /* : String */;
val* var34 /* : String */;
val* var35 /* : String */;
val* var36 /* : String */;
val* var37 /* : String */;
val* var_full_friendly_csignature /* var full_friendly_csignature: String */;
val* var38 /* : Template */;
val* var40 /* : Template */;
val* var42 /* : NativeArray[String] */;
static val* varonce41;
static val* varonce43;
val* var44 /* : String */;
char* var45 /* : CString */;
val* var46 /* : String */;
static val* varonce47;
val* var48 /* : String */;
char* var49 /* : CString */;
val* var50 /* : String */;
val* var51 /* : String */;
val* var52 /* : Template */;
val* var54 /* : Template */;
val* var56 /* : NativeArray[String] */;
static val* varonce55;
static val* varonce57;
val* var58 /* : String */;
char* var59 /* : CString */;
val* var60 /* : String */;
static val* varonce61;
val* var62 /* : String */;
char* var63 /* : CString */;
val* var64 /* : String */;
val* var65 /* : String */;
val* var66 /* : String */;
val* var67 /* : Template */;
val* var69 /* : Template */;
val* var71 /* : NativeArray[String] */;
static val* varonce70;
static val* varonce72;
val* var73 /* : String */;
char* var74 /* : CString */;
val* var75 /* : String */;
static val* varonce76;
val* var77 /* : String */;
char* var78 /* : CString */;
val* var79 /* : String */;
static val* varonce80;
val* var81 /* : String */;
char* var82 /* : CString */;
val* var83 /* : String */;
static val* varonce84;
val* var85 /* : String */;
char* var86 /* : CString */;
val* var87 /* : String */;
val* var88 /* : String */;
val* var89 /* : AbstractCompiler */;
val* var91 /* : AbstractCompiler */;
val* var92 /* : MModule */;
val* var94 /* : MModule */;
val* var95 /* : String */;
val* var96 /* : String */;
val* var97 /* : String */;
val* var98 /* : Template */;
val* var100 /* : Template */;
static val* varonce101;
val* var102 /* : String */;
char* var103 /* : CString */;
val* var104 /* : String */;
val* var105 /* : AbstractCompiler */;
val* var107 /* : AbstractCompiler */;
val* var108 /* : AbstractCompilerVisitor */;
val* var_nitni_visitor /* var nitni_visitor: AbstractCompilerVisitor */;
val* var109 /* : nullable StaticFrame */;
val* var111 /* : nullable StaticFrame */;
val* var114 /* : NativeArray[String] */;
static val* varonce113;
static val* varonce115;
val* var116 /* : String */;
char* var117 /* : CString */;
val* var118 /* : String */;
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
static val* varonce131;
val* var132 /* : String */;
char* var133 /* : CString */;
val* var134 /* : String */;
val* var135 /* : AbstractCompiler */;
val* var137 /* : AbstractCompiler */;
val* var138 /* : MModule */;
val* var140 /* : MModule */;
val* var141 /* : String */;
val* var142 /* : String */;
val* var143 /* : String */;
val* var144 /* : Sys */;
val* var145 /* : CallContext */;
val* var146 /* : String */;
val* var147 /* : String */;
val* var_full_internal_csignature /* var full_internal_csignature: String */;
val* var149 /* : NativeArray[String] */;
static val* varonce148;
static val* varonce150;
val* var151 /* : String */;
char* var152 /* : CString */;
val* var153 /* : String */;
static val* varonce154;
val* var155 /* : String */;
char* var156 /* : CString */;
val* var157 /* : String */;
static val* varonce158;
val* var159 /* : String */;
char* var160 /* : CString */;
val* var161 /* : String */;
val* var162 /* : String */;
val* var163 /* : String */;
val* var164 /* : String */;
val* var166 /* : NativeArray[String] */;
static val* varonce165;
static val* varonce167;
val* var168 /* : String */;
char* var169 /* : CString */;
val* var170 /* : String */;
val* var171 /* : String */;
static val* varonce172;
val* var173 /* : String */;
char* var174 /* : CString */;
val* var175 /* : String */;
val* var176 /* : RuntimeVariable */;
val* var_from_var /* var from_var: RuntimeVariable */;
val* var177 /* : RuntimeVariable */;
static val* varonce178;
val* var179 /* : String */;
char* var180 /* : CString */;
val* var181 /* : String */;
val* var182 /* : RuntimeVariable */;
val* var_recv_var /* var recv_var: RuntimeVariable */;
val* var184 /* : NativeArray[String] */;
static val* varonce183;
static val* varonce185;
val* var186 /* : String */;
char* var187 /* : CString */;
val* var188 /* : String */;
static val* varonce189;
val* var190 /* : String */;
char* var191 /* : CString */;
val* var192 /* : String */;
val* var193 /* : String */;
val* var194 /* : String */;
static val* varonce195;
val* var196 /* : String */;
char* var197 /* : CString */;
val* var198 /* : String */;
val* var199 /* : MType */;
short int var200 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var202 /* : Bool */;
short int var204 /* : Bool */;
val* var205 /* : Template */;
val* var207 /* : Template */;
val* var209 /* : NativeArray[String] */;
static val* varonce208;
static val* varonce210;
val* var211 /* : String */;
char* var212 /* : CString */;
val* var213 /* : String */;
static val* varonce214;
val* var215 /* : String */;
char* var216 /* : CString */;
val* var217 /* : String */;
val* var218 /* : String */;
val* var219 /* : String */;
val* var220 /* : Template */;
val* var222 /* : Template */;
val* var224 /* : NativeArray[String] */;
static val* varonce223;
static val* varonce225;
val* var226 /* : String */;
char* var227 /* : CString */;
val* var228 /* : String */;
static val* varonce229;
val* var230 /* : String */;
char* var231 /* : CString */;
val* var232 /* : String */;
static val* varonce233;
val* var234 /* : String */;
char* var235 /* : CString */;
val* var236 /* : String */;
static val* varonce237;
val* var238 /* : String */;
char* var239 /* : CString */;
val* var240 /* : String */;
val* var241 /* : String */;
val* var242 /* : String */;
val* var243 /* : String */;
val* var244 /* : String */;
val* var245 /* : Template */;
val* var247 /* : Template */;
static val* varonce248;
val* var249 /* : String */;
char* var250 /* : CString */;
val* var251 /* : String */;
val* var253 /* : NativeArray[String] */;
static val* varonce252;
static val* varonce254;
val* var255 /* : String */;
char* var256 /* : CString */;
val* var257 /* : String */;
static val* varonce258;
val* var259 /* : String */;
char* var260 /* : CString */;
val* var261 /* : String */;
static val* varonce262;
val* var263 /* : String */;
char* var264 /* : CString */;
val* var265 /* : String */;
static val* varonce266;
val* var267 /* : String */;
char* var268 /* : CString */;
val* var269 /* : String */;
static val* varonce270;
val* var271 /* : String */;
char* var272 /* : CString */;
val* var273 /* : String */;
val* var274 /* : String */;
val* var275 /* : AbstractCompiler */;
val* var277 /* : AbstractCompiler */;
val* var278 /* : MModule */;
val* var280 /* : MModule */;
val* var281 /* : String */;
val* var282 /* : String */;
val* var283 /* : String */;
val* var284 /* : String */;
val* var285 /* : String */;
val* var286 /* : Template */;
val* var288 /* : Template */;
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
val* var300 /* : Template */;
val* var302 /* : Template */;
val* var304 /* : NativeArray[String] */;
static val* varonce303;
static val* varonce305;
val* var306 /* : String */;
char* var307 /* : CString */;
val* var308 /* : String */;
static val* varonce309;
val* var310 /* : String */;
char* var311 /* : CString */;
val* var312 /* : String */;
val* var313 /* : String */;
val* var314 /* : String */;
val* var315 /* : Template */;
val* var317 /* : Template */;
val* var319 /* : NativeArray[String] */;
static val* varonce318;
static val* varonce320;
val* var321 /* : String */;
char* var322 /* : CString */;
val* var323 /* : String */;
static val* varonce324;
val* var325 /* : String */;
char* var326 /* : CString */;
val* var327 /* : String */;
static val* varonce328;
val* var329 /* : String */;
char* var330 /* : CString */;
val* var331 /* : String */;
static val* varonce332;
val* var333 /* : String */;
char* var334 /* : CString */;
val* var335 /* : String */;
val* var336 /* : String */;
val* var337 /* : AbstractCompiler */;
val* var339 /* : AbstractCompiler */;
val* var340 /* : MModule */;
val* var342 /* : MModule */;
val* var343 /* : String */;
val* var344 /* : String */;
val* var345 /* : String */;
val* var346 /* : Template */;
val* var348 /* : Template */;
static val* varonce349;
val* var350 /* : String */;
char* var351 /* : CString */;
val* var352 /* : String */;
val* var353 /* : AbstractCompiler */;
val* var355 /* : AbstractCompiler */;
val* var356 /* : AbstractCompilerVisitor */;
val* var_nitni_visitor357 /* var nitni_visitor: AbstractCompilerVisitor */;
val* var358 /* : nullable StaticFrame */;
val* var360 /* : nullable StaticFrame */;
val* var363 /* : NativeArray[String] */;
static val* varonce362;
static val* varonce364;
val* var365 /* : String */;
char* var366 /* : CString */;
val* var367 /* : String */;
static val* varonce368;
val* var369 /* : String */;
char* var370 /* : CString */;
val* var371 /* : String */;
static val* varonce372;
val* var373 /* : String */;
char* var374 /* : CString */;
val* var375 /* : String */;
static val* varonce376;
val* var377 /* : String */;
char* var378 /* : CString */;
val* var379 /* : String */;
static val* varonce380;
val* var381 /* : String */;
char* var382 /* : CString */;
val* var383 /* : String */;
val* var384 /* : String */;
val* var385 /* : AbstractCompiler */;
val* var387 /* : AbstractCompiler */;
val* var388 /* : MModule */;
val* var390 /* : MModule */;
val* var391 /* : String */;
val* var392 /* : String */;
val* var393 /* : String */;
val* var394 /* : Sys */;
val* var395 /* : CallContext */;
val* var396 /* : String */;
val* var397 /* : String */;
val* var_full_internal_csignature398 /* var full_internal_csignature: String */;
val* var400 /* : NativeArray[String] */;
static val* varonce399;
static val* varonce401;
val* var402 /* : String */;
char* var403 /* : CString */;
val* var404 /* : String */;
static val* varonce405;
val* var406 /* : String */;
char* var407 /* : CString */;
val* var408 /* : String */;
static val* varonce409;
val* var410 /* : String */;
char* var411 /* : CString */;
val* var412 /* : String */;
val* var413 /* : String */;
val* var414 /* : String */;
val* var415 /* : String */;
val* var417 /* : NativeArray[String] */;
static val* varonce416;
static val* varonce418;
val* var419 /* : String */;
char* var420 /* : CString */;
val* var421 /* : String */;
val* var422 /* : String */;
static val* varonce423;
val* var424 /* : String */;
char* var425 /* : CString */;
val* var426 /* : String */;
val* var427 /* : RuntimeVariable */;
val* var_from_var428 /* var from_var: RuntimeVariable */;
val* var429 /* : RuntimeVariable */;
static val* varonce430;
val* var431 /* : String */;
char* var432 /* : CString */;
val* var433 /* : String */;
val* var434 /* : RuntimeVariable */;
val* var_check /* var check: RuntimeVariable */;
val* var436 /* : NativeArray[String] */;
static val* varonce435;
static val* varonce437;
val* var438 /* : String */;
char* var439 /* : CString */;
val* var440 /* : String */;
static val* varonce441;
val* var442 /* : String */;
char* var443 /* : CString */;
val* var444 /* : String */;
val* var445 /* : String */;
val* var446 /* : String */;
static val* varonce447;
val* var448 /* : String */;
char* var449 /* : CString */;
val* var450 /* : String */;
static val* varonce451;
val* var452 /* : String */;
char* var453 /* : CString */;
val* var454 /* : String */;
val* var455 /* : RuntimeVariable */;
val* var_recv_var456 /* var recv_var: RuntimeVariable */;
val* var457 /* : RuntimeVariable */;
static val* varonce458;
val* var459 /* : String */;
char* var460 /* : CString */;
val* var461 /* : String */;
val* var462 /* : MType */;
short int var463 /* : Bool */;
short int var465 /* : Bool */;
short int var467 /* : Bool */;
val* var468 /* : Template */;
val* var470 /* : Template */;
val* var472 /* : NativeArray[String] */;
static val* varonce471;
static val* varonce473;
val* var474 /* : String */;
char* var475 /* : CString */;
val* var476 /* : String */;
static val* varonce477;
val* var478 /* : String */;
char* var479 /* : CString */;
val* var480 /* : String */;
val* var481 /* : String */;
val* var482 /* : String */;
val* var483 /* : Template */;
val* var485 /* : Template */;
val* var487 /* : NativeArray[String] */;
static val* varonce486;
static val* varonce488;
val* var489 /* : String */;
char* var490 /* : CString */;
val* var491 /* : String */;
static val* varonce492;
val* var493 /* : String */;
char* var494 /* : CString */;
val* var495 /* : String */;
static val* varonce496;
val* var497 /* : String */;
char* var498 /* : CString */;
val* var499 /* : String */;
static val* varonce500;
val* var501 /* : String */;
char* var502 /* : CString */;
val* var503 /* : String */;
val* var504 /* : String */;
val* var505 /* : String */;
val* var506 /* : String */;
val* var507 /* : String */;
val* var508 /* : Template */;
val* var510 /* : Template */;
static val* varonce511;
val* var512 /* : String */;
char* var513 /* : CString */;
val* var514 /* : String */;
val* var515 /* : MType */;
short int var516 /* : Bool */;
short int var518 /* : Bool */;
short int var520 /* : Bool */;
val* var521 /* : Template */;
val* var523 /* : Template */;
val* var525 /* : NativeArray[String] */;
static val* varonce524;
static val* varonce526;
val* var527 /* : String */;
char* var528 /* : CString */;
val* var529 /* : String */;
static val* varonce530;
val* var531 /* : String */;
char* var532 /* : CString */;
val* var533 /* : String */;
val* var534 /* : String */;
val* var535 /* : String */;
val* var536 /* : Template */;
val* var538 /* : Template */;
val* var540 /* : NativeArray[String] */;
static val* varonce539;
static val* varonce541;
val* var542 /* : String */;
char* var543 /* : CString */;
val* var544 /* : String */;
static val* varonce545;
val* var546 /* : String */;
char* var547 /* : CString */;
val* var548 /* : String */;
static val* varonce549;
val* var550 /* : String */;
char* var551 /* : CString */;
val* var552 /* : String */;
static val* varonce553;
val* var554 /* : String */;
char* var555 /* : CString */;
val* var556 /* : String */;
val* var557 /* : String */;
val* var558 /* : String */;
val* var559 /* : String */;
val* var560 /* : String */;
val* var561 /* : Template */;
val* var563 /* : Template */;
static val* varonce564;
val* var565 /* : String */;
char* var566 /* : CString */;
val* var567 /* : String */;
var_v = p0;
var_ccu = p1;
var_compile_implementation_too = p2;
{
{ /* Inline nitni_callbacks#MExplicitCast#from (self) on <self:MExplicitCast> */
var2 = self->attrs[COLOR_nitc__nitni_callbacks__MExplicitCast___from].val; /* _from on <self:MExplicitCast> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _from");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__nitni_callbacks, 263);
fatal_exit(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
var_from = var;
{
{ /* Inline nitni_callbacks#MExplicitCast#to (self) on <self:MExplicitCast> */
var5 = self->attrs[COLOR_nitc__nitni_callbacks__MExplicitCast___to].val; /* _to on <self:MExplicitCast> */
if (unlikely(var5 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _to");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__nitni_callbacks, 264);
fatal_exit(1);
}
var3 = var5;
RET_LABEL4:(void)0;
}
}
var_to = var3;
if (unlikely(varonce==NULL)) {
var6 = NEW_core__NativeArray(9l, &type_core__NativeArray__core__String);
if (likely(varonce7!=NULL)) {
var8 = varonce7;
} else {
var9 = "int ";
var10 = core__abstract_text___CString___to_s_full(var9, 4l, 4l);
var8 = var10;
varonce7 = var8;
}
((struct instance_core__NativeArray*)var6)->values[0]=var8;
if (likely(varonce11!=NULL)) {
var12 = varonce11;
} else {
var13 = "___";
var14 = core__abstract_text___CString___to_s_full(var13, 3l, 3l);
var12 = var14;
varonce11 = var12;
}
((struct instance_core__NativeArray*)var6)->values[2]=var12;
if (likely(varonce15!=NULL)) {
var16 = varonce15;
} else {
var17 = "_is_a_";
var18 = core__abstract_text___CString___to_s_full(var17, 6l, 6l);
var16 = var18;
varonce15 = var16;
}
((struct instance_core__NativeArray*)var6)->values[4]=var16;
if (likely(varonce19!=NULL)) {
var20 = varonce19;
} else {
var21 = "(";
var22 = core__abstract_text___CString___to_s_full(var21, 1l, 1l);
var20 = var22;
varonce19 = var20;
}
((struct instance_core__NativeArray*)var6)->values[6]=var20;
if (likely(varonce23!=NULL)) {
var24 = varonce23;
} else {
var25 = ")";
var26 = core__abstract_text___CString___to_s_full(var25, 1l, 1l);
var24 = var26;
varonce23 = var24;
}
((struct instance_core__NativeArray*)var6)->values[8]=var24;
} else {
var6 = varonce;
varonce = NULL;
}
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler (var_v) on <var_v:AbstractCompilerVisitor> */
var29 = var_v->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <var_v:AbstractCompilerVisitor> */
if (unlikely(var29 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1200);
fatal_exit(1);
}
var27 = var29;
RET_LABEL28:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompiler#mainmodule (var27) on <var27:AbstractCompiler> */
var32 = var27->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___mainmodule].val; /* _mainmodule on <var27:AbstractCompiler> */
if (unlikely(var32 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mainmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 531);
fatal_exit(1);
}
var30 = var32;
RET_LABEL31:(void)0;
}
}
{
var33 = nitc___nitc__MModule___nitc__model_base__MEntity__c_name(var30);
}
((struct instance_core__NativeArray*)var6)->values[1]=var33;
{
var34 = ((val*(*)(val* self))(var_from->class->vft[COLOR_nitc__nitni_base__MType__mangled_cname]))(var_from); /* mangled_cname on <var_from:MType>*/
}
((struct instance_core__NativeArray*)var6)->values[3]=var34;
{
var35 = ((val*(*)(val* self))(var_to->class->vft[COLOR_nitc__nitni_base__MType__mangled_cname]))(var_to); /* mangled_cname on <var_to:MType>*/
}
((struct instance_core__NativeArray*)var6)->values[5]=var35;
{
var36 = ((val*(*)(val* self))(var_from->class->vft[COLOR_nitc__nitni_base__MType__cname_blind]))(var_from); /* cname_blind on <var_from:MType>*/
}
((struct instance_core__NativeArray*)var6)->values[7]=var36;
{
var37 = ((val*(*)(val* self))(var6->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var6); /* native_to_s on <var6:NativeArray[String]>*/
}
varonce = var6;
var_full_friendly_csignature = var37;
{
{ /* Inline c_tools#CCompilationUnit#header_decl (var_ccu) on <var_ccu:CCompilationUnit> */
var40 = var_ccu->attrs[COLOR_nitc__c_tools__CCompilationUnit___header_decl].val; /* _header_decl on <var_ccu:CCompilationUnit> */
if (unlikely(var40 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header_decl");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__c_tools, 34);
fatal_exit(1);
}
var38 = var40;
RET_LABEL39:(void)0;
}
}
if (unlikely(varonce41==NULL)) {
var42 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce43!=NULL)) {
var44 = varonce43;
} else {
var45 = "extern ";
var46 = core__abstract_text___CString___to_s_full(var45, 7l, 7l);
var44 = var46;
varonce43 = var44;
}
((struct instance_core__NativeArray*)var42)->values[0]=var44;
if (likely(varonce47!=NULL)) {
var48 = varonce47;
} else {
var49 = ";\n";
var50 = core__abstract_text___CString___to_s_full(var49, 2l, 2l);
var48 = var50;
varonce47 = var48;
}
((struct instance_core__NativeArray*)var42)->values[2]=var48;
} else {
var42 = varonce41;
varonce41 = NULL;
}
((struct instance_core__NativeArray*)var42)->values[1]=var_full_friendly_csignature;
{
var51 = ((val*(*)(val* self))(var42->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var42); /* native_to_s on <var42:NativeArray[String]>*/
}
varonce41 = var42;
{
template___template__Template___add(var38, var51); /* Direct call template#Template#add on <var38:Template>*/
}
{
{ /* Inline c_tools#CCompilationUnit#header_decl (var_ccu) on <var_ccu:CCompilationUnit> */
var54 = var_ccu->attrs[COLOR_nitc__c_tools__CCompilationUnit___header_decl].val; /* _header_decl on <var_ccu:CCompilationUnit> */
if (unlikely(var54 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header_decl");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__c_tools, 34);
fatal_exit(1);
}
var52 = var54;
RET_LABEL53:(void)0;
}
}
if (unlikely(varonce55==NULL)) {
var56 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce57!=NULL)) {
var58 = varonce57;
} else {
var59 = "#ifndef ";
var60 = core__abstract_text___CString___to_s_full(var59, 8l, 8l);
var58 = var60;
varonce57 = var58;
}
((struct instance_core__NativeArray*)var56)->values[0]=var58;
if (likely(varonce61!=NULL)) {
var62 = varonce61;
} else {
var63 = "\n";
var64 = core__abstract_text___CString___to_s_full(var63, 1l, 1l);
var62 = var64;
varonce61 = var62;
}
((struct instance_core__NativeArray*)var56)->values[2]=var62;
} else {
var56 = varonce55;
varonce55 = NULL;
}
{
var65 = nitc___nitc__MExplicitCast___check_cname(self);
}
((struct instance_core__NativeArray*)var56)->values[1]=var65;
{
var66 = ((val*(*)(val* self))(var56->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var56); /* native_to_s on <var56:NativeArray[String]>*/
}
varonce55 = var56;
{
template___template__Template___add(var52, var66); /* Direct call template#Template#add on <var52:Template>*/
}
{
{ /* Inline c_tools#CCompilationUnit#header_decl (var_ccu) on <var_ccu:CCompilationUnit> */
var69 = var_ccu->attrs[COLOR_nitc__c_tools__CCompilationUnit___header_decl].val; /* _header_decl on <var_ccu:CCompilationUnit> */
if (unlikely(var69 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header_decl");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__c_tools, 34);
fatal_exit(1);
}
var67 = var69;
RET_LABEL68:(void)0;
}
}
if (unlikely(varonce70==NULL)) {
var71 = NEW_core__NativeArray(7l, &type_core__NativeArray__core__String);
if (likely(varonce72!=NULL)) {
var73 = varonce72;
} else {
var74 = "#define ";
var75 = core__abstract_text___CString___to_s_full(var74, 8l, 8l);
var73 = var75;
varonce72 = var73;
}
((struct instance_core__NativeArray*)var71)->values[0]=var73;
if (likely(varonce76!=NULL)) {
var77 = varonce76;
} else {
var78 = " ";
var79 = core__abstract_text___CString___to_s_full(var78, 1l, 1l);
var77 = var79;
varonce76 = var77;
}
((struct instance_core__NativeArray*)var71)->values[2]=var77;
if (likely(varonce80!=NULL)) {
var81 = varonce80;
} else {
var82 = "___";
var83 = core__abstract_text___CString___to_s_full(var82, 3l, 3l);
var81 = var83;
varonce80 = var81;
}
((struct instance_core__NativeArray*)var71)->values[4]=var81;
if (likely(varonce84!=NULL)) {
var85 = varonce84;
} else {
var86 = "\n";
var87 = core__abstract_text___CString___to_s_full(var86, 1l, 1l);
var85 = var87;
varonce84 = var85;
}
((struct instance_core__NativeArray*)var71)->values[6]=var85;
} else {
var71 = varonce70;
varonce70 = NULL;
}
{
var88 = nitc___nitc__MExplicitCast___check_cname(self);
}
((struct instance_core__NativeArray*)var71)->values[1]=var88;
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler (var_v) on <var_v:AbstractCompilerVisitor> */
var91 = var_v->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <var_v:AbstractCompilerVisitor> */
if (unlikely(var91 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1200);
fatal_exit(1);
}
var89 = var91;
RET_LABEL90:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompiler#mainmodule (var89) on <var89:AbstractCompiler> */
var94 = var89->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___mainmodule].val; /* _mainmodule on <var89:AbstractCompiler> */
if (unlikely(var94 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mainmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 531);
fatal_exit(1);
}
var92 = var94;
RET_LABEL93:(void)0;
}
}
{
var95 = nitc___nitc__MModule___nitc__model_base__MEntity__c_name(var92);
}
((struct instance_core__NativeArray*)var71)->values[3]=var95;
{
var96 = nitc___nitc__MExplicitCast___check_cname(self);
}
((struct instance_core__NativeArray*)var71)->values[5]=var96;
{
var97 = ((val*(*)(val* self))(var71->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var71); /* native_to_s on <var71:NativeArray[String]>*/
}
varonce70 = var71;
{
template___template__Template___add(var67, var97); /* Direct call template#Template#add on <var67:Template>*/
}
{
{ /* Inline c_tools#CCompilationUnit#header_decl (var_ccu) on <var_ccu:CCompilationUnit> */
var100 = var_ccu->attrs[COLOR_nitc__c_tools__CCompilationUnit___header_decl].val; /* _header_decl on <var_ccu:CCompilationUnit> */
if (unlikely(var100 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header_decl");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__c_tools, 34);
fatal_exit(1);
}
var98 = var100;
RET_LABEL99:(void)0;
}
}
if (likely(varonce101!=NULL)) {
var102 = varonce101;
} else {
var103 = "#endif\n";
var104 = core__abstract_text___CString___to_s_full(var103, 7l, 7l);
var102 = var104;
varonce101 = var102;
}
{
template___template__Template___add(var98, var102); /* Direct call template#Template#add on <var98:Template>*/
}
if (var_compile_implementation_too){
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler (var_v) on <var_v:AbstractCompilerVisitor> */
var107 = var_v->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <var_v:AbstractCompilerVisitor> */
if (unlikely(var107 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1200);
fatal_exit(1);
}
var105 = var107;
RET_LABEL106:(void)0;
}
}
{
var108 = ((val*(*)(val* self))(var105->class->vft[COLOR_nitc__abstract_compiler__AbstractCompiler__new_visitor]))(var105); /* new_visitor on <var105:AbstractCompiler>*/
}
var_nitni_visitor = var108;
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#frame (var_v) on <var_v:AbstractCompilerVisitor> */
var111 = var_v->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___frame].val; /* _frame on <var_v:AbstractCompilerVisitor> */
var109 = var111;
RET_LABEL110:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#frame= (var_nitni_visitor,var109) on <var_nitni_visitor:AbstractCompilerVisitor> */
var_nitni_visitor->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___frame].val = var109; /* _frame on <var_nitni_visitor:AbstractCompilerVisitor> */
RET_LABEL112:(void)0;
}
}
if (unlikely(varonce113==NULL)) {
var114 = NEW_core__NativeArray(9l, &type_core__NativeArray__core__String);
if (likely(varonce115!=NULL)) {
var116 = varonce115;
} else {
var117 = "int ";
var118 = core__abstract_text___CString___to_s_full(var117, 4l, 4l);
var116 = var118;
varonce115 = var116;
}
((struct instance_core__NativeArray*)var114)->values[0]=var116;
if (likely(varonce119!=NULL)) {
var120 = varonce119;
} else {
var121 = "___";
var122 = core__abstract_text___CString___to_s_full(var121, 3l, 3l);
var120 = var122;
varonce119 = var120;
}
((struct instance_core__NativeArray*)var114)->values[2]=var120;
if (likely(varonce123!=NULL)) {
var124 = varonce123;
} else {
var125 = "_is_a_";
var126 = core__abstract_text___CString___to_s_full(var125, 6l, 6l);
var124 = var126;
varonce123 = var124;
}
((struct instance_core__NativeArray*)var114)->values[4]=var124;
if (likely(varonce127!=NULL)) {
var128 = varonce127;
} else {
var129 = "(";
var130 = core__abstract_text___CString___to_s_full(var129, 1l, 1l);
var128 = var130;
varonce127 = var128;
}
((struct instance_core__NativeArray*)var114)->values[6]=var128;
if (likely(varonce131!=NULL)) {
var132 = varonce131;
} else {
var133 = " from)";
var134 = core__abstract_text___CString___to_s_full(var133, 6l, 6l);
var132 = var134;
varonce131 = var132;
}
((struct instance_core__NativeArray*)var114)->values[8]=var132;
} else {
var114 = varonce113;
varonce113 = NULL;
}
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler (var_v) on <var_v:AbstractCompilerVisitor> */
var137 = var_v->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <var_v:AbstractCompilerVisitor> */
if (unlikely(var137 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1200);
fatal_exit(1);
}
var135 = var137;
RET_LABEL136:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompiler#mainmodule (var135) on <var135:AbstractCompiler> */
var140 = var135->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___mainmodule].val; /* _mainmodule on <var135:AbstractCompiler> */
if (unlikely(var140 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mainmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 531);
fatal_exit(1);
}
var138 = var140;
RET_LABEL139:(void)0;
}
}
{
var141 = nitc___nitc__MModule___nitc__model_base__MEntity__c_name(var138);
}
((struct instance_core__NativeArray*)var114)->values[1]=var141;
{
var142 = ((val*(*)(val* self))(var_from->class->vft[COLOR_nitc__nitni_base__MType__mangled_cname]))(var_from); /* mangled_cname on <var_from:MType>*/
}
((struct instance_core__NativeArray*)var114)->values[3]=var142;
{
var143 = ((val*(*)(val* self))(var_to->class->vft[COLOR_nitc__nitni_base__MType__mangled_cname]))(var_to); /* mangled_cname on <var_to:MType>*/
}
((struct instance_core__NativeArray*)var114)->values[5]=var143;
var144 = glob_sys;
{
var145 = nitc__nitni_utilities___core__Sys___internal_call_context(var144);
}
{
var146 = ((val*(*)(val* self, val* p0))(var145->class->vft[COLOR_nitc__nitni_utilities__CallContext__name_mtype]))(var145, var_from); /* name_mtype on <var145:CallContext>*/
}
((struct instance_core__NativeArray*)var114)->values[7]=var146;
{
var147 = ((val*(*)(val* self))(var114->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var114); /* native_to_s on <var114:NativeArray[String]>*/
}
varonce113 = var114;
var_full_internal_csignature = var147;
if (unlikely(varonce148==NULL)) {
var149 = NEW_core__NativeArray(5l, &type_core__NativeArray__core__String);
if (likely(varonce150!=NULL)) {
var151 = varonce150;
} else {
var152 = "/* nitni check for ";
var153 = core__abstract_text___CString___to_s_full(var152, 19l, 19l);
var151 = var153;
varonce150 = var151;
}
((struct instance_core__NativeArray*)var149)->values[0]=var151;
if (likely(varonce154!=NULL)) {
var155 = varonce154;
} else {
var156 = " to ";
var157 = core__abstract_text___CString___to_s_full(var156, 4l, 4l);
var155 = var157;
varonce154 = var155;
}
((struct instance_core__NativeArray*)var149)->values[2]=var155;
if (likely(varonce158!=NULL)) {
var159 = varonce158;
} else {
var160 = " */";
var161 = core__abstract_text___CString___to_s_full(var160, 3l, 3l);
var159 = var161;
varonce158 = var159;
}
((struct instance_core__NativeArray*)var149)->values[4]=var159;
} else {
var149 = varonce148;
varonce148 = NULL;
}
{
var162 = ((val*(*)(val* self))(var_from->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_from); /* to_s on <var_from:MType>*/
}
((struct instance_core__NativeArray*)var149)->values[1]=var162;
{
var163 = ((val*(*)(val* self))(var_to->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_to); /* to_s on <var_to:MType>*/
}
((struct instance_core__NativeArray*)var149)->values[3]=var163;
{
var164 = ((val*(*)(val* self))(var149->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var149); /* native_to_s on <var149:NativeArray[String]>*/
}
varonce148 = var149;
{
nitc___nitc__AbstractCompilerVisitor___add_decl(var_nitni_visitor, var164); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_nitni_visitor:AbstractCompilerVisitor>*/
}
if (unlikely(varonce165==NULL)) {
var166 = NEW_core__NativeArray(2l, &type_core__NativeArray__core__String);
if (likely(varonce167!=NULL)) {
var168 = varonce167;
} else {
var169 = " {";
var170 = core__abstract_text___CString___to_s_full(var169, 2l, 2l);
var168 = var170;
varonce167 = var168;
}
((struct instance_core__NativeArray*)var166)->values[1]=var168;
} else {
var166 = varonce165;
varonce165 = NULL;
}
((struct instance_core__NativeArray*)var166)->values[0]=var_full_internal_csignature;
{
var171 = ((val*(*)(val* self))(var166->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var166); /* native_to_s on <var166:NativeArray[String]>*/
}
varonce165 = var166;
{
nitc___nitc__AbstractCompilerVisitor___add_decl(var_nitni_visitor, var171); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_nitni_visitor:AbstractCompilerVisitor>*/
}
if (likely(varonce172!=NULL)) {
var173 = varonce172;
} else {
var174 = "from";
var175 = core__abstract_text___CString___to_s_full(var174, 4l, 4l);
var173 = var175;
varonce172 = var173;
}
{
var176 = nitc__light___AbstractCompilerVisitor___var_from_c(var_nitni_visitor, var173, var_from);
}
var_from_var = var176;
{
var177 = ((val*(*)(val* self, val* p0, val* p1))(var_nitni_visitor->class->vft[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor__box_extern]))(var_nitni_visitor, var_from_var, var_from); /* box_extern on <var_nitni_visitor:AbstractCompilerVisitor>*/
}
var_from_var = var177;
if (likely(varonce178!=NULL)) {
var179 = varonce178;
} else {
var180 = "isa";
var181 = core__abstract_text___CString___to_s_full(var180, 3l, 3l);
var179 = var181;
varonce178 = var179;
}
{
var182 = ((val*(*)(val* self, val* p0, val* p1, val* p2))(var_nitni_visitor->class->vft[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor__type_test]))(var_nitni_visitor, var_from_var, var_to, var179); /* type_test on <var_nitni_visitor:AbstractCompilerVisitor>*/
}
var_recv_var = var182;
if (unlikely(varonce183==NULL)) {
var184 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce185!=NULL)) {
var186 = varonce185;
} else {
var187 = "return ";
var188 = core__abstract_text___CString___to_s_full(var187, 7l, 7l);
var186 = var188;
varonce185 = var186;
}
((struct instance_core__NativeArray*)var184)->values[0]=var186;
if (likely(varonce189!=NULL)) {
var190 = varonce189;
} else {
var191 = ";";
var192 = core__abstract_text___CString___to_s_full(var191, 1l, 1l);
var190 = var192;
varonce189 = var190;
}
((struct instance_core__NativeArray*)var184)->values[2]=var190;
} else {
var184 = varonce183;
varonce183 = NULL;
}
{
var193 = ((val*(*)(val* self))(var_recv_var->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_recv_var); /* to_s on <var_recv_var:RuntimeVariable>*/
}
((struct instance_core__NativeArray*)var184)->values[1]=var193;
{
var194 = ((val*(*)(val* self))(var184->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var184); /* native_to_s on <var184:NativeArray[String]>*/
}
varonce183 = var184;
{
nitc___nitc__AbstractCompilerVisitor___add(var_nitni_visitor, var194); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_nitni_visitor:AbstractCompilerVisitor>*/
}
if (likely(varonce195!=NULL)) {
var196 = varonce195;
} else {
var197 = "}";
var198 = core__abstract_text___CString___to_s_full(var197, 1l, 1l);
var196 = var198;
varonce195 = var196;
}
{
nitc___nitc__AbstractCompilerVisitor___add(var_nitni_visitor, var196); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_nitni_visitor:AbstractCompilerVisitor>*/
}
} else {
}
{
var199 = ((val*(*)(val* self))(var_to->class->vft[COLOR_nitc__model__MType__as_nullable]))(var_to); /* as_nullable on <var_to:MType>*/
}
{
{ /* Inline kernel#Object#== (var_from,var199) on <var_from:MType> */
var_other = var199;
{
{ /* Inline kernel#Object#is_same_instance (var_from,var_other) on <var_from:MType> */
var204 = var_from == var_other;
var202 = var204;
goto RET_LABEL203;
RET_LABEL203:(void)0;
}
}
var200 = var202;
goto RET_LABEL201;
RET_LABEL201:(void)0;
}
}
if (var200){
{
{ /* Inline c_tools#CCompilationUnit#header_decl (var_ccu) on <var_ccu:CCompilationUnit> */
var207 = var_ccu->attrs[COLOR_nitc__c_tools__CCompilationUnit___header_decl].val; /* _header_decl on <var_ccu:CCompilationUnit> */
if (unlikely(var207 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header_decl");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__c_tools, 34);
fatal_exit(1);
}
var205 = var207;
RET_LABEL206:(void)0;
}
}
if (unlikely(varonce208==NULL)) {
var209 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce210!=NULL)) {
var211 = varonce210;
} else {
var212 = "#ifndef ";
var213 = core__abstract_text___CString___to_s_full(var212, 8l, 8l);
var211 = var213;
varonce210 = var211;
}
((struct instance_core__NativeArray*)var209)->values[0]=var211;
if (likely(varonce214!=NULL)) {
var215 = varonce214;
} else {
var216 = "_is_null\n";
var217 = core__abstract_text___CString___to_s_full(var216, 9l, 9l);
var215 = var217;
varonce214 = var215;
}
((struct instance_core__NativeArray*)var209)->values[2]=var215;
} else {
var209 = varonce208;
varonce208 = NULL;
}
{
var218 = ((val*(*)(val* self))(var_from->class->vft[COLOR_nitc__nitni_base__MType__mangled_cname]))(var_from); /* mangled_cname on <var_from:MType>*/
}
((struct instance_core__NativeArray*)var209)->values[1]=var218;
{
var219 = ((val*(*)(val* self))(var209->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var209); /* native_to_s on <var209:NativeArray[String]>*/
}
varonce208 = var209;
{
template___template__Template___add(var205, var219); /* Direct call template#Template#add on <var205:Template>*/
}
{
{ /* Inline c_tools#CCompilationUnit#header_decl (var_ccu) on <var_ccu:CCompilationUnit> */
var222 = var_ccu->attrs[COLOR_nitc__c_tools__CCompilationUnit___header_decl].val; /* _header_decl on <var_ccu:CCompilationUnit> */
if (unlikely(var222 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header_decl");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__c_tools, 34);
fatal_exit(1);
}
var220 = var222;
RET_LABEL221:(void)0;
}
}
if (unlikely(varonce223==NULL)) {
var224 = NEW_core__NativeArray(7l, &type_core__NativeArray__core__String);
if (likely(varonce225!=NULL)) {
var226 = varonce225;
} else {
var227 = "#define ";
var228 = core__abstract_text___CString___to_s_full(var227, 8l, 8l);
var226 = var228;
varonce225 = var226;
}
((struct instance_core__NativeArray*)var224)->values[0]=var226;
if (likely(varonce229!=NULL)) {
var230 = varonce229;
} else {
var231 = "_is_null !";
var232 = core__abstract_text___CString___to_s_full(var231, 10l, 10l);
var230 = var232;
varonce229 = var230;
}
((struct instance_core__NativeArray*)var224)->values[2]=var230;
if (likely(varonce233!=NULL)) {
var234 = varonce233;
} else {
var235 = "_is_a_";
var236 = core__abstract_text___CString___to_s_full(var235, 6l, 6l);
var234 = var236;
varonce233 = var234;
}
((struct instance_core__NativeArray*)var224)->values[4]=var234;
if (likely(varonce237!=NULL)) {
var238 = varonce237;
} else {
var239 = "\n";
var240 = core__abstract_text___CString___to_s_full(var239, 1l, 1l);
var238 = var240;
varonce237 = var238;
}
((struct instance_core__NativeArray*)var224)->values[6]=var238;
} else {
var224 = varonce223;
varonce223 = NULL;
}
{
var241 = ((val*(*)(val* self))(var_from->class->vft[COLOR_nitc__nitni_base__MType__mangled_cname]))(var_from); /* mangled_cname on <var_from:MType>*/
}
((struct instance_core__NativeArray*)var224)->values[1]=var241;
{
var242 = ((val*(*)(val* self))(var_from->class->vft[COLOR_nitc__nitni_base__MType__mangled_cname]))(var_from); /* mangled_cname on <var_from:MType>*/
}
((struct instance_core__NativeArray*)var224)->values[3]=var242;
{
var243 = ((val*(*)(val* self))(var_to->class->vft[COLOR_nitc__nitni_base__MType__mangled_cname]))(var_to); /* mangled_cname on <var_to:MType>*/
}
((struct instance_core__NativeArray*)var224)->values[5]=var243;
{
var244 = ((val*(*)(val* self))(var224->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var224); /* native_to_s on <var224:NativeArray[String]>*/
}
varonce223 = var224;
{
template___template__Template___add(var220, var244); /* Direct call template#Template#add on <var220:Template>*/
}
{
{ /* Inline c_tools#CCompilationUnit#header_decl (var_ccu) on <var_ccu:CCompilationUnit> */
var247 = var_ccu->attrs[COLOR_nitc__c_tools__CCompilationUnit___header_decl].val; /* _header_decl on <var_ccu:CCompilationUnit> */
if (unlikely(var247 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header_decl");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__c_tools, 34);
fatal_exit(1);
}
var245 = var247;
RET_LABEL246:(void)0;
}
}
if (likely(varonce248!=NULL)) {
var249 = varonce248;
} else {
var250 = "#endif\n";
var251 = core__abstract_text___CString___to_s_full(var250, 7l, 7l);
var249 = var251;
varonce248 = var249;
}
{
template___template__Template___add(var245, var249); /* Direct call template#Template#add on <var245:Template>*/
}
} else {
}
if (unlikely(varonce252==NULL)) {
var253 = NEW_core__NativeArray(10l, &type_core__NativeArray__core__String);
if (likely(varonce254!=NULL)) {
var255 = varonce254;
} else {
var256 = " ";
var257 = core__abstract_text___CString___to_s_full(var256, 1l, 1l);
var255 = var257;
varonce254 = var255;
}
((struct instance_core__NativeArray*)var253)->values[1]=var255;
if (likely(varonce258!=NULL)) {
var259 = varonce258;
} else {
var260 = "___";
var261 = core__abstract_text___CString___to_s_full(var260, 3l, 3l);
var259 = var261;
varonce258 = var259;
}
((struct instance_core__NativeArray*)var253)->values[3]=var259;
if (likely(varonce262!=NULL)) {
var263 = varonce262;
} else {
var264 = "_as_";
var265 = core__abstract_text___CString___to_s_full(var264, 4l, 4l);
var263 = var265;
varonce262 = var263;
}
((struct instance_core__NativeArray*)var253)->values[5]=var263;
if (likely(varonce266!=NULL)) {
var267 = varonce266;
} else {
var268 = "(";
var269 = core__abstract_text___CString___to_s_full(var268, 1l, 1l);
var267 = var269;
varonce266 = var267;
}
((struct instance_core__NativeArray*)var253)->values[7]=var267;
if (likely(varonce270!=NULL)) {
var271 = varonce270;
} else {
var272 = ")";
var273 = core__abstract_text___CString___to_s_full(var272, 1l, 1l);
var271 = var273;
varonce270 = var271;
}
((struct instance_core__NativeArray*)var253)->values[9]=var271;
} else {
var253 = varonce252;
varonce252 = NULL;
}
{
var274 = ((val*(*)(val* self))(var_to->class->vft[COLOR_nitc__nitni_base__MType__cname_blind]))(var_to); /* cname_blind on <var_to:MType>*/
}
((struct instance_core__NativeArray*)var253)->values[0]=var274;
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler (var_v) on <var_v:AbstractCompilerVisitor> */
var277 = var_v->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <var_v:AbstractCompilerVisitor> */
if (unlikely(var277 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1200);
fatal_exit(1);
}
var275 = var277;
RET_LABEL276:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompiler#mainmodule (var275) on <var275:AbstractCompiler> */
var280 = var275->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___mainmodule].val; /* _mainmodule on <var275:AbstractCompiler> */
if (unlikely(var280 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mainmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 531);
fatal_exit(1);
}
var278 = var280;
RET_LABEL279:(void)0;
}
}
{
var281 = nitc___nitc__MModule___nitc__model_base__MEntity__c_name(var278);
}
((struct instance_core__NativeArray*)var253)->values[2]=var281;
{
var282 = ((val*(*)(val* self))(var_from->class->vft[COLOR_nitc__nitni_base__MType__mangled_cname]))(var_from); /* mangled_cname on <var_from:MType>*/
}
((struct instance_core__NativeArray*)var253)->values[4]=var282;
{
var283 = ((val*(*)(val* self))(var_to->class->vft[COLOR_nitc__nitni_base__MType__mangled_cname]))(var_to); /* mangled_cname on <var_to:MType>*/
}
((struct instance_core__NativeArray*)var253)->values[6]=var283;
{
var284 = ((val*(*)(val* self))(var_from->class->vft[COLOR_nitc__nitni_base__MType__cname_blind]))(var_from); /* cname_blind on <var_from:MType>*/
}
((struct instance_core__NativeArray*)var253)->values[8]=var284;
{
var285 = ((val*(*)(val* self))(var253->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var253); /* native_to_s on <var253:NativeArray[String]>*/
}
varonce252 = var253;
var_full_friendly_csignature = var285;
{
{ /* Inline c_tools#CCompilationUnit#header_decl (var_ccu) on <var_ccu:CCompilationUnit> */
var288 = var_ccu->attrs[COLOR_nitc__c_tools__CCompilationUnit___header_decl].val; /* _header_decl on <var_ccu:CCompilationUnit> */
if (unlikely(var288 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header_decl");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__c_tools, 34);
fatal_exit(1);
}
var286 = var288;
RET_LABEL287:(void)0;
}
}
if (unlikely(varonce289==NULL)) {
var290 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce291!=NULL)) {
var292 = varonce291;
} else {
var293 = "extern ";
var294 = core__abstract_text___CString___to_s_full(var293, 7l, 7l);
var292 = var294;
varonce291 = var292;
}
((struct instance_core__NativeArray*)var290)->values[0]=var292;
if (likely(varonce295!=NULL)) {
var296 = varonce295;
} else {
var297 = ";\n";
var298 = core__abstract_text___CString___to_s_full(var297, 2l, 2l);
var296 = var298;
varonce295 = var296;
}
((struct instance_core__NativeArray*)var290)->values[2]=var296;
} else {
var290 = varonce289;
varonce289 = NULL;
}
((struct instance_core__NativeArray*)var290)->values[1]=var_full_friendly_csignature;
{
var299 = ((val*(*)(val* self))(var290->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var290); /* native_to_s on <var290:NativeArray[String]>*/
}
varonce289 = var290;
{
template___template__Template___add(var286, var299); /* Direct call template#Template#add on <var286:Template>*/
}
{
{ /* Inline c_tools#CCompilationUnit#header_decl (var_ccu) on <var_ccu:CCompilationUnit> */
var302 = var_ccu->attrs[COLOR_nitc__c_tools__CCompilationUnit___header_decl].val; /* _header_decl on <var_ccu:CCompilationUnit> */
if (unlikely(var302 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header_decl");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__c_tools, 34);
fatal_exit(1);
}
var300 = var302;
RET_LABEL301:(void)0;
}
}
if (unlikely(varonce303==NULL)) {
var304 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce305!=NULL)) {
var306 = varonce305;
} else {
var307 = "#ifndef ";
var308 = core__abstract_text___CString___to_s_full(var307, 8l, 8l);
var306 = var308;
varonce305 = var306;
}
((struct instance_core__NativeArray*)var304)->values[0]=var306;
if (likely(varonce309!=NULL)) {
var310 = varonce309;
} else {
var311 = "\n";
var312 = core__abstract_text___CString___to_s_full(var311, 1l, 1l);
var310 = var312;
varonce309 = var310;
}
((struct instance_core__NativeArray*)var304)->values[2]=var310;
} else {
var304 = varonce303;
varonce303 = NULL;
}
{
var313 = nitc___nitc__MExplicitCast___cast_cname(self);
}
((struct instance_core__NativeArray*)var304)->values[1]=var313;
{
var314 = ((val*(*)(val* self))(var304->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var304); /* native_to_s on <var304:NativeArray[String]>*/
}
varonce303 = var304;
{
template___template__Template___add(var300, var314); /* Direct call template#Template#add on <var300:Template>*/
}
{
{ /* Inline c_tools#CCompilationUnit#header_decl (var_ccu) on <var_ccu:CCompilationUnit> */
var317 = var_ccu->attrs[COLOR_nitc__c_tools__CCompilationUnit___header_decl].val; /* _header_decl on <var_ccu:CCompilationUnit> */
if (unlikely(var317 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header_decl");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__c_tools, 34);
fatal_exit(1);
}
var315 = var317;
RET_LABEL316:(void)0;
}
}
if (unlikely(varonce318==NULL)) {
var319 = NEW_core__NativeArray(7l, &type_core__NativeArray__core__String);
if (likely(varonce320!=NULL)) {
var321 = varonce320;
} else {
var322 = "#define ";
var323 = core__abstract_text___CString___to_s_full(var322, 8l, 8l);
var321 = var323;
varonce320 = var321;
}
((struct instance_core__NativeArray*)var319)->values[0]=var321;
if (likely(varonce324!=NULL)) {
var325 = varonce324;
} else {
var326 = " ";
var327 = core__abstract_text___CString___to_s_full(var326, 1l, 1l);
var325 = var327;
varonce324 = var325;
}
((struct instance_core__NativeArray*)var319)->values[2]=var325;
if (likely(varonce328!=NULL)) {
var329 = varonce328;
} else {
var330 = "___";
var331 = core__abstract_text___CString___to_s_full(var330, 3l, 3l);
var329 = var331;
varonce328 = var329;
}
((struct instance_core__NativeArray*)var319)->values[4]=var329;
if (likely(varonce332!=NULL)) {
var333 = varonce332;
} else {
var334 = "\n";
var335 = core__abstract_text___CString___to_s_full(var334, 1l, 1l);
var333 = var335;
varonce332 = var333;
}
((struct instance_core__NativeArray*)var319)->values[6]=var333;
} else {
var319 = varonce318;
varonce318 = NULL;
}
{
var336 = nitc___nitc__MExplicitCast___cast_cname(self);
}
((struct instance_core__NativeArray*)var319)->values[1]=var336;
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler (var_v) on <var_v:AbstractCompilerVisitor> */
var339 = var_v->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <var_v:AbstractCompilerVisitor> */
if (unlikely(var339 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1200);
fatal_exit(1);
}
var337 = var339;
RET_LABEL338:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompiler#mainmodule (var337) on <var337:AbstractCompiler> */
var342 = var337->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___mainmodule].val; /* _mainmodule on <var337:AbstractCompiler> */
if (unlikely(var342 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mainmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 531);
fatal_exit(1);
}
var340 = var342;
RET_LABEL341:(void)0;
}
}
{
var343 = nitc___nitc__MModule___nitc__model_base__MEntity__c_name(var340);
}
((struct instance_core__NativeArray*)var319)->values[3]=var343;
{
var344 = nitc___nitc__MExplicitCast___cast_cname(self);
}
((struct instance_core__NativeArray*)var319)->values[5]=var344;
{
var345 = ((val*(*)(val* self))(var319->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var319); /* native_to_s on <var319:NativeArray[String]>*/
}
varonce318 = var319;
{
template___template__Template___add(var315, var345); /* Direct call template#Template#add on <var315:Template>*/
}
{
{ /* Inline c_tools#CCompilationUnit#header_decl (var_ccu) on <var_ccu:CCompilationUnit> */
var348 = var_ccu->attrs[COLOR_nitc__c_tools__CCompilationUnit___header_decl].val; /* _header_decl on <var_ccu:CCompilationUnit> */
if (unlikely(var348 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header_decl");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__c_tools, 34);
fatal_exit(1);
}
var346 = var348;
RET_LABEL347:(void)0;
}
}
if (likely(varonce349!=NULL)) {
var350 = varonce349;
} else {
var351 = "#endif\n";
var352 = core__abstract_text___CString___to_s_full(var351, 7l, 7l);
var350 = var352;
varonce349 = var350;
}
{
template___template__Template___add(var346, var350); /* Direct call template#Template#add on <var346:Template>*/
}
if (var_compile_implementation_too){
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler (var_v) on <var_v:AbstractCompilerVisitor> */
var355 = var_v->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <var_v:AbstractCompilerVisitor> */
if (unlikely(var355 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1200);
fatal_exit(1);
}
var353 = var355;
RET_LABEL354:(void)0;
}
}
{
var356 = ((val*(*)(val* self))(var353->class->vft[COLOR_nitc__abstract_compiler__AbstractCompiler__new_visitor]))(var353); /* new_visitor on <var353:AbstractCompiler>*/
}
var_nitni_visitor357 = var356;
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#frame (var_v) on <var_v:AbstractCompilerVisitor> */
var360 = var_v->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___frame].val; /* _frame on <var_v:AbstractCompilerVisitor> */
var358 = var360;
RET_LABEL359:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#frame= (var_nitni_visitor357,var358) on <var_nitni_visitor357:AbstractCompilerVisitor> */
var_nitni_visitor357->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___frame].val = var358; /* _frame on <var_nitni_visitor357:AbstractCompilerVisitor> */
RET_LABEL361:(void)0;
}
}
if (unlikely(varonce362==NULL)) {
var363 = NEW_core__NativeArray(10l, &type_core__NativeArray__core__String);
if (likely(varonce364!=NULL)) {
var365 = varonce364;
} else {
var366 = " ";
var367 = core__abstract_text___CString___to_s_full(var366, 1l, 1l);
var365 = var367;
varonce364 = var365;
}
((struct instance_core__NativeArray*)var363)->values[1]=var365;
if (likely(varonce368!=NULL)) {
var369 = varonce368;
} else {
var370 = "___";
var371 = core__abstract_text___CString___to_s_full(var370, 3l, 3l);
var369 = var371;
varonce368 = var369;
}
((struct instance_core__NativeArray*)var363)->values[3]=var369;
if (likely(varonce372!=NULL)) {
var373 = varonce372;
} else {
var374 = "_as_";
var375 = core__abstract_text___CString___to_s_full(var374, 4l, 4l);
var373 = var375;
varonce372 = var373;
}
((struct instance_core__NativeArray*)var363)->values[5]=var373;
if (likely(varonce376!=NULL)) {
var377 = varonce376;
} else {
var378 = "(";
var379 = core__abstract_text___CString___to_s_full(var378, 1l, 1l);
var377 = var379;
varonce376 = var377;
}
((struct instance_core__NativeArray*)var363)->values[7]=var377;
if (likely(varonce380!=NULL)) {
var381 = varonce380;
} else {
var382 = " from)";
var383 = core__abstract_text___CString___to_s_full(var382, 6l, 6l);
var381 = var383;
varonce380 = var381;
}
((struct instance_core__NativeArray*)var363)->values[9]=var381;
} else {
var363 = varonce362;
varonce362 = NULL;
}
{
var384 = ((val*(*)(val* self))(var_to->class->vft[COLOR_nitc__nitni_base__MType__cname_blind]))(var_to); /* cname_blind on <var_to:MType>*/
}
((struct instance_core__NativeArray*)var363)->values[0]=var384;
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler (var_v) on <var_v:AbstractCompilerVisitor> */
var387 = var_v->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <var_v:AbstractCompilerVisitor> */
if (unlikely(var387 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1200);
fatal_exit(1);
}
var385 = var387;
RET_LABEL386:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompiler#mainmodule (var385) on <var385:AbstractCompiler> */
var390 = var385->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___mainmodule].val; /* _mainmodule on <var385:AbstractCompiler> */
if (unlikely(var390 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mainmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 531);
fatal_exit(1);
}
var388 = var390;
RET_LABEL389:(void)0;
}
}
{
var391 = nitc___nitc__MModule___nitc__model_base__MEntity__c_name(var388);
}
((struct instance_core__NativeArray*)var363)->values[2]=var391;
{
var392 = ((val*(*)(val* self))(var_from->class->vft[COLOR_nitc__nitni_base__MType__mangled_cname]))(var_from); /* mangled_cname on <var_from:MType>*/
}
((struct instance_core__NativeArray*)var363)->values[4]=var392;
{
var393 = ((val*(*)(val* self))(var_to->class->vft[COLOR_nitc__nitni_base__MType__mangled_cname]))(var_to); /* mangled_cname on <var_to:MType>*/
}
((struct instance_core__NativeArray*)var363)->values[6]=var393;
var394 = glob_sys;
{
var395 = nitc__nitni_utilities___core__Sys___internal_call_context(var394);
}
{
var396 = ((val*(*)(val* self, val* p0))(var395->class->vft[COLOR_nitc__nitni_utilities__CallContext__name_mtype]))(var395, var_from); /* name_mtype on <var395:CallContext>*/
}
((struct instance_core__NativeArray*)var363)->values[8]=var396;
{
var397 = ((val*(*)(val* self))(var363->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var363); /* native_to_s on <var363:NativeArray[String]>*/
}
varonce362 = var363;
var_full_internal_csignature398 = var397;
if (unlikely(varonce399==NULL)) {
var400 = NEW_core__NativeArray(5l, &type_core__NativeArray__core__String);
if (likely(varonce401!=NULL)) {
var402 = varonce401;
} else {
var403 = "/* nitni cast for ";
var404 = core__abstract_text___CString___to_s_full(var403, 18l, 18l);
var402 = var404;
varonce401 = var402;
}
((struct instance_core__NativeArray*)var400)->values[0]=var402;
if (likely(varonce405!=NULL)) {
var406 = varonce405;
} else {
var407 = " to ";
var408 = core__abstract_text___CString___to_s_full(var407, 4l, 4l);
var406 = var408;
varonce405 = var406;
}
((struct instance_core__NativeArray*)var400)->values[2]=var406;
if (likely(varonce409!=NULL)) {
var410 = varonce409;
} else {
var411 = " */";
var412 = core__abstract_text___CString___to_s_full(var411, 3l, 3l);
var410 = var412;
varonce409 = var410;
}
((struct instance_core__NativeArray*)var400)->values[4]=var410;
} else {
var400 = varonce399;
varonce399 = NULL;
}
{
var413 = ((val*(*)(val* self))(var_from->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_from); /* to_s on <var_from:MType>*/
}
((struct instance_core__NativeArray*)var400)->values[1]=var413;
{
var414 = ((val*(*)(val* self))(var_to->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_to); /* to_s on <var_to:MType>*/
}
((struct instance_core__NativeArray*)var400)->values[3]=var414;
{
var415 = ((val*(*)(val* self))(var400->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var400); /* native_to_s on <var400:NativeArray[String]>*/
}
varonce399 = var400;
{
nitc___nitc__AbstractCompilerVisitor___add_decl(var_nitni_visitor357, var415); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_nitni_visitor357:AbstractCompilerVisitor>*/
}
if (unlikely(varonce416==NULL)) {
var417 = NEW_core__NativeArray(2l, &type_core__NativeArray__core__String);
if (likely(varonce418!=NULL)) {
var419 = varonce418;
} else {
var420 = " {";
var421 = core__abstract_text___CString___to_s_full(var420, 2l, 2l);
var419 = var421;
varonce418 = var419;
}
((struct instance_core__NativeArray*)var417)->values[1]=var419;
} else {
var417 = varonce416;
varonce416 = NULL;
}
((struct instance_core__NativeArray*)var417)->values[0]=var_full_internal_csignature398;
{
var422 = ((val*(*)(val* self))(var417->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var417); /* native_to_s on <var417:NativeArray[String]>*/
}
varonce416 = var417;
{
nitc___nitc__AbstractCompilerVisitor___add_decl(var_nitni_visitor357, var422); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_nitni_visitor357:AbstractCompilerVisitor>*/
}
if (likely(varonce423!=NULL)) {
var424 = varonce423;
} else {
var425 = "from";
var426 = core__abstract_text___CString___to_s_full(var425, 4l, 4l);
var424 = var426;
varonce423 = var424;
}
{
var427 = nitc__light___AbstractCompilerVisitor___var_from_c(var_nitni_visitor357, var424, var_from);
}
var_from_var428 = var427;
{
var429 = ((val*(*)(val* self, val* p0, val* p1))(var_nitni_visitor357->class->vft[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor__box_extern]))(var_nitni_visitor357, var_from_var428, var_from); /* box_extern on <var_nitni_visitor357:AbstractCompilerVisitor>*/
}
var_from_var428 = var429;
if (likely(varonce430!=NULL)) {
var431 = varonce430;
} else {
var432 = "as";
var433 = core__abstract_text___CString___to_s_full(var432, 2l, 2l);
var431 = var433;
varonce430 = var431;
}
{
var434 = ((val*(*)(val* self, val* p0, val* p1, val* p2))(var_nitni_visitor357->class->vft[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor__type_test]))(var_nitni_visitor357, var_from_var428, var_to, var431); /* type_test on <var_nitni_visitor357:AbstractCompilerVisitor>*/
}
var_check = var434;
if (unlikely(varonce435==NULL)) {
var436 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce437!=NULL)) {
var438 = varonce437;
} else {
var439 = "if (!";
var440 = core__abstract_text___CString___to_s_full(var439, 5l, 5l);
var438 = var440;
varonce437 = var438;
}
((struct instance_core__NativeArray*)var436)->values[0]=var438;
if (likely(varonce441!=NULL)) {
var442 = varonce441;
} else {
var443 = ") {";
var444 = core__abstract_text___CString___to_s_full(var443, 3l, 3l);
var442 = var444;
varonce441 = var442;
}
((struct instance_core__NativeArray*)var436)->values[2]=var442;
} else {
var436 = varonce435;
varonce435 = NULL;
}
{
var445 = ((val*(*)(val* self))(var_check->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_check); /* to_s on <var_check:RuntimeVariable>*/
}
((struct instance_core__NativeArray*)var436)->values[1]=var445;
{
var446 = ((val*(*)(val* self))(var436->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var436); /* native_to_s on <var436:NativeArray[String]>*/
}
varonce435 = var436;
{
nitc___nitc__AbstractCompilerVisitor___add(var_nitni_visitor357, var446); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_nitni_visitor357:AbstractCompilerVisitor>*/
}
if (likely(varonce447!=NULL)) {
var448 = varonce447;
} else {
var449 = "FFI cast failed";
var450 = core__abstract_text___CString___to_s_full(var449, 15l, 15l);
var448 = var450;
varonce447 = var448;
}
{
nitc___nitc__AbstractCompilerVisitor___add_abort(var_nitni_visitor357, var448); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_abort on <var_nitni_visitor357:AbstractCompilerVisitor>*/
}
if (likely(varonce451!=NULL)) {
var452 = varonce451;
} else {
var453 = "}";
var454 = core__abstract_text___CString___to_s_full(var453, 1l, 1l);
var452 = var454;
varonce451 = var452;
}
{
nitc___nitc__AbstractCompilerVisitor___add(var_nitni_visitor357, var452); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_nitni_visitor357:AbstractCompilerVisitor>*/
}
{
var455 = ((val*(*)(val* self, val* p0, val* p1))(var_nitni_visitor357->class->vft[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor__autobox]))(var_nitni_visitor357, var_from_var428, var_to); /* autobox on <var_nitni_visitor357:AbstractCompilerVisitor>*/
}
var_recv_var456 = var455;
{
var457 = ((val*(*)(val* self, val* p0, val* p1))(var_nitni_visitor357->class->vft[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor__unbox_extern]))(var_nitni_visitor357, var_recv_var456, var_to); /* unbox_extern on <var_nitni_visitor357:AbstractCompilerVisitor>*/
}
var_recv_var456 = var457;
{
nitc__light___AbstractCompilerVisitor___ret_to_c(var_nitni_visitor357, var_recv_var456, var_to); /* Direct call light#AbstractCompilerVisitor#ret_to_c on <var_nitni_visitor357:AbstractCompilerVisitor>*/
}
if (likely(varonce458!=NULL)) {
var459 = varonce458;
} else {
var460 = "}";
var461 = core__abstract_text___CString___to_s_full(var460, 1l, 1l);
var459 = var461;
varonce458 = var459;
}
{
nitc___nitc__AbstractCompilerVisitor___add(var_nitni_visitor357, var459); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_nitni_visitor357:AbstractCompilerVisitor>*/
}
} else {
}
{
var462 = ((val*(*)(val* self))(var_from->class->vft[COLOR_nitc__model__MType__as_nullable]))(var_from); /* as_nullable on <var_from:MType>*/
}
{
{ /* Inline kernel#Object#== (var462,var_to) on <var462:MType> */
var_other = var_to;
{
{ /* Inline kernel#Object#is_same_instance (var462,var_other) on <var462:MType> */
var467 = var462 == var_other;
var465 = var467;
goto RET_LABEL466;
RET_LABEL466:(void)0;
}
}
var463 = var465;
goto RET_LABEL464;
RET_LABEL464:(void)0;
}
}
if (var463){
{
{ /* Inline c_tools#CCompilationUnit#header_decl (var_ccu) on <var_ccu:CCompilationUnit> */
var470 = var_ccu->attrs[COLOR_nitc__c_tools__CCompilationUnit___header_decl].val; /* _header_decl on <var_ccu:CCompilationUnit> */
if (unlikely(var470 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header_decl");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__c_tools, 34);
fatal_exit(1);
}
var468 = var470;
RET_LABEL469:(void)0;
}
}
if (unlikely(varonce471==NULL)) {
var472 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce473!=NULL)) {
var474 = varonce473;
} else {
var475 = "#ifndef ";
var476 = core__abstract_text___CString___to_s_full(var475, 8l, 8l);
var474 = var476;
varonce473 = var474;
}
((struct instance_core__NativeArray*)var472)->values[0]=var474;
if (likely(varonce477!=NULL)) {
var478 = varonce477;
} else {
var479 = "_as_nullable\n";
var480 = core__abstract_text___CString___to_s_full(var479, 13l, 13l);
var478 = var480;
varonce477 = var478;
}
((struct instance_core__NativeArray*)var472)->values[2]=var478;
} else {
var472 = varonce471;
varonce471 = NULL;
}
{
var481 = ((val*(*)(val* self))(var_from->class->vft[COLOR_nitc__nitni_base__MType__mangled_cname]))(var_from); /* mangled_cname on <var_from:MType>*/
}
((struct instance_core__NativeArray*)var472)->values[1]=var481;
{
var482 = ((val*(*)(val* self))(var472->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var472); /* native_to_s on <var472:NativeArray[String]>*/
}
varonce471 = var472;
{
template___template__Template___add(var468, var482); /* Direct call template#Template#add on <var468:Template>*/
}
{
{ /* Inline c_tools#CCompilationUnit#header_decl (var_ccu) on <var_ccu:CCompilationUnit> */
var485 = var_ccu->attrs[COLOR_nitc__c_tools__CCompilationUnit___header_decl].val; /* _header_decl on <var_ccu:CCompilationUnit> */
if (unlikely(var485 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header_decl");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__c_tools, 34);
fatal_exit(1);
}
var483 = var485;
RET_LABEL484:(void)0;
}
}
if (unlikely(varonce486==NULL)) {
var487 = NEW_core__NativeArray(7l, &type_core__NativeArray__core__String);
if (likely(varonce488!=NULL)) {
var489 = varonce488;
} else {
var490 = "#define ";
var491 = core__abstract_text___CString___to_s_full(var490, 8l, 8l);
var489 = var491;
varonce488 = var489;
}
((struct instance_core__NativeArray*)var487)->values[0]=var489;
if (likely(varonce492!=NULL)) {
var493 = varonce492;
} else {
var494 = "_as_nullable ";
var495 = core__abstract_text___CString___to_s_full(var494, 13l, 13l);
var493 = var495;
varonce492 = var493;
}
((struct instance_core__NativeArray*)var487)->values[2]=var493;
if (likely(varonce496!=NULL)) {
var497 = varonce496;
} else {
var498 = "_as_";
var499 = core__abstract_text___CString___to_s_full(var498, 4l, 4l);
var497 = var499;
varonce496 = var497;
}
((struct instance_core__NativeArray*)var487)->values[4]=var497;
if (likely(varonce500!=NULL)) {
var501 = varonce500;
} else {
var502 = "\n";
var503 = core__abstract_text___CString___to_s_full(var502, 1l, 1l);
var501 = var503;
varonce500 = var501;
}
((struct instance_core__NativeArray*)var487)->values[6]=var501;
} else {
var487 = varonce486;
varonce486 = NULL;
}
{
var504 = ((val*(*)(val* self))(var_from->class->vft[COLOR_nitc__nitni_base__MType__mangled_cname]))(var_from); /* mangled_cname on <var_from:MType>*/
}
((struct instance_core__NativeArray*)var487)->values[1]=var504;
{
var505 = ((val*(*)(val* self))(var_from->class->vft[COLOR_nitc__nitni_base__MType__mangled_cname]))(var_from); /* mangled_cname on <var_from:MType>*/
}
((struct instance_core__NativeArray*)var487)->values[3]=var505;
{
var506 = ((val*(*)(val* self))(var_to->class->vft[COLOR_nitc__nitni_base__MType__mangled_cname]))(var_to); /* mangled_cname on <var_to:MType>*/
}
((struct instance_core__NativeArray*)var487)->values[5]=var506;
{
var507 = ((val*(*)(val* self))(var487->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var487); /* native_to_s on <var487:NativeArray[String]>*/
}
varonce486 = var487;
{
template___template__Template___add(var483, var507); /* Direct call template#Template#add on <var483:Template>*/
}
{
{ /* Inline c_tools#CCompilationUnit#header_decl (var_ccu) on <var_ccu:CCompilationUnit> */
var510 = var_ccu->attrs[COLOR_nitc__c_tools__CCompilationUnit___header_decl].val; /* _header_decl on <var_ccu:CCompilationUnit> */
if (unlikely(var510 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header_decl");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__c_tools, 34);
fatal_exit(1);
}
var508 = var510;
RET_LABEL509:(void)0;
}
}
if (likely(varonce511!=NULL)) {
var512 = varonce511;
} else {
var513 = "#endif\n";
var514 = core__abstract_text___CString___to_s_full(var513, 7l, 7l);
var512 = var514;
varonce511 = var512;
}
{
template___template__Template___add(var508, var512); /* Direct call template#Template#add on <var508:Template>*/
}
} else {
}
{
var515 = ((val*(*)(val* self))(var_to->class->vft[COLOR_nitc__model__MType__as_nullable]))(var_to); /* as_nullable on <var_to:MType>*/
}
{
{ /* Inline kernel#Object#== (var_from,var515) on <var_from:MType> */
var_other = var515;
{
{ /* Inline kernel#Object#is_same_instance (var_from,var_other) on <var_from:MType> */
var520 = var_from == var_other;
var518 = var520;
goto RET_LABEL519;
RET_LABEL519:(void)0;
}
}
var516 = var518;
goto RET_LABEL517;
RET_LABEL517:(void)0;
}
}
if (var516){
{
{ /* Inline c_tools#CCompilationUnit#header_decl (var_ccu) on <var_ccu:CCompilationUnit> */
var523 = var_ccu->attrs[COLOR_nitc__c_tools__CCompilationUnit___header_decl].val; /* _header_decl on <var_ccu:CCompilationUnit> */
if (unlikely(var523 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header_decl");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__c_tools, 34);
fatal_exit(1);
}
var521 = var523;
RET_LABEL522:(void)0;
}
}
if (unlikely(varonce524==NULL)) {
var525 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce526!=NULL)) {
var527 = varonce526;
} else {
var528 = "#ifndef ";
var529 = core__abstract_text___CString___to_s_full(var528, 8l, 8l);
var527 = var529;
varonce526 = var527;
}
((struct instance_core__NativeArray*)var525)->values[0]=var527;
if (likely(varonce530!=NULL)) {
var531 = varonce530;
} else {
var532 = "_as_not_nullable\n";
var533 = core__abstract_text___CString___to_s_full(var532, 17l, 17l);
var531 = var533;
varonce530 = var531;
}
((struct instance_core__NativeArray*)var525)->values[2]=var531;
} else {
var525 = varonce524;
varonce524 = NULL;
}
{
var534 = ((val*(*)(val* self))(var_to->class->vft[COLOR_nitc__nitni_base__MType__mangled_cname]))(var_to); /* mangled_cname on <var_to:MType>*/
}
((struct instance_core__NativeArray*)var525)->values[1]=var534;
{
var535 = ((val*(*)(val* self))(var525->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var525); /* native_to_s on <var525:NativeArray[String]>*/
}
varonce524 = var525;
{
template___template__Template___add(var521, var535); /* Direct call template#Template#add on <var521:Template>*/
}
{
{ /* Inline c_tools#CCompilationUnit#header_decl (var_ccu) on <var_ccu:CCompilationUnit> */
var538 = var_ccu->attrs[COLOR_nitc__c_tools__CCompilationUnit___header_decl].val; /* _header_decl on <var_ccu:CCompilationUnit> */
if (unlikely(var538 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header_decl");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__c_tools, 34);
fatal_exit(1);
}
var536 = var538;
RET_LABEL537:(void)0;
}
}
if (unlikely(varonce539==NULL)) {
var540 = NEW_core__NativeArray(7l, &type_core__NativeArray__core__String);
if (likely(varonce541!=NULL)) {
var542 = varonce541;
} else {
var543 = "#define ";
var544 = core__abstract_text___CString___to_s_full(var543, 8l, 8l);
var542 = var544;
varonce541 = var542;
}
((struct instance_core__NativeArray*)var540)->values[0]=var542;
if (likely(varonce545!=NULL)) {
var546 = varonce545;
} else {
var547 = "_as_not_nullable ";
var548 = core__abstract_text___CString___to_s_full(var547, 17l, 17l);
var546 = var548;
varonce545 = var546;
}
((struct instance_core__NativeArray*)var540)->values[2]=var546;
if (likely(varonce549!=NULL)) {
var550 = varonce549;
} else {
var551 = "_as_";
var552 = core__abstract_text___CString___to_s_full(var551, 4l, 4l);
var550 = var552;
varonce549 = var550;
}
((struct instance_core__NativeArray*)var540)->values[4]=var550;
if (likely(varonce553!=NULL)) {
var554 = varonce553;
} else {
var555 = "\n";
var556 = core__abstract_text___CString___to_s_full(var555, 1l, 1l);
var554 = var556;
varonce553 = var554;
}
((struct instance_core__NativeArray*)var540)->values[6]=var554;
} else {
var540 = varonce539;
varonce539 = NULL;
}
{
var557 = ((val*(*)(val* self))(var_to->class->vft[COLOR_nitc__nitni_base__MType__mangled_cname]))(var_to); /* mangled_cname on <var_to:MType>*/
}
((struct instance_core__NativeArray*)var540)->values[1]=var557;
{
var558 = ((val*(*)(val* self))(var_from->class->vft[COLOR_nitc__nitni_base__MType__mangled_cname]))(var_from); /* mangled_cname on <var_from:MType>*/
}
((struct instance_core__NativeArray*)var540)->values[3]=var558;
{
var559 = ((val*(*)(val* self))(var_to->class->vft[COLOR_nitc__nitni_base__MType__mangled_cname]))(var_to); /* mangled_cname on <var_to:MType>*/
}
((struct instance_core__NativeArray*)var540)->values[5]=var559;
{
var560 = ((val*(*)(val* self))(var540->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var540); /* native_to_s on <var540:NativeArray[String]>*/
}
varonce539 = var540;
{
template___template__Template___add(var536, var560); /* Direct call template#Template#add on <var536:Template>*/
}
{
{ /* Inline c_tools#CCompilationUnit#header_decl (var_ccu) on <var_ccu:CCompilationUnit> */
var563 = var_ccu->attrs[COLOR_nitc__c_tools__CCompilationUnit___header_decl].val; /* _header_decl on <var_ccu:CCompilationUnit> */
if (unlikely(var563 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header_decl");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__c_tools, 34);
fatal_exit(1);
}
var561 = var563;
RET_LABEL562:(void)0;
}
}
if (likely(varonce564!=NULL)) {
var565 = varonce564;
} else {
var566 = "#endif\n";
var567 = core__abstract_text___CString___to_s_full(var566, 7l, 7l);
var565 = var567;
varonce564 = var565;
}
{
template___template__Template___add(var561, var565); /* Direct call template#Template#add on <var561:Template>*/
}
} else {
}
RET_LABEL:;
}
