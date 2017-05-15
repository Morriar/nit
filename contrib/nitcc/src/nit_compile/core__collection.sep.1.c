#include "core__collection.sep.0.h"
/* method collection$Sequence$subarray for (self: Sequence[nullable Object], Int, Int): Array[nullable Object] */
val* core__collection___Sequence___subarray(val* self, long p0, long p1) {
val* var /* : Array[nullable Object] */;
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "FATAL: Dead method executed.");
PRINT_ERROR("\n");
fatal_exit(1);
RET_LABEL:;
return var;
}
