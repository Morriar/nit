#include "nitc__ffi_base.sep.0.h"
/* method ffi_base#MModule#ffi_callbacks for (self: MModule): HashMap[FFILanguage, Set[NitniCallback]] */
val* nitc__ffi_base___MModule___ffi_callbacks(val* self) {
val* var /* : HashMap[FFILanguage, Set[NitniCallback]] */;
val* var1 /* : HashMap[FFILanguage, Set[NitniCallback]] */;
var1 = self->attrs[COLOR_nitc__ffi_base__MModule___ffi_callbacks].val; /* _ffi_callbacks on <self:MModule> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _ffi_callbacks");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__ffi_base, 28);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
