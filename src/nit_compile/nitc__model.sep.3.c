#include "nitc__model.sep.0.h"
/* method model#Sys#abstract_kind for (self: Sys): MClassKind */
val* nitc__model___core__Sys___abstract_kind(val* self) {
val* var /* : MClassKind */;
static val* varonce;
static int varonce_guard;
val* var1 /* : MClassKind */;
val* var2 /* : MClassKind */;
static val* varonce3;
val* var4 /* : String */;
char* var5 /* : CString */;
val* var6 /* : String */;
if (likely(varonce_guard)) {
var1 = varonce;
} else {
var2 = NEW_nitc__MClassKind(&type_nitc__MClassKind);
if (likely(varonce3!=NULL)) {
var4 = varonce3;
} else {
var5 = "abstract class";
var6 = core__abstract_text___CString___to_s_full(var5, 14l, 14l);
var4 = var6;
varonce3 = var4;
}
{
((void(*)(val* self, val* p0))(var2->class->vft[COLOR_nitc__model__MClassKind__to_s_61d]))(var2, var4); /* to_s= on <var2:MClassKind>*/
}
{
((void(*)(val* self, short int p0))(var2->class->vft[COLOR_nitc__model__MClassKind__need_init_61d]))(var2, 1); /* need_init= on <var2:MClassKind>*/
}
{
((void(*)(val* self))(var2->class->vft[COLOR_core__kernel__Object__init]))(var2); /* init on <var2:MClassKind>*/
}
var1 = var2;
varonce = var1;
varonce_guard = 1;
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model#Sys#concrete_kind for (self: Sys): MClassKind */
val* nitc__model___core__Sys___concrete_kind(val* self) {
val* var /* : MClassKind */;
static val* varonce;
static int varonce_guard;
val* var1 /* : MClassKind */;
val* var2 /* : MClassKind */;
static val* varonce3;
val* var4 /* : String */;
char* var5 /* : CString */;
val* var6 /* : String */;
if (likely(varonce_guard)) {
var1 = varonce;
} else {
var2 = NEW_nitc__MClassKind(&type_nitc__MClassKind);
if (likely(varonce3!=NULL)) {
var4 = varonce3;
} else {
var5 = "class";
var6 = core__abstract_text___CString___to_s_full(var5, 5l, 5l);
var4 = var6;
varonce3 = var4;
}
{
((void(*)(val* self, val* p0))(var2->class->vft[COLOR_nitc__model__MClassKind__to_s_61d]))(var2, var4); /* to_s= on <var2:MClassKind>*/
}
{
((void(*)(val* self, short int p0))(var2->class->vft[COLOR_nitc__model__MClassKind__need_init_61d]))(var2, 1); /* need_init= on <var2:MClassKind>*/
}
{
((void(*)(val* self))(var2->class->vft[COLOR_core__kernel__Object__init]))(var2); /* init on <var2:MClassKind>*/
}
var1 = var2;
varonce = var1;
varonce_guard = 1;
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model#Sys#interface_kind for (self: Sys): MClassKind */
val* nitc__model___core__Sys___interface_kind(val* self) {
val* var /* : MClassKind */;
static val* varonce;
static int varonce_guard;
val* var1 /* : MClassKind */;
val* var2 /* : MClassKind */;
static val* varonce3;
val* var4 /* : String */;
char* var5 /* : CString */;
val* var6 /* : String */;
if (likely(varonce_guard)) {
var1 = varonce;
} else {
var2 = NEW_nitc__MClassKind(&type_nitc__MClassKind);
if (likely(varonce3!=NULL)) {
var4 = varonce3;
} else {
var5 = "interface";
var6 = core__abstract_text___CString___to_s_full(var5, 9l, 9l);
var4 = var6;
varonce3 = var4;
}
{
((void(*)(val* self, val* p0))(var2->class->vft[COLOR_nitc__model__MClassKind__to_s_61d]))(var2, var4); /* to_s= on <var2:MClassKind>*/
}
{
((void(*)(val* self, short int p0))(var2->class->vft[COLOR_nitc__model__MClassKind__need_init_61d]))(var2, 0); /* need_init= on <var2:MClassKind>*/
}
{
((void(*)(val* self))(var2->class->vft[COLOR_core__kernel__Object__init]))(var2); /* init on <var2:MClassKind>*/
}
var1 = var2;
varonce = var1;
varonce_guard = 1;
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model#Sys#enum_kind for (self: Sys): MClassKind */
val* nitc__model___core__Sys___enum_kind(val* self) {
val* var /* : MClassKind */;
static val* varonce;
static int varonce_guard;
val* var1 /* : MClassKind */;
val* var2 /* : MClassKind */;
static val* varonce3;
val* var4 /* : String */;
char* var5 /* : CString */;
val* var6 /* : String */;
if (likely(varonce_guard)) {
var1 = varonce;
} else {
var2 = NEW_nitc__MClassKind(&type_nitc__MClassKind);
if (likely(varonce3!=NULL)) {
var4 = varonce3;
} else {
var5 = "enum";
var6 = core__abstract_text___CString___to_s_full(var5, 4l, 4l);
var4 = var6;
varonce3 = var4;
}
{
((void(*)(val* self, val* p0))(var2->class->vft[COLOR_nitc__model__MClassKind__to_s_61d]))(var2, var4); /* to_s= on <var2:MClassKind>*/
}
{
((void(*)(val* self, short int p0))(var2->class->vft[COLOR_nitc__model__MClassKind__need_init_61d]))(var2, 0); /* need_init= on <var2:MClassKind>*/
}
{
((void(*)(val* self))(var2->class->vft[COLOR_core__kernel__Object__init]))(var2); /* init on <var2:MClassKind>*/
}
var1 = var2;
varonce = var1;
varonce_guard = 1;
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method model#Sys#extern_kind for (self: Sys): MClassKind */
val* nitc__model___core__Sys___extern_kind(val* self) {
val* var /* : MClassKind */;
static val* varonce;
static int varonce_guard;
val* var1 /* : MClassKind */;
val* var2 /* : MClassKind */;
static val* varonce3;
val* var4 /* : String */;
char* var5 /* : CString */;
val* var6 /* : String */;
if (likely(varonce_guard)) {
var1 = varonce;
} else {
var2 = NEW_nitc__MClassKind(&type_nitc__MClassKind);
if (likely(varonce3!=NULL)) {
var4 = varonce3;
} else {
var5 = "extern class";
var6 = core__abstract_text___CString___to_s_full(var5, 12l, 12l);
var4 = var6;
varonce3 = var4;
}
{
((void(*)(val* self, val* p0))(var2->class->vft[COLOR_nitc__model__MClassKind__to_s_61d]))(var2, var4); /* to_s= on <var2:MClassKind>*/
}
{
((void(*)(val* self, short int p0))(var2->class->vft[COLOR_nitc__model__MClassKind__need_init_61d]))(var2, 0); /* need_init= on <var2:MClassKind>*/
}
{
((void(*)(val* self))(var2->class->vft[COLOR_core__kernel__Object__init]))(var2); /* init on <var2:MClassKind>*/
}
var1 = var2;
varonce = var1;
varonce_guard = 1;
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
