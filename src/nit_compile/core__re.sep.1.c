#include "core__re.sep.0.h"
/* method re#NativeRegex#malloc for (self: NativeRegex): NativeRegex */
val* core__re___core__re__NativeRegex___malloc(val* self) {
val* var /* : NativeRegex */;
val* var1 /* : NativeRegex */;
val* var2 /* : NativeRegex */;
var1 = re___new_NativeRegex_malloc___impl();
var2 = BOX_core__Pointer(var1); /* boxing NativeRegex */
var2->type = &type_core__re__NativeRegex;
var2->class = &class_core__re__NativeRegex;
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method re#NativeRegex#regcomp for (self: NativeRegex, CString, Int): Int */
long core__re___core__re__NativeRegex___regcomp(val* self, char* p0, long p1) {
long var /* : Int */;
long var1 /* : Int */;
void* var2 /* : NativeRegex for extern */;
var2 = ((struct instance_core__Pointer*)self)->value; /* unboxing NativeRegex */
var1 = re___NativeRegex_regcomp___impl(var2, p0, p1);
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method re#NativeRegex#regexec for (self: NativeRegex, CString, Int, NativeMatchArray, Int): Int */
long core__re___core__re__NativeRegex___regexec(val* self, char* p0, long p1, val* p2, long p3) {
long var /* : Int */;
long var1 /* : Int */;
void* var2 /* : NativeRegex for extern */;
void* var3 /* : NativeMatchArray for extern */;
var2 = ((struct instance_core__Pointer*)self)->value; /* unboxing NativeRegex */
var3 = ((struct instance_core__Pointer*)p2)->value; /* unboxing NativeMatchArray */
var1 = re___NativeRegex_regexec___impl(var2, p0, p1, var3, p3);
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method re#NativeRegex#regexec_match_only for (self: NativeRegex, CString, Int): Int */
long core__re___core__re__NativeRegex___regexec_match_only(val* self, char* p0, long p1) {
long var /* : Int */;
long var1 /* : Int */;
void* var2 /* : NativeRegex for extern */;
var2 = ((struct instance_core__Pointer*)self)->value; /* unboxing NativeRegex */
var1 = re___NativeRegex_regexec_match_only___impl(var2, p0, p1);
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method re#NativeRegex#regfree for (self: NativeRegex) */
void core__re___core__re__NativeRegex___regfree(val* self) {
void* var /* : NativeRegex for extern */;
var = ((struct instance_core__Pointer*)self)->value; /* unboxing NativeRegex */
re___NativeRegex_regfree___impl(var);
RET_LABEL:;
}
/* method re#NativeRegex#regerror for (self: NativeRegex, Int): CString */
char* core__re___core__re__NativeRegex___regerror(val* self, long p0) {
char* var /* : CString */;
char* var1 /* : CString */;
void* var2 /* : NativeRegex for extern */;
var2 = ((struct instance_core__Pointer*)self)->value; /* unboxing NativeRegex */
var1 = re___NativeRegex_regerror___impl(var2, p0);
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method re#NativeRegex#re_nsub for (self: NativeRegex): Int */
long core__re___core__re__NativeRegex___re_nsub(val* self) {
long var /* : Int */;
long var1 /* : Int */;
void* var2 /* : NativeRegex for extern */;
var2 = ((struct instance_core__Pointer*)self)->value; /* unboxing NativeRegex */
var1 = re___NativeRegex_re_nsub___impl(var2);
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method re#Int#is_nomatch for (self: Int): Bool */
short int core__re___Int___is_nomatch(long self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = re___Int_is_nomatch___impl(self);
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method re#NativeMatchArray#malloc for (self: NativeMatchArray, Int): NativeMatchArray */
val* core__re___core__re__NativeMatchArray___malloc(val* self, long p0) {
val* var /* : NativeMatchArray */;
val* var1 /* : NativeMatchArray */;
val* var2 /* : NativeMatchArray */;
var1 = re___new_NativeMatchArray_malloc___impl(p0);
var2 = BOX_core__Pointer(var1); /* boxing NativeMatchArray */
var2->type = &type_core__re__NativeMatchArray;
var2->class = &class_core__re__NativeMatchArray;
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method re#NativeMatchArray#rm_so for (self: NativeMatchArray): Int */
long core__re___core__re__NativeMatchArray___rm_so(val* self) {
long var /* : Int */;
long var1 /* : Int */;
void* var2 /* : NativeMatchArray for extern */;
var2 = ((struct instance_core__Pointer*)self)->value; /* unboxing NativeMatchArray */
var1 = re___NativeMatchArray_rm_so___impl(var2);
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method re#NativeMatchArray#rm_eo for (self: NativeMatchArray): Int */
long core__re___core__re__NativeMatchArray___rm_eo(val* self) {
long var /* : Int */;
long var1 /* : Int */;
void* var2 /* : NativeMatchArray for extern */;
var2 = ((struct instance_core__Pointer*)self)->value; /* unboxing NativeMatchArray */
var1 = re___NativeMatchArray_rm_eo___impl(var2);
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method re#NativeMatchArray#[] for (self: NativeMatchArray, Int): NativeMatchArray */
val* core__re___core__re__NativeMatchArray____91d_93d(val* self, long p0) {
val* var /* : NativeMatchArray */;
val* var1 /* : NativeMatchArray */;
void* var2 /* : NativeMatchArray for extern */;
val* var3 /* : NativeMatchArray */;
var2 = ((struct instance_core__Pointer*)self)->value; /* unboxing NativeMatchArray */
var1 = re___NativeMatchArray__index___impl(var2, p0);
var3 = BOX_core__Pointer(var1); /* boxing NativeMatchArray */
var3->type = &type_core__re__NativeMatchArray;
var3->class = &class_core__re__NativeMatchArray;
var = var3;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method re#Text#to_re for (self: Text): Regex */
val* core__re___Text___to_re(val* self) {
val* var /* : Regex */;
val* var1 /* : Regex */;
val* var2 /* : String */;
var1 = NEW_core__Regex(&type_core__Regex);
{
var2 = ((val*(*)(val* self))(self->class->vft[COLOR_core__abstract_text__Object__to_s]))(self); /* to_s on <self:Text>*/
}
{
((void(*)(val* self, val* p0))(var1->class->vft[COLOR_core__re__Regex__string_61d]))(var1, var2); /* string= on <var1:Regex>*/
}
{
((void(*)(val* self))(var1->class->vft[COLOR_core__kernel__Object__init]))(var1); /* init on <var1:Regex>*/
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method re#Regex#string for (self: Regex): String */
val* core___core__Regex___string(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = self->attrs[COLOR_core__re__Regex___string].val; /* _string on <self:Regex> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _string");
PRINT_ERROR(" (%s:%d)\n", FILE_core__re, 142);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method re#Regex#string= for (self: Regex, String) */
void core___core__Regex___string_61d(val* self, val* p0) {
self->attrs[COLOR_core__re__Regex___string].val = p0; /* _string on <self:Regex> */
RET_LABEL:;
}
/* method re#Regex#extended for (self: Regex): Bool */
short int core___core__Regex___extended(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = self->attrs[COLOR_core__re__Regex___extended].s; /* _extended on <self:Regex> */
var = var1;
RET_LABEL:;
return var;
}
/* method re#Regex#ignore_case for (self: Regex): Bool */
short int core___core__Regex___ignore_case(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = self->attrs[COLOR_core__re__Regex___ignore_case].s; /* _ignore_case on <self:Regex> */
var = var1;
RET_LABEL:;
return var;
}
/* method re#Regex#optimize_has for (self: Regex): Bool */
short int core___core__Regex___optimize_has(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = self->attrs[COLOR_core__re__Regex___optimize_has].s; /* _optimize_has on <self:Regex> */
var = var1;
RET_LABEL:;
return var;
}
/* method re#Regex#newline for (self: Regex): Bool */
short int core___core__Regex___newline(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = self->attrs[COLOR_core__re__Regex___newline].s; /* _newline on <self:Regex> */
var = var1;
RET_LABEL:;
return var;
}
/* method re#Regex#not_bol for (self: Regex): Bool */
short int core___core__Regex___not_bol(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = self->attrs[COLOR_core__re__Regex___not_bol].s; /* _not_bol on <self:Regex> */
var = var1;
RET_LABEL:;
return var;
}
/* method re#Regex#not_eol for (self: Regex): Bool */
short int core___core__Regex___not_eol(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = self->attrs[COLOR_core__re__Regex___not_eol].s; /* _not_eol on <self:Regex> */
var = var1;
RET_LABEL:;
return var;
}
/* method re#Regex#native for (self: Regex): nullable NativeRegex */
val* core___core__Regex___native(val* self) {
val* var /* : nullable NativeRegex */;
val* var1 /* : nullable NativeRegex */;
var1 = self->attrs[COLOR_core__re__Regex___native].val; /* _native on <self:Regex> */
var = var1;
RET_LABEL:;
return var;
}
/* method re#Regex#native= for (self: Regex, nullable NativeRegex) */
void core___core__Regex___native_61d(val* self, val* p0) {
self->attrs[COLOR_core__re__Regex___native].val = p0; /* _native on <self:Regex> */
RET_LABEL:;
}
/* method re#Regex#native_match for (self: Regex): NativeMatchArray */
val* core___core__Regex___native_match(val* self) {
val* var /* : NativeMatchArray */;
short int var1 /* : Bool */;
val* var2 /* : NativeMatchArray */;
val* var3 /* : NativeMatchArray */;
val* var6 /* : NativeMatchArray */;
val* var7 /* : nullable NativeRegex */;
val* var9 /* : nullable NativeRegex */;
long var10 /* : Int */;
long var12 /* : Int */;
void* var13 /* : NativeRegex for extern */;
long var14 /* : Int */;
short int var16 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var17 /* : Int */;
val* var18 /* : NativeMatchArray */;
var1 = self->attrs[COLOR_core__re__Regex___native_match].val != NULL; /* _native_match on <self:Regex> */
if(likely(var1)) {
var2 = self->attrs[COLOR_core__re__Regex___native_match].val; /* _native_match on <self:Regex> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _native_match");
PRINT_ERROR(" (%s:%d)\n", FILE_core__re, 183);
fatal_exit(1);
}
} else {
{
{
{ /* Inline re#Regex#native_match_is_init= (self,1) on <self:Regex> */
self->attrs[COLOR_core__re__Regex___native_match_is_init].s = 1; /* _native_match_is_init on <self:Regex> */
RET_LABEL5:(void)0;
}
}
var6 = NEW_core__re__NativeMatchArray(&type_core__re__NativeMatchArray);
{
{ /* Inline re#Regex#native (self) on <self:Regex> */
var9 = self->attrs[COLOR_core__re__Regex___native].val; /* _native on <self:Regex> */
var7 = var9;
RET_LABEL8:(void)0;
}
}
if (unlikely(var7 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_core__re, 186);
fatal_exit(1);
}
{
{ /* Inline re#NativeRegex#re_nsub (var7) on <var7:nullable NativeRegex(NativeRegex)> */
var13 = ((struct instance_core__Pointer*)var7)->value; /* unboxing nullable NativeRegex */
var12 = re___NativeRegex_re_nsub___impl(var13);
var10 = var12;
goto RET_LABEL11;
RET_LABEL11:(void)0;
}
}
{
{ /* Inline kernel#Int#+ (var10,1l) on <var10:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var16 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var16)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var17 = var10 + 1l;
var14 = var17;
goto RET_LABEL15;
RET_LABEL15:(void)0;
}
}
{
var18 = core__re___core__re__NativeMatchArray___malloc(var6, var14);
}
var3 = var18;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
self->attrs[COLOR_core__re__Regex___native_match].val = var3; /* _native_match on <self:Regex> */
var2 = var3;
}
var = var2;
RET_LABEL:;
return var;
}
/* method re#Regex#native_match_is_init for (self: Regex): Bool */
short int core___core__Regex___native_match_is_init(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = self->attrs[COLOR_core__re__Regex___native_match_is_init].s; /* _native_match_is_init on <self:Regex> */
var = var1;
RET_LABEL:;
return var;
}
/* method re#Regex#native_match_is_init= for (self: Regex, Bool) */
void core___core__Regex___native_match_is_init_61d(val* self, short int p0) {
self->attrs[COLOR_core__re__Regex___native_match_is_init].s = p0; /* _native_match_is_init on <self:Regex> */
RET_LABEL:;
}
/* method re#Regex#cflags_cache for (self: Regex): Int */
long core___core__Regex___cflags_cache(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = self->attrs[COLOR_core__re__Regex___cflags_cache].l; /* _cflags_cache on <self:Regex> */
var = var1;
RET_LABEL:;
return var;
}
/* method re#Regex#cflags_cache= for (self: Regex, Int) */
void core___core__Regex___cflags_cache_61d(val* self, long p0) {
self->attrs[COLOR_core__re__Regex___cflags_cache].l = p0; /* _cflags_cache on <self:Regex> */
RET_LABEL:;
}
/* method re#Regex#string_cache for (self: Regex): nullable String */
val* core___core__Regex___string_cache(val* self) {
val* var /* : nullable String */;
val* var1 /* : nullable String */;
var1 = self->attrs[COLOR_core__re__Regex___string_cache].val; /* _string_cache on <self:Regex> */
var = var1;
RET_LABEL:;
return var;
}
/* method re#Regex#string_cache= for (self: Regex, nullable String) */
void core___core__Regex___string_cache_61d(val* self, val* p0) {
self->attrs[COLOR_core__re__Regex___string_cache].val = p0; /* _string_cache on <self:Regex> */
RET_LABEL:;
}
/* method re#Regex#compile for (self: Regex): nullable Error */
val* core___core__Regex___compile(val* self) {
val* var /* : nullable Error */;
long var_cflags /* var cflags: Int */;
short int var1 /* : Bool */;
short int var3 /* : Bool */;
val* var4 /* : Sys */;
long var5 /* : Int */;
long var7 /* : Int */;
long var8 /* : Int */;
long var10 /* : Int */;
short int var11 /* : Bool */;
short int var13 /* : Bool */;
val* var14 /* : Sys */;
long var15 /* : Int */;
long var17 /* : Int */;
long var18 /* : Int */;
long var20 /* : Int */;
short int var21 /* : Bool */;
short int var23 /* : Bool */;
val* var24 /* : Sys */;
long var25 /* : Int */;
long var27 /* : Int */;
long var28 /* : Int */;
long var30 /* : Int */;
short int var31 /* : Bool */;
short int var33 /* : Bool */;
val* var34 /* : Sys */;
long var35 /* : Int */;
long var37 /* : Int */;
long var38 /* : Int */;
long var40 /* : Int */;
val* var41 /* : nullable NativeRegex */;
val* var43 /* : nullable NativeRegex */;
val* var_native /* var native: nullable NativeRegex */;
short int var44 /* : Bool */;
short int var45 /* : Bool */;
short int var46 /* : Bool */;
short int var47 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var49 /* : Bool */;
short int var51 /* : Bool */;
short int var_ /* var : Bool */;
long var52 /* : Int */;
long var54 /* : Int */;
short int var55 /* : Bool */;
short int var57 /* : Bool */;
short int var58 /* : Bool */;
short int var_59 /* var : Bool */;
val* var60 /* : String */;
val* var62 /* : String */;
val* var63 /* : nullable String */;
val* var65 /* : nullable String */;
short int var66 /* : Bool */;
val* var_other68 /* var other: nullable Object */;
short int var69 /* : Bool */;
short int var70 /* : Bool */;
short int var_need_compilation /* var need_compilation: Bool */;
short int var71 /* : Bool */;
short int var72 /* : Bool */;
short int var74 /* : Bool */;
short int var76 /* : Bool */;
val* var77 /* : NativeRegex */;
val* var78 /* : NativeRegex */;
val* var80 /* : String */;
val* var82 /* : String */;
char* var83 /* : CString */;
long var84 /* : Int */;
long var86 /* : Int */;
void* var87 /* : NativeRegex for extern */;
long var_res /* var res: Int */;
short int var88 /* : Bool */;
short int var90 /* : Bool */;
val* var93 /* : String */;
val* var95 /* : String */;
char* var97 /* : CString */;
char* var99 /* : CString */;
void* var100 /* : NativeRegex for extern */;
char* var_error_cstr /* var error_cstr: CString */;
val* var101 /* : String */;
val* var_error_str /* var error_str: String */;
val* var103 /* : Pointer */;
void* var104 /* : Pointer for extern */;
val* var105 /* : Error */;
var_cflags = 0l;
{
{ /* Inline re#Regex#extended (self) on <self:Regex> */
var3 = self->attrs[COLOR_core__re__Regex___extended].s; /* _extended on <self:Regex> */
var1 = var3;
RET_LABEL2:(void)0;
}
}
if (var1){
var4 = glob_sys;
{
{ /* Inline re#Sys#flag_extended (var4) on <var4:Sys> */
struct nitni_instance* var_for_c_0;
var_for_c_0 = nit_alloc(sizeof(struct nitni_instance));
var_for_c_0->value = var4;
var7 = re___Sys_flag_extended___impl(var_for_c_0);
var5 = var7;
goto RET_LABEL6;
RET_LABEL6:(void)0;
}
}
{
{ /* Inline math#Int#| (var_cflags,var5) on <var_cflags:Int> */
var10 = var_cflags | var5;
var8 = var10;
goto RET_LABEL9;
RET_LABEL9:(void)0;
}
}
var_cflags = var8;
} else {
}
{
{ /* Inline re#Regex#ignore_case (self) on <self:Regex> */
var13 = self->attrs[COLOR_core__re__Regex___ignore_case].s; /* _ignore_case on <self:Regex> */
var11 = var13;
RET_LABEL12:(void)0;
}
}
if (var11){
var14 = glob_sys;
{
{ /* Inline re#Sys#flag_icase (var14) on <var14:Sys> */
struct nitni_instance* var_for_c_0;
var_for_c_0 = nit_alloc(sizeof(struct nitni_instance));
var_for_c_0->value = var14;
var17 = re___Sys_flag_icase___impl(var_for_c_0);
var15 = var17;
goto RET_LABEL16;
RET_LABEL16:(void)0;
}
}
{
{ /* Inline math#Int#| (var_cflags,var15) on <var_cflags:Int> */
var20 = var_cflags | var15;
var18 = var20;
goto RET_LABEL19;
RET_LABEL19:(void)0;
}
}
var_cflags = var18;
} else {
}
{
{ /* Inline re#Regex#optimize_has (self) on <self:Regex> */
var23 = self->attrs[COLOR_core__re__Regex___optimize_has].s; /* _optimize_has on <self:Regex> */
var21 = var23;
RET_LABEL22:(void)0;
}
}
if (var21){
var24 = glob_sys;
{
{ /* Inline re#Sys#flag_nosub (var24) on <var24:Sys> */
struct nitni_instance* var_for_c_0;
var_for_c_0 = nit_alloc(sizeof(struct nitni_instance));
var_for_c_0->value = var24;
var27 = re___Sys_flag_nosub___impl(var_for_c_0);
var25 = var27;
goto RET_LABEL26;
RET_LABEL26:(void)0;
}
}
{
{ /* Inline math#Int#| (var_cflags,var25) on <var_cflags:Int> */
var30 = var_cflags | var25;
var28 = var30;
goto RET_LABEL29;
RET_LABEL29:(void)0;
}
}
var_cflags = var28;
} else {
}
{
{ /* Inline re#Regex#newline (self) on <self:Regex> */
var33 = self->attrs[COLOR_core__re__Regex___newline].s; /* _newline on <self:Regex> */
var31 = var33;
RET_LABEL32:(void)0;
}
}
if (var31){
var34 = glob_sys;
{
{ /* Inline re#Sys#flag_newline (var34) on <var34:Sys> */
struct nitni_instance* var_for_c_0;
var_for_c_0 = nit_alloc(sizeof(struct nitni_instance));
var_for_c_0->value = var34;
var37 = re___Sys_flag_newline___impl(var_for_c_0);
var35 = var37;
goto RET_LABEL36;
RET_LABEL36:(void)0;
}
}
{
{ /* Inline math#Int#| (var_cflags,var35) on <var_cflags:Int> */
var40 = var_cflags | var35;
var38 = var40;
goto RET_LABEL39;
RET_LABEL39:(void)0;
}
}
var_cflags = var38;
} else {
}
{
{ /* Inline re#Regex#native (self) on <self:Regex> */
var43 = self->attrs[COLOR_core__re__Regex___native].val; /* _native on <self:Regex> */
var41 = var43;
RET_LABEL42:(void)0;
}
}
var_native = var41;
if (var_native == NULL) {
var46 = 1; /* is null */
} else {
var46 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_native,((val*)NULL)) on <var_native:nullable NativeRegex> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_native,var_other) on <var_native:nullable NativeRegex(NativeRegex)> */
var51 = var_native == var_other;
var49 = var51;
goto RET_LABEL50;
RET_LABEL50:(void)0;
}
}
var47 = var49;
goto RET_LABEL48;
RET_LABEL48:(void)0;
}
var46 = var47;
}
var_ = var46;
if (var46){
var45 = var_;
} else {
{
{ /* Inline re#Regex#cflags_cache (self) on <self:Regex> */
var54 = self->attrs[COLOR_core__re__Regex___cflags_cache].l; /* _cflags_cache on <self:Regex> */
var52 = var54;
RET_LABEL53:(void)0;
}
}
{
{ /* Inline kernel#Int#!= (var_cflags,var52) on <var_cflags:Int> */
var57 = var_cflags == var52;
var58 = !var57;
var55 = var58;
goto RET_LABEL56;
RET_LABEL56:(void)0;
}
}
var45 = var55;
}
var_59 = var45;
if (var45){
var44 = var_59;
} else {
{
{ /* Inline re#Regex#string (self) on <self:Regex> */
var62 = self->attrs[COLOR_core__re__Regex___string].val; /* _string on <self:Regex> */
if (unlikely(var62 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _string");
PRINT_ERROR(" (%s:%d)\n", FILE_core__re, 142);
fatal_exit(1);
}
var60 = var62;
RET_LABEL61:(void)0;
}
}
{
{ /* Inline re#Regex#string_cache (self) on <self:Regex> */
var65 = self->attrs[COLOR_core__re__Regex___string_cache].val; /* _string_cache on <self:Regex> */
var63 = var65;
RET_LABEL64:(void)0;
}
}
{
{ /* Inline kernel#Object#!= (var60,var63) on <var60:String> */
var_other68 = var63;
{
var69 = ((short int(*)(val* self, val* p0))(var60->class->vft[COLOR_core__kernel__Object___61d_61d]))(var60, var_other68); /* == on <var60:String>*/
}
var70 = !var69;
var66 = var70;
goto RET_LABEL67;
RET_LABEL67:(void)0;
}
}
var44 = var66;
}
var_need_compilation = var44;
if (var_need_compilation){
if (var_native == NULL) {
var71 = 1; /* is null */
} else {
var71 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_native,((val*)NULL)) on <var_native:nullable NativeRegex> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_native,var_other) on <var_native:nullable NativeRegex(NativeRegex)> */
var76 = var_native == var_other;
var74 = var76;
goto RET_LABEL75;
RET_LABEL75:(void)0;
}
}
var72 = var74;
goto RET_LABEL73;
RET_LABEL73:(void)0;
}
var71 = var72;
}
if (var71){
var77 = NEW_core__re__NativeRegex(&type_core__re__NativeRegex);
{
var78 = core__re___core__re__NativeRegex___malloc(var77);
}
var_native = var78;
{
{ /* Inline re#Regex#native= (self,var_native) on <self:Regex> */
self->attrs[COLOR_core__re__Regex___native].val = var_native; /* _native on <self:Regex> */
RET_LABEL79:(void)0;
}
}
} else {
}
{
{ /* Inline re#Regex#string (self) on <self:Regex> */
var82 = self->attrs[COLOR_core__re__Regex___string].val; /* _string on <self:Regex> */
if (unlikely(var82 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _string");
PRINT_ERROR(" (%s:%d)\n", FILE_core__re, 142);
fatal_exit(1);
}
var80 = var82;
RET_LABEL81:(void)0;
}
}
{
var83 = ((char*(*)(val* self))(var80->class->vft[COLOR_core__abstract_text__Text__to_cstring]))(var80); /* to_cstring on <var80:String>*/
}
{
{ /* Inline re#NativeRegex#regcomp (var_native,var83,var_cflags) on <var_native:nullable NativeRegex(NativeRegex)> */
var87 = ((struct instance_core__Pointer*)var_native)->value; /* unboxing nullable NativeRegex */
var86 = re___NativeRegex_regcomp___impl(var87, var83, var_cflags);
var84 = var86;
goto RET_LABEL85;
RET_LABEL85:(void)0;
}
}
var_res = var84;
{
{ /* Inline kernel#Int#== (var_res,0l) on <var_res:Int> */
var90 = var_res == 0l;
var88 = var90;
goto RET_LABEL89;
RET_LABEL89:(void)0;
}
}
if (var88){
{
{ /* Inline re#Regex#native= (self,var_native) on <self:Regex> */
self->attrs[COLOR_core__re__Regex___native].val = var_native; /* _native on <self:Regex> */
RET_LABEL91:(void)0;
}
}
{
{ /* Inline re#Regex#cflags_cache= (self,var_cflags) on <self:Regex> */
self->attrs[COLOR_core__re__Regex___cflags_cache].l = var_cflags; /* _cflags_cache on <self:Regex> */
RET_LABEL92:(void)0;
}
}
{
{ /* Inline re#Regex#string (self) on <self:Regex> */
var95 = self->attrs[COLOR_core__re__Regex___string].val; /* _string on <self:Regex> */
if (unlikely(var95 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _string");
PRINT_ERROR(" (%s:%d)\n", FILE_core__re, 142);
fatal_exit(1);
}
var93 = var95;
RET_LABEL94:(void)0;
}
}
{
{ /* Inline re#Regex#string_cache= (self,var93) on <self:Regex> */
self->attrs[COLOR_core__re__Regex___string_cache].val = var93; /* _string_cache on <self:Regex> */
RET_LABEL96:(void)0;
}
}
var = ((val*)NULL);
goto RET_LABEL;
} else {
}
{
{ /* Inline re#NativeRegex#regerror (var_native,var_res) on <var_native:nullable NativeRegex(NativeRegex)> */
var100 = ((struct instance_core__Pointer*)var_native)->value; /* unboxing nullable NativeRegex */
var99 = re___NativeRegex_regerror___impl(var100, var_res);
var97 = var99;
goto RET_LABEL98;
RET_LABEL98:(void)0;
}
}
var_error_cstr = var97;
{
var101 = core__flat___CString___core__abstract_text__Object__to_s(var_error_cstr);
}
var_error_str = var101;
{
{ /* Inline kernel#Pointer#free (var_error_cstr) on <var_error_cstr:CString> */
var103 = BOX_core__Pointer(var_error_cstr); /* autobox from CString to Pointer */
var104 = ((struct instance_core__Pointer*)var103)->value; /* unboxing Pointer */
kernel___Pointer_free___impl(var104);
RET_LABEL102:(void)0;
}
}
var105 = NEW_core__Error(&type_core__Error);
{
((void(*)(val* self, val* p0))(var105->class->vft[COLOR_core__error__Error__message_61d]))(var105, var_error_str); /* message= on <var105:Error>*/
}
{
((void(*)(val* self))(var105->class->vft[COLOR_core__kernel__Object__init]))(var105); /* init on <var105:Error>*/
}
var = var105;
goto RET_LABEL;
} else {
}
var = ((val*)NULL);
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method re#Regex#finalize for (self: Regex) */
void core___core__Regex___core__gc__Finalizable__finalize(val* self) {
val* var /* : nullable NativeRegex */;
val* var2 /* : nullable NativeRegex */;
val* var_native /* var native: nullable NativeRegex */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var6 /* : Bool */;
short int var7 /* : Bool */;
void* var9 /* : NativeRegex for extern */;
void* var11 /* : Pointer for extern */;
short int var13 /* : Bool */;
short int var15 /* : Bool */;
val* var16 /* : NativeMatchArray */;
void* var18 /* : Pointer for extern */;
{
{ /* Inline re#Regex#native (self) on <self:Regex> */
var2 = self->attrs[COLOR_core__re__Regex___native].val; /* _native on <self:Regex> */
var = var2;
RET_LABEL1:(void)0;
}
}
var_native = var;
if (var_native == NULL) {
var3 = 0; /* is null */
} else {
var3 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_native,((val*)NULL)) on <var_native:nullable NativeRegex> */
var_other = ((val*)NULL);
{
var6 = ((short int(*)(val* self, val* p0))(var_native->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_native, var_other); /* == on <var_native:nullable NativeRegex(NativeRegex)>*/
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
{ /* Inline re#NativeRegex#regfree (var_native) on <var_native:nullable NativeRegex(NativeRegex)> */
var9 = ((struct instance_core__Pointer*)var_native)->value; /* unboxing nullable NativeRegex */
re___NativeRegex_regfree___impl(var9);
RET_LABEL8:(void)0;
}
}
{
{ /* Inline kernel#Pointer#free (var_native) on <var_native:nullable NativeRegex(NativeRegex)> */
var11 = ((struct instance_core__Pointer*)var_native)->value; /* unboxing nullable NativeRegex */
kernel___Pointer_free___impl(var11);
RET_LABEL10:(void)0;
}
}
{
{ /* Inline re#Regex#native= (self,((val*)NULL)) on <self:Regex> */
self->attrs[COLOR_core__re__Regex___native].val = ((val*)NULL); /* _native on <self:Regex> */
RET_LABEL12:(void)0;
}
}
{
{ /* Inline re#Regex#native_match_is_init (self) on <self:Regex> */
var15 = self->attrs[COLOR_core__re__Regex___native_match_is_init].s; /* _native_match_is_init on <self:Regex> */
var13 = var15;
RET_LABEL14:(void)0;
}
}
if (var13){
{
var16 = core___core__Regex___native_match(self);
}
{
{ /* Inline kernel#Pointer#free (var16) on <var16:NativeMatchArray> */
var18 = ((struct instance_core__Pointer*)var16)->value; /* unboxing NativeMatchArray */
kernel___Pointer_free___impl(var18);
RET_LABEL17:(void)0;
}
}
} else {
}
} else {
}
RET_LABEL:;
}
/* method re#Regex#gather_eflags for (self: Regex): Int */
long core___core__Regex___gather_eflags(val* self) {
long var /* : Int */;
long var_eflags /* var eflags: Int */;
short int var1 /* : Bool */;
short int var3 /* : Bool */;
val* var4 /* : Sys */;
long var5 /* : Int */;
long var7 /* : Int */;
long var8 /* : Int */;
long var10 /* : Int */;
short int var11 /* : Bool */;
short int var13 /* : Bool */;
val* var14 /* : Sys */;
long var15 /* : Int */;
long var17 /* : Int */;
long var18 /* : Int */;
long var20 /* : Int */;
var_eflags = 0l;
{
{ /* Inline re#Regex#not_bol (self) on <self:Regex> */
var3 = self->attrs[COLOR_core__re__Regex___not_bol].s; /* _not_bol on <self:Regex> */
var1 = var3;
RET_LABEL2:(void)0;
}
}
if (var1){
var4 = glob_sys;
{
{ /* Inline re#Sys#flag_notbol (var4) on <var4:Sys> */
struct nitni_instance* var_for_c_0;
var_for_c_0 = nit_alloc(sizeof(struct nitni_instance));
var_for_c_0->value = var4;
var7 = re___Sys_flag_notbol___impl(var_for_c_0);
var5 = var7;
goto RET_LABEL6;
RET_LABEL6:(void)0;
}
}
{
{ /* Inline math#Int#| (var_eflags,var5) on <var_eflags:Int> */
var10 = var_eflags | var5;
var8 = var10;
goto RET_LABEL9;
RET_LABEL9:(void)0;
}
}
var_eflags = var8;
} else {
}
{
{ /* Inline re#Regex#not_eol (self) on <self:Regex> */
var13 = self->attrs[COLOR_core__re__Regex___not_eol].s; /* _not_eol on <self:Regex> */
var11 = var13;
RET_LABEL12:(void)0;
}
}
if (var11){
var14 = glob_sys;
{
{ /* Inline re#Sys#flag_noteol (var14) on <var14:Sys> */
struct nitni_instance* var_for_c_0;
var_for_c_0 = nit_alloc(sizeof(struct nitni_instance));
var_for_c_0->value = var14;
var17 = re___Sys_flag_noteol___impl(var_for_c_0);
var15 = var17;
goto RET_LABEL16;
RET_LABEL16:(void)0;
}
}
{
{ /* Inline math#Int#| (var_eflags,var15) on <var_eflags:Int> */
var20 = var_eflags | var15;
var18 = var20;
goto RET_LABEL19;
RET_LABEL19:(void)0;
}
}
var_eflags = var18;
} else {
}
var = var_eflags;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method re#Regex#get_error for (self: Regex, Int): String */
val* core___core__Regex___get_error(val* self, long p0) {
val* var /* : String */;
long var_errcode /* var errcode: Int */;
val* var1 /* : nullable NativeRegex */;
val* var3 /* : nullable NativeRegex */;
val* var_native /* var native: nullable NativeRegex */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var7 /* : Bool */;
short int var8 /* : Bool */;
char* var9 /* : CString */;
char* var11 /* : CString */;
void* var12 /* : NativeRegex for extern */;
char* var_error_cstr /* var error_cstr: CString */;
val* var13 /* : String */;
val* var_error_str /* var error_str: String */;
val* var15 /* : Pointer */;
void* var16 /* : Pointer for extern */;
var_errcode = p0;
{
{ /* Inline re#Regex#native (self) on <self:Regex> */
var3 = self->attrs[COLOR_core__re__Regex___native].val; /* _native on <self:Regex> */
var1 = var3;
RET_LABEL2:(void)0;
}
}
var_native = var1;
if (var_native == NULL) {
var4 = 0; /* is null */
} else {
var4 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_native,((val*)NULL)) on <var_native:nullable NativeRegex> */
var_other = ((val*)NULL);
{
var7 = ((short int(*)(val* self, val* p0))(var_native->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_native, var_other); /* == on <var_native:nullable NativeRegex(NativeRegex)>*/
}
var8 = !var7;
var5 = var8;
goto RET_LABEL6;
RET_LABEL6:(void)0;
}
var4 = var5;
}
if (unlikely(!var4)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_core__re, 276);
fatal_exit(1);
}
{
{ /* Inline re#NativeRegex#regerror (var_native,var_errcode) on <var_native:nullable NativeRegex(NativeRegex)> */
var12 = ((struct instance_core__Pointer*)var_native)->value; /* unboxing nullable NativeRegex */
var11 = re___NativeRegex_regerror___impl(var12, var_errcode);
var9 = var11;
goto RET_LABEL10;
RET_LABEL10:(void)0;
}
}
var_error_cstr = var9;
{
var13 = core__flat___CString___core__abstract_text__Object__to_s(var_error_cstr);
}
var_error_str = var13;
{
{ /* Inline kernel#Pointer#free (var_error_cstr) on <var_error_cstr:CString> */
var15 = BOX_core__Pointer(var_error_cstr); /* autobox from CString to Pointer */
var16 = ((struct instance_core__Pointer*)var15)->value; /* unboxing Pointer */
kernel___Pointer_free___impl(var16);
RET_LABEL14:(void)0;
}
}
var = var_error_str;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method re#Regex#is_in for (self: Regex, Text): Bool */
short int core___core__Regex___core__string_search__Pattern__is_in(val* self, val* p0) {
short int var /* : Bool */;
val* var_text /* var text: Text */;
val* var1 /* : nullable Error */;
val* var_comp_res /* var comp_res: nullable Error */;
short int var2 /* : Bool */;
short int var3 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var5 /* : Bool */;
short int var7 /* : Bool */;
val* var8 /* : NativeArray[String] */;
static val* varonce;
static val* varonce9;
val* var10 /* : String */;
char* var11 /* : CString */;
val* var12 /* : String */;
static val* varonce13;
val* var14 /* : String */;
char* var15 /* : CString */;
val* var16 /* : String */;
val* var17 /* : String */;
val* var19 /* : String */;
val* var20 /* : String */;
val* var21 /* : nullable NativeRegex */;
val* var23 /* : nullable NativeRegex */;
val* var_native /* var native: nullable NativeRegex */;
short int var24 /* : Bool */;
short int var25 /* : Bool */;
val* var_other27 /* var other: nullable Object */;
short int var28 /* : Bool */;
short int var29 /* : Bool */;
long var30 /* : Int */;
long var_eflags /* var eflags: Int */;
char* var31 /* : CString */;
long var32 /* : Int */;
long var34 /* : Int */;
void* var35 /* : NativeRegex for extern */;
long var_res /* var res: Int */;
short int var36 /* : Bool */;
short int var38 /* : Bool */;
short int var39 /* : Bool */;
short int var41 /* : Bool */;
val* var42 /* : String */;
val* var_error_str /* var error_str: String */;
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
val* var53 /* : String */;
var_text = p0;
{
var1 = core___core__Regex___compile(self);
}
var_comp_res = var1;
if (var_comp_res == NULL) {
var2 = 1; /* is null */
} else {
var2 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_comp_res,((val*)NULL)) on <var_comp_res:nullable Error> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_comp_res,var_other) on <var_comp_res:nullable Error(Error)> */
var7 = var_comp_res == var_other;
var5 = var7;
goto RET_LABEL6;
RET_LABEL6:(void)0;
}
}
var3 = var5;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
var2 = var3;
}
if (unlikely(!var2)) {
if (unlikely(varonce==NULL)) {
var8 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce9!=NULL)) {
var10 = varonce9;
} else {
var11 = "Regex compilation failed with: ";
var12 = core__abstract_text___CString___to_s_full(var11, 31l, 31l);
var10 = var12;
varonce9 = var10;
}
((struct instance_core__NativeArray*)var8)->values[0]=var10;
if (likely(varonce13!=NULL)) {
var14 = varonce13;
} else {
var15 = "\n";
var16 = core__abstract_text___CString___to_s_full(var15, 1l, 1l);
var14 = var16;
varonce13 = var14;
}
((struct instance_core__NativeArray*)var8)->values[2]=var14;
} else {
var8 = varonce;
varonce = NULL;
}
{
{ /* Inline error#Error#message (var_comp_res) on <var_comp_res:nullable Error(Error)> */
var19 = var_comp_res->attrs[COLOR_core__error__Error___message].val; /* _message on <var_comp_res:nullable Error(Error)> */
if (unlikely(var19 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _message");
PRINT_ERROR(" (%s:%d)\n", FILE_core__error, 19);
fatal_exit(1);
}
var17 = var19;
RET_LABEL18:(void)0;
}
}
((struct instance_core__NativeArray*)var8)->values[1]=var17;
{
var20 = ((val*(*)(val* self))(var8->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var8); /* native_to_s on <var8:NativeArray[String]>*/
}
varonce = var8;
{
((void(*)(val* self))(var20->class->vft[COLOR_core__kernel__Object__output]))(var20); /* output on <var20:String>*/
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_core__re, 295);
fatal_exit(1);
}
{
{ /* Inline re#Regex#native (self) on <self:Regex> */
var23 = self->attrs[COLOR_core__re__Regex___native].val; /* _native on <self:Regex> */
var21 = var23;
RET_LABEL22:(void)0;
}
}
var_native = var21;
if (var_native == NULL) {
var24 = 0; /* is null */
} else {
var24 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_native,((val*)NULL)) on <var_native:nullable NativeRegex> */
var_other27 = ((val*)NULL);
{
var28 = ((short int(*)(val* self, val* p0))(var_native->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_native, var_other27); /* == on <var_native:nullable NativeRegex(NativeRegex)>*/
}
var29 = !var28;
var25 = var29;
goto RET_LABEL26;
RET_LABEL26:(void)0;
}
var24 = var25;
}
if (unlikely(!var24)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_core__re, 298);
fatal_exit(1);
}
{
var30 = core___core__Regex___gather_eflags(self);
}
var_eflags = var30;
{
var31 = ((char*(*)(val* self))(var_text->class->vft[COLOR_core__abstract_text__Text__to_cstring]))(var_text); /* to_cstring on <var_text:Text>*/
}
{
{ /* Inline re#NativeRegex#regexec_match_only (var_native,var31,var_eflags) on <var_native:nullable NativeRegex(NativeRegex)> */
var35 = ((struct instance_core__Pointer*)var_native)->value; /* unboxing nullable NativeRegex */
var34 = re___NativeRegex_regexec_match_only___impl(var35, var31, var_eflags);
var32 = var34;
goto RET_LABEL33;
RET_LABEL33:(void)0;
}
}
var_res = var32;
{
{ /* Inline kernel#Int#== (var_res,0l) on <var_res:Int> */
var38 = var_res == 0l;
var36 = var38;
goto RET_LABEL37;
RET_LABEL37:(void)0;
}
}
if (var36){
var = 1;
goto RET_LABEL;
} else {
}
{
{ /* Inline re#Int#is_nomatch (var_res) on <var_res:Int> */
var41 = re___Int_is_nomatch___impl(var_res);
var39 = var41;
goto RET_LABEL40;
RET_LABEL40:(void)0;
}
}
if (var39){
var = 0;
goto RET_LABEL;
} else {
}
{
var42 = core___core__Regex___get_error(self, var_res);
}
var_error_str = var42;
if (unlikely(varonce43==NULL)) {
var44 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce45!=NULL)) {
var46 = varonce45;
} else {
var47 = "Regex search failed with: ";
var48 = core__abstract_text___CString___to_s_full(var47, 26l, 26l);
var46 = var48;
varonce45 = var46;
}
((struct instance_core__NativeArray*)var44)->values[0]=var46;
if (likely(varonce49!=NULL)) {
var50 = varonce49;
} else {
var51 = "\n";
var52 = core__abstract_text___CString___to_s_full(var51, 1l, 1l);
var50 = var52;
varonce49 = var50;
}
((struct instance_core__NativeArray*)var44)->values[2]=var50;
} else {
var44 = varonce43;
varonce43 = NULL;
}
((struct instance_core__NativeArray*)var44)->values[1]=var_error_str;
{
var53 = ((val*(*)(val* self))(var44->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var44); /* native_to_s on <var44:NativeArray[String]>*/
}
varonce43 = var44;
{
((void(*)(val* self))(var53->class->vft[COLOR_core__kernel__Object__output]))(var53); /* output on <var53:String>*/
}
PRINT_ERROR("Runtime error: %s", "Aborted");
PRINT_ERROR(" (%s:%d)\n", FILE_core__re, 313);
fatal_exit(1);
RET_LABEL:;
return var;
}
/* method re#Regex#search_index_in for (self: Regex, Text, Int): Int */
long core___core__Regex___core__string_search__Pattern__search_index_in(val* self, val* p0, long p1) {
long var /* : Int */;
val* var_text /* var text: Text */;
long var_from /* var from: Int */;
short int var1 /* : Bool */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
val* var5 /* : nullable Error */;
val* var_comp_res /* var comp_res: nullable Error */;
short int var6 /* : Bool */;
short int var7 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var9 /* : Bool */;
short int var11 /* : Bool */;
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
val* var21 /* : String */;
val* var23 /* : String */;
val* var24 /* : String */;
val* var25 /* : nullable NativeRegex */;
val* var27 /* : nullable NativeRegex */;
val* var_native /* var native: nullable NativeRegex */;
short int var28 /* : Bool */;
short int var29 /* : Bool */;
val* var_other31 /* var other: nullable Object */;
short int var32 /* : Bool */;
short int var33 /* : Bool */;
val* var34 /* : String */;
val* var35 /* : Text */;
char* var36 /* : CString */;
char* var_cstr /* var cstr: CString */;
long var37 /* : Int */;
long var_eflags /* var eflags: Int */;
val* var38 /* : NativeMatchArray */;
val* var_match /* var match: NativeMatchArray */;
long var39 /* : Int */;
long var41 /* : Int */;
void* var42 /* : NativeRegex for extern */;
void* var43 /* : NativeMatchArray for extern */;
long var_res /* var res: Int */;
short int var44 /* : Bool */;
short int var46 /* : Bool */;
long var47 /* : Int */;
long var49 /* : Int */;
void* var50 /* : NativeMatchArray for extern */;
long var51 /* : Int */;
short int var53 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var54 /* : Int */;
short int var55 /* : Bool */;
short int var57 /* : Bool */;
long var58 /* : Int */;
long var60 /* : Int */;
val* var61 /* : String */;
val* var_error_str /* var error_str: String */;
val* var63 /* : NativeArray[String] */;
static val* varonce62;
static val* varonce64;
val* var65 /* : String */;
char* var66 /* : CString */;
val* var67 /* : String */;
static val* varonce68;
val* var69 /* : String */;
char* var70 /* : CString */;
val* var71 /* : String */;
val* var72 /* : String */;
var_text = p0;
var_from = p1;
{
{ /* Inline re#Regex#optimize_has (self) on <self:Regex> */
var3 = self->attrs[COLOR_core__re__Regex___optimize_has].s; /* _optimize_has on <self:Regex> */
var1 = var3;
RET_LABEL2:(void)0;
}
}
var4 = !var1;
if (unlikely(!var4)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_core__re, 324);
fatal_exit(1);
}
{
var5 = core___core__Regex___compile(self);
}
var_comp_res = var5;
if (var_comp_res == NULL) {
var6 = 1; /* is null */
} else {
var6 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_comp_res,((val*)NULL)) on <var_comp_res:nullable Error> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_comp_res,var_other) on <var_comp_res:nullable Error(Error)> */
var11 = var_comp_res == var_other;
var9 = var11;
goto RET_LABEL10;
RET_LABEL10:(void)0;
}
}
var7 = var9;
goto RET_LABEL8;
RET_LABEL8:(void)0;
}
var6 = var7;
}
if (unlikely(!var6)) {
if (unlikely(varonce==NULL)) {
var12 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce13!=NULL)) {
var14 = varonce13;
} else {
var15 = "Regex compilation failed with: ";
var16 = core__abstract_text___CString___to_s_full(var15, 31l, 31l);
var14 = var16;
varonce13 = var14;
}
((struct instance_core__NativeArray*)var12)->values[0]=var14;
if (likely(varonce17!=NULL)) {
var18 = varonce17;
} else {
var19 = "\n";
var20 = core__abstract_text___CString___to_s_full(var19, 1l, 1l);
var18 = var20;
varonce17 = var18;
}
((struct instance_core__NativeArray*)var12)->values[2]=var18;
} else {
var12 = varonce;
varonce = NULL;
}
{
{ /* Inline error#Error#message (var_comp_res) on <var_comp_res:nullable Error(Error)> */
var23 = var_comp_res->attrs[COLOR_core__error__Error___message].val; /* _message on <var_comp_res:nullable Error(Error)> */
if (unlikely(var23 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _message");
PRINT_ERROR(" (%s:%d)\n", FILE_core__error, 19);
fatal_exit(1);
}
var21 = var23;
RET_LABEL22:(void)0;
}
}
((struct instance_core__NativeArray*)var12)->values[1]=var21;
{
var24 = ((val*(*)(val* self))(var12->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var12); /* native_to_s on <var12:NativeArray[String]>*/
}
varonce = var12;
{
((void(*)(val* self))(var24->class->vft[COLOR_core__kernel__Object__output]))(var24); /* output on <var24:String>*/
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_core__re, 327);
fatal_exit(1);
}
{
{ /* Inline re#Regex#native (self) on <self:Regex> */
var27 = self->attrs[COLOR_core__re__Regex___native].val; /* _native on <self:Regex> */
var25 = var27;
RET_LABEL26:(void)0;
}
}
var_native = var25;
if (var_native == NULL) {
var28 = 0; /* is null */
} else {
var28 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_native,((val*)NULL)) on <var_native:nullable NativeRegex> */
var_other31 = ((val*)NULL);
{
var32 = ((short int(*)(val* self, val* p0))(var_native->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_native, var_other31); /* == on <var_native:nullable NativeRegex(NativeRegex)>*/
}
var33 = !var32;
var29 = var33;
goto RET_LABEL30;
RET_LABEL30:(void)0;
}
var28 = var29;
}
if (unlikely(!var28)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_core__re, 330);
fatal_exit(1);
}
{
var34 = ((val*(*)(val* self))(var_text->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_text); /* to_s on <var_text:Text>*/
}
var_text = var34;
{
var35 = ((val*(*)(val* self, long p0))(var_text->class->vft[COLOR_core__abstract_text__Text__substring_from]))(var_text, var_from); /* substring_from on <var_text:Text(String)>*/
}
{
var36 = ((char*(*)(val* self))(var35->class->vft[COLOR_core__abstract_text__Text__to_cstring]))(var35); /* to_cstring on <var35:Text(String)>*/
}
var_cstr = var36;
{
var37 = core___core__Regex___gather_eflags(self);
}
var_eflags = var37;
{
var38 = core___core__Regex___native_match(self);
}
var_match = var38;
{
{ /* Inline re#NativeRegex#regexec (var_native,var_cstr,1l,var_match,var_eflags) on <var_native:nullable NativeRegex(NativeRegex)> */
var42 = ((struct instance_core__Pointer*)var_native)->value; /* unboxing nullable NativeRegex */
var43 = ((struct instance_core__Pointer*)var_match)->value; /* unboxing NativeMatchArray */
var41 = re___NativeRegex_regexec___impl(var42, var_cstr, 1l, var43, var_eflags);
var39 = var41;
goto RET_LABEL40;
RET_LABEL40:(void)0;
}
}
var_res = var39;
{
{ /* Inline kernel#Int#== (var_res,0l) on <var_res:Int> */
var46 = var_res == 0l;
var44 = var46;
goto RET_LABEL45;
RET_LABEL45:(void)0;
}
}
if (var44){
{
{ /* Inline re#NativeMatchArray#rm_so (var_match) on <var_match:NativeMatchArray> */
var50 = ((struct instance_core__Pointer*)var_match)->value; /* unboxing NativeMatchArray */
var49 = re___NativeMatchArray_rm_so___impl(var50);
var47 = var49;
goto RET_LABEL48;
RET_LABEL48:(void)0;
}
}
{
{ /* Inline kernel#Int#+ (var47,var_from) on <var47:Int> */
/* Covariant cast for argument 0 (i) <var_from:Int> isa OTHER */
/* <var_from:Int> isa OTHER */
var53 = 1; /* easy <var_from:Int> isa OTHER*/
if (unlikely(!var53)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var54 = var47 + var_from;
var51 = var54;
goto RET_LABEL52;
RET_LABEL52:(void)0;
}
}
var = var51;
goto RET_LABEL;
} else {
}
{
{ /* Inline re#Int#is_nomatch (var_res) on <var_res:Int> */
var57 = re___Int_is_nomatch___impl(var_res);
var55 = var57;
goto RET_LABEL56;
RET_LABEL56:(void)0;
}
}
if (var55){
{
{ /* Inline kernel#Int#unary - (1l) on <1l:Int> */
var60 = -1l;
var58 = var60;
goto RET_LABEL59;
RET_LABEL59:(void)0;
}
}
var = var58;
goto RET_LABEL;
} else {
}
{
var61 = core___core__Regex___get_error(self, var_res);
}
var_error_str = var61;
if (unlikely(varonce62==NULL)) {
var63 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce64!=NULL)) {
var65 = varonce64;
} else {
var66 = "Regex search failed with: ";
var67 = core__abstract_text___CString___to_s_full(var66, 26l, 26l);
var65 = var67;
varonce64 = var65;
}
((struct instance_core__NativeArray*)var63)->values[0]=var65;
if (likely(varonce68!=NULL)) {
var69 = varonce68;
} else {
var70 = "\n";
var71 = core__abstract_text___CString___to_s_full(var70, 1l, 1l);
var69 = var71;
varonce68 = var69;
}
((struct instance_core__NativeArray*)var63)->values[2]=var69;
} else {
var63 = varonce62;
varonce62 = NULL;
}
((struct instance_core__NativeArray*)var63)->values[1]=var_error_str;
{
var72 = ((val*(*)(val* self))(var63->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var63); /* native_to_s on <var63:NativeArray[String]>*/
}
varonce62 = var63;
{
((void(*)(val* self))(var72->class->vft[COLOR_core__kernel__Object__output]))(var72); /* output on <var72:String>*/
}
PRINT_ERROR("Runtime error: %s", "Aborted");
PRINT_ERROR(" (%s:%d)\n", FILE_core__re, 349);
fatal_exit(1);
RET_LABEL:;
return var;
}
/* method re#Regex#search_in for (self: Regex, Text, Int): nullable Match */
val* core___core__Regex___core__string_search__Pattern__search_in(val* self, val* p0, long p1) {
val* var /* : nullable Match */;
val* var_text /* var text: Text */;
long var_charfrom /* var charfrom: Int */;
short int var1 /* : Bool */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
val* var5 /* : nullable Error */;
val* var_comp_res /* var comp_res: nullable Error */;
short int var6 /* : Bool */;
short int var7 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var9 /* : Bool */;
short int var11 /* : Bool */;
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
val* var21 /* : String */;
val* var23 /* : String */;
val* var24 /* : String */;
val* var25 /* : nullable NativeRegex */;
val* var27 /* : nullable NativeRegex */;
val* var_native /* var native: nullable NativeRegex */;
short int var28 /* : Bool */;
short int var29 /* : Bool */;
val* var_other31 /* var other: nullable Object */;
short int var32 /* : Bool */;
short int var33 /* : Bool */;
char* var34 /* : CString */;
char* var_cstr /* var cstr: CString */;
long var35 /* : Int */;
val* var36 /* : String */;
val* var37 /* : nullable Int */;
val* var38 /* : nullable Bool */;
val* var_rets /* var rets: String */;
long var39 /* : Int */;
long var_bytefrom /* var bytefrom: Int */;
char* var40 /* : CString */;
char* var42 /* : CString */;
char* var_subcstr /* var subcstr: CString */;
long var43 /* : Int */;
long var_eflags /* var eflags: Int */;
val* var44 /* : NativeMatchArray */;
val* var_native_match /* var native_match: NativeMatchArray */;
long var45 /* : Int */;
long var47 /* : Int */;
void* var48 /* : NativeRegex for extern */;
long var_nsub /* var nsub: Int */;
long var49 /* : Int */;
short int var51 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var52 /* : Int */;
long var53 /* : Int */;
long var55 /* : Int */;
void* var56 /* : NativeRegex for extern */;
void* var57 /* : NativeMatchArray for extern */;
long var_res /* var res: Int */;
short int var58 /* : Bool */;
short int var60 /* : Bool */;
long var61 /* : Int */;
long var63 /* : Int */;
void* var64 /* : NativeMatchArray for extern */;
long var65 /* : Int */;
short int var67 /* : Bool */;
int cltype68;
int idtype69;
const char* var_class_name70;
long var71 /* : Int */;
long var_bfrom /* var bfrom: Int */;
long var72 /* : Int */;
long var74 /* : Int */;
void* var75 /* : NativeMatchArray for extern */;
long var76 /* : Int */;
short int var78 /* : Bool */;
int cltype79;
int idtype80;
const char* var_class_name81;
long var82 /* : Int */;
long var83 /* : Int */;
short int var85 /* : Bool */;
int cltype86;
int idtype87;
const char* var_class_name88;
long var89 /* : Int */;
long var_bto /* var bto: Int */;
long var90 /* : Int */;
long var_cpos /* var cpos: Int */;
long var91 /* : Int */;
short int var93 /* : Bool */;
int cltype94;
int idtype95;
const char* var_class_name96;
long var97 /* : Int */;
long var98 /* : Int */;
short int var100 /* : Bool */;
int cltype101;
int idtype102;
const char* var_class_name103;
long var104 /* : Int */;
long var105 /* : Int */;
long var_from /* var from: Int */;
long var_byte_length /* var byte_length: Int */;
long var_st /* var st: Int */;
long var_ln /* var ln: Int */;
short int var107 /* : Bool */;
short int var109 /* : Bool */;
int cltype110;
int idtype111;
const char* var_class_name112;
short int var113 /* : Bool */;
short int var114 /* : Bool */;
short int var116 /* : Bool */;
int cltype117;
int idtype118;
const char* var_class_name119;
short int var120 /* : Bool */;
uint32_t var121 /* : UInt32 */;
uint32_t var123 /* : UInt32 */;
uint32_t var_i /* var i: UInt32 */;
uint32_t var124 /* : UInt32 */;
uint32_t var126 /* : UInt32 */;
short int var127 /* : Bool */;
short int var129 /* : Bool */;
short int var130 /* : Bool */;
long var131 /* : Int */;
short int var133 /* : Bool */;
int cltype134;
int idtype135;
const char* var_class_name136;
long var137 /* : Int */;
long var138 /* : Int */;
short int var140 /* : Bool */;
int cltype141;
int idtype142;
const char* var_class_name143;
long var144 /* : Int */;
long var145 /* : Int */;
short int var147 /* : Bool */;
int cltype148;
int idtype149;
const char* var_class_name150;
long var151 /* : Int */;
short int var152 /* : Bool */;
short int var154 /* : Bool */;
long var156 /* : Int */;
long var_cln /* var cln: Int */;
long var157 /* : Int */;
short int var159 /* : Bool */;
int cltype160;
int idtype161;
const char* var_class_name162;
long var163 /* : Int */;
long var164 /* : Int */;
short int var166 /* : Bool */;
int cltype167;
int idtype168;
const char* var_class_name169;
long var170 /* : Int */;
long var171 /* : Int */;
short int var173 /* : Bool */;
int cltype174;
int idtype175;
const char* var_class_name176;
long var177 /* : Int */;
long var_len /* var len: Int */;
val* var178 /* : Match */;
val* var_match /* var match: Match */;
val* var179 /* : Array[nullable Match] */;
val* var_subs /* var subs: Array[nullable Match] */;
long var_i180 /* var i: Int */;
long var_ /* var : Int */;
short int var181 /* : Bool */;
short int var183 /* : Bool */;
int cltype184;
int idtype185;
const char* var_class_name186;
short int var187 /* : Bool */;
val* var189 /* : NativeMatchArray */;
val* var191 /* : NativeMatchArray */;
void* var192 /* : NativeMatchArray for extern */;
val* var193 /* : NativeMatchArray */;
long var194 /* : Int */;
long var196 /* : Int */;
void* var197 /* : NativeMatchArray for extern */;
short int var198 /* : Bool */;
short int var200 /* : Bool */;
int cltype201;
int idtype202;
const char* var_class_name203;
short int var204 /* : Bool */;
val* var206 /* : NativeMatchArray */;
val* var208 /* : NativeMatchArray */;
void* var209 /* : NativeMatchArray for extern */;
val* var210 /* : NativeMatchArray */;
long var211 /* : Int */;
long var213 /* : Int */;
void* var214 /* : NativeMatchArray for extern */;
long var215 /* : Int */;
short int var217 /* : Bool */;
int cltype218;
int idtype219;
const char* var_class_name220;
long var221 /* : Int */;
long var_sub_bfrom /* var sub_bfrom: Int */;
val* var222 /* : NativeMatchArray */;
val* var224 /* : NativeMatchArray */;
void* var225 /* : NativeMatchArray for extern */;
val* var226 /* : NativeMatchArray */;
long var227 /* : Int */;
long var229 /* : Int */;
void* var230 /* : NativeMatchArray for extern */;
long var231 /* : Int */;
short int var233 /* : Bool */;
int cltype234;
int idtype235;
const char* var_class_name236;
long var237 /* : Int */;
long var238 /* : Int */;
short int var240 /* : Bool */;
int cltype241;
int idtype242;
const char* var_class_name243;
long var244 /* : Int */;
long var_sub_bto /* var sub_bto: Int */;
long var245 /* : Int */;
long var_sub_cpos /* var sub_cpos: Int */;
long var246 /* : Int */;
short int var248 /* : Bool */;
int cltype249;
int idtype250;
const char* var_class_name251;
long var252 /* : Int */;
long var253 /* : Int */;
short int var255 /* : Bool */;
int cltype256;
int idtype257;
const char* var_class_name258;
long var259 /* : Int */;
long var260 /* : Int */;
short int var262 /* : Bool */;
short int var264 /* : Bool */;
int cltype265;
int idtype266;
const char* var_class_name267;
short int var268 /* : Bool */;
short int var269 /* : Bool */;
short int var271 /* : Bool */;
int cltype272;
int idtype273;
const char* var_class_name274;
short int var275 /* : Bool */;
uint32_t var276 /* : UInt32 */;
uint32_t var278 /* : UInt32 */;
uint32_t var279 /* : UInt32 */;
uint32_t var281 /* : UInt32 */;
short int var282 /* : Bool */;
short int var284 /* : Bool */;
short int var285 /* : Bool */;
long var287 /* : Int */;
short int var289 /* : Bool */;
int cltype290;
int idtype291;
const char* var_class_name292;
long var293 /* : Int */;
long var294 /* : Int */;
short int var296 /* : Bool */;
int cltype297;
int idtype298;
const char* var_class_name299;
long var300 /* : Int */;
long var301 /* : Int */;
short int var303 /* : Bool */;
int cltype304;
int idtype305;
const char* var_class_name306;
long var307 /* : Int */;
short int var308 /* : Bool */;
short int var310 /* : Bool */;
long var312 /* : Int */;
long var313 /* : Int */;
short int var315 /* : Bool */;
int cltype316;
int idtype317;
const char* var_class_name318;
long var319 /* : Int */;
long var320 /* : Int */;
short int var322 /* : Bool */;
int cltype323;
int idtype324;
const char* var_class_name325;
long var326 /* : Int */;
long var327 /* : Int */;
short int var329 /* : Bool */;
int cltype330;
int idtype331;
const char* var_class_name332;
long var333 /* : Int */;
long var_sub_len /* var sub_len: Int */;
val* var334 /* : Match */;
long var335 /* : Int */;
short int var336 /* : Bool */;
short int var338 /* : Bool */;
val* var339 /* : String */;
val* var_error_str /* var error_str: String */;
val* var341 /* : NativeArray[String] */;
static val* varonce340;
static val* varonce342;
val* var343 /* : String */;
char* var344 /* : CString */;
val* var345 /* : String */;
static val* varonce346;
val* var347 /* : String */;
char* var348 /* : CString */;
val* var349 /* : String */;
val* var350 /* : String */;
var_text = p0;
var_charfrom = p1;
{
{ /* Inline re#Regex#optimize_has (self) on <self:Regex> */
var3 = self->attrs[COLOR_core__re__Regex___optimize_has].s; /* _optimize_has on <self:Regex> */
var1 = var3;
RET_LABEL2:(void)0;
}
}
var4 = !var1;
if (unlikely(!var4)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_core__re, 361);
fatal_exit(1);
}
{
var5 = core___core__Regex___compile(self);
}
var_comp_res = var5;
if (var_comp_res == NULL) {
var6 = 1; /* is null */
} else {
var6 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_comp_res,((val*)NULL)) on <var_comp_res:nullable Error> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_comp_res,var_other) on <var_comp_res:nullable Error(Error)> */
var11 = var_comp_res == var_other;
var9 = var11;
goto RET_LABEL10;
RET_LABEL10:(void)0;
}
}
var7 = var9;
goto RET_LABEL8;
RET_LABEL8:(void)0;
}
var6 = var7;
}
if (unlikely(!var6)) {
if (unlikely(varonce==NULL)) {
var12 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce13!=NULL)) {
var14 = varonce13;
} else {
var15 = "Regex compilation failed with: ";
var16 = core__abstract_text___CString___to_s_full(var15, 31l, 31l);
var14 = var16;
varonce13 = var14;
}
((struct instance_core__NativeArray*)var12)->values[0]=var14;
if (likely(varonce17!=NULL)) {
var18 = varonce17;
} else {
var19 = "\n";
var20 = core__abstract_text___CString___to_s_full(var19, 1l, 1l);
var18 = var20;
varonce17 = var18;
}
((struct instance_core__NativeArray*)var12)->values[2]=var18;
} else {
var12 = varonce;
varonce = NULL;
}
{
{ /* Inline error#Error#message (var_comp_res) on <var_comp_res:nullable Error(Error)> */
var23 = var_comp_res->attrs[COLOR_core__error__Error___message].val; /* _message on <var_comp_res:nullable Error(Error)> */
if (unlikely(var23 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _message");
PRINT_ERROR(" (%s:%d)\n", FILE_core__error, 19);
fatal_exit(1);
}
var21 = var23;
RET_LABEL22:(void)0;
}
}
((struct instance_core__NativeArray*)var12)->values[1]=var21;
{
var24 = ((val*(*)(val* self))(var12->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var12); /* native_to_s on <var12:NativeArray[String]>*/
}
varonce = var12;
{
((void(*)(val* self))(var24->class->vft[COLOR_core__kernel__Object__output]))(var24); /* output on <var24:String>*/
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_core__re, 364);
fatal_exit(1);
}
{
{ /* Inline re#Regex#native (self) on <self:Regex> */
var27 = self->attrs[COLOR_core__re__Regex___native].val; /* _native on <self:Regex> */
var25 = var27;
RET_LABEL26:(void)0;
}
}
var_native = var25;
if (var_native == NULL) {
var28 = 0; /* is null */
} else {
var28 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_native,((val*)NULL)) on <var_native:nullable NativeRegex> */
var_other31 = ((val*)NULL);
{
var32 = ((short int(*)(val* self, val* p0))(var_native->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_native, var_other31); /* == on <var_native:nullable NativeRegex(NativeRegex)>*/
}
var33 = !var32;
var29 = var33;
goto RET_LABEL30;
RET_LABEL30:(void)0;
}
var28 = var29;
}
if (unlikely(!var28)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_core__re, 367);
fatal_exit(1);
}
{
var34 = ((char*(*)(val* self))(var_text->class->vft[COLOR_core__abstract_text__Text__to_cstring]))(var_text); /* to_cstring on <var_text:Text>*/
}
var_cstr = var34;
{
var35 = ((long(*)(val* self))(var_text->class->vft[COLOR_core__abstract_text__Text__byte_length]))(var_text); /* byte_length on <var_text:Text>*/
}
{
var37 = (val*)(var35<<2|1);
var38 = (val*)((long)(0)<<2|3);
var36 = core__flat___CString___to_s_unsafe(var_cstr, var37, ((val*)NULL), var38, ((val*)NULL));
}
var_rets = var36;
{
var39 = core___core__CString___char_to_byte_index_cached(var_cstr, var_charfrom, 0l, 0l);
}
var_bytefrom = var39;
{
{ /* Inline native#CString#fast_cstring (var_cstr,var_bytefrom) on <var_cstr:CString> */
var42 = var_cstr + var_bytefrom;
var40 = var42;
goto RET_LABEL41;
RET_LABEL41:(void)0;
}
}
var_subcstr = var40;
{
var43 = core___core__Regex___gather_eflags(self);
}
var_eflags = var43;
{
var44 = core___core__Regex___native_match(self);
}
var_native_match = var44;
{
{ /* Inline re#NativeRegex#re_nsub (var_native) on <var_native:nullable NativeRegex(NativeRegex)> */
var48 = ((struct instance_core__Pointer*)var_native)->value; /* unboxing nullable NativeRegex */
var47 = re___NativeRegex_re_nsub___impl(var48);
var45 = var47;
goto RET_LABEL46;
RET_LABEL46:(void)0;
}
}
var_nsub = var45;
{
{ /* Inline kernel#Int#+ (var_nsub,1l) on <var_nsub:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var51 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var51)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var52 = var_nsub + 1l;
var49 = var52;
goto RET_LABEL50;
RET_LABEL50:(void)0;
}
}
{
{ /* Inline re#NativeRegex#regexec (var_native,var_subcstr,var49,var_native_match,var_eflags) on <var_native:nullable NativeRegex(NativeRegex)> */
var56 = ((struct instance_core__Pointer*)var_native)->value; /* unboxing nullable NativeRegex */
var57 = ((struct instance_core__Pointer*)var_native_match)->value; /* unboxing NativeMatchArray */
var55 = re___NativeRegex_regexec___impl(var56, var_subcstr, var49, var57, var_eflags);
var53 = var55;
goto RET_LABEL54;
RET_LABEL54:(void)0;
}
}
var_res = var53;
{
{ /* Inline kernel#Int#== (var_res,0l) on <var_res:Int> */
var60 = var_res == 0l;
var58 = var60;
goto RET_LABEL59;
RET_LABEL59:(void)0;
}
}
if (var58){
{
{ /* Inline re#NativeMatchArray#rm_so (var_native_match) on <var_native_match:NativeMatchArray> */
var64 = ((struct instance_core__Pointer*)var_native_match)->value; /* unboxing NativeMatchArray */
var63 = re___NativeMatchArray_rm_so___impl(var64);
var61 = var63;
goto RET_LABEL62;
RET_LABEL62:(void)0;
}
}
{
{ /* Inline kernel#Int#+ (var61,var_bytefrom) on <var61:Int> */
/* Covariant cast for argument 0 (i) <var_bytefrom:Int> isa OTHER */
/* <var_bytefrom:Int> isa OTHER */
var67 = 1; /* easy <var_bytefrom:Int> isa OTHER*/
if (unlikely(!var67)) {
var_class_name70 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name70);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var71 = var61 + var_bytefrom;
var65 = var71;
goto RET_LABEL66;
RET_LABEL66:(void)0;
}
}
var_bfrom = var65;
{
{ /* Inline re#NativeMatchArray#rm_eo (var_native_match) on <var_native_match:NativeMatchArray> */
var75 = ((struct instance_core__Pointer*)var_native_match)->value; /* unboxing NativeMatchArray */
var74 = re___NativeMatchArray_rm_eo___impl(var75);
var72 = var74;
goto RET_LABEL73;
RET_LABEL73:(void)0;
}
}
{
{ /* Inline kernel#Int#- (var72,1l) on <var72:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var78 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var78)) {
var_class_name81 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name81);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var82 = var72 - 1l;
var76 = var82;
goto RET_LABEL77;
RET_LABEL77:(void)0;
}
}
{
{ /* Inline kernel#Int#+ (var76,var_bytefrom) on <var76:Int> */
/* Covariant cast for argument 0 (i) <var_bytefrom:Int> isa OTHER */
/* <var_bytefrom:Int> isa OTHER */
var85 = 1; /* easy <var_bytefrom:Int> isa OTHER*/
if (unlikely(!var85)) {
var_class_name88 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name88);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var89 = var76 + var_bytefrom;
var83 = var89;
goto RET_LABEL84;
RET_LABEL84:(void)0;
}
}
var_bto = var83;
{
var90 = core___core__CString___byte_to_char_index_cached(var_cstr, var_bfrom, var_charfrom, var_bytefrom);
}
var_cpos = var90;
{
{ /* Inline kernel#Int#- (var_bto,var_bfrom) on <var_bto:Int> */
/* Covariant cast for argument 0 (i) <var_bfrom:Int> isa OTHER */
/* <var_bfrom:Int> isa OTHER */
var93 = 1; /* easy <var_bfrom:Int> isa OTHER*/
if (unlikely(!var93)) {
var_class_name96 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name96);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var97 = var_bto - var_bfrom;
var91 = var97;
goto RET_LABEL92;
RET_LABEL92:(void)0;
}
}
{
{ /* Inline kernel#Int#+ (var91,1l) on <var91:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var100 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var100)) {
var_class_name103 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name103);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var104 = var91 + 1l;
var98 = var104;
goto RET_LABEL99;
RET_LABEL99:(void)0;
}
}
{
{ /* Inline native#CString#utf8_length (var_cstr,var_bfrom,var98) on <var_cstr:CString> */
var_from = var_bfrom;
var_byte_length = var98;
var_st = var_from;
var_ln = 0l;
for(;;) {
{
{ /* Inline kernel#Int#> (var_byte_length,0l) on <var_byte_length:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var109 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var109)) {
var_class_name112 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name112);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 727);
fatal_exit(1);
}
var113 = var_byte_length > 0l;
var107 = var113;
goto RET_LABEL108;
RET_LABEL108:(void)0;
}
}
if (var107){
for(;;) {
{
{ /* Inline kernel#Int#>= (var_byte_length,4l) on <var_byte_length:Int> */
/* Covariant cast for argument 0 (i) <4l:Int> isa OTHER */
/* <4l:Int> isa OTHER */
var116 = 1; /* easy <4l:Int> isa OTHER*/
if (unlikely(!var116)) {
var_class_name119 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name119);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 726);
fatal_exit(1);
}
var120 = var_byte_length >= 4l;
var114 = var120;
goto RET_LABEL115;
RET_LABEL115:(void)0;
}
}
if (var114){
{
{ /* Inline native#CString#fetch_4_chars (var_cstr,var_st) on <var_cstr:CString> */
var123 = (long)*((uint32_t*)(var_cstr + var_st));
var121 = var123;
goto RET_LABEL122;
RET_LABEL122:(void)0;
}
}
var_i = var121;
{
{ /* Inline fixed_ints#UInt32#& (var_i,((uint32_t)2155905152)) on <var_i:UInt32> */
var126 = var_i & ((uint32_t)2155905152);
var124 = var126;
goto RET_LABEL125;
RET_LABEL125:(void)0;
}
}
{
{ /* Inline fixed_ints#UInt32#!= (var124,((uint32_t)0)) on <var124:UInt32> */
var129 = var124 == ((uint32_t)0);
var130 = !var129;
var127 = var130;
goto RET_LABEL128;
RET_LABEL128:(void)0;
}
}
if (var127){
goto BREAK_label;
} else {
}
{
{ /* Inline kernel#Int#- (var_byte_length,4l) on <var_byte_length:Int> */
/* Covariant cast for argument 0 (i) <4l:Int> isa OTHER */
/* <4l:Int> isa OTHER */
var133 = 1; /* easy <4l:Int> isa OTHER*/
if (unlikely(!var133)) {
var_class_name136 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name136);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var137 = var_byte_length - 4l;
var131 = var137;
goto RET_LABEL132;
RET_LABEL132:(void)0;
}
}
var_byte_length = var131;
{
{ /* Inline kernel#Int#+ (var_st,4l) on <var_st:Int> */
/* Covariant cast for argument 0 (i) <4l:Int> isa OTHER */
/* <4l:Int> isa OTHER */
var140 = 1; /* easy <4l:Int> isa OTHER*/
if (unlikely(!var140)) {
var_class_name143 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name143);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var144 = var_st + 4l;
var138 = var144;
goto RET_LABEL139;
RET_LABEL139:(void)0;
}
}
var_st = var138;
{
{ /* Inline kernel#Int#+ (var_ln,4l) on <var_ln:Int> */
/* Covariant cast for argument 0 (i) <4l:Int> isa OTHER */
/* <4l:Int> isa OTHER */
var147 = 1; /* easy <4l:Int> isa OTHER*/
if (unlikely(!var147)) {
var_class_name150 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name150);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var151 = var_ln + 4l;
var145 = var151;
goto RET_LABEL146;
RET_LABEL146:(void)0;
}
}
var_ln = var145;
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
{ /* Inline kernel#Int#== (var_byte_length,0l) on <var_byte_length:Int> */
var154 = var_byte_length == 0l;
var152 = var154;
goto RET_LABEL153;
RET_LABEL153:(void)0;
}
}
if (var152){
goto BREAK_label155;
} else {
}
{
var156 = core___core__CString___length_of_char_at(var_cstr, var_st);
}
var_cln = var156;
{
{ /* Inline kernel#Int#+ (var_st,var_cln) on <var_st:Int> */
/* Covariant cast for argument 0 (i) <var_cln:Int> isa OTHER */
/* <var_cln:Int> isa OTHER */
var159 = 1; /* easy <var_cln:Int> isa OTHER*/
if (unlikely(!var159)) {
var_class_name162 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name162);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var163 = var_st + var_cln;
var157 = var163;
goto RET_LABEL158;
RET_LABEL158:(void)0;
}
}
var_st = var157;
{
{ /* Inline kernel#Int#+ (var_ln,1l) on <var_ln:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var166 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var166)) {
var_class_name169 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name169);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var170 = var_ln + 1l;
var164 = var170;
goto RET_LABEL165;
RET_LABEL165:(void)0;
}
}
var_ln = var164;
{
{ /* Inline kernel#Int#- (var_byte_length,var_cln) on <var_byte_length:Int> */
/* Covariant cast for argument 0 (i) <var_cln:Int> isa OTHER */
/* <var_cln:Int> isa OTHER */
var173 = 1; /* easy <var_cln:Int> isa OTHER*/
if (unlikely(!var173)) {
var_class_name176 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name176);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var177 = var_byte_length - var_cln;
var171 = var177;
goto RET_LABEL172;
RET_LABEL172:(void)0;
}
}
var_byte_length = var171;
} else {
goto BREAK_label155;
}
}
BREAK_label155: (void)0;
var105 = var_ln;
goto RET_LABEL106;
RET_LABEL106:(void)0;
}
}
var_len = var105;
var178 = NEW_core__Match(&type_core__Match);
{
((void(*)(val* self, val* p0))(var178->class->vft[COLOR_core__string_search__Match__string_61d]))(var178, var_rets); /* string= on <var178:Match>*/
}
{
((void(*)(val* self, long p0))(var178->class->vft[COLOR_core__string_search__Match__from_61d]))(var178, var_cpos); /* from= on <var178:Match>*/
}
{
((void(*)(val* self, long p0))(var178->class->vft[COLOR_core__string_search__Match__length_61d]))(var178, var_len); /* length= on <var178:Match>*/
}
{
((void(*)(val* self))(var178->class->vft[COLOR_core__kernel__Object__init]))(var178); /* init on <var178:Match>*/
}
var_match = var178;
{
var179 = core__re___Match___subs(var_match);
}
var_subs = var179;
var_i180 = 1l;
var_ = var_nsub;
for(;;) {
{
{ /* Inline kernel#Int#<= (var_i180,var_) on <var_i180:Int> */
/* Covariant cast for argument 0 (i) <var_:Int> isa OTHER */
/* <var_:Int> isa OTHER */
var183 = 1; /* easy <var_:Int> isa OTHER*/
if (unlikely(!var183)) {
var_class_name186 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name186);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 724);
fatal_exit(1);
}
var187 = var_i180 <= var_;
var181 = var187;
goto RET_LABEL182;
RET_LABEL182:(void)0;
}
}
if (var181){
} else {
goto BREAK_label188;
}
{
{ /* Inline re#NativeMatchArray#[] (var_native_match,var_i180) on <var_native_match:NativeMatchArray> */
var192 = ((struct instance_core__Pointer*)var_native_match)->value; /* unboxing NativeMatchArray */
var191 = re___NativeMatchArray__index___impl(var192, var_i180);
var193 = BOX_core__Pointer(var191); /* boxing NativeMatchArray */
var193->type = &type_core__re__NativeMatchArray;
var193->class = &class_core__re__NativeMatchArray;
var189 = var193;
goto RET_LABEL190;
RET_LABEL190:(void)0;
}
}
{
{ /* Inline re#NativeMatchArray#rm_so (var189) on <var189:NativeMatchArray> */
var197 = ((struct instance_core__Pointer*)var189)->value; /* unboxing NativeMatchArray */
var196 = re___NativeMatchArray_rm_so___impl(var197);
var194 = var196;
goto RET_LABEL195;
RET_LABEL195:(void)0;
}
}
{
{ /* Inline kernel#Int#< (var194,0l) on <var194:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var200 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var200)) {
var_class_name203 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name203);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var204 = var194 < 0l;
var198 = var204;
goto RET_LABEL199;
RET_LABEL199:(void)0;
}
}
if (var198){
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_subs, ((val*)NULL)); /* Direct call array#Array#add on <var_subs:Array[nullable Match]>*/
}
goto BREAK_label205;
} else {
}
{
{ /* Inline re#NativeMatchArray#[] (var_native_match,var_i180) on <var_native_match:NativeMatchArray> */
var209 = ((struct instance_core__Pointer*)var_native_match)->value; /* unboxing NativeMatchArray */
var208 = re___NativeMatchArray__index___impl(var209, var_i180);
var210 = BOX_core__Pointer(var208); /* boxing NativeMatchArray */
var210->type = &type_core__re__NativeMatchArray;
var210->class = &class_core__re__NativeMatchArray;
var206 = var210;
goto RET_LABEL207;
RET_LABEL207:(void)0;
}
}
{
{ /* Inline re#NativeMatchArray#rm_so (var206) on <var206:NativeMatchArray> */
var214 = ((struct instance_core__Pointer*)var206)->value; /* unboxing NativeMatchArray */
var213 = re___NativeMatchArray_rm_so___impl(var214);
var211 = var213;
goto RET_LABEL212;
RET_LABEL212:(void)0;
}
}
{
{ /* Inline kernel#Int#+ (var211,var_bytefrom) on <var211:Int> */
/* Covariant cast for argument 0 (i) <var_bytefrom:Int> isa OTHER */
/* <var_bytefrom:Int> isa OTHER */
var217 = 1; /* easy <var_bytefrom:Int> isa OTHER*/
if (unlikely(!var217)) {
var_class_name220 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name220);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var221 = var211 + var_bytefrom;
var215 = var221;
goto RET_LABEL216;
RET_LABEL216:(void)0;
}
}
var_sub_bfrom = var215;
{
{ /* Inline re#NativeMatchArray#[] (var_native_match,var_i180) on <var_native_match:NativeMatchArray> */
var225 = ((struct instance_core__Pointer*)var_native_match)->value; /* unboxing NativeMatchArray */
var224 = re___NativeMatchArray__index___impl(var225, var_i180);
var226 = BOX_core__Pointer(var224); /* boxing NativeMatchArray */
var226->type = &type_core__re__NativeMatchArray;
var226->class = &class_core__re__NativeMatchArray;
var222 = var226;
goto RET_LABEL223;
RET_LABEL223:(void)0;
}
}
{
{ /* Inline re#NativeMatchArray#rm_eo (var222) on <var222:NativeMatchArray> */
var230 = ((struct instance_core__Pointer*)var222)->value; /* unboxing NativeMatchArray */
var229 = re___NativeMatchArray_rm_eo___impl(var230);
var227 = var229;
goto RET_LABEL228;
RET_LABEL228:(void)0;
}
}
{
{ /* Inline kernel#Int#- (var227,1l) on <var227:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var233 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var233)) {
var_class_name236 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name236);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var237 = var227 - 1l;
var231 = var237;
goto RET_LABEL232;
RET_LABEL232:(void)0;
}
}
{
{ /* Inline kernel#Int#+ (var231,var_bytefrom) on <var231:Int> */
/* Covariant cast for argument 0 (i) <var_bytefrom:Int> isa OTHER */
/* <var_bytefrom:Int> isa OTHER */
var240 = 1; /* easy <var_bytefrom:Int> isa OTHER*/
if (unlikely(!var240)) {
var_class_name243 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name243);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var244 = var231 + var_bytefrom;
var238 = var244;
goto RET_LABEL239;
RET_LABEL239:(void)0;
}
}
var_sub_bto = var238;
{
var245 = core___core__CString___byte_to_char_index_cached(var_cstr, var_sub_bfrom, var_cpos, var_bfrom);
}
var_sub_cpos = var245;
{
{ /* Inline kernel#Int#- (var_sub_bto,var_sub_bfrom) on <var_sub_bto:Int> */
/* Covariant cast for argument 0 (i) <var_sub_bfrom:Int> isa OTHER */
/* <var_sub_bfrom:Int> isa OTHER */
var248 = 1; /* easy <var_sub_bfrom:Int> isa OTHER*/
if (unlikely(!var248)) {
var_class_name251 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name251);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var252 = var_sub_bto - var_sub_bfrom;
var246 = var252;
goto RET_LABEL247;
RET_LABEL247:(void)0;
}
}
{
{ /* Inline kernel#Int#+ (var246,1l) on <var246:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var255 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var255)) {
var_class_name258 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name258);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var259 = var246 + 1l;
var253 = var259;
goto RET_LABEL254;
RET_LABEL254:(void)0;
}
}
{
{ /* Inline native#CString#utf8_length (var_cstr,var_sub_bfrom,var253) on <var_cstr:CString> */
var_from = var_sub_bfrom;
var_byte_length = var253;
var_st = var_from;
var_ln = 0l;
for(;;) {
{
{ /* Inline kernel#Int#> (var_byte_length,0l) on <var_byte_length:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var264 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var264)) {
var_class_name267 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name267);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 727);
fatal_exit(1);
}
var268 = var_byte_length > 0l;
var262 = var268;
goto RET_LABEL263;
RET_LABEL263:(void)0;
}
}
if (var262){
for(;;) {
{
{ /* Inline kernel#Int#>= (var_byte_length,4l) on <var_byte_length:Int> */
/* Covariant cast for argument 0 (i) <4l:Int> isa OTHER */
/* <4l:Int> isa OTHER */
var271 = 1; /* easy <4l:Int> isa OTHER*/
if (unlikely(!var271)) {
var_class_name274 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name274);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 726);
fatal_exit(1);
}
var275 = var_byte_length >= 4l;
var269 = var275;
goto RET_LABEL270;
RET_LABEL270:(void)0;
}
}
if (var269){
{
{ /* Inline native#CString#fetch_4_chars (var_cstr,var_st) on <var_cstr:CString> */
var278 = (long)*((uint32_t*)(var_cstr + var_st));
var276 = var278;
goto RET_LABEL277;
RET_LABEL277:(void)0;
}
}
var_i = var276;
{
{ /* Inline fixed_ints#UInt32#& (var_i,((uint32_t)2155905152)) on <var_i:UInt32> */
var281 = var_i & ((uint32_t)2155905152);
var279 = var281;
goto RET_LABEL280;
RET_LABEL280:(void)0;
}
}
{
{ /* Inline fixed_ints#UInt32#!= (var279,((uint32_t)0)) on <var279:UInt32> */
var284 = var279 == ((uint32_t)0);
var285 = !var284;
var282 = var285;
goto RET_LABEL283;
RET_LABEL283:(void)0;
}
}
if (var282){
goto BREAK_label286;
} else {
}
{
{ /* Inline kernel#Int#- (var_byte_length,4l) on <var_byte_length:Int> */
/* Covariant cast for argument 0 (i) <4l:Int> isa OTHER */
/* <4l:Int> isa OTHER */
var289 = 1; /* easy <4l:Int> isa OTHER*/
if (unlikely(!var289)) {
var_class_name292 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name292);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var293 = var_byte_length - 4l;
var287 = var293;
goto RET_LABEL288;
RET_LABEL288:(void)0;
}
}
var_byte_length = var287;
{
{ /* Inline kernel#Int#+ (var_st,4l) on <var_st:Int> */
/* Covariant cast for argument 0 (i) <4l:Int> isa OTHER */
/* <4l:Int> isa OTHER */
var296 = 1; /* easy <4l:Int> isa OTHER*/
if (unlikely(!var296)) {
var_class_name299 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name299);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var300 = var_st + 4l;
var294 = var300;
goto RET_LABEL295;
RET_LABEL295:(void)0;
}
}
var_st = var294;
{
{ /* Inline kernel#Int#+ (var_ln,4l) on <var_ln:Int> */
/* Covariant cast for argument 0 (i) <4l:Int> isa OTHER */
/* <4l:Int> isa OTHER */
var303 = 1; /* easy <4l:Int> isa OTHER*/
if (unlikely(!var303)) {
var_class_name306 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name306);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var307 = var_ln + 4l;
var301 = var307;
goto RET_LABEL302;
RET_LABEL302:(void)0;
}
}
var_ln = var301;
} else {
goto BREAK_label286;
}
}
BREAK_label286: (void)0;
{
{ /* Inline kernel#Int#== (var_byte_length,0l) on <var_byte_length:Int> */
var310 = var_byte_length == 0l;
var308 = var310;
goto RET_LABEL309;
RET_LABEL309:(void)0;
}
}
if (var308){
goto BREAK_label311;
} else {
}
{
var312 = core___core__CString___length_of_char_at(var_cstr, var_st);
}
var_cln = var312;
{
{ /* Inline kernel#Int#+ (var_st,var_cln) on <var_st:Int> */
/* Covariant cast for argument 0 (i) <var_cln:Int> isa OTHER */
/* <var_cln:Int> isa OTHER */
var315 = 1; /* easy <var_cln:Int> isa OTHER*/
if (unlikely(!var315)) {
var_class_name318 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name318);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var319 = var_st + var_cln;
var313 = var319;
goto RET_LABEL314;
RET_LABEL314:(void)0;
}
}
var_st = var313;
{
{ /* Inline kernel#Int#+ (var_ln,1l) on <var_ln:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var322 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var322)) {
var_class_name325 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name325);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var326 = var_ln + 1l;
var320 = var326;
goto RET_LABEL321;
RET_LABEL321:(void)0;
}
}
var_ln = var320;
{
{ /* Inline kernel#Int#- (var_byte_length,var_cln) on <var_byte_length:Int> */
/* Covariant cast for argument 0 (i) <var_cln:Int> isa OTHER */
/* <var_cln:Int> isa OTHER */
var329 = 1; /* easy <var_cln:Int> isa OTHER*/
if (unlikely(!var329)) {
var_class_name332 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name332);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var333 = var_byte_length - var_cln;
var327 = var333;
goto RET_LABEL328;
RET_LABEL328:(void)0;
}
}
var_byte_length = var327;
} else {
goto BREAK_label311;
}
}
BREAK_label311: (void)0;
var260 = var_ln;
goto RET_LABEL261;
RET_LABEL261:(void)0;
}
}
var_sub_len = var260;
var334 = NEW_core__Match(&type_core__Match);
{
((void(*)(val* self, val* p0))(var334->class->vft[COLOR_core__string_search__Match__string_61d]))(var334, var_rets); /* string= on <var334:Match>*/
}
{
((void(*)(val* self, long p0))(var334->class->vft[COLOR_core__string_search__Match__from_61d]))(var334, var_sub_cpos); /* from= on <var334:Match>*/
}
{
((void(*)(val* self, long p0))(var334->class->vft[COLOR_core__string_search__Match__length_61d]))(var334, var_sub_len); /* length= on <var334:Match>*/
}
{
((void(*)(val* self))(var334->class->vft[COLOR_core__kernel__Object__init]))(var334); /* init on <var334:Match>*/
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_subs, var334); /* Direct call array#Array#add on <var_subs:Array[nullable Match]>*/
}
BREAK_label205: (void)0;
{
var335 = core___core__Int___Discrete__successor(var_i180, 1l);
}
var_i180 = var335;
}
BREAK_label188: (void)0;
var = var_match;
goto RET_LABEL;
} else {
}
{
{ /* Inline re#Int#is_nomatch (var_res) on <var_res:Int> */
var338 = re___Int_is_nomatch___impl(var_res);
var336 = var338;
goto RET_LABEL337;
RET_LABEL337:(void)0;
}
}
if (var336){
var = ((val*)NULL);
goto RET_LABEL;
} else {
}
{
var339 = core___core__Regex___get_error(self, var_res);
}
var_error_str = var339;
if (unlikely(varonce340==NULL)) {
var341 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce342!=NULL)) {
var343 = varonce342;
} else {
var344 = "Regex search failed with: ";
var345 = core__abstract_text___CString___to_s_full(var344, 26l, 26l);
var343 = var345;
varonce342 = var343;
}
((struct instance_core__NativeArray*)var341)->values[0]=var343;
if (likely(varonce346!=NULL)) {
var347 = varonce346;
} else {
var348 = "\n";
var349 = core__abstract_text___CString___to_s_full(var348, 1l, 1l);
var347 = var349;
varonce346 = var347;
}
((struct instance_core__NativeArray*)var341)->values[2]=var347;
} else {
var341 = varonce340;
varonce340 = NULL;
}
((struct instance_core__NativeArray*)var341)->values[1]=var_error_str;
{
var350 = ((val*(*)(val* self))(var341->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var341); /* native_to_s on <var341:NativeArray[String]>*/
}
varonce340 = var341;
{
((void(*)(val* self))(var350->class->vft[COLOR_core__kernel__Object__output]))(var350); /* output on <var350:String>*/
}
PRINT_ERROR("Runtime error: %s", "Aborted");
PRINT_ERROR(" (%s:%d)\n", FILE_core__re, 411);
fatal_exit(1);
RET_LABEL:;
return var;
}
/* method re#Regex#to_s for (self: Regex): String */
val* core___core__Regex___core__abstract_text__Object__to_s(val* self) {
val* var /* : String */;
val* var1 /* : NativeArray[String] */;
static val* varonce;
static val* varonce2;
val* var3 /* : String */;
char* var4 /* : CString */;
val* var5 /* : String */;
static val* varonce6;
val* var7 /* : String */;
char* var8 /* : CString */;
val* var9 /* : String */;
val* var10 /* : String */;
val* var12 /* : String */;
val* var13 /* : String */;
if (unlikely(varonce==NULL)) {
var1 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce2!=NULL)) {
var3 = varonce2;
} else {
var4 = "/";
var5 = core__abstract_text___CString___to_s_full(var4, 1l, 1l);
var3 = var5;
varonce2 = var3;
}
((struct instance_core__NativeArray*)var1)->values[0]=var3;
if (likely(varonce6!=NULL)) {
var7 = varonce6;
} else {
var8 = "/";
var9 = core__abstract_text___CString___to_s_full(var8, 1l, 1l);
var7 = var9;
varonce6 = var7;
}
((struct instance_core__NativeArray*)var1)->values[2]=var7;
} else {
var1 = varonce;
varonce = NULL;
}
{
{ /* Inline re#Regex#string (self) on <self:Regex> */
var12 = self->attrs[COLOR_core__re__Regex___string].val; /* _string on <self:Regex> */
if (unlikely(var12 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _string");
PRINT_ERROR(" (%s:%d)\n", FILE_core__re, 142);
fatal_exit(1);
}
var10 = var12;
RET_LABEL11:(void)0;
}
}
((struct instance_core__NativeArray*)var1)->values[1]=var10;
{
var13 = ((val*(*)(val* self))(var1->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var1); /* native_to_s on <var1:NativeArray[String]>*/
}
varonce = var1;
var = var13;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method re#Regex#init for (self: Regex) */
void core___core__Regex___core__kernel__Object__init(val* self) {
{
((void(*)(val* self))(self->class->vft[COLOR_core___core__Regex___core__kernel__Object__init]))(self); /* init on <self:Regex>*/
}
RET_LABEL:;
}
/* method re#Match#subs for (self: Match): Array[nullable Match] */
val* core__re___Match___subs(val* self) {
val* var /* : Array[nullable Match] */;
short int var1 /* : Bool */;
val* var2 /* : Array[nullable Match] */;
val* var3 /* : Array[nullable Match] */;
var1 = self->attrs[COLOR_core__re__Match___subs].val != NULL; /* _subs on <self:Match> */
if(likely(var1)) {
var2 = self->attrs[COLOR_core__re__Match___subs].val; /* _subs on <self:Match> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _subs");
PRINT_ERROR(" (%s:%d)\n", FILE_core__re, 482);
fatal_exit(1);
}
} else {
var3 = NEW_core__Array(&type_core__Array__nullable__core__Match);
{
core___core__Array___core__kernel__Object__init(var3); /* Direct call array#Array#init on <var3:Array[nullable Match]>*/
}
self->attrs[COLOR_core__re__Match___subs].val = var3; /* _subs on <self:Match> */
var2 = var3;
}
var = var2;
RET_LABEL:;
return var;
}
/* method re#Sys#flag_extended for (self: Sys): Int */
long core__re___Sys___flag_extended(val* self) {
long var /* : Int */;
long var1 /* : Int */;
struct nitni_instance* var_for_c_0;
var_for_c_0 = nit_alloc(sizeof(struct nitni_instance));
var_for_c_0->value = self;
var1 = re___Sys_flag_extended___impl(var_for_c_0);
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method re#Sys#flag_icase for (self: Sys): Int */
long core__re___Sys___flag_icase(val* self) {
long var /* : Int */;
long var1 /* : Int */;
struct nitni_instance* var_for_c_0;
var_for_c_0 = nit_alloc(sizeof(struct nitni_instance));
var_for_c_0->value = self;
var1 = re___Sys_flag_icase___impl(var_for_c_0);
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method re#Sys#flag_nosub for (self: Sys): Int */
long core__re___Sys___flag_nosub(val* self) {
long var /* : Int */;
long var1 /* : Int */;
struct nitni_instance* var_for_c_0;
var_for_c_0 = nit_alloc(sizeof(struct nitni_instance));
var_for_c_0->value = self;
var1 = re___Sys_flag_nosub___impl(var_for_c_0);
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method re#Sys#flag_newline for (self: Sys): Int */
long core__re___Sys___flag_newline(val* self) {
long var /* : Int */;
long var1 /* : Int */;
struct nitni_instance* var_for_c_0;
var_for_c_0 = nit_alloc(sizeof(struct nitni_instance));
var_for_c_0->value = self;
var1 = re___Sys_flag_newline___impl(var_for_c_0);
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method re#Sys#flag_notbol for (self: Sys): Int */
long core__re___Sys___flag_notbol(val* self) {
long var /* : Int */;
long var1 /* : Int */;
struct nitni_instance* var_for_c_0;
var_for_c_0 = nit_alloc(sizeof(struct nitni_instance));
var_for_c_0->value = self;
var1 = re___Sys_flag_notbol___impl(var_for_c_0);
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method re#Sys#flag_noteol for (self: Sys): Int */
long core__re___Sys___flag_noteol(val* self) {
long var /* : Int */;
long var1 /* : Int */;
struct nitni_instance* var_for_c_0;
var_for_c_0 = nit_alloc(sizeof(struct nitni_instance));
var_for_c_0->value = self;
var1 = re___Sys_flag_noteol___impl(var_for_c_0);
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
