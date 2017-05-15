#include "nitc__mixin.sep.0.h"
/* method mixin#ToolContext#opt_mixins for (self: ToolContext): OptionArray */
val* nitc__mixin___ToolContext___opt_mixins(val* self) {
val* var /* : OptionArray */;
val* var1 /* : OptionArray */;
var1 = self->attrs[COLOR_nitc__mixin__ToolContext___opt_mixins].val; /* _opt_mixins on <self:ToolContext> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_mixins");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__mixin, 23);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method mixin#ToolContext#opt_defines for (self: ToolContext): OptionArray */
val* nitc__mixin___ToolContext___opt_defines(val* self) {
val* var /* : OptionArray */;
val* var1 /* : OptionArray */;
var1 = self->attrs[COLOR_nitc__mixin__ToolContext___opt_defines].val; /* _opt_defines on <self:ToolContext> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_defines");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__mixin, 25);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method mixin#ToolContext#init for (self: ToolContext) */
void nitc__mixin___ToolContext___core__kernel__Object__init(val* self) {
val* var /* : OptionContext */;
val* var2 /* : OptionContext */;
val* var3 /* : OptionArray */;
val* var5 /* : OptionArray */;
val* var6 /* : OptionArray */;
val* var8 /* : OptionArray */;
val* var9 /* : Array[Option] */;
val* var10 /* : NativeArray[Option] */;
{
((void(*)(val* self))(self->class->vft[COLOR_nitc__mixin___ToolContext___core__kernel__Object__init]))(self); /* init on <self:ToolContext>*/
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
{ /* Inline mixin#ToolContext#opt_mixins (self) on <self:ToolContext> */
var5 = self->attrs[COLOR_nitc__mixin__ToolContext___opt_mixins].val; /* _opt_mixins on <self:ToolContext> */
if (unlikely(var5 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_mixins");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__mixin, 23);
fatal_exit(1);
}
var3 = var5;
RET_LABEL4:(void)0;
}
}
{
{ /* Inline mixin#ToolContext#opt_defines (self) on <self:ToolContext> */
var8 = self->attrs[COLOR_nitc__mixin__ToolContext___opt_defines].val; /* _opt_defines on <self:ToolContext> */
if (unlikely(var8 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_defines");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__mixin, 25);
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
/* method mixin#ToolContext#make_main_module for (self: ToolContext, Array[MModule]): MModule */
val* nitc__mixin___ToolContext___make_main_module(val* self, val* p0) {
val* var /* : MModule */;
val* var_mmodules /* var mmodules: Array[MModule] */;
val* var1 /* : OptionArray */;
val* var3 /* : OptionArray */;
val* var4 /* : nullable Object */;
val* var6 /* : nullable Object */;
val* var_mixins /* var mixins: Array[String] */;
short int var7 /* : Bool */;
short int var8 /* : Bool */;
val* var9 /* : ModelBuilder */;
val* var10 /* : OptionArray */;
val* var12 /* : OptionArray */;
val* var13 /* : nullable Object */;
val* var15 /* : nullable Object */;
val* var16 /* : Array[MModule] */;
val* var17 /* : ModelBuilder */;
val* var18 /* : MModule */;
val* var_mainmodule /* var mainmodule: MModule */;
val* var19 /* : OptionArray */;
val* var21 /* : OptionArray */;
val* var22 /* : nullable Object */;
val* var24 /* : nullable Object */;
val* var_defines /* var defines: Array[String] */;
short int var25 /* : Bool */;
short int var26 /* : Bool */;
val* var27 /* : Location */;
val* var29 /* : Location */;
val* var_location /* var location: Location */;
val* var30 /* : Model */;
val* var32 /* : Model */;
val* var_model /* var model: Model */;
val* var33 /* : nullable Object */;
short int var34 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var36 /* : Bool */;
short int var38 /* : Bool */;
val* var39 /* : MModule */;
val* var40 /* : String */;
val* var42 /* : String */;
static val* varonce;
val* var43 /* : String */;
char* var44 /* : CString */;
val* var45 /* : String */;
val* var46 /* : Text */;
val* var48 /* : nullable Object */;
val* var50 /* : nullable MClassType */;
val* var_recv /* var recv: nullable MClassType */;
short int var51 /* : Bool */;
short int var52 /* : Bool */;
val* var_other54 /* var other: nullable Object */;
short int var55 /* : Bool */;
short int var56 /* : Bool */;
val* var57 /* : MClassDef */;
val* var_mclassdef /* var mclassdef: MClassDef */;
val* var_ /* var : Array[String] */;
val* var58 /* : IndexedIterator[nullable Object] */;
val* var_59 /* var : IndexedIterator[String] */;
short int var60 /* : Bool */;
val* var61 /* : nullable Object */;
val* var_define /* var define: String */;
val* var62 /* : Array[Text] */;
val* var63 /* : Pattern */;
val* var_spl /* var spl: Array[String] */;
val* var64 /* : nullable Object */;
val* var_name /* var name: String */;
val* var_val /* var val: nullable Object */;
long var65 /* : Int */;
long var67 /* : Int */;
short int var68 /* : Bool */;
short int var70 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var71 /* : Bool */;
val* var72 /* : nullable Object */;
val* var73 /* : MClass */;
val* var75 /* : MClass */;
val* var76 /* : nullable MMethod */;
val* var_prop /* var prop: nullable MMethod */;
short int var77 /* : Bool */;
short int var78 /* : Bool */;
short int var80 /* : Bool */;
short int var82 /* : Bool */;
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
val* var94 /* : Message */;
val* var96 /* : MPropDef */;
val* var98 /* : MPropDef */;
val* var99 /* : nullable MSignature */;
val* var101 /* : nullable MSignature */;
val* var102 /* : nullable MType */;
val* var104 /* : nullable MType */;
val* var_ret /* var ret: nullable MType */;
short int var105 /* : Bool */;
short int var106 /* : Bool */;
short int var108 /* : Bool */;
short int var110 /* : Bool */;
val* var112 /* : NativeArray[String] */;
static val* varonce111;
static val* varonce113;
val* var114 /* : String */;
char* var115 /* : CString */;
val* var116 /* : String */;
static val* varonce117;
val* var118 /* : String */;
char* var119 /* : CString */;
val* var120 /* : String */;
val* var121 /* : String */;
val* var122 /* : String */;
val* var123 /* : Message */;
val* var124 /* : String */;
static val* varonce125;
val* var126 /* : String */;
char* var127 /* : CString */;
val* var128 /* : String */;
short int var129 /* : Bool */;
short int var130 /* : Bool */;
short int var131 /* : Bool */;
short int var132 /* : Bool */;
short int var_133 /* var : Bool */;
static val* varonce134;
val* var135 /* : String */;
char* var136 /* : CString */;
val* var137 /* : String */;
short int var138 /* : Bool */;
val* var139 /* : nullable Object */;
val* var_v /* var v: nullable Object */;
static val* varonce140;
val* var141 /* : String */;
char* var142 /* : CString */;
val* var143 /* : String */;
short int var144 /* : Bool */;
val* var145 /* : nullable Object */;
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
val* var158 /* : Message */;
val* var159 /* : String */;
static val* varonce160;
val* var161 /* : String */;
char* var162 /* : CString */;
val* var163 /* : String */;
short int var164 /* : Bool */;
short int var165 /* : Bool */;
short int var166 /* : Bool */;
short int var167 /* : Bool */;
short int var169 /* : Bool */;
short int var170 /* : Bool */;
short int var_171 /* var : Bool */;
short int var172 /* : Bool */;
long var173 /* : Int */;
val* var174 /* : nullable Object */;
val* var176 /* : NativeArray[String] */;
static val* varonce175;
static val* varonce177;
val* var178 /* : String */;
char* var179 /* : CString */;
val* var180 /* : String */;
static val* varonce181;
val* var182 /* : String */;
char* var183 /* : CString */;
val* var184 /* : String */;
val* var185 /* : String */;
val* var186 /* : String */;
val* var187 /* : Message */;
val* var188 /* : String */;
static val* varonce189;
val* var190 /* : String */;
char* var191 /* : CString */;
val* var192 /* : String */;
short int var193 /* : Bool */;
short int var194 /* : Bool */;
short int var195 /* : Bool */;
short int var197 /* : Bool */;
short int var198 /* : Bool */;
val* var200 /* : NativeArray[String] */;
static val* varonce199;
static val* varonce201;
val* var202 /* : String */;
char* var203 /* : CString */;
val* var204 /* : String */;
static val* varonce205;
val* var206 /* : String */;
char* var207 /* : CString */;
val* var208 /* : String */;
val* var209 /* : String */;
val* var210 /* : String */;
val* var211 /* : Message */;
val* var213 /* : NativeArray[String] */;
static val* varonce212;
static val* varonce214;
val* var215 /* : String */;
char* var216 /* : CString */;
val* var217 /* : String */;
static val* varonce218;
val* var219 /* : String */;
char* var220 /* : CString */;
val* var221 /* : String */;
static val* varonce222;
val* var223 /* : String */;
char* var224 /* : CString */;
val* var225 /* : String */;
val* var226 /* : String */;
val* var227 /* : String */;
val* var228 /* : String */;
val* var229 /* : Message */;
val* var230 /* : MMethodDef */;
val* var_pd /* var pd: MMethodDef */;
val* var231 /* : MPropDef */;
val* var233 /* : MPropDef */;
val* var234 /* : nullable MSignature */;
val* var236 /* : nullable MSignature */;
short int var239 /* : Bool */;
var_mmodules = p0;
{
{ /* Inline mixin#ToolContext#opt_mixins (self) on <self:ToolContext> */
var3 = self->attrs[COLOR_nitc__mixin__ToolContext___opt_mixins].val; /* _opt_mixins on <self:ToolContext> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_mixins");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__mixin, 23);
fatal_exit(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
{ /* Inline opts#Option#value (var1) on <var1:OptionArray> */
var6 = var1->attrs[COLOR_opts__Option___value].val; /* _value on <var1:OptionArray> */
var4 = var6;
RET_LABEL5:(void)0;
}
}
var_mixins = var4;
{
var7 = core___core__AbstractArrayRead___core__abstract_collection__Collection__is_empty(var_mixins);
}
var8 = !var7;
if (var8){
{
var9 = nitc__modelbuilder_base___ToolContext___modelbuilder(self);
}
{
{ /* Inline mixin#ToolContext#opt_mixins (self) on <self:ToolContext> */
var12 = self->attrs[COLOR_nitc__mixin__ToolContext___opt_mixins].val; /* _opt_mixins on <self:ToolContext> */
if (unlikely(var12 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_mixins");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__mixin, 23);
fatal_exit(1);
}
var10 = var12;
RET_LABEL11:(void)0;
}
}
{
{ /* Inline opts#Option#value (var10) on <var10:OptionArray> */
var15 = var10->attrs[COLOR_opts__Option___value].val; /* _value on <var10:OptionArray> */
var13 = var15;
RET_LABEL14:(void)0;
}
}
{
var16 = nitc__loader___ModelBuilder___parse(var9, var13);
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add_all(var_mmodules, var16); /* Direct call array#Array#add_all on <var_mmodules:Array[MModule]>*/
}
{
var17 = nitc__modelbuilder_base___ToolContext___modelbuilder(self);
}
{
nitc__modelbuilder___ModelBuilder___run_phases(var17); /* Direct call modelbuilder#ModelBuilder#run_phases on <var17:ModelBuilder>*/
}
} else {
}
{
var18 = ((val*(*)(val* self, val* p0))(self->class->vft[COLOR_nitc__mixin___ToolContext___make_main_module]))(self, p0); /* make_main_module on <self:ToolContext>*/
}
var_mainmodule = var18;
{
{ /* Inline mixin#ToolContext#opt_defines (self) on <self:ToolContext> */
var21 = self->attrs[COLOR_nitc__mixin__ToolContext___opt_defines].val; /* _opt_defines on <self:ToolContext> */
if (unlikely(var21 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_defines");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__mixin, 25);
fatal_exit(1);
}
var19 = var21;
RET_LABEL20:(void)0;
}
}
{
{ /* Inline opts#Option#value (var19) on <var19:OptionArray> */
var24 = var19->attrs[COLOR_opts__Option___value].val; /* _value on <var19:OptionArray> */
var22 = var24;
RET_LABEL23:(void)0;
}
}
var_defines = var22;
{
var25 = core___core__AbstractArrayRead___core__abstract_collection__Collection__is_empty(var_defines);
}
var26 = !var25;
if (var26){
{
{ /* Inline mmodule#MModule#location (var_mainmodule) on <var_mainmodule:MModule> */
var29 = var_mainmodule->attrs[COLOR_nitc__mmodule__MModule___location].val; /* _location on <var_mainmodule:MModule> */
if (unlikely(var29 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _location");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__mmodule, 103);
fatal_exit(1);
}
var27 = var29;
RET_LABEL28:(void)0;
}
}
var_location = var27;
{
{ /* Inline mmodule#MModule#model (var_mainmodule) on <var_mainmodule:MModule> */
var32 = var_mainmodule->attrs[COLOR_nitc__mmodule__MModule___model].val; /* _model on <var_mainmodule:MModule> */
if (unlikely(var32 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _model");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__mmodule, 77);
fatal_exit(1);
}
var30 = var32;
RET_LABEL31:(void)0;
}
}
var_model = var30;
{
var33 = core___core__SequenceRead___Collection__first(var_mmodules);
}
{
{ /* Inline kernel#Object#== (var_mainmodule,var33) on <var_mainmodule:MModule> */
var_other = var33;
{
{ /* Inline kernel#Object#is_same_instance (var_mainmodule,var_other) on <var_mainmodule:MModule> */
var38 = var_mainmodule == var_other;
var36 = var38;
goto RET_LABEL37;
RET_LABEL37:(void)0;
}
}
var34 = var36;
goto RET_LABEL35;
RET_LABEL35:(void)0;
}
}
if (var34){
var39 = NEW_nitc__MModule(&type_nitc__MModule);
{
{ /* Inline mmodule#MModule#name (var_mainmodule) on <var_mainmodule:MModule> */
var42 = var_mainmodule->attrs[COLOR_nitc__mmodule__MModule___name].val; /* _name on <var_mainmodule:MModule> */
if (unlikely(var42 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__mmodule, 100);
fatal_exit(1);
}
var40 = var42;
RET_LABEL41:(void)0;
}
}
if (likely(varonce!=NULL)) {
var43 = varonce;
} else {
var44 = "-d";
var45 = core__abstract_text___CString___to_s_full(var44, 2l, 2l);
var43 = var45;
varonce = var43;
}
{
var46 = ((val*(*)(val* self, val* p0))(var40->class->vft[COLOR_core__abstract_text__Text___43d]))(var40, var43); /* + on <var40:String>*/
}
{
((void(*)(val* self, val* p0))(var39->class->vft[COLOR_nitc__mmodule__MModule__model_61d]))(var39, var_model); /* model= on <var39:MModule>*/
}
{
((void(*)(val* self, val* p0))(var39->class->vft[COLOR_nitc__mmodule__MModule__mgroup_61d]))(var39, ((val*)NULL)); /* mgroup= on <var39:MModule>*/
}
{
((void(*)(val* self, val* p0))(var39->class->vft[COLOR_nitc__mmodule__MModule__name_61d]))(var39, var46); /* name= on <var39:MModule>*/
}
{
((void(*)(val* self, val* p0))(var39->class->vft[COLOR_nitc__mmodule__MModule__location_61d]))(var39, var_location); /* location= on <var39:MModule>*/
}
{
((void(*)(val* self))(var39->class->vft[COLOR_core__kernel__Object__init]))(var39); /* init on <var39:MModule>*/
}
var_mainmodule = var39;
{
nitc___nitc__MModule___set_imported_mmodules(var_mainmodule, var_mmodules); /* Direct call mmodule#MModule#set_imported_mmodules on <var_mainmodule:MModule>*/
}
{
{ /* Inline model_base#MEntity#is_fictive= (var_mainmodule,1) on <var_mainmodule:MModule> */
var_mainmodule->attrs[COLOR_nitc__model_base__MEntity___is_fictive].s = 1; /* _is_fictive on <var_mainmodule:MModule> */
RET_LABEL47:(void)0;
}
}
{
var48 = core___core__SequenceRead___Collection__first(var_mmodules);
}
{
{ /* Inline mmodule#MModule#first_real_mmodule= (var_mainmodule,var48) on <var_mainmodule:MModule> */
var_mainmodule->attrs[COLOR_nitc__mmodule__MModule___first_real_mmodule].val = var48; /* _first_real_mmodule on <var_mainmodule:MModule> */
RET_LABEL49:(void)0;
}
}
} else {
}
{
var50 = nitc__model___MModule___sys_type(var_mainmodule);
}
var_recv = var50;
if (var_recv == NULL) {
var51 = 0; /* is null */
} else {
var51 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_recv,((val*)NULL)) on <var_recv:nullable MClassType> */
var_other54 = ((val*)NULL);
{
var55 = ((short int(*)(val* self, val* p0))(var_recv->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_recv, var_other54); /* == on <var_recv:nullable MClassType(MClassType)>*/
}
var56 = !var55;
var52 = var56;
goto RET_LABEL53;
RET_LABEL53:(void)0;
}
var51 = var52;
}
if (unlikely(!var51)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__mixin, 58);
fatal_exit(1);
}
var57 = NEW_nitc__MClassDef(&type_nitc__MClassDef);
{
((void(*)(val* self, val* p0))(var57->class->vft[COLOR_nitc__model__MClassDef__mmodule_61d]))(var57, var_mainmodule); /* mmodule= on <var57:MClassDef>*/
}
{
((void(*)(val* self, val* p0))(var57->class->vft[COLOR_nitc__model__MClassDef__bound_mtype_61d]))(var57, var_recv); /* bound_mtype= on <var57:MClassDef>*/
}
{
((void(*)(val* self, val* p0))(var57->class->vft[COLOR_nitc__model__MClassDef__location_61d]))(var57, var_location); /* location= on <var57:MClassDef>*/
}
{
((void(*)(val* self))(var57->class->vft[COLOR_core__kernel__Object__init]))(var57); /* init on <var57:MClassDef>*/
}
var_mclassdef = var57;
{
nitc___nitc__MClassDef___add_in_hierarchy(var_mclassdef); /* Direct call model#MClassDef#add_in_hierarchy on <var_mclassdef:MClassDef>*/
}
var_ = var_defines;
{
var58 = core___core__AbstractArrayRead___core__abstract_collection__Collection__iterator(var_);
}
var_59 = var58;
for(;;) {
{
var60 = ((short int(*)(val* self))((((long)var_59&3)?class_info[((long)var_59&3)]:var_59->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_59); /* is_ok on <var_59:IndexedIterator[String]>*/
}
if (var60){
} else {
goto BREAK_label;
}
{
var61 = ((val*(*)(val* self))((((long)var_59&3)?class_info[((long)var_59&3)]:var_59->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_59); /* item on <var_59:IndexedIterator[String]>*/
}
var_define = var61;
{
var63 = (val*)((long)('=')<<2|2);
var62 = core__string_search___Text___split_once_on(var_define, var63);
}
var_spl = var62;
{
var64 = core___core__SequenceRead___Collection__first(var_spl);
}
var_name = var64;
var_val = ((val*)NULL);
{
{ /* Inline array#AbstractArrayRead#length (var_spl) on <var_spl:Array[String]> */
var67 = var_spl->attrs[COLOR_core__array__AbstractArrayRead___length].l; /* _length on <var_spl:Array[String]> */
var65 = var67;
RET_LABEL66:(void)0;
}
}
{
{ /* Inline kernel#Int#> (var65,1l) on <var65:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var70 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var70)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 727);
fatal_exit(1);
}
var71 = var65 > 1l;
var68 = var71;
goto RET_LABEL69;
RET_LABEL69:(void)0;
}
}
if (var68){
{
var72 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_spl, 1l);
}
var_val = var72;
} else {
}
{
{ /* Inline model#MClassType#mclass (var_recv) on <var_recv:nullable MClassType(MClassType)> */
var75 = var_recv->attrs[COLOR_nitc__model__MClassType___mclass].val; /* _mclass on <var_recv:nullable MClassType(MClassType)> */
if (unlikely(var75 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1197);
fatal_exit(1);
}
var73 = var75;
RET_LABEL74:(void)0;
}
}
{
var76 = nitc__model___MModule___try_get_primitive_method(var_mainmodule, var_name, var73);
}
var_prop = var76;
if (var_prop == NULL) {
var77 = 1; /* is null */
} else {
var77 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_prop,((val*)NULL)) on <var_prop:nullable MMethod> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_prop,var_other) on <var_prop:nullable MMethod(MMethod)> */
var82 = var_prop == var_other;
var80 = var82;
goto RET_LABEL81;
RET_LABEL81:(void)0;
}
}
var78 = var80;
goto RET_LABEL79;
RET_LABEL79:(void)0;
}
var77 = var78;
}
if (var77){
if (unlikely(varonce83==NULL)) {
var84 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce85!=NULL)) {
var86 = varonce85;
} else {
var87 = "Error: --define: no top-level function `";
var88 = core__abstract_text___CString___to_s_full(var87, 40l, 40l);
var86 = var88;
varonce85 = var86;
}
((struct instance_core__NativeArray*)var84)->values[0]=var86;
if (likely(varonce89!=NULL)) {
var90 = varonce89;
} else {
var91 = "`.";
var92 = core__abstract_text___CString___to_s_full(var91, 2l, 2l);
var90 = var92;
varonce89 = var90;
}
((struct instance_core__NativeArray*)var84)->values[2]=var90;
} else {
var84 = varonce83;
varonce83 = NULL;
}
((struct instance_core__NativeArray*)var84)->values[1]=var_name;
{
var93 = ((val*(*)(val* self))(var84->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var84); /* native_to_s on <var84:NativeArray[String]>*/
}
varonce83 = var84;
{
var94 = nitc___nitc__ToolContext___error(self, ((val*)NULL), var93);
}
goto BREAK_label95;
} else {
}
{
{ /* Inline model#MProperty#intro (var_prop) on <var_prop:nullable MMethod(MMethod)> */
var98 = var_prop->attrs[COLOR_nitc__model__MProperty___intro].val; /* _intro on <var_prop:nullable MMethod(MMethod)> */
if (unlikely(var98 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2097);
fatal_exit(1);
}
var96 = var98;
RET_LABEL97:(void)0;
}
}
{
{ /* Inline model#MMethodDef#msignature (var96) on <var96:MPropDef(MMethodDef)> */
var101 = var96->attrs[COLOR_nitc__model__MMethodDef___msignature].val; /* _msignature on <var96:MPropDef(MMethodDef)> */
var99 = var101;
RET_LABEL100:(void)0;
}
}
if (var99 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__mixin, 72);
fatal_exit(1);
} else {
{ /* Inline model#MSignature#return_mtype (var99) on <var99:nullable MSignature> */
if (unlikely(var99 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1891);
fatal_exit(1);
}
var104 = var99->attrs[COLOR_nitc__model__MSignature___return_mtype].val; /* _return_mtype on <var99:nullable MSignature> */
var102 = var104;
RET_LABEL103:(void)0;
}
}
var_ret = var102;
if (var_ret == NULL) {
var105 = 1; /* is null */
} else {
var105 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_ret,((val*)NULL)) on <var_ret:nullable MType> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_ret,var_other) on <var_ret:nullable MType(MType)> */
var110 = var_ret == var_other;
var108 = var110;
goto RET_LABEL109;
RET_LABEL109:(void)0;
}
}
var106 = var108;
goto RET_LABEL107;
RET_LABEL107:(void)0;
}
var105 = var106;
}
if (var105){
if (unlikely(varonce111==NULL)) {
var112 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce113!=NULL)) {
var114 = varonce113;
} else {
var115 = "Error: --define: method `";
var116 = core__abstract_text___CString___to_s_full(var115, 25l, 25l);
var114 = var116;
varonce113 = var114;
}
((struct instance_core__NativeArray*)var112)->values[0]=var114;
if (likely(varonce117!=NULL)) {
var118 = varonce117;
} else {
var119 = "` is not a function.";
var120 = core__abstract_text___CString___to_s_full(var119, 20l, 20l);
var118 = var120;
varonce117 = var118;
}
((struct instance_core__NativeArray*)var112)->values[2]=var118;
} else {
var112 = varonce111;
varonce111 = NULL;
}
{
var121 = ((val*(*)(val* self))(var_prop->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_prop); /* to_s on <var_prop:nullable MMethod(MMethod)>*/
}
((struct instance_core__NativeArray*)var112)->values[1]=var121;
{
var122 = ((val*(*)(val* self))(var112->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var112); /* native_to_s on <var112:NativeArray[String]>*/
}
varonce111 = var112;
{
var123 = nitc___nitc__ToolContext___error(self, ((val*)NULL), var122);
}
goto BREAK_label95;
} else {
{
var124 = ((val*(*)(val* self))(var_ret->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_ret); /* to_s on <var_ret:nullable MType(MType)>*/
}
if (likely(varonce125!=NULL)) {
var126 = varonce125;
} else {
var127 = "Bool";
var128 = core__abstract_text___CString___to_s_full(var127, 4l, 4l);
var126 = var128;
varonce125 = var126;
}
{
var129 = ((short int(*)(val* self, val* p0))(var124->class->vft[COLOR_core__kernel__Object___61d_61d]))(var124, var126); /* == on <var124:String>*/
}
if (var129){
if (var_val == NULL) {
var131 = 1; /* is null */
} else {
var131 = 0; /* arg is null but recv is not */
}
if (0) {
var132 = ((short int(*)(val* self, val* p0))(var_val->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_val, ((val*)NULL)); /* == on <var_val:nullable Object(nullable String)>*/
var131 = var132;
}
var_133 = var131;
if (var131){
var130 = var_133;
} else {
if (likely(varonce134!=NULL)) {
var135 = varonce134;
} else {
var136 = "true";
var137 = core__abstract_text___CString___to_s_full(var136, 4l, 4l);
var135 = var137;
varonce134 = var135;
}
{
var138 = ((short int(*)(val* self, val* p0))(var_val->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_val, var135); /* == on <var_val:nullable Object(String)>*/
}
var130 = var138;
}
if (var130){
var139 = (val*)((long)(1)<<2|3);
var_v = var139;
} else {
if (likely(varonce140!=NULL)) {
var141 = varonce140;
} else {
var142 = "false";
var143 = core__abstract_text___CString___to_s_full(var142, 5l, 5l);
var141 = var143;
varonce140 = var141;
}
{
var144 = ((short int(*)(val* self, val* p0))(var_val->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_val, var141); /* == on <var_val:nullable Object(String)>*/
}
if (var144){
var145 = (val*)((long)(0)<<2|3);
var_v = var145;
} else {
if (unlikely(varonce146==NULL)) {
var147 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce148!=NULL)) {
var149 = varonce148;
} else {
var150 = "Error: --define: method `";
var151 = core__abstract_text___CString___to_s_full(var150, 25l, 25l);
var149 = var151;
varonce148 = var149;
}
((struct instance_core__NativeArray*)var147)->values[0]=var149;
if (likely(varonce152!=NULL)) {
var153 = varonce152;
} else {
var154 = "` needs a Bool.";
var155 = core__abstract_text___CString___to_s_full(var154, 15l, 15l);
var153 = var155;
varonce152 = var153;
}
((struct instance_core__NativeArray*)var147)->values[2]=var153;
} else {
var147 = varonce146;
varonce146 = NULL;
}
{
var156 = ((val*(*)(val* self))(var_prop->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_prop); /* to_s on <var_prop:nullable MMethod(MMethod)>*/
}
((struct instance_core__NativeArray*)var147)->values[1]=var156;
{
var157 = ((val*(*)(val* self))(var147->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var147); /* native_to_s on <var147:NativeArray[String]>*/
}
varonce146 = var147;
{
var158 = nitc___nitc__ToolContext___error(self, ((val*)NULL), var157);
}
goto BREAK_label95;
}
}
} else {
{
var159 = ((val*(*)(val* self))(var_ret->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_ret); /* to_s on <var_ret:nullable MType(MType)>*/
}
if (likely(varonce160!=NULL)) {
var161 = varonce160;
} else {
var162 = "Int";
var163 = core__abstract_text___CString___to_s_full(var162, 3l, 3l);
var161 = var163;
varonce160 = var161;
}
{
var164 = ((short int(*)(val* self, val* p0))(var159->class->vft[COLOR_core__kernel__Object___61d_61d]))(var159, var161); /* == on <var159:String>*/
}
if (var164){
if (var_val == NULL) {
var166 = 0; /* is null */
} else {
var166 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_val,((val*)NULL)) on <var_val:nullable Object(nullable String)> */
var_other54 = ((val*)NULL);
{
var169 = ((short int(*)(val* self, val* p0))(var_val->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_val, var_other54); /* == on <var_val:nullable String(String)>*/
}
var170 = !var169;
var167 = var170;
goto RET_LABEL168;
RET_LABEL168:(void)0;
}
var166 = var167;
}
var_171 = var166;
if (var166){
{
var172 = core___core__Text___is_numeric(var_val);
}
var165 = var172;
} else {
var165 = var_171;
}
if (var165){
{
var173 = core__fixed_ints_text___Text___to_i(var_val);
}
var174 = (val*)(var173<<2|1);
var_v = var174;
} else {
if (unlikely(varonce175==NULL)) {
var176 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce177!=NULL)) {
var178 = varonce177;
} else {
var179 = "Error: --define: method `";
var180 = core__abstract_text___CString___to_s_full(var179, 25l, 25l);
var178 = var180;
varonce177 = var178;
}
((struct instance_core__NativeArray*)var176)->values[0]=var178;
if (likely(varonce181!=NULL)) {
var182 = varonce181;
} else {
var183 = "` needs a Int.";
var184 = core__abstract_text___CString___to_s_full(var183, 14l, 14l);
var182 = var184;
varonce181 = var182;
}
((struct instance_core__NativeArray*)var176)->values[2]=var182;
} else {
var176 = varonce175;
varonce175 = NULL;
}
{
var185 = ((val*(*)(val* self))(var_prop->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_prop); /* to_s on <var_prop:nullable MMethod(MMethod)>*/
}
((struct instance_core__NativeArray*)var176)->values[1]=var185;
{
var186 = ((val*(*)(val* self))(var176->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var176); /* native_to_s on <var176:NativeArray[String]>*/
}
varonce175 = var176;
{
var187 = nitc___nitc__ToolContext___error(self, ((val*)NULL), var186);
}
goto BREAK_label95;
}
} else {
{
var188 = ((val*(*)(val* self))(var_ret->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_ret); /* to_s on <var_ret:nullable MType(MType)>*/
}
if (likely(varonce189!=NULL)) {
var190 = varonce189;
} else {
var191 = "String";
var192 = core__abstract_text___CString___to_s_full(var191, 6l, 6l);
var190 = var192;
varonce189 = var190;
}
{
var193 = ((short int(*)(val* self, val* p0))(var188->class->vft[COLOR_core__kernel__Object___61d_61d]))(var188, var190); /* == on <var188:String>*/
}
if (var193){
if (var_val == NULL) {
var194 = 0; /* is null */
} else {
var194 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_val,((val*)NULL)) on <var_val:nullable Object(nullable String)> */
var_other54 = ((val*)NULL);
{
var197 = ((short int(*)(val* self, val* p0))(var_val->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_val, var_other54); /* == on <var_val:nullable String(String)>*/
}
var198 = !var197;
var195 = var198;
goto RET_LABEL196;
RET_LABEL196:(void)0;
}
var194 = var195;
}
if (var194){
var_v = var_val;
} else {
if (unlikely(varonce199==NULL)) {
var200 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce201!=NULL)) {
var202 = varonce201;
} else {
var203 = "Error: --define: method `";
var204 = core__abstract_text___CString___to_s_full(var203, 25l, 25l);
var202 = var204;
varonce201 = var202;
}
((struct instance_core__NativeArray*)var200)->values[0]=var202;
if (likely(varonce205!=NULL)) {
var206 = varonce205;
} else {
var207 = "` needs a String.";
var208 = core__abstract_text___CString___to_s_full(var207, 17l, 17l);
var206 = var208;
varonce205 = var206;
}
((struct instance_core__NativeArray*)var200)->values[2]=var206;
} else {
var200 = varonce199;
varonce199 = NULL;
}
{
var209 = ((val*(*)(val* self))(var_prop->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_prop); /* to_s on <var_prop:nullable MMethod(MMethod)>*/
}
((struct instance_core__NativeArray*)var200)->values[1]=var209;
{
var210 = ((val*(*)(val* self))(var200->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var200); /* native_to_s on <var200:NativeArray[String]>*/
}
varonce199 = var200;
{
var211 = nitc___nitc__ToolContext___error(self, ((val*)NULL), var210);
}
goto BREAK_label95;
}
} else {
if (unlikely(varonce212==NULL)) {
var213 = NEW_core__NativeArray(5l, &type_core__NativeArray__core__String);
if (likely(varonce214!=NULL)) {
var215 = varonce214;
} else {
var216 = "Error: --define: method `";
var217 = core__abstract_text___CString___to_s_full(var216, 25l, 25l);
var215 = var217;
varonce214 = var215;
}
((struct instance_core__NativeArray*)var213)->values[0]=var215;
if (likely(varonce218!=NULL)) {
var219 = varonce218;
} else {
var220 = "` returns an unsupported type `";
var221 = core__abstract_text___CString___to_s_full(var220, 31l, 31l);
var219 = var221;
varonce218 = var219;
}
((struct instance_core__NativeArray*)var213)->values[2]=var219;
if (likely(varonce222!=NULL)) {
var223 = varonce222;
} else {
var224 = "`.";
var225 = core__abstract_text___CString___to_s_full(var224, 2l, 2l);
var223 = var225;
varonce222 = var223;
}
((struct instance_core__NativeArray*)var213)->values[4]=var223;
} else {
var213 = varonce212;
varonce212 = NULL;
}
{
var226 = ((val*(*)(val* self))(var_prop->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_prop); /* to_s on <var_prop:nullable MMethod(MMethod)>*/
}
((struct instance_core__NativeArray*)var213)->values[1]=var226;
{
var227 = ((val*(*)(val* self))(var_ret->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_ret); /* to_s on <var_ret:nullable MType(MType)>*/
}
((struct instance_core__NativeArray*)var213)->values[3]=var227;
{
var228 = ((val*(*)(val* self))(var213->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var213); /* native_to_s on <var213:NativeArray[String]>*/
}
varonce212 = var213;
{
var229 = nitc___nitc__ToolContext___error(self, ((val*)NULL), var228);
}
goto BREAK_label95;
}
}
}
}
var230 = NEW_nitc__MMethodDef(&type_nitc__MMethodDef);
{
((void(*)(val* self, val* p0))(var230->class->vft[COLOR_nitc__model__MPropDef__mclassdef_61d]))(var230, var_mclassdef); /* mclassdef= on <var230:MMethodDef>*/
}
{
((void(*)(val* self, val* p0))(var230->class->vft[COLOR_nitc__model__MPropDef__mproperty_61d]))(var230, var_prop); /* mproperty= on <var230:MMethodDef>*/
}
{
((void(*)(val* self, val* p0))(var230->class->vft[COLOR_nitc__model__MPropDef__location_61d]))(var230, var_location); /* location= on <var230:MMethodDef>*/
}
{
((void(*)(val* self))(var230->class->vft[COLOR_core__kernel__Object__init]))(var230); /* init on <var230:MMethodDef>*/
}
var_pd = var230;
{
{ /* Inline model#MProperty#intro (var_prop) on <var_prop:nullable MMethod(MMethod)> */
var233 = var_prop->attrs[COLOR_nitc__model__MProperty___intro].val; /* _intro on <var_prop:nullable MMethod(MMethod)> */
if (unlikely(var233 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2097);
fatal_exit(1);
}
var231 = var233;
RET_LABEL232:(void)0;
}
}
{
{ /* Inline model#MMethodDef#msignature (var231) on <var231:MPropDef(MMethodDef)> */
var236 = var231->attrs[COLOR_nitc__model__MMethodDef___msignature].val; /* _msignature on <var231:MPropDef(MMethodDef)> */
var234 = var236;
RET_LABEL235:(void)0;
}
}
{
{ /* Inline model#MMethodDef#msignature= (var_pd,var234) on <var_pd:MMethodDef> */
var_pd->attrs[COLOR_nitc__model__MMethodDef___msignature].val = var234; /* _msignature on <var_pd:MMethodDef> */
RET_LABEL237:(void)0;
}
}
{
{ /* Inline model#MMethodDef#constant_value= (var_pd,var_v) on <var_pd:MMethodDef> */
var_pd->attrs[COLOR_nitc__model__MMethodDef___constant_value].val = var_v; /* _constant_value on <var_pd:MMethodDef> */
RET_LABEL238:(void)0;
}
}
BREAK_label95: (void)0;
{
((void(*)(val* self))((((long)var_59&3)?class_info[((long)var_59&3)]:var_59->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_59); /* next on <var_59:IndexedIterator[String]>*/
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_59&3)?class_info[((long)var_59&3)]:var_59->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_59); /* finish on <var_59:IndexedIterator[String]>*/
}
{
var239 = nitc___nitc__ToolContext___check_errors(self);
}
} else {
}
var = var_mainmodule;
goto RET_LABEL;
RET_LABEL:;
return var;
}
