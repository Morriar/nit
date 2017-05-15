#include "nitc.classes.0.h"
/* runtime class nitc__CallContext: nitc::CallContext (dead=false; need_corpse=false)*/
const struct class class_nitc__CallContext = {
0, /* box_kind */
{
(nitmethod_t)core___core__Object___init, /* pointer to nitni_utilities:CallContext:kernel#Object#init */
(nitmethod_t)core___core__Object____33d_61d, /* pointer to nitni_utilities:CallContext:kernel#Object#!= */
(nitmethod_t)core___core__Object___sys, /* pointer to nitni_utilities:CallContext:kernel#Object#sys */
(nitmethod_t)core___core__Object____61d_61d, /* pointer to nitni_utilities:CallContext:kernel#Object#== */
(nitmethod_t)core__abstract_text___Object___to_s, /* pointer to nitni_utilities:CallContext:abstract_text#Object#to_s */
(nitmethod_t)core___core__Object___is_same_instance, /* pointer to nitni_utilities:CallContext:kernel#Object#is_same_instance */
(nitmethod_t)core___core__Object___hash, /* pointer to nitni_utilities:CallContext:kernel#Object#hash */
(nitmethod_t)core__abstract_text___Object___inspect, /* pointer to nitni_utilities:CallContext:abstract_text#Object#inspect */
(nitmethod_t)core___core__Object___object_id, /* pointer to nitni_utilities:CallContext:kernel#Object#object_id */
(nitmethod_t)core__abstract_text___Object___class_name, /* pointer to nitni_utilities:CallContext:abstract_text#Object#class_name */
(nitmethod_t)core__abstract_text___Object___inspect_head, /* pointer to nitni_utilities:CallContext:abstract_text#Object#inspect_head */
(nitmethod_t)core__abstract_text___Object___native_class_name, /* pointer to nitni_utilities:CallContext:abstract_text#Object#native_class_name */
(nitmethod_t)core___core__Object___output, /* pointer to nitni_utilities:CallContext:kernel#Object#output */
(nitmethod_t)serialization___core__Object___serialization_hash, /* pointer to nitni_utilities:CallContext:serialization#Object#serialization_hash */
(nitmethod_t)serialization___core__Object___is_same_serialized, /* pointer to nitni_utilities:CallContext:serialization#Object#is_same_serialized */
(nitmethod_t)nitc___nitc__CallContext___name_mtype, /* pointer to nitni_utilities:CallContext:nitni_utilities#CallContext#name_mtype */
(nitmethod_t)nitc___nitc__CallContext___cast_to, /* pointer to nitni_utilities:CallContext:nitni_utilities#CallContext#cast_to */
(nitmethod_t)nitc___nitc__CallContext___cast_from, /* pointer to nitni_utilities:CallContext:nitni_utilities#CallContext#cast_from */
}
};
/* allocate CallContext */
val* NEW_nitc__CallContext(const struct type* type) {
val* self /* : CallContext */;
self = nit_alloc(sizeof(struct instance) + 0*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nitc__CallContext;
return self;
}
/* runtime class nitc__SignatureLength: nitc::SignatureLength (dead=false; need_corpse=false)*/
const struct class class_nitc__SignatureLength = {
0, /* box_kind */
{
(nitmethod_t)nitc___nitc__SignatureLength___core__kernel__Object__init, /* pointer to nitni_utilities:SignatureLength:nitni_utilities#SignatureLength#init */
(nitmethod_t)core___core__Object____33d_61d, /* pointer to nitni_utilities:SignatureLength:kernel#Object#!= */
(nitmethod_t)core___core__Object___sys, /* pointer to nitni_utilities:SignatureLength:kernel#Object#sys */
(nitmethod_t)core___core__Object____61d_61d, /* pointer to nitni_utilities:SignatureLength:kernel#Object#== */
(nitmethod_t)core__abstract_text___Object___to_s, /* pointer to nitni_utilities:SignatureLength:abstract_text#Object#to_s */
(nitmethod_t)core___core__Object___is_same_instance, /* pointer to nitni_utilities:SignatureLength:kernel#Object#is_same_instance */
(nitmethod_t)core___core__Object___hash, /* pointer to nitni_utilities:SignatureLength:kernel#Object#hash */
(nitmethod_t)core__abstract_text___Object___inspect, /* pointer to nitni_utilities:SignatureLength:abstract_text#Object#inspect */
(nitmethod_t)core___core__Object___object_id, /* pointer to nitni_utilities:SignatureLength:kernel#Object#object_id */
(nitmethod_t)core__abstract_text___Object___class_name, /* pointer to nitni_utilities:SignatureLength:abstract_text#Object#class_name */
(nitmethod_t)core__abstract_text___Object___inspect_head, /* pointer to nitni_utilities:SignatureLength:abstract_text#Object#inspect_head */
(nitmethod_t)core__abstract_text___Object___native_class_name, /* pointer to nitni_utilities:SignatureLength:abstract_text#Object#native_class_name */
(nitmethod_t)core___core__Object___output, /* pointer to nitni_utilities:SignatureLength:kernel#Object#output */
(nitmethod_t)serialization___core__Object___serialization_hash, /* pointer to nitni_utilities:SignatureLength:serialization#Object#serialization_hash */
(nitmethod_t)serialization___core__Object___is_same_serialized, /* pointer to nitni_utilities:SignatureLength:serialization#Object#is_same_serialized */
(nitmethod_t)nitc___nitc__SignatureLength___long, /* pointer to nitni_utilities:SignatureLength:nitni_utilities#SignatureLength#long */
(nitmethod_t)nitc___nitc__SignatureLength___long_61d, /* pointer to nitni_utilities:SignatureLength:nitni_utilities#SignatureLength#long= */
(nitmethod_t)core___core__Object___init, /* pointer to nitni_utilities:SignatureLength:kernel#Object#init */
}
};
/* allocate SignatureLength */
val* NEW_nitc__SignatureLength(const struct type* type) {
val* self /* : SignatureLength */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nitc__SignatureLength;
return self;
}
/* runtime class nitc__FFILanguageAssignationPhase: nitc::FFILanguageAssignationPhase (dead=false; need_corpse=false)*/
const struct class class_nitc__FFILanguageAssignationPhase = {
0, /* box_kind */
{
(nitmethod_t)nitc___nitc__Phase___core__kernel__Object__init, /* pointer to light_ffi_base:FFILanguageAssignationPhase:phase#Phase#init */
(nitmethod_t)core___core__Object____33d_61d, /* pointer to light_ffi_base:FFILanguageAssignationPhase:kernel#Object#!= */
(nitmethod_t)core___core__Object___sys, /* pointer to light_ffi_base:FFILanguageAssignationPhase:kernel#Object#sys */
(nitmethod_t)core___core__Object____61d_61d, /* pointer to light_ffi_base:FFILanguageAssignationPhase:kernel#Object#== */
(nitmethod_t)nitc___nitc__Phase___core__abstract_text__Object__to_s, /* pointer to light_ffi_base:FFILanguageAssignationPhase:phase#Phase#to_s */
(nitmethod_t)core___core__Object___is_same_instance, /* pointer to light_ffi_base:FFILanguageAssignationPhase:kernel#Object#is_same_instance */
(nitmethod_t)core___core__Object___hash, /* pointer to light_ffi_base:FFILanguageAssignationPhase:kernel#Object#hash */
(nitmethod_t)core__abstract_text___Object___inspect, /* pointer to light_ffi_base:FFILanguageAssignationPhase:abstract_text#Object#inspect */
(nitmethod_t)core___core__Object___object_id, /* pointer to light_ffi_base:FFILanguageAssignationPhase:kernel#Object#object_id */
(nitmethod_t)core__abstract_text___Object___class_name, /* pointer to light_ffi_base:FFILanguageAssignationPhase:abstract_text#Object#class_name */
(nitmethod_t)core__abstract_text___Object___inspect_head, /* pointer to light_ffi_base:FFILanguageAssignationPhase:abstract_text#Object#inspect_head */
(nitmethod_t)core__abstract_text___Object___native_class_name, /* pointer to light_ffi_base:FFILanguageAssignationPhase:abstract_text#Object#native_class_name */
(nitmethod_t)core___core__Object___output, /* pointer to light_ffi_base:FFILanguageAssignationPhase:kernel#Object#output */
(nitmethod_t)serialization___core__Object___serialization_hash, /* pointer to light_ffi_base:FFILanguageAssignationPhase:serialization#Object#serialization_hash */
(nitmethod_t)serialization___core__Object___is_same_serialized, /* pointer to light_ffi_base:FFILanguageAssignationPhase:serialization#Object#is_same_serialized */
(nitmethod_t)nitc___nitc__Phase___toolcontext_61d, /* pointer to light_ffi_base:FFILanguageAssignationPhase:phase#Phase#toolcontext= */
(nitmethod_t)nitc___nitc__Phase___depends_61d, /* pointer to light_ffi_base:FFILanguageAssignationPhase:phase#Phase#depends= */
(nitmethod_t)nitc___nitc__Phase___toolcontext, /* pointer to light_ffi_base:FFILanguageAssignationPhase:phase#Phase#toolcontext */
(nitmethod_t)nitc___nitc__Phase___in_hierarchy_61d, /* pointer to light_ffi_base:FFILanguageAssignationPhase:phase#Phase#in_hierarchy= */
(nitmethod_t)nitc___nitc__Phase___depends, /* pointer to light_ffi_base:FFILanguageAssignationPhase:phase#Phase#depends */
(nitmethod_t)nitc___nitc__Phase___disabled, /* pointer to light_ffi_base:FFILanguageAssignationPhase:phase#Phase#disabled */
(nitmethod_t)nitc__modelbuilder___Phase___process_mainmodule, /* pointer to light_ffi_base:FFILanguageAssignationPhase:modelbuilder#Phase#process_mainmodule */
(nitmethod_t)nitc___nitc__FFILanguageAssignationPhase___nitc__phase__Phase__process_nmodule, /* pointer to light_ffi_base:FFILanguageAssignationPhase:light_ffi_base#FFILanguageAssignationPhase#process_nmodule */
(nitmethod_t)nitc___nitc__FFILanguageAssignationPhase___nitc__phase__Phase__process_nclassdef, /* pointer to light_ffi_base:FFILanguageAssignationPhase:light_ffi_base#FFILanguageAssignationPhase#process_nclassdef */
(nitmethod_t)nitc___nitc__Phase___process_annotated_node, /* pointer to light_ffi_base:FFILanguageAssignationPhase:phase#Phase#process_annotated_node */
(nitmethod_t)nitc___nitc__FFILanguageAssignationPhase___nitc__phase__Phase__process_npropdef, /* pointer to light_ffi_base:FFILanguageAssignationPhase:light_ffi_base#FFILanguageAssignationPhase#process_npropdef */
(nitmethod_t)nitc___nitc__Phase___in_hierarchy, /* pointer to light_ffi_base:FFILanguageAssignationPhase:phase#Phase#in_hierarchy */
(nitmethod_t)nitc___nitc__Phase___disabled_61d, /* pointer to light_ffi_base:FFILanguageAssignationPhase:phase#Phase#disabled= */
(nitmethod_t)core___core__Object___init, /* pointer to light_ffi_base:FFILanguageAssignationPhase:kernel#Object#init */
(nitmethod_t)nitc___nitc__FFILanguageAssignationPhase___languages, /* pointer to light_ffi_base:FFILanguageAssignationPhase:light_ffi_base#FFILanguageAssignationPhase#languages */
(nitmethod_t)nitc___nitc__FFILanguageAssignationPhase___verify_foreign_code_on_node, /* pointer to light_ffi_base:FFILanguageAssignationPhase:light_ffi_base#FFILanguageAssignationPhase#verify_foreign_code_on_node */
(nitmethod_t)nitc__light_c___FFILanguageAssignationPhase___c_language, /* pointer to light_ffi_base:FFILanguageAssignationPhase:light_c#FFILanguageAssignationPhase#c_language */
}
};
/* allocate FFILanguageAssignationPhase */
val* NEW_nitc__FFILanguageAssignationPhase(const struct type* type) {
val* self /* : FFILanguageAssignationPhase */;
val* var /* : Array[FFILanguage] */;
val* var1 /* : CLanguage */;
val* var2 /* : CPPLanguage */;
val* var3 /* : ObjCLanguage */;
val* var4 /* : JavaLanguage */;
self = nit_alloc(sizeof(struct instance) + 9*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nitc__FFILanguageAssignationPhase;
self->attrs[COLOR_nitc__phase__Phase___disabled].s = 0; /* _disabled on <self:FFILanguageAssignationPhase exact> */
var = NEW_core__Array(&type_core__Array__nitc__FFILanguage);
{
core___core__Array___core__kernel__Object__init(var); /* Direct call array#Array#init on <var:Array[FFILanguage]>*/
}
self->attrs[COLOR_nitc__light_ffi_base__FFILanguageAssignationPhase___languages].val = var; /* _languages on <self:FFILanguageAssignationPhase exact> */
var1 = NEW_nitc__CLanguage(&type_nitc__CLanguage);
{
((void(*)(val* self, val* p0))(var1->class->vft[COLOR_nitc__light_ffi_base__FFILanguage__ffi_language_assignation_phase_61d]))(var1, self); /* ffi_language_assignation_phase= on <var1:CLanguage>*/
}
{
((void(*)(val* self))(var1->class->vft[COLOR_core__kernel__Object__init]))(var1); /* init on <var1:CLanguage>*/
}
self->attrs[COLOR_nitc__light_c__FFILanguageAssignationPhase___c_language].val = var1; /* _c_language on <self:FFILanguageAssignationPhase exact> */
var2 = NEW_nitc__CPPLanguage(&type_nitc__CPPLanguage);
{
((void(*)(val* self, val* p0))(var2->class->vft[COLOR_nitc__light_ffi_base__FFILanguage__ffi_language_assignation_phase_61d]))(var2, self); /* ffi_language_assignation_phase= on <var2:CPPLanguage>*/
}
{
((void(*)(val* self))(var2->class->vft[COLOR_core__kernel__Object__init]))(var2); /* init on <var2:CPPLanguage>*/
}
self->attrs[COLOR_nitc__cpp__FFILanguageAssignationPhase___cpp_language].val = var2; /* _cpp_language on <self:FFILanguageAssignationPhase exact> */
var3 = NEW_nitc__ObjCLanguage(&type_nitc__ObjCLanguage);
{
((void(*)(val* self, val* p0))(var3->class->vft[COLOR_nitc__light_ffi_base__FFILanguage__ffi_language_assignation_phase_61d]))(var3, self); /* ffi_language_assignation_phase= on <var3:ObjCLanguage>*/
}
{
((void(*)(val* self))(var3->class->vft[COLOR_core__kernel__Object__init]))(var3); /* init on <var3:ObjCLanguage>*/
}
self->attrs[COLOR_nitc__objc__FFILanguageAssignationPhase___objc_language].val = var3; /* _objc_language on <self:FFILanguageAssignationPhase exact> */
var4 = NEW_nitc__JavaLanguage(&type_nitc__JavaLanguage);
{
((void(*)(val* self, val* p0))(var4->class->vft[COLOR_nitc__light_ffi_base__FFILanguage__ffi_language_assignation_phase_61d]))(var4, self); /* ffi_language_assignation_phase= on <var4:JavaLanguage>*/
}
{
((void(*)(val* self))(var4->class->vft[COLOR_core__kernel__Object__init]))(var4); /* init on <var4:JavaLanguage>*/
}
self->attrs[COLOR_nitc__java__FFILanguageAssignationPhase___java_language].val = var4; /* _java_language on <self:FFILanguageAssignationPhase exact> */
return self;
}
/* runtime class nitc__FFILanguage: nitc::FFILanguage (dead=true; need_corpse=false)*/
/* allocate FFILanguage */
val* NEW_nitc__FFILanguage(const struct type* type) {
PRINT_ERROR("Runtime error: %s", "FFILanguage is DEAD");
PRINT_ERROR("\n");
fatal_exit(1);
}
/* runtime class nitc__ForeignType: nitc::ForeignType (dead=false; need_corpse=false)*/
const struct class class_nitc__ForeignType = {
0, /* box_kind */
{
(nitmethod_t)core___core__Object___init, /* pointer to light_ffi_base:ForeignType:kernel#Object#init */
(nitmethod_t)core___core__Object____33d_61d, /* pointer to light_ffi_base:ForeignType:kernel#Object#!= */
(nitmethod_t)core___core__Object___sys, /* pointer to light_ffi_base:ForeignType:kernel#Object#sys */
(nitmethod_t)core___core__Object____61d_61d, /* pointer to light_ffi_base:ForeignType:kernel#Object#== */
(nitmethod_t)core__abstract_text___Object___to_s, /* pointer to light_ffi_base:ForeignType:abstract_text#Object#to_s */
(nitmethod_t)core___core__Object___is_same_instance, /* pointer to light_ffi_base:ForeignType:kernel#Object#is_same_instance */
(nitmethod_t)core___core__Object___hash, /* pointer to light_ffi_base:ForeignType:kernel#Object#hash */
(nitmethod_t)core__abstract_text___Object___inspect, /* pointer to light_ffi_base:ForeignType:abstract_text#Object#inspect */
(nitmethod_t)core___core__Object___object_id, /* pointer to light_ffi_base:ForeignType:kernel#Object#object_id */
(nitmethod_t)core__abstract_text___Object___class_name, /* pointer to light_ffi_base:ForeignType:abstract_text#Object#class_name */
(nitmethod_t)core__abstract_text___Object___inspect_head, /* pointer to light_ffi_base:ForeignType:abstract_text#Object#inspect_head */
(nitmethod_t)core__abstract_text___Object___native_class_name, /* pointer to light_ffi_base:ForeignType:abstract_text#Object#native_class_name */
(nitmethod_t)core___core__Object___output, /* pointer to light_ffi_base:ForeignType:kernel#Object#output */
(nitmethod_t)serialization___core__Object___serialization_hash, /* pointer to light_ffi_base:ForeignType:serialization#Object#serialization_hash */
(nitmethod_t)serialization___core__Object___is_same_serialized, /* pointer to light_ffi_base:ForeignType:serialization#Object#is_same_serialized */
(nitmethod_t)nitc___nitc__ForeignType___ctype, /* pointer to light_ffi_base:ForeignType:light_ffi_base#ForeignType#ctype */
}
};
/* allocate ForeignType */
val* NEW_nitc__ForeignType(const struct type* type) {
val* self /* : ForeignType */;
self = nit_alloc(sizeof(struct instance) + 0*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nitc__ForeignType;
return self;
}
/* runtime class nitc__extern_classes__ExternClassesTypingPhaseAst: nitc::extern_classes::ExternClassesTypingPhaseAst (dead=false; need_corpse=false)*/
const struct class class_nitc__extern_classes__ExternClassesTypingPhaseAst = {
0, /* box_kind */
{
(nitmethod_t)nitc___nitc__Phase___core__kernel__Object__init, /* pointer to extern_classes:ExternClassesTypingPhaseAst:phase#Phase#init */
(nitmethod_t)core___core__Object____33d_61d, /* pointer to extern_classes:ExternClassesTypingPhaseAst:kernel#Object#!= */
(nitmethod_t)core___core__Object___sys, /* pointer to extern_classes:ExternClassesTypingPhaseAst:kernel#Object#sys */
(nitmethod_t)core___core__Object____61d_61d, /* pointer to extern_classes:ExternClassesTypingPhaseAst:kernel#Object#== */
(nitmethod_t)nitc___nitc__Phase___core__abstract_text__Object__to_s, /* pointer to extern_classes:ExternClassesTypingPhaseAst:phase#Phase#to_s */
(nitmethod_t)core___core__Object___is_same_instance, /* pointer to extern_classes:ExternClassesTypingPhaseAst:kernel#Object#is_same_instance */
(nitmethod_t)core___core__Object___hash, /* pointer to extern_classes:ExternClassesTypingPhaseAst:kernel#Object#hash */
(nitmethod_t)core__abstract_text___Object___inspect, /* pointer to extern_classes:ExternClassesTypingPhaseAst:abstract_text#Object#inspect */
(nitmethod_t)core___core__Object___object_id, /* pointer to extern_classes:ExternClassesTypingPhaseAst:kernel#Object#object_id */
(nitmethod_t)core__abstract_text___Object___class_name, /* pointer to extern_classes:ExternClassesTypingPhaseAst:abstract_text#Object#class_name */
(nitmethod_t)core__abstract_text___Object___inspect_head, /* pointer to extern_classes:ExternClassesTypingPhaseAst:abstract_text#Object#inspect_head */
(nitmethod_t)core__abstract_text___Object___native_class_name, /* pointer to extern_classes:ExternClassesTypingPhaseAst:abstract_text#Object#native_class_name */
(nitmethod_t)core___core__Object___output, /* pointer to extern_classes:ExternClassesTypingPhaseAst:kernel#Object#output */
(nitmethod_t)serialization___core__Object___serialization_hash, /* pointer to extern_classes:ExternClassesTypingPhaseAst:serialization#Object#serialization_hash */
(nitmethod_t)serialization___core__Object___is_same_serialized, /* pointer to extern_classes:ExternClassesTypingPhaseAst:serialization#Object#is_same_serialized */
(nitmethod_t)nitc___nitc__Phase___toolcontext_61d, /* pointer to extern_classes:ExternClassesTypingPhaseAst:phase#Phase#toolcontext= */
(nitmethod_t)nitc___nitc__Phase___depends_61d, /* pointer to extern_classes:ExternClassesTypingPhaseAst:phase#Phase#depends= */
(nitmethod_t)nitc___nitc__Phase___toolcontext, /* pointer to extern_classes:ExternClassesTypingPhaseAst:phase#Phase#toolcontext */
(nitmethod_t)nitc___nitc__Phase___in_hierarchy_61d, /* pointer to extern_classes:ExternClassesTypingPhaseAst:phase#Phase#in_hierarchy= */
(nitmethod_t)nitc___nitc__Phase___depends, /* pointer to extern_classes:ExternClassesTypingPhaseAst:phase#Phase#depends */
(nitmethod_t)nitc___nitc__Phase___disabled, /* pointer to extern_classes:ExternClassesTypingPhaseAst:phase#Phase#disabled */
(nitmethod_t)nitc__modelbuilder___Phase___process_mainmodule, /* pointer to extern_classes:ExternClassesTypingPhaseAst:modelbuilder#Phase#process_mainmodule */
(nitmethod_t)nitc___nitc__Phase___process_nmodule, /* pointer to extern_classes:ExternClassesTypingPhaseAst:phase#Phase#process_nmodule */
(nitmethod_t)nitc__extern_classes___nitc__extern_classes__ExternClassesTypingPhaseAst___nitc__phase__Phase__process_nclassdef, /* pointer to extern_classes:ExternClassesTypingPhaseAst:extern_classes#ExternClassesTypingPhaseAst#process_nclassdef */
(nitmethod_t)nitc___nitc__Phase___process_annotated_node, /* pointer to extern_classes:ExternClassesTypingPhaseAst:phase#Phase#process_annotated_node */
(nitmethod_t)nitc___nitc__Phase___process_npropdef, /* pointer to extern_classes:ExternClassesTypingPhaseAst:phase#Phase#process_npropdef */
(nitmethod_t)nitc___nitc__Phase___in_hierarchy, /* pointer to extern_classes:ExternClassesTypingPhaseAst:phase#Phase#in_hierarchy */
(nitmethod_t)nitc___nitc__Phase___disabled_61d, /* pointer to extern_classes:ExternClassesTypingPhaseAst:phase#Phase#disabled= */
(nitmethod_t)core___core__Object___init, /* pointer to extern_classes:ExternClassesTypingPhaseAst:kernel#Object#init */
}
};
/* allocate ExternClassesTypingPhaseAst */
val* NEW_nitc__extern_classes__ExternClassesTypingPhaseAst(const struct type* type) {
val* self /* : ExternClassesTypingPhaseAst */;
self = nit_alloc(sizeof(struct instance) + 4*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nitc__extern_classes__ExternClassesTypingPhaseAst;
self->attrs[COLOR_nitc__phase__Phase___disabled].s = 0; /* _disabled on <self:ExternClassesTypingPhaseAst exact> */
return self;
}
/* runtime class nitc__extern_classes__ExternClassesTypingPhaseModel: nitc::extern_classes::ExternClassesTypingPhaseModel (dead=false; need_corpse=false)*/
const struct class class_nitc__extern_classes__ExternClassesTypingPhaseModel = {
0, /* box_kind */
{
(nitmethod_t)nitc___nitc__Phase___core__kernel__Object__init, /* pointer to extern_classes:ExternClassesTypingPhaseModel:phase#Phase#init */
(nitmethod_t)core___core__Object____33d_61d, /* pointer to extern_classes:ExternClassesTypingPhaseModel:kernel#Object#!= */
(nitmethod_t)core___core__Object___sys, /* pointer to extern_classes:ExternClassesTypingPhaseModel:kernel#Object#sys */
(nitmethod_t)core___core__Object____61d_61d, /* pointer to extern_classes:ExternClassesTypingPhaseModel:kernel#Object#== */
(nitmethod_t)nitc___nitc__Phase___core__abstract_text__Object__to_s, /* pointer to extern_classes:ExternClassesTypingPhaseModel:phase#Phase#to_s */
(nitmethod_t)core___core__Object___is_same_instance, /* pointer to extern_classes:ExternClassesTypingPhaseModel:kernel#Object#is_same_instance */
(nitmethod_t)core___core__Object___hash, /* pointer to extern_classes:ExternClassesTypingPhaseModel:kernel#Object#hash */
(nitmethod_t)core__abstract_text___Object___inspect, /* pointer to extern_classes:ExternClassesTypingPhaseModel:abstract_text#Object#inspect */
(nitmethod_t)core___core__Object___object_id, /* pointer to extern_classes:ExternClassesTypingPhaseModel:kernel#Object#object_id */
(nitmethod_t)core__abstract_text___Object___class_name, /* pointer to extern_classes:ExternClassesTypingPhaseModel:abstract_text#Object#class_name */
(nitmethod_t)core__abstract_text___Object___inspect_head, /* pointer to extern_classes:ExternClassesTypingPhaseModel:abstract_text#Object#inspect_head */
(nitmethod_t)core__abstract_text___Object___native_class_name, /* pointer to extern_classes:ExternClassesTypingPhaseModel:abstract_text#Object#native_class_name */
(nitmethod_t)core___core__Object___output, /* pointer to extern_classes:ExternClassesTypingPhaseModel:kernel#Object#output */
(nitmethod_t)serialization___core__Object___serialization_hash, /* pointer to extern_classes:ExternClassesTypingPhaseModel:serialization#Object#serialization_hash */
(nitmethod_t)serialization___core__Object___is_same_serialized, /* pointer to extern_classes:ExternClassesTypingPhaseModel:serialization#Object#is_same_serialized */
(nitmethod_t)nitc___nitc__Phase___toolcontext_61d, /* pointer to extern_classes:ExternClassesTypingPhaseModel:phase#Phase#toolcontext= */
(nitmethod_t)nitc___nitc__Phase___depends_61d, /* pointer to extern_classes:ExternClassesTypingPhaseModel:phase#Phase#depends= */
(nitmethod_t)nitc___nitc__Phase___toolcontext, /* pointer to extern_classes:ExternClassesTypingPhaseModel:phase#Phase#toolcontext */
(nitmethod_t)nitc___nitc__Phase___in_hierarchy_61d, /* pointer to extern_classes:ExternClassesTypingPhaseModel:phase#Phase#in_hierarchy= */
(nitmethod_t)nitc___nitc__Phase___depends, /* pointer to extern_classes:ExternClassesTypingPhaseModel:phase#Phase#depends */
(nitmethod_t)nitc___nitc__Phase___disabled, /* pointer to extern_classes:ExternClassesTypingPhaseModel:phase#Phase#disabled */
(nitmethod_t)nitc__modelbuilder___Phase___process_mainmodule, /* pointer to extern_classes:ExternClassesTypingPhaseModel:modelbuilder#Phase#process_mainmodule */
(nitmethod_t)nitc___nitc__Phase___process_nmodule, /* pointer to extern_classes:ExternClassesTypingPhaseModel:phase#Phase#process_nmodule */
(nitmethod_t)nitc__extern_classes___nitc__extern_classes__ExternClassesTypingPhaseModel___nitc__phase__Phase__process_nclassdef, /* pointer to extern_classes:ExternClassesTypingPhaseModel:extern_classes#ExternClassesTypingPhaseModel#process_nclassdef */
(nitmethod_t)nitc___nitc__Phase___process_annotated_node, /* pointer to extern_classes:ExternClassesTypingPhaseModel:phase#Phase#process_annotated_node */
(nitmethod_t)nitc___nitc__Phase___process_npropdef, /* pointer to extern_classes:ExternClassesTypingPhaseModel:phase#Phase#process_npropdef */
(nitmethod_t)nitc___nitc__Phase___in_hierarchy, /* pointer to extern_classes:ExternClassesTypingPhaseModel:phase#Phase#in_hierarchy */
(nitmethod_t)nitc___nitc__Phase___disabled_61d, /* pointer to extern_classes:ExternClassesTypingPhaseModel:phase#Phase#disabled= */
(nitmethod_t)core___core__Object___init, /* pointer to extern_classes:ExternClassesTypingPhaseModel:kernel#Object#init */
}
};
/* allocate ExternClassesTypingPhaseModel */
val* NEW_nitc__extern_classes__ExternClassesTypingPhaseModel(const struct type* type) {
val* self /* : ExternClassesTypingPhaseModel */;
self = nit_alloc(sizeof(struct instance) + 4*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nitc__extern_classes__ExternClassesTypingPhaseModel;
self->attrs[COLOR_nitc__phase__Phase___disabled].s = 0; /* _disabled on <self:ExternClassesTypingPhaseModel exact> */
return self;
}
/* runtime class nitc__CLanguage: nitc::CLanguage (dead=false; need_corpse=false)*/
const struct class class_nitc__CLanguage = {
0, /* box_kind */
{
(nitmethod_t)nitc___nitc__FFILanguage___core__kernel__Object__init, /* pointer to light_c:CLanguage:light_ffi_base#FFILanguage#init */
(nitmethod_t)core___core__Object____33d_61d, /* pointer to light_c:CLanguage:kernel#Object#!= */
(nitmethod_t)core___core__Object___sys, /* pointer to light_c:CLanguage:kernel#Object#sys */
(nitmethod_t)core___core__Object____61d_61d, /* pointer to light_c:CLanguage:kernel#Object#== */
(nitmethod_t)core__abstract_text___Object___to_s, /* pointer to light_c:CLanguage:abstract_text#Object#to_s */
(nitmethod_t)core___core__Object___is_same_instance, /* pointer to light_c:CLanguage:kernel#Object#is_same_instance */
(nitmethod_t)core___core__Object___hash, /* pointer to light_c:CLanguage:kernel#Object#hash */
(nitmethod_t)core__abstract_text___Object___inspect, /* pointer to light_c:CLanguage:abstract_text#Object#inspect */
(nitmethod_t)core___core__Object___object_id, /* pointer to light_c:CLanguage:kernel#Object#object_id */
(nitmethod_t)core__abstract_text___Object___class_name, /* pointer to light_c:CLanguage:abstract_text#Object#class_name */
(nitmethod_t)core__abstract_text___Object___inspect_head, /* pointer to light_c:CLanguage:abstract_text#Object#inspect_head */
(nitmethod_t)core__abstract_text___Object___native_class_name, /* pointer to light_c:CLanguage:abstract_text#Object#native_class_name */
(nitmethod_t)core___core__Object___output, /* pointer to light_c:CLanguage:kernel#Object#output */
(nitmethod_t)serialization___core__Object___serialization_hash, /* pointer to light_c:CLanguage:serialization#Object#serialization_hash */
(nitmethod_t)serialization___core__Object___is_same_serialized, /* pointer to light_c:CLanguage:serialization#Object#is_same_serialized */
(nitmethod_t)nitc___nitc__FFILanguage___ffi_language_assignation_phase_61d, /* pointer to light_c:CLanguage:light_ffi_base#FFILanguage#ffi_language_assignation_phase= */
(nitmethod_t)nitc___nitc__FFILanguage___ffi_language_assignation_phase, /* pointer to light_c:CLanguage:light_ffi_base#FFILanguage#ffi_language_assignation_phase */
(nitmethod_t)nitc___nitc__CLanguage___nitc__light_ffi_base__FFILanguage__get_ftype, /* pointer to light_c:CLanguage:light_c#CLanguage#get_ftype */
(nitmethod_t)nitc___nitc__CLanguage___nitc__light_ffi_base__FFILanguage__identify_language, /* pointer to light_c:CLanguage:light_c#CLanguage#identify_language */
(nitmethod_t)nitc___nitc__CLanguage___nitc__light_ffi_base__FFILanguage__compile_module_block, /* pointer to light_c:CLanguage:light_c#CLanguage#compile_module_block */
(nitmethod_t)nitc___nitc__CLanguage___nitc__light_ffi_base__FFILanguage__compile_extern_class, /* pointer to light_c:CLanguage:light_c#CLanguage#compile_extern_class */
(nitmethod_t)nitc__c___CLanguage___nitc__ffi_base__FFILanguage__compile_callback, /* pointer to light_c:CLanguage:c#CLanguage#compile_callback */
(nitmethod_t)nitc___nitc__FFILanguage___compile_to_files, /* pointer to light_c:CLanguage:light_ffi_base#FFILanguage#compile_to_files */
(nitmethod_t)nitc___nitc__CLanguage___nitc__light_ffi_base__FFILanguage__compile_extern_method, /* pointer to light_c:CLanguage:light_c#CLanguage#compile_extern_method */
(nitmethod_t)core___core__Object___init, /* pointer to light_c:CLanguage:kernel#Object#init */
}
};
/* allocate CLanguage */
val* NEW_nitc__CLanguage(const struct type* type) {
val* self /* : CLanguage */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nitc__CLanguage;
return self;
}
/* runtime class nitc__ForeignCType: nitc::ForeignCType (dead=false; need_corpse=false)*/
const struct class class_nitc__ForeignCType = {
0, /* box_kind */
{
(nitmethod_t)nitc___nitc__ForeignCType___core__kernel__Object__init, /* pointer to light_c:ForeignCType:light_c#ForeignCType#init */
(nitmethod_t)core___core__Object____33d_61d, /* pointer to light_c:ForeignCType:kernel#Object#!= */
(nitmethod_t)core___core__Object___sys, /* pointer to light_c:ForeignCType:kernel#Object#sys */
(nitmethod_t)core___core__Object____61d_61d, /* pointer to light_c:ForeignCType:kernel#Object#== */
(nitmethod_t)core__abstract_text___Object___to_s, /* pointer to light_c:ForeignCType:abstract_text#Object#to_s */
(nitmethod_t)core___core__Object___is_same_instance, /* pointer to light_c:ForeignCType:kernel#Object#is_same_instance */
(nitmethod_t)core___core__Object___hash, /* pointer to light_c:ForeignCType:kernel#Object#hash */
(nitmethod_t)core__abstract_text___Object___inspect, /* pointer to light_c:ForeignCType:abstract_text#Object#inspect */
(nitmethod_t)core___core__Object___object_id, /* pointer to light_c:ForeignCType:kernel#Object#object_id */
(nitmethod_t)core__abstract_text___Object___class_name, /* pointer to light_c:ForeignCType:abstract_text#Object#class_name */
(nitmethod_t)core__abstract_text___Object___inspect_head, /* pointer to light_c:ForeignCType:abstract_text#Object#inspect_head */
(nitmethod_t)core__abstract_text___Object___native_class_name, /* pointer to light_c:ForeignCType:abstract_text#Object#native_class_name */
(nitmethod_t)core___core__Object___output, /* pointer to light_c:ForeignCType:kernel#Object#output */
(nitmethod_t)serialization___core__Object___serialization_hash, /* pointer to light_c:ForeignCType:serialization#Object#serialization_hash */
(nitmethod_t)serialization___core__Object___is_same_serialized, /* pointer to light_c:ForeignCType:serialization#Object#is_same_serialized */
(nitmethod_t)nitc___nitc__ForeignCType___nitc__light_ffi_base__ForeignType__ctype, /* pointer to light_c:ForeignCType:light_c#ForeignCType#ctype */
(nitmethod_t)nitc___nitc__ForeignCType___ctype_61d, /* pointer to light_c:ForeignCType:light_c#ForeignCType#ctype= */
(nitmethod_t)core___core__Object___init, /* pointer to light_c:ForeignCType:kernel#Object#init */
}
};
/* allocate ForeignCType */
val* NEW_nitc__ForeignCType(const struct type* type) {
val* self /* : ForeignCType */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nitc__ForeignCType;
return self;
}
/* runtime class nitc__ToCCallContext: nitc::ToCCallContext (dead=true; need_corpse=false)*/
/* allocate ToCCallContext */
val* NEW_nitc__ToCCallContext(const struct type* type) {
PRINT_ERROR("Runtime error: %s", "ToCCallContext is DEAD");
PRINT_ERROR("\n");
fatal_exit(1);
}
/* runtime class nitc__FromCCallContext: nitc::FromCCallContext (dead=false; need_corpse=false)*/
const struct class class_nitc__FromCCallContext = {
0, /* box_kind */
{
(nitmethod_t)core___core__Object___init, /* pointer to light_c:FromCCallContext:kernel#Object#init */
(nitmethod_t)core___core__Object____33d_61d, /* pointer to light_c:FromCCallContext:kernel#Object#!= */
(nitmethod_t)core___core__Object___sys, /* pointer to light_c:FromCCallContext:kernel#Object#sys */
(nitmethod_t)core___core__Object____61d_61d, /* pointer to light_c:FromCCallContext:kernel#Object#== */
(nitmethod_t)core__abstract_text___Object___to_s, /* pointer to light_c:FromCCallContext:abstract_text#Object#to_s */
(nitmethod_t)core___core__Object___is_same_instance, /* pointer to light_c:FromCCallContext:kernel#Object#is_same_instance */
(nitmethod_t)core___core__Object___hash, /* pointer to light_c:FromCCallContext:kernel#Object#hash */
(nitmethod_t)core__abstract_text___Object___inspect, /* pointer to light_c:FromCCallContext:abstract_text#Object#inspect */
(nitmethod_t)core___core__Object___object_id, /* pointer to light_c:FromCCallContext:kernel#Object#object_id */
(nitmethod_t)core__abstract_text___Object___class_name, /* pointer to light_c:FromCCallContext:abstract_text#Object#class_name */
(nitmethod_t)core__abstract_text___Object___inspect_head, /* pointer to light_c:FromCCallContext:abstract_text#Object#inspect_head */
(nitmethod_t)core__abstract_text___Object___native_class_name, /* pointer to light_c:FromCCallContext:abstract_text#Object#native_class_name */
(nitmethod_t)core___core__Object___output, /* pointer to light_c:FromCCallContext:kernel#Object#output */
(nitmethod_t)serialization___core__Object___serialization_hash, /* pointer to light_c:FromCCallContext:serialization#Object#serialization_hash */
(nitmethod_t)serialization___core__Object___is_same_serialized, /* pointer to light_c:FromCCallContext:serialization#Object#is_same_serialized */
(nitmethod_t)nitc___nitc__FromCCallContext___nitc__nitni_utilities__CallContext__name_mtype, /* pointer to light_c:FromCCallContext:light_c#FromCCallContext#name_mtype */
(nitmethod_t)nitc___nitc__CallContext___cast_to, /* pointer to light_c:FromCCallContext:nitni_utilities#CallContext#cast_to */
(nitmethod_t)nitc___nitc__CallContext___cast_from, /* pointer to light_c:FromCCallContext:nitni_utilities#CallContext#cast_from */
}
};
/* allocate FromCCallContext */
val* NEW_nitc__FromCCallContext(const struct type* type) {
val* self /* : FromCCallContext */;
self = nit_alloc(sizeof(struct instance) + 0*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nitc__FromCCallContext;
return self;
}
/* runtime class nitc__ExternCFunction: nitc::ExternCFunction (dead=false; need_corpse=false)*/
const struct class class_nitc__ExternCFunction = {
0, /* box_kind */
{
(nitmethod_t)nitc___nitc__CFunction___core__kernel__Object__init, /* pointer to light_c:ExternCFunction:c_tools#CFunction#init */
(nitmethod_t)core___core__Object____33d_61d, /* pointer to light_c:ExternCFunction:kernel#Object#!= */
(nitmethod_t)core___core__Object___sys, /* pointer to light_c:ExternCFunction:kernel#Object#sys */
(nitmethod_t)core___core__Object____61d_61d, /* pointer to light_c:ExternCFunction:kernel#Object#== */
(nitmethod_t)core__abstract_text___Object___to_s, /* pointer to light_c:ExternCFunction:abstract_text#Object#to_s */
(nitmethod_t)core___core__Object___is_same_instance, /* pointer to light_c:ExternCFunction:kernel#Object#is_same_instance */
(nitmethod_t)core___core__Object___hash, /* pointer to light_c:ExternCFunction:kernel#Object#hash */
(nitmethod_t)core__abstract_text___Object___inspect, /* pointer to light_c:ExternCFunction:abstract_text#Object#inspect */
(nitmethod_t)core___core__Object___object_id, /* pointer to light_c:ExternCFunction:kernel#Object#object_id */
(nitmethod_t)core__abstract_text___Object___class_name, /* pointer to light_c:ExternCFunction:abstract_text#Object#class_name */
(nitmethod_t)core__abstract_text___Object___inspect_head, /* pointer to light_c:ExternCFunction:abstract_text#Object#inspect_head */
(nitmethod_t)core__abstract_text___Object___native_class_name, /* pointer to light_c:ExternCFunction:abstract_text#Object#native_class_name */
(nitmethod_t)core___core__Object___output, /* pointer to light_c:ExternCFunction:kernel#Object#output */
(nitmethod_t)serialization___core__Object___serialization_hash, /* pointer to light_c:ExternCFunction:serialization#Object#serialization_hash */
(nitmethod_t)serialization___core__Object___is_same_serialized, /* pointer to light_c:ExternCFunction:serialization#Object#is_same_serialized */
(nitmethod_t)nitc___nitc__CFunction___signature_61d, /* pointer to light_c:ExternCFunction:c_tools#CFunction#signature= */
(nitmethod_t)nitc___nitc__CFunction___exprs, /* pointer to light_c:ExternCFunction:c_tools#CFunction#exprs */
(nitmethod_t)nitc___nitc__CFunction___decls, /* pointer to light_c:ExternCFunction:c_tools#CFunction#decls */
(nitmethod_t)nitc___nitc__CFunction___to_writer, /* pointer to light_c:ExternCFunction:c_tools#CFunction#to_writer */
(nitmethod_t)nitc___nitc__CFunction___signature, /* pointer to light_c:ExternCFunction:c_tools#CFunction#signature */
(nitmethod_t)core___core__Object___init, /* pointer to light_c:ExternCFunction:kernel#Object#init */
(nitmethod_t)nitc___nitc__ExternCFunction___init, /* pointer to light_c:ExternCFunction:light_c#ExternCFunction#init */
(nitmethod_t)nitc___nitc__ExternCFunction___method_61d, /* pointer to light_c:ExternCFunction:light_c#ExternCFunction#method= */
}
};
/* allocate ExternCFunction */
val* NEW_nitc__ExternCFunction(const struct type* type) {
val* self /* : ExternCFunction */;
val* var /* : Template */;
val* var1 /* : Template */;
self = nit_alloc(sizeof(struct instance) + 4*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nitc__ExternCFunction;
var = NEW_template__Template(&type_template__Template);
{
((void(*)(val* self))(var->class->vft[COLOR_core__kernel__Object__init]))(var); /* init on <var:Template>*/
}
self->attrs[COLOR_nitc__c_tools__CFunction___decls].val = var; /* _decls on <self:ExternCFunction exact> */
var1 = NEW_template__Template(&type_template__Template);
{
((void(*)(val* self))(var1->class->vft[COLOR_core__kernel__Object__init]))(var1); /* init on <var1:Template>*/
}
self->attrs[COLOR_nitc__c_tools__CFunction___exprs].val = var1; /* _exprs on <self:ExternCFunction exact> */
return self;
}
/* runtime class nitc__VerifyNitniCallbacksPhase: nitc::VerifyNitniCallbacksPhase (dead=false; need_corpse=false)*/
const struct class class_nitc__VerifyNitniCallbacksPhase = {
0, /* box_kind */
{
(nitmethod_t)nitc___nitc__Phase___core__kernel__Object__init, /* pointer to nitni_callbacks:VerifyNitniCallbacksPhase:phase#Phase#init */
(nitmethod_t)core___core__Object____33d_61d, /* pointer to nitni_callbacks:VerifyNitniCallbacksPhase:kernel#Object#!= */
(nitmethod_t)core___core__Object___sys, /* pointer to nitni_callbacks:VerifyNitniCallbacksPhase:kernel#Object#sys */
(nitmethod_t)core___core__Object____61d_61d, /* pointer to nitni_callbacks:VerifyNitniCallbacksPhase:kernel#Object#== */
(nitmethod_t)nitc___nitc__Phase___core__abstract_text__Object__to_s, /* pointer to nitni_callbacks:VerifyNitniCallbacksPhase:phase#Phase#to_s */
(nitmethod_t)core___core__Object___is_same_instance, /* pointer to nitni_callbacks:VerifyNitniCallbacksPhase:kernel#Object#is_same_instance */
(nitmethod_t)core___core__Object___hash, /* pointer to nitni_callbacks:VerifyNitniCallbacksPhase:kernel#Object#hash */
(nitmethod_t)core__abstract_text___Object___inspect, /* pointer to nitni_callbacks:VerifyNitniCallbacksPhase:abstract_text#Object#inspect */
(nitmethod_t)core___core__Object___object_id, /* pointer to nitni_callbacks:VerifyNitniCallbacksPhase:kernel#Object#object_id */
(nitmethod_t)core__abstract_text___Object___class_name, /* pointer to nitni_callbacks:VerifyNitniCallbacksPhase:abstract_text#Object#class_name */
(nitmethod_t)core__abstract_text___Object___inspect_head, /* pointer to nitni_callbacks:VerifyNitniCallbacksPhase:abstract_text#Object#inspect_head */
(nitmethod_t)core__abstract_text___Object___native_class_name, /* pointer to nitni_callbacks:VerifyNitniCallbacksPhase:abstract_text#Object#native_class_name */
(nitmethod_t)core___core__Object___output, /* pointer to nitni_callbacks:VerifyNitniCallbacksPhase:kernel#Object#output */
(nitmethod_t)serialization___core__Object___serialization_hash, /* pointer to nitni_callbacks:VerifyNitniCallbacksPhase:serialization#Object#serialization_hash */
(nitmethod_t)serialization___core__Object___is_same_serialized, /* pointer to nitni_callbacks:VerifyNitniCallbacksPhase:serialization#Object#is_same_serialized */
(nitmethod_t)nitc___nitc__Phase___toolcontext_61d, /* pointer to nitni_callbacks:VerifyNitniCallbacksPhase:phase#Phase#toolcontext= */
(nitmethod_t)nitc___nitc__Phase___depends_61d, /* pointer to nitni_callbacks:VerifyNitniCallbacksPhase:phase#Phase#depends= */
(nitmethod_t)nitc___nitc__Phase___toolcontext, /* pointer to nitni_callbacks:VerifyNitniCallbacksPhase:phase#Phase#toolcontext */
(nitmethod_t)nitc___nitc__Phase___in_hierarchy_61d, /* pointer to nitni_callbacks:VerifyNitniCallbacksPhase:phase#Phase#in_hierarchy= */
(nitmethod_t)nitc___nitc__Phase___depends, /* pointer to nitni_callbacks:VerifyNitniCallbacksPhase:phase#Phase#depends */
(nitmethod_t)nitc___nitc__Phase___disabled, /* pointer to nitni_callbacks:VerifyNitniCallbacksPhase:phase#Phase#disabled */
(nitmethod_t)nitc__modelbuilder___Phase___process_mainmodule, /* pointer to nitni_callbacks:VerifyNitniCallbacksPhase:modelbuilder#Phase#process_mainmodule */
(nitmethod_t)nitc___nitc__Phase___process_nmodule, /* pointer to nitni_callbacks:VerifyNitniCallbacksPhase:phase#Phase#process_nmodule */
(nitmethod_t)nitc___nitc__Phase___process_nclassdef, /* pointer to nitni_callbacks:VerifyNitniCallbacksPhase:phase#Phase#process_nclassdef */
(nitmethod_t)nitc___nitc__Phase___process_annotated_node, /* pointer to nitni_callbacks:VerifyNitniCallbacksPhase:phase#Phase#process_annotated_node */
(nitmethod_t)nitc__ffi___VerifyNitniCallbacksPhase___nitc__phase__Phase__process_npropdef, /* pointer to nitni_callbacks:VerifyNitniCallbacksPhase:ffi#VerifyNitniCallbacksPhase#process_npropdef */
(nitmethod_t)nitc___nitc__Phase___in_hierarchy, /* pointer to nitni_callbacks:VerifyNitniCallbacksPhase:phase#Phase#in_hierarchy */
(nitmethod_t)nitc___nitc__Phase___disabled_61d, /* pointer to nitni_callbacks:VerifyNitniCallbacksPhase:phase#Phase#disabled= */
(nitmethod_t)core___core__Object___init, /* pointer to nitni_callbacks:VerifyNitniCallbacksPhase:kernel#Object#init */
(nitmethod_t)nitc___nitc__VerifyNitniCallbacksPhase___nitc__phase__Phase__process_npropdef, /* pointer to nitni_callbacks:VerifyNitniCallbacksPhase:nitni_callbacks#VerifyNitniCallbacksPhase#process_npropdef */
}
};
/* allocate VerifyNitniCallbacksPhase */
val* NEW_nitc__VerifyNitniCallbacksPhase(const struct type* type) {
val* self /* : VerifyNitniCallbacksPhase */;
self = nit_alloc(sizeof(struct instance) + 4*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nitc__VerifyNitniCallbacksPhase;
self->attrs[COLOR_nitc__phase__Phase___disabled].s = 0; /* _disabled on <self:VerifyNitniCallbacksPhase exact> */
return self;
}
/* runtime class nitc__ForeignCallbackSet: nitc::ForeignCallbackSet (dead=false; need_corpse=false)*/
const struct class class_nitc__ForeignCallbackSet = {
0, /* box_kind */
{
(nitmethod_t)core___core__Object___init, /* pointer to nitni_callbacks:ForeignCallbackSet:kernel#Object#init */
(nitmethod_t)core___core__Object____33d_61d, /* pointer to nitni_callbacks:ForeignCallbackSet:kernel#Object#!= */
(nitmethod_t)core___core__Object___sys, /* pointer to nitni_callbacks:ForeignCallbackSet:kernel#Object#sys */
(nitmethod_t)core___core__Object____61d_61d, /* pointer to nitni_callbacks:ForeignCallbackSet:kernel#Object#== */
(nitmethod_t)core__abstract_text___Object___to_s, /* pointer to nitni_callbacks:ForeignCallbackSet:abstract_text#Object#to_s */
(nitmethod_t)core___core__Object___is_same_instance, /* pointer to nitni_callbacks:ForeignCallbackSet:kernel#Object#is_same_instance */
(nitmethod_t)core___core__Object___hash, /* pointer to nitni_callbacks:ForeignCallbackSet:kernel#Object#hash */
(nitmethod_t)core__abstract_text___Object___inspect, /* pointer to nitni_callbacks:ForeignCallbackSet:abstract_text#Object#inspect */
(nitmethod_t)core___core__Object___object_id, /* pointer to nitni_callbacks:ForeignCallbackSet:kernel#Object#object_id */
(nitmethod_t)core__abstract_text___Object___class_name, /* pointer to nitni_callbacks:ForeignCallbackSet:abstract_text#Object#class_name */
(nitmethod_t)core__abstract_text___Object___inspect_head, /* pointer to nitni_callbacks:ForeignCallbackSet:abstract_text#Object#inspect_head */
(nitmethod_t)core__abstract_text___Object___native_class_name, /* pointer to nitni_callbacks:ForeignCallbackSet:abstract_text#Object#native_class_name */
(nitmethod_t)core___core__Object___output, /* pointer to nitni_callbacks:ForeignCallbackSet:kernel#Object#output */
(nitmethod_t)serialization___core__Object___serialization_hash, /* pointer to nitni_callbacks:ForeignCallbackSet:serialization#Object#serialization_hash */
(nitmethod_t)serialization___core__Object___is_same_serialized, /* pointer to nitni_callbacks:ForeignCallbackSet:serialization#Object#is_same_serialized */
(nitmethod_t)nitc___nitc__ForeignCallbackSet___all, /* pointer to nitni_callbacks:ForeignCallbackSet:nitni_callbacks#ForeignCallbackSet#all */
(nitmethod_t)nitc___nitc__ForeignCallbackSet___all_cached, /* pointer to nitni_callbacks:ForeignCallbackSet:nitni_callbacks#ForeignCallbackSet#all_cached */
(nitmethod_t)nitc___nitc__ForeignCallbackSet___callbacks, /* pointer to nitni_callbacks:ForeignCallbackSet:nitni_callbacks#ForeignCallbackSet#callbacks */
(nitmethod_t)nitc___nitc__ForeignCallbackSet___supers, /* pointer to nitni_callbacks:ForeignCallbackSet:nitni_callbacks#ForeignCallbackSet#supers */
(nitmethod_t)nitc___nitc__ForeignCallbackSet___types, /* pointer to nitni_callbacks:ForeignCallbackSet:nitni_callbacks#ForeignCallbackSet#types */
(nitmethod_t)nitc___nitc__ForeignCallbackSet___casts, /* pointer to nitni_callbacks:ForeignCallbackSet:nitni_callbacks#ForeignCallbackSet#casts */
(nitmethod_t)nitc___nitc__ForeignCallbackSet___all_cached_61d, /* pointer to nitni_callbacks:ForeignCallbackSet:nitni_callbacks#ForeignCallbackSet#all_cached= */
(nitmethod_t)nitc___nitc__ForeignCallbackSet___join, /* pointer to nitni_callbacks:ForeignCallbackSet:nitni_callbacks#ForeignCallbackSet#join */
}
};
/* allocate ForeignCallbackSet */
val* NEW_nitc__ForeignCallbackSet(const struct type* type) {
val* self /* : ForeignCallbackSet */;
val* var /* : HashSet[MExplicitCall] */;
val* var1 /* : HashSet[MExplicitSuper] */;
val* var2 /* : HashSet[MType] */;
val* var3 /* : HashSet[MExplicitCast] */;
self = nit_alloc(sizeof(struct instance) + 5*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nitc__ForeignCallbackSet;
var = NEW_core__HashSet(&type_core__HashSet__nitc__MExplicitCall);
{
core___core__HashSet___core__kernel__Object__init(var); /* Direct call hash_collection#HashSet#init on <var:HashSet[MExplicitCall]>*/
}
self->attrs[COLOR_nitc__nitni_callbacks__ForeignCallbackSet___callbacks].val = var; /* _callbacks on <self:ForeignCallbackSet exact> */
var1 = NEW_core__HashSet(&type_core__HashSet__nitc__MExplicitSuper);
{
core___core__HashSet___core__kernel__Object__init(var1); /* Direct call hash_collection#HashSet#init on <var1:HashSet[MExplicitSuper]>*/
}
self->attrs[COLOR_nitc__nitni_callbacks__ForeignCallbackSet___supers].val = var1; /* _supers on <self:ForeignCallbackSet exact> */
var2 = NEW_core__HashSet(&type_core__HashSet__nitc__MType);
{
core___core__HashSet___core__kernel__Object__init(var2); /* Direct call hash_collection#HashSet#init on <var2:HashSet[MType]>*/
}
self->attrs[COLOR_nitc__nitni_callbacks__ForeignCallbackSet___types].val = var2; /* _types on <self:ForeignCallbackSet exact> */
var3 = NEW_core__HashSet(&type_core__HashSet__nitc__MExplicitCast);
{
core___core__HashSet___core__kernel__Object__init(var3); /* Direct call hash_collection#HashSet#init on <var3:HashSet[MExplicitCast]>*/
}
self->attrs[COLOR_nitc__nitni_callbacks__ForeignCallbackSet___casts].val = var3; /* _casts on <self:ForeignCallbackSet exact> */
return self;
}
/* runtime class nitc__NitniCallback: nitc::NitniCallback (dead=true; need_corpse=false)*/
/* allocate NitniCallback */
val* NEW_nitc__NitniCallback(const struct type* type) {
PRINT_ERROR("Runtime error: %s", "NitniCallback is DEAD");
PRINT_ERROR("\n");
fatal_exit(1);
}
/* runtime class nitc__MExplicitCall: nitc::MExplicitCall (dead=false; need_corpse=false)*/
const struct class class_nitc__MExplicitCall = {
0, /* box_kind */
{
(nitmethod_t)nitc___nitc__MExplicitCall___core__kernel__Object__init, /* pointer to nitni_callbacks:MExplicitCall:nitni_callbacks#MExplicitCall#init */
(nitmethod_t)core___core__Object____33d_61d, /* pointer to nitni_callbacks:MExplicitCall:kernel#Object#!= */
(nitmethod_t)core___core__Object___sys, /* pointer to nitni_callbacks:MExplicitCall:kernel#Object#sys */
(nitmethod_t)nitc___nitc__MExplicitCall___core__kernel__Object___61d_61d, /* pointer to nitni_callbacks:MExplicitCall:nitni_callbacks#MExplicitCall#== */
(nitmethod_t)core__abstract_text___Object___to_s, /* pointer to nitni_callbacks:MExplicitCall:abstract_text#Object#to_s */
(nitmethod_t)core___core__Object___is_same_instance, /* pointer to nitni_callbacks:MExplicitCall:kernel#Object#is_same_instance */
(nitmethod_t)nitc___nitc__MExplicitCall___core__kernel__Object__hash, /* pointer to nitni_callbacks:MExplicitCall:nitni_callbacks#MExplicitCall#hash */
(nitmethod_t)core__abstract_text___Object___inspect, /* pointer to nitni_callbacks:MExplicitCall:abstract_text#Object#inspect */
(nitmethod_t)core___core__Object___object_id, /* pointer to nitni_callbacks:MExplicitCall:kernel#Object#object_id */
(nitmethod_t)core__abstract_text___Object___class_name, /* pointer to nitni_callbacks:MExplicitCall:abstract_text#Object#class_name */
(nitmethod_t)core__abstract_text___Object___inspect_head, /* pointer to nitni_callbacks:MExplicitCall:abstract_text#Object#inspect_head */
(nitmethod_t)core__abstract_text___Object___native_class_name, /* pointer to nitni_callbacks:MExplicitCall:abstract_text#Object#native_class_name */
(nitmethod_t)core___core__Object___output, /* pointer to nitni_callbacks:MExplicitCall:kernel#Object#output */
(nitmethod_t)serialization___core__Object___serialization_hash, /* pointer to nitni_callbacks:MExplicitCall:serialization#Object#serialization_hash */
(nitmethod_t)serialization___core__Object___is_same_serialized, /* pointer to nitni_callbacks:MExplicitCall:serialization#Object#is_same_serialized */
(nitmethod_t)nitc___nitc__MExplicitCall___recv_mtype, /* pointer to nitni_callbacks:MExplicitCall:nitni_callbacks#MExplicitCall#recv_mtype */
(nitmethod_t)nitc___nitc__MExplicitCall___mproperty, /* pointer to nitni_callbacks:MExplicitCall:nitni_callbacks#MExplicitCall#mproperty */
(nitmethod_t)nitc___nitc__MExplicitCall___recv_mtype_61d, /* pointer to nitni_callbacks:MExplicitCall:nitni_callbacks#MExplicitCall#recv_mtype= */
(nitmethod_t)nitc___nitc__MExplicitCall___mproperty_61d, /* pointer to nitni_callbacks:MExplicitCall:nitni_callbacks#MExplicitCall#mproperty= */
(nitmethod_t)nitc___nitc__MExplicitCall___from_mmodule_61d, /* pointer to nitni_callbacks:MExplicitCall:nitni_callbacks#MExplicitCall#from_mmodule= */
(nitmethod_t)nitc___nitc__MExplicitCall___fill_type_for, /* pointer to nitni_callbacks:MExplicitCall:nitni_callbacks#MExplicitCall#fill_type_for */
(nitmethod_t)nitc__compiler_ffi___MExplicitCall___compile_extern_callback, /* pointer to nitni_callbacks:MExplicitCall:compiler_ffi#MExplicitCall#compile_extern_callback */
(nitmethod_t)core___core__Object___init, /* pointer to nitni_callbacks:MExplicitCall:kernel#Object#init */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
(nitmethod_t)nitc__c___MExplicitCall___NitniCallback__compile_callback_to_c, /* pointer to nitni_callbacks:MExplicitCall:c#MExplicitCall#compile_callback_to_c */
(nitmethod_t)nitc__cpp___MExplicitCall___NitniCallback__compile_callback_to_cpp, /* pointer to nitni_callbacks:MExplicitCall:cpp#MExplicitCall#compile_callback_to_cpp */
(nitmethod_t)nitc__objc___MExplicitCall___NitniCallback__compile_callback_to_objc, /* pointer to nitni_callbacks:MExplicitCall:objc#MExplicitCall#compile_callback_to_objc */
(nitmethod_t)nitc__java___MExplicitCall___NitniCallback__compile_callback_to_java, /* pointer to nitni_callbacks:MExplicitCall:java#MExplicitCall#compile_callback_to_java */
(nitmethod_t)nitc__java___MExplicitCall___NitniCallback__jni_methods_declaration, /* pointer to nitni_callbacks:MExplicitCall:java#MExplicitCall#jni_methods_declaration */
}
};
/* allocate MExplicitCall */
val* NEW_nitc__MExplicitCall(const struct type* type) {
val* self /* : MExplicitCall */;
self = nit_alloc(sizeof(struct instance) + 3*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nitc__MExplicitCall;
return self;
}
/* runtime class nitc__MExplicitSuper: nitc::MExplicitSuper (dead=false; need_corpse=false)*/
const struct class class_nitc__MExplicitSuper = {
0, /* box_kind */
{
(nitmethod_t)nitc___nitc__MExplicitSuper___core__kernel__Object__init, /* pointer to nitni_callbacks:MExplicitSuper:nitni_callbacks#MExplicitSuper#init */
(nitmethod_t)core___core__Object____33d_61d, /* pointer to nitni_callbacks:MExplicitSuper:kernel#Object#!= */
(nitmethod_t)core___core__Object___sys, /* pointer to nitni_callbacks:MExplicitSuper:kernel#Object#sys */
(nitmethod_t)nitc___nitc__MExplicitSuper___core__kernel__Object___61d_61d, /* pointer to nitni_callbacks:MExplicitSuper:nitni_callbacks#MExplicitSuper#== */
(nitmethod_t)core__abstract_text___Object___to_s, /* pointer to nitni_callbacks:MExplicitSuper:abstract_text#Object#to_s */
(nitmethod_t)core___core__Object___is_same_instance, /* pointer to nitni_callbacks:MExplicitSuper:kernel#Object#is_same_instance */
(nitmethod_t)nitc___nitc__MExplicitSuper___core__kernel__Object__hash, /* pointer to nitni_callbacks:MExplicitSuper:nitni_callbacks#MExplicitSuper#hash */
(nitmethod_t)core__abstract_text___Object___inspect, /* pointer to nitni_callbacks:MExplicitSuper:abstract_text#Object#inspect */
(nitmethod_t)core___core__Object___object_id, /* pointer to nitni_callbacks:MExplicitSuper:kernel#Object#object_id */
(nitmethod_t)core__abstract_text___Object___class_name, /* pointer to nitni_callbacks:MExplicitSuper:abstract_text#Object#class_name */
(nitmethod_t)core__abstract_text___Object___inspect_head, /* pointer to nitni_callbacks:MExplicitSuper:abstract_text#Object#inspect_head */
(nitmethod_t)core__abstract_text___Object___native_class_name, /* pointer to nitni_callbacks:MExplicitSuper:abstract_text#Object#native_class_name */
(nitmethod_t)core___core__Object___output, /* pointer to nitni_callbacks:MExplicitSuper:kernel#Object#output */
(nitmethod_t)serialization___core__Object___serialization_hash, /* pointer to nitni_callbacks:MExplicitSuper:serialization#Object#serialization_hash */
(nitmethod_t)serialization___core__Object___is_same_serialized, /* pointer to nitni_callbacks:MExplicitSuper:serialization#Object#is_same_serialized */
(nitmethod_t)nitc___nitc__MExplicitSuper___from, /* pointer to nitni_callbacks:MExplicitSuper:nitni_callbacks#MExplicitSuper#from */
(nitmethod_t)nitc___nitc__MExplicitSuper___from_61d, /* pointer to nitni_callbacks:MExplicitSuper:nitni_callbacks#MExplicitSuper#from= */
(nitmethod_t)nitc__compiler_ffi___MExplicitSuper___compile_extern_callback, /* pointer to nitni_callbacks:MExplicitSuper:compiler_ffi#MExplicitSuper#compile_extern_callback */
(nitmethod_t)core___core__Object___init, /* pointer to nitni_callbacks:MExplicitSuper:kernel#Object#init */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
(nitmethod_t)nitc__c___NitniCallback___compile_callback_to_c, /* pointer to nitni_callbacks:MExplicitSuper:c#NitniCallback#compile_callback_to_c */
(nitmethod_t)nitc__cpp___NitniCallback___compile_callback_to_cpp, /* pointer to nitni_callbacks:MExplicitSuper:cpp#NitniCallback#compile_callback_to_cpp */
(nitmethod_t)nitc__objc___NitniCallback___compile_callback_to_objc, /* pointer to nitni_callbacks:MExplicitSuper:objc#NitniCallback#compile_callback_to_objc */
(nitmethod_t)nitc__java___NitniCallback___compile_callback_to_java, /* pointer to nitni_callbacks:MExplicitSuper:java#NitniCallback#compile_callback_to_java */
(nitmethod_t)nitc__java___NitniCallback___jni_methods_declaration, /* pointer to nitni_callbacks:MExplicitSuper:java#NitniCallback#jni_methods_declaration */
}
};
/* allocate MExplicitSuper */
val* NEW_nitc__MExplicitSuper(const struct type* type) {
val* self /* : MExplicitSuper */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nitc__MExplicitSuper;
return self;
}
/* runtime class nitc__MExplicitCast: nitc::MExplicitCast (dead=false; need_corpse=false)*/
const struct class class_nitc__MExplicitCast = {
0, /* box_kind */
{
(nitmethod_t)nitc___nitc__MExplicitCast___core__kernel__Object__init, /* pointer to nitni_callbacks:MExplicitCast:nitni_callbacks#MExplicitCast#init */
(nitmethod_t)core___core__Object____33d_61d, /* pointer to nitni_callbacks:MExplicitCast:kernel#Object#!= */
(nitmethod_t)core___core__Object___sys, /* pointer to nitni_callbacks:MExplicitCast:kernel#Object#sys */
(nitmethod_t)nitc___nitc__MExplicitCast___core__kernel__Object___61d_61d, /* pointer to nitni_callbacks:MExplicitCast:nitni_callbacks#MExplicitCast#== */
(nitmethod_t)core__abstract_text___Object___to_s, /* pointer to nitni_callbacks:MExplicitCast:abstract_text#Object#to_s */
(nitmethod_t)core___core__Object___is_same_instance, /* pointer to nitni_callbacks:MExplicitCast:kernel#Object#is_same_instance */
(nitmethod_t)nitc___nitc__MExplicitCast___core__kernel__Object__hash, /* pointer to nitni_callbacks:MExplicitCast:nitni_callbacks#MExplicitCast#hash */
(nitmethod_t)core__abstract_text___Object___inspect, /* pointer to nitni_callbacks:MExplicitCast:abstract_text#Object#inspect */
(nitmethod_t)core___core__Object___object_id, /* pointer to nitni_callbacks:MExplicitCast:kernel#Object#object_id */
(nitmethod_t)core__abstract_text___Object___class_name, /* pointer to nitni_callbacks:MExplicitCast:abstract_text#Object#class_name */
(nitmethod_t)core__abstract_text___Object___inspect_head, /* pointer to nitni_callbacks:MExplicitCast:abstract_text#Object#inspect_head */
(nitmethod_t)core__abstract_text___Object___native_class_name, /* pointer to nitni_callbacks:MExplicitCast:abstract_text#Object#native_class_name */
(nitmethod_t)core___core__Object___output, /* pointer to nitni_callbacks:MExplicitCast:kernel#Object#output */
(nitmethod_t)serialization___core__Object___serialization_hash, /* pointer to nitni_callbacks:MExplicitCast:serialization#Object#serialization_hash */
(nitmethod_t)serialization___core__Object___is_same_serialized, /* pointer to nitni_callbacks:MExplicitCast:serialization#Object#is_same_serialized */
(nitmethod_t)nitc___nitc__MExplicitCast___to, /* pointer to nitni_callbacks:MExplicitCast:nitni_callbacks#MExplicitCast#to */
(nitmethod_t)nitc___nitc__MExplicitCast___from_61d, /* pointer to nitni_callbacks:MExplicitCast:nitni_callbacks#MExplicitCast#from= */
(nitmethod_t)nitc___nitc__MExplicitCast___to_61d, /* pointer to nitni_callbacks:MExplicitCast:nitni_callbacks#MExplicitCast#to= */
(nitmethod_t)nitc__compiler_ffi___MExplicitCast___compile_extern_callbacks, /* pointer to nitni_callbacks:MExplicitCast:compiler_ffi#MExplicitCast#compile_extern_callbacks */
(nitmethod_t)nitc___nitc__MExplicitCast___from, /* pointer to nitni_callbacks:MExplicitCast:nitni_callbacks#MExplicitCast#from */
(nitmethod_t)nitc___nitc__MExplicitCast___check_cname, /* pointer to nitni_callbacks:MExplicitCast:nitni_callbacks#MExplicitCast#check_cname */
(nitmethod_t)nitc___nitc__MExplicitCast___cast_cname, /* pointer to nitni_callbacks:MExplicitCast:nitni_callbacks#MExplicitCast#cast_cname */
(nitmethod_t)core___core__Object___init, /* pointer to nitni_callbacks:MExplicitCast:kernel#Object#init */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
(nitmethod_t)nitc__c___NitniCallback___compile_callback_to_c, /* pointer to nitni_callbacks:MExplicitCast:c#NitniCallback#compile_callback_to_c */
(nitmethod_t)nitc__cpp___NitniCallback___compile_callback_to_cpp, /* pointer to nitni_callbacks:MExplicitCast:cpp#NitniCallback#compile_callback_to_cpp */
(nitmethod_t)nitc__objc___NitniCallback___compile_callback_to_objc, /* pointer to nitni_callbacks:MExplicitCast:objc#NitniCallback#compile_callback_to_objc */
(nitmethod_t)nitc__java___NitniCallback___compile_callback_to_java, /* pointer to nitni_callbacks:MExplicitCast:java#NitniCallback#compile_callback_to_java */
(nitmethod_t)nitc__java___NitniCallback___jni_methods_declaration, /* pointer to nitni_callbacks:MExplicitCast:java#NitniCallback#jni_methods_declaration */
}
};
/* allocate MExplicitCast */
val* NEW_nitc__MExplicitCast(const struct type* type) {
val* self /* : MExplicitCast */;
self = nit_alloc(sizeof(struct instance) + 2*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nitc__MExplicitCast;
return self;
}
/* runtime class json__JsonSerializer: json::JsonSerializer (dead=false; need_corpse=false)*/
const struct class class_json__JsonSerializer = {
0, /* box_kind */
{
(nitmethod_t)json___json__JsonSerializer___core__kernel__Object__init, /* pointer to serialization_write:JsonSerializer:serialization_write#JsonSerializer#init */
(nitmethod_t)core___core__Object____33d_61d, /* pointer to serialization_write:JsonSerializer:kernel#Object#!= */
(nitmethod_t)core___core__Object___sys, /* pointer to serialization_write:JsonSerializer:kernel#Object#sys */
(nitmethod_t)core___core__Object____61d_61d, /* pointer to serialization_write:JsonSerializer:kernel#Object#== */
(nitmethod_t)core__abstract_text___Object___to_s, /* pointer to serialization_write:JsonSerializer:abstract_text#Object#to_s */
(nitmethod_t)core___core__Object___is_same_instance, /* pointer to serialization_write:JsonSerializer:kernel#Object#is_same_instance */
(nitmethod_t)core___core__Object___hash, /* pointer to serialization_write:JsonSerializer:kernel#Object#hash */
(nitmethod_t)core__abstract_text___Object___inspect, /* pointer to serialization_write:JsonSerializer:abstract_text#Object#inspect */
(nitmethod_t)core___core__Object___object_id, /* pointer to serialization_write:JsonSerializer:kernel#Object#object_id */
(nitmethod_t)core__abstract_text___Object___class_name, /* pointer to serialization_write:JsonSerializer:abstract_text#Object#class_name */
(nitmethod_t)core__abstract_text___Object___inspect_head, /* pointer to serialization_write:JsonSerializer:abstract_text#Object#inspect_head */
(nitmethod_t)core__abstract_text___Object___native_class_name, /* pointer to serialization_write:JsonSerializer:abstract_text#Object#native_class_name */
(nitmethod_t)core___core__Object___output, /* pointer to serialization_write:JsonSerializer:kernel#Object#output */
(nitmethod_t)serialization___core__Object___serialization_hash, /* pointer to serialization_write:JsonSerializer:serialization#Object#serialization_hash */
(nitmethod_t)serialization___core__Object___is_same_serialized, /* pointer to serialization_write:JsonSerializer:serialization#Object#is_same_serialized */
(nitmethod_t)json___json__JsonSerializer___serialization__Serializer__serialize, /* pointer to serialization_write:JsonSerializer:serialization_write#JsonSerializer#serialize */
(nitmethod_t)serialization___serialization__Serializer___warn, /* pointer to serialization_write:JsonSerializer:serialization#Serializer#warn */
(nitmethod_t)serialization___serialization__Serializer___try_to_serialize, /* pointer to serialization_write:JsonSerializer:serialization#Serializer#try_to_serialize */
(nitmethod_t)json___json__JsonSerializer___serialization__Serializer__serialize_attribute, /* pointer to serialization_write:JsonSerializer:serialization_write#JsonSerializer#serialize_attribute */
(nitmethod_t)json___json__JsonSerializer___serialization__Serializer__serialize_reference, /* pointer to serialization_write:JsonSerializer:serialization_write#JsonSerializer#serialize_reference */
(nitmethod_t)serialization___serialization__CachingSerializer___cache, /* pointer to serialization_write:JsonSerializer:caching#CachingSerializer#cache */
(nitmethod_t)json___json__JsonSerializer___stream_61d, /* pointer to serialization_write:JsonSerializer:serialization_write#JsonSerializer#stream= */
(nitmethod_t)json___json__JsonSerializer___plain_json_61d, /* pointer to serialization_write:JsonSerializer:serialization_write#JsonSerializer#plain_json= */
(nitmethod_t)json___json__JsonSerializer___pretty_json_61d, /* pointer to serialization_write:JsonSerializer:serialization_write#JsonSerializer#pretty_json= */
(nitmethod_t)json___json__JsonSerializer___stream, /* pointer to serialization_write:JsonSerializer:serialization_write#JsonSerializer#stream */
(nitmethod_t)json___json__JsonSerializer___plain_json, /* pointer to serialization_write:JsonSerializer:serialization_write#JsonSerializer#plain_json */
(nitmethod_t)json___json__JsonSerializer___open_objects, /* pointer to serialization_write:JsonSerializer:serialization_write#JsonSerializer#open_objects */
(nitmethod_t)json___json__JsonSerializer___first_attribute_61d, /* pointer to serialization_write:JsonSerializer:serialization_write#JsonSerializer#first_attribute= */
(nitmethod_t)json___json__JsonSerializer___indent_level_61d, /* pointer to serialization_write:JsonSerializer:serialization_write#JsonSerializer#indent_level= */
(nitmethod_t)json___json__JsonSerializer___indent_level, /* pointer to serialization_write:JsonSerializer:serialization_write#JsonSerializer#indent_level */
(nitmethod_t)json___json__JsonSerializer___new_line_and_indent, /* pointer to serialization_write:JsonSerializer:serialization_write#JsonSerializer#new_line_and_indent */
(nitmethod_t)json___json__JsonSerializer___pretty_json, /* pointer to serialization_write:JsonSerializer:serialization_write#JsonSerializer#pretty_json */
(nitmethod_t)json___json__JsonSerializer___first_attribute, /* pointer to serialization_write:JsonSerializer:serialization_write#JsonSerializer#first_attribute */
(nitmethod_t)core___core__Object___init, /* pointer to serialization_write:JsonSerializer:kernel#Object#init */
(nitmethod_t)serialization___serialization__Serializer___serialize_attribute, /* pointer to serialization_write:JsonSerializer:serialization#Serializer#serialize_attribute */
}
};
/* allocate JsonSerializer */
val* NEW_json__JsonSerializer(const struct type* type) {
val* self /* : JsonSerializer */;
val* var /* : Array[Object] */;
self = nit_alloc(sizeof(struct instance) + 8*sizeof(nitattribute_t));
self->type = type;
self->class = &class_json__JsonSerializer;
self->attrs[COLOR_json__serialization_write__JsonSerializer___plain_json].s = 0; /* _plain_json on <self:JsonSerializer exact> */
self->attrs[COLOR_json__serialization_write__JsonSerializer___pretty_json].s = 0; /* _pretty_json on <self:JsonSerializer exact> */
self->attrs[COLOR_json__serialization_write__JsonSerializer___indent_level].l = 0l; /* _indent_level on <self:JsonSerializer exact> */
var = NEW_core__Array(&type_core__Array__core__Object);
{
core___core__Array___core__kernel__Object__init(var); /* Direct call array#Array#init on <var:Array[Object]>*/
}
self->attrs[COLOR_json__serialization_write__JsonSerializer___open_objects].val = var; /* _open_objects on <self:JsonSerializer exact> */
self->attrs[COLOR_json__serialization_write__JsonSerializer___first_attribute].s = 0; /* _first_attribute on <self:JsonSerializer exact> */
return self;
}
/* runtime class serialization__CachingSerializer: serialization::CachingSerializer (dead=true; need_corpse=false)*/
/* allocate CachingSerializer */
val* NEW_serialization__CachingSerializer(const struct type* type) {
PRINT_ERROR("Runtime error: %s", "CachingSerializer is DEAD");
PRINT_ERROR("\n");
fatal_exit(1);
}
/* runtime class serialization__CachingDeserializer: serialization::CachingDeserializer (dead=true; need_corpse=false)*/
/* allocate CachingDeserializer */
val* NEW_serialization__CachingDeserializer(const struct type* type) {
PRINT_ERROR("Runtime error: %s", "CachingDeserializer is DEAD");
PRINT_ERROR("\n");
fatal_exit(1);
}
/* runtime class serialization__SerializerCache: serialization::SerializerCache (dead=false; need_corpse=false)*/
const struct class class_serialization__SerializerCache = {
0, /* box_kind */
{
(nitmethod_t)core___core__Object___init, /* pointer to caching:SerializerCache:kernel#Object#init */
(nitmethod_t)core___core__Object____33d_61d, /* pointer to caching:SerializerCache:kernel#Object#!= */
(nitmethod_t)core___core__Object___sys, /* pointer to caching:SerializerCache:kernel#Object#sys */
(nitmethod_t)core___core__Object____61d_61d, /* pointer to caching:SerializerCache:kernel#Object#== */
(nitmethod_t)core__abstract_text___Object___to_s, /* pointer to caching:SerializerCache:abstract_text#Object#to_s */
(nitmethod_t)core___core__Object___is_same_instance, /* pointer to caching:SerializerCache:kernel#Object#is_same_instance */
(nitmethod_t)core___core__Object___hash, /* pointer to caching:SerializerCache:kernel#Object#hash */
(nitmethod_t)core__abstract_text___Object___inspect, /* pointer to caching:SerializerCache:abstract_text#Object#inspect */
(nitmethod_t)core___core__Object___object_id, /* pointer to caching:SerializerCache:kernel#Object#object_id */
(nitmethod_t)core__abstract_text___Object___class_name, /* pointer to caching:SerializerCache:abstract_text#Object#class_name */
(nitmethod_t)core__abstract_text___Object___inspect_head, /* pointer to caching:SerializerCache:abstract_text#Object#inspect_head */
(nitmethod_t)core__abstract_text___Object___native_class_name, /* pointer to caching:SerializerCache:abstract_text#Object#native_class_name */
(nitmethod_t)core___core__Object___output, /* pointer to caching:SerializerCache:kernel#Object#output */
(nitmethod_t)serialization___core__Object___serialization_hash, /* pointer to caching:SerializerCache:serialization#Object#serialization_hash */
(nitmethod_t)serialization___core__Object___is_same_serialized, /* pointer to caching:SerializerCache:serialization#Object#is_same_serialized */
(nitmethod_t)serialization___serialization__SerializerCache___new_id_for, /* pointer to caching:SerializerCache:caching#SerializerCache#new_id_for */
(nitmethod_t)serialization___serialization__SerializerCache___next_available_id, /* pointer to caching:SerializerCache:caching#SerializerCache#next_available_id */
(nitmethod_t)serialization___serialization__SerializerCache___sent, /* pointer to caching:SerializerCache:caching#SerializerCache#sent */
(nitmethod_t)serialization___serialization__SerializerCache___has_object, /* pointer to caching:SerializerCache:caching#SerializerCache#has_object */
(nitmethod_t)serialization___serialization__SerializerCache___id_for, /* pointer to caching:SerializerCache:caching#SerializerCache#id_for */
}
};
/* allocate SerializerCache */
val* NEW_serialization__SerializerCache(const struct type* type) {
val* self /* : SerializerCache */;
val* var /* : StrictHashMap[Serializable, Int] */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_serialization__SerializerCache;
var = NEW_serialization__StrictHashMap(&type_serialization__StrictHashMap__serialization__Serializable__core__Int);
{
core___core__HashMap___core__kernel__Object__init(var); /* Direct call hash_collection#HashMap#init on <var:StrictHashMap[Serializable, Int]>*/
}
self->attrs[COLOR_serialization__caching__SerializerCache___sent].val = var; /* _sent on <self:SerializerCache exact> */
return self;
}
/* runtime class serialization__DeserializerCache: serialization::DeserializerCache (dead=true; need_corpse=false)*/
/* allocate DeserializerCache */
val* NEW_serialization__DeserializerCache(const struct type* type) {
PRINT_ERROR("Runtime error: %s", "DeserializerCache is DEAD");
PRINT_ERROR("\n");
fatal_exit(1);
}
/* runtime class serialization__DuplexCache: serialization::DuplexCache (dead=true; need_corpse=false)*/
/* allocate DuplexCache */
val* NEW_serialization__DuplexCache(const struct type* type) {
PRINT_ERROR("Runtime error: %s", "DuplexCache is DEAD");
PRINT_ERROR("\n");
fatal_exit(1);
}
/* runtime class serialization__AsyncCache: serialization::AsyncCache (dead=true; need_corpse=false)*/
/* allocate AsyncCache */
val* NEW_serialization__AsyncCache(const struct type* type) {
PRINT_ERROR("Runtime error: %s", "AsyncCache is DEAD");
PRINT_ERROR("\n");
fatal_exit(1);
}
/* runtime class serialization__StrictHashMap: serialization::StrictHashMap (dead=false; need_corpse=false)*/
const struct class class_serialization__StrictHashMap = {
0, /* box_kind */
{
(nitmethod_t)core___core__HashMap___core__kernel__Object__init, /* pointer to engine_tools:StrictHashMap:hash_collection#HashMap#init */
(nitmethod_t)core___core__Object____33d_61d, /* pointer to engine_tools:StrictHashMap:kernel#Object#!= */
(nitmethod_t)core___core__Object___sys, /* pointer to engine_tools:StrictHashMap:kernel#Object#sys */
(nitmethod_t)core___core__MapRead___core__kernel__Object___61d_61d, /* pointer to engine_tools:StrictHashMap:abstract_collection#MapRead#== */
(nitmethod_t)core__abstract_text___Object___to_s, /* pointer to engine_tools:StrictHashMap:abstract_text#Object#to_s */
(nitmethod_t)core___core__Object___is_same_instance, /* pointer to engine_tools:StrictHashMap:kernel#Object#is_same_instance */
(nitmethod_t)core___core__MapRead___core__kernel__Object__hash, /* pointer to engine_tools:StrictHashMap:abstract_collection#MapRead#hash */
(nitmethod_t)core__abstract_text___Object___inspect, /* pointer to engine_tools:StrictHashMap:abstract_text#Object#inspect */
(nitmethod_t)core___core__Object___object_id, /* pointer to engine_tools:StrictHashMap:kernel#Object#object_id */
(nitmethod_t)core__abstract_text___Object___class_name, /* pointer to engine_tools:StrictHashMap:abstract_text#Object#class_name */
(nitmethod_t)core__abstract_text___Object___inspect_head, /* pointer to engine_tools:StrictHashMap:abstract_text#Object#inspect_head */
(nitmethod_t)core__abstract_text___Object___native_class_name, /* pointer to engine_tools:StrictHashMap:abstract_text#Object#native_class_name */
(nitmethod_t)core___core__Object___output, /* pointer to engine_tools:StrictHashMap:kernel#Object#output */
(nitmethod_t)serialization___core__Object___serialization_hash, /* pointer to engine_tools:StrictHashMap:serialization#Object#serialization_hash */
(nitmethod_t)serialization___core__Object___is_same_serialized, /* pointer to engine_tools:StrictHashMap:serialization#Object#is_same_serialized */
(nitmethod_t)core___core__HashMap___core__abstract_collection__MapRead__length, /* pointer to engine_tools:StrictHashMap:hash_collection#HashMap#length */
(nitmethod_t)core___core__HashMap___core__abstract_collection__MapRead__iterator, /* pointer to engine_tools:StrictHashMap:hash_collection#HashMap#iterator */
(nitmethod_t)core___core__HashMap___core__abstract_collection__MapRead__has_key, /* pointer to engine_tools:StrictHashMap:hash_collection#HashMap#has_key */
(nitmethod_t)core___core__HashMap___core__abstract_collection__MapRead___91d_93d, /* pointer to engine_tools:StrictHashMap:hash_collection#HashMap#[] */
(nitmethod_t)core___core__MapRead___provide_default_value, /* pointer to engine_tools:StrictHashMap:abstract_collection#MapRead#provide_default_value */
(nitmethod_t)core___core__HashMap___core__abstract_collection__MapRead__keys, /* pointer to engine_tools:StrictHashMap:hash_collection#HashMap#keys */
(nitmethod_t)core___core__HashMap___core__abstract_collection__MapRead__is_empty, /* pointer to engine_tools:StrictHashMap:hash_collection#HashMap#is_empty */
(nitmethod_t)core___core__Object___init, /* pointer to engine_tools:StrictHashMap:kernel#Object#init */
(nitmethod_t)core___core__HashMap___core__abstract_collection__MapRead__get_or_null, /* pointer to engine_tools:StrictHashMap:hash_collection#HashMap#get_or_null */
(nitmethod_t)core___core__HashMap___core__abstract_collection__MapRead__values, /* pointer to engine_tools:StrictHashMap:hash_collection#HashMap#values */
(nitmethod_t)core___core__HashMap___core__abstract_collection__Map___91d_93d_61d, /* pointer to engine_tools:StrictHashMap:hash_collection#HashMap#[]= */
(nitmethod_t)core___core__HashMap___core__abstract_collection__Map__clear, /* pointer to engine_tools:StrictHashMap:hash_collection#HashMap#clear */
(nitmethod_t)core__flat___Map___join, /* pointer to engine_tools:StrictHashMap:flat#Map#join */
(nitmethod_t)core___core__Map___add_all, /* pointer to engine_tools:StrictHashMap:abstract_collection#Map#add_all */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
(nitmethod_t)core__hash_collection___core__hash_collection__HashCollection___enlarge, /* pointer to engine_tools:StrictHashMap:hash_collection#HashCollection#enlarge */
(nitmethod_t)serialization___serialization__StrictHashMap___core__hash_collection__HashCollection__index_at, /* pointer to engine_tools:StrictHashMap:engine_tools#StrictHashMap#index_at */
(nitmethod_t)serialization___serialization__StrictHashMap___core__hash_collection__HashCollection__node_at_idx, /* pointer to engine_tools:StrictHashMap:engine_tools#StrictHashMap#node_at_idx */
(nitmethod_t)core__hash_collection___core__hash_collection__HashCollection___store, /* pointer to engine_tools:StrictHashMap:hash_collection#HashCollection#store */
(nitmethod_t)core__hash_collection___core__hash_collection__HashCollection___node_at, /* pointer to engine_tools:StrictHashMap:hash_collection#HashCollection#node_at */
(nitmethod_t)core__hash_collection___core__hash_collection__HashCollection___raz, /* pointer to engine_tools:StrictHashMap:hash_collection#HashCollection#raz */
(nitmethod_t)core__hash_collection___core__hash_collection__HashCollection___remove_node, /* pointer to engine_tools:StrictHashMap:hash_collection#HashCollection#remove_node */
(nitmethod_t)json__serialization_write___serialization__Serializable___serialize_to_json, /* pointer to engine_tools:StrictHashMap:serialization_write#Serializable#serialize_to_json */
(nitmethod_t)json__serialization_write___core__Map___Serializable__accept_json_serializer, /* pointer to engine_tools:StrictHashMap:serialization_write#Map#accept_json_serializer */
(nitmethod_t)serialization___serialization__Serializable___core_serialize_to, /* pointer to engine_tools:StrictHashMap:serialization#Serializable#core_serialize_to */
(nitmethod_t)serialization___serialization__Serializable___serialize_to_or_delay, /* pointer to engine_tools:StrictHashMap:serialization#Serializable#serialize_to_or_delay */
(nitmethod_t)serialization___serialization__Serializable___serialize_to, /* pointer to engine_tools:StrictHashMap:serialization#Serializable#serialize_to */
}
};
/* allocate StrictHashMap[nullable Object, nullable Object] */
val* NEW_serialization__StrictHashMap(const struct type* type) {
val* self /* : StrictHashMap[nullable Object, nullable Object] */;
self = nit_alloc(sizeof(struct instance) + 11*sizeof(nitattribute_t));
self->type = type;
self->class = &class_serialization__StrictHashMap;
self->attrs[COLOR_core__hash_collection__HashCollection___capacity].l = 0l; /* _capacity on <self:StrictHashMap[nullable Object, nullable Object] exact> */
self->attrs[COLOR_core__hash_collection__HashCollection___the_length].l = 0l; /* _the_length on <self:StrictHashMap[nullable Object, nullable Object] exact> */
return self;
}
/* runtime class nitc__AndroidPlatform: nitc::AndroidPlatform (dead=false; need_corpse=false)*/
const struct class class_nitc__AndroidPlatform = {
0, /* box_kind */
{
(nitmethod_t)core___core__Object___init, /* pointer to android:AndroidPlatform:kernel#Object#init */
(nitmethod_t)core___core__Object____33d_61d, /* pointer to android:AndroidPlatform:kernel#Object#!= */
(nitmethod_t)core___core__Object___sys, /* pointer to android:AndroidPlatform:kernel#Object#sys */
(nitmethod_t)core___core__Object____61d_61d, /* pointer to android:AndroidPlatform:kernel#Object#== */
(nitmethod_t)core__abstract_text___Object___to_s, /* pointer to android:AndroidPlatform:abstract_text#Object#to_s */
(nitmethod_t)core___core__Object___is_same_instance, /* pointer to android:AndroidPlatform:kernel#Object#is_same_instance */
(nitmethod_t)core___core__Object___hash, /* pointer to android:AndroidPlatform:kernel#Object#hash */
(nitmethod_t)core__abstract_text___Object___inspect, /* pointer to android:AndroidPlatform:abstract_text#Object#inspect */
(nitmethod_t)core___core__Object___object_id, /* pointer to android:AndroidPlatform:kernel#Object#object_id */
(nitmethod_t)core__abstract_text___Object___class_name, /* pointer to android:AndroidPlatform:abstract_text#Object#class_name */
(nitmethod_t)core__abstract_text___Object___inspect_head, /* pointer to android:AndroidPlatform:abstract_text#Object#inspect_head */
(nitmethod_t)core__abstract_text___Object___native_class_name, /* pointer to android:AndroidPlatform:abstract_text#Object#native_class_name */
(nitmethod_t)core___core__Object___output, /* pointer to android:AndroidPlatform:kernel#Object#output */
(nitmethod_t)serialization___core__Object___serialization_hash, /* pointer to android:AndroidPlatform:serialization#Object#serialization_hash */
(nitmethod_t)serialization___core__Object___is_same_serialized, /* pointer to android:AndroidPlatform:serialization#Object#is_same_serialized */
(nitmethod_t)nitc___nitc__AndroidPlatform___nitc__platform__Platform__name, /* pointer to android:AndroidPlatform:android#AndroidPlatform#name */
(nitmethod_t)nitc___nitc__Platform___no_main, /* pointer to android:AndroidPlatform:platform#Platform#no_main */
(nitmethod_t)nitc___nitc__AndroidPlatform___nitc__platform__Platform__supports_libunwind, /* pointer to android:AndroidPlatform:android#AndroidPlatform#supports_libunwind */
(nitmethod_t)nitc___nitc__AndroidPlatform___nitc__abstract_compiler__Platform__toolchain, /* pointer to android:AndroidPlatform:android#AndroidPlatform#toolchain */
(nitmethod_t)nitc___nitc__AndroidPlatform___nitc__platform__Platform__supports_linker_script, /* pointer to android:AndroidPlatform:android#AndroidPlatform#supports_linker_script */
(nitmethod_t)nitc___nitc__AndroidPlatform___nitc__platform__Platform__supports_libgc, /* pointer to android:AndroidPlatform:android#AndroidPlatform#supports_libgc */
}
};
/* allocate AndroidPlatform */
val* NEW_nitc__AndroidPlatform(const struct type* type) {
val* self /* : AndroidPlatform */;
self = nit_alloc(sizeof(struct instance) + 0*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nitc__AndroidPlatform;
return self;
}
/* runtime class nitc__AndroidToolchain: nitc::AndroidToolchain (dead=false; need_corpse=false)*/
const struct class class_nitc__AndroidToolchain = {
0, /* box_kind */
{
(nitmethod_t)nitc___nitc__Toolchain___core__kernel__Object__init, /* pointer to android:AndroidToolchain:abstract_compiler#Toolchain#init */
(nitmethod_t)core___core__Object____33d_61d, /* pointer to android:AndroidToolchain:kernel#Object#!= */
(nitmethod_t)core___core__Object___sys, /* pointer to android:AndroidToolchain:kernel#Object#sys */
(nitmethod_t)core___core__Object____61d_61d, /* pointer to android:AndroidToolchain:kernel#Object#== */
(nitmethod_t)core__abstract_text___Object___to_s, /* pointer to android:AndroidToolchain:abstract_text#Object#to_s */
(nitmethod_t)core___core__Object___is_same_instance, /* pointer to android:AndroidToolchain:kernel#Object#is_same_instance */
(nitmethod_t)core___core__Object___hash, /* pointer to android:AndroidToolchain:kernel#Object#hash */
(nitmethod_t)core__abstract_text___Object___inspect, /* pointer to android:AndroidToolchain:abstract_text#Object#inspect */
(nitmethod_t)core___core__Object___object_id, /* pointer to android:AndroidToolchain:kernel#Object#object_id */
(nitmethod_t)core__abstract_text___Object___class_name, /* pointer to android:AndroidToolchain:abstract_text#Object#class_name */
(nitmethod_t)core__abstract_text___Object___inspect_head, /* pointer to android:AndroidToolchain:abstract_text#Object#inspect_head */
(nitmethod_t)core__abstract_text___Object___native_class_name, /* pointer to android:AndroidToolchain:abstract_text#Object#native_class_name */
(nitmethod_t)core___core__Object___output, /* pointer to android:AndroidToolchain:kernel#Object#output */
(nitmethod_t)serialization___core__Object___serialization_hash, /* pointer to android:AndroidToolchain:serialization#Object#serialization_hash */
(nitmethod_t)serialization___core__Object___is_same_serialized, /* pointer to android:AndroidToolchain:serialization#Object#is_same_serialized */
(nitmethod_t)nitc___nitc__MakefileToolchain___Toolchain__write_and_make, /* pointer to android:AndroidToolchain:abstract_compiler#MakefileToolchain#write_and_make */
(nitmethod_t)nitc___nitc__Toolchain___toolcontext_61d, /* pointer to android:AndroidToolchain:abstract_compiler#Toolchain#toolcontext= */
(nitmethod_t)nitc___nitc__Toolchain___compiler_61d, /* pointer to android:AndroidToolchain:abstract_compiler#Toolchain#compiler= */
(nitmethod_t)nitc___nitc__Toolchain___compiler, /* pointer to android:AndroidToolchain:abstract_compiler#Toolchain#compiler */
(nitmethod_t)nitc___nitc__Toolchain___toolcontext, /* pointer to android:AndroidToolchain:abstract_compiler#Toolchain#toolcontext */
(nitmethod_t)nitc___nitc__AndroidToolchain___nitc__abstract_compiler__Toolchain__compile_dir, /* pointer to android:AndroidToolchain:android#AndroidToolchain#compile_dir */
(nitmethod_t)nitc___nitc__Toolchain___root_compile_dir, /* pointer to android:AndroidToolchain:abstract_compiler#Toolchain#root_compile_dir */
(nitmethod_t)core___core__Object___init, /* pointer to android:AndroidToolchain:kernel#Object#init */
(nitmethod_t)nitc___nitc__AndroidToolchain___nitc__abstract_compiler__MakefileToolchain__write_files, /* pointer to android:AndroidToolchain:android#AndroidToolchain#write_files */
(nitmethod_t)nitc___nitc__AndroidToolchain___nitc__abstract_compiler__MakefileToolchain__write_makefile, /* pointer to android:AndroidToolchain:android#AndroidToolchain#write_makefile */
(nitmethod_t)nitc___nitc__AndroidToolchain___nitc__abstract_compiler__MakefileToolchain__compile_c_code, /* pointer to android:AndroidToolchain:android#AndroidToolchain#compile_c_code */
(nitmethod_t)nitc___nitc__MakefileToolchain___outfile, /* pointer to android:AndroidToolchain:abstract_compiler#MakefileToolchain#outfile */
(nitmethod_t)nitc___nitc__MakefileToolchain___makefile_name, /* pointer to android:AndroidToolchain:abstract_compiler#MakefileToolchain#makefile_name */
(nitmethod_t)nitc___nitc__AndroidToolchain___nitc__abstract_compiler__MakefileToolchain__default_outname, /* pointer to android:AndroidToolchain:android#AndroidToolchain#default_outname */
(nitmethod_t)nitc___nitc__AndroidToolchain___android_project_root_61d, /* pointer to android:AndroidToolchain:android#AndroidToolchain#android_project_root= */
(nitmethod_t)nitc___nitc__AndroidToolchain___android_project_root, /* pointer to android:AndroidToolchain:android#AndroidToolchain#android_project_root */
(nitmethod_t)nitc___nitc__MakefileToolchain___write_files, /* pointer to android:AndroidToolchain:abstract_compiler#MakefileToolchain#write_files */
(nitmethod_t)nitc___nitc__MakefileToolchain___default_outname, /* pointer to android:AndroidToolchain:abstract_compiler#MakefileToolchain#default_outname */
}
};
/* allocate AndroidToolchain */
val* NEW_nitc__AndroidToolchain(const struct type* type) {
val* self /* : AndroidToolchain */;
self = nit_alloc(sizeof(struct instance) + 3*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nitc__AndroidToolchain;
return self;
}
/* runtime class nitc__header_dependency__HeaderDependancyPhase: nitc::header_dependency::HeaderDependancyPhase (dead=false; need_corpse=false)*/
const struct class class_nitc__header_dependency__HeaderDependancyPhase = {
0, /* box_kind */
{
(nitmethod_t)nitc___nitc__Phase___core__kernel__Object__init, /* pointer to header_dependency:HeaderDependancyPhase:phase#Phase#init */
(nitmethod_t)core___core__Object____33d_61d, /* pointer to header_dependency:HeaderDependancyPhase:kernel#Object#!= */
(nitmethod_t)core___core__Object___sys, /* pointer to header_dependency:HeaderDependancyPhase:kernel#Object#sys */
(nitmethod_t)core___core__Object____61d_61d, /* pointer to header_dependency:HeaderDependancyPhase:kernel#Object#== */
(nitmethod_t)nitc___nitc__Phase___core__abstract_text__Object__to_s, /* pointer to header_dependency:HeaderDependancyPhase:phase#Phase#to_s */
(nitmethod_t)core___core__Object___is_same_instance, /* pointer to header_dependency:HeaderDependancyPhase:kernel#Object#is_same_instance */
(nitmethod_t)core___core__Object___hash, /* pointer to header_dependency:HeaderDependancyPhase:kernel#Object#hash */
(nitmethod_t)core__abstract_text___Object___inspect, /* pointer to header_dependency:HeaderDependancyPhase:abstract_text#Object#inspect */
(nitmethod_t)core___core__Object___object_id, /* pointer to header_dependency:HeaderDependancyPhase:kernel#Object#object_id */
(nitmethod_t)core__abstract_text___Object___class_name, /* pointer to header_dependency:HeaderDependancyPhase:abstract_text#Object#class_name */
(nitmethod_t)core__abstract_text___Object___inspect_head, /* pointer to header_dependency:HeaderDependancyPhase:abstract_text#Object#inspect_head */
(nitmethod_t)core__abstract_text___Object___native_class_name, /* pointer to header_dependency:HeaderDependancyPhase:abstract_text#Object#native_class_name */
(nitmethod_t)core___core__Object___output, /* pointer to header_dependency:HeaderDependancyPhase:kernel#Object#output */
(nitmethod_t)serialization___core__Object___serialization_hash, /* pointer to header_dependency:HeaderDependancyPhase:serialization#Object#serialization_hash */
(nitmethod_t)serialization___core__Object___is_same_serialized, /* pointer to header_dependency:HeaderDependancyPhase:serialization#Object#is_same_serialized */
(nitmethod_t)nitc___nitc__Phase___toolcontext_61d, /* pointer to header_dependency:HeaderDependancyPhase:phase#Phase#toolcontext= */
(nitmethod_t)nitc___nitc__Phase___depends_61d, /* pointer to header_dependency:HeaderDependancyPhase:phase#Phase#depends= */
(nitmethod_t)nitc___nitc__Phase___toolcontext, /* pointer to header_dependency:HeaderDependancyPhase:phase#Phase#toolcontext */
(nitmethod_t)nitc___nitc__Phase___in_hierarchy_61d, /* pointer to header_dependency:HeaderDependancyPhase:phase#Phase#in_hierarchy= */
(nitmethod_t)nitc___nitc__Phase___depends, /* pointer to header_dependency:HeaderDependancyPhase:phase#Phase#depends */
(nitmethod_t)nitc___nitc__Phase___disabled, /* pointer to header_dependency:HeaderDependancyPhase:phase#Phase#disabled */
(nitmethod_t)nitc__modelbuilder___Phase___process_mainmodule, /* pointer to header_dependency:HeaderDependancyPhase:modelbuilder#Phase#process_mainmodule */
(nitmethod_t)nitc__header_dependency___nitc__header_dependency__HeaderDependancyPhase___nitc__phase__Phase__process_nmodule, /* pointer to header_dependency:HeaderDependancyPhase:header_dependency#HeaderDependancyPhase#process_nmodule */
(nitmethod_t)nitc___nitc__Phase___process_nclassdef, /* pointer to header_dependency:HeaderDependancyPhase:phase#Phase#process_nclassdef */
(nitmethod_t)nitc___nitc__Phase___process_annotated_node, /* pointer to header_dependency:HeaderDependancyPhase:phase#Phase#process_annotated_node */
(nitmethod_t)nitc___nitc__Phase___process_npropdef, /* pointer to header_dependency:HeaderDependancyPhase:phase#Phase#process_npropdef */
(nitmethod_t)nitc___nitc__Phase___in_hierarchy, /* pointer to header_dependency:HeaderDependancyPhase:phase#Phase#in_hierarchy */
(nitmethod_t)nitc___nitc__Phase___disabled_61d, /* pointer to header_dependency:HeaderDependancyPhase:phase#Phase#disabled= */
(nitmethod_t)core___core__Object___init, /* pointer to header_dependency:HeaderDependancyPhase:kernel#Object#init */
}
};
/* allocate HeaderDependancyPhase */
val* NEW_nitc__header_dependency__HeaderDependancyPhase(const struct type* type) {
val* self /* : HeaderDependancyPhase */;
self = nit_alloc(sizeof(struct instance) + 4*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nitc__header_dependency__HeaderDependancyPhase;
self->attrs[COLOR_nitc__phase__Phase___disabled].s = 0; /* _disabled on <self:HeaderDependancyPhase exact> */
return self;
}
/* runtime class nitc__PkgconfigPhase: nitc::PkgconfigPhase (dead=false; need_corpse=false)*/
const struct class class_nitc__PkgconfigPhase = {
0, /* box_kind */
{
(nitmethod_t)nitc___nitc__Phase___core__kernel__Object__init, /* pointer to pkgconfig:PkgconfigPhase:phase#Phase#init */
(nitmethod_t)core___core__Object____33d_61d, /* pointer to pkgconfig:PkgconfigPhase:kernel#Object#!= */
(nitmethod_t)core___core__Object___sys, /* pointer to pkgconfig:PkgconfigPhase:kernel#Object#sys */
(nitmethod_t)core___core__Object____61d_61d, /* pointer to pkgconfig:PkgconfigPhase:kernel#Object#== */
(nitmethod_t)nitc___nitc__Phase___core__abstract_text__Object__to_s, /* pointer to pkgconfig:PkgconfigPhase:phase#Phase#to_s */
(nitmethod_t)core___core__Object___is_same_instance, /* pointer to pkgconfig:PkgconfigPhase:kernel#Object#is_same_instance */
(nitmethod_t)core___core__Object___hash, /* pointer to pkgconfig:PkgconfigPhase:kernel#Object#hash */
(nitmethod_t)core__abstract_text___Object___inspect, /* pointer to pkgconfig:PkgconfigPhase:abstract_text#Object#inspect */
(nitmethod_t)core___core__Object___object_id, /* pointer to pkgconfig:PkgconfigPhase:kernel#Object#object_id */
(nitmethod_t)core__abstract_text___Object___class_name, /* pointer to pkgconfig:PkgconfigPhase:abstract_text#Object#class_name */
(nitmethod_t)core__abstract_text___Object___inspect_head, /* pointer to pkgconfig:PkgconfigPhase:abstract_text#Object#inspect_head */
(nitmethod_t)core__abstract_text___Object___native_class_name, /* pointer to pkgconfig:PkgconfigPhase:abstract_text#Object#native_class_name */
(nitmethod_t)core___core__Object___output, /* pointer to pkgconfig:PkgconfigPhase:kernel#Object#output */
(nitmethod_t)serialization___core__Object___serialization_hash, /* pointer to pkgconfig:PkgconfigPhase:serialization#Object#serialization_hash */
(nitmethod_t)serialization___core__Object___is_same_serialized, /* pointer to pkgconfig:PkgconfigPhase:serialization#Object#is_same_serialized */
(nitmethod_t)nitc___nitc__Phase___toolcontext_61d, /* pointer to pkgconfig:PkgconfigPhase:phase#Phase#toolcontext= */
(nitmethod_t)nitc___nitc__Phase___depends_61d, /* pointer to pkgconfig:PkgconfigPhase:phase#Phase#depends= */
(nitmethod_t)nitc___nitc__Phase___toolcontext, /* pointer to pkgconfig:PkgconfigPhase:phase#Phase#toolcontext */
(nitmethod_t)nitc___nitc__Phase___in_hierarchy_61d, /* pointer to pkgconfig:PkgconfigPhase:phase#Phase#in_hierarchy= */
(nitmethod_t)nitc___nitc__Phase___depends, /* pointer to pkgconfig:PkgconfigPhase:phase#Phase#depends */
(nitmethod_t)nitc___nitc__Phase___disabled, /* pointer to pkgconfig:PkgconfigPhase:phase#Phase#disabled */
(nitmethod_t)nitc__modelbuilder___Phase___process_mainmodule, /* pointer to pkgconfig:PkgconfigPhase:modelbuilder#Phase#process_mainmodule */
(nitmethod_t)nitc___nitc__Phase___process_nmodule, /* pointer to pkgconfig:PkgconfigPhase:phase#Phase#process_nmodule */
(nitmethod_t)nitc___nitc__Phase___process_nclassdef, /* pointer to pkgconfig:PkgconfigPhase:phase#Phase#process_nclassdef */
(nitmethod_t)nitc___nitc__PkgconfigPhase___nitc__phase__Phase__process_annotated_node, /* pointer to pkgconfig:PkgconfigPhase:pkgconfig#PkgconfigPhase#process_annotated_node */
(nitmethod_t)nitc___nitc__Phase___process_npropdef, /* pointer to pkgconfig:PkgconfigPhase:phase#Phase#process_npropdef */
(nitmethod_t)nitc___nitc__Phase___in_hierarchy, /* pointer to pkgconfig:PkgconfigPhase:phase#Phase#in_hierarchy */
(nitmethod_t)nitc___nitc__Phase___disabled_61d, /* pointer to pkgconfig:PkgconfigPhase:phase#Phase#disabled= */
(nitmethod_t)core___core__Object___init, /* pointer to pkgconfig:PkgconfigPhase:kernel#Object#init */
}
};
/* allocate PkgconfigPhase */
val* NEW_nitc__PkgconfigPhase(const struct type* type) {
val* self /* : PkgconfigPhase */;
self = nit_alloc(sizeof(struct instance) + 4*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nitc__PkgconfigPhase;
self->attrs[COLOR_nitc__phase__Phase___disabled].s = 0; /* _disabled on <self:PkgconfigPhase exact> */
return self;
}
/* runtime class nitc__c_compiler_options__CCompilerOptionsPhase: nitc::c_compiler_options::CCompilerOptionsPhase (dead=false; need_corpse=false)*/
const struct class class_nitc__c_compiler_options__CCompilerOptionsPhase = {
0, /* box_kind */
{
(nitmethod_t)nitc___nitc__Phase___core__kernel__Object__init, /* pointer to c_compiler_options:CCompilerOptionsPhase:phase#Phase#init */
(nitmethod_t)core___core__Object____33d_61d, /* pointer to c_compiler_options:CCompilerOptionsPhase:kernel#Object#!= */
(nitmethod_t)core___core__Object___sys, /* pointer to c_compiler_options:CCompilerOptionsPhase:kernel#Object#sys */
(nitmethod_t)core___core__Object____61d_61d, /* pointer to c_compiler_options:CCompilerOptionsPhase:kernel#Object#== */
(nitmethod_t)nitc___nitc__Phase___core__abstract_text__Object__to_s, /* pointer to c_compiler_options:CCompilerOptionsPhase:phase#Phase#to_s */
(nitmethod_t)core___core__Object___is_same_instance, /* pointer to c_compiler_options:CCompilerOptionsPhase:kernel#Object#is_same_instance */
(nitmethod_t)core___core__Object___hash, /* pointer to c_compiler_options:CCompilerOptionsPhase:kernel#Object#hash */
(nitmethod_t)core__abstract_text___Object___inspect, /* pointer to c_compiler_options:CCompilerOptionsPhase:abstract_text#Object#inspect */
(nitmethod_t)core___core__Object___object_id, /* pointer to c_compiler_options:CCompilerOptionsPhase:kernel#Object#object_id */
(nitmethod_t)core__abstract_text___Object___class_name, /* pointer to c_compiler_options:CCompilerOptionsPhase:abstract_text#Object#class_name */
(nitmethod_t)core__abstract_text___Object___inspect_head, /* pointer to c_compiler_options:CCompilerOptionsPhase:abstract_text#Object#inspect_head */
(nitmethod_t)core__abstract_text___Object___native_class_name, /* pointer to c_compiler_options:CCompilerOptionsPhase:abstract_text#Object#native_class_name */
(nitmethod_t)core___core__Object___output, /* pointer to c_compiler_options:CCompilerOptionsPhase:kernel#Object#output */
(nitmethod_t)serialization___core__Object___serialization_hash, /* pointer to c_compiler_options:CCompilerOptionsPhase:serialization#Object#serialization_hash */
(nitmethod_t)serialization___core__Object___is_same_serialized, /* pointer to c_compiler_options:CCompilerOptionsPhase:serialization#Object#is_same_serialized */
(nitmethod_t)nitc___nitc__Phase___toolcontext_61d, /* pointer to c_compiler_options:CCompilerOptionsPhase:phase#Phase#toolcontext= */
(nitmethod_t)nitc___nitc__Phase___depends_61d, /* pointer to c_compiler_options:CCompilerOptionsPhase:phase#Phase#depends= */
(nitmethod_t)nitc___nitc__Phase___toolcontext, /* pointer to c_compiler_options:CCompilerOptionsPhase:phase#Phase#toolcontext */
(nitmethod_t)nitc___nitc__Phase___in_hierarchy_61d, /* pointer to c_compiler_options:CCompilerOptionsPhase:phase#Phase#in_hierarchy= */
(nitmethod_t)nitc___nitc__Phase___depends, /* pointer to c_compiler_options:CCompilerOptionsPhase:phase#Phase#depends */
(nitmethod_t)nitc___nitc__Phase___disabled, /* pointer to c_compiler_options:CCompilerOptionsPhase:phase#Phase#disabled */
(nitmethod_t)nitc__modelbuilder___Phase___process_mainmodule, /* pointer to c_compiler_options:CCompilerOptionsPhase:modelbuilder#Phase#process_mainmodule */
(nitmethod_t)nitc___nitc__Phase___process_nmodule, /* pointer to c_compiler_options:CCompilerOptionsPhase:phase#Phase#process_nmodule */
(nitmethod_t)nitc___nitc__Phase___process_nclassdef, /* pointer to c_compiler_options:CCompilerOptionsPhase:phase#Phase#process_nclassdef */
(nitmethod_t)nitc__c_compiler_options___nitc__c_compiler_options__CCompilerOptionsPhase___nitc__phase__Phase__process_annotated_node, /* pointer to c_compiler_options:CCompilerOptionsPhase:c_compiler_options#CCompilerOptionsPhase#process_annotated_node */
(nitmethod_t)nitc___nitc__Phase___process_npropdef, /* pointer to c_compiler_options:CCompilerOptionsPhase:phase#Phase#process_npropdef */
(nitmethod_t)nitc___nitc__Phase___in_hierarchy, /* pointer to c_compiler_options:CCompilerOptionsPhase:phase#Phase#in_hierarchy */
(nitmethod_t)nitc___nitc__Phase___disabled_61d, /* pointer to c_compiler_options:CCompilerOptionsPhase:phase#Phase#disabled= */
(nitmethod_t)core___core__Object___init, /* pointer to c_compiler_options:CCompilerOptionsPhase:kernel#Object#init */
(nitmethod_t)nitc__c_compiler_options___nitc__c_compiler_options__CCompilerOptionsPhase___compiler_annotation_name, /* pointer to c_compiler_options:CCompilerOptionsPhase:c_compiler_options#CCompilerOptionsPhase#compiler_annotation_name */
(nitmethod_t)nitc__c_compiler_options___nitc__c_compiler_options__CCompilerOptionsPhase___linker_annotation_name, /* pointer to c_compiler_options:CCompilerOptionsPhase:c_compiler_options#CCompilerOptionsPhase#linker_annotation_name */
(nitmethod_t)nitc__c_compiler_options___nitc__c_compiler_options__CCompilerOptionsPhase___cpp_compiler_annotation_name, /* pointer to c_compiler_options:CCompilerOptionsPhase:c_compiler_options#CCompilerOptionsPhase#cpp_compiler_annotation_name */
}
};
/* allocate CCompilerOptionsPhase */
val* NEW_nitc__c_compiler_options__CCompilerOptionsPhase(const struct type* type) {
val* self /* : CCompilerOptionsPhase */;
self = nit_alloc(sizeof(struct instance) + 4*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nitc__c_compiler_options__CCompilerOptionsPhase;
self->attrs[COLOR_nitc__phase__Phase___disabled].s = 0; /* _disabled on <self:CCompilerOptionsPhase exact> */
return self;
}
/* runtime class nitc__CCompilerOption: nitc::CCompilerOption (dead=true; need_corpse=false)*/
/* allocate CCompilerOption */
val* NEW_nitc__CCompilerOption(const struct type* type) {
PRINT_ERROR("Runtime error: %s", "CCompilerOption is DEAD");
PRINT_ERROR("\n");
fatal_exit(1);
}
/* runtime class nitc__DirectCCompilerOption: nitc::DirectCCompilerOption (dead=false; need_corpse=false)*/
const struct class class_nitc__DirectCCompilerOption = {
0, /* box_kind */
{
(nitmethod_t)nitc___nitc__DirectCCompilerOption___core__kernel__Object__init, /* pointer to c_compiler_options:DirectCCompilerOption:c_compiler_options#DirectCCompilerOption#init */
(nitmethod_t)core___core__Object____33d_61d, /* pointer to c_compiler_options:DirectCCompilerOption:kernel#Object#!= */
(nitmethod_t)core___core__Object___sys, /* pointer to c_compiler_options:DirectCCompilerOption:kernel#Object#sys */
(nitmethod_t)core___core__Object____61d_61d, /* pointer to c_compiler_options:DirectCCompilerOption:kernel#Object#== */
(nitmethod_t)core__abstract_text___Object___to_s, /* pointer to c_compiler_options:DirectCCompilerOption:abstract_text#Object#to_s */
(nitmethod_t)core___core__Object___is_same_instance, /* pointer to c_compiler_options:DirectCCompilerOption:kernel#Object#is_same_instance */
(nitmethod_t)core___core__Object___hash, /* pointer to c_compiler_options:DirectCCompilerOption:kernel#Object#hash */
(nitmethod_t)core__abstract_text___Object___inspect, /* pointer to c_compiler_options:DirectCCompilerOption:abstract_text#Object#inspect */
(nitmethod_t)core___core__Object___object_id, /* pointer to c_compiler_options:DirectCCompilerOption:kernel#Object#object_id */
(nitmethod_t)core__abstract_text___Object___class_name, /* pointer to c_compiler_options:DirectCCompilerOption:abstract_text#Object#class_name */
(nitmethod_t)core__abstract_text___Object___inspect_head, /* pointer to c_compiler_options:DirectCCompilerOption:abstract_text#Object#inspect_head */
(nitmethod_t)core__abstract_text___Object___native_class_name, /* pointer to c_compiler_options:DirectCCompilerOption:abstract_text#Object#native_class_name */
(nitmethod_t)core___core__Object___output, /* pointer to c_compiler_options:DirectCCompilerOption:kernel#Object#output */
(nitmethod_t)serialization___core__Object___serialization_hash, /* pointer to c_compiler_options:DirectCCompilerOption:serialization#Object#serialization_hash */
(nitmethod_t)serialization___core__Object___is_same_serialized, /* pointer to c_compiler_options:DirectCCompilerOption:serialization#Object#is_same_serialized */
(nitmethod_t)nitc___nitc__DirectCCompilerOption___option_61d, /* pointer to c_compiler_options:DirectCCompilerOption:c_compiler_options#DirectCCompilerOption#option= */
(nitmethod_t)nitc___nitc__DirectCCompilerOption___option, /* pointer to c_compiler_options:DirectCCompilerOption:c_compiler_options#DirectCCompilerOption#option */
(nitmethod_t)core___core__Object___init, /* pointer to c_compiler_options:DirectCCompilerOption:kernel#Object#init */
}
};
/* allocate DirectCCompilerOption */
val* NEW_nitc__DirectCCompilerOption(const struct type* type) {
val* self /* : DirectCCompilerOption */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nitc__DirectCCompilerOption;
return self;
}
/* runtime class nitc__ExecCCompilerOption: nitc::ExecCCompilerOption (dead=false; need_corpse=false)*/
const struct class class_nitc__ExecCCompilerOption = {
0, /* box_kind */
{
(nitmethod_t)nitc___nitc__ExecCCompilerOption___core__kernel__Object__init, /* pointer to c_compiler_options:ExecCCompilerOption:c_compiler_options#ExecCCompilerOption#init */
(nitmethod_t)core___core__Object____33d_61d, /* pointer to c_compiler_options:ExecCCompilerOption:kernel#Object#!= */
(nitmethod_t)core___core__Object___sys, /* pointer to c_compiler_options:ExecCCompilerOption:kernel#Object#sys */
(nitmethod_t)core___core__Object____61d_61d, /* pointer to c_compiler_options:ExecCCompilerOption:kernel#Object#== */
(nitmethod_t)core__abstract_text___Object___to_s, /* pointer to c_compiler_options:ExecCCompilerOption:abstract_text#Object#to_s */
(nitmethod_t)core___core__Object___is_same_instance, /* pointer to c_compiler_options:ExecCCompilerOption:kernel#Object#is_same_instance */
(nitmethod_t)core___core__Object___hash, /* pointer to c_compiler_options:ExecCCompilerOption:kernel#Object#hash */
(nitmethod_t)core__abstract_text___Object___inspect, /* pointer to c_compiler_options:ExecCCompilerOption:abstract_text#Object#inspect */
(nitmethod_t)core___core__Object___object_id, /* pointer to c_compiler_options:ExecCCompilerOption:kernel#Object#object_id */
(nitmethod_t)core__abstract_text___Object___class_name, /* pointer to c_compiler_options:ExecCCompilerOption:abstract_text#Object#class_name */
(nitmethod_t)core__abstract_text___Object___inspect_head, /* pointer to c_compiler_options:ExecCCompilerOption:abstract_text#Object#inspect_head */
(nitmethod_t)core__abstract_text___Object___native_class_name, /* pointer to c_compiler_options:ExecCCompilerOption:abstract_text#Object#native_class_name */
(nitmethod_t)core___core__Object___output, /* pointer to c_compiler_options:ExecCCompilerOption:kernel#Object#output */
(nitmethod_t)serialization___core__Object___serialization_hash, /* pointer to c_compiler_options:ExecCCompilerOption:serialization#Object#serialization_hash */
(nitmethod_t)serialization___core__Object___is_same_serialized, /* pointer to c_compiler_options:ExecCCompilerOption:serialization#Object#is_same_serialized */
(nitmethod_t)nitc___nitc__ExecCCompilerOption___command_61d, /* pointer to c_compiler_options:ExecCCompilerOption:c_compiler_options#ExecCCompilerOption#command= */
(nitmethod_t)nitc___nitc__ExecCCompilerOption___exec_node_61d, /* pointer to c_compiler_options:ExecCCompilerOption:c_compiler_options#ExecCCompilerOption#exec_node= */
(nitmethod_t)nitc___nitc__ExecCCompilerOption___command, /* pointer to c_compiler_options:ExecCCompilerOption:c_compiler_options#ExecCCompilerOption#command */
(nitmethod_t)nitc___nitc__ExecCCompilerOption___exec_node, /* pointer to c_compiler_options:ExecCCompilerOption:c_compiler_options#ExecCCompilerOption#exec_node */
(nitmethod_t)core___core__Object___init, /* pointer to c_compiler_options:ExecCCompilerOption:kernel#Object#init */
}
};
/* allocate ExecCCompilerOption */
val* NEW_nitc__ExecCCompilerOption(const struct type* type) {
val* self /* : ExecCCompilerOption */;
self = nit_alloc(sizeof(struct instance) + 2*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nitc__ExecCCompilerOption;
return self;
}
/* runtime class nitc__CPPLanguage: nitc::CPPLanguage (dead=false; need_corpse=false)*/
const struct class class_nitc__CPPLanguage = {
0, /* box_kind */
{
(nitmethod_t)nitc___nitc__FFILanguage___core__kernel__Object__init, /* pointer to cpp:CPPLanguage:light_ffi_base#FFILanguage#init */
(nitmethod_t)core___core__Object____33d_61d, /* pointer to cpp:CPPLanguage:kernel#Object#!= */
(nitmethod_t)core___core__Object___sys, /* pointer to cpp:CPPLanguage:kernel#Object#sys */
(nitmethod_t)core___core__Object____61d_61d, /* pointer to cpp:CPPLanguage:kernel#Object#== */
(nitmethod_t)core__abstract_text___Object___to_s, /* pointer to cpp:CPPLanguage:abstract_text#Object#to_s */
(nitmethod_t)core___core__Object___is_same_instance, /* pointer to cpp:CPPLanguage:kernel#Object#is_same_instance */
(nitmethod_t)core___core__Object___hash, /* pointer to cpp:CPPLanguage:kernel#Object#hash */
(nitmethod_t)core__abstract_text___Object___inspect, /* pointer to cpp:CPPLanguage:abstract_text#Object#inspect */
(nitmethod_t)core___core__Object___object_id, /* pointer to cpp:CPPLanguage:kernel#Object#object_id */
(nitmethod_t)core__abstract_text___Object___class_name, /* pointer to cpp:CPPLanguage:abstract_text#Object#class_name */
(nitmethod_t)core__abstract_text___Object___inspect_head, /* pointer to cpp:CPPLanguage:abstract_text#Object#inspect_head */
(nitmethod_t)core__abstract_text___Object___native_class_name, /* pointer to cpp:CPPLanguage:abstract_text#Object#native_class_name */
(nitmethod_t)core___core__Object___output, /* pointer to cpp:CPPLanguage:kernel#Object#output */
(nitmethod_t)serialization___core__Object___serialization_hash, /* pointer to cpp:CPPLanguage:serialization#Object#serialization_hash */
(nitmethod_t)serialization___core__Object___is_same_serialized, /* pointer to cpp:CPPLanguage:serialization#Object#is_same_serialized */
(nitmethod_t)nitc___nitc__FFILanguage___ffi_language_assignation_phase_61d, /* pointer to cpp:CPPLanguage:light_ffi_base#FFILanguage#ffi_language_assignation_phase= */
(nitmethod_t)nitc___nitc__FFILanguage___ffi_language_assignation_phase, /* pointer to cpp:CPPLanguage:light_ffi_base#FFILanguage#ffi_language_assignation_phase */
(nitmethod_t)nitc___nitc__CPPLanguage___nitc__light_ffi_base__FFILanguage__get_ftype, /* pointer to cpp:CPPLanguage:cpp#CPPLanguage#get_ftype */
(nitmethod_t)nitc___nitc__CPPLanguage___nitc__light_ffi_base__FFILanguage__identify_language, /* pointer to cpp:CPPLanguage:cpp#CPPLanguage#identify_language */
(nitmethod_t)nitc___nitc__CPPLanguage___nitc__light_ffi_base__FFILanguage__compile_module_block, /* pointer to cpp:CPPLanguage:cpp#CPPLanguage#compile_module_block */
(nitmethod_t)nitc___nitc__CPPLanguage___nitc__light_ffi_base__FFILanguage__compile_extern_class, /* pointer to cpp:CPPLanguage:cpp#CPPLanguage#compile_extern_class */
(nitmethod_t)nitc___nitc__CPPLanguage___nitc__ffi_base__FFILanguage__compile_callback, /* pointer to cpp:CPPLanguage:cpp#CPPLanguage#compile_callback */
(nitmethod_t)nitc___nitc__CPPLanguage___nitc__light_ffi_base__FFILanguage__compile_to_files, /* pointer to cpp:CPPLanguage:cpp#CPPLanguage#compile_to_files */
(nitmethod_t)nitc___nitc__CPPLanguage___nitc__light_ffi_base__FFILanguage__compile_extern_method, /* pointer to cpp:CPPLanguage:cpp#CPPLanguage#compile_extern_method */
(nitmethod_t)core___core__Object___init, /* pointer to cpp:CPPLanguage:kernel#Object#init */
}
};
/* allocate CPPLanguage */
val* NEW_nitc__CPPLanguage(const struct type* type) {
val* self /* : CPPLanguage */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nitc__CPPLanguage;
return self;
}
/* runtime class nitc__CPPCompilationUnit: nitc::CPPCompilationUnit (dead=false; need_corpse=false)*/
const struct class class_nitc__CPPCompilationUnit = {
0, /* box_kind */
{
(nitmethod_t)core___core__Object___init, /* pointer to cpp:CPPCompilationUnit:kernel#Object#init */
(nitmethod_t)core___core__Object____33d_61d, /* pointer to cpp:CPPCompilationUnit:kernel#Object#!= */
(nitmethod_t)core___core__Object___sys, /* pointer to cpp:CPPCompilationUnit:kernel#Object#sys */
(nitmethod_t)core___core__Object____61d_61d, /* pointer to cpp:CPPCompilationUnit:kernel#Object#== */
(nitmethod_t)core__abstract_text___Object___to_s, /* pointer to cpp:CPPCompilationUnit:abstract_text#Object#to_s */
(nitmethod_t)core___core__Object___is_same_instance, /* pointer to cpp:CPPCompilationUnit:kernel#Object#is_same_instance */
(nitmethod_t)core___core__Object___hash, /* pointer to cpp:CPPCompilationUnit:kernel#Object#hash */
(nitmethod_t)core__abstract_text___Object___inspect, /* pointer to cpp:CPPCompilationUnit:abstract_text#Object#inspect */
(nitmethod_t)core___core__Object___object_id, /* pointer to cpp:CPPCompilationUnit:kernel#Object#object_id */
(nitmethod_t)core__abstract_text___Object___class_name, /* pointer to cpp:CPPCompilationUnit:abstract_text#Object#class_name */
(nitmethod_t)core__abstract_text___Object___inspect_head, /* pointer to cpp:CPPCompilationUnit:abstract_text#Object#inspect_head */
(nitmethod_t)core__abstract_text___Object___native_class_name, /* pointer to cpp:CPPCompilationUnit:abstract_text#Object#native_class_name */
(nitmethod_t)core___core__Object___output, /* pointer to cpp:CPPCompilationUnit:kernel#Object#output */
(nitmethod_t)serialization___core__Object___serialization_hash, /* pointer to cpp:CPPCompilationUnit:serialization#Object#serialization_hash */
(nitmethod_t)serialization___core__Object___is_same_serialized, /* pointer to cpp:CPPCompilationUnit:serialization#Object#is_same_serialized */
(nitmethod_t)nitc___nitc__CCompilationUnit___header_c_types, /* pointer to cpp:CPPCompilationUnit:c_tools#CCompilationUnit#header_c_types */
(nitmethod_t)nitc__light___CCompilationUnit___write_as_nitni, /* pointer to cpp:CPPCompilationUnit:light#CCompilationUnit#write_as_nitni */
(nitmethod_t)nitc___nitc__CCompilationUnit___files, /* pointer to cpp:CPPCompilationUnit:c_tools#CCompilationUnit#files */
(nitmethod_t)nitc___nitc__CCompilationUnit___header_c_base, /* pointer to cpp:CPPCompilationUnit:c_tools#CCompilationUnit#header_c_base */
(nitmethod_t)nitc___nitc__CCompilationUnit___body_decl, /* pointer to cpp:CPPCompilationUnit:c_tools#CCompilationUnit#body_decl */
(nitmethod_t)nitc___nitc__CCompilationUnit___header_custom, /* pointer to cpp:CPPCompilationUnit:c_tools#CCompilationUnit#header_custom */
(nitmethod_t)nitc__light_ffi_base___CCompilationUnit___write_header_to_file, /* pointer to cpp:CPPCompilationUnit:light_ffi_base#CCompilationUnit#write_header_to_file */
(nitmethod_t)nitc__light_ffi_base___CCompilationUnit___write_body_to_file, /* pointer to cpp:CPPCompilationUnit:light_ffi_base#CCompilationUnit#write_body_to_file */
(nitmethod_t)nitc___nitc__CCompilationUnit___header_decl, /* pointer to cpp:CPPCompilationUnit:c_tools#CCompilationUnit#header_decl */
(nitmethod_t)nitc___nitc__CCompilationUnit___body_impl, /* pointer to cpp:CPPCompilationUnit:c_tools#CCompilationUnit#body_impl */
(nitmethod_t)nitc___nitc__CCompilationUnit___body_custom, /* pointer to cpp:CPPCompilationUnit:c_tools#CCompilationUnit#body_custom */
(nitmethod_t)nitc__light_ffi_base___CCompilationUnit___write_as_impl, /* pointer to cpp:CPPCompilationUnit:light_ffi_base#CCompilationUnit#write_as_impl */
(nitmethod_t)nitc___nitc__CCompilationUnit___compile_header_core, /* pointer to cpp:CPPCompilationUnit:c_tools#CCompilationUnit#compile_header_core */
(nitmethod_t)nitc___nitc__CCompilationUnit___compile_body_core, /* pointer to cpp:CPPCompilationUnit:c_tools#CCompilationUnit#compile_body_core */
(nitmethod_t)nitc___nitc__CCompilationUnit___add_local_function, /* pointer to cpp:CPPCompilationUnit:c_tools#CCompilationUnit#add_local_function */
(nitmethod_t)nitc__java___CCompilationUnit___add_non_static_local_function, /* pointer to cpp:CPPCompilationUnit:java#CCompilationUnit#add_non_static_local_function */
(nitmethod_t)nitc___nitc__CCompilationUnit___add_exported_function, /* pointer to cpp:CPPCompilationUnit:c_tools#CCompilationUnit#add_exported_function */
(nitmethod_t)nitc___nitc__CPPCompilationUnit___write_to_files, /* pointer to cpp:CPPCompilationUnit:cpp#CPPCompilationUnit#write_to_files */
}
};
/* allocate CPPCompilationUnit */
val* NEW_nitc__CPPCompilationUnit(const struct type* type) {
val* self /* : CPPCompilationUnit */;
val* var /* : Template */;
val* var1 /* : Template */;
val* var2 /* : Template */;
val* var3 /* : Template */;
val* var4 /* : Template */;
val* var5 /* : Template */;
val* var6 /* : Template */;
val* var7 /* : Array[String] */;
self = nit_alloc(sizeof(struct instance) + 8*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nitc__CPPCompilationUnit;
var = NEW_template__Template(&type_template__Template);
{
((void(*)(val* self))(var->class->vft[COLOR_core__kernel__Object__init]))(var); /* init on <var:Template>*/
}
self->attrs[COLOR_nitc__c_tools__CCompilationUnit___header_c_base].val = var; /* _header_c_base on <self:CPPCompilationUnit exact> */
var1 = NEW_template__Template(&type_template__Template);
{
((void(*)(val* self))(var1->class->vft[COLOR_core__kernel__Object__init]))(var1); /* init on <var1:Template>*/
}
self->attrs[COLOR_nitc__c_tools__CCompilationUnit___header_custom].val = var1; /* _header_custom on <self:CPPCompilationUnit exact> */
var2 = NEW_template__Template(&type_template__Template);
{
((void(*)(val* self))(var2->class->vft[COLOR_core__kernel__Object__init]))(var2); /* init on <var2:Template>*/
}
self->attrs[COLOR_nitc__c_tools__CCompilationUnit___header_c_types].val = var2; /* _header_c_types on <self:CPPCompilationUnit exact> */
var3 = NEW_template__Template(&type_template__Template);
{
((void(*)(val* self))(var3->class->vft[COLOR_core__kernel__Object__init]))(var3); /* init on <var3:Template>*/
}
self->attrs[COLOR_nitc__c_tools__CCompilationUnit___header_decl].val = var3; /* _header_decl on <self:CPPCompilationUnit exact> */
var4 = NEW_template__Template(&type_template__Template);
{
((void(*)(val* self))(var4->class->vft[COLOR_core__kernel__Object__init]))(var4); /* init on <var4:Template>*/
}
self->attrs[COLOR_nitc__c_tools__CCompilationUnit___body_decl].val = var4; /* _body_decl on <self:CPPCompilationUnit exact> */
var5 = NEW_template__Template(&type_template__Template);
{
((void(*)(val* self))(var5->class->vft[COLOR_core__kernel__Object__init]))(var5); /* init on <var5:Template>*/
}
self->attrs[COLOR_nitc__c_tools__CCompilationUnit___body_custom].val = var5; /* _body_custom on <self:CPPCompilationUnit exact> */
var6 = NEW_template__Template(&type_template__Template);
{
((void(*)(val* self))(var6->class->vft[COLOR_core__kernel__Object__init]))(var6); /* init on <var6:Template>*/
}
self->attrs[COLOR_nitc__c_tools__CCompilationUnit___body_impl].val = var6; /* _body_impl on <self:CPPCompilationUnit exact> */
var7 = NEW_core__Array(&type_core__Array__core__String);
{
core___core__Array___core__kernel__Object__init(var7); /* Direct call array#Array#init on <var7:Array[String]>*/
}
self->attrs[COLOR_nitc__c_tools__CCompilationUnit___files].val = var7; /* _files on <self:CPPCompilationUnit exact> */
return self;
}
/* runtime class nitc__ExternCppFile: nitc::ExternCppFile (dead=false; need_corpse=false)*/
const struct class class_nitc__ExternCppFile = {
0, /* box_kind */
{
(nitmethod_t)nitc___nitc__ExternCppFile___core__kernel__Object__init, /* pointer to cpp:ExternCppFile:cpp#ExternCppFile#init */
(nitmethod_t)core___core__Object____33d_61d, /* pointer to cpp:ExternCppFile:kernel#Object#!= */
(nitmethod_t)core___core__Object___sys, /* pointer to cpp:ExternCppFile:kernel#Object#sys */
(nitmethod_t)core___core__Object____61d_61d, /* pointer to cpp:ExternCppFile:kernel#Object#== */
(nitmethod_t)core__abstract_text___Object___to_s, /* pointer to cpp:ExternCppFile:abstract_text#Object#to_s */
(nitmethod_t)core___core__Object___is_same_instance, /* pointer to cpp:ExternCppFile:kernel#Object#is_same_instance */
(nitmethod_t)core___core__Object___hash, /* pointer to cpp:ExternCppFile:kernel#Object#hash */
(nitmethod_t)core__abstract_text___Object___inspect, /* pointer to cpp:ExternCppFile:abstract_text#Object#inspect */
(nitmethod_t)core___core__Object___object_id, /* pointer to cpp:ExternCppFile:kernel#Object#object_id */
(nitmethod_t)core__abstract_text___Object___class_name, /* pointer to cpp:ExternCppFile:abstract_text#Object#class_name */
(nitmethod_t)core__abstract_text___Object___inspect_head, /* pointer to cpp:ExternCppFile:abstract_text#Object#inspect_head */
(nitmethod_t)core__abstract_text___Object___native_class_name, /* pointer to cpp:ExternCppFile:abstract_text#Object#native_class_name */
(nitmethod_t)core___core__Object___output, /* pointer to cpp:ExternCppFile:kernel#Object#output */
(nitmethod_t)serialization___core__Object___serialization_hash, /* pointer to cpp:ExternCppFile:serialization#Object#serialization_hash */
(nitmethod_t)serialization___core__Object___is_same_serialized, /* pointer to cpp:ExternCppFile:serialization#Object#is_same_serialized */
(nitmethod_t)nitc___nitc__ExternFile___filename_61d, /* pointer to cpp:ExternCppFile:c_tools#ExternFile#filename= */
(nitmethod_t)nitc___nitc__ExternFile___filename, /* pointer to cpp:ExternCppFile:c_tools#ExternFile#filename */
(nitmethod_t)nitc___nitc__ExternFile___pkgconfigs, /* pointer to cpp:ExternCppFile:c_tools#ExternFile#pkgconfigs */
(nitmethod_t)nitc___nitc__ExternCppFile___nitc__c_tools__ExternFile__makefile_rule_name, /* pointer to cpp:ExternCppFile:cpp#ExternCppFile#makefile_rule_name */
(nitmethod_t)nitc___nitc__ExternCppFile___nitc__c_tools__ExternFile__makefile_rule_content, /* pointer to cpp:ExternCppFile:cpp#ExternCppFile#makefile_rule_content */
(nitmethod_t)nitc___nitc__ExternCppFile___nitc__c_tools__ExternFile__compiles_to_o_file, /* pointer to cpp:ExternCppFile:cpp#ExternCppFile#compiles_to_o_file */
(nitmethod_t)nitc___nitc__ExternFile___add_to_jar, /* pointer to cpp:ExternCppFile:c_tools#ExternFile#add_to_jar */
(nitmethod_t)core___core__Object___init, /* pointer to cpp:ExternCppFile:kernel#Object#init */
(nitmethod_t)nitc___nitc__ExternCppFile___mmodule_61d, /* pointer to cpp:ExternCppFile:cpp#ExternCppFile#mmodule= */
(nitmethod_t)nitc___nitc__ExternCppFile___mmodule, /* pointer to cpp:ExternCppFile:cpp#ExternCppFile#mmodule */
(nitmethod_t)nitc___nitc__ExternFile___core__kernel__Object__init, /* pointer to cpp:ExternCppFile:c_tools#ExternFile#init */
}
};
/* allocate ExternCppFile */
val* NEW_nitc__ExternCppFile(const struct type* type) {
val* self /* : ExternCppFile */;
val* var /* : Array[String] */;
self = nit_alloc(sizeof(struct instance) + 3*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nitc__ExternCppFile;
var = NEW_core__Array(&type_core__Array__core__String);
{
core___core__Array___core__kernel__Object__init(var); /* Direct call array#Array#init on <var:Array[String]>*/
}
self->attrs[COLOR_nitc__c_tools__ExternFile___pkgconfigs].val = var; /* _pkgconfigs on <self:ExternCppFile exact> */
return self;
}
/* runtime class nitc__ForeignCppType: nitc::ForeignCppType (dead=false; need_corpse=false)*/
const struct class class_nitc__ForeignCppType = {
0, /* box_kind */
{
(nitmethod_t)nitc___nitc__ForeignCppType___core__kernel__Object__init, /* pointer to cpp:ForeignCppType:cpp#ForeignCppType#init */
(nitmethod_t)core___core__Object____33d_61d, /* pointer to cpp:ForeignCppType:kernel#Object#!= */
(nitmethod_t)core___core__Object___sys, /* pointer to cpp:ForeignCppType:kernel#Object#sys */
(nitmethod_t)core___core__Object____61d_61d, /* pointer to cpp:ForeignCppType:kernel#Object#== */
(nitmethod_t)core__abstract_text___Object___to_s, /* pointer to cpp:ForeignCppType:abstract_text#Object#to_s */
(nitmethod_t)core___core__Object___is_same_instance, /* pointer to cpp:ForeignCppType:kernel#Object#is_same_instance */
(nitmethod_t)core___core__Object___hash, /* pointer to cpp:ForeignCppType:kernel#Object#hash */
(nitmethod_t)core__abstract_text___Object___inspect, /* pointer to cpp:ForeignCppType:abstract_text#Object#inspect */
(nitmethod_t)core___core__Object___object_id, /* pointer to cpp:ForeignCppType:kernel#Object#object_id */
(nitmethod_t)core__abstract_text___Object___class_name, /* pointer to cpp:ForeignCppType:abstract_text#Object#class_name */
(nitmethod_t)core__abstract_text___Object___inspect_head, /* pointer to cpp:ForeignCppType:abstract_text#Object#inspect_head */
(nitmethod_t)core__abstract_text___Object___native_class_name, /* pointer to cpp:ForeignCppType:abstract_text#Object#native_class_name */
(nitmethod_t)core___core__Object___output, /* pointer to cpp:ForeignCppType:kernel#Object#output */
(nitmethod_t)serialization___core__Object___serialization_hash, /* pointer to cpp:ForeignCppType:serialization#Object#serialization_hash */
(nitmethod_t)serialization___core__Object___is_same_serialized, /* pointer to cpp:ForeignCppType:serialization#Object#is_same_serialized */
(nitmethod_t)nitc___nitc__ForeignType___ctype, /* pointer to cpp:ForeignCppType:light_ffi_base#ForeignType#ctype */
(nitmethod_t)nitc___nitc__ForeignCppType___cpp_type_61d, /* pointer to cpp:ForeignCppType:cpp#ForeignCppType#cpp_type= */
(nitmethod_t)nitc___nitc__ForeignCppType___cpp_type, /* pointer to cpp:ForeignCppType:cpp#ForeignCppType#cpp_type */
(nitmethod_t)core___core__Object___init, /* pointer to cpp:ForeignCppType:kernel#Object#init */
}
};
/* allocate ForeignCppType */
val* NEW_nitc__ForeignCppType(const struct type* type) {
val* self /* : ForeignCppType */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nitc__ForeignCppType;
return self;
}
/* runtime class nitc__cpp__CppCallContext: nitc::cpp::CppCallContext (dead=false; need_corpse=false)*/
const struct class class_nitc__cpp__CppCallContext = {
0, /* box_kind */
{
(nitmethod_t)core___core__Object___init, /* pointer to cpp:CppCallContext:kernel#Object#init */
(nitmethod_t)core___core__Object____33d_61d, /* pointer to cpp:CppCallContext:kernel#Object#!= */
(nitmethod_t)core___core__Object___sys, /* pointer to cpp:CppCallContext:kernel#Object#sys */
(nitmethod_t)core___core__Object____61d_61d, /* pointer to cpp:CppCallContext:kernel#Object#== */
(nitmethod_t)core__abstract_text___Object___to_s, /* pointer to cpp:CppCallContext:abstract_text#Object#to_s */
(nitmethod_t)core___core__Object___is_same_instance, /* pointer to cpp:CppCallContext:kernel#Object#is_same_instance */
(nitmethod_t)core___core__Object___hash, /* pointer to cpp:CppCallContext:kernel#Object#hash */
(nitmethod_t)core__abstract_text___Object___inspect, /* pointer to cpp:CppCallContext:abstract_text#Object#inspect */
(nitmethod_t)core___core__Object___object_id, /* pointer to cpp:CppCallContext:kernel#Object#object_id */
(nitmethod_t)core__abstract_text___Object___class_name, /* pointer to cpp:CppCallContext:abstract_text#Object#class_name */
(nitmethod_t)core__abstract_text___Object___inspect_head, /* pointer to cpp:CppCallContext:abstract_text#Object#inspect_head */
(nitmethod_t)core__abstract_text___Object___native_class_name, /* pointer to cpp:CppCallContext:abstract_text#Object#native_class_name */
(nitmethod_t)core___core__Object___output, /* pointer to cpp:CppCallContext:kernel#Object#output */
(nitmethod_t)serialization___core__Object___serialization_hash, /* pointer to cpp:CppCallContext:serialization#Object#serialization_hash */
(nitmethod_t)serialization___core__Object___is_same_serialized, /* pointer to cpp:CppCallContext:serialization#Object#is_same_serialized */
(nitmethod_t)nitc__cpp___nitc__cpp__CppCallContext___nitc__nitni_utilities__CallContext__name_mtype, /* pointer to cpp:CppCallContext:cpp#CppCallContext#name_mtype */
(nitmethod_t)nitc___nitc__CallContext___cast_to, /* pointer to cpp:CppCallContext:nitni_utilities#CallContext#cast_to */
(nitmethod_t)nitc___nitc__CallContext___cast_from, /* pointer to cpp:CppCallContext:nitni_utilities#CallContext#cast_from */
}
};
/* allocate CppCallContext */
val* NEW_nitc__cpp__CppCallContext(const struct type* type) {
val* self /* : CppCallContext */;
self = nit_alloc(sizeof(struct instance) + 0*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nitc__cpp__CppCallContext;
return self;
}
/* runtime class nitc__ToCppCallContext: nitc::ToCppCallContext (dead=false; need_corpse=false)*/
const struct class class_nitc__ToCppCallContext = {
0, /* box_kind */
{
(nitmethod_t)core___core__Object___init, /* pointer to cpp:ToCppCallContext:kernel#Object#init */
(nitmethod_t)core___core__Object____33d_61d, /* pointer to cpp:ToCppCallContext:kernel#Object#!= */
(nitmethod_t)core___core__Object___sys, /* pointer to cpp:ToCppCallContext:kernel#Object#sys */
(nitmethod_t)core___core__Object____61d_61d, /* pointer to cpp:ToCppCallContext:kernel#Object#== */
(nitmethod_t)core__abstract_text___Object___to_s, /* pointer to cpp:ToCppCallContext:abstract_text#Object#to_s */
(nitmethod_t)core___core__Object___is_same_instance, /* pointer to cpp:ToCppCallContext:kernel#Object#is_same_instance */
(nitmethod_t)core___core__Object___hash, /* pointer to cpp:ToCppCallContext:kernel#Object#hash */
(nitmethod_t)core__abstract_text___Object___inspect, /* pointer to cpp:ToCppCallContext:abstract_text#Object#inspect */
(nitmethod_t)core___core__Object___object_id, /* pointer to cpp:ToCppCallContext:kernel#Object#object_id */
(nitmethod_t)core__abstract_text___Object___class_name, /* pointer to cpp:ToCppCallContext:abstract_text#Object#class_name */
(nitmethod_t)core__abstract_text___Object___inspect_head, /* pointer to cpp:ToCppCallContext:abstract_text#Object#inspect_head */
(nitmethod_t)core__abstract_text___Object___native_class_name, /* pointer to cpp:ToCppCallContext:abstract_text#Object#native_class_name */
(nitmethod_t)core___core__Object___output, /* pointer to cpp:ToCppCallContext:kernel#Object#output */
(nitmethod_t)serialization___core__Object___serialization_hash, /* pointer to cpp:ToCppCallContext:serialization#Object#serialization_hash */
(nitmethod_t)serialization___core__Object___is_same_serialized, /* pointer to cpp:ToCppCallContext:serialization#Object#is_same_serialized */
(nitmethod_t)nitc__cpp___nitc__cpp__CppCallContext___nitc__nitni_utilities__CallContext__name_mtype, /* pointer to cpp:ToCppCallContext:cpp#CppCallContext#name_mtype */
(nitmethod_t)nitc___nitc__ToCppCallContext___nitc__nitni_utilities__CallContext__cast_to, /* pointer to cpp:ToCppCallContext:cpp#ToCppCallContext#cast_to */
(nitmethod_t)nitc___nitc__CallContext___cast_from, /* pointer to cpp:ToCppCallContext:nitni_utilities#CallContext#cast_from */
}
};
/* allocate ToCppCallContext */
val* NEW_nitc__ToCppCallContext(const struct type* type) {
val* self /* : ToCppCallContext */;
self = nit_alloc(sizeof(struct instance) + 0*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nitc__ToCppCallContext;
return self;
}
/* runtime class nitc__cpp__FromCppCallContext: nitc::cpp::FromCppCallContext (dead=false; need_corpse=false)*/
const struct class class_nitc__cpp__FromCppCallContext = {
0, /* box_kind */
{
(nitmethod_t)core___core__Object___init, /* pointer to cpp:FromCppCallContext:kernel#Object#init */
(nitmethod_t)core___core__Object____33d_61d, /* pointer to cpp:FromCppCallContext:kernel#Object#!= */
(nitmethod_t)core___core__Object___sys, /* pointer to cpp:FromCppCallContext:kernel#Object#sys */
(nitmethod_t)core___core__Object____61d_61d, /* pointer to cpp:FromCppCallContext:kernel#Object#== */
(nitmethod_t)core__abstract_text___Object___to_s, /* pointer to cpp:FromCppCallContext:abstract_text#Object#to_s */
(nitmethod_t)core___core__Object___is_same_instance, /* pointer to cpp:FromCppCallContext:kernel#Object#is_same_instance */
(nitmethod_t)core___core__Object___hash, /* pointer to cpp:FromCppCallContext:kernel#Object#hash */
(nitmethod_t)core__abstract_text___Object___inspect, /* pointer to cpp:FromCppCallContext:abstract_text#Object#inspect */
(nitmethod_t)core___core__Object___object_id, /* pointer to cpp:FromCppCallContext:kernel#Object#object_id */
(nitmethod_t)core__abstract_text___Object___class_name, /* pointer to cpp:FromCppCallContext:abstract_text#Object#class_name */
(nitmethod_t)core__abstract_text___Object___inspect_head, /* pointer to cpp:FromCppCallContext:abstract_text#Object#inspect_head */
(nitmethod_t)core__abstract_text___Object___native_class_name, /* pointer to cpp:FromCppCallContext:abstract_text#Object#native_class_name */
(nitmethod_t)core___core__Object___output, /* pointer to cpp:FromCppCallContext:kernel#Object#output */
(nitmethod_t)serialization___core__Object___serialization_hash, /* pointer to cpp:FromCppCallContext:serialization#Object#serialization_hash */
(nitmethod_t)serialization___core__Object___is_same_serialized, /* pointer to cpp:FromCppCallContext:serialization#Object#is_same_serialized */
(nitmethod_t)nitc__cpp___nitc__cpp__CppCallContext___nitc__nitni_utilities__CallContext__name_mtype, /* pointer to cpp:FromCppCallContext:cpp#CppCallContext#name_mtype */
(nitmethod_t)nitc___nitc__CallContext___cast_to, /* pointer to cpp:FromCppCallContext:nitni_utilities#CallContext#cast_to */
(nitmethod_t)nitc__cpp___nitc__cpp__FromCppCallContext___nitc__nitni_utilities__CallContext__cast_from, /* pointer to cpp:FromCppCallContext:cpp#FromCppCallContext#cast_from */
}
};
/* allocate FromCppCallContext */
val* NEW_nitc__cpp__FromCppCallContext(const struct type* type) {
val* self /* : FromCppCallContext */;
self = nit_alloc(sizeof(struct instance) + 0*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nitc__cpp__FromCppCallContext;
return self;
}
/* runtime class nitc__JavaLanguage: nitc::JavaLanguage (dead=false; need_corpse=false)*/
const struct class class_nitc__JavaLanguage = {
0, /* box_kind */
{
(nitmethod_t)nitc___nitc__FFILanguage___core__kernel__Object__init, /* pointer to java:JavaLanguage:light_ffi_base#FFILanguage#init */
(nitmethod_t)core___core__Object____33d_61d, /* pointer to java:JavaLanguage:kernel#Object#!= */
(nitmethod_t)core___core__Object___sys, /* pointer to java:JavaLanguage:kernel#Object#sys */
(nitmethod_t)core___core__Object____61d_61d, /* pointer to java:JavaLanguage:kernel#Object#== */
(nitmethod_t)core__abstract_text___Object___to_s, /* pointer to java:JavaLanguage:abstract_text#Object#to_s */
(nitmethod_t)core___core__Object___is_same_instance, /* pointer to java:JavaLanguage:kernel#Object#is_same_instance */
(nitmethod_t)core___core__Object___hash, /* pointer to java:JavaLanguage:kernel#Object#hash */
(nitmethod_t)core__abstract_text___Object___inspect, /* pointer to java:JavaLanguage:abstract_text#Object#inspect */
(nitmethod_t)core___core__Object___object_id, /* pointer to java:JavaLanguage:kernel#Object#object_id */
(nitmethod_t)core__abstract_text___Object___class_name, /* pointer to java:JavaLanguage:abstract_text#Object#class_name */
(nitmethod_t)core__abstract_text___Object___inspect_head, /* pointer to java:JavaLanguage:abstract_text#Object#inspect_head */
(nitmethod_t)core__abstract_text___Object___native_class_name, /* pointer to java:JavaLanguage:abstract_text#Object#native_class_name */
(nitmethod_t)core___core__Object___output, /* pointer to java:JavaLanguage:kernel#Object#output */
(nitmethod_t)serialization___core__Object___serialization_hash, /* pointer to java:JavaLanguage:serialization#Object#serialization_hash */
(nitmethod_t)serialization___core__Object___is_same_serialized, /* pointer to java:JavaLanguage:serialization#Object#is_same_serialized */
(nitmethod_t)nitc___nitc__FFILanguage___ffi_language_assignation_phase_61d, /* pointer to java:JavaLanguage:light_ffi_base#FFILanguage#ffi_language_assignation_phase= */
(nitmethod_t)nitc___nitc__FFILanguage___ffi_language_assignation_phase, /* pointer to java:JavaLanguage:light_ffi_base#FFILanguage#ffi_language_assignation_phase */
(nitmethod_t)nitc___nitc__JavaLanguage___nitc__light_ffi_base__FFILanguage__get_ftype, /* pointer to java:JavaLanguage:java#JavaLanguage#get_ftype */
(nitmethod_t)nitc___nitc__JavaLanguage___nitc__light_ffi_base__FFILanguage__identify_language, /* pointer to java:JavaLanguage:java#JavaLanguage#identify_language */
(nitmethod_t)nitc___nitc__JavaLanguage___nitc__light_ffi_base__FFILanguage__compile_module_block, /* pointer to java:JavaLanguage:java#JavaLanguage#compile_module_block */
(nitmethod_t)nitc___nitc__JavaLanguage___nitc__light_ffi_base__FFILanguage__compile_extern_class, /* pointer to java:JavaLanguage:java#JavaLanguage#compile_extern_class */
(nitmethod_t)nitc___nitc__JavaLanguage___nitc__ffi_base__FFILanguage__compile_callback, /* pointer to java:JavaLanguage:java#JavaLanguage#compile_callback */
(nitmethod_t)nitc__extra_java_files___JavaLanguage___nitc__light_ffi_base__FFILanguage__compile_to_files, /* pointer to java:JavaLanguage:extra_java_files#JavaLanguage#compile_to_files */
(nitmethod_t)nitc___nitc__JavaLanguage___nitc__light_ffi_base__FFILanguage__compile_extern_method, /* pointer to java:JavaLanguage:java#JavaLanguage#compile_extern_method */
(nitmethod_t)core___core__Object___init, /* pointer to java:JavaLanguage:kernel#Object#init */
(nitmethod_t)nitc___nitc__JavaLanguage___ffi_ccu_61d, /* pointer to java:JavaLanguage:java#JavaLanguage#ffi_ccu= */
(nitmethod_t)nitc___nitc__JavaLanguage___ffi_ccu, /* pointer to java:JavaLanguage:java#JavaLanguage#ffi_ccu */
(nitmethod_t)nitc___nitc__JavaLanguage___nitc__light_ffi_base__FFILanguage__compile_to_files, /* pointer to java:JavaLanguage:java#JavaLanguage#compile_to_files */
}
};
/* allocate JavaLanguage */
val* NEW_nitc__JavaLanguage(const struct type* type) {
val* self /* : JavaLanguage */;
self = nit_alloc(sizeof(struct instance) + 2*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nitc__JavaLanguage;
return self;
}
/* runtime class nitc__JavaClassTemplate: nitc::JavaClassTemplate (dead=false; need_corpse=false)*/
const struct class class_nitc__JavaClassTemplate = {
0, /* box_kind */
{
(nitmethod_t)nitc___nitc__JavaClassTemplate___core__kernel__Object__init, /* pointer to java:JavaClassTemplate:java#JavaClassTemplate#init */
(nitmethod_t)core___core__Object____33d_61d, /* pointer to java:JavaClassTemplate:kernel#Object#!= */
(nitmethod_t)core___core__Object___sys, /* pointer to java:JavaClassTemplate:kernel#Object#sys */
(nitmethod_t)core___core__Object____61d_61d, /* pointer to java:JavaClassTemplate:kernel#Object#== */
(nitmethod_t)core__abstract_text___Object___to_s, /* pointer to java:JavaClassTemplate:abstract_text#Object#to_s */
(nitmethod_t)core___core__Object___is_same_instance, /* pointer to java:JavaClassTemplate:kernel#Object#is_same_instance */
(nitmethod_t)core___core__Object___hash, /* pointer to java:JavaClassTemplate:kernel#Object#hash */
(nitmethod_t)core__abstract_text___Object___inspect, /* pointer to java:JavaClassTemplate:abstract_text#Object#inspect */
(nitmethod_t)core___core__Object___object_id, /* pointer to java:JavaClassTemplate:kernel#Object#object_id */
(nitmethod_t)core__abstract_text___Object___class_name, /* pointer to java:JavaClassTemplate:abstract_text#Object#class_name */
(nitmethod_t)core__abstract_text___Object___inspect_head, /* pointer to java:JavaClassTemplate:abstract_text#Object#inspect_head */
(nitmethod_t)core__abstract_text___Object___native_class_name, /* pointer to java:JavaClassTemplate:abstract_text#Object#native_class_name */
(nitmethod_t)core___core__Object___output, /* pointer to java:JavaClassTemplate:kernel#Object#output */
(nitmethod_t)serialization___core__Object___serialization_hash, /* pointer to java:JavaClassTemplate:serialization#Object#serialization_hash */
(nitmethod_t)serialization___core__Object___is_same_serialized, /* pointer to java:JavaClassTemplate:serialization#Object#is_same_serialized */
(nitmethod_t)template___template__Template___is_writing, /* pointer to java:JavaClassTemplate:template#Template#is_writing */
(nitmethod_t)template___template__Template___is_writing_61d, /* pointer to java:JavaClassTemplate:template#Template#is_writing= */
(nitmethod_t)template___template__Template___force_render, /* pointer to java:JavaClassTemplate:template#Template#force_render */
(nitmethod_t)template___template__Template___content, /* pointer to java:JavaClassTemplate:template#Template#content */
(nitmethod_t)template___template__Template___render_done, /* pointer to java:JavaClassTemplate:template#Template#render_done */
(nitmethod_t)template___template__Template___render_done_61d, /* pointer to java:JavaClassTemplate:template#Template#render_done= */
(nitmethod_t)nitc___nitc__JavaClassTemplate___template__Template__rendering, /* pointer to java:JavaClassTemplate:java#JavaClassTemplate#rendering */
(nitmethod_t)template___template__Template___freeze, /* pointer to java:JavaClassTemplate:template#Template#freeze */
(nitmethod_t)template___template__Template___add, /* pointer to java:JavaClassTemplate:template#Template#add */
(nitmethod_t)template___template__Template___addn, /* pointer to java:JavaClassTemplate:template#Template#addn */
(nitmethod_t)template___template__Template___is_frozen, /* pointer to java:JavaClassTemplate:template#Template#is_frozen */
(nitmethod_t)template___template__Template___is_frozen_61d, /* pointer to java:JavaClassTemplate:template#Template#is_frozen= */
(nitmethod_t)nitc___nitc__JavaClassTemplate___class_content, /* pointer to java:JavaClassTemplate:java#JavaClassTemplate#class_content */
(nitmethod_t)nitc___nitc__JavaClassTemplate___header, /* pointer to java:JavaClassTemplate:java#JavaClassTemplate#header */
(nitmethod_t)nitc___nitc__JavaClassTemplate___java_class_name_61d, /* pointer to java:JavaClassTemplate:java#JavaClassTemplate#java_class_name= */
(nitmethod_t)nitc__android___JavaClassTemplate___write_to_files, /* pointer to java:JavaClassTemplate:android#JavaClassTemplate#write_to_files */
(nitmethod_t)nitc___nitc__JavaClassTemplate___java_class_name, /* pointer to java:JavaClassTemplate:java#JavaClassTemplate#java_class_name */
(nitmethod_t)core___core__Object___init, /* pointer to java:JavaClassTemplate:kernel#Object#init */
(nitmethod_t)nitc___nitc__JavaClassTemplate___write_to_files, /* pointer to java:JavaClassTemplate:java#JavaClassTemplate#write_to_files */
NULL, /* empty */
NULL, /* empty */
(nitmethod_t)core__file___Writable___write_to_file, /* pointer to java:JavaClassTemplate:file#Writable#write_to_file */
(nitmethod_t)template___template__Template___core__stream__Writable__write_to, /* pointer to java:JavaClassTemplate:template#Template#write_to */
}
};
/* allocate JavaClassTemplate */
val* NEW_nitc__JavaClassTemplate(const struct type* type) {
val* self /* : JavaClassTemplate */;
val* var /* : Array[Writable] */;
val* var1 /* : Template */;
val* var2 /* : Template */;
self = nit_alloc(sizeof(struct instance) + 7*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nitc__JavaClassTemplate;
self->attrs[COLOR_template__Template___is_frozen].s = 0; /* _is_frozen on <self:JavaClassTemplate exact> */
var = NEW_core__Array(&type_core__Array__core__Writable);
{
core___core__Array___core__kernel__Object__init(var); /* Direct call array#Array#init on <var:Array[Writable]>*/
}
self->attrs[COLOR_template__Template___content].val = var; /* _content on <self:JavaClassTemplate exact> */
self->attrs[COLOR_template__Template___render_done].s = 0; /* _render_done on <self:JavaClassTemplate exact> */
self->attrs[COLOR_template__Template___is_writing].s = 0; /* _is_writing on <self:JavaClassTemplate exact> */
var1 = NEW_template__Template(&type_template__Template);
{
((void(*)(val* self))(var1->class->vft[COLOR_core__kernel__Object__init]))(var1); /* init on <var1:Template>*/
}
self->attrs[COLOR_nitc__java__JavaClassTemplate___header].val = var1; /* _header on <self:JavaClassTemplate exact> */
var2 = NEW_template__Template(&type_template__Template);
{
((void(*)(val* self))(var2->class->vft[COLOR_core__kernel__Object__init]))(var2); /* init on <var2:Template>*/
}
self->attrs[COLOR_nitc__java__JavaClassTemplate___class_content].val = var2; /* _class_content on <self:JavaClassTemplate exact> */
return self;
}
/* runtime class nitc__JavaFile: nitc::JavaFile (dead=false; need_corpse=false)*/
const struct class class_nitc__JavaFile = {
0, /* box_kind */
{
(nitmethod_t)nitc___nitc__ExternFile___core__kernel__Object__init, /* pointer to java:JavaFile:c_tools#ExternFile#init */
(nitmethod_t)core___core__Object____33d_61d, /* pointer to java:JavaFile:kernel#Object#!= */
(nitmethod_t)core___core__Object___sys, /* pointer to java:JavaFile:kernel#Object#sys */
(nitmethod_t)core___core__Object____61d_61d, /* pointer to java:JavaFile:kernel#Object#== */
(nitmethod_t)core__abstract_text___Object___to_s, /* pointer to java:JavaFile:abstract_text#Object#to_s */
(nitmethod_t)core___core__Object___is_same_instance, /* pointer to java:JavaFile:kernel#Object#is_same_instance */
(nitmethod_t)core___core__Object___hash, /* pointer to java:JavaFile:kernel#Object#hash */
(nitmethod_t)core__abstract_text___Object___inspect, /* pointer to java:JavaFile:abstract_text#Object#inspect */
(nitmethod_t)core___core__Object___object_id, /* pointer to java:JavaFile:kernel#Object#object_id */
(nitmethod_t)core__abstract_text___Object___class_name, /* pointer to java:JavaFile:abstract_text#Object#class_name */
(nitmethod_t)core__abstract_text___Object___inspect_head, /* pointer to java:JavaFile:abstract_text#Object#inspect_head */
(nitmethod_t)core__abstract_text___Object___native_class_name, /* pointer to java:JavaFile:abstract_text#Object#native_class_name */
(nitmethod_t)core___core__Object___output, /* pointer to java:JavaFile:kernel#Object#output */
(nitmethod_t)serialization___core__Object___serialization_hash, /* pointer to java:JavaFile:serialization#Object#serialization_hash */
(nitmethod_t)serialization___core__Object___is_same_serialized, /* pointer to java:JavaFile:serialization#Object#is_same_serialized */
(nitmethod_t)nitc___nitc__ExternFile___filename_61d, /* pointer to java:JavaFile:c_tools#ExternFile#filename= */
(nitmethod_t)nitc___nitc__ExternFile___filename, /* pointer to java:JavaFile:c_tools#ExternFile#filename */
(nitmethod_t)nitc___nitc__ExternFile___pkgconfigs, /* pointer to java:JavaFile:c_tools#ExternFile#pkgconfigs */
(nitmethod_t)nitc___nitc__JavaFile___nitc__c_tools__ExternFile__makefile_rule_name, /* pointer to java:JavaFile:java#JavaFile#makefile_rule_name */
(nitmethod_t)nitc___nitc__JavaFile___nitc__c_tools__ExternFile__makefile_rule_content, /* pointer to java:JavaFile:java#JavaFile#makefile_rule_content */
(nitmethod_t)nitc___nitc__ExternFile___compiles_to_o_file, /* pointer to java:JavaFile:c_tools#ExternFile#compiles_to_o_file */
(nitmethod_t)nitc___nitc__JavaFile___nitc__c_tools__ExternFile__add_to_jar, /* pointer to java:JavaFile:java#JavaFile#add_to_jar */
(nitmethod_t)core___core__Object___init, /* pointer to java:JavaFile:kernel#Object#init */
}
};
/* allocate JavaFile */
val* NEW_nitc__JavaFile(const struct type* type) {
val* self /* : JavaFile */;
val* var /* : Array[String] */;
self = nit_alloc(sizeof(struct instance) + 2*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nitc__JavaFile;
var = NEW_core__Array(&type_core__Array__core__String);
{
core___core__Array___core__kernel__Object__init(var); /* Direct call array#Array#init on <var:Array[String]>*/
}
self->attrs[COLOR_nitc__c_tools__ExternFile___pkgconfigs].val = var; /* _pkgconfigs on <self:JavaFile exact> */
return self;
}
/* runtime class nitc__java__JavaCallContext: nitc::java::JavaCallContext (dead=false; need_corpse=false)*/
const struct class class_nitc__java__JavaCallContext = {
0, /* box_kind */
{
(nitmethod_t)core___core__Object___init, /* pointer to java:JavaCallContext:kernel#Object#init */
(nitmethod_t)core___core__Object____33d_61d, /* pointer to java:JavaCallContext:kernel#Object#!= */
(nitmethod_t)core___core__Object___sys, /* pointer to java:JavaCallContext:kernel#Object#sys */
(nitmethod_t)core___core__Object____61d_61d, /* pointer to java:JavaCallContext:kernel#Object#== */
(nitmethod_t)core__abstract_text___Object___to_s, /* pointer to java:JavaCallContext:abstract_text#Object#to_s */
(nitmethod_t)core___core__Object___is_same_instance, /* pointer to java:JavaCallContext:kernel#Object#is_same_instance */
(nitmethod_t)core___core__Object___hash, /* pointer to java:JavaCallContext:kernel#Object#hash */
(nitmethod_t)core__abstract_text___Object___inspect, /* pointer to java:JavaCallContext:abstract_text#Object#inspect */
(nitmethod_t)core___core__Object___object_id, /* pointer to java:JavaCallContext:kernel#Object#object_id */
(nitmethod_t)core__abstract_text___Object___class_name, /* pointer to java:JavaCallContext:abstract_text#Object#class_name */
(nitmethod_t)core__abstract_text___Object___inspect_head, /* pointer to java:JavaCallContext:abstract_text#Object#inspect_head */
(nitmethod_t)core__abstract_text___Object___native_class_name, /* pointer to java:JavaCallContext:abstract_text#Object#native_class_name */
(nitmethod_t)core___core__Object___output, /* pointer to java:JavaCallContext:kernel#Object#output */
(nitmethod_t)serialization___core__Object___serialization_hash, /* pointer to java:JavaCallContext:serialization#Object#serialization_hash */
(nitmethod_t)serialization___core__Object___is_same_serialized, /* pointer to java:JavaCallContext:serialization#Object#is_same_serialized */
(nitmethod_t)nitc__java___nitc__java__JavaCallContext___nitc__nitni_utilities__CallContext__name_mtype, /* pointer to java:JavaCallContext:java#JavaCallContext#name_mtype */
(nitmethod_t)nitc___nitc__CallContext___cast_to, /* pointer to java:JavaCallContext:nitni_utilities#CallContext#cast_to */
(nitmethod_t)nitc___nitc__CallContext___cast_from, /* pointer to java:JavaCallContext:nitni_utilities#CallContext#cast_from */
}
};
/* allocate JavaCallContext */
val* NEW_nitc__java__JavaCallContext(const struct type* type) {
val* self /* : JavaCallContext */;
self = nit_alloc(sizeof(struct instance) + 0*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nitc__java__JavaCallContext;
return self;
}
/* runtime class nitc__java__ToJavaCallContext: nitc::java::ToJavaCallContext (dead=false; need_corpse=false)*/
const struct class class_nitc__java__ToJavaCallContext = {
0, /* box_kind */
{
(nitmethod_t)core___core__Object___init, /* pointer to java:ToJavaCallContext:kernel#Object#init */
(nitmethod_t)core___core__Object____33d_61d, /* pointer to java:ToJavaCallContext:kernel#Object#!= */
(nitmethod_t)core___core__Object___sys, /* pointer to java:ToJavaCallContext:kernel#Object#sys */
(nitmethod_t)core___core__Object____61d_61d, /* pointer to java:ToJavaCallContext:kernel#Object#== */
(nitmethod_t)core__abstract_text___Object___to_s, /* pointer to java:ToJavaCallContext:abstract_text#Object#to_s */
(nitmethod_t)core___core__Object___is_same_instance, /* pointer to java:ToJavaCallContext:kernel#Object#is_same_instance */
(nitmethod_t)core___core__Object___hash, /* pointer to java:ToJavaCallContext:kernel#Object#hash */
(nitmethod_t)core__abstract_text___Object___inspect, /* pointer to java:ToJavaCallContext:abstract_text#Object#inspect */
(nitmethod_t)core___core__Object___object_id, /* pointer to java:ToJavaCallContext:kernel#Object#object_id */
(nitmethod_t)core__abstract_text___Object___class_name, /* pointer to java:ToJavaCallContext:abstract_text#Object#class_name */
(nitmethod_t)core__abstract_text___Object___inspect_head, /* pointer to java:ToJavaCallContext:abstract_text#Object#inspect_head */
(nitmethod_t)core__abstract_text___Object___native_class_name, /* pointer to java:ToJavaCallContext:abstract_text#Object#native_class_name */
(nitmethod_t)core___core__Object___output, /* pointer to java:ToJavaCallContext:kernel#Object#output */
(nitmethod_t)serialization___core__Object___serialization_hash, /* pointer to java:ToJavaCallContext:serialization#Object#serialization_hash */
(nitmethod_t)serialization___core__Object___is_same_serialized, /* pointer to java:ToJavaCallContext:serialization#Object#is_same_serialized */
(nitmethod_t)nitc__java___nitc__java__ToJavaCallContext___nitc__nitni_utilities__CallContext__name_mtype, /* pointer to java:ToJavaCallContext:java#ToJavaCallContext#name_mtype */
(nitmethod_t)nitc__java___nitc__java__ToJavaCallContext___nitc__nitni_utilities__CallContext__cast_to, /* pointer to java:ToJavaCallContext:java#ToJavaCallContext#cast_to */
(nitmethod_t)nitc__java___nitc__java__ToJavaCallContext___nitc__nitni_utilities__CallContext__cast_from, /* pointer to java:ToJavaCallContext:java#ToJavaCallContext#cast_from */
}
};
/* allocate ToJavaCallContext */
val* NEW_nitc__java__ToJavaCallContext(const struct type* type) {
val* self /* : ToJavaCallContext */;
self = nit_alloc(sizeof(struct instance) + 0*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nitc__java__ToJavaCallContext;
return self;
}
/* runtime class nitc__java__FromJavaCallContext: nitc::java::FromJavaCallContext (dead=false; need_corpse=false)*/
const struct class class_nitc__java__FromJavaCallContext = {
0, /* box_kind */
{
(nitmethod_t)core___core__Object___init, /* pointer to java:FromJavaCallContext:kernel#Object#init */
(nitmethod_t)core___core__Object____33d_61d, /* pointer to java:FromJavaCallContext:kernel#Object#!= */
(nitmethod_t)core___core__Object___sys, /* pointer to java:FromJavaCallContext:kernel#Object#sys */
(nitmethod_t)core___core__Object____61d_61d, /* pointer to java:FromJavaCallContext:kernel#Object#== */
(nitmethod_t)core__abstract_text___Object___to_s, /* pointer to java:FromJavaCallContext:abstract_text#Object#to_s */
(nitmethod_t)core___core__Object___is_same_instance, /* pointer to java:FromJavaCallContext:kernel#Object#is_same_instance */
(nitmethod_t)core___core__Object___hash, /* pointer to java:FromJavaCallContext:kernel#Object#hash */
(nitmethod_t)core__abstract_text___Object___inspect, /* pointer to java:FromJavaCallContext:abstract_text#Object#inspect */
(nitmethod_t)core___core__Object___object_id, /* pointer to java:FromJavaCallContext:kernel#Object#object_id */
(nitmethod_t)core__abstract_text___Object___class_name, /* pointer to java:FromJavaCallContext:abstract_text#Object#class_name */
(nitmethod_t)core__abstract_text___Object___inspect_head, /* pointer to java:FromJavaCallContext:abstract_text#Object#inspect_head */
(nitmethod_t)core__abstract_text___Object___native_class_name, /* pointer to java:FromJavaCallContext:abstract_text#Object#native_class_name */
(nitmethod_t)core___core__Object___output, /* pointer to java:FromJavaCallContext:kernel#Object#output */
(nitmethod_t)serialization___core__Object___serialization_hash, /* pointer to java:FromJavaCallContext:serialization#Object#serialization_hash */
(nitmethod_t)serialization___core__Object___is_same_serialized, /* pointer to java:FromJavaCallContext:serialization#Object#is_same_serialized */
(nitmethod_t)nitc__java___nitc__java__FromJavaCallContext___nitc__nitni_utilities__CallContext__name_mtype, /* pointer to java:FromJavaCallContext:java#FromJavaCallContext#name_mtype */
(nitmethod_t)nitc__java___nitc__java__FromJavaCallContext___nitc__nitni_utilities__CallContext__cast_to, /* pointer to java:FromJavaCallContext:java#FromJavaCallContext#cast_to */
(nitmethod_t)nitc__java___nitc__java__FromJavaCallContext___nitc__nitni_utilities__CallContext__cast_from, /* pointer to java:FromJavaCallContext:java#FromJavaCallContext#cast_from */
}
};
/* allocate FromJavaCallContext */
val* NEW_nitc__java__FromJavaCallContext(const struct type* type) {
val* self /* : FromJavaCallContext */;
self = nit_alloc(sizeof(struct instance) + 0*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nitc__java__FromJavaCallContext;
return self;
}
/* runtime class nitc__ForeignJavaType: nitc::ForeignJavaType (dead=false; need_corpse=false)*/
const struct class class_nitc__ForeignJavaType = {
0, /* box_kind */
{
(nitmethod_t)nitc___nitc__ForeignJavaType___core__kernel__Object__init, /* pointer to java:ForeignJavaType:java#ForeignJavaType#init */
(nitmethod_t)core___core__Object____33d_61d, /* pointer to java:ForeignJavaType:kernel#Object#!= */
(nitmethod_t)core___core__Object___sys, /* pointer to java:ForeignJavaType:kernel#Object#sys */
(nitmethod_t)core___core__Object____61d_61d, /* pointer to java:ForeignJavaType:kernel#Object#== */
(nitmethod_t)core__abstract_text___Object___to_s, /* pointer to java:ForeignJavaType:abstract_text#Object#to_s */
(nitmethod_t)core___core__Object___is_same_instance, /* pointer to java:ForeignJavaType:kernel#Object#is_same_instance */
(nitmethod_t)core___core__Object___hash, /* pointer to java:ForeignJavaType:kernel#Object#hash */
(nitmethod_t)core__abstract_text___Object___inspect, /* pointer to java:ForeignJavaType:abstract_text#Object#inspect */
(nitmethod_t)core___core__Object___object_id, /* pointer to java:ForeignJavaType:kernel#Object#object_id */
(nitmethod_t)core__abstract_text___Object___class_name, /* pointer to java:ForeignJavaType:abstract_text#Object#class_name */
(nitmethod_t)core__abstract_text___Object___inspect_head, /* pointer to java:ForeignJavaType:abstract_text#Object#inspect_head */
(nitmethod_t)core__abstract_text___Object___native_class_name, /* pointer to java:ForeignJavaType:abstract_text#Object#native_class_name */
(nitmethod_t)core___core__Object___output, /* pointer to java:ForeignJavaType:kernel#Object#output */
(nitmethod_t)serialization___core__Object___serialization_hash, /* pointer to java:ForeignJavaType:serialization#Object#serialization_hash */
(nitmethod_t)serialization___core__Object___is_same_serialized, /* pointer to java:ForeignJavaType:serialization#Object#is_same_serialized */
(nitmethod_t)nitc___nitc__ForeignType___ctype, /* pointer to java:ForeignJavaType:light_ffi_base#ForeignType#ctype */
(nitmethod_t)nitc___nitc__ForeignJavaType___java_type_61d, /* pointer to java:ForeignJavaType:java#ForeignJavaType#java_type= */
(nitmethod_t)nitc___nitc__ForeignJavaType___java_type, /* pointer to java:ForeignJavaType:java#ForeignJavaType#java_type */
(nitmethod_t)core___core__Object___init, /* pointer to java:ForeignJavaType:kernel#Object#init */
}
};
/* allocate ForeignJavaType */
val* NEW_nitc__ForeignJavaType(const struct type* type) {
val* self /* : ForeignJavaType */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nitc__ForeignJavaType;
return self;
}
/* runtime class nitc__extra_java_files__JavaExtraFilesPhase: nitc::extra_java_files::JavaExtraFilesPhase (dead=false; need_corpse=false)*/
const struct class class_nitc__extra_java_files__JavaExtraFilesPhase = {
0, /* box_kind */
{
(nitmethod_t)nitc___nitc__Phase___core__kernel__Object__init, /* pointer to extra_java_files:JavaExtraFilesPhase:phase#Phase#init */
(nitmethod_t)core___core__Object____33d_61d, /* pointer to extra_java_files:JavaExtraFilesPhase:kernel#Object#!= */
(nitmethod_t)core___core__Object___sys, /* pointer to extra_java_files:JavaExtraFilesPhase:kernel#Object#sys */
(nitmethod_t)core___core__Object____61d_61d, /* pointer to extra_java_files:JavaExtraFilesPhase:kernel#Object#== */
(nitmethod_t)nitc___nitc__Phase___core__abstract_text__Object__to_s, /* pointer to extra_java_files:JavaExtraFilesPhase:phase#Phase#to_s */
(nitmethod_t)core___core__Object___is_same_instance, /* pointer to extra_java_files:JavaExtraFilesPhase:kernel#Object#is_same_instance */
(nitmethod_t)core___core__Object___hash, /* pointer to extra_java_files:JavaExtraFilesPhase:kernel#Object#hash */
(nitmethod_t)core__abstract_text___Object___inspect, /* pointer to extra_java_files:JavaExtraFilesPhase:abstract_text#Object#inspect */
(nitmethod_t)core___core__Object___object_id, /* pointer to extra_java_files:JavaExtraFilesPhase:kernel#Object#object_id */
(nitmethod_t)core__abstract_text___Object___class_name, /* pointer to extra_java_files:JavaExtraFilesPhase:abstract_text#Object#class_name */
(nitmethod_t)core__abstract_text___Object___inspect_head, /* pointer to extra_java_files:JavaExtraFilesPhase:abstract_text#Object#inspect_head */
(nitmethod_t)core__abstract_text___Object___native_class_name, /* pointer to extra_java_files:JavaExtraFilesPhase:abstract_text#Object#native_class_name */
(nitmethod_t)core___core__Object___output, /* pointer to extra_java_files:JavaExtraFilesPhase:kernel#Object#output */
(nitmethod_t)serialization___core__Object___serialization_hash, /* pointer to extra_java_files:JavaExtraFilesPhase:serialization#Object#serialization_hash */
(nitmethod_t)serialization___core__Object___is_same_serialized, /* pointer to extra_java_files:JavaExtraFilesPhase:serialization#Object#is_same_serialized */
(nitmethod_t)nitc___nitc__Phase___toolcontext_61d, /* pointer to extra_java_files:JavaExtraFilesPhase:phase#Phase#toolcontext= */
(nitmethod_t)nitc___nitc__Phase___depends_61d, /* pointer to extra_java_files:JavaExtraFilesPhase:phase#Phase#depends= */
(nitmethod_t)nitc___nitc__Phase___toolcontext, /* pointer to extra_java_files:JavaExtraFilesPhase:phase#Phase#toolcontext */
(nitmethod_t)nitc___nitc__Phase___in_hierarchy_61d, /* pointer to extra_java_files:JavaExtraFilesPhase:phase#Phase#in_hierarchy= */
(nitmethod_t)nitc___nitc__Phase___depends, /* pointer to extra_java_files:JavaExtraFilesPhase:phase#Phase#depends */
(nitmethod_t)nitc___nitc__Phase___disabled, /* pointer to extra_java_files:JavaExtraFilesPhase:phase#Phase#disabled */
(nitmethod_t)nitc__modelbuilder___Phase___process_mainmodule, /* pointer to extra_java_files:JavaExtraFilesPhase:modelbuilder#Phase#process_mainmodule */
(nitmethod_t)nitc___nitc__Phase___process_nmodule, /* pointer to extra_java_files:JavaExtraFilesPhase:phase#Phase#process_nmodule */
(nitmethod_t)nitc___nitc__Phase___process_nclassdef, /* pointer to extra_java_files:JavaExtraFilesPhase:phase#Phase#process_nclassdef */
(nitmethod_t)nitc__extra_java_files___nitc__extra_java_files__JavaExtraFilesPhase___nitc__phase__Phase__process_annotated_node, /* pointer to extra_java_files:JavaExtraFilesPhase:extra_java_files#JavaExtraFilesPhase#process_annotated_node */
(nitmethod_t)nitc___nitc__Phase___process_npropdef, /* pointer to extra_java_files:JavaExtraFilesPhase:phase#Phase#process_npropdef */
(nitmethod_t)nitc___nitc__Phase___in_hierarchy, /* pointer to extra_java_files:JavaExtraFilesPhase:phase#Phase#in_hierarchy */
(nitmethod_t)nitc___nitc__Phase___disabled_61d, /* pointer to extra_java_files:JavaExtraFilesPhase:phase#Phase#disabled= */
(nitmethod_t)core___core__Object___init, /* pointer to extra_java_files:JavaExtraFilesPhase:kernel#Object#init */
}
};
/* allocate JavaExtraFilesPhase */
val* NEW_nitc__extra_java_files__JavaExtraFilesPhase(const struct type* type) {
val* self /* : JavaExtraFilesPhase */;
self = nit_alloc(sizeof(struct instance) + 4*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nitc__extra_java_files__JavaExtraFilesPhase;
self->attrs[COLOR_nitc__phase__Phase___disabled].s = 0; /* _disabled on <self:JavaExtraFilesPhase exact> */
return self;
}
/* runtime class nitc__ObjCLanguage: nitc::ObjCLanguage (dead=false; need_corpse=false)*/
const struct class class_nitc__ObjCLanguage = {
0, /* box_kind */
{
(nitmethod_t)nitc___nitc__FFILanguage___core__kernel__Object__init, /* pointer to objc:ObjCLanguage:light_ffi_base#FFILanguage#init */
(nitmethod_t)core___core__Object____33d_61d, /* pointer to objc:ObjCLanguage:kernel#Object#!= */
(nitmethod_t)core___core__Object___sys, /* pointer to objc:ObjCLanguage:kernel#Object#sys */
(nitmethod_t)core___core__Object____61d_61d, /* pointer to objc:ObjCLanguage:kernel#Object#== */
(nitmethod_t)core__abstract_text___Object___to_s, /* pointer to objc:ObjCLanguage:abstract_text#Object#to_s */
(nitmethod_t)core___core__Object___is_same_instance, /* pointer to objc:ObjCLanguage:kernel#Object#is_same_instance */
(nitmethod_t)core___core__Object___hash, /* pointer to objc:ObjCLanguage:kernel#Object#hash */
(nitmethod_t)core__abstract_text___Object___inspect, /* pointer to objc:ObjCLanguage:abstract_text#Object#inspect */
(nitmethod_t)core___core__Object___object_id, /* pointer to objc:ObjCLanguage:kernel#Object#object_id */
(nitmethod_t)core__abstract_text___Object___class_name, /* pointer to objc:ObjCLanguage:abstract_text#Object#class_name */
(nitmethod_t)core__abstract_text___Object___inspect_head, /* pointer to objc:ObjCLanguage:abstract_text#Object#inspect_head */
(nitmethod_t)core__abstract_text___Object___native_class_name, /* pointer to objc:ObjCLanguage:abstract_text#Object#native_class_name */
(nitmethod_t)core___core__Object___output, /* pointer to objc:ObjCLanguage:kernel#Object#output */
(nitmethod_t)serialization___core__Object___serialization_hash, /* pointer to objc:ObjCLanguage:serialization#Object#serialization_hash */
(nitmethod_t)serialization___core__Object___is_same_serialized, /* pointer to objc:ObjCLanguage:serialization#Object#is_same_serialized */
(nitmethod_t)nitc___nitc__FFILanguage___ffi_language_assignation_phase_61d, /* pointer to objc:ObjCLanguage:light_ffi_base#FFILanguage#ffi_language_assignation_phase= */
(nitmethod_t)nitc___nitc__FFILanguage___ffi_language_assignation_phase, /* pointer to objc:ObjCLanguage:light_ffi_base#FFILanguage#ffi_language_assignation_phase */
(nitmethod_t)nitc___nitc__ObjCLanguage___nitc__light_ffi_base__FFILanguage__get_ftype, /* pointer to objc:ObjCLanguage:objc#ObjCLanguage#get_ftype */
(nitmethod_t)nitc___nitc__ObjCLanguage___nitc__light_ffi_base__FFILanguage__identify_language, /* pointer to objc:ObjCLanguage:objc#ObjCLanguage#identify_language */
(nitmethod_t)nitc___nitc__ObjCLanguage___nitc__light_ffi_base__FFILanguage__compile_module_block, /* pointer to objc:ObjCLanguage:objc#ObjCLanguage#compile_module_block */
(nitmethod_t)nitc___nitc__ObjCLanguage___nitc__light_ffi_base__FFILanguage__compile_extern_class, /* pointer to objc:ObjCLanguage:objc#ObjCLanguage#compile_extern_class */
(nitmethod_t)nitc___nitc__ObjCLanguage___nitc__ffi_base__FFILanguage__compile_callback, /* pointer to objc:ObjCLanguage:objc#ObjCLanguage#compile_callback */
(nitmethod_t)nitc___nitc__ObjCLanguage___nitc__light_ffi_base__FFILanguage__compile_to_files, /* pointer to objc:ObjCLanguage:objc#ObjCLanguage#compile_to_files */
(nitmethod_t)nitc___nitc__ObjCLanguage___nitc__light_ffi_base__FFILanguage__compile_extern_method, /* pointer to objc:ObjCLanguage:objc#ObjCLanguage#compile_extern_method */
(nitmethod_t)core___core__Object___init, /* pointer to objc:ObjCLanguage:kernel#Object#init */
}
};
/* allocate ObjCLanguage */
val* NEW_nitc__ObjCLanguage(const struct type* type) {
val* self /* : ObjCLanguage */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nitc__ObjCLanguage;
return self;
}
/* runtime class nitc__objc__ObjCCompilationUnit: nitc::objc::ObjCCompilationUnit (dead=false; need_corpse=false)*/
const struct class class_nitc__objc__ObjCCompilationUnit = {
0, /* box_kind */
{
(nitmethod_t)core___core__Object___init, /* pointer to objc:ObjCCompilationUnit:kernel#Object#init */
(nitmethod_t)core___core__Object____33d_61d, /* pointer to objc:ObjCCompilationUnit:kernel#Object#!= */
(nitmethod_t)core___core__Object___sys, /* pointer to objc:ObjCCompilationUnit:kernel#Object#sys */
(nitmethod_t)core___core__Object____61d_61d, /* pointer to objc:ObjCCompilationUnit:kernel#Object#== */
(nitmethod_t)core__abstract_text___Object___to_s, /* pointer to objc:ObjCCompilationUnit:abstract_text#Object#to_s */
(nitmethod_t)core___core__Object___is_same_instance, /* pointer to objc:ObjCCompilationUnit:kernel#Object#is_same_instance */
(nitmethod_t)core___core__Object___hash, /* pointer to objc:ObjCCompilationUnit:kernel#Object#hash */
(nitmethod_t)core__abstract_text___Object___inspect, /* pointer to objc:ObjCCompilationUnit:abstract_text#Object#inspect */
(nitmethod_t)core___core__Object___object_id, /* pointer to objc:ObjCCompilationUnit:kernel#Object#object_id */
(nitmethod_t)core__abstract_text___Object___class_name, /* pointer to objc:ObjCCompilationUnit:abstract_text#Object#class_name */
(nitmethod_t)core__abstract_text___Object___inspect_head, /* pointer to objc:ObjCCompilationUnit:abstract_text#Object#inspect_head */
(nitmethod_t)core__abstract_text___Object___native_class_name, /* pointer to objc:ObjCCompilationUnit:abstract_text#Object#native_class_name */
(nitmethod_t)core___core__Object___output, /* pointer to objc:ObjCCompilationUnit:kernel#Object#output */
(nitmethod_t)serialization___core__Object___serialization_hash, /* pointer to objc:ObjCCompilationUnit:serialization#Object#serialization_hash */
(nitmethod_t)serialization___core__Object___is_same_serialized, /* pointer to objc:ObjCCompilationUnit:serialization#Object#is_same_serialized */
(nitmethod_t)nitc___nitc__CCompilationUnit___header_c_types, /* pointer to objc:ObjCCompilationUnit:c_tools#CCompilationUnit#header_c_types */
(nitmethod_t)nitc__light___CCompilationUnit___write_as_nitni, /* pointer to objc:ObjCCompilationUnit:light#CCompilationUnit#write_as_nitni */
(nitmethod_t)nitc___nitc__CCompilationUnit___files, /* pointer to objc:ObjCCompilationUnit:c_tools#CCompilationUnit#files */
(nitmethod_t)nitc___nitc__CCompilationUnit___header_c_base, /* pointer to objc:ObjCCompilationUnit:c_tools#CCompilationUnit#header_c_base */
(nitmethod_t)nitc___nitc__CCompilationUnit___body_decl, /* pointer to objc:ObjCCompilationUnit:c_tools#CCompilationUnit#body_decl */
(nitmethod_t)nitc___nitc__CCompilationUnit___header_custom, /* pointer to objc:ObjCCompilationUnit:c_tools#CCompilationUnit#header_custom */
(nitmethod_t)nitc__light_ffi_base___CCompilationUnit___write_header_to_file, /* pointer to objc:ObjCCompilationUnit:light_ffi_base#CCompilationUnit#write_header_to_file */
(nitmethod_t)nitc__light_ffi_base___CCompilationUnit___write_body_to_file, /* pointer to objc:ObjCCompilationUnit:light_ffi_base#CCompilationUnit#write_body_to_file */
(nitmethod_t)nitc___nitc__CCompilationUnit___header_decl, /* pointer to objc:ObjCCompilationUnit:c_tools#CCompilationUnit#header_decl */
(nitmethod_t)nitc___nitc__CCompilationUnit___body_impl, /* pointer to objc:ObjCCompilationUnit:c_tools#CCompilationUnit#body_impl */
(nitmethod_t)nitc___nitc__CCompilationUnit___body_custom, /* pointer to objc:ObjCCompilationUnit:c_tools#CCompilationUnit#body_custom */
(nitmethod_t)nitc__light_ffi_base___CCompilationUnit___write_as_impl, /* pointer to objc:ObjCCompilationUnit:light_ffi_base#CCompilationUnit#write_as_impl */
(nitmethod_t)nitc___nitc__CCompilationUnit___compile_header_core, /* pointer to objc:ObjCCompilationUnit:c_tools#CCompilationUnit#compile_header_core */
(nitmethod_t)nitc___nitc__CCompilationUnit___compile_body_core, /* pointer to objc:ObjCCompilationUnit:c_tools#CCompilationUnit#compile_body_core */
(nitmethod_t)nitc___nitc__CCompilationUnit___add_local_function, /* pointer to objc:ObjCCompilationUnit:c_tools#CCompilationUnit#add_local_function */
(nitmethod_t)nitc__java___CCompilationUnit___add_non_static_local_function, /* pointer to objc:ObjCCompilationUnit:java#CCompilationUnit#add_non_static_local_function */
(nitmethod_t)nitc___nitc__CCompilationUnit___add_exported_function, /* pointer to objc:ObjCCompilationUnit:c_tools#CCompilationUnit#add_exported_function */
(nitmethod_t)nitc__objc___nitc__objc__ObjCCompilationUnit___write_to_files, /* pointer to objc:ObjCCompilationUnit:objc#ObjCCompilationUnit#write_to_files */
}
};
/* allocate ObjCCompilationUnit */
val* NEW_nitc__objc__ObjCCompilationUnit(const struct type* type) {
val* self /* : ObjCCompilationUnit */;
val* var /* : Template */;
val* var1 /* : Template */;
val* var2 /* : Template */;
val* var3 /* : Template */;
val* var4 /* : Template */;
val* var5 /* : Template */;
val* var6 /* : Template */;
val* var7 /* : Array[String] */;
self = nit_alloc(sizeof(struct instance) + 8*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nitc__objc__ObjCCompilationUnit;
var = NEW_template__Template(&type_template__Template);
{
((void(*)(val* self))(var->class->vft[COLOR_core__kernel__Object__init]))(var); /* init on <var:Template>*/
}
self->attrs[COLOR_nitc__c_tools__CCompilationUnit___header_c_base].val = var; /* _header_c_base on <self:ObjCCompilationUnit exact> */
var1 = NEW_template__Template(&type_template__Template);
{
((void(*)(val* self))(var1->class->vft[COLOR_core__kernel__Object__init]))(var1); /* init on <var1:Template>*/
}
self->attrs[COLOR_nitc__c_tools__CCompilationUnit___header_custom].val = var1; /* _header_custom on <self:ObjCCompilationUnit exact> */
var2 = NEW_template__Template(&type_template__Template);
{
((void(*)(val* self))(var2->class->vft[COLOR_core__kernel__Object__init]))(var2); /* init on <var2:Template>*/
}
self->attrs[COLOR_nitc__c_tools__CCompilationUnit___header_c_types].val = var2; /* _header_c_types on <self:ObjCCompilationUnit exact> */
var3 = NEW_template__Template(&type_template__Template);
{
((void(*)(val* self))(var3->class->vft[COLOR_core__kernel__Object__init]))(var3); /* init on <var3:Template>*/
}
self->attrs[COLOR_nitc__c_tools__CCompilationUnit___header_decl].val = var3; /* _header_decl on <self:ObjCCompilationUnit exact> */
var4 = NEW_template__Template(&type_template__Template);
{
((void(*)(val* self))(var4->class->vft[COLOR_core__kernel__Object__init]))(var4); /* init on <var4:Template>*/
}
self->attrs[COLOR_nitc__c_tools__CCompilationUnit___body_decl].val = var4; /* _body_decl on <self:ObjCCompilationUnit exact> */
var5 = NEW_template__Template(&type_template__Template);
{
((void(*)(val* self))(var5->class->vft[COLOR_core__kernel__Object__init]))(var5); /* init on <var5:Template>*/
}
self->attrs[COLOR_nitc__c_tools__CCompilationUnit___body_custom].val = var5; /* _body_custom on <self:ObjCCompilationUnit exact> */
var6 = NEW_template__Template(&type_template__Template);
{
((void(*)(val* self))(var6->class->vft[COLOR_core__kernel__Object__init]))(var6); /* init on <var6:Template>*/
}
self->attrs[COLOR_nitc__c_tools__CCompilationUnit___body_impl].val = var6; /* _body_impl on <self:ObjCCompilationUnit exact> */
var7 = NEW_core__Array(&type_core__Array__core__String);
{
core___core__Array___core__kernel__Object__init(var7); /* Direct call array#Array#init on <var7:Array[String]>*/
}
self->attrs[COLOR_nitc__c_tools__CCompilationUnit___files].val = var7; /* _files on <self:ObjCCompilationUnit exact> */
return self;
}
/* runtime class nitc__ExternObjCFile: nitc::ExternObjCFile (dead=false; need_corpse=false)*/
const struct class class_nitc__ExternObjCFile = {
0, /* box_kind */
{
(nitmethod_t)nitc___nitc__ExternObjCFile___core__kernel__Object__init, /* pointer to objc:ExternObjCFile:objc#ExternObjCFile#init */
(nitmethod_t)core___core__Object____33d_61d, /* pointer to objc:ExternObjCFile:kernel#Object#!= */
(nitmethod_t)core___core__Object___sys, /* pointer to objc:ExternObjCFile:kernel#Object#sys */
(nitmethod_t)core___core__Object____61d_61d, /* pointer to objc:ExternObjCFile:kernel#Object#== */
(nitmethod_t)core__abstract_text___Object___to_s, /* pointer to objc:ExternObjCFile:abstract_text#Object#to_s */
(nitmethod_t)core___core__Object___is_same_instance, /* pointer to objc:ExternObjCFile:kernel#Object#is_same_instance */
(nitmethod_t)core___core__Object___hash, /* pointer to objc:ExternObjCFile:kernel#Object#hash */
(nitmethod_t)core__abstract_text___Object___inspect, /* pointer to objc:ExternObjCFile:abstract_text#Object#inspect */
(nitmethod_t)core___core__Object___object_id, /* pointer to objc:ExternObjCFile:kernel#Object#object_id */
(nitmethod_t)core__abstract_text___Object___class_name, /* pointer to objc:ExternObjCFile:abstract_text#Object#class_name */
(nitmethod_t)core__abstract_text___Object___inspect_head, /* pointer to objc:ExternObjCFile:abstract_text#Object#inspect_head */
(nitmethod_t)core__abstract_text___Object___native_class_name, /* pointer to objc:ExternObjCFile:abstract_text#Object#native_class_name */
(nitmethod_t)core___core__Object___output, /* pointer to objc:ExternObjCFile:kernel#Object#output */
(nitmethod_t)serialization___core__Object___serialization_hash, /* pointer to objc:ExternObjCFile:serialization#Object#serialization_hash */
(nitmethod_t)serialization___core__Object___is_same_serialized, /* pointer to objc:ExternObjCFile:serialization#Object#is_same_serialized */
(nitmethod_t)nitc___nitc__ExternFile___filename_61d, /* pointer to objc:ExternObjCFile:c_tools#ExternFile#filename= */
(nitmethod_t)nitc___nitc__ExternFile___filename, /* pointer to objc:ExternObjCFile:c_tools#ExternFile#filename */
(nitmethod_t)nitc___nitc__ExternFile___pkgconfigs, /* pointer to objc:ExternObjCFile:c_tools#ExternFile#pkgconfigs */
(nitmethod_t)nitc___nitc__ExternObjCFile___nitc__c_tools__ExternFile__makefile_rule_name, /* pointer to objc:ExternObjCFile:objc#ExternObjCFile#makefile_rule_name */
(nitmethod_t)nitc___nitc__ExternObjCFile___nitc__c_tools__ExternFile__makefile_rule_content, /* pointer to objc:ExternObjCFile:objc#ExternObjCFile#makefile_rule_content */
(nitmethod_t)nitc___nitc__ExternObjCFile___nitc__c_tools__ExternFile__compiles_to_o_file, /* pointer to objc:ExternObjCFile:objc#ExternObjCFile#compiles_to_o_file */
(nitmethod_t)nitc___nitc__ExternFile___add_to_jar, /* pointer to objc:ExternObjCFile:c_tools#ExternFile#add_to_jar */
(nitmethod_t)core___core__Object___init, /* pointer to objc:ExternObjCFile:kernel#Object#init */
(nitmethod_t)nitc___nitc__ExternObjCFile___mmodule_61d, /* pointer to objc:ExternObjCFile:objc#ExternObjCFile#mmodule= */
(nitmethod_t)nitc___nitc__ExternFile___core__kernel__Object__init, /* pointer to objc:ExternObjCFile:c_tools#ExternFile#init */
}
};
/* allocate ExternObjCFile */
val* NEW_nitc__ExternObjCFile(const struct type* type) {
val* self /* : ExternObjCFile */;
val* var /* : Array[String] */;
self = nit_alloc(sizeof(struct instance) + 3*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nitc__ExternObjCFile;
var = NEW_core__Array(&type_core__Array__core__String);
{
core___core__Array___core__kernel__Object__init(var); /* Direct call array#Array#init on <var:Array[String]>*/
}
self->attrs[COLOR_nitc__c_tools__ExternFile___pkgconfigs].val = var; /* _pkgconfigs on <self:ExternObjCFile exact> */
return self;
}
/* runtime class nitc__ForeignObjCType: nitc::ForeignObjCType (dead=false; need_corpse=false)*/
const struct class class_nitc__ForeignObjCType = {
0, /* box_kind */
{
(nitmethod_t)nitc___nitc__ForeignObjCType___core__kernel__Object__init, /* pointer to objc:ForeignObjCType:objc#ForeignObjCType#init */
(nitmethod_t)core___core__Object____33d_61d, /* pointer to objc:ForeignObjCType:kernel#Object#!= */
(nitmethod_t)core___core__Object___sys, /* pointer to objc:ForeignObjCType:kernel#Object#sys */
(nitmethod_t)core___core__Object____61d_61d, /* pointer to objc:ForeignObjCType:kernel#Object#== */
(nitmethod_t)core__abstract_text___Object___to_s, /* pointer to objc:ForeignObjCType:abstract_text#Object#to_s */
(nitmethod_t)core___core__Object___is_same_instance, /* pointer to objc:ForeignObjCType:kernel#Object#is_same_instance */
(nitmethod_t)core___core__Object___hash, /* pointer to objc:ForeignObjCType:kernel#Object#hash */
(nitmethod_t)core__abstract_text___Object___inspect, /* pointer to objc:ForeignObjCType:abstract_text#Object#inspect */
(nitmethod_t)core___core__Object___object_id, /* pointer to objc:ForeignObjCType:kernel#Object#object_id */
(nitmethod_t)core__abstract_text___Object___class_name, /* pointer to objc:ForeignObjCType:abstract_text#Object#class_name */
(nitmethod_t)core__abstract_text___Object___inspect_head, /* pointer to objc:ForeignObjCType:abstract_text#Object#inspect_head */
(nitmethod_t)core__abstract_text___Object___native_class_name, /* pointer to objc:ForeignObjCType:abstract_text#Object#native_class_name */
(nitmethod_t)core___core__Object___output, /* pointer to objc:ForeignObjCType:kernel#Object#output */
(nitmethod_t)serialization___core__Object___serialization_hash, /* pointer to objc:ForeignObjCType:serialization#Object#serialization_hash */
(nitmethod_t)serialization___core__Object___is_same_serialized, /* pointer to objc:ForeignObjCType:serialization#Object#is_same_serialized */
(nitmethod_t)nitc___nitc__ForeignType___ctype, /* pointer to objc:ForeignObjCType:light_ffi_base#ForeignType#ctype */
(nitmethod_t)nitc___nitc__ForeignObjCType___objc_type_61d, /* pointer to objc:ForeignObjCType:objc#ForeignObjCType#objc_type= */
(nitmethod_t)nitc___nitc__ForeignObjCType___objc_type, /* pointer to objc:ForeignObjCType:objc#ForeignObjCType#objc_type */
(nitmethod_t)core___core__Object___init, /* pointer to objc:ForeignObjCType:kernel#Object#init */
}
};
/* allocate ForeignObjCType */
val* NEW_nitc__ForeignObjCType(const struct type* type) {
val* self /* : ForeignObjCType */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nitc__ForeignObjCType;
return self;
}
/* runtime class nitc__objc__ObjCCallContext: nitc::objc::ObjCCallContext (dead=true; need_corpse=false)*/
/* allocate ObjCCallContext */
val* NEW_nitc__objc__ObjCCallContext(const struct type* type) {
PRINT_ERROR("Runtime error: %s", "ObjCCallContext is DEAD");
PRINT_ERROR("\n");
fatal_exit(1);
}
/* runtime class nitc__objc__ToObjCCallContext: nitc::objc::ToObjCCallContext (dead=true; need_corpse=false)*/
/* allocate ToObjCCallContext */
val* NEW_nitc__objc__ToObjCCallContext(const struct type* type) {
PRINT_ERROR("Runtime error: %s", "ToObjCCallContext is DEAD");
PRINT_ERROR("\n");
fatal_exit(1);
}
/* runtime class nitc__objc__FromObjCCallContext: nitc::objc::FromObjCCallContext (dead=false; need_corpse=false)*/
const struct class class_nitc__objc__FromObjCCallContext = {
0, /* box_kind */
{
(nitmethod_t)core___core__Object___init, /* pointer to objc:FromObjCCallContext:kernel#Object#init */
(nitmethod_t)core___core__Object____33d_61d, /* pointer to objc:FromObjCCallContext:kernel#Object#!= */
(nitmethod_t)core___core__Object___sys, /* pointer to objc:FromObjCCallContext:kernel#Object#sys */
(nitmethod_t)core___core__Object____61d_61d, /* pointer to objc:FromObjCCallContext:kernel#Object#== */
(nitmethod_t)core__abstract_text___Object___to_s, /* pointer to objc:FromObjCCallContext:abstract_text#Object#to_s */
(nitmethod_t)core___core__Object___is_same_instance, /* pointer to objc:FromObjCCallContext:kernel#Object#is_same_instance */
(nitmethod_t)core___core__Object___hash, /* pointer to objc:FromObjCCallContext:kernel#Object#hash */
(nitmethod_t)core__abstract_text___Object___inspect, /* pointer to objc:FromObjCCallContext:abstract_text#Object#inspect */
(nitmethod_t)core___core__Object___object_id, /* pointer to objc:FromObjCCallContext:kernel#Object#object_id */
(nitmethod_t)core__abstract_text___Object___class_name, /* pointer to objc:FromObjCCallContext:abstract_text#Object#class_name */
(nitmethod_t)core__abstract_text___Object___inspect_head, /* pointer to objc:FromObjCCallContext:abstract_text#Object#inspect_head */
(nitmethod_t)core__abstract_text___Object___native_class_name, /* pointer to objc:FromObjCCallContext:abstract_text#Object#native_class_name */
(nitmethod_t)core___core__Object___output, /* pointer to objc:FromObjCCallContext:kernel#Object#output */
(nitmethod_t)serialization___core__Object___serialization_hash, /* pointer to objc:FromObjCCallContext:serialization#Object#serialization_hash */
(nitmethod_t)serialization___core__Object___is_same_serialized, /* pointer to objc:FromObjCCallContext:serialization#Object#is_same_serialized */
(nitmethod_t)nitc__objc___nitc__objc__ObjCCallContext___nitc__nitni_utilities__CallContext__name_mtype, /* pointer to objc:FromObjCCallContext:objc#ObjCCallContext#name_mtype */
(nitmethod_t)nitc__objc___nitc__objc__FromObjCCallContext___nitc__nitni_utilities__CallContext__cast_to, /* pointer to objc:FromObjCCallContext:objc#FromObjCCallContext#cast_to */
(nitmethod_t)nitc__objc___nitc__objc__FromObjCCallContext___nitc__nitni_utilities__CallContext__cast_from, /* pointer to objc:FromObjCCallContext:objc#FromObjCCallContext#cast_from */
}
};
/* allocate FromObjCCallContext */
val* NEW_nitc__objc__FromObjCCallContext(const struct type* type) {
val* self /* : FromObjCCallContext */;
self = nit_alloc(sizeof(struct instance) + 0*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nitc__objc__FromObjCCallContext;
return self;
}
/* runtime class nitc__AndroidProject: nitc::AndroidProject (dead=false; need_corpse=false)*/
const struct class class_nitc__AndroidProject = {
0, /* box_kind */
{
(nitmethod_t)nitc___nitc__AndroidProject___core__kernel__Object__init, /* pointer to android_annotations:AndroidProject:android_annotations#AndroidProject#init */
(nitmethod_t)core___core__Object____33d_61d, /* pointer to android_annotations:AndroidProject:kernel#Object#!= */
(nitmethod_t)core___core__Object___sys, /* pointer to android_annotations:AndroidProject:kernel#Object#sys */
(nitmethod_t)core___core__Object____61d_61d, /* pointer to android_annotations:AndroidProject:kernel#Object#== */
(nitmethod_t)nitc___nitc__AppProject___core__abstract_text__Object__to_s, /* pointer to android_annotations:AndroidProject:app_annotations#AppProject#to_s */
(nitmethod_t)core___core__Object___is_same_instance, /* pointer to android_annotations:AndroidProject:kernel#Object#is_same_instance */
(nitmethod_t)core___core__Object___hash, /* pointer to android_annotations:AndroidProject:kernel#Object#hash */
(nitmethod_t)core__abstract_text___Object___inspect, /* pointer to android_annotations:AndroidProject:abstract_text#Object#inspect */
(nitmethod_t)core___core__Object___object_id, /* pointer to android_annotations:AndroidProject:kernel#Object#object_id */
(nitmethod_t)core__abstract_text___Object___class_name, /* pointer to android_annotations:AndroidProject:abstract_text#Object#class_name */
(nitmethod_t)core__abstract_text___Object___inspect_head, /* pointer to android_annotations:AndroidProject:abstract_text#Object#inspect_head */
(nitmethod_t)core__abstract_text___Object___native_class_name, /* pointer to android_annotations:AndroidProject:abstract_text#Object#native_class_name */
(nitmethod_t)core___core__Object___output, /* pointer to android_annotations:AndroidProject:kernel#Object#output */
(nitmethod_t)serialization___core__Object___serialization_hash, /* pointer to android_annotations:AndroidProject:serialization#Object#serialization_hash */
(nitmethod_t)serialization___core__Object___is_same_serialized, /* pointer to android_annotations:AndroidProject:serialization#Object#is_same_serialized */
(nitmethod_t)nitc___nitc__AppProject___mainmodule, /* pointer to android_annotations:AndroidProject:app_annotations#AppProject#mainmodule */
(nitmethod_t)nitc___nitc__AppProject___short_name, /* pointer to android_annotations:AndroidProject:app_annotations#AppProject#short_name */
(nitmethod_t)nitc___nitc__AppProject___modelbuilder_61d, /* pointer to android_annotations:AndroidProject:app_annotations#AppProject#modelbuilder= */
(nitmethod_t)nitc___nitc__AppProject___mainmodule_61d, /* pointer to android_annotations:AndroidProject:app_annotations#AppProject#mainmodule= */
(nitmethod_t)nitc___nitc__AppProject___modelbuilder, /* pointer to android_annotations:AndroidProject:app_annotations#AppProject#modelbuilder */
(nitmethod_t)nitc___nitc__AppProject___name_61d, /* pointer to android_annotations:AndroidProject:app_annotations#AppProject#name= */
(nitmethod_t)nitc___nitc__AppProject___version_61d, /* pointer to android_annotations:AndroidProject:app_annotations#AppProject#version= */
(nitmethod_t)nitc___nitc__AppProject___namespace_61d, /* pointer to android_annotations:AndroidProject:app_annotations#AppProject#namespace= */
(nitmethod_t)nitc___nitc__AppProject___files, /* pointer to android_annotations:AndroidProject:app_annotations#AppProject#files */
(nitmethod_t)nitc___nitc__AppProject___name, /* pointer to android_annotations:AndroidProject:app_annotations#AppProject#name */
(nitmethod_t)nitc___nitc__AppProject___namespace, /* pointer to android_annotations:AndroidProject:app_annotations#AppProject#namespace */
(nitmethod_t)nitc___nitc__AppProject___version, /* pointer to android_annotations:AndroidProject:app_annotations#AppProject#version */
(nitmethod_t)nitc___nitc__AppProject___version_code, /* pointer to android_annotations:AndroidProject:app_annotations#AppProject#version_code */
(nitmethod_t)core___core__Object___init, /* pointer to android_annotations:AndroidProject:kernel#Object#init */
(nitmethod_t)nitc___nitc__AndroidProject___min_api, /* pointer to android_annotations:AndroidProject:android_annotations#AndroidProject#min_api */
(nitmethod_t)nitc___nitc__AndroidProject___target_api, /* pointer to android_annotations:AndroidProject:android_annotations#AndroidProject#target_api */
(nitmethod_t)nitc___nitc__AndroidProject___max_api, /* pointer to android_annotations:AndroidProject:android_annotations#AndroidProject#max_api */
(nitmethod_t)nitc___nitc__AndroidProject___activities, /* pointer to android_annotations:AndroidProject:android_annotations#AndroidProject#activities */
(nitmethod_t)nitc___nitc__AndroidProject___manifest_activity_attributes, /* pointer to android_annotations:AndroidProject:android_annotations#AndroidProject#manifest_activity_attributes */
(nitmethod_t)nitc___nitc__AndroidProject___manifest_application_lines, /* pointer to android_annotations:AndroidProject:android_annotations#AndroidProject#manifest_application_lines */
(nitmethod_t)nitc___nitc__AndroidProject___manifest_lines, /* pointer to android_annotations:AndroidProject:android_annotations#AndroidProject#manifest_lines */
(nitmethod_t)nitc___nitc__AndroidProject___min_api_61d, /* pointer to android_annotations:AndroidProject:android_annotations#AndroidProject#min_api= */
(nitmethod_t)nitc___nitc__AndroidProject___max_api_61d, /* pointer to android_annotations:AndroidProject:android_annotations#AndroidProject#max_api= */
(nitmethod_t)nitc___nitc__AndroidProject___target_api_61d, /* pointer to android_annotations:AndroidProject:android_annotations#AndroidProject#target_api= */
(nitmethod_t)nitc___nitc__AppProject___core__kernel__Object__init, /* pointer to android_annotations:AndroidProject:app_annotations#AppProject#init */
}
};
/* allocate AndroidProject */
val* NEW_nitc__AndroidProject(const struct type* type) {
val* self /* : AndroidProject */;
static val* varonce;
val* var /* : String */;
char* var1 /* : CString */;
val* var2 /* : String */;
val* var3 /* : Array[String] */;
val* var4 /* : Array[String] */;
val* var5 /* : Array[String] */;
val* var6 /* : Array[String] */;
val* var7 /* : Array[String] */;
self = nit_alloc(sizeof(struct instance) + 19*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nitc__AndroidProject;
if (likely(varonce!=NULL)) {
var = varonce;
} else {
var1 = "0.1";
var2 = core__abstract_text___CString___to_s_full(var1, 3l, 3l);
var = var2;
varonce = var;
}
self->attrs[COLOR_nitc__app_annotations__AppProject___version].val = var; /* _version on <self:AndroidProject exact> */
var3 = NEW_core__Array(&type_core__Array__core__String);
{
core___core__Array___core__kernel__Object__init(var3); /* Direct call array#Array#init on <var3:Array[String]>*/
}
self->attrs[COLOR_nitc__app_annotations__AppProject___files].val = var3; /* _files on <self:AndroidProject exact> */
var4 = NEW_core__Array(&type_core__Array__core__String);
{
core___core__Array___core__kernel__Object__init(var4); /* Direct call array#Array#init on <var4:Array[String]>*/
}
self->attrs[COLOR_nitc__android_annotations__AndroidProject___manifest_lines].val = var4; /* _manifest_lines on <self:AndroidProject exact> */
var5 = NEW_core__Array(&type_core__Array__core__String);
{
core___core__Array___core__kernel__Object__init(var5); /* Direct call array#Array#init on <var5:Array[String]>*/
}
self->attrs[COLOR_nitc__android_annotations__AndroidProject___manifest_application_lines].val = var5; /* _manifest_application_lines on <self:AndroidProject exact> */
var6 = NEW_core__Array(&type_core__Array__core__String);
{
core___core__Array___core__kernel__Object__init(var6); /* Direct call array#Array#init on <var6:Array[String]>*/
}
self->attrs[COLOR_nitc__android_annotations__AndroidProject___manifest_activity_attributes].val = var6; /* _manifest_activity_attributes on <self:AndroidProject exact> */
var7 = NEW_core__Array(&type_core__Array__core__String);
{
core___core__Array___core__kernel__Object__init(var7); /* Direct call array#Array#init on <var7:Array[String]>*/
}
self->attrs[COLOR_nitc__android_annotations__AndroidProject___activities].val = var7; /* _activities on <self:AndroidProject exact> */
return self;
}
/* runtime class nitc__AppProject: nitc::AppProject (dead=true; need_corpse=false)*/
/* allocate AppProject */
val* NEW_nitc__AppProject(const struct type* type) {
PRINT_ERROR("Runtime error: %s", "AppProject is DEAD");
PRINT_ERROR("\n");
fatal_exit(1);
}
/* runtime class nitc__PnaclPlatform: nitc::PnaclPlatform (dead=false; need_corpse=false)*/
const struct class class_nitc__PnaclPlatform = {
0, /* box_kind */
{
(nitmethod_t)core___core__Object___init, /* pointer to pnacl:PnaclPlatform:kernel#Object#init */
(nitmethod_t)core___core__Object____33d_61d, /* pointer to pnacl:PnaclPlatform:kernel#Object#!= */
(nitmethod_t)core___core__Object___sys, /* pointer to pnacl:PnaclPlatform:kernel#Object#sys */
(nitmethod_t)core___core__Object____61d_61d, /* pointer to pnacl:PnaclPlatform:kernel#Object#== */
(nitmethod_t)core__abstract_text___Object___to_s, /* pointer to pnacl:PnaclPlatform:abstract_text#Object#to_s */
(nitmethod_t)core___core__Object___is_same_instance, /* pointer to pnacl:PnaclPlatform:kernel#Object#is_same_instance */
(nitmethod_t)core___core__Object___hash, /* pointer to pnacl:PnaclPlatform:kernel#Object#hash */
(nitmethod_t)core__abstract_text___Object___inspect, /* pointer to pnacl:PnaclPlatform:abstract_text#Object#inspect */
(nitmethod_t)core___core__Object___object_id, /* pointer to pnacl:PnaclPlatform:kernel#Object#object_id */
(nitmethod_t)core__abstract_text___Object___class_name, /* pointer to pnacl:PnaclPlatform:abstract_text#Object#class_name */
(nitmethod_t)core__abstract_text___Object___inspect_head, /* pointer to pnacl:PnaclPlatform:abstract_text#Object#inspect_head */
(nitmethod_t)core__abstract_text___Object___native_class_name, /* pointer to pnacl:PnaclPlatform:abstract_text#Object#native_class_name */
(nitmethod_t)core___core__Object___output, /* pointer to pnacl:PnaclPlatform:kernel#Object#output */
(nitmethod_t)serialization___core__Object___serialization_hash, /* pointer to pnacl:PnaclPlatform:serialization#Object#serialization_hash */
(nitmethod_t)serialization___core__Object___is_same_serialized, /* pointer to pnacl:PnaclPlatform:serialization#Object#is_same_serialized */
(nitmethod_t)nitc___nitc__PnaclPlatform___nitc__platform__Platform__name, /* pointer to pnacl:PnaclPlatform:pnacl#PnaclPlatform#name */
(nitmethod_t)nitc___nitc__PnaclPlatform___nitc__platform__Platform__no_main, /* pointer to pnacl:PnaclPlatform:pnacl#PnaclPlatform#no_main */
(nitmethod_t)nitc___nitc__PnaclPlatform___nitc__platform__Platform__supports_libunwind, /* pointer to pnacl:PnaclPlatform:pnacl#PnaclPlatform#supports_libunwind */
(nitmethod_t)nitc___nitc__PnaclPlatform___nitc__abstract_compiler__Platform__toolchain, /* pointer to pnacl:PnaclPlatform:pnacl#PnaclPlatform#toolchain */
(nitmethod_t)nitc___nitc__Platform___supports_linker_script, /* pointer to pnacl:PnaclPlatform:platform#Platform#supports_linker_script */
(nitmethod_t)nitc___nitc__Platform___supports_libgc, /* pointer to pnacl:PnaclPlatform:platform#Platform#supports_libgc */
}
};
/* allocate PnaclPlatform */
val* NEW_nitc__PnaclPlatform(const struct type* type) {
val* self /* : PnaclPlatform */;
self = nit_alloc(sizeof(struct instance) + 0*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nitc__PnaclPlatform;
return self;
}
/* runtime class nitc__PnaclToolchain: nitc::PnaclToolchain (dead=false; need_corpse=false)*/
const struct class class_nitc__PnaclToolchain = {
0, /* box_kind */
{
(nitmethod_t)nitc___nitc__Toolchain___core__kernel__Object__init, /* pointer to pnacl:PnaclToolchain:abstract_compiler#Toolchain#init */
(nitmethod_t)core___core__Object____33d_61d, /* pointer to pnacl:PnaclToolchain:kernel#Object#!= */
(nitmethod_t)core___core__Object___sys, /* pointer to pnacl:PnaclToolchain:kernel#Object#sys */
(nitmethod_t)core___core__Object____61d_61d, /* pointer to pnacl:PnaclToolchain:kernel#Object#== */
(nitmethod_t)core__abstract_text___Object___to_s, /* pointer to pnacl:PnaclToolchain:abstract_text#Object#to_s */
(nitmethod_t)core___core__Object___is_same_instance, /* pointer to pnacl:PnaclToolchain:kernel#Object#is_same_instance */
(nitmethod_t)core___core__Object___hash, /* pointer to pnacl:PnaclToolchain:kernel#Object#hash */
(nitmethod_t)core__abstract_text___Object___inspect, /* pointer to pnacl:PnaclToolchain:abstract_text#Object#inspect */
(nitmethod_t)core___core__Object___object_id, /* pointer to pnacl:PnaclToolchain:kernel#Object#object_id */
(nitmethod_t)core__abstract_text___Object___class_name, /* pointer to pnacl:PnaclToolchain:abstract_text#Object#class_name */
(nitmethod_t)core__abstract_text___Object___inspect_head, /* pointer to pnacl:PnaclToolchain:abstract_text#Object#inspect_head */
(nitmethod_t)core__abstract_text___Object___native_class_name, /* pointer to pnacl:PnaclToolchain:abstract_text#Object#native_class_name */
(nitmethod_t)core___core__Object___output, /* pointer to pnacl:PnaclToolchain:kernel#Object#output */
(nitmethod_t)serialization___core__Object___serialization_hash, /* pointer to pnacl:PnaclToolchain:serialization#Object#serialization_hash */
(nitmethod_t)serialization___core__Object___is_same_serialized, /* pointer to pnacl:PnaclToolchain:serialization#Object#is_same_serialized */
(nitmethod_t)nitc___nitc__MakefileToolchain___Toolchain__write_and_make, /* pointer to pnacl:PnaclToolchain:abstract_compiler#MakefileToolchain#write_and_make */
(nitmethod_t)nitc___nitc__Toolchain___toolcontext_61d, /* pointer to pnacl:PnaclToolchain:abstract_compiler#Toolchain#toolcontext= */
(nitmethod_t)nitc___nitc__Toolchain___compiler_61d, /* pointer to pnacl:PnaclToolchain:abstract_compiler#Toolchain#compiler= */
(nitmethod_t)nitc___nitc__Toolchain___compiler, /* pointer to pnacl:PnaclToolchain:abstract_compiler#Toolchain#compiler */
(nitmethod_t)nitc___nitc__Toolchain___toolcontext, /* pointer to pnacl:PnaclToolchain:abstract_compiler#Toolchain#toolcontext */
(nitmethod_t)nitc___nitc__Toolchain___compile_dir, /* pointer to pnacl:PnaclToolchain:abstract_compiler#Toolchain#compile_dir */
(nitmethod_t)nitc___nitc__Toolchain___root_compile_dir, /* pointer to pnacl:PnaclToolchain:abstract_compiler#Toolchain#root_compile_dir */
(nitmethod_t)core___core__Object___init, /* pointer to pnacl:PnaclToolchain:kernel#Object#init */
(nitmethod_t)nitc___nitc__PnaclToolchain___nitc__abstract_compiler__MakefileToolchain__write_files, /* pointer to pnacl:PnaclToolchain:pnacl#PnaclToolchain#write_files */
(nitmethod_t)nitc___nitc__PnaclToolchain___nitc__abstract_compiler__MakefileToolchain__write_makefile, /* pointer to pnacl:PnaclToolchain:pnacl#PnaclToolchain#write_makefile */
(nitmethod_t)nitc___nitc__PnaclToolchain___nitc__abstract_compiler__MakefileToolchain__compile_c_code, /* pointer to pnacl:PnaclToolchain:pnacl#PnaclToolchain#compile_c_code */
(nitmethod_t)nitc___nitc__MakefileToolchain___outfile, /* pointer to pnacl:PnaclToolchain:abstract_compiler#MakefileToolchain#outfile */
(nitmethod_t)nitc___nitc__MakefileToolchain___makefile_name, /* pointer to pnacl:PnaclToolchain:abstract_compiler#MakefileToolchain#makefile_name */
(nitmethod_t)nitc___nitc__MakefileToolchain___default_outname, /* pointer to pnacl:PnaclToolchain:abstract_compiler#MakefileToolchain#default_outname */
(nitmethod_t)nitc___nitc__MakefileToolchain___write_files, /* pointer to pnacl:PnaclToolchain:abstract_compiler#MakefileToolchain#write_files */
}
};
/* allocate PnaclToolchain */
val* NEW_nitc__PnaclToolchain(const struct type* type) {
val* self /* : PnaclToolchain */;
self = nit_alloc(sizeof(struct instance) + 2*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nitc__PnaclToolchain;
return self;
}
/* runtime class nitc__EmscriptenPlatform: nitc::EmscriptenPlatform (dead=false; need_corpse=false)*/
const struct class class_nitc__EmscriptenPlatform = {
0, /* box_kind */
{
(nitmethod_t)core___core__Object___init, /* pointer to emscripten:EmscriptenPlatform:kernel#Object#init */
(nitmethod_t)core___core__Object____33d_61d, /* pointer to emscripten:EmscriptenPlatform:kernel#Object#!= */
(nitmethod_t)core___core__Object___sys, /* pointer to emscripten:EmscriptenPlatform:kernel#Object#sys */
(nitmethod_t)core___core__Object____61d_61d, /* pointer to emscripten:EmscriptenPlatform:kernel#Object#== */
(nitmethod_t)core__abstract_text___Object___to_s, /* pointer to emscripten:EmscriptenPlatform:abstract_text#Object#to_s */
(nitmethod_t)core___core__Object___is_same_instance, /* pointer to emscripten:EmscriptenPlatform:kernel#Object#is_same_instance */
(nitmethod_t)core___core__Object___hash, /* pointer to emscripten:EmscriptenPlatform:kernel#Object#hash */
(nitmethod_t)core__abstract_text___Object___inspect, /* pointer to emscripten:EmscriptenPlatform:abstract_text#Object#inspect */
(nitmethod_t)core___core__Object___object_id, /* pointer to emscripten:EmscriptenPlatform:kernel#Object#object_id */
(nitmethod_t)core__abstract_text___Object___class_name, /* pointer to emscripten:EmscriptenPlatform:abstract_text#Object#class_name */
(nitmethod_t)core__abstract_text___Object___inspect_head, /* pointer to emscripten:EmscriptenPlatform:abstract_text#Object#inspect_head */
(nitmethod_t)core__abstract_text___Object___native_class_name, /* pointer to emscripten:EmscriptenPlatform:abstract_text#Object#native_class_name */
(nitmethod_t)core___core__Object___output, /* pointer to emscripten:EmscriptenPlatform:kernel#Object#output */
(nitmethod_t)serialization___core__Object___serialization_hash, /* pointer to emscripten:EmscriptenPlatform:serialization#Object#serialization_hash */
(nitmethod_t)serialization___core__Object___is_same_serialized, /* pointer to emscripten:EmscriptenPlatform:serialization#Object#is_same_serialized */
(nitmethod_t)nitc___nitc__EmscriptenPlatform___nitc__platform__Platform__name, /* pointer to emscripten:EmscriptenPlatform:emscripten#EmscriptenPlatform#name */
(nitmethod_t)nitc___nitc__Platform___no_main, /* pointer to emscripten:EmscriptenPlatform:platform#Platform#no_main */
(nitmethod_t)nitc___nitc__EmscriptenPlatform___nitc__platform__Platform__supports_libunwind, /* pointer to emscripten:EmscriptenPlatform:emscripten#EmscriptenPlatform#supports_libunwind */
(nitmethod_t)nitc___nitc__EmscriptenPlatform___nitc__abstract_compiler__Platform__toolchain, /* pointer to emscripten:EmscriptenPlatform:emscripten#EmscriptenPlatform#toolchain */
(nitmethod_t)nitc___nitc__EmscriptenPlatform___nitc__platform__Platform__supports_linker_script, /* pointer to emscripten:EmscriptenPlatform:emscripten#EmscriptenPlatform#supports_linker_script */
(nitmethod_t)nitc___nitc__EmscriptenPlatform___nitc__platform__Platform__supports_libgc, /* pointer to emscripten:EmscriptenPlatform:emscripten#EmscriptenPlatform#supports_libgc */
}
};
/* allocate EmscriptenPlatform */
val* NEW_nitc__EmscriptenPlatform(const struct type* type) {
val* self /* : EmscriptenPlatform */;
self = nit_alloc(sizeof(struct instance) + 0*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nitc__EmscriptenPlatform;
return self;
}
/* runtime class nitc__EnscriptenToolchain: nitc::EnscriptenToolchain (dead=false; need_corpse=false)*/
const struct class class_nitc__EnscriptenToolchain = {
0, /* box_kind */
{
(nitmethod_t)nitc___nitc__Toolchain___core__kernel__Object__init, /* pointer to emscripten:EnscriptenToolchain:abstract_compiler#Toolchain#init */
(nitmethod_t)core___core__Object____33d_61d, /* pointer to emscripten:EnscriptenToolchain:kernel#Object#!= */
(nitmethod_t)core___core__Object___sys, /* pointer to emscripten:EnscriptenToolchain:kernel#Object#sys */
(nitmethod_t)core___core__Object____61d_61d, /* pointer to emscripten:EnscriptenToolchain:kernel#Object#== */
(nitmethod_t)core__abstract_text___Object___to_s, /* pointer to emscripten:EnscriptenToolchain:abstract_text#Object#to_s */
(nitmethod_t)core___core__Object___is_same_instance, /* pointer to emscripten:EnscriptenToolchain:kernel#Object#is_same_instance */
(nitmethod_t)core___core__Object___hash, /* pointer to emscripten:EnscriptenToolchain:kernel#Object#hash */
(nitmethod_t)core__abstract_text___Object___inspect, /* pointer to emscripten:EnscriptenToolchain:abstract_text#Object#inspect */
(nitmethod_t)core___core__Object___object_id, /* pointer to emscripten:EnscriptenToolchain:kernel#Object#object_id */
(nitmethod_t)core__abstract_text___Object___class_name, /* pointer to emscripten:EnscriptenToolchain:abstract_text#Object#class_name */
(nitmethod_t)core__abstract_text___Object___inspect_head, /* pointer to emscripten:EnscriptenToolchain:abstract_text#Object#inspect_head */
(nitmethod_t)core__abstract_text___Object___native_class_name, /* pointer to emscripten:EnscriptenToolchain:abstract_text#Object#native_class_name */
(nitmethod_t)core___core__Object___output, /* pointer to emscripten:EnscriptenToolchain:kernel#Object#output */
(nitmethod_t)serialization___core__Object___serialization_hash, /* pointer to emscripten:EnscriptenToolchain:serialization#Object#serialization_hash */
(nitmethod_t)serialization___core__Object___is_same_serialized, /* pointer to emscripten:EnscriptenToolchain:serialization#Object#is_same_serialized */
(nitmethod_t)nitc___nitc__MakefileToolchain___Toolchain__write_and_make, /* pointer to emscripten:EnscriptenToolchain:abstract_compiler#MakefileToolchain#write_and_make */
(nitmethod_t)nitc___nitc__Toolchain___toolcontext_61d, /* pointer to emscripten:EnscriptenToolchain:abstract_compiler#Toolchain#toolcontext= */
(nitmethod_t)nitc___nitc__Toolchain___compiler_61d, /* pointer to emscripten:EnscriptenToolchain:abstract_compiler#Toolchain#compiler= */
(nitmethod_t)nitc___nitc__Toolchain___compiler, /* pointer to emscripten:EnscriptenToolchain:abstract_compiler#Toolchain#compiler */
(nitmethod_t)nitc___nitc__Toolchain___toolcontext, /* pointer to emscripten:EnscriptenToolchain:abstract_compiler#Toolchain#toolcontext */
(nitmethod_t)nitc___nitc__Toolchain___compile_dir, /* pointer to emscripten:EnscriptenToolchain:abstract_compiler#Toolchain#compile_dir */
(nitmethod_t)nitc___nitc__Toolchain___root_compile_dir, /* pointer to emscripten:EnscriptenToolchain:abstract_compiler#Toolchain#root_compile_dir */
(nitmethod_t)core___core__Object___init, /* pointer to emscripten:EnscriptenToolchain:kernel#Object#init */
(nitmethod_t)nitc___nitc__MakefileToolchain___write_files, /* pointer to emscripten:EnscriptenToolchain:abstract_compiler#MakefileToolchain#write_files */
(nitmethod_t)nitc___nitc__EnscriptenToolchain___nitc__abstract_compiler__MakefileToolchain__write_makefile, /* pointer to emscripten:EnscriptenToolchain:emscripten#EnscriptenToolchain#write_makefile */
(nitmethod_t)nitc___nitc__MakefileToolchain___compile_c_code, /* pointer to emscripten:EnscriptenToolchain:abstract_compiler#MakefileToolchain#compile_c_code */
(nitmethod_t)nitc___nitc__MakefileToolchain___outfile, /* pointer to emscripten:EnscriptenToolchain:abstract_compiler#MakefileToolchain#outfile */
(nitmethod_t)nitc___nitc__EnscriptenToolchain___nitc__abstract_compiler__MakefileToolchain__makefile_name, /* pointer to emscripten:EnscriptenToolchain:emscripten#EnscriptenToolchain#makefile_name */
(nitmethod_t)nitc___nitc__EnscriptenToolchain___nitc__abstract_compiler__MakefileToolchain__default_outname, /* pointer to emscripten:EnscriptenToolchain:emscripten#EnscriptenToolchain#default_outname */
(nitmethod_t)nitc___nitc__MakefileToolchain___write_makefile, /* pointer to emscripten:EnscriptenToolchain:abstract_compiler#MakefileToolchain#write_makefile */
(nitmethod_t)nitc___nitc__MakefileToolchain___makefile_name, /* pointer to emscripten:EnscriptenToolchain:abstract_compiler#MakefileToolchain#makefile_name */
(nitmethod_t)nitc___nitc__MakefileToolchain___default_outname, /* pointer to emscripten:EnscriptenToolchain:abstract_compiler#MakefileToolchain#default_outname */
}
};
/* allocate EnscriptenToolchain */
val* NEW_nitc__EnscriptenToolchain(const struct type* type) {
val* self /* : EnscriptenToolchain */;
self = nit_alloc(sizeof(struct instance) + 2*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nitc__EnscriptenToolchain;
return self;
}
/* runtime class nitc__ios__IOSPlatform: nitc::ios::IOSPlatform (dead=false; need_corpse=false)*/
const struct class class_nitc__ios__IOSPlatform = {
0, /* box_kind */
{
(nitmethod_t)core___core__Object___init, /* pointer to ios:IOSPlatform:kernel#Object#init */
(nitmethod_t)core___core__Object____33d_61d, /* pointer to ios:IOSPlatform:kernel#Object#!= */
(nitmethod_t)core___core__Object___sys, /* pointer to ios:IOSPlatform:kernel#Object#sys */
(nitmethod_t)core___core__Object____61d_61d, /* pointer to ios:IOSPlatform:kernel#Object#== */
(nitmethod_t)core__abstract_text___Object___to_s, /* pointer to ios:IOSPlatform:abstract_text#Object#to_s */
(nitmethod_t)core___core__Object___is_same_instance, /* pointer to ios:IOSPlatform:kernel#Object#is_same_instance */
(nitmethod_t)core___core__Object___hash, /* pointer to ios:IOSPlatform:kernel#Object#hash */
(nitmethod_t)core__abstract_text___Object___inspect, /* pointer to ios:IOSPlatform:abstract_text#Object#inspect */
(nitmethod_t)core___core__Object___object_id, /* pointer to ios:IOSPlatform:kernel#Object#object_id */
(nitmethod_t)core__abstract_text___Object___class_name, /* pointer to ios:IOSPlatform:abstract_text#Object#class_name */
(nitmethod_t)core__abstract_text___Object___inspect_head, /* pointer to ios:IOSPlatform:abstract_text#Object#inspect_head */
(nitmethod_t)core__abstract_text___Object___native_class_name, /* pointer to ios:IOSPlatform:abstract_text#Object#native_class_name */
(nitmethod_t)core___core__Object___output, /* pointer to ios:IOSPlatform:kernel#Object#output */
(nitmethod_t)serialization___core__Object___serialization_hash, /* pointer to ios:IOSPlatform:serialization#Object#serialization_hash */
(nitmethod_t)serialization___core__Object___is_same_serialized, /* pointer to ios:IOSPlatform:serialization#Object#is_same_serialized */
(nitmethod_t)nitc___nitc__Platform___name, /* pointer to ios:IOSPlatform:platform#Platform#name */
(nitmethod_t)nitc___nitc__Platform___no_main, /* pointer to ios:IOSPlatform:platform#Platform#no_main */
(nitmethod_t)nitc__ios___nitc__ios__IOSPlatform___nitc__platform__Platform__supports_libunwind, /* pointer to ios:IOSPlatform:ios#IOSPlatform#supports_libunwind */
(nitmethod_t)nitc__ios___nitc__ios__IOSPlatform___nitc__abstract_compiler__Platform__toolchain, /* pointer to ios:IOSPlatform:ios#IOSPlatform#toolchain */
(nitmethod_t)nitc___nitc__Platform___supports_linker_script, /* pointer to ios:IOSPlatform:platform#Platform#supports_linker_script */
(nitmethod_t)nitc__ios___nitc__ios__IOSPlatform___nitc__platform__Platform__supports_libgc, /* pointer to ios:IOSPlatform:ios#IOSPlatform#supports_libgc */
}
};
/* allocate IOSPlatform */
val* NEW_nitc__ios__IOSPlatform(const struct type* type) {
val* self /* : IOSPlatform */;
self = nit_alloc(sizeof(struct instance) + 0*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nitc__ios__IOSPlatform;
return self;
}
/* runtime class nitc__ios__IosProject: nitc::ios::IosProject (dead=false; need_corpse=false)*/
const struct class class_nitc__ios__IosProject = {
0, /* box_kind */
{
(nitmethod_t)nitc___nitc__AppProject___core__kernel__Object__init, /* pointer to ios:IosProject:app_annotations#AppProject#init */
(nitmethod_t)core___core__Object____33d_61d, /* pointer to ios:IosProject:kernel#Object#!= */
(nitmethod_t)core___core__Object___sys, /* pointer to ios:IosProject:kernel#Object#sys */
(nitmethod_t)core___core__Object____61d_61d, /* pointer to ios:IosProject:kernel#Object#== */
(nitmethod_t)nitc___nitc__AppProject___core__abstract_text__Object__to_s, /* pointer to ios:IosProject:app_annotations#AppProject#to_s */
(nitmethod_t)core___core__Object___is_same_instance, /* pointer to ios:IosProject:kernel#Object#is_same_instance */
(nitmethod_t)core___core__Object___hash, /* pointer to ios:IosProject:kernel#Object#hash */
(nitmethod_t)core__abstract_text___Object___inspect, /* pointer to ios:IosProject:abstract_text#Object#inspect */
(nitmethod_t)core___core__Object___object_id, /* pointer to ios:IosProject:kernel#Object#object_id */
(nitmethod_t)core__abstract_text___Object___class_name, /* pointer to ios:IosProject:abstract_text#Object#class_name */
(nitmethod_t)core__abstract_text___Object___inspect_head, /* pointer to ios:IosProject:abstract_text#Object#inspect_head */
(nitmethod_t)core__abstract_text___Object___native_class_name, /* pointer to ios:IosProject:abstract_text#Object#native_class_name */
(nitmethod_t)core___core__Object___output, /* pointer to ios:IosProject:kernel#Object#output */
(nitmethod_t)serialization___core__Object___serialization_hash, /* pointer to ios:IosProject:serialization#Object#serialization_hash */
(nitmethod_t)serialization___core__Object___is_same_serialized, /* pointer to ios:IosProject:serialization#Object#is_same_serialized */
(nitmethod_t)nitc___nitc__AppProject___mainmodule, /* pointer to ios:IosProject:app_annotations#AppProject#mainmodule */
(nitmethod_t)nitc___nitc__AppProject___short_name, /* pointer to ios:IosProject:app_annotations#AppProject#short_name */
(nitmethod_t)nitc___nitc__AppProject___modelbuilder_61d, /* pointer to ios:IosProject:app_annotations#AppProject#modelbuilder= */
(nitmethod_t)nitc___nitc__AppProject___mainmodule_61d, /* pointer to ios:IosProject:app_annotations#AppProject#mainmodule= */
(nitmethod_t)nitc___nitc__AppProject___modelbuilder, /* pointer to ios:IosProject:app_annotations#AppProject#modelbuilder */
(nitmethod_t)nitc___nitc__AppProject___name_61d, /* pointer to ios:IosProject:app_annotations#AppProject#name= */
(nitmethod_t)nitc___nitc__AppProject___version_61d, /* pointer to ios:IosProject:app_annotations#AppProject#version= */
(nitmethod_t)nitc___nitc__AppProject___namespace_61d, /* pointer to ios:IosProject:app_annotations#AppProject#namespace= */
(nitmethod_t)nitc___nitc__AppProject___files, /* pointer to ios:IosProject:app_annotations#AppProject#files */
(nitmethod_t)nitc___nitc__AppProject___name, /* pointer to ios:IosProject:app_annotations#AppProject#name */
(nitmethod_t)nitc__ios___nitc__ios__IosProject___nitc__app_annotations__AppProject__namespace, /* pointer to ios:IosProject:ios#IosProject#namespace */
(nitmethod_t)nitc___nitc__AppProject___version, /* pointer to ios:IosProject:app_annotations#AppProject#version */
(nitmethod_t)nitc___nitc__AppProject___version_code, /* pointer to ios:IosProject:app_annotations#AppProject#version_code */
(nitmethod_t)core___core__Object___init, /* pointer to ios:IosProject:kernel#Object#init */
(nitmethod_t)nitc___nitc__AppProject___namespace, /* pointer to ios:IosProject:app_annotations#AppProject#namespace */
}
};
/* allocate IosProject */
val* NEW_nitc__ios__IosProject(const struct type* type) {
val* self /* : IosProject */;
static val* varonce;
val* var /* : String */;
char* var1 /* : CString */;
val* var2 /* : String */;
val* var3 /* : Array[String] */;
self = nit_alloc(sizeof(struct instance) + 12*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nitc__ios__IosProject;
if (likely(varonce!=NULL)) {
var = varonce;
} else {
var1 = "0.1";
var2 = core__abstract_text___CString___to_s_full(var1, 3l, 3l);
var = var2;
varonce = var;
}
self->attrs[COLOR_nitc__app_annotations__AppProject___version].val = var; /* _version on <self:IosProject exact> */
var3 = NEW_core__Array(&type_core__Array__core__String);
{
core___core__Array___core__kernel__Object__init(var3); /* Direct call array#Array#init on <var3:Array[String]>*/
}
self->attrs[COLOR_nitc__app_annotations__AppProject___files].val = var3; /* _files on <self:IosProject exact> */
return self;
}
/* runtime class nitc__ios__IOSToolchain: nitc::ios::IOSToolchain (dead=false; need_corpse=false)*/
const struct class class_nitc__ios__IOSToolchain = {
0, /* box_kind */
{
(nitmethod_t)nitc___nitc__Toolchain___core__kernel__Object__init, /* pointer to ios:IOSToolchain:abstract_compiler#Toolchain#init */
(nitmethod_t)core___core__Object____33d_61d, /* pointer to ios:IOSToolchain:kernel#Object#!= */
(nitmethod_t)core___core__Object___sys, /* pointer to ios:IOSToolchain:kernel#Object#sys */
(nitmethod_t)core___core__Object____61d_61d, /* pointer to ios:IOSToolchain:kernel#Object#== */
(nitmethod_t)core__abstract_text___Object___to_s, /* pointer to ios:IOSToolchain:abstract_text#Object#to_s */
(nitmethod_t)core___core__Object___is_same_instance, /* pointer to ios:IOSToolchain:kernel#Object#is_same_instance */
(nitmethod_t)core___core__Object___hash, /* pointer to ios:IOSToolchain:kernel#Object#hash */
(nitmethod_t)core__abstract_text___Object___inspect, /* pointer to ios:IOSToolchain:abstract_text#Object#inspect */
(nitmethod_t)core___core__Object___object_id, /* pointer to ios:IOSToolchain:kernel#Object#object_id */
(nitmethod_t)core__abstract_text___Object___class_name, /* pointer to ios:IOSToolchain:abstract_text#Object#class_name */
(nitmethod_t)core__abstract_text___Object___inspect_head, /* pointer to ios:IOSToolchain:abstract_text#Object#inspect_head */
(nitmethod_t)core__abstract_text___Object___native_class_name, /* pointer to ios:IOSToolchain:abstract_text#Object#native_class_name */
(nitmethod_t)core___core__Object___output, /* pointer to ios:IOSToolchain:kernel#Object#output */
(nitmethod_t)serialization___core__Object___serialization_hash, /* pointer to ios:IOSToolchain:serialization#Object#serialization_hash */
(nitmethod_t)serialization___core__Object___is_same_serialized, /* pointer to ios:IOSToolchain:serialization#Object#is_same_serialized */
(nitmethod_t)nitc___nitc__MakefileToolchain___Toolchain__write_and_make, /* pointer to ios:IOSToolchain:abstract_compiler#MakefileToolchain#write_and_make */
(nitmethod_t)nitc___nitc__Toolchain___toolcontext_61d, /* pointer to ios:IOSToolchain:abstract_compiler#Toolchain#toolcontext= */
(nitmethod_t)nitc___nitc__Toolchain___compiler_61d, /* pointer to ios:IOSToolchain:abstract_compiler#Toolchain#compiler= */
(nitmethod_t)nitc___nitc__Toolchain___compiler, /* pointer to ios:IOSToolchain:abstract_compiler#Toolchain#compiler */
(nitmethod_t)nitc___nitc__Toolchain___toolcontext, /* pointer to ios:IOSToolchain:abstract_compiler#Toolchain#toolcontext */
(nitmethod_t)nitc__ios___nitc__ios__IOSToolchain___nitc__abstract_compiler__Toolchain__compile_dir, /* pointer to ios:IOSToolchain:ios#IOSToolchain#compile_dir */
(nitmethod_t)nitc___nitc__Toolchain___root_compile_dir, /* pointer to ios:IOSToolchain:abstract_compiler#Toolchain#root_compile_dir */
(nitmethod_t)core___core__Object___init, /* pointer to ios:IOSToolchain:kernel#Object#init */
(nitmethod_t)nitc__ios___nitc__ios__IOSToolchain___nitc__abstract_compiler__MakefileToolchain__write_files, /* pointer to ios:IOSToolchain:ios#IOSToolchain#write_files */
(nitmethod_t)nitc__ios___nitc__ios__IOSToolchain___nitc__abstract_compiler__MakefileToolchain__write_makefile, /* pointer to ios:IOSToolchain:ios#IOSToolchain#write_makefile */
(nitmethod_t)nitc__ios___nitc__ios__IOSToolchain___nitc__abstract_compiler__MakefileToolchain__compile_c_code, /* pointer to ios:IOSToolchain:ios#IOSToolchain#compile_c_code */
(nitmethod_t)nitc___nitc__MakefileToolchain___outfile, /* pointer to ios:IOSToolchain:abstract_compiler#MakefileToolchain#outfile */
(nitmethod_t)nitc___nitc__MakefileToolchain___makefile_name, /* pointer to ios:IOSToolchain:abstract_compiler#MakefileToolchain#makefile_name */
(nitmethod_t)nitc__ios___nitc__ios__IOSToolchain___nitc__abstract_compiler__MakefileToolchain__default_outname, /* pointer to ios:IOSToolchain:ios#IOSToolchain#default_outname */
(nitmethod_t)nitc__ios___nitc__ios__IOSToolchain___ios_project_root_61d, /* pointer to ios:IOSToolchain:ios#IOSToolchain#ios_project_root= */
(nitmethod_t)nitc__ios___nitc__ios__IOSToolchain___ios_project_root, /* pointer to ios:IOSToolchain:ios#IOSToolchain#ios_project_root */
(nitmethod_t)nitc__ios___nitc__ios__IOSToolchain___app_project, /* pointer to ios:IOSToolchain:ios#IOSToolchain#app_project */
(nitmethod_t)nitc___nitc__MakefileToolchain___write_files, /* pointer to ios:IOSToolchain:abstract_compiler#MakefileToolchain#write_files */
(nitmethod_t)nitc___nitc__MakefileToolchain___default_outname, /* pointer to ios:IOSToolchain:abstract_compiler#MakefileToolchain#default_outname */
}
};
/* allocate IOSToolchain */
val* NEW_nitc__ios__IOSToolchain(const struct type* type) {
val* self /* : IOSToolchain */;
self = nit_alloc(sizeof(struct instance) + 5*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nitc__ios__IOSToolchain;
return self;
}
/* runtime class nitc__PbxUUIDGenerator: nitc::PbxUUIDGenerator (dead=false; need_corpse=false)*/
const struct class class_nitc__PbxUUIDGenerator = {
0, /* box_kind */
{
(nitmethod_t)core___core__Object___init, /* pointer to xcode_templates:PbxUUIDGenerator:kernel#Object#init */
(nitmethod_t)core___core__Object____33d_61d, /* pointer to xcode_templates:PbxUUIDGenerator:kernel#Object#!= */
(nitmethod_t)core___core__Object___sys, /* pointer to xcode_templates:PbxUUIDGenerator:kernel#Object#sys */
(nitmethod_t)core___core__Object____61d_61d, /* pointer to xcode_templates:PbxUUIDGenerator:kernel#Object#== */
(nitmethod_t)core__abstract_text___Object___to_s, /* pointer to xcode_templates:PbxUUIDGenerator:abstract_text#Object#to_s */
(nitmethod_t)core___core__Object___is_same_instance, /* pointer to xcode_templates:PbxUUIDGenerator:kernel#Object#is_same_instance */
(nitmethod_t)core___core__Object___hash, /* pointer to xcode_templates:PbxUUIDGenerator:kernel#Object#hash */
(nitmethod_t)core__abstract_text___Object___inspect, /* pointer to xcode_templates:PbxUUIDGenerator:abstract_text#Object#inspect */
(nitmethod_t)core___core__Object___object_id, /* pointer to xcode_templates:PbxUUIDGenerator:kernel#Object#object_id */
(nitmethod_t)core__abstract_text___Object___class_name, /* pointer to xcode_templates:PbxUUIDGenerator:abstract_text#Object#class_name */
(nitmethod_t)core__abstract_text___Object___inspect_head, /* pointer to xcode_templates:PbxUUIDGenerator:abstract_text#Object#inspect_head */
(nitmethod_t)core__abstract_text___Object___native_class_name, /* pointer to xcode_templates:PbxUUIDGenerator:abstract_text#Object#native_class_name */
(nitmethod_t)core___core__Object___output, /* pointer to xcode_templates:PbxUUIDGenerator:kernel#Object#output */
(nitmethod_t)serialization___core__Object___serialization_hash, /* pointer to xcode_templates:PbxUUIDGenerator:serialization#Object#serialization_hash */
(nitmethod_t)serialization___core__Object___is_same_serialized, /* pointer to xcode_templates:PbxUUIDGenerator:serialization#Object#is_same_serialized */
(nitmethod_t)nitc___nitc__PbxUUIDGenerator___next_uuid, /* pointer to xcode_templates:PbxUUIDGenerator:xcode_templates#PbxUUIDGenerator#next_uuid */
(nitmethod_t)nitc___nitc__PbxUUIDGenerator___seed_61d, /* pointer to xcode_templates:PbxUUIDGenerator:xcode_templates#PbxUUIDGenerator#seed= */
(nitmethod_t)nitc___nitc__PbxUUIDGenerator___seed, /* pointer to xcode_templates:PbxUUIDGenerator:xcode_templates#PbxUUIDGenerator#seed */
}
};
/* allocate PbxUUIDGenerator */
val* NEW_nitc__PbxUUIDGenerator(const struct type* type) {
val* self /* : PbxUUIDGenerator */;
self = nit_alloc(sizeof(struct instance) + 1*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nitc__PbxUUIDGenerator;
self->attrs[COLOR_nitc__xcode_templates__PbxUUIDGenerator___seed].l = 0l; /* _seed on <self:PbxUUIDGenerator exact> */
return self;
}
/* runtime class nitc__PbxFile: nitc::PbxFile (dead=false; need_corpse=false)*/
const struct class class_nitc__PbxFile = {
0, /* box_kind */
{
(nitmethod_t)nitc___nitc__PbxFile___core__kernel__Object__init, /* pointer to xcode_templates:PbxFile:xcode_templates#PbxFile#init */
(nitmethod_t)core___core__Object____33d_61d, /* pointer to xcode_templates:PbxFile:kernel#Object#!= */
(nitmethod_t)core___core__Object___sys, /* pointer to xcode_templates:PbxFile:kernel#Object#sys */
(nitmethod_t)core___core__Object____61d_61d, /* pointer to xcode_templates:PbxFile:kernel#Object#== */
(nitmethod_t)core__abstract_text___Object___to_s, /* pointer to xcode_templates:PbxFile:abstract_text#Object#to_s */
(nitmethod_t)core___core__Object___is_same_instance, /* pointer to xcode_templates:PbxFile:kernel#Object#is_same_instance */
(nitmethod_t)core___core__Object___hash, /* pointer to xcode_templates:PbxFile:kernel#Object#hash */
(nitmethod_t)core__abstract_text___Object___inspect, /* pointer to xcode_templates:PbxFile:abstract_text#Object#inspect */
(nitmethod_t)core___core__Object___object_id, /* pointer to xcode_templates:PbxFile:kernel#Object#object_id */
(nitmethod_t)core__abstract_text___Object___class_name, /* pointer to xcode_templates:PbxFile:abstract_text#Object#class_name */
(nitmethod_t)core__abstract_text___Object___inspect_head, /* pointer to xcode_templates:PbxFile:abstract_text#Object#inspect_head */
(nitmethod_t)core__abstract_text___Object___native_class_name, /* pointer to xcode_templates:PbxFile:abstract_text#Object#native_class_name */
(nitmethod_t)core___core__Object___output, /* pointer to xcode_templates:PbxFile:kernel#Object#output */
(nitmethod_t)serialization___core__Object___serialization_hash, /* pointer to xcode_templates:PbxFile:serialization#Object#serialization_hash */
(nitmethod_t)serialization___core__Object___is_same_serialized, /* pointer to xcode_templates:PbxFile:serialization#Object#is_same_serialized */
(nitmethod_t)nitc___nitc__PbxFile___path_61d, /* pointer to xcode_templates:PbxFile:xcode_templates#PbxFile#path= */
(nitmethod_t)nitc___nitc__PbxFile___build_uuid, /* pointer to xcode_templates:PbxFile:xcode_templates#PbxFile#build_uuid */
(nitmethod_t)nitc___nitc__PbxFile___doc, /* pointer to xcode_templates:PbxFile:xcode_templates#PbxFile#doc */
(nitmethod_t)nitc___nitc__PbxFile___ref_uuid, /* pointer to xcode_templates:PbxFile:xcode_templates#PbxFile#ref_uuid */
(nitmethod_t)nitc___nitc__PbxFile___description, /* pointer to xcode_templates:PbxFile:xcode_templates#PbxFile#description */
(nitmethod_t)nitc___nitc__PbxFile___add_to_project, /* pointer to xcode_templates:PbxFile:xcode_templates#PbxFile#add_to_project */
(nitmethod_t)nitc___nitc__PbxFile___path, /* pointer to xcode_templates:PbxFile:xcode_templates#PbxFile#path */
(nitmethod_t)nitc___nitc__PbxFile___file_type, /* pointer to xcode_templates:PbxFile:xcode_templates#PbxFile#file_type */
(nitmethod_t)core___core__Object___init, /* pointer to xcode_templates:PbxFile:kernel#Object#init */
}
};
/* allocate PbxFile */
val* NEW_nitc__PbxFile(const struct type* type) {
val* self /* : PbxFile */;
self = nit_alloc(sizeof(struct instance) + 5*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nitc__PbxFile;
return self;
}
/* runtime class nitc__PbxprojectTemplate: nitc::PbxprojectTemplate (dead=false; need_corpse=false)*/
const struct class class_nitc__PbxprojectTemplate = {
0, /* box_kind */
{
(nitmethod_t)nitc___nitc__PbxprojectTemplate___core__kernel__Object__init, /* pointer to xcode_templates:PbxprojectTemplate:xcode_templates#PbxprojectTemplate#init */
(nitmethod_t)core___core__Object____33d_61d, /* pointer to xcode_templates:PbxprojectTemplate:kernel#Object#!= */
(nitmethod_t)core___core__Object___sys, /* pointer to xcode_templates:PbxprojectTemplate:kernel#Object#sys */
(nitmethod_t)core___core__Object____61d_61d, /* pointer to xcode_templates:PbxprojectTemplate:kernel#Object#== */
(nitmethod_t)core__abstract_text___Object___to_s, /* pointer to xcode_templates:PbxprojectTemplate:abstract_text#Object#to_s */
(nitmethod_t)core___core__Object___is_same_instance, /* pointer to xcode_templates:PbxprojectTemplate:kernel#Object#is_same_instance */
(nitmethod_t)core___core__Object___hash, /* pointer to xcode_templates:PbxprojectTemplate:kernel#Object#hash */
(nitmethod_t)core__abstract_text___Object___inspect, /* pointer to xcode_templates:PbxprojectTemplate:abstract_text#Object#inspect */
(nitmethod_t)core___core__Object___object_id, /* pointer to xcode_templates:PbxprojectTemplate:kernel#Object#object_id */
(nitmethod_t)core__abstract_text___Object___class_name, /* pointer to xcode_templates:PbxprojectTemplate:abstract_text#Object#class_name */
(nitmethod_t)core__abstract_text___Object___inspect_head, /* pointer to xcode_templates:PbxprojectTemplate:abstract_text#Object#inspect_head */
(nitmethod_t)core__abstract_text___Object___native_class_name, /* pointer to xcode_templates:PbxprojectTemplate:abstract_text#Object#native_class_name */
(nitmethod_t)core___core__Object___output, /* pointer to xcode_templates:PbxprojectTemplate:kernel#Object#output */
(nitmethod_t)serialization___core__Object___serialization_hash, /* pointer to xcode_templates:PbxprojectTemplate:serialization#Object#serialization_hash */
(nitmethod_t)serialization___core__Object___is_same_serialized, /* pointer to xcode_templates:PbxprojectTemplate:serialization#Object#is_same_serialized */
(nitmethod_t)template___template__Template___is_writing, /* pointer to xcode_templates:PbxprojectTemplate:template#Template#is_writing */
(nitmethod_t)template___template__Template___is_writing_61d, /* pointer to xcode_templates:PbxprojectTemplate:template#Template#is_writing= */
(nitmethod_t)template___template__Template___force_render, /* pointer to xcode_templates:PbxprojectTemplate:template#Template#force_render */
(nitmethod_t)template___template__Template___content, /* pointer to xcode_templates:PbxprojectTemplate:template#Template#content */
(nitmethod_t)template___template__Template___render_done, /* pointer to xcode_templates:PbxprojectTemplate:template#Template#render_done */
(nitmethod_t)template___template__Template___render_done_61d, /* pointer to xcode_templates:PbxprojectTemplate:template#Template#render_done= */
(nitmethod_t)nitc___nitc__PbxprojectTemplate___template__Template__rendering, /* pointer to xcode_templates:PbxprojectTemplate:xcode_templates#PbxprojectTemplate#rendering */
(nitmethod_t)template___template__Template___freeze, /* pointer to xcode_templates:PbxprojectTemplate:template#Template#freeze */
(nitmethod_t)template___template__Template___add, /* pointer to xcode_templates:PbxprojectTemplate:template#Template#add */
(nitmethod_t)template___template__Template___addn, /* pointer to xcode_templates:PbxprojectTemplate:template#Template#addn */
(nitmethod_t)template___template__Template___is_frozen, /* pointer to xcode_templates:PbxprojectTemplate:template#Template#is_frozen */
(nitmethod_t)template___template__Template___is_frozen_61d, /* pointer to xcode_templates:PbxprojectTemplate:template#Template#is_frozen= */
(nitmethod_t)nitc___nitc__PbxprojectTemplate___name_61d, /* pointer to xcode_templates:PbxprojectTemplate:xcode_templates#PbxprojectTemplate#name= */
(nitmethod_t)nitc___nitc__PbxprojectTemplate___add_file, /* pointer to xcode_templates:PbxprojectTemplate:xcode_templates#PbxprojectTemplate#add_file */
(nitmethod_t)nitc___nitc__PbxprojectTemplate___source_files, /* pointer to xcode_templates:PbxprojectTemplate:xcode_templates#PbxprojectTemplate#source_files */
(nitmethod_t)nitc___nitc__PbxprojectTemplate___asset_files, /* pointer to xcode_templates:PbxprojectTemplate:xcode_templates#PbxprojectTemplate#asset_files */
(nitmethod_t)nitc___nitc__PbxprojectTemplate___name, /* pointer to xcode_templates:PbxprojectTemplate:xcode_templates#PbxprojectTemplate#name */
(nitmethod_t)nitc___nitc__PbxprojectTemplate___files, /* pointer to xcode_templates:PbxprojectTemplate:xcode_templates#PbxprojectTemplate#files */
(nitmethod_t)core___core__Object___init, /* pointer to xcode_templates:PbxprojectTemplate:kernel#Object#init */
NULL, /* empty */
NULL, /* empty */
(nitmethod_t)core__file___Writable___write_to_file, /* pointer to xcode_templates:PbxprojectTemplate:file#Writable#write_to_file */
(nitmethod_t)template___template__Template___core__stream__Writable__write_to, /* pointer to xcode_templates:PbxprojectTemplate:template#Template#write_to */
}
};
/* allocate PbxprojectTemplate */
val* NEW_nitc__PbxprojectTemplate(const struct type* type) {
val* self /* : PbxprojectTemplate */;
val* var /* : Array[Writable] */;
val* var1 /* : Array[PbxFile] */;
val* var2 /* : Array[PbxFile] */;
val* var3 /* : Array[PbxFile] */;
self = nit_alloc(sizeof(struct instance) + 8*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nitc__PbxprojectTemplate;
self->attrs[COLOR_template__Template___is_frozen].s = 0; /* _is_frozen on <self:PbxprojectTemplate exact> */
var = NEW_core__Array(&type_core__Array__core__Writable);
{
core___core__Array___core__kernel__Object__init(var); /* Direct call array#Array#init on <var:Array[Writable]>*/
}
self->attrs[COLOR_template__Template___content].val = var; /* _content on <self:PbxprojectTemplate exact> */
self->attrs[COLOR_template__Template___render_done].s = 0; /* _render_done on <self:PbxprojectTemplate exact> */
self->attrs[COLOR_template__Template___is_writing].s = 0; /* _is_writing on <self:PbxprojectTemplate exact> */
var1 = NEW_core__Array(&type_core__Array__nitc__PbxFile);
{
core___core__Array___core__kernel__Object__init(var1); /* Direct call array#Array#init on <var1:Array[PbxFile]>*/
}
self->attrs[COLOR_nitc__xcode_templates__PbxprojectTemplate___source_files].val = var1; /* _source_files on <self:PbxprojectTemplate exact> */
var2 = NEW_core__Array(&type_core__Array__nitc__PbxFile);
{
core___core__Array___core__kernel__Object__init(var2); /* Direct call array#Array#init on <var2:Array[PbxFile]>*/
}
self->attrs[COLOR_nitc__xcode_templates__PbxprojectTemplate___asset_files].val = var2; /* _asset_files on <self:PbxprojectTemplate exact> */
var3 = NEW_core__Array(&type_core__Array__nitc__PbxFile);
{
core___core__Array___core__kernel__Object__init(var3); /* Direct call array#Array#init on <var3:Array[PbxFile]>*/
}
self->attrs[COLOR_nitc__xcode_templates__PbxprojectTemplate___files].val = var3; /* _files on <self:PbxprojectTemplate exact> */
return self;
}
/* runtime class nitc__PlistTemplate: nitc::PlistTemplate (dead=false; need_corpse=false)*/
const struct class class_nitc__PlistTemplate = {
0, /* box_kind */
{
(nitmethod_t)nitc___nitc__PlistTemplate___core__kernel__Object__init, /* pointer to xcode_templates:PlistTemplate:xcode_templates#PlistTemplate#init */
(nitmethod_t)core___core__Object____33d_61d, /* pointer to xcode_templates:PlistTemplate:kernel#Object#!= */
(nitmethod_t)core___core__Object___sys, /* pointer to xcode_templates:PlistTemplate:kernel#Object#sys */
(nitmethod_t)core___core__Object____61d_61d, /* pointer to xcode_templates:PlistTemplate:kernel#Object#== */
(nitmethod_t)core__abstract_text___Object___to_s, /* pointer to xcode_templates:PlistTemplate:abstract_text#Object#to_s */
(nitmethod_t)core___core__Object___is_same_instance, /* pointer to xcode_templates:PlistTemplate:kernel#Object#is_same_instance */
(nitmethod_t)core___core__Object___hash, /* pointer to xcode_templates:PlistTemplate:kernel#Object#hash */
(nitmethod_t)core__abstract_text___Object___inspect, /* pointer to xcode_templates:PlistTemplate:abstract_text#Object#inspect */
(nitmethod_t)core___core__Object___object_id, /* pointer to xcode_templates:PlistTemplate:kernel#Object#object_id */
(nitmethod_t)core__abstract_text___Object___class_name, /* pointer to xcode_templates:PlistTemplate:abstract_text#Object#class_name */
(nitmethod_t)core__abstract_text___Object___inspect_head, /* pointer to xcode_templates:PlistTemplate:abstract_text#Object#inspect_head */
(nitmethod_t)core__abstract_text___Object___native_class_name, /* pointer to xcode_templates:PlistTemplate:abstract_text#Object#native_class_name */
(nitmethod_t)core___core__Object___output, /* pointer to xcode_templates:PlistTemplate:kernel#Object#output */
(nitmethod_t)serialization___core__Object___serialization_hash, /* pointer to xcode_templates:PlistTemplate:serialization#Object#serialization_hash */
(nitmethod_t)serialization___core__Object___is_same_serialized, /* pointer to xcode_templates:PlistTemplate:serialization#Object#is_same_serialized */
(nitmethod_t)template___template__Template___is_writing, /* pointer to xcode_templates:PlistTemplate:template#Template#is_writing */
(nitmethod_t)template___template__Template___is_writing_61d, /* pointer to xcode_templates:PlistTemplate:template#Template#is_writing= */
(nitmethod_t)template___template__Template___force_render, /* pointer to xcode_templates:PlistTemplate:template#Template#force_render */
(nitmethod_t)template___template__Template___content, /* pointer to xcode_templates:PlistTemplate:template#Template#content */
(nitmethod_t)template___template__Template___render_done, /* pointer to xcode_templates:PlistTemplate:template#Template#render_done */
(nitmethod_t)template___template__Template___render_done_61d, /* pointer to xcode_templates:PlistTemplate:template#Template#render_done= */
(nitmethod_t)nitc___nitc__PlistTemplate___template__Template__rendering, /* pointer to xcode_templates:PlistTemplate:xcode_templates#PlistTemplate#rendering */
(nitmethod_t)template___template__Template___freeze, /* pointer to xcode_templates:PlistTemplate:template#Template#freeze */
(nitmethod_t)template___template__Template___add, /* pointer to xcode_templates:PlistTemplate:template#Template#add */
(nitmethod_t)template___template__Template___addn, /* pointer to xcode_templates:PlistTemplate:template#Template#addn */
(nitmethod_t)template___template__Template___is_frozen, /* pointer to xcode_templates:PlistTemplate:template#Template#is_frozen */
(nitmethod_t)template___template__Template___is_frozen_61d, /* pointer to xcode_templates:PlistTemplate:template#Template#is_frozen= */
(nitmethod_t)nitc___nitc__PlistTemplate___product_name_61d, /* pointer to xcode_templates:PlistTemplate:xcode_templates#PlistTemplate#product_name= */
(nitmethod_t)nitc___nitc__PlistTemplate___bundle_identifier_61d, /* pointer to xcode_templates:PlistTemplate:xcode_templates#PlistTemplate#bundle_identifier= */
(nitmethod_t)nitc___nitc__PlistTemplate___short_version_61d, /* pointer to xcode_templates:PlistTemplate:xcode_templates#PlistTemplate#short_version= */
(nitmethod_t)nitc___nitc__PlistTemplate___bundle_version_61d, /* pointer to xcode_templates:PlistTemplate:xcode_templates#PlistTemplate#bundle_version= */
(nitmethod_t)nitc___nitc__PlistTemplate___bundle_identifier, /* pointer to xcode_templates:PlistTemplate:xcode_templates#PlistTemplate#bundle_identifier */
(nitmethod_t)nitc___nitc__PlistTemplate___product_name, /* pointer to xcode_templates:PlistTemplate:xcode_templates#PlistTemplate#product_name */
(nitmethod_t)nitc___nitc__PlistTemplate___short_version, /* pointer to xcode_templates:PlistTemplate:xcode_templates#PlistTemplate#short_version */
(nitmethod_t)nitc___nitc__PlistTemplate___bundle_version, /* pointer to xcode_templates:PlistTemplate:xcode_templates#PlistTemplate#bundle_version */
(nitmethod_t)core___core__Object___init, /* pointer to xcode_templates:PlistTemplate:kernel#Object#init */
(nitmethod_t)core__file___Writable___write_to_file, /* pointer to xcode_templates:PlistTemplate:file#Writable#write_to_file */
(nitmethod_t)template___template__Template___core__stream__Writable__write_to, /* pointer to xcode_templates:PlistTemplate:template#Template#write_to */
}
};
/* allocate PlistTemplate */
val* NEW_nitc__PlistTemplate(const struct type* type) {
val* self /* : PlistTemplate */;
val* var /* : Array[Writable] */;
self = nit_alloc(sizeof(struct instance) + 8*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nitc__PlistTemplate;
self->attrs[COLOR_template__Template___is_frozen].s = 0; /* _is_frozen on <self:PlistTemplate exact> */
var = NEW_core__Array(&type_core__Array__core__Writable);
{
core___core__Array___core__kernel__Object__init(var); /* Direct call array#Array#init on <var:Array[Writable]>*/
}
self->attrs[COLOR_template__Template___content].val = var; /* _content on <self:PlistTemplate exact> */
self->attrs[COLOR_template__Template___render_done].s = 0; /* _render_done on <self:PlistTemplate exact> */
self->attrs[COLOR_template__Template___is_writing].s = 0; /* _is_writing on <self:PlistTemplate exact> */
return self;
}
/* runtime class nitc__LaunchScreenStoryboardTemplate: nitc::LaunchScreenStoryboardTemplate (dead=false; need_corpse=false)*/
const struct class class_nitc__LaunchScreenStoryboardTemplate = {
0, /* box_kind */
{
(nitmethod_t)core___core__Object___init, /* pointer to xcode_templates:LaunchScreenStoryboardTemplate:kernel#Object#init */
(nitmethod_t)core___core__Object____33d_61d, /* pointer to xcode_templates:LaunchScreenStoryboardTemplate:kernel#Object#!= */
(nitmethod_t)core___core__Object___sys, /* pointer to xcode_templates:LaunchScreenStoryboardTemplate:kernel#Object#sys */
(nitmethod_t)core___core__Object____61d_61d, /* pointer to xcode_templates:LaunchScreenStoryboardTemplate:kernel#Object#== */
(nitmethod_t)core__abstract_text___Object___to_s, /* pointer to xcode_templates:LaunchScreenStoryboardTemplate:abstract_text#Object#to_s */
(nitmethod_t)core___core__Object___is_same_instance, /* pointer to xcode_templates:LaunchScreenStoryboardTemplate:kernel#Object#is_same_instance */
(nitmethod_t)core___core__Object___hash, /* pointer to xcode_templates:LaunchScreenStoryboardTemplate:kernel#Object#hash */
(nitmethod_t)core__abstract_text___Object___inspect, /* pointer to xcode_templates:LaunchScreenStoryboardTemplate:abstract_text#Object#inspect */
(nitmethod_t)core___core__Object___object_id, /* pointer to xcode_templates:LaunchScreenStoryboardTemplate:kernel#Object#object_id */
(nitmethod_t)core__abstract_text___Object___class_name, /* pointer to xcode_templates:LaunchScreenStoryboardTemplate:abstract_text#Object#class_name */
(nitmethod_t)core__abstract_text___Object___inspect_head, /* pointer to xcode_templates:LaunchScreenStoryboardTemplate:abstract_text#Object#inspect_head */
(nitmethod_t)core__abstract_text___Object___native_class_name, /* pointer to xcode_templates:LaunchScreenStoryboardTemplate:abstract_text#Object#native_class_name */
(nitmethod_t)core___core__Object___output, /* pointer to xcode_templates:LaunchScreenStoryboardTemplate:kernel#Object#output */
(nitmethod_t)serialization___core__Object___serialization_hash, /* pointer to xcode_templates:LaunchScreenStoryboardTemplate:serialization#Object#serialization_hash */
(nitmethod_t)serialization___core__Object___is_same_serialized, /* pointer to xcode_templates:LaunchScreenStoryboardTemplate:serialization#Object#is_same_serialized */
(nitmethod_t)template___template__Template___is_writing, /* pointer to xcode_templates:LaunchScreenStoryboardTemplate:template#Template#is_writing */
(nitmethod_t)template___template__Template___is_writing_61d, /* pointer to xcode_templates:LaunchScreenStoryboardTemplate:template#Template#is_writing= */
(nitmethod_t)template___template__Template___force_render, /* pointer to xcode_templates:LaunchScreenStoryboardTemplate:template#Template#force_render */
(nitmethod_t)template___template__Template___content, /* pointer to xcode_templates:LaunchScreenStoryboardTemplate:template#Template#content */
(nitmethod_t)template___template__Template___render_done, /* pointer to xcode_templates:LaunchScreenStoryboardTemplate:template#Template#render_done */
(nitmethod_t)template___template__Template___render_done_61d, /* pointer to xcode_templates:LaunchScreenStoryboardTemplate:template#Template#render_done= */
(nitmethod_t)nitc___nitc__LaunchScreenStoryboardTemplate___template__Template__rendering, /* pointer to xcode_templates:LaunchScreenStoryboardTemplate:xcode_templates#LaunchScreenStoryboardTemplate#rendering */
(nitmethod_t)template___template__Template___freeze, /* pointer to xcode_templates:LaunchScreenStoryboardTemplate:template#Template#freeze */
(nitmethod_t)template___template__Template___add, /* pointer to xcode_templates:LaunchScreenStoryboardTemplate:template#Template#add */
(nitmethod_t)template___template__Template___addn, /* pointer to xcode_templates:LaunchScreenStoryboardTemplate:template#Template#addn */
(nitmethod_t)template___template__Template___is_frozen, /* pointer to xcode_templates:LaunchScreenStoryboardTemplate:template#Template#is_frozen */
(nitmethod_t)template___template__Template___is_frozen_61d, /* pointer to xcode_templates:LaunchScreenStoryboardTemplate:template#Template#is_frozen= */
(nitmethod_t)nitc___nitc__LaunchScreenStoryboardTemplate___title_61d, /* pointer to xcode_templates:LaunchScreenStoryboardTemplate:xcode_templates#LaunchScreenStoryboardTemplate#title= */
(nitmethod_t)nitc___nitc__LaunchScreenStoryboardTemplate___subtitle_61d, /* pointer to xcode_templates:LaunchScreenStoryboardTemplate:xcode_templates#LaunchScreenStoryboardTemplate#subtitle= */
(nitmethod_t)nitc___nitc__LaunchScreenStoryboardTemplate___subtitle, /* pointer to xcode_templates:LaunchScreenStoryboardTemplate:xcode_templates#LaunchScreenStoryboardTemplate#subtitle */
(nitmethod_t)nitc___nitc__LaunchScreenStoryboardTemplate___title, /* pointer to xcode_templates:LaunchScreenStoryboardTemplate:xcode_templates#LaunchScreenStoryboardTemplate#title */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
NULL, /* empty */
(nitmethod_t)core__file___Writable___write_to_file, /* pointer to xcode_templates:LaunchScreenStoryboardTemplate:file#Writable#write_to_file */
(nitmethod_t)template___template__Template___core__stream__Writable__write_to, /* pointer to xcode_templates:LaunchScreenStoryboardTemplate:template#Template#write_to */
}
};
/* allocate LaunchScreenStoryboardTemplate */
val* NEW_nitc__LaunchScreenStoryboardTemplate(const struct type* type) {
val* self /* : LaunchScreenStoryboardTemplate */;
val* var /* : Array[Writable] */;
static val* varonce;
val* var1 /* : String */;
char* var2 /* : CString */;
val* var3 /* : String */;
static val* varonce4;
val* var5 /* : String */;
char* var6 /* : CString */;
val* var7 /* : String */;
self = nit_alloc(sizeof(struct instance) + 6*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nitc__LaunchScreenStoryboardTemplate;
self->attrs[COLOR_template__Template___is_frozen].s = 0; /* _is_frozen on <self:LaunchScreenStoryboardTemplate exact> */
var = NEW_core__Array(&type_core__Array__core__Writable);
{
core___core__Array___core__kernel__Object__init(var); /* Direct call array#Array#init on <var:Array[Writable]>*/
}
self->attrs[COLOR_template__Template___content].val = var; /* _content on <self:LaunchScreenStoryboardTemplate exact> */
self->attrs[COLOR_template__Template___render_done].s = 0; /* _render_done on <self:LaunchScreenStoryboardTemplate exact> */
self->attrs[COLOR_template__Template___is_writing].s = 0; /* _is_writing on <self:LaunchScreenStoryboardTemplate exact> */
if (likely(varonce!=NULL)) {
var1 = varonce;
} else {
var2 = "";
var3 = core__abstract_text___CString___to_s_full(var2, 0l, 0l);
var1 = var3;
varonce = var1;
}
self->attrs[COLOR_nitc__xcode_templates__LaunchScreenStoryboardTemplate___title].val = var1; /* _title on <self:LaunchScreenStoryboardTemplate exact> */
if (likely(varonce4!=NULL)) {
var5 = varonce4;
} else {
var6 = "";
var7 = core__abstract_text___CString___to_s_full(var6, 0l, 0l);
var5 = var7;
varonce4 = var5;
}
self->attrs[COLOR_nitc__xcode_templates__LaunchScreenStoryboardTemplate___subtitle].val = var5; /* _subtitle on <self:LaunchScreenStoryboardTemplate exact> */
return self;
}
/* runtime class nitc__transform__TransformPhase: nitc::transform::TransformPhase (dead=false; need_corpse=false)*/
const struct class class_nitc__transform__TransformPhase = {
0, /* box_kind */
{
(nitmethod_t)nitc___nitc__Phase___core__kernel__Object__init, /* pointer to transform:TransformPhase:phase#Phase#init */
(nitmethod_t)core___core__Object____33d_61d, /* pointer to transform:TransformPhase:kernel#Object#!= */
(nitmethod_t)core___core__Object___sys, /* pointer to transform:TransformPhase:kernel#Object#sys */
(nitmethod_t)core___core__Object____61d_61d, /* pointer to transform:TransformPhase:kernel#Object#== */
(nitmethod_t)nitc___nitc__Phase___core__abstract_text__Object__to_s, /* pointer to transform:TransformPhase:phase#Phase#to_s */
(nitmethod_t)core___core__Object___is_same_instance, /* pointer to transform:TransformPhase:kernel#Object#is_same_instance */
(nitmethod_t)core___core__Object___hash, /* pointer to transform:TransformPhase:kernel#Object#hash */
(nitmethod_t)core__abstract_text___Object___inspect, /* pointer to transform:TransformPhase:abstract_text#Object#inspect */
(nitmethod_t)core___core__Object___object_id, /* pointer to transform:TransformPhase:kernel#Object#object_id */
(nitmethod_t)core__abstract_text___Object___class_name, /* pointer to transform:TransformPhase:abstract_text#Object#class_name */
(nitmethod_t)core__abstract_text___Object___inspect_head, /* pointer to transform:TransformPhase:abstract_text#Object#inspect_head */
(nitmethod_t)core__abstract_text___Object___native_class_name, /* pointer to transform:TransformPhase:abstract_text#Object#native_class_name */
(nitmethod_t)core___core__Object___output, /* pointer to transform:TransformPhase:kernel#Object#output */
(nitmethod_t)serialization___core__Object___serialization_hash, /* pointer to transform:TransformPhase:serialization#Object#serialization_hash */
(nitmethod_t)serialization___core__Object___is_same_serialized, /* pointer to transform:TransformPhase:serialization#Object#is_same_serialized */
(nitmethod_t)nitc___nitc__Phase___toolcontext_61d, /* pointer to transform:TransformPhase:phase#Phase#toolcontext= */
(nitmethod_t)nitc___nitc__Phase___depends_61d, /* pointer to transform:TransformPhase:phase#Phase#depends= */
(nitmethod_t)nitc___nitc__Phase___toolcontext, /* pointer to transform:TransformPhase:phase#Phase#toolcontext */
(nitmethod_t)nitc___nitc__Phase___in_hierarchy_61d, /* pointer to transform:TransformPhase:phase#Phase#in_hierarchy= */
(nitmethod_t)nitc___nitc__Phase___depends, /* pointer to transform:TransformPhase:phase#Phase#depends */
(nitmethod_t)nitc___nitc__Phase___disabled, /* pointer to transform:TransformPhase:phase#Phase#disabled */
(nitmethod_t)nitc__modelbuilder___Phase___process_mainmodule, /* pointer to transform:TransformPhase:modelbuilder#Phase#process_mainmodule */
(nitmethod_t)nitc___nitc__Phase___process_nmodule, /* pointer to transform:TransformPhase:phase#Phase#process_nmodule */
(nitmethod_t)nitc___nitc__Phase___process_nclassdef, /* pointer to transform:TransformPhase:phase#Phase#process_nclassdef */
(nitmethod_t)nitc___nitc__Phase___process_annotated_node, /* pointer to transform:TransformPhase:phase#Phase#process_annotated_node */
(nitmethod_t)nitc__transform___nitc__transform__TransformPhase___nitc__phase__Phase__process_npropdef, /* pointer to transform:TransformPhase:transform#TransformPhase#process_npropdef */
(nitmethod_t)nitc___nitc__Phase___in_hierarchy, /* pointer to transform:TransformPhase:phase#Phase#in_hierarchy */
(nitmethod_t)nitc___nitc__Phase___disabled_61d, /* pointer to transform:TransformPhase:phase#Phase#disabled= */
(nitmethod_t)core___core__Object___init, /* pointer to transform:TransformPhase:kernel#Object#init */
}
};
/* allocate TransformPhase */
val* NEW_nitc__transform__TransformPhase(const struct type* type) {
val* self /* : TransformPhase */;
self = nit_alloc(sizeof(struct instance) + 4*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nitc__transform__TransformPhase;
self->attrs[COLOR_nitc__phase__Phase___disabled].s = 0; /* _disabled on <self:TransformPhase exact> */
return self;
}
/* runtime class nitc__transform__TransformVisitor: nitc::transform::TransformVisitor (dead=false; need_corpse=false)*/
const struct class class_nitc__transform__TransformVisitor = {
0, /* box_kind */
{
(nitmethod_t)nitc__transform___nitc__transform__TransformVisitor___core__kernel__Object__init, /* pointer to transform:TransformVisitor:transform#TransformVisitor#init */
(nitmethod_t)core___core__Object____33d_61d, /* pointer to transform:TransformVisitor:kernel#Object#!= */
(nitmethod_t)core___core__Object___sys, /* pointer to transform:TransformVisitor:kernel#Object#sys */
(nitmethod_t)core___core__Object____61d_61d, /* pointer to transform:TransformVisitor:kernel#Object#== */
(nitmethod_t)core__abstract_text___Object___to_s, /* pointer to transform:TransformVisitor:abstract_text#Object#to_s */
(nitmethod_t)core___core__Object___is_same_instance, /* pointer to transform:TransformVisitor:kernel#Object#is_same_instance */
(nitmethod_t)core___core__Object___hash, /* pointer to transform:TransformVisitor:kernel#Object#hash */
(nitmethod_t)core__abstract_text___Object___inspect, /* pointer to transform:TransformVisitor:abstract_text#Object#inspect */
(nitmethod_t)core___core__Object___object_id, /* pointer to transform:TransformVisitor:kernel#Object#object_id */
(nitmethod_t)core__abstract_text___Object___class_name, /* pointer to transform:TransformVisitor:abstract_text#Object#class_name */
(nitmethod_t)core__abstract_text___Object___inspect_head, /* pointer to transform:TransformVisitor:abstract_text#Object#inspect_head */
(nitmethod_t)core__abstract_text___Object___native_class_name, /* pointer to transform:TransformVisitor:abstract_text#Object#native_class_name */
(nitmethod_t)core___core__Object___output, /* pointer to transform:TransformVisitor:kernel#Object#output */
(nitmethod_t)serialization___core__Object___serialization_hash, /* pointer to transform:TransformVisitor:serialization#Object#serialization_hash */
(nitmethod_t)serialization___core__Object___is_same_serialized, /* pointer to transform:TransformVisitor:serialization#Object#is_same_serialized */
(nitmethod_t)nitc___nitc__Visitor___enter_visit, /* pointer to transform:TransformVisitor:parser_nodes#Visitor#enter_visit */
(nitmethod_t)nitc__transform___nitc__transform__TransformVisitor___nitc__parser_nodes__Visitor__visit, /* pointer to transform:TransformVisitor:transform#TransformVisitor#visit */
(nitmethod_t)nitc___nitc__Visitor___current_node, /* pointer to transform:TransformVisitor:parser_nodes#Visitor#current_node */
(nitmethod_t)nitc__transform___nitc__transform__TransformVisitor___phase_61d, /* pointer to transform:TransformVisitor:transform#TransformVisitor#phase= */
(nitmethod_t)nitc__transform___nitc__transform__TransformVisitor___mpropdef_61d, /* pointer to transform:TransformVisitor:transform#TransformVisitor#mpropdef= */
(nitmethod_t)nitc__transform___nitc__transform__TransformVisitor___mclassdef_61d, /* pointer to transform:TransformVisitor:transform#TransformVisitor#mclassdef= */
(nitmethod_t)nitc__transform___nitc__transform__TransformVisitor___mpropdef, /* pointer to transform:TransformVisitor:transform#TransformVisitor#mpropdef */
(nitmethod_t)nitc__transform___nitc__transform__TransformVisitor___mmodule_61d, /* pointer to transform:TransformVisitor:transform#TransformVisitor#mmodule= */
(nitmethod_t)nitc__transform___nitc__transform__TransformVisitor___mclassdef, /* pointer to transform:TransformVisitor:transform#TransformVisitor#mclassdef */
(nitmethod_t)nitc__transform___nitc__transform__TransformVisitor___builder_61d, /* pointer to transform:TransformVisitor:transform#TransformVisitor#builder= */
(nitmethod_t)nitc__transform___nitc__transform__TransformVisitor___mmodule, /* pointer to transform:TransformVisitor:transform#TransformVisitor#mmodule */
(nitmethod_t)nitc__transform___nitc__transform__TransformVisitor___builder, /* pointer to transform:TransformVisitor:transform#TransformVisitor#builder */
(nitmethod_t)nitc__transform___nitc__transform__TransformVisitor___phase, /* pointer to transform:TransformVisitor:transform#TransformVisitor#phase */
(nitmethod_t)core___core__Object___init, /* pointer to transform:TransformVisitor:kernel#Object#init */
}
};
/* allocate TransformVisitor */
val* NEW_nitc__transform__TransformVisitor(const struct type* type) {
val* self /* : TransformVisitor */;
self = nit_alloc(sizeof(struct instance) + 6*sizeof(nitattribute_t));
self->type = type;
self->class = &class_nitc__transform__TransformVisitor;
return self;
}
