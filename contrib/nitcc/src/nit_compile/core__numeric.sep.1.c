#include "core__numeric.sep.0.h"
/* method numeric$Text$to_n for (self: Text): Numeric */
val* core__numeric___Text___to_n(val* self) {
val* var /* : Numeric */;
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "FATAL: Dead method executed.");
PRINT_ERROR("\n");
fatal_exit(1);
RET_LABEL:;
return var;
}
/* method numeric$Numeric$add for (self: Numeric, Numeric): Numeric */
val* core__numeric___Numeric___add(val* self, val* p0) {
val* var /* : Numeric */;
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "FATAL: Dead method executed.");
PRINT_ERROR("\n");
fatal_exit(1);
RET_LABEL:;
return var;
}
/* method numeric$Numeric$sub for (self: Numeric, Numeric): Numeric */
val* core__numeric___Numeric___sub(val* self, val* p0) {
val* var /* : Numeric */;
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "FATAL: Dead method executed.");
PRINT_ERROR("\n");
fatal_exit(1);
RET_LABEL:;
return var;
}
/* method numeric$Numeric$div for (self: Numeric, Numeric): Numeric */
val* core__numeric___Numeric___div(val* self, val* p0) {
val* var /* : Numeric */;
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "FATAL: Dead method executed.");
PRINT_ERROR("\n");
fatal_exit(1);
RET_LABEL:;
return var;
}
/* method numeric$Numeric$mul for (self: Numeric, Numeric): Numeric */
val* core__numeric___Numeric___mul(val* self, val* p0) {
val* var /* : Numeric */;
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "FATAL: Dead method executed.");
PRINT_ERROR("\n");
fatal_exit(1);
RET_LABEL:;
return var;
}
/* method numeric$Int$add for (self: Int, Numeric): Numeric */
val* core__numeric___Int___Numeric__add(long self, val* p0) {
val* var /* : Numeric */;
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "FATAL: Dead method executed.");
PRINT_ERROR("\n");
fatal_exit(1);
RET_LABEL:;
return var;
}
/* method numeric$Int$add for (self: Numeric, Numeric): Numeric */
val* VIRTUAL_core__numeric___Int___Numeric__add(val* self, val* p0) {
val* var /* : Numeric */;
val* var1 /* : Numeric */;
long var2 /* : Int */;
var2 = (long)(self)>>2;
var1 = core__numeric___Int___Numeric__add(var2, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method numeric$Int$sub for (self: Int, Numeric): Numeric */
val* core__numeric___Int___Numeric__sub(long self, val* p0) {
val* var /* : Numeric */;
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "FATAL: Dead method executed.");
PRINT_ERROR("\n");
fatal_exit(1);
RET_LABEL:;
return var;
}
/* method numeric$Int$sub for (self: Numeric, Numeric): Numeric */
val* VIRTUAL_core__numeric___Int___Numeric__sub(val* self, val* p0) {
val* var /* : Numeric */;
val* var1 /* : Numeric */;
long var2 /* : Int */;
var2 = (long)(self)>>2;
var1 = core__numeric___Int___Numeric__sub(var2, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method numeric$Int$mul for (self: Int, Numeric): Numeric */
val* core__numeric___Int___Numeric__mul(long self, val* p0) {
val* var /* : Numeric */;
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "FATAL: Dead method executed.");
PRINT_ERROR("\n");
fatal_exit(1);
RET_LABEL:;
return var;
}
/* method numeric$Int$mul for (self: Numeric, Numeric): Numeric */
val* VIRTUAL_core__numeric___Int___Numeric__mul(val* self, val* p0) {
val* var /* : Numeric */;
val* var1 /* : Numeric */;
long var2 /* : Int */;
var2 = (long)(self)>>2;
var1 = core__numeric___Int___Numeric__mul(var2, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method numeric$Int$div for (self: Int, Numeric): Numeric */
val* core__numeric___Int___Numeric__div(long self, val* p0) {
val* var /* : Numeric */;
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "FATAL: Dead method executed.");
PRINT_ERROR("\n");
fatal_exit(1);
RET_LABEL:;
return var;
}
/* method numeric$Int$div for (self: Numeric, Numeric): Numeric */
val* VIRTUAL_core__numeric___Int___Numeric__div(val* self, val* p0) {
val* var /* : Numeric */;
val* var1 /* : Numeric */;
long var2 /* : Int */;
var2 = (long)(self)>>2;
var1 = core__numeric___Int___Numeric__div(var2, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method numeric$Float$add for (self: Float, Numeric): Numeric */
val* core__numeric___Float___Numeric__add(double self, val* p0) {
val* var /* : Numeric */;
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "FATAL: Dead method executed.");
PRINT_ERROR("\n");
fatal_exit(1);
RET_LABEL:;
return var;
}
/* method numeric$Float$add for (self: Numeric, Numeric): Numeric */
val* VIRTUAL_core__numeric___Float___Numeric__add(val* self, val* p0) {
val* var /* : Numeric */;
val* var1 /* : Numeric */;
double var2 /* : Float */;
var2 = ((struct instance_core__Float*)self)->value; /* autounbox from Numeric to Float */;
var1 = core__numeric___Float___Numeric__add(var2, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method numeric$Float$sub for (self: Float, Numeric): Numeric */
val* core__numeric___Float___Numeric__sub(double self, val* p0) {
val* var /* : Numeric */;
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "FATAL: Dead method executed.");
PRINT_ERROR("\n");
fatal_exit(1);
RET_LABEL:;
return var;
}
/* method numeric$Float$sub for (self: Numeric, Numeric): Numeric */
val* VIRTUAL_core__numeric___Float___Numeric__sub(val* self, val* p0) {
val* var /* : Numeric */;
val* var1 /* : Numeric */;
double var2 /* : Float */;
var2 = ((struct instance_core__Float*)self)->value; /* autounbox from Numeric to Float */;
var1 = core__numeric___Float___Numeric__sub(var2, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method numeric$Float$div for (self: Float, Numeric): Numeric */
val* core__numeric___Float___Numeric__div(double self, val* p0) {
val* var /* : Numeric */;
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "FATAL: Dead method executed.");
PRINT_ERROR("\n");
fatal_exit(1);
RET_LABEL:;
return var;
}
/* method numeric$Float$div for (self: Numeric, Numeric): Numeric */
val* VIRTUAL_core__numeric___Float___Numeric__div(val* self, val* p0) {
val* var /* : Numeric */;
val* var1 /* : Numeric */;
double var2 /* : Float */;
var2 = ((struct instance_core__Float*)self)->value; /* autounbox from Numeric to Float */;
var1 = core__numeric___Float___Numeric__div(var2, p0);
var = var1;
RET_LABEL:;
return var;
}
/* method numeric$Float$mul for (self: Float, Numeric): Numeric */
val* core__numeric___Float___Numeric__mul(double self, val* p0) {
val* var /* : Numeric */;
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "FATAL: Dead method executed.");
PRINT_ERROR("\n");
fatal_exit(1);
RET_LABEL:;
return var;
}
/* method numeric$Float$mul for (self: Numeric, Numeric): Numeric */
val* VIRTUAL_core__numeric___Float___Numeric__mul(val* self, val* p0) {
val* var /* : Numeric */;
val* var1 /* : Numeric */;
double var2 /* : Float */;
var2 = ((struct instance_core__Float*)self)->value; /* autounbox from Numeric to Float */;
var1 = core__numeric___Float___Numeric__mul(var2, p0);
var = var1;
RET_LABEL:;
return var;
}
