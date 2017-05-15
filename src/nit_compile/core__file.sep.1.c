#include "core__file.sep.0.h"
/* method file#FileStream#path for (self: FileStream): nullable String */
val* core___core__FileStream___path(val* self) {
val* var /* : nullable String */;
val* var1 /* : nullable String */;
var1 = self->attrs[COLOR_core__file__FileStream___path].val; /* _path on <self:FileStream> */
var = var1;
RET_LABEL:;
return var;
}
/* method file#FileStream#path= for (self: FileStream, nullable String) */
void core___core__FileStream___path_61d(val* self, val* p0) {
self->attrs[COLOR_core__file__FileStream___path].val = p0; /* _path on <self:FileStream> */
RET_LABEL:;
}
/* method file#FileStream#close for (self: FileStream) */
void core___core__FileStream___core__stream__Stream__close(val* self) {
val* var /* : nullable NativeFile */;
val* var_file /* var file: nullable NativeFile */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var4 /* : Bool */;
short int var6 /* : Bool */;
short int var7 /* : Bool */;
short int var9 /* : Bool */;
void* var10 /* : Pointer for extern */;
val* var11 /* : nullable IOError */;
val* var13 /* : nullable IOError */;
short int var14 /* : Bool */;
short int var15 /* : Bool */;
val* var_other17 /* var other: nullable Object */;
short int var18 /* : Bool */;
short int var19 /* : Bool */;
val* var20 /* : IOError */;
static val* varonce;
val* var21 /* : String */;
char* var22 /* : CString */;
val* var23 /* : String */;
long var25 /* : Int */;
long var27 /* : Int */;
void* var28 /* : NativeFile for extern */;
long var_i /* var i: Int */;
short int var29 /* : Bool */;
short int var31 /* : Bool */;
short int var32 /* : Bool */;
val* var33 /* : IOError */;
val* var35 /* : NativeArray[String] */;
static val* varonce34;
static val* varonce36;
val* var37 /* : String */;
char* var38 /* : CString */;
val* var39 /* : String */;
val* var40 /* : Sys */;
val* var42 /* : Sys */;
long var43 /* : Int */;
long var45 /* : Int */;
val* var46 /* : String */;
val* var47 /* : String */;
var = self->attrs[COLOR_core__file__FileStream___file].val; /* _file on <self:FileStream> */
var_file = var;
if (var_file == NULL) {
var1 = 1; /* is null */
} else {
var1 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_file,((val*)NULL)) on <var_file:nullable NativeFile> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_file,var_other) on <var_file:nullable NativeFile(NativeFile)> */
var6 = var_file == var_other;
var4 = var6;
goto RET_LABEL5;
RET_LABEL5:(void)0;
}
}
var2 = var4;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
var1 = var2;
}
if (var1){
goto RET_LABEL;
} else {
}
{
{ /* Inline kernel#Pointer#address_is_null (var_file) on <var_file:nullable NativeFile(NativeFile)> */
var10 = ((struct instance_core__Pointer*)var_file)->value; /* unboxing nullable NativeFile */
var9 = kernel___Pointer_address_is_null___impl(var10);
var7 = var9;
goto RET_LABEL8;
RET_LABEL8:(void)0;
}
}
if (var7){
{
{ /* Inline stream#Stream#last_error (self) on <self:FileStream> */
var13 = self->attrs[COLOR_core__stream__Stream___last_error].val; /* _last_error on <self:FileStream> */
var11 = var13;
RET_LABEL12:(void)0;
}
}
if (var11 == NULL) {
var14 = 0; /* is null */
} else {
var14 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var11,((val*)NULL)) on <var11:nullable IOError> */
var_other17 = ((val*)NULL);
{
var18 = ((short int(*)(val* self, val* p0))(var11->class->vft[COLOR_core__kernel__Object___61d_61d]))(var11, var_other17); /* == on <var11:nullable IOError(IOError)>*/
}
var19 = !var18;
var15 = var19;
goto RET_LABEL16;
RET_LABEL16:(void)0;
}
var14 = var15;
}
if (var14){
goto RET_LABEL;
} else {
}
var20 = NEW_core__IOError(&type_core__IOError);
if (likely(varonce!=NULL)) {
var21 = varonce;
} else {
var22 = "Cannot close unopened file";
var23 = core__abstract_text___CString___to_s_full(var22, 26l, 26l);
var21 = var23;
varonce = var21;
}
{
((void(*)(val* self, val* p0))(var20->class->vft[COLOR_core__error__Error__message_61d]))(var20, var21); /* message= on <var20:IOError>*/
}
{
((void(*)(val* self))(var20->class->vft[COLOR_core__kernel__Object__init]))(var20); /* init on <var20:IOError>*/
}
{
{ /* Inline stream#Stream#last_error= (self,var20) on <self:FileStream> */
self->attrs[COLOR_core__stream__Stream___last_error].val = var20; /* _last_error on <self:FileStream> */
RET_LABEL24:(void)0;
}
}
goto RET_LABEL;
} else {
}
{
{ /* Inline file#NativeFile#io_close (var_file) on <var_file:nullable NativeFile(NativeFile)> */
var28 = ((struct instance_core__Pointer*)var_file)->value; /* unboxing nullable NativeFile */
var27 = file___NativeFile_io_close___impl(var28);
var25 = var27;
goto RET_LABEL26;
RET_LABEL26:(void)0;
}
}
var_i = var25;
{
{ /* Inline kernel#Int#!= (var_i,0l) on <var_i:Int> */
var31 = var_i == 0l;
var32 = !var31;
var29 = var32;
goto RET_LABEL30;
RET_LABEL30:(void)0;
}
}
if (var29){
var33 = NEW_core__IOError(&type_core__IOError);
if (unlikely(varonce34==NULL)) {
var35 = NEW_core__NativeArray(2l, &type_core__NativeArray__core__String);
if (likely(varonce36!=NULL)) {
var37 = varonce36;
} else {
var38 = "Close failed due to error ";
var39 = core__abstract_text___CString___to_s_full(var38, 26l, 26l);
var37 = var39;
varonce36 = var37;
}
((struct instance_core__NativeArray*)var35)->values[0]=var37;
} else {
var35 = varonce34;
varonce34 = NULL;
}
{
{ /* Inline kernel#Object#sys (self) on <self:FileStream> */
var42 = glob_sys;
var40 = var42;
goto RET_LABEL41;
RET_LABEL41:(void)0;
}
}
{
{ /* Inline kernel#Sys#errno (var40) on <var40:Sys> */
struct nitni_instance* var_for_c_0;
var_for_c_0 = nit_alloc(sizeof(struct nitni_instance));
var_for_c_0->value = var40;
var45 = kernel___Sys_errno___impl(var_for_c_0);
var43 = var45;
goto RET_LABEL44;
RET_LABEL44:(void)0;
}
}
{
var46 = core__abstract_text___Int___strerror(var43);
}
((struct instance_core__NativeArray*)var35)->values[1]=var46;
{
var47 = ((val*(*)(val* self))(var35->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var35); /* native_to_s on <var35:NativeArray[String]>*/
}
varonce34 = var35;
{
((void(*)(val* self, val* p0))(var33->class->vft[COLOR_core__error__Error__message_61d]))(var33, var47); /* message= on <var33:IOError>*/
}
{
((void(*)(val* self))(var33->class->vft[COLOR_core__kernel__Object__init]))(var33); /* init on <var33:IOError>*/
}
{
{ /* Inline stream#Stream#last_error= (self,var33) on <self:FileStream> */
self->attrs[COLOR_core__stream__Stream___last_error].val = var33; /* _last_error on <self:FileStream> */
RET_LABEL48:(void)0;
}
}
} else {
}
self->attrs[COLOR_core__file__FileStream___file].val = ((val*)NULL); /* _file on <self:FileStream> */
RET_LABEL:;
}
/* method file#FileStream#set_buffering_mode for (self: FileStream, Int, Int) */
void core___core__FileStream___set_buffering_mode(val* self, long p0, long p1) {
long var_buf_size /* var buf_size: Int */;
long var_mode /* var mode: Int */;
short int var /* : Bool */;
short int var2 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var3 /* : Bool */;
val* var4 /* : nullable NativeFile */;
long var5 /* : Int */;
long var7 /* : Int */;
void* var8 /* : NativeFile for extern */;
short int var9 /* : Bool */;
short int var11 /* : Bool */;
short int var12 /* : Bool */;
val* var13 /* : IOError */;
val* var14 /* : NativeArray[String] */;
static val* varonce;
static val* varonce15;
val* var16 /* : String */;
char* var17 /* : CString */;
val* var18 /* : String */;
val* var19 /* : Sys */;
val* var21 /* : Sys */;
long var22 /* : Int */;
long var24 /* : Int */;
val* var25 /* : String */;
val* var26 /* : String */;
var_buf_size = p0;
var_mode = p1;
{
{ /* Inline kernel#Int#<= (var_buf_size,0l) on <var_buf_size:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var2 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var2)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 724);
fatal_exit(1);
}
var3 = var_buf_size <= 0l;
var = var3;
goto RET_LABEL1;
RET_LABEL1:(void)0;
}
}
if (var){
var_buf_size = 512l;
} else {
}
var4 = self->attrs[COLOR_core__file__FileStream___file].val; /* _file on <self:FileStream> */
if (unlikely(var4 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_core__file, 95);
fatal_exit(1);
}
{
{ /* Inline file#NativeFile#set_buffering_type (var4,var_buf_size,var_mode) on <var4:nullable NativeFile(NativeFile)> */
var8 = ((struct instance_core__Pointer*)var4)->value; /* unboxing nullable NativeFile */
var7 = file___NativeFile_set_buffering_type___impl(var8, var_buf_size, var_mode);
var5 = var7;
goto RET_LABEL6;
RET_LABEL6:(void)0;
}
}
{
{ /* Inline kernel#Int#!= (var5,0l) on <var5:Int> */
var11 = var5 == 0l;
var12 = !var11;
var9 = var12;
goto RET_LABEL10;
RET_LABEL10:(void)0;
}
}
if (var9){
var13 = NEW_core__IOError(&type_core__IOError);
if (unlikely(varonce==NULL)) {
var14 = NEW_core__NativeArray(2l, &type_core__NativeArray__core__String);
if (likely(varonce15!=NULL)) {
var16 = varonce15;
} else {
var17 = "Error while changing buffering type for FileStream, returned error ";
var18 = core__abstract_text___CString___to_s_full(var17, 67l, 67l);
var16 = var18;
varonce15 = var16;
}
((struct instance_core__NativeArray*)var14)->values[0]=var16;
} else {
var14 = varonce;
varonce = NULL;
}
{
{ /* Inline kernel#Object#sys (self) on <self:FileStream> */
var21 = glob_sys;
var19 = var21;
goto RET_LABEL20;
RET_LABEL20:(void)0;
}
}
{
{ /* Inline kernel#Sys#errno (var19) on <var19:Sys> */
struct nitni_instance* var_for_c_0;
var_for_c_0 = nit_alloc(sizeof(struct nitni_instance));
var_for_c_0->value = var19;
var24 = kernel___Sys_errno___impl(var_for_c_0);
var22 = var24;
goto RET_LABEL23;
RET_LABEL23:(void)0;
}
}
{
var25 = core__abstract_text___Int___strerror(var22);
}
((struct instance_core__NativeArray*)var14)->values[1]=var25;
{
var26 = ((val*(*)(val* self))(var14->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var14); /* native_to_s on <var14:NativeArray[String]>*/
}
varonce = var14;
{
((void(*)(val* self, val* p0))(var13->class->vft[COLOR_core__error__Error__message_61d]))(var13, var26); /* message= on <var13:IOError>*/
}
{
((void(*)(val* self))(var13->class->vft[COLOR_core__kernel__Object__init]))(var13); /* init on <var13:IOError>*/
}
{
{ /* Inline stream#Stream#last_error= (self,var13) on <self:FileStream> */
self->attrs[COLOR_core__stream__Stream___last_error].val = var13; /* _last_error on <self:FileStream> */
RET_LABEL27:(void)0;
}
}
} else {
}
RET_LABEL:;
}
/* method file#FileReader#close for (self: FileReader) */
void core___core__FileReader___core__stream__Stream__close(val* self) {
{
((void(*)(val* self))(self->class->vft[COLOR_core___core__FileReader___core__stream__Stream__close]))(self); /* close on <self:FileReader>*/
}
{
core___core__BufferedReader___buffer_reset(self); /* Direct call stream#BufferedReader#buffer_reset on <self:FileReader>*/
}
{
{ /* Inline file#FileReader#end_reached= (self,1) on <self:FileReader> */
self->attrs[COLOR_core__file__FileReader___end_reached].s = 1; /* _end_reached on <self:FileReader> */
RET_LABEL1:(void)0;
}
}
RET_LABEL:;
}
/* method file#FileReader#fill_buffer for (self: FileReader) */
void core___core__FileReader___core__stream__BufferedReader__fill_buffer(val* self) {
val* var /* : nullable NativeFile */;
char* var1 /* : CString */;
long var2 /* : Int */;
long var3 /* : Int */;
long var5 /* : Int */;
void* var6 /* : NativeFile for extern */;
long var_nb /* var nb: Int */;
short int var7 /* : Bool */;
val* var8 /* : nullable IOError */;
val* var10 /* : nullable IOError */;
short int var11 /* : Bool */;
short int var12 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var14 /* : Bool */;
short int var16 /* : Bool */;
short int var_ /* var : Bool */;
val* var17 /* : nullable NativeFile */;
short int var18 /* : Bool */;
short int var20 /* : Bool */;
void* var21 /* : NativeFile for extern */;
val* var22 /* : IOError */;
val* var23 /* : NativeArray[String] */;
static val* varonce;
static val* varonce24;
val* var25 /* : String */;
char* var26 /* : CString */;
val* var27 /* : String */;
static val* varonce28;
val* var29 /* : String */;
char* var30 /* : CString */;
val* var31 /* : String */;
val* var32 /* : nullable String */;
val* var34 /* : nullable String */;
val* var35 /* : Sys */;
val* var37 /* : Sys */;
long var38 /* : Int */;
long var40 /* : Int */;
val* var41 /* : String */;
val* var42 /* : String */;
short int var45 /* : Bool */;
short int var47 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var48 /* : Bool */;
var = self->attrs[COLOR_core__file__FileStream___file].val; /* _file on <self:FileReader> */
if (unlikely(var == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_core__file, 138);
fatal_exit(1);
}
var1 = self->attrs[COLOR_core__stream__BufferedReader___buffer].str; /* _buffer on <self:FileReader> */
var2 = self->attrs[COLOR_core__stream__BufferedReader___buffer_capacity].l; /* _buffer_capacity on <self:FileReader> */
{
{ /* Inline file#NativeFile#io_read (var,var1,var2) on <var:nullable NativeFile(NativeFile)> */
var6 = ((struct instance_core__Pointer*)var)->value; /* unboxing nullable NativeFile */
var5 = file___NativeFile_io_read___impl(var6, var1, var2);
var3 = var5;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
}
var_nb = var3;
{
{ /* Inline stream#Stream#last_error (self) on <self:FileReader> */
var10 = self->attrs[COLOR_core__stream__Stream___last_error].val; /* _last_error on <self:FileReader> */
var8 = var10;
RET_LABEL9:(void)0;
}
}
if (var8 == NULL) {
var11 = 1; /* is null */
} else {
var11 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var8,((val*)NULL)) on <var8:nullable IOError> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var8,var_other) on <var8:nullable IOError(IOError)> */
var16 = var8 == var_other;
var14 = var16;
goto RET_LABEL15;
RET_LABEL15:(void)0;
}
}
var12 = var14;
goto RET_LABEL13;
RET_LABEL13:(void)0;
}
var11 = var12;
}
var_ = var11;
if (var11){
var17 = self->attrs[COLOR_core__file__FileStream___file].val; /* _file on <self:FileReader> */
if (unlikely(var17 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_core__file, 139);
fatal_exit(1);
}
{
{ /* Inline file#NativeFile#ferror (var17) on <var17:nullable NativeFile(NativeFile)> */
var21 = ((struct instance_core__Pointer*)var17)->value; /* unboxing nullable NativeFile */
var20 = file___NativeFile_ferror___impl(var21);
var18 = var20;
goto RET_LABEL19;
RET_LABEL19:(void)0;
}
}
var7 = var18;
} else {
var7 = var_;
}
if (var7){
var22 = NEW_core__IOError(&type_core__IOError);
if (unlikely(varonce==NULL)) {
var23 = NEW_core__NativeArray(4l, &type_core__NativeArray__core__String);
if (likely(varonce24!=NULL)) {
var25 = varonce24;
} else {
var26 = "Cannot read `";
var27 = core__abstract_text___CString___to_s_full(var26, 13l, 13l);
var25 = var27;
varonce24 = var25;
}
((struct instance_core__NativeArray*)var23)->values[0]=var25;
if (likely(varonce28!=NULL)) {
var29 = varonce28;
} else {
var30 = "`: ";
var31 = core__abstract_text___CString___to_s_full(var30, 3l, 3l);
var29 = var31;
varonce28 = var29;
}
((struct instance_core__NativeArray*)var23)->values[2]=var29;
} else {
var23 = varonce;
varonce = NULL;
}
{
{ /* Inline file#FileStream#path (self) on <self:FileReader> */
var34 = self->attrs[COLOR_core__file__FileStream___path].val; /* _path on <self:FileReader> */
var32 = var34;
RET_LABEL33:(void)0;
}
}
if (unlikely(var32 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_core__file, 140);
fatal_exit(1);
}
((struct instance_core__NativeArray*)var23)->values[1]=var32;
{
{ /* Inline kernel#Object#sys (self) on <self:FileReader> */
var37 = glob_sys;
var35 = var37;
goto RET_LABEL36;
RET_LABEL36:(void)0;
}
}
{
{ /* Inline kernel#Sys#errno (var35) on <var35:Sys> */
struct nitni_instance* var_for_c_0;
var_for_c_0 = nit_alloc(sizeof(struct nitni_instance));
var_for_c_0->value = var35;
var40 = kernel___Sys_errno___impl(var_for_c_0);
var38 = var40;
goto RET_LABEL39;
RET_LABEL39:(void)0;
}
}
{
var41 = core__abstract_text___Int___strerror(var38);
}
((struct instance_core__NativeArray*)var23)->values[3]=var41;
{
var42 = ((val*(*)(val* self))(var23->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var23); /* native_to_s on <var23:NativeArray[String]>*/
}
varonce = var23;
{
((void(*)(val* self, val* p0))(var22->class->vft[COLOR_core__error__Error__message_61d]))(var22, var42); /* message= on <var22:IOError>*/
}
{
((void(*)(val* self))(var22->class->vft[COLOR_core__kernel__Object__init]))(var22); /* init on <var22:IOError>*/
}
{
{ /* Inline stream#Stream#last_error= (self,var22) on <self:FileReader> */
self->attrs[COLOR_core__stream__Stream___last_error].val = var22; /* _last_error on <self:FileReader> */
RET_LABEL43:(void)0;
}
}
{
{ /* Inline file#FileReader#end_reached= (self,1) on <self:FileReader> */
self->attrs[COLOR_core__file__FileReader___end_reached].s = 1; /* _end_reached on <self:FileReader> */
RET_LABEL44:(void)0;
}
}
} else {
}
{
{ /* Inline kernel#Int#<= (var_nb,0l) on <var_nb:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var47 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var47)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 724);
fatal_exit(1);
}
var48 = var_nb <= 0l;
var45 = var48;
goto RET_LABEL46;
RET_LABEL46:(void)0;
}
}
if (var45){
{
{ /* Inline file#FileReader#end_reached= (self,1) on <self:FileReader> */
self->attrs[COLOR_core__file__FileReader___end_reached].s = 1; /* _end_reached on <self:FileReader> */
RET_LABEL49:(void)0;
}
}
var_nb = 0l;
} else {
}
self->attrs[COLOR_core__stream__BufferedReader___buffer_length].l = var_nb; /* _buffer_length on <self:FileReader> */
self->attrs[COLOR_core__stream__BufferedReader___buffer_pos].l = 0l; /* _buffer_pos on <self:FileReader> */
RET_LABEL:;
}
/* method file#FileReader#end_reached for (self: FileReader): Bool */
short int core___core__FileReader___core__stream__BufferedReader__end_reached(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = self->attrs[COLOR_core__file__FileReader___end_reached].s; /* _end_reached on <self:FileReader> */
var = var1;
RET_LABEL:;
return var;
}
/* method file#FileReader#end_reached= for (self: FileReader, Bool) */
void core___core__FileReader___end_reached_61d(val* self, short int p0) {
self->attrs[COLOR_core__file__FileReader___end_reached].s = p0; /* _end_reached on <self:FileReader> */
RET_LABEL:;
}
/* method file#FileReader#open for (self: FileReader, String) */
void core___core__FileReader___open(val* self, val* p0) {
val* var_path /* var path: String */;
val* var /* : NativeFile */;
char* var2 /* : CString */;
val* var3 /* : NativeFile */;
val* var4 /* : nullable NativeFile */;
short int var5 /* : Bool */;
short int var7 /* : Bool */;
void* var8 /* : Pointer for extern */;
val* var9 /* : IOError */;
val* var10 /* : NativeArray[String] */;
static val* varonce;
static val* varonce11;
val* var12 /* : String */;
char* var13 /* : CString */;
val* var14 /* : String */;
static val* varonce15;
val* var16 /* : String */;
char* var17 /* : CString */;
val* var18 /* : String */;
val* var19 /* : Sys */;
val* var21 /* : Sys */;
long var22 /* : Int */;
long var24 /* : Int */;
val* var25 /* : String */;
val* var26 /* : String */;
{
((void(*)(val* self))(self->class->vft[COLOR_core__kernel__Object__init]))(self); /* init on <self:FileReader>*/
}
var_path = p0;
{
{ /* Inline file#FileStream#path= (self,var_path) on <self:FileReader> */
self->attrs[COLOR_core__file__FileStream___path].val = var_path; /* _path on <self:FileReader> */
RET_LABEL1:(void)0;
}
}
{
core___core__BufferedReader___prepare_buffer(self, 100l); /* Direct call stream#BufferedReader#prepare_buffer on <self:FileReader>*/
}
var = NEW_core__file__NativeFile(&type_core__file__NativeFile);
{
var2 = ((char*(*)(val* self))(var_path->class->vft[COLOR_core__abstract_text__Text__to_cstring]))(var_path); /* to_cstring on <var_path:String>*/
}
{
var3 = core__file___core__file__NativeFile___io_open_read(var, var2);
}
self->attrs[COLOR_core__file__FileStream___file].val = var3; /* _file on <self:FileReader> */
var4 = self->attrs[COLOR_core__file__FileStream___file].val; /* _file on <self:FileReader> */
if (unlikely(var4 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_core__file, 170);
fatal_exit(1);
}
{
{ /* Inline kernel#Pointer#address_is_null (var4) on <var4:nullable NativeFile(NativeFile)> */
var8 = ((struct instance_core__Pointer*)var4)->value; /* unboxing nullable NativeFile */
var7 = kernel___Pointer_address_is_null___impl(var8);
var5 = var7;
goto RET_LABEL6;
RET_LABEL6:(void)0;
}
}
if (var5){
var9 = NEW_core__IOError(&type_core__IOError);
if (unlikely(varonce==NULL)) {
var10 = NEW_core__NativeArray(4l, &type_core__NativeArray__core__String);
if (likely(varonce11!=NULL)) {
var12 = varonce11;
} else {
var13 = "Cannot open `";
var14 = core__abstract_text___CString___to_s_full(var13, 13l, 13l);
var12 = var14;
varonce11 = var12;
}
((struct instance_core__NativeArray*)var10)->values[0]=var12;
if (likely(varonce15!=NULL)) {
var16 = varonce15;
} else {
var17 = "`: ";
var18 = core__abstract_text___CString___to_s_full(var17, 3l, 3l);
var16 = var18;
varonce15 = var16;
}
((struct instance_core__NativeArray*)var10)->values[2]=var16;
} else {
var10 = varonce;
varonce = NULL;
}
((struct instance_core__NativeArray*)var10)->values[1]=var_path;
{
{ /* Inline kernel#Object#sys (self) on <self:FileReader> */
var21 = glob_sys;
var19 = var21;
goto RET_LABEL20;
RET_LABEL20:(void)0;
}
}
{
{ /* Inline kernel#Sys#errno (var19) on <var19:Sys> */
struct nitni_instance* var_for_c_0;
var_for_c_0 = nit_alloc(sizeof(struct nitni_instance));
var_for_c_0->value = var19;
var24 = kernel___Sys_errno___impl(var_for_c_0);
var22 = var24;
goto RET_LABEL23;
RET_LABEL23:(void)0;
}
}
{
var25 = core__abstract_text___Int___strerror(var22);
}
((struct instance_core__NativeArray*)var10)->values[3]=var25;
{
var26 = ((val*(*)(val* self))(var10->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var10); /* native_to_s on <var10:NativeArray[String]>*/
}
varonce = var10;
{
((void(*)(val* self, val* p0))(var9->class->vft[COLOR_core__error__Error__message_61d]))(var9, var26); /* message= on <var9:IOError>*/
}
{
((void(*)(val* self))(var9->class->vft[COLOR_core__kernel__Object__init]))(var9); /* init on <var9:IOError>*/
}
{
{ /* Inline stream#Stream#last_error= (self,var9) on <self:FileReader> */
self->attrs[COLOR_core__stream__Stream___last_error].val = var9; /* _last_error on <self:FileReader> */
RET_LABEL27:(void)0;
}
}
{
{ /* Inline file#FileReader#end_reached= (self,1) on <self:FileReader> */
self->attrs[COLOR_core__file__FileReader___end_reached].s = 1; /* _end_reached on <self:FileReader> */
RET_LABEL28:(void)0;
}
}
} else {
}
RET_LABEL:;
}
/* method file#FileReader#from_fd for (self: FileReader, Int) */
void core___core__FileReader___from_fd(val* self, long p0) {
long var_fd /* var fd: Int */;
static val* varonce;
val* var /* : String */;
char* var1 /* : CString */;
val* var2 /* : String */;
val* var4 /* : Sys */;
char* var5 /* : CString */;
val* var6 /* : NativeFile */;
val* var8 /* : NativeFile */;
val* var9 /* : NativeFile */;
val* var10 /* : nullable NativeFile */;
short int var11 /* : Bool */;
short int var13 /* : Bool */;
void* var14 /* : Pointer for extern */;
val* var15 /* : IOError */;
val* var17 /* : NativeArray[String] */;
static val* varonce16;
static val* varonce18;
val* var19 /* : String */;
char* var20 /* : CString */;
val* var21 /* : String */;
static val* varonce22;
val* var23 /* : String */;
char* var24 /* : CString */;
val* var25 /* : String */;
static val* varonce26;
val* var27 /* : String */;
char* var28 /* : CString */;
val* var29 /* : String */;
val* var30 /* : String */;
val* var31 /* : Sys */;
val* var33 /* : Sys */;
long var34 /* : Int */;
long var36 /* : Int */;
val* var37 /* : String */;
val* var38 /* : String */;
{
((void(*)(val* self))(self->class->vft[COLOR_core__kernel__Object__init]))(self); /* init on <self:FileReader>*/
}
var_fd = p0;
if (likely(varonce!=NULL)) {
var = varonce;
} else {
var1 = "";
var2 = core__abstract_text___CString___to_s_full(var1, 0l, 0l);
var = var2;
varonce = var;
}
{
{ /* Inline file#FileStream#path= (self,var) on <self:FileReader> */
self->attrs[COLOR_core__file__FileStream___path].val = var; /* _path on <self:FileReader> */
RET_LABEL3:(void)0;
}
}
{
core___core__BufferedReader___prepare_buffer(self, 1l); /* Direct call stream#BufferedReader#prepare_buffer on <self:FileReader>*/
}
var4 = glob_sys;
{
var5 = core__file___Sys___read_only(var4);
}
{
{ /* Inline file#Int#fd_to_stream (var_fd,var5) on <var_fd:Int> */
var8 = file___Int_fd_to_stream___impl(var_fd, var5);
var9 = BOX_core__Pointer(var8); /* boxing NativeFile */
var9->type = &type_core__file__NativeFile;
var9->class = &class_core__file__NativeFile;
var6 = var9;
goto RET_LABEL7;
RET_LABEL7:(void)0;
}
}
self->attrs[COLOR_core__file__FileStream___file].val = var6; /* _file on <self:FileReader> */
var10 = self->attrs[COLOR_core__file__FileStream___file].val; /* _file on <self:FileReader> */
if (unlikely(var10 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_core__file, 183);
fatal_exit(1);
}
{
{ /* Inline kernel#Pointer#address_is_null (var10) on <var10:nullable NativeFile(NativeFile)> */
var14 = ((struct instance_core__Pointer*)var10)->value; /* unboxing nullable NativeFile */
var13 = kernel___Pointer_address_is_null___impl(var14);
var11 = var13;
goto RET_LABEL12;
RET_LABEL12:(void)0;
}
}
if (var11){
var15 = NEW_core__IOError(&type_core__IOError);
if (unlikely(varonce16==NULL)) {
var17 = NEW_core__NativeArray(5l, &type_core__NativeArray__core__String);
if (likely(varonce18!=NULL)) {
var19 = varonce18;
} else {
var20 = "Error: Converting fd ";
var21 = core__abstract_text___CString___to_s_full(var20, 21l, 21l);
var19 = var21;
varonce18 = var19;
}
((struct instance_core__NativeArray*)var17)->values[0]=var19;
if (likely(varonce22!=NULL)) {
var23 = varonce22;
} else {
var24 = " to stream failed with \'";
var25 = core__abstract_text___CString___to_s_full(var24, 24l, 24l);
var23 = var25;
varonce22 = var23;
}
((struct instance_core__NativeArray*)var17)->values[2]=var23;
if (likely(varonce26!=NULL)) {
var27 = varonce26;
} else {
var28 = "\'";
var29 = core__abstract_text___CString___to_s_full(var28, 1l, 1l);
var27 = var29;
varonce26 = var27;
}
((struct instance_core__NativeArray*)var17)->values[4]=var27;
} else {
var17 = varonce16;
varonce16 = NULL;
}
var30 = core__flat___Int___core__abstract_text__Object__to_s(var_fd);
((struct instance_core__NativeArray*)var17)->values[1]=var30;
{
{ /* Inline kernel#Object#sys (self) on <self:FileReader> */
var33 = glob_sys;
var31 = var33;
goto RET_LABEL32;
RET_LABEL32:(void)0;
}
}
{
{ /* Inline kernel#Sys#errno (var31) on <var31:Sys> */
struct nitni_instance* var_for_c_0;
var_for_c_0 = nit_alloc(sizeof(struct nitni_instance));
var_for_c_0->value = var31;
var36 = kernel___Sys_errno___impl(var_for_c_0);
var34 = var36;
goto RET_LABEL35;
RET_LABEL35:(void)0;
}
}
{
var37 = core__abstract_text___Int___strerror(var34);
}
((struct instance_core__NativeArray*)var17)->values[3]=var37;
{
var38 = ((val*(*)(val* self))(var17->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var17); /* native_to_s on <var17:NativeArray[String]>*/
}
varonce16 = var17;
{
((void(*)(val* self, val* p0))(var15->class->vft[COLOR_core__error__Error__message_61d]))(var15, var38); /* message= on <var15:IOError>*/
}
{
((void(*)(val* self))(var15->class->vft[COLOR_core__kernel__Object__init]))(var15); /* init on <var15:IOError>*/
}
{
{ /* Inline stream#Stream#last_error= (self,var15) on <self:FileReader> */
self->attrs[COLOR_core__stream__Stream___last_error].val = var15; /* _last_error on <self:FileReader> */
RET_LABEL39:(void)0;
}
}
{
{ /* Inline file#FileReader#end_reached= (self,1) on <self:FileReader> */
self->attrs[COLOR_core__file__FileReader___end_reached].s = 1; /* _end_reached on <self:FileReader> */
RET_LABEL40:(void)0;
}
}
} else {
}
RET_LABEL:;
}
/* method file#FileWriter#write_bytes for (self: FileWriter, Bytes) */
void core___core__FileWriter___core__stream__Writer__write_bytes(val* self, val* p0) {
val* var_s /* var s: Bytes */;
val* var /* : nullable IOError */;
val* var2 /* : nullable IOError */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var6 /* : Bool */;
short int var7 /* : Bool */;
short int var8 /* : Bool */;
short int var9 /* : Bool */;
val* var10 /* : IOError */;
static val* varonce;
val* var11 /* : String */;
char* var12 /* : CString */;
val* var13 /* : String */;
char* var15 /* : CString */;
char* var17 /* : CString */;
long var18 /* : Int */;
long var20 /* : Int */;
var_s = p0;
{
{ /* Inline stream#Stream#last_error (self) on <self:FileWriter> */
var2 = self->attrs[COLOR_core__stream__Stream___last_error].val; /* _last_error on <self:FileWriter> */
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
{ /* Inline kernel#Object#!= (var,((val*)NULL)) on <var:nullable IOError> */
var_other = ((val*)NULL);
{
var6 = ((short int(*)(val* self, val* p0))(var->class->vft[COLOR_core__kernel__Object___61d_61d]))(var, var_other); /* == on <var:nullable IOError(IOError)>*/
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
var8 = self->attrs[COLOR_core__file__FileWriter___is_writable].s; /* _is_writable on <self:FileWriter> */
var9 = !var8;
if (var9){
var10 = NEW_core__IOError(&type_core__IOError);
if (likely(varonce!=NULL)) {
var11 = varonce;
} else {
var12 = "cannot write to non-writable stream";
var13 = core__abstract_text___CString___to_s_full(var12, 35l, 35l);
var11 = var13;
varonce = var11;
}
{
((void(*)(val* self, val* p0))(var10->class->vft[COLOR_core__error__Error__message_61d]))(var10, var11); /* message= on <var10:IOError>*/
}
{
((void(*)(val* self))(var10->class->vft[COLOR_core__kernel__Object__init]))(var10); /* init on <var10:IOError>*/
}
{
{ /* Inline stream#Stream#last_error= (self,var10) on <self:FileWriter> */
self->attrs[COLOR_core__stream__Stream___last_error].val = var10; /* _last_error on <self:FileWriter> */
RET_LABEL14:(void)0;
}
}
goto RET_LABEL;
} else {
}
{
{ /* Inline bytes#Bytes#items (var_s) on <var_s:Bytes> */
var17 = var_s->attrs[COLOR_core__bytes__Bytes___items].str; /* _items on <var_s:Bytes> */
var15 = var17;
RET_LABEL16:(void)0;
}
}
{
{ /* Inline bytes#Bytes#length (var_s) on <var_s:Bytes> */
var20 = var_s->attrs[COLOR_core__bytes__Bytes___length].l; /* _length on <var_s:Bytes> */
var18 = var20;
RET_LABEL19:(void)0;
}
}
{
core___core__FileWriter___write_native(self, var15, 0l, var18); /* Direct call file#FileWriter#write_native on <self:FileWriter>*/
}
RET_LABEL:;
}
/* method file#FileWriter#write for (self: FileWriter, Text) */
void core___core__FileWriter___core__stream__Writer__write(val* self, val* p0) {
val* var_s /* var s: Text */;
val* var /* : nullable IOError */;
val* var2 /* : nullable IOError */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var6 /* : Bool */;
short int var7 /* : Bool */;
short int var8 /* : Bool */;
short int var9 /* : Bool */;
val* var10 /* : IOError */;
static val* varonce;
val* var11 /* : String */;
char* var12 /* : CString */;
val* var13 /* : String */;
var_s = p0;
{
{ /* Inline stream#Stream#last_error (self) on <self:FileWriter> */
var2 = self->attrs[COLOR_core__stream__Stream___last_error].val; /* _last_error on <self:FileWriter> */
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
{ /* Inline kernel#Object#!= (var,((val*)NULL)) on <var:nullable IOError> */
var_other = ((val*)NULL);
{
var6 = ((short int(*)(val* self, val* p0))(var->class->vft[COLOR_core__kernel__Object___61d_61d]))(var, var_other); /* == on <var:nullable IOError(IOError)>*/
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
var8 = self->attrs[COLOR_core__file__FileWriter___is_writable].s; /* _is_writable on <self:FileWriter> */
var9 = !var8;
if (var9){
var10 = NEW_core__IOError(&type_core__IOError);
if (likely(varonce!=NULL)) {
var11 = varonce;
} else {
var12 = "cannot write to non-writable stream";
var13 = core__abstract_text___CString___to_s_full(var12, 35l, 35l);
var11 = var13;
varonce = var11;
}
{
((void(*)(val* self, val* p0))(var10->class->vft[COLOR_core__error__Error__message_61d]))(var10, var11); /* message= on <var10:IOError>*/
}
{
((void(*)(val* self))(var10->class->vft[COLOR_core__kernel__Object__init]))(var10); /* init on <var10:IOError>*/
}
{
{ /* Inline stream#Stream#last_error= (self,var10) on <self:FileWriter> */
self->attrs[COLOR_core__stream__Stream___last_error].val = var10; /* _last_error on <self:FileWriter> */
RET_LABEL14:(void)0;
}
}
goto RET_LABEL;
} else {
}
{
((void(*)(val* self, val* p0))(var_s->class->vft[COLOR_core__file__Text__write_native_to]))(var_s, self); /* write_native_to on <var_s:Text>*/
}
RET_LABEL:;
}
/* method file#FileWriter#close for (self: FileWriter) */
void core___core__FileWriter___core__stream__Stream__close(val* self) {
{
((void(*)(val* self))(self->class->vft[COLOR_core___core__FileWriter___core__stream__Stream__close]))(self); /* close on <self:FileWriter>*/
}
self->attrs[COLOR_core__file__FileWriter___is_writable].s = 0; /* _is_writable on <self:FileWriter> */
RET_LABEL:;
}
/* method file#FileWriter#is_writable= for (self: FileWriter, Bool) */
void core___core__FileWriter___is_writable_61d(val* self, short int p0) {
self->attrs[COLOR_core__file__FileWriter___is_writable].s = p0; /* _is_writable on <self:FileWriter> */
RET_LABEL:;
}
/* method file#FileWriter#write_native for (self: FileWriter, CString, Int, Int) */
void core___core__FileWriter___write_native(val* self, char* p0, long p1, long p2) {
char* var_native /* var native: CString */;
long var_from /* var from: Int */;
long var_len /* var len: Int */;
val* var /* : nullable IOError */;
val* var2 /* : nullable IOError */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var6 /* : Bool */;
short int var7 /* : Bool */;
short int var8 /* : Bool */;
short int var9 /* : Bool */;
val* var10 /* : IOError */;
static val* varonce;
val* var11 /* : String */;
char* var12 /* : CString */;
val* var13 /* : String */;
val* var15 /* : nullable NativeFile */;
short int var16 /* : Bool */;
short int var18 /* : Bool */;
void* var19 /* : Pointer for extern */;
val* var20 /* : IOError */;
static val* varonce21;
val* var22 /* : String */;
char* var23 /* : CString */;
val* var24 /* : String */;
val* var26 /* : nullable NativeFile */;
long var27 /* : Int */;
long var29 /* : Int */;
void* var30 /* : NativeFile for extern */;
long var_err /* var err: Int */;
short int var31 /* : Bool */;
short int var33 /* : Bool */;
short int var34 /* : Bool */;
val* var35 /* : IOError */;
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
static val* varonce46;
val* var47 /* : String */;
char* var48 /* : CString */;
val* var49 /* : String */;
val* var50 /* : String */;
val* var51 /* : String */;
val* var52 /* : String */;
var_native = p0;
var_from = p1;
var_len = p2;
{
{ /* Inline stream#Stream#last_error (self) on <self:FileWriter> */
var2 = self->attrs[COLOR_core__stream__Stream___last_error].val; /* _last_error on <self:FileWriter> */
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
{ /* Inline kernel#Object#!= (var,((val*)NULL)) on <var:nullable IOError> */
var_other = ((val*)NULL);
{
var6 = ((short int(*)(val* self, val* p0))(var->class->vft[COLOR_core__kernel__Object___61d_61d]))(var, var_other); /* == on <var:nullable IOError(IOError)>*/
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
var8 = self->attrs[COLOR_core__file__FileWriter___is_writable].s; /* _is_writable on <self:FileWriter> */
var9 = !var8;
if (var9){
var10 = NEW_core__IOError(&type_core__IOError);
if (likely(varonce!=NULL)) {
var11 = varonce;
} else {
var12 = "Cannot write to non-writable stream";
var13 = core__abstract_text___CString___to_s_full(var12, 35l, 35l);
var11 = var13;
varonce = var11;
}
{
((void(*)(val* self, val* p0))(var10->class->vft[COLOR_core__error__Error__message_61d]))(var10, var11); /* message= on <var10:IOError>*/
}
{
((void(*)(val* self))(var10->class->vft[COLOR_core__kernel__Object__init]))(var10); /* init on <var10:IOError>*/
}
{
{ /* Inline stream#Stream#last_error= (self,var10) on <self:FileWriter> */
self->attrs[COLOR_core__stream__Stream___last_error].val = var10; /* _last_error on <self:FileWriter> */
RET_LABEL14:(void)0;
}
}
goto RET_LABEL;
} else {
}
var15 = self->attrs[COLOR_core__file__FileStream___file].val; /* _file on <self:FileWriter> */
if (unlikely(var15 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_core__file, 267);
fatal_exit(1);
}
{
{ /* Inline kernel#Pointer#address_is_null (var15) on <var15:nullable NativeFile(NativeFile)> */
var19 = ((struct instance_core__Pointer*)var15)->value; /* unboxing nullable NativeFile */
var18 = kernel___Pointer_address_is_null___impl(var19);
var16 = var18;
goto RET_LABEL17;
RET_LABEL17:(void)0;
}
}
if (var16){
var20 = NEW_core__IOError(&type_core__IOError);
if (likely(varonce21!=NULL)) {
var22 = varonce21;
} else {
var23 = "Writing on a null stream";
var24 = core__abstract_text___CString___to_s_full(var23, 24l, 24l);
var22 = var24;
varonce21 = var22;
}
{
((void(*)(val* self, val* p0))(var20->class->vft[COLOR_core__error__Error__message_61d]))(var20, var22); /* message= on <var20:IOError>*/
}
{
((void(*)(val* self))(var20->class->vft[COLOR_core__kernel__Object__init]))(var20); /* init on <var20:IOError>*/
}
{
{ /* Inline stream#Stream#last_error= (self,var20) on <self:FileWriter> */
self->attrs[COLOR_core__stream__Stream___last_error].val = var20; /* _last_error on <self:FileWriter> */
RET_LABEL25:(void)0;
}
}
self->attrs[COLOR_core__file__FileWriter___is_writable].s = 0; /* _is_writable on <self:FileWriter> */
goto RET_LABEL;
} else {
}
var26 = self->attrs[COLOR_core__file__FileStream___file].val; /* _file on <self:FileWriter> */
if (unlikely(var26 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_core__file, 272);
fatal_exit(1);
}
{
{ /* Inline file#NativeFile#io_write (var26,var_native,var_from,var_len) on <var26:nullable NativeFile(NativeFile)> */
var30 = ((struct instance_core__Pointer*)var26)->value; /* unboxing nullable NativeFile */
var29 = file___NativeFile_io_write___impl(var30, var_native, var_from, var_len);
var27 = var29;
goto RET_LABEL28;
RET_LABEL28:(void)0;
}
}
var_err = var27;
{
{ /* Inline kernel#Int#!= (var_err,var_len) on <var_err:Int> */
var33 = var_err == var_len;
var34 = !var33;
var31 = var34;
goto RET_LABEL32;
RET_LABEL32:(void)0;
}
}
if (var31){
var35 = NEW_core__IOError(&type_core__IOError);
if (unlikely(varonce36==NULL)) {
var37 = NEW_core__NativeArray(5l, &type_core__NativeArray__core__String);
if (likely(varonce38!=NULL)) {
var39 = varonce38;
} else {
var40 = "Problem in writing : ";
var41 = core__abstract_text___CString___to_s_full(var40, 21l, 21l);
var39 = var41;
varonce38 = var39;
}
((struct instance_core__NativeArray*)var37)->values[0]=var39;
if (likely(varonce42!=NULL)) {
var43 = varonce42;
} else {
var44 = " ";
var45 = core__abstract_text___CString___to_s_full(var44, 1l, 1l);
var43 = var45;
varonce42 = var43;
}
((struct instance_core__NativeArray*)var37)->values[2]=var43;
if (likely(varonce46!=NULL)) {
var47 = varonce46;
} else {
var48 = " \n";
var49 = core__abstract_text___CString___to_s_full(var48, 2l, 2l);
var47 = var49;
varonce46 = var47;
}
((struct instance_core__NativeArray*)var37)->values[4]=var47;
} else {
var37 = varonce36;
varonce36 = NULL;
}
var50 = core__flat___Int___core__abstract_text__Object__to_s(var_err);
((struct instance_core__NativeArray*)var37)->values[1]=var50;
var51 = core__flat___Int___core__abstract_text__Object__to_s(var_len);
((struct instance_core__NativeArray*)var37)->values[3]=var51;
{
var52 = ((val*(*)(val* self))(var37->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var37); /* native_to_s on <var37:NativeArray[String]>*/
}
varonce36 = var37;
{
((void(*)(val* self, val* p0))(var35->class->vft[COLOR_core__error__Error__message_61d]))(var35, var52); /* message= on <var35:IOError>*/
}
{
((void(*)(val* self))(var35->class->vft[COLOR_core__kernel__Object__init]))(var35); /* init on <var35:IOError>*/
}
{
{ /* Inline stream#Stream#last_error= (self,var35) on <self:FileWriter> */
self->attrs[COLOR_core__stream__Stream___last_error].val = var35; /* _last_error on <self:FileWriter> */
RET_LABEL53:(void)0;
}
}
} else {
}
RET_LABEL:;
}
/* method file#FileWriter#open for (self: FileWriter, String) */
void core___core__FileWriter___open(val* self, val* p0) {
val* var_path /* var path: String */;
val* var /* : NativeFile */;
char* var1 /* : CString */;
val* var2 /* : NativeFile */;
val* var4 /* : nullable NativeFile */;
short int var5 /* : Bool */;
short int var7 /* : Bool */;
void* var8 /* : Pointer for extern */;
val* var9 /* : IOError */;
val* var10 /* : NativeArray[String] */;
static val* varonce;
static val* varonce11;
val* var12 /* : String */;
char* var13 /* : CString */;
val* var14 /* : String */;
static val* varonce15;
val* var16 /* : String */;
char* var17 /* : CString */;
val* var18 /* : String */;
val* var19 /* : Sys */;
val* var21 /* : Sys */;
long var22 /* : Int */;
long var24 /* : Int */;
val* var25 /* : String */;
val* var26 /* : String */;
{
((void(*)(val* self))(self->class->vft[COLOR_core__kernel__Object__init]))(self); /* init on <self:FileWriter>*/
}
var_path = p0;
var = NEW_core__file__NativeFile(&type_core__file__NativeFile);
{
var1 = ((char*(*)(val* self))(var_path->class->vft[COLOR_core__abstract_text__Text__to_cstring]))(var_path); /* to_cstring on <var_path:String>*/
}
{
var2 = core__file___core__file__NativeFile___io_open_write(var, var1);
}
self->attrs[COLOR_core__file__FileStream___file].val = var2; /* _file on <self:FileWriter> */
{
{ /* Inline file#FileStream#path= (self,var_path) on <self:FileWriter> */
self->attrs[COLOR_core__file__FileStream___path].val = var_path; /* _path on <self:FileWriter> */
RET_LABEL3:(void)0;
}
}
self->attrs[COLOR_core__file__FileWriter___is_writable].s = 1; /* _is_writable on <self:FileWriter> */
var4 = self->attrs[COLOR_core__file__FileStream___file].val; /* _file on <self:FileWriter> */
if (unlikely(var4 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_core__file, 285);
fatal_exit(1);
}
{
{ /* Inline kernel#Pointer#address_is_null (var4) on <var4:nullable NativeFile(NativeFile)> */
var8 = ((struct instance_core__Pointer*)var4)->value; /* unboxing nullable NativeFile */
var7 = kernel___Pointer_address_is_null___impl(var8);
var5 = var7;
goto RET_LABEL6;
RET_LABEL6:(void)0;
}
}
if (var5){
var9 = NEW_core__IOError(&type_core__IOError);
if (unlikely(varonce==NULL)) {
var10 = NEW_core__NativeArray(4l, &type_core__NativeArray__core__String);
if (likely(varonce11!=NULL)) {
var12 = varonce11;
} else {
var13 = "Cannot open `";
var14 = core__abstract_text___CString___to_s_full(var13, 13l, 13l);
var12 = var14;
varonce11 = var12;
}
((struct instance_core__NativeArray*)var10)->values[0]=var12;
if (likely(varonce15!=NULL)) {
var16 = varonce15;
} else {
var17 = "`: ";
var18 = core__abstract_text___CString___to_s_full(var17, 3l, 3l);
var16 = var18;
varonce15 = var16;
}
((struct instance_core__NativeArray*)var10)->values[2]=var16;
} else {
var10 = varonce;
varonce = NULL;
}
((struct instance_core__NativeArray*)var10)->values[1]=var_path;
{
{ /* Inline kernel#Object#sys (self) on <self:FileWriter> */
var21 = glob_sys;
var19 = var21;
goto RET_LABEL20;
RET_LABEL20:(void)0;
}
}
{
{ /* Inline kernel#Sys#errno (var19) on <var19:Sys> */
struct nitni_instance* var_for_c_0;
var_for_c_0 = nit_alloc(sizeof(struct nitni_instance));
var_for_c_0->value = var19;
var24 = kernel___Sys_errno___impl(var_for_c_0);
var22 = var24;
goto RET_LABEL23;
RET_LABEL23:(void)0;
}
}
{
var25 = core__abstract_text___Int___strerror(var22);
}
((struct instance_core__NativeArray*)var10)->values[3]=var25;
{
var26 = ((val*(*)(val* self))(var10->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var10); /* native_to_s on <var10:NativeArray[String]>*/
}
varonce = var10;
{
((void(*)(val* self, val* p0))(var9->class->vft[COLOR_core__error__Error__message_61d]))(var9, var26); /* message= on <var9:IOError>*/
}
{
((void(*)(val* self))(var9->class->vft[COLOR_core__kernel__Object__init]))(var9); /* init on <var9:IOError>*/
}
{
{ /* Inline stream#Stream#last_error= (self,var9) on <self:FileWriter> */
self->attrs[COLOR_core__stream__Stream___last_error].val = var9; /* _last_error on <self:FileWriter> */
RET_LABEL27:(void)0;
}
}
{
{ /* Inline file#FileWriter#is_writable= (self,0) on <self:FileWriter> */
self->attrs[COLOR_core__file__FileWriter___is_writable].s = 0; /* _is_writable on <self:FileWriter> */
RET_LABEL28:(void)0;
}
}
} else {
}
RET_LABEL:;
}
/* method file#Int#fd_to_stream for (self: Int, CString): NativeFile */
val* core__file___Int___fd_to_stream(long self, char* p0) {
val* var /* : NativeFile */;
val* var1 /* : NativeFile */;
val* var2 /* : NativeFile */;
var1 = file___Int_fd_to_stream___impl(self, p0);
var2 = BOX_core__Pointer(var1); /* boxing NativeFile */
var2->type = &type_core__file__NativeFile;
var2->class = &class_core__file__NativeFile;
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method file#Stdin#init for (self: Stdin) */
void core___core__Stdin___core__kernel__Object__init(val* self) {
val* var /* : NativeFile */;
val* var1 /* : NativeFile */;
static val* varonce;
val* var2 /* : String */;
char* var3 /* : CString */;
val* var4 /* : String */;
{
((void(*)(val* self))(self->class->vft[COLOR_core___core__Stdin___core__kernel__Object__init]))(self); /* init on <self:Stdin>*/
}
var = NEW_core__file__NativeFile(&type_core__file__NativeFile);
{
var1 = core__file___core__file__NativeFile___native_stdin(var);
}
self->attrs[COLOR_core__file__FileStream___file].val = var1; /* _file on <self:Stdin> */
if (likely(varonce!=NULL)) {
var2 = varonce;
} else {
var3 = "/dev/stdin";
var4 = core__abstract_text___CString___to_s_full(var3, 10l, 10l);
var2 = var4;
varonce = var2;
}
{
{ /* Inline file#FileStream#path= (self,var2) on <self:Stdin> */
self->attrs[COLOR_core__file__FileStream___path].val = var2; /* _path on <self:Stdin> */
RET_LABEL5:(void)0;
}
}
{
core___core__BufferedReader___prepare_buffer(self, 1l); /* Direct call stream#BufferedReader#prepare_buffer on <self:Stdin>*/
}
RET_LABEL:;
}
/* method file#Stdout#init for (self: Stdout) */
void core___core__Stdout___core__kernel__Object__init(val* self) {
val* var /* : NativeFile */;
val* var1 /* : NativeFile */;
static val* varonce;
val* var2 /* : String */;
char* var3 /* : CString */;
val* var4 /* : String */;
val* var6 /* : Sys */;
val* var8 /* : Sys */;
long var9 /* : Int */;
long var11 /* : Int */;
{
((void(*)(val* self))(self->class->vft[COLOR_core___core__Stdout___core__kernel__Object__init]))(self); /* init on <self:Stdout>*/
}
var = NEW_core__file__NativeFile(&type_core__file__NativeFile);
{
var1 = core__file___core__file__NativeFile___native_stdout(var);
}
self->attrs[COLOR_core__file__FileStream___file].val = var1; /* _file on <self:Stdout> */
if (likely(varonce!=NULL)) {
var2 = varonce;
} else {
var3 = "/dev/stdout";
var4 = core__abstract_text___CString___to_s_full(var3, 11l, 11l);
var2 = var4;
varonce = var2;
}
{
{ /* Inline file#FileStream#path= (self,var2) on <self:Stdout> */
self->attrs[COLOR_core__file__FileStream___path].val = var2; /* _path on <self:Stdout> */
RET_LABEL5:(void)0;
}
}
self->attrs[COLOR_core__file__FileWriter___is_writable].s = 1; /* _is_writable on <self:Stdout> */
{
{ /* Inline kernel#Object#sys (self) on <self:Stdout> */
var8 = glob_sys;
var6 = var8;
goto RET_LABEL7;
RET_LABEL7:(void)0;
}
}
{
{ /* Inline file#Sys#buffer_mode_line (var6) on <var6:Sys> */
struct nitni_instance* var_for_c_0;
var_for_c_0 = nit_alloc(sizeof(struct nitni_instance));
var_for_c_0->value = var6;
var11 = file___Sys_buffer_mode_line___impl(var_for_c_0);
var9 = var11;
goto RET_LABEL10;
RET_LABEL10:(void)0;
}
}
{
core___core__FileStream___set_buffering_mode(self, 256l, var9); /* Direct call file#FileStream#set_buffering_mode on <self:Stdout>*/
}
RET_LABEL:;
}
/* method file#Stderr#init for (self: Stderr) */
void core___core__Stderr___core__kernel__Object__init(val* self) {
val* var /* : NativeFile */;
val* var1 /* : NativeFile */;
static val* varonce;
val* var2 /* : String */;
char* var3 /* : CString */;
val* var4 /* : String */;
{
((void(*)(val* self))(self->class->vft[COLOR_core___core__Stderr___core__kernel__Object__init]))(self); /* init on <self:Stderr>*/
}
var = NEW_core__file__NativeFile(&type_core__file__NativeFile);
{
var1 = core__file___core__file__NativeFile___native_stderr(var);
}
self->attrs[COLOR_core__file__FileStream___file].val = var1; /* _file on <self:Stderr> */
if (likely(varonce!=NULL)) {
var2 = varonce;
} else {
var3 = "/dev/stderr";
var4 = core__abstract_text___CString___to_s_full(var3, 11l, 11l);
var2 = var4;
varonce = var2;
}
{
{ /* Inline file#FileStream#path= (self,var2) on <self:Stderr> */
self->attrs[COLOR_core__file__FileStream___path].val = var2; /* _path on <self:Stderr> */
RET_LABEL5:(void)0;
}
}
self->attrs[COLOR_core__file__FileWriter___is_writable].s = 1; /* _is_writable on <self:Stderr> */
RET_LABEL:;
}
/* method file#Writable#write_to_file for (self: Writable, String) */
void core__file___Writable___write_to_file(val* self, val* p0) {
val* var_filepath /* var filepath: String */;
val* var /* : FileWriter */;
val* var_stream /* var stream: FileWriter */;
var_filepath = p0;
var = NEW_core__FileWriter(&type_core__FileWriter);
{
core___core__FileWriter___open(var, var_filepath); /* Direct call file#FileWriter#open on <var:FileWriter>*/
}
var_stream = var;
{
((void(*)(val* self, val* p0))((((long)self&3)?class_info[((long)self&3)]:self->class)->vft[COLOR_core__stream__Writable__write_to]))(self, var_stream); /* write_to on <self:Writable>*/
}
{
core___core__FileWriter___core__stream__Stream__close(var_stream); /* Direct call file#FileWriter#close on <var_stream:FileWriter>*/
}
RET_LABEL:;
}
/* method file#Path#path for (self: Path): String */
val* core___core__Path___path(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = self->attrs[COLOR_core__file__Path___path].val; /* _path on <self:Path> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _path");
PRINT_ERROR(" (%s:%d)\n", FILE_core__file, 383);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method file#Path#path= for (self: Path, String) */
void core___core__Path___path_61d(val* self, val* p0) {
self->attrs[COLOR_core__file__Path___path].val = p0; /* _path on <self:Path> */
RET_LABEL:;
}
/* method file#Path#to_s for (self: Path): String */
val* core___core__Path___core__abstract_text__Object__to_s(val* self) {
val* var /* : String */;
val* var1 /* : String */;
val* var3 /* : String */;
{
{ /* Inline file#Path#path (self) on <self:Path> */
var3 = self->attrs[COLOR_core__file__Path___path].val; /* _path on <self:Path> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _path");
PRINT_ERROR(" (%s:%d)\n", FILE_core__file, 383);
fatal_exit(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method file#Path#simplified for (self: Path): Path */
val* core___core__Path___simplified(val* self) {
val* var /* : Path */;
short int var1 /* : Bool */;
val* var2 /* : Path */;
val* var3 /* : Path */;
val* var5 /* : String */;
val* var7 /* : String */;
val* var8 /* : String */;
val* var9 /* : Path */;
val* var_res /* var res: Path */;
var1 = self->attrs[COLOR_core__file__Path___simplified].val != NULL; /* _simplified on <self:Path> */
if(likely(var1)) {
var2 = self->attrs[COLOR_core__file__Path___simplified].val; /* _simplified on <self:Path> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _simplified");
PRINT_ERROR(" (%s:%d)\n", FILE_core__file, 398);
fatal_exit(1);
}
} else {
{
{
{ /* Inline file#Path#path (self) on <self:Path> */
var7 = self->attrs[COLOR_core__file__Path___path].val; /* _path on <self:Path> */
if (unlikely(var7 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _path");
PRINT_ERROR(" (%s:%d)\n", FILE_core__file, 383);
fatal_exit(1);
}
var5 = var7;
RET_LABEL6:(void)0;
}
}
{
var8 = core__file___String___simplify_path(var5);
}
{
var9 = core__file___Text___to_path(var8);
}
var_res = var9;
{
core___core__Path___simplified_61d(var_res, var_res); /* Direct call file#Path#simplified= on <var_res:Path>*/
}
var3 = var_res;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
self->attrs[COLOR_core__file__Path___simplified].val = var3; /* _simplified on <self:Path> */
var2 = var3;
}
var = var2;
RET_LABEL:;
return var;
}
/* method file#Path#simplified= for (self: Path, Path) */
void core___core__Path___simplified_61d(val* self, val* p0) {
self->attrs[COLOR_core__file__Path___simplified].val = p0; /* _simplified on <self:Path> */
RET_LABEL:;
}
/* method file#Path#last_error for (self: Path): nullable IOError */
val* core___core__Path___last_error(val* self) {
val* var /* : nullable IOError */;
val* var1 /* : nullable IOError */;
var1 = self->attrs[COLOR_core__file__Path___last_error].val; /* _last_error on <self:Path> */
var = var1;
RET_LABEL:;
return var;
}
/* method file#Path#last_error= for (self: Path, nullable IOError) */
void core___core__Path___last_error_61d(val* self, val* p0) {
self->attrs[COLOR_core__file__Path___last_error].val = p0; /* _last_error on <self:Path> */
RET_LABEL:;
}
/* method file#Path#exists for (self: Path): Bool */
short int core___core__Path___exists(val* self) {
short int var /* : Bool */;
val* var1 /* : nullable FileStat */;
short int var2 /* : Bool */;
short int var3 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
{
var1 = core___core__Path___stat(self);
}
if (var1 == NULL) {
var2 = 0; /* is null */
} else {
var2 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var1,((val*)NULL)) on <var1:nullable FileStat> */
var_other = ((val*)NULL);
{
var5 = ((short int(*)(val* self, val* p0))(var1->class->vft[COLOR_core__kernel__Object___61d_61d]))(var1, var_other); /* == on <var1:nullable FileStat(FileStat)>*/
}
var6 = !var5;
var3 = var6;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
var2 = var3;
}
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method file#Path#stat for (self: Path): nullable FileStat */
val* core___core__Path___stat(val* self) {
val* var /* : nullable FileStat */;
val* var1 /* : String */;
val* var3 /* : String */;
char* var4 /* : CString */;
val* var5 /* : NativeFileStat */;
val* var7 /* : NativeFileStat */;
val* var8 /* : NativeFileStat */;
val* var_stat /* var stat: NativeFileStat */;
short int var9 /* : Bool */;
short int var11 /* : Bool */;
void* var12 /* : Pointer for extern */;
val* var13 /* : IOError */;
val* var14 /* : NativeArray[String] */;
static val* varonce;
static val* varonce15;
val* var16 /* : String */;
char* var17 /* : CString */;
val* var18 /* : String */;
static val* varonce19;
val* var20 /* : String */;
char* var21 /* : CString */;
val* var22 /* : String */;
val* var23 /* : String */;
val* var25 /* : String */;
val* var26 /* : Sys */;
val* var28 /* : Sys */;
long var29 /* : Int */;
long var31 /* : Int */;
val* var32 /* : String */;
val* var33 /* : String */;
val* var36 /* : FileStat */;
{
{ /* Inline file#Path#path (self) on <self:Path> */
var3 = self->attrs[COLOR_core__file__Path___path].val; /* _path on <self:Path> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _path");
PRINT_ERROR(" (%s:%d)\n", FILE_core__file, 383);
fatal_exit(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
var4 = ((char*(*)(val* self))(var1->class->vft[COLOR_core__abstract_text__Text__to_cstring]))(var1); /* to_cstring on <var1:String>*/
}
{
{ /* Inline file#CString#file_stat (var4) on <var4:CString> */
var7 = file___CString_file_stat___impl(var4);
var8 = BOX_core__Pointer(var7); /* boxing NativeFileStat */
var8->type = &type_core__file__NativeFileStat;
var8->class = &class_core__file__NativeFileStat;
var5 = var8;
goto RET_LABEL6;
RET_LABEL6:(void)0;
}
}
var_stat = var5;
{
{ /* Inline kernel#Pointer#address_is_null (var_stat) on <var_stat:NativeFileStat> */
var12 = ((struct instance_core__Pointer*)var_stat)->value; /* unboxing NativeFileStat */
var11 = kernel___Pointer_address_is_null___impl(var12);
var9 = var11;
goto RET_LABEL10;
RET_LABEL10:(void)0;
}
}
if (var9){
var13 = NEW_core__IOError(&type_core__IOError);
if (unlikely(varonce==NULL)) {
var14 = NEW_core__NativeArray(4l, &type_core__NativeArray__core__String);
if (likely(varonce15!=NULL)) {
var16 = varonce15;
} else {
var17 = "Cannot open `";
var18 = core__abstract_text___CString___to_s_full(var17, 13l, 13l);
var16 = var18;
varonce15 = var16;
}
((struct instance_core__NativeArray*)var14)->values[0]=var16;
if (likely(varonce19!=NULL)) {
var20 = varonce19;
} else {
var21 = "`: ";
var22 = core__abstract_text___CString___to_s_full(var21, 3l, 3l);
var20 = var22;
varonce19 = var20;
}
((struct instance_core__NativeArray*)var14)->values[2]=var20;
} else {
var14 = varonce;
varonce = NULL;
}
{
{ /* Inline file#Path#path (self) on <self:Path> */
var25 = self->attrs[COLOR_core__file__Path___path].val; /* _path on <self:Path> */
if (unlikely(var25 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _path");
PRINT_ERROR(" (%s:%d)\n", FILE_core__file, 383);
fatal_exit(1);
}
var23 = var25;
RET_LABEL24:(void)0;
}
}
((struct instance_core__NativeArray*)var14)->values[1]=var23;
{
{ /* Inline kernel#Object#sys (self) on <self:Path> */
var28 = glob_sys;
var26 = var28;
goto RET_LABEL27;
RET_LABEL27:(void)0;
}
}
{
{ /* Inline kernel#Sys#errno (var26) on <var26:Sys> */
struct nitni_instance* var_for_c_0;
var_for_c_0 = nit_alloc(sizeof(struct nitni_instance));
var_for_c_0->value = var26;
var31 = kernel___Sys_errno___impl(var_for_c_0);
var29 = var31;
goto RET_LABEL30;
RET_LABEL30:(void)0;
}
}
{
var32 = core__abstract_text___Int___strerror(var29);
}
((struct instance_core__NativeArray*)var14)->values[3]=var32;
{
var33 = ((val*(*)(val* self))(var14->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var14); /* native_to_s on <var14:NativeArray[String]>*/
}
varonce = var14;
{
((void(*)(val* self, val* p0))(var13->class->vft[COLOR_core__error__Error__message_61d]))(var13, var33); /* message= on <var13:IOError>*/
}
{
((void(*)(val* self))(var13->class->vft[COLOR_core__kernel__Object__init]))(var13); /* init on <var13:IOError>*/
}
{
{ /* Inline file#Path#last_error= (self,var13) on <self:Path> */
self->attrs[COLOR_core__file__Path___last_error].val = var13; /* _last_error on <self:Path> */
RET_LABEL34:(void)0;
}
}
var = ((val*)NULL);
goto RET_LABEL;
} else {
}
{
{ /* Inline file#Path#last_error= (self,((val*)NULL)) on <self:Path> */
self->attrs[COLOR_core__file__Path___last_error].val = ((val*)NULL); /* _last_error on <self:Path> */
RET_LABEL35:(void)0;
}
}
var36 = NEW_core__FileStat(&type_core__FileStat);
{
((void(*)(val* self, val* p0))(var36->class->vft[COLOR_core__file__FileStat__stat_61d]))(var36, var_stat); /* stat= on <var36:FileStat>*/
}
{
((void(*)(val* self))(var36->class->vft[COLOR_core__kernel__Object__init]))(var36); /* init on <var36:FileStat>*/
}
var = var36;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method file#Path#link_stat for (self: Path): nullable FileStat */
val* core___core__Path___link_stat(val* self) {
val* var /* : nullable FileStat */;
val* var1 /* : String */;
val* var3 /* : String */;
char* var4 /* : CString */;
val* var5 /* : NativeFileStat */;
val* var7 /* : NativeFileStat */;
val* var8 /* : NativeFileStat */;
val* var_stat /* var stat: NativeFileStat */;
short int var9 /* : Bool */;
short int var11 /* : Bool */;
void* var12 /* : Pointer for extern */;
val* var13 /* : IOError */;
val* var14 /* : NativeArray[String] */;
static val* varonce;
static val* varonce15;
val* var16 /* : String */;
char* var17 /* : CString */;
val* var18 /* : String */;
static val* varonce19;
val* var20 /* : String */;
char* var21 /* : CString */;
val* var22 /* : String */;
val* var23 /* : String */;
val* var25 /* : String */;
val* var26 /* : Sys */;
val* var28 /* : Sys */;
long var29 /* : Int */;
long var31 /* : Int */;
val* var32 /* : String */;
val* var33 /* : String */;
val* var36 /* : FileStat */;
{
{ /* Inline file#Path#path (self) on <self:Path> */
var3 = self->attrs[COLOR_core__file__Path___path].val; /* _path on <self:Path> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _path");
PRINT_ERROR(" (%s:%d)\n", FILE_core__file, 383);
fatal_exit(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
var4 = ((char*(*)(val* self))(var1->class->vft[COLOR_core__abstract_text__Text__to_cstring]))(var1); /* to_cstring on <var1:String>*/
}
{
{ /* Inline file#CString#file_lstat (var4) on <var4:CString> */
var7 = file___CString_file_lstat___impl(var4);
var8 = BOX_core__Pointer(var7); /* boxing NativeFileStat */
var8->type = &type_core__file__NativeFileStat;
var8->class = &class_core__file__NativeFileStat;
var5 = var8;
goto RET_LABEL6;
RET_LABEL6:(void)0;
}
}
var_stat = var5;
{
{ /* Inline kernel#Pointer#address_is_null (var_stat) on <var_stat:NativeFileStat> */
var12 = ((struct instance_core__Pointer*)var_stat)->value; /* unboxing NativeFileStat */
var11 = kernel___Pointer_address_is_null___impl(var12);
var9 = var11;
goto RET_LABEL10;
RET_LABEL10:(void)0;
}
}
if (var9){
var13 = NEW_core__IOError(&type_core__IOError);
if (unlikely(varonce==NULL)) {
var14 = NEW_core__NativeArray(4l, &type_core__NativeArray__core__String);
if (likely(varonce15!=NULL)) {
var16 = varonce15;
} else {
var17 = "Cannot open `";
var18 = core__abstract_text___CString___to_s_full(var17, 13l, 13l);
var16 = var18;
varonce15 = var16;
}
((struct instance_core__NativeArray*)var14)->values[0]=var16;
if (likely(varonce19!=NULL)) {
var20 = varonce19;
} else {
var21 = "`: ";
var22 = core__abstract_text___CString___to_s_full(var21, 3l, 3l);
var20 = var22;
varonce19 = var20;
}
((struct instance_core__NativeArray*)var14)->values[2]=var20;
} else {
var14 = varonce;
varonce = NULL;
}
{
{ /* Inline file#Path#path (self) on <self:Path> */
var25 = self->attrs[COLOR_core__file__Path___path].val; /* _path on <self:Path> */
if (unlikely(var25 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _path");
PRINT_ERROR(" (%s:%d)\n", FILE_core__file, 383);
fatal_exit(1);
}
var23 = var25;
RET_LABEL24:(void)0;
}
}
((struct instance_core__NativeArray*)var14)->values[1]=var23;
{
{ /* Inline kernel#Object#sys (self) on <self:Path> */
var28 = glob_sys;
var26 = var28;
goto RET_LABEL27;
RET_LABEL27:(void)0;
}
}
{
{ /* Inline kernel#Sys#errno (var26) on <var26:Sys> */
struct nitni_instance* var_for_c_0;
var_for_c_0 = nit_alloc(sizeof(struct nitni_instance));
var_for_c_0->value = var26;
var31 = kernel___Sys_errno___impl(var_for_c_0);
var29 = var31;
goto RET_LABEL30;
RET_LABEL30:(void)0;
}
}
{
var32 = core__abstract_text___Int___strerror(var29);
}
((struct instance_core__NativeArray*)var14)->values[3]=var32;
{
var33 = ((val*(*)(val* self))(var14->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var14); /* native_to_s on <var14:NativeArray[String]>*/
}
varonce = var14;
{
((void(*)(val* self, val* p0))(var13->class->vft[COLOR_core__error__Error__message_61d]))(var13, var33); /* message= on <var13:IOError>*/
}
{
((void(*)(val* self))(var13->class->vft[COLOR_core__kernel__Object__init]))(var13); /* init on <var13:IOError>*/
}
{
{ /* Inline file#Path#last_error= (self,var13) on <self:Path> */
self->attrs[COLOR_core__file__Path___last_error].val = var13; /* _last_error on <self:Path> */
RET_LABEL34:(void)0;
}
}
var = ((val*)NULL);
goto RET_LABEL;
} else {
}
{
{ /* Inline file#Path#last_error= (self,((val*)NULL)) on <self:Path> */
self->attrs[COLOR_core__file__Path___last_error].val = ((val*)NULL); /* _last_error on <self:Path> */
RET_LABEL35:(void)0;
}
}
var36 = NEW_core__FileStat(&type_core__FileStat);
{
((void(*)(val* self, val* p0))(var36->class->vft[COLOR_core__file__FileStat__stat_61d]))(var36, var_stat); /* stat= on <var36:FileStat>*/
}
{
((void(*)(val* self))(var36->class->vft[COLOR_core__kernel__Object__init]))(var36); /* init on <var36:FileStat>*/
}
var = var36;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method file#Path#delete for (self: Path) */
void core___core__Path___delete(val* self) {
val* var /* : String */;
val* var2 /* : String */;
char* var3 /* : CString */;
short int var4 /* : Bool */;
short int var6 /* : Bool */;
short int var_res /* var res: Bool */;
short int var7 /* : Bool */;
val* var8 /* : IOError */;
val* var9 /* : NativeArray[String] */;
static val* varonce;
static val* varonce10;
val* var11 /* : String */;
char* var12 /* : CString */;
val* var13 /* : String */;
static val* varonce14;
val* var15 /* : String */;
char* var16 /* : CString */;
val* var17 /* : String */;
val* var18 /* : String */;
val* var20 /* : String */;
val* var21 /* : Sys */;
val* var23 /* : Sys */;
long var24 /* : Int */;
long var26 /* : Int */;
val* var27 /* : String */;
val* var28 /* : String */;
{
{ /* Inline file#Path#path (self) on <self:Path> */
var2 = self->attrs[COLOR_core__file__Path___path].val; /* _path on <self:Path> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _path");
PRINT_ERROR(" (%s:%d)\n", FILE_core__file, 383);
fatal_exit(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
var3 = ((char*(*)(val* self))(var->class->vft[COLOR_core__abstract_text__Text__to_cstring]))(var); /* to_cstring on <var:String>*/
}
{
{ /* Inline file#CString#file_delete (var3) on <var3:CString> */
var6 = file___CString_file_delete___impl(var3);
var4 = var6;
goto RET_LABEL5;
RET_LABEL5:(void)0;
}
}
var_res = var4;
var7 = !var_res;
if (var7){
var8 = NEW_core__IOError(&type_core__IOError);
if (unlikely(varonce==NULL)) {
var9 = NEW_core__NativeArray(4l, &type_core__NativeArray__core__String);
if (likely(varonce10!=NULL)) {
var11 = varonce10;
} else {
var12 = "Cannot delete `";
var13 = core__abstract_text___CString___to_s_full(var12, 15l, 15l);
var11 = var13;
varonce10 = var11;
}
((struct instance_core__NativeArray*)var9)->values[0]=var11;
if (likely(varonce14!=NULL)) {
var15 = varonce14;
} else {
var16 = "`: ";
var17 = core__abstract_text___CString___to_s_full(var16, 3l, 3l);
var15 = var17;
varonce14 = var15;
}
((struct instance_core__NativeArray*)var9)->values[2]=var15;
} else {
var9 = varonce;
varonce = NULL;
}
{
{ /* Inline file#Path#path (self) on <self:Path> */
var20 = self->attrs[COLOR_core__file__Path___path].val; /* _path on <self:Path> */
if (unlikely(var20 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _path");
PRINT_ERROR(" (%s:%d)\n", FILE_core__file, 383);
fatal_exit(1);
}
var18 = var20;
RET_LABEL19:(void)0;
}
}
((struct instance_core__NativeArray*)var9)->values[1]=var18;
{
{ /* Inline kernel#Object#sys (self) on <self:Path> */
var23 = glob_sys;
var21 = var23;
goto RET_LABEL22;
RET_LABEL22:(void)0;
}
}
{
{ /* Inline kernel#Sys#errno (var21) on <var21:Sys> */
struct nitni_instance* var_for_c_0;
var_for_c_0 = nit_alloc(sizeof(struct nitni_instance));
var_for_c_0->value = var21;
var26 = kernel___Sys_errno___impl(var_for_c_0);
var24 = var26;
goto RET_LABEL25;
RET_LABEL25:(void)0;
}
}
{
var27 = core__abstract_text___Int___strerror(var24);
}
((struct instance_core__NativeArray*)var9)->values[3]=var27;
{
var28 = ((val*(*)(val* self))(var9->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var9); /* native_to_s on <var9:NativeArray[String]>*/
}
varonce = var9;
{
((void(*)(val* self, val* p0))(var8->class->vft[COLOR_core__error__Error__message_61d]))(var8, var28); /* message= on <var8:IOError>*/
}
{
((void(*)(val* self))(var8->class->vft[COLOR_core__kernel__Object__init]))(var8); /* init on <var8:IOError>*/
}
{
{ /* Inline file#Path#last_error= (self,var8) on <self:Path> */
self->attrs[COLOR_core__file__Path___last_error].val = var8; /* _last_error on <self:Path> */
RET_LABEL29:(void)0;
}
}
} else {
{
{ /* Inline file#Path#last_error= (self,((val*)NULL)) on <self:Path> */
self->attrs[COLOR_core__file__Path___last_error].val = ((val*)NULL); /* _last_error on <self:Path> */
RET_LABEL30:(void)0;
}
}
}
RET_LABEL:;
}
/* method file#Path#copy for (self: Path, Path) */
void core___core__Path___copy(val* self, val* p0) {
val* var_dest /* var dest: Path */;
val* var /* : FileReader */;
val* var_input /* var input: FileReader */;
val* var2 /* : FileWriter */;
val* var_output /* var output: FileWriter */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
val* var5 /* : Bytes */;
val* var_buffer /* var buffer: Bytes */;
val* var6 /* : nullable IOError */;
val* var7 /* : nullable IOError */;
val* var9 /* : nullable IOError */;
val* var10 /* : nullable IOError */;
val* var12 /* : nullable IOError */;
var_dest = p0;
{
{ /* Inline file#Path#last_error= (self,((val*)NULL)) on <self:Path> */
self->attrs[COLOR_core__file__Path___last_error].val = ((val*)NULL); /* _last_error on <self:Path> */
RET_LABEL1:(void)0;
}
}
{
var = core___core__Path___open_ro(self);
}
var_input = var;
{
var2 = core___core__Path___open_wo(var_dest);
}
var_output = var2;
for(;;) {
{
var3 = core___core__BufferedReader___Reader__eof(var_input);
}
var4 = !var3;
if (var4){
{
var5 = core___core__BufferedReader___Reader__read_bytes(var_input, 1024l);
}
var_buffer = var5;
{
core___core__FileWriter___core__stream__Writer__write_bytes(var_output, var_buffer); /* Direct call file#FileWriter#write_bytes on <var_output:FileWriter>*/
}
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
core___core__FileReader___core__stream__Stream__close(var_input); /* Direct call file#FileReader#close on <var_input:FileReader>*/
}
{
core___core__FileWriter___core__stream__Stream__close(var_output); /* Direct call file#FileWriter#close on <var_output:FileWriter>*/
}
{
{ /* Inline stream#Stream#last_error (var_input) on <var_input:FileReader> */
var9 = var_input->attrs[COLOR_core__stream__Stream___last_error].val; /* _last_error on <var_input:FileReader> */
var7 = var9;
RET_LABEL8:(void)0;
}
}
if (var7!=NULL) {
var6 = var7;
} else {
{
{ /* Inline stream#Stream#last_error (var_output) on <var_output:FileWriter> */
var12 = var_output->attrs[COLOR_core__stream__Stream___last_error].val; /* _last_error on <var_output:FileWriter> */
var10 = var12;
RET_LABEL11:(void)0;
}
}
var6 = var10;
}
{
{ /* Inline file#Path#last_error= (self,var6) on <self:Path> */
self->attrs[COLOR_core__file__Path___last_error].val = var6; /* _last_error on <self:Path> */
RET_LABEL13:(void)0;
}
}
RET_LABEL:;
}
/* method file#Path#open_ro for (self: Path): FileReader */
val* core___core__Path___open_ro(val* self) {
val* var /* : FileReader */;
val* var1 /* : FileReader */;
val* var2 /* : String */;
val* var4 /* : String */;
val* var_res /* var res: FileReader */;
val* var5 /* : nullable IOError */;
val* var7 /* : nullable IOError */;
var1 = NEW_core__FileReader(&type_core__FileReader);
{
{ /* Inline file#Path#path (self) on <self:Path> */
var4 = self->attrs[COLOR_core__file__Path___path].val; /* _path on <self:Path> */
if (unlikely(var4 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _path");
PRINT_ERROR(" (%s:%d)\n", FILE_core__file, 383);
fatal_exit(1);
}
var2 = var4;
RET_LABEL3:(void)0;
}
}
{
core___core__FileReader___open(var1, var2); /* Direct call file#FileReader#open on <var1:FileReader>*/
}
var_res = var1;
{
{ /* Inline stream#Stream#last_error (var_res) on <var_res:FileReader> */
var7 = var_res->attrs[COLOR_core__stream__Stream___last_error].val; /* _last_error on <var_res:FileReader> */
var5 = var7;
RET_LABEL6:(void)0;
}
}
{
{ /* Inline file#Path#last_error= (self,var5) on <self:Path> */
self->attrs[COLOR_core__file__Path___last_error].val = var5; /* _last_error on <self:Path> */
RET_LABEL8:(void)0;
}
}
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method file#Path#open_wo for (self: Path): FileWriter */
val* core___core__Path___open_wo(val* self) {
val* var /* : FileWriter */;
val* var1 /* : FileWriter */;
val* var2 /* : String */;
val* var4 /* : String */;
val* var_res /* var res: FileWriter */;
val* var5 /* : nullable IOError */;
val* var7 /* : nullable IOError */;
var1 = NEW_core__FileWriter(&type_core__FileWriter);
{
{ /* Inline file#Path#path (self) on <self:Path> */
var4 = self->attrs[COLOR_core__file__Path___path].val; /* _path on <self:Path> */
if (unlikely(var4 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _path");
PRINT_ERROR(" (%s:%d)\n", FILE_core__file, 383);
fatal_exit(1);
}
var2 = var4;
RET_LABEL3:(void)0;
}
}
{
core___core__FileWriter___open(var1, var2); /* Direct call file#FileWriter#open on <var1:FileWriter>*/
}
var_res = var1;
{
{ /* Inline stream#Stream#last_error (var_res) on <var_res:FileWriter> */
var7 = var_res->attrs[COLOR_core__stream__Stream___last_error].val; /* _last_error on <var_res:FileWriter> */
var5 = var7;
RET_LABEL6:(void)0;
}
}
{
{ /* Inline file#Path#last_error= (self,var5) on <self:Path> */
self->attrs[COLOR_core__file__Path___last_error].val = var5; /* _last_error on <self:Path> */
RET_LABEL8:(void)0;
}
}
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method file#Path#/ for (self: Path, String): Path */
val* core___core__Path____47d(val* self, val* p0) {
val* var /* : Path */;
val* var_subpath /* var subpath: String */;
val* var1 /* : Path */;
val* var2 /* : String */;
val* var4 /* : String */;
val* var5 /* : String */;
var_subpath = p0;
var1 = NEW_core__Path(&type_core__Path);
{
{ /* Inline file#Path#path (self) on <self:Path> */
var4 = self->attrs[COLOR_core__file__Path___path].val; /* _path on <self:Path> */
if (unlikely(var4 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _path");
PRINT_ERROR(" (%s:%d)\n", FILE_core__file, 383);
fatal_exit(1);
}
var2 = var4;
RET_LABEL3:(void)0;
}
}
{
var5 = core__file___String____47d(var2, var_subpath);
}
{
((void(*)(val* self, val* p0))(var1->class->vft[COLOR_core__file__Path__path_61d]))(var1, var5); /* path= on <var1:Path>*/
}
{
((void(*)(val* self))(var1->class->vft[COLOR_core__kernel__Object__init]))(var1); /* init on <var1:Path>*/
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method file#Path#files for (self: Path): Array[Path] */
val* core___core__Path___files(val* self) {
val* var /* : Array[Path] */;
val* var2 /* : Array[Path] */;
val* var_res /* var res: Array[Path] */;
val* var3 /* : NativeDir */;
val* var4 /* : String */;
val* var6 /* : String */;
char* var7 /* : CString */;
val* var8 /* : NativeDir */;
val* var_d /* var d: NativeDir */;
short int var9 /* : Bool */;
short int var11 /* : Bool */;
void* var12 /* : Pointer for extern */;
val* var13 /* : IOError */;
val* var14 /* : NativeArray[String] */;
static val* varonce;
static val* varonce15;
val* var16 /* : String */;
char* var17 /* : CString */;
val* var18 /* : String */;
static val* varonce19;
val* var20 /* : String */;
char* var21 /* : CString */;
val* var22 /* : String */;
val* var23 /* : String */;
val* var25 /* : String */;
val* var26 /* : Sys */;
val* var28 /* : Sys */;
long var29 /* : Int */;
long var31 /* : Int */;
val* var32 /* : String */;
val* var33 /* : String */;
char* var35 /* : CString */;
char* var37 /* : CString */;
void* var38 /* : NativeDir for extern */;
char* var_de /* var de: CString */;
short int var39 /* : Bool */;
short int var41 /* : Bool */;
val* var42 /* : Pointer */;
void* var43 /* : Pointer for extern */;
val* var44 /* : String */;
val* var_name /* var name: String */;
short int var45 /* : Bool */;
static val* varonce46;
val* var47 /* : String */;
char* var48 /* : CString */;
val* var49 /* : String */;
short int var50 /* : Bool */;
short int var_ /* var : Bool */;
static val* varonce51;
val* var52 /* : String */;
char* var53 /* : CString */;
val* var54 /* : String */;
short int var55 /* : Bool */;
val* var57 /* : Path */;
void* var59 /* : NativeDir for extern */;
{
{ /* Inline file#Path#last_error= (self,((val*)NULL)) on <self:Path> */
self->attrs[COLOR_core__file__Path___last_error].val = ((val*)NULL); /* _last_error on <self:Path> */
RET_LABEL1:(void)0;
}
}
var2 = NEW_core__Array(&type_core__Array__core__Path);
{
core___core__Array___core__kernel__Object__init(var2); /* Direct call array#Array#init on <var2:Array[Path]>*/
}
var_res = var2;
var3 = NEW_core__file__NativeDir(&type_core__file__NativeDir);
{
{ /* Inline file#Path#path (self) on <self:Path> */
var6 = self->attrs[COLOR_core__file__Path___path].val; /* _path on <self:Path> */
if (unlikely(var6 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _path");
PRINT_ERROR(" (%s:%d)\n", FILE_core__file, 383);
fatal_exit(1);
}
var4 = var6;
RET_LABEL5:(void)0;
}
}
{
var7 = ((char*(*)(val* self))(var4->class->vft[COLOR_core__abstract_text__Text__to_cstring]))(var4); /* to_cstring on <var4:String>*/
}
{
var8 = core__file___core__file__NativeDir___opendir(var3, var7);
}
var_d = var8;
{
{ /* Inline kernel#Pointer#address_is_null (var_d) on <var_d:NativeDir> */
var12 = ((struct instance_core__Pointer*)var_d)->value; /* unboxing NativeDir */
var11 = kernel___Pointer_address_is_null___impl(var12);
var9 = var11;
goto RET_LABEL10;
RET_LABEL10:(void)0;
}
}
if (var9){
var13 = NEW_core__IOError(&type_core__IOError);
if (unlikely(varonce==NULL)) {
var14 = NEW_core__NativeArray(4l, &type_core__NativeArray__core__String);
if (likely(varonce15!=NULL)) {
var16 = varonce15;
} else {
var17 = "Cannot list directory `";
var18 = core__abstract_text___CString___to_s_full(var17, 23l, 23l);
var16 = var18;
varonce15 = var16;
}
((struct instance_core__NativeArray*)var14)->values[0]=var16;
if (likely(varonce19!=NULL)) {
var20 = varonce19;
} else {
var21 = "`: ";
var22 = core__abstract_text___CString___to_s_full(var21, 3l, 3l);
var20 = var22;
varonce19 = var20;
}
((struct instance_core__NativeArray*)var14)->values[2]=var20;
} else {
var14 = varonce;
varonce = NULL;
}
{
{ /* Inline file#Path#path (self) on <self:Path> */
var25 = self->attrs[COLOR_core__file__Path___path].val; /* _path on <self:Path> */
if (unlikely(var25 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _path");
PRINT_ERROR(" (%s:%d)\n", FILE_core__file, 383);
fatal_exit(1);
}
var23 = var25;
RET_LABEL24:(void)0;
}
}
((struct instance_core__NativeArray*)var14)->values[1]=var23;
{
{ /* Inline kernel#Object#sys (self) on <self:Path> */
var28 = glob_sys;
var26 = var28;
goto RET_LABEL27;
RET_LABEL27:(void)0;
}
}
{
{ /* Inline kernel#Sys#errno (var26) on <var26:Sys> */
struct nitni_instance* var_for_c_0;
var_for_c_0 = nit_alloc(sizeof(struct nitni_instance));
var_for_c_0->value = var26;
var31 = kernel___Sys_errno___impl(var_for_c_0);
var29 = var31;
goto RET_LABEL30;
RET_LABEL30:(void)0;
}
}
{
var32 = core__abstract_text___Int___strerror(var29);
}
((struct instance_core__NativeArray*)var14)->values[3]=var32;
{
var33 = ((val*(*)(val* self))(var14->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var14); /* native_to_s on <var14:NativeArray[String]>*/
}
varonce = var14;
{
((void(*)(val* self, val* p0))(var13->class->vft[COLOR_core__error__Error__message_61d]))(var13, var33); /* message= on <var13:IOError>*/
}
{
((void(*)(val* self))(var13->class->vft[COLOR_core__kernel__Object__init]))(var13); /* init on <var13:IOError>*/
}
{
{ /* Inline file#Path#last_error= (self,var13) on <self:Path> */
self->attrs[COLOR_core__file__Path___last_error].val = var13; /* _last_error on <self:Path> */
RET_LABEL34:(void)0;
}
}
var = var_res;
goto RET_LABEL;
} else {
}
for(;;) {
{
{ /* Inline file#NativeDir#readdir (var_d) on <var_d:NativeDir> */
var38 = ((struct instance_core__Pointer*)var_d)->value; /* unboxing NativeDir */
var37 = file___NativeDir_readdir___impl(var38);
var35 = var37;
goto RET_LABEL36;
RET_LABEL36:(void)0;
}
}
var_de = var35;
{
{ /* Inline kernel#Pointer#address_is_null (var_de) on <var_de:CString> */
var42 = BOX_core__Pointer(var_de); /* autobox from CString to Pointer */
var43 = ((struct instance_core__Pointer*)var42)->value; /* unboxing Pointer */
var41 = kernel___Pointer_address_is_null___impl(var43);
var39 = var41;
goto RET_LABEL40;
RET_LABEL40:(void)0;
}
}
if (var39){
goto BREAK_label;
} else {
}
{
var44 = core__flat___CString___core__abstract_text__Object__to_s(var_de);
}
var_name = var44;
if (likely(varonce46!=NULL)) {
var47 = varonce46;
} else {
var48 = ".";
var49 = core__abstract_text___CString___to_s_full(var48, 1l, 1l);
var47 = var49;
varonce46 = var47;
}
{
var50 = ((short int(*)(val* self, val* p0))(var_name->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_name, var47); /* == on <var_name:String>*/
}
var_ = var50;
if (var50){
var45 = var_;
} else {
if (likely(varonce51!=NULL)) {
var52 = varonce51;
} else {
var53 = "..";
var54 = core__abstract_text___CString___to_s_full(var53, 2l, 2l);
var52 = var54;
varonce51 = var52;
}
{
var55 = ((short int(*)(val* self, val* p0))(var_name->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_name, var52); /* == on <var_name:String>*/
}
var45 = var55;
}
if (var45){
goto BREAK_label56;
} else {
}
{
var57 = core___core__Path____47d(self, var_name);
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_res, var57); /* Direct call array#Array#add on <var_res:Array[Path]>*/
}
BREAK_label56: (void)0;
}
BREAK_label: (void)0;
{
{ /* Inline file#NativeDir#closedir (var_d) on <var_d:NativeDir> */
var59 = ((struct instance_core__Pointer*)var_d)->value; /* unboxing NativeDir */
file___NativeDir_closedir___impl(var59);
RET_LABEL58:(void)0;
}
}
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method file#Path#rmdir for (self: Path) */
void core___core__Path___rmdir(val* self) {
val* var_first_error /* var first_error: nullable Object */;
val* var /* : Array[Path] */;
val* var_ /* var : Array[Path] */;
val* var1 /* : IndexedIterator[nullable Object] */;
val* var_2 /* var : IndexedIterator[Path] */;
short int var3 /* : Bool */;
val* var4 /* : nullable Object */;
val* var_file /* var file: Path */;
val* var5 /* : nullable FileStat */;
val* var_stat /* var stat: nullable FileStat */;
short int var6 /* : Bool */;
short int var7 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var9 /* : Bool */;
short int var11 /* : Bool */;
short int var12 /* : Bool */;
short int var13 /* : Bool */;
short int var15 /* : Bool */;
short int var17 /* : Bool */;
val* var18 /* : nullable IOError */;
val* var20 /* : nullable IOError */;
short int var22 /* : Bool */;
short int var23 /* : Bool */;
short int var24 /* : Bool */;
short int var26 /* : Bool */;
short int var28 /* : Bool */;
val* var29 /* : nullable IOError */;
val* var31 /* : nullable IOError */;
short int var32 /* : Bool */;
short int var33 /* : Bool */;
short int var35 /* : Bool */;
short int var37 /* : Bool */;
val* var38 /* : String */;
val* var40 /* : String */;
char* var41 /* : CString */;
short int var42 /* : Bool */;
short int var44 /* : Bool */;
short int var45 /* : Bool */;
val* var46 /* : IOError */;
val* var47 /* : NativeArray[String] */;
static val* varonce;
static val* varonce48;
val* var49 /* : String */;
char* var50 /* : CString */;
val* var51 /* : String */;
static val* varonce52;
val* var53 /* : String */;
char* var54 /* : CString */;
val* var55 /* : String */;
val* var56 /* : String */;
val* var57 /* : Sys */;
val* var59 /* : Sys */;
long var60 /* : Int */;
long var62 /* : Int */;
val* var63 /* : String */;
val* var64 /* : String */;
var_first_error = ((val*)NULL);
{
var = core___core__Path___files(self);
}
var_ = var;
{
var1 = core___core__AbstractArrayRead___core__abstract_collection__Collection__iterator(var_);
}
var_2 = var1;
for(;;) {
{
var3 = ((short int(*)(val* self))((((long)var_2&3)?class_info[((long)var_2&3)]:var_2->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_2); /* is_ok on <var_2:IndexedIterator[Path]>*/
}
if (var3){
} else {
goto BREAK_label;
}
{
var4 = ((val*(*)(val* self))((((long)var_2&3)?class_info[((long)var_2&3)]:var_2->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_2); /* item on <var_2:IndexedIterator[Path]>*/
}
var_file = var4;
{
var5 = core___core__Path___link_stat(var_file);
}
var_stat = var5;
if (var_stat == NULL) {
var6 = 1; /* is null */
} else {
var6 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_stat,((val*)NULL)) on <var_stat:nullable FileStat> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_stat,var_other) on <var_stat:nullable FileStat(FileStat)> */
var11 = var_stat == var_other;
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
if (var6){
if (var_first_error == NULL) {
var12 = 1; /* is null */
} else {
var12 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_first_error,((val*)NULL)) on <var_first_error:nullable Object(nullable IOError)> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_first_error,var_other) on <var_first_error:nullable IOError(IOError)> */
var17 = var_first_error == var_other;
var15 = var17;
goto RET_LABEL16;
RET_LABEL16:(void)0;
}
}
var13 = var15;
goto RET_LABEL14;
RET_LABEL14:(void)0;
}
var12 = var13;
}
if (var12){
{
{ /* Inline file#Path#last_error (var_file) on <var_file:Path> */
var20 = var_file->attrs[COLOR_core__file__Path___last_error].val; /* _last_error on <var_file:Path> */
var18 = var20;
RET_LABEL19:(void)0;
}
}
var_first_error = var18;
} else {
}
goto BREAK_label21;
} else {
}
{
var22 = core___core__FileStat___is_dir(var_stat);
}
if (var22){
{
core___core__Path___rmdir(var_file); /* Direct call file#Path#rmdir on <var_file:Path>*/
}
} else {
{
core___core__Path___delete(var_file); /* Direct call file#Path#delete on <var_file:Path>*/
}
}
if (var_first_error == NULL) {
var23 = 1; /* is null */
} else {
var23 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_first_error,((val*)NULL)) on <var_first_error:nullable Object(nullable IOError)> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_first_error,var_other) on <var_first_error:nullable IOError(IOError)> */
var28 = var_first_error == var_other;
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
{
{ /* Inline file#Path#last_error (var_file) on <var_file:Path> */
var31 = var_file->attrs[COLOR_core__file__Path___last_error].val; /* _last_error on <var_file:Path> */
var29 = var31;
RET_LABEL30:(void)0;
}
}
var_first_error = var29;
} else {
}
BREAK_label21: (void)0;
{
((void(*)(val* self))((((long)var_2&3)?class_info[((long)var_2&3)]:var_2->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_2); /* next on <var_2:IndexedIterator[Path]>*/
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_2&3)?class_info[((long)var_2&3)]:var_2->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_2); /* finish on <var_2:IndexedIterator[Path]>*/
}
if (var_first_error == NULL) {
var32 = 1; /* is null */
} else {
var32 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_first_error,((val*)NULL)) on <var_first_error:nullable Object(nullable IOError)> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_first_error,var_other) on <var_first_error:nullable IOError(IOError)> */
var37 = var_first_error == var_other;
var35 = var37;
goto RET_LABEL36;
RET_LABEL36:(void)0;
}
}
var33 = var35;
goto RET_LABEL34;
RET_LABEL34:(void)0;
}
var32 = var33;
}
if (var32){
{
{ /* Inline file#Path#path (self) on <self:Path> */
var40 = self->attrs[COLOR_core__file__Path___path].val; /* _path on <self:Path> */
if (unlikely(var40 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _path");
PRINT_ERROR(" (%s:%d)\n", FILE_core__file, 383);
fatal_exit(1);
}
var38 = var40;
RET_LABEL39:(void)0;
}
}
{
var41 = ((char*(*)(val* self))(var38->class->vft[COLOR_core__abstract_text__Text__to_cstring]))(var38); /* to_cstring on <var38:String>*/
}
{
{ /* Inline file#CString#rmdir (var41) on <var41:CString> */
var44 = file___CString_rmdir___impl(var41);
var42 = var44;
goto RET_LABEL43;
RET_LABEL43:(void)0;
}
}
var45 = !var42;
if (var45){
var46 = NEW_core__IOError(&type_core__IOError);
if (unlikely(varonce==NULL)) {
var47 = NEW_core__NativeArray(4l, &type_core__NativeArray__core__String);
if (likely(varonce48!=NULL)) {
var49 = varonce48;
} else {
var50 = "Cannot remove `";
var51 = core__abstract_text___CString___to_s_full(var50, 15l, 15l);
var49 = var51;
varonce48 = var49;
}
((struct instance_core__NativeArray*)var47)->values[0]=var49;
if (likely(varonce52!=NULL)) {
var53 = varonce52;
} else {
var54 = "`: ";
var55 = core__abstract_text___CString___to_s_full(var54, 3l, 3l);
var53 = var55;
varonce52 = var53;
}
((struct instance_core__NativeArray*)var47)->values[2]=var53;
} else {
var47 = varonce;
varonce = NULL;
}
{
var56 = ((val*(*)(val* self))(self->class->vft[COLOR_core__abstract_text__Object__to_s]))(self); /* to_s on <self:Path>*/
}
((struct instance_core__NativeArray*)var47)->values[1]=var56;
{
{ /* Inline kernel#Object#sys (self) on <self:Path> */
var59 = glob_sys;
var57 = var59;
goto RET_LABEL58;
RET_LABEL58:(void)0;
}
}
{
{ /* Inline kernel#Sys#errno (var57) on <var57:Sys> */
struct nitni_instance* var_for_c_0;
var_for_c_0 = nit_alloc(sizeof(struct nitni_instance));
var_for_c_0->value = var57;
var62 = kernel___Sys_errno___impl(var_for_c_0);
var60 = var62;
goto RET_LABEL61;
RET_LABEL61:(void)0;
}
}
{
var63 = core__abstract_text___Int___strerror(var60);
}
((struct instance_core__NativeArray*)var47)->values[3]=var63;
{
var64 = ((val*(*)(val* self))(var47->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var47); /* native_to_s on <var47:NativeArray[String]>*/
}
varonce = var47;
{
((void(*)(val* self, val* p0))(var46->class->vft[COLOR_core__error__Error__message_61d]))(var46, var64); /* message= on <var46:IOError>*/
}
{
((void(*)(val* self))(var46->class->vft[COLOR_core__kernel__Object__init]))(var46); /* init on <var46:IOError>*/
}
var_first_error = var46;
} else {
}
} else {
}
{
{ /* Inline file#Path#last_error= (self,var_first_error) on <self:Path> */
self->attrs[COLOR_core__file__Path___last_error].val = var_first_error; /* _last_error on <self:Path> */
RET_LABEL65:(void)0;
}
}
RET_LABEL:;
}
/* method file#Path#== for (self: Path, nullable Object): Bool */
short int core___core__Path___core__kernel__Object___61d_61d(val* self, val* p0) {
short int var /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
int cltype;
int idtype;
short int var_ /* var : Bool */;
val* var3 /* : Path */;
val* var4 /* : String */;
val* var6 /* : String */;
val* var7 /* : Path */;
val* var8 /* : String */;
val* var10 /* : String */;
short int var11 /* : Bool */;
var_other = p0;
/* <var_other:nullable Object> isa Path */
cltype = type_core__Path.color;
idtype = type_core__Path.id;
if(var_other == NULL) {
var2 = 0;
} else {
if(cltype >= (((long)var_other&3)?type_info[((long)var_other&3)]:var_other->type)->table_size) {
var2 = 0;
} else {
var2 = (((long)var_other&3)?type_info[((long)var_other&3)]:var_other->type)->type_table[cltype] == idtype;
}
}
var_ = var2;
if (var2){
{
var3 = core___core__Path___simplified(self);
}
{
{ /* Inline file#Path#path (var3) on <var3:Path> */
var6 = var3->attrs[COLOR_core__file__Path___path].val; /* _path on <var3:Path> */
if (unlikely(var6 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _path");
PRINT_ERROR(" (%s:%d)\n", FILE_core__file, 383);
fatal_exit(1);
}
var4 = var6;
RET_LABEL5:(void)0;
}
}
{
var7 = core___core__Path___simplified(var_other);
}
{
{ /* Inline file#Path#path (var7) on <var7:Path> */
var10 = var7->attrs[COLOR_core__file__Path___path].val; /* _path on <var7:Path> */
if (unlikely(var10 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _path");
PRINT_ERROR(" (%s:%d)\n", FILE_core__file, 383);
fatal_exit(1);
}
var8 = var10;
RET_LABEL9:(void)0;
}
}
{
var11 = ((short int(*)(val* self, val* p0))(var4->class->vft[COLOR_core__kernel__Object___61d_61d]))(var4, var8); /* == on <var4:String>*/
}
var1 = var11;
} else {
var1 = var_;
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method file#Path#hash for (self: Path): Int */
long core___core__Path___core__kernel__Object__hash(val* self) {
long var /* : Int */;
val* var1 /* : Path */;
val* var2 /* : String */;
val* var4 /* : String */;
long var5 /* : Int */;
{
var1 = core___core__Path___simplified(self);
}
{
{ /* Inline file#Path#path (var1) on <var1:Path> */
var4 = var1->attrs[COLOR_core__file__Path___path].val; /* _path on <var1:Path> */
if (unlikely(var4 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _path");
PRINT_ERROR(" (%s:%d)\n", FILE_core__file, 383);
fatal_exit(1);
}
var2 = var4;
RET_LABEL3:(void)0;
}
}
{
var5 = ((long(*)(val* self))(var2->class->vft[COLOR_core__kernel__Object__hash]))(var2); /* hash on <var2:String>*/
}
var = var5;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method file#Path#init for (self: Path) */
void core___core__Path___core__kernel__Object__init(val* self) {
{
((void(*)(val* self))(self->class->vft[COLOR_core___core__Path___core__kernel__Object__init]))(self); /* init on <self:Path>*/
}
RET_LABEL:;
}
/* method file#FileStat#stat for (self: FileStat): NativeFileStat */
val* core___core__FileStat___stat(val* self) {
val* var /* : NativeFileStat */;
val* var1 /* : NativeFileStat */;
var1 = self->attrs[COLOR_core__file__FileStat___stat].val; /* _stat on <self:FileStat> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _stat");
PRINT_ERROR(" (%s:%d)\n", FILE_core__file, 769);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method file#FileStat#stat= for (self: FileStat, NativeFileStat) */
void core___core__FileStat___stat_61d(val* self, val* p0) {
self->attrs[COLOR_core__file__FileStat___stat].val = p0; /* _stat on <self:FileStat> */
RET_LABEL:;
}
/* method file#FileStat#finalized for (self: FileStat): Bool */
short int core___core__FileStat___finalized(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = self->attrs[COLOR_core__file__FileStat___finalized].s; /* _finalized on <self:FileStat> */
var = var1;
RET_LABEL:;
return var;
}
/* method file#FileStat#finalized= for (self: FileStat, Bool) */
void core___core__FileStat___finalized_61d(val* self, short int p0) {
self->attrs[COLOR_core__file__FileStat___finalized].s = p0; /* _finalized on <self:FileStat> */
RET_LABEL:;
}
/* method file#FileStat#finalize for (self: FileStat) */
void core___core__FileStat___core__gc__Finalizable__finalize(val* self) {
short int var /* : Bool */;
short int var2 /* : Bool */;
short int var3 /* : Bool */;
val* var4 /* : NativeFileStat */;
val* var6 /* : NativeFileStat */;
void* var8 /* : Pointer for extern */;
{
{ /* Inline file#FileStat#finalized (self) on <self:FileStat> */
var2 = self->attrs[COLOR_core__file__FileStat___finalized].s; /* _finalized on <self:FileStat> */
var = var2;
RET_LABEL1:(void)0;
}
}
var3 = !var;
if (var3){
{
{ /* Inline file#FileStat#stat (self) on <self:FileStat> */
var6 = self->attrs[COLOR_core__file__FileStat___stat].val; /* _stat on <self:FileStat> */
if (unlikely(var6 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _stat");
PRINT_ERROR(" (%s:%d)\n", FILE_core__file, 769);
fatal_exit(1);
}
var4 = var6;
RET_LABEL5:(void)0;
}
}
{
{ /* Inline kernel#Pointer#free (var4) on <var4:NativeFileStat> */
var8 = ((struct instance_core__Pointer*)var4)->value; /* unboxing NativeFileStat */
kernel___Pointer_free___impl(var8);
RET_LABEL7:(void)0;
}
}
{
{ /* Inline file#FileStat#finalized= (self,1) on <self:FileStat> */
self->attrs[COLOR_core__file__FileStat___finalized].s = 1; /* _finalized on <self:FileStat> */
RET_LABEL9:(void)0;
}
}
} else {
}
RET_LABEL:;
}
/* method file#FileStat#is_dir for (self: FileStat): Bool */
short int core___core__FileStat___is_dir(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
val* var5 /* : NativeFileStat */;
val* var7 /* : NativeFileStat */;
short int var8 /* : Bool */;
short int var10 /* : Bool */;
void* var11 /* : NativeFileStat for extern */;
{
{ /* Inline file#FileStat#finalized (self) on <self:FileStat> */
var3 = self->attrs[COLOR_core__file__FileStat___finalized].s; /* _finalized on <self:FileStat> */
var1 = var3;
RET_LABEL2:(void)0;
}
}
var4 = !var1;
if (unlikely(!var4)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_core__file, 829);
fatal_exit(1);
}
{
{ /* Inline file#FileStat#stat (self) on <self:FileStat> */
var7 = self->attrs[COLOR_core__file__FileStat___stat].val; /* _stat on <self:FileStat> */
if (unlikely(var7 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _stat");
PRINT_ERROR(" (%s:%d)\n", FILE_core__file, 769);
fatal_exit(1);
}
var5 = var7;
RET_LABEL6:(void)0;
}
}
{
{ /* Inline file#NativeFileStat#is_dir (var5) on <var5:NativeFileStat> */
var11 = ((struct instance_core__Pointer*)var5)->value; /* unboxing NativeFileStat */
var10 = file___NativeFileStat_is_dir___impl(var11);
var8 = var10;
goto RET_LABEL9;
RET_LABEL9:(void)0;
}
}
var = var8;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method file#FileStat#init for (self: FileStat) */
void core___core__FileStat___core__kernel__Object__init(val* self) {
{
((void(*)(val* self))(self->class->vft[COLOR_core___core__FileStat___core__kernel__Object__init]))(self); /* init on <self:FileStat>*/
}
RET_LABEL:;
}
/* method file#Text#to_path for (self: Text): Path */
val* core__file___Text___to_path(val* self) {
val* var /* : Path */;
val* var1 /* : Path */;
val* var2 /* : String */;
var1 = NEW_core__Path(&type_core__Path);
{
var2 = ((val*(*)(val* self))(self->class->vft[COLOR_core__abstract_text__Object__to_s]))(self); /* to_s on <self:Text>*/
}
{
((void(*)(val* self, val* p0))(var1->class->vft[COLOR_core__file__Path__path_61d]))(var1, var2); /* path= on <var1:Path>*/
}
{
((void(*)(val* self))(var1->class->vft[COLOR_core__kernel__Object__init]))(var1); /* init on <var1:Path>*/
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method file#Text#write_native_to for (self: Text, FileWriter) */
void core__file___Text___write_native_to(val* self, val* p0) {
val* var_s /* var s: FileWriter */;
val* var /* : Iterator[FlatText] */;
val* var_ /* var : Iterator[FlatText] */;
val* var1 /* : Iterator[nullable Object] */;
val* var_2 /* var : Iterator[FlatText] */;
short int var3 /* : Bool */;
val* var4 /* : nullable Object */;
val* var_i /* var i: FlatText */;
char* var5 /* : CString */;
long var6 /* : Int */;
long var8 /* : Int */;
var_s = p0;
{
var = ((val*(*)(val* self))(self->class->vft[COLOR_core__abstract_text__Text__substrings]))(self); /* substrings on <self:Text>*/
}
var_ = var;
{
var1 = ((val*(*)(val* self))((((long)var_&3)?class_info[((long)var_&3)]:var_->class)->vft[COLOR_core__abstract_collection__Iterator__iterator]))(var_); /* iterator on <var_:Iterator[FlatText]>*/
}
var_2 = var1;
for(;;) {
{
var3 = ((short int(*)(val* self))((((long)var_2&3)?class_info[((long)var_2&3)]:var_2->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_2); /* is_ok on <var_2:Iterator[FlatText]>*/
}
if (var3){
} else {
goto BREAK_label;
}
{
var4 = ((val*(*)(val* self))((((long)var_2&3)?class_info[((long)var_2&3)]:var_2->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_2); /* item on <var_2:Iterator[FlatText]>*/
}
var_i = var4;
{
var5 = ((char*(*)(val* self))(var_i->class->vft[COLOR_core__abstract_text__Text__to_cstring]))(var_i); /* to_cstring on <var_i:FlatText>*/
}
{
{ /* Inline abstract_text#FlatText#byte_length (var_i) on <var_i:FlatText> */
var8 = var_i->attrs[COLOR_core__abstract_text__FlatText___byte_length].l; /* _byte_length on <var_i:FlatText> */
var6 = var8;
RET_LABEL7:(void)0;
}
}
{
core___core__FileWriter___write_native(var_s, var5, 0l, var6); /* Direct call file#FileWriter#write_native on <var_s:FileWriter>*/
}
{
((void(*)(val* self))((((long)var_2&3)?class_info[((long)var_2&3)]:var_2->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_2); /* next on <var_2:Iterator[FlatText]>*/
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_2&3)?class_info[((long)var_2&3)]:var_2->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_2); /* finish on <var_2:Iterator[FlatText]>*/
}
RET_LABEL:;
}
/* method file#Text#file_exists for (self: Text): Bool */
short int core__file___Text___file_exists(val* self) {
short int var /* : Bool */;
char* var1 /* : CString */;
short int var2 /* : Bool */;
short int var4 /* : Bool */;
{
var1 = ((char*(*)(val* self))(self->class->vft[COLOR_core__abstract_text__Text__to_cstring]))(self); /* to_cstring on <self:Text>*/
}
{
{ /* Inline file#CString#file_exists (var1) on <var1:CString> */
var4 = file___CString_file_exists___impl(var1);
var2 = var4;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
}
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method file#String#file_stat for (self: String): nullable FileStat */
val* core__file___String___file_stat(val* self) {
val* var /* : nullable FileStat */;
char* var1 /* : CString */;
val* var2 /* : NativeFileStat */;
val* var4 /* : NativeFileStat */;
val* var5 /* : NativeFileStat */;
val* var_stat /* var stat: NativeFileStat */;
short int var6 /* : Bool */;
short int var8 /* : Bool */;
void* var9 /* : Pointer for extern */;
val* var10 /* : FileStat */;
{
var1 = ((char*(*)(val* self))(self->class->vft[COLOR_core__abstract_text__Text__to_cstring]))(self); /* to_cstring on <self:String>*/
}
{
{ /* Inline file#CString#file_stat (var1) on <var1:CString> */
var4 = file___CString_file_stat___impl(var1);
var5 = BOX_core__Pointer(var4); /* boxing NativeFileStat */
var5->type = &type_core__file__NativeFileStat;
var5->class = &class_core__file__NativeFileStat;
var2 = var5;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
}
var_stat = var2;
{
{ /* Inline kernel#Pointer#address_is_null (var_stat) on <var_stat:NativeFileStat> */
var9 = ((struct instance_core__Pointer*)var_stat)->value; /* unboxing NativeFileStat */
var8 = kernel___Pointer_address_is_null___impl(var9);
var6 = var8;
goto RET_LABEL7;
RET_LABEL7:(void)0;
}
}
if (var6){
var = ((val*)NULL);
goto RET_LABEL;
} else {
}
var10 = NEW_core__FileStat(&type_core__FileStat);
{
((void(*)(val* self, val* p0))(var10->class->vft[COLOR_core__file__FileStat__stat_61d]))(var10, var_stat); /* stat= on <var10:FileStat>*/
}
{
((void(*)(val* self))(var10->class->vft[COLOR_core__kernel__Object__init]))(var10); /* init on <var10:FileStat>*/
}
var = var10;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method file#String#file_copy_to for (self: String, String) */
void core__file___String___file_copy_to(val* self, val* p0) {
val* var_dest /* var dest: String */;
val* var /* : Path */;
val* var1 /* : Path */;
var_dest = p0;
{
var = core__file___Text___to_path(self);
}
{
var1 = core__file___Text___to_path(var_dest);
}
{
core___core__Path___copy(var, var1); /* Direct call file#Path#copy on <var:Path>*/
}
RET_LABEL:;
}
/* method file#String#strip_extension for (self: String, nullable String): String */
val* core__file___String___strip_extension(val* self, val* p0) {
val* var /* : String */;
val* var_extension /* var extension: nullable String */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var3 /* : nullable String */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
val* var6 /* : NativeArray[String] */;
static val* varonce;
static val* varonce7;
val* var8 /* : String */;
char* var9 /* : CString */;
val* var10 /* : String */;
val* var11 /* : String */;
short int var12 /* : Bool */;
long var13 /* : Int */;
long var14 /* : Int */;
long var15 /* : Int */;
short int var17 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var18 /* : Int */;
val* var19 /* : Text */;
var_extension = p0;
if (var_extension == NULL) {
var1 = 1; /* is null */
} else {
var1 = 0; /* arg is null but recv is not */
}
if (0) {
var2 = ((short int(*)(val* self, val* p0))(var_extension->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_extension, ((val*)NULL)); /* == on <var_extension:nullable String>*/
var1 = var2;
}
if (var1){
{
var3 = ((val*(*)(val* self))(self->class->vft[COLOR_core__file__String__file_extension]))(self); /* file_extension on <self:String>*/
}
var_extension = var3;
if (var_extension == NULL) {
var4 = 1; /* is null */
} else {
var4 = 0; /* arg is null but recv is not */
}
if (0) {
var5 = ((short int(*)(val* self, val* p0))(var_extension->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_extension, ((val*)NULL)); /* == on <var_extension:nullable String>*/
var4 = var5;
}
if (var4){
var = self;
goto RET_LABEL;
} else {
if (unlikely(varonce==NULL)) {
var6 = NEW_core__NativeArray(2l, &type_core__NativeArray__core__String);
if (likely(varonce7!=NULL)) {
var8 = varonce7;
} else {
var9 = ".";
var10 = core__abstract_text___CString___to_s_full(var9, 1l, 1l);
var8 = var10;
varonce7 = var8;
}
((struct instance_core__NativeArray*)var6)->values[0]=var8;
} else {
var6 = varonce;
varonce = NULL;
}
((struct instance_core__NativeArray*)var6)->values[1]=var_extension;
{
var11 = ((val*(*)(val* self))(var6->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var6); /* native_to_s on <var6:NativeArray[String]>*/
}
varonce = var6;
var_extension = var11;
}
} else {
}
{
var12 = core___core__Text___has_suffix(self, var_extension);
}
if (var12){
{
var13 = ((long(*)(val* self))(self->class->vft[COLOR_core__abstract_text__Text__length]))(self); /* length on <self:String>*/
}
{
var14 = ((long(*)(val* self))(var_extension->class->vft[COLOR_core__abstract_text__Text__length]))(var_extension); /* length on <var_extension:nullable String(String)>*/
}
{
{ /* Inline kernel#Int#- (var13,var14) on <var13:Int> */
/* Covariant cast for argument 0 (i) <var14:Int> isa OTHER */
/* <var14:Int> isa OTHER */
var17 = 1; /* easy <var14:Int> isa OTHER*/
if (unlikely(!var17)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var18 = var13 - var14;
var15 = var18;
goto RET_LABEL16;
RET_LABEL16:(void)0;
}
}
{
var19 = ((val*(*)(val* self, long p0, long p1))(self->class->vft[COLOR_core__abstract_text__Text__substring]))(self, 0l, var15); /* substring on <self:String>*/
}
var = var19;
goto RET_LABEL;
} else {
}
var = self;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method file#String#basename for (self: String, nullable String): String */
val* core__file___String___basename(val* self, val* p0) {
val* var /* : String */;
val* var_extension /* var extension: nullable String */;
val* var_n /* var n: String */;
val* var1 /* : Sys */;
short int var2 /* : Bool */;
short int var4 /* : Bool */;
long var5 /* : Int */;
long var6 /* : Int */;
short int var8 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var9 /* : Int */;
long var_l /* var l: Int */;
short int var10 /* : Bool */;
short int var11 /* : Bool */;
short int var13 /* : Bool */;
int cltype14;
int idtype15;
const char* var_class_name16;
short int var17 /* : Bool */;
short int var_ /* var : Bool */;
short int var18 /* : Bool */;
val* var19 /* : SequenceRead[Char] */;
val* var20 /* : nullable Object */;
short int var21 /* : Bool */;
short int var23 /* : Bool */;
uint32_t var24 /* : Char */;
short int var_25 /* var : Bool */;
val* var26 /* : SequenceRead[Char] */;
val* var27 /* : nullable Object */;
short int var28 /* : Bool */;
short int var30 /* : Bool */;
uint32_t var31 /* : Char */;
long var32 /* : Int */;
short int var34 /* : Bool */;
int cltype35;
int idtype36;
const char* var_class_name37;
long var38 /* : Int */;
short int var39 /* : Bool */;
short int var41 /* : Bool */;
static val* varonce;
val* var42 /* : String */;
char* var43 /* : CString */;
val* var44 /* : String */;
val* var45 /* : SequenceRead[Char] */;
val* var46 /* : nullable Object */;
long var47 /* : Int */;
long var_pos /* var pos: Int */;
long var48 /* : Int */;
long var49 /* : Int */;
short int var50 /* : Bool */;
short int var52 /* : Bool */;
int cltype53;
int idtype54;
const char* var_class_name55;
short int var56 /* : Bool */;
long var57 /* : Int */;
short int var59 /* : Bool */;
int cltype60;
int idtype61;
const char* var_class_name62;
long var63 /* : Int */;
long var64 /* : Int */;
short int var66 /* : Bool */;
int cltype67;
int idtype68;
const char* var_class_name69;
long var70 /* : Int */;
val* var71 /* : Text */;
long var72 /* : Int */;
long var73 /* : Int */;
short int var75 /* : Bool */;
int cltype76;
int idtype77;
const char* var_class_name78;
long var79 /* : Int */;
long var_l80 /* var l: Int */;
short int var81 /* : Bool */;
short int var82 /* : Bool */;
short int var84 /* : Bool */;
int cltype85;
int idtype86;
const char* var_class_name87;
short int var88 /* : Bool */;
short int var_89 /* var : Bool */;
val* var90 /* : SequenceRead[Char] */;
val* var91 /* : nullable Object */;
short int var92 /* : Bool */;
short int var94 /* : Bool */;
uint32_t var95 /* : Char */;
long var96 /* : Int */;
short int var98 /* : Bool */;
int cltype99;
int idtype100;
const char* var_class_name101;
long var102 /* : Int */;
short int var104 /* : Bool */;
short int var106 /* : Bool */;
static val* varonce107;
val* var108 /* : String */;
char* var109 /* : CString */;
val* var110 /* : String */;
val* var111 /* : SequenceRead[Char] */;
val* var112 /* : nullable Object */;
long var113 /* : Int */;
long var_pos114 /* var pos: Int */;
short int var115 /* : Bool */;
short int var117 /* : Bool */;
int cltype118;
int idtype119;
const char* var_class_name120;
short int var121 /* : Bool */;
long var122 /* : Int */;
short int var124 /* : Bool */;
int cltype125;
int idtype126;
const char* var_class_name127;
long var128 /* : Int */;
long var129 /* : Int */;
short int var131 /* : Bool */;
int cltype132;
int idtype133;
const char* var_class_name134;
long var135 /* : Int */;
val* var136 /* : Text */;
short int var137 /* : Bool */;
short int var138 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var140 /* : Bool */;
short int var141 /* : Bool */;
val* var142 /* : String */;
var_extension = p0;
var_n = self;
var1 = glob_sys;
{
{ /* Inline kernel#Sys#is_windows (var1) on <var1:Sys> */
struct nitni_instance* var_for_c_0;
var_for_c_0 = nit_alloc(sizeof(struct nitni_instance));
var_for_c_0->value = var1;
var4 = kernel___Sys_is_windows___impl(var_for_c_0);
var2 = var4;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
}
if (var2){
{
var5 = ((long(*)(val* self))(self->class->vft[COLOR_core__abstract_text__Text__length]))(self); /* length on <self:String>*/
}
{
{ /* Inline kernel#Int#- (var5,1l) on <var5:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var8 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var8)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var9 = var5 - 1l;
var6 = var9;
goto RET_LABEL7;
RET_LABEL7:(void)0;
}
}
var_l = var6;
for(;;) {
{
{ /* Inline kernel#Int#> (var_l,0l) on <var_l:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var13 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var13)) {
var_class_name16 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name16);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 727);
fatal_exit(1);
}
var17 = var_l > 0l;
var11 = var17;
goto RET_LABEL12;
RET_LABEL12:(void)0;
}
}
var_ = var11;
if (var11){
{
var19 = ((val*(*)(val* self))(self->class->vft[COLOR_core__abstract_text__Text__chars]))(self); /* chars on <self:String>*/
}
{
var20 = ((val*(*)(val* self, long p0))((((long)var19&3)?class_info[((long)var19&3)]:var19->class)->vft[COLOR_core__abstract_collection__SequenceRead___91d_93d]))(var19, var_l); /* [] on <var19:SequenceRead[Char]>*/
}
{
{ /* Inline kernel#Char#== (var20,'/') on <var20:nullable Object(Char)> */
var24 = (uint32_t)((long)(var20)>>2);
var23 = var24 == '/';
var21 = var23;
goto RET_LABEL22;
RET_LABEL22:(void)0;
}
}
var_25 = var21;
if (var21){
var18 = var_25;
} else {
{
var26 = ((val*(*)(val* self))(self->class->vft[COLOR_core__abstract_text__Text__chars]))(self); /* chars on <self:String>*/
}
{
var27 = ((val*(*)(val* self, long p0))((((long)var26&3)?class_info[((long)var26&3)]:var26->class)->vft[COLOR_core__abstract_collection__SequenceRead___91d_93d]))(var26, var_l); /* [] on <var26:SequenceRead[Char]>*/
}
{
{ /* Inline kernel#Char#== (var27,'\\') on <var27:nullable Object(Char)> */
var31 = (uint32_t)((long)(var27)>>2);
var30 = var31 == '\\';
var28 = var30;
goto RET_LABEL29;
RET_LABEL29:(void)0;
}
}
var18 = var28;
}
var10 = var18;
} else {
var10 = var_;
}
if (var10){
{
{ /* Inline kernel#Int#- (var_l,1l) on <var_l:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var34 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var34)) {
var_class_name37 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name37);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var38 = var_l - 1l;
var32 = var38;
goto RET_LABEL33;
RET_LABEL33:(void)0;
}
}
var_l = var32;
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
{ /* Inline kernel#Int#== (var_l,0l) on <var_l:Int> */
var41 = var_l == 0l;
var39 = var41;
goto RET_LABEL40;
RET_LABEL40:(void)0;
}
}
if (var39){
if (likely(varonce!=NULL)) {
var42 = varonce;
} else {
var43 = "/";
var44 = core__abstract_text___CString___to_s_full(var43, 1l, 1l);
var42 = var44;
varonce = var42;
}
var = var42;
goto RET_LABEL;
} else {
}
{
var45 = ((val*(*)(val* self))(self->class->vft[COLOR_core__abstract_text__Text__chars]))(self); /* chars on <self:String>*/
}
{
var46 = (val*)((long)('/')<<2|2);
var47 = ((long(*)(val* self, val* p0, long p1))((((long)var45&3)?class_info[((long)var45&3)]:var45->class)->vft[COLOR_core__abstract_collection__SequenceRead__last_index_of_from]))(var45, var46, var_l); /* last_index_of_from on <var45:SequenceRead[Char]>*/
}
var_pos = var47;
{
var48 = core___core__Text___last_index_of_from(self, '\\', var_l);
}
{
var49 = core___core__Int___Comparable__max(var_pos, var48);
}
var_pos = var49;
{
{ /* Inline kernel#Int#>= (var_pos,0l) on <var_pos:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var52 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var52)) {
var_class_name55 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name55);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 726);
fatal_exit(1);
}
var56 = var_pos >= 0l;
var50 = var56;
goto RET_LABEL51;
RET_LABEL51:(void)0;
}
}
if (var50){
{
{ /* Inline kernel#Int#+ (var_pos,1l) on <var_pos:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var59 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var59)) {
var_class_name62 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name62);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var63 = var_pos + 1l;
var57 = var63;
goto RET_LABEL58;
RET_LABEL58:(void)0;
}
}
{
{ /* Inline kernel#Int#- (var_l,var_pos) on <var_l:Int> */
/* Covariant cast for argument 0 (i) <var_pos:Int> isa OTHER */
/* <var_pos:Int> isa OTHER */
var66 = 1; /* easy <var_pos:Int> isa OTHER*/
if (unlikely(!var66)) {
var_class_name69 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name69);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var70 = var_l - var_pos;
var64 = var70;
goto RET_LABEL65;
RET_LABEL65:(void)0;
}
}
{
var71 = ((val*(*)(val* self, long p0, long p1))(self->class->vft[COLOR_core__abstract_text__Text__substring]))(self, var57, var64); /* substring on <self:String>*/
}
var_n = var71;
} else {
}
} else {
{
var72 = ((long(*)(val* self))(self->class->vft[COLOR_core__abstract_text__Text__length]))(self); /* length on <self:String>*/
}
{
{ /* Inline kernel#Int#- (var72,1l) on <var72:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var75 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var75)) {
var_class_name78 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name78);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var79 = var72 - 1l;
var73 = var79;
goto RET_LABEL74;
RET_LABEL74:(void)0;
}
}
var_l80 = var73;
for(;;) {
{
{ /* Inline kernel#Int#> (var_l80,0l) on <var_l80:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var84 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var84)) {
var_class_name87 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name87);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 727);
fatal_exit(1);
}
var88 = var_l80 > 0l;
var82 = var88;
goto RET_LABEL83;
RET_LABEL83:(void)0;
}
}
var_89 = var82;
if (var82){
{
var90 = ((val*(*)(val* self))(self->class->vft[COLOR_core__abstract_text__Text__chars]))(self); /* chars on <self:String>*/
}
{
var91 = ((val*(*)(val* self, long p0))((((long)var90&3)?class_info[((long)var90&3)]:var90->class)->vft[COLOR_core__abstract_collection__SequenceRead___91d_93d]))(var90, var_l80); /* [] on <var90:SequenceRead[Char]>*/
}
{
{ /* Inline kernel#Char#== (var91,'/') on <var91:nullable Object(Char)> */
var95 = (uint32_t)((long)(var91)>>2);
var94 = var95 == '/';
var92 = var94;
goto RET_LABEL93;
RET_LABEL93:(void)0;
}
}
var81 = var92;
} else {
var81 = var_89;
}
if (var81){
{
{ /* Inline kernel#Int#- (var_l80,1l) on <var_l80:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var98 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var98)) {
var_class_name101 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name101);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var102 = var_l80 - 1l;
var96 = var102;
goto RET_LABEL97;
RET_LABEL97:(void)0;
}
}
var_l80 = var96;
} else {
goto BREAK_label103;
}
}
BREAK_label103: (void)0;
{
{ /* Inline kernel#Int#== (var_l80,0l) on <var_l80:Int> */
var106 = var_l80 == 0l;
var104 = var106;
goto RET_LABEL105;
RET_LABEL105:(void)0;
}
}
if (var104){
if (likely(varonce107!=NULL)) {
var108 = varonce107;
} else {
var109 = "/";
var110 = core__abstract_text___CString___to_s_full(var109, 1l, 1l);
var108 = var110;
varonce107 = var108;
}
var = var108;
goto RET_LABEL;
} else {
}
{
var111 = ((val*(*)(val* self))(self->class->vft[COLOR_core__abstract_text__Text__chars]))(self); /* chars on <self:String>*/
}
{
var112 = (val*)((long)('/')<<2|2);
var113 = ((long(*)(val* self, val* p0, long p1))((((long)var111&3)?class_info[((long)var111&3)]:var111->class)->vft[COLOR_core__abstract_collection__SequenceRead__last_index_of_from]))(var111, var112, var_l80); /* last_index_of_from on <var111:SequenceRead[Char]>*/
}
var_pos114 = var113;
{
{ /* Inline kernel#Int#>= (var_pos114,0l) on <var_pos114:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var117 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var117)) {
var_class_name120 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name120);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 726);
fatal_exit(1);
}
var121 = var_pos114 >= 0l;
var115 = var121;
goto RET_LABEL116;
RET_LABEL116:(void)0;
}
}
if (var115){
{
{ /* Inline kernel#Int#+ (var_pos114,1l) on <var_pos114:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var124 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var124)) {
var_class_name127 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name127);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var128 = var_pos114 + 1l;
var122 = var128;
goto RET_LABEL123;
RET_LABEL123:(void)0;
}
}
{
{ /* Inline kernel#Int#- (var_l80,var_pos114) on <var_l80:Int> */
/* Covariant cast for argument 0 (i) <var_pos114:Int> isa OTHER */
/* <var_pos114:Int> isa OTHER */
var131 = 1; /* easy <var_pos114:Int> isa OTHER*/
if (unlikely(!var131)) {
var_class_name134 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name134);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var135 = var_l80 - var_pos114;
var129 = var135;
goto RET_LABEL130;
RET_LABEL130:(void)0;
}
}
{
var136 = ((val*(*)(val* self, long p0, long p1))(self->class->vft[COLOR_core__abstract_text__Text__substring]))(self, var122, var129); /* substring on <self:String>*/
}
var_n = var136;
} else {
}
}
if (var_extension == NULL) {
var137 = 0; /* is null */
} else {
var137 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_extension,((val*)NULL)) on <var_extension:nullable String> */
var_other = ((val*)NULL);
{
var140 = ((short int(*)(val* self, val* p0))(var_extension->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_extension, var_other); /* == on <var_extension:nullable String(String)>*/
}
var141 = !var140;
var138 = var141;
goto RET_LABEL139;
RET_LABEL139:(void)0;
}
var137 = var138;
}
if (var137){
{
var142 = core__file___String___strip_extension(var_n, var_extension);
}
var = var142;
goto RET_LABEL;
} else {
var = var_n;
goto RET_LABEL;
}
RET_LABEL:;
return var;
}
/* method file#String#dirname for (self: String): String */
val* core__file___String___dirname(val* self) {
val* var /* : String */;
long var1 /* : Int */;
long var2 /* : Int */;
short int var4 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var5 /* : Int */;
long var_l /* var l: Int */;
short int var6 /* : Bool */;
short int var7 /* : Bool */;
short int var9 /* : Bool */;
int cltype10;
int idtype11;
const char* var_class_name12;
short int var13 /* : Bool */;
short int var_ /* var : Bool */;
val* var14 /* : SequenceRead[Char] */;
val* var15 /* : nullable Object */;
short int var16 /* : Bool */;
short int var18 /* : Bool */;
uint32_t var19 /* : Char */;
long var20 /* : Int */;
short int var22 /* : Bool */;
int cltype23;
int idtype24;
const char* var_class_name25;
long var26 /* : Int */;
val* var27 /* : SequenceRead[Char] */;
val* var28 /* : nullable Object */;
long var29 /* : Int */;
long var_pos /* var pos: Int */;
short int var30 /* : Bool */;
short int var32 /* : Bool */;
int cltype33;
int idtype34;
const char* var_class_name35;
short int var36 /* : Bool */;
val* var37 /* : Text */;
short int var38 /* : Bool */;
short int var40 /* : Bool */;
static val* varonce;
val* var41 /* : String */;
char* var42 /* : CString */;
val* var43 /* : String */;
static val* varonce44;
val* var45 /* : String */;
char* var46 /* : CString */;
val* var47 /* : String */;
{
var1 = ((long(*)(val* self))(self->class->vft[COLOR_core__abstract_text__Text__length]))(self); /* length on <self:String>*/
}
{
{ /* Inline kernel#Int#- (var1,1l) on <var1:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var4 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var4)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var5 = var1 - 1l;
var2 = var5;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
}
var_l = var2;
for(;;) {
{
{ /* Inline kernel#Int#> (var_l,0l) on <var_l:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var9 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var9)) {
var_class_name12 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name12);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 727);
fatal_exit(1);
}
var13 = var_l > 0l;
var7 = var13;
goto RET_LABEL8;
RET_LABEL8:(void)0;
}
}
var_ = var7;
if (var7){
{
var14 = ((val*(*)(val* self))(self->class->vft[COLOR_core__abstract_text__Text__chars]))(self); /* chars on <self:String>*/
}
{
var15 = ((val*(*)(val* self, long p0))((((long)var14&3)?class_info[((long)var14&3)]:var14->class)->vft[COLOR_core__abstract_collection__SequenceRead___91d_93d]))(var14, var_l); /* [] on <var14:SequenceRead[Char]>*/
}
{
{ /* Inline kernel#Char#== (var15,'/') on <var15:nullable Object(Char)> */
var19 = (uint32_t)((long)(var15)>>2);
var18 = var19 == '/';
var16 = var18;
goto RET_LABEL17;
RET_LABEL17:(void)0;
}
}
var6 = var16;
} else {
var6 = var_;
}
if (var6){
{
{ /* Inline kernel#Int#- (var_l,1l) on <var_l:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var22 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var22)) {
var_class_name25 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name25);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var26 = var_l - 1l;
var20 = var26;
goto RET_LABEL21;
RET_LABEL21:(void)0;
}
}
var_l = var20;
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
var27 = ((val*(*)(val* self))(self->class->vft[COLOR_core__abstract_text__Text__chars]))(self); /* chars on <self:String>*/
}
{
var28 = (val*)((long)('/')<<2|2);
var29 = ((long(*)(val* self, val* p0, long p1))((((long)var27&3)?class_info[((long)var27&3)]:var27->class)->vft[COLOR_core__abstract_collection__SequenceRead__last_index_of_from]))(var27, var28, var_l); /* last_index_of_from on <var27:SequenceRead[Char]>*/
}
var_pos = var29;
{
{ /* Inline kernel#Int#> (var_pos,0l) on <var_pos:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var32 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var32)) {
var_class_name35 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name35);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 727);
fatal_exit(1);
}
var36 = var_pos > 0l;
var30 = var36;
goto RET_LABEL31;
RET_LABEL31:(void)0;
}
}
if (var30){
{
var37 = ((val*(*)(val* self, long p0, long p1))(self->class->vft[COLOR_core__abstract_text__Text__substring]))(self, 0l, var_pos); /* substring on <self:String>*/
}
var = var37;
goto RET_LABEL;
} else {
{
{ /* Inline kernel#Int#== (var_pos,0l) on <var_pos:Int> */
var40 = var_pos == 0l;
var38 = var40;
goto RET_LABEL39;
RET_LABEL39:(void)0;
}
}
if (var38){
if (likely(varonce!=NULL)) {
var41 = varonce;
} else {
var42 = "/";
var43 = core__abstract_text___CString___to_s_full(var42, 1l, 1l);
var41 = var43;
varonce = var41;
}
var = var41;
goto RET_LABEL;
} else {
if (likely(varonce44!=NULL)) {
var45 = varonce44;
} else {
var46 = ".";
var47 = core__abstract_text___CString___to_s_full(var46, 1l, 1l);
var45 = var47;
varonce44 = var45;
}
var = var45;
goto RET_LABEL;
}
}
RET_LABEL:;
return var;
}
/* method file#String#realpath for (self: String): String */
val* core__file___String___realpath(val* self) {
val* var /* : String */;
char* var1 /* : CString */;
char* var2 /* : CString */;
char* var4 /* : CString */;
char* var_cs /* var cs: CString */;
short int var5 /* : Bool */;
val* var6 /* : String */;
val* var_res /* var res: String */;
val* var8 /* : Pointer */;
void* var9 /* : Pointer for extern */;
{
var1 = ((char*(*)(val* self))(self->class->vft[COLOR_core__abstract_text__Text__to_cstring]))(self); /* to_cstring on <self:String>*/
}
{
{ /* Inline file#CString#file_realpath (var1) on <var1:CString> */
var4 = file___CString_file_realpath___impl(var1);
var2 = var4;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
}
var_cs = var2;
{
var5 = core__file___Text___file_exists(self);
}
if (unlikely(!var5)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_core__file, 1026);
fatal_exit(1);
}
{
var6 = core__flat___CString___core__abstract_text__Object__to_s(var_cs);
}
var_res = var6;
{
{ /* Inline kernel#Pointer#free (var_cs) on <var_cs:CString> */
var8 = BOX_core__Pointer(var_cs); /* autobox from CString to Pointer */
var9 = ((struct instance_core__Pointer*)var8)->value; /* unboxing Pointer */
kernel___Pointer_free___impl(var9);
RET_LABEL7:(void)0;
}
}
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method file#String#simplify_path for (self: String): String */
val* core__file___String___simplify_path(val* self) {
val* var /* : String */;
static val* varonce;
val* var1 /* : String */;
char* var2 /* : CString */;
val* var3 /* : String */;
val* var4 /* : Array[String] */;
val* var_a /* var a: Array[String] */;
val* var5 /* : Array[String] */;
val* var_a2 /* var a2: Array[String] */;
val* var_ /* var : Array[String] */;
val* var6 /* : IndexedIterator[nullable Object] */;
val* var_7 /* var : IndexedIterator[String] */;
short int var8 /* : Bool */;
val* var9 /* : nullable Object */;
val* var_x /* var x: String */;
short int var10 /* : Bool */;
static val* varonce11;
val* var12 /* : String */;
char* var13 /* : CString */;
val* var14 /* : String */;
short int var15 /* : Bool */;
short int var_16 /* var : Bool */;
short int var17 /* : Bool */;
short int var18 /* : Bool */;
short int var20 /* : Bool */;
static val* varonce21;
val* var22 /* : String */;
char* var23 /* : CString */;
val* var24 /* : String */;
short int var25 /* : Bool */;
short int var_26 /* var : Bool */;
short int var27 /* : Bool */;
short int var28 /* : Bool */;
short int var29 /* : Bool */;
short int var30 /* : Bool */;
static val* varonce31;
val* var32 /* : String */;
char* var33 /* : CString */;
val* var34 /* : String */;
short int var35 /* : Bool */;
short int var_36 /* var : Bool */;
short int var37 /* : Bool */;
short int var38 /* : Bool */;
short int var_39 /* var : Bool */;
val* var40 /* : nullable Object */;
static val* varonce41;
val* var42 /* : String */;
char* var43 /* : CString */;
val* var44 /* : String */;
short int var45 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var47 /* : Bool */;
short int var48 /* : Bool */;
val* var49 /* : nullable Object */;
static val* varonce50;
val* var51 /* : String */;
char* var52 /* : CString */;
val* var53 /* : String */;
short int var54 /* : Bool */;
val* var55 /* : nullable Object */;
val* var56 /* : nullable Object */;
short int var57 /* : Bool */;
short int var58 /* : Bool */;
short int var59 /* : Bool */;
short int var_60 /* var : Bool */;
val* var61 /* : nullable Object */;
static val* varonce62;
val* var63 /* : String */;
char* var64 /* : CString */;
val* var65 /* : String */;
short int var66 /* : Bool */;
val* var67 /* : nullable Object */;
short int var68 /* : Bool */;
static val* varonce69;
val* var70 /* : String */;
char* var71 /* : CString */;
val* var72 /* : String */;
short int var73 /* : Bool */;
long var74 /* : Int */;
long var76 /* : Int */;
short int var77 /* : Bool */;
short int var79 /* : Bool */;
short int var_80 /* var : Bool */;
val* var81 /* : nullable Object */;
static val* varonce82;
val* var83 /* : String */;
char* var84 /* : CString */;
val* var85 /* : String */;
short int var86 /* : Bool */;
static val* varonce87;
val* var88 /* : String */;
char* var89 /* : CString */;
val* var90 /* : String */;
static val* varonce91;
val* var92 /* : String */;
char* var93 /* : CString */;
val* var94 /* : String */;
val* var95 /* : String */;
if (likely(varonce!=NULL)) {
var1 = varonce;
} else {
var2 = "/";
var3 = core__abstract_text___CString___to_s_full(var2, 1l, 1l);
var1 = var3;
varonce = var1;
}
{
var4 = core__string_search___Text___split_with(self, var1);
}
var_a = var4;
var5 = NEW_core__Array(&type_core__Array__core__String);
{
core___core__Array___core__kernel__Object__init(var5); /* Direct call array#Array#init on <var5:Array[String]>*/
}
var_a2 = var5;
var_ = var_a;
{
var6 = core___core__AbstractArrayRead___core__abstract_collection__Collection__iterator(var_);
}
var_7 = var6;
for(;;) {
{
var8 = ((short int(*)(val* self))((((long)var_7&3)?class_info[((long)var_7&3)]:var_7->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_7); /* is_ok on <var_7:IndexedIterator[String]>*/
}
if (var8){
} else {
goto BREAK_label;
}
{
var9 = ((val*(*)(val* self))((((long)var_7&3)?class_info[((long)var_7&3)]:var_7->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_7); /* item on <var_7:IndexedIterator[String]>*/
}
var_x = var9;
if (likely(varonce11!=NULL)) {
var12 = varonce11;
} else {
var13 = ".";
var14 = core__abstract_text___CString___to_s_full(var13, 1l, 1l);
var12 = var14;
varonce11 = var12;
}
{
var15 = ((short int(*)(val* self, val* p0))(var_x->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_x, var12); /* == on <var_x:String>*/
}
var_16 = var15;
if (var15){
{
var17 = core___core__AbstractArrayRead___core__abstract_collection__Collection__is_empty(var_a2);
}
var18 = !var17;
var10 = var18;
} else {
var10 = var_16;
}
if (var10){
goto BREAK_label19;
} else {
}
if (likely(varonce21!=NULL)) {
var22 = varonce21;
} else {
var23 = "";
var24 = core__abstract_text___CString___to_s_full(var23, 0l, 0l);
var22 = var24;
varonce21 = var22;
}
{
var25 = ((short int(*)(val* self, val* p0))(var_x->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_x, var22); /* == on <var_x:String>*/
}
var_26 = var25;
if (var25){
{
var27 = core___core__AbstractArrayRead___core__abstract_collection__Collection__is_empty(var_a2);
}
var28 = !var27;
var20 = var28;
} else {
var20 = var_26;
}
if (var20){
goto BREAK_label19;
} else {
}
if (likely(varonce31!=NULL)) {
var32 = varonce31;
} else {
var33 = "..";
var34 = core__abstract_text___CString___to_s_full(var33, 2l, 2l);
var32 = var34;
varonce31 = var32;
}
{
var35 = ((short int(*)(val* self, val* p0))(var_x->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_x, var32); /* == on <var_x:String>*/
}
var_36 = var35;
if (var35){
{
var37 = core___core__AbstractArrayRead___core__abstract_collection__Collection__is_empty(var_a2);
}
var38 = !var37;
var30 = var38;
} else {
var30 = var_36;
}
var_39 = var30;
if (var30){
{
var40 = core___core__SequenceRead___last(var_a2);
}
if (likely(varonce41!=NULL)) {
var42 = varonce41;
} else {
var43 = "..";
var44 = core__abstract_text___CString___to_s_full(var43, 2l, 2l);
var42 = var44;
varonce41 = var42;
}
{
{ /* Inline kernel#Object#!= (var40,var42) on <var40:nullable Object(String)> */
var_other = var42;
{
var47 = ((short int(*)(val* self, val* p0))(var40->class->vft[COLOR_core__kernel__Object___61d_61d]))(var40, var_other); /* == on <var40:nullable Object(String)>*/
}
var48 = !var47;
var45 = var48;
goto RET_LABEL46;
RET_LABEL46:(void)0;
}
}
var29 = var45;
} else {
var29 = var_39;
}
if (var29){
{
var49 = core___core__SequenceRead___last(var_a2);
}
if (likely(varonce50!=NULL)) {
var51 = varonce50;
} else {
var52 = ".";
var53 = core__abstract_text___CString___to_s_full(var52, 1l, 1l);
var51 = var53;
varonce50 = var51;
}
{
var54 = ((short int(*)(val* self, val* p0))(var49->class->vft[COLOR_core__kernel__Object___61d_61d]))(var49, var51); /* == on <var49:nullable Object(String)>*/
}
if (var54){
{
var55 = core___core__AbstractArray___core__abstract_collection__Sequence__pop(var_a2);
}
} else {
{
var56 = core___core__AbstractArray___core__abstract_collection__Sequence__pop(var_a2);
}
goto BREAK_label19;
}
} else {
{
var58 = core___core__AbstractArrayRead___core__abstract_collection__Collection__is_empty(var_a2);
}
var59 = !var58;
var_60 = var59;
if (var59){
{
var61 = core___core__SequenceRead___last(var_a2);
}
if (likely(varonce62!=NULL)) {
var63 = varonce62;
} else {
var64 = ".";
var65 = core__abstract_text___CString___to_s_full(var64, 1l, 1l);
var63 = var65;
varonce62 = var63;
}
{
var66 = ((short int(*)(val* self, val* p0))(var61->class->vft[COLOR_core__kernel__Object___61d_61d]))(var61, var63); /* == on <var61:nullable Object(String)>*/
}
var57 = var66;
} else {
var57 = var_60;
}
if (var57){
{
var67 = core___core__AbstractArray___core__abstract_collection__Sequence__pop(var_a2);
}
} else {
}
}
{
core___core__AbstractArray___core__abstract_collection__Sequence__push(var_a2, var_x); /* Direct call array#AbstractArray#push on <var_a2:Array[String]>*/
}
BREAK_label19: (void)0;
{
((void(*)(val* self))((((long)var_7&3)?class_info[((long)var_7&3)]:var_7->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_7); /* next on <var_7:IndexedIterator[String]>*/
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_7&3)?class_info[((long)var_7&3)]:var_7->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_7); /* finish on <var_7:IndexedIterator[String]>*/
}
{
var68 = core___core__AbstractArrayRead___core__abstract_collection__Collection__is_empty(var_a2);
}
if (var68){
if (likely(varonce69!=NULL)) {
var70 = varonce69;
} else {
var71 = ".";
var72 = core__abstract_text___CString___to_s_full(var71, 1l, 1l);
var70 = var72;
varonce69 = var70;
}
var = var70;
goto RET_LABEL;
} else {
}
{
{ /* Inline array#AbstractArrayRead#length (var_a2) on <var_a2:Array[String]> */
var76 = var_a2->attrs[COLOR_core__array__AbstractArrayRead___length].l; /* _length on <var_a2:Array[String]> */
var74 = var76;
RET_LABEL75:(void)0;
}
}
{
{ /* Inline kernel#Int#== (var74,1l) on <var74:Int> */
var79 = var74 == 1l;
var77 = var79;
goto RET_LABEL78;
RET_LABEL78:(void)0;
}
}
var_80 = var77;
if (var77){
{
var81 = core___core__SequenceRead___Collection__first(var_a2);
}
if (likely(varonce82!=NULL)) {
var83 = varonce82;
} else {
var84 = "";
var85 = core__abstract_text___CString___to_s_full(var84, 0l, 0l);
var83 = var85;
varonce82 = var83;
}
{
var86 = ((short int(*)(val* self, val* p0))(var81->class->vft[COLOR_core__kernel__Object___61d_61d]))(var81, var83); /* == on <var81:nullable Object(String)>*/
}
var73 = var86;
} else {
var73 = var_80;
}
if (var73){
if (likely(varonce87!=NULL)) {
var88 = varonce87;
} else {
var89 = "/";
var90 = core__abstract_text___CString___to_s_full(var89, 1l, 1l);
var88 = var90;
varonce87 = var88;
}
var = var88;
goto RET_LABEL;
} else {
}
if (likely(varonce91!=NULL)) {
var92 = varonce91;
} else {
var93 = "/";
var94 = core__abstract_text___CString___to_s_full(var93, 1l, 1l);
var92 = var94;
varonce91 = var92;
}
{
var95 = core__abstract_text___Collection___join(var_a2, var92, ((val*)NULL));
}
var = var95;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method file#String#join_path for (self: String, String): String */
val* core__file___String___join_path(val* self, val* p0) {
val* var /* : String */;
val* var_path /* var path: String */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var3 /* : SequenceRead[Char] */;
val* var4 /* : nullable Object */;
short int var5 /* : Bool */;
short int var7 /* : Bool */;
uint32_t var8 /* : Char */;
uint32_t var9 /* : Char */;
short int var10 /* : Bool */;
short int var12 /* : Bool */;
val* var13 /* : NativeArray[String] */;
static val* varonce;
val* var14 /* : String */;
val* var16 /* : NativeArray[String] */;
static val* varonce15;
static val* varonce17;
val* var18 /* : String */;
char* var19 /* : CString */;
val* var20 /* : String */;
val* var21 /* : String */;
var_path = p0;
{
var1 = ((short int(*)(val* self))(var_path->class->vft[COLOR_core__abstract_text__Text__is_empty]))(var_path); /* is_empty on <var_path:String>*/
}
if (var1){
var = self;
goto RET_LABEL;
} else {
}
{
var2 = ((short int(*)(val* self))(self->class->vft[COLOR_core__abstract_text__Text__is_empty]))(self); /* is_empty on <self:String>*/
}
if (var2){
var = var_path;
goto RET_LABEL;
} else {
}
{
var3 = ((val*(*)(val* self))(var_path->class->vft[COLOR_core__abstract_text__Text__chars]))(var_path); /* chars on <var_path:String>*/
}
{
var4 = ((val*(*)(val* self, long p0))((((long)var3&3)?class_info[((long)var3&3)]:var3->class)->vft[COLOR_core__abstract_collection__SequenceRead___91d_93d]))(var3, 0l); /* [] on <var3:SequenceRead[Char]>*/
}
{
{ /* Inline kernel#Char#== (var4,'/') on <var4:nullable Object(Char)> */
var8 = (uint32_t)((long)(var4)>>2);
var7 = var8 == '/';
var5 = var7;
goto RET_LABEL6;
RET_LABEL6:(void)0;
}
}
if (var5){
var = var_path;
goto RET_LABEL;
} else {
}
{
var9 = core___core__Text___last(self);
}
{
{ /* Inline kernel#Char#== (var9,'/') on <var9:Char> */
var12 = var9 == '/';
var10 = var12;
goto RET_LABEL11;
RET_LABEL11:(void)0;
}
}
if (var10){
if (unlikely(varonce==NULL)) {
var13 = NEW_core__NativeArray(2l, &type_core__NativeArray__core__String);
} else {
var13 = varonce;
varonce = NULL;
}
((struct instance_core__NativeArray*)var13)->values[0]=self;
((struct instance_core__NativeArray*)var13)->values[1]=var_path;
{
var14 = ((val*(*)(val* self))(var13->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var13); /* native_to_s on <var13:NativeArray[String]>*/
}
varonce = var13;
var = var14;
goto RET_LABEL;
} else {
}
if (unlikely(varonce15==NULL)) {
var16 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce17!=NULL)) {
var18 = varonce17;
} else {
var19 = "/";
var20 = core__abstract_text___CString___to_s_full(var19, 1l, 1l);
var18 = var20;
varonce17 = var18;
}
((struct instance_core__NativeArray*)var16)->values[1]=var18;
} else {
var16 = varonce15;
varonce15 = NULL;
}
((struct instance_core__NativeArray*)var16)->values[0]=self;
((struct instance_core__NativeArray*)var16)->values[2]=var_path;
{
var21 = ((val*(*)(val* self))(var16->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var16); /* native_to_s on <var16:NativeArray[String]>*/
}
varonce15 = var16;
var = var21;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method file#String#/ for (self: String, String): String */
val* core__file___String____47d(val* self, val* p0) {
val* var /* : String */;
val* var_path /* var path: String */;
val* var1 /* : String */;
var_path = p0;
{
var1 = core__file___String___join_path(self, var_path);
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method file#String#relpath for (self: String, String): String */
val* core__file___String___relpath(val* self, val* p0) {
val* var /* : String */;
val* var_dest /* var dest: String */;
val* var1 /* : Sys */;
val* var2 /* : String */;
val* var_cwd /* var cwd: String */;
val* var3 /* : String */;
val* var4 /* : String */;
static val* varonce;
val* var5 /* : String */;
char* var6 /* : CString */;
val* var7 /* : String */;
val* var8 /* : Array[String] */;
val* var_from /* var from: Array[String] */;
val* var9 /* : nullable Object */;
short int var10 /* : Bool */;
val* var11 /* : nullable Object */;
val* var12 /* : String */;
val* var13 /* : String */;
static val* varonce14;
val* var15 /* : String */;
char* var16 /* : CString */;
val* var17 /* : String */;
val* var18 /* : Array[String] */;
val* var_to /* var to: Array[String] */;
val* var19 /* : nullable Object */;
short int var20 /* : Bool */;
val* var21 /* : nullable Object */;
short int var22 /* : Bool */;
short int var23 /* : Bool */;
short int var24 /* : Bool */;
short int var25 /* : Bool */;
short int var_ /* var : Bool */;
short int var26 /* : Bool */;
short int var27 /* : Bool */;
short int var_28 /* var : Bool */;
val* var29 /* : nullable Object */;
val* var30 /* : nullable Object */;
short int var31 /* : Bool */;
val* var32 /* : nullable Object */;
val* var33 /* : nullable Object */;
long var34 /* : Int */;
long var36 /* : Int */;
long var_from_len /* var from_len: Int */;
short int var37 /* : Bool */;
short int var39 /* : Bool */;
static val* varonce40;
val* var41 /* : String */;
char* var42 /* : CString */;
val* var43 /* : String */;
val* var44 /* : String */;
static val* varonce45;
val* var46 /* : String */;
char* var47 /* : CString */;
val* var48 /* : String */;
long var49 /* : Int */;
short int var51 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var52 /* : Int */;
val* var53 /* : Text */;
static val* varonce54;
val* var55 /* : String */;
char* var56 /* : CString */;
val* var57 /* : String */;
val* var58 /* : Text */;
val* var_up /* var up: String */;
short int var59 /* : Bool */;
static val* varonce60;
val* var61 /* : String */;
char* var62 /* : CString */;
val* var63 /* : String */;
val* var64 /* : Text */;
static val* varonce65;
val* var66 /* : String */;
char* var67 /* : CString */;
val* var68 /* : String */;
val* var69 /* : String */;
val* var70 /* : Text */;
val* var_res /* var res: String */;
var_dest = p0;
var1 = glob_sys;
{
var2 = core__file___Sys___getcwd(var1);
}
var_cwd = var2;
{
var3 = core__file___String____47d(var_cwd, self);
}
{
var4 = core__file___String___simplify_path(var3);
}
if (likely(varonce!=NULL)) {
var5 = varonce;
} else {
var6 = "/";
var7 = core__abstract_text___CString___to_s_full(var6, 1l, 1l);
var5 = var7;
varonce = var5;
}
{
var8 = core__string_search___Text___split(var4, var5);
}
var_from = var8;
{
var9 = core___core__SequenceRead___last(var_from);
}
{
var10 = ((short int(*)(val* self))(var9->class->vft[COLOR_core__abstract_text__Text__is_empty]))(var9); /* is_empty on <var9:nullable Object(String)>*/
}
if (var10){
{
var11 = core___core__AbstractArray___core__abstract_collection__Sequence__pop(var_from);
}
} else {
}
{
var12 = core__file___String____47d(var_cwd, var_dest);
}
{
var13 = core__file___String___simplify_path(var12);
}
if (likely(varonce14!=NULL)) {
var15 = varonce14;
} else {
var16 = "/";
var17 = core__abstract_text___CString___to_s_full(var16, 1l, 1l);
var15 = var17;
varonce14 = var15;
}
{
var18 = core__string_search___Text___split(var13, var15);
}
var_to = var18;
{
var19 = core___core__SequenceRead___last(var_to);
}
{
var20 = ((short int(*)(val* self))(var19->class->vft[COLOR_core__abstract_text__Text__is_empty]))(var19); /* is_empty on <var19:nullable Object(String)>*/
}
if (var20){
{
var21 = core___core__AbstractArray___core__abstract_collection__Sequence__pop(var_to);
}
} else {
}
for(;;) {
{
var24 = core___core__AbstractArrayRead___core__abstract_collection__Collection__is_empty(var_from);
}
var25 = !var24;
var_ = var25;
if (var25){
{
var26 = core___core__AbstractArrayRead___core__abstract_collection__Collection__is_empty(var_to);
}
var27 = !var26;
var23 = var27;
} else {
var23 = var_;
}
var_28 = var23;
if (var23){
{
var29 = core___core__SequenceRead___Collection__first(var_from);
}
{
var30 = core___core__SequenceRead___Collection__first(var_to);
}
{
var31 = ((short int(*)(val* self, val* p0))(var29->class->vft[COLOR_core__kernel__Object___61d_61d]))(var29, var30); /* == on <var29:nullable Object(String)>*/
}
var22 = var31;
} else {
var22 = var_28;
}
if (var22){
{
var32 = core___core__AbstractArray___core__abstract_collection__Sequence__shift(var_from);
}
{
var33 = core___core__AbstractArray___core__abstract_collection__Sequence__shift(var_to);
}
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
{ /* Inline array#AbstractArrayRead#length (var_from) on <var_from:Array[String]> */
var36 = var_from->attrs[COLOR_core__array__AbstractArrayRead___length].l; /* _length on <var_from:Array[String]> */
var34 = var36;
RET_LABEL35:(void)0;
}
}
var_from_len = var34;
{
{ /* Inline kernel#Int#== (var_from_len,0l) on <var_from_len:Int> */
var39 = var_from_len == 0l;
var37 = var39;
goto RET_LABEL38;
RET_LABEL38:(void)0;
}
}
if (var37){
if (likely(varonce40!=NULL)) {
var41 = varonce40;
} else {
var42 = "/";
var43 = core__abstract_text___CString___to_s_full(var42, 1l, 1l);
var41 = var43;
varonce40 = var41;
}
{
var44 = core__abstract_text___Collection___join(var_to, var41, ((val*)NULL));
}
var = var44;
goto RET_LABEL;
} else {
}
if (likely(varonce45!=NULL)) {
var46 = varonce45;
} else {
var47 = "../";
var48 = core__abstract_text___CString___to_s_full(var47, 3l, 3l);
var46 = var48;
varonce45 = var46;
}
{
{ /* Inline kernel#Int#- (var_from_len,1l) on <var_from_len:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var51 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var51)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var52 = var_from_len - 1l;
var49 = var52;
goto RET_LABEL50;
RET_LABEL50:(void)0;
}
}
{
var53 = ((val*(*)(val* self, long p0))(var46->class->vft[COLOR_core__abstract_text__Text___42d]))(var46, var49); /* * on <var46:String>*/
}
if (likely(varonce54!=NULL)) {
var55 = varonce54;
} else {
var56 = "..";
var57 = core__abstract_text___CString___to_s_full(var56, 2l, 2l);
var55 = var57;
varonce54 = var55;
}
{
var58 = ((val*(*)(val* self, val* p0))(var53->class->vft[COLOR_core__abstract_text__Text___43d]))(var53, var55); /* + on <var53:Text(String)>*/
}
var_up = var58;
{
var59 = core___core__AbstractArrayRead___core__abstract_collection__Collection__is_empty(var_to);
}
if (var59){
var = var_up;
goto RET_LABEL;
} else {
}
if (likely(varonce60!=NULL)) {
var61 = varonce60;
} else {
var62 = "/";
var63 = core__abstract_text___CString___to_s_full(var62, 1l, 1l);
var61 = var63;
varonce60 = var61;
}
{
var64 = ((val*(*)(val* self, val* p0))(var_up->class->vft[COLOR_core__abstract_text__Text___43d]))(var_up, var61); /* + on <var_up:String>*/
}
if (likely(varonce65!=NULL)) {
var66 = varonce65;
} else {
var67 = "/";
var68 = core__abstract_text___CString___to_s_full(var67, 1l, 1l);
var66 = var68;
varonce65 = var66;
}
{
var69 = core__abstract_text___Collection___join(var_to, var66, ((val*)NULL));
}
{
var70 = ((val*(*)(val* self, val* p0))(var64->class->vft[COLOR_core__abstract_text__Text___43d]))(var64, var69); /* + on <var64:Text(String)>*/
}
var_res = var70;
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method file#String#mkdir for (self: String, nullable Int): nullable Error */
val* core__file___String___mkdir(val* self, val* p0) {
val* var /* : nullable Error */;
val* var_mode /* var mode: nullable Int */;
long var1 /* : Int */;
long var2 /* : Int */;
val* var3 /* : nullable Int */;
static val* varonce;
val* var4 /* : String */;
char* var5 /* : CString */;
val* var6 /* : String */;
val* var7 /* : Array[String] */;
val* var_dirs /* var dirs: Array[String] */;
val* var8 /* : FlatBuffer */;
val* var_path /* var path: FlatBuffer */;
short int var10 /* : Bool */;
val* var11 /* : nullable Object */;
short int var12 /* : Bool */;
val* var_error /* var error: nullable Error */;
long var_i /* var i: Int */;
long var13 /* : Int */;
long var15 /* : Int */;
long var16 /* : Int */;
short int var18 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var19 /* : Int */;
long var_ /* var : Int */;
short int var20 /* : Bool */;
short int var22 /* : Bool */;
int cltype23;
int idtype24;
const char* var_class_name25;
short int var26 /* : Bool */;
val* var27 /* : nullable Object */;
val* var_d /* var d: String */;
short int var28 /* : Bool */;
short int var30 /* : Bool */;
char* var31 /* : CString */;
short int var32 /* : Bool */;
short int var34 /* : Bool */;
long var35 /* : Int */;
short int var_res /* var res: Bool */;
short int var36 /* : Bool */;
short int var37 /* : Bool */;
short int var_38 /* var : Bool */;
short int var39 /* : Bool */;
short int var40 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var42 /* : Bool */;
short int var44 /* : Bool */;
val* var45 /* : IOError */;
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
val* var57 /* : Sys */;
val* var59 /* : Sys */;
long var60 /* : Int */;
long var62 /* : Int */;
val* var63 /* : String */;
val* var64 /* : String */;
long var65 /* : Int */;
char* var66 /* : CString */;
short int var67 /* : Bool */;
short int var69 /* : Bool */;
long var70 /* : Int */;
short int var_res71 /* var res: Bool */;
short int var72 /* : Bool */;
short int var73 /* : Bool */;
short int var_74 /* var : Bool */;
short int var75 /* : Bool */;
short int var76 /* : Bool */;
short int var78 /* : Bool */;
short int var80 /* : Bool */;
val* var81 /* : IOError */;
val* var83 /* : NativeArray[String] */;
static val* varonce82;
static val* varonce84;
val* var85 /* : String */;
char* var86 /* : CString */;
val* var87 /* : String */;
static val* varonce88;
val* var89 /* : String */;
char* var90 /* : CString */;
val* var91 /* : String */;
val* var92 /* : String */;
val* var93 /* : Sys */;
val* var95 /* : Sys */;
long var96 /* : Int */;
long var98 /* : Int */;
val* var99 /* : String */;
val* var100 /* : String */;
var_mode = p0;
if (var_mode!=NULL) {
var2 = (long)(var_mode)>>2;
var1 = var2;
} else {
var1 = 511l;
}
var3 = (val*)(var1<<2|1);
var_mode = var3;
if (likely(varonce!=NULL)) {
var4 = varonce;
} else {
var5 = "/";
var6 = core__abstract_text___CString___to_s_full(var5, 1l, 1l);
var4 = var6;
varonce = var4;
}
{
var7 = core__string_search___Text___split_with(self, var4);
}
var_dirs = var7;
var8 = NEW_core__FlatBuffer(&type_core__FlatBuffer);
{
{ /* Inline flat#FlatBuffer#init (var8) on <var8:FlatBuffer> */
{
((void(*)(val* self))(var8->class->vft[COLOR_core___core__FlatBuffer___core__kernel__Object__init]))(var8); /* init on <var8:FlatBuffer>*/
}
RET_LABEL9:(void)0;
}
}
var_path = var8;
{
var10 = core___core__AbstractArrayRead___core__abstract_collection__Collection__is_empty(var_dirs);
}
if (var10){
var = ((val*)NULL);
goto RET_LABEL;
} else {
}
{
var11 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_dirs, 0l);
}
{
var12 = ((short int(*)(val* self))(var11->class->vft[COLOR_core__abstract_text__Text__is_empty]))(var11); /* is_empty on <var11:nullable Object(String)>*/
}
if (var12){
{
core___core__FlatBuffer___core__abstract_text__Buffer__add(var_path, '/'); /* Direct call flat#FlatBuffer#add on <var_path:FlatBuffer>*/
}
} else {
}
var_error = ((val*)NULL);
var_i = 0l;
{
{ /* Inline array#AbstractArrayRead#length (var_dirs) on <var_dirs:Array[String]> */
var15 = var_dirs->attrs[COLOR_core__array__AbstractArrayRead___length].l; /* _length on <var_dirs:Array[String]> */
var13 = var15;
RET_LABEL14:(void)0;
}
}
{
{ /* Inline kernel#Int#- (var13,1l) on <var13:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var18 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var18)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var19 = var13 - 1l;
var16 = var19;
goto RET_LABEL17;
RET_LABEL17:(void)0;
}
}
var_ = var16;
for(;;) {
{
{ /* Inline kernel#Int#< (var_i,var_) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var_:Int> isa OTHER */
/* <var_:Int> isa OTHER */
var22 = 1; /* easy <var_:Int> isa OTHER*/
if (unlikely(!var22)) {
var_class_name25 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name25);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var26 = var_i < var_;
var20 = var26;
goto RET_LABEL21;
RET_LABEL21:(void)0;
}
}
if (var20){
} else {
goto BREAK_label;
}
{
var27 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_dirs, var_i);
}
var_d = var27;
{
var28 = ((short int(*)(val* self))(var_d->class->vft[COLOR_core__abstract_text__Text__is_empty]))(var_d); /* is_empty on <var_d:String>*/
}
if (var28){
goto BREAK_label29;
} else {
}
{
core___core__FlatBuffer___core__abstract_text__Buffer__append(var_path, var_d); /* Direct call flat#FlatBuffer#append on <var_path:FlatBuffer>*/
}
{
core___core__FlatBuffer___core__abstract_text__Buffer__add(var_path, '/'); /* Direct call flat#FlatBuffer#add on <var_path:FlatBuffer>*/
}
{
var30 = core__file___Text___file_exists(var_path);
}
if (var30){
goto BREAK_label29;
} else {
}
{
var31 = core___core__FlatBuffer___core__abstract_text__Text__to_cstring(var_path);
}
{
{ /* Inline file#CString#file_mkdir (var31,var_mode) on <var31:CString> */
var35 = (long)(var_mode)>>2;
var34 = file___CString_file_mkdir___impl(var31, var35);
var32 = var34;
goto RET_LABEL33;
RET_LABEL33:(void)0;
}
}
var_res = var32;
var37 = !var_res;
var_38 = var37;
if (var37){
if (var_error == NULL) {
var39 = 1; /* is null */
} else {
var39 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_error,((val*)NULL)) on <var_error:nullable Error> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_error,var_other) on <var_error:nullable Error(Error)> */
var44 = var_error == var_other;
var42 = var44;
goto RET_LABEL43;
RET_LABEL43:(void)0;
}
}
var40 = var42;
goto RET_LABEL41;
RET_LABEL41:(void)0;
}
var39 = var40;
}
var36 = var39;
} else {
var36 = var_38;
}
if (var36){
var45 = NEW_core__IOError(&type_core__IOError);
if (unlikely(varonce46==NULL)) {
var47 = NEW_core__NativeArray(4l, &type_core__NativeArray__core__String);
if (likely(varonce48!=NULL)) {
var49 = varonce48;
} else {
var50 = "Cannot create directory `";
var51 = core__abstract_text___CString___to_s_full(var50, 25l, 25l);
var49 = var51;
varonce48 = var49;
}
((struct instance_core__NativeArray*)var47)->values[0]=var49;
if (likely(varonce52!=NULL)) {
var53 = varonce52;
} else {
var54 = "`: ";
var55 = core__abstract_text___CString___to_s_full(var54, 3l, 3l);
var53 = var55;
varonce52 = var53;
}
((struct instance_core__NativeArray*)var47)->values[2]=var53;
} else {
var47 = varonce46;
varonce46 = NULL;
}
{
var56 = ((val*(*)(val* self))(var_path->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_path); /* to_s on <var_path:FlatBuffer>*/
}
((struct instance_core__NativeArray*)var47)->values[1]=var56;
{
{ /* Inline kernel#Object#sys (self) on <self:String> */
var59 = glob_sys;
var57 = var59;
goto RET_LABEL58;
RET_LABEL58:(void)0;
}
}
{
{ /* Inline kernel#Sys#errno (var57) on <var57:Sys> */
struct nitni_instance* var_for_c_0;
var_for_c_0 = nit_alloc(sizeof(struct nitni_instance));
var_for_c_0->value = var57;
var62 = kernel___Sys_errno___impl(var_for_c_0);
var60 = var62;
goto RET_LABEL61;
RET_LABEL61:(void)0;
}
}
{
var63 = core__abstract_text___Int___strerror(var60);
}
((struct instance_core__NativeArray*)var47)->values[3]=var63;
{
var64 = ((val*(*)(val* self))(var47->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var47); /* native_to_s on <var47:NativeArray[String]>*/
}
varonce46 = var47;
{
((void(*)(val* self, val* p0))(var45->class->vft[COLOR_core__error__Error__message_61d]))(var45, var64); /* message= on <var45:IOError>*/
}
{
((void(*)(val* self))(var45->class->vft[COLOR_core__kernel__Object__init]))(var45); /* init on <var45:IOError>*/
}
var_error = var45;
} else {
}
BREAK_label29: (void)0;
{
var65 = core___core__Int___Discrete__successor(var_i, 1l);
}
var_i = var65;
}
BREAK_label: (void)0;
{
var66 = ((char*(*)(val* self))(self->class->vft[COLOR_core__abstract_text__Text__to_cstring]))(self); /* to_cstring on <self:String>*/
}
{
{ /* Inline file#CString#file_mkdir (var66,var_mode) on <var66:CString> */
var70 = (long)(var_mode)>>2;
var69 = file___CString_file_mkdir___impl(var66, var70);
var67 = var69;
goto RET_LABEL68;
RET_LABEL68:(void)0;
}
}
var_res71 = var67;
var73 = !var_res71;
var_74 = var73;
if (var73){
if (var_error == NULL) {
var75 = 1; /* is null */
} else {
var75 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_error,((val*)NULL)) on <var_error:nullable Error> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_error,var_other) on <var_error:nullable Error(Error)> */
var80 = var_error == var_other;
var78 = var80;
goto RET_LABEL79;
RET_LABEL79:(void)0;
}
}
var76 = var78;
goto RET_LABEL77;
RET_LABEL77:(void)0;
}
var75 = var76;
}
var72 = var75;
} else {
var72 = var_74;
}
if (var72){
var81 = NEW_core__IOError(&type_core__IOError);
if (unlikely(varonce82==NULL)) {
var83 = NEW_core__NativeArray(4l, &type_core__NativeArray__core__String);
if (likely(varonce84!=NULL)) {
var85 = varonce84;
} else {
var86 = "Cannot create directory `";
var87 = core__abstract_text___CString___to_s_full(var86, 25l, 25l);
var85 = var87;
varonce84 = var85;
}
((struct instance_core__NativeArray*)var83)->values[0]=var85;
if (likely(varonce88!=NULL)) {
var89 = varonce88;
} else {
var90 = "`: ";
var91 = core__abstract_text___CString___to_s_full(var90, 3l, 3l);
var89 = var91;
varonce88 = var89;
}
((struct instance_core__NativeArray*)var83)->values[2]=var89;
} else {
var83 = varonce82;
varonce82 = NULL;
}
{
var92 = ((val*(*)(val* self))(var_path->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_path); /* to_s on <var_path:FlatBuffer>*/
}
((struct instance_core__NativeArray*)var83)->values[1]=var92;
{
{ /* Inline kernel#Object#sys (self) on <self:String> */
var95 = glob_sys;
var93 = var95;
goto RET_LABEL94;
RET_LABEL94:(void)0;
}
}
{
{ /* Inline kernel#Sys#errno (var93) on <var93:Sys> */
struct nitni_instance* var_for_c_0;
var_for_c_0 = nit_alloc(sizeof(struct nitni_instance));
var_for_c_0->value = var93;
var98 = kernel___Sys_errno___impl(var_for_c_0);
var96 = var98;
goto RET_LABEL97;
RET_LABEL97:(void)0;
}
}
{
var99 = core__abstract_text___Int___strerror(var96);
}
((struct instance_core__NativeArray*)var83)->values[3]=var99;
{
var100 = ((val*(*)(val* self))(var83->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var83); /* native_to_s on <var83:NativeArray[String]>*/
}
varonce82 = var83;
{
((void(*)(val* self, val* p0))(var81->class->vft[COLOR_core__error__Error__message_61d]))(var81, var100); /* message= on <var81:IOError>*/
}
{
((void(*)(val* self))(var81->class->vft[COLOR_core__kernel__Object__init]))(var81); /* init on <var81:IOError>*/
}
var_error = var81;
} else {
}
var = var_error;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method file#String#rmdir for (self: String): nullable Error */
val* core__file___String___rmdir(val* self) {
val* var /* : nullable Error */;
val* var1 /* : Path */;
val* var_p /* var p: Path */;
val* var2 /* : nullable IOError */;
val* var4 /* : nullable IOError */;
{
var1 = core__file___Text___to_path(self);
}
var_p = var1;
{
core___core__Path___rmdir(var_p); /* Direct call file#Path#rmdir on <var_p:Path>*/
}
{
{ /* Inline file#Path#last_error (var_p) on <var_p:Path> */
var4 = var_p->attrs[COLOR_core__file__Path___last_error].val; /* _last_error on <var_p:Path> */
var2 = var4;
RET_LABEL3:(void)0;
}
}
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method file#String#file_extension for (self: String): nullable String */
val* core__file___String___file_extension(val* self) {
val* var /* : nullable String */;
val* var1 /* : SequenceRead[Char] */;
val* var2 /* : nullable Object */;
long var3 /* : Int */;
long var_last_slash /* var last_slash: Int */;
short int var4 /* : Bool */;
short int var6 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var7 /* : Bool */;
long var8 /* : Int */;
short int var10 /* : Bool */;
int cltype11;
int idtype12;
const char* var_class_name13;
long var14 /* : Int */;
long var15 /* : Int */;
val* var16 /* : Text */;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_core__abstract_text__Text__chars]))(self); /* chars on <self:String>*/
}
{
var2 = (val*)((long)('.')<<2|2);
var3 = ((long(*)(val* self, val* p0))((((long)var1&3)?class_info[((long)var1&3)]:var1->class)->vft[COLOR_core__abstract_collection__SequenceRead__last_index_of]))(var1, var2); /* last_index_of on <var1:SequenceRead[Char]>*/
}
var_last_slash = var3;
{
{ /* Inline kernel#Int#> (var_last_slash,0l) on <var_last_slash:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var6 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var6)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 727);
fatal_exit(1);
}
var7 = var_last_slash > 0l;
var4 = var7;
goto RET_LABEL5;
RET_LABEL5:(void)0;
}
}
if (var4){
{
{ /* Inline kernel#Int#+ (var_last_slash,1l) on <var_last_slash:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var10 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var10)) {
var_class_name13 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name13);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var14 = var_last_slash + 1l;
var8 = var14;
goto RET_LABEL9;
RET_LABEL9:(void)0;
}
}
{
var15 = ((long(*)(val* self))(self->class->vft[COLOR_core__abstract_text__Text__length]))(self); /* length on <self:String>*/
}
{
var16 = ((val*(*)(val* self, long p0, long p1))(self->class->vft[COLOR_core__abstract_text__Text__substring]))(self, var8, var15); /* substring on <self:String>*/
}
var = var16;
goto RET_LABEL;
} else {
var = ((val*)NULL);
goto RET_LABEL;
}
RET_LABEL:;
return var;
}
/* method file#String#files for (self: String): Array[String] */
val* core__file___String___files(val* self) {
val* var /* : Array[String] */;
val* var1 /* : Array[String] */;
val* var_res /* var res: Array[String] */;
val* var2 /* : NativeDir */;
char* var3 /* : CString */;
val* var4 /* : NativeDir */;
val* var_d /* var d: NativeDir */;
short int var5 /* : Bool */;
short int var7 /* : Bool */;
void* var8 /* : Pointer for extern */;
char* var9 /* : CString */;
char* var11 /* : CString */;
void* var12 /* : NativeDir for extern */;
char* var_de /* var de: CString */;
short int var13 /* : Bool */;
short int var15 /* : Bool */;
val* var16 /* : Pointer */;
void* var17 /* : Pointer for extern */;
val* var18 /* : String */;
val* var_name /* var name: String */;
short int var19 /* : Bool */;
static val* varonce;
val* var20 /* : String */;
char* var21 /* : CString */;
val* var22 /* : String */;
short int var23 /* : Bool */;
short int var_ /* var : Bool */;
static val* varonce24;
val* var25 /* : String */;
char* var26 /* : CString */;
val* var27 /* : String */;
short int var28 /* : Bool */;
void* var31 /* : NativeDir for extern */;
var1 = NEW_core__Array(&type_core__Array__core__String);
{
core___core__Array___core__kernel__Object__init(var1); /* Direct call array#Array#init on <var1:Array[String]>*/
}
var_res = var1;
var2 = NEW_core__file__NativeDir(&type_core__file__NativeDir);
{
var3 = ((char*(*)(val* self))(self->class->vft[COLOR_core__abstract_text__Text__to_cstring]))(self); /* to_cstring on <self:String>*/
}
{
var4 = core__file___core__file__NativeDir___opendir(var2, var3);
}
var_d = var4;
{
{ /* Inline kernel#Pointer#address_is_null (var_d) on <var_d:NativeDir> */
var8 = ((struct instance_core__Pointer*)var_d)->value; /* unboxing NativeDir */
var7 = kernel___Pointer_address_is_null___impl(var8);
var5 = var7;
goto RET_LABEL6;
RET_LABEL6:(void)0;
}
}
if (var5){
var = var_res;
goto RET_LABEL;
} else {
}
for(;;) {
{
{ /* Inline file#NativeDir#readdir (var_d) on <var_d:NativeDir> */
var12 = ((struct instance_core__Pointer*)var_d)->value; /* unboxing NativeDir */
var11 = file___NativeDir_readdir___impl(var12);
var9 = var11;
goto RET_LABEL10;
RET_LABEL10:(void)0;
}
}
var_de = var9;
{
{ /* Inline kernel#Pointer#address_is_null (var_de) on <var_de:CString> */
var16 = BOX_core__Pointer(var_de); /* autobox from CString to Pointer */
var17 = ((struct instance_core__Pointer*)var16)->value; /* unboxing Pointer */
var15 = kernel___Pointer_address_is_null___impl(var17);
var13 = var15;
goto RET_LABEL14;
RET_LABEL14:(void)0;
}
}
if (var13){
goto BREAK_label;
} else {
}
{
var18 = core__flat___CString___core__abstract_text__Object__to_s(var_de);
}
var_name = var18;
if (likely(varonce!=NULL)) {
var20 = varonce;
} else {
var21 = ".";
var22 = core__abstract_text___CString___to_s_full(var21, 1l, 1l);
var20 = var22;
varonce = var20;
}
{
var23 = ((short int(*)(val* self, val* p0))(var_name->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_name, var20); /* == on <var_name:String>*/
}
var_ = var23;
if (var23){
var19 = var_;
} else {
if (likely(varonce24!=NULL)) {
var25 = varonce24;
} else {
var26 = "..";
var27 = core__abstract_text___CString___to_s_full(var26, 2l, 2l);
var25 = var27;
varonce24 = var25;
}
{
var28 = ((short int(*)(val* self, val* p0))(var_name->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_name, var25); /* == on <var_name:String>*/
}
var19 = var28;
}
if (var19){
goto BREAK_label29;
} else {
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_res, var_name); /* Direct call array#Array#add on <var_res:Array[String]>*/
}
BREAK_label29: (void)0;
}
BREAK_label: (void)0;
{
{ /* Inline file#NativeDir#closedir (var_d) on <var_d:NativeDir> */
var31 = ((struct instance_core__Pointer*)var_d)->value; /* unboxing NativeDir */
file___NativeDir_closedir___impl(var31);
RET_LABEL30:(void)0;
}
}
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method file#FlatString#write_native_to for (self: FlatString, FileWriter) */
void core__file___FlatString___Text__write_native_to(val* self, val* p0) {
val* var_s /* var s: FileWriter */;
char* var /* : CString */;
char* var2 /* : CString */;
long var3 /* : Int */;
long var5 /* : Int */;
long var6 /* : Int */;
long var8 /* : Int */;
var_s = p0;
{
{ /* Inline abstract_text#FlatText#items (self) on <self:FlatString> */
var2 = self->attrs[COLOR_core__abstract_text__FlatText___items].str; /* _items on <self:FlatString> */
var = var2;
RET_LABEL1:(void)0;
}
}
{
{ /* Inline flat#FlatString#first_byte (self) on <self:FlatString> */
var5 = self->attrs[COLOR_core__flat__FlatString___first_byte].l; /* _first_byte on <self:FlatString> */
var3 = var5;
RET_LABEL4:(void)0;
}
}
{
{ /* Inline abstract_text#FlatText#byte_length (self) on <self:FlatString> */
var8 = self->attrs[COLOR_core__abstract_text__FlatText___byte_length].l; /* _byte_length on <self:FlatString> */
var6 = var8;
RET_LABEL7:(void)0;
}
}
{
core___core__FileWriter___write_native(var_s, var, var3, var6); /* Direct call file#FileWriter#write_native on <var_s:FileWriter>*/
}
RET_LABEL:;
}
/* method file#FlatString#file_extension for (self: FlatString): nullable String */
val* core__file___FlatString___String__file_extension(val* self) {
val* var /* : nullable String */;
char* var1 /* : CString */;
char* var_its /* var its: CString */;
long var2 /* : Int */;
long var_p /* var p: Int */;
unsigned char var3 /* : Byte */;
unsigned char var5 /* : Byte */;
unsigned char var_c /* var c: Byte */;
long var6 /* : Int */;
long var_st /* var st: Int */;
short int var7 /* : Bool */;
short int var8 /* : Bool */;
short int var10 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var11 /* : Bool */;
short int var_ /* var : Bool */;
unsigned char var12 /* : Byte */;
short int var13 /* : Bool */;
short int var15 /* : Bool */;
short int var16 /* : Bool */;
long var17 /* : Int */;
short int var19 /* : Bool */;
int cltype20;
int idtype21;
const char* var_class_name22;
long var23 /* : Int */;
unsigned char var24 /* : Byte */;
unsigned char var26 /* : Byte */;
short int var27 /* : Bool */;
short int var29 /* : Bool */;
int cltype30;
int idtype31;
const char* var_class_name32;
short int var33 /* : Bool */;
long var34 /* : Int */;
long var_ls /* var ls: Int */;
val* var35 /* : FlatString */;
long var36 /* : Int */;
short int var38 /* : Bool */;
int cltype39;
int idtype40;
const char* var_class_name41;
long var42 /* : Int */;
long var43 /* : Int */;
short int var45 /* : Bool */;
int cltype46;
int idtype47;
const char* var_class_name48;
long var49 /* : Int */;
val* var50 /* : FlatString */;
var1 = self->attrs[COLOR_core__abstract_text__FlatText___items].str; /* _items on <self:FlatString> */
var_its = var1;
{
var2 = core__flat___FlatText___last_byte(self);
}
var_p = var2;
{
{ /* Inline native#CString#[] (var_its,var_p) on <var_its:CString> */
var5 = (unsigned char)((int)var_its[var_p]);
var3 = var5;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
}
var_c = var3;
var6 = self->attrs[COLOR_core__flat__FlatString___first_byte].l; /* _first_byte on <self:FlatString> */
var_st = var6;
for(;;) {
{
{ /* Inline kernel#Int#>= (var_p,var_st) on <var_p:Int> */
/* Covariant cast for argument 0 (i) <var_st:Int> isa OTHER */
/* <var_st:Int> isa OTHER */
var10 = 1; /* easy <var_st:Int> isa OTHER*/
if (unlikely(!var10)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 726);
fatal_exit(1);
}
var11 = var_p >= var_st;
var8 = var11;
goto RET_LABEL9;
RET_LABEL9:(void)0;
}
}
var_ = var8;
if (var8){
{
var12 = core___core__Char___ascii('.');
}
{
{ /* Inline kernel#Byte#!= (var_c,var12) on <var_c:Byte> */
var15 = var_c == var12;
var16 = !var15;
var13 = var16;
goto RET_LABEL14;
RET_LABEL14:(void)0;
}
}
var7 = var13;
} else {
var7 = var_;
}
if (var7){
{
{ /* Inline kernel#Int#- (var_p,1l) on <var_p:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var19 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var19)) {
var_class_name22 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name22);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var23 = var_p - 1l;
var17 = var23;
goto RET_LABEL18;
RET_LABEL18:(void)0;
}
}
var_p = var17;
{
{ /* Inline native#CString#[] (var_its,var_p) on <var_its:CString> */
var26 = (unsigned char)((int)var_its[var_p]);
var24 = var26;
goto RET_LABEL25;
RET_LABEL25:(void)0;
}
}
var_c = var24;
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
{ /* Inline kernel#Int#<= (var_p,var_st) on <var_p:Int> */
/* Covariant cast for argument 0 (i) <var_st:Int> isa OTHER */
/* <var_st:Int> isa OTHER */
var29 = 1; /* easy <var_st:Int> isa OTHER*/
if (unlikely(!var29)) {
var_class_name32 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name32);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 724);
fatal_exit(1);
}
var33 = var_p <= var_st;
var27 = var33;
goto RET_LABEL28;
RET_LABEL28:(void)0;
}
}
if (var27){
var = ((val*)NULL);
goto RET_LABEL;
} else {
}
{
var34 = core__flat___FlatText___last_byte(self);
}
var_ls = var34;
var35 = NEW_core__FlatString(&type_core__FlatString);
{
{ /* Inline kernel#Int#- (var_ls,var_p) on <var_ls:Int> */
/* Covariant cast for argument 0 (i) <var_p:Int> isa OTHER */
/* <var_p:Int> isa OTHER */
var38 = 1; /* easy <var_p:Int> isa OTHER*/
if (unlikely(!var38)) {
var_class_name41 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name41);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var42 = var_ls - var_p;
var36 = var42;
goto RET_LABEL37;
RET_LABEL37:(void)0;
}
}
{
{ /* Inline kernel#Int#+ (var_p,1l) on <var_p:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var45 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var45)) {
var_class_name48 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name48);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var49 = var_p + 1l;
var43 = var49;
goto RET_LABEL44;
RET_LABEL44:(void)0;
}
}
{
var50 = core___core__FlatString___with_infos(var35, var_its, var36, var43);
}
var = var50;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method file#FlatString#basename for (self: FlatString, nullable String): String */
val* core__file___FlatString___String__basename(val* self, val* p0) {
val* var /* : String */;
val* var_extension /* var extension: nullable String */;
val* var1 /* : Sys */;
short int var2 /* : Bool */;
short int var4 /* : Bool */;
long var5 /* : Int */;
long var_l /* var l: Int */;
char* var6 /* : CString */;
char* var_its /* var its: CString */;
long var7 /* : Int */;
long var_min /* var min: Int */;
unsigned char var8 /* : Byte */;
unsigned char var_sl /* var sl: Byte */;
unsigned char var9 /* : Byte */;
unsigned char var_ls /* var ls: Byte */;
short int var10 /* : Bool */;
short int var11 /* : Bool */;
short int var13 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var14 /* : Bool */;
short int var_ /* var : Bool */;
short int var15 /* : Bool */;
unsigned char var16 /* : Byte */;
unsigned char var18 /* : Byte */;
short int var19 /* : Bool */;
short int var21 /* : Bool */;
short int var_22 /* var : Bool */;
unsigned char var23 /* : Byte */;
unsigned char var25 /* : Byte */;
short int var26 /* : Bool */;
short int var28 /* : Bool */;
long var29 /* : Int */;
short int var31 /* : Bool */;
int cltype32;
int idtype33;
const char* var_class_name34;
long var35 /* : Int */;
short int var36 /* : Bool */;
short int var38 /* : Bool */;
static val* varonce;
val* var39 /* : String */;
char* var40 /* : CString */;
val* var41 /* : String */;
long var_ns /* var ns: Int */;
short int var42 /* : Bool */;
short int var43 /* : Bool */;
short int var44 /* : Bool */;
short int var46 /* : Bool */;
int cltype47;
int idtype48;
const char* var_class_name49;
short int var50 /* : Bool */;
short int var_51 /* var : Bool */;
unsigned char var52 /* : Byte */;
unsigned char var54 /* : Byte */;
short int var55 /* : Bool */;
short int var57 /* : Bool */;
short int var58 /* : Bool */;
short int var_59 /* var : Bool */;
unsigned char var60 /* : Byte */;
unsigned char var62 /* : Byte */;
short int var63 /* : Bool */;
short int var65 /* : Bool */;
short int var66 /* : Bool */;
long var67 /* : Int */;
short int var69 /* : Bool */;
int cltype70;
int idtype71;
const char* var_class_name72;
long var73 /* : Int */;
val* var75 /* : FlatString */;
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
val* var90 /* : FlatString */;
val* var_bname /* var bname: nullable Object */;
long var91 /* : Int */;
long var_l92 /* var l: Int */;
char* var93 /* : CString */;
char* var_its94 /* var its: CString */;
long var95 /* : Int */;
long var_min96 /* var min: Int */;
unsigned char var97 /* : Byte */;
unsigned char var_sl98 /* var sl: Byte */;
short int var99 /* : Bool */;
short int var100 /* : Bool */;
short int var102 /* : Bool */;
int cltype103;
int idtype104;
const char* var_class_name105;
short int var106 /* : Bool */;
short int var_107 /* var : Bool */;
unsigned char var108 /* : Byte */;
unsigned char var110 /* : Byte */;
short int var111 /* : Bool */;
short int var113 /* : Bool */;
long var114 /* : Int */;
short int var116 /* : Bool */;
int cltype117;
int idtype118;
const char* var_class_name119;
long var120 /* : Int */;
short int var122 /* : Bool */;
short int var124 /* : Bool */;
static val* varonce125;
val* var126 /* : String */;
char* var127 /* : CString */;
val* var128 /* : String */;
long var_ns129 /* var ns: Int */;
short int var130 /* : Bool */;
short int var131 /* : Bool */;
short int var133 /* : Bool */;
int cltype134;
int idtype135;
const char* var_class_name136;
short int var137 /* : Bool */;
short int var_138 /* var : Bool */;
unsigned char var139 /* : Byte */;
unsigned char var141 /* : Byte */;
short int var142 /* : Bool */;
short int var144 /* : Bool */;
short int var145 /* : Bool */;
long var146 /* : Int */;
short int var148 /* : Bool */;
int cltype149;
int idtype150;
const char* var_class_name151;
long var152 /* : Int */;
val* var154 /* : FlatString */;
long var155 /* : Int */;
short int var157 /* : Bool */;
int cltype158;
int idtype159;
const char* var_class_name160;
long var161 /* : Int */;
long var162 /* : Int */;
short int var164 /* : Bool */;
int cltype165;
int idtype166;
const char* var_class_name167;
long var168 /* : Int */;
val* var169 /* : FlatString */;
val* var170 /* : String */;
short int var171 /* : Bool */;
short int var172 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var174 /* : Bool */;
short int var175 /* : Bool */;
val* var176 /* : String */;
var_extension = p0;
var1 = glob_sys;
{
{ /* Inline kernel#Sys#is_windows (var1) on <var1:Sys> */
struct nitni_instance* var_for_c_0;
var_for_c_0 = nit_alloc(sizeof(struct nitni_instance));
var_for_c_0->value = var1;
var4 = kernel___Sys_is_windows___impl(var_for_c_0);
var2 = var4;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
}
if (var2){
{
var5 = core__flat___FlatText___last_byte(self);
}
var_l = var5;
var6 = self->attrs[COLOR_core__abstract_text__FlatText___items].str; /* _items on <self:FlatString> */
var_its = var6;
var7 = self->attrs[COLOR_core__flat__FlatString___first_byte].l; /* _first_byte on <self:FlatString> */
var_min = var7;
{
var8 = core___core__Char___ascii('/');
}
var_sl = var8;
{
var9 = core___core__Char___ascii('\\');
}
var_ls = var9;
for(;;) {
{
{ /* Inline kernel#Int#> (var_l,var_min) on <var_l:Int> */
/* Covariant cast for argument 0 (i) <var_min:Int> isa OTHER */
/* <var_min:Int> isa OTHER */
var13 = 1; /* easy <var_min:Int> isa OTHER*/
if (unlikely(!var13)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 727);
fatal_exit(1);
}
var14 = var_l > var_min;
var11 = var14;
goto RET_LABEL12;
RET_LABEL12:(void)0;
}
}
var_ = var11;
if (var11){
{
{ /* Inline native#CString#[] (var_its,var_l) on <var_its:CString> */
var18 = (unsigned char)((int)var_its[var_l]);
var16 = var18;
goto RET_LABEL17;
RET_LABEL17:(void)0;
}
}
{
{ /* Inline kernel#Byte#== (var16,var_sl) on <var16:Byte> */
var21 = var16 == var_sl;
var19 = var21;
goto RET_LABEL20;
RET_LABEL20:(void)0;
}
}
var_22 = var19;
if (var19){
var15 = var_22;
} else {
{
{ /* Inline native#CString#[] (var_its,var_l) on <var_its:CString> */
var25 = (unsigned char)((int)var_its[var_l]);
var23 = var25;
goto RET_LABEL24;
RET_LABEL24:(void)0;
}
}
{
{ /* Inline kernel#Byte#== (var23,var_ls) on <var23:Byte> */
var28 = var23 == var_ls;
var26 = var28;
goto RET_LABEL27;
RET_LABEL27:(void)0;
}
}
var15 = var26;
}
var10 = var15;
} else {
var10 = var_;
}
if (var10){
{
{ /* Inline kernel#Int#- (var_l,1l) on <var_l:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var31 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var31)) {
var_class_name34 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name34);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var35 = var_l - 1l;
var29 = var35;
goto RET_LABEL30;
RET_LABEL30:(void)0;
}
}
var_l = var29;
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
{ /* Inline kernel#Int#== (var_l,var_min) on <var_l:Int> */
var38 = var_l == var_min;
var36 = var38;
goto RET_LABEL37;
RET_LABEL37:(void)0;
}
}
if (var36){
if (likely(varonce!=NULL)) {
var39 = varonce;
} else {
var40 = "\\";
var41 = core__abstract_text___CString___to_s_full(var40, 1l, 1l);
var39 = var41;
varonce = var39;
}
var = var39;
goto RET_LABEL;
} else {
}
var_ns = var_l;
for(;;) {
{
{ /* Inline kernel#Int#>= (var_ns,var_min) on <var_ns:Int> */
/* Covariant cast for argument 0 (i) <var_min:Int> isa OTHER */
/* <var_min:Int> isa OTHER */
var46 = 1; /* easy <var_min:Int> isa OTHER*/
if (unlikely(!var46)) {
var_class_name49 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name49);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 726);
fatal_exit(1);
}
var50 = var_ns >= var_min;
var44 = var50;
goto RET_LABEL45;
RET_LABEL45:(void)0;
}
}
var_51 = var44;
if (var44){
{
{ /* Inline native#CString#[] (var_its,var_ns) on <var_its:CString> */
var54 = (unsigned char)((int)var_its[var_ns]);
var52 = var54;
goto RET_LABEL53;
RET_LABEL53:(void)0;
}
}
{
{ /* Inline kernel#Byte#!= (var52,var_sl) on <var52:Byte> */
var57 = var52 == var_sl;
var58 = !var57;
var55 = var58;
goto RET_LABEL56;
RET_LABEL56:(void)0;
}
}
var43 = var55;
} else {
var43 = var_51;
}
var_59 = var43;
if (var43){
{
{ /* Inline native#CString#[] (var_its,var_ns) on <var_its:CString> */
var62 = (unsigned char)((int)var_its[var_ns]);
var60 = var62;
goto RET_LABEL61;
RET_LABEL61:(void)0;
}
}
{
{ /* Inline kernel#Byte#!= (var60,var_ls) on <var60:Byte> */
var65 = var60 == var_ls;
var66 = !var65;
var63 = var66;
goto RET_LABEL64;
RET_LABEL64:(void)0;
}
}
var42 = var63;
} else {
var42 = var_59;
}
if (var42){
{
{ /* Inline kernel#Int#- (var_ns,1l) on <var_ns:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var69 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var69)) {
var_class_name72 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name72);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var73 = var_ns - 1l;
var67 = var73;
goto RET_LABEL68;
RET_LABEL68:(void)0;
}
}
var_ns = var67;
} else {
goto BREAK_label74;
}
}
BREAK_label74: (void)0;
var75 = NEW_core__FlatString(&type_core__FlatString);
{
{ /* Inline kernel#Int#- (var_l,var_ns) on <var_l:Int> */
/* Covariant cast for argument 0 (i) <var_ns:Int> isa OTHER */
/* <var_ns:Int> isa OTHER */
var78 = 1; /* easy <var_ns:Int> isa OTHER*/
if (unlikely(!var78)) {
var_class_name81 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name81);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var82 = var_l - var_ns;
var76 = var82;
goto RET_LABEL77;
RET_LABEL77:(void)0;
}
}
{
{ /* Inline kernel#Int#+ (var_ns,1l) on <var_ns:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var85 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var85)) {
var_class_name88 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name88);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var89 = var_ns + 1l;
var83 = var89;
goto RET_LABEL84;
RET_LABEL84:(void)0;
}
}
{
var90 = core___core__FlatString___with_infos(var75, var_its, var76, var83);
}
var_bname = var90;
} else {
{
var91 = core__flat___FlatText___last_byte(self);
}
var_l92 = var91;
var93 = self->attrs[COLOR_core__abstract_text__FlatText___items].str; /* _items on <self:FlatString> */
var_its94 = var93;
var95 = self->attrs[COLOR_core__flat__FlatString___first_byte].l; /* _first_byte on <self:FlatString> */
var_min96 = var95;
{
var97 = core___core__Char___ascii('/');
}
var_sl98 = var97;
for(;;) {
{
{ /* Inline kernel#Int#> (var_l92,var_min96) on <var_l92:Int> */
/* Covariant cast for argument 0 (i) <var_min96:Int> isa OTHER */
/* <var_min96:Int> isa OTHER */
var102 = 1; /* easy <var_min96:Int> isa OTHER*/
if (unlikely(!var102)) {
var_class_name105 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name105);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 727);
fatal_exit(1);
}
var106 = var_l92 > var_min96;
var100 = var106;
goto RET_LABEL101;
RET_LABEL101:(void)0;
}
}
var_107 = var100;
if (var100){
{
{ /* Inline native#CString#[] (var_its94,var_l92) on <var_its94:CString> */
var110 = (unsigned char)((int)var_its94[var_l92]);
var108 = var110;
goto RET_LABEL109;
RET_LABEL109:(void)0;
}
}
{
{ /* Inline kernel#Byte#== (var108,var_sl98) on <var108:Byte> */
var113 = var108 == var_sl98;
var111 = var113;
goto RET_LABEL112;
RET_LABEL112:(void)0;
}
}
var99 = var111;
} else {
var99 = var_107;
}
if (var99){
{
{ /* Inline kernel#Int#- (var_l92,1l) on <var_l92:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var116 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var116)) {
var_class_name119 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name119);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var120 = var_l92 - 1l;
var114 = var120;
goto RET_LABEL115;
RET_LABEL115:(void)0;
}
}
var_l92 = var114;
} else {
goto BREAK_label121;
}
}
BREAK_label121: (void)0;
{
{ /* Inline kernel#Int#== (var_l92,var_min96) on <var_l92:Int> */
var124 = var_l92 == var_min96;
var122 = var124;
goto RET_LABEL123;
RET_LABEL123:(void)0;
}
}
if (var122){
if (likely(varonce125!=NULL)) {
var126 = varonce125;
} else {
var127 = "/";
var128 = core__abstract_text___CString___to_s_full(var127, 1l, 1l);
var126 = var128;
varonce125 = var126;
}
var = var126;
goto RET_LABEL;
} else {
}
var_ns129 = var_l92;
for(;;) {
{
{ /* Inline kernel#Int#>= (var_ns129,var_min96) on <var_ns129:Int> */
/* Covariant cast for argument 0 (i) <var_min96:Int> isa OTHER */
/* <var_min96:Int> isa OTHER */
var133 = 1; /* easy <var_min96:Int> isa OTHER*/
if (unlikely(!var133)) {
var_class_name136 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name136);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 726);
fatal_exit(1);
}
var137 = var_ns129 >= var_min96;
var131 = var137;
goto RET_LABEL132;
RET_LABEL132:(void)0;
}
}
var_138 = var131;
if (var131){
{
{ /* Inline native#CString#[] (var_its94,var_ns129) on <var_its94:CString> */
var141 = (unsigned char)((int)var_its94[var_ns129]);
var139 = var141;
goto RET_LABEL140;
RET_LABEL140:(void)0;
}
}
{
{ /* Inline kernel#Byte#!= (var139,var_sl98) on <var139:Byte> */
var144 = var139 == var_sl98;
var145 = !var144;
var142 = var145;
goto RET_LABEL143;
RET_LABEL143:(void)0;
}
}
var130 = var142;
} else {
var130 = var_138;
}
if (var130){
{
{ /* Inline kernel#Int#- (var_ns129,1l) on <var_ns129:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var148 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var148)) {
var_class_name151 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name151);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var152 = var_ns129 - 1l;
var146 = var152;
goto RET_LABEL147;
RET_LABEL147:(void)0;
}
}
var_ns129 = var146;
} else {
goto BREAK_label153;
}
}
BREAK_label153: (void)0;
var154 = NEW_core__FlatString(&type_core__FlatString);
{
{ /* Inline kernel#Int#- (var_l92,var_ns129) on <var_l92:Int> */
/* Covariant cast for argument 0 (i) <var_ns129:Int> isa OTHER */
/* <var_ns129:Int> isa OTHER */
var157 = 1; /* easy <var_ns129:Int> isa OTHER*/
if (unlikely(!var157)) {
var_class_name160 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name160);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var161 = var_l92 - var_ns129;
var155 = var161;
goto RET_LABEL156;
RET_LABEL156:(void)0;
}
}
{
{ /* Inline kernel#Int#+ (var_ns129,1l) on <var_ns129:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var164 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var164)) {
var_class_name167 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name167);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var168 = var_ns129 + 1l;
var162 = var168;
goto RET_LABEL163;
RET_LABEL163:(void)0;
}
}
{
var169 = core___core__FlatString___with_infos(var154, var_its94, var155, var162);
}
var_bname = var169;
}
if (var_extension == NULL) {
var171 = 0; /* is null */
} else {
var171 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_extension,((val*)NULL)) on <var_extension:nullable String> */
var_other = ((val*)NULL);
{
var174 = ((short int(*)(val* self, val* p0))(var_extension->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_extension, var_other); /* == on <var_extension:nullable String(String)>*/
}
var175 = !var174;
var172 = var175;
goto RET_LABEL173;
RET_LABEL173:(void)0;
}
var171 = var172;
}
if (var171){
{
var176 = core__file___String___strip_extension(var_bname, var_extension);
}
var170 = var176;
} else {
var170 = var_bname;
}
var = var170;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method file#CString#file_exists for (self: CString): Bool */
short int core__file___CString___file_exists(char* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = file___CString_file_exists___impl(self);
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method file#CString#file_stat for (self: CString): NativeFileStat */
val* core__file___CString___file_stat(char* self) {
val* var /* : NativeFileStat */;
val* var1 /* : NativeFileStat */;
val* var2 /* : NativeFileStat */;
var1 = file___CString_file_stat___impl(self);
var2 = BOX_core__Pointer(var1); /* boxing NativeFileStat */
var2->type = &type_core__file__NativeFileStat;
var2->class = &class_core__file__NativeFileStat;
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method file#CString#file_lstat for (self: CString): NativeFileStat */
val* core__file___CString___file_lstat(char* self) {
val* var /* : NativeFileStat */;
val* var1 /* : NativeFileStat */;
val* var2 /* : NativeFileStat */;
var1 = file___CString_file_lstat___impl(self);
var2 = BOX_core__Pointer(var1); /* boxing NativeFileStat */
var2->type = &type_core__file__NativeFileStat;
var2->class = &class_core__file__NativeFileStat;
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method file#CString#file_mkdir for (self: CString, Int): Bool */
short int core__file___CString___file_mkdir(char* self, long p0) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = file___CString_file_mkdir___impl(self, p0);
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method file#CString#rmdir for (self: CString): Bool */
short int core__file___CString___rmdir(char* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = file___CString_rmdir___impl(self);
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method file#CString#file_delete for (self: CString): Bool */
short int core__file___CString___file_delete(char* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = file___CString_file_delete___impl(self);
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method file#CString#file_realpath for (self: CString): CString */
char* core__file___CString___file_realpath(char* self) {
char* var /* : CString */;
char* var1 /* : CString */;
var1 = file___CString_file_realpath___impl(self);
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method file#NativeFileStat#is_dir for (self: NativeFileStat): Bool */
short int core__file___core__file__NativeFileStat___is_dir(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
void* var2 /* : NativeFileStat for extern */;
var2 = ((struct instance_core__Pointer*)self)->value; /* unboxing NativeFileStat */
var1 = file___NativeFileStat_is_dir___impl(var2);
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method file#NativeFile#io_read for (self: NativeFile, CString, Int): Int */
long core__file___core__file__NativeFile___io_read(val* self, char* p0, long p1) {
long var /* : Int */;
long var1 /* : Int */;
void* var2 /* : NativeFile for extern */;
var2 = ((struct instance_core__Pointer*)self)->value; /* unboxing NativeFile */
var1 = file___NativeFile_io_read___impl(var2, p0, p1);
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method file#NativeFile#io_write for (self: NativeFile, CString, Int, Int): Int */
long core__file___core__file__NativeFile___io_write(val* self, char* p0, long p1, long p2) {
long var /* : Int */;
long var1 /* : Int */;
void* var2 /* : NativeFile for extern */;
var2 = ((struct instance_core__Pointer*)self)->value; /* unboxing NativeFile */
var1 = file___NativeFile_io_write___impl(var2, p0, p1, p2);
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method file#NativeFile#io_close for (self: NativeFile): Int */
long core__file___core__file__NativeFile___io_close(val* self) {
long var /* : Int */;
long var1 /* : Int */;
void* var2 /* : NativeFile for extern */;
var2 = ((struct instance_core__Pointer*)self)->value; /* unboxing NativeFile */
var1 = file___NativeFile_io_close___impl(var2);
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method file#NativeFile#ferror for (self: NativeFile): Bool */
short int core__file___core__file__NativeFile___ferror(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
void* var2 /* : NativeFile for extern */;
var2 = ((struct instance_core__Pointer*)self)->value; /* unboxing NativeFile */
var1 = file___NativeFile_ferror___impl(var2);
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method file#NativeFile#set_buffering_type for (self: NativeFile, Int, Int): Int */
long core__file___core__file__NativeFile___set_buffering_type(val* self, long p0, long p1) {
long var /* : Int */;
long var1 /* : Int */;
void* var2 /* : NativeFile for extern */;
var2 = ((struct instance_core__Pointer*)self)->value; /* unboxing NativeFile */
var1 = file___NativeFile_set_buffering_type___impl(var2, p0, p1);
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method file#NativeFile#io_open_read for (self: NativeFile, CString): NativeFile */
val* core__file___core__file__NativeFile___io_open_read(val* self, char* p0) {
val* var /* : NativeFile */;
val* var1 /* : NativeFile */;
val* var2 /* : NativeFile */;
var1 = file___new_NativeFile_io_open_read___impl(p0);
var2 = BOX_core__Pointer(var1); /* boxing NativeFile */
var2->type = &type_core__file__NativeFile;
var2->class = &class_core__file__NativeFile;
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method file#NativeFile#io_open_write for (self: NativeFile, CString): NativeFile */
val* core__file___core__file__NativeFile___io_open_write(val* self, char* p0) {
val* var /* : NativeFile */;
val* var1 /* : NativeFile */;
val* var2 /* : NativeFile */;
var1 = file___new_NativeFile_io_open_write___impl(p0);
var2 = BOX_core__Pointer(var1); /* boxing NativeFile */
var2->type = &type_core__file__NativeFile;
var2->class = &class_core__file__NativeFile;
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method file#NativeFile#native_stdin for (self: NativeFile): NativeFile */
val* core__file___core__file__NativeFile___native_stdin(val* self) {
val* var /* : NativeFile */;
val* var1 /* : NativeFile */;
val* var2 /* : NativeFile */;
var1 = file___new_NativeFile_native_stdin___impl();
var2 = BOX_core__Pointer(var1); /* boxing NativeFile */
var2->type = &type_core__file__NativeFile;
var2->class = &class_core__file__NativeFile;
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method file#NativeFile#native_stdout for (self: NativeFile): NativeFile */
val* core__file___core__file__NativeFile___native_stdout(val* self) {
val* var /* : NativeFile */;
val* var1 /* : NativeFile */;
val* var2 /* : NativeFile */;
var1 = file___new_NativeFile_native_stdout___impl();
var2 = BOX_core__Pointer(var1); /* boxing NativeFile */
var2->type = &type_core__file__NativeFile;
var2->class = &class_core__file__NativeFile;
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method file#NativeFile#native_stderr for (self: NativeFile): NativeFile */
val* core__file___core__file__NativeFile___native_stderr(val* self) {
val* var /* : NativeFile */;
val* var1 /* : NativeFile */;
val* var2 /* : NativeFile */;
var1 = file___new_NativeFile_native_stderr___impl();
var2 = BOX_core__Pointer(var1); /* boxing NativeFile */
var2->type = &type_core__file__NativeFile;
var2->class = &class_core__file__NativeFile;
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method file#NativeDir#opendir for (self: NativeDir, CString): NativeDir */
val* core__file___core__file__NativeDir___opendir(val* self, char* p0) {
val* var /* : NativeDir */;
val* var1 /* : NativeDir */;
val* var2 /* : NativeDir */;
var1 = file___new_NativeDir_opendir___impl(p0);
var2 = BOX_core__Pointer(var1); /* boxing NativeDir */
var2->type = &type_core__file__NativeDir;
var2->class = &class_core__file__NativeDir;
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method file#NativeDir#closedir for (self: NativeDir) */
void core__file___core__file__NativeDir___closedir(val* self) {
void* var /* : NativeDir for extern */;
var = ((struct instance_core__Pointer*)self)->value; /* unboxing NativeDir */
file___NativeDir_closedir___impl(var);
RET_LABEL:;
}
/* method file#NativeDir#readdir for (self: NativeDir): CString */
char* core__file___core__file__NativeDir___readdir(val* self) {
char* var /* : CString */;
char* var1 /* : CString */;
void* var2 /* : NativeDir for extern */;
var2 = ((struct instance_core__Pointer*)self)->value; /* unboxing NativeDir */
var1 = file___NativeDir_readdir___impl(var2);
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method file#Sys#stdout for (self: Sys): Writer */
val* core__file___Sys___stdout(val* self) {
val* var /* : Writer */;
short int var1 /* : Bool */;
val* var2 /* : Writer */;
val* var3 /* : Stdout */;
var1 = self->attrs[COLOR_core__file__Sys___stdout].val != NULL; /* _stdout on <self:Sys> */
if(likely(var1)) {
var2 = self->attrs[COLOR_core__file__Sys___stdout].val; /* _stdout on <self:Sys> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _stdout");
PRINT_ERROR(" (%s:%d)\n", FILE_core__file, 1577);
fatal_exit(1);
}
} else {
var3 = NEW_core__Stdout(&type_core__Stdout);
{
core___core__Stdout___core__kernel__Object__init(var3); /* Direct call file#Stdout#init on <var3:Stdout>*/
}
self->attrs[COLOR_core__file__Sys___stdout].val = var3; /* _stdout on <self:Sys> */
var2 = var3;
}
var = var2;
RET_LABEL:;
return var;
}
/* method file#Sys#stderr for (self: Sys): Writer */
val* core__file___Sys___stderr(val* self) {
val* var /* : Writer */;
short int var1 /* : Bool */;
val* var2 /* : Writer */;
val* var3 /* : Stderr */;
var1 = self->attrs[COLOR_core__file__Sys___stderr].val != NULL; /* _stderr on <self:Sys> */
if(likely(var1)) {
var2 = self->attrs[COLOR_core__file__Sys___stderr].val; /* _stderr on <self:Sys> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _stderr");
PRINT_ERROR(" (%s:%d)\n", FILE_core__file, 1580);
fatal_exit(1);
}
} else {
var3 = NEW_core__Stderr(&type_core__Stderr);
{
core___core__Stderr___core__kernel__Object__init(var3); /* Direct call file#Stderr#init on <var3:Stderr>*/
}
self->attrs[COLOR_core__file__Sys___stderr].val = var3; /* _stderr on <self:Sys> */
var2 = var3;
}
var = var2;
RET_LABEL:;
return var;
}
/* method file#Sys#buffer_mode_line for (self: Sys): Int */
long core__file___Sys___buffer_mode_line(val* self) {
long var /* : Int */;
long var1 /* : Int */;
struct nitni_instance* var_for_c_0;
var_for_c_0 = nit_alloc(sizeof(struct nitni_instance));
var_for_c_0->value = self;
var1 = file___Sys_buffer_mode_line___impl(var_for_c_0);
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method file#Sys#read_only for (self: Sys): CString */
char* core__file___Sys___read_only(val* self) {
char* var /* : CString */;
static char* varonce;
static int varonce_guard;
char* var1 /* : CString */;
static val* varonce2;
val* var3 /* : String */;
char* var4 /* : CString */;
val* var5 /* : String */;
char* var6 /* : CString */;
if (likely(varonce_guard)) {
var1 = varonce;
} else {
if (likely(varonce2!=NULL)) {
var3 = varonce2;
} else {
var4 = "r";
var5 = core__abstract_text___CString___to_s_full(var4, 1l, 1l);
var3 = var5;
varonce2 = var3;
}
{
var6 = ((char*(*)(val* self))(var3->class->vft[COLOR_core__abstract_text__Text__to_cstring]))(var3); /* to_cstring on <var3:String>*/
}
var1 = var6;
varonce = var1;
varonce_guard = 1;
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method file#Sys#printn for (self: Sys, Array[Object]) */
void core__file___Sys___printn(val* self, val* p0) {
val* var_objects /* var objects: Array[Object] */;
val* var /* : Sys */;
val* var2 /* : Sys */;
val* var3 /* : Writer */;
val* var4 /* : String */;
var_objects = p0;
{
{ /* Inline kernel#Object#sys (self) on <self:Sys> */
var2 = glob_sys;
var = var2;
goto RET_LABEL1;
RET_LABEL1:(void)0;
}
}
{
var3 = core__file___Sys___stdout(var);
}
{
var4 = core__flat___Array___core__abstract_text__Collection__plain_to_s(var_objects);
}
{
((void(*)(val* self, val* p0))(var3->class->vft[COLOR_core__stream__Writer__write]))(var3, var4); /* write on <var3:Writer>*/
}
RET_LABEL:;
}
/* method file#Sys#print for (self: Sys, Object) */
void core__file___Sys___print(val* self, val* p0) {
val* var_object /* var object: Object */;
val* var /* : Sys */;
val* var2 /* : Sys */;
val* var3 /* : Writer */;
val* var4 /* : String */;
val* var5 /* : Sys */;
val* var7 /* : Sys */;
val* var8 /* : Writer */;
static val* varonce;
val* var9 /* : String */;
char* var10 /* : CString */;
val* var11 /* : String */;
var_object = p0;
{
{ /* Inline kernel#Object#sys (self) on <self:Sys> */
var2 = glob_sys;
var = var2;
goto RET_LABEL1;
RET_LABEL1:(void)0;
}
}
{
var3 = core__file___Sys___stdout(var);
}
{
var4 = ((val*(*)(val* self))((((long)var_object&3)?class_info[((long)var_object&3)]:var_object->class)->vft[COLOR_core__abstract_text__Object__to_s]))(var_object); /* to_s on <var_object:Object>*/
}
{
((void(*)(val* self, val* p0))(var3->class->vft[COLOR_core__stream__Writer__write]))(var3, var4); /* write on <var3:Writer>*/
}
{
{ /* Inline kernel#Object#sys (self) on <self:Sys> */
var7 = glob_sys;
var5 = var7;
goto RET_LABEL6;
RET_LABEL6:(void)0;
}
}
{
var8 = core__file___Sys___stdout(var5);
}
if (likely(varonce!=NULL)) {
var9 = varonce;
} else {
var10 = "\n";
var11 = core__abstract_text___CString___to_s_full(var10, 1l, 1l);
var9 = var11;
varonce = var9;
}
{
((void(*)(val* self, val* p0))(var8->class->vft[COLOR_core__stream__Writer__write]))(var8, var9); /* write on <var8:Writer>*/
}
RET_LABEL:;
}
/* method file#Sys#print_error for (self: Sys, Object) */
void core__file___Sys___print_error(val* self, val* p0) {
val* var_object /* var object: Object */;
val* var /* : Sys */;
val* var2 /* : Sys */;
val* var3 /* : Writer */;
val* var4 /* : String */;
val* var5 /* : Sys */;
val* var7 /* : Sys */;
val* var8 /* : Writer */;
static val* varonce;
val* var9 /* : String */;
char* var10 /* : CString */;
val* var11 /* : String */;
var_object = p0;
{
{ /* Inline kernel#Object#sys (self) on <self:Sys> */
var2 = glob_sys;
var = var2;
goto RET_LABEL1;
RET_LABEL1:(void)0;
}
}
{
var3 = core__file___Sys___stderr(var);
}
{
var4 = ((val*(*)(val* self))((((long)var_object&3)?class_info[((long)var_object&3)]:var_object->class)->vft[COLOR_core__abstract_text__Object__to_s]))(var_object); /* to_s on <var_object:Object>*/
}
{
((void(*)(val* self, val* p0))(var3->class->vft[COLOR_core__stream__Writer__write]))(var3, var4); /* write on <var3:Writer>*/
}
{
{ /* Inline kernel#Object#sys (self) on <self:Sys> */
var7 = glob_sys;
var5 = var7;
goto RET_LABEL6;
RET_LABEL6:(void)0;
}
}
{
var8 = core__file___Sys___stderr(var5);
}
if (likely(varonce!=NULL)) {
var9 = varonce;
} else {
var10 = "\n";
var11 = core__abstract_text___CString___to_s_full(var10, 1l, 1l);
var9 = var11;
varonce = var9;
}
{
((void(*)(val* self, val* p0))(var8->class->vft[COLOR_core__stream__Writer__write]))(var8, var9); /* write on <var8:Writer>*/
}
RET_LABEL:;
}
/* method file#Sys#getcwd for (self: Sys): String */
val* core__file___Sys___getcwd(val* self) {
val* var /* : String */;
char* var1 /* : CString */;
char* var3 /* : CString */;
val* var4 /* : String */;
{
{ /* Inline file#Sys#native_getcwd (self) on <self:Sys> */
struct nitni_instance* var_for_c_0;
var_for_c_0 = nit_alloc(sizeof(struct nitni_instance));
var_for_c_0->value = self;
var3 = file___Sys_native_getcwd___impl(var_for_c_0);
var1 = var3;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
}
{
var4 = core__flat___CString___core__abstract_text__Object__to_s(var1);
}
var = var4;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method file#Sys#native_getcwd for (self: Sys): CString */
char* core__file___Sys___native_getcwd(val* self) {
char* var /* : CString */;
char* var1 /* : CString */;
struct nitni_instance* var_for_c_0;
var_for_c_0 = nit_alloc(sizeof(struct nitni_instance));
var_for_c_0->value = self;
var1 = file___Sys_native_getcwd___impl(var_for_c_0);
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
