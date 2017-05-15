#include "core__file.sep.0.h"
/* method file$FileStream$path for (self: FileStream): nullable String */
val* core___core__FileStream___path(val* self) {
val* var /* : nullable String */;
val* var1 /* : nullable String */;
var1 = self->attrs[COLOR_core__file__FileStream___path].val; /* _path on <self:FileStream> */
var = var1;
RET_LABEL:;
return var;
}
/* method file$FileStream$path= for (self: FileStream, nullable String) */
void core___core__FileStream___path_61d(val* self, val* p0) {
self->attrs[COLOR_core__file__FileStream___path].val = p0; /* _path on <self:FileStream> */
RET_LABEL:;
}
/* method file$FileStream$file for (self: FileStream): nullable NativeFile */
val* core___core__FileStream___file(val* self) {
val* var /* : nullable NativeFile */;
val* var1 /* : nullable NativeFile */;
var1 = self->attrs[COLOR_core__file__FileStream___file].val; /* _file on <self:FileStream> */
var = var1;
RET_LABEL:;
return var;
}
/* method file$FileStream$file= for (self: FileStream, nullable NativeFile) */
void core___core__FileStream___file_61d(val* self, val* p0) {
self->attrs[COLOR_core__file__FileStream___file].val = p0; /* _file on <self:FileStream> */
RET_LABEL:;
}
/* method file$FileStream$file_stat for (self: FileStream): nullable FileStat */
val* core___core__FileStream___file_stat(val* self) {
val* var /* : nullable FileStat */;
val* var1 /* : nullable NativeFile */;
val* var2 /* : NativeFileStat */;
val* var_stat /* var stat: NativeFileStat */;
short int var3 /* : Bool */;
val* var4 /* : FileStat */;
var1 = self->attrs[COLOR_core__file__FileStream___file].val; /* _file on <self:FileStream> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_core__file, 60);
fatal_exit(1);
}
{
var2 = ((val*(*)(val* self))(var1->class->vft[COLOR_core__file__NativeFile__file_stat]))(var1); /* file_stat on <var1:nullable NativeFile(NativeFile)>*/
}
var_stat = var2;
{
var3 = ((short int(*)(val* self))(var_stat->class->vft[COLOR_core__kernel__Pointer__address_is_null]))(var_stat); /* address_is_null on <var_stat:NativeFileStat>*/
}
if (var3){
var = ((val*)NULL);
goto RET_LABEL;
} else {
}
var4 = NEW_core__FileStat(&type_core__FileStat);
{
((void(*)(val* self, val* p0))(var4->class->vft[COLOR_core__file__FileStat__stat_61d]))(var4, var_stat); /* stat= on <var4:FileStat>*/
}
{
((void(*)(val* self))(var4->class->vft[COLOR_core__kernel__Object__init]))(var4); /* init on <var4:FileStat>*/
}
var = var4;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method file$FileStream$fd for (self: FileStream): Int */
long core___core__FileStream___fd(val* self) {
long var /* : Int */;
val* var1 /* : nullable NativeFile */;
long var2 /* : Int */;
var1 = self->attrs[COLOR_core__file__FileStream___file].val; /* _file on <self:FileStream> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_core__file, 66);
fatal_exit(1);
}
{
var2 = ((long(*)(val* self))(var1->class->vft[COLOR_core__file__NativeFile__fileno]))(var1); /* fileno on <var1:nullable NativeFile(NativeFile)>*/
}
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method file$FileStream$close for (self: FileStream) */
void core___core__FileStream___core__stream__Stream__close(val* self) {
val* var /* : nullable NativeFile */;
val* var_file /* var file: nullable NativeFile */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
short int var3 /* : Bool */;
val* var4 /* : nullable IOError */;
short int var5 /* : Bool */;
short int var6 /* : Bool */;
val* var7 /* : IOError */;
static val* varonce;
val* var8 /* : String */;
char* var9 /* : CString */;
val* var10 /* : String */;
val* var11 /* : nullable Int */;
val* var12 /* : nullable Int */;
val* var13 /* : nullable Bool */;
val* var14 /* : nullable Bool */;
long var15 /* : Int */;
long var_i /* var i: Int */;
short int var16 /* : Bool */;
short int var18 /* : Bool */;
short int var19 /* : Bool */;
val* var20 /* : IOError */;
val* var22 /* : NativeArray[String] */;
static val* varonce21;
static val* varonce23;
val* var24 /* : String */;
char* var25 /* : CString */;
val* var26 /* : String */;
val* var27 /* : nullable Int */;
val* var28 /* : nullable Int */;
val* var29 /* : nullable Bool */;
val* var30 /* : nullable Bool */;
val* var31 /* : Sys */;
val* var33 /* : Sys */;
long var34 /* : Int */;
val* var35 /* : String */;
val* var36 /* : String */;
var = self->attrs[COLOR_core__file__FileStream___file].val; /* _file on <self:FileStream> */
var_file = var;
if (var_file == NULL) {
var1 = 1; /* is null */
} else {
var1 = 0; /* arg is null but recv is not */
}
if (0) {
var2 = ((short int(*)(val* self, val* p0))(var_file->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_file, ((val*)NULL)); /* == on <var_file:nullable NativeFile>*/
var1 = var2;
}
if (var1){
goto RET_LABEL;
} else {
}
{
var3 = ((short int(*)(val* self))(var_file->class->vft[COLOR_core__kernel__Pointer__address_is_null]))(var_file); /* address_is_null on <var_file:nullable NativeFile(NativeFile)>*/
}
if (var3){
{
var4 = ((val*(*)(val* self))(self->class->vft[COLOR_core__stream__Stream__last_error]))(self); /* last_error on <self:FileStream>*/
}
if (var4 == NULL) {
var5 = 0; /* is null */
} else {
var5 = 1; /* arg is null and recv is not */
}
if (0) {
var6 = ((short int(*)(val* self, val* p0))(var4->class->vft[COLOR_core__kernel__Object___33d_61d]))(var4, ((val*)NULL)); /* != on <var4:nullable IOError>*/
var5 = var6;
}
if (var5){
goto RET_LABEL;
} else {
}
var7 = NEW_core__IOError(&type_core__IOError);
if (likely(varonce!=NULL)) {
var8 = varonce;
} else {
var9 = "Cannot close unopened file";
var11 = (val*)(26l<<2|1);
var12 = (val*)(26l<<2|1);
var13 = (val*)((long)(0)<<2|3);
var14 = (val*)((long)(0)<<2|3);
var10 = core__flat___CString___to_s_unsafe(var9, var11, var12, var13, var14);
var8 = var10;
varonce = var8;
}
{
((void(*)(val* self, val* p0))(var7->class->vft[COLOR_core__error__Error__message_61d]))(var7, var8); /* message= on <var7:IOError>*/
}
{
((void(*)(val* self))(var7->class->vft[COLOR_core__kernel__Object__init]))(var7); /* init on <var7:IOError>*/
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_core__stream__Stream__last_error_61d]))(self, var7); /* last_error= on <self:FileStream>*/
}
goto RET_LABEL;
} else {
}
{
var15 = ((long(*)(val* self))(var_file->class->vft[COLOR_core__file__NativeFile__io_close]))(var_file); /* io_close on <var_file:nullable NativeFile(NativeFile)>*/
}
var_i = var15;
{
{ /* Inline kernel$Int$!= (var_i,0l) on <var_i:Int> */
var18 = var_i == 0l;
var19 = !var18;
var16 = var19;
goto RET_LABEL17;
RET_LABEL17:(void)0;
}
}
if (var16){
var20 = NEW_core__IOError(&type_core__IOError);
if (unlikely(varonce21==NULL)) {
var22 = NEW_core__NativeArray((int)2l, &type_core__NativeArray__core__String);
if (likely(varonce23!=NULL)) {
var24 = varonce23;
} else {
var25 = "Close failed due to error ";
var27 = (val*)(26l<<2|1);
var28 = (val*)(26l<<2|1);
var29 = (val*)((long)(0)<<2|3);
var30 = (val*)((long)(0)<<2|3);
var26 = core__flat___CString___to_s_unsafe(var25, var27, var28, var29, var30);
var24 = var26;
varonce23 = var24;
}
((struct instance_core__NativeArray*)var22)->values[0]=var24;
} else {
var22 = varonce21;
varonce21 = NULL;
}
{
{ /* Inline kernel$Object$sys (self) on <self:FileStream> */
var33 = glob_sys;
var31 = var33;
goto RET_LABEL32;
RET_LABEL32:(void)0;
}
}
{
var34 = ((long(*)(val* self))(var31->class->vft[COLOR_core__kernel__Sys__errno]))(var31); /* errno on <var31:Sys>*/
}
var35 = core__abstract_text___Int___strerror(var34);
((struct instance_core__NativeArray*)var22)->values[1]=var35;
{
var36 = ((val*(*)(val* self))(var22->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var22); /* native_to_s on <var22:NativeArray[String]>*/
}
varonce21 = var22;
{
((void(*)(val* self, val* p0))(var20->class->vft[COLOR_core__error__Error__message_61d]))(var20, var36); /* message= on <var20:IOError>*/
}
{
((void(*)(val* self))(var20->class->vft[COLOR_core__kernel__Object__init]))(var20); /* init on <var20:IOError>*/
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_core__stream__Stream__last_error_61d]))(self, var20); /* last_error= on <self:FileStream>*/
}
} else {
}
self->attrs[COLOR_core__file__FileStream___file].val = ((val*)NULL); /* _file on <self:FileStream> */
RET_LABEL:;
}
/* method file$FileStream$set_buffering_mode for (self: FileStream, Int, Int) */
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
short int var6 /* : Bool */;
short int var8 /* : Bool */;
short int var9 /* : Bool */;
val* var10 /* : IOError */;
val* var11 /* : NativeArray[String] */;
static val* varonce;
static val* varonce12;
val* var13 /* : String */;
char* var14 /* : CString */;
val* var15 /* : String */;
val* var16 /* : nullable Int */;
val* var17 /* : nullable Int */;
val* var18 /* : nullable Bool */;
val* var19 /* : nullable Bool */;
val* var20 /* : Sys */;
val* var22 /* : Sys */;
long var23 /* : Int */;
val* var24 /* : String */;
val* var25 /* : String */;
var_buf_size = p0;
var_mode = p1;
{
{ /* Inline kernel$Int$<= (var_buf_size,0l) on <var_buf_size:Int> */
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
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_core__file, 95);
fatal_exit(1);
}
{
var5 = ((long(*)(val* self, long p0, long p1))(var4->class->vft[COLOR_core__file__NativeFile__set_buffering_type]))(var4, var_buf_size, var_mode); /* set_buffering_type on <var4:nullable NativeFile(NativeFile)>*/
}
{
{ /* Inline kernel$Int$!= (var5,0l) on <var5:Int> */
var8 = var5 == 0l;
var9 = !var8;
var6 = var9;
goto RET_LABEL7;
RET_LABEL7:(void)0;
}
}
if (var6){
var10 = NEW_core__IOError(&type_core__IOError);
if (unlikely(varonce==NULL)) {
var11 = NEW_core__NativeArray((int)2l, &type_core__NativeArray__core__String);
if (likely(varonce12!=NULL)) {
var13 = varonce12;
} else {
var14 = "Error while changing buffering type for FileStream, returned error ";
var16 = (val*)(67l<<2|1);
var17 = (val*)(67l<<2|1);
var18 = (val*)((long)(0)<<2|3);
var19 = (val*)((long)(0)<<2|3);
var15 = core__flat___CString___to_s_unsafe(var14, var16, var17, var18, var19);
var13 = var15;
varonce12 = var13;
}
((struct instance_core__NativeArray*)var11)->values[0]=var13;
} else {
var11 = varonce;
varonce = NULL;
}
{
{ /* Inline kernel$Object$sys (self) on <self:FileStream> */
var22 = glob_sys;
var20 = var22;
goto RET_LABEL21;
RET_LABEL21:(void)0;
}
}
{
var23 = ((long(*)(val* self))(var20->class->vft[COLOR_core__kernel__Sys__errno]))(var20); /* errno on <var20:Sys>*/
}
var24 = core__abstract_text___Int___strerror(var23);
((struct instance_core__NativeArray*)var11)->values[1]=var24;
{
var25 = ((val*(*)(val* self))(var11->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var11); /* native_to_s on <var11:NativeArray[String]>*/
}
varonce = var11;
{
((void(*)(val* self, val* p0))(var10->class->vft[COLOR_core__error__Error__message_61d]))(var10, var25); /* message= on <var10:IOError>*/
}
{
((void(*)(val* self))(var10->class->vft[COLOR_core__kernel__Object__init]))(var10); /* init on <var10:IOError>*/
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_core__stream__Stream__last_error_61d]))(self, var10); /* last_error= on <self:FileStream>*/
}
} else {
}
RET_LABEL:;
}
/* method file$FileReader$reopen for (self: FileReader) */
void core___core__FileReader___reopen(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
short int var_ /* var : Bool */;
val* var3 /* : nullable NativeFile */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
static val* varoncenew;
static int varoncenew_guard;
val* var6 /* : NativeFile */;
val* var7 /* : NativeFile */;
val* var8 /* : nullable String */;
char* var9 /* : CString */;
val* var10 /* : NativeFile */;
val* var11 /* : nullable NativeFile */;
short int var12 /* : Bool */;
val* var13 /* : IOError */;
val* var14 /* : NativeArray[String] */;
static val* varonce;
static val* varonce15;
val* var16 /* : String */;
char* var17 /* : CString */;
val* var18 /* : String */;
val* var19 /* : nullable Int */;
val* var20 /* : nullable Int */;
val* var21 /* : nullable Bool */;
val* var22 /* : nullable Bool */;
static val* varonce23;
val* var24 /* : String */;
char* var25 /* : CString */;
val* var26 /* : String */;
val* var27 /* : nullable Int */;
val* var28 /* : nullable Int */;
val* var29 /* : nullable Bool */;
val* var30 /* : nullable Bool */;
val* var31 /* : nullable String */;
val* var32 /* : Sys */;
val* var34 /* : Sys */;
long var35 /* : Int */;
val* var36 /* : String */;
val* var37 /* : String */;
{
var1 = ((short int(*)(val* self))(self->class->vft[COLOR_core__stream__Reader__eof]))(self); /* eof on <self:FileReader>*/
}
var2 = !var1;
var_ = var2;
if (var2){
var3 = self->attrs[COLOR_core__file__FileStream___file].val; /* _file on <self:FileReader> */
if (unlikely(var3 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_core__file, 117);
fatal_exit(1);
}
{
var4 = ((short int(*)(val* self))(var3->class->vft[COLOR_core__kernel__Pointer__address_is_null]))(var3); /* address_is_null on <var3:nullable NativeFile(NativeFile)>*/
}
var5 = !var4;
var = var5;
} else {
var = var_;
}
if (var){
{
((void(*)(val* self))(self->class->vft[COLOR_core__stream__Stream__close]))(self); /* close on <self:FileReader>*/
}
} else {
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_core__stream__Stream__last_error_61d]))(self, ((val*)NULL)); /* last_error= on <self:FileReader>*/
}
if (likely(varoncenew_guard)) {
var6 = varoncenew;
} else {
var7 = NEW_core__file__NativeFile(&type_core__file__NativeFile);
var6 = var7;
varoncenew = var6;
varoncenew_guard = 1;
}
{
var8 = ((val*(*)(val* self))(self->class->vft[COLOR_core__file__FileStream__path]))(self); /* path on <self:FileReader>*/
}
if (unlikely(var8 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_core__file, 119);
fatal_exit(1);
}
{
var9 = ((char*(*)(val* self))(var8->class->vft[COLOR_core__abstract_text__Text__to_cstring]))(var8); /* to_cstring on <var8:nullable String(String)>*/
}
{
var10 = ((val*(*)(val* self, char* p0))(var6->class->vft[COLOR_core__file__NativeFile__io_open_read]))(var6, var9); /* io_open_read on <var6:NativeFile>*/
}
self->attrs[COLOR_core__file__FileStream___file].val = var10; /* _file on <self:FileReader> */
var11 = self->attrs[COLOR_core__file__FileStream___file].val; /* _file on <self:FileReader> */
if (unlikely(var11 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_core__file, 120);
fatal_exit(1);
}
{
var12 = ((short int(*)(val* self))(var11->class->vft[COLOR_core__kernel__Pointer__address_is_null]))(var11); /* address_is_null on <var11:nullable NativeFile(NativeFile)>*/
}
if (var12){
var13 = NEW_core__IOError(&type_core__IOError);
if (unlikely(varonce==NULL)) {
var14 = NEW_core__NativeArray((int)4l, &type_core__NativeArray__core__String);
if (likely(varonce15!=NULL)) {
var16 = varonce15;
} else {
var17 = "Cannot open `";
var19 = (val*)(13l<<2|1);
var20 = (val*)(13l<<2|1);
var21 = (val*)((long)(0)<<2|3);
var22 = (val*)((long)(0)<<2|3);
var18 = core__flat___CString___to_s_unsafe(var17, var19, var20, var21, var22);
var16 = var18;
varonce15 = var16;
}
((struct instance_core__NativeArray*)var14)->values[0]=var16;
if (likely(varonce23!=NULL)) {
var24 = varonce23;
} else {
var25 = "`: ";
var27 = (val*)(3l<<2|1);
var28 = (val*)(3l<<2|1);
var29 = (val*)((long)(0)<<2|3);
var30 = (val*)((long)(0)<<2|3);
var26 = core__flat___CString___to_s_unsafe(var25, var27, var28, var29, var30);
var24 = var26;
varonce23 = var24;
}
((struct instance_core__NativeArray*)var14)->values[2]=var24;
} else {
var14 = varonce;
varonce = NULL;
}
{
var31 = ((val*(*)(val* self))(self->class->vft[COLOR_core__file__FileStream__path]))(self); /* path on <self:FileReader>*/
}
if (unlikely(var31 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_core__file, 121);
fatal_exit(1);
}
((struct instance_core__NativeArray*)var14)->values[1]=var31;
{
{ /* Inline kernel$Object$sys (self) on <self:FileReader> */
var34 = glob_sys;
var32 = var34;
goto RET_LABEL33;
RET_LABEL33:(void)0;
}
}
{
var35 = ((long(*)(val* self))(var32->class->vft[COLOR_core__kernel__Sys__errno]))(var32); /* errno on <var32:Sys>*/
}
var36 = core__abstract_text___Int___strerror(var35);
((struct instance_core__NativeArray*)var14)->values[3]=var36;
{
var37 = ((val*(*)(val* self))(var14->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var14); /* native_to_s on <var14:NativeArray[String]>*/
}
varonce = var14;
{
((void(*)(val* self, val* p0))(var13->class->vft[COLOR_core__error__Error__message_61d]))(var13, var37); /* message= on <var13:IOError>*/
}
{
((void(*)(val* self))(var13->class->vft[COLOR_core__kernel__Object__init]))(var13); /* init on <var13:IOError>*/
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_core__stream__Stream__last_error_61d]))(self, var13); /* last_error= on <self:FileReader>*/
}
{
((void(*)(val* self, short int p0))(self->class->vft[COLOR_core__file__FileReader__end_reached_61d]))(self, 1); /* end_reached= on <self:FileReader>*/
}
goto RET_LABEL;
} else {
}
{
((void(*)(val* self, short int p0))(self->class->vft[COLOR_core__file__FileReader__end_reached_61d]))(self, 0); /* end_reached= on <self:FileReader>*/
}
{
((void(*)(val* self))(self->class->vft[COLOR_core__stream__BufferedReader__buffer_reset]))(self); /* buffer_reset on <self:FileReader>*/
}
RET_LABEL:;
}
/* method file$FileReader$close for (self: FileReader) */
void core___core__FileReader___core__stream__Stream__close(val* self) {
{
((void(*)(val* self))(self->class->vft[COLOR_core___core__FileReader___core__stream__Stream__close]))(self); /* close on <self:FileReader>*/
}
{
((void(*)(val* self))(self->class->vft[COLOR_core__stream__BufferedReader__buffer_reset]))(self); /* buffer_reset on <self:FileReader>*/
}
{
((void(*)(val* self, short int p0))(self->class->vft[COLOR_core__file__FileReader__end_reached_61d]))(self, 1); /* end_reached= on <self:FileReader>*/
}
RET_LABEL:;
}
/* method file$FileReader$fill_buffer for (self: FileReader) */
void core___core__FileReader___core__stream__BufferedReader__fill_buffer(val* self) {
val* var /* : nullable NativeFile */;
char* var1 /* : CString */;
long var2 /* : Int */;
long var3 /* : Int */;
long var_nb /* var nb: Int */;
short int var4 /* : Bool */;
val* var5 /* : nullable IOError */;
short int var6 /* : Bool */;
short int var7 /* : Bool */;
short int var_ /* var : Bool */;
val* var8 /* : nullable NativeFile */;
short int var9 /* : Bool */;
val* var10 /* : IOError */;
val* var11 /* : NativeArray[String] */;
static val* varonce;
static val* varonce12;
val* var13 /* : String */;
char* var14 /* : CString */;
val* var15 /* : String */;
val* var16 /* : nullable Int */;
val* var17 /* : nullable Int */;
val* var18 /* : nullable Bool */;
val* var19 /* : nullable Bool */;
static val* varonce20;
val* var21 /* : String */;
char* var22 /* : CString */;
val* var23 /* : String */;
val* var24 /* : nullable Int */;
val* var25 /* : nullable Int */;
val* var26 /* : nullable Bool */;
val* var27 /* : nullable Bool */;
val* var28 /* : nullable String */;
val* var29 /* : Sys */;
val* var31 /* : Sys */;
long var32 /* : Int */;
val* var33 /* : String */;
val* var34 /* : String */;
short int var35 /* : Bool */;
short int var37 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var38 /* : Bool */;
var = self->attrs[COLOR_core__file__FileStream___file].val; /* _file on <self:FileReader> */
if (unlikely(var == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_core__file, 138);
fatal_exit(1);
}
var1 = self->attrs[COLOR_core__stream__BufferedReader___buffer].str; /* _buffer on <self:FileReader> */
var2 = self->attrs[COLOR_core__stream__BufferedReader___buffer_capacity].l; /* _buffer_capacity on <self:FileReader> */
{
var3 = ((long(*)(val* self, char* p0, long p1))(var->class->vft[COLOR_core__file__NativeFile__io_read]))(var, var1, var2); /* io_read on <var:nullable NativeFile(NativeFile)>*/
}
var_nb = var3;
{
var5 = ((val*(*)(val* self))(self->class->vft[COLOR_core__stream__Stream__last_error]))(self); /* last_error on <self:FileReader>*/
}
if (var5 == NULL) {
var6 = 1; /* is null */
} else {
var6 = 0; /* arg is null but recv is not */
}
if (0) {
var7 = ((short int(*)(val* self, val* p0))(var5->class->vft[COLOR_core__kernel__Object___61d_61d]))(var5, ((val*)NULL)); /* == on <var5:nullable IOError>*/
var6 = var7;
}
var_ = var6;
if (var6){
var8 = self->attrs[COLOR_core__file__FileStream___file].val; /* _file on <self:FileReader> */
if (unlikely(var8 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_core__file, 139);
fatal_exit(1);
}
{
var9 = ((short int(*)(val* self))(var8->class->vft[COLOR_core__file__NativeFile__ferror]))(var8); /* ferror on <var8:nullable NativeFile(NativeFile)>*/
}
var4 = var9;
} else {
var4 = var_;
}
if (var4){
var10 = NEW_core__IOError(&type_core__IOError);
if (unlikely(varonce==NULL)) {
var11 = NEW_core__NativeArray((int)4l, &type_core__NativeArray__core__String);
if (likely(varonce12!=NULL)) {
var13 = varonce12;
} else {
var14 = "Cannot read `";
var16 = (val*)(13l<<2|1);
var17 = (val*)(13l<<2|1);
var18 = (val*)((long)(0)<<2|3);
var19 = (val*)((long)(0)<<2|3);
var15 = core__flat___CString___to_s_unsafe(var14, var16, var17, var18, var19);
var13 = var15;
varonce12 = var13;
}
((struct instance_core__NativeArray*)var11)->values[0]=var13;
if (likely(varonce20!=NULL)) {
var21 = varonce20;
} else {
var22 = "`: ";
var24 = (val*)(3l<<2|1);
var25 = (val*)(3l<<2|1);
var26 = (val*)((long)(0)<<2|3);
var27 = (val*)((long)(0)<<2|3);
var23 = core__flat___CString___to_s_unsafe(var22, var24, var25, var26, var27);
var21 = var23;
varonce20 = var21;
}
((struct instance_core__NativeArray*)var11)->values[2]=var21;
} else {
var11 = varonce;
varonce = NULL;
}
{
var28 = ((val*(*)(val* self))(self->class->vft[COLOR_core__file__FileStream__path]))(self); /* path on <self:FileReader>*/
}
if (unlikely(var28 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_core__file, 140);
fatal_exit(1);
}
((struct instance_core__NativeArray*)var11)->values[1]=var28;
{
{ /* Inline kernel$Object$sys (self) on <self:FileReader> */
var31 = glob_sys;
var29 = var31;
goto RET_LABEL30;
RET_LABEL30:(void)0;
}
}
{
var32 = ((long(*)(val* self))(var29->class->vft[COLOR_core__kernel__Sys__errno]))(var29); /* errno on <var29:Sys>*/
}
var33 = core__abstract_text___Int___strerror(var32);
((struct instance_core__NativeArray*)var11)->values[3]=var33;
{
var34 = ((val*(*)(val* self))(var11->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var11); /* native_to_s on <var11:NativeArray[String]>*/
}
varonce = var11;
{
((void(*)(val* self, val* p0))(var10->class->vft[COLOR_core__error__Error__message_61d]))(var10, var34); /* message= on <var10:IOError>*/
}
{
((void(*)(val* self))(var10->class->vft[COLOR_core__kernel__Object__init]))(var10); /* init on <var10:IOError>*/
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_core__stream__Stream__last_error_61d]))(self, var10); /* last_error= on <self:FileReader>*/
}
{
((void(*)(val* self, short int p0))(self->class->vft[COLOR_core__file__FileReader__end_reached_61d]))(self, 1); /* end_reached= on <self:FileReader>*/
}
} else {
}
{
{ /* Inline kernel$Int$<= (var_nb,0l) on <var_nb:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var37 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var37)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 724);
fatal_exit(1);
}
var38 = var_nb <= 0l;
var35 = var38;
goto RET_LABEL36;
RET_LABEL36:(void)0;
}
}
if (var35){
{
((void(*)(val* self, short int p0))(self->class->vft[COLOR_core__file__FileReader__end_reached_61d]))(self, 1); /* end_reached= on <self:FileReader>*/
}
var_nb = 0l;
} else {
}
self->attrs[COLOR_core__stream__BufferedReader___buffer_length].l = var_nb; /* _buffer_length on <self:FileReader> */
self->attrs[COLOR_core__stream__BufferedReader___buffer_pos].l = 0l; /* _buffer_pos on <self:FileReader> */
RET_LABEL:;
}
/* method file$FileReader$end_reached for (self: FileReader): Bool */
short int core___core__FileReader___core__stream__BufferedReader__end_reached(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = self->attrs[COLOR_core__file__FileReader___end_reached].s; /* _end_reached on <self:FileReader> */
var = var1;
RET_LABEL:;
return var;
}
/* method file$FileReader$end_reached= for (self: FileReader, Bool) */
void core___core__FileReader___end_reached_61d(val* self, short int p0) {
self->attrs[COLOR_core__file__FileReader___end_reached].s = p0; /* _end_reached on <self:FileReader> */
RET_LABEL:;
}
/* method file$FileReader$open for (self: FileReader, String) */
void core___core__FileReader___open(val* self, val* p0) {
val* var_path /* var path: String */;
static val* varoncenew;
static int varoncenew_guard;
val* var /* : NativeFile */;
val* var1 /* : NativeFile */;
char* var2 /* : CString */;
val* var3 /* : NativeFile */;
val* var4 /* : nullable NativeFile */;
short int var5 /* : Bool */;
val* var6 /* : IOError */;
val* var7 /* : NativeArray[String] */;
static val* varonce;
static val* varonce8;
val* var9 /* : String */;
char* var10 /* : CString */;
val* var11 /* : String */;
val* var12 /* : nullable Int */;
val* var13 /* : nullable Int */;
val* var14 /* : nullable Bool */;
val* var15 /* : nullable Bool */;
static val* varonce16;
val* var17 /* : String */;
char* var18 /* : CString */;
val* var19 /* : String */;
val* var20 /* : nullable Int */;
val* var21 /* : nullable Int */;
val* var22 /* : nullable Bool */;
val* var23 /* : nullable Bool */;
val* var24 /* : Sys */;
val* var26 /* : Sys */;
long var27 /* : Int */;
val* var28 /* : String */;
val* var29 /* : String */;
{
((void(*)(val* self))(self->class->vft[COLOR_core__kernel__Object__init]))(self); /* init on <self:FileReader>*/
}
var_path = p0;
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_core__file__FileStream__path_61d]))(self, var_path); /* path= on <self:FileReader>*/
}
{
((void(*)(val* self, long p0))(self->class->vft[COLOR_core__stream__BufferedReader__prepare_buffer]))(self, 100l); /* prepare_buffer on <self:FileReader>*/
}
if (likely(varoncenew_guard)) {
var = varoncenew;
} else {
var1 = NEW_core__file__NativeFile(&type_core__file__NativeFile);
var = var1;
varoncenew = var;
varoncenew_guard = 1;
}
{
var2 = ((char*(*)(val* self))(var_path->class->vft[COLOR_core__abstract_text__Text__to_cstring]))(var_path); /* to_cstring on <var_path:String>*/
}
{
var3 = ((val*(*)(val* self, char* p0))(var->class->vft[COLOR_core__file__NativeFile__io_open_read]))(var, var2); /* io_open_read on <var:NativeFile>*/
}
self->attrs[COLOR_core__file__FileStream___file].val = var3; /* _file on <self:FileReader> */
var4 = self->attrs[COLOR_core__file__FileStream___file].val; /* _file on <self:FileReader> */
if (unlikely(var4 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_core__file, 170);
fatal_exit(1);
}
{
var5 = ((short int(*)(val* self))(var4->class->vft[COLOR_core__kernel__Pointer__address_is_null]))(var4); /* address_is_null on <var4:nullable NativeFile(NativeFile)>*/
}
if (var5){
var6 = NEW_core__IOError(&type_core__IOError);
if (unlikely(varonce==NULL)) {
var7 = NEW_core__NativeArray((int)4l, &type_core__NativeArray__core__String);
if (likely(varonce8!=NULL)) {
var9 = varonce8;
} else {
var10 = "Cannot open `";
var12 = (val*)(13l<<2|1);
var13 = (val*)(13l<<2|1);
var14 = (val*)((long)(0)<<2|3);
var15 = (val*)((long)(0)<<2|3);
var11 = core__flat___CString___to_s_unsafe(var10, var12, var13, var14, var15);
var9 = var11;
varonce8 = var9;
}
((struct instance_core__NativeArray*)var7)->values[0]=var9;
if (likely(varonce16!=NULL)) {
var17 = varonce16;
} else {
var18 = "`: ";
var20 = (val*)(3l<<2|1);
var21 = (val*)(3l<<2|1);
var22 = (val*)((long)(0)<<2|3);
var23 = (val*)((long)(0)<<2|3);
var19 = core__flat___CString___to_s_unsafe(var18, var20, var21, var22, var23);
var17 = var19;
varonce16 = var17;
}
((struct instance_core__NativeArray*)var7)->values[2]=var17;
} else {
var7 = varonce;
varonce = NULL;
}
((struct instance_core__NativeArray*)var7)->values[1]=var_path;
{
{ /* Inline kernel$Object$sys (self) on <self:FileReader> */
var26 = glob_sys;
var24 = var26;
goto RET_LABEL25;
RET_LABEL25:(void)0;
}
}
{
var27 = ((long(*)(val* self))(var24->class->vft[COLOR_core__kernel__Sys__errno]))(var24); /* errno on <var24:Sys>*/
}
var28 = core__abstract_text___Int___strerror(var27);
((struct instance_core__NativeArray*)var7)->values[3]=var28;
{
var29 = ((val*(*)(val* self))(var7->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var7); /* native_to_s on <var7:NativeArray[String]>*/
}
varonce = var7;
{
((void(*)(val* self, val* p0))(var6->class->vft[COLOR_core__error__Error__message_61d]))(var6, var29); /* message= on <var6:IOError>*/
}
{
((void(*)(val* self))(var6->class->vft[COLOR_core__kernel__Object__init]))(var6); /* init on <var6:IOError>*/
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_core__stream__Stream__last_error_61d]))(self, var6); /* last_error= on <self:FileReader>*/
}
{
((void(*)(val* self, short int p0))(self->class->vft[COLOR_core__file__FileReader__end_reached_61d]))(self, 1); /* end_reached= on <self:FileReader>*/
}
} else {
}
RET_LABEL:;
}
/* method file$FileReader$from_fd for (self: FileReader, Int) */
void core___core__FileReader___from_fd(val* self, long p0) {
long var_fd /* var fd: Int */;
static val* varonce;
val* var /* : String */;
char* var1 /* : CString */;
val* var2 /* : String */;
val* var3 /* : nullable Int */;
val* var4 /* : nullable Int */;
val* var5 /* : nullable Bool */;
val* var6 /* : nullable Bool */;
val* var7 /* : Sys */;
char* var8 /* : CString */;
val* var9 /* : NativeFile */;
val* var10 /* : nullable NativeFile */;
short int var11 /* : Bool */;
val* var12 /* : IOError */;
val* var14 /* : NativeArray[String] */;
static val* varonce13;
static val* varonce15;
val* var16 /* : String */;
char* var17 /* : CString */;
val* var18 /* : String */;
val* var19 /* : nullable Int */;
val* var20 /* : nullable Int */;
val* var21 /* : nullable Bool */;
val* var22 /* : nullable Bool */;
static val* varonce23;
val* var24 /* : String */;
char* var25 /* : CString */;
val* var26 /* : String */;
val* var27 /* : nullable Int */;
val* var28 /* : nullable Int */;
val* var29 /* : nullable Bool */;
val* var30 /* : nullable Bool */;
static val* varonce31;
val* var32 /* : String */;
char* var33 /* : CString */;
val* var34 /* : String */;
val* var35 /* : nullable Int */;
val* var36 /* : nullable Int */;
val* var37 /* : nullable Bool */;
val* var38 /* : nullable Bool */;
val* var39 /* : String */;
val* var40 /* : Sys */;
val* var42 /* : Sys */;
long var43 /* : Int */;
val* var44 /* : String */;
val* var45 /* : String */;
{
((void(*)(val* self))(self->class->vft[COLOR_core__kernel__Object__init]))(self); /* init on <self:FileReader>*/
}
var_fd = p0;
if (likely(varonce!=NULL)) {
var = varonce;
} else {
var1 = "";
var3 = (val*)(0l<<2|1);
var4 = (val*)(0l<<2|1);
var5 = (val*)((long)(0)<<2|3);
var6 = (val*)((long)(0)<<2|3);
var2 = core__flat___CString___to_s_unsafe(var1, var3, var4, var5, var6);
var = var2;
varonce = var;
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_core__file__FileStream__path_61d]))(self, var); /* path= on <self:FileReader>*/
}
{
((void(*)(val* self, long p0))(self->class->vft[COLOR_core__stream__BufferedReader__prepare_buffer]))(self, 1l); /* prepare_buffer on <self:FileReader>*/
}
var7 = glob_sys;
{
var8 = ((char*(*)(val* self))(var7->class->vft[COLOR_core__file__Sys__read_only]))(var7); /* read_only on <var7:Sys>*/
}
var9 = core__file___Int___fd_to_stream(var_fd, var8);
self->attrs[COLOR_core__file__FileStream___file].val = var9; /* _file on <self:FileReader> */
var10 = self->attrs[COLOR_core__file__FileStream___file].val; /* _file on <self:FileReader> */
if (unlikely(var10 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_core__file, 183);
fatal_exit(1);
}
{
var11 = ((short int(*)(val* self))(var10->class->vft[COLOR_core__kernel__Pointer__address_is_null]))(var10); /* address_is_null on <var10:nullable NativeFile(NativeFile)>*/
}
if (var11){
var12 = NEW_core__IOError(&type_core__IOError);
if (unlikely(varonce13==NULL)) {
var14 = NEW_core__NativeArray((int)5l, &type_core__NativeArray__core__String);
if (likely(varonce15!=NULL)) {
var16 = varonce15;
} else {
var17 = "Error: Converting fd ";
var19 = (val*)(21l<<2|1);
var20 = (val*)(21l<<2|1);
var21 = (val*)((long)(0)<<2|3);
var22 = (val*)((long)(0)<<2|3);
var18 = core__flat___CString___to_s_unsafe(var17, var19, var20, var21, var22);
var16 = var18;
varonce15 = var16;
}
((struct instance_core__NativeArray*)var14)->values[0]=var16;
if (likely(varonce23!=NULL)) {
var24 = varonce23;
} else {
var25 = " to stream failed with \'";
var27 = (val*)(24l<<2|1);
var28 = (val*)(24l<<2|1);
var29 = (val*)((long)(0)<<2|3);
var30 = (val*)((long)(0)<<2|3);
var26 = core__flat___CString___to_s_unsafe(var25, var27, var28, var29, var30);
var24 = var26;
varonce23 = var24;
}
((struct instance_core__NativeArray*)var14)->values[2]=var24;
if (likely(varonce31!=NULL)) {
var32 = varonce31;
} else {
var33 = "\'";
var35 = (val*)(1l<<2|1);
var36 = (val*)(1l<<2|1);
var37 = (val*)((long)(0)<<2|3);
var38 = (val*)((long)(0)<<2|3);
var34 = core__flat___CString___to_s_unsafe(var33, var35, var36, var37, var38);
var32 = var34;
varonce31 = var32;
}
((struct instance_core__NativeArray*)var14)->values[4]=var32;
} else {
var14 = varonce13;
varonce13 = NULL;
}
var39 = core__flat___Int___core__abstract_text__Object__to_s(var_fd);
((struct instance_core__NativeArray*)var14)->values[1]=var39;
{
{ /* Inline kernel$Object$sys (self) on <self:FileReader> */
var42 = glob_sys;
var40 = var42;
goto RET_LABEL41;
RET_LABEL41:(void)0;
}
}
{
var43 = ((long(*)(val* self))(var40->class->vft[COLOR_core__kernel__Sys__errno]))(var40); /* errno on <var40:Sys>*/
}
var44 = core__abstract_text___Int___strerror(var43);
((struct instance_core__NativeArray*)var14)->values[3]=var44;
{
var45 = ((val*(*)(val* self))(var14->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var14); /* native_to_s on <var14:NativeArray[String]>*/
}
varonce13 = var14;
{
((void(*)(val* self, val* p0))(var12->class->vft[COLOR_core__error__Error__message_61d]))(var12, var45); /* message= on <var12:IOError>*/
}
{
((void(*)(val* self))(var12->class->vft[COLOR_core__kernel__Object__init]))(var12); /* init on <var12:IOError>*/
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_core__stream__Stream__last_error_61d]))(self, var12); /* last_error= on <self:FileReader>*/
}
{
((void(*)(val* self, short int p0))(self->class->vft[COLOR_core__file__FileReader__end_reached_61d]))(self, 1); /* end_reached= on <self:FileReader>*/
}
} else {
}
RET_LABEL:;
}
/* method file$FileReader$poll_in for (self: FileReader): Bool */
short int core___core__FileReader___core__stream__PollableReader__poll_in(val* self) {
short int var /* : Bool */;
long var1 /* : Int */;
long var2 /* : Int */;
long var_res /* var res: Int */;
long var3 /* : Int */;
long var5 /* : Int */;
short int var6 /* : Bool */;
short int var8 /* : Bool */;
val* var9 /* : IOError */;
val* var10 /* : Sys */;
long var11 /* : Int */;
val* var12 /* : String */;
short int var13 /* : Bool */;
short int var15 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var16 /* : Bool */;
{
var1 = ((long(*)(val* self))(self->class->vft[COLOR_core__file__FileStream__fd]))(self); /* fd on <self:FileReader>*/
}
{
var2 = ((long(*)(val* self, long p0))(self->class->vft[COLOR_core__file__FileReader__native_poll_in]))(self, var1); /* native_poll_in on <self:FileReader>*/
}
var_res = var2;
{
{ /* Inline kernel$Int$unary - (1l) on <1l:Int> */
var5 = -1l;
var3 = var5;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
}
{
{ /* Inline kernel$Int$== (var_res,var3) on <var_res:Int> */
var8 = var_res == var3;
var6 = var8;
goto RET_LABEL7;
RET_LABEL7:(void)0;
}
}
if (var6){
var9 = NEW_core__IOError(&type_core__IOError);
var10 = glob_sys;
{
var11 = ((long(*)(val* self))(var10->class->vft[COLOR_core__kernel__Sys__errno]))(var10); /* errno on <var10:Sys>*/
}
var12 = core__flat___Int___core__abstract_text__Object__to_s(var11);
{
((void(*)(val* self, val* p0))(var9->class->vft[COLOR_core__error__Error__message_61d]))(var9, var12); /* message= on <var9:IOError>*/
}
{
((void(*)(val* self))(var9->class->vft[COLOR_core__kernel__Object__init]))(var9); /* init on <var9:IOError>*/
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_core__stream__Stream__last_error_61d]))(self, var9); /* last_error= on <self:FileReader>*/
}
var = 0;
goto RET_LABEL;
} else {
{
{ /* Inline kernel$Int$> (var_res,0l) on <var_res:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var15 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var15)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 727);
fatal_exit(1);
}
var16 = var_res > 0l;
var13 = var16;
goto RET_LABEL14;
RET_LABEL14:(void)0;
}
}
var = var13;
goto RET_LABEL;
}
RET_LABEL:;
return var;
}
/* method file$FileReader$native_poll_in for (self: FileReader, Int): Int */
long core___core__FileReader___native_poll_in(val* self, long p0) {
long var /* : Int */;
long var1 /* : Int */;
struct nitni_instance* var_for_c_0;
var_for_c_0 = nit_alloc(sizeof(struct nitni_instance));
var_for_c_0->value = self;
var1 = core__file___FileReader_native_poll_in___impl(var_for_c_0, p0);
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method file$FileWriter$write_bytes for (self: FileWriter, Bytes) */
void core___core__FileWriter___core__stream__Writer__write_bytes(val* self, val* p0) {
val* var_s /* var s: Bytes */;
val* var /* : nullable IOError */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
val* var5 /* : IOError */;
static val* varonce;
val* var6 /* : String */;
char* var7 /* : CString */;
val* var8 /* : String */;
val* var9 /* : nullable Int */;
val* var10 /* : nullable Int */;
val* var11 /* : nullable Bool */;
val* var12 /* : nullable Bool */;
char* var13 /* : CString */;
long var14 /* : Int */;
var_s = p0;
{
var = ((val*(*)(val* self))(self->class->vft[COLOR_core__stream__Stream__last_error]))(self); /* last_error on <self:FileWriter>*/
}
if (var == NULL) {
var1 = 0; /* is null */
} else {
var1 = 1; /* arg is null and recv is not */
}
if (0) {
var2 = ((short int(*)(val* self, val* p0))(var->class->vft[COLOR_core__kernel__Object___33d_61d]))(var, ((val*)NULL)); /* != on <var:nullable IOError>*/
var1 = var2;
}
if (var1){
goto RET_LABEL;
} else {
}
var3 = self->attrs[COLOR_core__file__FileWriter___is_writable].s; /* _is_writable on <self:FileWriter> */
var4 = !var3;
if (var4){
var5 = NEW_core__IOError(&type_core__IOError);
if (likely(varonce!=NULL)) {
var6 = varonce;
} else {
var7 = "cannot write to non-writable stream";
var9 = (val*)(35l<<2|1);
var10 = (val*)(35l<<2|1);
var11 = (val*)((long)(0)<<2|3);
var12 = (val*)((long)(0)<<2|3);
var8 = core__flat___CString___to_s_unsafe(var7, var9, var10, var11, var12);
var6 = var8;
varonce = var6;
}
{
((void(*)(val* self, val* p0))(var5->class->vft[COLOR_core__error__Error__message_61d]))(var5, var6); /* message= on <var5:IOError>*/
}
{
((void(*)(val* self))(var5->class->vft[COLOR_core__kernel__Object__init]))(var5); /* init on <var5:IOError>*/
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_core__stream__Stream__last_error_61d]))(self, var5); /* last_error= on <self:FileWriter>*/
}
goto RET_LABEL;
} else {
}
{
var13 = ((char*(*)(val* self))(var_s->class->vft[COLOR_core__bytes__Bytes__items]))(var_s); /* items on <var_s:Bytes>*/
}
{
var14 = ((long(*)(val* self))(var_s->class->vft[COLOR_core__abstract_collection__Collection__length]))(var_s); /* length on <var_s:Bytes>*/
}
{
((void(*)(val* self, char* p0, long p1, long p2))(self->class->vft[COLOR_core__file__FileWriter__write_native]))(self, var13, 0l, var14); /* write_native on <self:FileWriter>*/
}
RET_LABEL:;
}
/* method file$FileWriter$write for (self: FileWriter, Text) */
void core___core__FileWriter___core__stream__Writer__write(val* self, val* p0) {
val* var_s /* var s: Text */;
val* var /* : nullable IOError */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
val* var5 /* : IOError */;
static val* varonce;
val* var6 /* : String */;
char* var7 /* : CString */;
val* var8 /* : String */;
val* var9 /* : nullable Int */;
val* var10 /* : nullable Int */;
val* var11 /* : nullable Bool */;
val* var12 /* : nullable Bool */;
var_s = p0;
{
var = ((val*(*)(val* self))(self->class->vft[COLOR_core__stream__Stream__last_error]))(self); /* last_error on <self:FileWriter>*/
}
if (var == NULL) {
var1 = 0; /* is null */
} else {
var1 = 1; /* arg is null and recv is not */
}
if (0) {
var2 = ((short int(*)(val* self, val* p0))(var->class->vft[COLOR_core__kernel__Object___33d_61d]))(var, ((val*)NULL)); /* != on <var:nullable IOError>*/
var1 = var2;
}
if (var1){
goto RET_LABEL;
} else {
}
var3 = self->attrs[COLOR_core__file__FileWriter___is_writable].s; /* _is_writable on <self:FileWriter> */
var4 = !var3;
if (var4){
var5 = NEW_core__IOError(&type_core__IOError);
if (likely(varonce!=NULL)) {
var6 = varonce;
} else {
var7 = "cannot write to non-writable stream";
var9 = (val*)(35l<<2|1);
var10 = (val*)(35l<<2|1);
var11 = (val*)((long)(0)<<2|3);
var12 = (val*)((long)(0)<<2|3);
var8 = core__flat___CString___to_s_unsafe(var7, var9, var10, var11, var12);
var6 = var8;
varonce = var6;
}
{
((void(*)(val* self, val* p0))(var5->class->vft[COLOR_core__error__Error__message_61d]))(var5, var6); /* message= on <var5:IOError>*/
}
{
((void(*)(val* self))(var5->class->vft[COLOR_core__kernel__Object__init]))(var5); /* init on <var5:IOError>*/
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_core__stream__Stream__last_error_61d]))(self, var5); /* last_error= on <self:FileWriter>*/
}
goto RET_LABEL;
} else {
}
{
((void(*)(val* self, val* p0))(var_s->class->vft[COLOR_core__file__Text__write_native_to]))(var_s, self); /* write_native_to on <var_s:Text>*/
}
RET_LABEL:;
}
/* method file$FileWriter$write_byte for (self: FileWriter, Byte) */
void core___core__FileWriter___core__stream__Writer__write_byte(val* self, unsigned char p0) {
unsigned char var_value /* var value: Byte */;
val* var /* : nullable IOError */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
val* var5 /* : IOError */;
static val* varonce;
val* var6 /* : String */;
char* var7 /* : CString */;
val* var8 /* : String */;
val* var9 /* : nullable Int */;
val* var10 /* : nullable Int */;
val* var11 /* : nullable Bool */;
val* var12 /* : nullable Bool */;
val* var13 /* : nullable NativeFile */;
short int var14 /* : Bool */;
val* var15 /* : IOError */;
static val* varonce16;
val* var17 /* : String */;
char* var18 /* : CString */;
val* var19 /* : String */;
val* var20 /* : nullable Int */;
val* var21 /* : nullable Int */;
val* var22 /* : nullable Bool */;
val* var23 /* : nullable Bool */;
val* var24 /* : nullable NativeFile */;
long var25 /* : Int */;
long var_err /* var err: Int */;
short int var26 /* : Bool */;
short int var28 /* : Bool */;
short int var29 /* : Bool */;
val* var30 /* : IOError */;
val* var32 /* : NativeArray[String] */;
static val* varonce31;
static val* varonce33;
val* var34 /* : String */;
char* var35 /* : CString */;
val* var36 /* : String */;
val* var37 /* : nullable Int */;
val* var38 /* : nullable Int */;
val* var39 /* : nullable Bool */;
val* var40 /* : nullable Bool */;
val* var41 /* : String */;
val* var42 /* : String */;
var_value = p0;
{
var = ((val*(*)(val* self))(self->class->vft[COLOR_core__stream__Stream__last_error]))(self); /* last_error on <self:FileWriter>*/
}
if (var == NULL) {
var1 = 0; /* is null */
} else {
var1 = 1; /* arg is null and recv is not */
}
if (0) {
var2 = ((short int(*)(val* self, val* p0))(var->class->vft[COLOR_core__kernel__Object___33d_61d]))(var, ((val*)NULL)); /* != on <var:nullable IOError>*/
var1 = var2;
}
if (var1){
goto RET_LABEL;
} else {
}
var3 = self->attrs[COLOR_core__file__FileWriter___is_writable].s; /* _is_writable on <self:FileWriter> */
var4 = !var3;
if (var4){
var5 = NEW_core__IOError(&type_core__IOError);
if (likely(varonce!=NULL)) {
var6 = varonce;
} else {
var7 = "Cannot write to non-writable stream";
var9 = (val*)(35l<<2|1);
var10 = (val*)(35l<<2|1);
var11 = (val*)((long)(0)<<2|3);
var12 = (val*)((long)(0)<<2|3);
var8 = core__flat___CString___to_s_unsafe(var7, var9, var10, var11, var12);
var6 = var8;
varonce = var6;
}
{
((void(*)(val* self, val* p0))(var5->class->vft[COLOR_core__error__Error__message_61d]))(var5, var6); /* message= on <var5:IOError>*/
}
{
((void(*)(val* self))(var5->class->vft[COLOR_core__kernel__Object__init]))(var5); /* init on <var5:IOError>*/
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_core__stream__Stream__last_error_61d]))(self, var5); /* last_error= on <self:FileWriter>*/
}
goto RET_LABEL;
} else {
}
var13 = self->attrs[COLOR_core__file__FileStream___file].val; /* _file on <self:FileWriter> */
if (unlikely(var13 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_core__file, 239);
fatal_exit(1);
}
{
var14 = ((short int(*)(val* self))(var13->class->vft[COLOR_core__kernel__Pointer__address_is_null]))(var13); /* address_is_null on <var13:nullable NativeFile(NativeFile)>*/
}
if (var14){
var15 = NEW_core__IOError(&type_core__IOError);
if (likely(varonce16!=NULL)) {
var17 = varonce16;
} else {
var18 = "Writing on a null stream";
var20 = (val*)(24l<<2|1);
var21 = (val*)(24l<<2|1);
var22 = (val*)((long)(0)<<2|3);
var23 = (val*)((long)(0)<<2|3);
var19 = core__flat___CString___to_s_unsafe(var18, var20, var21, var22, var23);
var17 = var19;
varonce16 = var17;
}
{
((void(*)(val* self, val* p0))(var15->class->vft[COLOR_core__error__Error__message_61d]))(var15, var17); /* message= on <var15:IOError>*/
}
{
((void(*)(val* self))(var15->class->vft[COLOR_core__kernel__Object__init]))(var15); /* init on <var15:IOError>*/
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_core__stream__Stream__last_error_61d]))(self, var15); /* last_error= on <self:FileWriter>*/
}
self->attrs[COLOR_core__file__FileWriter___is_writable].s = 0; /* _is_writable on <self:FileWriter> */
goto RET_LABEL;
} else {
}
var24 = self->attrs[COLOR_core__file__FileStream___file].val; /* _file on <self:FileWriter> */
if (unlikely(var24 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_core__file, 245);
fatal_exit(1);
}
{
var25 = ((long(*)(val* self, unsigned char p0))(var24->class->vft[COLOR_core__file__NativeFile__write_byte]))(var24, var_value); /* write_byte on <var24:nullable NativeFile(NativeFile)>*/
}
var_err = var25;
{
{ /* Inline kernel$Int$!= (var_err,1l) on <var_err:Int> */
var28 = var_err == 1l;
var29 = !var28;
var26 = var29;
goto RET_LABEL27;
RET_LABEL27:(void)0;
}
}
if (var26){
var30 = NEW_core__IOError(&type_core__IOError);
if (unlikely(varonce31==NULL)) {
var32 = NEW_core__NativeArray((int)2l, &type_core__NativeArray__core__String);
if (likely(varonce33!=NULL)) {
var34 = varonce33;
} else {
var35 = "Problem writing a byte: ";
var37 = (val*)(24l<<2|1);
var38 = (val*)(24l<<2|1);
var39 = (val*)((long)(0)<<2|3);
var40 = (val*)((long)(0)<<2|3);
var36 = core__flat___CString___to_s_unsafe(var35, var37, var38, var39, var40);
var34 = var36;
varonce33 = var34;
}
((struct instance_core__NativeArray*)var32)->values[0]=var34;
} else {
var32 = varonce31;
varonce31 = NULL;
}
var41 = core__flat___Int___core__abstract_text__Object__to_s(var_err);
((struct instance_core__NativeArray*)var32)->values[1]=var41;
{
var42 = ((val*(*)(val* self))(var32->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var32); /* native_to_s on <var32:NativeArray[String]>*/
}
varonce31 = var32;
{
((void(*)(val* self, val* p0))(var30->class->vft[COLOR_core__error__Error__message_61d]))(var30, var42); /* message= on <var30:IOError>*/
}
{
((void(*)(val* self))(var30->class->vft[COLOR_core__kernel__Object__init]))(var30); /* init on <var30:IOError>*/
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_core__stream__Stream__last_error_61d]))(self, var30); /* last_error= on <self:FileWriter>*/
}
} else {
}
RET_LABEL:;
}
/* method file$FileWriter$close for (self: FileWriter) */
void core___core__FileWriter___core__stream__Stream__close(val* self) {
{
((void(*)(val* self))(self->class->vft[COLOR_core___core__FileWriter___core__stream__Stream__close]))(self); /* close on <self:FileWriter>*/
}
self->attrs[COLOR_core__file__FileWriter___is_writable].s = 0; /* _is_writable on <self:FileWriter> */
RET_LABEL:;
}
/* method file$FileWriter$is_writable for (self: FileWriter): Bool */
short int core___core__FileWriter___core__stream__Writer__is_writable(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = self->attrs[COLOR_core__file__FileWriter___is_writable].s; /* _is_writable on <self:FileWriter> */
var = var1;
RET_LABEL:;
return var;
}
/* method file$FileWriter$is_writable= for (self: FileWriter, Bool) */
void core___core__FileWriter___is_writable_61d(val* self, short int p0) {
self->attrs[COLOR_core__file__FileWriter___is_writable].s = p0; /* _is_writable on <self:FileWriter> */
RET_LABEL:;
}
/* method file$FileWriter$write_native for (self: FileWriter, CString, Int, Int) */
void core___core__FileWriter___write_native(val* self, char* p0, long p1, long p2) {
char* var_native /* var native: CString */;
long var_from /* var from: Int */;
long var_len /* var len: Int */;
val* var /* : nullable IOError */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
val* var5 /* : IOError */;
static val* varonce;
val* var6 /* : String */;
char* var7 /* : CString */;
val* var8 /* : String */;
val* var9 /* : nullable Int */;
val* var10 /* : nullable Int */;
val* var11 /* : nullable Bool */;
val* var12 /* : nullable Bool */;
val* var13 /* : nullable NativeFile */;
short int var14 /* : Bool */;
val* var15 /* : IOError */;
static val* varonce16;
val* var17 /* : String */;
char* var18 /* : CString */;
val* var19 /* : String */;
val* var20 /* : nullable Int */;
val* var21 /* : nullable Int */;
val* var22 /* : nullable Bool */;
val* var23 /* : nullable Bool */;
val* var24 /* : nullable NativeFile */;
long var25 /* : Int */;
long var_err /* var err: Int */;
short int var26 /* : Bool */;
short int var28 /* : Bool */;
short int var29 /* : Bool */;
val* var30 /* : IOError */;
val* var32 /* : NativeArray[String] */;
static val* varonce31;
static val* varonce33;
val* var34 /* : String */;
char* var35 /* : CString */;
val* var36 /* : String */;
val* var37 /* : nullable Int */;
val* var38 /* : nullable Int */;
val* var39 /* : nullable Bool */;
val* var40 /* : nullable Bool */;
static val* varonce41;
val* var42 /* : String */;
char* var43 /* : CString */;
val* var44 /* : String */;
val* var45 /* : nullable Int */;
val* var46 /* : nullable Int */;
val* var47 /* : nullable Bool */;
val* var48 /* : nullable Bool */;
static val* varonce49;
val* var50 /* : String */;
char* var51 /* : CString */;
val* var52 /* : String */;
val* var53 /* : nullable Int */;
val* var54 /* : nullable Int */;
val* var55 /* : nullable Bool */;
val* var56 /* : nullable Bool */;
val* var57 /* : String */;
val* var58 /* : String */;
val* var59 /* : String */;
var_native = p0;
var_from = p1;
var_len = p2;
{
var = ((val*(*)(val* self))(self->class->vft[COLOR_core__stream__Stream__last_error]))(self); /* last_error on <self:FileWriter>*/
}
if (var == NULL) {
var1 = 0; /* is null */
} else {
var1 = 1; /* arg is null and recv is not */
}
if (0) {
var2 = ((short int(*)(val* self, val* p0))(var->class->vft[COLOR_core__kernel__Object___33d_61d]))(var, ((val*)NULL)); /* != on <var:nullable IOError>*/
var1 = var2;
}
if (var1){
goto RET_LABEL;
} else {
}
var3 = self->attrs[COLOR_core__file__FileWriter___is_writable].s; /* _is_writable on <self:FileWriter> */
var4 = !var3;
if (var4){
var5 = NEW_core__IOError(&type_core__IOError);
if (likely(varonce!=NULL)) {
var6 = varonce;
} else {
var7 = "Cannot write to non-writable stream";
var9 = (val*)(35l<<2|1);
var10 = (val*)(35l<<2|1);
var11 = (val*)((long)(0)<<2|3);
var12 = (val*)((long)(0)<<2|3);
var8 = core__flat___CString___to_s_unsafe(var7, var9, var10, var11, var12);
var6 = var8;
varonce = var6;
}
{
((void(*)(val* self, val* p0))(var5->class->vft[COLOR_core__error__Error__message_61d]))(var5, var6); /* message= on <var5:IOError>*/
}
{
((void(*)(val* self))(var5->class->vft[COLOR_core__kernel__Object__init]))(var5); /* init on <var5:IOError>*/
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_core__stream__Stream__last_error_61d]))(self, var5); /* last_error= on <self:FileWriter>*/
}
goto RET_LABEL;
} else {
}
var13 = self->attrs[COLOR_core__file__FileStream___file].val; /* _file on <self:FileWriter> */
if (unlikely(var13 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_core__file, 267);
fatal_exit(1);
}
{
var14 = ((short int(*)(val* self))(var13->class->vft[COLOR_core__kernel__Pointer__address_is_null]))(var13); /* address_is_null on <var13:nullable NativeFile(NativeFile)>*/
}
if (var14){
var15 = NEW_core__IOError(&type_core__IOError);
if (likely(varonce16!=NULL)) {
var17 = varonce16;
} else {
var18 = "Writing on a null stream";
var20 = (val*)(24l<<2|1);
var21 = (val*)(24l<<2|1);
var22 = (val*)((long)(0)<<2|3);
var23 = (val*)((long)(0)<<2|3);
var19 = core__flat___CString___to_s_unsafe(var18, var20, var21, var22, var23);
var17 = var19;
varonce16 = var17;
}
{
((void(*)(val* self, val* p0))(var15->class->vft[COLOR_core__error__Error__message_61d]))(var15, var17); /* message= on <var15:IOError>*/
}
{
((void(*)(val* self))(var15->class->vft[COLOR_core__kernel__Object__init]))(var15); /* init on <var15:IOError>*/
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_core__stream__Stream__last_error_61d]))(self, var15); /* last_error= on <self:FileWriter>*/
}
self->attrs[COLOR_core__file__FileWriter___is_writable].s = 0; /* _is_writable on <self:FileWriter> */
goto RET_LABEL;
} else {
}
var24 = self->attrs[COLOR_core__file__FileStream___file].val; /* _file on <self:FileWriter> */
if (unlikely(var24 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_core__file, 272);
fatal_exit(1);
}
{
var25 = ((long(*)(val* self, char* p0, long p1, long p2))(var24->class->vft[COLOR_core__file__NativeFile__io_write]))(var24, var_native, var_from, var_len); /* io_write on <var24:nullable NativeFile(NativeFile)>*/
}
var_err = var25;
{
{ /* Inline kernel$Int$!= (var_err,var_len) on <var_err:Int> */
var28 = var_err == var_len;
var29 = !var28;
var26 = var29;
goto RET_LABEL27;
RET_LABEL27:(void)0;
}
}
if (var26){
var30 = NEW_core__IOError(&type_core__IOError);
if (unlikely(varonce31==NULL)) {
var32 = NEW_core__NativeArray((int)5l, &type_core__NativeArray__core__String);
if (likely(varonce33!=NULL)) {
var34 = varonce33;
} else {
var35 = "Problem in writing : ";
var37 = (val*)(21l<<2|1);
var38 = (val*)(21l<<2|1);
var39 = (val*)((long)(0)<<2|3);
var40 = (val*)((long)(0)<<2|3);
var36 = core__flat___CString___to_s_unsafe(var35, var37, var38, var39, var40);
var34 = var36;
varonce33 = var34;
}
((struct instance_core__NativeArray*)var32)->values[0]=var34;
if (likely(varonce41!=NULL)) {
var42 = varonce41;
} else {
var43 = " ";
var45 = (val*)(1l<<2|1);
var46 = (val*)(1l<<2|1);
var47 = (val*)((long)(0)<<2|3);
var48 = (val*)((long)(0)<<2|3);
var44 = core__flat___CString___to_s_unsafe(var43, var45, var46, var47, var48);
var42 = var44;
varonce41 = var42;
}
((struct instance_core__NativeArray*)var32)->values[2]=var42;
if (likely(varonce49!=NULL)) {
var50 = varonce49;
} else {
var51 = " \n";
var53 = (val*)(2l<<2|1);
var54 = (val*)(2l<<2|1);
var55 = (val*)((long)(0)<<2|3);
var56 = (val*)((long)(0)<<2|3);
var52 = core__flat___CString___to_s_unsafe(var51, var53, var54, var55, var56);
var50 = var52;
varonce49 = var50;
}
((struct instance_core__NativeArray*)var32)->values[4]=var50;
} else {
var32 = varonce31;
varonce31 = NULL;
}
var57 = core__flat___Int___core__abstract_text__Object__to_s(var_err);
((struct instance_core__NativeArray*)var32)->values[1]=var57;
var58 = core__flat___Int___core__abstract_text__Object__to_s(var_len);
((struct instance_core__NativeArray*)var32)->values[3]=var58;
{
var59 = ((val*(*)(val* self))(var32->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var32); /* native_to_s on <var32:NativeArray[String]>*/
}
varonce31 = var32;
{
((void(*)(val* self, val* p0))(var30->class->vft[COLOR_core__error__Error__message_61d]))(var30, var59); /* message= on <var30:IOError>*/
}
{
((void(*)(val* self))(var30->class->vft[COLOR_core__kernel__Object__init]))(var30); /* init on <var30:IOError>*/
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_core__stream__Stream__last_error_61d]))(self, var30); /* last_error= on <self:FileWriter>*/
}
} else {
}
RET_LABEL:;
}
/* method file$FileWriter$open for (self: FileWriter, String) */
void core___core__FileWriter___open(val* self, val* p0) {
val* var_path /* var path: String */;
static val* varoncenew;
static int varoncenew_guard;
val* var /* : NativeFile */;
val* var1 /* : NativeFile */;
char* var2 /* : CString */;
val* var3 /* : NativeFile */;
val* var4 /* : nullable NativeFile */;
short int var5 /* : Bool */;
val* var6 /* : IOError */;
val* var7 /* : NativeArray[String] */;
static val* varonce;
static val* varonce8;
val* var9 /* : String */;
char* var10 /* : CString */;
val* var11 /* : String */;
val* var12 /* : nullable Int */;
val* var13 /* : nullable Int */;
val* var14 /* : nullable Bool */;
val* var15 /* : nullable Bool */;
static val* varonce16;
val* var17 /* : String */;
char* var18 /* : CString */;
val* var19 /* : String */;
val* var20 /* : nullable Int */;
val* var21 /* : nullable Int */;
val* var22 /* : nullable Bool */;
val* var23 /* : nullable Bool */;
val* var24 /* : Sys */;
val* var26 /* : Sys */;
long var27 /* : Int */;
val* var28 /* : String */;
val* var29 /* : String */;
{
((void(*)(val* self))(self->class->vft[COLOR_core__kernel__Object__init]))(self); /* init on <self:FileWriter>*/
}
var_path = p0;
if (likely(varoncenew_guard)) {
var = varoncenew;
} else {
var1 = NEW_core__file__NativeFile(&type_core__file__NativeFile);
var = var1;
varoncenew = var;
varoncenew_guard = 1;
}
{
var2 = ((char*(*)(val* self))(var_path->class->vft[COLOR_core__abstract_text__Text__to_cstring]))(var_path); /* to_cstring on <var_path:String>*/
}
{
var3 = ((val*(*)(val* self, char* p0))(var->class->vft[COLOR_core__file__NativeFile__io_open_write]))(var, var2); /* io_open_write on <var:NativeFile>*/
}
self->attrs[COLOR_core__file__FileStream___file].val = var3; /* _file on <self:FileWriter> */
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_core__file__FileStream__path_61d]))(self, var_path); /* path= on <self:FileWriter>*/
}
self->attrs[COLOR_core__file__FileWriter___is_writable].s = 1; /* _is_writable on <self:FileWriter> */
var4 = self->attrs[COLOR_core__file__FileStream___file].val; /* _file on <self:FileWriter> */
if (unlikely(var4 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_core__file, 285);
fatal_exit(1);
}
{
var5 = ((short int(*)(val* self))(var4->class->vft[COLOR_core__kernel__Pointer__address_is_null]))(var4); /* address_is_null on <var4:nullable NativeFile(NativeFile)>*/
}
if (var5){
var6 = NEW_core__IOError(&type_core__IOError);
if (unlikely(varonce==NULL)) {
var7 = NEW_core__NativeArray((int)4l, &type_core__NativeArray__core__String);
if (likely(varonce8!=NULL)) {
var9 = varonce8;
} else {
var10 = "Cannot open `";
var12 = (val*)(13l<<2|1);
var13 = (val*)(13l<<2|1);
var14 = (val*)((long)(0)<<2|3);
var15 = (val*)((long)(0)<<2|3);
var11 = core__flat___CString___to_s_unsafe(var10, var12, var13, var14, var15);
var9 = var11;
varonce8 = var9;
}
((struct instance_core__NativeArray*)var7)->values[0]=var9;
if (likely(varonce16!=NULL)) {
var17 = varonce16;
} else {
var18 = "`: ";
var20 = (val*)(3l<<2|1);
var21 = (val*)(3l<<2|1);
var22 = (val*)((long)(0)<<2|3);
var23 = (val*)((long)(0)<<2|3);
var19 = core__flat___CString___to_s_unsafe(var18, var20, var21, var22, var23);
var17 = var19;
varonce16 = var17;
}
((struct instance_core__NativeArray*)var7)->values[2]=var17;
} else {
var7 = varonce;
varonce = NULL;
}
((struct instance_core__NativeArray*)var7)->values[1]=var_path;
{
{ /* Inline kernel$Object$sys (self) on <self:FileWriter> */
var26 = glob_sys;
var24 = var26;
goto RET_LABEL25;
RET_LABEL25:(void)0;
}
}
{
var27 = ((long(*)(val* self))(var24->class->vft[COLOR_core__kernel__Sys__errno]))(var24); /* errno on <var24:Sys>*/
}
var28 = core__abstract_text___Int___strerror(var27);
((struct instance_core__NativeArray*)var7)->values[3]=var28;
{
var29 = ((val*(*)(val* self))(var7->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var7); /* native_to_s on <var7:NativeArray[String]>*/
}
varonce = var7;
{
((void(*)(val* self, val* p0))(var6->class->vft[COLOR_core__error__Error__message_61d]))(var6, var29); /* message= on <var6:IOError>*/
}
{
((void(*)(val* self))(var6->class->vft[COLOR_core__kernel__Object__init]))(var6); /* init on <var6:IOError>*/
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_core__stream__Stream__last_error_61d]))(self, var6); /* last_error= on <self:FileWriter>*/
}
{
((void(*)(val* self, short int p0))(self->class->vft[COLOR_core__file__FileWriter__is_writable_61d]))(self, 0); /* is_writable= on <self:FileWriter>*/
}
} else {
}
RET_LABEL:;
}
/* method file$FileWriter$from_fd for (self: FileWriter, Int) */
void core___core__FileWriter___from_fd(val* self, long p0) {
long var_fd /* var fd: Int */;
static val* varonce;
val* var /* : String */;
char* var1 /* : CString */;
val* var2 /* : String */;
val* var3 /* : nullable Int */;
val* var4 /* : nullable Int */;
val* var5 /* : nullable Bool */;
val* var6 /* : nullable Bool */;
val* var7 /* : Sys */;
char* var8 /* : CString */;
val* var9 /* : NativeFile */;
val* var10 /* : nullable NativeFile */;
short int var11 /* : Bool */;
val* var12 /* : IOError */;
val* var14 /* : NativeArray[String] */;
static val* varonce13;
static val* varonce15;
val* var16 /* : String */;
char* var17 /* : CString */;
val* var18 /* : String */;
val* var19 /* : nullable Int */;
val* var20 /* : nullable Int */;
val* var21 /* : nullable Bool */;
val* var22 /* : nullable Bool */;
static val* varonce23;
val* var24 /* : String */;
char* var25 /* : CString */;
val* var26 /* : String */;
val* var27 /* : nullable Int */;
val* var28 /* : nullable Int */;
val* var29 /* : nullable Bool */;
val* var30 /* : nullable Bool */;
static val* varonce31;
val* var32 /* : String */;
char* var33 /* : CString */;
val* var34 /* : String */;
val* var35 /* : nullable Int */;
val* var36 /* : nullable Int */;
val* var37 /* : nullable Bool */;
val* var38 /* : nullable Bool */;
val* var39 /* : String */;
val* var40 /* : Sys */;
val* var42 /* : Sys */;
long var43 /* : Int */;
val* var44 /* : String */;
val* var45 /* : String */;
{
((void(*)(val* self))(self->class->vft[COLOR_core__kernel__Object__init]))(self); /* init on <self:FileWriter>*/
}
var_fd = p0;
if (likely(varonce!=NULL)) {
var = varonce;
} else {
var1 = "";
var3 = (val*)(0l<<2|1);
var4 = (val*)(0l<<2|1);
var5 = (val*)((long)(0)<<2|3);
var6 = (val*)((long)(0)<<2|3);
var2 = core__flat___CString___to_s_unsafe(var1, var3, var4, var5, var6);
var = var2;
varonce = var;
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_core__file__FileStream__path_61d]))(self, var); /* path= on <self:FileWriter>*/
}
var7 = glob_sys;
{
var8 = ((char*(*)(val* self))(var7->class->vft[COLOR_core__file__Sys__wipe_write]))(var7); /* wipe_write on <var7:Sys>*/
}
var9 = core__file___Int___fd_to_stream(var_fd, var8);
self->attrs[COLOR_core__file__FileStream___file].val = var9; /* _file on <self:FileWriter> */
self->attrs[COLOR_core__file__FileWriter___is_writable].s = 1; /* _is_writable on <self:FileWriter> */
var10 = self->attrs[COLOR_core__file__FileStream___file].val; /* _file on <self:FileWriter> */
if (unlikely(var10 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_core__file, 296);
fatal_exit(1);
}
{
var11 = ((short int(*)(val* self))(var10->class->vft[COLOR_core__kernel__Pointer__address_is_null]))(var10); /* address_is_null on <var10:nullable NativeFile(NativeFile)>*/
}
if (var11){
var12 = NEW_core__IOError(&type_core__IOError);
if (unlikely(varonce13==NULL)) {
var14 = NEW_core__NativeArray((int)5l, &type_core__NativeArray__core__String);
if (likely(varonce15!=NULL)) {
var16 = varonce15;
} else {
var17 = "Error: Opening stream from file descriptor ";
var19 = (val*)(43l<<2|1);
var20 = (val*)(43l<<2|1);
var21 = (val*)((long)(0)<<2|3);
var22 = (val*)((long)(0)<<2|3);
var18 = core__flat___CString___to_s_unsafe(var17, var19, var20, var21, var22);
var16 = var18;
varonce15 = var16;
}
((struct instance_core__NativeArray*)var14)->values[0]=var16;
if (likely(varonce23!=NULL)) {
var24 = varonce23;
} else {
var25 = " failed with \'";
var27 = (val*)(14l<<2|1);
var28 = (val*)(14l<<2|1);
var29 = (val*)((long)(0)<<2|3);
var30 = (val*)((long)(0)<<2|3);
var26 = core__flat___CString___to_s_unsafe(var25, var27, var28, var29, var30);
var24 = var26;
varonce23 = var24;
}
((struct instance_core__NativeArray*)var14)->values[2]=var24;
if (likely(varonce31!=NULL)) {
var32 = varonce31;
} else {
var33 = "\'";
var35 = (val*)(1l<<2|1);
var36 = (val*)(1l<<2|1);
var37 = (val*)((long)(0)<<2|3);
var38 = (val*)((long)(0)<<2|3);
var34 = core__flat___CString___to_s_unsafe(var33, var35, var36, var37, var38);
var32 = var34;
varonce31 = var32;
}
((struct instance_core__NativeArray*)var14)->values[4]=var32;
} else {
var14 = varonce13;
varonce13 = NULL;
}
var39 = core__flat___Int___core__abstract_text__Object__to_s(var_fd);
((struct instance_core__NativeArray*)var14)->values[1]=var39;
{
{ /* Inline kernel$Object$sys (self) on <self:FileWriter> */
var42 = glob_sys;
var40 = var42;
goto RET_LABEL41;
RET_LABEL41:(void)0;
}
}
{
var43 = ((long(*)(val* self))(var40->class->vft[COLOR_core__kernel__Sys__errno]))(var40); /* errno on <var40:Sys>*/
}
var44 = core__abstract_text___Int___strerror(var43);
((struct instance_core__NativeArray*)var14)->values[3]=var44;
{
var45 = ((val*(*)(val* self))(var14->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var14); /* native_to_s on <var14:NativeArray[String]>*/
}
varonce13 = var14;
{
((void(*)(val* self, val* p0))(var12->class->vft[COLOR_core__error__Error__message_61d]))(var12, var45); /* message= on <var12:IOError>*/
}
{
((void(*)(val* self))(var12->class->vft[COLOR_core__kernel__Object__init]))(var12); /* init on <var12:IOError>*/
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_core__stream__Stream__last_error_61d]))(self, var12); /* last_error= on <self:FileWriter>*/
}
self->attrs[COLOR_core__file__FileWriter___is_writable].s = 0; /* _is_writable on <self:FileWriter> */
} else {
}
RET_LABEL:;
}
/* method file$Int$fd_to_stream for (self: Int, CString): NativeFile */
val* core__file___Int___fd_to_stream(long self, char* p0) {
val* var /* : NativeFile */;
val* var1 /* : NativeFile */;
val* var2 /* : NativeFile */;
var1 = core__file___Int_fd_to_stream___impl(self, p0);
var2 = BOX_core__Pointer(var1); /* boxing NativeFile */
var2->type = &type_core__file__NativeFile;
var2->class = &class_core__file__NativeFile;
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method file$Stdin$init for (self: Stdin) */
void core___core__Stdin___core__kernel__Object__init(val* self) {
static val* varoncenew;
static int varoncenew_guard;
val* var /* : NativeFile */;
val* var1 /* : NativeFile */;
val* var2 /* : NativeFile */;
static val* varonce;
val* var3 /* : String */;
char* var4 /* : CString */;
val* var5 /* : String */;
val* var6 /* : nullable Int */;
val* var7 /* : nullable Int */;
val* var8 /* : nullable Bool */;
val* var9 /* : nullable Bool */;
{
((void(*)(val* self))(self->class->vft[COLOR_core___core__Stdin___core__kernel__Object__init]))(self); /* init on <self:Stdin>*/
}
if (likely(varoncenew_guard)) {
var = varoncenew;
} else {
var1 = NEW_core__file__NativeFile(&type_core__file__NativeFile);
var = var1;
varoncenew = var;
varoncenew_guard = 1;
}
{
var2 = ((val*(*)(val* self))(var->class->vft[COLOR_core__file__NativeFile__native_stdin]))(var); /* native_stdin on <var:NativeFile>*/
}
self->attrs[COLOR_core__file__FileStream___file].val = var2; /* _file on <self:Stdin> */
if (likely(varonce!=NULL)) {
var3 = varonce;
} else {
var4 = "/dev/stdin";
var6 = (val*)(10l<<2|1);
var7 = (val*)(10l<<2|1);
var8 = (val*)((long)(0)<<2|3);
var9 = (val*)((long)(0)<<2|3);
var5 = core__flat___CString___to_s_unsafe(var4, var6, var7, var8, var9);
var3 = var5;
varonce = var3;
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_core__file__FileStream__path_61d]))(self, var3); /* path= on <self:Stdin>*/
}
{
((void(*)(val* self, long p0))(self->class->vft[COLOR_core__stream__BufferedReader__prepare_buffer]))(self, 1l); /* prepare_buffer on <self:Stdin>*/
}
RET_LABEL:;
}
/* method file$Stdout$init for (self: Stdout) */
void core___core__Stdout___core__kernel__Object__init(val* self) {
static val* varoncenew;
static int varoncenew_guard;
val* var /* : NativeFile */;
val* var1 /* : NativeFile */;
val* var2 /* : NativeFile */;
static val* varonce;
val* var3 /* : String */;
char* var4 /* : CString */;
val* var5 /* : String */;
val* var6 /* : nullable Int */;
val* var7 /* : nullable Int */;
val* var8 /* : nullable Bool */;
val* var9 /* : nullable Bool */;
val* var10 /* : Sys */;
val* var12 /* : Sys */;
long var13 /* : Int */;
{
((void(*)(val* self))(self->class->vft[COLOR_core___core__Stdout___core__kernel__Object__init]))(self); /* init on <self:Stdout>*/
}
if (likely(varoncenew_guard)) {
var = varoncenew;
} else {
var1 = NEW_core__file__NativeFile(&type_core__file__NativeFile);
var = var1;
varoncenew = var;
varoncenew_guard = 1;
}
{
var2 = ((val*(*)(val* self))(var->class->vft[COLOR_core__file__NativeFile__native_stdout]))(var); /* native_stdout on <var:NativeFile>*/
}
self->attrs[COLOR_core__file__FileStream___file].val = var2; /* _file on <self:Stdout> */
if (likely(varonce!=NULL)) {
var3 = varonce;
} else {
var4 = "/dev/stdout";
var6 = (val*)(11l<<2|1);
var7 = (val*)(11l<<2|1);
var8 = (val*)((long)(0)<<2|3);
var9 = (val*)((long)(0)<<2|3);
var5 = core__flat___CString___to_s_unsafe(var4, var6, var7, var8, var9);
var3 = var5;
varonce = var3;
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_core__file__FileStream__path_61d]))(self, var3); /* path= on <self:Stdout>*/
}
self->attrs[COLOR_core__file__FileWriter___is_writable].s = 1; /* _is_writable on <self:Stdout> */
{
{ /* Inline kernel$Object$sys (self) on <self:Stdout> */
var12 = glob_sys;
var10 = var12;
goto RET_LABEL11;
RET_LABEL11:(void)0;
}
}
{
var13 = ((long(*)(val* self))(var10->class->vft[COLOR_core__file__Sys__buffer_mode_line]))(var10); /* buffer_mode_line on <var10:Sys>*/
}
{
((void(*)(val* self, long p0, long p1))(self->class->vft[COLOR_core__file__FileStream__set_buffering_mode]))(self, 256l, var13); /* set_buffering_mode on <self:Stdout>*/
}
RET_LABEL:;
}
/* method file$Stderr$init for (self: Stderr) */
void core___core__Stderr___core__kernel__Object__init(val* self) {
static val* varoncenew;
static int varoncenew_guard;
val* var /* : NativeFile */;
val* var1 /* : NativeFile */;
val* var2 /* : NativeFile */;
static val* varonce;
val* var3 /* : String */;
char* var4 /* : CString */;
val* var5 /* : String */;
val* var6 /* : nullable Int */;
val* var7 /* : nullable Int */;
val* var8 /* : nullable Bool */;
val* var9 /* : nullable Bool */;
{
((void(*)(val* self))(self->class->vft[COLOR_core___core__Stderr___core__kernel__Object__init]))(self); /* init on <self:Stderr>*/
}
if (likely(varoncenew_guard)) {
var = varoncenew;
} else {
var1 = NEW_core__file__NativeFile(&type_core__file__NativeFile);
var = var1;
varoncenew = var;
varoncenew_guard = 1;
}
{
var2 = ((val*(*)(val* self))(var->class->vft[COLOR_core__file__NativeFile__native_stderr]))(var); /* native_stderr on <var:NativeFile>*/
}
self->attrs[COLOR_core__file__FileStream___file].val = var2; /* _file on <self:Stderr> */
if (likely(varonce!=NULL)) {
var3 = varonce;
} else {
var4 = "/dev/stderr";
var6 = (val*)(11l<<2|1);
var7 = (val*)(11l<<2|1);
var8 = (val*)((long)(0)<<2|3);
var9 = (val*)((long)(0)<<2|3);
var5 = core__flat___CString___to_s_unsafe(var4, var6, var7, var8, var9);
var3 = var5;
varonce = var3;
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_core__file__FileStream__path_61d]))(self, var3); /* path= on <self:Stderr>*/
}
self->attrs[COLOR_core__file__FileWriter___is_writable].s = 1; /* _is_writable on <self:Stderr> */
RET_LABEL:;
}
/* method file$Writable$write_to_file for (self: Writable, String) */
void core__file___Writable___write_to_file(val* self, val* p0) {
val* var_filepath /* var filepath: String */;
val* var /* : FileWriter */;
val* var_stream /* var stream: FileWriter */;
var_filepath = p0;
var = NEW_core__FileWriter(&type_core__FileWriter);
{
((void(*)(val* self, val* p0))(var->class->vft[COLOR_core__file__FileWriter__open]))(var, var_filepath); /* open on <var:FileWriter>*/
}
var_stream = var;
{
((void(*)(val* self, val* p0))((((long)self&3)?class_info[((long)self&3)]:self->class)->vft[COLOR_core__stream__Writable__write_to]))(self, var_stream); /* write_to on <self:Writable>*/
}
{
((void(*)(val* self))(var_stream->class->vft[COLOR_core__stream__Stream__close]))(var_stream); /* close on <var_stream:FileWriter>*/
}
RET_LABEL:;
}
/* method file$Path$path for (self: Path): String */
val* core___core__Path___path(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = self->attrs[COLOR_core__file__Path___path].val; /* _path on <self:Path> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _path");
PRINT_ERROR(" (%s:%d)\n", FILE_core__file, 383);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method file$Path$path= for (self: Path, String) */
void core___core__Path___path_61d(val* self, val* p0) {
self->attrs[COLOR_core__file__Path___path].val = p0; /* _path on <self:Path> */
RET_LABEL:;
}
/* method file$Path$to_s for (self: Path): String */
val* core___core__Path___core__abstract_text__Object__to_s(val* self) {
val* var /* : String */;
val* var1 /* : String */;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_core__file__Path__path]))(self); /* path on <self:Path>*/
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method file$Path$filename for (self: Path): String */
val* core___core__Path___filename(val* self) {
val* var /* : String */;
short int var1 /* : Bool */;
val* var2 /* : String */;
val* var3 /* : String */;
val* var4 /* : String */;
var1 = self->attrs[COLOR_core__file__Path___filename].val != NULL; /* _filename on <self:Path> */
if(likely(var1)) {
var2 = self->attrs[COLOR_core__file__Path___filename].val; /* _filename on <self:Path> */
if (unlikely(var2 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _filename");
PRINT_ERROR(" (%s:%d)\n", FILE_core__file, 388);
fatal_exit(1);
}
} else {
{
var3 = ((val*(*)(val* self))(self->class->vft[COLOR_core__file__Path__path]))(self); /* path on <self:Path>*/
}
{
var4 = ((val*(*)(val* self, val* p0))(var3->class->vft[COLOR_core__file__String__basename]))(var3, ((val*)NULL)); /* basename on <var3:String>*/
}
self->attrs[COLOR_core__file__Path___filename].val = var4; /* _filename on <self:Path> */
var2 = var4;
}
var = var2;
RET_LABEL:;
return var;
}
/* method file$Path$filename= for (self: Path, String) */
void core___core__Path___filename_61d(val* self, val* p0) {
self->attrs[COLOR_core__file__Path___filename].val = p0; /* _filename on <self:Path> */
RET_LABEL:;
}
/* method file$Path$simplified for (self: Path): Path */
val* core___core__Path___simplified(val* self) {
val* var /* : Path */;
short int var1 /* : Bool */;
val* var2 /* : Path */;
val* var3 /* : Path */;
val* var5 /* : String */;
val* var6 /* : String */;
val* var7 /* : Path */;
val* var_res /* var res: Path */;
var1 = self->attrs[COLOR_core__file__Path___simplified].val != NULL; /* _simplified on <self:Path> */
if(likely(var1)) {
var2 = self->attrs[COLOR_core__file__Path___simplified].val; /* _simplified on <self:Path> */
if (unlikely(var2 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _simplified");
PRINT_ERROR(" (%s:%d)\n", FILE_core__file, 398);
fatal_exit(1);
}
} else {
{
{
var5 = ((val*(*)(val* self))(self->class->vft[COLOR_core__file__Path__path]))(self); /* path on <self:Path>*/
}
{
var6 = ((val*(*)(val* self))(var5->class->vft[COLOR_core__file__String__simplify_path]))(var5); /* simplify_path on <var5:String>*/
}
{
var7 = ((val*(*)(val* self))(var6->class->vft[COLOR_core__file__Text__to_path]))(var6); /* to_path on <var6:String>*/
}
var_res = var7;
{
((void(*)(val* self, val* p0))(var_res->class->vft[COLOR_core__file__Path__simplified_61d]))(var_res, var_res); /* simplified= on <var_res:Path>*/
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
/* method file$Path$simplified= for (self: Path, Path) */
void core___core__Path___simplified_61d(val* self, val* p0) {
self->attrs[COLOR_core__file__Path___simplified].val = p0; /* _simplified on <self:Path> */
RET_LABEL:;
}
/* method file$Path$dir for (self: Path): Path */
val* core___core__Path___dir(val* self) {
val* var /* : Path */;
short int var1 /* : Bool */;
val* var2 /* : Path */;
val* var3 /* : Path */;
val* var5 /* : String */;
val* var6 /* : String */;
val* var7 /* : Path */;
var1 = self->attrs[COLOR_core__file__Path___dir].val != NULL; /* _dir on <self:Path> */
if(likely(var1)) {
var2 = self->attrs[COLOR_core__file__Path___dir].val; /* _dir on <self:Path> */
if (unlikely(var2 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _dir");
PRINT_ERROR(" (%s:%d)\n", FILE_core__file, 414);
fatal_exit(1);
}
} else {
{
{
var5 = ((val*(*)(val* self))(self->class->vft[COLOR_core__file__Path__path]))(self); /* path on <self:Path>*/
}
{
var6 = ((val*(*)(val* self))(var5->class->vft[COLOR_core__file__String__dirname]))(var5); /* dirname on <var5:String>*/
}
{
var7 = ((val*(*)(val* self))(var6->class->vft[COLOR_core__file__Text__to_path]))(var6); /* to_path on <var6:String>*/
}
var3 = var7;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
self->attrs[COLOR_core__file__Path___dir].val = var3; /* _dir on <self:Path> */
var2 = var3;
}
var = var2;
RET_LABEL:;
return var;
}
/* method file$Path$dir= for (self: Path, Path) */
void core___core__Path___dir_61d(val* self, val* p0) {
self->attrs[COLOR_core__file__Path___dir].val = p0; /* _dir on <self:Path> */
RET_LABEL:;
}
/* method file$Path$last_error for (self: Path): nullable IOError */
val* core___core__Path___last_error(val* self) {
val* var /* : nullable IOError */;
val* var1 /* : nullable IOError */;
var1 = self->attrs[COLOR_core__file__Path___last_error].val; /* _last_error on <self:Path> */
var = var1;
RET_LABEL:;
return var;
}
/* method file$Path$last_error= for (self: Path, nullable IOError) */
void core___core__Path___last_error_61d(val* self, val* p0) {
self->attrs[COLOR_core__file__Path___last_error].val = p0; /* _last_error on <self:Path> */
RET_LABEL:;
}
/* method file$Path$exists for (self: Path): Bool */
short int core___core__Path___exists(val* self) {
short int var /* : Bool */;
val* var1 /* : nullable FileStat */;
short int var2 /* : Bool */;
short int var3 /* : Bool */;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_core__file__Path__stat]))(self); /* stat on <self:Path>*/
}
if (var1 == NULL) {
var2 = 0; /* is null */
} else {
var2 = 1; /* arg is null and recv is not */
}
if (0) {
var3 = ((short int(*)(val* self, val* p0))(var1->class->vft[COLOR_core__kernel__Object___33d_61d]))(var1, ((val*)NULL)); /* != on <var1:nullable FileStat>*/
var2 = var3;
}
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method file$Path$stat for (self: Path): nullable FileStat */
val* core___core__Path___stat(val* self) {
val* var /* : nullable FileStat */;
val* var1 /* : String */;
char* var2 /* : CString */;
val* var3 /* : NativeFileStat */;
val* var_stat /* var stat: NativeFileStat */;
short int var4 /* : Bool */;
val* var5 /* : IOError */;
val* var6 /* : NativeArray[String] */;
static val* varonce;
static val* varonce7;
val* var8 /* : String */;
char* var9 /* : CString */;
val* var10 /* : String */;
val* var11 /* : nullable Int */;
val* var12 /* : nullable Int */;
val* var13 /* : nullable Bool */;
val* var14 /* : nullable Bool */;
static val* varonce15;
val* var16 /* : String */;
char* var17 /* : CString */;
val* var18 /* : String */;
val* var19 /* : nullable Int */;
val* var20 /* : nullable Int */;
val* var21 /* : nullable Bool */;
val* var22 /* : nullable Bool */;
val* var23 /* : String */;
val* var24 /* : Sys */;
val* var26 /* : Sys */;
long var27 /* : Int */;
val* var28 /* : String */;
val* var29 /* : String */;
val* var30 /* : FileStat */;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_core__file__Path__path]))(self); /* path on <self:Path>*/
}
{
var2 = ((char*(*)(val* self))(var1->class->vft[COLOR_core__abstract_text__Text__to_cstring]))(var1); /* to_cstring on <var1:String>*/
}
var3 = core__file___CString___file_stat(var2);
var_stat = var3;
{
var4 = ((short int(*)(val* self))(var_stat->class->vft[COLOR_core__kernel__Pointer__address_is_null]))(var_stat); /* address_is_null on <var_stat:NativeFileStat>*/
}
if (var4){
var5 = NEW_core__IOError(&type_core__IOError);
if (unlikely(varonce==NULL)) {
var6 = NEW_core__NativeArray((int)4l, &type_core__NativeArray__core__String);
if (likely(varonce7!=NULL)) {
var8 = varonce7;
} else {
var9 = "Cannot open `";
var11 = (val*)(13l<<2|1);
var12 = (val*)(13l<<2|1);
var13 = (val*)((long)(0)<<2|3);
var14 = (val*)((long)(0)<<2|3);
var10 = core__flat___CString___to_s_unsafe(var9, var11, var12, var13, var14);
var8 = var10;
varonce7 = var8;
}
((struct instance_core__NativeArray*)var6)->values[0]=var8;
if (likely(varonce15!=NULL)) {
var16 = varonce15;
} else {
var17 = "`: ";
var19 = (val*)(3l<<2|1);
var20 = (val*)(3l<<2|1);
var21 = (val*)((long)(0)<<2|3);
var22 = (val*)((long)(0)<<2|3);
var18 = core__flat___CString___to_s_unsafe(var17, var19, var20, var21, var22);
var16 = var18;
varonce15 = var16;
}
((struct instance_core__NativeArray*)var6)->values[2]=var16;
} else {
var6 = varonce;
varonce = NULL;
}
{
var23 = ((val*(*)(val* self))(self->class->vft[COLOR_core__file__Path__path]))(self); /* path on <self:Path>*/
}
((struct instance_core__NativeArray*)var6)->values[1]=var23;
{
{ /* Inline kernel$Object$sys (self) on <self:Path> */
var26 = glob_sys;
var24 = var26;
goto RET_LABEL25;
RET_LABEL25:(void)0;
}
}
{
var27 = ((long(*)(val* self))(var24->class->vft[COLOR_core__kernel__Sys__errno]))(var24); /* errno on <var24:Sys>*/
}
var28 = core__abstract_text___Int___strerror(var27);
((struct instance_core__NativeArray*)var6)->values[3]=var28;
{
var29 = ((val*(*)(val* self))(var6->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var6); /* native_to_s on <var6:NativeArray[String]>*/
}
varonce = var6;
{
((void(*)(val* self, val* p0))(var5->class->vft[COLOR_core__error__Error__message_61d]))(var5, var29); /* message= on <var5:IOError>*/
}
{
((void(*)(val* self))(var5->class->vft[COLOR_core__kernel__Object__init]))(var5); /* init on <var5:IOError>*/
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_core__file__Path__last_error_61d]))(self, var5); /* last_error= on <self:Path>*/
}
var = ((val*)NULL);
goto RET_LABEL;
} else {
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_core__file__Path__last_error_61d]))(self, ((val*)NULL)); /* last_error= on <self:Path>*/
}
var30 = NEW_core__FileStat(&type_core__FileStat);
{
((void(*)(val* self, val* p0))(var30->class->vft[COLOR_core__file__FileStat__stat_61d]))(var30, var_stat); /* stat= on <var30:FileStat>*/
}
{
((void(*)(val* self))(var30->class->vft[COLOR_core__kernel__Object__init]))(var30); /* init on <var30:FileStat>*/
}
var = var30;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method file$Path$link_stat for (self: Path): nullable FileStat */
val* core___core__Path___link_stat(val* self) {
val* var /* : nullable FileStat */;
val* var1 /* : String */;
char* var2 /* : CString */;
val* var3 /* : NativeFileStat */;
val* var_stat /* var stat: NativeFileStat */;
short int var4 /* : Bool */;
val* var5 /* : IOError */;
val* var6 /* : NativeArray[String] */;
static val* varonce;
static val* varonce7;
val* var8 /* : String */;
char* var9 /* : CString */;
val* var10 /* : String */;
val* var11 /* : nullable Int */;
val* var12 /* : nullable Int */;
val* var13 /* : nullable Bool */;
val* var14 /* : nullable Bool */;
static val* varonce15;
val* var16 /* : String */;
char* var17 /* : CString */;
val* var18 /* : String */;
val* var19 /* : nullable Int */;
val* var20 /* : nullable Int */;
val* var21 /* : nullable Bool */;
val* var22 /* : nullable Bool */;
val* var23 /* : String */;
val* var24 /* : Sys */;
val* var26 /* : Sys */;
long var27 /* : Int */;
val* var28 /* : String */;
val* var29 /* : String */;
val* var30 /* : FileStat */;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_core__file__Path__path]))(self); /* path on <self:Path>*/
}
{
var2 = ((char*(*)(val* self))(var1->class->vft[COLOR_core__abstract_text__Text__to_cstring]))(var1); /* to_cstring on <var1:String>*/
}
var3 = core__file___CString___file_lstat(var2);
var_stat = var3;
{
var4 = ((short int(*)(val* self))(var_stat->class->vft[COLOR_core__kernel__Pointer__address_is_null]))(var_stat); /* address_is_null on <var_stat:NativeFileStat>*/
}
if (var4){
var5 = NEW_core__IOError(&type_core__IOError);
if (unlikely(varonce==NULL)) {
var6 = NEW_core__NativeArray((int)4l, &type_core__NativeArray__core__String);
if (likely(varonce7!=NULL)) {
var8 = varonce7;
} else {
var9 = "Cannot open `";
var11 = (val*)(13l<<2|1);
var12 = (val*)(13l<<2|1);
var13 = (val*)((long)(0)<<2|3);
var14 = (val*)((long)(0)<<2|3);
var10 = core__flat___CString___to_s_unsafe(var9, var11, var12, var13, var14);
var8 = var10;
varonce7 = var8;
}
((struct instance_core__NativeArray*)var6)->values[0]=var8;
if (likely(varonce15!=NULL)) {
var16 = varonce15;
} else {
var17 = "`: ";
var19 = (val*)(3l<<2|1);
var20 = (val*)(3l<<2|1);
var21 = (val*)((long)(0)<<2|3);
var22 = (val*)((long)(0)<<2|3);
var18 = core__flat___CString___to_s_unsafe(var17, var19, var20, var21, var22);
var16 = var18;
varonce15 = var16;
}
((struct instance_core__NativeArray*)var6)->values[2]=var16;
} else {
var6 = varonce;
varonce = NULL;
}
{
var23 = ((val*(*)(val* self))(self->class->vft[COLOR_core__file__Path__path]))(self); /* path on <self:Path>*/
}
((struct instance_core__NativeArray*)var6)->values[1]=var23;
{
{ /* Inline kernel$Object$sys (self) on <self:Path> */
var26 = glob_sys;
var24 = var26;
goto RET_LABEL25;
RET_LABEL25:(void)0;
}
}
{
var27 = ((long(*)(val* self))(var24->class->vft[COLOR_core__kernel__Sys__errno]))(var24); /* errno on <var24:Sys>*/
}
var28 = core__abstract_text___Int___strerror(var27);
((struct instance_core__NativeArray*)var6)->values[3]=var28;
{
var29 = ((val*(*)(val* self))(var6->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var6); /* native_to_s on <var6:NativeArray[String]>*/
}
varonce = var6;
{
((void(*)(val* self, val* p0))(var5->class->vft[COLOR_core__error__Error__message_61d]))(var5, var29); /* message= on <var5:IOError>*/
}
{
((void(*)(val* self))(var5->class->vft[COLOR_core__kernel__Object__init]))(var5); /* init on <var5:IOError>*/
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_core__file__Path__last_error_61d]))(self, var5); /* last_error= on <self:Path>*/
}
var = ((val*)NULL);
goto RET_LABEL;
} else {
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_core__file__Path__last_error_61d]))(self, ((val*)NULL)); /* last_error= on <self:Path>*/
}
var30 = NEW_core__FileStat(&type_core__FileStat);
{
((void(*)(val* self, val* p0))(var30->class->vft[COLOR_core__file__FileStat__stat_61d]))(var30, var_stat); /* stat= on <var30:FileStat>*/
}
{
((void(*)(val* self))(var30->class->vft[COLOR_core__kernel__Object__init]))(var30); /* init on <var30:FileStat>*/
}
var = var30;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method file$Path$delete for (self: Path) */
void core___core__Path___delete(val* self) {
val* var /* : String */;
char* var1 /* : CString */;
short int var2 /* : Bool */;
short int var_res /* var res: Bool */;
short int var3 /* : Bool */;
val* var4 /* : IOError */;
val* var5 /* : NativeArray[String] */;
static val* varonce;
static val* varonce6;
val* var7 /* : String */;
char* var8 /* : CString */;
val* var9 /* : String */;
val* var10 /* : nullable Int */;
val* var11 /* : nullable Int */;
val* var12 /* : nullable Bool */;
val* var13 /* : nullable Bool */;
static val* varonce14;
val* var15 /* : String */;
char* var16 /* : CString */;
val* var17 /* : String */;
val* var18 /* : nullable Int */;
val* var19 /* : nullable Int */;
val* var20 /* : nullable Bool */;
val* var21 /* : nullable Bool */;
val* var22 /* : String */;
val* var23 /* : Sys */;
val* var25 /* : Sys */;
long var26 /* : Int */;
val* var27 /* : String */;
val* var28 /* : String */;
{
var = ((val*(*)(val* self))(self->class->vft[COLOR_core__file__Path__path]))(self); /* path on <self:Path>*/
}
{
var1 = ((char*(*)(val* self))(var->class->vft[COLOR_core__abstract_text__Text__to_cstring]))(var); /* to_cstring on <var:String>*/
}
var2 = core__file___CString___file_delete(var1);
var_res = var2;
var3 = !var_res;
if (var3){
var4 = NEW_core__IOError(&type_core__IOError);
if (unlikely(varonce==NULL)) {
var5 = NEW_core__NativeArray((int)4l, &type_core__NativeArray__core__String);
if (likely(varonce6!=NULL)) {
var7 = varonce6;
} else {
var8 = "Cannot delete `";
var10 = (val*)(15l<<2|1);
var11 = (val*)(15l<<2|1);
var12 = (val*)((long)(0)<<2|3);
var13 = (val*)((long)(0)<<2|3);
var9 = core__flat___CString___to_s_unsafe(var8, var10, var11, var12, var13);
var7 = var9;
varonce6 = var7;
}
((struct instance_core__NativeArray*)var5)->values[0]=var7;
if (likely(varonce14!=NULL)) {
var15 = varonce14;
} else {
var16 = "`: ";
var18 = (val*)(3l<<2|1);
var19 = (val*)(3l<<2|1);
var20 = (val*)((long)(0)<<2|3);
var21 = (val*)((long)(0)<<2|3);
var17 = core__flat___CString___to_s_unsafe(var16, var18, var19, var20, var21);
var15 = var17;
varonce14 = var15;
}
((struct instance_core__NativeArray*)var5)->values[2]=var15;
} else {
var5 = varonce;
varonce = NULL;
}
{
var22 = ((val*(*)(val* self))(self->class->vft[COLOR_core__file__Path__path]))(self); /* path on <self:Path>*/
}
((struct instance_core__NativeArray*)var5)->values[1]=var22;
{
{ /* Inline kernel$Object$sys (self) on <self:Path> */
var25 = glob_sys;
var23 = var25;
goto RET_LABEL24;
RET_LABEL24:(void)0;
}
}
{
var26 = ((long(*)(val* self))(var23->class->vft[COLOR_core__kernel__Sys__errno]))(var23); /* errno on <var23:Sys>*/
}
var27 = core__abstract_text___Int___strerror(var26);
((struct instance_core__NativeArray*)var5)->values[3]=var27;
{
var28 = ((val*(*)(val* self))(var5->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var5); /* native_to_s on <var5:NativeArray[String]>*/
}
varonce = var5;
{
((void(*)(val* self, val* p0))(var4->class->vft[COLOR_core__error__Error__message_61d]))(var4, var28); /* message= on <var4:IOError>*/
}
{
((void(*)(val* self))(var4->class->vft[COLOR_core__kernel__Object__init]))(var4); /* init on <var4:IOError>*/
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_core__file__Path__last_error_61d]))(self, var4); /* last_error= on <self:Path>*/
}
} else {
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_core__file__Path__last_error_61d]))(self, ((val*)NULL)); /* last_error= on <self:Path>*/
}
}
RET_LABEL:;
}
/* method file$Path$copy for (self: Path, Path) */
void core___core__Path___copy(val* self, val* p0) {
val* var_dest /* var dest: Path */;
val* var /* : FileReader */;
val* var_input /* var input: FileReader */;
val* var1 /* : FileWriter */;
val* var_output /* var output: FileWriter */;
short int var2 /* : Bool */;
short int var3 /* : Bool */;
val* var4 /* : Bytes */;
val* var_buffer /* var buffer: Bytes */;
val* var5 /* : nullable IOError */;
val* var6 /* : nullable IOError */;
val* var7 /* : nullable IOError */;
var_dest = p0;
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_core__file__Path__last_error_61d]))(self, ((val*)NULL)); /* last_error= on <self:Path>*/
}
{
var = ((val*(*)(val* self))(self->class->vft[COLOR_core__file__Path__open_ro]))(self); /* open_ro on <self:Path>*/
}
var_input = var;
{
var1 = ((val*(*)(val* self))(var_dest->class->vft[COLOR_core__file__Path__open_wo]))(var_dest); /* open_wo on <var_dest:Path>*/
}
var_output = var1;
for(;;) {
{
var2 = ((short int(*)(val* self))(var_input->class->vft[COLOR_core__stream__Reader__eof]))(var_input); /* eof on <var_input:FileReader>*/
}
var3 = !var2;
if (var3){
{
var4 = ((val*(*)(val* self, long p0))(var_input->class->vft[COLOR_core__stream__Reader__read_bytes]))(var_input, 1024l); /* read_bytes on <var_input:FileReader>*/
}
var_buffer = var4;
{
((void(*)(val* self, val* p0))(var_output->class->vft[COLOR_core__stream__Writer__write_bytes]))(var_output, var_buffer); /* write_bytes on <var_output:FileWriter>*/
}
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))(var_input->class->vft[COLOR_core__stream__Stream__close]))(var_input); /* close on <var_input:FileReader>*/
}
{
((void(*)(val* self))(var_output->class->vft[COLOR_core__stream__Stream__close]))(var_output); /* close on <var_output:FileWriter>*/
}
{
var6 = ((val*(*)(val* self))(var_input->class->vft[COLOR_core__stream__Stream__last_error]))(var_input); /* last_error on <var_input:FileReader>*/
}
if (var6!=NULL) {
var5 = var6;
} else {
{
var7 = ((val*(*)(val* self))(var_output->class->vft[COLOR_core__stream__Stream__last_error]))(var_output); /* last_error on <var_output:FileWriter>*/
}
var5 = var7;
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_core__file__Path__last_error_61d]))(self, var5); /* last_error= on <self:Path>*/
}
RET_LABEL:;
}
/* method file$Path$open_ro for (self: Path): FileReader */
val* core___core__Path___open_ro(val* self) {
val* var /* : FileReader */;
val* var1 /* : FileReader */;
val* var2 /* : String */;
val* var_res /* var res: FileReader */;
val* var3 /* : nullable IOError */;
var1 = NEW_core__FileReader(&type_core__FileReader);
{
var2 = ((val*(*)(val* self))(self->class->vft[COLOR_core__file__Path__path]))(self); /* path on <self:Path>*/
}
{
((void(*)(val* self, val* p0))(var1->class->vft[COLOR_core__file__FileReader__open]))(var1, var2); /* open on <var1:FileReader>*/
}
var_res = var1;
{
var3 = ((val*(*)(val* self))(var_res->class->vft[COLOR_core__stream__Stream__last_error]))(var_res); /* last_error on <var_res:FileReader>*/
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_core__file__Path__last_error_61d]))(self, var3); /* last_error= on <self:Path>*/
}
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method file$Path$open_wo for (self: Path): FileWriter */
val* core___core__Path___open_wo(val* self) {
val* var /* : FileWriter */;
val* var1 /* : FileWriter */;
val* var2 /* : String */;
val* var_res /* var res: FileWriter */;
val* var3 /* : nullable IOError */;
var1 = NEW_core__FileWriter(&type_core__FileWriter);
{
var2 = ((val*(*)(val* self))(self->class->vft[COLOR_core__file__Path__path]))(self); /* path on <self:Path>*/
}
{
((void(*)(val* self, val* p0))(var1->class->vft[COLOR_core__file__FileWriter__open]))(var1, var2); /* open on <var1:FileWriter>*/
}
var_res = var1;
{
var3 = ((val*(*)(val* self))(var_res->class->vft[COLOR_core__stream__Stream__last_error]))(var_res); /* last_error on <var_res:FileWriter>*/
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_core__file__Path__last_error_61d]))(self, var3); /* last_error= on <self:Path>*/
}
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method file$Path$read_all for (self: Path): String */
val* core___core__Path___read_all(val* self) {
val* var /* : String */;
val* var1 /* : Bytes */;
val* var2 /* : String */;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_core__file__Path__read_all_bytes]))(self); /* read_all_bytes on <self:Path>*/
}
{
var2 = ((val*(*)(val* self))(var1->class->vft[COLOR_core__abstract_text__Object__to_s]))(var1); /* to_s on <var1:Bytes>*/
}
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method file$Path$read_all_bytes for (self: Path): Bytes */
val* core___core__Path___read_all_bytes(val* self) {
val* var /* : Bytes */;
val* var1 /* : FileReader */;
val* var_s /* var s: FileReader */;
val* var2 /* : Bytes */;
val* var_res /* var res: Bytes */;
val* var3 /* : nullable IOError */;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_core__file__Path__open_ro]))(self); /* open_ro on <self:Path>*/
}
var_s = var1;
{
var2 = ((val*(*)(val* self))(var_s->class->vft[COLOR_core__stream__Reader__read_all_bytes]))(var_s); /* read_all_bytes on <var_s:FileReader>*/
}
var_res = var2;
{
((void(*)(val* self))(var_s->class->vft[COLOR_core__stream__Stream__close]))(var_s); /* close on <var_s:FileReader>*/
}
{
var3 = ((val*(*)(val* self))(var_s->class->vft[COLOR_core__stream__Stream__last_error]))(var_s); /* last_error on <var_s:FileReader>*/
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_core__file__Path__last_error_61d]))(self, var3); /* last_error= on <self:Path>*/
}
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method file$Path$read_lines for (self: Path): Array[String] */
val* core___core__Path___read_lines(val* self) {
val* var /* : Array[String] */;
val* var1 /* : FileReader */;
val* var_s /* var s: FileReader */;
val* var2 /* : Array[String] */;
val* var_res /* var res: Array[String] */;
val* var3 /* : nullable IOError */;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_core__file__Path__open_ro]))(self); /* open_ro on <self:Path>*/
}
var_s = var1;
{
var2 = ((val*(*)(val* self))(var_s->class->vft[COLOR_core__stream__Reader__read_lines]))(var_s); /* read_lines on <var_s:FileReader>*/
}
var_res = var2;
{
((void(*)(val* self))(var_s->class->vft[COLOR_core__stream__Stream__close]))(var_s); /* close on <var_s:FileReader>*/
}
{
var3 = ((val*(*)(val* self))(var_s->class->vft[COLOR_core__stream__Stream__last_error]))(var_s); /* last_error on <var_s:FileReader>*/
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_core__file__Path__last_error_61d]))(self, var3); /* last_error= on <self:Path>*/
}
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method file$Path$each_line for (self: Path): LineIterator */
val* core___core__Path___each_line(val* self) {
val* var /* : LineIterator */;
val* var1 /* : FileReader */;
val* var_s /* var s: FileReader */;
val* var2 /* : LineIterator */;
val* var_res /* var res: LineIterator */;
val* var3 /* : nullable IOError */;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_core__file__Path__open_ro]))(self); /* open_ro on <self:Path>*/
}
var_s = var1;
{
var2 = ((val*(*)(val* self))(var_s->class->vft[COLOR_core__stream__Reader__each_line]))(var_s); /* each_line on <var_s:FileReader>*/
}
var_res = var2;
{
((void(*)(val* self, short int p0))(var_res->class->vft[COLOR_core__stream__LineIterator__close_on_finish_61d]))(var_res, 1); /* close_on_finish= on <var_res:LineIterator>*/
}
{
var3 = ((val*(*)(val* self))(var_s->class->vft[COLOR_core__stream__Stream__last_error]))(var_s); /* last_error on <var_s:FileReader>*/
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_core__file__Path__last_error_61d]))(self, var3); /* last_error= on <self:Path>*/
}
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method file$Path$/ for (self: Path, String): Path */
val* core___core__Path____47d(val* self, val* p0) {
val* var /* : Path */;
val* var_subpath /* var subpath: String */;
val* var1 /* : Path */;
val* var2 /* : String */;
val* var3 /* : String */;
var_subpath = p0;
var1 = NEW_core__Path(&type_core__Path);
{
var2 = ((val*(*)(val* self))(self->class->vft[COLOR_core__file__Path__path]))(self); /* path on <self:Path>*/
}
{
var3 = ((val*(*)(val* self, val* p0))(var2->class->vft[COLOR_core__file__String___47d]))(var2, var_subpath); /* / on <var2:String>*/
}
{
((void(*)(val* self, val* p0))(var1->class->vft[COLOR_core__file__Path__path_61d]))(var1, var3); /* path= on <var1:Path>*/
}
{
((void(*)(val* self))(var1->class->vft[COLOR_core__kernel__Object__init]))(var1); /* init on <var1:Path>*/
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method file$Path$files for (self: Path): Array[Path] */
val* core___core__Path___files(val* self) {
val* var /* : Array[Path] */;
val* var1 /* : Array[Path] */;
val* var_res /* var res: Array[Path] */;
static val* varoncenew;
static int varoncenew_guard;
val* var2 /* : NativeDir */;
val* var3 /* : NativeDir */;
val* var4 /* : String */;
char* var5 /* : CString */;
val* var6 /* : NativeDir */;
val* var_d /* var d: NativeDir */;
short int var7 /* : Bool */;
val* var8 /* : IOError */;
val* var9 /* : NativeArray[String] */;
static val* varonce;
static val* varonce10;
val* var11 /* : String */;
char* var12 /* : CString */;
val* var13 /* : String */;
val* var14 /* : nullable Int */;
val* var15 /* : nullable Int */;
val* var16 /* : nullable Bool */;
val* var17 /* : nullable Bool */;
static val* varonce18;
val* var19 /* : String */;
char* var20 /* : CString */;
val* var21 /* : String */;
val* var22 /* : nullable Int */;
val* var23 /* : nullable Int */;
val* var24 /* : nullable Bool */;
val* var25 /* : nullable Bool */;
val* var26 /* : String */;
val* var27 /* : Sys */;
val* var29 /* : Sys */;
long var30 /* : Int */;
val* var31 /* : String */;
val* var32 /* : String */;
char* var33 /* : CString */;
char* var_de /* var de: CString */;
short int var34 /* : Bool */;
val* var35 /* : Pointer */;
val* var36 /* : String */;
val* var_name /* var name: String */;
short int var37 /* : Bool */;
static val* varonce38;
val* var39 /* : String */;
char* var40 /* : CString */;
val* var41 /* : String */;
val* var42 /* : nullable Int */;
val* var43 /* : nullable Int */;
val* var44 /* : nullable Bool */;
val* var45 /* : nullable Bool */;
short int var46 /* : Bool */;
short int var_ /* var : Bool */;
static val* varonce47;
val* var48 /* : String */;
char* var49 /* : CString */;
val* var50 /* : String */;
val* var51 /* : nullable Int */;
val* var52 /* : nullable Int */;
val* var53 /* : nullable Bool */;
val* var54 /* : nullable Bool */;
short int var55 /* : Bool */;
val* var57 /* : Path */;
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_core__file__Path__last_error_61d]))(self, ((val*)NULL)); /* last_error= on <self:Path>*/
}
var1 = NEW_core__Array(&type_core__Array__core__Path);
{
((void(*)(val* self))(var1->class->vft[COLOR_core__kernel__Object__init]))(var1); /* init on <var1:Array[Path]>*/
}
var_res = var1;
if (likely(varoncenew_guard)) {
var2 = varoncenew;
} else {
var3 = NEW_core__file__NativeDir(&type_core__file__NativeDir);
var2 = var3;
varoncenew = var2;
varoncenew_guard = 1;
}
{
var4 = ((val*(*)(val* self))(self->class->vft[COLOR_core__file__Path__path]))(self); /* path on <self:Path>*/
}
{
var5 = ((char*(*)(val* self))(var4->class->vft[COLOR_core__abstract_text__Text__to_cstring]))(var4); /* to_cstring on <var4:String>*/
}
{
var6 = ((val*(*)(val* self, char* p0))(var2->class->vft[COLOR_core__file__NativeDir__opendir]))(var2, var5); /* opendir on <var2:NativeDir>*/
}
var_d = var6;
{
var7 = ((short int(*)(val* self))(var_d->class->vft[COLOR_core__kernel__Pointer__address_is_null]))(var_d); /* address_is_null on <var_d:NativeDir>*/
}
if (var7){
var8 = NEW_core__IOError(&type_core__IOError);
if (unlikely(varonce==NULL)) {
var9 = NEW_core__NativeArray((int)4l, &type_core__NativeArray__core__String);
if (likely(varonce10!=NULL)) {
var11 = varonce10;
} else {
var12 = "Cannot list directory `";
var14 = (val*)(23l<<2|1);
var15 = (val*)(23l<<2|1);
var16 = (val*)((long)(0)<<2|3);
var17 = (val*)((long)(0)<<2|3);
var13 = core__flat___CString___to_s_unsafe(var12, var14, var15, var16, var17);
var11 = var13;
varonce10 = var11;
}
((struct instance_core__NativeArray*)var9)->values[0]=var11;
if (likely(varonce18!=NULL)) {
var19 = varonce18;
} else {
var20 = "`: ";
var22 = (val*)(3l<<2|1);
var23 = (val*)(3l<<2|1);
var24 = (val*)((long)(0)<<2|3);
var25 = (val*)((long)(0)<<2|3);
var21 = core__flat___CString___to_s_unsafe(var20, var22, var23, var24, var25);
var19 = var21;
varonce18 = var19;
}
((struct instance_core__NativeArray*)var9)->values[2]=var19;
} else {
var9 = varonce;
varonce = NULL;
}
{
var26 = ((val*(*)(val* self))(self->class->vft[COLOR_core__file__Path__path]))(self); /* path on <self:Path>*/
}
((struct instance_core__NativeArray*)var9)->values[1]=var26;
{
{ /* Inline kernel$Object$sys (self) on <self:Path> */
var29 = glob_sys;
var27 = var29;
goto RET_LABEL28;
RET_LABEL28:(void)0;
}
}
{
var30 = ((long(*)(val* self))(var27->class->vft[COLOR_core__kernel__Sys__errno]))(var27); /* errno on <var27:Sys>*/
}
var31 = core__abstract_text___Int___strerror(var30);
((struct instance_core__NativeArray*)var9)->values[3]=var31;
{
var32 = ((val*(*)(val* self))(var9->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var9); /* native_to_s on <var9:NativeArray[String]>*/
}
varonce = var9;
{
((void(*)(val* self, val* p0))(var8->class->vft[COLOR_core__error__Error__message_61d]))(var8, var32); /* message= on <var8:IOError>*/
}
{
((void(*)(val* self))(var8->class->vft[COLOR_core__kernel__Object__init]))(var8); /* init on <var8:IOError>*/
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_core__file__Path__last_error_61d]))(self, var8); /* last_error= on <self:Path>*/
}
var = var_res;
goto RET_LABEL;
} else {
}
for(;;) {
{
var33 = ((char*(*)(val* self))(var_d->class->vft[COLOR_core__file__NativeDir__readdir]))(var_d); /* readdir on <var_d:NativeDir>*/
}
var_de = var33;
var35 = BOX_core__Pointer(var_de); /* autobox from CString to Pointer */
var34 = core___core__Pointer___address_is_null(var35);
if (var34){
goto BREAK_label;
} else {
}
var36 = core__flat___CString___core__abstract_text__Object__to_s(var_de);
var_name = var36;
if (likely(varonce38!=NULL)) {
var39 = varonce38;
} else {
var40 = ".";
var42 = (val*)(1l<<2|1);
var43 = (val*)(1l<<2|1);
var44 = (val*)((long)(0)<<2|3);
var45 = (val*)((long)(0)<<2|3);
var41 = core__flat___CString___to_s_unsafe(var40, var42, var43, var44, var45);
var39 = var41;
varonce38 = var39;
}
{
var46 = ((short int(*)(val* self, val* p0))(var_name->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_name, var39); /* == on <var_name:String>*/
}
var_ = var46;
if (var46){
var37 = var_;
} else {
if (likely(varonce47!=NULL)) {
var48 = varonce47;
} else {
var49 = "..";
var51 = (val*)(2l<<2|1);
var52 = (val*)(2l<<2|1);
var53 = (val*)((long)(0)<<2|3);
var54 = (val*)((long)(0)<<2|3);
var50 = core__flat___CString___to_s_unsafe(var49, var51, var52, var53, var54);
var48 = var50;
varonce47 = var48;
}
{
var55 = ((short int(*)(val* self, val* p0))(var_name->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_name, var48); /* == on <var_name:String>*/
}
var37 = var55;
}
if (var37){
goto BREAK_label56;
} else {
}
{
var57 = ((val*(*)(val* self, val* p0))(self->class->vft[COLOR_core__file__Path___47d]))(self, var_name); /* / on <self:Path>*/
}
{
((void(*)(val* self, val* p0))(var_res->class->vft[COLOR_core__abstract_collection__SimpleCollection__add]))(var_res, var57); /* add on <var_res:Array[Path]>*/
}
BREAK_label56: (void)0;
}
BREAK_label: (void)0;
{
((void(*)(val* self))(var_d->class->vft[COLOR_core__file__NativeDir__closedir]))(var_d); /* closedir on <var_d:NativeDir>*/
}
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method file$Path$is_dir for (self: Path): Bool */
short int core___core__Path___is_dir(val* self) {
short int var /* : Bool */;
val* var1 /* : nullable FileStat */;
val* var_st /* var st: nullable FileStat */;
short int var2 /* : Bool */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_core__file__Path__stat]))(self); /* stat on <self:Path>*/
}
var_st = var1;
if (var_st == NULL) {
var2 = 1; /* is null */
} else {
var2 = 0; /* arg is null but recv is not */
}
if (0) {
var3 = ((short int(*)(val* self, val* p0))(var_st->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_st, ((val*)NULL)); /* == on <var_st:nullable FileStat>*/
var2 = var3;
}
if (var2){
var = 0;
goto RET_LABEL;
} else {
}
{
var4 = ((short int(*)(val* self))(var_st->class->vft[COLOR_core__file__FileStat__is_dir]))(var_st); /* is_dir on <var_st:nullable FileStat(FileStat)>*/
}
var = var4;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method file$Path$rmdir for (self: Path) */
void core___core__Path___rmdir(val* self) {
val* var_first_error /* var first_error: nullable Object */;
val* var /* : Array[Path] */;
val* var_ /* var : Array[Path] */;
val* var1 /* : Iterator[nullable Object] */;
val* var_2 /* var : IndexedIterator[Path] */;
short int var3 /* : Bool */;
val* var4 /* : nullable Object */;
val* var_file /* var file: Path */;
val* var5 /* : nullable FileStat */;
val* var_stat /* var stat: nullable FileStat */;
short int var6 /* : Bool */;
short int var7 /* : Bool */;
short int var8 /* : Bool */;
short int var9 /* : Bool */;
val* var10 /* : nullable IOError */;
short int var12 /* : Bool */;
short int var13 /* : Bool */;
short int var14 /* : Bool */;
val* var15 /* : nullable IOError */;
short int var16 /* : Bool */;
short int var17 /* : Bool */;
val* var18 /* : String */;
char* var19 /* : CString */;
short int var20 /* : Bool */;
short int var21 /* : Bool */;
val* var22 /* : IOError */;
val* var23 /* : NativeArray[String] */;
static val* varonce;
static val* varonce24;
val* var25 /* : String */;
char* var26 /* : CString */;
val* var27 /* : String */;
val* var28 /* : nullable Int */;
val* var29 /* : nullable Int */;
val* var30 /* : nullable Bool */;
val* var31 /* : nullable Bool */;
static val* varonce32;
val* var33 /* : String */;
char* var34 /* : CString */;
val* var35 /* : String */;
val* var36 /* : nullable Int */;
val* var37 /* : nullable Int */;
val* var38 /* : nullable Bool */;
val* var39 /* : nullable Bool */;
val* var40 /* : String */;
val* var41 /* : Sys */;
val* var43 /* : Sys */;
long var44 /* : Int */;
val* var45 /* : String */;
val* var46 /* : String */;
var_first_error = ((val*)NULL);
{
var = ((val*(*)(val* self))(self->class->vft[COLOR_core__file__Path__files]))(self); /* files on <self:Path>*/
}
var_ = var;
{
var1 = ((val*(*)(val* self))(var_->class->vft[COLOR_core__abstract_collection__Collection__iterator]))(var_); /* iterator on <var_:Array[Path]>*/
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
var5 = ((val*(*)(val* self))(var_file->class->vft[COLOR_core__file__Path__link_stat]))(var_file); /* link_stat on <var_file:Path>*/
}
var_stat = var5;
if (var_stat == NULL) {
var6 = 1; /* is null */
} else {
var6 = 0; /* arg is null but recv is not */
}
if (0) {
var7 = ((short int(*)(val* self, val* p0))(var_stat->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_stat, ((val*)NULL)); /* == on <var_stat:nullable FileStat>*/
var6 = var7;
}
if (var6){
if (var_first_error == NULL) {
var8 = 1; /* is null */
} else {
var8 = 0; /* arg is null but recv is not */
}
if (0) {
var9 = ((short int(*)(val* self, val* p0))(var_first_error->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_first_error, ((val*)NULL)); /* == on <var_first_error:nullable Object(nullable IOError)>*/
var8 = var9;
}
if (var8){
{
var10 = ((val*(*)(val* self))(var_file->class->vft[COLOR_core__file__Path__last_error]))(var_file); /* last_error on <var_file:Path>*/
}
var_first_error = var10;
} else {
}
goto BREAK_label11;
} else {
}
{
var12 = ((short int(*)(val* self))(var_stat->class->vft[COLOR_core__file__FileStat__is_dir]))(var_stat); /* is_dir on <var_stat:nullable FileStat(FileStat)>*/
}
if (var12){
{
((void(*)(val* self))(var_file->class->vft[COLOR_core__file__Path__rmdir]))(var_file); /* rmdir on <var_file:Path>*/
}
} else {
{
((void(*)(val* self))(var_file->class->vft[COLOR_core__file__Path__delete]))(var_file); /* delete on <var_file:Path>*/
}
}
if (var_first_error == NULL) {
var13 = 1; /* is null */
} else {
var13 = 0; /* arg is null but recv is not */
}
if (0) {
var14 = ((short int(*)(val* self, val* p0))(var_first_error->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_first_error, ((val*)NULL)); /* == on <var_first_error:nullable Object(nullable IOError)>*/
var13 = var14;
}
if (var13){
{
var15 = ((val*(*)(val* self))(var_file->class->vft[COLOR_core__file__Path__last_error]))(var_file); /* last_error on <var_file:Path>*/
}
var_first_error = var15;
} else {
}
BREAK_label11: (void)0;
{
((void(*)(val* self))((((long)var_2&3)?class_info[((long)var_2&3)]:var_2->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_2); /* next on <var_2:IndexedIterator[Path]>*/
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_2&3)?class_info[((long)var_2&3)]:var_2->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_2); /* finish on <var_2:IndexedIterator[Path]>*/
}
if (var_first_error == NULL) {
var16 = 1; /* is null */
} else {
var16 = 0; /* arg is null but recv is not */
}
if (0) {
var17 = ((short int(*)(val* self, val* p0))(var_first_error->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_first_error, ((val*)NULL)); /* == on <var_first_error:nullable Object(nullable IOError)>*/
var16 = var17;
}
if (var16){
{
var18 = ((val*(*)(val* self))(self->class->vft[COLOR_core__file__Path__path]))(self); /* path on <self:Path>*/
}
{
var19 = ((char*(*)(val* self))(var18->class->vft[COLOR_core__abstract_text__Text__to_cstring]))(var18); /* to_cstring on <var18:String>*/
}
var20 = core__file___CString___rmdir(var19);
var21 = !var20;
if (var21){
var22 = NEW_core__IOError(&type_core__IOError);
if (unlikely(varonce==NULL)) {
var23 = NEW_core__NativeArray((int)4l, &type_core__NativeArray__core__String);
if (likely(varonce24!=NULL)) {
var25 = varonce24;
} else {
var26 = "Cannot remove `";
var28 = (val*)(15l<<2|1);
var29 = (val*)(15l<<2|1);
var30 = (val*)((long)(0)<<2|3);
var31 = (val*)((long)(0)<<2|3);
var27 = core__flat___CString___to_s_unsafe(var26, var28, var29, var30, var31);
var25 = var27;
varonce24 = var25;
}
((struct instance_core__NativeArray*)var23)->values[0]=var25;
if (likely(varonce32!=NULL)) {
var33 = varonce32;
} else {
var34 = "`: ";
var36 = (val*)(3l<<2|1);
var37 = (val*)(3l<<2|1);
var38 = (val*)((long)(0)<<2|3);
var39 = (val*)((long)(0)<<2|3);
var35 = core__flat___CString___to_s_unsafe(var34, var36, var37, var38, var39);
var33 = var35;
varonce32 = var33;
}
((struct instance_core__NativeArray*)var23)->values[2]=var33;
} else {
var23 = varonce;
varonce = NULL;
}
{
var40 = ((val*(*)(val* self))(self->class->vft[COLOR_core__abstract_text__Object__to_s]))(self); /* to_s on <self:Path>*/
}
((struct instance_core__NativeArray*)var23)->values[1]=var40;
{
{ /* Inline kernel$Object$sys (self) on <self:Path> */
var43 = glob_sys;
var41 = var43;
goto RET_LABEL42;
RET_LABEL42:(void)0;
}
}
{
var44 = ((long(*)(val* self))(var41->class->vft[COLOR_core__kernel__Sys__errno]))(var41); /* errno on <var41:Sys>*/
}
var45 = core__abstract_text___Int___strerror(var44);
((struct instance_core__NativeArray*)var23)->values[3]=var45;
{
var46 = ((val*(*)(val* self))(var23->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var23); /* native_to_s on <var23:NativeArray[String]>*/
}
varonce = var23;
{
((void(*)(val* self, val* p0))(var22->class->vft[COLOR_core__error__Error__message_61d]))(var22, var46); /* message= on <var22:IOError>*/
}
{
((void(*)(val* self))(var22->class->vft[COLOR_core__kernel__Object__init]))(var22); /* init on <var22:IOError>*/
}
var_first_error = var22;
} else {
}
} else {
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_core__file__Path__last_error_61d]))(self, var_first_error); /* last_error= on <self:Path>*/
}
RET_LABEL:;
}
/* method file$Path$== for (self: Path, nullable Object): Bool */
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
val* var5 /* : Path */;
val* var6 /* : String */;
short int var7 /* : Bool */;
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
var3 = ((val*(*)(val* self))(self->class->vft[COLOR_core__file__Path__simplified]))(self); /* simplified on <self:Path>*/
}
{
var4 = ((val*(*)(val* self))(var3->class->vft[COLOR_core__file__Path__path]))(var3); /* path on <var3:Path>*/
}
{
var5 = ((val*(*)(val* self))(var_other->class->vft[COLOR_core__file__Path__simplified]))(var_other); /* simplified on <var_other:nullable Object(Path)>*/
}
{
var6 = ((val*(*)(val* self))(var5->class->vft[COLOR_core__file__Path__path]))(var5); /* path on <var5:Path>*/
}
{
var7 = ((short int(*)(val* self, val* p0))(var4->class->vft[COLOR_core__kernel__Object___61d_61d]))(var4, var6); /* == on <var4:String>*/
}
var1 = var7;
} else {
var1 = var_;
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method file$Path$hash for (self: Path): Int */
long core___core__Path___core__kernel__Object__hash(val* self) {
long var /* : Int */;
val* var1 /* : Path */;
val* var2 /* : String */;
long var3 /* : Int */;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_core__file__Path__simplified]))(self); /* simplified on <self:Path>*/
}
{
var2 = ((val*(*)(val* self))(var1->class->vft[COLOR_core__file__Path__path]))(var1); /* path on <var1:Path>*/
}
{
var3 = ((long(*)(val* self))(var2->class->vft[COLOR_core__kernel__Object__hash]))(var2); /* hash on <var2:String>*/
}
var = var3;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method file$Path$init for (self: Path) */
void core___core__Path___core__kernel__Object__init(val* self) {
{
((void(*)(val* self))(self->class->vft[COLOR_core___core__Path___core__kernel__Object__init]))(self); /* init on <self:Path>*/
}
RET_LABEL:;
}
/* method file$FileStat$stat for (self: FileStat): NativeFileStat */
val* core___core__FileStat___stat(val* self) {
val* var /* : NativeFileStat */;
val* var1 /* : NativeFileStat */;
var1 = self->attrs[COLOR_core__file__FileStat___stat].val; /* _stat on <self:FileStat> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _stat");
PRINT_ERROR(" (%s:%d)\n", FILE_core__file, 769);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method file$FileStat$stat= for (self: FileStat, NativeFileStat) */
void core___core__FileStat___stat_61d(val* self, val* p0) {
self->attrs[COLOR_core__file__FileStat___stat].val = p0; /* _stat on <self:FileStat> */
RET_LABEL:;
}
/* method file$FileStat$finalized for (self: FileStat): Bool */
short int core___core__FileStat___finalized(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = self->attrs[COLOR_core__file__FileStat___finalized].s; /* _finalized on <self:FileStat> */
var = var1;
RET_LABEL:;
return var;
}
/* method file$FileStat$finalized= for (self: FileStat, Bool) */
void core___core__FileStat___finalized_61d(val* self, short int p0) {
self->attrs[COLOR_core__file__FileStat___finalized].s = p0; /* _finalized on <self:FileStat> */
RET_LABEL:;
}
/* method file$FileStat$finalize for (self: FileStat) */
void core___core__FileStat___core__gc__Finalizable__finalize(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
val* var2 /* : NativeFileStat */;
{
var = ((short int(*)(val* self))(self->class->vft[COLOR_core__file__FileStat__finalized]))(self); /* finalized on <self:FileStat>*/
}
var1 = !var;
if (var1){
{
var2 = ((val*(*)(val* self))(self->class->vft[COLOR_core__file__FileStat__stat]))(self); /* stat on <self:FileStat>*/
}
{
((void(*)(val* self))(var2->class->vft[COLOR_core__kernel__Pointer__free]))(var2); /* free on <var2:NativeFileStat>*/
}
{
((void(*)(val* self, short int p0))(self->class->vft[COLOR_core__file__FileStat__finalized_61d]))(self, 1); /* finalized= on <self:FileStat>*/
}
} else {
}
RET_LABEL:;
}
/* method file$FileStat$last_access_time for (self: FileStat): Int */
long core___core__FileStat___last_access_time(val* self) {
long var /* : Int */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var3 /* : NativeFileStat */;
long var4 /* : Int */;
{
var1 = ((short int(*)(val* self))(self->class->vft[COLOR_core__file__FileStat__finalized]))(self); /* finalized on <self:FileStat>*/
}
var2 = !var1;
if (unlikely(!var2)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_core__file, 787);
fatal_exit(1);
}
{
var3 = ((val*(*)(val* self))(self->class->vft[COLOR_core__file__FileStat__stat]))(self); /* stat on <self:FileStat>*/
}
{
var4 = ((long(*)(val* self))(var3->class->vft[COLOR_core__file__NativeFileStat__atime]))(var3); /* atime on <var3:NativeFileStat>*/
}
var = var4;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method file$FileStat$atime for (self: FileStat): Int */
long core___core__FileStat___atime(val* self) {
long var /* : Int */;
long var1 /* : Int */;
{
var1 = ((long(*)(val* self))(self->class->vft[COLOR_core__file__FileStat__last_access_time]))(self); /* last_access_time on <self:FileStat>*/
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method file$FileStat$last_modification_time for (self: FileStat): Int */
long core___core__FileStat___last_modification_time(val* self) {
long var /* : Int */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var3 /* : NativeFileStat */;
long var4 /* : Int */;
{
var1 = ((short int(*)(val* self))(self->class->vft[COLOR_core__file__FileStat__finalized]))(self); /* finalized on <self:FileStat>*/
}
var2 = !var1;
if (unlikely(!var2)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_core__file, 799);
fatal_exit(1);
}
{
var3 = ((val*(*)(val* self))(self->class->vft[COLOR_core__file__FileStat__stat]))(self); /* stat on <self:FileStat>*/
}
{
var4 = ((long(*)(val* self))(var3->class->vft[COLOR_core__file__NativeFileStat__mtime]))(var3); /* mtime on <var3:NativeFileStat>*/
}
var = var4;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method file$FileStat$mtime for (self: FileStat): Int */
long core___core__FileStat___mtime(val* self) {
long var /* : Int */;
long var1 /* : Int */;
{
var1 = ((long(*)(val* self))(self->class->vft[COLOR_core__file__FileStat__last_modification_time]))(self); /* last_modification_time on <self:FileStat>*/
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method file$FileStat$size for (self: FileStat): Int */
long core___core__FileStat___size(val* self) {
long var /* : Int */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var3 /* : NativeFileStat */;
long var4 /* : Int */;
{
var1 = ((short int(*)(val* self))(self->class->vft[COLOR_core__file__FileStat__finalized]))(self); /* finalized on <self:FileStat>*/
}
var2 = !var1;
if (unlikely(!var2)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_core__file, 812);
fatal_exit(1);
}
{
var3 = ((val*(*)(val* self))(self->class->vft[COLOR_core__file__FileStat__stat]))(self); /* stat on <self:FileStat>*/
}
{
var4 = ((long(*)(val* self))(var3->class->vft[COLOR_core__file__NativeFileStat__size]))(var3); /* size on <var3:NativeFileStat>*/
}
var = var4;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method file$FileStat$is_file for (self: FileStat): Bool */
short int core___core__FileStat___is_file(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var3 /* : NativeFileStat */;
short int var4 /* : Bool */;
{
var1 = ((short int(*)(val* self))(self->class->vft[COLOR_core__file__FileStat__finalized]))(self); /* finalized on <self:FileStat>*/
}
var2 = !var1;
if (unlikely(!var2)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_core__file, 819);
fatal_exit(1);
}
{
var3 = ((val*(*)(val* self))(self->class->vft[COLOR_core__file__FileStat__stat]))(self); /* stat on <self:FileStat>*/
}
{
var4 = ((short int(*)(val* self))(var3->class->vft[COLOR_core__file__NativeFileStat__is_reg]))(var3); /* is_reg on <var3:NativeFileStat>*/
}
var = var4;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method file$FileStat$is_reg for (self: FileStat): Bool */
short int core___core__FileStat___is_reg(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
{
var1 = ((short int(*)(val* self))(self->class->vft[COLOR_core__file__FileStat__is_file]))(self); /* is_file on <self:FileStat>*/
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method file$FileStat$is_dir for (self: FileStat): Bool */
short int core___core__FileStat___is_dir(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var3 /* : NativeFileStat */;
short int var4 /* : Bool */;
{
var1 = ((short int(*)(val* self))(self->class->vft[COLOR_core__file__FileStat__finalized]))(self); /* finalized on <self:FileStat>*/
}
var2 = !var1;
if (unlikely(!var2)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_core__file, 829);
fatal_exit(1);
}
{
var3 = ((val*(*)(val* self))(self->class->vft[COLOR_core__file__FileStat__stat]))(self); /* stat on <self:FileStat>*/
}
{
var4 = ((short int(*)(val* self))(var3->class->vft[COLOR_core__file__NativeFileStat__is_dir]))(var3); /* is_dir on <var3:NativeFileStat>*/
}
var = var4;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method file$FileStat$is_link for (self: FileStat): Bool */
short int core___core__FileStat___is_link(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var3 /* : NativeFileStat */;
short int var4 /* : Bool */;
{
var1 = ((short int(*)(val* self))(self->class->vft[COLOR_core__file__FileStat__finalized]))(self); /* finalized on <self:FileStat>*/
}
var2 = !var1;
if (unlikely(!var2)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_core__file, 836);
fatal_exit(1);
}
{
var3 = ((val*(*)(val* self))(self->class->vft[COLOR_core__file__FileStat__stat]))(self); /* stat on <self:FileStat>*/
}
{
var4 = ((short int(*)(val* self))(var3->class->vft[COLOR_core__file__NativeFileStat__is_lnk]))(var3); /* is_lnk on <var3:NativeFileStat>*/
}
var = var4;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method file$FileStat$last_status_change_time for (self: FileStat): Int */
long core___core__FileStat___last_status_change_time(val* self) {
long var /* : Int */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var3 /* : NativeFileStat */;
long var4 /* : Int */;
{
var1 = ((short int(*)(val* self))(self->class->vft[COLOR_core__file__FileStat__finalized]))(self); /* finalized on <self:FileStat>*/
}
var2 = !var1;
if (unlikely(!var2)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_core__file, 845);
fatal_exit(1);
}
{
var3 = ((val*(*)(val* self))(self->class->vft[COLOR_core__file__FileStat__stat]))(self); /* stat on <self:FileStat>*/
}
{
var4 = ((long(*)(val* self))(var3->class->vft[COLOR_core__file__NativeFileStat__ctime]))(var3); /* ctime on <var3:NativeFileStat>*/
}
var = var4;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method file$FileStat$ctime for (self: FileStat): Int */
long core___core__FileStat___ctime(val* self) {
long var /* : Int */;
long var1 /* : Int */;
{
var1 = ((long(*)(val* self))(self->class->vft[COLOR_core__file__FileStat__last_status_change_time]))(self); /* last_status_change_time on <self:FileStat>*/
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method file$FileStat$mode for (self: FileStat): Int */
long core___core__FileStat___mode(val* self) {
long var /* : Int */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var3 /* : NativeFileStat */;
long var4 /* : Int */;
{
var1 = ((short int(*)(val* self))(self->class->vft[COLOR_core__file__FileStat__finalized]))(self); /* finalized on <self:FileStat>*/
}
var2 = !var1;
if (unlikely(!var2)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_core__file, 857);
fatal_exit(1);
}
{
var3 = ((val*(*)(val* self))(self->class->vft[COLOR_core__file__FileStat__stat]))(self); /* stat on <self:FileStat>*/
}
{
var4 = ((long(*)(val* self))(var3->class->vft[COLOR_core__file__NativeFileStat__mode]))(var3); /* mode on <var3:NativeFileStat>*/
}
var = var4;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method file$FileStat$is_chr for (self: FileStat): Bool */
short int core___core__FileStat___is_chr(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var3 /* : NativeFileStat */;
short int var4 /* : Bool */;
{
var1 = ((short int(*)(val* self))(self->class->vft[COLOR_core__file__FileStat__finalized]))(self); /* finalized on <self:FileStat>*/
}
var2 = !var1;
if (unlikely(!var2)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_core__file, 864);
fatal_exit(1);
}
{
var3 = ((val*(*)(val* self))(self->class->vft[COLOR_core__file__FileStat__stat]))(self); /* stat on <self:FileStat>*/
}
{
var4 = ((short int(*)(val* self))(var3->class->vft[COLOR_core__file__NativeFileStat__is_chr]))(var3); /* is_chr on <var3:NativeFileStat>*/
}
var = var4;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method file$FileStat$is_blk for (self: FileStat): Bool */
short int core___core__FileStat___is_blk(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var3 /* : NativeFileStat */;
short int var4 /* : Bool */;
{
var1 = ((short int(*)(val* self))(self->class->vft[COLOR_core__file__FileStat__finalized]))(self); /* finalized on <self:FileStat>*/
}
var2 = !var1;
if (unlikely(!var2)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_core__file, 871);
fatal_exit(1);
}
{
var3 = ((val*(*)(val* self))(self->class->vft[COLOR_core__file__FileStat__stat]))(self); /* stat on <self:FileStat>*/
}
{
var4 = ((short int(*)(val* self))(var3->class->vft[COLOR_core__file__NativeFileStat__is_blk]))(var3); /* is_blk on <var3:NativeFileStat>*/
}
var = var4;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method file$FileStat$is_fifo for (self: FileStat): Bool */
short int core___core__FileStat___is_fifo(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var3 /* : NativeFileStat */;
short int var4 /* : Bool */;
{
var1 = ((short int(*)(val* self))(self->class->vft[COLOR_core__file__FileStat__finalized]))(self); /* finalized on <self:FileStat>*/
}
var2 = !var1;
if (unlikely(!var2)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_core__file, 878);
fatal_exit(1);
}
{
var3 = ((val*(*)(val* self))(self->class->vft[COLOR_core__file__FileStat__stat]))(self); /* stat on <self:FileStat>*/
}
{
var4 = ((short int(*)(val* self))(var3->class->vft[COLOR_core__file__NativeFileStat__is_fifo]))(var3); /* is_fifo on <var3:NativeFileStat>*/
}
var = var4;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method file$FileStat$is_sock for (self: FileStat): Bool */
short int core___core__FileStat___is_sock(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var3 /* : NativeFileStat */;
short int var4 /* : Bool */;
{
var1 = ((short int(*)(val* self))(self->class->vft[COLOR_core__file__FileStat__finalized]))(self); /* finalized on <self:FileStat>*/
}
var2 = !var1;
if (unlikely(!var2)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_core__file, 885);
fatal_exit(1);
}
{
var3 = ((val*(*)(val* self))(self->class->vft[COLOR_core__file__FileStat__stat]))(self); /* stat on <self:FileStat>*/
}
{
var4 = ((short int(*)(val* self))(var3->class->vft[COLOR_core__file__NativeFileStat__is_sock]))(var3); /* is_sock on <var3:NativeFileStat>*/
}
var = var4;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method file$FileStat$init for (self: FileStat) */
void core___core__FileStat___core__kernel__Object__init(val* self) {
{
((void(*)(val* self))(self->class->vft[COLOR_core___core__FileStat___core__kernel__Object__init]))(self); /* init on <self:FileStat>*/
}
RET_LABEL:;
}
/* method file$Text$to_path for (self: Text): Path */
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
/* method file$Text$write_native_to for (self: Text, FileWriter) */
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
var6 = ((long(*)(val* self))(var_i->class->vft[COLOR_core__abstract_text__Text__byte_length]))(var_i); /* byte_length on <var_i:FlatText>*/
}
{
((void(*)(val* self, char* p0, long p1, long p2))(var_s->class->vft[COLOR_core__file__FileWriter__write_native]))(var_s, var5, 0l, var6); /* write_native on <var_s:FileWriter>*/
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
/* method file$Text$file_exists for (self: Text): Bool */
short int core__file___Text___file_exists(val* self) {
short int var /* : Bool */;
char* var1 /* : CString */;
short int var2 /* : Bool */;
{
var1 = ((char*(*)(val* self))(self->class->vft[COLOR_core__abstract_text__Text__to_cstring]))(self); /* to_cstring on <self:Text>*/
}
var2 = core__file___CString___file_exists(var1);
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method file$String$file_stat for (self: String): nullable FileStat */
val* core__file___String___file_stat(val* self) {
val* var /* : nullable FileStat */;
char* var1 /* : CString */;
val* var2 /* : NativeFileStat */;
val* var_stat /* var stat: NativeFileStat */;
short int var3 /* : Bool */;
val* var4 /* : FileStat */;
{
var1 = ((char*(*)(val* self))(self->class->vft[COLOR_core__abstract_text__Text__to_cstring]))(self); /* to_cstring on <self:String>*/
}
var2 = core__file___CString___file_stat(var1);
var_stat = var2;
{
var3 = ((short int(*)(val* self))(var_stat->class->vft[COLOR_core__kernel__Pointer__address_is_null]))(var_stat); /* address_is_null on <var_stat:NativeFileStat>*/
}
if (var3){
var = ((val*)NULL);
goto RET_LABEL;
} else {
}
var4 = NEW_core__FileStat(&type_core__FileStat);
{
((void(*)(val* self, val* p0))(var4->class->vft[COLOR_core__file__FileStat__stat_61d]))(var4, var_stat); /* stat= on <var4:FileStat>*/
}
{
((void(*)(val* self))(var4->class->vft[COLOR_core__kernel__Object__init]))(var4); /* init on <var4:FileStat>*/
}
var = var4;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method file$String$file_lstat for (self: String): nullable FileStat */
val* core__file___String___file_lstat(val* self) {
val* var /* : nullable FileStat */;
char* var1 /* : CString */;
val* var2 /* : NativeFileStat */;
val* var_stat /* var stat: NativeFileStat */;
short int var3 /* : Bool */;
val* var4 /* : FileStat */;
{
var1 = ((char*(*)(val* self))(self->class->vft[COLOR_core__abstract_text__Text__to_cstring]))(self); /* to_cstring on <self:String>*/
}
var2 = core__file___CString___file_lstat(var1);
var_stat = var2;
{
var3 = ((short int(*)(val* self))(var_stat->class->vft[COLOR_core__kernel__Pointer__address_is_null]))(var_stat); /* address_is_null on <var_stat:NativeFileStat>*/
}
if (var3){
var = ((val*)NULL);
goto RET_LABEL;
} else {
}
var4 = NEW_core__FileStat(&type_core__FileStat);
{
((void(*)(val* self, val* p0))(var4->class->vft[COLOR_core__file__FileStat__stat_61d]))(var4, var_stat); /* stat= on <var4:FileStat>*/
}
{
((void(*)(val* self))(var4->class->vft[COLOR_core__kernel__Object__init]))(var4); /* init on <var4:FileStat>*/
}
var = var4;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method file$String$file_delete for (self: String): Bool */
short int core__file___String___file_delete(val* self) {
short int var /* : Bool */;
char* var1 /* : CString */;
short int var2 /* : Bool */;
{
var1 = ((char*(*)(val* self))(self->class->vft[COLOR_core__abstract_text__Text__to_cstring]))(self); /* to_cstring on <self:String>*/
}
var2 = core__file___CString___file_delete(var1);
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method file$String$file_copy_to for (self: String, String) */
void core__file___String___file_copy_to(val* self, val* p0) {
val* var_dest /* var dest: String */;
val* var /* : Path */;
val* var1 /* : Path */;
var_dest = p0;
{
var = ((val*(*)(val* self))(self->class->vft[COLOR_core__file__Text__to_path]))(self); /* to_path on <self:String>*/
}
{
var1 = ((val*(*)(val* self))(var_dest->class->vft[COLOR_core__file__Text__to_path]))(var_dest); /* to_path on <var_dest:String>*/
}
{
((void(*)(val* self, val* p0))(var->class->vft[COLOR_core__file__Path__copy]))(var, var1); /* copy on <var:Path>*/
}
RET_LABEL:;
}
/* method file$String$strip_extension for (self: String, nullable String): String */
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
val* var11 /* : nullable Int */;
val* var12 /* : nullable Int */;
val* var13 /* : nullable Bool */;
val* var14 /* : nullable Bool */;
val* var15 /* : String */;
short int var16 /* : Bool */;
long var17 /* : Int */;
long var18 /* : Int */;
long var19 /* : Int */;
short int var21 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var22 /* : Int */;
val* var23 /* : Text */;
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
var6 = NEW_core__NativeArray((int)2l, &type_core__NativeArray__core__String);
if (likely(varonce7!=NULL)) {
var8 = varonce7;
} else {
var9 = ".";
var11 = (val*)(1l<<2|1);
var12 = (val*)(1l<<2|1);
var13 = (val*)((long)(0)<<2|3);
var14 = (val*)((long)(0)<<2|3);
var10 = core__flat___CString___to_s_unsafe(var9, var11, var12, var13, var14);
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
var15 = ((val*(*)(val* self))(var6->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var6); /* native_to_s on <var6:NativeArray[String]>*/
}
varonce = var6;
var_extension = var15;
}
} else {
}
{
var16 = ((short int(*)(val* self, val* p0))(self->class->vft[COLOR_core__abstract_text__Text__has_suffix]))(self, var_extension); /* has_suffix on <self:String>*/
}
if (var16){
{
var17 = ((long(*)(val* self))(self->class->vft[COLOR_core__abstract_text__Text__length]))(self); /* length on <self:String>*/
}
{
var18 = ((long(*)(val* self))(var_extension->class->vft[COLOR_core__abstract_text__Text__length]))(var_extension); /* length on <var_extension:nullable String(String)>*/
}
{
{ /* Inline kernel$Int$- (var17,var18) on <var17:Int> */
/* Covariant cast for argument 0 (i) <var18:Int> isa OTHER */
/* <var18:Int> isa OTHER */
var21 = 1; /* easy <var18:Int> isa OTHER*/
if (unlikely(!var21)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var22 = var17 - var18;
var19 = var22;
goto RET_LABEL20;
RET_LABEL20:(void)0;
}
}
{
var23 = ((val*(*)(val* self, long p0, long p1))(self->class->vft[COLOR_core__abstract_text__Text__substring]))(self, 0l, var19); /* substring on <self:String>*/
}
var = var23;
goto RET_LABEL;
} else {
}
var = self;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method file$String$basename for (self: String, nullable String): String */
val* core__file___String___basename(val* self, val* p0) {
val* var /* : String */;
val* var_extension /* var extension: nullable String */;
val* var_n /* var n: String */;
val* var1 /* : Sys */;
short int var2 /* : Bool */;
long var3 /* : Int */;
long var4 /* : Int */;
short int var6 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var7 /* : Int */;
long var_l /* var l: Int */;
short int var8 /* : Bool */;
short int var9 /* : Bool */;
short int var11 /* : Bool */;
int cltype12;
int idtype13;
const char* var_class_name14;
short int var15 /* : Bool */;
short int var_ /* var : Bool */;
short int var16 /* : Bool */;
val* var17 /* : SequenceRead[Char] */;
val* var18 /* : nullable Object */;
short int var19 /* : Bool */;
short int var21 /* : Bool */;
uint32_t var22 /* : Char */;
short int var_23 /* var : Bool */;
val* var24 /* : SequenceRead[Char] */;
val* var25 /* : nullable Object */;
short int var26 /* : Bool */;
short int var28 /* : Bool */;
uint32_t var29 /* : Char */;
long var30 /* : Int */;
short int var32 /* : Bool */;
int cltype33;
int idtype34;
const char* var_class_name35;
long var36 /* : Int */;
short int var37 /* : Bool */;
short int var39 /* : Bool */;
static val* varonce;
val* var40 /* : String */;
char* var41 /* : CString */;
val* var42 /* : String */;
val* var43 /* : nullable Int */;
val* var44 /* : nullable Int */;
val* var45 /* : nullable Bool */;
val* var46 /* : nullable Bool */;
val* var47 /* : SequenceRead[Char] */;
val* var48 /* : nullable Object */;
long var49 /* : Int */;
long var_pos /* var pos: Int */;
long var50 /* : Int */;
long var51 /* : Int */;
short int var52 /* : Bool */;
short int var54 /* : Bool */;
int cltype55;
int idtype56;
const char* var_class_name57;
short int var58 /* : Bool */;
long var59 /* : Int */;
short int var61 /* : Bool */;
int cltype62;
int idtype63;
const char* var_class_name64;
long var65 /* : Int */;
long var66 /* : Int */;
short int var68 /* : Bool */;
int cltype69;
int idtype70;
const char* var_class_name71;
long var72 /* : Int */;
val* var73 /* : Text */;
long var74 /* : Int */;
long var75 /* : Int */;
short int var77 /* : Bool */;
int cltype78;
int idtype79;
const char* var_class_name80;
long var81 /* : Int */;
long var_l82 /* var l: Int */;
short int var83 /* : Bool */;
short int var84 /* : Bool */;
short int var86 /* : Bool */;
int cltype87;
int idtype88;
const char* var_class_name89;
short int var90 /* : Bool */;
short int var_91 /* var : Bool */;
val* var92 /* : SequenceRead[Char] */;
val* var93 /* : nullable Object */;
short int var94 /* : Bool */;
short int var96 /* : Bool */;
uint32_t var97 /* : Char */;
long var98 /* : Int */;
short int var100 /* : Bool */;
int cltype101;
int idtype102;
const char* var_class_name103;
long var104 /* : Int */;
short int var106 /* : Bool */;
short int var108 /* : Bool */;
static val* varonce109;
val* var110 /* : String */;
char* var111 /* : CString */;
val* var112 /* : String */;
val* var113 /* : nullable Int */;
val* var114 /* : nullable Int */;
val* var115 /* : nullable Bool */;
val* var116 /* : nullable Bool */;
val* var117 /* : SequenceRead[Char] */;
val* var118 /* : nullable Object */;
long var119 /* : Int */;
long var_pos120 /* var pos: Int */;
short int var121 /* : Bool */;
short int var123 /* : Bool */;
int cltype124;
int idtype125;
const char* var_class_name126;
short int var127 /* : Bool */;
long var128 /* : Int */;
short int var130 /* : Bool */;
int cltype131;
int idtype132;
const char* var_class_name133;
long var134 /* : Int */;
long var135 /* : Int */;
short int var137 /* : Bool */;
int cltype138;
int idtype139;
const char* var_class_name140;
long var141 /* : Int */;
val* var142 /* : Text */;
short int var143 /* : Bool */;
short int var144 /* : Bool */;
val* var145 /* : String */;
var_extension = p0;
var_n = self;
var1 = glob_sys;
{
var2 = ((short int(*)(val* self))(var1->class->vft[COLOR_core__kernel__Sys__is_windows]))(var1); /* is_windows on <var1:Sys>*/
}
if (var2){
{
var3 = ((long(*)(val* self))(self->class->vft[COLOR_core__abstract_text__Text__length]))(self); /* length on <self:String>*/
}
{
{ /* Inline kernel$Int$- (var3,1l) on <var3:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var6 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var6)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var7 = var3 - 1l;
var4 = var7;
goto RET_LABEL5;
RET_LABEL5:(void)0;
}
}
var_l = var4;
for(;;) {
{
{ /* Inline kernel$Int$> (var_l,0l) on <var_l:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var11 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var11)) {
var_class_name14 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name14);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 727);
fatal_exit(1);
}
var15 = var_l > 0l;
var9 = var15;
goto RET_LABEL10;
RET_LABEL10:(void)0;
}
}
var_ = var9;
if (var9){
{
var17 = ((val*(*)(val* self))(self->class->vft[COLOR_core__abstract_text__Text__chars]))(self); /* chars on <self:String>*/
}
{
var18 = ((val*(*)(val* self, long p0))((((long)var17&3)?class_info[((long)var17&3)]:var17->class)->vft[COLOR_core__abstract_collection__SequenceRead___91d_93d]))(var17, var_l); /* [] on <var17:SequenceRead[Char]>*/
}
{
{ /* Inline kernel$Char$== (var18,'/') on <var18:nullable Object(Char)> */
var22 = (uint32_t)((long)(var18)>>2);
var21 = var22 == '/';
var19 = var21;
goto RET_LABEL20;
RET_LABEL20:(void)0;
}
}
var_23 = var19;
if (var19){
var16 = var_23;
} else {
{
var24 = ((val*(*)(val* self))(self->class->vft[COLOR_core__abstract_text__Text__chars]))(self); /* chars on <self:String>*/
}
{
var25 = ((val*(*)(val* self, long p0))((((long)var24&3)?class_info[((long)var24&3)]:var24->class)->vft[COLOR_core__abstract_collection__SequenceRead___91d_93d]))(var24, var_l); /* [] on <var24:SequenceRead[Char]>*/
}
{
{ /* Inline kernel$Char$== (var25,'\\') on <var25:nullable Object(Char)> */
var29 = (uint32_t)((long)(var25)>>2);
var28 = var29 == '\\';
var26 = var28;
goto RET_LABEL27;
RET_LABEL27:(void)0;
}
}
var16 = var26;
}
var8 = var16;
} else {
var8 = var_;
}
if (var8){
{
{ /* Inline kernel$Int$- (var_l,1l) on <var_l:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var32 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var32)) {
var_class_name35 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name35);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var36 = var_l - 1l;
var30 = var36;
goto RET_LABEL31;
RET_LABEL31:(void)0;
}
}
var_l = var30;
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
{ /* Inline kernel$Int$== (var_l,0l) on <var_l:Int> */
var39 = var_l == 0l;
var37 = var39;
goto RET_LABEL38;
RET_LABEL38:(void)0;
}
}
if (var37){
if (likely(varonce!=NULL)) {
var40 = varonce;
} else {
var41 = "/";
var43 = (val*)(1l<<2|1);
var44 = (val*)(1l<<2|1);
var45 = (val*)((long)(0)<<2|3);
var46 = (val*)((long)(0)<<2|3);
var42 = core__flat___CString___to_s_unsafe(var41, var43, var44, var45, var46);
var40 = var42;
varonce = var40;
}
var = var40;
goto RET_LABEL;
} else {
}
{
var47 = ((val*(*)(val* self))(self->class->vft[COLOR_core__abstract_text__Text__chars]))(self); /* chars on <self:String>*/
}
{
var48 = (val*)((long)('/')<<2|2);
var49 = ((long(*)(val* self, val* p0, long p1))((((long)var47&3)?class_info[((long)var47&3)]:var47->class)->vft[COLOR_core__abstract_collection__SequenceRead__last_index_of_from]))(var47, var48, var_l); /* last_index_of_from on <var47:SequenceRead[Char]>*/
}
var_pos = var49;
{
var50 = ((long(*)(val* self, uint32_t p0, long p1))(self->class->vft[COLOR_core__abstract_text__Text__last_index_of_from]))(self, '\\', var_l); /* last_index_of_from on <self:String>*/
}
var51 = core___core__Int___Comparable__max(var_pos, var50);
var_pos = var51;
{
{ /* Inline kernel$Int$>= (var_pos,0l) on <var_pos:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var54 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var54)) {
var_class_name57 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name57);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 726);
fatal_exit(1);
}
var58 = var_pos >= 0l;
var52 = var58;
goto RET_LABEL53;
RET_LABEL53:(void)0;
}
}
if (var52){
{
{ /* Inline kernel$Int$+ (var_pos,1l) on <var_pos:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var61 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var61)) {
var_class_name64 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name64);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var65 = var_pos + 1l;
var59 = var65;
goto RET_LABEL60;
RET_LABEL60:(void)0;
}
}
{
{ /* Inline kernel$Int$- (var_l,var_pos) on <var_l:Int> */
/* Covariant cast for argument 0 (i) <var_pos:Int> isa OTHER */
/* <var_pos:Int> isa OTHER */
var68 = 1; /* easy <var_pos:Int> isa OTHER*/
if (unlikely(!var68)) {
var_class_name71 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name71);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var72 = var_l - var_pos;
var66 = var72;
goto RET_LABEL67;
RET_LABEL67:(void)0;
}
}
{
var73 = ((val*(*)(val* self, long p0, long p1))(self->class->vft[COLOR_core__abstract_text__Text__substring]))(self, var59, var66); /* substring on <self:String>*/
}
var_n = var73;
} else {
}
} else {
{
var74 = ((long(*)(val* self))(self->class->vft[COLOR_core__abstract_text__Text__length]))(self); /* length on <self:String>*/
}
{
{ /* Inline kernel$Int$- (var74,1l) on <var74:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var77 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var77)) {
var_class_name80 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name80);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var81 = var74 - 1l;
var75 = var81;
goto RET_LABEL76;
RET_LABEL76:(void)0;
}
}
var_l82 = var75;
for(;;) {
{
{ /* Inline kernel$Int$> (var_l82,0l) on <var_l82:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var86 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var86)) {
var_class_name89 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name89);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 727);
fatal_exit(1);
}
var90 = var_l82 > 0l;
var84 = var90;
goto RET_LABEL85;
RET_LABEL85:(void)0;
}
}
var_91 = var84;
if (var84){
{
var92 = ((val*(*)(val* self))(self->class->vft[COLOR_core__abstract_text__Text__chars]))(self); /* chars on <self:String>*/
}
{
var93 = ((val*(*)(val* self, long p0))((((long)var92&3)?class_info[((long)var92&3)]:var92->class)->vft[COLOR_core__abstract_collection__SequenceRead___91d_93d]))(var92, var_l82); /* [] on <var92:SequenceRead[Char]>*/
}
{
{ /* Inline kernel$Char$== (var93,'/') on <var93:nullable Object(Char)> */
var97 = (uint32_t)((long)(var93)>>2);
var96 = var97 == '/';
var94 = var96;
goto RET_LABEL95;
RET_LABEL95:(void)0;
}
}
var83 = var94;
} else {
var83 = var_91;
}
if (var83){
{
{ /* Inline kernel$Int$- (var_l82,1l) on <var_l82:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var100 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var100)) {
var_class_name103 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name103);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var104 = var_l82 - 1l;
var98 = var104;
goto RET_LABEL99;
RET_LABEL99:(void)0;
}
}
var_l82 = var98;
} else {
goto BREAK_label105;
}
}
BREAK_label105: (void)0;
{
{ /* Inline kernel$Int$== (var_l82,0l) on <var_l82:Int> */
var108 = var_l82 == 0l;
var106 = var108;
goto RET_LABEL107;
RET_LABEL107:(void)0;
}
}
if (var106){
if (likely(varonce109!=NULL)) {
var110 = varonce109;
} else {
var111 = "/";
var113 = (val*)(1l<<2|1);
var114 = (val*)(1l<<2|1);
var115 = (val*)((long)(0)<<2|3);
var116 = (val*)((long)(0)<<2|3);
var112 = core__flat___CString___to_s_unsafe(var111, var113, var114, var115, var116);
var110 = var112;
varonce109 = var110;
}
var = var110;
goto RET_LABEL;
} else {
}
{
var117 = ((val*(*)(val* self))(self->class->vft[COLOR_core__abstract_text__Text__chars]))(self); /* chars on <self:String>*/
}
{
var118 = (val*)((long)('/')<<2|2);
var119 = ((long(*)(val* self, val* p0, long p1))((((long)var117&3)?class_info[((long)var117&3)]:var117->class)->vft[COLOR_core__abstract_collection__SequenceRead__last_index_of_from]))(var117, var118, var_l82); /* last_index_of_from on <var117:SequenceRead[Char]>*/
}
var_pos120 = var119;
{
{ /* Inline kernel$Int$>= (var_pos120,0l) on <var_pos120:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var123 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var123)) {
var_class_name126 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name126);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 726);
fatal_exit(1);
}
var127 = var_pos120 >= 0l;
var121 = var127;
goto RET_LABEL122;
RET_LABEL122:(void)0;
}
}
if (var121){
{
{ /* Inline kernel$Int$+ (var_pos120,1l) on <var_pos120:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var130 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var130)) {
var_class_name133 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name133);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var134 = var_pos120 + 1l;
var128 = var134;
goto RET_LABEL129;
RET_LABEL129:(void)0;
}
}
{
{ /* Inline kernel$Int$- (var_l82,var_pos120) on <var_l82:Int> */
/* Covariant cast for argument 0 (i) <var_pos120:Int> isa OTHER */
/* <var_pos120:Int> isa OTHER */
var137 = 1; /* easy <var_pos120:Int> isa OTHER*/
if (unlikely(!var137)) {
var_class_name140 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name140);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var141 = var_l82 - var_pos120;
var135 = var141;
goto RET_LABEL136;
RET_LABEL136:(void)0;
}
}
{
var142 = ((val*(*)(val* self, long p0, long p1))(self->class->vft[COLOR_core__abstract_text__Text__substring]))(self, var128, var135); /* substring on <self:String>*/
}
var_n = var142;
} else {
}
}
if (var_extension == NULL) {
var143 = 0; /* is null */
} else {
var143 = 1; /* arg is null and recv is not */
}
if (0) {
var144 = ((short int(*)(val* self, val* p0))(var_extension->class->vft[COLOR_core__kernel__Object___33d_61d]))(var_extension, ((val*)NULL)); /* != on <var_extension:nullable String>*/
var143 = var144;
}
if (var143){
{
var145 = ((val*(*)(val* self, val* p0))(var_n->class->vft[COLOR_core__file__String__strip_extension]))(var_n, var_extension); /* strip_extension on <var_n:String>*/
}
var = var145;
goto RET_LABEL;
} else {
var = var_n;
goto RET_LABEL;
}
RET_LABEL:;
return var;
}
/* method file$String$dirname for (self: String): String */
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
val* var44 /* : nullable Int */;
val* var45 /* : nullable Int */;
val* var46 /* : nullable Bool */;
val* var47 /* : nullable Bool */;
static val* varonce48;
val* var49 /* : String */;
char* var50 /* : CString */;
val* var51 /* : String */;
val* var52 /* : nullable Int */;
val* var53 /* : nullable Int */;
val* var54 /* : nullable Bool */;
val* var55 /* : nullable Bool */;
{
var1 = ((long(*)(val* self))(self->class->vft[COLOR_core__abstract_text__Text__length]))(self); /* length on <self:String>*/
}
{
{ /* Inline kernel$Int$- (var1,1l) on <var1:Int> */
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
{ /* Inline kernel$Int$> (var_l,0l) on <var_l:Int> */
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
{ /* Inline kernel$Char$== (var15,'/') on <var15:nullable Object(Char)> */
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
{ /* Inline kernel$Int$- (var_l,1l) on <var_l:Int> */
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
{ /* Inline kernel$Int$> (var_pos,0l) on <var_pos:Int> */
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
{ /* Inline kernel$Int$== (var_pos,0l) on <var_pos:Int> */
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
var44 = (val*)(1l<<2|1);
var45 = (val*)(1l<<2|1);
var46 = (val*)((long)(0)<<2|3);
var47 = (val*)((long)(0)<<2|3);
var43 = core__flat___CString___to_s_unsafe(var42, var44, var45, var46, var47);
var41 = var43;
varonce = var41;
}
var = var41;
goto RET_LABEL;
} else {
if (likely(varonce48!=NULL)) {
var49 = varonce48;
} else {
var50 = ".";
var52 = (val*)(1l<<2|1);
var53 = (val*)(1l<<2|1);
var54 = (val*)((long)(0)<<2|3);
var55 = (val*)((long)(0)<<2|3);
var51 = core__flat___CString___to_s_unsafe(var50, var52, var53, var54, var55);
var49 = var51;
varonce48 = var49;
}
var = var49;
goto RET_LABEL;
}
}
RET_LABEL:;
return var;
}
/* method file$String$realpath for (self: String): String */
val* core__file___String___realpath(val* self) {
val* var /* : String */;
char* var1 /* : CString */;
char* var2 /* : CString */;
char* var_cs /* var cs: CString */;
short int var3 /* : Bool */;
val* var4 /* : String */;
val* var_res /* var res: String */;
val* var5 /* : Pointer */;
{
var1 = ((char*(*)(val* self))(self->class->vft[COLOR_core__abstract_text__Text__to_cstring]))(self); /* to_cstring on <self:String>*/
}
var2 = core__file___CString___file_realpath(var1);
var_cs = var2;
{
var3 = ((short int(*)(val* self))(self->class->vft[COLOR_core__file__Text__file_exists]))(self); /* file_exists on <self:String>*/
}
if (unlikely(!var3)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_core__file, 1026);
fatal_exit(1);
}
var4 = core__flat___CString___core__abstract_text__Object__to_s(var_cs);
var_res = var4;
var5 = BOX_core__Pointer(var_cs); /* autobox from CString to Pointer */
core___core__Pointer___free(var5); /* Direct call kernel$Pointer$free on <var5:Pointer(CString)>*/
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method file$String$simplify_path for (self: String): String */
val* core__file___String___simplify_path(val* self) {
val* var /* : String */;
val* var1 /* : String */;
val* var2 /* : Sys */;
short int var3 /* : Bool */;
static val* varonce;
val* var4 /* : String */;
char* var5 /* : CString */;
val* var6 /* : String */;
val* var7 /* : nullable Int */;
val* var8 /* : nullable Int */;
val* var9 /* : nullable Bool */;
val* var10 /* : nullable Bool */;
static val* varonce11;
val* var12 /* : String */;
char* var13 /* : CString */;
val* var14 /* : String */;
val* var15 /* : nullable Int */;
val* var16 /* : nullable Int */;
val* var17 /* : nullable Bool */;
val* var18 /* : nullable Bool */;
val* var_path_sep /* var path_sep: String */;
val* var19 /* : Array[String] */;
val* var_a /* var a: Array[String] */;
val* var20 /* : Array[String] */;
val* var_a2 /* var a2: Array[String] */;
val* var_ /* var : Array[String] */;
val* var21 /* : Iterator[nullable Object] */;
val* var_22 /* var : IndexedIterator[String] */;
short int var23 /* : Bool */;
val* var24 /* : nullable Object */;
val* var_x /* var x: String */;
short int var25 /* : Bool */;
static val* varonce26;
val* var27 /* : String */;
char* var28 /* : CString */;
val* var29 /* : String */;
val* var30 /* : nullable Int */;
val* var31 /* : nullable Int */;
val* var32 /* : nullable Bool */;
val* var33 /* : nullable Bool */;
short int var34 /* : Bool */;
short int var_35 /* var : Bool */;
short int var36 /* : Bool */;
short int var37 /* : Bool */;
short int var39 /* : Bool */;
static val* varonce40;
val* var41 /* : String */;
char* var42 /* : CString */;
val* var43 /* : String */;
val* var44 /* : nullable Int */;
val* var45 /* : nullable Int */;
val* var46 /* : nullable Bool */;
val* var47 /* : nullable Bool */;
short int var48 /* : Bool */;
short int var_49 /* var : Bool */;
short int var50 /* : Bool */;
short int var51 /* : Bool */;
short int var52 /* : Bool */;
short int var53 /* : Bool */;
static val* varonce54;
val* var55 /* : String */;
char* var56 /* : CString */;
val* var57 /* : String */;
val* var58 /* : nullable Int */;
val* var59 /* : nullable Int */;
val* var60 /* : nullable Bool */;
val* var61 /* : nullable Bool */;
short int var62 /* : Bool */;
short int var_63 /* var : Bool */;
short int var64 /* : Bool */;
short int var65 /* : Bool */;
short int var_66 /* var : Bool */;
val* var67 /* : nullable Object */;
static val* varonce68;
val* var69 /* : String */;
char* var70 /* : CString */;
val* var71 /* : String */;
val* var72 /* : nullable Int */;
val* var73 /* : nullable Int */;
val* var74 /* : nullable Bool */;
val* var75 /* : nullable Bool */;
short int var76 /* : Bool */;
val* var77 /* : nullable Object */;
static val* varonce78;
val* var79 /* : String */;
char* var80 /* : CString */;
val* var81 /* : String */;
val* var82 /* : nullable Int */;
val* var83 /* : nullable Int */;
val* var84 /* : nullable Bool */;
val* var85 /* : nullable Bool */;
short int var86 /* : Bool */;
val* var87 /* : nullable Object */;
val* var88 /* : nullable Object */;
short int var89 /* : Bool */;
short int var90 /* : Bool */;
short int var91 /* : Bool */;
short int var_92 /* var : Bool */;
val* var93 /* : nullable Object */;
static val* varonce94;
val* var95 /* : String */;
char* var96 /* : CString */;
val* var97 /* : String */;
val* var98 /* : nullable Int */;
val* var99 /* : nullable Int */;
val* var100 /* : nullable Bool */;
val* var101 /* : nullable Bool */;
short int var102 /* : Bool */;
val* var103 /* : nullable Object */;
short int var104 /* : Bool */;
static val* varonce105;
val* var106 /* : String */;
char* var107 /* : CString */;
val* var108 /* : String */;
val* var109 /* : nullable Int */;
val* var110 /* : nullable Int */;
val* var111 /* : nullable Bool */;
val* var112 /* : nullable Bool */;
short int var113 /* : Bool */;
long var114 /* : Int */;
short int var115 /* : Bool */;
short int var117 /* : Bool */;
short int var_118 /* var : Bool */;
val* var119 /* : nullable Object */;
static val* varonce120;
val* var121 /* : String */;
char* var122 /* : CString */;
val* var123 /* : String */;
val* var124 /* : nullable Int */;
val* var125 /* : nullable Int */;
val* var126 /* : nullable Bool */;
val* var127 /* : nullable Bool */;
short int var128 /* : Bool */;
static val* varonce129;
val* var130 /* : String */;
char* var131 /* : CString */;
val* var132 /* : String */;
val* var133 /* : nullable Int */;
val* var134 /* : nullable Int */;
val* var135 /* : nullable Bool */;
val* var136 /* : nullable Bool */;
static val* varonce137;
val* var138 /* : String */;
char* var139 /* : CString */;
val* var140 /* : String */;
val* var141 /* : nullable Int */;
val* var142 /* : nullable Int */;
val* var143 /* : nullable Bool */;
val* var144 /* : nullable Bool */;
val* var145 /* : String */;
var2 = glob_sys;
{
var3 = ((short int(*)(val* self))(var2->class->vft[COLOR_core__kernel__Sys__is_windows]))(var2); /* is_windows on <var2:Sys>*/
}
if (var3){
if (likely(varonce!=NULL)) {
var4 = varonce;
} else {
var5 = "\\";
var7 = (val*)(1l<<2|1);
var8 = (val*)(1l<<2|1);
var9 = (val*)((long)(0)<<2|3);
var10 = (val*)((long)(0)<<2|3);
var6 = core__flat___CString___to_s_unsafe(var5, var7, var8, var9, var10);
var4 = var6;
varonce = var4;
}
var1 = var4;
} else {
if (likely(varonce11!=NULL)) {
var12 = varonce11;
} else {
var13 = "/";
var15 = (val*)(1l<<2|1);
var16 = (val*)(1l<<2|1);
var17 = (val*)((long)(0)<<2|3);
var18 = (val*)((long)(0)<<2|3);
var14 = core__flat___CString___to_s_unsafe(var13, var15, var16, var17, var18);
var12 = var14;
varonce11 = var12;
}
var1 = var12;
}
var_path_sep = var1;
{
var19 = ((val*(*)(val* self, val* p0))(self->class->vft[COLOR_core__string_search__Text__split_with]))(self, var_path_sep); /* split_with on <self:String>*/
}
var_a = var19;
var20 = NEW_core__Array(&type_core__Array__core__String);
{
((void(*)(val* self))(var20->class->vft[COLOR_core__kernel__Object__init]))(var20); /* init on <var20:Array[String]>*/
}
var_a2 = var20;
var_ = var_a;
{
var21 = ((val*(*)(val* self))(var_->class->vft[COLOR_core__abstract_collection__Collection__iterator]))(var_); /* iterator on <var_:Array[String]>*/
}
var_22 = var21;
for(;;) {
{
var23 = ((short int(*)(val* self))((((long)var_22&3)?class_info[((long)var_22&3)]:var_22->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_22); /* is_ok on <var_22:IndexedIterator[String]>*/
}
if (var23){
} else {
goto BREAK_label;
}
{
var24 = ((val*(*)(val* self))((((long)var_22&3)?class_info[((long)var_22&3)]:var_22->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_22); /* item on <var_22:IndexedIterator[String]>*/
}
var_x = var24;
if (likely(varonce26!=NULL)) {
var27 = varonce26;
} else {
var28 = ".";
var30 = (val*)(1l<<2|1);
var31 = (val*)(1l<<2|1);
var32 = (val*)((long)(0)<<2|3);
var33 = (val*)((long)(0)<<2|3);
var29 = core__flat___CString___to_s_unsafe(var28, var30, var31, var32, var33);
var27 = var29;
varonce26 = var27;
}
{
var34 = ((short int(*)(val* self, val* p0))(var_x->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_x, var27); /* == on <var_x:String>*/
}
var_35 = var34;
if (var34){
{
var36 = ((short int(*)(val* self))(var_a2->class->vft[COLOR_core__abstract_collection__Collection__is_empty]))(var_a2); /* is_empty on <var_a2:Array[String]>*/
}
var37 = !var36;
var25 = var37;
} else {
var25 = var_35;
}
if (var25){
goto BREAK_label38;
} else {
}
if (likely(varonce40!=NULL)) {
var41 = varonce40;
} else {
var42 = "";
var44 = (val*)(0l<<2|1);
var45 = (val*)(0l<<2|1);
var46 = (val*)((long)(0)<<2|3);
var47 = (val*)((long)(0)<<2|3);
var43 = core__flat___CString___to_s_unsafe(var42, var44, var45, var46, var47);
var41 = var43;
varonce40 = var41;
}
{
var48 = ((short int(*)(val* self, val* p0))(var_x->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_x, var41); /* == on <var_x:String>*/
}
var_49 = var48;
if (var48){
{
var50 = ((short int(*)(val* self))(var_a2->class->vft[COLOR_core__abstract_collection__Collection__is_empty]))(var_a2); /* is_empty on <var_a2:Array[String]>*/
}
var51 = !var50;
var39 = var51;
} else {
var39 = var_49;
}
if (var39){
goto BREAK_label38;
} else {
}
if (likely(varonce54!=NULL)) {
var55 = varonce54;
} else {
var56 = "..";
var58 = (val*)(2l<<2|1);
var59 = (val*)(2l<<2|1);
var60 = (val*)((long)(0)<<2|3);
var61 = (val*)((long)(0)<<2|3);
var57 = core__flat___CString___to_s_unsafe(var56, var58, var59, var60, var61);
var55 = var57;
varonce54 = var55;
}
{
var62 = ((short int(*)(val* self, val* p0))(var_x->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_x, var55); /* == on <var_x:String>*/
}
var_63 = var62;
if (var62){
{
var64 = ((short int(*)(val* self))(var_a2->class->vft[COLOR_core__abstract_collection__Collection__is_empty]))(var_a2); /* is_empty on <var_a2:Array[String]>*/
}
var65 = !var64;
var53 = var65;
} else {
var53 = var_63;
}
var_66 = var53;
if (var53){
{
var67 = ((val*(*)(val* self))(var_a2->class->vft[COLOR_core__abstract_collection__SequenceRead__last]))(var_a2); /* last on <var_a2:Array[String]>*/
}
if (likely(varonce68!=NULL)) {
var69 = varonce68;
} else {
var70 = "..";
var72 = (val*)(2l<<2|1);
var73 = (val*)(2l<<2|1);
var74 = (val*)((long)(0)<<2|3);
var75 = (val*)((long)(0)<<2|3);
var71 = core__flat___CString___to_s_unsafe(var70, var72, var73, var74, var75);
var69 = var71;
varonce68 = var69;
}
{
var76 = ((short int(*)(val* self, val* p0))(var67->class->vft[COLOR_core__kernel__Object___33d_61d]))(var67, var69); /* != on <var67:nullable Object(String)>*/
}
var52 = var76;
} else {
var52 = var_66;
}
if (var52){
{
var77 = ((val*(*)(val* self))(var_a2->class->vft[COLOR_core__abstract_collection__SequenceRead__last]))(var_a2); /* last on <var_a2:Array[String]>*/
}
if (likely(varonce78!=NULL)) {
var79 = varonce78;
} else {
var80 = ".";
var82 = (val*)(1l<<2|1);
var83 = (val*)(1l<<2|1);
var84 = (val*)((long)(0)<<2|3);
var85 = (val*)((long)(0)<<2|3);
var81 = core__flat___CString___to_s_unsafe(var80, var82, var83, var84, var85);
var79 = var81;
varonce78 = var79;
}
{
var86 = ((short int(*)(val* self, val* p0))(var77->class->vft[COLOR_core__kernel__Object___61d_61d]))(var77, var79); /* == on <var77:nullable Object(String)>*/
}
if (var86){
{
var87 = ((val*(*)(val* self))(var_a2->class->vft[COLOR_core__abstract_collection__Sequence__pop]))(var_a2); /* pop on <var_a2:Array[String]>*/
}
} else {
{
var88 = ((val*(*)(val* self))(var_a2->class->vft[COLOR_core__abstract_collection__Sequence__pop]))(var_a2); /* pop on <var_a2:Array[String]>*/
}
goto BREAK_label38;
}
} else {
{
var90 = ((short int(*)(val* self))(var_a2->class->vft[COLOR_core__abstract_collection__Collection__is_empty]))(var_a2); /* is_empty on <var_a2:Array[String]>*/
}
var91 = !var90;
var_92 = var91;
if (var91){
{
var93 = ((val*(*)(val* self))(var_a2->class->vft[COLOR_core__abstract_collection__SequenceRead__last]))(var_a2); /* last on <var_a2:Array[String]>*/
}
if (likely(varonce94!=NULL)) {
var95 = varonce94;
} else {
var96 = ".";
var98 = (val*)(1l<<2|1);
var99 = (val*)(1l<<2|1);
var100 = (val*)((long)(0)<<2|3);
var101 = (val*)((long)(0)<<2|3);
var97 = core__flat___CString___to_s_unsafe(var96, var98, var99, var100, var101);
var95 = var97;
varonce94 = var95;
}
{
var102 = ((short int(*)(val* self, val* p0))(var93->class->vft[COLOR_core__kernel__Object___61d_61d]))(var93, var95); /* == on <var93:nullable Object(String)>*/
}
var89 = var102;
} else {
var89 = var_92;
}
if (var89){
{
var103 = ((val*(*)(val* self))(var_a2->class->vft[COLOR_core__abstract_collection__Sequence__pop]))(var_a2); /* pop on <var_a2:Array[String]>*/
}
} else {
}
}
{
((void(*)(val* self, val* p0))(var_a2->class->vft[COLOR_core__abstract_collection__Sequence__push]))(var_a2, var_x); /* push on <var_a2:Array[String]>*/
}
BREAK_label38: (void)0;
{
((void(*)(val* self))((((long)var_22&3)?class_info[((long)var_22&3)]:var_22->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_22); /* next on <var_22:IndexedIterator[String]>*/
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_22&3)?class_info[((long)var_22&3)]:var_22->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_22); /* finish on <var_22:IndexedIterator[String]>*/
}
{
var104 = ((short int(*)(val* self))(var_a2->class->vft[COLOR_core__abstract_collection__Collection__is_empty]))(var_a2); /* is_empty on <var_a2:Array[String]>*/
}
if (var104){
if (likely(varonce105!=NULL)) {
var106 = varonce105;
} else {
var107 = ".";
var109 = (val*)(1l<<2|1);
var110 = (val*)(1l<<2|1);
var111 = (val*)((long)(0)<<2|3);
var112 = (val*)((long)(0)<<2|3);
var108 = core__flat___CString___to_s_unsafe(var107, var109, var110, var111, var112);
var106 = var108;
varonce105 = var106;
}
var = var106;
goto RET_LABEL;
} else {
}
{
var114 = ((long(*)(val* self))(var_a2->class->vft[COLOR_core__abstract_collection__Collection__length]))(var_a2); /* length on <var_a2:Array[String]>*/
}
{
{ /* Inline kernel$Int$== (var114,1l) on <var114:Int> */
var117 = var114 == 1l;
var115 = var117;
goto RET_LABEL116;
RET_LABEL116:(void)0;
}
}
var_118 = var115;
if (var115){
{
var119 = ((val*(*)(val* self))(var_a2->class->vft[COLOR_core__abstract_collection__Collection__first]))(var_a2); /* first on <var_a2:Array[String]>*/
}
if (likely(varonce120!=NULL)) {
var121 = varonce120;
} else {
var122 = "";
var124 = (val*)(0l<<2|1);
var125 = (val*)(0l<<2|1);
var126 = (val*)((long)(0)<<2|3);
var127 = (val*)((long)(0)<<2|3);
var123 = core__flat___CString___to_s_unsafe(var122, var124, var125, var126, var127);
var121 = var123;
varonce120 = var121;
}
{
var128 = ((short int(*)(val* self, val* p0))(var119->class->vft[COLOR_core__kernel__Object___61d_61d]))(var119, var121); /* == on <var119:nullable Object(String)>*/
}
var113 = var128;
} else {
var113 = var_118;
}
if (var113){
if (likely(varonce129!=NULL)) {
var130 = varonce129;
} else {
var131 = "/";
var133 = (val*)(1l<<2|1);
var134 = (val*)(1l<<2|1);
var135 = (val*)((long)(0)<<2|3);
var136 = (val*)((long)(0)<<2|3);
var132 = core__flat___CString___to_s_unsafe(var131, var133, var134, var135, var136);
var130 = var132;
varonce129 = var130;
}
var = var130;
goto RET_LABEL;
} else {
}
if (likely(varonce137!=NULL)) {
var138 = varonce137;
} else {
var139 = "/";
var141 = (val*)(1l<<2|1);
var142 = (val*)(1l<<2|1);
var143 = (val*)((long)(0)<<2|3);
var144 = (val*)((long)(0)<<2|3);
var140 = core__flat___CString___to_s_unsafe(var139, var141, var142, var143, var144);
var138 = var140;
varonce137 = var138;
}
{
var145 = ((val*(*)(val* self, val* p0, val* p1))(var_a2->class->vft[COLOR_core__abstract_text__Collection__join]))(var_a2, var138, ((val*)NULL)); /* join on <var_a2:Array[String]>*/
}
var = var145;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method file$String$join_path for (self: String, String): String */
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
val* var21 /* : nullable Int */;
val* var22 /* : nullable Int */;
val* var23 /* : nullable Bool */;
val* var24 /* : nullable Bool */;
val* var25 /* : String */;
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
{ /* Inline kernel$Char$== (var4,'/') on <var4:nullable Object(Char)> */
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
var9 = ((uint32_t(*)(val* self))(self->class->vft[COLOR_core__abstract_text__Text__last]))(self); /* last on <self:String>*/
}
{
{ /* Inline kernel$Char$== (var9,'/') on <var9:Char> */
var12 = var9 == '/';
var10 = var12;
goto RET_LABEL11;
RET_LABEL11:(void)0;
}
}
if (var10){
if (unlikely(varonce==NULL)) {
var13 = NEW_core__NativeArray((int)2l, &type_core__NativeArray__core__String);
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
var16 = NEW_core__NativeArray((int)3l, &type_core__NativeArray__core__String);
if (likely(varonce17!=NULL)) {
var18 = varonce17;
} else {
var19 = "/";
var21 = (val*)(1l<<2|1);
var22 = (val*)(1l<<2|1);
var23 = (val*)((long)(0)<<2|3);
var24 = (val*)((long)(0)<<2|3);
var20 = core__flat___CString___to_s_unsafe(var19, var21, var22, var23, var24);
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
var25 = ((val*(*)(val* self))(var16->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var16); /* native_to_s on <var16:NativeArray[String]>*/
}
varonce15 = var16;
var = var25;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method file$String$to_program_name for (self: String): String */
val* core__file___String___to_program_name(val* self) {
val* var /* : String */;
static val* varonce;
val* var1 /* : String */;
char* var2 /* : CString */;
val* var3 /* : String */;
val* var4 /* : nullable Int */;
val* var5 /* : nullable Int */;
val* var6 /* : nullable Bool */;
val* var7 /* : nullable Bool */;
short int var8 /* : Bool */;
val* var10 /* : NativeArray[String] */;
static val* varonce9;
static val* varonce11;
val* var12 /* : String */;
char* var13 /* : CString */;
val* var14 /* : String */;
val* var15 /* : nullable Int */;
val* var16 /* : nullable Int */;
val* var17 /* : nullable Bool */;
val* var18 /* : nullable Bool */;
val* var19 /* : String */;
if (likely(varonce!=NULL)) {
var1 = varonce;
} else {
var2 = "/";
var4 = (val*)(1l<<2|1);
var5 = (val*)(1l<<2|1);
var6 = (val*)((long)(0)<<2|3);
var7 = (val*)((long)(0)<<2|3);
var3 = core__flat___CString___to_s_unsafe(var2, var4, var5, var6, var7);
var1 = var3;
varonce = var1;
}
{
var8 = ((short int(*)(val* self, val* p0))(self->class->vft[COLOR_core__abstract_text__Text__has_prefix]))(self, var1); /* has_prefix on <self:String>*/
}
if (var8){
var = self;
goto RET_LABEL;
} else {
if (unlikely(varonce9==NULL)) {
var10 = NEW_core__NativeArray((int)2l, &type_core__NativeArray__core__String);
if (likely(varonce11!=NULL)) {
var12 = varonce11;
} else {
var13 = "./";
var15 = (val*)(2l<<2|1);
var16 = (val*)(2l<<2|1);
var17 = (val*)((long)(0)<<2|3);
var18 = (val*)((long)(0)<<2|3);
var14 = core__flat___CString___to_s_unsafe(var13, var15, var16, var17, var18);
var12 = var14;
varonce11 = var12;
}
((struct instance_core__NativeArray*)var10)->values[0]=var12;
} else {
var10 = varonce9;
varonce9 = NULL;
}
((struct instance_core__NativeArray*)var10)->values[1]=self;
{
var19 = ((val*(*)(val* self))(var10->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var10); /* native_to_s on <var10:NativeArray[String]>*/
}
varonce9 = var10;
var = var19;
goto RET_LABEL;
}
RET_LABEL:;
return var;
}
/* method file$String$/ for (self: String, String): String */
val* core__file___String____47d(val* self, val* p0) {
val* var /* : String */;
val* var_path /* var path: String */;
val* var1 /* : String */;
var_path = p0;
{
var1 = ((val*(*)(val* self, val* p0))(self->class->vft[COLOR_core__file__String__join_path]))(self, var_path); /* join_path on <self:String>*/
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method file$String$relpath for (self: String, String): String */
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
val* var8 /* : nullable Int */;
val* var9 /* : nullable Int */;
val* var10 /* : nullable Bool */;
val* var11 /* : nullable Bool */;
val* var12 /* : Array[String] */;
val* var_from /* var from: Array[String] */;
val* var13 /* : nullable Object */;
short int var14 /* : Bool */;
val* var15 /* : nullable Object */;
val* var16 /* : String */;
val* var17 /* : String */;
static val* varonce18;
val* var19 /* : String */;
char* var20 /* : CString */;
val* var21 /* : String */;
val* var22 /* : nullable Int */;
val* var23 /* : nullable Int */;
val* var24 /* : nullable Bool */;
val* var25 /* : nullable Bool */;
val* var26 /* : Array[String] */;
val* var_to /* var to: Array[String] */;
val* var27 /* : nullable Object */;
short int var28 /* : Bool */;
val* var29 /* : nullable Object */;
short int var30 /* : Bool */;
short int var31 /* : Bool */;
short int var32 /* : Bool */;
short int var33 /* : Bool */;
short int var_ /* var : Bool */;
short int var34 /* : Bool */;
short int var35 /* : Bool */;
short int var_36 /* var : Bool */;
val* var37 /* : nullable Object */;
val* var38 /* : nullable Object */;
short int var39 /* : Bool */;
val* var40 /* : nullable Object */;
val* var41 /* : nullable Object */;
long var42 /* : Int */;
long var_from_len /* var from_len: Int */;
short int var43 /* : Bool */;
short int var45 /* : Bool */;
static val* varonce46;
val* var47 /* : String */;
char* var48 /* : CString */;
val* var49 /* : String */;
val* var50 /* : nullable Int */;
val* var51 /* : nullable Int */;
val* var52 /* : nullable Bool */;
val* var53 /* : nullable Bool */;
val* var54 /* : String */;
static val* varonce55;
val* var56 /* : String */;
char* var57 /* : CString */;
val* var58 /* : String */;
val* var59 /* : nullable Int */;
val* var60 /* : nullable Int */;
val* var61 /* : nullable Bool */;
val* var62 /* : nullable Bool */;
long var63 /* : Int */;
short int var65 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var66 /* : Int */;
val* var67 /* : Text */;
static val* varonce68;
val* var69 /* : String */;
char* var70 /* : CString */;
val* var71 /* : String */;
val* var72 /* : nullable Int */;
val* var73 /* : nullable Int */;
val* var74 /* : nullable Bool */;
val* var75 /* : nullable Bool */;
val* var76 /* : Text */;
val* var_up /* var up: String */;
short int var77 /* : Bool */;
static val* varonce78;
val* var79 /* : String */;
char* var80 /* : CString */;
val* var81 /* : String */;
val* var82 /* : nullable Int */;
val* var83 /* : nullable Int */;
val* var84 /* : nullable Bool */;
val* var85 /* : nullable Bool */;
val* var86 /* : Text */;
static val* varonce87;
val* var88 /* : String */;
char* var89 /* : CString */;
val* var90 /* : String */;
val* var91 /* : nullable Int */;
val* var92 /* : nullable Int */;
val* var93 /* : nullable Bool */;
val* var94 /* : nullable Bool */;
val* var95 /* : String */;
val* var96 /* : Text */;
val* var_res /* var res: String */;
var_dest = p0;
var1 = glob_sys;
{
var2 = ((val*(*)(val* self))(var1->class->vft[COLOR_core__file__Sys__getcwd]))(var1); /* getcwd on <var1:Sys>*/
}
var_cwd = var2;
{
var3 = ((val*(*)(val* self, val* p0))(var_cwd->class->vft[COLOR_core__file__String___47d]))(var_cwd, self); /* / on <var_cwd:String>*/
}
{
var4 = ((val*(*)(val* self))(var3->class->vft[COLOR_core__file__String__simplify_path]))(var3); /* simplify_path on <var3:String>*/
}
if (likely(varonce!=NULL)) {
var5 = varonce;
} else {
var6 = "/";
var8 = (val*)(1l<<2|1);
var9 = (val*)(1l<<2|1);
var10 = (val*)((long)(0)<<2|3);
var11 = (val*)((long)(0)<<2|3);
var7 = core__flat___CString___to_s_unsafe(var6, var8, var9, var10, var11);
var5 = var7;
varonce = var5;
}
{
var12 = ((val*(*)(val* self, val* p0))(var4->class->vft[COLOR_core__string_search__Text__split]))(var4, var5); /* split on <var4:String>*/
}
var_from = var12;
{
var13 = ((val*(*)(val* self))(var_from->class->vft[COLOR_core__abstract_collection__SequenceRead__last]))(var_from); /* last on <var_from:Array[String]>*/
}
{
var14 = ((short int(*)(val* self))(var13->class->vft[COLOR_core__abstract_text__Text__is_empty]))(var13); /* is_empty on <var13:nullable Object(String)>*/
}
if (var14){
{
var15 = ((val*(*)(val* self))(var_from->class->vft[COLOR_core__abstract_collection__Sequence__pop]))(var_from); /* pop on <var_from:Array[String]>*/
}
} else {
}
{
var16 = ((val*(*)(val* self, val* p0))(var_cwd->class->vft[COLOR_core__file__String___47d]))(var_cwd, var_dest); /* / on <var_cwd:String>*/
}
{
var17 = ((val*(*)(val* self))(var16->class->vft[COLOR_core__file__String__simplify_path]))(var16); /* simplify_path on <var16:String>*/
}
if (likely(varonce18!=NULL)) {
var19 = varonce18;
} else {
var20 = "/";
var22 = (val*)(1l<<2|1);
var23 = (val*)(1l<<2|1);
var24 = (val*)((long)(0)<<2|3);
var25 = (val*)((long)(0)<<2|3);
var21 = core__flat___CString___to_s_unsafe(var20, var22, var23, var24, var25);
var19 = var21;
varonce18 = var19;
}
{
var26 = ((val*(*)(val* self, val* p0))(var17->class->vft[COLOR_core__string_search__Text__split]))(var17, var19); /* split on <var17:String>*/
}
var_to = var26;
{
var27 = ((val*(*)(val* self))(var_to->class->vft[COLOR_core__abstract_collection__SequenceRead__last]))(var_to); /* last on <var_to:Array[String]>*/
}
{
var28 = ((short int(*)(val* self))(var27->class->vft[COLOR_core__abstract_text__Text__is_empty]))(var27); /* is_empty on <var27:nullable Object(String)>*/
}
if (var28){
{
var29 = ((val*(*)(val* self))(var_to->class->vft[COLOR_core__abstract_collection__Sequence__pop]))(var_to); /* pop on <var_to:Array[String]>*/
}
} else {
}
for(;;) {
{
var32 = ((short int(*)(val* self))(var_from->class->vft[COLOR_core__abstract_collection__Collection__is_empty]))(var_from); /* is_empty on <var_from:Array[String]>*/
}
var33 = !var32;
var_ = var33;
if (var33){
{
var34 = ((short int(*)(val* self))(var_to->class->vft[COLOR_core__abstract_collection__Collection__is_empty]))(var_to); /* is_empty on <var_to:Array[String]>*/
}
var35 = !var34;
var31 = var35;
} else {
var31 = var_;
}
var_36 = var31;
if (var31){
{
var37 = ((val*(*)(val* self))(var_from->class->vft[COLOR_core__abstract_collection__Collection__first]))(var_from); /* first on <var_from:Array[String]>*/
}
{
var38 = ((val*(*)(val* self))(var_to->class->vft[COLOR_core__abstract_collection__Collection__first]))(var_to); /* first on <var_to:Array[String]>*/
}
{
var39 = ((short int(*)(val* self, val* p0))(var37->class->vft[COLOR_core__kernel__Object___61d_61d]))(var37, var38); /* == on <var37:nullable Object(String)>*/
}
var30 = var39;
} else {
var30 = var_36;
}
if (var30){
{
var40 = ((val*(*)(val* self))(var_from->class->vft[COLOR_core__abstract_collection__Sequence__shift]))(var_from); /* shift on <var_from:Array[String]>*/
}
{
var41 = ((val*(*)(val* self))(var_to->class->vft[COLOR_core__abstract_collection__Sequence__shift]))(var_to); /* shift on <var_to:Array[String]>*/
}
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
var42 = ((long(*)(val* self))(var_from->class->vft[COLOR_core__abstract_collection__Collection__length]))(var_from); /* length on <var_from:Array[String]>*/
}
var_from_len = var42;
{
{ /* Inline kernel$Int$== (var_from_len,0l) on <var_from_len:Int> */
var45 = var_from_len == 0l;
var43 = var45;
goto RET_LABEL44;
RET_LABEL44:(void)0;
}
}
if (var43){
if (likely(varonce46!=NULL)) {
var47 = varonce46;
} else {
var48 = "/";
var50 = (val*)(1l<<2|1);
var51 = (val*)(1l<<2|1);
var52 = (val*)((long)(0)<<2|3);
var53 = (val*)((long)(0)<<2|3);
var49 = core__flat___CString___to_s_unsafe(var48, var50, var51, var52, var53);
var47 = var49;
varonce46 = var47;
}
{
var54 = ((val*(*)(val* self, val* p0, val* p1))(var_to->class->vft[COLOR_core__abstract_text__Collection__join]))(var_to, var47, ((val*)NULL)); /* join on <var_to:Array[String]>*/
}
var = var54;
goto RET_LABEL;
} else {
}
if (likely(varonce55!=NULL)) {
var56 = varonce55;
} else {
var57 = "../";
var59 = (val*)(3l<<2|1);
var60 = (val*)(3l<<2|1);
var61 = (val*)((long)(0)<<2|3);
var62 = (val*)((long)(0)<<2|3);
var58 = core__flat___CString___to_s_unsafe(var57, var59, var60, var61, var62);
var56 = var58;
varonce55 = var56;
}
{
{ /* Inline kernel$Int$- (var_from_len,1l) on <var_from_len:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var65 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var65)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var66 = var_from_len - 1l;
var63 = var66;
goto RET_LABEL64;
RET_LABEL64:(void)0;
}
}
{
var67 = ((val*(*)(val* self, long p0))(var56->class->vft[COLOR_core__abstract_text__Text___42d]))(var56, var63); /* * on <var56:String>*/
}
if (likely(varonce68!=NULL)) {
var69 = varonce68;
} else {
var70 = "..";
var72 = (val*)(2l<<2|1);
var73 = (val*)(2l<<2|1);
var74 = (val*)((long)(0)<<2|3);
var75 = (val*)((long)(0)<<2|3);
var71 = core__flat___CString___to_s_unsafe(var70, var72, var73, var74, var75);
var69 = var71;
varonce68 = var69;
}
{
var76 = ((val*(*)(val* self, val* p0))(var67->class->vft[COLOR_core__abstract_text__Text___43d]))(var67, var69); /* + on <var67:Text(String)>*/
}
var_up = var76;
{
var77 = ((short int(*)(val* self))(var_to->class->vft[COLOR_core__abstract_collection__Collection__is_empty]))(var_to); /* is_empty on <var_to:Array[String]>*/
}
if (var77){
var = var_up;
goto RET_LABEL;
} else {
}
if (likely(varonce78!=NULL)) {
var79 = varonce78;
} else {
var80 = "/";
var82 = (val*)(1l<<2|1);
var83 = (val*)(1l<<2|1);
var84 = (val*)((long)(0)<<2|3);
var85 = (val*)((long)(0)<<2|3);
var81 = core__flat___CString___to_s_unsafe(var80, var82, var83, var84, var85);
var79 = var81;
varonce78 = var79;
}
{
var86 = ((val*(*)(val* self, val* p0))(var_up->class->vft[COLOR_core__abstract_text__Text___43d]))(var_up, var79); /* + on <var_up:String>*/
}
if (likely(varonce87!=NULL)) {
var88 = varonce87;
} else {
var89 = "/";
var91 = (val*)(1l<<2|1);
var92 = (val*)(1l<<2|1);
var93 = (val*)((long)(0)<<2|3);
var94 = (val*)((long)(0)<<2|3);
var90 = core__flat___CString___to_s_unsafe(var89, var91, var92, var93, var94);
var88 = var90;
varonce87 = var88;
}
{
var95 = ((val*(*)(val* self, val* p0, val* p1))(var_to->class->vft[COLOR_core__abstract_text__Collection__join]))(var_to, var88, ((val*)NULL)); /* join on <var_to:Array[String]>*/
}
{
var96 = ((val*(*)(val* self, val* p0))(var86->class->vft[COLOR_core__abstract_text__Text___43d]))(var86, var95); /* + on <var86:Text(String)>*/
}
var_res = var96;
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method file$String$mkdir for (self: String, nullable Int): nullable Error */
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
val* var7 /* : nullable Int */;
val* var8 /* : nullable Int */;
val* var9 /* : nullable Bool */;
val* var10 /* : nullable Bool */;
val* var11 /* : Array[String] */;
val* var_dirs /* var dirs: Array[String] */;
val* var12 /* : FlatBuffer */;
val* var_path /* var path: FlatBuffer */;
short int var13 /* : Bool */;
val* var14 /* : nullable Object */;
short int var15 /* : Bool */;
val* var_error /* var error: nullable Error */;
long var_i /* var i: Int */;
long var16 /* : Int */;
long var17 /* : Int */;
short int var19 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var20 /* : Int */;
long var_ /* var : Int */;
short int var21 /* : Bool */;
short int var23 /* : Bool */;
int cltype24;
int idtype25;
const char* var_class_name26;
short int var27 /* : Bool */;
val* var28 /* : nullable Object */;
val* var_d /* var d: String */;
short int var29 /* : Bool */;
short int var31 /* : Bool */;
char* var32 /* : CString */;
short int var33 /* : Bool */;
long var34 /* : Int */;
short int var_res /* var res: Bool */;
short int var35 /* : Bool */;
short int var36 /* : Bool */;
short int var_37 /* var : Bool */;
short int var38 /* : Bool */;
short int var39 /* : Bool */;
val* var40 /* : IOError */;
val* var42 /* : NativeArray[String] */;
static val* varonce41;
static val* varonce43;
val* var44 /* : String */;
char* var45 /* : CString */;
val* var46 /* : String */;
val* var47 /* : nullable Int */;
val* var48 /* : nullable Int */;
val* var49 /* : nullable Bool */;
val* var50 /* : nullable Bool */;
static val* varonce51;
val* var52 /* : String */;
char* var53 /* : CString */;
val* var54 /* : String */;
val* var55 /* : nullable Int */;
val* var56 /* : nullable Int */;
val* var57 /* : nullable Bool */;
val* var58 /* : nullable Bool */;
val* var59 /* : String */;
val* var60 /* : Sys */;
val* var62 /* : Sys */;
long var63 /* : Int */;
val* var64 /* : String */;
val* var65 /* : String */;
long var66 /* : Int */;
char* var67 /* : CString */;
short int var68 /* : Bool */;
long var69 /* : Int */;
short int var_res70 /* var res: Bool */;
short int var71 /* : Bool */;
short int var72 /* : Bool */;
short int var_73 /* var : Bool */;
short int var74 /* : Bool */;
short int var75 /* : Bool */;
val* var76 /* : IOError */;
val* var78 /* : NativeArray[String] */;
static val* varonce77;
static val* varonce79;
val* var80 /* : String */;
char* var81 /* : CString */;
val* var82 /* : String */;
val* var83 /* : nullable Int */;
val* var84 /* : nullable Int */;
val* var85 /* : nullable Bool */;
val* var86 /* : nullable Bool */;
static val* varonce87;
val* var88 /* : String */;
char* var89 /* : CString */;
val* var90 /* : String */;
val* var91 /* : nullable Int */;
val* var92 /* : nullable Int */;
val* var93 /* : nullable Bool */;
val* var94 /* : nullable Bool */;
val* var95 /* : String */;
val* var96 /* : Sys */;
val* var98 /* : Sys */;
long var99 /* : Int */;
val* var100 /* : String */;
val* var101 /* : String */;
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
var7 = (val*)(1l<<2|1);
var8 = (val*)(1l<<2|1);
var9 = (val*)((long)(0)<<2|3);
var10 = (val*)((long)(0)<<2|3);
var6 = core__flat___CString___to_s_unsafe(var5, var7, var8, var9, var10);
var4 = var6;
varonce = var4;
}
{
var11 = ((val*(*)(val* self, val* p0))(self->class->vft[COLOR_core__string_search__Text__split_with]))(self, var4); /* split_with on <self:String>*/
}
var_dirs = var11;
var12 = NEW_core__FlatBuffer(&type_core__FlatBuffer);
{
((void(*)(val* self))(var12->class->vft[COLOR_core__kernel__Object__init]))(var12); /* init on <var12:FlatBuffer>*/
}
var_path = var12;
{
var13 = ((short int(*)(val* self))(var_dirs->class->vft[COLOR_core__abstract_collection__Collection__is_empty]))(var_dirs); /* is_empty on <var_dirs:Array[String]>*/
}
if (var13){
var = ((val*)NULL);
goto RET_LABEL;
} else {
}
{
var14 = ((val*(*)(val* self, long p0))(var_dirs->class->vft[COLOR_core__abstract_collection__SequenceRead___91d_93d]))(var_dirs, 0l); /* [] on <var_dirs:Array[String]>*/
}
{
var15 = ((short int(*)(val* self))(var14->class->vft[COLOR_core__abstract_text__Text__is_empty]))(var14); /* is_empty on <var14:nullable Object(String)>*/
}
if (var15){
{
((void(*)(val* self, uint32_t p0))(var_path->class->vft[COLOR_core__abstract_text__Buffer__add]))(var_path, '/'); /* add on <var_path:FlatBuffer>*/
}
} else {
}
var_error = ((val*)NULL);
var_i = 0l;
{
var16 = ((long(*)(val* self))(var_dirs->class->vft[COLOR_core__abstract_collection__Collection__length]))(var_dirs); /* length on <var_dirs:Array[String]>*/
}
{
{ /* Inline kernel$Int$- (var16,1l) on <var16:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var19 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var19)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var20 = var16 - 1l;
var17 = var20;
goto RET_LABEL18;
RET_LABEL18:(void)0;
}
}
var_ = var17;
for(;;) {
{
{ /* Inline kernel$Int$< (var_i,var_) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var_:Int> isa OTHER */
/* <var_:Int> isa OTHER */
var23 = 1; /* easy <var_:Int> isa OTHER*/
if (unlikely(!var23)) {
var_class_name26 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name26);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var27 = var_i < var_;
var21 = var27;
goto RET_LABEL22;
RET_LABEL22:(void)0;
}
}
if (var21){
} else {
goto BREAK_label;
}
{
var28 = ((val*(*)(val* self, long p0))(var_dirs->class->vft[COLOR_core__abstract_collection__SequenceRead___91d_93d]))(var_dirs, var_i); /* [] on <var_dirs:Array[String]>*/
}
var_d = var28;
{
var29 = ((short int(*)(val* self))(var_d->class->vft[COLOR_core__abstract_text__Text__is_empty]))(var_d); /* is_empty on <var_d:String>*/
}
if (var29){
goto BREAK_label30;
} else {
}
{
((void(*)(val* self, val* p0))(var_path->class->vft[COLOR_core__abstract_text__Buffer__append]))(var_path, var_d); /* append on <var_path:FlatBuffer>*/
}
{
((void(*)(val* self, uint32_t p0))(var_path->class->vft[COLOR_core__abstract_text__Buffer__add]))(var_path, '/'); /* add on <var_path:FlatBuffer>*/
}
{
var31 = ((short int(*)(val* self))(var_path->class->vft[COLOR_core__file__Text__file_exists]))(var_path); /* file_exists on <var_path:FlatBuffer>*/
}
if (var31){
goto BREAK_label30;
} else {
}
{
var32 = ((char*(*)(val* self))(var_path->class->vft[COLOR_core__abstract_text__Text__to_cstring]))(var_path); /* to_cstring on <var_path:FlatBuffer>*/
}
var34 = (long)(var_mode)>>2;
var33 = core__file___CString___file_mkdir(var32, var34);
var_res = var33;
var36 = !var_res;
var_37 = var36;
if (var36){
if (var_error == NULL) {
var38 = 1; /* is null */
} else {
var38 = 0; /* arg is null but recv is not */
}
if (0) {
var39 = ((short int(*)(val* self, val* p0))(var_error->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_error, ((val*)NULL)); /* == on <var_error:nullable Error>*/
var38 = var39;
}
var35 = var38;
} else {
var35 = var_37;
}
if (var35){
var40 = NEW_core__IOError(&type_core__IOError);
if (unlikely(varonce41==NULL)) {
var42 = NEW_core__NativeArray((int)4l, &type_core__NativeArray__core__String);
if (likely(varonce43!=NULL)) {
var44 = varonce43;
} else {
var45 = "Cannot create directory `";
var47 = (val*)(25l<<2|1);
var48 = (val*)(25l<<2|1);
var49 = (val*)((long)(0)<<2|3);
var50 = (val*)((long)(0)<<2|3);
var46 = core__flat___CString___to_s_unsafe(var45, var47, var48, var49, var50);
var44 = var46;
varonce43 = var44;
}
((struct instance_core__NativeArray*)var42)->values[0]=var44;
if (likely(varonce51!=NULL)) {
var52 = varonce51;
} else {
var53 = "`: ";
var55 = (val*)(3l<<2|1);
var56 = (val*)(3l<<2|1);
var57 = (val*)((long)(0)<<2|3);
var58 = (val*)((long)(0)<<2|3);
var54 = core__flat___CString___to_s_unsafe(var53, var55, var56, var57, var58);
var52 = var54;
varonce51 = var52;
}
((struct instance_core__NativeArray*)var42)->values[2]=var52;
} else {
var42 = varonce41;
varonce41 = NULL;
}
{
var59 = ((val*(*)(val* self))(var_path->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_path); /* to_s on <var_path:FlatBuffer>*/
}
((struct instance_core__NativeArray*)var42)->values[1]=var59;
{
{ /* Inline kernel$Object$sys (self) on <self:String> */
var62 = glob_sys;
var60 = var62;
goto RET_LABEL61;
RET_LABEL61:(void)0;
}
}
{
var63 = ((long(*)(val* self))(var60->class->vft[COLOR_core__kernel__Sys__errno]))(var60); /* errno on <var60:Sys>*/
}
var64 = core__abstract_text___Int___strerror(var63);
((struct instance_core__NativeArray*)var42)->values[3]=var64;
{
var65 = ((val*(*)(val* self))(var42->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var42); /* native_to_s on <var42:NativeArray[String]>*/
}
varonce41 = var42;
{
((void(*)(val* self, val* p0))(var40->class->vft[COLOR_core__error__Error__message_61d]))(var40, var65); /* message= on <var40:IOError>*/
}
{
((void(*)(val* self))(var40->class->vft[COLOR_core__kernel__Object__init]))(var40); /* init on <var40:IOError>*/
}
var_error = var40;
} else {
}
BREAK_label30: (void)0;
var66 = core___core__Int___Discrete__successor(var_i, 1l);
var_i = var66;
}
BREAK_label: (void)0;
{
var67 = ((char*(*)(val* self))(self->class->vft[COLOR_core__abstract_text__Text__to_cstring]))(self); /* to_cstring on <self:String>*/
}
var69 = (long)(var_mode)>>2;
var68 = core__file___CString___file_mkdir(var67, var69);
var_res70 = var68;
var72 = !var_res70;
var_73 = var72;
if (var72){
if (var_error == NULL) {
var74 = 1; /* is null */
} else {
var74 = 0; /* arg is null but recv is not */
}
if (0) {
var75 = ((short int(*)(val* self, val* p0))(var_error->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_error, ((val*)NULL)); /* == on <var_error:nullable Error>*/
var74 = var75;
}
var71 = var74;
} else {
var71 = var_73;
}
if (var71){
var76 = NEW_core__IOError(&type_core__IOError);
if (unlikely(varonce77==NULL)) {
var78 = NEW_core__NativeArray((int)4l, &type_core__NativeArray__core__String);
if (likely(varonce79!=NULL)) {
var80 = varonce79;
} else {
var81 = "Cannot create directory `";
var83 = (val*)(25l<<2|1);
var84 = (val*)(25l<<2|1);
var85 = (val*)((long)(0)<<2|3);
var86 = (val*)((long)(0)<<2|3);
var82 = core__flat___CString___to_s_unsafe(var81, var83, var84, var85, var86);
var80 = var82;
varonce79 = var80;
}
((struct instance_core__NativeArray*)var78)->values[0]=var80;
if (likely(varonce87!=NULL)) {
var88 = varonce87;
} else {
var89 = "`: ";
var91 = (val*)(3l<<2|1);
var92 = (val*)(3l<<2|1);
var93 = (val*)((long)(0)<<2|3);
var94 = (val*)((long)(0)<<2|3);
var90 = core__flat___CString___to_s_unsafe(var89, var91, var92, var93, var94);
var88 = var90;
varonce87 = var88;
}
((struct instance_core__NativeArray*)var78)->values[2]=var88;
} else {
var78 = varonce77;
varonce77 = NULL;
}
{
var95 = ((val*(*)(val* self))(var_path->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_path); /* to_s on <var_path:FlatBuffer>*/
}
((struct instance_core__NativeArray*)var78)->values[1]=var95;
{
{ /* Inline kernel$Object$sys (self) on <self:String> */
var98 = glob_sys;
var96 = var98;
goto RET_LABEL97;
RET_LABEL97:(void)0;
}
}
{
var99 = ((long(*)(val* self))(var96->class->vft[COLOR_core__kernel__Sys__errno]))(var96); /* errno on <var96:Sys>*/
}
var100 = core__abstract_text___Int___strerror(var99);
((struct instance_core__NativeArray*)var78)->values[3]=var100;
{
var101 = ((val*(*)(val* self))(var78->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var78); /* native_to_s on <var78:NativeArray[String]>*/
}
varonce77 = var78;
{
((void(*)(val* self, val* p0))(var76->class->vft[COLOR_core__error__Error__message_61d]))(var76, var101); /* message= on <var76:IOError>*/
}
{
((void(*)(val* self))(var76->class->vft[COLOR_core__kernel__Object__init]))(var76); /* init on <var76:IOError>*/
}
var_error = var76;
} else {
}
var = var_error;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method file$String$rmdir for (self: String): nullable Error */
val* core__file___String___rmdir(val* self) {
val* var /* : nullable Error */;
val* var1 /* : Path */;
val* var_p /* var p: Path */;
val* var2 /* : nullable IOError */;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_core__file__Text__to_path]))(self); /* to_path on <self:String>*/
}
var_p = var1;
{
((void(*)(val* self))(var_p->class->vft[COLOR_core__file__Path__rmdir]))(var_p); /* rmdir on <var_p:Path>*/
}
{
var2 = ((val*(*)(val* self))(var_p->class->vft[COLOR_core__file__Path__last_error]))(var_p); /* last_error on <var_p:Path>*/
}
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method file$String$chdir for (self: String): nullable Error */
val* core__file___String___chdir(val* self) {
val* var /* : nullable Error */;
char* var1 /* : CString */;
short int var2 /* : Bool */;
short int var_res /* var res: Bool */;
val* var3 /* : IOError */;
val* var4 /* : NativeArray[String] */;
static val* varonce;
static val* varonce5;
val* var6 /* : String */;
char* var7 /* : CString */;
val* var8 /* : String */;
val* var9 /* : nullable Int */;
val* var10 /* : nullable Int */;
val* var11 /* : nullable Bool */;
val* var12 /* : nullable Bool */;
static val* varonce13;
val* var14 /* : String */;
char* var15 /* : CString */;
val* var16 /* : String */;
val* var17 /* : nullable Int */;
val* var18 /* : nullable Int */;
val* var19 /* : nullable Bool */;
val* var20 /* : nullable Bool */;
val* var21 /* : Sys */;
val* var23 /* : Sys */;
long var24 /* : Int */;
val* var25 /* : String */;
val* var26 /* : String */;
val* var_error /* var error: IOError */;
{
var1 = ((char*(*)(val* self))(self->class->vft[COLOR_core__abstract_text__Text__to_cstring]))(self); /* to_cstring on <self:String>*/
}
var2 = core__file___CString___file_chdir(var1);
var_res = var2;
if (var_res){
var = ((val*)NULL);
goto RET_LABEL;
} else {
}
var3 = NEW_core__IOError(&type_core__IOError);
if (unlikely(varonce==NULL)) {
var4 = NEW_core__NativeArray((int)4l, &type_core__NativeArray__core__String);
if (likely(varonce5!=NULL)) {
var6 = varonce5;
} else {
var7 = "Cannot change directory to `";
var9 = (val*)(28l<<2|1);
var10 = (val*)(28l<<2|1);
var11 = (val*)((long)(0)<<2|3);
var12 = (val*)((long)(0)<<2|3);
var8 = core__flat___CString___to_s_unsafe(var7, var9, var10, var11, var12);
var6 = var8;
varonce5 = var6;
}
((struct instance_core__NativeArray*)var4)->values[0]=var6;
if (likely(varonce13!=NULL)) {
var14 = varonce13;
} else {
var15 = "`: ";
var17 = (val*)(3l<<2|1);
var18 = (val*)(3l<<2|1);
var19 = (val*)((long)(0)<<2|3);
var20 = (val*)((long)(0)<<2|3);
var16 = core__flat___CString___to_s_unsafe(var15, var17, var18, var19, var20);
var14 = var16;
varonce13 = var14;
}
((struct instance_core__NativeArray*)var4)->values[2]=var14;
} else {
var4 = varonce;
varonce = NULL;
}
((struct instance_core__NativeArray*)var4)->values[1]=self;
{
{ /* Inline kernel$Object$sys (self) on <self:String> */
var23 = glob_sys;
var21 = var23;
goto RET_LABEL22;
RET_LABEL22:(void)0;
}
}
{
var24 = ((long(*)(val* self))(var21->class->vft[COLOR_core__kernel__Sys__errno]))(var21); /* errno on <var21:Sys>*/
}
var25 = core__abstract_text___Int___strerror(var24);
((struct instance_core__NativeArray*)var4)->values[3]=var25;
{
var26 = ((val*(*)(val* self))(var4->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var4); /* native_to_s on <var4:NativeArray[String]>*/
}
varonce = var4;
{
((void(*)(val* self, val* p0))(var3->class->vft[COLOR_core__error__Error__message_61d]))(var3, var26); /* message= on <var3:IOError>*/
}
{
((void(*)(val* self))(var3->class->vft[COLOR_core__kernel__Object__init]))(var3); /* init on <var3:IOError>*/
}
var_error = var3;
var = var_error;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method file$String$file_extension for (self: String): nullable String */
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
{ /* Inline kernel$Int$> (var_last_slash,0l) on <var_last_slash:Int> */
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
{ /* Inline kernel$Int$+ (var_last_slash,1l) on <var_last_slash:Int> */
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
/* method file$String$files for (self: String): Array[String] */
val* core__file___String___files(val* self) {
val* var /* : Array[String] */;
val* var1 /* : Array[String] */;
val* var_res /* var res: Array[String] */;
static val* varoncenew;
static int varoncenew_guard;
val* var2 /* : NativeDir */;
val* var3 /* : NativeDir */;
char* var4 /* : CString */;
val* var5 /* : NativeDir */;
val* var_d /* var d: NativeDir */;
short int var6 /* : Bool */;
char* var7 /* : CString */;
char* var_de /* var de: CString */;
short int var8 /* : Bool */;
val* var9 /* : Pointer */;
val* var10 /* : String */;
val* var_name /* var name: String */;
short int var11 /* : Bool */;
static val* varonce;
val* var12 /* : String */;
char* var13 /* : CString */;
val* var14 /* : String */;
val* var15 /* : nullable Int */;
val* var16 /* : nullable Int */;
val* var17 /* : nullable Bool */;
val* var18 /* : nullable Bool */;
short int var19 /* : Bool */;
short int var_ /* var : Bool */;
static val* varonce20;
val* var21 /* : String */;
char* var22 /* : CString */;
val* var23 /* : String */;
val* var24 /* : nullable Int */;
val* var25 /* : nullable Int */;
val* var26 /* : nullable Bool */;
val* var27 /* : nullable Bool */;
short int var28 /* : Bool */;
var1 = NEW_core__Array(&type_core__Array__core__String);
{
((void(*)(val* self))(var1->class->vft[COLOR_core__kernel__Object__init]))(var1); /* init on <var1:Array[String]>*/
}
var_res = var1;
if (likely(varoncenew_guard)) {
var2 = varoncenew;
} else {
var3 = NEW_core__file__NativeDir(&type_core__file__NativeDir);
var2 = var3;
varoncenew = var2;
varoncenew_guard = 1;
}
{
var4 = ((char*(*)(val* self))(self->class->vft[COLOR_core__abstract_text__Text__to_cstring]))(self); /* to_cstring on <self:String>*/
}
{
var5 = ((val*(*)(val* self, char* p0))(var2->class->vft[COLOR_core__file__NativeDir__opendir]))(var2, var4); /* opendir on <var2:NativeDir>*/
}
var_d = var5;
{
var6 = ((short int(*)(val* self))(var_d->class->vft[COLOR_core__kernel__Pointer__address_is_null]))(var_d); /* address_is_null on <var_d:NativeDir>*/
}
if (var6){
var = var_res;
goto RET_LABEL;
} else {
}
for(;;) {
{
var7 = ((char*(*)(val* self))(var_d->class->vft[COLOR_core__file__NativeDir__readdir]))(var_d); /* readdir on <var_d:NativeDir>*/
}
var_de = var7;
var9 = BOX_core__Pointer(var_de); /* autobox from CString to Pointer */
var8 = core___core__Pointer___address_is_null(var9);
if (var8){
goto BREAK_label;
} else {
}
var10 = core__flat___CString___core__abstract_text__Object__to_s(var_de);
var_name = var10;
if (likely(varonce!=NULL)) {
var12 = varonce;
} else {
var13 = ".";
var15 = (val*)(1l<<2|1);
var16 = (val*)(1l<<2|1);
var17 = (val*)((long)(0)<<2|3);
var18 = (val*)((long)(0)<<2|3);
var14 = core__flat___CString___to_s_unsafe(var13, var15, var16, var17, var18);
var12 = var14;
varonce = var12;
}
{
var19 = ((short int(*)(val* self, val* p0))(var_name->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_name, var12); /* == on <var_name:String>*/
}
var_ = var19;
if (var19){
var11 = var_;
} else {
if (likely(varonce20!=NULL)) {
var21 = varonce20;
} else {
var22 = "..";
var24 = (val*)(2l<<2|1);
var25 = (val*)(2l<<2|1);
var26 = (val*)((long)(0)<<2|3);
var27 = (val*)((long)(0)<<2|3);
var23 = core__flat___CString___to_s_unsafe(var22, var24, var25, var26, var27);
var21 = var23;
varonce20 = var21;
}
{
var28 = ((short int(*)(val* self, val* p0))(var_name->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_name, var21); /* == on <var_name:String>*/
}
var11 = var28;
}
if (var11){
goto BREAK_label29;
} else {
}
{
((void(*)(val* self, val* p0))(var_res->class->vft[COLOR_core__abstract_collection__SimpleCollection__add]))(var_res, var_name); /* add on <var_res:Array[String]>*/
}
BREAK_label29: (void)0;
}
BREAK_label: (void)0;
{
((void(*)(val* self))(var_d->class->vft[COLOR_core__file__NativeDir__closedir]))(var_d); /* closedir on <var_d:NativeDir>*/
}
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method file$FlatString$write_native_to for (self: FlatString, FileWriter) */
void core__file___FlatString___Text__write_native_to(val* self, val* p0) {
val* var_s /* var s: FileWriter */;
char* var /* : CString */;
long var1 /* : Int */;
long var2 /* : Int */;
var_s = p0;
{
var = ((char*(*)(val* self))(self->class->vft[COLOR_core__abstract_text__FlatText__items]))(self); /* items on <self:FlatString>*/
}
{
var1 = ((long(*)(val* self))(self->class->vft[COLOR_core__flat__FlatText__first_byte]))(self); /* first_byte on <self:FlatString>*/
}
{
var2 = ((long(*)(val* self))(self->class->vft[COLOR_core__abstract_text__Text__byte_length]))(self); /* byte_length on <self:FlatString>*/
}
{
((void(*)(val* self, char* p0, long p1, long p2))(var_s->class->vft[COLOR_core__file__FileWriter__write_native]))(var_s, var, var1, var2); /* write_native on <var_s:FileWriter>*/
}
RET_LABEL:;
}
/* method file$FlatString$file_extension for (self: FlatString): nullable String */
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
static val* varoncenew;
static int varoncenew_guard;
val* var35 /* : FlatString */;
val* var36 /* : FlatString */;
long var37 /* : Int */;
short int var39 /* : Bool */;
int cltype40;
int idtype41;
const char* var_class_name42;
long var43 /* : Int */;
long var44 /* : Int */;
short int var46 /* : Bool */;
int cltype47;
int idtype48;
const char* var_class_name49;
long var50 /* : Int */;
val* var51 /* : FlatString */;
var1 = self->attrs[COLOR_core__abstract_text__FlatText___items].str; /* _items on <self:FlatString> */
var_its = var1;
{
var2 = ((long(*)(val* self))(self->class->vft[COLOR_core__flat__FlatText__last_byte]))(self); /* last_byte on <self:FlatString>*/
}
var_p = var2;
{
{ /* Inline native$CString$[] (var_its,var_p) on <var_its:CString> */
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
{ /* Inline kernel$Int$>= (var_p,var_st) on <var_p:Int> */
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
var12 = core___core__Char___ascii('.');
{
{ /* Inline kernel$Byte$!= (var_c,var12) on <var_c:Byte> */
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
{ /* Inline kernel$Int$- (var_p,1l) on <var_p:Int> */
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
{ /* Inline native$CString$[] (var_its,var_p) on <var_its:CString> */
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
{ /* Inline kernel$Int$<= (var_p,var_st) on <var_p:Int> */
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
var34 = ((long(*)(val* self))(self->class->vft[COLOR_core__flat__FlatText__last_byte]))(self); /* last_byte on <self:FlatString>*/
}
var_ls = var34;
if (likely(varoncenew_guard)) {
var35 = varoncenew;
} else {
var36 = NEW_core__FlatString(&type_core__FlatString);
var35 = var36;
varoncenew = var35;
varoncenew_guard = 1;
}
{
{ /* Inline kernel$Int$- (var_ls,var_p) on <var_ls:Int> */
/* Covariant cast for argument 0 (i) <var_p:Int> isa OTHER */
/* <var_p:Int> isa OTHER */
var39 = 1; /* easy <var_p:Int> isa OTHER*/
if (unlikely(!var39)) {
var_class_name42 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name42);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var43 = var_ls - var_p;
var37 = var43;
goto RET_LABEL38;
RET_LABEL38:(void)0;
}
}
{
{ /* Inline kernel$Int$+ (var_p,1l) on <var_p:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var46 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var46)) {
var_class_name49 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name49);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var50 = var_p + 1l;
var44 = var50;
goto RET_LABEL45;
RET_LABEL45:(void)0;
}
}
{
var51 = ((val*(*)(val* self, char* p0, long p1, long p2))(var35->class->vft[COLOR_core__flat__FlatString__with_infos]))(var35, var_its, var37, var44); /* with_infos on <var35:FlatString>*/
}
var = var51;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method file$FlatString$basename for (self: FlatString, nullable String): String */
val* core__file___FlatString___String__basename(val* self, val* p0) {
val* var /* : String */;
val* var_extension /* var extension: nullable String */;
val* var1 /* : Sys */;
short int var2 /* : Bool */;
long var3 /* : Int */;
long var_l /* var l: Int */;
char* var4 /* : CString */;
char* var_its /* var its: CString */;
long var5 /* : Int */;
long var_min /* var min: Int */;
unsigned char var6 /* : Byte */;
unsigned char var_sl /* var sl: Byte */;
unsigned char var7 /* : Byte */;
unsigned char var_ls /* var ls: Byte */;
short int var8 /* : Bool */;
short int var9 /* : Bool */;
short int var11 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var12 /* : Bool */;
short int var_ /* var : Bool */;
short int var13 /* : Bool */;
unsigned char var14 /* : Byte */;
unsigned char var16 /* : Byte */;
short int var17 /* : Bool */;
short int var19 /* : Bool */;
short int var_20 /* var : Bool */;
unsigned char var21 /* : Byte */;
unsigned char var23 /* : Byte */;
short int var24 /* : Bool */;
short int var26 /* : Bool */;
long var27 /* : Int */;
short int var29 /* : Bool */;
int cltype30;
int idtype31;
const char* var_class_name32;
long var33 /* : Int */;
short int var34 /* : Bool */;
short int var36 /* : Bool */;
static val* varonce;
val* var37 /* : String */;
char* var38 /* : CString */;
val* var39 /* : String */;
val* var40 /* : nullable Int */;
val* var41 /* : nullable Int */;
val* var42 /* : nullable Bool */;
val* var43 /* : nullable Bool */;
long var_ns /* var ns: Int */;
short int var44 /* : Bool */;
short int var45 /* : Bool */;
short int var46 /* : Bool */;
short int var48 /* : Bool */;
int cltype49;
int idtype50;
const char* var_class_name51;
short int var52 /* : Bool */;
short int var_53 /* var : Bool */;
unsigned char var54 /* : Byte */;
unsigned char var56 /* : Byte */;
short int var57 /* : Bool */;
short int var59 /* : Bool */;
short int var60 /* : Bool */;
short int var_61 /* var : Bool */;
unsigned char var62 /* : Byte */;
unsigned char var64 /* : Byte */;
short int var65 /* : Bool */;
short int var67 /* : Bool */;
short int var68 /* : Bool */;
long var69 /* : Int */;
short int var71 /* : Bool */;
int cltype72;
int idtype73;
const char* var_class_name74;
long var75 /* : Int */;
static val* varoncenew;
static int varoncenew_guard;
val* var77 /* : FlatString */;
val* var78 /* : FlatString */;
long var79 /* : Int */;
short int var81 /* : Bool */;
int cltype82;
int idtype83;
const char* var_class_name84;
long var85 /* : Int */;
long var86 /* : Int */;
short int var88 /* : Bool */;
int cltype89;
int idtype90;
const char* var_class_name91;
long var92 /* : Int */;
val* var93 /* : FlatString */;
val* var_bname /* var bname: nullable Object */;
long var94 /* : Int */;
long var_l95 /* var l: Int */;
char* var96 /* : CString */;
char* var_its97 /* var its: CString */;
long var98 /* : Int */;
long var_min99 /* var min: Int */;
unsigned char var100 /* : Byte */;
unsigned char var_sl101 /* var sl: Byte */;
short int var102 /* : Bool */;
short int var103 /* : Bool */;
short int var105 /* : Bool */;
int cltype106;
int idtype107;
const char* var_class_name108;
short int var109 /* : Bool */;
short int var_110 /* var : Bool */;
unsigned char var111 /* : Byte */;
unsigned char var113 /* : Byte */;
short int var114 /* : Bool */;
short int var116 /* : Bool */;
long var117 /* : Int */;
short int var119 /* : Bool */;
int cltype120;
int idtype121;
const char* var_class_name122;
long var123 /* : Int */;
short int var125 /* : Bool */;
short int var127 /* : Bool */;
static val* varonce128;
val* var129 /* : String */;
char* var130 /* : CString */;
val* var131 /* : String */;
val* var132 /* : nullable Int */;
val* var133 /* : nullable Int */;
val* var134 /* : nullable Bool */;
val* var135 /* : nullable Bool */;
long var_ns136 /* var ns: Int */;
short int var137 /* : Bool */;
short int var138 /* : Bool */;
short int var140 /* : Bool */;
int cltype141;
int idtype142;
const char* var_class_name143;
short int var144 /* : Bool */;
short int var_145 /* var : Bool */;
unsigned char var146 /* : Byte */;
unsigned char var148 /* : Byte */;
short int var149 /* : Bool */;
short int var151 /* : Bool */;
short int var152 /* : Bool */;
long var153 /* : Int */;
short int var155 /* : Bool */;
int cltype156;
int idtype157;
const char* var_class_name158;
long var159 /* : Int */;
static val* varoncenew161;
static int varoncenew161_guard;
val* var162 /* : FlatString */;
val* var163 /* : FlatString */;
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
val* var178 /* : FlatString */;
val* var179 /* : String */;
short int var180 /* : Bool */;
short int var181 /* : Bool */;
val* var182 /* : String */;
var_extension = p0;
var1 = glob_sys;
{
var2 = ((short int(*)(val* self))(var1->class->vft[COLOR_core__kernel__Sys__is_windows]))(var1); /* is_windows on <var1:Sys>*/
}
if (var2){
{
var3 = ((long(*)(val* self))(self->class->vft[COLOR_core__flat__FlatText__last_byte]))(self); /* last_byte on <self:FlatString>*/
}
var_l = var3;
var4 = self->attrs[COLOR_core__abstract_text__FlatText___items].str; /* _items on <self:FlatString> */
var_its = var4;
var5 = self->attrs[COLOR_core__flat__FlatString___first_byte].l; /* _first_byte on <self:FlatString> */
var_min = var5;
var6 = core___core__Char___ascii('/');
var_sl = var6;
var7 = core___core__Char___ascii('\\');
var_ls = var7;
for(;;) {
{
{ /* Inline kernel$Int$> (var_l,var_min) on <var_l:Int> */
/* Covariant cast for argument 0 (i) <var_min:Int> isa OTHER */
/* <var_min:Int> isa OTHER */
var11 = 1; /* easy <var_min:Int> isa OTHER*/
if (unlikely(!var11)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 727);
fatal_exit(1);
}
var12 = var_l > var_min;
var9 = var12;
goto RET_LABEL10;
RET_LABEL10:(void)0;
}
}
var_ = var9;
if (var9){
{
{ /* Inline native$CString$[] (var_its,var_l) on <var_its:CString> */
var16 = (unsigned char)((int)var_its[var_l]);
var14 = var16;
goto RET_LABEL15;
RET_LABEL15:(void)0;
}
}
{
{ /* Inline kernel$Byte$== (var14,var_sl) on <var14:Byte> */
var19 = var14 == var_sl;
var17 = var19;
goto RET_LABEL18;
RET_LABEL18:(void)0;
}
}
var_20 = var17;
if (var17){
var13 = var_20;
} else {
{
{ /* Inline native$CString$[] (var_its,var_l) on <var_its:CString> */
var23 = (unsigned char)((int)var_its[var_l]);
var21 = var23;
goto RET_LABEL22;
RET_LABEL22:(void)0;
}
}
{
{ /* Inline kernel$Byte$== (var21,var_ls) on <var21:Byte> */
var26 = var21 == var_ls;
var24 = var26;
goto RET_LABEL25;
RET_LABEL25:(void)0;
}
}
var13 = var24;
}
var8 = var13;
} else {
var8 = var_;
}
if (var8){
{
{ /* Inline kernel$Int$- (var_l,1l) on <var_l:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var29 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var29)) {
var_class_name32 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name32);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var33 = var_l - 1l;
var27 = var33;
goto RET_LABEL28;
RET_LABEL28:(void)0;
}
}
var_l = var27;
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
{
{ /* Inline kernel$Int$== (var_l,var_min) on <var_l:Int> */
var36 = var_l == var_min;
var34 = var36;
goto RET_LABEL35;
RET_LABEL35:(void)0;
}
}
if (var34){
if (likely(varonce!=NULL)) {
var37 = varonce;
} else {
var38 = "\\";
var40 = (val*)(1l<<2|1);
var41 = (val*)(1l<<2|1);
var42 = (val*)((long)(0)<<2|3);
var43 = (val*)((long)(0)<<2|3);
var39 = core__flat___CString___to_s_unsafe(var38, var40, var41, var42, var43);
var37 = var39;
varonce = var37;
}
var = var37;
goto RET_LABEL;
} else {
}
var_ns = var_l;
for(;;) {
{
{ /* Inline kernel$Int$>= (var_ns,var_min) on <var_ns:Int> */
/* Covariant cast for argument 0 (i) <var_min:Int> isa OTHER */
/* <var_min:Int> isa OTHER */
var48 = 1; /* easy <var_min:Int> isa OTHER*/
if (unlikely(!var48)) {
var_class_name51 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name51);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 726);
fatal_exit(1);
}
var52 = var_ns >= var_min;
var46 = var52;
goto RET_LABEL47;
RET_LABEL47:(void)0;
}
}
var_53 = var46;
if (var46){
{
{ /* Inline native$CString$[] (var_its,var_ns) on <var_its:CString> */
var56 = (unsigned char)((int)var_its[var_ns]);
var54 = var56;
goto RET_LABEL55;
RET_LABEL55:(void)0;
}
}
{
{ /* Inline kernel$Byte$!= (var54,var_sl) on <var54:Byte> */
var59 = var54 == var_sl;
var60 = !var59;
var57 = var60;
goto RET_LABEL58;
RET_LABEL58:(void)0;
}
}
var45 = var57;
} else {
var45 = var_53;
}
var_61 = var45;
if (var45){
{
{ /* Inline native$CString$[] (var_its,var_ns) on <var_its:CString> */
var64 = (unsigned char)((int)var_its[var_ns]);
var62 = var64;
goto RET_LABEL63;
RET_LABEL63:(void)0;
}
}
{
{ /* Inline kernel$Byte$!= (var62,var_ls) on <var62:Byte> */
var67 = var62 == var_ls;
var68 = !var67;
var65 = var68;
goto RET_LABEL66;
RET_LABEL66:(void)0;
}
}
var44 = var65;
} else {
var44 = var_61;
}
if (var44){
{
{ /* Inline kernel$Int$- (var_ns,1l) on <var_ns:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var71 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var71)) {
var_class_name74 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name74);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var75 = var_ns - 1l;
var69 = var75;
goto RET_LABEL70;
RET_LABEL70:(void)0;
}
}
var_ns = var69;
} else {
goto BREAK_label76;
}
}
BREAK_label76: (void)0;
if (likely(varoncenew_guard)) {
var77 = varoncenew;
} else {
var78 = NEW_core__FlatString(&type_core__FlatString);
var77 = var78;
varoncenew = var77;
varoncenew_guard = 1;
}
{
{ /* Inline kernel$Int$- (var_l,var_ns) on <var_l:Int> */
/* Covariant cast for argument 0 (i) <var_ns:Int> isa OTHER */
/* <var_ns:Int> isa OTHER */
var81 = 1; /* easy <var_ns:Int> isa OTHER*/
if (unlikely(!var81)) {
var_class_name84 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name84);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var85 = var_l - var_ns;
var79 = var85;
goto RET_LABEL80;
RET_LABEL80:(void)0;
}
}
{
{ /* Inline kernel$Int$+ (var_ns,1l) on <var_ns:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var88 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var88)) {
var_class_name91 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name91);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var92 = var_ns + 1l;
var86 = var92;
goto RET_LABEL87;
RET_LABEL87:(void)0;
}
}
{
var93 = ((val*(*)(val* self, char* p0, long p1, long p2))(var77->class->vft[COLOR_core__flat__FlatString__with_infos]))(var77, var_its, var79, var86); /* with_infos on <var77:FlatString>*/
}
var_bname = var93;
} else {
{
var94 = ((long(*)(val* self))(self->class->vft[COLOR_core__flat__FlatText__last_byte]))(self); /* last_byte on <self:FlatString>*/
}
var_l95 = var94;
var96 = self->attrs[COLOR_core__abstract_text__FlatText___items].str; /* _items on <self:FlatString> */
var_its97 = var96;
var98 = self->attrs[COLOR_core__flat__FlatString___first_byte].l; /* _first_byte on <self:FlatString> */
var_min99 = var98;
var100 = core___core__Char___ascii('/');
var_sl101 = var100;
for(;;) {
{
{ /* Inline kernel$Int$> (var_l95,var_min99) on <var_l95:Int> */
/* Covariant cast for argument 0 (i) <var_min99:Int> isa OTHER */
/* <var_min99:Int> isa OTHER */
var105 = 1; /* easy <var_min99:Int> isa OTHER*/
if (unlikely(!var105)) {
var_class_name108 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name108);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 727);
fatal_exit(1);
}
var109 = var_l95 > var_min99;
var103 = var109;
goto RET_LABEL104;
RET_LABEL104:(void)0;
}
}
var_110 = var103;
if (var103){
{
{ /* Inline native$CString$[] (var_its97,var_l95) on <var_its97:CString> */
var113 = (unsigned char)((int)var_its97[var_l95]);
var111 = var113;
goto RET_LABEL112;
RET_LABEL112:(void)0;
}
}
{
{ /* Inline kernel$Byte$== (var111,var_sl101) on <var111:Byte> */
var116 = var111 == var_sl101;
var114 = var116;
goto RET_LABEL115;
RET_LABEL115:(void)0;
}
}
var102 = var114;
} else {
var102 = var_110;
}
if (var102){
{
{ /* Inline kernel$Int$- (var_l95,1l) on <var_l95:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var119 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var119)) {
var_class_name122 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name122);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var123 = var_l95 - 1l;
var117 = var123;
goto RET_LABEL118;
RET_LABEL118:(void)0;
}
}
var_l95 = var117;
} else {
goto BREAK_label124;
}
}
BREAK_label124: (void)0;
{
{ /* Inline kernel$Int$== (var_l95,var_min99) on <var_l95:Int> */
var127 = var_l95 == var_min99;
var125 = var127;
goto RET_LABEL126;
RET_LABEL126:(void)0;
}
}
if (var125){
if (likely(varonce128!=NULL)) {
var129 = varonce128;
} else {
var130 = "/";
var132 = (val*)(1l<<2|1);
var133 = (val*)(1l<<2|1);
var134 = (val*)((long)(0)<<2|3);
var135 = (val*)((long)(0)<<2|3);
var131 = core__flat___CString___to_s_unsafe(var130, var132, var133, var134, var135);
var129 = var131;
varonce128 = var129;
}
var = var129;
goto RET_LABEL;
} else {
}
var_ns136 = var_l95;
for(;;) {
{
{ /* Inline kernel$Int$>= (var_ns136,var_min99) on <var_ns136:Int> */
/* Covariant cast for argument 0 (i) <var_min99:Int> isa OTHER */
/* <var_min99:Int> isa OTHER */
var140 = 1; /* easy <var_min99:Int> isa OTHER*/
if (unlikely(!var140)) {
var_class_name143 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name143);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 726);
fatal_exit(1);
}
var144 = var_ns136 >= var_min99;
var138 = var144;
goto RET_LABEL139;
RET_LABEL139:(void)0;
}
}
var_145 = var138;
if (var138){
{
{ /* Inline native$CString$[] (var_its97,var_ns136) on <var_its97:CString> */
var148 = (unsigned char)((int)var_its97[var_ns136]);
var146 = var148;
goto RET_LABEL147;
RET_LABEL147:(void)0;
}
}
{
{ /* Inline kernel$Byte$!= (var146,var_sl101) on <var146:Byte> */
var151 = var146 == var_sl101;
var152 = !var151;
var149 = var152;
goto RET_LABEL150;
RET_LABEL150:(void)0;
}
}
var137 = var149;
} else {
var137 = var_145;
}
if (var137){
{
{ /* Inline kernel$Int$- (var_ns136,1l) on <var_ns136:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var155 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var155)) {
var_class_name158 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name158);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var159 = var_ns136 - 1l;
var153 = var159;
goto RET_LABEL154;
RET_LABEL154:(void)0;
}
}
var_ns136 = var153;
} else {
goto BREAK_label160;
}
}
BREAK_label160: (void)0;
if (likely(varoncenew161_guard)) {
var162 = varoncenew161;
} else {
var163 = NEW_core__FlatString(&type_core__FlatString);
var162 = var163;
varoncenew161 = var162;
varoncenew161_guard = 1;
}
{
{ /* Inline kernel$Int$- (var_l95,var_ns136) on <var_l95:Int> */
/* Covariant cast for argument 0 (i) <var_ns136:Int> isa OTHER */
/* <var_ns136:Int> isa OTHER */
var166 = 1; /* easy <var_ns136:Int> isa OTHER*/
if (unlikely(!var166)) {
var_class_name169 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name169);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var170 = var_l95 - var_ns136;
var164 = var170;
goto RET_LABEL165;
RET_LABEL165:(void)0;
}
}
{
{ /* Inline kernel$Int$+ (var_ns136,1l) on <var_ns136:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var173 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var173)) {
var_class_name176 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name176);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var177 = var_ns136 + 1l;
var171 = var177;
goto RET_LABEL172;
RET_LABEL172:(void)0;
}
}
{
var178 = ((val*(*)(val* self, char* p0, long p1, long p2))(var162->class->vft[COLOR_core__flat__FlatString__with_infos]))(var162, var_its97, var164, var171); /* with_infos on <var162:FlatString>*/
}
var_bname = var178;
}
if (var_extension == NULL) {
var180 = 0; /* is null */
} else {
var180 = 1; /* arg is null and recv is not */
}
if (0) {
var181 = ((short int(*)(val* self, val* p0))(var_extension->class->vft[COLOR_core__kernel__Object___33d_61d]))(var_extension, ((val*)NULL)); /* != on <var_extension:nullable String>*/
var180 = var181;
}
if (var180){
{
var182 = ((val*(*)(val* self, val* p0))(var_bname->class->vft[COLOR_core__file__String__strip_extension]))(var_bname, var_extension); /* strip_extension on <var_bname:nullable Object(FlatString)>*/
}
var179 = var182;
} else {
var179 = var_bname;
}
var = var179;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method file$CString$file_exists for (self: CString): Bool */
short int core__file___CString___file_exists(char* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = core__file___CString_file_exists___impl(self);
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method file$CString$file_stat for (self: CString): NativeFileStat */
val* core__file___CString___file_stat(char* self) {
val* var /* : NativeFileStat */;
val* var1 /* : NativeFileStat */;
val* var2 /* : NativeFileStat */;
var1 = core__file___CString_file_stat___impl(self);
var2 = BOX_core__Pointer(var1); /* boxing NativeFileStat */
var2->type = &type_core__file__NativeFileStat;
var2->class = &class_core__file__NativeFileStat;
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method file$CString$file_lstat for (self: CString): NativeFileStat */
val* core__file___CString___file_lstat(char* self) {
val* var /* : NativeFileStat */;
val* var1 /* : NativeFileStat */;
val* var2 /* : NativeFileStat */;
var1 = core__file___CString_file_lstat___impl(self);
var2 = BOX_core__Pointer(var1); /* boxing NativeFileStat */
var2->type = &type_core__file__NativeFileStat;
var2->class = &class_core__file__NativeFileStat;
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method file$CString$file_mkdir for (self: CString, Int): Bool */
short int core__file___CString___file_mkdir(char* self, long p0) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = core__file___CString_file_mkdir___impl(self, p0);
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method file$CString$rmdir for (self: CString): Bool */
short int core__file___CString___rmdir(char* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = core__file___CString_rmdir___impl(self);
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method file$CString$file_delete for (self: CString): Bool */
short int core__file___CString___file_delete(char* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = core__file___CString_file_delete___impl(self);
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method file$CString$file_chdir for (self: CString): Bool */
short int core__file___CString___file_chdir(char* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = core__file___CString_file_chdir___impl(self);
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method file$CString$file_realpath for (self: CString): CString */
char* core__file___CString___file_realpath(char* self) {
char* var /* : CString */;
char* var1 /* : CString */;
var1 = core__file___CString_file_realpath___impl(self);
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method file$NativeFileStat$mode for (self: NativeFileStat): Int */
long core__file___core__file__NativeFileStat___mode(val* self) {
long var /* : Int */;
long var1 /* : Int */;
void* var2 /* : NativeFileStat for extern */;
var2 = ((struct instance_core__Pointer*)self)->value; /* unboxing NativeFileStat */
var1 = core__file___NativeFileStat_mode___impl(var2);
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method file$NativeFileStat$atime for (self: NativeFileStat): Int */
long core__file___core__file__NativeFileStat___atime(val* self) {
long var /* : Int */;
long var1 /* : Int */;
void* var2 /* : NativeFileStat for extern */;
var2 = ((struct instance_core__Pointer*)self)->value; /* unboxing NativeFileStat */
var1 = core__file___NativeFileStat_atime___impl(var2);
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method file$NativeFileStat$ctime for (self: NativeFileStat): Int */
long core__file___core__file__NativeFileStat___ctime(val* self) {
long var /* : Int */;
long var1 /* : Int */;
void* var2 /* : NativeFileStat for extern */;
var2 = ((struct instance_core__Pointer*)self)->value; /* unboxing NativeFileStat */
var1 = core__file___NativeFileStat_ctime___impl(var2);
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method file$NativeFileStat$mtime for (self: NativeFileStat): Int */
long core__file___core__file__NativeFileStat___mtime(val* self) {
long var /* : Int */;
long var1 /* : Int */;
void* var2 /* : NativeFileStat for extern */;
var2 = ((struct instance_core__Pointer*)self)->value; /* unboxing NativeFileStat */
var1 = core__file___NativeFileStat_mtime___impl(var2);
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method file$NativeFileStat$size for (self: NativeFileStat): Int */
long core__file___core__file__NativeFileStat___size(val* self) {
long var /* : Int */;
long var1 /* : Int */;
void* var2 /* : NativeFileStat for extern */;
var2 = ((struct instance_core__Pointer*)self)->value; /* unboxing NativeFileStat */
var1 = core__file___NativeFileStat_size___impl(var2);
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method file$NativeFileStat$is_reg for (self: NativeFileStat): Bool */
short int core__file___core__file__NativeFileStat___is_reg(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
void* var2 /* : NativeFileStat for extern */;
var2 = ((struct instance_core__Pointer*)self)->value; /* unboxing NativeFileStat */
var1 = core__file___NativeFileStat_is_reg___impl(var2);
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method file$NativeFileStat$is_dir for (self: NativeFileStat): Bool */
short int core__file___core__file__NativeFileStat___is_dir(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
void* var2 /* : NativeFileStat for extern */;
var2 = ((struct instance_core__Pointer*)self)->value; /* unboxing NativeFileStat */
var1 = core__file___NativeFileStat_is_dir___impl(var2);
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method file$NativeFileStat$is_chr for (self: NativeFileStat): Bool */
short int core__file___core__file__NativeFileStat___is_chr(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
void* var2 /* : NativeFileStat for extern */;
var2 = ((struct instance_core__Pointer*)self)->value; /* unboxing NativeFileStat */
var1 = core__file___NativeFileStat_is_chr___impl(var2);
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method file$NativeFileStat$is_blk for (self: NativeFileStat): Bool */
short int core__file___core__file__NativeFileStat___is_blk(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
void* var2 /* : NativeFileStat for extern */;
var2 = ((struct instance_core__Pointer*)self)->value; /* unboxing NativeFileStat */
var1 = core__file___NativeFileStat_is_blk___impl(var2);
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method file$NativeFileStat$is_fifo for (self: NativeFileStat): Bool */
short int core__file___core__file__NativeFileStat___is_fifo(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
void* var2 /* : NativeFileStat for extern */;
var2 = ((struct instance_core__Pointer*)self)->value; /* unboxing NativeFileStat */
var1 = core__file___NativeFileStat_is_fifo___impl(var2);
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method file$NativeFileStat$is_lnk for (self: NativeFileStat): Bool */
short int core__file___core__file__NativeFileStat___is_lnk(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
void* var2 /* : NativeFileStat for extern */;
var2 = ((struct instance_core__Pointer*)self)->value; /* unboxing NativeFileStat */
var1 = core__file___NativeFileStat_is_lnk___impl(var2);
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method file$NativeFileStat$is_sock for (self: NativeFileStat): Bool */
short int core__file___core__file__NativeFileStat___is_sock(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
void* var2 /* : NativeFileStat for extern */;
var2 = ((struct instance_core__Pointer*)self)->value; /* unboxing NativeFileStat */
var1 = core__file___NativeFileStat_is_sock___impl(var2);
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method file$NativeFile$io_read for (self: NativeFile, CString, Int): Int */
long core__file___core__file__NativeFile___io_read(val* self, char* p0, long p1) {
long var /* : Int */;
long var1 /* : Int */;
void* var2 /* : NativeFile for extern */;
var2 = ((struct instance_core__Pointer*)self)->value; /* unboxing NativeFile */
var1 = core__file___NativeFile_io_read___impl(var2, p0, p1);
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method file$NativeFile$io_write for (self: NativeFile, CString, Int, Int): Int */
long core__file___core__file__NativeFile___io_write(val* self, char* p0, long p1, long p2) {
long var /* : Int */;
long var1 /* : Int */;
void* var2 /* : NativeFile for extern */;
var2 = ((struct instance_core__Pointer*)self)->value; /* unboxing NativeFile */
var1 = core__file___NativeFile_io_write___impl(var2, p0, p1, p2);
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method file$NativeFile$write_byte for (self: NativeFile, Byte): Int */
long core__file___core__file__NativeFile___write_byte(val* self, unsigned char p0) {
long var /* : Int */;
long var1 /* : Int */;
void* var2 /* : NativeFile for extern */;
var2 = ((struct instance_core__Pointer*)self)->value; /* unboxing NativeFile */
var1 = core__file___NativeFile_write_byte___impl(var2, p0);
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method file$NativeFile$io_close for (self: NativeFile): Int */
long core__file___core__file__NativeFile___io_close(val* self) {
long var /* : Int */;
long var1 /* : Int */;
void* var2 /* : NativeFile for extern */;
var2 = ((struct instance_core__Pointer*)self)->value; /* unboxing NativeFile */
var1 = core__file___NativeFile_io_close___impl(var2);
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method file$NativeFile$file_stat for (self: NativeFile): NativeFileStat */
val* core__file___core__file__NativeFile___file_stat(val* self) {
val* var /* : NativeFileStat */;
val* var1 /* : NativeFileStat */;
void* var2 /* : NativeFile for extern */;
val* var3 /* : NativeFileStat */;
var2 = ((struct instance_core__Pointer*)self)->value; /* unboxing NativeFile */
var1 = core__file___NativeFile_file_stat___impl(var2);
var3 = BOX_core__Pointer(var1); /* boxing NativeFileStat */
var3->type = &type_core__file__NativeFileStat;
var3->class = &class_core__file__NativeFileStat;
var = var3;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method file$NativeFile$ferror for (self: NativeFile): Bool */
short int core__file___core__file__NativeFile___ferror(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
void* var2 /* : NativeFile for extern */;
var2 = ((struct instance_core__Pointer*)self)->value; /* unboxing NativeFile */
var1 = core__file___NativeFile_ferror___impl(var2);
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method file$NativeFile$fileno for (self: NativeFile): Int */
long core__file___core__file__NativeFile___fileno(val* self) {
long var /* : Int */;
long var1 /* : Int */;
void* var2 /* : NativeFile for extern */;
var2 = ((struct instance_core__Pointer*)self)->value; /* unboxing NativeFile */
var1 = core__file___NativeFile_fileno___impl(var2);
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method file$NativeFile$flush for (self: NativeFile): Int */
long core__file___core__file__NativeFile___flush(val* self) {
long var /* : Int */;
long var1 /* : Int */;
void* var2 /* : NativeFile for extern */;
var2 = ((struct instance_core__Pointer*)self)->value; /* unboxing NativeFile */
var1 = core__file___NativeFile_flush___impl(var2);
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method file$NativeFile$set_buffering_type for (self: NativeFile, Int, Int): Int */
long core__file___core__file__NativeFile___set_buffering_type(val* self, long p0, long p1) {
long var /* : Int */;
long var1 /* : Int */;
void* var2 /* : NativeFile for extern */;
var2 = ((struct instance_core__Pointer*)self)->value; /* unboxing NativeFile */
var1 = core__file___NativeFile_set_buffering_type___impl(var2, p0, p1);
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method file$NativeFile$io_open_read for (self: NativeFile, CString): NativeFile */
val* core__file___core__file__NativeFile___io_open_read(val* self, char* p0) {
val* var /* : NativeFile */;
val* var1 /* : NativeFile */;
val* var2 /* : NativeFile */;
var1 = core__file___new_NativeFile_io_open_read___impl(p0);
var2 = BOX_core__Pointer(var1); /* boxing NativeFile */
var2->type = &type_core__file__NativeFile;
var2->class = &class_core__file__NativeFile;
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method file$NativeFile$io_open_write for (self: NativeFile, CString): NativeFile */
val* core__file___core__file__NativeFile___io_open_write(val* self, char* p0) {
val* var /* : NativeFile */;
val* var1 /* : NativeFile */;
val* var2 /* : NativeFile */;
var1 = core__file___new_NativeFile_io_open_write___impl(p0);
var2 = BOX_core__Pointer(var1); /* boxing NativeFile */
var2->type = &type_core__file__NativeFile;
var2->class = &class_core__file__NativeFile;
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method file$NativeFile$native_stdin for (self: NativeFile): NativeFile */
val* core__file___core__file__NativeFile___native_stdin(val* self) {
val* var /* : NativeFile */;
val* var1 /* : NativeFile */;
val* var2 /* : NativeFile */;
var1 = core__file___new_NativeFile_native_stdin___impl();
var2 = BOX_core__Pointer(var1); /* boxing NativeFile */
var2->type = &type_core__file__NativeFile;
var2->class = &class_core__file__NativeFile;
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method file$NativeFile$native_stdout for (self: NativeFile): NativeFile */
val* core__file___core__file__NativeFile___native_stdout(val* self) {
val* var /* : NativeFile */;
val* var1 /* : NativeFile */;
val* var2 /* : NativeFile */;
var1 = core__file___new_NativeFile_native_stdout___impl();
var2 = BOX_core__Pointer(var1); /* boxing NativeFile */
var2->type = &type_core__file__NativeFile;
var2->class = &class_core__file__NativeFile;
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method file$NativeFile$native_stderr for (self: NativeFile): NativeFile */
val* core__file___core__file__NativeFile___native_stderr(val* self) {
val* var /* : NativeFile */;
val* var1 /* : NativeFile */;
val* var2 /* : NativeFile */;
var1 = core__file___new_NativeFile_native_stderr___impl();
var2 = BOX_core__Pointer(var1); /* boxing NativeFile */
var2->type = &type_core__file__NativeFile;
var2->class = &class_core__file__NativeFile;
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method file$NativeDir$opendir for (self: NativeDir, CString): NativeDir */
val* core__file___core__file__NativeDir___opendir(val* self, char* p0) {
val* var /* : NativeDir */;
val* var1 /* : NativeDir */;
val* var2 /* : NativeDir */;
var1 = core__file___new_NativeDir_opendir___impl(p0);
var2 = BOX_core__Pointer(var1); /* boxing NativeDir */
var2->type = &type_core__file__NativeDir;
var2->class = &class_core__file__NativeDir;
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method file$NativeDir$closedir for (self: NativeDir) */
void core__file___core__file__NativeDir___closedir(val* self) {
void* var /* : NativeDir for extern */;
var = ((struct instance_core__Pointer*)self)->value; /* unboxing NativeDir */
core__file___NativeDir_closedir___impl(var);
RET_LABEL:;
}
/* method file$NativeDir$readdir for (self: NativeDir): CString */
char* core__file___core__file__NativeDir___readdir(val* self) {
char* var /* : CString */;
char* var1 /* : CString */;
void* var2 /* : NativeDir for extern */;
var2 = ((struct instance_core__Pointer*)self)->value; /* unboxing NativeDir */
var1 = core__file___NativeDir_readdir___impl(var2);
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method file$Sys$stdin for (self: Sys): PollableReader */
val* core__file___Sys___stdin(val* self) {
val* var /* : PollableReader */;
short int var1 /* : Bool */;
val* var2 /* : PollableReader */;
val* var3 /* : Stdin */;
var1 = self->attrs[COLOR_core__file__Sys___stdin].val != NULL; /* _stdin on <self:Sys> */
if(likely(var1)) {
var2 = self->attrs[COLOR_core__file__Sys___stdin].val; /* _stdin on <self:Sys> */
if (unlikely(var2 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _stdin");
PRINT_ERROR(" (%s:%d)\n", FILE_core__file, 1580);
fatal_exit(1);
}
} else {
var3 = NEW_core__Stdin(&type_core__Stdin);
{
((void(*)(val* self))(var3->class->vft[COLOR_core__kernel__Object__init]))(var3); /* init on <var3:Stdin>*/
}
self->attrs[COLOR_core__file__Sys___stdin].val = var3; /* _stdin on <self:Sys> */
var2 = var3;
}
var = var2;
RET_LABEL:;
return var;
}
/* method file$Sys$stdin= for (self: Sys, PollableReader) */
void core__file___Sys___stdin_61d(val* self, val* p0) {
self->attrs[COLOR_core__file__Sys___stdin].val = p0; /* _stdin on <self:Sys> */
RET_LABEL:;
}
/* method file$Sys$stdout for (self: Sys): Writer */
val* core__file___Sys___stdout(val* self) {
val* var /* : Writer */;
short int var1 /* : Bool */;
val* var2 /* : Writer */;
val* var3 /* : Stdout */;
var1 = self->attrs[COLOR_core__file__Sys___stdout].val != NULL; /* _stdout on <self:Sys> */
if(likely(var1)) {
var2 = self->attrs[COLOR_core__file__Sys___stdout].val; /* _stdout on <self:Sys> */
if (unlikely(var2 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _stdout");
PRINT_ERROR(" (%s:%d)\n", FILE_core__file, 1583);
fatal_exit(1);
}
} else {
var3 = NEW_core__Stdout(&type_core__Stdout);
{
((void(*)(val* self))(var3->class->vft[COLOR_core__kernel__Object__init]))(var3); /* init on <var3:Stdout>*/
}
self->attrs[COLOR_core__file__Sys___stdout].val = var3; /* _stdout on <self:Sys> */
var2 = var3;
}
var = var2;
RET_LABEL:;
return var;
}
/* method file$Sys$stdout= for (self: Sys, Writer) */
void core__file___Sys___stdout_61d(val* self, val* p0) {
self->attrs[COLOR_core__file__Sys___stdout].val = p0; /* _stdout on <self:Sys> */
RET_LABEL:;
}
/* method file$Sys$stderr for (self: Sys): Writer */
val* core__file___Sys___stderr(val* self) {
val* var /* : Writer */;
short int var1 /* : Bool */;
val* var2 /* : Writer */;
val* var3 /* : Stderr */;
var1 = self->attrs[COLOR_core__file__Sys___stderr].val != NULL; /* _stderr on <self:Sys> */
if(likely(var1)) {
var2 = self->attrs[COLOR_core__file__Sys___stderr].val; /* _stderr on <self:Sys> */
if (unlikely(var2 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _stderr");
PRINT_ERROR(" (%s:%d)\n", FILE_core__file, 1586);
fatal_exit(1);
}
} else {
var3 = NEW_core__Stderr(&type_core__Stderr);
{
((void(*)(val* self))(var3->class->vft[COLOR_core__kernel__Object__init]))(var3); /* init on <var3:Stderr>*/
}
self->attrs[COLOR_core__file__Sys___stderr].val = var3; /* _stderr on <self:Sys> */
var2 = var3;
}
var = var2;
RET_LABEL:;
return var;
}
/* method file$Sys$stderr= for (self: Sys, Writer) */
void core__file___Sys___stderr_61d(val* self, val* p0) {
self->attrs[COLOR_core__file__Sys___stderr].val = p0; /* _stderr on <self:Sys> */
RET_LABEL:;
}
/* method file$Sys$buffer_mode_full for (self: Sys): Int */
long core__file___Sys___buffer_mode_full(val* self) {
long var /* : Int */;
long var1 /* : Int */;
struct nitni_instance* var_for_c_0;
var_for_c_0 = nit_alloc(sizeof(struct nitni_instance));
var_for_c_0->value = self;
var1 = core__file___Sys_buffer_mode_full___impl(var_for_c_0);
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method file$Sys$buffer_mode_line for (self: Sys): Int */
long core__file___Sys___buffer_mode_line(val* self) {
long var /* : Int */;
long var1 /* : Int */;
struct nitni_instance* var_for_c_0;
var_for_c_0 = nit_alloc(sizeof(struct nitni_instance));
var_for_c_0->value = self;
var1 = core__file___Sys_buffer_mode_line___impl(var_for_c_0);
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method file$Sys$buffer_mode_none for (self: Sys): Int */
long core__file___Sys___buffer_mode_none(val* self) {
long var /* : Int */;
long var1 /* : Int */;
struct nitni_instance* var_for_c_0;
var_for_c_0 = nit_alloc(sizeof(struct nitni_instance));
var_for_c_0->value = self;
var1 = core__file___Sys_buffer_mode_none___impl(var_for_c_0);
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method file$Sys$poll for (self: Sys, Sequence[FileStream]): nullable FileStream */
val* core__file___Sys___poll(val* self, val* p0) {
val* var /* : nullable FileStream */;
val* var_streams /* var streams: Sequence[FileStream] */;
val* var1 /* : Array[Int] */;
val* var_in_fds /* var in_fds: Array[Int] */;
val* var2 /* : Array[Int] */;
val* var_out_fds /* var out_fds: Array[Int] */;
val* var3 /* : HashMap[Int, FileStream] */;
val* var_fd_to_stream /* var fd_to_stream: HashMap[Int, FileStream] */;
val* var_ /* var : Sequence[FileStream] */;
val* var4 /* : Iterator[nullable Object] */;
val* var_5 /* var : IndexedIterator[FileStream] */;
short int var6 /* : Bool */;
val* var7 /* : nullable Object */;
val* var_s /* var s: FileStream */;
long var8 /* : Int */;
long var_fd /* var fd: Int */;
short int var9 /* : Bool */;
int cltype;
int idtype;
val* var10 /* : nullable Object */;
short int var11 /* : Bool */;
int cltype12;
int idtype13;
val* var14 /* : nullable Object */;
val* var15 /* : nullable Object */;
val* var16 /* : nullable Int */;
val* var_polled_fd /* var polled_fd: nullable Int */;
short int var17 /* : Bool */;
short int var18 /* : Bool */;
short int var20 /* : Bool */;
val* var21 /* : nullable Object */;
var_streams = p0;
var1 = NEW_core__Array(&type_core__Array__core__Int);
{
((void(*)(val* self))(var1->class->vft[COLOR_core__kernel__Object__init]))(var1); /* init on <var1:Array[Int]>*/
}
var_in_fds = var1;
var2 = NEW_core__Array(&type_core__Array__core__Int);
{
((void(*)(val* self))(var2->class->vft[COLOR_core__kernel__Object__init]))(var2); /* init on <var2:Array[Int]>*/
}
var_out_fds = var2;
var3 = NEW_core__HashMap(&type_core__HashMap__core__Int__core__FileStream);
{
((void(*)(val* self))(var3->class->vft[COLOR_core__kernel__Object__init]))(var3); /* init on <var3:HashMap[Int, FileStream]>*/
}
var_fd_to_stream = var3;
var_ = var_streams;
{
var4 = ((val*(*)(val* self))((((long)var_&3)?class_info[((long)var_&3)]:var_->class)->vft[COLOR_core__abstract_collection__Collection__iterator]))(var_); /* iterator on <var_:Sequence[FileStream]>*/
}
var_5 = var4;
for(;;) {
{
var6 = ((short int(*)(val* self))((((long)var_5&3)?class_info[((long)var_5&3)]:var_5->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_5); /* is_ok on <var_5:IndexedIterator[FileStream]>*/
}
if (var6){
} else {
goto BREAK_label;
}
{
var7 = ((val*(*)(val* self))((((long)var_5&3)?class_info[((long)var_5&3)]:var_5->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_5); /* item on <var_5:IndexedIterator[FileStream]>*/
}
var_s = var7;
{
var8 = ((long(*)(val* self))(var_s->class->vft[COLOR_core__file__FileStream__fd]))(var_s); /* fd on <var_s:FileStream>*/
}
var_fd = var8;
/* <var_s:FileStream> isa FileReader */
cltype = type_core__FileReader.color;
idtype = type_core__FileReader.id;
if(cltype >= var_s->type->table_size) {
var9 = 0;
} else {
var9 = var_s->type->type_table[cltype] == idtype;
}
if (var9){
{
var10 = (val*)(var_fd<<2|1);
((void(*)(val* self, val* p0))(var_in_fds->class->vft[COLOR_core__abstract_collection__SimpleCollection__add]))(var_in_fds, var10); /* add on <var_in_fds:Array[Int]>*/
}
} else {
}
/* <var_s:FileStream> isa FileWriter */
cltype12 = type_core__FileWriter.color;
idtype13 = type_core__FileWriter.id;
if(cltype12 >= var_s->type->table_size) {
var11 = 0;
} else {
var11 = var_s->type->type_table[cltype12] == idtype13;
}
if (var11){
{
var14 = (val*)(var_fd<<2|1);
((void(*)(val* self, val* p0))(var_out_fds->class->vft[COLOR_core__abstract_collection__SimpleCollection__add]))(var_out_fds, var14); /* add on <var_out_fds:Array[Int]>*/
}
} else {
}
{
var15 = (val*)(var_fd<<2|1);
((void(*)(val* self, val* p0, val* p1))(var_fd_to_stream->class->vft[COLOR_core__abstract_collection__Map___91d_93d_61d]))(var_fd_to_stream, var15, var_s); /* []= on <var_fd_to_stream:HashMap[Int, FileStream]>*/
}
{
((void(*)(val* self))((((long)var_5&3)?class_info[((long)var_5&3)]:var_5->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_5); /* next on <var_5:IndexedIterator[FileStream]>*/
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_5&3)?class_info[((long)var_5&3)]:var_5->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_5); /* finish on <var_5:IndexedIterator[FileStream]>*/
}
{
var16 = ((val*(*)(val* self, val* p0, val* p1))(self->class->vft[COLOR_core__file__Sys__intern_poll]))(self, var_in_fds, var_out_fds); /* intern_poll on <self:Sys>*/
}
var_polled_fd = var16;
if (var_polled_fd == NULL) {
var17 = 1; /* is null */
} else {
var17 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel$Int$== (var_polled_fd,((val*)NULL)) on <var_polled_fd:nullable Int> */
var20 = 0; /* incompatible types Int vs. null; cannot be NULL */
var18 = var20;
goto RET_LABEL19;
RET_LABEL19:(void)0;
}
var17 = var18;
}
if (var17){
var = ((val*)NULL);
goto RET_LABEL;
} else {
{
var21 = ((val*(*)(val* self, val* p0))(var_fd_to_stream->class->vft[COLOR_core__abstract_collection__MapRead___91d_93d]))(var_fd_to_stream, var_polled_fd); /* [] on <var_fd_to_stream:HashMap[Int, FileStream]>*/
}
var = var21;
goto RET_LABEL;
}
RET_LABEL:;
return var;
}
/* method file$Sys$intern_poll for (self: Sys, Array[Int], Array[Int]): nullable Int */
val* core__file___Sys___intern_poll(val* self, val* p0, val* p1) {
val* var /* : nullable Int */;
val* var1 /* : nullable Int */;
struct nitni_instance* var_for_c_0;
var_for_c_0 = nit_alloc(sizeof(struct nitni_instance));
var_for_c_0->value = self;
struct nitni_instance* var_for_c_1;
var_for_c_1 = nit_alloc(sizeof(struct nitni_instance));
var_for_c_1->value = p0;
struct nitni_instance* var_for_c_2;
var_for_c_2 = nit_alloc(sizeof(struct nitni_instance));
var_for_c_2->value = p1;
struct nitni_instance* ret_var;
ret_var = core__file___Sys_intern_poll___impl(var_for_c_0, var_for_c_1, var_for_c_2);
var1 = ret_var->value;
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
struct nitni_instance * NIT_NULL___null_Int() {
struct nitni_instance* ret_for_c;
ret_for_c = nit_alloc(sizeof(struct nitni_instance));
ret_for_c->value = NULL;
return ret_for_c;
}
struct nitni_instance * NIT_NULL___null_Object() {
struct nitni_instance* ret_for_c;
ret_for_c = nit_alloc(sizeof(struct nitni_instance));
ret_for_c->value = NULL;
return ret_for_c;
}
/* nitni callback for core::Collection::length */
long core__file___Array_of_Int_length( struct nitni_instance * self ) {
long var /* : Int */;
{
var = ((long(*)(val* self))(self->value->class->vft[COLOR_core__abstract_collection__Collection__length]))(self->value); /* length on <self->value:Array[Int]>*/
}
return var;
}
/* nitni callback for core::SequenceRead::[] */
long core__file___Array_of_Int__index( struct nitni_instance * self, long index ) {
val* var /* : nullable Object */;
long var1 /* : Int */;
{
var = ((val*(*)(val* self, long p0))(self->value->class->vft[COLOR_core__abstract_collection__SequenceRead___91d_93d]))(self->value, index); /* [] on <self->value:Array[Int]>*/
}
var1 = (long)(var)>>2;
return var1;
}
/* nitni check for Int to nullable Int */
int core__file___Int_is_a_nullable_Int(long from) {
short int var /* : Bool */;
int cltype;
int idtype;
/* <from:Int> isa nullable Int */
var = 1; /* easy <from:Int> isa nullable Int*/
return var;
}
/* nitni cast for Int to nullable Int */
struct nitni_instance * core__file___Int_as_nullable_Int(long from) {
short int var /* : Bool */;
int cltype;
int idtype;
val* var1 /* : nullable Int */;
/* <from:Int> isa nullable Int */
var = 1; /* easy <from:Int> isa nullable Int*/
if (!var) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "FFI cast failed");
PRINT_ERROR("\n");
fatal_exit(1);
}
var1 = (val*)(from<<2|1);
struct nitni_instance* ret_for_c;
ret_for_c = nit_alloc(sizeof(struct nitni_instance));
ret_for_c->value = var1;
return ret_for_c;
}
/* method file$Sys$read_only for (self: Sys): CString */
char* core__file___Sys___read_only(val* self) {
char* var /* : CString */;
static char* varonce;
static int varonce_guard;
char* var1 /* : CString */;
static val* varonce2;
val* var3 /* : String */;
char* var4 /* : CString */;
val* var5 /* : String */;
val* var6 /* : nullable Int */;
val* var7 /* : nullable Int */;
val* var8 /* : nullable Bool */;
val* var9 /* : nullable Bool */;
char* var10 /* : CString */;
if (likely(varonce_guard)) {
var1 = varonce;
} else {
if (likely(varonce2!=NULL)) {
var3 = varonce2;
} else {
var4 = "r";
var6 = (val*)(1l<<2|1);
var7 = (val*)(1l<<2|1);
var8 = (val*)((long)(0)<<2|3);
var9 = (val*)((long)(0)<<2|3);
var5 = core__flat___CString___to_s_unsafe(var4, var6, var7, var8, var9);
var3 = var5;
varonce2 = var3;
}
{
var10 = ((char*(*)(val* self))(var3->class->vft[COLOR_core__abstract_text__Text__to_cstring]))(var3); /* to_cstring on <var3:String>*/
}
var1 = var10;
varonce = var1;
varonce_guard = 1;
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method file$Sys$wipe_write for (self: Sys): CString */
char* core__file___Sys___wipe_write(val* self) {
char* var /* : CString */;
static char* varonce;
static int varonce_guard;
char* var1 /* : CString */;
static val* varonce2;
val* var3 /* : String */;
char* var4 /* : CString */;
val* var5 /* : String */;
val* var6 /* : nullable Int */;
val* var7 /* : nullable Int */;
val* var8 /* : nullable Bool */;
val* var9 /* : nullable Bool */;
char* var10 /* : CString */;
if (likely(varonce_guard)) {
var1 = varonce;
} else {
if (likely(varonce2!=NULL)) {
var3 = varonce2;
} else {
var4 = "w";
var6 = (val*)(1l<<2|1);
var7 = (val*)(1l<<2|1);
var8 = (val*)((long)(0)<<2|3);
var9 = (val*)((long)(0)<<2|3);
var5 = core__flat___CString___to_s_unsafe(var4, var6, var7, var8, var9);
var3 = var5;
varonce2 = var3;
}
{
var10 = ((char*(*)(val* self))(var3->class->vft[COLOR_core__abstract_text__Text__to_cstring]))(var3); /* to_cstring on <var3:String>*/
}
var1 = var10;
varonce = var1;
varonce_guard = 1;
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method file$Sys$printn for (self: Sys, Array[Object]) */
void core__file___Sys___printn(val* self, val* p0) {
val* var_objects /* var objects: Array[Object] */;
val* var /* : Sys */;
val* var2 /* : Sys */;
val* var3 /* : Writer */;
val* var4 /* : String */;
var_objects = p0;
{
{ /* Inline kernel$Object$sys (self) on <self:Sys> */
var2 = glob_sys;
var = var2;
goto RET_LABEL1;
RET_LABEL1:(void)0;
}
}
{
var3 = ((val*(*)(val* self))(var->class->vft[COLOR_core__file__Sys__stdout]))(var); /* stdout on <var:Sys>*/
}
{
var4 = ((val*(*)(val* self))(var_objects->class->vft[COLOR_core__abstract_text__Collection__plain_to_s]))(var_objects); /* plain_to_s on <var_objects:Array[Object]>*/
}
{
((void(*)(val* self, val* p0))(var3->class->vft[COLOR_core__stream__Writer__write]))(var3, var4); /* write on <var3:Writer>*/
}
RET_LABEL:;
}
/* method file$Sys$print for (self: Sys, Object) */
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
val* var12 /* : nullable Int */;
val* var13 /* : nullable Int */;
val* var14 /* : nullable Bool */;
val* var15 /* : nullable Bool */;
var_object = p0;
{
{ /* Inline kernel$Object$sys (self) on <self:Sys> */
var2 = glob_sys;
var = var2;
goto RET_LABEL1;
RET_LABEL1:(void)0;
}
}
{
var3 = ((val*(*)(val* self))(var->class->vft[COLOR_core__file__Sys__stdout]))(var); /* stdout on <var:Sys>*/
}
{
var4 = ((val*(*)(val* self))((((long)var_object&3)?class_info[((long)var_object&3)]:var_object->class)->vft[COLOR_core__abstract_text__Object__to_s]))(var_object); /* to_s on <var_object:Object>*/
}
{
((void(*)(val* self, val* p0))(var3->class->vft[COLOR_core__stream__Writer__write]))(var3, var4); /* write on <var3:Writer>*/
}
{
{ /* Inline kernel$Object$sys (self) on <self:Sys> */
var7 = glob_sys;
var5 = var7;
goto RET_LABEL6;
RET_LABEL6:(void)0;
}
}
{
var8 = ((val*(*)(val* self))(var5->class->vft[COLOR_core__file__Sys__stdout]))(var5); /* stdout on <var5:Sys>*/
}
if (likely(varonce!=NULL)) {
var9 = varonce;
} else {
var10 = "\n";
var12 = (val*)(1l<<2|1);
var13 = (val*)(1l<<2|1);
var14 = (val*)((long)(0)<<2|3);
var15 = (val*)((long)(0)<<2|3);
var11 = core__flat___CString___to_s_unsafe(var10, var12, var13, var14, var15);
var9 = var11;
varonce = var9;
}
{
((void(*)(val* self, val* p0))(var8->class->vft[COLOR_core__stream__Writer__write]))(var8, var9); /* write on <var8:Writer>*/
}
RET_LABEL:;
}
/* method file$Sys$print_error for (self: Sys, Object) */
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
val* var12 /* : nullable Int */;
val* var13 /* : nullable Int */;
val* var14 /* : nullable Bool */;
val* var15 /* : nullable Bool */;
var_object = p0;
{
{ /* Inline kernel$Object$sys (self) on <self:Sys> */
var2 = glob_sys;
var = var2;
goto RET_LABEL1;
RET_LABEL1:(void)0;
}
}
{
var3 = ((val*(*)(val* self))(var->class->vft[COLOR_core__file__Sys__stderr]))(var); /* stderr on <var:Sys>*/
}
{
var4 = ((val*(*)(val* self))((((long)var_object&3)?class_info[((long)var_object&3)]:var_object->class)->vft[COLOR_core__abstract_text__Object__to_s]))(var_object); /* to_s on <var_object:Object>*/
}
{
((void(*)(val* self, val* p0))(var3->class->vft[COLOR_core__stream__Writer__write]))(var3, var4); /* write on <var3:Writer>*/
}
{
{ /* Inline kernel$Object$sys (self) on <self:Sys> */
var7 = glob_sys;
var5 = var7;
goto RET_LABEL6;
RET_LABEL6:(void)0;
}
}
{
var8 = ((val*(*)(val* self))(var5->class->vft[COLOR_core__file__Sys__stderr]))(var5); /* stderr on <var5:Sys>*/
}
if (likely(varonce!=NULL)) {
var9 = varonce;
} else {
var10 = "\n";
var12 = (val*)(1l<<2|1);
var13 = (val*)(1l<<2|1);
var14 = (val*)((long)(0)<<2|3);
var15 = (val*)((long)(0)<<2|3);
var11 = core__flat___CString___to_s_unsafe(var10, var12, var13, var14, var15);
var9 = var11;
varonce = var9;
}
{
((void(*)(val* self, val* p0))(var8->class->vft[COLOR_core__stream__Writer__write]))(var8, var9); /* write on <var8:Writer>*/
}
RET_LABEL:;
}
/* method file$Sys$getc for (self: Sys): Char */
uint32_t core__file___Sys___getc(val* self) {
uint32_t var /* : Char */;
val* var1 /* : Sys */;
val* var3 /* : Sys */;
val* var4 /* : PollableReader */;
val* var5 /* : nullable Char */;
val* var_c /* var c: nullable Char */;
short int var6 /* : Bool */;
short int var7 /* : Bool */;
short int var9 /* : Bool */;
uint32_t var10 /* : Char */;
{
{ /* Inline kernel$Object$sys (self) on <self:Sys> */
var3 = glob_sys;
var1 = var3;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
}
{
var4 = ((val*(*)(val* self))(var1->class->vft[COLOR_core__file__Sys__stdin]))(var1); /* stdin on <var1:Sys>*/
}
{
var5 = ((val*(*)(val* self))(var4->class->vft[COLOR_core__stream__Reader__read_char]))(var4); /* read_char on <var4:PollableReader>*/
}
var_c = var5;
if (var_c == NULL) {
var6 = 1; /* is null */
} else {
var6 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel$Char$== (var_c,((val*)NULL)) on <var_c:nullable Char> */
var9 = 0; /* incompatible types Char vs. null; cannot be NULL */
var7 = var9;
goto RET_LABEL8;
RET_LABEL8:(void)0;
}
var6 = var7;
}
if (var6){
var = '1';
goto RET_LABEL;
} else {
}
var10 = (uint32_t)((long)(var_c)>>2);
var = var10;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method file$Sys$gets for (self: Sys): String */
val* core__file___Sys___gets(val* self) {
val* var /* : String */;
val* var1 /* : Sys */;
val* var3 /* : Sys */;
val* var4 /* : PollableReader */;
val* var5 /* : String */;
{
{ /* Inline kernel$Object$sys (self) on <self:Sys> */
var3 = glob_sys;
var1 = var3;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
}
{
var4 = ((val*(*)(val* self))(var1->class->vft[COLOR_core__file__Sys__stdin]))(var1); /* stdin on <var1:Sys>*/
}
{
var5 = ((val*(*)(val* self))(var4->class->vft[COLOR_core__stream__Reader__read_line]))(var4); /* read_line on <var4:PollableReader>*/
}
var = var5;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method file$Sys$getcwd for (self: Sys): String */
val* core__file___Sys___getcwd(val* self) {
val* var /* : String */;
char* var1 /* : CString */;
val* var2 /* : String */;
{
var1 = ((char*(*)(val* self))(self->class->vft[COLOR_core__file__Sys__native_getcwd]))(self); /* native_getcwd on <self:Sys>*/
}
var2 = core__flat___CString___core__abstract_text__Object__to_s(var1);
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method file$Sys$native_getcwd for (self: Sys): CString */
char* core__file___Sys___native_getcwd(val* self) {
char* var /* : CString */;
char* var1 /* : CString */;
struct nitni_instance* var_for_c_0;
var_for_c_0 = nit_alloc(sizeof(struct nitni_instance));
var_for_c_0->value = self;
var1 = core__file___Sys_native_getcwd___impl(var_for_c_0);
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
