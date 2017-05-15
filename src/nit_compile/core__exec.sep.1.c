#include "core__exec.sep.0.h"
/* method exec#Process#is_finished for (self: Process): Bool */
short int core___core__Process___is_finished(val* self) {
short int var /* : Bool */;
val* var1 /* : NativeProcess */;
val* var3 /* : NativeProcess */;
short int var4 /* : Bool */;
short int var6 /* : Bool */;
void* var7 /* : NativeProcess for extern */;
{
{ /* Inline exec#Process#data (self) on <self:Process> */
var3 = self->attrs[COLOR_core__exec__Process___data].val; /* _data on <self:Process> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _data");
PRINT_ERROR(" (%s:%d)\n", FILE_core__exec, 116);
fatal_exit(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
{ /* Inline exec#NativeProcess#is_finished (var1) on <var1:NativeProcess> */
var7 = ((struct instance_core__Pointer*)var1)->value; /* unboxing NativeProcess */
var6 = exec___NativeProcess_is_finished___impl(var7);
var4 = var6;
goto RET_LABEL5;
RET_LABEL5:(void)0;
}
}
var = var4;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method exec#Process#wait for (self: Process) */
void core___core__Process___wait(val* self) {
val* var /* : NativeProcess */;
val* var2 /* : NativeProcess */;
void* var4 /* : NativeProcess for extern */;
short int var5 /* : Bool */;
{
{ /* Inline exec#Process#data (self) on <self:Process> */
var2 = self->attrs[COLOR_core__exec__Process___data].val; /* _data on <self:Process> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _data");
PRINT_ERROR(" (%s:%d)\n", FILE_core__exec, 116);
fatal_exit(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
{ /* Inline exec#NativeProcess#wait (var) on <var:NativeProcess> */
var4 = ((struct instance_core__Pointer*)var)->value; /* unboxing NativeProcess */
exec___NativeProcess_wait___impl(var4);
RET_LABEL3:(void)0;
}
}
{
var5 = core___core__Process___is_finished(self);
}
if (unlikely(!var5)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_core__exec, 60);
fatal_exit(1);
}
RET_LABEL:;
}
/* method exec#Process#status for (self: Process): Int */
long core___core__Process___status(val* self) {
long var /* : Int */;
short int var1 /* : Bool */;
val* var2 /* : NativeProcess */;
val* var4 /* : NativeProcess */;
long var5 /* : Int */;
long var7 /* : Int */;
void* var8 /* : NativeProcess for extern */;
{
var1 = core___core__Process___is_finished(self);
}
if (unlikely(!var1)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_core__exec, 68);
fatal_exit(1);
}
{
{ /* Inline exec#Process#data (self) on <self:Process> */
var4 = self->attrs[COLOR_core__exec__Process___data].val; /* _data on <self:Process> */
if (unlikely(var4 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _data");
PRINT_ERROR(" (%s:%d)\n", FILE_core__exec, 116);
fatal_exit(1);
}
var2 = var4;
RET_LABEL3:(void)0;
}
}
{
{ /* Inline exec#NativeProcess#status (var2) on <var2:NativeProcess> */
var8 = ((struct instance_core__Pointer*)var2)->value; /* unboxing NativeProcess */
var7 = exec___NativeProcess_status___impl(var8);
var5 = var7;
goto RET_LABEL6;
RET_LABEL6:(void)0;
}
}
var = var5;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method exec#Process#command for (self: Process): Text */
val* core___core__Process___command(val* self) {
val* var /* : Text */;
val* var1 /* : Text */;
var1 = self->attrs[COLOR_core__exec__Process___command].val; /* _command on <self:Process> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _command");
PRINT_ERROR(" (%s:%d)\n", FILE_core__exec, 72);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method exec#Process#command= for (self: Process, Text) */
void core___core__Process___command_61d(val* self, val* p0) {
self->attrs[COLOR_core__exec__Process___command].val = p0; /* _command on <self:Process> */
RET_LABEL:;
}
/* method exec#Process#arguments for (self: Process): nullable Array[Text] */
val* core___core__Process___arguments(val* self) {
val* var /* : nullable Array[Text] */;
val* var1 /* : nullable Array[Text] */;
var1 = self->attrs[COLOR_core__exec__Process___arguments].val; /* _arguments on <self:Process> */
var = var1;
RET_LABEL:;
return var;
}
/* method exec#Process#arguments= for (self: Process, nullable Array[Text]) */
void core___core__Process___arguments_61d(val* self, val* p0) {
self->attrs[COLOR_core__exec__Process___arguments].val = p0; /* _arguments on <self:Process> */
RET_LABEL:;
}
/* method exec#Process#init for (self: Process, Text, Array[Text]) */
void core___core__Process___init(val* self, val* p0, val* p1) {
val* var_command /* var command: Text */;
val* var_arguments /* var arguments: Array[Text] */;
{
{ /* Inline kernel#Object#init (self) on <self:Process> */
RET_LABEL1:(void)0;
}
}
var_command = p0;
var_arguments = p1;
{
{ /* Inline exec#Process#command= (self,var_command) on <self:Process> */
self->attrs[COLOR_core__exec__Process___command].val = var_command; /* _command on <self:Process> */
RET_LABEL2:(void)0;
}
}
{
{ /* Inline exec#Process#arguments= (self,var_arguments) on <self:Process> */
self->attrs[COLOR_core__exec__Process___arguments].val = var_arguments; /* _arguments on <self:Process> */
RET_LABEL3:(void)0;
}
}
{
((void(*)(val* self))(self->class->vft[COLOR_core__exec__Process__execute]))(self); /* execute on <self:Process>*/
}
RET_LABEL:;
}
/* method exec#Process#from_a for (self: Process, Text, nullable Array[Text]) */
void core___core__Process___from_a(val* self, val* p0, val* p1) {
val* var_command /* var command: Text */;
val* var_arguments /* var arguments: nullable Array[Text] */;
{
{ /* Inline kernel#Object#init (self) on <self:Process> */
RET_LABEL1:(void)0;
}
}
var_command = p0;
var_arguments = p1;
{
{ /* Inline exec#Process#command= (self,var_command) on <self:Process> */
self->attrs[COLOR_core__exec__Process___command].val = var_command; /* _command on <self:Process> */
RET_LABEL2:(void)0;
}
}
{
{ /* Inline exec#Process#arguments= (self,var_arguments) on <self:Process> */
self->attrs[COLOR_core__exec__Process___arguments].val = var_arguments; /* _arguments on <self:Process> */
RET_LABEL3:(void)0;
}
}
{
((void(*)(val* self))(self->class->vft[COLOR_core__exec__Process__execute]))(self); /* execute on <self:Process>*/
}
RET_LABEL:;
}
/* method exec#Process#pipeflags for (self: Process): Int */
long core___core__Process___pipeflags(val* self) {
long var /* : Int */;
var = 0l;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method exec#Process#execute for (self: Process) */
void core___core__Process___execute(val* self) {
val* var /* : FlatBuffer */;
val* var_args /* var args: FlatBuffer */;
long var_l /* var l: Int */;
val* var2 /* : Text */;
val* var4 /* : Text */;
val* var5 /* : nullable Array[Text] */;
val* var7 /* : nullable Array[Text] */;
val* var_arguments /* var arguments: nullable Array[Text] */;
short int var8 /* : Bool */;
short int var9 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var11 /* : Bool */;
short int var12 /* : Bool */;
val* var_ /* var : Array[Text] */;
val* var13 /* : IndexedIterator[nullable Object] */;
val* var_14 /* var : IndexedIterator[Text] */;
short int var15 /* : Bool */;
val* var16 /* : nullable Object */;
val* var_a /* var a: Text */;
long var17 /* : Int */;
long var19 /* : Int */;
long var20 /* : Int */;
short int var22 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var23 /* : Int */;
val* var24 /* : Text */;
val* var26 /* : Text */;
char* var27 /* : CString */;
val* var28 /* : String */;
char* var29 /* : CString */;
long var30 /* : Int */;
val* var31 /* : NativeProcess */;
val* var33 /* : NativeProcess */;
val* var34 /* : NativeProcess */;
var = NEW_core__FlatBuffer(&type_core__FlatBuffer);
{
{ /* Inline flat#FlatBuffer#init (var) on <var:FlatBuffer> */
{
((void(*)(val* self))(var->class->vft[COLOR_core___core__FlatBuffer___core__kernel__Object__init]))(var); /* init on <var:FlatBuffer>*/
}
RET_LABEL1:(void)0;
}
}
var_args = var;
var_l = 1l;
{
{ /* Inline exec#Process#command (self) on <self:Process> */
var4 = self->attrs[COLOR_core__exec__Process___command].val; /* _command on <self:Process> */
if (unlikely(var4 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _command");
PRINT_ERROR(" (%s:%d)\n", FILE_core__exec, 72);
fatal_exit(1);
}
var2 = var4;
RET_LABEL3:(void)0;
}
}
{
core___core__FlatBuffer___core__abstract_text__Buffer__append(var_args, var2); /* Direct call flat#FlatBuffer#append on <var_args:FlatBuffer>*/
}
{
{ /* Inline exec#Process#arguments (self) on <self:Process> */
var7 = self->attrs[COLOR_core__exec__Process___arguments].val; /* _arguments on <self:Process> */
var5 = var7;
RET_LABEL6:(void)0;
}
}
var_arguments = var5;
if (var_arguments == NULL) {
var8 = 0; /* is null */
} else {
var8 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_arguments,((val*)NULL)) on <var_arguments:nullable Array[Text]> */
var_other = ((val*)NULL);
{
var11 = ((short int(*)(val* self, val* p0))(var_arguments->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_arguments, var_other); /* == on <var_arguments:nullable Array[Text](Array[Text])>*/
}
var12 = !var11;
var9 = var12;
goto RET_LABEL10;
RET_LABEL10:(void)0;
}
var8 = var9;
}
if (var8){
var_ = var_arguments;
{
var13 = core___core__AbstractArrayRead___core__abstract_collection__Collection__iterator(var_);
}
var_14 = var13;
for(;;) {
{
var15 = ((short int(*)(val* self))((((long)var_14&3)?class_info[((long)var_14&3)]:var_14->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_14); /* is_ok on <var_14:IndexedIterator[Text]>*/
}
if (var15){
} else {
goto BREAK_label;
}
{
var16 = ((val*(*)(val* self))((((long)var_14&3)?class_info[((long)var_14&3)]:var_14->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_14); /* item on <var_14:IndexedIterator[Text]>*/
}
var_a = var16;
{
core___core__FlatBuffer___core__abstract_text__Buffer__add(var_args, '\000'); /* Direct call flat#FlatBuffer#add on <var_args:FlatBuffer>*/
}
{
core___core__FlatBuffer___core__abstract_text__Buffer__append(var_args, var_a); /* Direct call flat#FlatBuffer#append on <var_args:FlatBuffer>*/
}
{
((void(*)(val* self))((((long)var_14&3)?class_info[((long)var_14&3)]:var_14->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_14); /* next on <var_14:IndexedIterator[Text]>*/
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_14&3)?class_info[((long)var_14&3)]:var_14->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_14); /* finish on <var_14:IndexedIterator[Text]>*/
}
{
{ /* Inline array#AbstractArrayRead#length (var_arguments) on <var_arguments:nullable Array[Text](Array[Text])> */
var19 = var_arguments->attrs[COLOR_core__array__AbstractArrayRead___length].l; /* _length on <var_arguments:nullable Array[Text](Array[Text])> */
var17 = var19;
RET_LABEL18:(void)0;
}
}
{
{ /* Inline kernel#Int#+ (var_l,var17) on <var_l:Int> */
/* Covariant cast for argument 0 (i) <var17:Int> isa OTHER */
/* <var17:Int> isa OTHER */
var22 = 1; /* easy <var17:Int> isa OTHER*/
if (unlikely(!var22)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var23 = var_l + var17;
var20 = var23;
goto RET_LABEL21;
RET_LABEL21:(void)0;
}
}
var_l = var20;
} else {
}
{
{ /* Inline exec#Process#command (self) on <self:Process> */
var26 = self->attrs[COLOR_core__exec__Process___command].val; /* _command on <self:Process> */
if (unlikely(var26 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _command");
PRINT_ERROR(" (%s:%d)\n", FILE_core__exec, 72);
fatal_exit(1);
}
var24 = var26;
RET_LABEL25:(void)0;
}
}
{
var27 = ((char*(*)(val* self))(var24->class->vft[COLOR_core__abstract_text__Text__to_cstring]))(var24); /* to_cstring on <var24:Text>*/
}
{
var28 = core___core__FlatBuffer___core__abstract_text__Object__to_s(var_args);
}
{
var29 = ((char*(*)(val* self))(var28->class->vft[COLOR_core__abstract_text__Text__to_cstring]))(var28); /* to_cstring on <var28:String>*/
}
{
var30 = ((long(*)(val* self))(self->class->vft[COLOR_core__exec__Process__pipeflags]))(self); /* pipeflags on <self:Process>*/
}
{
{ /* Inline exec#Process#basic_exec_execute (self,var27,var29,var_l,var30) on <self:Process> */
struct nitni_instance* var_for_c_0;
var_for_c_0 = nit_alloc(sizeof(struct nitni_instance));
var_for_c_0->value = self;
var33 = exec___Process_basic_exec_execute___impl(var_for_c_0, var27, var29, var_l, var30);
var34 = BOX_core__Pointer(var33); /* boxing NativeProcess */
var34->type = &type_core__exec__NativeProcess;
var34->class = &class_core__exec__NativeProcess;
var31 = var34;
goto RET_LABEL32;
RET_LABEL32:(void)0;
}
}
{
{ /* Inline exec#Process#data= (self,var31) on <self:Process> */
self->attrs[COLOR_core__exec__Process___data].val = var31; /* _data on <self:Process> */
RET_LABEL35:(void)0;
}
}
RET_LABEL:;
}
/* method exec#Process#data for (self: Process): NativeProcess */
val* core___core__Process___data(val* self) {
val* var /* : NativeProcess */;
val* var1 /* : NativeProcess */;
var1 = self->attrs[COLOR_core__exec__Process___data].val; /* _data on <self:Process> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _data");
PRINT_ERROR(" (%s:%d)\n", FILE_core__exec, 116);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method exec#Process#data= for (self: Process, NativeProcess) */
void core___core__Process___data_61d(val* self, val* p0) {
self->attrs[COLOR_core__exec__Process___data].val = p0; /* _data on <self:Process> */
RET_LABEL:;
}
/* method exec#Process#basic_exec_execute for (self: Process, CString, CString, Int, Int): NativeProcess */
val* core___core__Process___basic_exec_execute(val* self, char* p0, char* p1, long p2, long p3) {
val* var /* : NativeProcess */;
val* var1 /* : NativeProcess */;
val* var2 /* : NativeProcess */;
struct nitni_instance* var_for_c_0;
var_for_c_0 = nit_alloc(sizeof(struct nitni_instance));
var_for_c_0->value = self;
var1 = exec___Process_basic_exec_execute___impl(var_for_c_0, p0, p1, p2, p3);
var2 = BOX_core__Pointer(var1); /* boxing NativeProcess */
var2->type = &type_core__exec__NativeProcess;
var2->class = &class_core__exec__NativeProcess;
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method exec#ProcessReader#stream_in for (self: ProcessReader): FileReader */
val* core___core__ProcessReader___stream_in(val* self) {
val* var /* : FileReader */;
val* var1 /* : FileReader */;
var1 = self->attrs[COLOR_core__exec__ProcessReader___stream_in].val; /* _stream_in on <self:ProcessReader> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _stream_in");
PRINT_ERROR(" (%s:%d)\n", FILE_core__exec, 225);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method exec#ProcessReader#stream_in= for (self: ProcessReader, FileReader) */
void core___core__ProcessReader___stream_in_61d(val* self, val* p0) {
self->attrs[COLOR_core__exec__ProcessReader___stream_in].val = p0; /* _stream_in on <self:ProcessReader> */
RET_LABEL:;
}
/* method exec#ProcessReader#close for (self: ProcessReader) */
void core___core__ProcessReader___core__stream__Stream__close(val* self) {
val* var /* : FileReader */;
val* var2 /* : FileReader */;
{
{ /* Inline exec#ProcessReader#stream_in (self) on <self:ProcessReader> */
var2 = self->attrs[COLOR_core__exec__ProcessReader___stream_in].val; /* _stream_in on <self:ProcessReader> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _stream_in");
PRINT_ERROR(" (%s:%d)\n", FILE_core__exec, 225);
fatal_exit(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
core___core__FileReader___core__stream__Stream__close(var); /* Direct call file#FileReader#close on <var:FileReader>*/
}
RET_LABEL:;
}
/* method exec#ProcessReader#read_char for (self: ProcessReader): nullable Char */
val* core___core__ProcessReader___core__stream__Reader__read_char(val* self) {
val* var /* : nullable Char */;
val* var1 /* : FileReader */;
val* var3 /* : FileReader */;
val* var4 /* : nullable Char */;
{
{ /* Inline exec#ProcessReader#stream_in (self) on <self:ProcessReader> */
var3 = self->attrs[COLOR_core__exec__ProcessReader___stream_in].val; /* _stream_in on <self:ProcessReader> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _stream_in");
PRINT_ERROR(" (%s:%d)\n", FILE_core__exec, 225);
fatal_exit(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
var4 = core___core__BufferedReader___Reader__read_char(var1);
}
var = var4;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method exec#ProcessReader#read_byte for (self: ProcessReader): nullable Byte */
val* core___core__ProcessReader___core__stream__Reader__read_byte(val* self) {
val* var /* : nullable Byte */;
val* var1 /* : FileReader */;
val* var3 /* : FileReader */;
val* var4 /* : nullable Byte */;
{
{ /* Inline exec#ProcessReader#stream_in (self) on <self:ProcessReader> */
var3 = self->attrs[COLOR_core__exec__ProcessReader___stream_in].val; /* _stream_in on <self:ProcessReader> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _stream_in");
PRINT_ERROR(" (%s:%d)\n", FILE_core__exec, 225);
fatal_exit(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
var4 = core___core__BufferedReader___Reader__read_byte(var1);
}
var = var4;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method exec#ProcessReader#eof for (self: ProcessReader): Bool */
short int core___core__ProcessReader___core__stream__Reader__eof(val* self) {
short int var /* : Bool */;
val* var1 /* : FileReader */;
val* var3 /* : FileReader */;
short int var4 /* : Bool */;
{
{ /* Inline exec#ProcessReader#stream_in (self) on <self:ProcessReader> */
var3 = self->attrs[COLOR_core__exec__ProcessReader___stream_in].val; /* _stream_in on <self:ProcessReader> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _stream_in");
PRINT_ERROR(" (%s:%d)\n", FILE_core__exec, 225);
fatal_exit(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
var4 = core___core__BufferedReader___Reader__eof(var1);
}
var = var4;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method exec#ProcessReader#pipeflags for (self: ProcessReader): Int */
long core___core__ProcessReader___Process__pipeflags(val* self) {
long var /* : Int */;
var = 2l;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method exec#ProcessReader#execute for (self: ProcessReader) */
void core___core__ProcessReader___Process__execute(val* self) {
val* var /* : FileReader */;
val* var1 /* : NativeProcess */;
val* var3 /* : NativeProcess */;
long var4 /* : Int */;
long var6 /* : Int */;
void* var7 /* : NativeProcess for extern */;
{
((void(*)(val* self))(self->class->vft[COLOR_core___core__ProcessReader___Process__execute]))(self); /* execute on <self:ProcessReader>*/
}
var = NEW_core__FileReader(&type_core__FileReader);
{
{ /* Inline exec#Process#data (self) on <self:ProcessReader> */
var3 = self->attrs[COLOR_core__exec__Process___data].val; /* _data on <self:ProcessReader> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _data");
PRINT_ERROR(" (%s:%d)\n", FILE_core__exec, 116);
fatal_exit(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
{ /* Inline exec#NativeProcess#out_fd (var1) on <var1:NativeProcess> */
var7 = ((struct instance_core__Pointer*)var1)->value; /* unboxing NativeProcess */
var6 = exec___NativeProcess_out_fd___impl(var7);
var4 = var6;
goto RET_LABEL5;
RET_LABEL5:(void)0;
}
}
{
core___core__FileReader___from_fd(var, var4); /* Direct call file#FileReader#from_fd on <var:FileReader>*/
}
{
{ /* Inline exec#ProcessReader#stream_in= (self,var) on <self:ProcessReader> */
self->attrs[COLOR_core__exec__ProcessReader___stream_in].val = var; /* _stream_in on <self:ProcessReader> */
RET_LABEL8:(void)0;
}
}
RET_LABEL:;
}
/* method exec#Sys#system for (self: Sys, Text): Int */
long core__exec___Sys___system(val* self, val* p0) {
long var /* : Int */;
val* var_command /* var command: Text */;
char* var1 /* : CString */;
long var2 /* : Int */;
long var4 /* : Int */;
var_command = p0;
{
var1 = ((char*(*)(val* self))(var_command->class->vft[COLOR_core__abstract_text__Text__to_cstring]))(var_command); /* to_cstring on <var_command:Text>*/
}
{
{ /* Inline exec#CString#system (var1) on <var1:CString> */
var4 = exec___CString_system___impl(var1);
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
/* method exec#CString#system for (self: CString): Int */
long core__exec___CString___system(char* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = exec___CString_system___impl(self);
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method exec#NativeProcess#status for (self: NativeProcess): Int */
long core__exec___core__exec__NativeProcess___status(val* self) {
long var /* : Int */;
long var1 /* : Int */;
void* var2 /* : NativeProcess for extern */;
var2 = ((struct instance_core__Pointer*)self)->value; /* unboxing NativeProcess */
var1 = exec___NativeProcess_status___impl(var2);
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method exec#NativeProcess#out_fd for (self: NativeProcess): Int */
long core__exec___core__exec__NativeProcess___out_fd(val* self) {
long var /* : Int */;
long var1 /* : Int */;
void* var2 /* : NativeProcess for extern */;
var2 = ((struct instance_core__Pointer*)self)->value; /* unboxing NativeProcess */
var1 = exec___NativeProcess_out_fd___impl(var2);
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method exec#NativeProcess#is_finished for (self: NativeProcess): Bool */
short int core__exec___core__exec__NativeProcess___is_finished(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
void* var2 /* : NativeProcess for extern */;
var2 = ((struct instance_core__Pointer*)self)->value; /* unboxing NativeProcess */
var1 = exec___NativeProcess_is_finished___impl(var2);
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method exec#NativeProcess#wait for (self: NativeProcess) */
void core__exec___core__exec__NativeProcess___wait(val* self) {
void* var /* : NativeProcess for extern */;
var = ((struct instance_core__Pointer*)self)->value; /* unboxing NativeProcess */
exec___NativeProcess_wait___impl(var);
RET_LABEL:;
}
