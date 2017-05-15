#include "nitc__modelize_property.sep.0.h"
/* method modelize_property#AAttrPropdef#build_signature for (self: AAttrPropdef, ModelBuilder) */
void nitc__modelize_property___AAttrPropdef___APropdef__build_signature(val* self, val* p0) {
val* var_modelbuilder /* var modelbuilder: ModelBuilder */;
val* var /* : nullable MMethodDef */;
val* var2 /* : nullable MMethodDef */;
val* var_mreadpropdef /* var mreadpropdef: nullable MMethodDef */;
val* var3 /* : nullable MPropDef */;
val* var5 /* : nullable MPropDef */;
val* var_mpropdef /* var mpropdef: nullable MAttributeDef */;
short int var6 /* : Bool */;
short int var7 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var9 /* : Bool */;
short int var11 /* : Bool */;
val* var12 /* : MClassDef */;
val* var14 /* : MClassDef */;
val* var_mclassdef /* var mclassdef: MClassDef */;
val* var15 /* : MModule */;
val* var17 /* : MModule */;
val* var_mmodule /* var mmodule: MModule */;
val* var_mtype /* var mtype: nullable MType */;
val* var18 /* : nullable AType */;
val* var20 /* : nullable AType */;
val* var_ntype /* var ntype: nullable AType */;
short int var21 /* : Bool */;
short int var22 /* : Bool */;
val* var_other24 /* var other: nullable Object */;
short int var25 /* : Bool */;
short int var26 /* : Bool */;
val* var27 /* : nullable MType */;
short int var28 /* : Bool */;
short int var29 /* : Bool */;
short int var31 /* : Bool */;
short int var33 /* : Bool */;
val* var_inherited_type /* var inherited_type: nullable MType */;
short int var34 /* : Bool */;
short int var35 /* : Bool */;
val* var36 /* : MProperty */;
val* var38 /* : MProperty */;
val* var39 /* : MPropDef */;
val* var41 /* : MPropDef */;
val* var42 /* : nullable MSignature */;
val* var44 /* : nullable MSignature */;
val* var_msignature /* var msignature: nullable MSignature */;
short int var45 /* : Bool */;
short int var46 /* : Bool */;
short int var48 /* : Bool */;
short int var50 /* : Bool */;
val* var51 /* : nullable MType */;
val* var53 /* : nullable MType */;
short int var54 /* : Bool */;
short int var55 /* : Bool */;
short int var57 /* : Bool */;
short int var58 /* : Bool */;
val* var59 /* : MClass */;
val* var61 /* : MClass */;
val* var62 /* : MClassType */;
val* var64 /* : MClassType */;
val* var65 /* : MClassType */;
val* var67 /* : MClassType */;
val* var68 /* : MType */;
short int var69 /* : Bool */;
short int var70 /* : Bool */;
short int var72 /* : Bool */;
short int var74 /* : Bool */;
val* var75 /* : nullable AExpr */;
val* var77 /* : nullable AExpr */;
val* var_nexpr /* var nexpr: nullable AExpr */;
short int var78 /* : Bool */;
short int var79 /* : Bool */;
short int var81 /* : Bool */;
short int var83 /* : Bool */;
short int var84 /* : Bool */;
short int var85 /* : Bool */;
short int var87 /* : Bool */;
short int var88 /* : Bool */;
short int var89 /* : Bool */;
int cltype;
int idtype;
val* var90 /* : AType */;
val* var92 /* : AType */;
val* var93 /* : nullable MType */;
short int var94 /* : Bool */;
int cltype95;
int idtype96;
val* var97 /* : AType */;
val* var99 /* : AType */;
val* var100 /* : nullable MType */;
short int var101 /* : Bool */;
int cltype102;
int idtype103;
val* var_cla /* var cla: nullable MClass */;
val* var104 /* : nullable Numeric */;
val* var106 /* : nullable Numeric */;
short int var107 /* : Bool */;
int cltype108;
int idtype109;
static val* varonce;
val* var110 /* : String */;
char* var111 /* : CString */;
val* var112 /* : String */;
val* var113 /* : nullable MClass */;
val* var114 /* : nullable Numeric */;
val* var116 /* : nullable Numeric */;
short int var117 /* : Bool */;
int cltype118;
int idtype119;
static val* varonce120;
val* var121 /* : String */;
char* var122 /* : CString */;
val* var123 /* : String */;
val* var124 /* : nullable MClass */;
val* var125 /* : nullable Numeric */;
val* var127 /* : nullable Numeric */;
short int var128 /* : Bool */;
int cltype129;
int idtype130;
static val* varonce131;
val* var132 /* : String */;
char* var133 /* : CString */;
val* var134 /* : String */;
val* var135 /* : nullable MClass */;
val* var136 /* : nullable Numeric */;
val* var138 /* : nullable Numeric */;
short int var139 /* : Bool */;
int cltype140;
int idtype141;
static val* varonce142;
val* var143 /* : String */;
char* var144 /* : CString */;
val* var145 /* : String */;
val* var146 /* : nullable MClass */;
val* var147 /* : nullable Numeric */;
val* var149 /* : nullable Numeric */;
short int var150 /* : Bool */;
int cltype151;
int idtype152;
static val* varonce153;
val* var154 /* : String */;
char* var155 /* : CString */;
val* var156 /* : String */;
val* var157 /* : nullable MClass */;
val* var158 /* : nullable Numeric */;
val* var160 /* : nullable Numeric */;
short int var161 /* : Bool */;
int cltype162;
int idtype163;
static val* varonce164;
val* var165 /* : String */;
char* var166 /* : CString */;
val* var167 /* : String */;
val* var168 /* : nullable MClass */;
val* var169 /* : nullable Numeric */;
val* var171 /* : nullable Numeric */;
short int var172 /* : Bool */;
int cltype173;
int idtype174;
static val* varonce175;
val* var176 /* : String */;
char* var177 /* : CString */;
val* var178 /* : String */;
val* var179 /* : nullable MClass */;
short int var180 /* : Bool */;
short int var181 /* : Bool */;
short int var183 /* : Bool */;
short int var184 /* : Bool */;
val* var185 /* : MClassType */;
val* var187 /* : MClassType */;
short int var188 /* : Bool */;
int cltype189;
int idtype190;
static val* varonce191;
val* var192 /* : String */;
char* var193 /* : CString */;
val* var194 /* : String */;
val* var195 /* : nullable MClass */;
val* var_cla196 /* var cla: nullable MClass */;
short int var197 /* : Bool */;
short int var198 /* : Bool */;
short int var200 /* : Bool */;
short int var201 /* : Bool */;
val* var202 /* : MClassType */;
val* var204 /* : MClassType */;
short int var205 /* : Bool */;
int cltype206;
int idtype207;
short int var208 /* : Bool */;
static val* varonce209;
val* var210 /* : String */;
char* var211 /* : CString */;
val* var212 /* : String */;
val* var213 /* : nullable MClass */;
val* var_cla214 /* var cla: nullable MClass */;
short int var215 /* : Bool */;
static val* varonce216;
val* var217 /* : String */;
char* var218 /* : CString */;
val* var219 /* : String */;
val* var220 /* : nullable MClass */;
static val* varonce221;
val* var222 /* : String */;
char* var223 /* : CString */;
val* var224 /* : String */;
val* var225 /* : nullable MClass */;
short int var226 /* : Bool */;
short int var227 /* : Bool */;
short int var229 /* : Bool */;
short int var230 /* : Bool */;
val* var231 /* : MClassType */;
val* var233 /* : MClassType */;
short int var234 /* : Bool */;
int cltype235;
int idtype236;
static val* varonce237;
val* var238 /* : String */;
char* var239 /* : CString */;
val* var240 /* : String */;
val* var241 /* : nullable MClass */;
val* var_cla242 /* var cla: nullable MClass */;
short int var243 /* : Bool */;
short int var244 /* : Bool */;
short int var246 /* : Bool */;
short int var247 /* : Bool */;
val* var248 /* : MClassType */;
val* var250 /* : MClassType */;
short int var251 /* : Bool */;
int cltype252;
int idtype253;
static val* varonce254;
val* var255 /* : String */;
char* var256 /* : CString */;
val* var257 /* : String */;
val* var258 /* : nullable MClass */;
val* var_cla259 /* var cla: nullable MClass */;
short int var260 /* : Bool */;
short int var261 /* : Bool */;
short int var263 /* : Bool */;
short int var264 /* : Bool */;
val* var265 /* : MClassType */;
val* var267 /* : MClassType */;
short int var268 /* : Bool */;
int cltype269;
int idtype270;
short int var271 /* : Bool */;
static val* varonce272;
val* var273 /* : String */;
char* var274 /* : CString */;
val* var275 /* : String */;
val* var276 /* : nullable MClass */;
val* var_cla277 /* var cla: nullable MClass */;
short int var278 /* : Bool */;
static val* varonce279;
val* var280 /* : String */;
char* var281 /* : CString */;
val* var282 /* : String */;
val* var283 /* : nullable MClass */;
short int var284 /* : Bool */;
static val* varonce285;
val* var286 /* : String */;
char* var287 /* : CString */;
val* var288 /* : String */;
val* var289 /* : nullable MClass */;
short int var290 /* : Bool */;
short int var291 /* : Bool */;
short int var293 /* : Bool */;
short int var294 /* : Bool */;
val* var295 /* : MClassType */;
val* var297 /* : MClassType */;
val* var299 /* : NativeArray[String] */;
static val* varonce298;
static val* varonce300;
val* var301 /* : String */;
char* var302 /* : CString */;
val* var303 /* : String */;
static val* varonce304;
val* var305 /* : String */;
char* var306 /* : CString */;
val* var307 /* : String */;
val* var308 /* : String */;
val* var309 /* : String */;
short int var310 /* : Bool */;
short int var311 /* : Bool */;
short int var313 /* : Bool */;
short int var315 /* : Bool */;
short int var316 /* : Bool */;
short int var317 /* : Bool */;
short int var318 /* : Bool */;
short int var320 /* : Bool */;
short int var321 /* : Bool */;
short int var_ /* var : Bool */;
short int var322 /* : Bool */;
short int var323 /* : Bool */;
short int var325 /* : Bool */;
short int var327 /* : Bool */;
short int var328 /* : Bool */;
int cltype329;
int idtype330;
val* var331 /* : AType */;
val* var333 /* : AType */;
val* var334 /* : nullable MType */;
val* var_xmtype /* var xmtype: nullable MType */;
short int var335 /* : Bool */;
short int var336 /* : Bool */;
short int var338 /* : Bool */;
short int var340 /* : Bool */;
static val* varonce341;
val* var342 /* : String */;
char* var343 /* : CString */;
val* var344 /* : String */;
static val* varonce345;
val* var346 /* : String */;
char* var347 /* : CString */;
val* var348 /* : String */;
short int var349 /* : Bool */;
short int var350 /* : Bool */;
short int var352 /* : Bool */;
short int var354 /* : Bool */;
val* var356 /* : NativeArray[String] */;
static val* varonce355;
static val* varonce357;
val* var358 /* : String */;
char* var359 /* : CString */;
val* var360 /* : String */;
static val* varonce361;
val* var362 /* : String */;
char* var363 /* : CString */;
val* var364 /* : String */;
val* var365 /* : String */;
val* var366 /* : String */;
short int var368 /* : Bool */;
short int var369 /* : Bool */;
short int var371 /* : Bool */;
short int var372 /* : Bool */;
val* var374 /* : MSignature */;
val* var375 /* : Array[MParameter] */;
val* var_msignature376 /* var msignature: MSignature */;
val* var378 /* : nullable MMethodDef */;
val* var380 /* : nullable MMethodDef */;
val* var_mwritepropdef /* var mwritepropdef: nullable MMethodDef */;
short int var381 /* : Bool */;
short int var382 /* : Bool */;
short int var384 /* : Bool */;
short int var385 /* : Bool */;
val* var_mwritetype /* var mwritetype: MType */;
short int var386 /* : Bool */;
short int var388 /* : Bool */;
val* var389 /* : MType */;
val* var390 /* : TId */;
val* var392 /* : TId */;
val* var393 /* : String */;
val* var_name /* var name: String */;
val* var394 /* : MParameter */;
val* var_mparameter /* var mparameter: MParameter */;
val* var395 /* : MSignature */;
val* var396 /* : Array[MParameter] */;
val* var_397 /* var : Array[MParameter] */;
val* var_msignature398 /* var msignature: MSignature */;
val* var400 /* : nullable MAttributeDef */;
val* var402 /* : nullable MAttributeDef */;
val* var_mlazypropdef /* var mlazypropdef: nullable MAttributeDef */;
short int var403 /* : Bool */;
short int var404 /* : Bool */;
short int var406 /* : Bool */;
short int var407 /* : Bool */;
val* var408 /* : MClassType */;
var_modelbuilder = p0;
{
{ /* Inline modelize_property#AAttrPropdef#mreadpropdef (self) on <self:AAttrPropdef> */
var2 = self->attrs[COLOR_nitc__modelize_property__AAttrPropdef___mreadpropdef].val; /* _mreadpropdef on <self:AAttrPropdef> */
var = var2;
RET_LABEL1:(void)0;
}
}
var_mreadpropdef = var;
{
{ /* Inline modelize_property#APropdef#mpropdef (self) on <self:AAttrPropdef> */
var5 = self->attrs[COLOR_nitc__modelize_property__APropdef___mpropdef].val; /* _mpropdef on <self:AAttrPropdef> */
var3 = var5;
RET_LABEL4:(void)0;
}
}
var_mpropdef = var3;
if (var_mreadpropdef == NULL) {
var6 = 1; /* is null */
} else {
var6 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_mreadpropdef,((val*)NULL)) on <var_mreadpropdef:nullable MMethodDef> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_mreadpropdef,var_other) on <var_mreadpropdef:nullable MMethodDef(MMethodDef)> */
var11 = var_mreadpropdef == var_other;
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
goto RET_LABEL;
} else {
}
{
{ /* Inline model#MPropDef#mclassdef (var_mreadpropdef) on <var_mreadpropdef:nullable MMethodDef(MMethodDef)> */
var14 = var_mreadpropdef->attrs[COLOR_nitc__model__MPropDef___mclassdef].val; /* _mclassdef on <var_mreadpropdef:nullable MMethodDef(MMethodDef)> */
if (unlikely(var14 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2354);
fatal_exit(1);
}
var12 = var14;
RET_LABEL13:(void)0;
}
}
var_mclassdef = var12;
{
{ /* Inline model#MClassDef#mmodule (var_mclassdef) on <var_mclassdef:MClassDef> */
var17 = var_mclassdef->attrs[COLOR_nitc__model__MClassDef___mmodule].val; /* _mmodule on <var_mclassdef:MClassDef> */
if (unlikely(var17 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 588);
fatal_exit(1);
}
var15 = var17;
RET_LABEL16:(void)0;
}
}
var_mmodule = var15;
var_mtype = ((val*)NULL);
{
{ /* Inline parser_nodes#AAttrPropdef#n_type (self) on <self:AAttrPropdef> */
var20 = self->attrs[COLOR_nitc__parser_nodes__AAttrPropdef___n_type].val; /* _n_type on <self:AAttrPropdef> */
var18 = var20;
RET_LABEL19:(void)0;
}
}
var_ntype = var18;
if (var_ntype == NULL) {
var21 = 0; /* is null */
} else {
var21 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_ntype,((val*)NULL)) on <var_ntype:nullable AType> */
var_other24 = ((val*)NULL);
{
var25 = ((short int(*)(val* self, val* p0))(var_ntype->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_ntype, var_other24); /* == on <var_ntype:nullable AType(AType)>*/
}
var26 = !var25;
var22 = var26;
goto RET_LABEL23;
RET_LABEL23:(void)0;
}
var21 = var22;
}
if (var21){
{
var27 = nitc___nitc__ModelBuilder___resolve_mtype_unchecked(var_modelbuilder, var_mmodule, var_mclassdef, var_ntype, 1);
}
var_mtype = var27;
if (var_mtype == NULL) {
var28 = 1; /* is null */
} else {
var28 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_mtype,((val*)NULL)) on <var_mtype:nullable MType> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_mtype,var_other) on <var_mtype:nullable MType(MType)> */
var33 = var_mtype == var_other;
var31 = var33;
goto RET_LABEL32;
RET_LABEL32:(void)0;
}
}
var29 = var31;
goto RET_LABEL30;
RET_LABEL30:(void)0;
}
var28 = var29;
}
if (var28){
goto RET_LABEL;
} else {
}
} else {
}
var_inherited_type = ((val*)NULL);
{
var34 = nitc___nitc__MPropDef___is_intro(var_mreadpropdef);
}
var35 = !var34;
if (var35){
{
{ /* Inline model#MPropDef#mproperty (var_mreadpropdef) on <var_mreadpropdef:nullable MMethodDef(MMethodDef)> */
var38 = var_mreadpropdef->attrs[COLOR_nitc__model__MPropDef___mproperty].val; /* _mproperty on <var_mreadpropdef:nullable MMethodDef(MMethodDef)> */
if (unlikely(var38 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2357);
fatal_exit(1);
}
var36 = var38;
RET_LABEL37:(void)0;
}
}
{
{ /* Inline model#MProperty#intro (var36) on <var36:MProperty(MMethod)> */
var41 = var36->attrs[COLOR_nitc__model__MProperty___intro].val; /* _intro on <var36:MProperty(MMethod)> */
if (unlikely(var41 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2097);
fatal_exit(1);
}
var39 = var41;
RET_LABEL40:(void)0;
}
}
{
{ /* Inline model#MMethodDef#msignature (var39) on <var39:MPropDef(MMethodDef)> */
var44 = var39->attrs[COLOR_nitc__model__MMethodDef___msignature].val; /* _msignature on <var39:MPropDef(MMethodDef)> */
var42 = var44;
RET_LABEL43:(void)0;
}
}
var_msignature = var42;
if (var_msignature == NULL) {
var45 = 1; /* is null */
} else {
var45 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_msignature,((val*)NULL)) on <var_msignature:nullable MSignature> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_msignature,var_other) on <var_msignature:nullable MSignature(MSignature)> */
var50 = var_msignature == var_other;
var48 = var50;
goto RET_LABEL49;
RET_LABEL49:(void)0;
}
}
var46 = var48;
goto RET_LABEL47;
RET_LABEL47:(void)0;
}
var45 = var46;
}
if (var45){
goto RET_LABEL;
} else {
}
{
{ /* Inline model#MSignature#return_mtype (var_msignature) on <var_msignature:nullable MSignature(MSignature)> */
var53 = var_msignature->attrs[COLOR_nitc__model__MSignature___return_mtype].val; /* _return_mtype on <var_msignature:nullable MSignature(MSignature)> */
var51 = var53;
RET_LABEL52:(void)0;
}
}
var_inherited_type = var51;
if (var_inherited_type == NULL) {
var54 = 0; /* is null */
} else {
var54 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_inherited_type,((val*)NULL)) on <var_inherited_type:nullable MType> */
var_other24 = ((val*)NULL);
{
var57 = ((short int(*)(val* self, val* p0))(var_inherited_type->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_inherited_type, var_other24); /* == on <var_inherited_type:nullable MType(MType)>*/
}
var58 = !var57;
var55 = var58;
goto RET_LABEL56;
RET_LABEL56:(void)0;
}
var54 = var55;
}
if (var54){
{
{ /* Inline model#MClassDef#mclass (var_mclassdef) on <var_mclassdef:MClassDef> */
var61 = var_mclassdef->attrs[COLOR_nitc__model__MClassDef___mclass].val; /* _mclass on <var_mclassdef:MClassDef> */
if (unlikely(var61 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 591);
fatal_exit(1);
}
var59 = var61;
RET_LABEL60:(void)0;
}
}
{
{ /* Inline model#MClass#mclass_type (var59) on <var59:MClass> */
var64 = var59->attrs[COLOR_nitc__model__MClass___mclass_type].val; /* _mclass_type on <var59:MClass> */
if (unlikely(var64 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass_type");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 520);
fatal_exit(1);
}
var62 = var64;
RET_LABEL63:(void)0;
}
}
{
{ /* Inline model#MClassDef#bound_mtype (var_mclassdef) on <var_mclassdef:MClassDef> */
var67 = var_mclassdef->attrs[COLOR_nitc__model__MClassDef___bound_mtype].val; /* _bound_mtype on <var_mclassdef:MClassDef> */
if (unlikely(var67 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _bound_mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 594);
fatal_exit(1);
}
var65 = var67;
RET_LABEL66:(void)0;
}
}
{
var68 = ((val*(*)(val* self, val* p0, val* p1, val* p2, short int p3))(var_inherited_type->class->vft[COLOR_nitc__model__MType__resolve_for]))(var_inherited_type, var62, var65, var_mmodule, 0); /* resolve_for on <var_inherited_type:nullable MType(MType)>*/
}
var_inherited_type = var68;
if (var_mtype == NULL) {
var69 = 1; /* is null */
} else {
var69 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_mtype,((val*)NULL)) on <var_mtype:nullable MType> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_mtype,var_other) on <var_mtype:nullable MType(MType)> */
var74 = var_mtype == var_other;
var72 = var74;
goto RET_LABEL73;
RET_LABEL73:(void)0;
}
}
var70 = var72;
goto RET_LABEL71;
RET_LABEL71:(void)0;
}
var69 = var70;
}
if (var69){
var_mtype = var_inherited_type;
} else {
}
} else {
}
} else {
}
{
{ /* Inline parser_nodes#AAttrPropdef#n_expr (self) on <self:AAttrPropdef> */
var77 = self->attrs[COLOR_nitc__parser_nodes__AAttrPropdef___n_expr].val; /* _n_expr on <self:AAttrPropdef> */
var75 = var77;
RET_LABEL76:(void)0;
}
}
var_nexpr = var75;
if (var_mtype == NULL) {
var78 = 1; /* is null */
} else {
var78 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_mtype,((val*)NULL)) on <var_mtype:nullable MType> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_mtype,var_other) on <var_mtype:nullable MType(MType)> */
var83 = var_mtype == var_other;
var81 = var83;
goto RET_LABEL82;
RET_LABEL82:(void)0;
}
}
var79 = var81;
goto RET_LABEL80;
RET_LABEL80:(void)0;
}
var78 = var79;
}
if (var78){
if (var_nexpr == NULL) {
var84 = 0; /* is null */
} else {
var84 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_nexpr,((val*)NULL)) on <var_nexpr:nullable AExpr> */
var_other24 = ((val*)NULL);
{
var87 = ((short int(*)(val* self, val* p0))(var_nexpr->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_nexpr, var_other24); /* == on <var_nexpr:nullable AExpr(AExpr)>*/
}
var88 = !var87;
var85 = var88;
goto RET_LABEL86;
RET_LABEL86:(void)0;
}
var84 = var85;
}
if (var84){
/* <var_nexpr:nullable AExpr(AExpr)> isa ANewExpr */
cltype = type_nitc__ANewExpr.color;
idtype = type_nitc__ANewExpr.id;
if(cltype >= var_nexpr->type->table_size) {
var89 = 0;
} else {
var89 = var_nexpr->type->type_table[cltype] == idtype;
}
if (var89){
{
{ /* Inline parser_nodes#ANewExpr#n_type (var_nexpr) on <var_nexpr:nullable AExpr(ANewExpr)> */
var92 = var_nexpr->attrs[COLOR_nitc__parser_nodes__ANewExpr___n_type].val; /* _n_type on <var_nexpr:nullable AExpr(ANewExpr)> */
if (unlikely(var92 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_type");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 2340);
fatal_exit(1);
}
var90 = var92;
RET_LABEL91:(void)0;
}
}
{
var93 = nitc___nitc__ModelBuilder___resolve_mtype_unchecked(var_modelbuilder, var_mmodule, var_mclassdef, var90, 1);
}
var_mtype = var93;
} else {
/* <var_nexpr:nullable AExpr(AExpr)> isa AAsCastExpr */
cltype95 = type_nitc__AAsCastExpr.color;
idtype96 = type_nitc__AAsCastExpr.id;
if(cltype95 >= var_nexpr->type->table_size) {
var94 = 0;
} else {
var94 = var_nexpr->type->type_table[cltype95] == idtype96;
}
if (var94){
{
{ /* Inline parser_nodes#AAsCastExpr#n_type (var_nexpr) on <var_nexpr:nullable AExpr(AAsCastExpr)> */
var99 = var_nexpr->attrs[COLOR_nitc__parser_nodes__AAsCastExpr___n_type].val; /* _n_type on <var_nexpr:nullable AExpr(AAsCastExpr)> */
if (unlikely(var99 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_type");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 2684);
fatal_exit(1);
}
var97 = var99;
RET_LABEL98:(void)0;
}
}
{
var100 = nitc___nitc__ModelBuilder___resolve_mtype_unchecked(var_modelbuilder, var_mmodule, var_mclassdef, var97, 1);
}
var_mtype = var100;
} else {
/* <var_nexpr:nullable AExpr(AExpr)> isa AIntegerExpr */
cltype102 = type_nitc__AIntegerExpr.color;
idtype103 = type_nitc__AIntegerExpr.id;
if(cltype102 >= var_nexpr->type->table_size) {
var101 = 0;
} else {
var101 = var_nexpr->type->type_table[cltype102] == idtype103;
}
if (var101){
var_cla = ((val*)NULL);
{
{ /* Inline literal#AIntegerExpr#value (var_nexpr) on <var_nexpr:nullable AExpr(AIntegerExpr)> */
var106 = var_nexpr->attrs[COLOR_nitc__literal__AIntegerExpr___value].val; /* _value on <var_nexpr:nullable AExpr(AIntegerExpr)> */
var104 = var106;
RET_LABEL105:(void)0;
}
}
/* <var104:nullable Numeric> isa Int */
cltype108 = type_core__Int.color;
idtype109 = type_core__Int.id;
if(var104 == NULL) {
var107 = 0;
} else {
if(cltype108 >= (((long)var104&3)?type_info[((long)var104&3)]:var104->type)->table_size) {
var107 = 0;
} else {
var107 = (((long)var104&3)?type_info[((long)var104&3)]:var104->type)->type_table[cltype108] == idtype109;
}
}
if (var107){
if (likely(varonce!=NULL)) {
var110 = varonce;
} else {
var111 = "Int";
var112 = core__abstract_text___CString___to_s_full(var111, 3l, 3l);
var110 = var112;
varonce = var110;
}
{
var113 = nitc___nitc__ModelBuilder___try_get_mclass_by_name(var_modelbuilder, var_nexpr, var_mmodule, var110);
}
var_cla = var113;
} else {
{
{ /* Inline literal#AIntegerExpr#value (var_nexpr) on <var_nexpr:nullable AExpr(AIntegerExpr)> */
var116 = var_nexpr->attrs[COLOR_nitc__literal__AIntegerExpr___value].val; /* _value on <var_nexpr:nullable AExpr(AIntegerExpr)> */
var114 = var116;
RET_LABEL115:(void)0;
}
}
/* <var114:nullable Numeric> isa Byte */
cltype118 = type_core__Byte.color;
idtype119 = type_core__Byte.id;
if(var114 == NULL) {
var117 = 0;
} else {
if(cltype118 >= (((long)var114&3)?type_info[((long)var114&3)]:var114->type)->table_size) {
var117 = 0;
} else {
var117 = (((long)var114&3)?type_info[((long)var114&3)]:var114->type)->type_table[cltype118] == idtype119;
}
}
if (var117){
if (likely(varonce120!=NULL)) {
var121 = varonce120;
} else {
var122 = "Byte";
var123 = core__abstract_text___CString___to_s_full(var122, 4l, 4l);
var121 = var123;
varonce120 = var121;
}
{
var124 = nitc___nitc__ModelBuilder___try_get_mclass_by_name(var_modelbuilder, var_nexpr, var_mmodule, var121);
}
var_cla = var124;
} else {
{
{ /* Inline literal#AIntegerExpr#value (var_nexpr) on <var_nexpr:nullable AExpr(AIntegerExpr)> */
var127 = var_nexpr->attrs[COLOR_nitc__literal__AIntegerExpr___value].val; /* _value on <var_nexpr:nullable AExpr(AIntegerExpr)> */
var125 = var127;
RET_LABEL126:(void)0;
}
}
/* <var125:nullable Numeric> isa Int8 */
cltype129 = type_core__Int8.color;
idtype130 = type_core__Int8.id;
if(var125 == NULL) {
var128 = 0;
} else {
if(cltype129 >= (((long)var125&3)?type_info[((long)var125&3)]:var125->type)->table_size) {
var128 = 0;
} else {
var128 = (((long)var125&3)?type_info[((long)var125&3)]:var125->type)->type_table[cltype129] == idtype130;
}
}
if (var128){
if (likely(varonce131!=NULL)) {
var132 = varonce131;
} else {
var133 = "Int8";
var134 = core__abstract_text___CString___to_s_full(var133, 4l, 4l);
var132 = var134;
varonce131 = var132;
}
{
var135 = nitc___nitc__ModelBuilder___try_get_mclass_by_name(var_modelbuilder, var_nexpr, var_mmodule, var132);
}
var_cla = var135;
} else {
{
{ /* Inline literal#AIntegerExpr#value (var_nexpr) on <var_nexpr:nullable AExpr(AIntegerExpr)> */
var138 = var_nexpr->attrs[COLOR_nitc__literal__AIntegerExpr___value].val; /* _value on <var_nexpr:nullable AExpr(AIntegerExpr)> */
var136 = var138;
RET_LABEL137:(void)0;
}
}
/* <var136:nullable Numeric> isa Int16 */
cltype140 = type_core__Int16.color;
idtype141 = type_core__Int16.id;
if(var136 == NULL) {
var139 = 0;
} else {
if(cltype140 >= (((long)var136&3)?type_info[((long)var136&3)]:var136->type)->table_size) {
var139 = 0;
} else {
var139 = (((long)var136&3)?type_info[((long)var136&3)]:var136->type)->type_table[cltype140] == idtype141;
}
}
if (var139){
if (likely(varonce142!=NULL)) {
var143 = varonce142;
} else {
var144 = "Int16";
var145 = core__abstract_text___CString___to_s_full(var144, 5l, 5l);
var143 = var145;
varonce142 = var143;
}
{
var146 = nitc___nitc__ModelBuilder___try_get_mclass_by_name(var_modelbuilder, var_nexpr, var_mmodule, var143);
}
var_cla = var146;
} else {
{
{ /* Inline literal#AIntegerExpr#value (var_nexpr) on <var_nexpr:nullable AExpr(AIntegerExpr)> */
var149 = var_nexpr->attrs[COLOR_nitc__literal__AIntegerExpr___value].val; /* _value on <var_nexpr:nullable AExpr(AIntegerExpr)> */
var147 = var149;
RET_LABEL148:(void)0;
}
}
/* <var147:nullable Numeric> isa UInt16 */
cltype151 = type_core__UInt16.color;
idtype152 = type_core__UInt16.id;
if(var147 == NULL) {
var150 = 0;
} else {
if(cltype151 >= (((long)var147&3)?type_info[((long)var147&3)]:var147->type)->table_size) {
var150 = 0;
} else {
var150 = (((long)var147&3)?type_info[((long)var147&3)]:var147->type)->type_table[cltype151] == idtype152;
}
}
if (var150){
if (likely(varonce153!=NULL)) {
var154 = varonce153;
} else {
var155 = "UInt16";
var156 = core__abstract_text___CString___to_s_full(var155, 6l, 6l);
var154 = var156;
varonce153 = var154;
}
{
var157 = nitc___nitc__ModelBuilder___try_get_mclass_by_name(var_modelbuilder, var_nexpr, var_mmodule, var154);
}
var_cla = var157;
} else {
{
{ /* Inline literal#AIntegerExpr#value (var_nexpr) on <var_nexpr:nullable AExpr(AIntegerExpr)> */
var160 = var_nexpr->attrs[COLOR_nitc__literal__AIntegerExpr___value].val; /* _value on <var_nexpr:nullable AExpr(AIntegerExpr)> */
var158 = var160;
RET_LABEL159:(void)0;
}
}
/* <var158:nullable Numeric> isa Int32 */
cltype162 = type_core__Int32.color;
idtype163 = type_core__Int32.id;
if(var158 == NULL) {
var161 = 0;
} else {
if(cltype162 >= (((long)var158&3)?type_info[((long)var158&3)]:var158->type)->table_size) {
var161 = 0;
} else {
var161 = (((long)var158&3)?type_info[((long)var158&3)]:var158->type)->type_table[cltype162] == idtype163;
}
}
if (var161){
if (likely(varonce164!=NULL)) {
var165 = varonce164;
} else {
var166 = "Int32";
var167 = core__abstract_text___CString___to_s_full(var166, 5l, 5l);
var165 = var167;
varonce164 = var165;
}
{
var168 = nitc___nitc__ModelBuilder___try_get_mclass_by_name(var_modelbuilder, var_nexpr, var_mmodule, var165);
}
var_cla = var168;
} else {
{
{ /* Inline literal#AIntegerExpr#value (var_nexpr) on <var_nexpr:nullable AExpr(AIntegerExpr)> */
var171 = var_nexpr->attrs[COLOR_nitc__literal__AIntegerExpr___value].val; /* _value on <var_nexpr:nullable AExpr(AIntegerExpr)> */
var169 = var171;
RET_LABEL170:(void)0;
}
}
/* <var169:nullable Numeric> isa UInt32 */
cltype173 = type_core__UInt32.color;
idtype174 = type_core__UInt32.id;
if(var169 == NULL) {
var172 = 0;
} else {
if(cltype173 >= (((long)var169&3)?type_info[((long)var169&3)]:var169->type)->table_size) {
var172 = 0;
} else {
var172 = (((long)var169&3)?type_info[((long)var169&3)]:var169->type)->type_table[cltype173] == idtype174;
}
}
if (var172){
if (likely(varonce175!=NULL)) {
var176 = varonce175;
} else {
var177 = "UInt32";
var178 = core__abstract_text___CString___to_s_full(var177, 6l, 6l);
var176 = var178;
varonce175 = var176;
}
{
var179 = nitc___nitc__ModelBuilder___try_get_mclass_by_name(var_modelbuilder, var_nexpr, var_mmodule, var176);
}
var_cla = var179;
} else {
PRINT_ERROR("Runtime error: %s", "Aborted");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelize_property, 1393);
fatal_exit(1);
}
}
}
}
}
}
}
if (var_cla == NULL) {
var180 = 0; /* is null */
} else {
var180 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_cla,((val*)NULL)) on <var_cla:nullable MClass> */
var_other24 = ((val*)NULL);
{
var183 = ((short int(*)(val* self, val* p0))(var_cla->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_cla, var_other24); /* == on <var_cla:nullable MClass(MClass)>*/
}
var184 = !var183;
var181 = var184;
goto RET_LABEL182;
RET_LABEL182:(void)0;
}
var180 = var181;
}
if (var180){
{
{ /* Inline model#MClass#mclass_type (var_cla) on <var_cla:nullable MClass(MClass)> */
var187 = var_cla->attrs[COLOR_nitc__model__MClass___mclass_type].val; /* _mclass_type on <var_cla:nullable MClass(MClass)> */
if (unlikely(var187 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass_type");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 520);
fatal_exit(1);
}
var185 = var187;
RET_LABEL186:(void)0;
}
}
var_mtype = var185;
} else {
}
} else {
/* <var_nexpr:nullable AExpr(AExpr)> isa AFloatExpr */
cltype189 = type_nitc__AFloatExpr.color;
idtype190 = type_nitc__AFloatExpr.id;
if(cltype189 >= var_nexpr->type->table_size) {
var188 = 0;
} else {
var188 = var_nexpr->type->type_table[cltype189] == idtype190;
}
if (var188){
if (likely(varonce191!=NULL)) {
var192 = varonce191;
} else {
var193 = "Float";
var194 = core__abstract_text___CString___to_s_full(var193, 5l, 5l);
var192 = var194;
varonce191 = var192;
}
{
var195 = nitc___nitc__ModelBuilder___try_get_mclass_by_name(var_modelbuilder, var_nexpr, var_mmodule, var192);
}
var_cla196 = var195;
if (var_cla196 == NULL) {
var197 = 0; /* is null */
} else {
var197 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_cla196,((val*)NULL)) on <var_cla196:nullable MClass> */
var_other24 = ((val*)NULL);
{
var200 = ((short int(*)(val* self, val* p0))(var_cla196->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_cla196, var_other24); /* == on <var_cla196:nullable MClass(MClass)>*/
}
var201 = !var200;
var198 = var201;
goto RET_LABEL199;
RET_LABEL199:(void)0;
}
var197 = var198;
}
if (var197){
{
{ /* Inline model#MClass#mclass_type (var_cla196) on <var_cla196:nullable MClass(MClass)> */
var204 = var_cla196->attrs[COLOR_nitc__model__MClass___mclass_type].val; /* _mclass_type on <var_cla196:nullable MClass(MClass)> */
if (unlikely(var204 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass_type");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 520);
fatal_exit(1);
}
var202 = var204;
RET_LABEL203:(void)0;
}
}
var_mtype = var202;
} else {
}
} else {
/* <var_nexpr:nullable AExpr(AExpr)> isa ACharExpr */
cltype206 = type_nitc__ACharExpr.color;
idtype207 = type_nitc__ACharExpr.id;
if(cltype206 >= var_nexpr->type->table_size) {
var205 = 0;
} else {
var205 = var_nexpr->type->type_table[cltype206] == idtype207;
}
if (var205){
{
var208 = nitc__literal___ACharExpr___is_ascii(var_nexpr);
}
if (var208){
if (likely(varonce209!=NULL)) {
var210 = varonce209;
} else {
var211 = "Byte";
var212 = core__abstract_text___CString___to_s_full(var211, 4l, 4l);
var210 = var212;
varonce209 = var210;
}
{
var213 = nitc___nitc__ModelBuilder___try_get_mclass_by_name(var_modelbuilder, var_nexpr, var_mmodule, var210);
}
var_cla214 = var213;
} else {
{
var215 = nitc__literal___ACharExpr___is_code_point(var_nexpr);
}
if (var215){
if (likely(varonce216!=NULL)) {
var217 = varonce216;
} else {
var218 = "Int";
var219 = core__abstract_text___CString___to_s_full(var218, 3l, 3l);
var217 = var219;
varonce216 = var217;
}
{
var220 = nitc___nitc__ModelBuilder___try_get_mclass_by_name(var_modelbuilder, var_nexpr, var_mmodule, var217);
}
var_cla214 = var220;
} else {
if (likely(varonce221!=NULL)) {
var222 = varonce221;
} else {
var223 = "Char";
var224 = core__abstract_text___CString___to_s_full(var223, 4l, 4l);
var222 = var224;
varonce221 = var222;
}
{
var225 = nitc___nitc__ModelBuilder___try_get_mclass_by_name(var_modelbuilder, var_nexpr, var_mmodule, var222);
}
var_cla214 = var225;
}
}
if (var_cla214 == NULL) {
var226 = 0; /* is null */
} else {
var226 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_cla214,((val*)NULL)) on <var_cla214:nullable MClass> */
var_other24 = ((val*)NULL);
{
var229 = ((short int(*)(val* self, val* p0))(var_cla214->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_cla214, var_other24); /* == on <var_cla214:nullable MClass(MClass)>*/
}
var230 = !var229;
var227 = var230;
goto RET_LABEL228;
RET_LABEL228:(void)0;
}
var226 = var227;
}
if (var226){
{
{ /* Inline model#MClass#mclass_type (var_cla214) on <var_cla214:nullable MClass(MClass)> */
var233 = var_cla214->attrs[COLOR_nitc__model__MClass___mclass_type].val; /* _mclass_type on <var_cla214:nullable MClass(MClass)> */
if (unlikely(var233 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass_type");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 520);
fatal_exit(1);
}
var231 = var233;
RET_LABEL232:(void)0;
}
}
var_mtype = var231;
} else {
}
} else {
/* <var_nexpr:nullable AExpr(AExpr)> isa ABoolExpr */
cltype235 = type_nitc__ABoolExpr.color;
idtype236 = type_nitc__ABoolExpr.id;
if(cltype235 >= var_nexpr->type->table_size) {
var234 = 0;
} else {
var234 = var_nexpr->type->type_table[cltype235] == idtype236;
}
if (var234){
if (likely(varonce237!=NULL)) {
var238 = varonce237;
} else {
var239 = "Bool";
var240 = core__abstract_text___CString___to_s_full(var239, 4l, 4l);
var238 = var240;
varonce237 = var238;
}
{
var241 = nitc___nitc__ModelBuilder___try_get_mclass_by_name(var_modelbuilder, var_nexpr, var_mmodule, var238);
}
var_cla242 = var241;
if (var_cla242 == NULL) {
var243 = 0; /* is null */
} else {
var243 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_cla242,((val*)NULL)) on <var_cla242:nullable MClass> */
var_other24 = ((val*)NULL);
{
var246 = ((short int(*)(val* self, val* p0))(var_cla242->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_cla242, var_other24); /* == on <var_cla242:nullable MClass(MClass)>*/
}
var247 = !var246;
var244 = var247;
goto RET_LABEL245;
RET_LABEL245:(void)0;
}
var243 = var244;
}
if (var243){
{
{ /* Inline model#MClass#mclass_type (var_cla242) on <var_cla242:nullable MClass(MClass)> */
var250 = var_cla242->attrs[COLOR_nitc__model__MClass___mclass_type].val; /* _mclass_type on <var_cla242:nullable MClass(MClass)> */
if (unlikely(var250 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass_type");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 520);
fatal_exit(1);
}
var248 = var250;
RET_LABEL249:(void)0;
}
}
var_mtype = var248;
} else {
}
} else {
/* <var_nexpr:nullable AExpr(AExpr)> isa ASuperstringExpr */
cltype252 = type_nitc__ASuperstringExpr.color;
idtype253 = type_nitc__ASuperstringExpr.id;
if(cltype252 >= var_nexpr->type->table_size) {
var251 = 0;
} else {
var251 = var_nexpr->type->type_table[cltype252] == idtype253;
}
if (var251){
if (likely(varonce254!=NULL)) {
var255 = varonce254;
} else {
var256 = "String";
var257 = core__abstract_text___CString___to_s_full(var256, 6l, 6l);
var255 = var257;
varonce254 = var255;
}
{
var258 = nitc___nitc__ModelBuilder___try_get_mclass_by_name(var_modelbuilder, var_nexpr, var_mmodule, var255);
}
var_cla259 = var258;
if (var_cla259 == NULL) {
var260 = 0; /* is null */
} else {
var260 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_cla259,((val*)NULL)) on <var_cla259:nullable MClass> */
var_other24 = ((val*)NULL);
{
var263 = ((short int(*)(val* self, val* p0))(var_cla259->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_cla259, var_other24); /* == on <var_cla259:nullable MClass(MClass)>*/
}
var264 = !var263;
var261 = var264;
goto RET_LABEL262;
RET_LABEL262:(void)0;
}
var260 = var261;
}
if (var260){
{
{ /* Inline model#MClass#mclass_type (var_cla259) on <var_cla259:nullable MClass(MClass)> */
var267 = var_cla259->attrs[COLOR_nitc__model__MClass___mclass_type].val; /* _mclass_type on <var_cla259:nullable MClass(MClass)> */
if (unlikely(var267 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass_type");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 520);
fatal_exit(1);
}
var265 = var267;
RET_LABEL266:(void)0;
}
}
var_mtype = var265;
} else {
}
} else {
/* <var_nexpr:nullable AExpr(AExpr)> isa AStringFormExpr */
cltype269 = type_nitc__AStringFormExpr.color;
idtype270 = type_nitc__AStringFormExpr.id;
if(cltype269 >= var_nexpr->type->table_size) {
var268 = 0;
} else {
var268 = var_nexpr->type->type_table[cltype269] == idtype270;
}
if (var268){
{
var271 = nitc___nitc__AugmentedStringFormExpr___is_bytestring(var_nexpr);
}
if (var271){
if (likely(varonce272!=NULL)) {
var273 = varonce272;
} else {
var274 = "Bytes";
var275 = core__abstract_text___CString___to_s_full(var274, 5l, 5l);
var273 = var275;
varonce272 = var273;
}
{
var276 = nitc___nitc__ModelBuilder___try_get_mclass_by_name(var_modelbuilder, var_nexpr, var_mmodule, var273);
}
var_cla277 = var276;
} else {
{
var278 = nitc___nitc__AugmentedStringFormExpr___is_re(var_nexpr);
}
if (var278){
if (likely(varonce279!=NULL)) {
var280 = varonce279;
} else {
var281 = "Regex";
var282 = core__abstract_text___CString___to_s_full(var281, 5l, 5l);
var280 = var282;
varonce279 = var280;
}
{
var283 = nitc___nitc__ModelBuilder___try_get_mclass_by_name(var_modelbuilder, var_nexpr, var_mmodule, var280);
}
var_cla277 = var283;
} else {
{
var284 = nitc___nitc__AugmentedStringFormExpr___is_string(var_nexpr);
}
if (var284){
if (likely(varonce285!=NULL)) {
var286 = varonce285;
} else {
var287 = "String";
var288 = core__abstract_text___CString___to_s_full(var287, 6l, 6l);
var286 = var288;
varonce285 = var286;
}
{
var289 = nitc___nitc__ModelBuilder___try_get_mclass_by_name(var_modelbuilder, var_nexpr, var_mmodule, var286);
}
var_cla277 = var289;
} else {
PRINT_ERROR("Runtime error: %s", "Aborted");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelize_property, 1424);
fatal_exit(1);
}
}
}
if (var_cla277 == NULL) {
var290 = 0; /* is null */
} else {
var290 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_cla277,((val*)NULL)) on <var_cla277:nullable MClass> */
var_other24 = ((val*)NULL);
{
var293 = ((short int(*)(val* self, val* p0))(var_cla277->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_cla277, var_other24); /* == on <var_cla277:nullable MClass(MClass)>*/
}
var294 = !var293;
var291 = var294;
goto RET_LABEL292;
RET_LABEL292:(void)0;
}
var290 = var291;
}
if (var290){
{
{ /* Inline model#MClass#mclass_type (var_cla277) on <var_cla277:nullable MClass(MClass)> */
var297 = var_cla277->attrs[COLOR_nitc__model__MClass___mclass_type].val; /* _mclass_type on <var_cla277:nullable MClass(MClass)> */
if (unlikely(var297 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass_type");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 520);
fatal_exit(1);
}
var295 = var297;
RET_LABEL296:(void)0;
}
}
var_mtype = var295;
} else {
}
} else {
if (unlikely(varonce298==NULL)) {
var299 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce300!=NULL)) {
var301 = varonce300;
} else {
var302 = "Error: untyped attribute `";
var303 = core__abstract_text___CString___to_s_full(var302, 26l, 26l);
var301 = var303;
varonce300 = var301;
}
((struct instance_core__NativeArray*)var299)->values[0]=var301;
if (likely(varonce304!=NULL)) {
var305 = varonce304;
} else {
var306 = "`. Implicit typing allowed only for literals and new.";
var307 = core__abstract_text___CString___to_s_full(var306, 53l, 53l);
var305 = var307;
varonce304 = var305;
}
((struct instance_core__NativeArray*)var299)->values[2]=var305;
} else {
var299 = varonce298;
varonce298 = NULL;
}
{
var308 = ((val*(*)(val* self))(var_mreadpropdef->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_mreadpropdef); /* to_s on <var_mreadpropdef:nullable MMethodDef(MMethodDef)>*/
}
((struct instance_core__NativeArray*)var299)->values[1]=var308;
{
var309 = ((val*(*)(val* self))(var299->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var299); /* native_to_s on <var299:NativeArray[String]>*/
}
varonce298 = var299;
{
nitc___nitc__ModelBuilder___error(var_modelbuilder, self, var309); /* Direct call modelbuilder_base#ModelBuilder#error on <var_modelbuilder:ModelBuilder>*/
}
}
}
}
}
}
}
}
}
if (var_mtype == NULL) {
var310 = 1; /* is null */
} else {
var310 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_mtype,((val*)NULL)) on <var_mtype:nullable MType> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_mtype,var_other) on <var_mtype:nullable MType(MType)> */
var315 = var_mtype == var_other;
var313 = var315;
goto RET_LABEL314;
RET_LABEL314:(void)0;
}
}
var311 = var313;
goto RET_LABEL312;
RET_LABEL312:(void)0;
}
var310 = var311;
}
if (var310){
goto RET_LABEL;
} else {
}
} else {
}
} else {
if (var_ntype == NULL) {
var317 = 0; /* is null */
} else {
var317 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_ntype,((val*)NULL)) on <var_ntype:nullable AType> */
var_other24 = ((val*)NULL);
{
var320 = ((short int(*)(val* self, val* p0))(var_ntype->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_ntype, var_other24); /* == on <var_ntype:nullable AType(AType)>*/
}
var321 = !var320;
var318 = var321;
goto RET_LABEL319;
RET_LABEL319:(void)0;
}
var317 = var318;
}
var_ = var317;
if (var317){
if (var_inherited_type == NULL) {
var322 = 0; /* <var_mtype:nullable MType(MType)> cannot be null */
} else {
{ /* Inline kernel#Object#== (var_inherited_type,var_mtype) on <var_inherited_type:nullable MType> */
var_other = var_mtype;
{
{ /* Inline kernel#Object#is_same_instance (var_inherited_type,var_other) on <var_inherited_type:nullable MType(MType)> */
var327 = var_inherited_type == var_other;
var325 = var327;
goto RET_LABEL326;
RET_LABEL326:(void)0;
}
}
var323 = var325;
goto RET_LABEL324;
RET_LABEL324:(void)0;
}
var322 = var323;
}
var316 = var322;
} else {
var316 = var_;
}
if (var316){
/* <var_nexpr:nullable AExpr> isa ANewExpr */
cltype329 = type_nitc__ANewExpr.color;
idtype330 = type_nitc__ANewExpr.id;
if(var_nexpr == NULL) {
var328 = 0;
} else {
if(cltype329 >= var_nexpr->type->table_size) {
var328 = 0;
} else {
var328 = var_nexpr->type->type_table[cltype329] == idtype330;
}
}
if (var328){
{
{ /* Inline parser_nodes#ANewExpr#n_type (var_nexpr) on <var_nexpr:nullable AExpr(ANewExpr)> */
var333 = var_nexpr->attrs[COLOR_nitc__parser_nodes__ANewExpr___n_type].val; /* _n_type on <var_nexpr:nullable AExpr(ANewExpr)> */
if (unlikely(var333 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_type");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 2340);
fatal_exit(1);
}
var331 = var333;
RET_LABEL332:(void)0;
}
}
{
var334 = nitc___nitc__ModelBuilder___resolve_mtype_unchecked(var_modelbuilder, var_mmodule, var_mclassdef, var331, 1);
}
var_xmtype = var334;
if (var_xmtype == NULL) {
var335 = 0; /* <var_mtype:nullable MType(MType)> cannot be null */
} else {
{ /* Inline kernel#Object#== (var_xmtype,var_mtype) on <var_xmtype:nullable MType> */
var_other = var_mtype;
{
{ /* Inline kernel#Object#is_same_instance (var_xmtype,var_other) on <var_xmtype:nullable MType(MType)> */
var340 = var_xmtype == var_other;
var338 = var340;
goto RET_LABEL339;
RET_LABEL339:(void)0;
}
}
var336 = var338;
goto RET_LABEL337;
RET_LABEL337:(void)0;
}
var335 = var336;
}
if (var335){
if (likely(varonce341!=NULL)) {
var342 = varonce341;
} else {
var343 = "useless-type";
var344 = core__abstract_text___CString___to_s_full(var343, 12l, 12l);
var342 = var344;
varonce341 = var342;
}
if (likely(varonce345!=NULL)) {
var346 = varonce345;
} else {
var347 = "Warning: useless type definition";
var348 = core__abstract_text___CString___to_s_full(var347, 32l, 32l);
var346 = var348;
varonce345 = var346;
}
{
nitc___nitc__ModelBuilder___advice(var_modelbuilder, var_ntype, var342, var346); /* Direct call modelbuilder_base#ModelBuilder#advice on <var_modelbuilder:ModelBuilder>*/
}
} else {
}
} else {
}
} else {
}
}
if (var_mtype == NULL) {
var349 = 1; /* is null */
} else {
var349 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_mtype,((val*)NULL)) on <var_mtype:nullable MType> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_mtype,var_other) on <var_mtype:nullable MType(MType)> */
var354 = var_mtype == var_other;
var352 = var354;
goto RET_LABEL353;
RET_LABEL353:(void)0;
}
}
var350 = var352;
goto RET_LABEL351;
RET_LABEL351:(void)0;
}
var349 = var350;
}
if (var349){
if (unlikely(varonce355==NULL)) {
var356 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce357!=NULL)) {
var358 = varonce357;
} else {
var359 = "Error: untyped attribute `";
var360 = core__abstract_text___CString___to_s_full(var359, 26l, 26l);
var358 = var360;
varonce357 = var358;
}
((struct instance_core__NativeArray*)var356)->values[0]=var358;
if (likely(varonce361!=NULL)) {
var362 = varonce361;
} else {
var363 = "`.";
var364 = core__abstract_text___CString___to_s_full(var363, 2l, 2l);
var362 = var364;
varonce361 = var362;
}
((struct instance_core__NativeArray*)var356)->values[2]=var362;
} else {
var356 = varonce355;
varonce355 = NULL;
}
{
var365 = ((val*(*)(val* self))(var_mreadpropdef->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_mreadpropdef); /* to_s on <var_mreadpropdef:nullable MMethodDef(MMethodDef)>*/
}
((struct instance_core__NativeArray*)var356)->values[1]=var365;
{
var366 = ((val*(*)(val* self))(var356->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var356); /* native_to_s on <var356:NativeArray[String]>*/
}
varonce355 = var356;
{
nitc___nitc__ModelBuilder___error(var_modelbuilder, self, var366); /* Direct call modelbuilder_base#ModelBuilder#error on <var_modelbuilder:ModelBuilder>*/
}
goto RET_LABEL;
} else {
}
{
{ /* Inline modelize_property#AAttrPropdef#mtype= (self,var_mtype) on <self:AAttrPropdef> */
self->attrs[COLOR_nitc__modelize_property__AAttrPropdef___mtype].val = var_mtype; /* _mtype on <self:AAttrPropdef> */
RET_LABEL367:(void)0;
}
}
if (var_mpropdef == NULL) {
var368 = 0; /* is null */
} else {
var368 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_mpropdef,((val*)NULL)) on <var_mpropdef:nullable MAttributeDef> */
var_other24 = ((val*)NULL);
{
var371 = ((short int(*)(val* self, val* p0))(var_mpropdef->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_mpropdef, var_other24); /* == on <var_mpropdef:nullable MAttributeDef(MAttributeDef)>*/
}
var372 = !var371;
var369 = var372;
goto RET_LABEL370;
RET_LABEL370:(void)0;
}
var368 = var369;
}
if (var368){
{
{ /* Inline model#MAttributeDef#static_mtype= (var_mpropdef,var_mtype) on <var_mpropdef:nullable MAttributeDef(MAttributeDef)> */
var_mpropdef->attrs[COLOR_nitc__model__MAttributeDef___static_mtype].val = var_mtype; /* _static_mtype on <var_mpropdef:nullable MAttributeDef(MAttributeDef)> */
RET_LABEL373:(void)0;
}
}
} else {
}
var374 = NEW_nitc__MSignature(&type_nitc__MSignature);
var375 = NEW_core__Array(&type_core__Array__nitc__MParameter);
{
core___core__Array___core__kernel__Object__init(var375); /* Direct call array#Array#init on <var375:Array[MParameter]>*/
}
{
((void(*)(val* self, val* p0))(var374->class->vft[COLOR_nitc__model__MSignature__mparameters_61d]))(var374, var375); /* mparameters= on <var374:MSignature>*/
}
{
((void(*)(val* self, val* p0))(var374->class->vft[COLOR_nitc__model__MSignature__return_mtype_61d]))(var374, var_mtype); /* return_mtype= on <var374:MSignature>*/
}
{
((void(*)(val* self))(var374->class->vft[COLOR_core__kernel__Object__init]))(var374); /* init on <var374:MSignature>*/
}
var_msignature376 = var374;
{
{ /* Inline model#MMethodDef#msignature= (var_mreadpropdef,var_msignature376) on <var_mreadpropdef:nullable MMethodDef(MMethodDef)> */
var_mreadpropdef->attrs[COLOR_nitc__model__MMethodDef___msignature].val = var_msignature376; /* _msignature on <var_mreadpropdef:nullable MMethodDef(MMethodDef)> */
RET_LABEL377:(void)0;
}
}
{
{ /* Inline modelize_property#AAttrPropdef#mwritepropdef (self) on <self:AAttrPropdef> */
var380 = self->attrs[COLOR_nitc__modelize_property__AAttrPropdef___mwritepropdef].val; /* _mwritepropdef on <self:AAttrPropdef> */
var378 = var380;
RET_LABEL379:(void)0;
}
}
var_mwritepropdef = var378;
if (var_mwritepropdef == NULL) {
var381 = 0; /* is null */
} else {
var381 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_mwritepropdef,((val*)NULL)) on <var_mwritepropdef:nullable MMethodDef> */
var_other24 = ((val*)NULL);
{
var384 = ((short int(*)(val* self, val* p0))(var_mwritepropdef->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_mwritepropdef, var_other24); /* == on <var_mwritepropdef:nullable MMethodDef(MMethodDef)>*/
}
var385 = !var384;
var382 = var385;
goto RET_LABEL383;
RET_LABEL383:(void)0;
}
var381 = var382;
}
if (var381){
var_mwritetype = var_mtype;
{
{ /* Inline modelize_property#AAttrPropdef#is_optional (self) on <self:AAttrPropdef> */
var388 = self->attrs[COLOR_nitc__modelize_property__AAttrPropdef___is_optional].s; /* _is_optional on <self:AAttrPropdef> */
var386 = var388;
RET_LABEL387:(void)0;
}
}
if (var386){
{
var389 = ((val*(*)(val* self))(var_mwritetype->class->vft[COLOR_nitc__model__MType__as_nullable]))(var_mwritetype); /* as_nullable on <var_mwritetype:MType>*/
}
var_mwritetype = var389;
} else {
}
{
{ /* Inline parser_nodes#AAttrPropdef#n_id2 (self) on <self:AAttrPropdef> */
var392 = self->attrs[COLOR_nitc__parser_nodes__AAttrPropdef___n_id2].val; /* _n_id2 on <self:AAttrPropdef> */
if (unlikely(var392 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_id2");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 1340);
fatal_exit(1);
}
var390 = var392;
RET_LABEL391:(void)0;
}
}
{
var393 = nitc__lexer_work___Token___text(var390);
}
var_name = var393;
var394 = NEW_nitc__MParameter(&type_nitc__MParameter);
{
((void(*)(val* self, val* p0))(var394->class->vft[COLOR_nitc__model__MParameter__name_61d]))(var394, var_name); /* name= on <var394:MParameter>*/
}
{
((void(*)(val* self, val* p0))(var394->class->vft[COLOR_nitc__model__MParameter__mtype_61d]))(var394, var_mwritetype); /* mtype= on <var394:MParameter>*/
}
{
((void(*)(val* self, short int p0))(var394->class->vft[COLOR_nitc__model__MParameter__is_vararg_61d]))(var394, 0); /* is_vararg= on <var394:MParameter>*/
}
{
((void(*)(val* self))(var394->class->vft[COLOR_core__kernel__Object__init]))(var394); /* init on <var394:MParameter>*/
}
var_mparameter = var394;
var395 = NEW_nitc__MSignature(&type_nitc__MSignature);
var396 = NEW_core__Array(&type_core__Array__nitc__MParameter);
{
core___core__Array___with_capacity(var396, 1l); /* Direct call array#Array#with_capacity on <var396:Array[MParameter]>*/
}
var_397 = var396;
{
core___core__AbstractArray___core__abstract_collection__Sequence__push(var_397, var_mparameter); /* Direct call array#AbstractArray#push on <var_397:Array[MParameter]>*/
}
{
((void(*)(val* self, val* p0))(var395->class->vft[COLOR_nitc__model__MSignature__mparameters_61d]))(var395, var_397); /* mparameters= on <var395:MSignature>*/
}
{
((void(*)(val* self, val* p0))(var395->class->vft[COLOR_nitc__model__MSignature__return_mtype_61d]))(var395, ((val*)NULL)); /* return_mtype= on <var395:MSignature>*/
}
{
((void(*)(val* self))(var395->class->vft[COLOR_core__kernel__Object__init]))(var395); /* init on <var395:MSignature>*/
}
var_msignature398 = var395;
{
{ /* Inline model#MMethodDef#msignature= (var_mwritepropdef,var_msignature398) on <var_mwritepropdef:nullable MMethodDef(MMethodDef)> */
var_mwritepropdef->attrs[COLOR_nitc__model__MMethodDef___msignature].val = var_msignature398; /* _msignature on <var_mwritepropdef:nullable MMethodDef(MMethodDef)> */
RET_LABEL399:(void)0;
}
}
} else {
}
{
{ /* Inline modelize_property#AAttrPropdef#mlazypropdef (self) on <self:AAttrPropdef> */
var402 = self->attrs[COLOR_nitc__modelize_property__AAttrPropdef___mlazypropdef].val; /* _mlazypropdef on <self:AAttrPropdef> */
var400 = var402;
RET_LABEL401:(void)0;
}
}
var_mlazypropdef = var400;
if (var_mlazypropdef == NULL) {
var403 = 0; /* is null */
} else {
var403 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_mlazypropdef,((val*)NULL)) on <var_mlazypropdef:nullable MAttributeDef> */
var_other24 = ((val*)NULL);
{
var406 = ((short int(*)(val* self, val* p0))(var_mlazypropdef->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_mlazypropdef, var_other24); /* == on <var_mlazypropdef:nullable MAttributeDef(MAttributeDef)>*/
}
var407 = !var406;
var404 = var407;
goto RET_LABEL405;
RET_LABEL405:(void)0;
}
var403 = var404;
}
if (var403){
{
var408 = nitc__model___MModule___bool_type(var_mmodule);
}
{
{ /* Inline model#MAttributeDef#static_mtype= (var_mlazypropdef,var408) on <var_mlazypropdef:nullable MAttributeDef(MAttributeDef)> */
var_mlazypropdef->attrs[COLOR_nitc__model__MAttributeDef___static_mtype].val = var408; /* _static_mtype on <var_mlazypropdef:nullable MAttributeDef(MAttributeDef)> */
RET_LABEL409:(void)0;
}
}
} else {
}
{
nitc__modelize_property___AAttrPropdef___APropdef__check_repeated_types(self, var_modelbuilder); /* Direct call modelize_property#AAttrPropdef#check_repeated_types on <self:AAttrPropdef>*/
}
RET_LABEL:;
}
/* method modelize_property#AAttrPropdef#check_signature for (self: AAttrPropdef, ModelBuilder) */
void nitc__modelize_property___AAttrPropdef___APropdef__check_signature(val* self, val* p0) {
val* var_modelbuilder /* var modelbuilder: ModelBuilder */;
val* var /* : nullable MPropDef */;
val* var2 /* : nullable MPropDef */;
val* var_mpropdef /* var mpropdef: nullable MAttributeDef */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var6 /* : Bool */;
short int var8 /* : Bool */;
val* var9 /* : nullable AType */;
val* var11 /* : nullable AType */;
val* var_ntype /* var ntype: nullable AType */;
val* var12 /* : nullable MType */;
val* var14 /* : nullable MType */;
val* var_mtype /* var mtype: nullable MType */;
short int var15 /* : Bool */;
short int var16 /* : Bool */;
short int var18 /* : Bool */;
short int var20 /* : Bool */;
val* var21 /* : MClassDef */;
val* var23 /* : MClassDef */;
val* var_mclassdef /* var mclassdef: MClassDef */;
val* var24 /* : MModule */;
val* var26 /* : MModule */;
val* var_mmodule /* var mmodule: MModule */;
short int var27 /* : Bool */;
short int var28 /* : Bool */;
val* var_other30 /* var other: nullable Object */;
short int var31 /* : Bool */;
short int var32 /* : Bool */;
val* var33 /* : nullable MType */;
short int var34 /* : Bool */;
short int var35 /* : Bool */;
short int var37 /* : Bool */;
short int var39 /* : Bool */;
val* var40 /* : nullable AExpr */;
val* var42 /* : nullable AExpr */;
val* var_nexpr /* var nexpr: nullable AExpr */;
short int var43 /* : Bool */;
int cltype;
int idtype;
val* var44 /* : AType */;
val* var46 /* : AType */;
val* var47 /* : nullable MType */;
short int var48 /* : Bool */;
short int var49 /* : Bool */;
short int var51 /* : Bool */;
short int var53 /* : Bool */;
short int var54 /* : Bool */;
short int var55 /* : Bool */;
val* var56 /* : MProperty */;
val* var58 /* : MProperty */;
val* var59 /* : MPropDef */;
val* var61 /* : MPropDef */;
val* var62 /* : nullable MType */;
val* var64 /* : nullable MType */;
val* var_precursor_type /* var precursor_type: nullable MType */;
short int var65 /* : Bool */;
short int var66 /* : Bool */;
short int var68 /* : Bool */;
short int var70 /* : Bool */;
short int var71 /* : Bool */;
short int var73 /* : Bool */;
short int var74 /* : Bool */;
val* var75 /* : NativeArray[String] */;
static val* varonce;
static val* varonce76;
val* var77 /* : String */;
char* var78 /* : CString */;
val* var79 /* : String */;
static val* varonce80;
val* var81 /* : String */;
char* var82 /* : CString */;
val* var83 /* : String */;
static val* varonce84;
val* var85 /* : String */;
char* var86 /* : CString */;
val* var87 /* : String */;
val* var88 /* : String */;
val* var89 /* : String */;
val* var90 /* : String */;
val* var91 /* : nullable MMethodDef */;
val* var93 /* : nullable MMethodDef */;
val* var_meth /* var meth: nullable MMethodDef */;
short int var94 /* : Bool */;
short int var95 /* : Bool */;
short int var97 /* : Bool */;
short int var98 /* : Bool */;
val* var_node /* var node: nullable ANode */;
short int var99 /* : Bool */;
short int var100 /* : Bool */;
short int var102 /* : Bool */;
short int var104 /* : Bool */;
val* var105 /* : nullable MMethodDef */;
val* var107 /* : nullable MMethodDef */;
short int var108 /* : Bool */;
short int var109 /* : Bool */;
short int var111 /* : Bool */;
short int var112 /* : Bool */;
val* var_node113 /* var node: nullable ANode */;
short int var114 /* : Bool */;
short int var115 /* : Bool */;
short int var117 /* : Bool */;
short int var119 /* : Bool */;
var_modelbuilder = p0;
{
{ /* Inline modelize_property#APropdef#mpropdef (self) on <self:AAttrPropdef> */
var2 = self->attrs[COLOR_nitc__modelize_property__APropdef___mpropdef].val; /* _mpropdef on <self:AAttrPropdef> */
var = var2;
RET_LABEL1:(void)0;
}
}
var_mpropdef = var;
if (var_mpropdef == NULL) {
var3 = 1; /* is null */
} else {
var3 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_mpropdef,((val*)NULL)) on <var_mpropdef:nullable MAttributeDef> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_mpropdef,var_other) on <var_mpropdef:nullable MAttributeDef(MAttributeDef)> */
var8 = var_mpropdef == var_other;
var6 = var8;
goto RET_LABEL7;
RET_LABEL7:(void)0;
}
}
var4 = var6;
goto RET_LABEL5;
RET_LABEL5:(void)0;
}
var3 = var4;
}
if (var3){
goto RET_LABEL;
} else {
}
{
{ /* Inline parser_nodes#AAttrPropdef#n_type (self) on <self:AAttrPropdef> */
var11 = self->attrs[COLOR_nitc__parser_nodes__AAttrPropdef___n_type].val; /* _n_type on <self:AAttrPropdef> */
var9 = var11;
RET_LABEL10:(void)0;
}
}
var_ntype = var9;
{
{ /* Inline modelize_property#AAttrPropdef#mtype (self) on <self:AAttrPropdef> */
var14 = self->attrs[COLOR_nitc__modelize_property__AAttrPropdef___mtype].val; /* _mtype on <self:AAttrPropdef> */
var12 = var14;
RET_LABEL13:(void)0;
}
}
var_mtype = var12;
if (var_mtype == NULL) {
var15 = 1; /* is null */
} else {
var15 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_mtype,((val*)NULL)) on <var_mtype:nullable MType> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_mtype,var_other) on <var_mtype:nullable MType(MType)> */
var20 = var_mtype == var_other;
var18 = var20;
goto RET_LABEL19;
RET_LABEL19:(void)0;
}
}
var16 = var18;
goto RET_LABEL17;
RET_LABEL17:(void)0;
}
var15 = var16;
}
if (var15){
goto RET_LABEL;
} else {
}
{
{ /* Inline model#MPropDef#mclassdef (var_mpropdef) on <var_mpropdef:nullable MAttributeDef(MAttributeDef)> */
var23 = var_mpropdef->attrs[COLOR_nitc__model__MPropDef___mclassdef].val; /* _mclassdef on <var_mpropdef:nullable MAttributeDef(MAttributeDef)> */
if (unlikely(var23 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2354);
fatal_exit(1);
}
var21 = var23;
RET_LABEL22:(void)0;
}
}
var_mclassdef = var21;
{
{ /* Inline model#MClassDef#mmodule (var_mclassdef) on <var_mclassdef:MClassDef> */
var26 = var_mclassdef->attrs[COLOR_nitc__model__MClassDef___mmodule].val; /* _mmodule on <var_mclassdef:MClassDef> */
if (unlikely(var26 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 588);
fatal_exit(1);
}
var24 = var26;
RET_LABEL25:(void)0;
}
}
var_mmodule = var24;
if (var_ntype == NULL) {
var27 = 0; /* is null */
} else {
var27 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_ntype,((val*)NULL)) on <var_ntype:nullable AType> */
var_other30 = ((val*)NULL);
{
var31 = ((short int(*)(val* self, val* p0))(var_ntype->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_ntype, var_other30); /* == on <var_ntype:nullable AType(AType)>*/
}
var32 = !var31;
var28 = var32;
goto RET_LABEL29;
RET_LABEL29:(void)0;
}
var27 = var28;
}
if (var27){
{
var33 = nitc___nitc__ModelBuilder___resolve_mtype(var_modelbuilder, var_mmodule, var_mclassdef, var_ntype);
}
if (var33 == NULL) {
var34 = 1; /* is null */
} else {
var34 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var33,((val*)NULL)) on <var33:nullable MType> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var33,var_other) on <var33:nullable MType(MType)> */
var39 = var33 == var_other;
var37 = var39;
goto RET_LABEL38;
RET_LABEL38:(void)0;
}
}
var35 = var37;
goto RET_LABEL36;
RET_LABEL36:(void)0;
}
var34 = var35;
}
if (var34){
goto RET_LABEL;
} else {
}
} else {
}
{
{ /* Inline parser_nodes#AAttrPropdef#n_expr (self) on <self:AAttrPropdef> */
var42 = self->attrs[COLOR_nitc__parser_nodes__AAttrPropdef___n_expr].val; /* _n_expr on <self:AAttrPropdef> */
var40 = var42;
RET_LABEL41:(void)0;
}
}
var_nexpr = var40;
/* <var_nexpr:nullable AExpr> isa ANewExpr */
cltype = type_nitc__ANewExpr.color;
idtype = type_nitc__ANewExpr.id;
if(var_nexpr == NULL) {
var43 = 0;
} else {
if(cltype >= var_nexpr->type->table_size) {
var43 = 0;
} else {
var43 = var_nexpr->type->type_table[cltype] == idtype;
}
}
if (var43){
{
{ /* Inline parser_nodes#ANewExpr#n_type (var_nexpr) on <var_nexpr:nullable AExpr(ANewExpr)> */
var46 = var_nexpr->attrs[COLOR_nitc__parser_nodes__ANewExpr___n_type].val; /* _n_type on <var_nexpr:nullable AExpr(ANewExpr)> */
if (unlikely(var46 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_type");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 2340);
fatal_exit(1);
}
var44 = var46;
RET_LABEL45:(void)0;
}
}
{
var47 = nitc___nitc__ModelBuilder___resolve_mtype(var_modelbuilder, var_mmodule, var_mclassdef, var44);
}
if (var47 == NULL) {
var48 = 1; /* is null */
} else {
var48 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var47,((val*)NULL)) on <var47:nullable MType> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var47,var_other) on <var47:nullable MType(MType)> */
var53 = var47 == var_other;
var51 = var53;
goto RET_LABEL52;
RET_LABEL52:(void)0;
}
}
var49 = var51;
goto RET_LABEL50;
RET_LABEL50:(void)0;
}
var48 = var49;
}
if (var48){
goto RET_LABEL;
} else {
}
} else {
}
{
var54 = nitc___nitc__MPropDef___is_intro(var_mpropdef);
}
var55 = !var54;
if (var55){
{
{ /* Inline model#MPropDef#mproperty (var_mpropdef) on <var_mpropdef:nullable MAttributeDef(MAttributeDef)> */
var58 = var_mpropdef->attrs[COLOR_nitc__model__MPropDef___mproperty].val; /* _mproperty on <var_mpropdef:nullable MAttributeDef(MAttributeDef)> */
if (unlikely(var58 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2357);
fatal_exit(1);
}
var56 = var58;
RET_LABEL57:(void)0;
}
}
{
{ /* Inline model#MProperty#intro (var56) on <var56:MProperty(MAttribute)> */
var61 = var56->attrs[COLOR_nitc__model__MProperty___intro].val; /* _intro on <var56:MProperty(MAttribute)> */
if (unlikely(var61 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2097);
fatal_exit(1);
}
var59 = var61;
RET_LABEL60:(void)0;
}
}
{
{ /* Inline model#MAttributeDef#static_mtype (var59) on <var59:MPropDef(MAttributeDef)> */
var64 = var59->attrs[COLOR_nitc__model__MAttributeDef___static_mtype].val; /* _static_mtype on <var59:MPropDef(MAttributeDef)> */
var62 = var64;
RET_LABEL63:(void)0;
}
}
var_precursor_type = var62;
if (var_precursor_type == NULL) {
var65 = 1; /* is null */
} else {
var65 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_precursor_type,((val*)NULL)) on <var_precursor_type:nullable MType> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_precursor_type,var_other) on <var_precursor_type:nullable MType(MType)> */
var70 = var_precursor_type == var_other;
var68 = var70;
goto RET_LABEL69;
RET_LABEL69:(void)0;
}
}
var66 = var68;
goto RET_LABEL67;
RET_LABEL67:(void)0;
}
var65 = var66;
}
if (var65){
goto RET_LABEL;
} else {
}
{
{ /* Inline kernel#Object#!= (var_mtype,var_precursor_type) on <var_mtype:nullable MType(MType)> */
var_other30 = var_precursor_type;
{
var73 = ((short int(*)(val* self, val* p0))(var_mtype->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_mtype, var_other30); /* == on <var_mtype:nullable MType(MType)>*/
}
var74 = !var73;
var71 = var74;
goto RET_LABEL72;
RET_LABEL72:(void)0;
}
}
if (var71){
if (unlikely(var_ntype == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelize_property, 1505);
fatal_exit(1);
}
if (unlikely(varonce==NULL)) {
var75 = NEW_core__NativeArray(5l, &type_core__NativeArray__core__String);
if (likely(varonce76!=NULL)) {
var77 = varonce76;
} else {
var78 = "Redef Error: expected `";
var79 = core__abstract_text___CString___to_s_full(var78, 23l, 23l);
var77 = var79;
varonce76 = var77;
}
((struct instance_core__NativeArray*)var75)->values[0]=var77;
if (likely(varonce80!=NULL)) {
var81 = varonce80;
} else {
var82 = "` type as a bound; got `";
var83 = core__abstract_text___CString___to_s_full(var82, 24l, 24l);
var81 = var83;
varonce80 = var81;
}
((struct instance_core__NativeArray*)var75)->values[2]=var81;
if (likely(varonce84!=NULL)) {
var85 = varonce84;
} else {
var86 = "`.";
var87 = core__abstract_text___CString___to_s_full(var86, 2l, 2l);
var85 = var87;
varonce84 = var85;
}
((struct instance_core__NativeArray*)var75)->values[4]=var85;
} else {
var75 = varonce;
varonce = NULL;
}
{
var88 = ((val*(*)(val* self))(var_precursor_type->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_precursor_type); /* to_s on <var_precursor_type:nullable MType(MType)>*/
}
((struct instance_core__NativeArray*)var75)->values[1]=var88;
{
var89 = ((val*(*)(val* self))(var_mtype->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_mtype); /* to_s on <var_mtype:nullable MType(MType)>*/
}
((struct instance_core__NativeArray*)var75)->values[3]=var89;
{
var90 = ((val*(*)(val* self))(var75->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var75); /* native_to_s on <var75:NativeArray[String]>*/
}
varonce = var75;
{
nitc___nitc__ModelBuilder___error(var_modelbuilder, var_ntype, var90); /* Direct call modelbuilder_base#ModelBuilder#error on <var_modelbuilder:ModelBuilder>*/
}
goto RET_LABEL;
} else {
}
} else {
}
{
{ /* Inline modelize_property#AAttrPropdef#mreadpropdef (self) on <self:AAttrPropdef> */
var93 = self->attrs[COLOR_nitc__modelize_property__AAttrPropdef___mreadpropdef].val; /* _mreadpropdef on <self:AAttrPropdef> */
var91 = var93;
RET_LABEL92:(void)0;
}
}
var_meth = var91;
if (var_meth == NULL) {
var94 = 0; /* is null */
} else {
var94 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_meth,((val*)NULL)) on <var_meth:nullable MMethodDef> */
var_other30 = ((val*)NULL);
{
var97 = ((short int(*)(val* self, val* p0))(var_meth->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_meth, var_other30); /* == on <var_meth:nullable MMethodDef(MMethodDef)>*/
}
var98 = !var97;
var95 = var98;
goto RET_LABEL96;
RET_LABEL96:(void)0;
}
var94 = var95;
}
if (var94){
{
nitc__modelize_property___AAttrPropdef___check_method_signature(self, var_modelbuilder, var_meth); /* Direct call modelize_property#AAttrPropdef#check_method_signature on <self:AAttrPropdef>*/
}
var_node = var_ntype;
if (var_node == NULL) {
var99 = 1; /* is null */
} else {
var99 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_node,((val*)NULL)) on <var_node:nullable ANode> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_node,var_other) on <var_node:nullable ANode(ANode)> */
var104 = var_node == var_other;
var102 = var104;
goto RET_LABEL103;
RET_LABEL103:(void)0;
}
}
var100 = var102;
goto RET_LABEL101;
RET_LABEL101:(void)0;
}
var99 = var100;
}
if (var99){
var_node = self;
} else {
}
{
nitc__modelize_property___ModelBuilder___check_visibility(var_modelbuilder, var_node, var_mtype, var_meth); /* Direct call modelize_property#ModelBuilder#check_visibility on <var_modelbuilder:ModelBuilder>*/
}
} else {
}
{
{ /* Inline modelize_property#AAttrPropdef#mwritepropdef (self) on <self:AAttrPropdef> */
var107 = self->attrs[COLOR_nitc__modelize_property__AAttrPropdef___mwritepropdef].val; /* _mwritepropdef on <self:AAttrPropdef> */
var105 = var107;
RET_LABEL106:(void)0;
}
}
var_meth = var105;
if (var_meth == NULL) {
var108 = 0; /* is null */
} else {
var108 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_meth,((val*)NULL)) on <var_meth:nullable MMethodDef> */
var_other30 = ((val*)NULL);
{
var111 = ((short int(*)(val* self, val* p0))(var_meth->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_meth, var_other30); /* == on <var_meth:nullable MMethodDef(MMethodDef)>*/
}
var112 = !var111;
var109 = var112;
goto RET_LABEL110;
RET_LABEL110:(void)0;
}
var108 = var109;
}
if (var108){
{
nitc__modelize_property___AAttrPropdef___check_method_signature(self, var_modelbuilder, var_meth); /* Direct call modelize_property#AAttrPropdef#check_method_signature on <self:AAttrPropdef>*/
}
var_node113 = var_ntype;
if (var_node113 == NULL) {
var114 = 1; /* is null */
} else {
var114 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_node113,((val*)NULL)) on <var_node113:nullable ANode> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_node113,var_other) on <var_node113:nullable ANode(ANode)> */
var119 = var_node113 == var_other;
var117 = var119;
goto RET_LABEL118;
RET_LABEL118:(void)0;
}
}
var115 = var117;
goto RET_LABEL116;
RET_LABEL116:(void)0;
}
var114 = var115;
}
if (var114){
var_node113 = self;
} else {
}
{
nitc__modelize_property___ModelBuilder___check_visibility(var_modelbuilder, var_node113, var_mtype, var_meth); /* Direct call modelize_property#ModelBuilder#check_visibility on <var_modelbuilder:ModelBuilder>*/
}
} else {
}
RET_LABEL:;
}
/* method modelize_property#AAttrPropdef#check_method_signature for (self: AAttrPropdef, ModelBuilder, MMethodDef) */
void nitc__modelize_property___AAttrPropdef___check_method_signature(val* self, val* p0, val* p1) {
val* var_modelbuilder /* var modelbuilder: ModelBuilder */;
val* var_mpropdef /* var mpropdef: MMethodDef */;
val* var /* : MClassDef */;
val* var2 /* : MClassDef */;
val* var_mclassdef /* var mclassdef: MClassDef */;
val* var3 /* : MModule */;
val* var5 /* : MModule */;
val* var_mmodule /* var mmodule: MModule */;
val* var6 /* : nullable AType */;
val* var8 /* : nullable AType */;
val* var_nsig /* var nsig: nullable AType */;
val* var9 /* : nullable MSignature */;
val* var11 /* : nullable MSignature */;
val* var_mysignature /* var mysignature: nullable MSignature */;
short int var12 /* : Bool */;
short int var13 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var15 /* : Bool */;
short int var17 /* : Bool */;
short int var18 /* : Bool */;
short int var19 /* : Bool */;
val* var20 /* : MProperty */;
val* var22 /* : MProperty */;
val* var23 /* : MPropDef */;
val* var25 /* : MPropDef */;
val* var26 /* : nullable MSignature */;
val* var28 /* : nullable MSignature */;
val* var_msignature /* var msignature: nullable MSignature */;
short int var29 /* : Bool */;
short int var30 /* : Bool */;
short int var32 /* : Bool */;
short int var34 /* : Bool */;
long var35 /* : Int */;
long var36 /* : Int */;
short int var37 /* : Bool */;
short int var39 /* : Bool */;
short int var40 /* : Bool */;
short int var41 /* : Bool */;
short int var42 /* : Bool */;
val* var_other44 /* var other: nullable Object */;
short int var45 /* : Bool */;
short int var46 /* : Bool */;
val* var_node /* var node: ANode */;
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
static val* varonce56;
val* var57 /* : String */;
char* var58 /* : CString */;
val* var59 /* : String */;
static val* varonce60;
val* var61 /* : String */;
char* var62 /* : CString */;
val* var63 /* : String */;
static val* varonce64;
val* var65 /* : String */;
char* var66 /* : CString */;
val* var67 /* : String */;
long var68 /* : Int */;
val* var69 /* : String */;
val* var70 /* : MProperty */;
val* var72 /* : MProperty */;
val* var73 /* : String */;
val* var75 /* : String */;
val* var76 /* : String */;
long var77 /* : Int */;
val* var78 /* : String */;
val* var79 /* : MProperty */;
val* var81 /* : MProperty */;
val* var82 /* : String */;
val* var83 /* : String */;
val* var84 /* : nullable MType */;
val* var86 /* : nullable MType */;
val* var_precursor_ret_type /* var precursor_ret_type: nullable MType */;
val* var87 /* : nullable MType */;
val* var89 /* : nullable MType */;
val* var_ret_type /* var ret_type: nullable MType */;
short int var90 /* : Bool */;
short int var91 /* : Bool */;
short int var92 /* : Bool */;
short int var94 /* : Bool */;
short int var95 /* : Bool */;
short int var_ /* var : Bool */;
short int var96 /* : Bool */;
short int var97 /* : Bool */;
short int var99 /* : Bool */;
short int var101 /* : Bool */;
short int var102 /* : Bool */;
short int var103 /* : Bool */;
short int var105 /* : Bool */;
short int var106 /* : Bool */;
val* var_node107 /* var node: ANode */;
val* var109 /* : NativeArray[String] */;
static val* varonce108;
static val* varonce110;
val* var111 /* : String */;
char* var112 /* : CString */;
val* var113 /* : String */;
static val* varonce114;
val* var115 /* : String */;
char* var116 /* : CString */;
val* var117 /* : String */;
val* var118 /* : MProperty */;
val* var120 /* : MProperty */;
val* var121 /* : String */;
val* var122 /* : String */;
long var123 /* : Int */;
short int var124 /* : Bool */;
short int var126 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var127 /* : Bool */;
long var_i /* var i: Int */;
long var128 /* : Int */;
long var_129 /* var : Int */;
short int var130 /* : Bool */;
short int var132 /* : Bool */;
int cltype133;
int idtype134;
const char* var_class_name135;
short int var136 /* : Bool */;
val* var137 /* : Array[MParameter] */;
val* var139 /* : Array[MParameter] */;
val* var140 /* : nullable Object */;
val* var141 /* : MType */;
val* var143 /* : MType */;
val* var_myt /* var myt: MType */;
val* var144 /* : Array[MParameter] */;
val* var146 /* : Array[MParameter] */;
val* var147 /* : nullable Object */;
val* var148 /* : MType */;
val* var150 /* : MType */;
val* var_prt /* var prt: MType */;
short int var151 /* : Bool */;
short int var152 /* : Bool */;
short int var154 /* : Bool */;
short int var155 /* : Bool */;
val* var_node156 /* var node: ANode */;
val* var157 /* : MClassType */;
val* var159 /* : MClassType */;
short int var160 /* : Bool */;
short int var161 /* : Bool */;
val* var163 /* : NativeArray[String] */;
static val* varonce162;
static val* varonce164;
val* var165 /* : String */;
char* var166 /* : CString */;
val* var167 /* : String */;
static val* varonce168;
val* var169 /* : String */;
char* var170 /* : CString */;
val* var171 /* : String */;
static val* varonce172;
val* var173 /* : String */;
char* var174 /* : CString */;
val* var175 /* : String */;
static val* varonce176;
val* var177 /* : String */;
char* var178 /* : CString */;
val* var179 /* : String */;
val* var180 /* : String */;
val* var181 /* : Array[MParameter] */;
val* var183 /* : Array[MParameter] */;
val* var184 /* : nullable Object */;
val* var185 /* : String */;
val* var187 /* : String */;
val* var188 /* : String */;
val* var189 /* : String */;
long var190 /* : Int */;
short int var191 /* : Bool */;
short int var192 /* : Bool */;
short int var194 /* : Bool */;
short int var195 /* : Bool */;
short int var196 /* : Bool */;
short int var197 /* : Bool */;
short int var199 /* : Bool */;
short int var200 /* : Bool */;
val* var_node201 /* var node: ANode */;
short int var202 /* : Bool */;
short int var203 /* : Bool */;
short int var205 /* : Bool */;
short int var207 /* : Bool */;
val* var208 /* : MClassType */;
val* var210 /* : MClassType */;
short int var211 /* : Bool */;
short int var212 /* : Bool */;
val* var214 /* : NativeArray[String] */;
static val* varonce213;
static val* varonce215;
val* var216 /* : String */;
char* var217 /* : CString */;
val* var218 /* : String */;
static val* varonce219;
val* var220 /* : String */;
char* var221 /* : CString */;
val* var222 /* : String */;
static val* varonce223;
val* var224 /* : String */;
char* var225 /* : CString */;
val* var226 /* : String */;
val* var227 /* : String */;
val* var228 /* : String */;
val* var229 /* : String */;
var_modelbuilder = p0;
var_mpropdef = p1;
{
{ /* Inline model#MPropDef#mclassdef (var_mpropdef) on <var_mpropdef:MMethodDef> */
var2 = var_mpropdef->attrs[COLOR_nitc__model__MPropDef___mclassdef].val; /* _mclassdef on <var_mpropdef:MMethodDef> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2354);
fatal_exit(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
var_mclassdef = var;
{
{ /* Inline model#MClassDef#mmodule (var_mclassdef) on <var_mclassdef:MClassDef> */
var5 = var_mclassdef->attrs[COLOR_nitc__model__MClassDef___mmodule].val; /* _mmodule on <var_mclassdef:MClassDef> */
if (unlikely(var5 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 588);
fatal_exit(1);
}
var3 = var5;
RET_LABEL4:(void)0;
}
}
var_mmodule = var3;
{
{ /* Inline parser_nodes#AAttrPropdef#n_type (self) on <self:AAttrPropdef> */
var8 = self->attrs[COLOR_nitc__parser_nodes__AAttrPropdef___n_type].val; /* _n_type on <self:AAttrPropdef> */
var6 = var8;
RET_LABEL7:(void)0;
}
}
var_nsig = var6;
{
{ /* Inline model#MMethodDef#msignature (var_mpropdef) on <var_mpropdef:MMethodDef> */
var11 = var_mpropdef->attrs[COLOR_nitc__model__MMethodDef___msignature].val; /* _msignature on <var_mpropdef:MMethodDef> */
var9 = var11;
RET_LABEL10:(void)0;
}
}
var_mysignature = var9;
if (var_mysignature == NULL) {
var12 = 1; /* is null */
} else {
var12 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_mysignature,((val*)NULL)) on <var_mysignature:nullable MSignature> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_mysignature,var_other) on <var_mysignature:nullable MSignature(MSignature)> */
var17 = var_mysignature == var_other;
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
goto RET_LABEL;
} else {
}
{
var18 = nitc___nitc__MPropDef___is_intro(var_mpropdef);
}
var19 = !var18;
if (var19){
{
{ /* Inline model#MPropDef#mproperty (var_mpropdef) on <var_mpropdef:MMethodDef> */
var22 = var_mpropdef->attrs[COLOR_nitc__model__MPropDef___mproperty].val; /* _mproperty on <var_mpropdef:MMethodDef> */
if (unlikely(var22 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2357);
fatal_exit(1);
}
var20 = var22;
RET_LABEL21:(void)0;
}
}
{
{ /* Inline model#MProperty#intro (var20) on <var20:MProperty(MMethod)> */
var25 = var20->attrs[COLOR_nitc__model__MProperty___intro].val; /* _intro on <var20:MProperty(MMethod)> */
if (unlikely(var25 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2097);
fatal_exit(1);
}
var23 = var25;
RET_LABEL24:(void)0;
}
}
{
{ /* Inline model#MMethodDef#msignature (var23) on <var23:MPropDef(MMethodDef)> */
var28 = var23->attrs[COLOR_nitc__model__MMethodDef___msignature].val; /* _msignature on <var23:MPropDef(MMethodDef)> */
var26 = var28;
RET_LABEL27:(void)0;
}
}
var_msignature = var26;
if (var_msignature == NULL) {
var29 = 1; /* is null */
} else {
var29 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_msignature,((val*)NULL)) on <var_msignature:nullable MSignature> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_msignature,var_other) on <var_msignature:nullable MSignature(MSignature)> */
var34 = var_msignature == var_other;
var32 = var34;
goto RET_LABEL33;
RET_LABEL33:(void)0;
}
}
var30 = var32;
goto RET_LABEL31;
RET_LABEL31:(void)0;
}
var29 = var30;
}
if (var29){
goto RET_LABEL;
} else {
}
{
var35 = nitc___nitc__MSignature___arity(var_mysignature);
}
{
var36 = nitc___nitc__MSignature___arity(var_msignature);
}
{
{ /* Inline kernel#Int#!= (var35,var36) on <var35:Int> */
var39 = var35 == var36;
var40 = !var39;
var37 = var40;
goto RET_LABEL38;
RET_LABEL38:(void)0;
}
}
if (var37){
if (var_nsig == NULL) {
var41 = 0; /* is null */
} else {
var41 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_nsig,((val*)NULL)) on <var_nsig:nullable AType> */
var_other44 = ((val*)NULL);
{
var45 = ((short int(*)(val* self, val* p0))(var_nsig->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_nsig, var_other44); /* == on <var_nsig:nullable AType(AType)>*/
}
var46 = !var45;
var42 = var46;
goto RET_LABEL43;
RET_LABEL43:(void)0;
}
var41 = var42;
}
if (var41){
var_node = var_nsig;
} else {
var_node = self;
}
if (unlikely(varonce==NULL)) {
var47 = NEW_core__NativeArray(10l, &type_core__NativeArray__core__String);
if (likely(varonce48!=NULL)) {
var49 = varonce48;
} else {
var50 = "Redef Error: expected ";
var51 = core__abstract_text___CString___to_s_full(var50, 22l, 22l);
var49 = var51;
varonce48 = var49;
}
((struct instance_core__NativeArray*)var47)->values[0]=var49;
if (likely(varonce52!=NULL)) {
var53 = varonce52;
} else {
var54 = " parameter(s) for `";
var55 = core__abstract_text___CString___to_s_full(var54, 19l, 19l);
var53 = var55;
varonce52 = var53;
}
((struct instance_core__NativeArray*)var47)->values[2]=var53;
if (likely(varonce56!=NULL)) {
var57 = varonce56;
} else {
var58 = "`; got ";
var59 = core__abstract_text___CString___to_s_full(var58, 7l, 7l);
var57 = var59;
varonce56 = var57;
}
((struct instance_core__NativeArray*)var47)->values[5]=var57;
if (likely(varonce60!=NULL)) {
var61 = varonce60;
} else {
var62 = ". See introduction at `";
var63 = core__abstract_text___CString___to_s_full(var62, 23l, 23l);
var61 = var63;
varonce60 = var61;
}
((struct instance_core__NativeArray*)var47)->values[7]=var61;
if (likely(varonce64!=NULL)) {
var65 = varonce64;
} else {
var66 = "`.";
var67 = core__abstract_text___CString___to_s_full(var66, 2l, 2l);
var65 = var67;
varonce64 = var65;
}
((struct instance_core__NativeArray*)var47)->values[9]=var65;
} else {
var47 = varonce;
varonce = NULL;
}
{
var68 = nitc___nitc__MSignature___arity(var_msignature);
}
var69 = core__flat___Int___core__abstract_text__Object__to_s(var68);
((struct instance_core__NativeArray*)var47)->values[1]=var69;
{
{ /* Inline model#MPropDef#mproperty (var_mpropdef) on <var_mpropdef:MMethodDef> */
var72 = var_mpropdef->attrs[COLOR_nitc__model__MPropDef___mproperty].val; /* _mproperty on <var_mpropdef:MMethodDef> */
if (unlikely(var72 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2357);
fatal_exit(1);
}
var70 = var72;
RET_LABEL71:(void)0;
}
}
{
{ /* Inline model#MProperty#name (var70) on <var70:MProperty(MMethod)> */
var75 = var70->attrs[COLOR_nitc__model__MProperty___name].val; /* _name on <var70:MProperty(MMethod)> */
if (unlikely(var75 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2047);
fatal_exit(1);
}
var73 = var75;
RET_LABEL74:(void)0;
}
}
((struct instance_core__NativeArray*)var47)->values[3]=var73;
{
var76 = ((val*(*)(val* self))(var_msignature->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_msignature); /* to_s on <var_msignature:nullable MSignature(MSignature)>*/
}
((struct instance_core__NativeArray*)var47)->values[4]=var76;
{
var77 = nitc___nitc__MSignature___arity(var_mysignature);
}
var78 = core__flat___Int___core__abstract_text__Object__to_s(var77);
((struct instance_core__NativeArray*)var47)->values[6]=var78;
{
{ /* Inline model#MPropDef#mproperty (var_mpropdef) on <var_mpropdef:MMethodDef> */
var81 = var_mpropdef->attrs[COLOR_nitc__model__MPropDef___mproperty].val; /* _mproperty on <var_mpropdef:MMethodDef> */
if (unlikely(var81 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2357);
fatal_exit(1);
}
var79 = var81;
RET_LABEL80:(void)0;
}
}
{
var82 = nitc___nitc__MProperty___nitc__model_base__MEntity__full_name(var79);
}
((struct instance_core__NativeArray*)var47)->values[8]=var82;
{
var83 = ((val*(*)(val* self))(var47->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var47); /* native_to_s on <var47:NativeArray[String]>*/
}
varonce = var47;
{
nitc___nitc__ModelBuilder___error(var_modelbuilder, var_node, var83); /* Direct call modelbuilder_base#ModelBuilder#error on <var_modelbuilder:ModelBuilder>*/
}
goto RET_LABEL;
} else {
}
{
{ /* Inline model#MSignature#return_mtype (var_msignature) on <var_msignature:nullable MSignature(MSignature)> */
var86 = var_msignature->attrs[COLOR_nitc__model__MSignature___return_mtype].val; /* _return_mtype on <var_msignature:nullable MSignature(MSignature)> */
var84 = var86;
RET_LABEL85:(void)0;
}
}
var_precursor_ret_type = var84;
{
{ /* Inline model#MSignature#return_mtype (var_mysignature) on <var_mysignature:nullable MSignature(MSignature)> */
var89 = var_mysignature->attrs[COLOR_nitc__model__MSignature___return_mtype].val; /* _return_mtype on <var_mysignature:nullable MSignature(MSignature)> */
var87 = var89;
RET_LABEL88:(void)0;
}
}
var_ret_type = var87;
if (var_ret_type == NULL) {
var91 = 0; /* is null */
} else {
var91 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_ret_type,((val*)NULL)) on <var_ret_type:nullable MType> */
var_other44 = ((val*)NULL);
{
var94 = ((short int(*)(val* self, val* p0))(var_ret_type->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_ret_type, var_other44); /* == on <var_ret_type:nullable MType(MType)>*/
}
var95 = !var94;
var92 = var95;
goto RET_LABEL93;
RET_LABEL93:(void)0;
}
var91 = var92;
}
var_ = var91;
if (var91){
if (var_precursor_ret_type == NULL) {
var96 = 1; /* is null */
} else {
var96 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_precursor_ret_type,((val*)NULL)) on <var_precursor_ret_type:nullable MType> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_precursor_ret_type,var_other) on <var_precursor_ret_type:nullable MType(MType)> */
var101 = var_precursor_ret_type == var_other;
var99 = var101;
goto RET_LABEL100;
RET_LABEL100:(void)0;
}
}
var97 = var99;
goto RET_LABEL98;
RET_LABEL98:(void)0;
}
var96 = var97;
}
var90 = var96;
} else {
var90 = var_;
}
if (var90){
if (var_nsig == NULL) {
var102 = 0; /* is null */
} else {
var102 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_nsig,((val*)NULL)) on <var_nsig:nullable AType> */
var_other44 = ((val*)NULL);
{
var105 = ((short int(*)(val* self, val* p0))(var_nsig->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_nsig, var_other44); /* == on <var_nsig:nullable AType(AType)>*/
}
var106 = !var105;
var103 = var106;
goto RET_LABEL104;
RET_LABEL104:(void)0;
}
var102 = var103;
}
if (var102){
var_node107 = var_nsig;
} else {
var_node107 = self;
}
if (unlikely(varonce108==NULL)) {
var109 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce110!=NULL)) {
var111 = varonce110;
} else {
var112 = "Redef Error: `";
var113 = core__abstract_text___CString___to_s_full(var112, 14l, 14l);
var111 = var113;
varonce110 = var111;
}
((struct instance_core__NativeArray*)var109)->values[0]=var111;
if (likely(varonce114!=NULL)) {
var115 = varonce114;
} else {
var116 = "` is a procedure, not a function.";
var117 = core__abstract_text___CString___to_s_full(var116, 33l, 33l);
var115 = var117;
varonce114 = var115;
}
((struct instance_core__NativeArray*)var109)->values[2]=var115;
} else {
var109 = varonce108;
varonce108 = NULL;
}
{
{ /* Inline model#MPropDef#mproperty (var_mpropdef) on <var_mpropdef:MMethodDef> */
var120 = var_mpropdef->attrs[COLOR_nitc__model__MPropDef___mproperty].val; /* _mproperty on <var_mpropdef:MMethodDef> */
if (unlikely(var120 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2357);
fatal_exit(1);
}
var118 = var120;
RET_LABEL119:(void)0;
}
}
{
var121 = ((val*(*)(val* self))(var118->class->vft[COLOR_core__abstract_text__Object__to_s]))(var118); /* to_s on <var118:MProperty(MMethod)>*/
}
((struct instance_core__NativeArray*)var109)->values[1]=var121;
{
var122 = ((val*(*)(val* self))(var109->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var109); /* native_to_s on <var109:NativeArray[String]>*/
}
varonce108 = var109;
{
nitc___nitc__ModelBuilder___error(var_modelbuilder, var_node107, var122); /* Direct call modelbuilder_base#ModelBuilder#error on <var_modelbuilder:ModelBuilder>*/
}
goto RET_LABEL;
} else {
}
{
var123 = nitc___nitc__MSignature___arity(var_mysignature);
}
{
{ /* Inline kernel#Int#> (var123,0l) on <var123:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var126 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var126)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 727);
fatal_exit(1);
}
var127 = var123 > 0l;
var124 = var127;
goto RET_LABEL125;
RET_LABEL125:(void)0;
}
}
if (var124){
var_i = 0l;
{
var128 = nitc___nitc__MSignature___arity(var_mysignature);
}
var_129 = var128;
for(;;) {
{
{ /* Inline kernel#Int#< (var_i,var_129) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var_129:Int> isa OTHER */
/* <var_129:Int> isa OTHER */
var132 = 1; /* easy <var_129:Int> isa OTHER*/
if (unlikely(!var132)) {
var_class_name135 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name135);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var136 = var_i < var_129;
var130 = var136;
goto RET_LABEL131;
RET_LABEL131:(void)0;
}
}
if (var130){
} else {
goto BREAK_label;
}
{
{ /* Inline model#MSignature#mparameters (var_mysignature) on <var_mysignature:nullable MSignature(MSignature)> */
var139 = var_mysignature->attrs[COLOR_nitc__model__MSignature___mparameters].val; /* _mparameters on <var_mysignature:nullable MSignature(MSignature)> */
if (unlikely(var139 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mparameters");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1879);
fatal_exit(1);
}
var137 = var139;
RET_LABEL138:(void)0;
}
}
{
var140 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var137, var_i);
}
{
{ /* Inline model#MParameter#mtype (var140) on <var140:nullable Object(MParameter)> */
var143 = var140->attrs[COLOR_nitc__model__MParameter___mtype].val; /* _mtype on <var140:nullable Object(MParameter)> */
if (unlikely(var143 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1996);
fatal_exit(1);
}
var141 = var143;
RET_LABEL142:(void)0;
}
}
var_myt = var141;
{
{ /* Inline model#MSignature#mparameters (var_msignature) on <var_msignature:nullable MSignature(MSignature)> */
var146 = var_msignature->attrs[COLOR_nitc__model__MSignature___mparameters].val; /* _mparameters on <var_msignature:nullable MSignature(MSignature)> */
if (unlikely(var146 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mparameters");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1879);
fatal_exit(1);
}
var144 = var146;
RET_LABEL145:(void)0;
}
}
{
var147 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var144, var_i);
}
{
{ /* Inline model#MParameter#mtype (var147) on <var147:nullable Object(MParameter)> */
var150 = var147->attrs[COLOR_nitc__model__MParameter___mtype].val; /* _mtype on <var147:nullable Object(MParameter)> */
if (unlikely(var150 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1996);
fatal_exit(1);
}
var148 = var150;
RET_LABEL149:(void)0;
}
}
var_prt = var148;
if (var_nsig == NULL) {
var151 = 0; /* is null */
} else {
var151 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_nsig,((val*)NULL)) on <var_nsig:nullable AType> */
var_other44 = ((val*)NULL);
{
var154 = ((short int(*)(val* self, val* p0))(var_nsig->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_nsig, var_other44); /* == on <var_nsig:nullable AType(AType)>*/
}
var155 = !var154;
var152 = var155;
goto RET_LABEL153;
RET_LABEL153:(void)0;
}
var151 = var152;
}
if (var151){
var_node156 = var_nsig;
} else {
var_node156 = self;
}
{
{ /* Inline model#MClassDef#bound_mtype (var_mclassdef) on <var_mclassdef:MClassDef> */
var159 = var_mclassdef->attrs[COLOR_nitc__model__MClassDef___bound_mtype].val; /* _bound_mtype on <var_mclassdef:MClassDef> */
if (unlikely(var159 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _bound_mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 594);
fatal_exit(1);
}
var157 = var159;
RET_LABEL158:(void)0;
}
}
{
var160 = nitc___nitc__ModelBuilder___check_sametype(var_modelbuilder, var_node156, var_mmodule, var157, var_myt, var_prt);
}
var161 = !var160;
if (var161){
if (unlikely(varonce162==NULL)) {
var163 = NEW_core__NativeArray(7l, &type_core__NativeArray__core__String);
if (likely(varonce164!=NULL)) {
var165 = varonce164;
} else {
var166 = "Redef Error: expected `";
var167 = core__abstract_text___CString___to_s_full(var166, 23l, 23l);
var165 = var167;
varonce164 = var165;
}
((struct instance_core__NativeArray*)var163)->values[0]=var165;
if (likely(varonce168!=NULL)) {
var169 = varonce168;
} else {
var170 = "` type for parameter `";
var171 = core__abstract_text___CString___to_s_full(var170, 22l, 22l);
var169 = var171;
varonce168 = var169;
}
((struct instance_core__NativeArray*)var163)->values[2]=var169;
if (likely(varonce172!=NULL)) {
var173 = varonce172;
} else {
var174 = "\'; got `";
var175 = core__abstract_text___CString___to_s_full(var174, 8l, 8l);
var173 = var175;
varonce172 = var173;
}
((struct instance_core__NativeArray*)var163)->values[4]=var173;
if (likely(varonce176!=NULL)) {
var177 = varonce176;
} else {
var178 = "`.";
var179 = core__abstract_text___CString___to_s_full(var178, 2l, 2l);
var177 = var179;
varonce176 = var177;
}
((struct instance_core__NativeArray*)var163)->values[6]=var177;
} else {
var163 = varonce162;
varonce162 = NULL;
}
{
var180 = ((val*(*)(val* self))(var_prt->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_prt); /* to_s on <var_prt:MType>*/
}
((struct instance_core__NativeArray*)var163)->values[1]=var180;
{
{ /* Inline model#MSignature#mparameters (var_mysignature) on <var_mysignature:nullable MSignature(MSignature)> */
var183 = var_mysignature->attrs[COLOR_nitc__model__MSignature___mparameters].val; /* _mparameters on <var_mysignature:nullable MSignature(MSignature)> */
if (unlikely(var183 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mparameters");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1879);
fatal_exit(1);
}
var181 = var183;
RET_LABEL182:(void)0;
}
}
{
var184 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var181, var_i);
}
{
{ /* Inline model#MParameter#name (var184) on <var184:nullable Object(MParameter)> */
var187 = var184->attrs[COLOR_nitc__model__MParameter___name].val; /* _name on <var184:nullable Object(MParameter)> */
if (unlikely(var187 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1993);
fatal_exit(1);
}
var185 = var187;
RET_LABEL186:(void)0;
}
}
((struct instance_core__NativeArray*)var163)->values[3]=var185;
{
var188 = ((val*(*)(val* self))(var_myt->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_myt); /* to_s on <var_myt:MType>*/
}
((struct instance_core__NativeArray*)var163)->values[5]=var188;
{
var189 = ((val*(*)(val* self))(var163->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var163); /* native_to_s on <var163:NativeArray[String]>*/
}
varonce162 = var163;
{
nitc___nitc__ModelBuilder___error(var_modelbuilder, var_node156, var189); /* Direct call modelbuilder_base#ModelBuilder#error on <var_modelbuilder:ModelBuilder>*/
}
} else {
}
{
var190 = core___core__Int___Discrete__successor(var_i, 1l);
}
var_i = var190;
}
BREAK_label: (void)0;
} else {
}
if (var_precursor_ret_type == NULL) {
var191 = 0; /* is null */
} else {
var191 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_precursor_ret_type,((val*)NULL)) on <var_precursor_ret_type:nullable MType> */
var_other44 = ((val*)NULL);
{
var194 = ((short int(*)(val* self, val* p0))(var_precursor_ret_type->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_precursor_ret_type, var_other44); /* == on <var_precursor_ret_type:nullable MType(MType)>*/
}
var195 = !var194;
var192 = var195;
goto RET_LABEL193;
RET_LABEL193:(void)0;
}
var191 = var192;
}
if (var191){
if (var_nsig == NULL) {
var196 = 0; /* is null */
} else {
var196 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_nsig,((val*)NULL)) on <var_nsig:nullable AType> */
var_other44 = ((val*)NULL);
{
var199 = ((short int(*)(val* self, val* p0))(var_nsig->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_nsig, var_other44); /* == on <var_nsig:nullable AType(AType)>*/
}
var200 = !var199;
var197 = var200;
goto RET_LABEL198;
RET_LABEL198:(void)0;
}
var196 = var197;
}
if (var196){
var_node201 = var_nsig;
} else {
var_node201 = self;
}
if (var_ret_type == NULL) {
var202 = 1; /* is null */
} else {
var202 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_ret_type,((val*)NULL)) on <var_ret_type:nullable MType> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_ret_type,var_other) on <var_ret_type:nullable MType(MType)> */
var207 = var_ret_type == var_other;
var205 = var207;
goto RET_LABEL206;
RET_LABEL206:(void)0;
}
}
var203 = var205;
goto RET_LABEL204;
RET_LABEL204:(void)0;
}
var202 = var203;
}
if (var202){
var_ret_type = var_precursor_ret_type;
} else {
{
{ /* Inline model#MClassDef#bound_mtype (var_mclassdef) on <var_mclassdef:MClassDef> */
var210 = var_mclassdef->attrs[COLOR_nitc__model__MClassDef___bound_mtype].val; /* _bound_mtype on <var_mclassdef:MClassDef> */
if (unlikely(var210 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _bound_mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 594);
fatal_exit(1);
}
var208 = var210;
RET_LABEL209:(void)0;
}
}
{
var211 = nitc___nitc__ModelBuilder___check_subtype(var_modelbuilder, var_node201, var_mmodule, var208, var_ret_type, var_precursor_ret_type);
}
var212 = !var211;
if (var212){
if (unlikely(varonce213==NULL)) {
var214 = NEW_core__NativeArray(5l, &type_core__NativeArray__core__String);
if (likely(varonce215!=NULL)) {
var216 = varonce215;
} else {
var217 = "Redef Error: expected `";
var218 = core__abstract_text___CString___to_s_full(var217, 23l, 23l);
var216 = var218;
varonce215 = var216;
}
((struct instance_core__NativeArray*)var214)->values[0]=var216;
if (likely(varonce219!=NULL)) {
var220 = varonce219;
} else {
var221 = "` return type; got `";
var222 = core__abstract_text___CString___to_s_full(var221, 20l, 20l);
var220 = var222;
varonce219 = var220;
}
((struct instance_core__NativeArray*)var214)->values[2]=var220;
if (likely(varonce223!=NULL)) {
var224 = varonce223;
} else {
var225 = "`.";
var226 = core__abstract_text___CString___to_s_full(var225, 2l, 2l);
var224 = var226;
varonce223 = var224;
}
((struct instance_core__NativeArray*)var214)->values[4]=var224;
} else {
var214 = varonce213;
varonce213 = NULL;
}
{
var227 = ((val*(*)(val* self))(var_precursor_ret_type->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_precursor_ret_type); /* to_s on <var_precursor_ret_type:nullable MType(MType)>*/
}
((struct instance_core__NativeArray*)var214)->values[1]=var227;
{
var228 = ((val*(*)(val* self))(var_ret_type->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_ret_type); /* to_s on <var_ret_type:nullable MType(MType)>*/
}
((struct instance_core__NativeArray*)var214)->values[3]=var228;
{
var229 = ((val*(*)(val* self))(var214->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var214); /* native_to_s on <var214:NativeArray[String]>*/
}
varonce213 = var214;
{
nitc___nitc__ModelBuilder___error(var_modelbuilder, var_node201, var229); /* Direct call modelbuilder_base#ModelBuilder#error on <var_modelbuilder:ModelBuilder>*/
}
} else {
}
}
} else {
}
} else {
}
RET_LABEL:;
}
/* method modelize_property#AAttrPropdef#check_repeated_types for (self: AAttrPropdef, ModelBuilder) */
void nitc__modelize_property___AAttrPropdef___APropdef__check_repeated_types(val* self, val* p0) {
val* var_modelbuilder /* var modelbuilder: ModelBuilder */;
val* var /* : nullable MMethodDef */;
val* var2 /* : nullable MMethodDef */;
val* var_mreadpropdef /* var mreadpropdef: nullable MMethodDef */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var6 /* : Bool */;
short int var8 /* : Bool */;
short int var9 /* : Bool */;
short int var10 /* : Bool */;
short int var_ /* var : Bool */;
val* var11 /* : nullable AType */;
val* var13 /* : nullable AType */;
short int var14 /* : Bool */;
short int var15 /* : Bool */;
short int var17 /* : Bool */;
short int var19 /* : Bool */;
val* var20 /* : MProperty */;
val* var22 /* : MProperty */;
val* var23 /* : MPropDef */;
val* var25 /* : MPropDef */;
val* var_intro /* var intro: MMethodDef */;
val* var26 /* : HashMap[MPropDef, APropdef] */;
val* var28 /* : HashMap[MPropDef, APropdef] */;
val* var29 /* : nullable Object */;
val* var_n_intro /* var n_intro: nullable APropdef */;
short int var30 /* : Bool */;
short int var31 /* : Bool */;
short int var33 /* : Bool */;
short int var35 /* : Bool */;
val* var_ntype /* var ntype: nullable Object */;
short int var36 /* : Bool */;
int cltype;
int idtype;
val* var37 /* : nullable ASignature */;
val* var39 /* : nullable ASignature */;
val* var40 /* : nullable MType */;
val* var42 /* : nullable MType */;
short int var43 /* : Bool */;
short int var44 /* : Bool */;
int cltype45;
int idtype46;
short int var_47 /* var : Bool */;
val* var48 /* : nullable AType */;
val* var50 /* : nullable AType */;
short int var51 /* : Bool */;
short int var52 /* : Bool */;
val* var_other54 /* var other: nullable Object */;
short int var55 /* : Bool */;
short int var56 /* : Bool */;
val* var57 /* : nullable AType */;
val* var59 /* : nullable AType */;
val* var60 /* : nullable MType */;
val* var62 /* : nullable MType */;
short int var63 /* : Bool */;
short int var64 /* : Bool */;
short int var65 /* : Bool */;
short int var66 /* : Bool */;
short int var68 /* : Bool */;
short int var70 /* : Bool */;
short int var_71 /* var : Bool */;
val* var72 /* : nullable AType */;
val* var74 /* : nullable AType */;
val* var75 /* : nullable MType */;
val* var77 /* : nullable MType */;
short int var78 /* : Bool */;
short int var80 /* : Bool */;
short int var81 /* : Bool */;
short int var_82 /* var : Bool */;
val* var83 /* : nullable MPropDef */;
val* var85 /* : nullable MPropDef */;
short int var86 /* : Bool */;
short int var87 /* : Bool */;
short int var89 /* : Bool */;
short int var91 /* : Bool */;
val* var92 /* : nullable AType */;
val* var94 /* : nullable AType */;
static val* varonce;
val* var95 /* : String */;
char* var96 /* : CString */;
val* var97 /* : String */;
val* var99 /* : NativeArray[String] */;
static val* varonce98;
static val* varonce100;
val* var101 /* : String */;
char* var102 /* : CString */;
val* var103 /* : String */;
static val* varonce104;
val* var105 /* : String */;
char* var106 /* : CString */;
val* var107 /* : String */;
val* var108 /* : nullable MPropDef */;
val* var110 /* : nullable MPropDef */;
val* var111 /* : String */;
val* var112 /* : String */;
var_modelbuilder = p0;
{
{ /* Inline modelize_property#AAttrPropdef#mreadpropdef (self) on <self:AAttrPropdef> */
var2 = self->attrs[COLOR_nitc__modelize_property__AAttrPropdef___mreadpropdef].val; /* _mreadpropdef on <self:AAttrPropdef> */
var = var2;
RET_LABEL1:(void)0;
}
}
var_mreadpropdef = var;
if (var_mreadpropdef == NULL) {
var3 = 1; /* is null */
} else {
var3 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_mreadpropdef,((val*)NULL)) on <var_mreadpropdef:nullable MMethodDef> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_mreadpropdef,var_other) on <var_mreadpropdef:nullable MMethodDef(MMethodDef)> */
var8 = var_mreadpropdef == var_other;
var6 = var8;
goto RET_LABEL7;
RET_LABEL7:(void)0;
}
}
var4 = var6;
goto RET_LABEL5;
RET_LABEL5:(void)0;
}
var3 = var4;
}
if (var3){
goto RET_LABEL;
} else {
}
{
var10 = nitc___nitc__MPropDef___is_intro(var_mreadpropdef);
}
var_ = var10;
if (var10){
var9 = var_;
} else {
{
{ /* Inline parser_nodes#AAttrPropdef#n_type (self) on <self:AAttrPropdef> */
var13 = self->attrs[COLOR_nitc__parser_nodes__AAttrPropdef___n_type].val; /* _n_type on <self:AAttrPropdef> */
var11 = var13;
RET_LABEL12:(void)0;
}
}
if (var11 == NULL) {
var14 = 1; /* is null */
} else {
var14 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var11,((val*)NULL)) on <var11:nullable AType> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var11,var_other) on <var11:nullable AType(AType)> */
var19 = var11 == var_other;
var17 = var19;
goto RET_LABEL18;
RET_LABEL18:(void)0;
}
}
var15 = var17;
goto RET_LABEL16;
RET_LABEL16:(void)0;
}
var14 = var15;
}
var9 = var14;
}
if (var9){
goto RET_LABEL;
} else {
}
{
{ /* Inline model#MPropDef#mproperty (var_mreadpropdef) on <var_mreadpropdef:nullable MMethodDef(MMethodDef)> */
var22 = var_mreadpropdef->attrs[COLOR_nitc__model__MPropDef___mproperty].val; /* _mproperty on <var_mreadpropdef:nullable MMethodDef(MMethodDef)> */
if (unlikely(var22 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2357);
fatal_exit(1);
}
var20 = var22;
RET_LABEL21:(void)0;
}
}
{
{ /* Inline model#MProperty#intro (var20) on <var20:MProperty(MMethod)> */
var25 = var20->attrs[COLOR_nitc__model__MProperty___intro].val; /* _intro on <var20:MProperty(MMethod)> */
if (unlikely(var25 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2097);
fatal_exit(1);
}
var23 = var25;
RET_LABEL24:(void)0;
}
}
var_intro = var23;
{
{ /* Inline modelize_property#ModelBuilder#mpropdef2npropdef (var_modelbuilder) on <var_modelbuilder:ModelBuilder> */
var28 = var_modelbuilder->attrs[COLOR_nitc__modelize_property__ModelBuilder___mpropdef2npropdef].val; /* _mpropdef2npropdef on <var_modelbuilder:ModelBuilder> */
if (unlikely(var28 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mpropdef2npropdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelize_property, 40);
fatal_exit(1);
}
var26 = var28;
RET_LABEL27:(void)0;
}
}
{
var29 = core___core__HashMap___core__abstract_collection__MapRead__get_or_null(var26, var_intro);
}
var_n_intro = var29;
if (var_n_intro == NULL) {
var30 = 1; /* is null */
} else {
var30 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_n_intro,((val*)NULL)) on <var_n_intro:nullable APropdef> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_n_intro,var_other) on <var_n_intro:nullable APropdef(APropdef)> */
var35 = var_n_intro == var_other;
var33 = var35;
goto RET_LABEL34;
RET_LABEL34:(void)0;
}
}
var31 = var33;
goto RET_LABEL32;
RET_LABEL32:(void)0;
}
var30 = var31;
}
if (var30){
goto RET_LABEL;
} else {
}
var_ntype = ((val*)NULL);
/* <var_n_intro:nullable APropdef(APropdef)> isa AMethPropdef */
cltype = type_nitc__AMethPropdef.color;
idtype = type_nitc__AMethPropdef.id;
if(cltype >= var_n_intro->type->table_size) {
var36 = 0;
} else {
var36 = var_n_intro->type->type_table[cltype] == idtype;
}
if (var36){
{
{ /* Inline parser_nodes#AMethPropdef#n_signature (var_n_intro) on <var_n_intro:nullable APropdef(AMethPropdef)> */
var39 = var_n_intro->attrs[COLOR_nitc__parser_nodes__AMethPropdef___n_signature].val; /* _n_signature on <var_n_intro:nullable APropdef(AMethPropdef)> */
var37 = var39;
RET_LABEL38:(void)0;
}
}
if (var37 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelize_property, 1593);
fatal_exit(1);
} else {
{ /* Inline modelize_property#ASignature#ret_type (var37) on <var37:nullable ASignature> */
if (unlikely(var37 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelize_property, 668);
fatal_exit(1);
}
var42 = var37->attrs[COLOR_nitc__modelize_property__ASignature___ret_type].val; /* _ret_type on <var37:nullable ASignature> */
var40 = var42;
RET_LABEL41:(void)0;
}
}
var_ntype = var40;
} else {
/* <var_n_intro:nullable APropdef(APropdef)> isa AAttrPropdef */
cltype45 = type_nitc__AAttrPropdef.color;
idtype46 = type_nitc__AAttrPropdef.id;
if(cltype45 >= var_n_intro->type->table_size) {
var44 = 0;
} else {
var44 = var_n_intro->type->type_table[cltype45] == idtype46;
}
var_47 = var44;
if (var44){
{
{ /* Inline parser_nodes#AAttrPropdef#n_type (var_n_intro) on <var_n_intro:nullable APropdef(AAttrPropdef)> */
var50 = var_n_intro->attrs[COLOR_nitc__parser_nodes__AAttrPropdef___n_type].val; /* _n_type on <var_n_intro:nullable APropdef(AAttrPropdef)> */
var48 = var50;
RET_LABEL49:(void)0;
}
}
if (var48 == NULL) {
var51 = 0; /* is null */
} else {
var51 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var48,((val*)NULL)) on <var48:nullable AType> */
var_other54 = ((val*)NULL);
{
var55 = ((short int(*)(val* self, val* p0))(var48->class->vft[COLOR_core__kernel__Object___61d_61d]))(var48, var_other54); /* == on <var48:nullable AType(AType)>*/
}
var56 = !var55;
var52 = var56;
goto RET_LABEL53;
RET_LABEL53:(void)0;
}
var51 = var52;
}
var43 = var51;
} else {
var43 = var_47;
}
if (var43){
{
{ /* Inline parser_nodes#AAttrPropdef#n_type (var_n_intro) on <var_n_intro:nullable APropdef(AAttrPropdef)> */
var59 = var_n_intro->attrs[COLOR_nitc__parser_nodes__AAttrPropdef___n_type].val; /* _n_type on <var_n_intro:nullable APropdef(AAttrPropdef)> */
var57 = var59;
RET_LABEL58:(void)0;
}
}
if (var57 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelize_property, 1595);
fatal_exit(1);
} else {
{ /* Inline modelbuilder_base#AType#mtype (var57) on <var57:nullable AType> */
if (unlikely(var57 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelbuilder_base, 495);
fatal_exit(1);
}
var62 = var57->attrs[COLOR_nitc__modelbuilder_base__AType___mtype].val; /* _mtype on <var57:nullable AType> */
var60 = var62;
RET_LABEL61:(void)0;
}
}
var_ntype = var60;
} else {
}
}
if (var_ntype == NULL) {
var65 = 1; /* is null */
} else {
var65 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_ntype,((val*)NULL)) on <var_ntype:nullable Object(nullable MType)> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_ntype,var_other) on <var_ntype:nullable MType(MType)> */
var70 = var_ntype == var_other;
var68 = var70;
goto RET_LABEL69;
RET_LABEL69:(void)0;
}
}
var66 = var68;
goto RET_LABEL67;
RET_LABEL67:(void)0;
}
var65 = var66;
}
var_71 = var65;
if (var65){
var64 = var_71;
} else {
{
{ /* Inline parser_nodes#AAttrPropdef#n_type (self) on <self:AAttrPropdef> */
var74 = self->attrs[COLOR_nitc__parser_nodes__AAttrPropdef___n_type].val; /* _n_type on <self:AAttrPropdef> */
var72 = var74;
RET_LABEL73:(void)0;
}
}
if (var72 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelize_property, 1598);
fatal_exit(1);
} else {
{ /* Inline modelbuilder_base#AType#mtype (var72) on <var72:nullable AType> */
if (unlikely(var72 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelbuilder_base, 495);
fatal_exit(1);
}
var77 = var72->attrs[COLOR_nitc__modelbuilder_base__AType___mtype].val; /* _mtype on <var72:nullable AType> */
var75 = var77;
RET_LABEL76:(void)0;
}
}
{
{ /* Inline kernel#Object#!= (var_ntype,var75) on <var_ntype:nullable Object(MType)> */
var_other54 = var75;
{
var80 = ((short int(*)(val* self, val* p0))(var_ntype->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_ntype, var_other54); /* == on <var_ntype:nullable Object(MType)>*/
}
var81 = !var80;
var78 = var81;
goto RET_LABEL79;
RET_LABEL79:(void)0;
}
}
var64 = var78;
}
var_82 = var64;
if (var64){
var63 = var_82;
} else {
{
{ /* Inline modelize_property#APropdef#mpropdef (self) on <self:AAttrPropdef> */
var85 = self->attrs[COLOR_nitc__modelize_property__APropdef___mpropdef].val; /* _mpropdef on <self:AAttrPropdef> */
var83 = var85;
RET_LABEL84:(void)0;
}
}
if (var83 == NULL) {
var86 = 1; /* is null */
} else {
var86 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var83,((val*)NULL)) on <var83:nullable MPropDef(nullable MAttributeDef)> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var83,var_other) on <var83:nullable MAttributeDef(MAttributeDef)> */
var91 = var83 == var_other;
var89 = var91;
goto RET_LABEL90;
RET_LABEL90:(void)0;
}
}
var87 = var89;
goto RET_LABEL88;
RET_LABEL88:(void)0;
}
var86 = var87;
}
var63 = var86;
}
if (var63){
goto RET_LABEL;
} else {
}
{
{ /* Inline parser_nodes#AAttrPropdef#n_type (self) on <self:AAttrPropdef> */
var94 = self->attrs[COLOR_nitc__parser_nodes__AAttrPropdef___n_type].val; /* _n_type on <self:AAttrPropdef> */
var92 = var94;
RET_LABEL93:(void)0;
}
}
if (likely(varonce!=NULL)) {
var95 = varonce;
} else {
var96 = "useless-signature";
var97 = core__abstract_text___CString___to_s_full(var96, 17l, 17l);
var95 = var97;
varonce = var95;
}
if (unlikely(varonce98==NULL)) {
var99 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce100!=NULL)) {
var101 = varonce100;
} else {
var102 = "Warning: useless type repetition on redefined attribute `";
var103 = core__abstract_text___CString___to_s_full(var102, 57l, 57l);
var101 = var103;
varonce100 = var101;
}
((struct instance_core__NativeArray*)var99)->values[0]=var101;
if (likely(varonce104!=NULL)) {
var105 = varonce104;
} else {
var106 = "`";
var107 = core__abstract_text___CString___to_s_full(var106, 1l, 1l);
var105 = var107;
varonce104 = var105;
}
((struct instance_core__NativeArray*)var99)->values[2]=var105;
} else {
var99 = varonce98;
varonce98 = NULL;
}
{
{ /* Inline modelize_property#APropdef#mpropdef (self) on <self:AAttrPropdef> */
var110 = self->attrs[COLOR_nitc__modelize_property__APropdef___mpropdef].val; /* _mpropdef on <self:AAttrPropdef> */
var108 = var110;
RET_LABEL109:(void)0;
}
}
if (var108 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelize_property, 1599);
fatal_exit(1);
} else {
var111 = nitc___nitc__MPropDef___nitc__model_base__MEntity__name(var108);
}
((struct instance_core__NativeArray*)var99)->values[1]=var111;
{
var112 = ((val*(*)(val* self))(var99->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var99); /* native_to_s on <var99:NativeArray[String]>*/
}
varonce98 = var99;
{
nitc___nitc__ModelBuilder___advice(var_modelbuilder, var92, var95, var112); /* Direct call modelbuilder_base#ModelBuilder#advice on <var_modelbuilder:ModelBuilder>*/
}
RET_LABEL:;
}
/* method modelize_property#ATypePropdef#build_property for (self: ATypePropdef, ModelBuilder, MClassDef) */
void nitc__modelize_property___ATypePropdef___APropdef__build_property(val* self, val* p0, val* p1) {
val* var_modelbuilder /* var modelbuilder: ModelBuilder */;
val* var_mclassdef /* var mclassdef: MClassDef */;
val* var /* : AQclassid */;
val* var2 /* : AQclassid */;
val* var3 /* : TClassid */;
val* var5 /* : TClassid */;
val* var6 /* : String */;
val* var_name /* var name: String */;
val* var7 /* : AQclassid */;
val* var9 /* : AQclassid */;
val* var10 /* : nullable MProperty */;
val* var_mprop /* var mprop: nullable MProperty */;
short int var11 /* : Bool */;
short int var12 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var14 /* : Bool */;
short int var16 /* : Bool */;
val* var17 /* : nullable AVisibility */;
val* var19 /* : nullable AVisibility */;
val* var20 /* : MVisibility */;
val* var_mvisibility /* var mvisibility: MVisibility */;
val* var21 /* : MVirtualTypeProp */;
val* var22 /* : Location */;
val* var24 /* : Location */;
val* var25 /* : SequenceRead[Char] */;
val* var_ /* var : SequenceRead[Char] */;
val* var26 /* : Iterator[nullable Object] */;
val* var_27 /* var : IndexedIterator[Char] */;
short int var28 /* : Bool */;
val* var29 /* : nullable Object */;
uint32_t var30 /* : Char */;
uint32_t var_c /* var c: Char */;
short int var31 /* : Bool */;
short int var32 /* : Bool */;
short int var34 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var35 /* : Bool */;
short int var_36 /* var : Bool */;
short int var37 /* : Bool */;
short int var39 /* : Bool */;
int cltype40;
int idtype41;
const char* var_class_name42;
short int var43 /* : Bool */;
val* var44 /* : AQclassid */;
val* var46 /* : AQclassid */;
static val* varonce;
val* var47 /* : String */;
char* var48 /* : CString */;
val* var49 /* : String */;
val* var51 /* : NativeArray[String] */;
static val* varonce50;
static val* varonce52;
val* var53 /* : String */;
char* var54 /* : CString */;
val* var55 /* : String */;
static val* varonce56;
val* var57 /* : String */;
char* var58 /* : CString */;
val* var59 /* : String */;
val* var60 /* : String */;
short int var61 /* : Bool */;
short int var63 /* : Bool */;
short int var64 /* : Bool */;
int cltype65;
int idtype66;
val* var67 /* : nullable AVisibility */;
val* var69 /* : nullable AVisibility */;
val* var70 /* : MVirtualTypeDef */;
val* var71 /* : Location */;
val* var73 /* : Location */;
val* var_mpropdef /* var mpropdef: MVirtualTypeDef */;
short int var74 /* : Bool */;
int cltype75;
int idtype76;
const struct type* type_struct;
const char* var_class_name77;
short int var79 /* : Bool */;
int cltype80;
int idtype81;
const struct type* type_struct82;
const char* var_class_name83;
short int var84 /* : Bool */;
val* var85 /* : ToolContext */;
val* var87 /* : ToolContext */;
val* var89 /* : NativeArray[String] */;
static val* varonce88;
static val* varonce90;
val* var91 /* : String */;
char* var92 /* : CString */;
val* var93 /* : String */;
val* var94 /* : String */;
val* var95 /* : String */;
val* var96 /* : String */;
val* var97 /* : ToolContext */;
val* var99 /* : ToolContext */;
val* var101 /* : NativeArray[String] */;
static val* varonce100;
static val* varonce102;
val* var103 /* : String */;
char* var104 /* : CString */;
val* var105 /* : String */;
val* var106 /* : String */;
val* var107 /* : String */;
val* var108 /* : String */;
val* var109 /* : nullable TKwredef */;
val* var111 /* : nullable TKwredef */;
short int var112 /* : Bool */;
short int var113 /* : Bool */;
short int var114 /* : Bool */;
short int var115 /* : Bool */;
val* var117 /* : Map[MProperty, APropdef] */;
val* var119 /* : Map[MProperty, APropdef] */;
val* var120 /* : HashMap[MPropDef, APropdef] */;
val* var122 /* : HashMap[MPropDef, APropdef] */;
static val* varonce123;
val* var124 /* : String */;
char* var125 /* : CString */;
val* var126 /* : String */;
val* var127 /* : nullable AAnnotation */;
val* var_atfixed /* var atfixed: nullable AAnnotation */;
short int var128 /* : Bool */;
short int var129 /* : Bool */;
val* var_other131 /* var other: nullable Object */;
short int var132 /* : Bool */;
short int var133 /* : Bool */;
var_modelbuilder = p0;
var_mclassdef = p1;
{
{ /* Inline parser_nodes#ATypePropdef#n_qid (self) on <self:ATypePropdef> */
var2 = self->attrs[COLOR_nitc__parser_nodes__ATypePropdef___n_qid].val; /* _n_qid on <self:ATypePropdef> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_qid");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 1556);
fatal_exit(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
{ /* Inline parser_nodes#AQclassid#n_id (var) on <var:AQclassid> */
var5 = var->attrs[COLOR_nitc__parser_nodes__AQclassid___n_id].val; /* _n_id on <var:AQclassid> */
if (unlikely(var5 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_id");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 1733);
fatal_exit(1);
}
var3 = var5;
RET_LABEL4:(void)0;
}
}
{
var6 = nitc__lexer_work___Token___text(var3);
}
var_name = var6;
{
{ /* Inline parser_nodes#ATypePropdef#n_qid (self) on <self:ATypePropdef> */
var9 = self->attrs[COLOR_nitc__parser_nodes__ATypePropdef___n_qid].val; /* _n_qid on <self:ATypePropdef> */
if (unlikely(var9 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_qid");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 1556);
fatal_exit(1);
}
var7 = var9;
RET_LABEL8:(void)0;
}
}
{
var10 = nitc___nitc__ModelBuilder___try_get_mproperty_by_name(var_modelbuilder, var7, var_mclassdef, var_name);
}
var_mprop = var10;
if (var_mprop == NULL) {
var11 = 1; /* is null */
} else {
var11 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_mprop,((val*)NULL)) on <var_mprop:nullable MProperty> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_mprop,var_other) on <var_mprop:nullable MProperty(MProperty)> */
var16 = var_mprop == var_other;
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
if (var11){
{
{ /* Inline parser_nodes#ADefinition#n_visibility (self) on <self:ATypePropdef> */
var19 = self->attrs[COLOR_nitc__parser_nodes__ADefinition___n_visibility].val; /* _n_visibility on <self:ATypePropdef> */
var17 = var19;
RET_LABEL18:(void)0;
}
}
{
var20 = nitc__modelize_property___APropdef___new_property_visibility(self, var_modelbuilder, var_mclassdef, var17);
}
var_mvisibility = var20;
var21 = NEW_nitc__MVirtualTypeProp(&type_nitc__MVirtualTypeProp);
{
{ /* Inline parser_nodes#ANode#location (self) on <self:ATypePropdef> */
var24 = self->attrs[COLOR_nitc__parser_nodes__ANode___location].val; /* _location on <self:ATypePropdef> */
if (unlikely(var24 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _location");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 25);
fatal_exit(1);
}
var22 = var24;
RET_LABEL23:(void)0;
}
}
{
((void(*)(val* self, val* p0))(var21->class->vft[COLOR_nitc__model__MProperty__intro_mclassdef_61d]))(var21, var_mclassdef); /* intro_mclassdef= on <var21:MVirtualTypeProp>*/
}
{
((void(*)(val* self, val* p0))(var21->class->vft[COLOR_nitc__model__MProperty__name_61d]))(var21, var_name); /* name= on <var21:MVirtualTypeProp>*/
}
{
((void(*)(val* self, val* p0))(var21->class->vft[COLOR_nitc__model__MProperty__location_61d]))(var21, var22); /* location= on <var21:MVirtualTypeProp>*/
}
{
((void(*)(val* self, val* p0))(var21->class->vft[COLOR_nitc__model__MProperty__visibility_61d]))(var21, var_mvisibility); /* visibility= on <var21:MVirtualTypeProp>*/
}
{
((void(*)(val* self))(var21->class->vft[COLOR_core__kernel__Object__init]))(var21); /* init on <var21:MVirtualTypeProp>*/
}
var_mprop = var21;
{
var25 = ((val*(*)(val* self))(var_name->class->vft[COLOR_core__abstract_text__Text__chars]))(var_name); /* chars on <var_name:String>*/
}
var_ = var25;
{
var26 = ((val*(*)(val* self))((((long)var_&3)?class_info[((long)var_&3)]:var_->class)->vft[COLOR_core__abstract_collection__Collection__iterator]))(var_); /* iterator on <var_:SequenceRead[Char]>*/
}
var_27 = var26;
for(;;) {
{
var28 = ((short int(*)(val* self))((((long)var_27&3)?class_info[((long)var_27&3)]:var_27->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_27); /* is_ok on <var_27:IndexedIterator[Char]>*/
}
if (var28){
} else {
goto BREAK_label;
}
{
var29 = ((val*(*)(val* self))((((long)var_27&3)?class_info[((long)var_27&3)]:var_27->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_27); /* item on <var_27:IndexedIterator[Char]>*/
}
var30 = (uint32_t)((long)(var29)>>2);
var_c = var30;
{
{ /* Inline kernel#Char#>= (var_c,'a') on <var_c:Char> */
/* Covariant cast for argument 0 (i) <'a':Char> isa OTHER */
/* <'a':Char> isa OTHER */
var34 = 1; /* easy <'a':Char> isa OTHER*/
if (unlikely(!var34)) {
var_class_name = type_core__Char.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 915);
fatal_exit(1);
}
var35 = var_c >= 'a';
var32 = var35;
goto RET_LABEL33;
RET_LABEL33:(void)0;
}
}
var_36 = var32;
if (var32){
{
{ /* Inline kernel#Char#<= (var_c,'z') on <var_c:Char> */
/* Covariant cast for argument 0 (i) <'z':Char> isa OTHER */
/* <'z':Char> isa OTHER */
var39 = 1; /* easy <'z':Char> isa OTHER*/
if (unlikely(!var39)) {
var_class_name42 = type_core__Char.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name42);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 913);
fatal_exit(1);
}
var43 = var_c <= 'z';
var37 = var43;
goto RET_LABEL38;
RET_LABEL38:(void)0;
}
}
var31 = var37;
} else {
var31 = var_36;
}
if (var31){
{
{ /* Inline parser_nodes#ATypePropdef#n_qid (self) on <self:ATypePropdef> */
var46 = self->attrs[COLOR_nitc__parser_nodes__ATypePropdef___n_qid].val; /* _n_qid on <self:ATypePropdef> */
if (unlikely(var46 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_qid");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 1556);
fatal_exit(1);
}
var44 = var46;
RET_LABEL45:(void)0;
}
}
if (likely(varonce!=NULL)) {
var47 = varonce;
} else {
var48 = "bad-type-name";
var49 = core__abstract_text___CString___to_s_full(var48, 13l, 13l);
var47 = var49;
varonce = var47;
}
if (unlikely(varonce50==NULL)) {
var51 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce52!=NULL)) {
var53 = varonce52;
} else {
var54 = "Warning: lowercase in the virtual type `";
var55 = core__abstract_text___CString___to_s_full(var54, 40l, 40l);
var53 = var55;
varonce52 = var53;
}
((struct instance_core__NativeArray*)var51)->values[0]=var53;
if (likely(varonce56!=NULL)) {
var57 = varonce56;
} else {
var58 = "`.";
var59 = core__abstract_text___CString___to_s_full(var58, 2l, 2l);
var57 = var59;
varonce56 = var57;
}
((struct instance_core__NativeArray*)var51)->values[2]=var57;
} else {
var51 = varonce50;
varonce50 = NULL;
}
((struct instance_core__NativeArray*)var51)->values[1]=var_name;
{
var60 = ((val*(*)(val* self))(var51->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var51); /* native_to_s on <var51:NativeArray[String]>*/
}
varonce50 = var51;
{
nitc___nitc__ModelBuilder___warning(var_modelbuilder, var44, var47, var60); /* Direct call modelbuilder_base#ModelBuilder#warning on <var_modelbuilder:ModelBuilder>*/
}
goto BREAK_label;
} else {
}
{
((void(*)(val* self))((((long)var_27&3)?class_info[((long)var_27&3)]:var_27->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_27); /* next on <var_27:IndexedIterator[Char]>*/
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_27&3)?class_info[((long)var_27&3)]:var_27->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_27); /* finish on <var_27:IndexedIterator[Char]>*/
}
} else {
{
{ /* Inline model_base#MEntity#is_broken (var_mprop) on <var_mprop:nullable MProperty(MProperty)> */
var63 = var_mprop->attrs[COLOR_nitc__model_base__MEntity___is_broken].s; /* _is_broken on <var_mprop:nullable MProperty(MProperty)> */
var61 = var63;
RET_LABEL62:(void)0;
}
}
if (var61){
goto RET_LABEL;
} else {
}
/* <var_mprop:nullable MProperty(MProperty)> isa MVirtualTypeProp */
cltype65 = type_nitc__MVirtualTypeProp.color;
idtype66 = type_nitc__MVirtualTypeProp.id;
if(cltype65 >= var_mprop->type->table_size) {
var64 = 0;
} else {
var64 = var_mprop->type->type_table[cltype65] == idtype66;
}
if (unlikely(!var64)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelize_property, 1619);
fatal_exit(1);
}
{
{ /* Inline parser_nodes#ADefinition#n_visibility (self) on <self:ATypePropdef> */
var69 = self->attrs[COLOR_nitc__parser_nodes__ADefinition___n_visibility].val; /* _n_visibility on <self:ATypePropdef> */
var67 = var69;
RET_LABEL68:(void)0;
}
}
{
nitc__modelize_property___APropdef___check_redef_property_visibility(self, var_modelbuilder, var67, var_mprop); /* Direct call modelize_property#APropdef#check_redef_property_visibility on <self:ATypePropdef>*/
}
}
var70 = NEW_nitc__MVirtualTypeDef(&type_nitc__MVirtualTypeDef);
{
{ /* Inline parser_nodes#ANode#location (self) on <self:ATypePropdef> */
var73 = self->attrs[COLOR_nitc__parser_nodes__ANode___location].val; /* _location on <self:ATypePropdef> */
if (unlikely(var73 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _location");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 25);
fatal_exit(1);
}
var71 = var73;
RET_LABEL72:(void)0;
}
}
{
((void(*)(val* self, val* p0))(var70->class->vft[COLOR_nitc__model__MPropDef__mclassdef_61d]))(var70, var_mclassdef); /* mclassdef= on <var70:MVirtualTypeDef>*/
}
{
((void(*)(val* self, val* p0))(var70->class->vft[COLOR_nitc__model__MPropDef__mproperty_61d]))(var70, var_mprop); /* mproperty= on <var70:MVirtualTypeDef>*/
}
{
((void(*)(val* self, val* p0))(var70->class->vft[COLOR_nitc__model__MPropDef__location_61d]))(var70, var71); /* location= on <var70:MVirtualTypeDef>*/
}
{
((void(*)(val* self))(var70->class->vft[COLOR_core__kernel__Object__init]))(var70); /* init on <var70:MVirtualTypeDef>*/
}
var_mpropdef = var70;
/* <var_mpropdef:MVirtualTypeDef> isa nullable MPROPDEF */
type_struct = self->type->resolution_table->types[COLOR_nullable__nitc__modelize_property__APropdef__MPROPDEF];
cltype75 = type_struct->color;
idtype76 = type_struct->id;
if(cltype75 >= var_mpropdef->type->table_size) {
var74 = 0;
} else {
var74 = var_mpropdef->type->type_table[cltype75] == idtype76;
}
if (unlikely(!var74)) {
var_class_name77 = var_mpropdef == NULL ? "null" : var_mpropdef->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "nullable MPROPDEF", var_class_name77);
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelize_property, 1624);
fatal_exit(1);
}
{
{ /* Inline modelize_property#APropdef#mpropdef= (self,var_mpropdef) on <self:ATypePropdef> */
/* Covariant cast for argument 0 (mpropdef) <var_mpropdef:MVirtualTypeDef> isa nullable MPROPDEF */
/* <var_mpropdef:MVirtualTypeDef> isa nullable MPROPDEF */
type_struct82 = self->type->resolution_table->types[COLOR_nullable__nitc__modelize_property__APropdef__MPROPDEF];
cltype80 = type_struct82->color;
idtype81 = type_struct82->id;
if(cltype80 >= var_mpropdef->type->table_size) {
var79 = 0;
} else {
var79 = var_mpropdef->type->type_table[cltype80] == idtype81;
}
if (unlikely(!var79)) {
var_class_name83 = var_mpropdef == NULL ? "null" : var_mpropdef->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "nullable MPROPDEF", var_class_name83);
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelize_property, 557);
fatal_exit(1);
}
self->attrs[COLOR_nitc__modelize_property__APropdef___mpropdef].val = var_mpropdef; /* _mpropdef on <self:ATypePropdef> */
RET_LABEL78:(void)0;
}
}
{
var84 = nitc___nitc__MPropDef___is_intro(var_mpropdef);
}
if (var84){
{
{ /* Inline modelbuilder_base#ModelBuilder#toolcontext (var_modelbuilder) on <var_modelbuilder:ModelBuilder> */
var87 = var_modelbuilder->attrs[COLOR_nitc__modelbuilder_base__ModelBuilder___toolcontext].val; /* _toolcontext on <var_modelbuilder:ModelBuilder> */
if (unlikely(var87 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelbuilder_base, 47);
fatal_exit(1);
}
var85 = var87;
RET_LABEL86:(void)0;
}
}
if (unlikely(varonce88==NULL)) {
var89 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce90!=NULL)) {
var91 = varonce90;
} else {
var92 = " introduces new type ";
var93 = core__abstract_text___CString___to_s_full(var92, 21l, 21l);
var91 = var93;
varonce90 = var91;
}
((struct instance_core__NativeArray*)var89)->values[1]=var91;
} else {
var89 = varonce88;
varonce88 = NULL;
}
{
var94 = ((val*(*)(val* self))(var_mpropdef->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_mpropdef); /* to_s on <var_mpropdef:MVirtualTypeDef>*/
}
((struct instance_core__NativeArray*)var89)->values[0]=var94;
{
var95 = nitc___nitc__MProperty___nitc__model_base__MEntity__full_name(var_mprop);
}
((struct instance_core__NativeArray*)var89)->values[2]=var95;
{
var96 = ((val*(*)(val* self))(var89->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var89); /* native_to_s on <var89:NativeArray[String]>*/
}
varonce88 = var89;
{
nitc___nitc__ToolContext___info(var85, var96, 4l); /* Direct call toolcontext#ToolContext#info on <var85:ToolContext>*/
}
} else {
{
{ /* Inline modelbuilder_base#ModelBuilder#toolcontext (var_modelbuilder) on <var_modelbuilder:ModelBuilder> */
var99 = var_modelbuilder->attrs[COLOR_nitc__modelbuilder_base__ModelBuilder___toolcontext].val; /* _toolcontext on <var_modelbuilder:ModelBuilder> */
if (unlikely(var99 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelbuilder_base, 47);
fatal_exit(1);
}
var97 = var99;
RET_LABEL98:(void)0;
}
}
if (unlikely(varonce100==NULL)) {
var101 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce102!=NULL)) {
var103 = varonce102;
} else {
var104 = " redefines type ";
var105 = core__abstract_text___CString___to_s_full(var104, 16l, 16l);
var103 = var105;
varonce102 = var103;
}
((struct instance_core__NativeArray*)var101)->values[1]=var103;
} else {
var101 = varonce100;
varonce100 = NULL;
}
{
var106 = ((val*(*)(val* self))(var_mpropdef->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_mpropdef); /* to_s on <var_mpropdef:MVirtualTypeDef>*/
}
((struct instance_core__NativeArray*)var101)->values[0]=var106;
{
var107 = nitc___nitc__MProperty___nitc__model_base__MEntity__full_name(var_mprop);
}
((struct instance_core__NativeArray*)var101)->values[2]=var107;
{
var108 = ((val*(*)(val* self))(var101->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var101); /* native_to_s on <var101:NativeArray[String]>*/
}
varonce100 = var101;
{
nitc___nitc__ToolContext___info(var97, var108, 4l); /* Direct call toolcontext#ToolContext#info on <var97:ToolContext>*/
}
}
{
{ /* Inline parser_nodes#ADefinition#n_kwredef (self) on <self:ATypePropdef> */
var111 = self->attrs[COLOR_nitc__parser_nodes__ADefinition___n_kwredef].val; /* _n_kwredef on <self:ATypePropdef> */
var109 = var111;
RET_LABEL110:(void)0;
}
}
{
var112 = nitc___nitc__MPropDef___is_intro(var_mpropdef);
}
var113 = !var112;
{
var114 = nitc__modelize_property___APropdef___check_redef_keyword(self, var_modelbuilder, var_mclassdef, var109, var113, var_mprop);
}
var115 = !var114;
if (var115){
{
{ /* Inline model_base#MEntity#is_broken= (var_mpropdef,1) on <var_mpropdef:MVirtualTypeDef> */
var_mpropdef->attrs[COLOR_nitc__model_base__MEntity___is_broken].s = 1; /* _is_broken on <var_mpropdef:MVirtualTypeDef> */
RET_LABEL116:(void)0;
}
}
} else {
}
{
{ /* Inline modelize_property#MClassDef#mprop2npropdef (var_mclassdef) on <var_mclassdef:MClassDef> */
var119 = var_mclassdef->attrs[COLOR_nitc__modelize_property__MClassDef___mprop2npropdef].val; /* _mprop2npropdef on <var_mclassdef:MClassDef> */
if (unlikely(var119 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mprop2npropdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelize_property, 504);
fatal_exit(1);
}
var117 = var119;
RET_LABEL118:(void)0;
}
}
{
((void(*)(val* self, val* p0, val* p1))((((long)var117&3)?class_info[((long)var117&3)]:var117->class)->vft[COLOR_core__abstract_collection__Map___91d_93d_61d]))(var117, var_mprop, self); /* []= on <var117:Map[MProperty, APropdef]>*/
}
{
{ /* Inline modelize_property#ModelBuilder#mpropdef2npropdef (var_modelbuilder) on <var_modelbuilder:ModelBuilder> */
var122 = var_modelbuilder->attrs[COLOR_nitc__modelize_property__ModelBuilder___mpropdef2npropdef].val; /* _mpropdef2npropdef on <var_modelbuilder:ModelBuilder> */
if (unlikely(var122 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mpropdef2npropdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelize_property, 40);
fatal_exit(1);
}
var120 = var122;
RET_LABEL121:(void)0;
}
}
{
core___core__HashMap___core__abstract_collection__Map___91d_93d_61d(var120, var_mpropdef, self); /* Direct call hash_collection#HashMap#[]= on <var120:HashMap[MPropDef, APropdef]>*/
}
{
nitc__modelize_property___APropdef___set_doc(self, var_mpropdef, var_modelbuilder); /* Direct call modelize_property#APropdef#set_doc on <self:ATypePropdef>*/
}
if (likely(varonce123!=NULL)) {
var124 = varonce123;
} else {
var125 = "fixed";
var126 = core__abstract_text___CString___to_s_full(var125, 5l, 5l);
var124 = var126;
varonce123 = var124;
}
{
var127 = nitc__annotation___Prod___get_single_annotation(self, var124, var_modelbuilder);
}
var_atfixed = var127;
if (var_atfixed == NULL) {
var128 = 0; /* is null */
} else {
var128 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_atfixed,((val*)NULL)) on <var_atfixed:nullable AAnnotation> */
var_other131 = ((val*)NULL);
{
var132 = ((short int(*)(val* self, val* p0))(var_atfixed->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_atfixed, var_other131); /* == on <var_atfixed:nullable AAnnotation(AAnnotation)>*/
}
var133 = !var132;
var129 = var133;
goto RET_LABEL130;
RET_LABEL130:(void)0;
}
var128 = var129;
}
if (var128){
{
{ /* Inline model#MVirtualTypeDef#is_fixed= (var_mpropdef,1) on <var_mpropdef:MVirtualTypeDef> */
var_mpropdef->attrs[COLOR_nitc__model__MVirtualTypeDef___is_fixed].s = 1; /* _is_fixed on <var_mpropdef:MVirtualTypeDef> */
RET_LABEL134:(void)0;
}
}
} else {
}
RET_LABEL:;
}
/* method modelize_property#ATypePropdef#build_signature for (self: ATypePropdef, ModelBuilder) */
void nitc__modelize_property___ATypePropdef___APropdef__build_signature(val* self, val* p0) {
val* var_modelbuilder /* var modelbuilder: ModelBuilder */;
val* var /* : nullable MPropDef */;
val* var2 /* : nullable MPropDef */;
val* var_mpropdef /* var mpropdef: nullable MVirtualTypeDef */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var6 /* : Bool */;
short int var8 /* : Bool */;
val* var9 /* : MClassDef */;
val* var11 /* : MClassDef */;
val* var_mclassdef /* var mclassdef: MClassDef */;
val* var12 /* : MModule */;
val* var14 /* : MModule */;
val* var_mmodule /* var mmodule: MModule */;
val* var_mtype /* var mtype: nullable MType */;
val* var15 /* : AType */;
val* var17 /* : AType */;
val* var_ntype /* var ntype: AType */;
val* var18 /* : nullable MType */;
short int var19 /* : Bool */;
short int var20 /* : Bool */;
short int var22 /* : Bool */;
short int var24 /* : Bool */;
var_modelbuilder = p0;
{
{ /* Inline modelize_property#APropdef#mpropdef (self) on <self:ATypePropdef> */
var2 = self->attrs[COLOR_nitc__modelize_property__APropdef___mpropdef].val; /* _mpropdef on <self:ATypePropdef> */
var = var2;
RET_LABEL1:(void)0;
}
}
var_mpropdef = var;
if (var_mpropdef == NULL) {
var3 = 1; /* is null */
} else {
var3 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_mpropdef,((val*)NULL)) on <var_mpropdef:nullable MVirtualTypeDef> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_mpropdef,var_other) on <var_mpropdef:nullable MVirtualTypeDef(MVirtualTypeDef)> */
var8 = var_mpropdef == var_other;
var6 = var8;
goto RET_LABEL7;
RET_LABEL7:(void)0;
}
}
var4 = var6;
goto RET_LABEL5;
RET_LABEL5:(void)0;
}
var3 = var4;
}
if (var3){
goto RET_LABEL;
} else {
}
{
{ /* Inline model#MPropDef#mclassdef (var_mpropdef) on <var_mpropdef:nullable MVirtualTypeDef(MVirtualTypeDef)> */
var11 = var_mpropdef->attrs[COLOR_nitc__model__MPropDef___mclassdef].val; /* _mclassdef on <var_mpropdef:nullable MVirtualTypeDef(MVirtualTypeDef)> */
if (unlikely(var11 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2354);
fatal_exit(1);
}
var9 = var11;
RET_LABEL10:(void)0;
}
}
var_mclassdef = var9;
{
{ /* Inline model#MClassDef#mmodule (var_mclassdef) on <var_mclassdef:MClassDef> */
var14 = var_mclassdef->attrs[COLOR_nitc__model__MClassDef___mmodule].val; /* _mmodule on <var_mclassdef:MClassDef> */
if (unlikely(var14 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 588);
fatal_exit(1);
}
var12 = var14;
RET_LABEL13:(void)0;
}
}
var_mmodule = var12;
var_mtype = ((val*)NULL);
{
{ /* Inline parser_nodes#ATypePropdef#n_type (self) on <self:ATypePropdef> */
var17 = self->attrs[COLOR_nitc__parser_nodes__ATypePropdef___n_type].val; /* _n_type on <self:ATypePropdef> */
if (unlikely(var17 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_type");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 1559);
fatal_exit(1);
}
var15 = var17;
RET_LABEL16:(void)0;
}
}
var_ntype = var15;
{
var18 = nitc___nitc__ModelBuilder___resolve_mtype_unchecked(var_modelbuilder, var_mmodule, var_mclassdef, var_ntype, 1);
}
var_mtype = var18;
if (var_mtype == NULL) {
var19 = 1; /* is null */
} else {
var19 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_mtype,((val*)NULL)) on <var_mtype:nullable MType> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_mtype,var_other) on <var_mtype:nullable MType(MType)> */
var24 = var_mtype == var_other;
var22 = var24;
goto RET_LABEL23;
RET_LABEL23:(void)0;
}
}
var20 = var22;
goto RET_LABEL21;
RET_LABEL21:(void)0;
}
var19 = var20;
}
if (var19){
goto RET_LABEL;
} else {
}
{
{ /* Inline model#MVirtualTypeDef#bound= (var_mpropdef,var_mtype) on <var_mpropdef:nullable MVirtualTypeDef(MVirtualTypeDef)> */
var_mpropdef->attrs[COLOR_nitc__model__MVirtualTypeDef___bound].val = var_mtype; /* _bound on <var_mpropdef:nullable MVirtualTypeDef(MVirtualTypeDef)> */
RET_LABEL25:(void)0;
}
}
RET_LABEL:;
}
/* method modelize_property#ATypePropdef#check_signature for (self: ATypePropdef, ModelBuilder) */
void nitc__modelize_property___ATypePropdef___APropdef__check_signature(val* self, val* p0) {
val* var_modelbuilder /* var modelbuilder: ModelBuilder */;
val* var /* : nullable MPropDef */;
val* var2 /* : nullable MPropDef */;
val* var_mpropdef /* var mpropdef: nullable MVirtualTypeDef */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var6 /* : Bool */;
short int var8 /* : Bool */;
val* var9 /* : nullable MType */;
val* var11 /* : nullable MType */;
val* var_bound /* var bound: nullable MType */;
short int var12 /* : Bool */;
short int var13 /* : Bool */;
short int var15 /* : Bool */;
short int var17 /* : Bool */;
val* var18 /* : AType */;
val* var20 /* : AType */;
val* var21 /* : MClassDef */;
val* var23 /* : MClassDef */;
val* var_mclassdef /* var mclassdef: MClassDef */;
val* var24 /* : MModule */;
val* var26 /* : MModule */;
val* var_mmodule /* var mmodule: MModule */;
val* var27 /* : MClassType */;
val* var29 /* : MClassType */;
val* var_anchor /* var anchor: MClassType */;
val* var30 /* : AType */;
val* var32 /* : AType */;
val* var_ntype /* var ntype: AType */;
val* var33 /* : nullable MType */;
short int var34 /* : Bool */;
short int var35 /* : Bool */;
short int var37 /* : Bool */;
short int var39 /* : Bool */;
val* var41 /* : MProperty */;
val* var43 /* : MProperty */;
val* var44 /* : Array[MPropDef] */;
val* var_ /* var : Array[MVirtualTypeDef] */;
val* var45 /* : IndexedIterator[nullable Object] */;
val* var_46 /* var : IndexedIterator[MVirtualTypeDef] */;
short int var47 /* : Bool */;
val* var48 /* : nullable Object */;
val* var_p /* var p: MVirtualTypeDef */;
val* var49 /* : nullable MType */;
val* var51 /* : nullable MType */;
val* var_supbound /* var supbound: nullable MType */;
short int var52 /* : Bool */;
short int var53 /* : Bool */;
short int var54 /* : Bool */;
short int var55 /* : Bool */;
short int var57 /* : Bool */;
short int var59 /* : Bool */;
short int var_60 /* var : Bool */;
short int var61 /* : Bool */;
int cltype;
int idtype;
short int var_62 /* var : Bool */;
short int var63 /* : Bool */;
short int var65 /* : Bool */;
short int var66 /* : Bool */;
short int var68 /* : Bool */;
val* var69 /* : NativeArray[String] */;
static val* varonce;
static val* varonce70;
val* var71 /* : String */;
char* var72 /* : CString */;
val* var73 /* : String */;
static val* varonce74;
val* var75 /* : String */;
char* var76 /* : CString */;
val* var77 /* : String */;
static val* varonce78;
val* var79 /* : String */;
char* var80 /* : CString */;
val* var81 /* : String */;
val* var82 /* : MProperty */;
val* var84 /* : MProperty */;
val* var85 /* : String */;
val* var86 /* : MClassDef */;
val* var88 /* : MClassDef */;
val* var89 /* : MClass */;
val* var91 /* : MClass */;
val* var92 /* : String */;
val* var93 /* : String */;
val* var94 /* : MClassDef */;
val* var96 /* : MClassDef */;
val* var97 /* : MClass */;
val* var99 /* : MClass */;
val* var100 /* : MClass */;
val* var102 /* : MClass */;
short int var103 /* : Bool */;
short int var105 /* : Bool */;
short int var107 /* : Bool */;
val* var108 /* : AType */;
val* var110 /* : AType */;
static val* varonce111;
val* var112 /* : String */;
char* var113 /* : CString */;
val* var114 /* : String */;
val* var115 /* : AType */;
val* var117 /* : AType */;
short int var118 /* : Bool */;
short int var119 /* : Bool */;
val* var120 /* : AType */;
val* var122 /* : AType */;
val* var124 /* : NativeArray[String] */;
static val* varonce123;
static val* varonce125;
val* var126 /* : String */;
char* var127 /* : CString */;
val* var128 /* : String */;
static val* varonce129;
val* var130 /* : String */;
char* var131 /* : CString */;
val* var132 /* : String */;
static val* varonce133;
val* var134 /* : String */;
char* var135 /* : CString */;
val* var136 /* : String */;
val* var137 /* : String */;
val* var138 /* : String */;
val* var139 /* : String */;
var_modelbuilder = p0;
{
{ /* Inline modelize_property#APropdef#mpropdef (self) on <self:ATypePropdef> */
var2 = self->attrs[COLOR_nitc__modelize_property__APropdef___mpropdef].val; /* _mpropdef on <self:ATypePropdef> */
var = var2;
RET_LABEL1:(void)0;
}
}
var_mpropdef = var;
if (var_mpropdef == NULL) {
var3 = 1; /* is null */
} else {
var3 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_mpropdef,((val*)NULL)) on <var_mpropdef:nullable MVirtualTypeDef> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_mpropdef,var_other) on <var_mpropdef:nullable MVirtualTypeDef(MVirtualTypeDef)> */
var8 = var_mpropdef == var_other;
var6 = var8;
goto RET_LABEL7;
RET_LABEL7:(void)0;
}
}
var4 = var6;
goto RET_LABEL5;
RET_LABEL5:(void)0;
}
var3 = var4;
}
if (var3){
goto RET_LABEL;
} else {
}
{
{ /* Inline model#MVirtualTypeDef#bound (var_mpropdef) on <var_mpropdef:nullable MVirtualTypeDef(MVirtualTypeDef)> */
var11 = var_mpropdef->attrs[COLOR_nitc__model__MVirtualTypeDef___bound].val; /* _bound on <var_mpropdef:nullable MVirtualTypeDef(MVirtualTypeDef)> */
var9 = var11;
RET_LABEL10:(void)0;
}
}
var_bound = var9;
if (var_bound == NULL) {
var12 = 1; /* is null */
} else {
var12 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_bound,((val*)NULL)) on <var_bound:nullable MType> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_bound,var_other) on <var_bound:nullable MType(MType)> */
var17 = var_bound == var_other;
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
goto RET_LABEL;
} else {
}
{
{ /* Inline parser_nodes#ATypePropdef#n_type (self) on <self:ATypePropdef> */
var20 = self->attrs[COLOR_nitc__parser_nodes__ATypePropdef___n_type].val; /* _n_type on <self:ATypePropdef> */
if (unlikely(var20 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_type");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 1559);
fatal_exit(1);
}
var18 = var20;
RET_LABEL19:(void)0;
}
}
{
nitc__modelize_property___ModelBuilder___check_visibility(var_modelbuilder, var18, var_bound, var_mpropdef); /* Direct call modelize_property#ModelBuilder#check_visibility on <var_modelbuilder:ModelBuilder>*/
}
{
{ /* Inline model#MPropDef#mclassdef (var_mpropdef) on <var_mpropdef:nullable MVirtualTypeDef(MVirtualTypeDef)> */
var23 = var_mpropdef->attrs[COLOR_nitc__model__MPropDef___mclassdef].val; /* _mclassdef on <var_mpropdef:nullable MVirtualTypeDef(MVirtualTypeDef)> */
if (unlikely(var23 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2354);
fatal_exit(1);
}
var21 = var23;
RET_LABEL22:(void)0;
}
}
var_mclassdef = var21;
{
{ /* Inline model#MClassDef#mmodule (var_mclassdef) on <var_mclassdef:MClassDef> */
var26 = var_mclassdef->attrs[COLOR_nitc__model__MClassDef___mmodule].val; /* _mmodule on <var_mclassdef:MClassDef> */
if (unlikely(var26 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 588);
fatal_exit(1);
}
var24 = var26;
RET_LABEL25:(void)0;
}
}
var_mmodule = var24;
{
{ /* Inline model#MClassDef#bound_mtype (var_mclassdef) on <var_mclassdef:MClassDef> */
var29 = var_mclassdef->attrs[COLOR_nitc__model__MClassDef___bound_mtype].val; /* _bound_mtype on <var_mclassdef:MClassDef> */
if (unlikely(var29 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _bound_mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 594);
fatal_exit(1);
}
var27 = var29;
RET_LABEL28:(void)0;
}
}
var_anchor = var27;
{
{ /* Inline parser_nodes#ATypePropdef#n_type (self) on <self:ATypePropdef> */
var32 = self->attrs[COLOR_nitc__parser_nodes__ATypePropdef___n_type].val; /* _n_type on <self:ATypePropdef> */
if (unlikely(var32 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_type");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 1559);
fatal_exit(1);
}
var30 = var32;
RET_LABEL31:(void)0;
}
}
var_ntype = var30;
{
var33 = nitc___nitc__ModelBuilder___resolve_mtype(var_modelbuilder, var_mmodule, var_mclassdef, var_ntype);
}
if (var33 == NULL) {
var34 = 1; /* is null */
} else {
var34 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var33,((val*)NULL)) on <var33:nullable MType> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var33,var_other) on <var33:nullable MType(MType)> */
var39 = var33 == var_other;
var37 = var39;
goto RET_LABEL38;
RET_LABEL38:(void)0;
}
}
var35 = var37;
goto RET_LABEL36;
RET_LABEL36:(void)0;
}
var34 = var35;
}
if (var34){
{
{ /* Inline model#MVirtualTypeDef#bound= (var_mpropdef,((val*)NULL)) on <var_mpropdef:nullable MVirtualTypeDef(MVirtualTypeDef)> */
var_mpropdef->attrs[COLOR_nitc__model__MVirtualTypeDef___bound].val = ((val*)NULL); /* _bound on <var_mpropdef:nullable MVirtualTypeDef(MVirtualTypeDef)> */
RET_LABEL40:(void)0;
}
}
goto RET_LABEL;
} else {
}
{
{ /* Inline model#MPropDef#mproperty (var_mpropdef) on <var_mpropdef:nullable MVirtualTypeDef(MVirtualTypeDef)> */
var43 = var_mpropdef->attrs[COLOR_nitc__model__MPropDef___mproperty].val; /* _mproperty on <var_mpropdef:nullable MVirtualTypeDef(MVirtualTypeDef)> */
if (unlikely(var43 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2357);
fatal_exit(1);
}
var41 = var43;
RET_LABEL42:(void)0;
}
}
{
var44 = nitc___nitc__MProperty___lookup_super_definitions(var41, var_mmodule, var_anchor);
}
var_ = var44;
{
var45 = core___core__AbstractArrayRead___core__abstract_collection__Collection__iterator(var_);
}
var_46 = var45;
for(;;) {
{
var47 = ((short int(*)(val* self))((((long)var_46&3)?class_info[((long)var_46&3)]:var_46->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_46); /* is_ok on <var_46:IndexedIterator[MVirtualTypeDef]>*/
}
if (var47){
} else {
goto BREAK_label;
}
{
var48 = ((val*(*)(val* self))((((long)var_46&3)?class_info[((long)var_46&3)]:var_46->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_46); /* item on <var_46:IndexedIterator[MVirtualTypeDef]>*/
}
var_p = var48;
{
{ /* Inline model#MVirtualTypeDef#bound (var_p) on <var_p:MVirtualTypeDef> */
var51 = var_p->attrs[COLOR_nitc__model__MVirtualTypeDef___bound].val; /* _bound on <var_p:MVirtualTypeDef> */
var49 = var51;
RET_LABEL50:(void)0;
}
}
var_supbound = var49;
if (var_supbound == NULL) {
var54 = 1; /* is null */
} else {
var54 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_supbound,((val*)NULL)) on <var_supbound:nullable MType> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_supbound,var_other) on <var_supbound:nullable MType(MType)> */
var59 = var_supbound == var_other;
var57 = var59;
goto RET_LABEL58;
RET_LABEL58:(void)0;
}
}
var55 = var57;
goto RET_LABEL56;
RET_LABEL56:(void)0;
}
var54 = var55;
}
var_60 = var54;
if (var54){
var53 = var_60;
} else {
/* <var_supbound:nullable MType(MType)> isa MBottomType */
cltype = type_nitc__MBottomType.color;
idtype = type_nitc__MBottomType.id;
if(cltype >= var_supbound->type->table_size) {
var61 = 0;
} else {
var61 = var_supbound->type->type_table[cltype] == idtype;
}
var53 = var61;
}
var_62 = var53;
if (var53){
var52 = var_62;
} else {
{
{ /* Inline model_base#MEntity#is_broken (var_p) on <var_p:MVirtualTypeDef> */
var65 = var_p->attrs[COLOR_nitc__model_base__MEntity___is_broken].s; /* _is_broken on <var_p:MVirtualTypeDef> */
var63 = var65;
RET_LABEL64:(void)0;
}
}
var52 = var63;
}
if (var52){
goto BREAK_label;
} else {
}
{
{ /* Inline model#MVirtualTypeDef#is_fixed (var_p) on <var_p:MVirtualTypeDef> */
var68 = var_p->attrs[COLOR_nitc__model__MVirtualTypeDef___is_fixed].s; /* _is_fixed on <var_p:MVirtualTypeDef> */
var66 = var68;
RET_LABEL67:(void)0;
}
}
if (var66){
if (unlikely(varonce==NULL)) {
var69 = NEW_core__NativeArray(5l, &type_core__NativeArray__core__String);
if (likely(varonce70!=NULL)) {
var71 = varonce70;
} else {
var72 = "Redef Error: virtual type `";
var73 = core__abstract_text___CString___to_s_full(var72, 27l, 27l);
var71 = var73;
varonce70 = var71;
}
((struct instance_core__NativeArray*)var69)->values[0]=var71;
if (likely(varonce74!=NULL)) {
var75 = varonce74;
} else {
var76 = "` is fixed in super-class `";
var77 = core__abstract_text___CString___to_s_full(var76, 27l, 27l);
var75 = var77;
varonce74 = var75;
}
((struct instance_core__NativeArray*)var69)->values[2]=var75;
if (likely(varonce78!=NULL)) {
var79 = varonce78;
} else {
var80 = "`.";
var81 = core__abstract_text___CString___to_s_full(var80, 2l, 2l);
var79 = var81;
varonce78 = var79;
}
((struct instance_core__NativeArray*)var69)->values[4]=var79;
} else {
var69 = varonce;
varonce = NULL;
}
{
{ /* Inline model#MPropDef#mproperty (var_mpropdef) on <var_mpropdef:nullable MVirtualTypeDef(MVirtualTypeDef)> */
var84 = var_mpropdef->attrs[COLOR_nitc__model__MPropDef___mproperty].val; /* _mproperty on <var_mpropdef:nullable MVirtualTypeDef(MVirtualTypeDef)> */
if (unlikely(var84 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2357);
fatal_exit(1);
}
var82 = var84;
RET_LABEL83:(void)0;
}
}
{
var85 = ((val*(*)(val* self))(var82->class->vft[COLOR_core__abstract_text__Object__to_s]))(var82); /* to_s on <var82:MProperty(MVirtualTypeProp)>*/
}
((struct instance_core__NativeArray*)var69)->values[1]=var85;
{
{ /* Inline model#MPropDef#mclassdef (var_p) on <var_p:MVirtualTypeDef> */
var88 = var_p->attrs[COLOR_nitc__model__MPropDef___mclassdef].val; /* _mclassdef on <var_p:MVirtualTypeDef> */
if (unlikely(var88 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2354);
fatal_exit(1);
}
var86 = var88;
RET_LABEL87:(void)0;
}
}
{
{ /* Inline model#MClassDef#mclass (var86) on <var86:MClassDef> */
var91 = var86->attrs[COLOR_nitc__model__MClassDef___mclass].val; /* _mclass on <var86:MClassDef> */
if (unlikely(var91 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 591);
fatal_exit(1);
}
var89 = var91;
RET_LABEL90:(void)0;
}
}
{
var92 = ((val*(*)(val* self))(var89->class->vft[COLOR_core__abstract_text__Object__to_s]))(var89); /* to_s on <var89:MClass>*/
}
((struct instance_core__NativeArray*)var69)->values[3]=var92;
{
var93 = ((val*(*)(val* self))(var69->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var69); /* native_to_s on <var69:NativeArray[String]>*/
}
varonce = var69;
{
nitc___nitc__ModelBuilder___error(var_modelbuilder, self, var93); /* Direct call modelbuilder_base#ModelBuilder#error on <var_modelbuilder:ModelBuilder>*/
}
goto BREAK_label;
} else {
}
{
{ /* Inline model#MPropDef#mclassdef (var_p) on <var_p:MVirtualTypeDef> */
var96 = var_p->attrs[COLOR_nitc__model__MPropDef___mclassdef].val; /* _mclassdef on <var_p:MVirtualTypeDef> */
if (unlikely(var96 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2354);
fatal_exit(1);
}
var94 = var96;
RET_LABEL95:(void)0;
}
}
{
{ /* Inline model#MClassDef#mclass (var94) on <var94:MClassDef> */
var99 = var94->attrs[COLOR_nitc__model__MClassDef___mclass].val; /* _mclass on <var94:MClassDef> */
if (unlikely(var99 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 591);
fatal_exit(1);
}
var97 = var99;
RET_LABEL98:(void)0;
}
}
{
{ /* Inline model#MClassDef#mclass (var_mclassdef) on <var_mclassdef:MClassDef> */
var102 = var_mclassdef->attrs[COLOR_nitc__model__MClassDef___mclass].val; /* _mclass on <var_mclassdef:MClassDef> */
if (unlikely(var102 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 591);
fatal_exit(1);
}
var100 = var102;
RET_LABEL101:(void)0;
}
}
{
{ /* Inline kernel#Object#== (var97,var100) on <var97:MClass> */
var_other = var100;
{
{ /* Inline kernel#Object#is_same_instance (var97,var_other) on <var97:MClass> */
var107 = var97 == var_other;
var105 = var107;
goto RET_LABEL106;
RET_LABEL106:(void)0;
}
}
var103 = var105;
goto RET_LABEL104;
RET_LABEL104:(void)0;
}
}
if (var103){
{
{ /* Inline parser_nodes#ATypePropdef#n_type (self) on <self:ATypePropdef> */
var110 = self->attrs[COLOR_nitc__parser_nodes__ATypePropdef___n_type].val; /* _n_type on <self:ATypePropdef> */
if (unlikely(var110 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_type");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 1559);
fatal_exit(1);
}
var108 = var110;
RET_LABEL109:(void)0;
}
}
if (likely(varonce111!=NULL)) {
var112 = varonce111;
} else {
var113 = "Redef Error: a virtual type cannot be refined.";
var114 = core__abstract_text___CString___to_s_full(var113, 46l, 46l);
var112 = var114;
varonce111 = var112;
}
{
nitc___nitc__ModelBuilder___error(var_modelbuilder, var108, var112); /* Direct call modelbuilder_base#ModelBuilder#error on <var_modelbuilder:ModelBuilder>*/
}
goto BREAK_label;
} else {
}
{
{ /* Inline parser_nodes#ATypePropdef#n_type (self) on <self:ATypePropdef> */
var117 = self->attrs[COLOR_nitc__parser_nodes__ATypePropdef___n_type].val; /* _n_type on <self:ATypePropdef> */
if (unlikely(var117 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_type");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 1559);
fatal_exit(1);
}
var115 = var117;
RET_LABEL116:(void)0;
}
}
{
var118 = nitc___nitc__ModelBuilder___check_subtype(var_modelbuilder, var115, var_mmodule, var_anchor, var_bound, var_supbound);
}
var119 = !var118;
if (var119){
{
{ /* Inline parser_nodes#ATypePropdef#n_type (self) on <self:ATypePropdef> */
var122 = self->attrs[COLOR_nitc__parser_nodes__ATypePropdef___n_type].val; /* _n_type on <self:ATypePropdef> */
if (unlikely(var122 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_type");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 1559);
fatal_exit(1);
}
var120 = var122;
RET_LABEL121:(void)0;
}
}
if (unlikely(varonce123==NULL)) {
var124 = NEW_core__NativeArray(5l, &type_core__NativeArray__core__String);
if (likely(varonce125!=NULL)) {
var126 = varonce125;
} else {
var127 = "Redef Error: expected `";
var128 = core__abstract_text___CString___to_s_full(var127, 23l, 23l);
var126 = var128;
varonce125 = var126;
}
((struct instance_core__NativeArray*)var124)->values[0]=var126;
if (likely(varonce129!=NULL)) {
var130 = varonce129;
} else {
var131 = "` bound type; got `";
var132 = core__abstract_text___CString___to_s_full(var131, 19l, 19l);
var130 = var132;
varonce129 = var130;
}
((struct instance_core__NativeArray*)var124)->values[2]=var130;
if (likely(varonce133!=NULL)) {
var134 = varonce133;
} else {
var135 = "`.";
var136 = core__abstract_text___CString___to_s_full(var135, 2l, 2l);
var134 = var136;
varonce133 = var134;
}
((struct instance_core__NativeArray*)var124)->values[4]=var134;
} else {
var124 = varonce123;
varonce123 = NULL;
}
{
var137 = ((val*(*)(val* self))(var_supbound->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_supbound); /* to_s on <var_supbound:nullable MType(MType)>*/
}
((struct instance_core__NativeArray*)var124)->values[1]=var137;
{
var138 = ((val*(*)(val* self))(var_bound->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_bound); /* to_s on <var_bound:nullable MType(MType)>*/
}
((struct instance_core__NativeArray*)var124)->values[3]=var138;
{
var139 = ((val*(*)(val* self))(var124->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var124); /* native_to_s on <var124:NativeArray[String]>*/
}
varonce123 = var124;
{
nitc___nitc__ModelBuilder___error(var_modelbuilder, var120, var139); /* Direct call modelbuilder_base#ModelBuilder#error on <var_modelbuilder:ModelBuilder>*/
}
goto BREAK_label;
} else {
}
{
((void(*)(val* self))((((long)var_46&3)?class_info[((long)var_46&3)]:var_46->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_46); /* next on <var_46:IndexedIterator[MVirtualTypeDef]>*/
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_46&3)?class_info[((long)var_46&3)]:var_46->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_46); /* finish on <var_46:IndexedIterator[MVirtualTypeDef]>*/
}
RET_LABEL:;
}
