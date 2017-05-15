#include "core__gc.sep.0.h"
/* method gc$Sys$force_garbage_collection for (self: Sys) */
void core__gc___Sys___force_garbage_collection(val* self) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "FATAL: Dead method executed.");
PRINT_ERROR("\n");
fatal_exit(1);
RET_LABEL:;
}
/* method gc$Finalizable$finalize for (self: Finalizable) */
void core___core__Finalizable___finalize(val* self) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "FATAL: Dead method executed.");
PRINT_ERROR("\n");
fatal_exit(1);
RET_LABEL:;
}
/* method gc$FinalizableOnce$finalized for (self: FinalizableOnce): Bool */
short int core___core__FinalizableOnce___finalized(val* self) {
short int var /* : Bool */;
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "FATAL: Dead method executed.");
PRINT_ERROR("\n");
fatal_exit(1);
RET_LABEL:;
return var;
}
/* method gc$FinalizableOnce$finalized= for (self: FinalizableOnce, Bool) */
void core___core__FinalizableOnce___finalized_61d(val* self, short int p0) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "FATAL: Dead method executed.");
PRINT_ERROR("\n");
fatal_exit(1);
RET_LABEL:;
}
/* method gc$FinalizableOnce$finalize for (self: FinalizableOnce) */
void core___core__FinalizableOnce___Finalizable__finalize(val* self) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "FATAL: Dead method executed.");
PRINT_ERROR("\n");
fatal_exit(1);
RET_LABEL:;
}
/* method gc$FinalizableOnce$finalize_once for (self: FinalizableOnce) */
void core___core__FinalizableOnce___finalize_once(val* self) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "FATAL: Dead method executed.");
PRINT_ERROR("\n");
fatal_exit(1);
RET_LABEL:;
}
