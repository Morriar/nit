#include "nitc__android_annotations.sep.0.h"
/* method android_annotations#AndroidProject#manifest_lines for (self: AndroidProject): Array[String] */
val* nitc___nitc__AndroidProject___manifest_lines(val* self) {
val* var /* : Array[String] */;
val* var1 /* : Array[String] */;
var1 = self->attrs[COLOR_nitc__android_annotations__AndroidProject___manifest_lines].val; /* _manifest_lines on <self:AndroidProject> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _manifest_lines");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__android_annotations, 26);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method android_annotations#AndroidProject#manifest_application_lines for (self: AndroidProject): Array[String] */
val* nitc___nitc__AndroidProject___manifest_application_lines(val* self) {
val* var /* : Array[String] */;
val* var1 /* : Array[String] */;
var1 = self->attrs[COLOR_nitc__android_annotations__AndroidProject___manifest_application_lines].val; /* _manifest_application_lines on <self:AndroidProject> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _manifest_application_lines");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__android_annotations, 29);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method android_annotations#AndroidProject#manifest_activity_attributes for (self: AndroidProject): Array[String] */
val* nitc___nitc__AndroidProject___manifest_activity_attributes(val* self) {
val* var /* : Array[String] */;
val* var1 /* : Array[String] */;
var1 = self->attrs[COLOR_nitc__android_annotations__AndroidProject___manifest_activity_attributes].val; /* _manifest_activity_attributes on <self:AndroidProject> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _manifest_activity_attributes");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__android_annotations, 32);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method android_annotations#AndroidProject#min_api for (self: AndroidProject): nullable Int */
val* nitc___nitc__AndroidProject___min_api(val* self) {
val* var /* : nullable Int */;
val* var1 /* : nullable Int */;
var1 = self->attrs[COLOR_nitc__android_annotations__AndroidProject___min_api].val; /* _min_api on <self:AndroidProject> */
var = var1;
RET_LABEL:;
return var;
}
/* method android_annotations#AndroidProject#min_api= for (self: AndroidProject, nullable Int) */
void nitc___nitc__AndroidProject___min_api_61d(val* self, val* p0) {
self->attrs[COLOR_nitc__android_annotations__AndroidProject___min_api].val = p0; /* _min_api on <self:AndroidProject> */
RET_LABEL:;
}
/* method android_annotations#AndroidProject#target_api for (self: AndroidProject): nullable Int */
val* nitc___nitc__AndroidProject___target_api(val* self) {
val* var /* : nullable Int */;
val* var1 /* : nullable Int */;
var1 = self->attrs[COLOR_nitc__android_annotations__AndroidProject___target_api].val; /* _target_api on <self:AndroidProject> */
var = var1;
RET_LABEL:;
return var;
}
/* method android_annotations#AndroidProject#target_api= for (self: AndroidProject, nullable Int) */
void nitc___nitc__AndroidProject___target_api_61d(val* self, val* p0) {
self->attrs[COLOR_nitc__android_annotations__AndroidProject___target_api].val = p0; /* _target_api on <self:AndroidProject> */
RET_LABEL:;
}
/* method android_annotations#AndroidProject#max_api for (self: AndroidProject): nullable Int */
val* nitc___nitc__AndroidProject___max_api(val* self) {
val* var /* : nullable Int */;
val* var1 /* : nullable Int */;
var1 = self->attrs[COLOR_nitc__android_annotations__AndroidProject___max_api].val; /* _max_api on <self:AndroidProject> */
var = var1;
RET_LABEL:;
return var;
}
/* method android_annotations#AndroidProject#max_api= for (self: AndroidProject, nullable Int) */
void nitc___nitc__AndroidProject___max_api_61d(val* self, val* p0) {
self->attrs[COLOR_nitc__android_annotations__AndroidProject___max_api].val = p0; /* _max_api on <self:AndroidProject> */
RET_LABEL:;
}
/* method android_annotations#AndroidProject#activities for (self: AndroidProject): Array[String] */
val* nitc___nitc__AndroidProject___activities(val* self) {
val* var /* : Array[String] */;
val* var1 /* : Array[String] */;
var1 = self->attrs[COLOR_nitc__android_annotations__AndroidProject___activities].val; /* _activities on <self:AndroidProject> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _activities");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__android_annotations, 44);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method android_annotations#AndroidProject#init for (self: AndroidProject) */
void nitc___nitc__AndroidProject___core__kernel__Object__init(val* self) {
val* var /* : ModelBuilder */;
val* var2 /* : ModelBuilder */;
static val* varonce;
val* var3 /* : String */;
char* var4 /* : CString */;
val* var5 /* : String */;
val* var6 /* : MModule */;
val* var8 /* : MModule */;
val* var9 /* : Array[AAnnotation] */;
val* var_annots /* var annots: Array[AAnnotation] */;
short int var10 /* : Bool */;
short int var11 /* : Bool */;
val* var12 /* : nullable Object */;
val* var13 /* : ModelBuilder */;
val* var15 /* : ModelBuilder */;
val* var16 /* : nullable Int */;
val* var_i /* var i: nullable Int */;
short int var17 /* : Bool */;
short int var18 /* : Bool */;
short int var20 /* : Bool */;
val* var21 /* : nullable Int */;
val* var_ /* var : Array[AAnnotation] */;
val* var23 /* : IndexedIterator[nullable Object] */;
val* var_24 /* var : IndexedIterator[AAnnotation] */;
short int var25 /* : Bool */;
val* var26 /* : nullable Object */;
val* var_an /* var an: AAnnotation */;
val* var27 /* : ModelBuilder */;
val* var29 /* : ModelBuilder */;
val* var30 /* : nullable Int */;
short int var31 /* : Bool */;
short int var32 /* : Bool */;
short int var34 /* : Bool */;
val* var36 /* : nullable Int */;
val* var38 /* : nullable Int */;
long var39 /* : Int */;
long var40 /* : Int */;
long var41 /* : Int */;
val* var43 /* : nullable Int */;
val* var44 /* : ModelBuilder */;
val* var46 /* : ModelBuilder */;
static val* varonce47;
val* var48 /* : String */;
char* var49 /* : CString */;
val* var50 /* : String */;
val* var51 /* : MModule */;
val* var53 /* : MModule */;
val* var54 /* : Array[AAnnotation] */;
short int var55 /* : Bool */;
short int var56 /* : Bool */;
val* var57 /* : nullable Object */;
val* var58 /* : ModelBuilder */;
val* var60 /* : ModelBuilder */;
val* var61 /* : nullable Int */;
val* var_i62 /* var i: nullable Int */;
short int var63 /* : Bool */;
short int var64 /* : Bool */;
short int var66 /* : Bool */;
val* var67 /* : nullable Int */;
val* var_69 /* var : Array[AAnnotation] */;
val* var70 /* : IndexedIterator[nullable Object] */;
val* var_71 /* var : IndexedIterator[AAnnotation] */;
short int var72 /* : Bool */;
val* var74 /* : nullable Object */;
val* var_an75 /* var an: AAnnotation */;
val* var76 /* : ModelBuilder */;
val* var78 /* : ModelBuilder */;
val* var79 /* : nullable Int */;
short int var80 /* : Bool */;
short int var81 /* : Bool */;
short int var83 /* : Bool */;
val* var85 /* : nullable Int */;
val* var87 /* : nullable Int */;
long var88 /* : Int */;
long var89 /* : Int */;
long var90 /* : Int */;
val* var92 /* : nullable Int */;
val* var93 /* : ModelBuilder */;
val* var95 /* : ModelBuilder */;
static val* varonce96;
val* var97 /* : String */;
char* var98 /* : CString */;
val* var99 /* : String */;
val* var100 /* : MModule */;
val* var102 /* : MModule */;
val* var103 /* : nullable AAnnotation */;
val* var_annot /* var annot: nullable AAnnotation */;
short int var104 /* : Bool */;
short int var105 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var107 /* : Bool */;
short int var108 /* : Bool */;
long var109 /* : Int */;
val* var110 /* : ModelBuilder */;
val* var112 /* : ModelBuilder */;
val* var113 /* : nullable Int */;
long var114 /* : Int */;
val* var116 /* : nullable Int */;
val* var117 /* : ModelBuilder */;
val* var119 /* : ModelBuilder */;
static val* varonce120;
val* var121 /* : String */;
char* var122 /* : CString */;
val* var123 /* : String */;
val* var124 /* : MModule */;
val* var126 /* : MModule */;
val* var127 /* : Array[AAnnotation] */;
val* var_128 /* var : Array[AAnnotation] */;
val* var129 /* : IndexedIterator[nullable Object] */;
val* var_130 /* var : IndexedIterator[AAnnotation] */;
short int var131 /* : Bool */;
val* var133 /* : nullable Object */;
val* var_an134 /* var an: AAnnotation */;
val* var135 /* : Array[String] */;
val* var137 /* : Array[String] */;
val* var138 /* : String */;
val* var139 /* : ModelBuilder */;
val* var141 /* : ModelBuilder */;
val* var142 /* : nullable String */;
static val* varonce143;
val* var144 /* : String */;
char* var145 /* : CString */;
val* var146 /* : String */;
val* var147 /* : ModelBuilder */;
val* var149 /* : ModelBuilder */;
static val* varonce150;
val* var151 /* : String */;
char* var152 /* : CString */;
val* var153 /* : String */;
val* var154 /* : MModule */;
val* var156 /* : MModule */;
val* var157 /* : Array[AAnnotation] */;
val* var_158 /* var : Array[AAnnotation] */;
val* var159 /* : IndexedIterator[nullable Object] */;
val* var_160 /* var : IndexedIterator[AAnnotation] */;
short int var161 /* : Bool */;
val* var163 /* : nullable Object */;
val* var_an164 /* var an: AAnnotation */;
val* var165 /* : Array[String] */;
val* var167 /* : Array[String] */;
val* var168 /* : String */;
val* var169 /* : ModelBuilder */;
val* var171 /* : ModelBuilder */;
val* var172 /* : nullable String */;
static val* varonce173;
val* var174 /* : String */;
char* var175 /* : CString */;
val* var176 /* : String */;
val* var177 /* : ModelBuilder */;
val* var179 /* : ModelBuilder */;
static val* varonce180;
val* var181 /* : String */;
char* var182 /* : CString */;
val* var183 /* : String */;
val* var184 /* : MModule */;
val* var186 /* : MModule */;
val* var187 /* : Array[AAnnotation] */;
val* var_188 /* var : Array[AAnnotation] */;
val* var189 /* : IndexedIterator[nullable Object] */;
val* var_190 /* var : IndexedIterator[AAnnotation] */;
short int var191 /* : Bool */;
val* var193 /* : nullable Object */;
val* var_an194 /* var an: AAnnotation */;
val* var195 /* : Array[String] */;
val* var197 /* : Array[String] */;
val* var198 /* : String */;
val* var199 /* : ModelBuilder */;
val* var201 /* : ModelBuilder */;
val* var202 /* : nullable String */;
static val* varonce203;
val* var204 /* : String */;
char* var205 /* : CString */;
val* var206 /* : String */;
val* var207 /* : ModelBuilder */;
val* var209 /* : ModelBuilder */;
static val* varonce210;
val* var211 /* : String */;
char* var212 /* : CString */;
val* var213 /* : String */;
val* var214 /* : MModule */;
val* var216 /* : MModule */;
val* var217 /* : Array[AAnnotation] */;
val* var_218 /* var : Array[AAnnotation] */;
val* var219 /* : IndexedIterator[nullable Object] */;
val* var_220 /* var : IndexedIterator[AAnnotation] */;
short int var221 /* : Bool */;
val* var223 /* : nullable Object */;
val* var_an224 /* var an: AAnnotation */;
val* var225 /* : ModelBuilder */;
val* var227 /* : ModelBuilder */;
val* var228 /* : nullable String */;
val* var_activity /* var activity: nullable String */;
short int var229 /* : Bool */;
short int var230 /* : Bool */;
short int var232 /* : Bool */;
short int var233 /* : Bool */;
val* var234 /* : Array[String] */;
val* var236 /* : Array[String] */;
{
((void(*)(val* self))(self->class->vft[COLOR_nitc___nitc__AndroidProject___core__kernel__Object__init]))(self); /* init on <self:AndroidProject>*/
}
{
{ /* Inline app_annotations#AppProject#modelbuilder (self) on <self:AndroidProject> */
var2 = self->attrs[COLOR_nitc__app_annotations__AppProject___modelbuilder].val; /* _modelbuilder on <self:AndroidProject> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__app_annotations, 50);
fatal_exit(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
if (likely(varonce!=NULL)) {
var3 = varonce;
} else {
var4 = "android_api_min";
var5 = core__abstract_text___CString___to_s_full(var4, 15l, 15l);
var3 = var5;
varonce = var3;
}
{
{ /* Inline app_annotations#AppProject#mainmodule (self) on <self:AndroidProject> */
var8 = self->attrs[COLOR_nitc__app_annotations__AppProject___mainmodule].val; /* _mainmodule on <self:AndroidProject> */
if (unlikely(var8 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mainmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__app_annotations, 51);
fatal_exit(1);
}
var6 = var8;
RET_LABEL7:(void)0;
}
}
{
var9 = nitc__annotation___ModelBuilder___collect_annotations_on_modules(var, var3, var6);
}
var_annots = var9;
{
var10 = core___core__AbstractArrayRead___core__abstract_collection__Collection__is_empty(var_annots);
}
var11 = !var10;
if (var11){
{
var12 = core___core__AbstractArray___core__abstract_collection__Sequence__pop(var_annots);
}
{
{ /* Inline app_annotations#AppProject#modelbuilder (self) on <self:AndroidProject> */
var15 = self->attrs[COLOR_nitc__app_annotations__AppProject___modelbuilder].val; /* _modelbuilder on <self:AndroidProject> */
if (unlikely(var15 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__app_annotations, 50);
fatal_exit(1);
}
var13 = var15;
RET_LABEL14:(void)0;
}
}
{
var16 = nitc__annotation___AAnnotation___arg_as_int(var12, var13);
}
var_i = var16;
if (var_i == NULL) {
var17 = 1; /* is null */
} else {
var17 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Int#== (var_i,((val*)NULL)) on <var_i:nullable Int> */
var20 = 0; /* incompatible types Int vs. null; cannot be NULL */
var18 = var20;
goto RET_LABEL19;
RET_LABEL19:(void)0;
}
var17 = var18;
}
if (var17){
var21 = (val*)(0l<<2|1);
var_i = var21;
} else {
}
{
{ /* Inline android_annotations#AndroidProject#min_api= (self,var_i) on <self:AndroidProject> */
self->attrs[COLOR_nitc__android_annotations__AndroidProject___min_api].val = var_i; /* _min_api on <self:AndroidProject> */
RET_LABEL22:(void)0;
}
}
var_ = var_annots;
{
var23 = core___core__AbstractArrayRead___core__abstract_collection__Collection__iterator(var_);
}
var_24 = var23;
for(;;) {
{
var25 = ((short int(*)(val* self))((((long)var_24&3)?class_info[((long)var_24&3)]:var_24->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_24); /* is_ok on <var_24:IndexedIterator[AAnnotation]>*/
}
if (var25){
} else {
goto BREAK_label;
}
{
var26 = ((val*(*)(val* self))((((long)var_24&3)?class_info[((long)var_24&3)]:var_24->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_24); /* item on <var_24:IndexedIterator[AAnnotation]>*/
}
var_an = var26;
{
{ /* Inline app_annotations#AppProject#modelbuilder (self) on <self:AndroidProject> */
var29 = self->attrs[COLOR_nitc__app_annotations__AppProject___modelbuilder].val; /* _modelbuilder on <self:AndroidProject> */
if (unlikely(var29 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__app_annotations, 50);
fatal_exit(1);
}
var27 = var29;
RET_LABEL28:(void)0;
}
}
{
var30 = nitc__annotation___AAnnotation___arg_as_int(var_an, var27);
}
var_i = var30;
if (var_i == NULL) {
var31 = 1; /* is null */
} else {
var31 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Int#== (var_i,((val*)NULL)) on <var_i:nullable Int> */
var34 = 0; /* incompatible types Int vs. null; cannot be NULL */
var32 = var34;
goto RET_LABEL33;
RET_LABEL33:(void)0;
}
var31 = var32;
}
if (var31){
goto BREAK_label35;
} else {
}
{
{ /* Inline android_annotations#AndroidProject#min_api (self) on <self:AndroidProject> */
var38 = self->attrs[COLOR_nitc__android_annotations__AndroidProject___min_api].val; /* _min_api on <self:AndroidProject> */
var36 = var38;
RET_LABEL37:(void)0;
}
}
if (var36 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__android_annotations, 57);
fatal_exit(1);
} else {
var40 = (long)(var36)>>2;
var41 = (long)(var_i)>>2;
var39 = core___core__Int___Comparable__max(var40, var41);
}
{
{ /* Inline android_annotations#AndroidProject#min_api= (self,var39) on <self:AndroidProject> */
var43 = (val*)(var39<<2|1);
self->attrs[COLOR_nitc__android_annotations__AndroidProject___min_api].val = var43; /* _min_api on <self:AndroidProject> */
RET_LABEL42:(void)0;
}
}
BREAK_label35: (void)0;
{
((void(*)(val* self))((((long)var_24&3)?class_info[((long)var_24&3)]:var_24->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_24); /* next on <var_24:IndexedIterator[AAnnotation]>*/
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_24&3)?class_info[((long)var_24&3)]:var_24->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_24); /* finish on <var_24:IndexedIterator[AAnnotation]>*/
}
} else {
}
{
{ /* Inline app_annotations#AppProject#modelbuilder (self) on <self:AndroidProject> */
var46 = self->attrs[COLOR_nitc__app_annotations__AppProject___modelbuilder].val; /* _modelbuilder on <self:AndroidProject> */
if (unlikely(var46 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__app_annotations, 50);
fatal_exit(1);
}
var44 = var46;
RET_LABEL45:(void)0;
}
}
if (likely(varonce47!=NULL)) {
var48 = varonce47;
} else {
var49 = "android_api_max";
var50 = core__abstract_text___CString___to_s_full(var49, 15l, 15l);
var48 = var50;
varonce47 = var48;
}
{
{ /* Inline app_annotations#AppProject#mainmodule (self) on <self:AndroidProject> */
var53 = self->attrs[COLOR_nitc__app_annotations__AppProject___mainmodule].val; /* _mainmodule on <self:AndroidProject> */
if (unlikely(var53 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mainmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__app_annotations, 51);
fatal_exit(1);
}
var51 = var53;
RET_LABEL52:(void)0;
}
}
{
var54 = nitc__annotation___ModelBuilder___collect_annotations_on_modules(var44, var48, var51);
}
var_annots = var54;
{
var55 = core___core__AbstractArrayRead___core__abstract_collection__Collection__is_empty(var_annots);
}
var56 = !var55;
if (var56){
{
var57 = core___core__AbstractArray___core__abstract_collection__Sequence__pop(var_annots);
}
{
{ /* Inline app_annotations#AppProject#modelbuilder (self) on <self:AndroidProject> */
var60 = self->attrs[COLOR_nitc__app_annotations__AppProject___modelbuilder].val; /* _modelbuilder on <self:AndroidProject> */
if (unlikely(var60 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__app_annotations, 50);
fatal_exit(1);
}
var58 = var60;
RET_LABEL59:(void)0;
}
}
{
var61 = nitc__annotation___AAnnotation___arg_as_int(var57, var58);
}
var_i62 = var61;
if (var_i62 == NULL) {
var63 = 1; /* is null */
} else {
var63 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Int#== (var_i62,((val*)NULL)) on <var_i62:nullable Int> */
var66 = 0; /* incompatible types Int vs. null; cannot be NULL */
var64 = var66;
goto RET_LABEL65;
RET_LABEL65:(void)0;
}
var63 = var64;
}
if (var63){
var67 = (val*)(0l<<2|1);
var_i62 = var67;
} else {
}
{
{ /* Inline android_annotations#AndroidProject#max_api= (self,var_i62) on <self:AndroidProject> */
self->attrs[COLOR_nitc__android_annotations__AndroidProject___max_api].val = var_i62; /* _max_api on <self:AndroidProject> */
RET_LABEL68:(void)0;
}
}
var_69 = var_annots;
{
var70 = core___core__AbstractArrayRead___core__abstract_collection__Collection__iterator(var_69);
}
var_71 = var70;
for(;;) {
{
var72 = ((short int(*)(val* self))((((long)var_71&3)?class_info[((long)var_71&3)]:var_71->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_71); /* is_ok on <var_71:IndexedIterator[AAnnotation]>*/
}
if (var72){
} else {
goto BREAK_label73;
}
{
var74 = ((val*(*)(val* self))((((long)var_71&3)?class_info[((long)var_71&3)]:var_71->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_71); /* item on <var_71:IndexedIterator[AAnnotation]>*/
}
var_an75 = var74;
{
{ /* Inline app_annotations#AppProject#modelbuilder (self) on <self:AndroidProject> */
var78 = self->attrs[COLOR_nitc__app_annotations__AppProject___modelbuilder].val; /* _modelbuilder on <self:AndroidProject> */
if (unlikely(var78 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__app_annotations, 50);
fatal_exit(1);
}
var76 = var78;
RET_LABEL77:(void)0;
}
}
{
var79 = nitc__annotation___AAnnotation___arg_as_int(var_an75, var76);
}
var_i62 = var79;
if (var_i62 == NULL) {
var80 = 1; /* is null */
} else {
var80 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Int#== (var_i62,((val*)NULL)) on <var_i62:nullable Int> */
var83 = 0; /* incompatible types Int vs. null; cannot be NULL */
var81 = var83;
goto RET_LABEL82;
RET_LABEL82:(void)0;
}
var80 = var81;
}
if (var80){
goto BREAK_label84;
} else {
}
{
{ /* Inline android_annotations#AndroidProject#max_api (self) on <self:AndroidProject> */
var87 = self->attrs[COLOR_nitc__android_annotations__AndroidProject___max_api].val; /* _max_api on <self:AndroidProject> */
var85 = var87;
RET_LABEL86:(void)0;
}
}
if (var85 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__android_annotations, 69);
fatal_exit(1);
} else {
var89 = (long)(var85)>>2;
var90 = (long)(var_i62)>>2;
var88 = core___core__Int___Comparable__min(var89, var90);
}
{
{ /* Inline android_annotations#AndroidProject#max_api= (self,var88) on <self:AndroidProject> */
var92 = (val*)(var88<<2|1);
self->attrs[COLOR_nitc__android_annotations__AndroidProject___max_api].val = var92; /* _max_api on <self:AndroidProject> */
RET_LABEL91:(void)0;
}
}
BREAK_label84: (void)0;
{
((void(*)(val* self))((((long)var_71&3)?class_info[((long)var_71&3)]:var_71->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_71); /* next on <var_71:IndexedIterator[AAnnotation]>*/
}
}
BREAK_label73: (void)0;
{
((void(*)(val* self))((((long)var_71&3)?class_info[((long)var_71&3)]:var_71->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_71); /* finish on <var_71:IndexedIterator[AAnnotation]>*/
}
} else {
}
{
{ /* Inline app_annotations#AppProject#modelbuilder (self) on <self:AndroidProject> */
var95 = self->attrs[COLOR_nitc__app_annotations__AppProject___modelbuilder].val; /* _modelbuilder on <self:AndroidProject> */
if (unlikely(var95 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__app_annotations, 50);
fatal_exit(1);
}
var93 = var95;
RET_LABEL94:(void)0;
}
}
if (likely(varonce96!=NULL)) {
var97 = varonce96;
} else {
var98 = "android_api_target";
var99 = core__abstract_text___CString___to_s_full(var98, 18l, 18l);
var97 = var99;
varonce96 = var97;
}
{
{ /* Inline app_annotations#AppProject#mainmodule (self) on <self:AndroidProject> */
var102 = self->attrs[COLOR_nitc__app_annotations__AppProject___mainmodule].val; /* _mainmodule on <self:AndroidProject> */
if (unlikely(var102 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mainmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__app_annotations, 51);
fatal_exit(1);
}
var100 = var102;
RET_LABEL101:(void)0;
}
}
{
var103 = nitc__annotation___ModelBuilder___lookup_annotation_on_modules(var93, var97, var100);
}
var_annot = var103;
if (var_annot == NULL) {
var104 = 0; /* is null */
} else {
var104 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_annot,((val*)NULL)) on <var_annot:nullable AAnnotation> */
var_other = ((val*)NULL);
{
var107 = ((short int(*)(val* self, val* p0))(var_annot->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_annot, var_other); /* == on <var_annot:nullable AAnnotation(AAnnotation)>*/
}
var108 = !var107;
var105 = var108;
goto RET_LABEL106;
RET_LABEL106:(void)0;
}
var104 = var105;
}
if (var104){
{
{ /* Inline app_annotations#AppProject#modelbuilder (self) on <self:AndroidProject> */
var112 = self->attrs[COLOR_nitc__app_annotations__AppProject___modelbuilder].val; /* _modelbuilder on <self:AndroidProject> */
if (unlikely(var112 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__app_annotations, 50);
fatal_exit(1);
}
var110 = var112;
RET_LABEL111:(void)0;
}
}
{
var113 = nitc__annotation___AAnnotation___arg_as_int(var_annot, var110);
}
if (var113!=NULL) {
var114 = (long)(var113)>>2;
var109 = var114;
} else {
var109 = 0l;
}
{
{ /* Inline android_annotations#AndroidProject#target_api= (self,var109) on <self:AndroidProject> */
var116 = (val*)(var109<<2|1);
self->attrs[COLOR_nitc__android_annotations__AndroidProject___target_api].val = var116; /* _target_api on <self:AndroidProject> */
RET_LABEL115:(void)0;
}
}
} else {
}
{
{ /* Inline app_annotations#AppProject#modelbuilder (self) on <self:AndroidProject> */
var119 = self->attrs[COLOR_nitc__app_annotations__AppProject___modelbuilder].val; /* _modelbuilder on <self:AndroidProject> */
if (unlikely(var119 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__app_annotations, 50);
fatal_exit(1);
}
var117 = var119;
RET_LABEL118:(void)0;
}
}
if (likely(varonce120!=NULL)) {
var121 = varonce120;
} else {
var122 = "android_manifest";
var123 = core__abstract_text___CString___to_s_full(var122, 16l, 16l);
var121 = var123;
varonce120 = var121;
}
{
{ /* Inline app_annotations#AppProject#mainmodule (self) on <self:AndroidProject> */
var126 = self->attrs[COLOR_nitc__app_annotations__AppProject___mainmodule].val; /* _mainmodule on <self:AndroidProject> */
if (unlikely(var126 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mainmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__app_annotations, 51);
fatal_exit(1);
}
var124 = var126;
RET_LABEL125:(void)0;
}
}
{
var127 = nitc__annotation___ModelBuilder___collect_annotations_on_modules(var117, var121, var124);
}
var_annots = var127;
var_128 = var_annots;
{
var129 = core___core__AbstractArrayRead___core__abstract_collection__Collection__iterator(var_128);
}
var_130 = var129;
for(;;) {
{
var131 = ((short int(*)(val* self))((((long)var_130&3)?class_info[((long)var_130&3)]:var_130->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_130); /* is_ok on <var_130:IndexedIterator[AAnnotation]>*/
}
if (var131){
} else {
goto BREAK_label132;
}
{
var133 = ((val*(*)(val* self))((((long)var_130&3)?class_info[((long)var_130&3)]:var_130->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_130); /* item on <var_130:IndexedIterator[AAnnotation]>*/
}
var_an134 = var133;
{
{ /* Inline android_annotations#AndroidProject#manifest_lines (self) on <self:AndroidProject> */
var137 = self->attrs[COLOR_nitc__android_annotations__AndroidProject___manifest_lines].val; /* _manifest_lines on <self:AndroidProject> */
if (unlikely(var137 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _manifest_lines");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__android_annotations, 26);
fatal_exit(1);
}
var135 = var137;
RET_LABEL136:(void)0;
}
}
{
{ /* Inline app_annotations#AppProject#modelbuilder (self) on <self:AndroidProject> */
var141 = self->attrs[COLOR_nitc__app_annotations__AppProject___modelbuilder].val; /* _modelbuilder on <self:AndroidProject> */
if (unlikely(var141 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__app_annotations, 50);
fatal_exit(1);
}
var139 = var141;
RET_LABEL140:(void)0;
}
}
{
var142 = nitc__annotation___AAnnotation___arg_as_string(var_an134, var139);
}
if (var142!=NULL) {
var138 = var142;
} else {
if (likely(varonce143!=NULL)) {
var144 = varonce143;
} else {
var145 = "";
var146 = core__abstract_text___CString___to_s_full(var145, 0l, 0l);
var144 = var146;
varonce143 = var144;
}
var138 = var144;
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var135, var138); /* Direct call array#Array#add on <var135:Array[String]>*/
}
{
((void(*)(val* self))((((long)var_130&3)?class_info[((long)var_130&3)]:var_130->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_130); /* next on <var_130:IndexedIterator[AAnnotation]>*/
}
}
BREAK_label132: (void)0;
{
((void(*)(val* self))((((long)var_130&3)?class_info[((long)var_130&3)]:var_130->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_130); /* finish on <var_130:IndexedIterator[AAnnotation]>*/
}
{
{ /* Inline app_annotations#AppProject#modelbuilder (self) on <self:AndroidProject> */
var149 = self->attrs[COLOR_nitc__app_annotations__AppProject___modelbuilder].val; /* _modelbuilder on <self:AndroidProject> */
if (unlikely(var149 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__app_annotations, 50);
fatal_exit(1);
}
var147 = var149;
RET_LABEL148:(void)0;
}
}
if (likely(varonce150!=NULL)) {
var151 = varonce150;
} else {
var152 = "android_manifest_application";
var153 = core__abstract_text___CString___to_s_full(var152, 28l, 28l);
var151 = var153;
varonce150 = var151;
}
{
{ /* Inline app_annotations#AppProject#mainmodule (self) on <self:AndroidProject> */
var156 = self->attrs[COLOR_nitc__app_annotations__AppProject___mainmodule].val; /* _mainmodule on <self:AndroidProject> */
if (unlikely(var156 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mainmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__app_annotations, 51);
fatal_exit(1);
}
var154 = var156;
RET_LABEL155:(void)0;
}
}
{
var157 = nitc__annotation___ModelBuilder___collect_annotations_on_modules(var147, var151, var154);
}
var_annots = var157;
var_158 = var_annots;
{
var159 = core___core__AbstractArrayRead___core__abstract_collection__Collection__iterator(var_158);
}
var_160 = var159;
for(;;) {
{
var161 = ((short int(*)(val* self))((((long)var_160&3)?class_info[((long)var_160&3)]:var_160->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_160); /* is_ok on <var_160:IndexedIterator[AAnnotation]>*/
}
if (var161){
} else {
goto BREAK_label162;
}
{
var163 = ((val*(*)(val* self))((((long)var_160&3)?class_info[((long)var_160&3)]:var_160->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_160); /* item on <var_160:IndexedIterator[AAnnotation]>*/
}
var_an164 = var163;
{
{ /* Inline android_annotations#AndroidProject#manifest_application_lines (self) on <self:AndroidProject> */
var167 = self->attrs[COLOR_nitc__android_annotations__AndroidProject___manifest_application_lines].val; /* _manifest_application_lines on <self:AndroidProject> */
if (unlikely(var167 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _manifest_application_lines");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__android_annotations, 29);
fatal_exit(1);
}
var165 = var167;
RET_LABEL166:(void)0;
}
}
{
{ /* Inline app_annotations#AppProject#modelbuilder (self) on <self:AndroidProject> */
var171 = self->attrs[COLOR_nitc__app_annotations__AppProject___modelbuilder].val; /* _modelbuilder on <self:AndroidProject> */
if (unlikely(var171 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__app_annotations, 50);
fatal_exit(1);
}
var169 = var171;
RET_LABEL170:(void)0;
}
}
{
var172 = nitc__annotation___AAnnotation___arg_as_string(var_an164, var169);
}
if (var172!=NULL) {
var168 = var172;
} else {
if (likely(varonce173!=NULL)) {
var174 = varonce173;
} else {
var175 = "";
var176 = core__abstract_text___CString___to_s_full(var175, 0l, 0l);
var174 = var176;
varonce173 = var174;
}
var168 = var174;
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var165, var168); /* Direct call array#Array#add on <var165:Array[String]>*/
}
{
((void(*)(val* self))((((long)var_160&3)?class_info[((long)var_160&3)]:var_160->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_160); /* next on <var_160:IndexedIterator[AAnnotation]>*/
}
}
BREAK_label162: (void)0;
{
((void(*)(val* self))((((long)var_160&3)?class_info[((long)var_160&3)]:var_160->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_160); /* finish on <var_160:IndexedIterator[AAnnotation]>*/
}
{
{ /* Inline app_annotations#AppProject#modelbuilder (self) on <self:AndroidProject> */
var179 = self->attrs[COLOR_nitc__app_annotations__AppProject___modelbuilder].val; /* _modelbuilder on <self:AndroidProject> */
if (unlikely(var179 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__app_annotations, 50);
fatal_exit(1);
}
var177 = var179;
RET_LABEL178:(void)0;
}
}
if (likely(varonce180!=NULL)) {
var181 = varonce180;
} else {
var182 = "android_manifest_activity";
var183 = core__abstract_text___CString___to_s_full(var182, 25l, 25l);
var181 = var183;
varonce180 = var181;
}
{
{ /* Inline app_annotations#AppProject#mainmodule (self) on <self:AndroidProject> */
var186 = self->attrs[COLOR_nitc__app_annotations__AppProject___mainmodule].val; /* _mainmodule on <self:AndroidProject> */
if (unlikely(var186 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mainmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__app_annotations, 51);
fatal_exit(1);
}
var184 = var186;
RET_LABEL185:(void)0;
}
}
{
var187 = nitc__annotation___ModelBuilder___collect_annotations_on_modules(var177, var181, var184);
}
var_annots = var187;
var_188 = var_annots;
{
var189 = core___core__AbstractArrayRead___core__abstract_collection__Collection__iterator(var_188);
}
var_190 = var189;
for(;;) {
{
var191 = ((short int(*)(val* self))((((long)var_190&3)?class_info[((long)var_190&3)]:var_190->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_190); /* is_ok on <var_190:IndexedIterator[AAnnotation]>*/
}
if (var191){
} else {
goto BREAK_label192;
}
{
var193 = ((val*(*)(val* self))((((long)var_190&3)?class_info[((long)var_190&3)]:var_190->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_190); /* item on <var_190:IndexedIterator[AAnnotation]>*/
}
var_an194 = var193;
{
{ /* Inline android_annotations#AndroidProject#manifest_activity_attributes (self) on <self:AndroidProject> */
var197 = self->attrs[COLOR_nitc__android_annotations__AndroidProject___manifest_activity_attributes].val; /* _manifest_activity_attributes on <self:AndroidProject> */
if (unlikely(var197 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _manifest_activity_attributes");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__android_annotations, 32);
fatal_exit(1);
}
var195 = var197;
RET_LABEL196:(void)0;
}
}
{
{ /* Inline app_annotations#AppProject#modelbuilder (self) on <self:AndroidProject> */
var201 = self->attrs[COLOR_nitc__app_annotations__AppProject___modelbuilder].val; /* _modelbuilder on <self:AndroidProject> */
if (unlikely(var201 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__app_annotations, 50);
fatal_exit(1);
}
var199 = var201;
RET_LABEL200:(void)0;
}
}
{
var202 = nitc__annotation___AAnnotation___arg_as_string(var_an194, var199);
}
if (var202!=NULL) {
var198 = var202;
} else {
if (likely(varonce203!=NULL)) {
var204 = varonce203;
} else {
var205 = "";
var206 = core__abstract_text___CString___to_s_full(var205, 0l, 0l);
var204 = var206;
varonce203 = var204;
}
var198 = var204;
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var195, var198); /* Direct call array#Array#add on <var195:Array[String]>*/
}
{
((void(*)(val* self))((((long)var_190&3)?class_info[((long)var_190&3)]:var_190->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_190); /* next on <var_190:IndexedIterator[AAnnotation]>*/
}
}
BREAK_label192: (void)0;
{
((void(*)(val* self))((((long)var_190&3)?class_info[((long)var_190&3)]:var_190->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_190); /* finish on <var_190:IndexedIterator[AAnnotation]>*/
}
{
{ /* Inline app_annotations#AppProject#modelbuilder (self) on <self:AndroidProject> */
var209 = self->attrs[COLOR_nitc__app_annotations__AppProject___modelbuilder].val; /* _modelbuilder on <self:AndroidProject> */
if (unlikely(var209 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__app_annotations, 50);
fatal_exit(1);
}
var207 = var209;
RET_LABEL208:(void)0;
}
}
if (likely(varonce210!=NULL)) {
var211 = varonce210;
} else {
var212 = "android_activity";
var213 = core__abstract_text___CString___to_s_full(var212, 16l, 16l);
var211 = var213;
varonce210 = var211;
}
{
{ /* Inline app_annotations#AppProject#mainmodule (self) on <self:AndroidProject> */
var216 = self->attrs[COLOR_nitc__app_annotations__AppProject___mainmodule].val; /* _mainmodule on <self:AndroidProject> */
if (unlikely(var216 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mainmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__app_annotations, 51);
fatal_exit(1);
}
var214 = var216;
RET_LABEL215:(void)0;
}
}
{
var217 = nitc__annotation___ModelBuilder___collect_annotations_on_modules(var207, var211, var214);
}
var_annots = var217;
var_218 = var_annots;
{
var219 = core___core__AbstractArrayRead___core__abstract_collection__Collection__iterator(var_218);
}
var_220 = var219;
for(;;) {
{
var221 = ((short int(*)(val* self))((((long)var_220&3)?class_info[((long)var_220&3)]:var_220->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_220); /* is_ok on <var_220:IndexedIterator[AAnnotation]>*/
}
if (var221){
} else {
goto BREAK_label222;
}
{
var223 = ((val*(*)(val* self))((((long)var_220&3)?class_info[((long)var_220&3)]:var_220->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_220); /* item on <var_220:IndexedIterator[AAnnotation]>*/
}
var_an224 = var223;
{
{ /* Inline app_annotations#AppProject#modelbuilder (self) on <self:AndroidProject> */
var227 = self->attrs[COLOR_nitc__app_annotations__AppProject___modelbuilder].val; /* _modelbuilder on <self:AndroidProject> */
if (unlikely(var227 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__app_annotations, 50);
fatal_exit(1);
}
var225 = var227;
RET_LABEL226:(void)0;
}
}
{
var228 = nitc__annotation___AAnnotation___arg_as_string(var_an224, var225);
}
var_activity = var228;
if (var_activity == NULL) {
var229 = 0; /* is null */
} else {
var229 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_activity,((val*)NULL)) on <var_activity:nullable String> */
var_other = ((val*)NULL);
{
var232 = ((short int(*)(val* self, val* p0))(var_activity->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_activity, var_other); /* == on <var_activity:nullable String(String)>*/
}
var233 = !var232;
var230 = var233;
goto RET_LABEL231;
RET_LABEL231:(void)0;
}
var229 = var230;
}
if (var229){
{
{ /* Inline android_annotations#AndroidProject#activities (self) on <self:AndroidProject> */
var236 = self->attrs[COLOR_nitc__android_annotations__AndroidProject___activities].val; /* _activities on <self:AndroidProject> */
if (unlikely(var236 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _activities");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__android_annotations, 44);
fatal_exit(1);
}
var234 = var236;
RET_LABEL235:(void)0;
}
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var234, var_activity); /* Direct call array#Array#add on <var234:Array[String]>*/
}
} else {
}
{
((void(*)(val* self))((((long)var_220&3)?class_info[((long)var_220&3)]:var_220->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_220); /* next on <var_220:IndexedIterator[AAnnotation]>*/
}
}
BREAK_label222: (void)0;
{
((void(*)(val* self))((((long)var_220&3)?class_info[((long)var_220&3)]:var_220->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_220); /* finish on <var_220:IndexedIterator[AAnnotation]>*/
}
RET_LABEL:;
}
