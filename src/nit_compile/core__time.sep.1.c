#include "core__time.sep.0.h"
/* method time#Sys#get_time for (self: Sys): Int */
long core__time___Sys___get_time(val* self) {
long var /* : Int */;
long var1 /* : Int */;
struct nitni_instance* var_for_c_0;
var_for_c_0 = nit_alloc(sizeof(struct nitni_instance));
var_for_c_0->value = self;
var1 = time___Sys_get_time___impl(var_for_c_0);
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method time#Tm#localtime for (self: Tm): Tm */
val* core___core__Tm___localtime(val* self) {
val* var /* : Tm */;
val* var1 /* : Tm */;
val* var2 /* : Tm */;
var1 = time___new_Tm_localtime___impl();
var2 = BOX_core__Pointer(var1); /* boxing Tm */
var2->type = &type_core__Tm;
var2->class = &class_core__Tm;
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method time#Tm#asctime for (self: Tm): CString */
char* core___core__Tm___asctime(val* self) {
char* var /* : CString */;
char* var1 /* : CString */;
void* var2 /* : Tm for extern */;
var2 = ((struct instance_core__Pointer*)self)->value; /* unboxing Tm */
var1 = time___Tm_asctime___impl(var2);
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method time#Tm#strftime for (self: Tm, String): String */
val* core___core__Tm___strftime(val* self, val* p0) {
val* var /* : String */;
const char* var_class_name;
var_class_name = self == NULL ? "null" : self->type->name;
PRINT_ERROR("Runtime error: uncompiled method `%s` called on `%s`. NOT YET IMPLEMENTED", "strftime", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__time, 142);
fatal_exit(1);
RET_LABEL:;
return var;
}
/* method time#Tm#to_s for (self: Tm): String */
val* core___core__Tm___core__abstract_text__Object__to_s(val* self) {
val* var /* : String */;
char* var1 /* : CString */;
char* var3 /* : CString */;
void* var4 /* : Tm for extern */;
val* var5 /* : String */;
static val* varonce;
val* var6 /* : String */;
char* var7 /* : CString */;
val* var8 /* : String */;
static val* varonce9;
val* var10 /* : String */;
char* var11 /* : CString */;
val* var12 /* : String */;
val* var13 /* : String */;
{
{ /* Inline time#Tm#asctime (self) on <self:Tm> */
var4 = ((struct instance_core__Pointer*)self)->value; /* unboxing Tm */
var3 = time___Tm_asctime___impl(var4);
var1 = var3;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
}
{
var5 = core__flat___CString___core__abstract_text__Object__to_s(var1);
}
if (likely(varonce!=NULL)) {
var6 = varonce;
} else {
var7 = "\n";
var8 = core__abstract_text___CString___to_s_full(var7, 1l, 1l);
var6 = var8;
varonce = var6;
}
if (likely(varonce9!=NULL)) {
var10 = varonce9;
} else {
var11 = "";
var12 = core__abstract_text___CString___to_s_full(var11, 0l, 0l);
var10 = var12;
varonce9 = var10;
}
{
var13 = core__string_search___Text___replace(var5, var6, var10);
}
var = var13;
goto RET_LABEL;
RET_LABEL:;
return var;
}
