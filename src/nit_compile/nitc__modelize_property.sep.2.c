#include "nitc__modelize_property.sep.0.h"
/* method modelize_property#AMethPropdef#build_property for (self: AMethPropdef, ModelBuilder, MClassDef) */
void nitc__modelize_property___AMethPropdef___APropdef__build_property(val* self, val* p0, val* p1) {
val* var_modelbuilder /* var modelbuilder: ModelBuilder */;
val* var_mclassdef /* var mclassdef: MClassDef */;
val* var /* : nullable TKwinit */;
val* var2 /* : nullable TKwinit */;
val* var_n_kwinit /* var n_kwinit: nullable TKwinit */;
val* var3 /* : nullable TKwnew */;
val* var5 /* : nullable TKwnew */;
val* var_n_kwnew /* var n_kwnew: nullable TKwnew */;
short int var6 /* : Bool */;
short int var7 /* : Bool */;
short int var8 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var10 /* : Bool */;
short int var11 /* : Bool */;
short int var_ /* var : Bool */;
short int var12 /* : Bool */;
short int var13 /* : Bool */;
short int var15 /* : Bool */;
short int var16 /* : Bool */;
short int var_is_init /* var is_init: Bool */;
val* var17 /* : nullable AMethid */;
val* var19 /* : nullable AMethid */;
val* var_amethodid /* var amethodid: nullable AMethid */;
short int var20 /* : Bool */;
short int var21 /* : Bool */;
val* var_other23 /* var other: nullable Object */;
short int var24 /* : Bool */;
short int var26 /* : Bool */;
short int var27 /* : Bool */;
static val* varonce;
val* var28 /* : String */;
char* var29 /* : CString */;
val* var30 /* : String */;
val* var_name /* var name: String */;
val* var_name_node /* var name_node: ANode */;
short int var31 /* : Bool */;
short int var32 /* : Bool */;
short int var34 /* : Bool */;
short int var35 /* : Bool */;
static val* varonce36;
val* var37 /* : String */;
char* var38 /* : CString */;
val* var39 /* : String */;
short int var40 /* : Bool */;
short int var41 /* : Bool */;
short int var43 /* : Bool */;
short int var44 /* : Bool */;
static val* varonce45;
val* var46 /* : String */;
char* var47 /* : CString */;
val* var48 /* : String */;
short int var49 /* : Bool */;
int cltype;
int idtype;
val* var50 /* : TId */;
val* var52 /* : TId */;
val* var53 /* : String */;
val* var54 /* : String */;
val* var55 /* : nullable ASignature */;
val* var57 /* : nullable ASignature */;
val* var58 /* : ANodes[AParam] */;
val* var60 /* : ANodes[AParam] */;
long var61 /* : Int */;
long var_arity /* var arity: Int */;
short int var62 /* : Bool */;
static val* varonce63;
val* var64 /* : String */;
char* var65 /* : CString */;
val* var66 /* : String */;
short int var67 /* : Bool */;
short int var_68 /* var : Bool */;
short int var69 /* : Bool */;
short int var71 /* : Bool */;
static val* varonce72;
val* var73 /* : String */;
char* var74 /* : CString */;
val* var75 /* : String */;
short int var76 /* : Bool */;
static val* varonce77;
val* var78 /* : String */;
char* var79 /* : CString */;
val* var80 /* : String */;
short int var81 /* : Bool */;
short int var_82 /* var : Bool */;
short int var83 /* : Bool */;
short int var85 /* : Bool */;
static val* varonce86;
val* var87 /* : String */;
char* var88 /* : CString */;
val* var89 /* : String */;
short int var90 /* : Bool */;
static val* varonce91;
val* var92 /* : String */;
char* var93 /* : CString */;
val* var94 /* : String */;
short int var95 /* : Bool */;
short int var_96 /* var : Bool */;
short int var97 /* : Bool */;
short int var99 /* : Bool */;
static val* varonce100;
val* var101 /* : String */;
char* var102 /* : CString */;
val* var103 /* : String */;
short int var104 /* : Bool */;
short int var105 /* : Bool */;
short int var_106 /* var : Bool */;
short int var107 /* : Bool */;
short int var109 /* : Bool */;
short int var110 /* : Bool */;
val* var111 /* : nullable ASignature */;
val* var113 /* : nullable ASignature */;
val* var115 /* : NativeArray[String] */;
static val* varonce114;
static val* varonce116;
val* var117 /* : String */;
char* var118 /* : CString */;
val* var119 /* : String */;
static val* varonce120;
val* var121 /* : String */;
char* var122 /* : CString */;
val* var123 /* : String */;
static val* varonce124;
val* var125 /* : String */;
char* var126 /* : CString */;
val* var127 /* : String */;
val* var128 /* : String */;
val* var129 /* : String */;
long var130 /* : Int */;
short int var131 /* : Bool */;
short int var133 /* : Bool */;
int cltype134;
int idtype135;
const char* var_class_name;
short int var136 /* : Bool */;
val* var137 /* : nullable ASignature */;
val* var139 /* : nullable ASignature */;
val* var141 /* : NativeArray[String] */;
static val* varonce140;
static val* varonce142;
val* var143 /* : String */;
char* var144 /* : CString */;
val* var145 /* : String */;
static val* varonce146;
val* var147 /* : String */;
char* var148 /* : CString */;
val* var149 /* : String */;
static val* varonce150;
val* var151 /* : String */;
char* var152 /* : CString */;
val* var153 /* : String */;
static val* varonce154;
val* var155 /* : String */;
char* var156 /* : CString */;
val* var157 /* : String */;
long var158 /* : Int */;
val* var159 /* : String */;
val* var160 /* : String */;
val* var161 /* : String */;
short int var162 /* : Bool */;
short int var_look_like_a_root_init /* var look_like_a_root_init: Bool */;
val* var_mprop /* var mprop: nullable MMethod */;
short int var163 /* : Bool */;
short int var164 /* : Bool */;
short int var_165 /* var : Bool */;
val* var166 /* : nullable TKwredef */;
val* var168 /* : nullable TKwredef */;
short int var169 /* : Bool */;
short int var170 /* : Bool */;
short int var172 /* : Bool */;
short int var173 /* : Bool */;
val* var174 /* : nullable MProperty */;
short int var175 /* : Bool */;
int cltype176;
int idtype177;
const char* var_class_name178;
short int var179 /* : Bool */;
short int var180 /* : Bool */;
short int var181 /* : Bool */;
short int var183 /* : Bool */;
short int var185 /* : Bool */;
short int var_186 /* var : Bool */;
val* var187 /* : nullable MMethod */;
val* var189 /* : nullable MMethod */;
val* var190 /* : nullable AExpr */;
val* var192 /* : nullable AExpr */;
val* var_nb /* var nb: nullable AExpr */;
short int var193 /* : Bool */;
short int var194 /* : Bool */;
short int var195 /* : Bool */;
int cltype196;
int idtype197;
short int var_198 /* var : Bool */;
val* var199 /* : ANodes[AExpr] */;
val* var201 /* : ANodes[AExpr] */;
short int var202 /* : Bool */;
short int var_203 /* var : Bool */;
val* var204 /* : nullable ADoc */;
val* var206 /* : nullable ADoc */;
short int var207 /* : Bool */;
short int var208 /* : Bool */;
short int var210 /* : Bool */;
short int var212 /* : Bool */;
static val* varonce213;
val* var214 /* : String */;
char* var215 /* : CString */;
val* var216 /* : String */;
val* var218 /* : NativeArray[String] */;
static val* varonce217;
static val* varonce219;
val* var220 /* : String */;
char* var221 /* : CString */;
val* var222 /* : String */;
val* var223 /* : String */;
val* var224 /* : String */;
short int var225 /* : Bool */;
short int var226 /* : Bool */;
short int var228 /* : Bool */;
short int var230 /* : Bool */;
val* var231 /* : nullable AVisibility */;
val* var233 /* : nullable AVisibility */;
val* var234 /* : MVisibility */;
val* var_mvisibility /* var mvisibility: MVisibility */;
val* var235 /* : MMethod */;
val* var236 /* : Location */;
val* var238 /* : Location */;
short int var239 /* : Bool */;
short int var_240 /* var : Bool */;
val* var241 /* : nullable MMethod */;
val* var243 /* : nullable MMethod */;
short int var244 /* : Bool */;
short int var245 /* : Bool */;
short int var247 /* : Bool */;
short int var249 /* : Bool */;
short int var253 /* : Bool */;
short int var254 /* : Bool */;
short int var256 /* : Bool */;
short int var257 /* : Bool */;
short int var259 /* : Bool */;
short int var261 /* : Bool */;
val* var262 /* : MClass */;
val* var264 /* : MClass */;
static val* varonce266;
val* var267 /* : String */;
char* var268 /* : CString */;
val* var269 /* : String */;
short int var270 /* : Bool */;
val* var272 /* : nullable TKwredef */;
val* var274 /* : nullable TKwredef */;
short int var275 /* : Bool */;
short int var276 /* : Bool */;
short int var278 /* : Bool */;
short int var280 /* : Bool */;
val* var281 /* : nullable TKwredef */;
val* var283 /* : nullable TKwredef */;
short int var284 /* : Bool */;
int cltype285;
int idtype286;
short int var287 /* : Bool */;
short int var288 /* : Bool */;
short int var289 /* : Bool */;
val* var290 /* : nullable AVisibility */;
val* var292 /* : nullable AVisibility */;
val* var293 /* : Map[MProperty, APropdef] */;
val* var295 /* : Map[MProperty, APropdef] */;
val* var_296 /* var : Map[MProperty, APropdef] */;
val* var297 /* : MapIterator[nullable Object, nullable Object] */;
val* var_298 /* var : MapIterator[MProperty, APropdef] */;
short int var299 /* : Bool */;
val* var300 /* : nullable Object */;
val* var_p /* var p: MProperty */;
val* var301 /* : nullable Object */;
val* var_n /* var n: APropdef */;
short int var302 /* : Bool */;
short int var303 /* : Bool */;
short int var304 /* : Bool */;
short int var306 /* : Bool */;
short int var307 /* : Bool */;
short int var_308 /* var : Bool */;
short int var309 /* : Bool */;
int cltype310;
int idtype311;
short int var_312 /* var : Bool */;
val* var313 /* : String */;
val* var315 /* : String */;
short int var316 /* : Bool */;
val* var317 /* : nullable TKwredef */;
val* var319 /* : nullable TKwredef */;
short int var320 /* : Bool */;
short int var321 /* : Bool */;
val* var324 /* : Map[MProperty, APropdef] */;
val* var326 /* : Map[MProperty, APropdef] */;
val* var327 /* : MMethodDef */;
val* var328 /* : Location */;
val* var330 /* : Location */;
val* var_mpropdef /* var mpropdef: MMethodDef */;
short int var331 /* : Bool */;
int cltype332;
int idtype333;
const struct type* type_struct;
const char* var_class_name334;
short int var336 /* : Bool */;
int cltype337;
int idtype338;
const struct type* type_struct339;
const char* var_class_name340;
val* var341 /* : HashMap[MPropDef, APropdef] */;
val* var343 /* : HashMap[MPropDef, APropdef] */;
short int var344 /* : Bool */;
val* var345 /* : ToolContext */;
val* var347 /* : ToolContext */;
val* var349 /* : NativeArray[String] */;
static val* varonce348;
static val* varonce350;
val* var351 /* : String */;
char* var352 /* : CString */;
val* var353 /* : String */;
val* var354 /* : String */;
val* var355 /* : String */;
val* var356 /* : String */;
val* var357 /* : ToolContext */;
val* var359 /* : ToolContext */;
val* var361 /* : NativeArray[String] */;
static val* varonce360;
static val* varonce362;
val* var363 /* : String */;
char* var364 /* : CString */;
val* var365 /* : String */;
val* var366 /* : String */;
val* var367 /* : String */;
val* var368 /* : String */;
var_modelbuilder = p0;
var_mclassdef = p1;
{
{ /* Inline parser_nodes#AMethPropdef#n_kwinit (self) on <self:AMethPropdef> */
var2 = self->attrs[COLOR_nitc__parser_nodes__AMethPropdef___n_kwinit].val; /* _n_kwinit on <self:AMethPropdef> */
var = var2;
RET_LABEL1:(void)0;
}
}
var_n_kwinit = var;
{
{ /* Inline parser_nodes#AMethPropdef#n_kwnew (self) on <self:AMethPropdef> */
var5 = self->attrs[COLOR_nitc__parser_nodes__AMethPropdef___n_kwnew].val; /* _n_kwnew on <self:AMethPropdef> */
var3 = var5;
RET_LABEL4:(void)0;
}
}
var_n_kwnew = var3;
if (var_n_kwinit == NULL) {
var7 = 0; /* is null */
} else {
var7 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_n_kwinit,((val*)NULL)) on <var_n_kwinit:nullable TKwinit> */
var_other = ((val*)NULL);
{
var10 = ((short int(*)(val* self, val* p0))(var_n_kwinit->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_n_kwinit, var_other); /* == on <var_n_kwinit:nullable TKwinit(TKwinit)>*/
}
var11 = !var10;
var8 = var11;
goto RET_LABEL9;
RET_LABEL9:(void)0;
}
var7 = var8;
}
var_ = var7;
if (var7){
var6 = var_;
} else {
if (var_n_kwnew == NULL) {
var12 = 0; /* is null */
} else {
var12 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_n_kwnew,((val*)NULL)) on <var_n_kwnew:nullable TKwnew> */
var_other = ((val*)NULL);
{
var15 = ((short int(*)(val* self, val* p0))(var_n_kwnew->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_n_kwnew, var_other); /* == on <var_n_kwnew:nullable TKwnew(TKwnew)>*/
}
var16 = !var15;
var13 = var16;
goto RET_LABEL14;
RET_LABEL14:(void)0;
}
var12 = var13;
}
var6 = var12;
}
var_is_init = var6;
{
{ /* Inline parser_nodes#AMethPropdef#n_methid (self) on <self:AMethPropdef> */
var19 = self->attrs[COLOR_nitc__parser_nodes__AMethPropdef___n_methid].val; /* _n_methid on <self:AMethPropdef> */
var17 = var19;
RET_LABEL18:(void)0;
}
}
var_amethodid = var17;
if (var_amethodid == NULL) {
var20 = 1; /* is null */
} else {
var20 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_amethodid,((val*)NULL)) on <var_amethodid:nullable AMethid> */
var_other23 = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_amethodid,var_other23) on <var_amethodid:nullable AMethid(AMethid)> */
var26 = var_amethodid == var_other23;
var24 = var26;
goto RET_LABEL25;
RET_LABEL25:(void)0;
}
}
var21 = var24;
goto RET_LABEL22;
RET_LABEL22:(void)0;
}
var20 = var21;
}
if (var20){
var27 = !var_is_init;
if (var27){
if (likely(varonce!=NULL)) {
var28 = varonce;
} else {
var29 = "main";
var30 = core__abstract_text___CString___to_s_full(var29, 4l, 4l);
var28 = var30;
varonce = var28;
}
var_name = var28;
var_name_node = self;
} else {
if (var_n_kwinit == NULL) {
var31 = 0; /* is null */
} else {
var31 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_n_kwinit,((val*)NULL)) on <var_n_kwinit:nullable TKwinit> */
var_other = ((val*)NULL);
{
var34 = ((short int(*)(val* self, val* p0))(var_n_kwinit->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_n_kwinit, var_other); /* == on <var_n_kwinit:nullable TKwinit(TKwinit)>*/
}
var35 = !var34;
var32 = var35;
goto RET_LABEL33;
RET_LABEL33:(void)0;
}
var31 = var32;
}
if (var31){
if (likely(varonce36!=NULL)) {
var37 = varonce36;
} else {
var38 = "init";
var39 = core__abstract_text___CString___to_s_full(var38, 4l, 4l);
var37 = var39;
varonce36 = var37;
}
var_name = var37;
var_name_node = var_n_kwinit;
} else {
if (var_n_kwnew == NULL) {
var40 = 0; /* is null */
} else {
var40 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_n_kwnew,((val*)NULL)) on <var_n_kwnew:nullable TKwnew> */
var_other = ((val*)NULL);
{
var43 = ((short int(*)(val* self, val* p0))(var_n_kwnew->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_n_kwnew, var_other); /* == on <var_n_kwnew:nullable TKwnew(TKwnew)>*/
}
var44 = !var43;
var41 = var44;
goto RET_LABEL42;
RET_LABEL42:(void)0;
}
var40 = var41;
}
if (var40){
if (likely(varonce45!=NULL)) {
var46 = varonce45;
} else {
var47 = "new";
var48 = core__abstract_text___CString___to_s_full(var47, 3l, 3l);
var46 = var48;
varonce45 = var46;
}
var_name = var46;
var_name_node = var_n_kwnew;
} else {
PRINT_ERROR("Runtime error: %s", "Aborted");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelize_property, 788);
fatal_exit(1);
}
}
}
} else {
/* <var_amethodid:nullable AMethid(AMethid)> isa AIdMethid */
cltype = type_nitc__AIdMethid.color;
idtype = type_nitc__AIdMethid.id;
if(cltype >= var_amethodid->type->table_size) {
var49 = 0;
} else {
var49 = var_amethodid->type->type_table[cltype] == idtype;
}
if (var49){
{
{ /* Inline parser_nodes#AIdMethid#n_id (var_amethodid) on <var_amethodid:nullable AMethid(AIdMethid)> */
var52 = var_amethodid->attrs[COLOR_nitc__parser_nodes__AIdMethid___n_id].val; /* _n_id on <var_amethodid:nullable AMethid(AIdMethid)> */
if (unlikely(var52 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_id");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 1573);
fatal_exit(1);
}
var50 = var52;
RET_LABEL51:(void)0;
}
}
{
var53 = nitc__lexer_work___Token___text(var50);
}
var_name = var53;
var_name_node = var_amethodid;
} else {
{
var54 = nitc__parser_work___Prod___collect_text(var_amethodid);
}
var_name = var54;
var_name_node = var_amethodid;
{
{ /* Inline parser_nodes#AMethPropdef#n_signature (self) on <self:AMethPropdef> */
var57 = self->attrs[COLOR_nitc__parser_nodes__AMethPropdef___n_signature].val; /* _n_signature on <self:AMethPropdef> */
var55 = var57;
RET_LABEL56:(void)0;
}
}
if (var55 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelize_property, 798);
fatal_exit(1);
} else {
{ /* Inline parser_nodes#ASignature#n_params (var55) on <var55:nullable ASignature> */
if (unlikely(var55 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 1746);
fatal_exit(1);
}
var60 = var55->attrs[COLOR_nitc__parser_nodes__ASignature___n_params].val; /* _n_params on <var55:nullable ASignature> */
if (unlikely(var60 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_params");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 1746);
fatal_exit(1);
}
var58 = var60;
RET_LABEL59:(void)0;
}
}
{
var61 = nitc___nitc__ANodes___core__abstract_collection__Collection__length(var58);
}
var_arity = var61;
if (likely(varonce63!=NULL)) {
var64 = varonce63;
} else {
var65 = "+";
var66 = core__abstract_text___CString___to_s_full(var65, 1l, 1l);
var64 = var66;
varonce63 = var64;
}
{
var67 = ((short int(*)(val* self, val* p0))(var_name->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_name, var64); /* == on <var_name:String>*/
}
var_68 = var67;
if (var67){
{
{ /* Inline kernel#Int#== (var_arity,0l) on <var_arity:Int> */
var71 = var_arity == 0l;
var69 = var71;
goto RET_LABEL70;
RET_LABEL70:(void)0;
}
}
var62 = var69;
} else {
var62 = var_68;
}
if (var62){
if (likely(varonce72!=NULL)) {
var73 = varonce72;
} else {
var74 = "unary +";
var75 = core__abstract_text___CString___to_s_full(var74, 7l, 7l);
var73 = var75;
varonce72 = var73;
}
var_name = var73;
} else {
if (likely(varonce77!=NULL)) {
var78 = varonce77;
} else {
var79 = "-";
var80 = core__abstract_text___CString___to_s_full(var79, 1l, 1l);
var78 = var80;
varonce77 = var78;
}
{
var81 = ((short int(*)(val* self, val* p0))(var_name->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_name, var78); /* == on <var_name:String>*/
}
var_82 = var81;
if (var81){
{
{ /* Inline kernel#Int#== (var_arity,0l) on <var_arity:Int> */
var85 = var_arity == 0l;
var83 = var85;
goto RET_LABEL84;
RET_LABEL84:(void)0;
}
}
var76 = var83;
} else {
var76 = var_82;
}
if (var76){
if (likely(varonce86!=NULL)) {
var87 = varonce86;
} else {
var88 = "unary -";
var89 = core__abstract_text___CString___to_s_full(var88, 7l, 7l);
var87 = var89;
varonce86 = var87;
}
var_name = var87;
} else {
if (likely(varonce91!=NULL)) {
var92 = varonce91;
} else {
var93 = "~";
var94 = core__abstract_text___CString___to_s_full(var93, 1l, 1l);
var92 = var94;
varonce91 = var92;
}
{
var95 = ((short int(*)(val* self, val* p0))(var_name->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_name, var92); /* == on <var_name:String>*/
}
var_96 = var95;
if (var95){
{
{ /* Inline kernel#Int#== (var_arity,0l) on <var_arity:Int> */
var99 = var_arity == 0l;
var97 = var99;
goto RET_LABEL98;
RET_LABEL98:(void)0;
}
}
var90 = var97;
} else {
var90 = var_96;
}
if (var90){
if (likely(varonce100!=NULL)) {
var101 = varonce100;
} else {
var102 = "unary ~";
var103 = core__abstract_text___CString___to_s_full(var102, 7l, 7l);
var101 = var103;
varonce100 = var101;
}
var_name = var101;
} else {
{
var105 = ((short int(*)(val* self))(var_amethodid->class->vft[COLOR_nitc__modelize_property__AMethid__is_binary]))(var_amethodid); /* is_binary on <var_amethodid:nullable AMethid(AMethid)>*/
}
var_106 = var105;
if (var105){
{
{ /* Inline kernel#Int#!= (var_arity,1l) on <var_arity:Int> */
var109 = var_arity == 1l;
var110 = !var109;
var107 = var110;
goto RET_LABEL108;
RET_LABEL108:(void)0;
}
}
var104 = var107;
} else {
var104 = var_106;
}
if (var104){
{
{ /* Inline parser_nodes#AMethPropdef#n_signature (self) on <self:AMethPropdef> */
var113 = self->attrs[COLOR_nitc__parser_nodes__AMethPropdef___n_signature].val; /* _n_signature on <self:AMethPropdef> */
var111 = var113;
RET_LABEL112:(void)0;
}
}
if (unlikely(varonce114==NULL)) {
var115 = NEW_core__NativeArray(5l, &type_core__NativeArray__core__String);
if (likely(varonce116!=NULL)) {
var117 = varonce116;
} else {
var118 = "Syntax Error: binary operator `";
var119 = core__abstract_text___CString___to_s_full(var118, 31l, 31l);
var117 = var119;
varonce116 = var117;
}
((struct instance_core__NativeArray*)var115)->values[0]=var117;
if (likely(varonce120!=NULL)) {
var121 = varonce120;
} else {
var122 = "` requires exactly one parameter; got ";
var123 = core__abstract_text___CString___to_s_full(var122, 38l, 38l);
var121 = var123;
varonce120 = var121;
}
((struct instance_core__NativeArray*)var115)->values[2]=var121;
if (likely(varonce124!=NULL)) {
var125 = varonce124;
} else {
var126 = ".";
var127 = core__abstract_text___CString___to_s_full(var126, 1l, 1l);
var125 = var127;
varonce124 = var125;
}
((struct instance_core__NativeArray*)var115)->values[4]=var125;
} else {
var115 = varonce114;
varonce114 = NULL;
}
((struct instance_core__NativeArray*)var115)->values[1]=var_name;
var128 = core__flat___Int___core__abstract_text__Object__to_s(var_arity);
((struct instance_core__NativeArray*)var115)->values[3]=var128;
{
var129 = ((val*(*)(val* self))(var115->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var115); /* native_to_s on <var115:NativeArray[String]>*/
}
varonce114 = var115;
{
nitc___nitc__ModelBuilder___error(var_modelbuilder, var111, var129); /* Direct call modelbuilder_base#ModelBuilder#error on <var_modelbuilder:ModelBuilder>*/
}
} else {
{
var130 = ((long(*)(val* self))(var_amethodid->class->vft[COLOR_nitc__modelize_property__AMethid__min_arity]))(var_amethodid); /* min_arity on <var_amethodid:nullable AMethid(AMethid)>*/
}
{
{ /* Inline kernel#Int#> (var130,var_arity) on <var130:Int> */
/* Covariant cast for argument 0 (i) <var_arity:Int> isa OTHER */
/* <var_arity:Int> isa OTHER */
var133 = 1; /* easy <var_arity:Int> isa OTHER*/
if (unlikely(!var133)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 727);
fatal_exit(1);
}
var136 = var130 > var_arity;
var131 = var136;
goto RET_LABEL132;
RET_LABEL132:(void)0;
}
}
if (var131){
{
{ /* Inline parser_nodes#AMethPropdef#n_signature (self) on <self:AMethPropdef> */
var139 = self->attrs[COLOR_nitc__parser_nodes__AMethPropdef___n_signature].val; /* _n_signature on <self:AMethPropdef> */
var137 = var139;
RET_LABEL138:(void)0;
}
}
if (unlikely(varonce140==NULL)) {
var141 = NEW_core__NativeArray(7l, &type_core__NativeArray__core__String);
if (likely(varonce142!=NULL)) {
var143 = varonce142;
} else {
var144 = "Syntax Error: `";
var145 = core__abstract_text___CString___to_s_full(var144, 15l, 15l);
var143 = var145;
varonce142 = var143;
}
((struct instance_core__NativeArray*)var141)->values[0]=var143;
if (likely(varonce146!=NULL)) {
var147 = varonce146;
} else {
var148 = "` requires at least ";
var149 = core__abstract_text___CString___to_s_full(var148, 20l, 20l);
var147 = var149;
varonce146 = var147;
}
((struct instance_core__NativeArray*)var141)->values[2]=var147;
if (likely(varonce150!=NULL)) {
var151 = varonce150;
} else {
var152 = " parameter(s); got ";
var153 = core__abstract_text___CString___to_s_full(var152, 19l, 19l);
var151 = var153;
varonce150 = var151;
}
((struct instance_core__NativeArray*)var141)->values[4]=var151;
if (likely(varonce154!=NULL)) {
var155 = varonce154;
} else {
var156 = ".";
var157 = core__abstract_text___CString___to_s_full(var156, 1l, 1l);
var155 = var157;
varonce154 = var155;
}
((struct instance_core__NativeArray*)var141)->values[6]=var155;
} else {
var141 = varonce140;
varonce140 = NULL;
}
((struct instance_core__NativeArray*)var141)->values[1]=var_name;
{
var158 = ((long(*)(val* self))(var_amethodid->class->vft[COLOR_nitc__modelize_property__AMethid__min_arity]))(var_amethodid); /* min_arity on <var_amethodid:nullable AMethid(AMethid)>*/
}
var159 = core__flat___Int___core__abstract_text__Object__to_s(var158);
((struct instance_core__NativeArray*)var141)->values[3]=var159;
var160 = core__flat___Int___core__abstract_text__Object__to_s(var_arity);
((struct instance_core__NativeArray*)var141)->values[5]=var160;
{
var161 = ((val*(*)(val* self))(var141->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var141); /* native_to_s on <var141:NativeArray[String]>*/
}
varonce140 = var141;
{
nitc___nitc__ModelBuilder___error(var_modelbuilder, var137, var161); /* Direct call modelbuilder_base#ModelBuilder#error on <var_modelbuilder:ModelBuilder>*/
}
} else {
}
}
}
}
}
}
}
{
var162 = nitc__modelize_property___AMethPropdef___look_like_a_root_init(self, var_modelbuilder, var_mclassdef);
}
var_look_like_a_root_init = var162;
var_mprop = ((val*)NULL);
var164 = !var_is_init;
var_165 = var164;
if (var164){
var163 = var_165;
} else {
{
{ /* Inline parser_nodes#ADefinition#n_kwredef (self) on <self:AMethPropdef> */
var168 = self->attrs[COLOR_nitc__parser_nodes__ADefinition___n_kwredef].val; /* _n_kwredef on <self:AMethPropdef> */
var166 = var168;
RET_LABEL167:(void)0;
}
}
if (var166 == NULL) {
var169 = 0; /* is null */
} else {
var169 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var166,((val*)NULL)) on <var166:nullable TKwredef> */
var_other = ((val*)NULL);
{
var172 = ((short int(*)(val* self, val* p0))(var166->class->vft[COLOR_core__kernel__Object___61d_61d]))(var166, var_other); /* == on <var166:nullable TKwredef(TKwredef)>*/
}
var173 = !var172;
var170 = var173;
goto RET_LABEL171;
RET_LABEL171:(void)0;
}
var169 = var170;
}
var163 = var169;
}
if (var163){
{
var174 = nitc___nitc__ModelBuilder___try_get_mproperty_by_name(var_modelbuilder, var_name_node, var_mclassdef, var_name);
}
/* <var174:nullable MProperty> isa nullable MMethod */
cltype176 = type_nullable__nitc__MMethod.color;
idtype177 = type_nullable__nitc__MMethod.id;
if(var174 == NULL) {
var175 = 1;
} else {
if(cltype176 >= var174->type->table_size) {
var175 = 0;
} else {
var175 = var174->type->type_table[cltype176] == idtype177;
}
}
if (unlikely(!var175)) {
var_class_name178 = var174 == NULL ? "null" : var174->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "nullable MMethod", var_class_name178);
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelize_property, 816);
fatal_exit(1);
}
var_mprop = var174;
} else {
}
if (var_mprop == NULL) {
var180 = 1; /* is null */
} else {
var180 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_mprop,((val*)NULL)) on <var_mprop:nullable MMethod> */
var_other23 = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_mprop,var_other23) on <var_mprop:nullable MMethod(MMethod)> */
var185 = var_mprop == var_other23;
var183 = var185;
goto RET_LABEL184;
RET_LABEL184:(void)0;
}
}
var181 = var183;
goto RET_LABEL182;
RET_LABEL182:(void)0;
}
var180 = var181;
}
var_186 = var180;
if (var180){
var179 = var_look_like_a_root_init;
} else {
var179 = var_186;
}
if (var179){
{
{ /* Inline modelize_property#ModelBuilder#the_root_init_mmethod (var_modelbuilder) on <var_modelbuilder:ModelBuilder> */
var189 = var_modelbuilder->attrs[COLOR_nitc__modelize_property__ModelBuilder___the_root_init_mmethod].val; /* _the_root_init_mmethod on <var_modelbuilder:ModelBuilder> */
var187 = var189;
RET_LABEL188:(void)0;
}
}
var_mprop = var187;
{
{ /* Inline parser_nodes#AMethPropdef#n_block (self) on <self:AMethPropdef> */
var192 = self->attrs[COLOR_nitc__parser_nodes__AMethPropdef___n_block].val; /* _n_block on <self:AMethPropdef> */
var190 = var192;
RET_LABEL191:(void)0;
}
}
var_nb = var190;
/* <var_nb:nullable AExpr> isa ABlockExpr */
cltype196 = type_nitc__ABlockExpr.color;
idtype197 = type_nitc__ABlockExpr.id;
if(var_nb == NULL) {
var195 = 0;
} else {
if(cltype196 >= var_nb->type->table_size) {
var195 = 0;
} else {
var195 = var_nb->type->type_table[cltype196] == idtype197;
}
}
var_198 = var195;
if (var195){
{
{ /* Inline parser_nodes#ABlockExpr#n_expr (var_nb) on <var_nb:nullable AExpr(ABlockExpr)> */
var201 = var_nb->attrs[COLOR_nitc__parser_nodes__ABlockExpr___n_expr].val; /* _n_expr on <var_nb:nullable AExpr(ABlockExpr)> */
if (unlikely(var201 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_expr");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 1811);
fatal_exit(1);
}
var199 = var201;
RET_LABEL200:(void)0;
}
}
{
var202 = nitc___nitc__ANodes___core__abstract_collection__Collection__is_empty(var199);
}
var194 = var202;
} else {
var194 = var_198;
}
var_203 = var194;
if (var194){
{
{ /* Inline parser_nodes#ADefinition#n_doc (self) on <self:AMethPropdef> */
var206 = self->attrs[COLOR_nitc__parser_nodes__ADefinition___n_doc].val; /* _n_doc on <self:AMethPropdef> */
var204 = var206;
RET_LABEL205:(void)0;
}
}
if (var204 == NULL) {
var207 = 1; /* is null */
} else {
var207 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var204,((val*)NULL)) on <var204:nullable ADoc> */
var_other23 = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var204,var_other23) on <var204:nullable ADoc(ADoc)> */
var212 = var204 == var_other23;
var210 = var212;
goto RET_LABEL211;
RET_LABEL211:(void)0;
}
}
var208 = var210;
goto RET_LABEL209;
RET_LABEL209:(void)0;
}
var207 = var208;
}
var193 = var207;
} else {
var193 = var_203;
}
if (var193){
if (likely(varonce213!=NULL)) {
var214 = varonce213;
} else {
var215 = "useless-init";
var216 = core__abstract_text___CString___to_s_full(var215, 12l, 12l);
var214 = var216;
varonce213 = var214;
}
if (unlikely(varonce217==NULL)) {
var218 = NEW_core__NativeArray(2l, &type_core__NativeArray__core__String);
if (likely(varonce219!=NULL)) {
var220 = varonce219;
} else {
var221 = "Warning: useless empty init in ";
var222 = core__abstract_text___CString___to_s_full(var221, 31l, 31l);
var220 = var222;
varonce219 = var220;
}
((struct instance_core__NativeArray*)var218)->values[0]=var220;
} else {
var218 = varonce217;
varonce217 = NULL;
}
{
var223 = ((val*(*)(val* self))(var_mclassdef->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_mclassdef); /* to_s on <var_mclassdef:MClassDef>*/
}
((struct instance_core__NativeArray*)var218)->values[1]=var223;
{
var224 = ((val*(*)(val* self))(var218->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var218); /* native_to_s on <var218:NativeArray[String]>*/
}
varonce217 = var218;
{
nitc___nitc__ModelBuilder___advice(var_modelbuilder, self, var214, var224); /* Direct call modelbuilder_base#ModelBuilder#advice on <var_modelbuilder:ModelBuilder>*/
}
} else {
}
} else {
}
if (var_mprop == NULL) {
var225 = 1; /* is null */
} else {
var225 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_mprop,((val*)NULL)) on <var_mprop:nullable MMethod> */
var_other23 = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_mprop,var_other23) on <var_mprop:nullable MMethod(MMethod)> */
var230 = var_mprop == var_other23;
var228 = var230;
goto RET_LABEL229;
RET_LABEL229:(void)0;
}
}
var226 = var228;
goto RET_LABEL227;
RET_LABEL227:(void)0;
}
var225 = var226;
}
if (var225){
{
{ /* Inline parser_nodes#ADefinition#n_visibility (self) on <self:AMethPropdef> */
var233 = self->attrs[COLOR_nitc__parser_nodes__ADefinition___n_visibility].val; /* _n_visibility on <self:AMethPropdef> */
var231 = var233;
RET_LABEL232:(void)0;
}
}
{
var234 = nitc__modelize_property___APropdef___new_property_visibility(self, var_modelbuilder, var_mclassdef, var231);
}
var_mvisibility = var234;
var235 = NEW_nitc__MMethod(&type_nitc__MMethod);
{
{ /* Inline parser_nodes#ANode#location (self) on <self:AMethPropdef> */
var238 = self->attrs[COLOR_nitc__parser_nodes__ANode___location].val; /* _location on <self:AMethPropdef> */
if (unlikely(var238 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _location");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 25);
fatal_exit(1);
}
var236 = var238;
RET_LABEL237:(void)0;
}
}
{
((void(*)(val* self, val* p0))(var235->class->vft[COLOR_nitc__model__MProperty__intro_mclassdef_61d]))(var235, var_mclassdef); /* intro_mclassdef= on <var235:MMethod>*/
}
{
((void(*)(val* self, val* p0))(var235->class->vft[COLOR_nitc__model__MProperty__name_61d]))(var235, var_name); /* name= on <var235:MMethod>*/
}
{
((void(*)(val* self, val* p0))(var235->class->vft[COLOR_nitc__model__MProperty__location_61d]))(var235, var236); /* location= on <var235:MMethod>*/
}
{
((void(*)(val* self, val* p0))(var235->class->vft[COLOR_nitc__model__MProperty__visibility_61d]))(var235, var_mvisibility); /* visibility= on <var235:MMethod>*/
}
{
((void(*)(val* self))(var235->class->vft[COLOR_core__kernel__Object__init]))(var235); /* init on <var235:MMethod>*/
}
var_mprop = var235;
var_240 = var_look_like_a_root_init;
if (var_look_like_a_root_init){
{
{ /* Inline modelize_property#ModelBuilder#the_root_init_mmethod (var_modelbuilder) on <var_modelbuilder:ModelBuilder> */
var243 = var_modelbuilder->attrs[COLOR_nitc__modelize_property__ModelBuilder___the_root_init_mmethod].val; /* _the_root_init_mmethod on <var_modelbuilder:ModelBuilder> */
var241 = var243;
RET_LABEL242:(void)0;
}
}
if (var241 == NULL) {
var244 = 1; /* is null */
} else {
var244 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var241,((val*)NULL)) on <var241:nullable MMethod> */
var_other23 = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var241,var_other23) on <var241:nullable MMethod(MMethod)> */
var249 = var241 == var_other23;
var247 = var249;
goto RET_LABEL248;
RET_LABEL248:(void)0;
}
}
var245 = var247;
goto RET_LABEL246;
RET_LABEL246:(void)0;
}
var244 = var245;
}
var239 = var244;
} else {
var239 = var_240;
}
if (var239){
{
{ /* Inline modelize_property#ModelBuilder#the_root_init_mmethod= (var_modelbuilder,var_mprop) on <var_modelbuilder:ModelBuilder> */
var_modelbuilder->attrs[COLOR_nitc__modelize_property__ModelBuilder___the_root_init_mmethod].val = var_mprop; /* _the_root_init_mmethod on <var_modelbuilder:ModelBuilder> */
RET_LABEL250:(void)0;
}
}
{
{ /* Inline model#MMethod#is_root_init= (var_mprop,1) on <var_mprop:nullable MMethod(MMethod)> */
var_mprop->attrs[COLOR_nitc__model__MMethod___is_root_init].s = 1; /* _is_root_init on <var_mprop:nullable MMethod(MMethod)> */
RET_LABEL251:(void)0;
}
}
} else {
}
{
{ /* Inline model#MMethod#is_init= (var_mprop,var_is_init) on <var_mprop:nullable MMethod(MMethod)> */
var_mprop->attrs[COLOR_nitc__model__MMethod___is_init].s = var_is_init; /* _is_init on <var_mprop:nullable MMethod(MMethod)> */
RET_LABEL252:(void)0;
}
}
if (var_n_kwnew == NULL) {
var253 = 0; /* is null */
} else {
var253 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_n_kwnew,((val*)NULL)) on <var_n_kwnew:nullable TKwnew> */
var_other = ((val*)NULL);
{
var256 = ((short int(*)(val* self, val* p0))(var_n_kwnew->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_n_kwnew, var_other); /* == on <var_n_kwnew:nullable TKwnew(TKwnew)>*/
}
var257 = !var256;
var254 = var257;
goto RET_LABEL255;
RET_LABEL255:(void)0;
}
var253 = var254;
}
{
{ /* Inline model#MMethod#is_new= (var_mprop,var253) on <var_mprop:nullable MMethod(MMethod)> */
var_mprop->attrs[COLOR_nitc__model__MMethod___is_new].s = var253; /* _is_new on <var_mprop:nullable MMethod(MMethod)> */
RET_LABEL258:(void)0;
}
}
{
{ /* Inline model#MMethod#is_new (var_mprop) on <var_mprop:nullable MMethod(MMethod)> */
var261 = var_mprop->attrs[COLOR_nitc__model__MMethod___is_new].s; /* _is_new on <var_mprop:nullable MMethod(MMethod)> */
var259 = var261;
RET_LABEL260:(void)0;
}
}
if (var259){
{
{ /* Inline model#MClassDef#mclass (var_mclassdef) on <var_mclassdef:MClassDef> */
var264 = var_mclassdef->attrs[COLOR_nitc__model__MClassDef___mclass].val; /* _mclass on <var_mclassdef:MClassDef> */
if (unlikely(var264 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 591);
fatal_exit(1);
}
var262 = var264;
RET_LABEL263:(void)0;
}
}
{
{ /* Inline model#MClass#has_new_factory= (var262,1) on <var262:MClass> */
var262->attrs[COLOR_nitc__model__MClass___has_new_factory].s = 1; /* _has_new_factory on <var262:MClass> */
RET_LABEL265:(void)0;
}
}
} else {
}
if (likely(varonce266!=NULL)) {
var267 = varonce266;
} else {
var268 = "sys";
var269 = core__abstract_text___CString___to_s_full(var268, 3l, 3l);
var267 = var269;
varonce266 = var267;
}
{
var270 = ((short int(*)(val* self, val* p0))(var_name->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_name, var267); /* == on <var_name:String>*/
}
if (var270){
{
{ /* Inline model#MMethod#is_toplevel= (var_mprop,1) on <var_mprop:nullable MMethod(MMethod)> */
var_mprop->attrs[COLOR_nitc__model__MMethod___is_toplevel].s = 1; /* _is_toplevel on <var_mprop:nullable MMethod(MMethod)> */
RET_LABEL271:(void)0;
}
}
} else {
}
{
{ /* Inline parser_nodes#ADefinition#n_kwredef (self) on <self:AMethPropdef> */
var274 = self->attrs[COLOR_nitc__parser_nodes__ADefinition___n_kwredef].val; /* _n_kwredef on <self:AMethPropdef> */
var272 = var274;
RET_LABEL273:(void)0;
}
}
{
var275 = nitc__modelize_property___APropdef___check_redef_keyword(self, var_modelbuilder, var_mclassdef, var272, 0, var_mprop);
}
var276 = !var275;
if (var276){
{
{ /* Inline model_base#MEntity#is_broken= (var_mprop,1) on <var_mprop:nullable MMethod(MMethod)> */
var_mprop->attrs[COLOR_nitc__model_base__MEntity___is_broken].s = 1; /* _is_broken on <var_mprop:nullable MMethod(MMethod)> */
RET_LABEL277:(void)0;
}
}
goto RET_LABEL;
} else {
}
} else {
{
{ /* Inline model_base#MEntity#is_broken (var_mprop) on <var_mprop:nullable MMethod(MMethod)> */
var280 = var_mprop->attrs[COLOR_nitc__model_base__MEntity___is_broken].s; /* _is_broken on <var_mprop:nullable MMethod(MMethod)> */
var278 = var280;
RET_LABEL279:(void)0;
}
}
if (var278){
goto RET_LABEL;
} else {
}
{
{ /* Inline parser_nodes#ADefinition#n_kwredef (self) on <self:AMethPropdef> */
var283 = self->attrs[COLOR_nitc__parser_nodes__ADefinition___n_kwredef].val; /* _n_kwredef on <self:AMethPropdef> */
var281 = var283;
RET_LABEL282:(void)0;
}
}
/* <self:AMethPropdef> isa AMainMethPropdef */
cltype285 = type_nitc__AMainMethPropdef.color;
idtype286 = type_nitc__AMainMethPropdef.id;
if(cltype285 >= self->type->table_size) {
var284 = 0;
} else {
var284 = self->type->type_table[cltype285] == idtype286;
}
var287 = !var284;
{
var288 = nitc__modelize_property___APropdef___check_redef_keyword(self, var_modelbuilder, var_mclassdef, var281, var287, var_mprop);
}
var289 = !var288;
if (var289){
goto RET_LABEL;
} else {
}
{
{ /* Inline parser_nodes#ADefinition#n_visibility (self) on <self:AMethPropdef> */
var292 = self->attrs[COLOR_nitc__parser_nodes__ADefinition___n_visibility].val; /* _n_visibility on <self:AMethPropdef> */
var290 = var292;
RET_LABEL291:(void)0;
}
}
{
nitc__modelize_property___APropdef___check_redef_property_visibility(self, var_modelbuilder, var290, var_mprop); /* Direct call modelize_property#APropdef#check_redef_property_visibility on <self:AMethPropdef>*/
}
}
if (var_is_init){
{
{ /* Inline modelize_property#MClassDef#mprop2npropdef (var_mclassdef) on <var_mclassdef:MClassDef> */
var295 = var_mclassdef->attrs[COLOR_nitc__modelize_property__MClassDef___mprop2npropdef].val; /* _mprop2npropdef on <var_mclassdef:MClassDef> */
if (unlikely(var295 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mprop2npropdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelize_property, 504);
fatal_exit(1);
}
var293 = var295;
RET_LABEL294:(void)0;
}
}
var_296 = var293;
{
var297 = ((val*(*)(val* self))((((long)var_296&3)?class_info[((long)var_296&3)]:var_296->class)->vft[COLOR_core__abstract_collection__MapRead__iterator]))(var_296); /* iterator on <var_296:Map[MProperty, APropdef]>*/
}
var_298 = var297;
for(;;) {
{
var299 = ((short int(*)(val* self))((((long)var_298&3)?class_info[((long)var_298&3)]:var_298->class)->vft[COLOR_core__abstract_collection__MapIterator__is_ok]))(var_298); /* is_ok on <var_298:MapIterator[MProperty, APropdef]>*/
}
if (var299){
} else {
goto BREAK_label;
}
{
var300 = ((val*(*)(val* self))((((long)var_298&3)?class_info[((long)var_298&3)]:var_298->class)->vft[COLOR_core__abstract_collection__MapIterator__key]))(var_298); /* key on <var_298:MapIterator[MProperty, APropdef]>*/
}
var_p = var300;
{
var301 = ((val*(*)(val* self))((((long)var_298&3)?class_info[((long)var_298&3)]:var_298->class)->vft[COLOR_core__abstract_collection__MapIterator__item]))(var_298); /* item on <var_298:MapIterator[MProperty, APropdef]>*/
}
var_n = var301;
{
{ /* Inline kernel#Object#!= (var_p,var_mprop) on <var_p:MProperty> */
var_other = var_mprop;
{
var306 = ((short int(*)(val* self, val* p0))(var_p->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_p, var_other); /* == on <var_p:MProperty>*/
}
var307 = !var306;
var304 = var307;
goto RET_LABEL305;
RET_LABEL305:(void)0;
}
}
var_308 = var304;
if (var304){
/* <var_p:MProperty> isa MMethod */
cltype310 = type_nitc__MMethod.color;
idtype311 = type_nitc__MMethod.id;
if(cltype310 >= var_p->type->table_size) {
var309 = 0;
} else {
var309 = var_p->type->type_table[cltype310] == idtype311;
}
var303 = var309;
} else {
var303 = var_308;
}
var_312 = var303;
if (var303){
{
{ /* Inline model#MProperty#name (var_p) on <var_p:MProperty(MMethod)> */
var315 = var_p->attrs[COLOR_nitc__model__MProperty___name].val; /* _name on <var_p:MProperty(MMethod)> */
if (unlikely(var315 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2047);
fatal_exit(1);
}
var313 = var315;
RET_LABEL314:(void)0;
}
}
{
var316 = ((short int(*)(val* self, val* p0))(var313->class->vft[COLOR_core__kernel__Object___61d_61d]))(var313, var_name); /* == on <var313:String>*/
}
var302 = var316;
} else {
var302 = var_312;
}
if (var302){
{
{ /* Inline parser_nodes#ADefinition#n_kwredef (self) on <self:AMethPropdef> */
var319 = self->attrs[COLOR_nitc__parser_nodes__ADefinition___n_kwredef].val; /* _n_kwredef on <self:AMethPropdef> */
var317 = var319;
RET_LABEL318:(void)0;
}
}
{
var320 = nitc__modelize_property___APropdef___check_redef_keyword(self, var_modelbuilder, var_mclassdef, var317, 0, var_p);
}
var321 = !var320;
if (var321){
{
{ /* Inline model_base#MEntity#is_broken= (var_mprop,1) on <var_mprop:nullable MMethod(MMethod)> */
var_mprop->attrs[COLOR_nitc__model_base__MEntity___is_broken].s = 1; /* _is_broken on <var_mprop:nullable MMethod(MMethod)> */
RET_LABEL322:(void)0;
}
}
goto RET_LABEL;
} else {
}
goto BREAK_label;
} else {
}
{
((void(*)(val* self))((((long)var_298&3)?class_info[((long)var_298&3)]:var_298->class)->vft[COLOR_core__abstract_collection__MapIterator__next]))(var_298); /* next on <var_298:MapIterator[MProperty, APropdef]>*/
}
}
BREAK_label: (void)0;
{
{ /* Inline abstract_collection#MapIterator#finish (var_298) on <var_298:MapIterator[MProperty, APropdef]> */
RET_LABEL323:(void)0;
}
}
} else {
}
{
{ /* Inline modelize_property#MClassDef#mprop2npropdef (var_mclassdef) on <var_mclassdef:MClassDef> */
var326 = var_mclassdef->attrs[COLOR_nitc__modelize_property__MClassDef___mprop2npropdef].val; /* _mprop2npropdef on <var_mclassdef:MClassDef> */
if (unlikely(var326 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mprop2npropdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelize_property, 504);
fatal_exit(1);
}
var324 = var326;
RET_LABEL325:(void)0;
}
}
{
((void(*)(val* self, val* p0, val* p1))((((long)var324&3)?class_info[((long)var324&3)]:var324->class)->vft[COLOR_core__abstract_collection__Map___91d_93d_61d]))(var324, var_mprop, self); /* []= on <var324:Map[MProperty, APropdef]>*/
}
var327 = NEW_nitc__MMethodDef(&type_nitc__MMethodDef);
{
{ /* Inline parser_nodes#ANode#location (self) on <self:AMethPropdef> */
var330 = self->attrs[COLOR_nitc__parser_nodes__ANode___location].val; /* _location on <self:AMethPropdef> */
if (unlikely(var330 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _location");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 25);
fatal_exit(1);
}
var328 = var330;
RET_LABEL329:(void)0;
}
}
{
((void(*)(val* self, val* p0))(var327->class->vft[COLOR_nitc__model__MPropDef__mclassdef_61d]))(var327, var_mclassdef); /* mclassdef= on <var327:MMethodDef>*/
}
{
((void(*)(val* self, val* p0))(var327->class->vft[COLOR_nitc__model__MPropDef__mproperty_61d]))(var327, var_mprop); /* mproperty= on <var327:MMethodDef>*/
}
{
((void(*)(val* self, val* p0))(var327->class->vft[COLOR_nitc__model__MPropDef__location_61d]))(var327, var328); /* location= on <var327:MMethodDef>*/
}
{
((void(*)(val* self))(var327->class->vft[COLOR_core__kernel__Object__init]))(var327); /* init on <var327:MMethodDef>*/
}
var_mpropdef = var327;
{
nitc__modelize_property___APropdef___set_doc(self, var_mpropdef, var_modelbuilder); /* Direct call modelize_property#APropdef#set_doc on <self:AMethPropdef>*/
}
/* <var_mpropdef:MMethodDef> isa nullable MPROPDEF */
type_struct = self->type->resolution_table->types[COLOR_nullable__nitc__modelize_property__APropdef__MPROPDEF];
cltype332 = type_struct->color;
idtype333 = type_struct->id;
if(cltype332 >= var_mpropdef->type->table_size) {
var331 = 0;
} else {
var331 = var_mpropdef->type->type_table[cltype332] == idtype333;
}
if (unlikely(!var331)) {
var_class_name334 = var_mpropdef == NULL ? "null" : var_mpropdef->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "nullable MPROPDEF", var_class_name334);
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelize_property, 864);
fatal_exit(1);
}
{
{ /* Inline modelize_property#APropdef#mpropdef= (self,var_mpropdef) on <self:AMethPropdef> */
/* Covariant cast for argument 0 (mpropdef) <var_mpropdef:MMethodDef> isa nullable MPROPDEF */
/* <var_mpropdef:MMethodDef> isa nullable MPROPDEF */
type_struct339 = self->type->resolution_table->types[COLOR_nullable__nitc__modelize_property__APropdef__MPROPDEF];
cltype337 = type_struct339->color;
idtype338 = type_struct339->id;
if(cltype337 >= var_mpropdef->type->table_size) {
var336 = 0;
} else {
var336 = var_mpropdef->type->type_table[cltype337] == idtype338;
}
if (unlikely(!var336)) {
var_class_name340 = var_mpropdef == NULL ? "null" : var_mpropdef->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "nullable MPROPDEF", var_class_name340);
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelize_property, 557);
fatal_exit(1);
}
self->attrs[COLOR_nitc__modelize_property__APropdef___mpropdef].val = var_mpropdef; /* _mpropdef on <self:AMethPropdef> */
RET_LABEL335:(void)0;
}
}
{
{ /* Inline modelize_property#ModelBuilder#mpropdef2npropdef (var_modelbuilder) on <var_modelbuilder:ModelBuilder> */
var343 = var_modelbuilder->attrs[COLOR_nitc__modelize_property__ModelBuilder___mpropdef2npropdef].val; /* _mpropdef2npropdef on <var_modelbuilder:ModelBuilder> */
if (unlikely(var343 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mpropdef2npropdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelize_property, 40);
fatal_exit(1);
}
var341 = var343;
RET_LABEL342:(void)0;
}
}
{
core___core__HashMap___core__abstract_collection__Map___91d_93d_61d(var341, var_mpropdef, self); /* Direct call hash_collection#HashMap#[]= on <var341:HashMap[MPropDef, APropdef]>*/
}
{
var344 = nitc___nitc__MPropDef___is_intro(var_mpropdef);
}
if (var344){
{
{ /* Inline modelbuilder_base#ModelBuilder#toolcontext (var_modelbuilder) on <var_modelbuilder:ModelBuilder> */
var347 = var_modelbuilder->attrs[COLOR_nitc__modelbuilder_base__ModelBuilder___toolcontext].val; /* _toolcontext on <var_modelbuilder:ModelBuilder> */
if (unlikely(var347 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelbuilder_base, 47);
fatal_exit(1);
}
var345 = var347;
RET_LABEL346:(void)0;
}
}
if (unlikely(varonce348==NULL)) {
var349 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce350!=NULL)) {
var351 = varonce350;
} else {
var352 = " introduces new method ";
var353 = core__abstract_text___CString___to_s_full(var352, 23l, 23l);
var351 = var353;
varonce350 = var351;
}
((struct instance_core__NativeArray*)var349)->values[1]=var351;
} else {
var349 = varonce348;
varonce348 = NULL;
}
{
var354 = ((val*(*)(val* self))(var_mpropdef->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_mpropdef); /* to_s on <var_mpropdef:MMethodDef>*/
}
((struct instance_core__NativeArray*)var349)->values[0]=var354;
{
var355 = nitc___nitc__MProperty___nitc__model_base__MEntity__full_name(var_mprop);
}
((struct instance_core__NativeArray*)var349)->values[2]=var355;
{
var356 = ((val*(*)(val* self))(var349->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var349); /* native_to_s on <var349:NativeArray[String]>*/
}
varonce348 = var349;
{
nitc___nitc__ToolContext___info(var345, var356, 4l); /* Direct call toolcontext#ToolContext#info on <var345:ToolContext>*/
}
} else {
{
{ /* Inline modelbuilder_base#ModelBuilder#toolcontext (var_modelbuilder) on <var_modelbuilder:ModelBuilder> */
var359 = var_modelbuilder->attrs[COLOR_nitc__modelbuilder_base__ModelBuilder___toolcontext].val; /* _toolcontext on <var_modelbuilder:ModelBuilder> */
if (unlikely(var359 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelbuilder_base, 47);
fatal_exit(1);
}
var357 = var359;
RET_LABEL358:(void)0;
}
}
if (unlikely(varonce360==NULL)) {
var361 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce362!=NULL)) {
var363 = varonce362;
} else {
var364 = " redefines method ";
var365 = core__abstract_text___CString___to_s_full(var364, 18l, 18l);
var363 = var365;
varonce362 = var363;
}
((struct instance_core__NativeArray*)var361)->values[1]=var363;
} else {
var361 = varonce360;
varonce360 = NULL;
}
{
var366 = ((val*(*)(val* self))(var_mpropdef->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_mpropdef); /* to_s on <var_mpropdef:MMethodDef>*/
}
((struct instance_core__NativeArray*)var361)->values[0]=var366;
{
var367 = nitc___nitc__MProperty___nitc__model_base__MEntity__full_name(var_mprop);
}
((struct instance_core__NativeArray*)var361)->values[2]=var367;
{
var368 = ((val*(*)(val* self))(var361->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var361); /* native_to_s on <var361:NativeArray[String]>*/
}
varonce360 = var361;
{
nitc___nitc__ToolContext___info(var357, var368, 4l); /* Direct call toolcontext#ToolContext#info on <var357:ToolContext>*/
}
}
RET_LABEL:;
}
/* method modelize_property#AMethPropdef#build_signature for (self: AMethPropdef, ModelBuilder) */
void nitc__modelize_property___AMethPropdef___APropdef__build_signature(val* self, val* p0) {
val* var_modelbuilder /* var modelbuilder: ModelBuilder */;
val* var /* : nullable MPropDef */;
val* var2 /* : nullable MPropDef */;
val* var_mpropdef /* var mpropdef: nullable MMethodDef */;
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
val* var15 /* : nullable ASignature */;
val* var17 /* : nullable ASignature */;
val* var_nsig /* var nsig: nullable ASignature */;
short int var18 /* : Bool */;
val* var19 /* : MProperty */;
val* var21 /* : MProperty */;
short int var22 /* : Bool */;
short int var24 /* : Bool */;
short int var_ /* var : Bool */;
short int var25 /* : Bool */;
short int var26 /* : Bool */;
val* var27 /* : MClass */;
val* var29 /* : MClass */;
val* var30 /* : nullable MMethodDef */;
val* var32 /* : nullable MMethodDef */;
val* var_root_init /* var root_init: nullable MMethodDef */;
short int var33 /* : Bool */;
short int var34 /* : Bool */;
val* var_other36 /* var other: nullable Object */;
short int var37 /* : Bool */;
short int var38 /* : Bool */;
val* var39 /* : nullable MSignature */;
val* var41 /* : nullable MSignature */;
val* var43 /* : Array[MProperty] */;
val* var45 /* : Array[MProperty] */;
short int var46 /* : Bool */;
val* var47 /* : Array[MProperty] */;
val* var49 /* : Array[MProperty] */;
val* var50 /* : Array[MProperty] */;
val* var52 /* : Array[MProperty] */;
short int var53 /* : Bool */;
val* var54 /* : nullable AMethid */;
val* var56 /* : nullable AMethid */;
short int var57 /* : Bool */;
short int var58 /* : Bool */;
short int var60 /* : Bool */;
short int var62 /* : Bool */;
short int var_63 /* var : Bool */;
val* var64 /* : nullable AMethid */;
val* var66 /* : nullable AMethid */;
short int var67 /* : Bool */;
short int var_accept_special_last_parameter /* var accept_special_last_parameter: Bool */;
short int var68 /* : Bool */;
val* var69 /* : nullable AMethid */;
val* var71 /* : nullable AMethid */;
short int var72 /* : Bool */;
short int var73 /* : Bool */;
short int var75 /* : Bool */;
short int var76 /* : Bool */;
short int var_77 /* var : Bool */;
val* var78 /* : nullable AMethid */;
val* var80 /* : nullable AMethid */;
short int var81 /* : Bool */;
short int var_return_is_mandatory /* var return_is_mandatory: Bool */;
val* var82 /* : Array[String] */;
val* var_param_names /* var param_names: Array[String] */;
val* var83 /* : Array[MType] */;
val* var_param_types /* var param_types: Array[MType] */;
long var84 /* : Int */;
long var86 /* : Int */;
long var_vararg_rank /* var vararg_rank: Int */;
val* var_ret_type /* var ret_type: nullable MType */;
short int var87 /* : Bool */;
short int var88 /* : Bool */;
short int var90 /* : Bool */;
short int var91 /* : Bool */;
short int var92 /* : Bool */;
short int var93 /* : Bool */;
val* var94 /* : Array[String] */;
val* var96 /* : Array[String] */;
val* var97 /* : Array[MType] */;
val* var99 /* : Array[MType] */;
long var100 /* : Int */;
long var102 /* : Int */;
val* var103 /* : nullable MType */;
val* var105 /* : nullable MType */;
val* var_msignature /* var msignature: nullable MSignature */;
short int var106 /* : Bool */;
short int var107 /* : Bool */;
val* var108 /* : MProperty */;
val* var110 /* : MProperty */;
val* var111 /* : MPropDef */;
val* var113 /* : MPropDef */;
val* var114 /* : nullable MSignature */;
val* var116 /* : nullable MSignature */;
short int var117 /* : Bool */;
short int var118 /* : Bool */;
short int var120 /* : Bool */;
short int var122 /* : Bool */;
val* var123 /* : MClass */;
val* var125 /* : MClass */;
val* var126 /* : MClassType */;
val* var128 /* : MClassType */;
val* var129 /* : MClassType */;
val* var131 /* : MClassType */;
val* var132 /* : MSignature */;
long var133 /* : Int */;
long var135 /* : Int */;
long var136 /* : Int */;
short int var137 /* : Bool */;
short int var139 /* : Bool */;
short int var140 /* : Bool */;
short int var141 /* : Bool */;
short int var142 /* : Bool */;
short int var144 /* : Bool */;
short int var145 /* : Bool */;
val* var_node /* var node: ANode */;
val* var146 /* : NativeArray[String] */;
static val* varonce;
static val* varonce147;
val* var148 /* : String */;
char* var149 /* : CString */;
val* var150 /* : String */;
static val* varonce151;
val* var152 /* : String */;
char* var153 /* : CString */;
val* var154 /* : String */;
static val* varonce155;
val* var156 /* : String */;
char* var157 /* : CString */;
val* var158 /* : String */;
static val* varonce159;
val* var160 /* : String */;
char* var161 /* : CString */;
val* var162 /* : String */;
static val* varonce163;
val* var164 /* : String */;
char* var165 /* : CString */;
val* var166 /* : String */;
long var167 /* : Int */;
val* var168 /* : String */;
val* var169 /* : MProperty */;
val* var171 /* : MProperty */;
val* var172 /* : String */;
val* var174 /* : String */;
val* var175 /* : String */;
long var176 /* : Int */;
long var178 /* : Int */;
val* var179 /* : String */;
val* var180 /* : MProperty */;
val* var182 /* : MProperty */;
val* var183 /* : String */;
val* var184 /* : String */;
short int var185 /* : Bool */;
val* var186 /* : MProperty */;
val* var188 /* : MProperty */;
short int var189 /* : Bool */;
short int var191 /* : Bool */;
short int var_192 /* var : Bool */;
val* var193 /* : MProperty */;
val* var195 /* : MProperty */;
short int var196 /* : Bool */;
short int var198 /* : Bool */;
short int var199 /* : Bool */;
val* var200 /* : Array[MClassType] */;
val* var202 /* : Array[MClassType] */;
val* var_203 /* var : Array[MClassType] */;
val* var204 /* : IndexedIterator[nullable Object] */;
val* var_205 /* var : IndexedIterator[MClassType] */;
short int var206 /* : Bool */;
val* var207 /* : nullable Object */;
val* var_msupertype /* var msupertype: MClassType */;
val* var208 /* : MClassType */;
val* var210 /* : MClassType */;
val* var211 /* : MClassType */;
val* var212 /* : MProperty */;
val* var214 /* : MProperty */;
val* var215 /* : String */;
val* var217 /* : String */;
val* var218 /* : nullable MProperty */;
val* var_candidate /* var candidate: nullable MProperty */;
short int var219 /* : Bool */;
short int var220 /* : Bool */;
short int var222 /* : Bool */;
short int var223 /* : Bool */;
short int var224 /* : Bool */;
short int var225 /* : Bool */;
short int var227 /* : Bool */;
short int var229 /* : Bool */;
val* var230 /* : MPropDef */;
val* var232 /* : MPropDef */;
short int var233 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
val* var234 /* : nullable MSignature */;
val* var236 /* : nullable MSignature */;
short int var237 /* : Bool */;
short int var238 /* : Bool */;
short int var239 /* : Bool */;
short int var240 /* : Bool */;
short int var241 /* : Bool */;
short int var243 /* : Bool */;
short int var244 /* : Bool */;
short int var_245 /* var : Bool */;
long var246 /* : Int */;
long var248 /* : Int */;
long var249 /* : Int */;
long var251 /* : Int */;
short int var252 /* : Bool */;
short int var254 /* : Bool */;
short int var255 /* : Bool */;
short int var_256 /* var : Bool */;
long var257 /* : Int */;
long var259 /* : Int */;
long var260 /* : Int */;
short int var261 /* : Bool */;
short int var263 /* : Bool */;
short int var_264 /* var : Bool */;
long var265 /* : Int */;
long var267 /* : Int */;
short int var268 /* : Bool */;
short int var270 /* : Bool */;
val* var271 /* : Array[MType] */;
val* var272 /* : Array[MParameter] */;
val* var274 /* : Array[MParameter] */;
val* var_275 /* var : Array[MParameter] */;
val* var276 /* : IndexedIterator[nullable Object] */;
val* var_277 /* var : IndexedIterator[MParameter] */;
short int var278 /* : Bool */;
val* var280 /* : nullable Object */;
val* var_mparameter /* var mparameter: MParameter */;
val* var281 /* : MType */;
val* var283 /* : MType */;
long var284 /* : Int */;
long var286 /* : Int */;
short int var287 /* : Bool */;
short int var288 /* : Bool */;
short int var289 /* : Bool */;
short int var291 /* : Bool */;
short int var292 /* : Bool */;
short int var_293 /* var : Bool */;
short int var294 /* : Bool */;
short int var295 /* : Bool */;
short int var297 /* : Bool */;
short int var299 /* : Bool */;
val* var300 /* : nullable MType */;
val* var302 /* : nullable MType */;
long var303 /* : Int */;
long var305 /* : Int */;
long var306 /* : Int */;
long var308 /* : Int */;
short int var309 /* : Bool */;
short int var311 /* : Bool */;
short int var312 /* : Bool */;
val* var313 /* : ANodes[AParam] */;
val* var315 /* : ANodes[AParam] */;
long var316 /* : Int */;
long var318 /* : Int */;
val* var319 /* : ANode */;
val* var321 /* : NativeArray[String] */;
static val* varonce320;
static val* varonce322;
val* var323 /* : String */;
char* var324 /* : CString */;
val* var325 /* : String */;
static val* varonce326;
val* var327 /* : String */;
char* var328 /* : CString */;
val* var329 /* : String */;
long var330 /* : Int */;
long var332 /* : Int */;
val* var333 /* : nullable Object */;
val* var334 /* : String */;
val* var335 /* : Array[MParameter] */;
val* var_mparameters /* var mparameters: Array[MParameter] */;
long var_i /* var i: Int */;
long var336 /* : Int */;
long var338 /* : Int */;
long var_339 /* var : Int */;
short int var340 /* : Bool */;
short int var342 /* : Bool */;
int cltype343;
int idtype344;
const char* var_class_name345;
short int var346 /* : Bool */;
val* var348 /* : MParameter */;
val* var349 /* : nullable Object */;
val* var350 /* : nullable Object */;
short int var351 /* : Bool */;
short int var353 /* : Bool */;
val* var_mparameter354 /* var mparameter: MParameter */;
short int var355 /* : Bool */;
short int var356 /* : Bool */;
short int var358 /* : Bool */;
short int var359 /* : Bool */;
val* var360 /* : ANodes[AParam] */;
val* var362 /* : ANodes[AParam] */;
val* var363 /* : ANode */;
long var365 /* : Int */;
short int var366 /* : Bool */;
short int var367 /* : Bool */;
short int var368 /* : Bool */;
short int var370 /* : Bool */;
short int var372 /* : Bool */;
short int var_373 /* var : Bool */;
val* var374 /* : MProperty */;
val* var376 /* : MProperty */;
short int var377 /* : Bool */;
short int var379 /* : Bool */;
val* var380 /* : MClass */;
val* var382 /* : MClass */;
val* var383 /* : MClassType */;
val* var385 /* : MClassType */;
short int var386 /* : Bool */;
short int var387 /* : Bool */;
short int var388 /* : Bool */;
short int var_389 /* var : Bool */;
short int var390 /* : Bool */;
short int var_391 /* var : Bool */;
val* var392 /* : nullable Object */;
short int var393 /* : Bool */;
short int var395 /* : Bool */;
val* var396 /* : nullable ASignature */;
val* var398 /* : nullable ASignature */;
val* var399 /* : ANodes[AParam] */;
val* var401 /* : ANodes[AParam] */;
val* var402 /* : nullable Object */;
val* var404 /* : NativeArray[String] */;
static val* varonce403;
static val* varonce405;
val* var406 /* : String */;
char* var407 /* : CString */;
val* var408 /* : String */;
static val* varonce409;
val* var410 /* : String */;
char* var411 /* : CString */;
val* var412 /* : String */;
static val* varonce413;
val* var414 /* : String */;
char* var415 /* : CString */;
val* var416 /* : String */;
val* var417 /* : nullable Object */;
val* var418 /* : String */;
val* var419 /* : MProperty */;
val* var421 /* : MProperty */;
val* var422 /* : String */;
val* var424 /* : String */;
val* var425 /* : String */;
short int var426 /* : Bool */;
short int var427 /* : Bool */;
short int var428 /* : Bool */;
short int var430 /* : Bool */;
short int var432 /* : Bool */;
short int var_433 /* var : Bool */;
val* var434 /* : nullable AMethid */;
val* var436 /* : nullable AMethid */;
val* var438 /* : NativeArray[String] */;
static val* varonce437;
static val* varonce439;
val* var440 /* : String */;
char* var441 /* : CString */;
val* var442 /* : String */;
static val* varonce443;
val* var444 /* : String */;
char* var445 /* : CString */;
val* var446 /* : String */;
val* var447 /* : MProperty */;
val* var449 /* : MProperty */;
val* var450 /* : String */;
val* var452 /* : String */;
val* var453 /* : String */;
val* var454 /* : MSignature */;
static val* varonce456;
val* var457 /* : String */;
char* var458 /* : CString */;
val* var459 /* : String */;
val* var460 /* : nullable AAnnotation */;
short int var461 /* : Bool */;
short int var462 /* : Bool */;
short int var464 /* : Bool */;
short int var465 /* : Bool */;
static val* varonce467;
val* var468 /* : String */;
char* var469 /* : CString */;
val* var470 /* : String */;
val* var471 /* : nullable AAnnotation */;
short int var472 /* : Bool */;
short int var473 /* : Bool */;
short int var475 /* : Bool */;
short int var476 /* : Bool */;
short int var478 /* : Bool */;
val* var479 /* : nullable AExternCodeBlock */;
val* var481 /* : nullable AExternCodeBlock */;
short int var482 /* : Bool */;
short int var483 /* : Bool */;
short int var485 /* : Bool */;
short int var486 /* : Bool */;
short int var_487 /* var : Bool */;
static val* varonce488;
val* var489 /* : String */;
char* var490 /* : CString */;
val* var491 /* : String */;
val* var492 /* : nullable AAnnotation */;
short int var493 /* : Bool */;
short int var494 /* : Bool */;
short int var496 /* : Bool */;
short int var497 /* : Bool */;
static val* varonce499;
val* var500 /* : String */;
char* var501 /* : CString */;
val* var502 /* : String */;
val* var503 /* : nullable AAnnotation */;
val* var_at /* var at: nullable AAnnotation */;
short int var504 /* : Bool */;
short int var505 /* : Bool */;
short int var507 /* : Bool */;
short int var508 /* : Bool */;
static val* varonce509;
val* var510 /* : String */;
char* var511 /* : CString */;
val* var512 /* : String */;
static val* varonce513;
val* var514 /* : String */;
char* var515 /* : CString */;
val* var516 /* : String */;
val* var517 /* : nullable AAnnotation */;
val* var_atautoinit /* var atautoinit: nullable AAnnotation */;
short int var518 /* : Bool */;
short int var519 /* : Bool */;
short int var521 /* : Bool */;
short int var522 /* : Bool */;
short int var523 /* : Bool */;
short int var524 /* : Bool */;
static val* varonce525;
val* var526 /* : String */;
char* var527 /* : CString */;
val* var528 /* : String */;
short int var529 /* : Bool */;
short int var530 /* : Bool */;
static val* varonce531;
val* var532 /* : String */;
char* var533 /* : CString */;
val* var534 /* : String */;
var_modelbuilder = p0;
{
{ /* Inline modelize_property#APropdef#mpropdef (self) on <self:AMethPropdef> */
var2 = self->attrs[COLOR_nitc__modelize_property__APropdef___mpropdef].val; /* _mpropdef on <self:AMethPropdef> */
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
{ /* Inline kernel#Object#== (var_mpropdef,((val*)NULL)) on <var_mpropdef:nullable MMethodDef> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_mpropdef,var_other) on <var_mpropdef:nullable MMethodDef(MMethodDef)> */
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
{ /* Inline model#MPropDef#mclassdef (var_mpropdef) on <var_mpropdef:nullable MMethodDef(MMethodDef)> */
var11 = var_mpropdef->attrs[COLOR_nitc__model__MPropDef___mclassdef].val; /* _mclassdef on <var_mpropdef:nullable MMethodDef(MMethodDef)> */
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
{
{ /* Inline parser_nodes#AMethPropdef#n_signature (self) on <self:AMethPropdef> */
var17 = self->attrs[COLOR_nitc__parser_nodes__AMethPropdef___n_signature].val; /* _n_signature on <self:AMethPropdef> */
var15 = var17;
RET_LABEL16:(void)0;
}
}
var_nsig = var15;
{
{ /* Inline model#MPropDef#mproperty (var_mpropdef) on <var_mpropdef:nullable MMethodDef(MMethodDef)> */
var21 = var_mpropdef->attrs[COLOR_nitc__model__MPropDef___mproperty].val; /* _mproperty on <var_mpropdef:nullable MMethodDef(MMethodDef)> */
if (unlikely(var21 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2357);
fatal_exit(1);
}
var19 = var21;
RET_LABEL20:(void)0;
}
}
{
{ /* Inline model#MMethod#is_root_init (var19) on <var19:MProperty(MMethod)> */
var24 = var19->attrs[COLOR_nitc__model__MMethod___is_root_init].s; /* _is_root_init on <var19:MProperty(MMethod)> */
var22 = var24;
RET_LABEL23:(void)0;
}
}
var_ = var22;
if (var22){
{
var25 = nitc___nitc__MClassDef___is_intro(var_mclassdef);
}
var26 = !var25;
var18 = var26;
} else {
var18 = var_;
}
if (var18){
{
{ /* Inline model#MClassDef#mclass (var_mclassdef) on <var_mclassdef:MClassDef> */
var29 = var_mclassdef->attrs[COLOR_nitc__model__MClassDef___mclass].val; /* _mclass on <var_mclassdef:MClassDef> */
if (unlikely(var29 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 591);
fatal_exit(1);
}
var27 = var29;
RET_LABEL28:(void)0;
}
}
{
{ /* Inline modelize_property#MClass#root_init (var27) on <var27:MClass> */
var32 = var27->attrs[COLOR_nitc__modelize_property__MClass___root_init].val; /* _root_init on <var27:MClass> */
var30 = var32;
RET_LABEL31:(void)0;
}
}
var_root_init = var30;
if (var_root_init == NULL) {
var33 = 0; /* is null */
} else {
var33 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_root_init,((val*)NULL)) on <var_root_init:nullable MMethodDef> */
var_other36 = ((val*)NULL);
{
var37 = ((short int(*)(val* self, val* p0))(var_root_init->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_root_init, var_other36); /* == on <var_root_init:nullable MMethodDef(MMethodDef)>*/
}
var38 = !var37;
var34 = var38;
goto RET_LABEL35;
RET_LABEL35:(void)0;
}
var33 = var34;
}
if (var33){
{
{ /* Inline model#MMethodDef#new_msignature (var_root_init) on <var_root_init:nullable MMethodDef(MMethodDef)> */
var41 = var_root_init->attrs[COLOR_nitc__model__MMethodDef___new_msignature].val; /* _new_msignature on <var_root_init:nullable MMethodDef(MMethodDef)> */
var39 = var41;
RET_LABEL40:(void)0;
}
}
{
{ /* Inline model#MMethodDef#new_msignature= (var_mpropdef,var39) on <var_mpropdef:nullable MMethodDef(MMethodDef)> */
var_mpropdef->attrs[COLOR_nitc__model__MMethodDef___new_msignature].val = var39; /* _new_msignature on <var_mpropdef:nullable MMethodDef(MMethodDef)> */
RET_LABEL42:(void)0;
}
}
{
{ /* Inline model#MMethodDef#initializers (var_mpropdef) on <var_mpropdef:nullable MMethodDef(MMethodDef)> */
var45 = var_mpropdef->attrs[COLOR_nitc__model__MMethodDef___initializers].val; /* _initializers on <var_mpropdef:nullable MMethodDef(MMethodDef)> */
if (unlikely(var45 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _initializers");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2492);
fatal_exit(1);
}
var43 = var45;
RET_LABEL44:(void)0;
}
}
{
var46 = core___core__AbstractArrayRead___core__abstract_collection__Collection__is_empty(var43);
}
if (unlikely(!var46)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelize_property, 886);
fatal_exit(1);
}
{
{ /* Inline model#MMethodDef#initializers (var_mpropdef) on <var_mpropdef:nullable MMethodDef(MMethodDef)> */
var49 = var_mpropdef->attrs[COLOR_nitc__model__MMethodDef___initializers].val; /* _initializers on <var_mpropdef:nullable MMethodDef(MMethodDef)> */
if (unlikely(var49 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _initializers");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2492);
fatal_exit(1);
}
var47 = var49;
RET_LABEL48:(void)0;
}
}
{
{ /* Inline model#MMethodDef#initializers (var_root_init) on <var_root_init:nullable MMethodDef(MMethodDef)> */
var52 = var_root_init->attrs[COLOR_nitc__model__MMethodDef___initializers].val; /* _initializers on <var_root_init:nullable MMethodDef(MMethodDef)> */
if (unlikely(var52 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _initializers");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2492);
fatal_exit(1);
}
var50 = var52;
RET_LABEL51:(void)0;
}
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add_all(var47, var50); /* Direct call array#Array#add_all on <var47:Array[MProperty]>*/
}
} else {
}
} else {
}
{
{ /* Inline parser_nodes#AMethPropdef#n_methid (self) on <self:AMethPropdef> */
var56 = self->attrs[COLOR_nitc__parser_nodes__AMethPropdef___n_methid].val; /* _n_methid on <self:AMethPropdef> */
var54 = var56;
RET_LABEL55:(void)0;
}
}
if (var54 == NULL) {
var57 = 1; /* is null */
} else {
var57 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var54,((val*)NULL)) on <var54:nullable AMethid> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var54,var_other) on <var54:nullable AMethid(AMethid)> */
var62 = var54 == var_other;
var60 = var62;
goto RET_LABEL61;
RET_LABEL61:(void)0;
}
}
var58 = var60;
goto RET_LABEL59;
RET_LABEL59:(void)0;
}
var57 = var58;
}
var_63 = var57;
if (var57){
var53 = var_63;
} else {
{
{ /* Inline parser_nodes#AMethPropdef#n_methid (self) on <self:AMethPropdef> */
var66 = self->attrs[COLOR_nitc__parser_nodes__AMethPropdef___n_methid].val; /* _n_methid on <self:AMethPropdef> */
var64 = var66;
RET_LABEL65:(void)0;
}
}
if (var64 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelize_property, 891);
fatal_exit(1);
} else {
var67 = ((short int(*)(val* self))(var64->class->vft[COLOR_nitc__modelize_property__AMethid__accept_special_last_parameter]))(var64); /* accept_special_last_parameter on <var64:nullable AMethid>*/
}
var53 = var67;
}
var_accept_special_last_parameter = var53;
{
{ /* Inline parser_nodes#AMethPropdef#n_methid (self) on <self:AMethPropdef> */
var71 = self->attrs[COLOR_nitc__parser_nodes__AMethPropdef___n_methid].val; /* _n_methid on <self:AMethPropdef> */
var69 = var71;
RET_LABEL70:(void)0;
}
}
if (var69 == NULL) {
var72 = 0; /* is null */
} else {
var72 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var69,((val*)NULL)) on <var69:nullable AMethid> */
var_other36 = ((val*)NULL);
{
var75 = ((short int(*)(val* self, val* p0))(var69->class->vft[COLOR_core__kernel__Object___61d_61d]))(var69, var_other36); /* == on <var69:nullable AMethid(AMethid)>*/
}
var76 = !var75;
var73 = var76;
goto RET_LABEL74;
RET_LABEL74:(void)0;
}
var72 = var73;
}
var_77 = var72;
if (var72){
{
{ /* Inline parser_nodes#AMethPropdef#n_methid (self) on <self:AMethPropdef> */
var80 = self->attrs[COLOR_nitc__parser_nodes__AMethPropdef___n_methid].val; /* _n_methid on <self:AMethPropdef> */
var78 = var80;
RET_LABEL79:(void)0;
}
}
if (var78 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelize_property, 892);
fatal_exit(1);
} else {
var81 = ((short int(*)(val* self))(var78->class->vft[COLOR_nitc__modelize_property__AMethid__return_is_mandatory]))(var78); /* return_is_mandatory on <var78:nullable AMethid>*/
}
var68 = var81;
} else {
var68 = var_77;
}
var_return_is_mandatory = var68;
var82 = NEW_core__Array(&type_core__Array__core__String);
{
core___core__Array___core__kernel__Object__init(var82); /* Direct call array#Array#init on <var82:Array[String]>*/
}
var_param_names = var82;
var83 = NEW_core__Array(&type_core__Array__nitc__MType);
{
core___core__Array___core__kernel__Object__init(var83); /* Direct call array#Array#init on <var83:Array[MType]>*/
}
var_param_types = var83;
{
{ /* Inline kernel#Int#unary - (1l) on <1l:Int> */
var86 = -1l;
var84 = var86;
goto RET_LABEL85;
RET_LABEL85:(void)0;
}
}
var_vararg_rank = var84;
var_ret_type = ((val*)NULL);
if (var_nsig == NULL) {
var87 = 0; /* is null */
} else {
var87 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_nsig,((val*)NULL)) on <var_nsig:nullable ASignature> */
var_other36 = ((val*)NULL);
{
var90 = ((short int(*)(val* self, val* p0))(var_nsig->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_nsig, var_other36); /* == on <var_nsig:nullable ASignature(ASignature)>*/
}
var91 = !var90;
var88 = var91;
goto RET_LABEL89;
RET_LABEL89:(void)0;
}
var87 = var88;
}
if (var87){
{
var92 = nitc__modelize_property___ASignature___visit_signature(var_nsig, var_modelbuilder, var_mclassdef);
}
var93 = !var92;
if (var93){
goto RET_LABEL;
} else {
}
{
{ /* Inline modelize_property#ASignature#param_names (var_nsig) on <var_nsig:nullable ASignature(ASignature)> */
var96 = var_nsig->attrs[COLOR_nitc__modelize_property__ASignature___param_names].val; /* _param_names on <var_nsig:nullable ASignature(ASignature)> */
if (unlikely(var96 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _param_names");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelize_property, 659);
fatal_exit(1);
}
var94 = var96;
RET_LABEL95:(void)0;
}
}
var_param_names = var94;
{
{ /* Inline modelize_property#ASignature#param_types (var_nsig) on <var_nsig:nullable ASignature(ASignature)> */
var99 = var_nsig->attrs[COLOR_nitc__modelize_property__ASignature___param_types].val; /* _param_types on <var_nsig:nullable ASignature(ASignature)> */
if (unlikely(var99 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _param_types");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelize_property, 662);
fatal_exit(1);
}
var97 = var99;
RET_LABEL98:(void)0;
}
}
var_param_types = var97;
{
{ /* Inline modelize_property#ASignature#vararg_rank (var_nsig) on <var_nsig:nullable ASignature(ASignature)> */
var102 = var_nsig->attrs[COLOR_nitc__modelize_property__ASignature___vararg_rank].l; /* _vararg_rank on <var_nsig:nullable ASignature(ASignature)> */
var100 = var102;
RET_LABEL101:(void)0;
}
}
var_vararg_rank = var100;
{
{ /* Inline modelize_property#ASignature#ret_type (var_nsig) on <var_nsig:nullable ASignature(ASignature)> */
var105 = var_nsig->attrs[COLOR_nitc__modelize_property__ASignature___ret_type].val; /* _ret_type on <var_nsig:nullable ASignature(ASignature)> */
var103 = var105;
RET_LABEL104:(void)0;
}
}
var_ret_type = var103;
} else {
}
var_msignature = ((val*)NULL);
{
var106 = nitc___nitc__MPropDef___is_intro(var_mpropdef);
}
var107 = !var106;
if (var107){
{
{ /* Inline model#MPropDef#mproperty (var_mpropdef) on <var_mpropdef:nullable MMethodDef(MMethodDef)> */
var110 = var_mpropdef->attrs[COLOR_nitc__model__MPropDef___mproperty].val; /* _mproperty on <var_mpropdef:nullable MMethodDef(MMethodDef)> */
if (unlikely(var110 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2357);
fatal_exit(1);
}
var108 = var110;
RET_LABEL109:(void)0;
}
}
{
{ /* Inline model#MProperty#intro (var108) on <var108:MProperty(MMethod)> */
var113 = var108->attrs[COLOR_nitc__model__MProperty___intro].val; /* _intro on <var108:MProperty(MMethod)> */
if (unlikely(var113 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2097);
fatal_exit(1);
}
var111 = var113;
RET_LABEL112:(void)0;
}
}
{
{ /* Inline model#MMethodDef#msignature (var111) on <var111:MPropDef(MMethodDef)> */
var116 = var111->attrs[COLOR_nitc__model__MMethodDef___msignature].val; /* _msignature on <var111:MPropDef(MMethodDef)> */
var114 = var116;
RET_LABEL115:(void)0;
}
}
var_msignature = var114;
if (var_msignature == NULL) {
var117 = 1; /* is null */
} else {
var117 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_msignature,((val*)NULL)) on <var_msignature:nullable MSignature> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_msignature,var_other) on <var_msignature:nullable MSignature(MSignature)> */
var122 = var_msignature == var_other;
var120 = var122;
goto RET_LABEL121;
RET_LABEL121:(void)0;
}
}
var118 = var120;
goto RET_LABEL119;
RET_LABEL119:(void)0;
}
var117 = var118;
}
if (var117){
goto RET_LABEL;
} else {
}
{
{ /* Inline model#MClassDef#mclass (var_mclassdef) on <var_mclassdef:MClassDef> */
var125 = var_mclassdef->attrs[COLOR_nitc__model__MClassDef___mclass].val; /* _mclass on <var_mclassdef:MClassDef> */
if (unlikely(var125 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 591);
fatal_exit(1);
}
var123 = var125;
RET_LABEL124:(void)0;
}
}
{
{ /* Inline model#MClass#mclass_type (var123) on <var123:MClass> */
var128 = var123->attrs[COLOR_nitc__model__MClass___mclass_type].val; /* _mclass_type on <var123:MClass> */
if (unlikely(var128 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass_type");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 520);
fatal_exit(1);
}
var126 = var128;
RET_LABEL127:(void)0;
}
}
{
{ /* Inline model#MClassDef#bound_mtype (var_mclassdef) on <var_mclassdef:MClassDef> */
var131 = var_mclassdef->attrs[COLOR_nitc__model__MClassDef___bound_mtype].val; /* _bound_mtype on <var_mclassdef:MClassDef> */
if (unlikely(var131 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _bound_mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 594);
fatal_exit(1);
}
var129 = var131;
RET_LABEL130:(void)0;
}
}
{
var132 = nitc___nitc__MSignature___MType__resolve_for(var_msignature, var126, var129, var_mmodule, 0);
}
var_msignature = var132;
{
{ /* Inline array#AbstractArrayRead#length (var_param_names) on <var_param_names:Array[String]> */
var135 = var_param_names->attrs[COLOR_core__array__AbstractArrayRead___length].l; /* _length on <var_param_names:Array[String]> */
var133 = var135;
RET_LABEL134:(void)0;
}
}
{
var136 = nitc___nitc__MSignature___arity(var_msignature);
}
{
{ /* Inline kernel#Int#!= (var133,var136) on <var133:Int> */
var139 = var133 == var136;
var140 = !var139;
var137 = var140;
goto RET_LABEL138;
RET_LABEL138:(void)0;
}
}
if (var137){
if (var_nsig == NULL) {
var141 = 0; /* is null */
} else {
var141 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_nsig,((val*)NULL)) on <var_nsig:nullable ASignature> */
var_other36 = ((val*)NULL);
{
var144 = ((short int(*)(val* self, val* p0))(var_nsig->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_nsig, var_other36); /* == on <var_nsig:nullable ASignature(ASignature)>*/
}
var145 = !var144;
var142 = var145;
goto RET_LABEL143;
RET_LABEL143:(void)0;
}
var141 = var142;
}
if (var141){
var_node = var_nsig;
} else {
var_node = self;
}
if (unlikely(varonce==NULL)) {
var146 = NEW_core__NativeArray(10l, &type_core__NativeArray__core__String);
if (likely(varonce147!=NULL)) {
var148 = varonce147;
} else {
var149 = "Redef Error: expected ";
var150 = core__abstract_text___CString___to_s_full(var149, 22l, 22l);
var148 = var150;
varonce147 = var148;
}
((struct instance_core__NativeArray*)var146)->values[0]=var148;
if (likely(varonce151!=NULL)) {
var152 = varonce151;
} else {
var153 = " parameter(s) for `";
var154 = core__abstract_text___CString___to_s_full(var153, 19l, 19l);
var152 = var154;
varonce151 = var152;
}
((struct instance_core__NativeArray*)var146)->values[2]=var152;
if (likely(varonce155!=NULL)) {
var156 = varonce155;
} else {
var157 = "`; got ";
var158 = core__abstract_text___CString___to_s_full(var157, 7l, 7l);
var156 = var158;
varonce155 = var156;
}
((struct instance_core__NativeArray*)var146)->values[5]=var156;
if (likely(varonce159!=NULL)) {
var160 = varonce159;
} else {
var161 = ". See introduction at `";
var162 = core__abstract_text___CString___to_s_full(var161, 23l, 23l);
var160 = var162;
varonce159 = var160;
}
((struct instance_core__NativeArray*)var146)->values[7]=var160;
if (likely(varonce163!=NULL)) {
var164 = varonce163;
} else {
var165 = "`.";
var166 = core__abstract_text___CString___to_s_full(var165, 2l, 2l);
var164 = var166;
varonce163 = var164;
}
((struct instance_core__NativeArray*)var146)->values[9]=var164;
} else {
var146 = varonce;
varonce = NULL;
}
{
var167 = nitc___nitc__MSignature___arity(var_msignature);
}
var168 = core__flat___Int___core__abstract_text__Object__to_s(var167);
((struct instance_core__NativeArray*)var146)->values[1]=var168;
{
{ /* Inline model#MPropDef#mproperty (var_mpropdef) on <var_mpropdef:nullable MMethodDef(MMethodDef)> */
var171 = var_mpropdef->attrs[COLOR_nitc__model__MPropDef___mproperty].val; /* _mproperty on <var_mpropdef:nullable MMethodDef(MMethodDef)> */
if (unlikely(var171 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2357);
fatal_exit(1);
}
var169 = var171;
RET_LABEL170:(void)0;
}
}
{
{ /* Inline model#MProperty#name (var169) on <var169:MProperty(MMethod)> */
var174 = var169->attrs[COLOR_nitc__model__MProperty___name].val; /* _name on <var169:MProperty(MMethod)> */
if (unlikely(var174 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2047);
fatal_exit(1);
}
var172 = var174;
RET_LABEL173:(void)0;
}
}
((struct instance_core__NativeArray*)var146)->values[3]=var172;
{
var175 = ((val*(*)(val* self))(var_msignature->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_msignature); /* to_s on <var_msignature:nullable MSignature(MSignature)>*/
}
((struct instance_core__NativeArray*)var146)->values[4]=var175;
{
{ /* Inline array#AbstractArrayRead#length (var_param_names) on <var_param_names:Array[String]> */
var178 = var_param_names->attrs[COLOR_core__array__AbstractArrayRead___length].l; /* _length on <var_param_names:Array[String]> */
var176 = var178;
RET_LABEL177:(void)0;
}
}
var179 = core__flat___Int___core__abstract_text__Object__to_s(var176);
((struct instance_core__NativeArray*)var146)->values[6]=var179;
{
{ /* Inline model#MPropDef#mproperty (var_mpropdef) on <var_mpropdef:nullable MMethodDef(MMethodDef)> */
var182 = var_mpropdef->attrs[COLOR_nitc__model__MPropDef___mproperty].val; /* _mproperty on <var_mpropdef:nullable MMethodDef(MMethodDef)> */
if (unlikely(var182 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2357);
fatal_exit(1);
}
var180 = var182;
RET_LABEL181:(void)0;
}
}
{
var183 = nitc___nitc__MProperty___nitc__model_base__MEntity__full_name(var180);
}
((struct instance_core__NativeArray*)var146)->values[8]=var183;
{
var184 = ((val*(*)(val* self))(var146->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var146); /* native_to_s on <var146:NativeArray[String]>*/
}
varonce = var146;
{
nitc___nitc__ModelBuilder___error(var_modelbuilder, var_node, var184); /* Direct call modelbuilder_base#ModelBuilder#error on <var_modelbuilder:ModelBuilder>*/
}
goto RET_LABEL;
} else {
}
} else {
{
{ /* Inline model#MPropDef#mproperty (var_mpropdef) on <var_mpropdef:nullable MMethodDef(MMethodDef)> */
var188 = var_mpropdef->attrs[COLOR_nitc__model__MPropDef___mproperty].val; /* _mproperty on <var_mpropdef:nullable MMethodDef(MMethodDef)> */
if (unlikely(var188 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2357);
fatal_exit(1);
}
var186 = var188;
RET_LABEL187:(void)0;
}
}
{
{ /* Inline model#MMethod#is_init (var186) on <var186:MProperty(MMethod)> */
var191 = var186->attrs[COLOR_nitc__model__MMethod___is_init].s; /* _is_init on <var186:MProperty(MMethod)> */
var189 = var191;
RET_LABEL190:(void)0;
}
}
var_192 = var189;
if (var189){
{
{ /* Inline model#MPropDef#mproperty (var_mpropdef) on <var_mpropdef:nullable MMethodDef(MMethodDef)> */
var195 = var_mpropdef->attrs[COLOR_nitc__model__MPropDef___mproperty].val; /* _mproperty on <var_mpropdef:nullable MMethodDef(MMethodDef)> */
if (unlikely(var195 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2357);
fatal_exit(1);
}
var193 = var195;
RET_LABEL194:(void)0;
}
}
{
{ /* Inline model#MMethod#is_new (var193) on <var193:MProperty(MMethod)> */
var198 = var193->attrs[COLOR_nitc__model__MMethod___is_new].s; /* _is_new on <var193:MProperty(MMethod)> */
var196 = var198;
RET_LABEL197:(void)0;
}
}
var199 = !var196;
var185 = var199;
} else {
var185 = var_192;
}
if (var185){
{
{ /* Inline model#MClassDef#supertypes (var_mclassdef) on <var_mclassdef:MClassDef> */
var202 = var_mclassdef->attrs[COLOR_nitc__model__MClassDef___supertypes].val; /* _supertypes on <var_mclassdef:MClassDef> */
if (unlikely(var202 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _supertypes");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 666);
fatal_exit(1);
}
var200 = var202;
RET_LABEL201:(void)0;
}
}
var_203 = var200;
{
var204 = core___core__AbstractArrayRead___core__abstract_collection__Collection__iterator(var_203);
}
var_205 = var204;
for(;;) {
{
var206 = ((short int(*)(val* self))((((long)var_205&3)?class_info[((long)var_205&3)]:var_205->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_205); /* is_ok on <var_205:IndexedIterator[MClassType]>*/
}
if (var206){
} else {
goto BREAK_label;
}
{
var207 = ((val*(*)(val* self))((((long)var_205&3)?class_info[((long)var_205&3)]:var_205->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_205); /* item on <var_205:IndexedIterator[MClassType]>*/
}
var_msupertype = var207;
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
var211 = nitc___nitc__MClassType___MType__anchor_to(var_msupertype, var_mmodule, var208);
}
var_msupertype = var211;
{
{ /* Inline model#MPropDef#mproperty (var_mpropdef) on <var_mpropdef:nullable MMethodDef(MMethodDef)> */
var214 = var_mpropdef->attrs[COLOR_nitc__model__MPropDef___mproperty].val; /* _mproperty on <var_mpropdef:nullable MMethodDef(MMethodDef)> */
if (unlikely(var214 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2357);
fatal_exit(1);
}
var212 = var214;
RET_LABEL213:(void)0;
}
}
{
{ /* Inline model#MProperty#name (var212) on <var212:MProperty(MMethod)> */
var217 = var212->attrs[COLOR_nitc__model__MProperty___name].val; /* _name on <var212:MProperty(MMethod)> */
if (unlikely(var217 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2047);
fatal_exit(1);
}
var215 = var217;
RET_LABEL216:(void)0;
}
}
{
var218 = nitc___nitc__ModelBuilder___try_get_mproperty_by_name2(var_modelbuilder, self, var_mmodule, var_msupertype, var215);
}
var_candidate = var218;
if (var_candidate == NULL) {
var219 = 0; /* is null */
} else {
var219 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_candidate,((val*)NULL)) on <var_candidate:nullable MProperty> */
var_other36 = ((val*)NULL);
{
var222 = ((short int(*)(val* self, val* p0))(var_candidate->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_candidate, var_other36); /* == on <var_candidate:nullable MProperty(MProperty)>*/
}
var223 = !var222;
var220 = var223;
goto RET_LABEL221;
RET_LABEL221:(void)0;
}
var219 = var220;
}
if (var219){
if (var_msignature == NULL) {
var224 = 1; /* is null */
} else {
var224 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_msignature,((val*)NULL)) on <var_msignature:nullable MSignature> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_msignature,var_other) on <var_msignature:nullable MSignature(MSignature)> */
var229 = var_msignature == var_other;
var227 = var229;
goto RET_LABEL228;
RET_LABEL228:(void)0;
}
}
var225 = var227;
goto RET_LABEL226;
RET_LABEL226:(void)0;
}
var224 = var225;
}
if (var224){
{
{ /* Inline model#MProperty#intro (var_candidate) on <var_candidate:nullable MProperty(MProperty)> */
var232 = var_candidate->attrs[COLOR_nitc__model__MProperty___intro].val; /* _intro on <var_candidate:nullable MProperty(MProperty)> */
if (unlikely(var232 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2097);
fatal_exit(1);
}
var230 = var232;
RET_LABEL231:(void)0;
}
}
/* <var230:MPropDef> isa MMethodDef */
cltype = type_nitc__MMethodDef.color;
idtype = type_nitc__MMethodDef.id;
if(cltype >= var230->type->table_size) {
var233 = 0;
} else {
var233 = var230->type->type_table[cltype] == idtype;
}
if (unlikely(!var233)) {
var_class_name = var230 == NULL ? "null" : var230->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "MMethodDef", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelize_property, 931);
fatal_exit(1);
}
{
{ /* Inline model#MMethodDef#msignature (var230) on <var230:MPropDef(MMethodDef)> */
var236 = var230->attrs[COLOR_nitc__model__MMethodDef___msignature].val; /* _msignature on <var230:MPropDef(MMethodDef)> */
var234 = var236;
RET_LABEL235:(void)0;
}
}
var_msignature = var234;
} else {
}
} else {
}
{
((void(*)(val* self))((((long)var_205&3)?class_info[((long)var_205&3)]:var_205->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_205); /* next on <var_205:IndexedIterator[MClassType]>*/
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_205&3)?class_info[((long)var_205&3)]:var_205->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_205); /* finish on <var_205:IndexedIterator[MClassType]>*/
}
} else {
}
}
if (var_msignature == NULL) {
var240 = 0; /* is null */
} else {
var240 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_msignature,((val*)NULL)) on <var_msignature:nullable MSignature> */
var_other36 = ((val*)NULL);
{
var243 = ((short int(*)(val* self, val* p0))(var_msignature->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_msignature, var_other36); /* == on <var_msignature:nullable MSignature(MSignature)>*/
}
var244 = !var243;
var241 = var244;
goto RET_LABEL242;
RET_LABEL242:(void)0;
}
var240 = var241;
}
var_245 = var240;
if (var240){
{
{ /* Inline array#AbstractArrayRead#length (var_param_names) on <var_param_names:Array[String]> */
var248 = var_param_names->attrs[COLOR_core__array__AbstractArrayRead___length].l; /* _length on <var_param_names:Array[String]> */
var246 = var248;
RET_LABEL247:(void)0;
}
}
{
{ /* Inline array#AbstractArrayRead#length (var_param_types) on <var_param_types:Array[MType]> */
var251 = var_param_types->attrs[COLOR_core__array__AbstractArrayRead___length].l; /* _length on <var_param_types:Array[MType]> */
var249 = var251;
RET_LABEL250:(void)0;
}
}
{
{ /* Inline kernel#Int#!= (var246,var249) on <var246:Int> */
var254 = var246 == var249;
var255 = !var254;
var252 = var255;
goto RET_LABEL253;
RET_LABEL253:(void)0;
}
}
var239 = var252;
} else {
var239 = var_245;
}
var_256 = var239;
if (var239){
{
{ /* Inline array#AbstractArrayRead#length (var_param_names) on <var_param_names:Array[String]> */
var259 = var_param_names->attrs[COLOR_core__array__AbstractArrayRead___length].l; /* _length on <var_param_names:Array[String]> */
var257 = var259;
RET_LABEL258:(void)0;
}
}
{
var260 = nitc___nitc__MSignature___arity(var_msignature);
}
{
{ /* Inline kernel#Int#== (var257,var260) on <var257:Int> */
var263 = var257 == var260;
var261 = var263;
goto RET_LABEL262;
RET_LABEL262:(void)0;
}
}
var238 = var261;
} else {
var238 = var_256;
}
var_264 = var238;
if (var238){
{
{ /* Inline array#AbstractArrayRead#length (var_param_types) on <var_param_types:Array[MType]> */
var267 = var_param_types->attrs[COLOR_core__array__AbstractArrayRead___length].l; /* _length on <var_param_types:Array[MType]> */
var265 = var267;
RET_LABEL266:(void)0;
}
}
{
{ /* Inline kernel#Int#== (var265,0l) on <var265:Int> */
var270 = var265 == 0l;
var268 = var270;
goto RET_LABEL269;
RET_LABEL269:(void)0;
}
}
var237 = var268;
} else {
var237 = var_264;
}
if (var237){
var271 = NEW_core__Array(&type_core__Array__nitc__MType);
{
core___core__Array___core__kernel__Object__init(var271); /* Direct call array#Array#init on <var271:Array[MType]>*/
}
var_param_types = var271;
{
{ /* Inline model#MSignature#mparameters (var_msignature) on <var_msignature:nullable MSignature(MSignature)> */
var274 = var_msignature->attrs[COLOR_nitc__model__MSignature___mparameters].val; /* _mparameters on <var_msignature:nullable MSignature(MSignature)> */
if (unlikely(var274 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mparameters");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1879);
fatal_exit(1);
}
var272 = var274;
RET_LABEL273:(void)0;
}
}
var_275 = var272;
{
var276 = core___core__AbstractArrayRead___core__abstract_collection__Collection__iterator(var_275);
}
var_277 = var276;
for(;;) {
{
var278 = ((short int(*)(val* self))((((long)var_277&3)?class_info[((long)var_277&3)]:var_277->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_277); /* is_ok on <var_277:IndexedIterator[MParameter]>*/
}
if (var278){
} else {
goto BREAK_label279;
}
{
var280 = ((val*(*)(val* self))((((long)var_277&3)?class_info[((long)var_277&3)]:var_277->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_277); /* item on <var_277:IndexedIterator[MParameter]>*/
}
var_mparameter = var280;
{
{ /* Inline model#MParameter#mtype (var_mparameter) on <var_mparameter:MParameter> */
var283 = var_mparameter->attrs[COLOR_nitc__model__MParameter___mtype].val; /* _mtype on <var_mparameter:MParameter> */
if (unlikely(var283 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1996);
fatal_exit(1);
}
var281 = var283;
RET_LABEL282:(void)0;
}
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_param_types, var281); /* Direct call array#Array#add on <var_param_types:Array[MType]>*/
}
{
((void(*)(val* self))((((long)var_277&3)?class_info[((long)var_277&3)]:var_277->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_277); /* next on <var_277:IndexedIterator[MParameter]>*/
}
}
BREAK_label279: (void)0;
{
((void(*)(val* self))((((long)var_277&3)?class_info[((long)var_277&3)]:var_277->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_277); /* finish on <var_277:IndexedIterator[MParameter]>*/
}
{
{ /* Inline model#MSignature#vararg_rank (var_msignature) on <var_msignature:nullable MSignature(MSignature)> */
var286 = var_msignature->attrs[COLOR_nitc__model__MSignature___vararg_rank].l; /* _vararg_rank on <var_msignature:nullable MSignature(MSignature)> */
var284 = var286;
RET_LABEL285:(void)0;
}
}
var_vararg_rank = var284;
} else {
}
if (var_msignature == NULL) {
var288 = 0; /* is null */
} else {
var288 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_msignature,((val*)NULL)) on <var_msignature:nullable MSignature> */
var_other36 = ((val*)NULL);
{
var291 = ((short int(*)(val* self, val* p0))(var_msignature->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_msignature, var_other36); /* == on <var_msignature:nullable MSignature(MSignature)>*/
}
var292 = !var291;
var289 = var292;
goto RET_LABEL290;
RET_LABEL290:(void)0;
}
var288 = var289;
}
var_293 = var288;
if (var288){
if (var_ret_type == NULL) {
var294 = 1; /* is null */
} else {
var294 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_ret_type,((val*)NULL)) on <var_ret_type:nullable MType> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_ret_type,var_other) on <var_ret_type:nullable MType(MType)> */
var299 = var_ret_type == var_other;
var297 = var299;
goto RET_LABEL298;
RET_LABEL298:(void)0;
}
}
var295 = var297;
goto RET_LABEL296;
RET_LABEL296:(void)0;
}
var294 = var295;
}
var287 = var294;
} else {
var287 = var_293;
}
if (var287){
{
{ /* Inline model#MSignature#return_mtype (var_msignature) on <var_msignature:nullable MSignature(MSignature)> */
var302 = var_msignature->attrs[COLOR_nitc__model__MSignature___return_mtype].val; /* _return_mtype on <var_msignature:nullable MSignature(MSignature)> */
var300 = var302;
RET_LABEL301:(void)0;
}
}
var_ret_type = var300;
} else {
}
{
{ /* Inline array#AbstractArrayRead#length (var_param_names) on <var_param_names:Array[String]> */
var305 = var_param_names->attrs[COLOR_core__array__AbstractArrayRead___length].l; /* _length on <var_param_names:Array[String]> */
var303 = var305;
RET_LABEL304:(void)0;
}
}
{
{ /* Inline array#AbstractArrayRead#length (var_param_types) on <var_param_types:Array[MType]> */
var308 = var_param_types->attrs[COLOR_core__array__AbstractArrayRead___length].l; /* _length on <var_param_types:Array[MType]> */
var306 = var308;
RET_LABEL307:(void)0;
}
}
{
{ /* Inline kernel#Int#!= (var303,var306) on <var303:Int> */
var311 = var303 == var306;
var312 = !var311;
var309 = var312;
goto RET_LABEL310;
RET_LABEL310:(void)0;
}
}
if (var309){
if (var_nsig == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelize_property, 953);
fatal_exit(1);
} else {
{ /* Inline parser_nodes#ASignature#n_params (var_nsig) on <var_nsig:nullable ASignature> */
if (unlikely(var_nsig == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 1746);
fatal_exit(1);
}
var315 = var_nsig->attrs[COLOR_nitc__parser_nodes__ASignature___n_params].val; /* _n_params on <var_nsig:nullable ASignature> */
if (unlikely(var315 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_params");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 1746);
fatal_exit(1);
}
var313 = var315;
RET_LABEL314:(void)0;
}
}
{
{ /* Inline array#AbstractArrayRead#length (var_param_types) on <var_param_types:Array[MType]> */
var318 = var_param_types->attrs[COLOR_core__array__AbstractArrayRead___length].l; /* _length on <var_param_types:Array[MType]> */
var316 = var318;
RET_LABEL317:(void)0;
}
}
{
var319 = nitc___nitc__ANodes___core__abstract_collection__SequenceRead___91d_93d(var313, var316);
}
if (unlikely(varonce320==NULL)) {
var321 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce322!=NULL)) {
var323 = varonce322;
} else {
var324 = "Error: untyped parameter `";
var325 = core__abstract_text___CString___to_s_full(var324, 26l, 26l);
var323 = var325;
varonce322 = var323;
}
((struct instance_core__NativeArray*)var321)->values[0]=var323;
if (likely(varonce326!=NULL)) {
var327 = varonce326;
} else {
var328 = "\'.";
var329 = core__abstract_text___CString___to_s_full(var328, 2l, 2l);
var327 = var329;
varonce326 = var327;
}
((struct instance_core__NativeArray*)var321)->values[2]=var327;
} else {
var321 = varonce320;
varonce320 = NULL;
}
{
{ /* Inline array#AbstractArrayRead#length (var_param_types) on <var_param_types:Array[MType]> */
var332 = var_param_types->attrs[COLOR_core__array__AbstractArrayRead___length].l; /* _length on <var_param_types:Array[MType]> */
var330 = var332;
RET_LABEL331:(void)0;
}
}
{
var333 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_param_names, var330);
}
((struct instance_core__NativeArray*)var321)->values[1]=var333;
{
var334 = ((val*(*)(val* self))(var321->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var321); /* native_to_s on <var321:NativeArray[String]>*/
}
varonce320 = var321;
{
nitc___nitc__ModelBuilder___error(var_modelbuilder, var319, var334); /* Direct call modelbuilder_base#ModelBuilder#error on <var_modelbuilder:ModelBuilder>*/
}
goto RET_LABEL;
} else {
}
var335 = NEW_core__Array(&type_core__Array__nitc__MParameter);
{
core___core__Array___core__kernel__Object__init(var335); /* Direct call array#Array#init on <var335:Array[MParameter]>*/
}
var_mparameters = var335;
var_i = 0l;
{
{ /* Inline array#AbstractArrayRead#length (var_param_names) on <var_param_names:Array[String]> */
var338 = var_param_names->attrs[COLOR_core__array__AbstractArrayRead___length].l; /* _length on <var_param_names:Array[String]> */
var336 = var338;
RET_LABEL337:(void)0;
}
}
var_339 = var336;
for(;;) {
{
{ /* Inline kernel#Int#< (var_i,var_339) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var_339:Int> isa OTHER */
/* <var_339:Int> isa OTHER */
var342 = 1; /* easy <var_339:Int> isa OTHER*/
if (unlikely(!var342)) {
var_class_name345 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name345);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var346 = var_i < var_339;
var340 = var346;
goto RET_LABEL341;
RET_LABEL341:(void)0;
}
}
if (var340){
} else {
goto BREAK_label347;
}
var348 = NEW_nitc__MParameter(&type_nitc__MParameter);
{
var349 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_param_names, var_i);
}
{
var350 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_param_types, var_i);
}
{
{ /* Inline kernel#Int#== (var_i,var_vararg_rank) on <var_i:Int> */
var353 = var_i == var_vararg_rank;
var351 = var353;
goto RET_LABEL352;
RET_LABEL352:(void)0;
}
}
{
((void(*)(val* self, val* p0))(var348->class->vft[COLOR_nitc__model__MParameter__name_61d]))(var348, var349); /* name= on <var348:MParameter>*/
}
{
((void(*)(val* self, val* p0))(var348->class->vft[COLOR_nitc__model__MParameter__mtype_61d]))(var348, var350); /* mtype= on <var348:MParameter>*/
}
{
((void(*)(val* self, short int p0))(var348->class->vft[COLOR_nitc__model__MParameter__is_vararg_61d]))(var348, var351); /* is_vararg= on <var348:MParameter>*/
}
{
((void(*)(val* self))(var348->class->vft[COLOR_core__kernel__Object__init]))(var348); /* init on <var348:MParameter>*/
}
var_mparameter354 = var348;
if (var_nsig == NULL) {
var355 = 0; /* is null */
} else {
var355 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_nsig,((val*)NULL)) on <var_nsig:nullable ASignature> */
var_other36 = ((val*)NULL);
{
var358 = ((short int(*)(val* self, val* p0))(var_nsig->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_nsig, var_other36); /* == on <var_nsig:nullable ASignature(ASignature)>*/
}
var359 = !var358;
var356 = var359;
goto RET_LABEL357;
RET_LABEL357:(void)0;
}
var355 = var356;
}
if (var355){
{
{ /* Inline parser_nodes#ASignature#n_params (var_nsig) on <var_nsig:nullable ASignature(ASignature)> */
var362 = var_nsig->attrs[COLOR_nitc__parser_nodes__ASignature___n_params].val; /* _n_params on <var_nsig:nullable ASignature(ASignature)> */
if (unlikely(var362 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_params");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 1746);
fatal_exit(1);
}
var360 = var362;
RET_LABEL361:(void)0;
}
}
{
var363 = nitc___nitc__ANodes___core__abstract_collection__SequenceRead___91d_93d(var360, var_i);
}
{
{ /* Inline modelize_property#AParam#mparameter= (var363,var_mparameter354) on <var363:ANode(AParam)> */
var363->attrs[COLOR_nitc__modelize_property__AParam___mparameter].val = var_mparameter354; /* _mparameter on <var363:ANode(AParam)> */
RET_LABEL364:(void)0;
}
}
} else {
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_mparameters, var_mparameter354); /* Direct call array#Array#add on <var_mparameters:Array[MParameter]>*/
}
{
var365 = core___core__Int___Discrete__successor(var_i, 1l);
}
var_i = var365;
}
BREAK_label347: (void)0;
if (var_ret_type == NULL) {
var367 = 1; /* is null */
} else {
var367 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_ret_type,((val*)NULL)) on <var_ret_type:nullable MType> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_ret_type,var_other) on <var_ret_type:nullable MType(MType)> */
var372 = var_ret_type == var_other;
var370 = var372;
goto RET_LABEL371;
RET_LABEL371:(void)0;
}
}
var368 = var370;
goto RET_LABEL369;
RET_LABEL369:(void)0;
}
var367 = var368;
}
var_373 = var367;
if (var367){
{
{ /* Inline model#MPropDef#mproperty (var_mpropdef) on <var_mpropdef:nullable MMethodDef(MMethodDef)> */
var376 = var_mpropdef->attrs[COLOR_nitc__model__MPropDef___mproperty].val; /* _mproperty on <var_mpropdef:nullable MMethodDef(MMethodDef)> */
if (unlikely(var376 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2357);
fatal_exit(1);
}
var374 = var376;
RET_LABEL375:(void)0;
}
}
{
{ /* Inline model#MMethod#is_new (var374) on <var374:MProperty(MMethod)> */
var379 = var374->attrs[COLOR_nitc__model__MMethod___is_new].s; /* _is_new on <var374:MProperty(MMethod)> */
var377 = var379;
RET_LABEL378:(void)0;
}
}
var366 = var377;
} else {
var366 = var_373;
}
if (var366){
{
{ /* Inline model#MClassDef#mclass (var_mclassdef) on <var_mclassdef:MClassDef> */
var382 = var_mclassdef->attrs[COLOR_nitc__model__MClassDef___mclass].val; /* _mclass on <var_mclassdef:MClassDef> */
if (unlikely(var382 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 591);
fatal_exit(1);
}
var380 = var382;
RET_LABEL381:(void)0;
}
}
{
{ /* Inline model#MClass#mclass_type (var380) on <var380:MClass> */
var385 = var380->attrs[COLOR_nitc__model__MClass___mclass_type].val; /* _mclass_type on <var380:MClass> */
if (unlikely(var385 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass_type");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 520);
fatal_exit(1);
}
var383 = var385;
RET_LABEL384:(void)0;
}
}
var_ret_type = var383;
} else {
}
var388 = !var_accept_special_last_parameter;
var_389 = var388;
if (var388){
{
var390 = core___core__Collection___not_empty(var_mparameters);
}
var387 = var390;
} else {
var387 = var_389;
}
var_391 = var387;
if (var387){
{
var392 = core___core__SequenceRead___last(var_mparameters);
}
{
{ /* Inline model#MParameter#is_vararg (var392) on <var392:nullable Object(MParameter)> */
var395 = var392->attrs[COLOR_nitc__model__MParameter___is_vararg].s; /* _is_vararg on <var392:nullable Object(MParameter)> */
var393 = var395;
RET_LABEL394:(void)0;
}
}
var386 = var393;
} else {
var386 = var_391;
}
if (var386){
{
{ /* Inline parser_nodes#AMethPropdef#n_signature (self) on <self:AMethPropdef> */
var398 = self->attrs[COLOR_nitc__parser_nodes__AMethPropdef___n_signature].val; /* _n_signature on <self:AMethPropdef> */
var396 = var398;
RET_LABEL397:(void)0;
}
}
if (var396 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelize_property, 969);
fatal_exit(1);
} else {
{ /* Inline parser_nodes#ASignature#n_params (var396) on <var396:nullable ASignature> */
if (unlikely(var396 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 1746);
fatal_exit(1);
}
var401 = var396->attrs[COLOR_nitc__parser_nodes__ASignature___n_params].val; /* _n_params on <var396:nullable ASignature> */
if (unlikely(var401 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_params");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 1746);
fatal_exit(1);
}
var399 = var401;
RET_LABEL400:(void)0;
}
}
{
var402 = core___core__SequenceRead___last(var399);
}
if (unlikely(varonce403==NULL)) {
var404 = NEW_core__NativeArray(5l, &type_core__NativeArray__core__String);
if (likely(varonce405!=NULL)) {
var406 = varonce405;
} else {
var407 = "Error: illegal variadic parameter `";
var408 = core__abstract_text___CString___to_s_full(var407, 35l, 35l);
var406 = var408;
varonce405 = var406;
}
((struct instance_core__NativeArray*)var404)->values[0]=var406;
if (likely(varonce409!=NULL)) {
var410 = varonce409;
} else {
var411 = "` for `";
var412 = core__abstract_text___CString___to_s_full(var411, 7l, 7l);
var410 = var412;
varonce409 = var410;
}
((struct instance_core__NativeArray*)var404)->values[2]=var410;
if (likely(varonce413!=NULL)) {
var414 = varonce413;
} else {
var415 = "`.";
var416 = core__abstract_text___CString___to_s_full(var415, 2l, 2l);
var414 = var416;
varonce413 = var414;
}
((struct instance_core__NativeArray*)var404)->values[4]=var414;
} else {
var404 = varonce403;
varonce403 = NULL;
}
{
var417 = core___core__SequenceRead___last(var_mparameters);
}
{
var418 = ((val*(*)(val* self))(var417->class->vft[COLOR_core__abstract_text__Object__to_s]))(var417); /* to_s on <var417:nullable Object(MParameter)>*/
}
((struct instance_core__NativeArray*)var404)->values[1]=var418;
{
{ /* Inline model#MPropDef#mproperty (var_mpropdef) on <var_mpropdef:nullable MMethodDef(MMethodDef)> */
var421 = var_mpropdef->attrs[COLOR_nitc__model__MPropDef___mproperty].val; /* _mproperty on <var_mpropdef:nullable MMethodDef(MMethodDef)> */
if (unlikely(var421 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2357);
fatal_exit(1);
}
var419 = var421;
RET_LABEL420:(void)0;
}
}
{
{ /* Inline model#MProperty#name (var419) on <var419:MProperty(MMethod)> */
var424 = var419->attrs[COLOR_nitc__model__MProperty___name].val; /* _name on <var419:MProperty(MMethod)> */
if (unlikely(var424 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2047);
fatal_exit(1);
}
var422 = var424;
RET_LABEL423:(void)0;
}
}
((struct instance_core__NativeArray*)var404)->values[3]=var422;
{
var425 = ((val*(*)(val* self))(var404->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var404); /* native_to_s on <var404:NativeArray[String]>*/
}
varonce403 = var404;
{
nitc___nitc__ModelBuilder___error(var_modelbuilder, var402, var425); /* Direct call modelbuilder_base#ModelBuilder#error on <var_modelbuilder:ModelBuilder>*/
}
} else {
}
if (var_ret_type == NULL) {
var427 = 1; /* is null */
} else {
var427 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_ret_type,((val*)NULL)) on <var_ret_type:nullable MType> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_ret_type,var_other) on <var_ret_type:nullable MType(MType)> */
var432 = var_ret_type == var_other;
var430 = var432;
goto RET_LABEL431;
RET_LABEL431:(void)0;
}
}
var428 = var430;
goto RET_LABEL429;
RET_LABEL429:(void)0;
}
var427 = var428;
}
var_433 = var427;
if (var427){
var426 = var_return_is_mandatory;
} else {
var426 = var_433;
}
if (var426){
{
{ /* Inline parser_nodes#AMethPropdef#n_methid (self) on <self:AMethPropdef> */
var436 = self->attrs[COLOR_nitc__parser_nodes__AMethPropdef___n_methid].val; /* _n_methid on <self:AMethPropdef> */
var434 = var436;
RET_LABEL435:(void)0;
}
}
if (unlikely(varonce437==NULL)) {
var438 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce439!=NULL)) {
var440 = varonce439;
} else {
var441 = "Error: mandatory return type for `";
var442 = core__abstract_text___CString___to_s_full(var441, 34l, 34l);
var440 = var442;
varonce439 = var440;
}
((struct instance_core__NativeArray*)var438)->values[0]=var440;
if (likely(varonce443!=NULL)) {
var444 = varonce443;
} else {
var445 = "`.";
var446 = core__abstract_text___CString___to_s_full(var445, 2l, 2l);
var444 = var446;
varonce443 = var444;
}
((struct instance_core__NativeArray*)var438)->values[2]=var444;
} else {
var438 = varonce437;
varonce437 = NULL;
}
{
{ /* Inline model#MPropDef#mproperty (var_mpropdef) on <var_mpropdef:nullable MMethodDef(MMethodDef)> */
var449 = var_mpropdef->attrs[COLOR_nitc__model__MPropDef___mproperty].val; /* _mproperty on <var_mpropdef:nullable MMethodDef(MMethodDef)> */
if (unlikely(var449 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2357);
fatal_exit(1);
}
var447 = var449;
RET_LABEL448:(void)0;
}
}
{
{ /* Inline model#MProperty#name (var447) on <var447:MProperty(MMethod)> */
var452 = var447->attrs[COLOR_nitc__model__MProperty___name].val; /* _name on <var447:MProperty(MMethod)> */
if (unlikely(var452 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2047);
fatal_exit(1);
}
var450 = var452;
RET_LABEL451:(void)0;
}
}
((struct instance_core__NativeArray*)var438)->values[1]=var450;
{
var453 = ((val*(*)(val* self))(var438->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var438); /* native_to_s on <var438:NativeArray[String]>*/
}
varonce437 = var438;
{
nitc___nitc__ModelBuilder___error(var_modelbuilder, var434, var453); /* Direct call modelbuilder_base#ModelBuilder#error on <var_modelbuilder:ModelBuilder>*/
}
} else {
}
var454 = NEW_nitc__MSignature(&type_nitc__MSignature);
{
((void(*)(val* self, val* p0))(var454->class->vft[COLOR_nitc__model__MSignature__mparameters_61d]))(var454, var_mparameters); /* mparameters= on <var454:MSignature>*/
}
{
((void(*)(val* self, val* p0))(var454->class->vft[COLOR_nitc__model__MSignature__return_mtype_61d]))(var454, var_ret_type); /* return_mtype= on <var454:MSignature>*/
}
{
((void(*)(val* self))(var454->class->vft[COLOR_core__kernel__Object__init]))(var454); /* init on <var454:MSignature>*/
}
var_msignature = var454;
{
{ /* Inline model#MMethodDef#msignature= (var_mpropdef,var_msignature) on <var_mpropdef:nullable MMethodDef(MMethodDef)> */
var_mpropdef->attrs[COLOR_nitc__model__MMethodDef___msignature].val = var_msignature; /* _msignature on <var_mpropdef:nullable MMethodDef(MMethodDef)> */
RET_LABEL455:(void)0;
}
}
if (likely(varonce456!=NULL)) {
var457 = varonce456;
} else {
var458 = "abstract";
var459 = core__abstract_text___CString___to_s_full(var458, 8l, 8l);
var457 = var459;
varonce456 = var457;
}
{
var460 = nitc__annotation___Prod___get_single_annotation(self, var457, var_modelbuilder);
}
if (var460 == NULL) {
var461 = 0; /* is null */
} else {
var461 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var460,((val*)NULL)) on <var460:nullable AAnnotation> */
var_other36 = ((val*)NULL);
{
var464 = ((short int(*)(val* self, val* p0))(var460->class->vft[COLOR_core__kernel__Object___61d_61d]))(var460, var_other36); /* == on <var460:nullable AAnnotation(AAnnotation)>*/
}
var465 = !var464;
var462 = var465;
goto RET_LABEL463;
RET_LABEL463:(void)0;
}
var461 = var462;
}
{
{ /* Inline model#MMethodDef#is_abstract= (var_mpropdef,var461) on <var_mpropdef:nullable MMethodDef(MMethodDef)> */
var_mpropdef->attrs[COLOR_nitc__model__MMethodDef___is_abstract].s = var461; /* _is_abstract on <var_mpropdef:nullable MMethodDef(MMethodDef)> */
RET_LABEL466:(void)0;
}
}
if (likely(varonce467!=NULL)) {
var468 = varonce467;
} else {
var469 = "intern";
var470 = core__abstract_text___CString___to_s_full(var469, 6l, 6l);
var468 = var470;
varonce467 = var468;
}
{
var471 = nitc__annotation___Prod___get_single_annotation(self, var468, var_modelbuilder);
}
if (var471 == NULL) {
var472 = 0; /* is null */
} else {
var472 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var471,((val*)NULL)) on <var471:nullable AAnnotation> */
var_other36 = ((val*)NULL);
{
var475 = ((short int(*)(val* self, val* p0))(var471->class->vft[COLOR_core__kernel__Object___61d_61d]))(var471, var_other36); /* == on <var471:nullable AAnnotation(AAnnotation)>*/
}
var476 = !var475;
var473 = var476;
goto RET_LABEL474;
RET_LABEL474:(void)0;
}
var472 = var473;
}
{
{ /* Inline model#MMethodDef#is_intern= (var_mpropdef,var472) on <var_mpropdef:nullable MMethodDef(MMethodDef)> */
var_mpropdef->attrs[COLOR_nitc__model__MMethodDef___is_intern].s = var472; /* _is_intern on <var_mpropdef:nullable MMethodDef(MMethodDef)> */
RET_LABEL477:(void)0;
}
}
{
{ /* Inline parser_nodes#AMethPropdef#n_extern_code_block (self) on <self:AMethPropdef> */
var481 = self->attrs[COLOR_nitc__parser_nodes__AMethPropdef___n_extern_code_block].val; /* _n_extern_code_block on <self:AMethPropdef> */
var479 = var481;
RET_LABEL480:(void)0;
}
}
if (var479 == NULL) {
var482 = 0; /* is null */
} else {
var482 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var479,((val*)NULL)) on <var479:nullable AExternCodeBlock> */
var_other36 = ((val*)NULL);
{
var485 = ((short int(*)(val* self, val* p0))(var479->class->vft[COLOR_core__kernel__Object___61d_61d]))(var479, var_other36); /* == on <var479:nullable AExternCodeBlock(AExternCodeBlock)>*/
}
var486 = !var485;
var483 = var486;
goto RET_LABEL484;
RET_LABEL484:(void)0;
}
var482 = var483;
}
var_487 = var482;
if (var482){
var478 = var_487;
} else {
if (likely(varonce488!=NULL)) {
var489 = varonce488;
} else {
var490 = "extern";
var491 = core__abstract_text___CString___to_s_full(var490, 6l, 6l);
var489 = var491;
varonce488 = var489;
}
{
var492 = nitc__annotation___Prod___get_single_annotation(self, var489, var_modelbuilder);
}
if (var492 == NULL) {
var493 = 0; /* is null */
} else {
var493 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var492,((val*)NULL)) on <var492:nullable AAnnotation> */
var_other36 = ((val*)NULL);
{
var496 = ((short int(*)(val* self, val* p0))(var492->class->vft[COLOR_core__kernel__Object___61d_61d]))(var492, var_other36); /* == on <var492:nullable AAnnotation(AAnnotation)>*/
}
var497 = !var496;
var494 = var497;
goto RET_LABEL495;
RET_LABEL495:(void)0;
}
var493 = var494;
}
var478 = var493;
}
{
{ /* Inline model#MMethodDef#is_extern= (var_mpropdef,var478) on <var_mpropdef:nullable MMethodDef(MMethodDef)> */
var_mpropdef->attrs[COLOR_nitc__model__MMethodDef___is_extern].s = var478; /* _is_extern on <var_mpropdef:nullable MMethodDef(MMethodDef)> */
RET_LABEL498:(void)0;
}
}
if (likely(varonce499!=NULL)) {
var500 = varonce499;
} else {
var501 = "lazy";
var502 = core__abstract_text___CString___to_s_full(var501, 4l, 4l);
var500 = var502;
varonce499 = var500;
}
{
var503 = nitc__annotation___Prod___get_single_annotation(self, var500, var_modelbuilder);
}
var_at = var503;
if (var_at == NULL) {
var504 = 0; /* is null */
} else {
var504 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_at,((val*)NULL)) on <var_at:nullable AAnnotation> */
var_other36 = ((val*)NULL);
{
var507 = ((short int(*)(val* self, val* p0))(var_at->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_at, var_other36); /* == on <var_at:nullable AAnnotation(AAnnotation)>*/
}
var508 = !var507;
var505 = var508;
goto RET_LABEL506;
RET_LABEL506:(void)0;
}
var504 = var505;
}
if (var504){
if (likely(varonce509!=NULL)) {
var510 = varonce509;
} else {
var511 = "Syntax Error: `lazy` must be used on attributes.";
var512 = core__abstract_text___CString___to_s_full(var511, 48l, 48l);
var510 = var512;
varonce509 = var510;
}
{
nitc___nitc__ModelBuilder___error(var_modelbuilder, var_at, var510); /* Direct call modelbuilder_base#ModelBuilder#error on <var_modelbuilder:ModelBuilder>*/
}
} else {
}
if (likely(varonce513!=NULL)) {
var514 = varonce513;
} else {
var515 = "autoinit";
var516 = core__abstract_text___CString___to_s_full(var515, 8l, 8l);
var514 = var516;
varonce513 = var514;
}
{
var517 = nitc__annotation___Prod___get_single_annotation(self, var514, var_modelbuilder);
}
var_atautoinit = var517;
if (var_atautoinit == NULL) {
var518 = 0; /* is null */
} else {
var518 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_atautoinit,((val*)NULL)) on <var_atautoinit:nullable AAnnotation> */
var_other36 = ((val*)NULL);
{
var521 = ((short int(*)(val* self, val* p0))(var_atautoinit->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_atautoinit, var_other36); /* == on <var_atautoinit:nullable AAnnotation(AAnnotation)>*/
}
var522 = !var521;
var519 = var522;
goto RET_LABEL520;
RET_LABEL520:(void)0;
}
var518 = var519;
}
if (var518){
{
var523 = nitc___nitc__MPropDef___is_intro(var_mpropdef);
}
var524 = !var523;
if (var524){
if (likely(varonce525!=NULL)) {
var526 = varonce525;
} else {
var527 = "Error: `autoinit` cannot be set on redefinitions.";
var528 = core__abstract_text___CString___to_s_full(var527, 49l, 49l);
var526 = var528;
varonce525 = var526;
}
{
nitc___nitc__ModelBuilder___error(var_modelbuilder, var_atautoinit, var526); /* Direct call modelbuilder_base#ModelBuilder#error on <var_modelbuilder:ModelBuilder>*/
}
} else {
{
var529 = nitc___nitc__MClassDef___is_intro(var_mclassdef);
}
var530 = !var529;
if (var530){
if (likely(varonce531!=NULL)) {
var532 = varonce531;
} else {
var533 = "Error: `autoinit` cannot be used in class refinements.";
var534 = core__abstract_text___CString___to_s_full(var533, 54l, 54l);
var532 = var534;
varonce531 = var532;
}
{
nitc___nitc__ModelBuilder___error(var_modelbuilder, var_atautoinit, var532); /* Direct call modelbuilder_base#ModelBuilder#error on <var_modelbuilder:ModelBuilder>*/
}
} else {
{
{ /* Inline modelize_property#AMethPropdef#is_autoinit= (self,1) on <self:AMethPropdef> */
self->attrs[COLOR_nitc__modelize_property__AMethPropdef___is_autoinit].s = 1; /* _is_autoinit on <self:AMethPropdef> */
RET_LABEL535:(void)0;
}
}
}
}
} else {
}
RET_LABEL:;
}
/* method modelize_property#AMethPropdef#check_signature for (self: AMethPropdef, ModelBuilder) */
void nitc__modelize_property___AMethPropdef___APropdef__check_signature(val* self, val* p0) {
val* var_modelbuilder /* var modelbuilder: ModelBuilder */;
val* var /* : nullable MPropDef */;
val* var2 /* : nullable MPropDef */;
val* var_mpropdef /* var mpropdef: nullable MMethodDef */;
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
val* var15 /* : nullable ASignature */;
val* var17 /* : nullable ASignature */;
val* var_nsig /* var nsig: nullable ASignature */;
val* var18 /* : nullable MSignature */;
val* var20 /* : nullable MSignature */;
val* var_mysignature /* var mysignature: nullable MSignature */;
short int var21 /* : Bool */;
short int var22 /* : Bool */;
short int var24 /* : Bool */;
short int var26 /* : Bool */;
short int var27 /* : Bool */;
short int var28 /* : Bool */;
val* var_other30 /* var other: nullable Object */;
short int var31 /* : Bool */;
short int var32 /* : Bool */;
short int var33 /* : Bool */;
short int var34 /* : Bool */;
short int var37 /* : Bool */;
short int var38 /* : Bool */;
val* var39 /* : MProperty */;
val* var41 /* : MProperty */;
val* var42 /* : MPropDef */;
val* var44 /* : MPropDef */;
val* var45 /* : nullable MSignature */;
val* var47 /* : nullable MSignature */;
val* var_msignature /* var msignature: nullable MSignature */;
short int var48 /* : Bool */;
short int var49 /* : Bool */;
short int var51 /* : Bool */;
short int var53 /* : Bool */;
val* var54 /* : nullable MType */;
val* var56 /* : nullable MType */;
val* var_precursor_ret_type /* var precursor_ret_type: nullable MType */;
val* var57 /* : nullable MType */;
val* var59 /* : nullable MType */;
val* var_ret_type /* var ret_type: nullable MType */;
short int var60 /* : Bool */;
short int var61 /* : Bool */;
short int var62 /* : Bool */;
short int var64 /* : Bool */;
short int var65 /* : Bool */;
short int var_ /* var : Bool */;
short int var66 /* : Bool */;
short int var67 /* : Bool */;
short int var69 /* : Bool */;
short int var71 /* : Bool */;
val* var72 /* : nullable AType */;
val* var74 /* : nullable AType */;
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
val* var84 /* : MProperty */;
val* var86 /* : MProperty */;
val* var87 /* : String */;
val* var88 /* : String */;
long var91 /* : Int */;
short int var92 /* : Bool */;
short int var94 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var95 /* : Bool */;
long var_i /* var i: Int */;
long var96 /* : Int */;
long var_97 /* var : Int */;
short int var98 /* : Bool */;
short int var100 /* : Bool */;
int cltype101;
int idtype102;
const char* var_class_name103;
short int var104 /* : Bool */;
val* var105 /* : Array[MParameter] */;
val* var107 /* : Array[MParameter] */;
val* var108 /* : nullable Object */;
val* var109 /* : MType */;
val* var111 /* : MType */;
val* var_myt /* var myt: MType */;
val* var112 /* : Array[MParameter] */;
val* var114 /* : Array[MParameter] */;
val* var115 /* : nullable Object */;
val* var116 /* : MType */;
val* var118 /* : MType */;
val* var_prt /* var prt: MType */;
val* var119 /* : ANodes[AParam] */;
val* var121 /* : ANodes[AParam] */;
val* var122 /* : ANode */;
val* var_node /* var node: AParam */;
val* var123 /* : MClassType */;
val* var125 /* : MClassType */;
short int var126 /* : Bool */;
short int var127 /* : Bool */;
val* var129 /* : NativeArray[String] */;
static val* varonce128;
static val* varonce130;
val* var131 /* : String */;
char* var132 /* : CString */;
val* var133 /* : String */;
static val* varonce134;
val* var135 /* : String */;
char* var136 /* : CString */;
val* var137 /* : String */;
static val* varonce138;
val* var139 /* : String */;
char* var140 /* : CString */;
val* var141 /* : String */;
static val* varonce142;
val* var143 /* : String */;
char* var144 /* : CString */;
val* var145 /* : String */;
val* var146 /* : String */;
val* var147 /* : Array[MParameter] */;
val* var149 /* : Array[MParameter] */;
val* var150 /* : nullable Object */;
val* var151 /* : String */;
val* var153 /* : String */;
val* var154 /* : String */;
val* var155 /* : String */;
long var158 /* : Int */;
short int var159 /* : Bool */;
short int var160 /* : Bool */;
short int var162 /* : Bool */;
short int var163 /* : Bool */;
val* var_node164 /* var node: nullable ANode */;
short int var165 /* : Bool */;
short int var166 /* : Bool */;
short int var168 /* : Bool */;
short int var169 /* : Bool */;
val* var170 /* : nullable AType */;
val* var172 /* : nullable AType */;
short int var173 /* : Bool */;
short int var174 /* : Bool */;
short int var176 /* : Bool */;
short int var178 /* : Bool */;
short int var179 /* : Bool */;
short int var180 /* : Bool */;
short int var182 /* : Bool */;
short int var184 /* : Bool */;
val* var185 /* : MClassType */;
val* var187 /* : MClassType */;
short int var188 /* : Bool */;
short int var189 /* : Bool */;
val* var191 /* : NativeArray[String] */;
static val* varonce190;
static val* varonce192;
val* var193 /* : String */;
char* var194 /* : CString */;
val* var195 /* : String */;
static val* varonce196;
val* var197 /* : String */;
char* var198 /* : CString */;
val* var199 /* : String */;
static val* varonce200;
val* var201 /* : String */;
char* var202 /* : CString */;
val* var203 /* : String */;
val* var204 /* : String */;
val* var205 /* : String */;
val* var206 /* : String */;
short int var209 /* : Bool */;
short int var210 /* : Bool */;
short int var212 /* : Bool */;
short int var213 /* : Bool */;
long var_i214 /* var i: Int */;
long var215 /* : Int */;
long var_216 /* var : Int */;
short int var217 /* : Bool */;
short int var219 /* : Bool */;
int cltype220;
int idtype221;
const char* var_class_name222;
short int var223 /* : Bool */;
val* var225 /* : ANodes[AParam] */;
val* var227 /* : ANodes[AParam] */;
val* var228 /* : ANode */;
val* var229 /* : nullable AType */;
val* var231 /* : nullable AType */;
val* var_nt /* var nt: nullable AType */;
short int var232 /* : Bool */;
short int var233 /* : Bool */;
short int var235 /* : Bool */;
short int var236 /* : Bool */;
val* var237 /* : nullable MType */;
val* var239 /* : nullable MType */;
long var240 /* : Int */;
val* var241 /* : nullable AType */;
val* var243 /* : nullable AType */;
val* var_nt244 /* var nt: nullable AType */;
short int var245 /* : Bool */;
short int var246 /* : Bool */;
short int var248 /* : Bool */;
short int var249 /* : Bool */;
val* var250 /* : nullable MType */;
val* var252 /* : nullable MType */;
var_modelbuilder = p0;
{
{ /* Inline modelize_property#APropdef#mpropdef (self) on <self:AMethPropdef> */
var2 = self->attrs[COLOR_nitc__modelize_property__APropdef___mpropdef].val; /* _mpropdef on <self:AMethPropdef> */
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
{ /* Inline kernel#Object#== (var_mpropdef,((val*)NULL)) on <var_mpropdef:nullable MMethodDef> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_mpropdef,var_other) on <var_mpropdef:nullable MMethodDef(MMethodDef)> */
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
{ /* Inline model#MPropDef#mclassdef (var_mpropdef) on <var_mpropdef:nullable MMethodDef(MMethodDef)> */
var11 = var_mpropdef->attrs[COLOR_nitc__model__MPropDef___mclassdef].val; /* _mclassdef on <var_mpropdef:nullable MMethodDef(MMethodDef)> */
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
{
{ /* Inline parser_nodes#AMethPropdef#n_signature (self) on <self:AMethPropdef> */
var17 = self->attrs[COLOR_nitc__parser_nodes__AMethPropdef___n_signature].val; /* _n_signature on <self:AMethPropdef> */
var15 = var17;
RET_LABEL16:(void)0;
}
}
var_nsig = var15;
{
{ /* Inline model#MMethodDef#msignature (var_mpropdef) on <var_mpropdef:nullable MMethodDef(MMethodDef)> */
var20 = var_mpropdef->attrs[COLOR_nitc__model__MMethodDef___msignature].val; /* _msignature on <var_mpropdef:nullable MMethodDef(MMethodDef)> */
var18 = var20;
RET_LABEL19:(void)0;
}
}
var_mysignature = var18;
if (var_mysignature == NULL) {
var21 = 1; /* is null */
} else {
var21 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_mysignature,((val*)NULL)) on <var_mysignature:nullable MSignature> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_mysignature,var_other) on <var_mysignature:nullable MSignature(MSignature)> */
var26 = var_mysignature == var_other;
var24 = var26;
goto RET_LABEL25;
RET_LABEL25:(void)0;
}
}
var22 = var24;
goto RET_LABEL23;
RET_LABEL23:(void)0;
}
var21 = var22;
}
if (var21){
goto RET_LABEL;
} else {
}
if (var_nsig == NULL) {
var27 = 0; /* is null */
} else {
var27 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_nsig,((val*)NULL)) on <var_nsig:nullable ASignature> */
var_other30 = ((val*)NULL);
{
var31 = ((short int(*)(val* self, val* p0))(var_nsig->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_nsig, var_other30); /* == on <var_nsig:nullable ASignature(ASignature)>*/
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
var33 = nitc__modelize_property___ASignature___check_signature(var_nsig, var_modelbuilder, var_mclassdef);
}
var34 = !var33;
if (var34){
{
{ /* Inline model#MMethodDef#msignature= (var_mpropdef,((val*)NULL)) on <var_mpropdef:nullable MMethodDef(MMethodDef)> */
var_mpropdef->attrs[COLOR_nitc__model__MMethodDef___msignature].val = ((val*)NULL); /* _msignature on <var_mpropdef:nullable MMethodDef(MMethodDef)> */
RET_LABEL35:(void)0;
}
}
{
{ /* Inline model_base#MEntity#is_broken= (var_mpropdef,1) on <var_mpropdef:nullable MMethodDef(MMethodDef)> */
var_mpropdef->attrs[COLOR_nitc__model_base__MEntity___is_broken].s = 1; /* _is_broken on <var_mpropdef:nullable MMethodDef(MMethodDef)> */
RET_LABEL36:(void)0;
}
}
goto RET_LABEL;
} else {
}
} else {
}
{
var37 = nitc___nitc__MPropDef___is_intro(var_mpropdef);
}
var38 = !var37;
if (var38){
{
{ /* Inline model#MPropDef#mproperty (var_mpropdef) on <var_mpropdef:nullable MMethodDef(MMethodDef)> */
var41 = var_mpropdef->attrs[COLOR_nitc__model__MPropDef___mproperty].val; /* _mproperty on <var_mpropdef:nullable MMethodDef(MMethodDef)> */
if (unlikely(var41 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2357);
fatal_exit(1);
}
var39 = var41;
RET_LABEL40:(void)0;
}
}
{
{ /* Inline model#MProperty#intro (var39) on <var39:MProperty(MMethod)> */
var44 = var39->attrs[COLOR_nitc__model__MProperty___intro].val; /* _intro on <var39:MProperty(MMethod)> */
if (unlikely(var44 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2097);
fatal_exit(1);
}
var42 = var44;
RET_LABEL43:(void)0;
}
}
{
{ /* Inline model#MMethodDef#msignature (var42) on <var42:MPropDef(MMethodDef)> */
var47 = var42->attrs[COLOR_nitc__model__MMethodDef___msignature].val; /* _msignature on <var42:MPropDef(MMethodDef)> */
var45 = var47;
RET_LABEL46:(void)0;
}
}
var_msignature = var45;
if (var_msignature == NULL) {
var48 = 1; /* is null */
} else {
var48 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_msignature,((val*)NULL)) on <var_msignature:nullable MSignature> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_msignature,var_other) on <var_msignature:nullable MSignature(MSignature)> */
var53 = var_msignature == var_other;
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
{
{ /* Inline model#MSignature#return_mtype (var_msignature) on <var_msignature:nullable MSignature(MSignature)> */
var56 = var_msignature->attrs[COLOR_nitc__model__MSignature___return_mtype].val; /* _return_mtype on <var_msignature:nullable MSignature(MSignature)> */
var54 = var56;
RET_LABEL55:(void)0;
}
}
var_precursor_ret_type = var54;
{
{ /* Inline model#MSignature#return_mtype (var_mysignature) on <var_mysignature:nullable MSignature(MSignature)> */
var59 = var_mysignature->attrs[COLOR_nitc__model__MSignature___return_mtype].val; /* _return_mtype on <var_mysignature:nullable MSignature(MSignature)> */
var57 = var59;
RET_LABEL58:(void)0;
}
}
var_ret_type = var57;
if (var_ret_type == NULL) {
var61 = 0; /* is null */
} else {
var61 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_ret_type,((val*)NULL)) on <var_ret_type:nullable MType> */
var_other30 = ((val*)NULL);
{
var64 = ((short int(*)(val* self, val* p0))(var_ret_type->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_ret_type, var_other30); /* == on <var_ret_type:nullable MType(MType)>*/
}
var65 = !var64;
var62 = var65;
goto RET_LABEL63;
RET_LABEL63:(void)0;
}
var61 = var62;
}
var_ = var61;
if (var61){
if (var_precursor_ret_type == NULL) {
var66 = 1; /* is null */
} else {
var66 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_precursor_ret_type,((val*)NULL)) on <var_precursor_ret_type:nullable MType> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_precursor_ret_type,var_other) on <var_precursor_ret_type:nullable MType(MType)> */
var71 = var_precursor_ret_type == var_other;
var69 = var71;
goto RET_LABEL70;
RET_LABEL70:(void)0;
}
}
var67 = var69;
goto RET_LABEL68;
RET_LABEL68:(void)0;
}
var66 = var67;
}
var60 = var66;
} else {
var60 = var_;
}
if (var60){
if (var_nsig == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelize_property, 1025);
fatal_exit(1);
} else {
{ /* Inline parser_nodes#ASignature#n_type (var_nsig) on <var_nsig:nullable ASignature> */
if (unlikely(var_nsig == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 1752);
fatal_exit(1);
}
var74 = var_nsig->attrs[COLOR_nitc__parser_nodes__ASignature___n_type].val; /* _n_type on <var_nsig:nullable ASignature> */
var72 = var74;
RET_LABEL73:(void)0;
}
}
if (unlikely(varonce==NULL)) {
var75 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce76!=NULL)) {
var77 = varonce76;
} else {
var78 = "Redef Error: `";
var79 = core__abstract_text___CString___to_s_full(var78, 14l, 14l);
var77 = var79;
varonce76 = var77;
}
((struct instance_core__NativeArray*)var75)->values[0]=var77;
if (likely(varonce80!=NULL)) {
var81 = varonce80;
} else {
var82 = "` is a procedure, not a function.";
var83 = core__abstract_text___CString___to_s_full(var82, 33l, 33l);
var81 = var83;
varonce80 = var81;
}
((struct instance_core__NativeArray*)var75)->values[2]=var81;
} else {
var75 = varonce;
varonce = NULL;
}
{
{ /* Inline model#MPropDef#mproperty (var_mpropdef) on <var_mpropdef:nullable MMethodDef(MMethodDef)> */
var86 = var_mpropdef->attrs[COLOR_nitc__model__MPropDef___mproperty].val; /* _mproperty on <var_mpropdef:nullable MMethodDef(MMethodDef)> */
if (unlikely(var86 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2357);
fatal_exit(1);
}
var84 = var86;
RET_LABEL85:(void)0;
}
}
{
var87 = ((val*(*)(val* self))(var84->class->vft[COLOR_core__abstract_text__Object__to_s]))(var84); /* to_s on <var84:MProperty(MMethod)>*/
}
((struct instance_core__NativeArray*)var75)->values[1]=var87;
{
var88 = ((val*(*)(val* self))(var75->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var75); /* native_to_s on <var75:NativeArray[String]>*/
}
varonce = var75;
{
nitc___nitc__ModelBuilder___error(var_modelbuilder, var72, var88); /* Direct call modelbuilder_base#ModelBuilder#error on <var_modelbuilder:ModelBuilder>*/
}
{
{ /* Inline model#MMethodDef#msignature= (var_mpropdef,((val*)NULL)) on <var_mpropdef:nullable MMethodDef(MMethodDef)> */
var_mpropdef->attrs[COLOR_nitc__model__MMethodDef___msignature].val = ((val*)NULL); /* _msignature on <var_mpropdef:nullable MMethodDef(MMethodDef)> */
RET_LABEL89:(void)0;
}
}
{
{ /* Inline model_base#MEntity#is_broken= (var_mpropdef,1) on <var_mpropdef:nullable MMethodDef(MMethodDef)> */
var_mpropdef->attrs[COLOR_nitc__model_base__MEntity___is_broken].s = 1; /* _is_broken on <var_mpropdef:nullable MMethodDef(MMethodDef)> */
RET_LABEL90:(void)0;
}
}
goto RET_LABEL;
} else {
}
{
var91 = nitc___nitc__MSignature___arity(var_mysignature);
}
{
{ /* Inline kernel#Int#> (var91,0l) on <var91:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var94 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var94)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 727);
fatal_exit(1);
}
var95 = var91 > 0l;
var92 = var95;
goto RET_LABEL93;
RET_LABEL93:(void)0;
}
}
if (var92){
var_i = 0l;
{
var96 = nitc___nitc__MSignature___arity(var_mysignature);
}
var_97 = var96;
for(;;) {
{
{ /* Inline kernel#Int#< (var_i,var_97) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var_97:Int> isa OTHER */
/* <var_97:Int> isa OTHER */
var100 = 1; /* easy <var_97:Int> isa OTHER*/
if (unlikely(!var100)) {
var_class_name103 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name103);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var104 = var_i < var_97;
var98 = var104;
goto RET_LABEL99;
RET_LABEL99:(void)0;
}
}
if (var98){
} else {
goto BREAK_label;
}
{
{ /* Inline model#MSignature#mparameters (var_mysignature) on <var_mysignature:nullable MSignature(MSignature)> */
var107 = var_mysignature->attrs[COLOR_nitc__model__MSignature___mparameters].val; /* _mparameters on <var_mysignature:nullable MSignature(MSignature)> */
if (unlikely(var107 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mparameters");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1879);
fatal_exit(1);
}
var105 = var107;
RET_LABEL106:(void)0;
}
}
{
var108 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var105, var_i);
}
{
{ /* Inline model#MParameter#mtype (var108) on <var108:nullable Object(MParameter)> */
var111 = var108->attrs[COLOR_nitc__model__MParameter___mtype].val; /* _mtype on <var108:nullable Object(MParameter)> */
if (unlikely(var111 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1996);
fatal_exit(1);
}
var109 = var111;
RET_LABEL110:(void)0;
}
}
var_myt = var109;
{
{ /* Inline model#MSignature#mparameters (var_msignature) on <var_msignature:nullable MSignature(MSignature)> */
var114 = var_msignature->attrs[COLOR_nitc__model__MSignature___mparameters].val; /* _mparameters on <var_msignature:nullable MSignature(MSignature)> */
if (unlikely(var114 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mparameters");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1879);
fatal_exit(1);
}
var112 = var114;
RET_LABEL113:(void)0;
}
}
{
var115 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var112, var_i);
}
{
{ /* Inline model#MParameter#mtype (var115) on <var115:nullable Object(MParameter)> */
var118 = var115->attrs[COLOR_nitc__model__MParameter___mtype].val; /* _mtype on <var115:nullable Object(MParameter)> */
if (unlikely(var118 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1996);
fatal_exit(1);
}
var116 = var118;
RET_LABEL117:(void)0;
}
}
var_prt = var116;
if (var_nsig == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelize_property, 1036);
fatal_exit(1);
} else {
{ /* Inline parser_nodes#ASignature#n_params (var_nsig) on <var_nsig:nullable ASignature> */
if (unlikely(var_nsig == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 1746);
fatal_exit(1);
}
var121 = var_nsig->attrs[COLOR_nitc__parser_nodes__ASignature___n_params].val; /* _n_params on <var_nsig:nullable ASignature> */
if (unlikely(var121 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_params");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 1746);
fatal_exit(1);
}
var119 = var121;
RET_LABEL120:(void)0;
}
}
{
var122 = nitc___nitc__ANodes___core__abstract_collection__SequenceRead___91d_93d(var119, var_i);
}
var_node = var122;
{
{ /* Inline model#MClassDef#bound_mtype (var_mclassdef) on <var_mclassdef:MClassDef> */
var125 = var_mclassdef->attrs[COLOR_nitc__model__MClassDef___bound_mtype].val; /* _bound_mtype on <var_mclassdef:MClassDef> */
if (unlikely(var125 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _bound_mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 594);
fatal_exit(1);
}
var123 = var125;
RET_LABEL124:(void)0;
}
}
{
var126 = nitc___nitc__ModelBuilder___check_sametype(var_modelbuilder, var_node, var_mmodule, var123, var_myt, var_prt);
}
var127 = !var126;
if (var127){
if (unlikely(varonce128==NULL)) {
var129 = NEW_core__NativeArray(7l, &type_core__NativeArray__core__String);
if (likely(varonce130!=NULL)) {
var131 = varonce130;
} else {
var132 = "Redef Error: expected `";
var133 = core__abstract_text___CString___to_s_full(var132, 23l, 23l);
var131 = var133;
varonce130 = var131;
}
((struct instance_core__NativeArray*)var129)->values[0]=var131;
if (likely(varonce134!=NULL)) {
var135 = varonce134;
} else {
var136 = "` for parameter `";
var137 = core__abstract_text___CString___to_s_full(var136, 17l, 17l);
var135 = var137;
varonce134 = var135;
}
((struct instance_core__NativeArray*)var129)->values[2]=var135;
if (likely(varonce138!=NULL)) {
var139 = varonce138;
} else {
var140 = "\'; got `";
var141 = core__abstract_text___CString___to_s_full(var140, 8l, 8l);
var139 = var141;
varonce138 = var139;
}
((struct instance_core__NativeArray*)var129)->values[4]=var139;
if (likely(varonce142!=NULL)) {
var143 = varonce142;
} else {
var144 = "`.";
var145 = core__abstract_text___CString___to_s_full(var144, 2l, 2l);
var143 = var145;
varonce142 = var143;
}
((struct instance_core__NativeArray*)var129)->values[6]=var143;
} else {
var129 = varonce128;
varonce128 = NULL;
}
{
var146 = ((val*(*)(val* self))(var_prt->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_prt); /* to_s on <var_prt:MType>*/
}
((struct instance_core__NativeArray*)var129)->values[1]=var146;
{
{ /* Inline model#MSignature#mparameters (var_mysignature) on <var_mysignature:nullable MSignature(MSignature)> */
var149 = var_mysignature->attrs[COLOR_nitc__model__MSignature___mparameters].val; /* _mparameters on <var_mysignature:nullable MSignature(MSignature)> */
if (unlikely(var149 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mparameters");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1879);
fatal_exit(1);
}
var147 = var149;
RET_LABEL148:(void)0;
}
}
{
var150 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var147, var_i);
}
{
{ /* Inline model#MParameter#name (var150) on <var150:nullable Object(MParameter)> */
var153 = var150->attrs[COLOR_nitc__model__MParameter___name].val; /* _name on <var150:nullable Object(MParameter)> */
if (unlikely(var153 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1993);
fatal_exit(1);
}
var151 = var153;
RET_LABEL152:(void)0;
}
}
((struct instance_core__NativeArray*)var129)->values[3]=var151;
{
var154 = ((val*(*)(val* self))(var_myt->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_myt); /* to_s on <var_myt:MType>*/
}
((struct instance_core__NativeArray*)var129)->values[5]=var154;
{
var155 = ((val*(*)(val* self))(var129->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var129); /* native_to_s on <var129:NativeArray[String]>*/
}
varonce128 = var129;
{
nitc___nitc__ModelBuilder___error(var_modelbuilder, var_node, var155); /* Direct call modelbuilder_base#ModelBuilder#error on <var_modelbuilder:ModelBuilder>*/
}
{
{ /* Inline model#MMethodDef#msignature= (var_mpropdef,((val*)NULL)) on <var_mpropdef:nullable MMethodDef(MMethodDef)> */
var_mpropdef->attrs[COLOR_nitc__model__MMethodDef___msignature].val = ((val*)NULL); /* _msignature on <var_mpropdef:nullable MMethodDef(MMethodDef)> */
RET_LABEL156:(void)0;
}
}
{
{ /* Inline model_base#MEntity#is_broken= (var_mpropdef,1) on <var_mpropdef:nullable MMethodDef(MMethodDef)> */
var_mpropdef->attrs[COLOR_nitc__model_base__MEntity___is_broken].s = 1; /* _is_broken on <var_mpropdef:nullable MMethodDef(MMethodDef)> */
RET_LABEL157:(void)0;
}
}
} else {
}
{
var158 = core___core__Int___Discrete__successor(var_i, 1l);
}
var_i = var158;
}
BREAK_label: (void)0;
} else {
}
if (var_precursor_ret_type == NULL) {
var159 = 0; /* is null */
} else {
var159 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_precursor_ret_type,((val*)NULL)) on <var_precursor_ret_type:nullable MType> */
var_other30 = ((val*)NULL);
{
var162 = ((short int(*)(val* self, val* p0))(var_precursor_ret_type->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_precursor_ret_type, var_other30); /* == on <var_precursor_ret_type:nullable MType(MType)>*/
}
var163 = !var162;
var160 = var163;
goto RET_LABEL161;
RET_LABEL161:(void)0;
}
var159 = var160;
}
if (var159){
var_node164 = ((val*)NULL);
if (var_nsig == NULL) {
var165 = 0; /* is null */
} else {
var165 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_nsig,((val*)NULL)) on <var_nsig:nullable ASignature> */
var_other30 = ((val*)NULL);
{
var168 = ((short int(*)(val* self, val* p0))(var_nsig->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_nsig, var_other30); /* == on <var_nsig:nullable ASignature(ASignature)>*/
}
var169 = !var168;
var166 = var169;
goto RET_LABEL167;
RET_LABEL167:(void)0;
}
var165 = var166;
}
if (var165){
{
{ /* Inline parser_nodes#ASignature#n_type (var_nsig) on <var_nsig:nullable ASignature(ASignature)> */
var172 = var_nsig->attrs[COLOR_nitc__parser_nodes__ASignature___n_type].val; /* _n_type on <var_nsig:nullable ASignature(ASignature)> */
var170 = var172;
RET_LABEL171:(void)0;
}
}
var_node164 = var170;
} else {
}
if (var_node164 == NULL) {
var173 = 1; /* is null */
} else {
var173 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_node164,((val*)NULL)) on <var_node164:nullable ANode> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_node164,var_other) on <var_node164:nullable ANode(ANode)> */
var178 = var_node164 == var_other;
var176 = var178;
goto RET_LABEL177;
RET_LABEL177:(void)0;
}
}
var174 = var176;
goto RET_LABEL175;
RET_LABEL175:(void)0;
}
var173 = var174;
}
if (var173){
var_node164 = self;
} else {
}
if (var_ret_type == NULL) {
var179 = 1; /* is null */
} else {
var179 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_ret_type,((val*)NULL)) on <var_ret_type:nullable MType> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_ret_type,var_other) on <var_ret_type:nullable MType(MType)> */
var184 = var_ret_type == var_other;
var182 = var184;
goto RET_LABEL183;
RET_LABEL183:(void)0;
}
}
var180 = var182;
goto RET_LABEL181;
RET_LABEL181:(void)0;
}
var179 = var180;
}
if (var179){
var_ret_type = var_precursor_ret_type;
} else {
{
{ /* Inline model#MClassDef#bound_mtype (var_mclassdef) on <var_mclassdef:MClassDef> */
var187 = var_mclassdef->attrs[COLOR_nitc__model__MClassDef___bound_mtype].val; /* _bound_mtype on <var_mclassdef:MClassDef> */
if (unlikely(var187 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _bound_mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 594);
fatal_exit(1);
}
var185 = var187;
RET_LABEL186:(void)0;
}
}
{
var188 = nitc___nitc__ModelBuilder___check_subtype(var_modelbuilder, var_node164, var_mmodule, var185, var_ret_type, var_precursor_ret_type);
}
var189 = !var188;
if (var189){
if (unlikely(varonce190==NULL)) {
var191 = NEW_core__NativeArray(5l, &type_core__NativeArray__core__String);
if (likely(varonce192!=NULL)) {
var193 = varonce192;
} else {
var194 = "Redef Error: expected `";
var195 = core__abstract_text___CString___to_s_full(var194, 23l, 23l);
var193 = var195;
varonce192 = var193;
}
((struct instance_core__NativeArray*)var191)->values[0]=var193;
if (likely(varonce196!=NULL)) {
var197 = varonce196;
} else {
var198 = "` for return type; got `";
var199 = core__abstract_text___CString___to_s_full(var198, 24l, 24l);
var197 = var199;
varonce196 = var197;
}
((struct instance_core__NativeArray*)var191)->values[2]=var197;
if (likely(varonce200!=NULL)) {
var201 = varonce200;
} else {
var202 = "`.";
var203 = core__abstract_text___CString___to_s_full(var202, 2l, 2l);
var201 = var203;
varonce200 = var201;
}
((struct instance_core__NativeArray*)var191)->values[4]=var201;
} else {
var191 = varonce190;
varonce190 = NULL;
}
{
var204 = ((val*(*)(val* self))(var_precursor_ret_type->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_precursor_ret_type); /* to_s on <var_precursor_ret_type:nullable MType(MType)>*/
}
((struct instance_core__NativeArray*)var191)->values[1]=var204;
{
var205 = ((val*(*)(val* self))(var_ret_type->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_ret_type); /* to_s on <var_ret_type:nullable MType(MType)>*/
}
((struct instance_core__NativeArray*)var191)->values[3]=var205;
{
var206 = ((val*(*)(val* self))(var191->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var191); /* native_to_s on <var191:NativeArray[String]>*/
}
varonce190 = var191;
{
nitc___nitc__ModelBuilder___error(var_modelbuilder, var_node164, var206); /* Direct call modelbuilder_base#ModelBuilder#error on <var_modelbuilder:ModelBuilder>*/
}
{
{ /* Inline model#MMethodDef#msignature= (var_mpropdef,((val*)NULL)) on <var_mpropdef:nullable MMethodDef(MMethodDef)> */
var_mpropdef->attrs[COLOR_nitc__model__MMethodDef___msignature].val = ((val*)NULL); /* _msignature on <var_mpropdef:nullable MMethodDef(MMethodDef)> */
RET_LABEL207:(void)0;
}
}
{
{ /* Inline model_base#MEntity#is_broken= (var_mpropdef,1) on <var_mpropdef:nullable MMethodDef(MMethodDef)> */
var_mpropdef->attrs[COLOR_nitc__model_base__MEntity___is_broken].s = 1; /* _is_broken on <var_mpropdef:nullable MMethodDef(MMethodDef)> */
RET_LABEL208:(void)0;
}
}
} else {
}
}
} else {
}
} else {
}
if (var_nsig == NULL) {
var209 = 0; /* is null */
} else {
var209 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_nsig,((val*)NULL)) on <var_nsig:nullable ASignature> */
var_other30 = ((val*)NULL);
{
var212 = ((short int(*)(val* self, val* p0))(var_nsig->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_nsig, var_other30); /* == on <var_nsig:nullable ASignature(ASignature)>*/
}
var213 = !var212;
var210 = var213;
goto RET_LABEL211;
RET_LABEL211:(void)0;
}
var209 = var210;
}
if (var209){
var_i214 = 0l;
{
var215 = nitc___nitc__MSignature___arity(var_mysignature);
}
var_216 = var215;
for(;;) {
{
{ /* Inline kernel#Int#< (var_i214,var_216) on <var_i214:Int> */
/* Covariant cast for argument 0 (i) <var_216:Int> isa OTHER */
/* <var_216:Int> isa OTHER */
var219 = 1; /* easy <var_216:Int> isa OTHER*/
if (unlikely(!var219)) {
var_class_name222 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name222);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var223 = var_i214 < var_216;
var217 = var223;
goto RET_LABEL218;
RET_LABEL218:(void)0;
}
}
if (var217){
} else {
goto BREAK_label224;
}
{
{ /* Inline parser_nodes#ASignature#n_params (var_nsig) on <var_nsig:nullable ASignature(ASignature)> */
var227 = var_nsig->attrs[COLOR_nitc__parser_nodes__ASignature___n_params].val; /* _n_params on <var_nsig:nullable ASignature(ASignature)> */
if (unlikely(var227 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_params");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 1746);
fatal_exit(1);
}
var225 = var227;
RET_LABEL226:(void)0;
}
}
{
var228 = nitc___nitc__ANodes___core__abstract_collection__SequenceRead___91d_93d(var225, var_i214);
}
{
{ /* Inline parser_nodes#AParam#n_type (var228) on <var228:ANode(AParam)> */
var231 = var228->attrs[COLOR_nitc__parser_nodes__AParam___n_type].val; /* _n_type on <var228:ANode(AParam)> */
var229 = var231;
RET_LABEL230:(void)0;
}
}
var_nt = var229;
if (var_nt == NULL) {
var232 = 0; /* is null */
} else {
var232 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_nt,((val*)NULL)) on <var_nt:nullable AType> */
var_other30 = ((val*)NULL);
{
var235 = ((short int(*)(val* self, val* p0))(var_nt->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_nt, var_other30); /* == on <var_nt:nullable AType(AType)>*/
}
var236 = !var235;
var233 = var236;
goto RET_LABEL234;
RET_LABEL234:(void)0;
}
var232 = var233;
}
if (var232){
{
{ /* Inline modelbuilder_base#AType#mtype (var_nt) on <var_nt:nullable AType(AType)> */
var239 = var_nt->attrs[COLOR_nitc__modelbuilder_base__AType___mtype].val; /* _mtype on <var_nt:nullable AType(AType)> */
var237 = var239;
RET_LABEL238:(void)0;
}
}
if (unlikely(var237 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelize_property, 1063);
fatal_exit(1);
}
{
nitc__modelize_property___ModelBuilder___check_visibility(var_modelbuilder, var_nt, var237, var_mpropdef); /* Direct call modelize_property#ModelBuilder#check_visibility on <var_modelbuilder:ModelBuilder>*/
}
} else {
}
{
var240 = core___core__Int___Discrete__successor(var_i214, 1l);
}
var_i214 = var240;
}
BREAK_label224: (void)0;
{
{ /* Inline parser_nodes#ASignature#n_type (var_nsig) on <var_nsig:nullable ASignature(ASignature)> */
var243 = var_nsig->attrs[COLOR_nitc__parser_nodes__ASignature___n_type].val; /* _n_type on <var_nsig:nullable ASignature(ASignature)> */
var241 = var243;
RET_LABEL242:(void)0;
}
}
var_nt244 = var241;
if (var_nt244 == NULL) {
var245 = 0; /* is null */
} else {
var245 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_nt244,((val*)NULL)) on <var_nt244:nullable AType> */
var_other30 = ((val*)NULL);
{
var248 = ((short int(*)(val* self, val* p0))(var_nt244->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_nt244, var_other30); /* == on <var_nt244:nullable AType(AType)>*/
}
var249 = !var248;
var246 = var249;
goto RET_LABEL247;
RET_LABEL247:(void)0;
}
var245 = var246;
}
if (var245){
{
{ /* Inline modelbuilder_base#AType#mtype (var_nt244) on <var_nt244:nullable AType(AType)> */
var252 = var_nt244->attrs[COLOR_nitc__modelbuilder_base__AType___mtype].val; /* _mtype on <var_nt244:nullable AType(AType)> */
var250 = var252;
RET_LABEL251:(void)0;
}
}
if (unlikely(var250 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelize_property, 1066);
fatal_exit(1);
}
{
nitc__modelize_property___ModelBuilder___check_visibility(var_modelbuilder, var_nt244, var250, var_mpropdef); /* Direct call modelize_property#ModelBuilder#check_visibility on <var_modelbuilder:ModelBuilder>*/
}
} else {
}
} else {
}
{
nitc__modelize_property___AMethPropdef___APropdef__check_repeated_types(self, var_modelbuilder); /* Direct call modelize_property#AMethPropdef#check_repeated_types on <self:AMethPropdef>*/
}
RET_LABEL:;
}
/* method modelize_property#AMethPropdef#check_repeated_types for (self: AMethPropdef, ModelBuilder) */
void nitc__modelize_property___AMethPropdef___APropdef__check_repeated_types(val* self, val* p0) {
val* var_modelbuilder /* var modelbuilder: ModelBuilder */;
val* var /* : nullable MPropDef */;
val* var2 /* : nullable MPropDef */;
val* var_mpropdef /* var mpropdef: nullable MMethodDef */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var6 /* : Bool */;
short int var8 /* : Bool */;
short int var9 /* : Bool */;
short int var10 /* : Bool */;
short int var_ /* var : Bool */;
val* var11 /* : nullable ASignature */;
val* var13 /* : nullable ASignature */;
short int var14 /* : Bool */;
short int var15 /* : Bool */;
short int var17 /* : Bool */;
short int var19 /* : Bool */;
val* var20 /* : nullable ASignature */;
val* var22 /* : nullable ASignature */;
val* var23 /* : ANodes[AParam] */;
val* var25 /* : ANodes[AParam] */;
val* var_26 /* var : ANodes[AParam] */;
val* var27 /* : Iterator[ANode] */;
val* var_28 /* var : Iterator[AParam] */;
short int var29 /* : Bool */;
val* var30 /* : nullable Object */;
val* var_param /* var param: AParam */;
val* var31 /* : nullable AType */;
val* var33 /* : nullable AType */;
short int var34 /* : Bool */;
short int var35 /* : Bool */;
val* var_other37 /* var other: nullable Object */;
short int var38 /* : Bool */;
short int var39 /* : Bool */;
val* var40 /* : nullable AType */;
val* var42 /* : nullable AType */;
static val* varonce;
val* var43 /* : String */;
char* var44 /* : CString */;
val* var45 /* : String */;
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
static val* varonce56;
val* var57 /* : String */;
char* var58 /* : CString */;
val* var59 /* : String */;
val* var60 /* : TId */;
val* var62 /* : TId */;
val* var63 /* : String */;
val* var64 /* : String */;
val* var65 /* : String */;
val* var66 /* : MProperty */;
val* var68 /* : MProperty */;
val* var69 /* : MPropDef */;
val* var71 /* : MPropDef */;
val* var_intro /* var intro: MMethodDef */;
val* var72 /* : HashMap[MPropDef, APropdef] */;
val* var74 /* : HashMap[MPropDef, APropdef] */;
val* var75 /* : nullable Object */;
val* var_n_intro /* var n_intro: nullable APropdef */;
short int var76 /* : Bool */;
short int var77 /* : Bool */;
short int var78 /* : Bool */;
short int var80 /* : Bool */;
short int var82 /* : Bool */;
short int var_83 /* var : Bool */;
short int var84 /* : Bool */;
int cltype;
int idtype;
short int var85 /* : Bool */;
val* var86 /* : nullable ASignature */;
val* var88 /* : nullable ASignature */;
val* var89 /* : nullable MType */;
val* var91 /* : nullable MType */;
val* var_ret_type /* var ret_type: nullable MType */;
short int var92 /* : Bool */;
short int var93 /* : Bool */;
short int var94 /* : Bool */;
short int var96 /* : Bool */;
short int var97 /* : Bool */;
short int var_98 /* var : Bool */;
val* var99 /* : nullable ASignature */;
val* var101 /* : nullable ASignature */;
val* var102 /* : nullable MType */;
val* var104 /* : nullable MType */;
short int var105 /* : Bool */;
short int var107 /* : Bool */;
short int var109 /* : Bool */;
val* var110 /* : nullable ASignature */;
val* var112 /* : nullable ASignature */;
val* var113 /* : nullable AType */;
val* var115 /* : nullable AType */;
static val* varonce116;
val* var117 /* : String */;
char* var118 /* : CString */;
val* var119 /* : String */;
val* var121 /* : NativeArray[String] */;
static val* varonce120;
static val* varonce122;
val* var123 /* : String */;
char* var124 /* : CString */;
val* var125 /* : String */;
static val* varonce126;
val* var127 /* : String */;
char* var128 /* : CString */;
val* var129 /* : String */;
val* var130 /* : String */;
val* var131 /* : String */;
var_modelbuilder = p0;
{
{ /* Inline modelize_property#APropdef#mpropdef (self) on <self:AMethPropdef> */
var2 = self->attrs[COLOR_nitc__modelize_property__APropdef___mpropdef].val; /* _mpropdef on <self:AMethPropdef> */
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
{ /* Inline kernel#Object#== (var_mpropdef,((val*)NULL)) on <var_mpropdef:nullable MMethodDef> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_mpropdef,var_other) on <var_mpropdef:nullable MMethodDef(MMethodDef)> */
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
var10 = nitc___nitc__MPropDef___is_intro(var_mpropdef);
}
var_ = var10;
if (var10){
var9 = var_;
} else {
{
{ /* Inline parser_nodes#AMethPropdef#n_signature (self) on <self:AMethPropdef> */
var13 = self->attrs[COLOR_nitc__parser_nodes__AMethPropdef___n_signature].val; /* _n_signature on <self:AMethPropdef> */
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
{ /* Inline kernel#Object#== (var11,((val*)NULL)) on <var11:nullable ASignature> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var11,var_other) on <var11:nullable ASignature(ASignature)> */
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
{ /* Inline parser_nodes#AMethPropdef#n_signature (self) on <self:AMethPropdef> */
var22 = self->attrs[COLOR_nitc__parser_nodes__AMethPropdef___n_signature].val; /* _n_signature on <self:AMethPropdef> */
var20 = var22;
RET_LABEL21:(void)0;
}
}
if (var20 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelize_property, 1078);
fatal_exit(1);
} else {
{ /* Inline parser_nodes#ASignature#n_params (var20) on <var20:nullable ASignature> */
if (unlikely(var20 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 1746);
fatal_exit(1);
}
var25 = var20->attrs[COLOR_nitc__parser_nodes__ASignature___n_params].val; /* _n_params on <var20:nullable ASignature> */
if (unlikely(var25 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_params");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 1746);
fatal_exit(1);
}
var23 = var25;
RET_LABEL24:(void)0;
}
}
var_26 = var23;
{
var27 = nitc___nitc__ANodes___core__abstract_collection__Collection__iterator(var_26);
}
var_28 = var27;
for(;;) {
{
var29 = ((short int(*)(val* self))((((long)var_28&3)?class_info[((long)var_28&3)]:var_28->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_28); /* is_ok on <var_28:Iterator[AParam]>*/
}
if (var29){
} else {
goto BREAK_label;
}
{
var30 = ((val*(*)(val* self))((((long)var_28&3)?class_info[((long)var_28&3)]:var_28->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_28); /* item on <var_28:Iterator[AParam]>*/
}
var_param = var30;
{
{ /* Inline parser_nodes#AParam#n_type (var_param) on <var_param:AParam> */
var33 = var_param->attrs[COLOR_nitc__parser_nodes__AParam___n_type].val; /* _n_type on <var_param:AParam> */
var31 = var33;
RET_LABEL32:(void)0;
}
}
if (var31 == NULL) {
var34 = 0; /* is null */
} else {
var34 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var31,((val*)NULL)) on <var31:nullable AType> */
var_other37 = ((val*)NULL);
{
var38 = ((short int(*)(val* self, val* p0))(var31->class->vft[COLOR_core__kernel__Object___61d_61d]))(var31, var_other37); /* == on <var31:nullable AType(AType)>*/
}
var39 = !var38;
var35 = var39;
goto RET_LABEL36;
RET_LABEL36:(void)0;
}
var34 = var35;
}
if (var34){
{
{ /* Inline parser_nodes#AParam#n_type (var_param) on <var_param:AParam> */
var42 = var_param->attrs[COLOR_nitc__parser_nodes__AParam___n_type].val; /* _n_type on <var_param:AParam> */
var40 = var42;
RET_LABEL41:(void)0;
}
}
if (likely(varonce!=NULL)) {
var43 = varonce;
} else {
var44 = "useless-signature";
var45 = core__abstract_text___CString___to_s_full(var44, 17l, 17l);
var43 = var45;
varonce = var43;
}
if (unlikely(varonce46==NULL)) {
var47 = NEW_core__NativeArray(5l, &type_core__NativeArray__core__String);
if (likely(varonce48!=NULL)) {
var49 = varonce48;
} else {
var50 = "Warning: useless type repetition on parameter `";
var51 = core__abstract_text___CString___to_s_full(var50, 47l, 47l);
var49 = var51;
varonce48 = var49;
}
((struct instance_core__NativeArray*)var47)->values[0]=var49;
if (likely(varonce52!=NULL)) {
var53 = varonce52;
} else {
var54 = "` for redefined method `";
var55 = core__abstract_text___CString___to_s_full(var54, 24l, 24l);
var53 = var55;
varonce52 = var53;
}
((struct instance_core__NativeArray*)var47)->values[2]=var53;
if (likely(varonce56!=NULL)) {
var57 = varonce56;
} else {
var58 = "`";
var59 = core__abstract_text___CString___to_s_full(var58, 1l, 1l);
var57 = var59;
varonce56 = var57;
}
((struct instance_core__NativeArray*)var47)->values[4]=var57;
} else {
var47 = varonce46;
varonce46 = NULL;
}
{
{ /* Inline parser_nodes#AParam#n_id (var_param) on <var_param:AParam> */
var62 = var_param->attrs[COLOR_nitc__parser_nodes__AParam___n_id].val; /* _n_id on <var_param:AParam> */
if (unlikely(var62 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_id");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 1760);
fatal_exit(1);
}
var60 = var62;
RET_LABEL61:(void)0;
}
}
{
var63 = nitc__lexer_work___Token___text(var60);
}
((struct instance_core__NativeArray*)var47)->values[1]=var63;
{
var64 = nitc___nitc__MPropDef___nitc__model_base__MEntity__name(var_mpropdef);
}
((struct instance_core__NativeArray*)var47)->values[3]=var64;
{
var65 = ((val*(*)(val* self))(var47->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var47); /* native_to_s on <var47:NativeArray[String]>*/
}
varonce46 = var47;
{
nitc___nitc__ModelBuilder___advice(var_modelbuilder, var40, var43, var65); /* Direct call modelbuilder_base#ModelBuilder#advice on <var_modelbuilder:ModelBuilder>*/
}
} else {
}
{
((void(*)(val* self))((((long)var_28&3)?class_info[((long)var_28&3)]:var_28->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_28); /* next on <var_28:Iterator[AParam]>*/
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_28&3)?class_info[((long)var_28&3)]:var_28->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_28); /* finish on <var_28:Iterator[AParam]>*/
}
{
{ /* Inline model#MPropDef#mproperty (var_mpropdef) on <var_mpropdef:nullable MMethodDef(MMethodDef)> */
var68 = var_mpropdef->attrs[COLOR_nitc__model__MPropDef___mproperty].val; /* _mproperty on <var_mpropdef:nullable MMethodDef(MMethodDef)> */
if (unlikely(var68 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2357);
fatal_exit(1);
}
var66 = var68;
RET_LABEL67:(void)0;
}
}
{
{ /* Inline model#MProperty#intro (var66) on <var66:MProperty(MMethod)> */
var71 = var66->attrs[COLOR_nitc__model__MProperty___intro].val; /* _intro on <var66:MProperty(MMethod)> */
if (unlikely(var71 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2097);
fatal_exit(1);
}
var69 = var71;
RET_LABEL70:(void)0;
}
}
var_intro = var69;
{
{ /* Inline modelize_property#ModelBuilder#mpropdef2npropdef (var_modelbuilder) on <var_modelbuilder:ModelBuilder> */
var74 = var_modelbuilder->attrs[COLOR_nitc__modelize_property__ModelBuilder___mpropdef2npropdef].val; /* _mpropdef2npropdef on <var_modelbuilder:ModelBuilder> */
if (unlikely(var74 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mpropdef2npropdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelize_property, 40);
fatal_exit(1);
}
var72 = var74;
RET_LABEL73:(void)0;
}
}
{
var75 = core___core__HashMap___core__abstract_collection__MapRead__get_or_null(var72, var_intro);
}
var_n_intro = var75;
if (var_n_intro == NULL) {
var77 = 1; /* is null */
} else {
var77 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_n_intro,((val*)NULL)) on <var_n_intro:nullable APropdef> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_n_intro,var_other) on <var_n_intro:nullable APropdef(APropdef)> */
var82 = var_n_intro == var_other;
var80 = var82;
goto RET_LABEL81;
RET_LABEL81:(void)0;
}
}
var78 = var80;
goto RET_LABEL79;
RET_LABEL79:(void)0;
}
var77 = var78;
}
var_83 = var77;
if (var77){
var76 = var_83;
} else {
/* <var_n_intro:nullable APropdef(APropdef)> isa AMethPropdef */
cltype = type_nitc__AMethPropdef.color;
idtype = type_nitc__AMethPropdef.id;
if(cltype >= var_n_intro->type->table_size) {
var84 = 0;
} else {
var84 = var_n_intro->type->type_table[cltype] == idtype;
}
var85 = !var84;
var76 = var85;
}
if (var76){
goto RET_LABEL;
} else {
}
{
{ /* Inline parser_nodes#AMethPropdef#n_signature (self) on <self:AMethPropdef> */
var88 = self->attrs[COLOR_nitc__parser_nodes__AMethPropdef___n_signature].val; /* _n_signature on <self:AMethPropdef> */
var86 = var88;
RET_LABEL87:(void)0;
}
}
if (var86 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelize_property, 1088);
fatal_exit(1);
} else {
{ /* Inline modelize_property#ASignature#ret_type (var86) on <var86:nullable ASignature> */
if (unlikely(var86 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelize_property, 668);
fatal_exit(1);
}
var91 = var86->attrs[COLOR_nitc__modelize_property__ASignature___ret_type].val; /* _ret_type on <var86:nullable ASignature> */
var89 = var91;
RET_LABEL90:(void)0;
}
}
var_ret_type = var89;
if (var_ret_type == NULL) {
var93 = 0; /* is null */
} else {
var93 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_ret_type,((val*)NULL)) on <var_ret_type:nullable MType> */
var_other37 = ((val*)NULL);
{
var96 = ((short int(*)(val* self, val* p0))(var_ret_type->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_ret_type, var_other37); /* == on <var_ret_type:nullable MType(MType)>*/
}
var97 = !var96;
var94 = var97;
goto RET_LABEL95;
RET_LABEL95:(void)0;
}
var93 = var94;
}
var_98 = var93;
if (var93){
{
{ /* Inline parser_nodes#AMethPropdef#n_signature (var_n_intro) on <var_n_intro:nullable APropdef(AMethPropdef)> */
var101 = var_n_intro->attrs[COLOR_nitc__parser_nodes__AMethPropdef___n_signature].val; /* _n_signature on <var_n_intro:nullable APropdef(AMethPropdef)> */
var99 = var101;
RET_LABEL100:(void)0;
}
}
if (var99 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelize_property, 1089);
fatal_exit(1);
} else {
{ /* Inline modelize_property#ASignature#ret_type (var99) on <var99:nullable ASignature> */
if (unlikely(var99 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelize_property, 668);
fatal_exit(1);
}
var104 = var99->attrs[COLOR_nitc__modelize_property__ASignature___ret_type].val; /* _ret_type on <var99:nullable ASignature> */
var102 = var104;
RET_LABEL103:(void)0;
}
}
{
{ /* Inline kernel#Object#== (var_ret_type,var102) on <var_ret_type:nullable MType(MType)> */
var_other = var102;
{
{ /* Inline kernel#Object#is_same_instance (var_ret_type,var_other) on <var_ret_type:nullable MType(MType)> */
var109 = var_ret_type == var_other;
var107 = var109;
goto RET_LABEL108;
RET_LABEL108:(void)0;
}
}
var105 = var107;
goto RET_LABEL106;
RET_LABEL106:(void)0;
}
}
var92 = var105;
} else {
var92 = var_98;
}
if (var92){
{
{ /* Inline parser_nodes#AMethPropdef#n_signature (self) on <self:AMethPropdef> */
var112 = self->attrs[COLOR_nitc__parser_nodes__AMethPropdef___n_signature].val; /* _n_signature on <self:AMethPropdef> */
var110 = var112;
RET_LABEL111:(void)0;
}
}
if (var110 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelize_property, 1090);
fatal_exit(1);
} else {
{ /* Inline parser_nodes#ASignature#n_type (var110) on <var110:nullable ASignature> */
if (unlikely(var110 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 1752);
fatal_exit(1);
}
var115 = var110->attrs[COLOR_nitc__parser_nodes__ASignature___n_type].val; /* _n_type on <var110:nullable ASignature> */
var113 = var115;
RET_LABEL114:(void)0;
}
}
if (likely(varonce116!=NULL)) {
var117 = varonce116;
} else {
var118 = "useless-signature";
var119 = core__abstract_text___CString___to_s_full(var118, 17l, 17l);
var117 = var119;
varonce116 = var117;
}
if (unlikely(varonce120==NULL)) {
var121 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce122!=NULL)) {
var123 = varonce122;
} else {
var124 = "Warning: useless return type repetition for redefined method `";
var125 = core__abstract_text___CString___to_s_full(var124, 62l, 62l);
var123 = var125;
varonce122 = var123;
}
((struct instance_core__NativeArray*)var121)->values[0]=var123;
if (likely(varonce126!=NULL)) {
var127 = varonce126;
} else {
var128 = "`";
var129 = core__abstract_text___CString___to_s_full(var128, 1l, 1l);
var127 = var129;
varonce126 = var127;
}
((struct instance_core__NativeArray*)var121)->values[2]=var127;
} else {
var121 = varonce120;
varonce120 = NULL;
}
{
var130 = nitc___nitc__MPropDef___nitc__model_base__MEntity__name(var_mpropdef);
}
((struct instance_core__NativeArray*)var121)->values[1]=var130;
{
var131 = ((val*(*)(val* self))(var121->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var121); /* native_to_s on <var121:NativeArray[String]>*/
}
varonce120 = var121;
{
nitc___nitc__ModelBuilder___advice(var_modelbuilder, var113, var117, var131); /* Direct call modelbuilder_base#ModelBuilder#advice on <var_modelbuilder:ModelBuilder>*/
}
} else {
}
RET_LABEL:;
}
/* method modelize_property#AMethid#return_is_mandatory for (self: AMethid): Bool */
short int nitc__modelize_property___AMethid___return_is_mandatory(val* self) {
short int var /* : Bool */;
var = 1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method modelize_property#AMethid#accept_special_last_parameter for (self: AMethid): Bool */
short int nitc__modelize_property___AMethid___accept_special_last_parameter(val* self) {
short int var /* : Bool */;
var = 0;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method modelize_property#AMethid#min_arity for (self: AMethid): Int */
long nitc__modelize_property___AMethid___min_arity(val* self) {
long var /* : Int */;
var = 1l;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method modelize_property#AMethid#is_binary for (self: AMethid): Bool */
short int nitc__modelize_property___AMethid___is_binary(val* self) {
short int var /* : Bool */;
var = 1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method modelize_property#AIdMethid#return_is_mandatory for (self: AIdMethid): Bool */
short int nitc__modelize_property___AIdMethid___AMethid__return_is_mandatory(val* self) {
short int var /* : Bool */;
var = 0;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method modelize_property#AIdMethid#accept_special_last_parameter for (self: AIdMethid): Bool */
short int nitc__modelize_property___AIdMethid___AMethid__accept_special_last_parameter(val* self) {
short int var /* : Bool */;
var = 1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method modelize_property#AIdMethid#min_arity for (self: AIdMethid): Int */
long nitc__modelize_property___AIdMethid___AMethid__min_arity(val* self) {
long var /* : Int */;
var = 0l;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method modelize_property#AIdMethid#is_binary for (self: AIdMethid): Bool */
short int nitc__modelize_property___AIdMethid___AMethid__is_binary(val* self) {
short int var /* : Bool */;
var = 0;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method modelize_property#ABraMethid#accept_special_last_parameter for (self: ABraMethid): Bool */
short int nitc__modelize_property___ABraMethid___AMethid__accept_special_last_parameter(val* self) {
short int var /* : Bool */;
var = 1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method modelize_property#ABraMethid#is_binary for (self: ABraMethid): Bool */
short int nitc__modelize_property___ABraMethid___AMethid__is_binary(val* self) {
short int var /* : Bool */;
var = 0;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method modelize_property#ABraassignMethid#return_is_mandatory for (self: ABraassignMethid): Bool */
short int nitc__modelize_property___ABraassignMethid___AMethid__return_is_mandatory(val* self) {
short int var /* : Bool */;
var = 0;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method modelize_property#ABraassignMethid#min_arity for (self: ABraassignMethid): Int */
long nitc__modelize_property___ABraassignMethid___AMethid__min_arity(val* self) {
long var /* : Int */;
var = 2l;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method modelize_property#ABraassignMethid#is_binary for (self: ABraassignMethid): Bool */
short int nitc__modelize_property___ABraassignMethid___AMethid__is_binary(val* self) {
short int var /* : Bool */;
var = 0;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method modelize_property#AAssignMethid#return_is_mandatory for (self: AAssignMethid): Bool */
short int nitc__modelize_property___AAssignMethid___AMethid__return_is_mandatory(val* self) {
short int var /* : Bool */;
var = 0;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method modelize_property#AAssignMethid#is_binary for (self: AAssignMethid): Bool */
short int nitc__modelize_property___AAssignMethid___AMethid__is_binary(val* self) {
short int var /* : Bool */;
var = 0;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method modelize_property#AAttrPropdef#mtype for (self: AAttrPropdef): nullable MType */
val* nitc__modelize_property___AAttrPropdef___mtype(val* self) {
val* var /* : nullable MType */;
val* var1 /* : nullable MType */;
var1 = self->attrs[COLOR_nitc__modelize_property__AAttrPropdef___mtype].val; /* _mtype on <self:AAttrPropdef> */
var = var1;
RET_LABEL:;
return var;
}
/* method modelize_property#AAttrPropdef#mtype= for (self: AAttrPropdef, nullable MType) */
void nitc__modelize_property___AAttrPropdef___mtype_61d(val* self, val* p0) {
self->attrs[COLOR_nitc__modelize_property__AAttrPropdef___mtype].val = p0; /* _mtype on <self:AAttrPropdef> */
RET_LABEL:;
}
/* method modelize_property#AAttrPropdef#noinit for (self: AAttrPropdef): Bool */
short int nitc__modelize_property___AAttrPropdef___noinit(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = self->attrs[COLOR_nitc__modelize_property__AAttrPropdef___noinit].s; /* _noinit on <self:AAttrPropdef> */
var = var1;
RET_LABEL:;
return var;
}
/* method modelize_property#AAttrPropdef#noinit= for (self: AAttrPropdef, Bool) */
void nitc__modelize_property___AAttrPropdef___noinit_61d(val* self, short int p0) {
self->attrs[COLOR_nitc__modelize_property__AAttrPropdef___noinit].s = p0; /* _noinit on <self:AAttrPropdef> */
RET_LABEL:;
}
/* method modelize_property#AAttrPropdef#is_lazy for (self: AAttrPropdef): Bool */
short int nitc__modelize_property___AAttrPropdef___is_lazy(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = self->attrs[COLOR_nitc__modelize_property__AAttrPropdef___is_lazy].s; /* _is_lazy on <self:AAttrPropdef> */
var = var1;
RET_LABEL:;
return var;
}
/* method modelize_property#AAttrPropdef#is_lazy= for (self: AAttrPropdef, Bool) */
void nitc__modelize_property___AAttrPropdef___is_lazy_61d(val* self, short int p0) {
self->attrs[COLOR_nitc__modelize_property__AAttrPropdef___is_lazy].s = p0; /* _is_lazy on <self:AAttrPropdef> */
RET_LABEL:;
}
/* method modelize_property#AAttrPropdef#is_optional for (self: AAttrPropdef): Bool */
short int nitc__modelize_property___AAttrPropdef___is_optional(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = self->attrs[COLOR_nitc__modelize_property__AAttrPropdef___is_optional].s; /* _is_optional on <self:AAttrPropdef> */
var = var1;
RET_LABEL:;
return var;
}
/* method modelize_property#AAttrPropdef#is_optional= for (self: AAttrPropdef, Bool) */
void nitc__modelize_property___AAttrPropdef___is_optional_61d(val* self, short int p0) {
self->attrs[COLOR_nitc__modelize_property__AAttrPropdef___is_optional].s = p0; /* _is_optional on <self:AAttrPropdef> */
RET_LABEL:;
}
/* method modelize_property#AAttrPropdef#has_value for (self: AAttrPropdef): Bool */
short int nitc__modelize_property___AAttrPropdef___has_value(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
var1 = self->attrs[COLOR_nitc__modelize_property__AAttrPropdef___has_value].s; /* _has_value on <self:AAttrPropdef> */
var = var1;
RET_LABEL:;
return var;
}
/* method modelize_property#AAttrPropdef#has_value= for (self: AAttrPropdef, Bool) */
void nitc__modelize_property___AAttrPropdef___has_value_61d(val* self, short int p0) {
self->attrs[COLOR_nitc__modelize_property__AAttrPropdef___has_value].s = p0; /* _has_value on <self:AAttrPropdef> */
RET_LABEL:;
}
/* method modelize_property#AAttrPropdef#mlazypropdef for (self: AAttrPropdef): nullable MAttributeDef */
val* nitc__modelize_property___AAttrPropdef___mlazypropdef(val* self) {
val* var /* : nullable MAttributeDef */;
val* var1 /* : nullable MAttributeDef */;
var1 = self->attrs[COLOR_nitc__modelize_property__AAttrPropdef___mlazypropdef].val; /* _mlazypropdef on <self:AAttrPropdef> */
var = var1;
RET_LABEL:;
return var;
}
/* method modelize_property#AAttrPropdef#mlazypropdef= for (self: AAttrPropdef, nullable MAttributeDef) */
void nitc__modelize_property___AAttrPropdef___mlazypropdef_61d(val* self, val* p0) {
self->attrs[COLOR_nitc__modelize_property__AAttrPropdef___mlazypropdef].val = p0; /* _mlazypropdef on <self:AAttrPropdef> */
RET_LABEL:;
}
/* method modelize_property#AAttrPropdef#mreadpropdef for (self: AAttrPropdef): nullable MMethodDef */
val* nitc__modelize_property___AAttrPropdef___mreadpropdef(val* self) {
val* var /* : nullable MMethodDef */;
val* var1 /* : nullable MMethodDef */;
var1 = self->attrs[COLOR_nitc__modelize_property__AAttrPropdef___mreadpropdef].val; /* _mreadpropdef on <self:AAttrPropdef> */
var = var1;
RET_LABEL:;
return var;
}
/* method modelize_property#AAttrPropdef#mreadpropdef= for (self: AAttrPropdef, nullable MMethodDef) */
void nitc__modelize_property___AAttrPropdef___mreadpropdef_61d(val* self, val* p0) {
self->attrs[COLOR_nitc__modelize_property__AAttrPropdef___mreadpropdef].val = p0; /* _mreadpropdef on <self:AAttrPropdef> */
RET_LABEL:;
}
/* method modelize_property#AAttrPropdef#mwritepropdef for (self: AAttrPropdef): nullable MMethodDef */
val* nitc__modelize_property___AAttrPropdef___mwritepropdef(val* self) {
val* var /* : nullable MMethodDef */;
val* var1 /* : nullable MMethodDef */;
var1 = self->attrs[COLOR_nitc__modelize_property__AAttrPropdef___mwritepropdef].val; /* _mwritepropdef on <self:AAttrPropdef> */
var = var1;
RET_LABEL:;
return var;
}
/* method modelize_property#AAttrPropdef#mwritepropdef= for (self: AAttrPropdef, nullable MMethodDef) */
void nitc__modelize_property___AAttrPropdef___mwritepropdef_61d(val* self, val* p0) {
self->attrs[COLOR_nitc__modelize_property__AAttrPropdef___mwritepropdef].val = p0; /* _mwritepropdef on <self:AAttrPropdef> */
RET_LABEL:;
}
/* method modelize_property#AAttrPropdef#build_property for (self: AAttrPropdef, ModelBuilder, MClassDef) */
void nitc__modelize_property___AAttrPropdef___APropdef__build_property(val* self, val* p0, val* p1) {
val* var_modelbuilder /* var modelbuilder: ModelBuilder */;
val* var_mclassdef /* var mclassdef: MClassDef */;
val* var /* : MClass */;
val* var2 /* : MClass */;
val* var_mclass /* var mclass: MClass */;
val* var3 /* : TId */;
val* var5 /* : TId */;
val* var_nid2 /* var nid2: TId */;
val* var6 /* : String */;
val* var_name /* var name: String */;
static val* varonce;
val* var7 /* : String */;
char* var8 /* : CString */;
val* var9 /* : String */;
val* var10 /* : nullable AAnnotation */;
val* var_atabstract /* var atabstract: nullable AAnnotation */;
short int var11 /* : Bool */;
short int var12 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var14 /* : Bool */;
short int var16 /* : Bool */;
val* var17 /* : MClassKind */;
val* var19 /* : MClassKind */;
short int var20 /* : Bool */;
short int var22 /* : Bool */;
short int var23 /* : Bool */;
val* var25 /* : NativeArray[String] */;
static val* varonce24;
static val* varonce26;
val* var27 /* : String */;
char* var28 /* : CString */;
val* var29 /* : String */;
static val* varonce30;
val* var31 /* : String */;
char* var32 /* : CString */;
val* var33 /* : String */;
static val* varonce34;
val* var35 /* : String */;
char* var36 /* : CString */;
val* var37 /* : String */;
static val* varonce38;
val* var39 /* : String */;
char* var40 /* : CString */;
val* var41 /* : String */;
val* var42 /* : MClassKind */;
val* var44 /* : MClassKind */;
val* var45 /* : String */;
val* var46 /* : String */;
val* var47 /* : String */;
val* var48 /* : MAttribute */;
static val* varonce49;
val* var50 /* : String */;
char* var51 /* : CString */;
val* var52 /* : String */;
val* var53 /* : Text */;
val* var54 /* : Location */;
val* var56 /* : Location */;
val* var57 /* : Sys */;
val* var58 /* : MVisibility */;
val* var_mprop /* var mprop: MAttribute */;
val* var59 /* : MAttributeDef */;
val* var60 /* : Location */;
val* var62 /* : Location */;
val* var_mpropdef /* var mpropdef: MAttributeDef */;
short int var63 /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
short int var65 /* : Bool */;
int cltype66;
int idtype67;
const struct type* type_struct68;
const char* var_class_name69;
val* var70 /* : HashMap[MPropDef, APropdef] */;
val* var72 /* : HashMap[MPropDef, APropdef] */;
val* var_readname /* var readname: String */;
val* var73 /* : nullable MProperty */;
short int var74 /* : Bool */;
int cltype75;
int idtype76;
const char* var_class_name77;
val* var_mreadprop /* var mreadprop: nullable MMethod */;
short int var78 /* : Bool */;
short int var79 /* : Bool */;
short int var81 /* : Bool */;
short int var83 /* : Bool */;
val* var84 /* : nullable AVisibility */;
val* var86 /* : nullable AVisibility */;
val* var87 /* : MVisibility */;
val* var_mvisibility /* var mvisibility: MVisibility */;
val* var88 /* : MMethod */;
val* var89 /* : Location */;
val* var91 /* : Location */;
val* var92 /* : nullable TKwredef */;
val* var94 /* : nullable TKwredef */;
short int var95 /* : Bool */;
short int var96 /* : Bool */;
short int var98 /* : Bool */;
short int var100 /* : Bool */;
val* var101 /* : nullable TKwredef */;
val* var103 /* : nullable TKwredef */;
short int var104 /* : Bool */;
short int var105 /* : Bool */;
val* var106 /* : nullable AVisibility */;
val* var108 /* : nullable AVisibility */;
val* var109 /* : Map[MProperty, APropdef] */;
val* var111 /* : Map[MProperty, APropdef] */;
val* var112 /* : MMethodDef */;
val* var113 /* : Location */;
val* var115 /* : Location */;
val* var_mreadpropdef /* var mreadpropdef: MMethodDef */;
val* var117 /* : HashMap[MPropDef, APropdef] */;
val* var119 /* : HashMap[MPropDef, APropdef] */;
val* var120 /* : nullable MPropDef */;
val* var122 /* : nullable MPropDef */;
short int var123 /* : Bool */;
short int var124 /* : Bool */;
val* var_other126 /* var other: nullable Object */;
short int var127 /* : Bool */;
short int var128 /* : Bool */;
val* var129 /* : nullable MPropDef */;
val* var131 /* : nullable MPropDef */;
val* var132 /* : nullable MDoc */;
val* var134 /* : nullable MDoc */;
short int var136 /* : Bool */;
short int var137 /* : Bool */;
short int var139 /* : Bool */;
short int var140 /* : Bool */;
short int var142 /* : Bool */;
val* var143 /* : nullable AExpr */;
val* var145 /* : nullable AExpr */;
short int var146 /* : Bool */;
short int var147 /* : Bool */;
short int var149 /* : Bool */;
short int var150 /* : Bool */;
short int var_ /* var : Bool */;
val* var151 /* : nullable AExpr */;
val* var153 /* : nullable AExpr */;
short int var154 /* : Bool */;
short int var155 /* : Bool */;
short int var157 /* : Bool */;
short int var158 /* : Bool */;
short int var160 /* : Bool */;
short int var161 /* : Bool */;
short int var162 /* : Bool */;
short int var164 /* : Bool */;
short int var165 /* : Bool */;
short int var_166 /* var : Bool */;
short int var167 /* : Bool */;
short int var169 /* : Bool */;
static val* varonce170;
val* var171 /* : String */;
char* var172 /* : CString */;
val* var173 /* : String */;
static val* varonce174;
val* var175 /* : String */;
char* var176 /* : CString */;
val* var177 /* : String */;
val* var178 /* : nullable AAnnotation */;
val* var_atnoinit /* var atnoinit: nullable AAnnotation */;
short int var179 /* : Bool */;
short int var180 /* : Bool */;
short int var182 /* : Bool */;
short int var184 /* : Bool */;
static val* varonce185;
val* var186 /* : String */;
char* var187 /* : CString */;
val* var188 /* : String */;
val* var189 /* : nullable AAnnotation */;
short int var190 /* : Bool */;
short int var191 /* : Bool */;
short int var193 /* : Bool */;
short int var194 /* : Bool */;
short int var196 /* : Bool */;
short int var198 /* : Bool */;
static val* varonce199;
val* var200 /* : String */;
char* var201 /* : CString */;
val* var202 /* : String */;
short int var203 /* : Bool */;
short int var204 /* : Bool */;
short int var206 /* : Bool */;
short int var207 /* : Bool */;
static val* varonce208;
val* var209 /* : String */;
char* var210 /* : CString */;
val* var211 /* : String */;
static val* varonce212;
val* var213 /* : String */;
char* var214 /* : CString */;
val* var215 /* : String */;
static val* varonce216;
val* var217 /* : String */;
char* var218 /* : CString */;
val* var219 /* : String */;
val* var220 /* : nullable AAnnotation */;
val* var_atlazy /* var atlazy: nullable AAnnotation */;
static val* varonce221;
val* var222 /* : String */;
char* var223 /* : CString */;
val* var224 /* : String */;
val* var225 /* : nullable AAnnotation */;
val* var_atlateinit /* var atlateinit: nullable AAnnotation */;
short int var226 /* : Bool */;
short int var227 /* : Bool */;
short int var228 /* : Bool */;
short int var230 /* : Bool */;
short int var231 /* : Bool */;
short int var_232 /* var : Bool */;
short int var233 /* : Bool */;
short int var234 /* : Bool */;
short int var236 /* : Bool */;
short int var237 /* : Bool */;
short int var238 /* : Bool */;
short int var239 /* : Bool */;
short int var240 /* : Bool */;
short int var242 /* : Bool */;
short int var243 /* : Bool */;
short int var_244 /* var : Bool */;
short int var245 /* : Bool */;
short int var246 /* : Bool */;
short int var248 /* : Bool */;
short int var249 /* : Bool */;
static val* varonce250;
val* var251 /* : String */;
char* var252 /* : CString */;
val* var253 /* : String */;
short int var254 /* : Bool */;
short int var256 /* : Bool */;
short int var257 /* : Bool */;
short int var258 /* : Bool */;
short int var259 /* : Bool */;
short int var261 /* : Bool */;
short int var262 /* : Bool */;
static val* varonce263;
val* var264 /* : String */;
char* var265 /* : CString */;
val* var266 /* : String */;
short int var267 /* : Bool */;
short int var268 /* : Bool */;
short int var270 /* : Bool */;
short int var271 /* : Bool */;
static val* varonce272;
val* var273 /* : String */;
char* var274 /* : CString */;
val* var275 /* : String */;
val* var278 /* : MAttribute */;
static val* varonce279;
val* var280 /* : String */;
char* var281 /* : CString */;
val* var282 /* : String */;
val* var283 /* : Text */;
val* var284 /* : Location */;
val* var286 /* : Location */;
val* var287 /* : Sys */;
val* var288 /* : MVisibility */;
val* var_mlazyprop /* var mlazyprop: MAttribute */;
val* var290 /* : MAttributeDef */;
val* var291 /* : Location */;
val* var293 /* : Location */;
val* var_mlazypropdef /* var mlazypropdef: MAttributeDef */;
static val* varonce296;
val* var297 /* : String */;
char* var298 /* : CString */;
val* var299 /* : String */;
val* var300 /* : nullable AAnnotation */;
val* var_atoptional /* var atoptional: nullable AAnnotation */;
short int var301 /* : Bool */;
short int var302 /* : Bool */;
short int var304 /* : Bool */;
short int var305 /* : Bool */;
short int var306 /* : Bool */;
short int var308 /* : Bool */;
short int var309 /* : Bool */;
static val* varonce310;
val* var311 /* : String */;
char* var312 /* : CString */;
val* var313 /* : String */;
static val* varonce315;
val* var316 /* : String */;
char* var317 /* : CString */;
val* var318 /* : String */;
val* var319 /* : nullable AAnnotation */;
val* var_atreadonly /* var atreadonly: nullable AAnnotation */;
short int var320 /* : Bool */;
short int var321 /* : Bool */;
short int var323 /* : Bool */;
short int var324 /* : Bool */;
short int var325 /* : Bool */;
short int var327 /* : Bool */;
short int var328 /* : Bool */;
static val* varonce329;
val* var330 /* : String */;
char* var331 /* : CString */;
val* var332 /* : String */;
short int var333 /* : Bool */;
short int var334 /* : Bool */;
short int var335 /* : Bool */;
short int var336 /* : Bool */;
short int var_337 /* var : Bool */;
short int var338 /* : Bool */;
short int var340 /* : Bool */;
short int var341 /* : Bool */;
short int var_342 /* var : Bool */;
short int var343 /* : Bool */;
short int var345 /* : Bool */;
short int var346 /* : Bool */;
static val* varonce347;
val* var348 /* : String */;
char* var349 /* : CString */;
val* var350 /* : String */;
static val* varonce351;
val* var352 /* : String */;
char* var353 /* : CString */;
val* var354 /* : String */;
static val* varonce355;
val* var356 /* : String */;
char* var357 /* : CString */;
val* var358 /* : String */;
val* var359 /* : Text */;
val* var_writename /* var writename: String */;
static val* varonce360;
val* var361 /* : String */;
char* var362 /* : CString */;
val* var363 /* : String */;
val* var364 /* : nullable AAnnotation */;
val* var_atwritable /* var atwritable: nullable AAnnotation */;
short int var365 /* : Bool */;
short int var366 /* : Bool */;
short int var368 /* : Bool */;
short int var369 /* : Bool */;
val* var370 /* : ANodes[AExpr] */;
val* var372 /* : ANodes[AExpr] */;
short int var373 /* : Bool */;
short int var374 /* : Bool */;
val* var375 /* : String */;
val* var376 /* : nullable String */;
val* var377 /* : nullable MProperty */;
short int var378 /* : Bool */;
int cltype379;
int idtype380;
const char* var_class_name381;
val* var_mwriteprop /* var mwriteprop: nullable MMethod */;
val* var_nwkwredef /* var nwkwredef: nullable Token */;
short int var382 /* : Bool */;
short int var383 /* : Bool */;
short int var385 /* : Bool */;
short int var386 /* : Bool */;
val* var387 /* : nullable TKwredef */;
val* var389 /* : nullable TKwredef */;
short int var390 /* : Bool */;
short int var391 /* : Bool */;
short int var393 /* : Bool */;
short int var395 /* : Bool */;
short int var396 /* : Bool */;
short int var397 /* : Bool */;
short int var399 /* : Bool */;
short int var400 /* : Bool */;
val* var401 /* : nullable AVisibility */;
val* var403 /* : nullable AVisibility */;
val* var404 /* : MVisibility */;
val* var_mvisibility405 /* var mvisibility: nullable Object */;
val* var406 /* : MVisibility */;
val* var408 /* : MVisibility */;
val* var409 /* : Sys */;
val* var410 /* : MVisibility */;
short int var411 /* : Bool */;
val* var412 /* : Sys */;
val* var413 /* : MVisibility */;
val* var414 /* : MMethod */;
val* var415 /* : Location */;
val* var417 /* : Location */;
short int var418 /* : Bool */;
short int var419 /* : Bool */;
val* var421 /* : nullable MDeprecationInfo */;
val* var423 /* : nullable MDeprecationInfo */;
short int var425 /* : Bool */;
short int var427 /* : Bool */;
val* var428 /* : nullable Token */;
val* var429 /* : nullable TKwredef */;
val* var431 /* : nullable TKwredef */;
short int var432 /* : Bool */;
short int var433 /* : Bool */;
short int var434 /* : Bool */;
short int var435 /* : Bool */;
short int var437 /* : Bool */;
short int var438 /* : Bool */;
val* var439 /* : nullable AVisibility */;
val* var441 /* : nullable AVisibility */;
val* var442 /* : Map[MProperty, APropdef] */;
val* var444 /* : Map[MProperty, APropdef] */;
val* var445 /* : MMethodDef */;
val* var446 /* : Location */;
val* var448 /* : Location */;
val* var_mwritepropdef /* var mwritepropdef: MMethodDef */;
val* var450 /* : HashMap[MPropDef, APropdef] */;
val* var452 /* : HashMap[MPropDef, APropdef] */;
val* var453 /* : nullable MDoc */;
val* var455 /* : nullable MDoc */;
short int var457 /* : Bool */;
short int var458 /* : Bool */;
short int var460 /* : Bool */;
short int var461 /* : Bool */;
static val* varonce463;
val* var464 /* : String */;
char* var465 /* : CString */;
val* var466 /* : String */;
val* var467 /* : nullable AAnnotation */;
val* var_atautoinit /* var atautoinit: nullable AAnnotation */;
short int var468 /* : Bool */;
short int var469 /* : Bool */;
short int var471 /* : Bool */;
short int var472 /* : Bool */;
short int var473 /* : Bool */;
short int var475 /* : Bool */;
static val* varonce476;
val* var477 /* : String */;
char* var478 /* : CString */;
val* var479 /* : String */;
short int var480 /* : Bool */;
short int var481 /* : Bool */;
static val* varonce482;
val* var483 /* : String */;
char* var484 /* : CString */;
val* var485 /* : String */;
short int var486 /* : Bool */;
short int var487 /* : Bool */;
static val* varonce488;
val* var489 /* : String */;
char* var490 /* : CString */;
val* var491 /* : String */;
short int var492 /* : Bool */;
short int var493 /* : Bool */;
short int var495 /* : Bool */;
short int var497 /* : Bool */;
static val* varonce498;
val* var499 /* : String */;
char* var500 /* : CString */;
val* var501 /* : String */;
static val* varonce502;
val* var503 /* : String */;
char* var504 /* : CString */;
val* var505 /* : String */;
short int var506 /* : Bool */;
short int var507 /* : Bool */;
short int var509 /* : Bool */;
short int var510 /* : Bool */;
var_modelbuilder = p0;
var_mclassdef = p1;
{
{ /* Inline model#MClassDef#mclass (var_mclassdef) on <var_mclassdef:MClassDef> */
var2 = var_mclassdef->attrs[COLOR_nitc__model__MClassDef___mclass].val; /* _mclass on <var_mclassdef:MClassDef> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 591);
fatal_exit(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
var_mclass = var;
{
{ /* Inline parser_nodes#AAttrPropdef#n_id2 (self) on <self:AAttrPropdef> */
var5 = self->attrs[COLOR_nitc__parser_nodes__AAttrPropdef___n_id2].val; /* _n_id2 on <self:AAttrPropdef> */
if (unlikely(var5 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_id2");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 1340);
fatal_exit(1);
}
var3 = var5;
RET_LABEL4:(void)0;
}
}
var_nid2 = var3;
{
var6 = nitc__lexer_work___Token___text(var_nid2);
}
var_name = var6;
if (likely(varonce!=NULL)) {
var7 = varonce;
} else {
var8 = "abstract";
var9 = core__abstract_text___CString___to_s_full(var8, 8l, 8l);
var7 = var9;
varonce = var7;
}
{
var10 = nitc__annotation___Prod___get_single_annotation(self, var7, var_modelbuilder);
}
var_atabstract = var10;
if (var_atabstract == NULL) {
var11 = 1; /* is null */
} else {
var11 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_atabstract,((val*)NULL)) on <var_atabstract:nullable AAnnotation> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_atabstract,var_other) on <var_atabstract:nullable AAnnotation(AAnnotation)> */
var16 = var_atabstract == var_other;
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
{ /* Inline model#MClass#kind (var_mclass) on <var_mclass:MClass> */
var19 = var_mclass->attrs[COLOR_nitc__model__MClass___kind].val; /* _kind on <var_mclass:MClass> */
if (unlikely(var19 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _kind");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 472);
fatal_exit(1);
}
var17 = var19;
RET_LABEL18:(void)0;
}
}
{
{ /* Inline model#MClassKind#need_init (var17) on <var17:MClassKind> */
var22 = var17->attrs[COLOR_nitc__model__MClassKind___need_init].s; /* _need_init on <var17:MClassKind> */
var20 = var22;
RET_LABEL21:(void)0;
}
}
var23 = !var20;
if (var23){
if (unlikely(varonce24==NULL)) {
var25 = NEW_core__NativeArray(7l, &type_core__NativeArray__core__String);
if (likely(varonce26!=NULL)) {
var27 = varonce26;
} else {
var28 = "Error: attempt to define attribute `";
var29 = core__abstract_text___CString___to_s_full(var28, 36l, 36l);
var27 = var29;
varonce26 = var27;
}
((struct instance_core__NativeArray*)var25)->values[0]=var27;
if (likely(varonce30!=NULL)) {
var31 = varonce30;
} else {
var32 = "` in the ";
var33 = core__abstract_text___CString___to_s_full(var32, 9l, 9l);
var31 = var33;
varonce30 = var31;
}
((struct instance_core__NativeArray*)var25)->values[2]=var31;
if (likely(varonce34!=NULL)) {
var35 = varonce34;
} else {
var36 = " `";
var37 = core__abstract_text___CString___to_s_full(var36, 2l, 2l);
var35 = var37;
varonce34 = var35;
}
((struct instance_core__NativeArray*)var25)->values[4]=var35;
if (likely(varonce38!=NULL)) {
var39 = varonce38;
} else {
var40 = "`.";
var41 = core__abstract_text___CString___to_s_full(var40, 2l, 2l);
var39 = var41;
varonce38 = var39;
}
((struct instance_core__NativeArray*)var25)->values[6]=var39;
} else {
var25 = varonce24;
varonce24 = NULL;
}
((struct instance_core__NativeArray*)var25)->values[1]=var_name;
{
{ /* Inline model#MClass#kind (var_mclass) on <var_mclass:MClass> */
var44 = var_mclass->attrs[COLOR_nitc__model__MClass___kind].val; /* _kind on <var_mclass:MClass> */
if (unlikely(var44 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _kind");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 472);
fatal_exit(1);
}
var42 = var44;
RET_LABEL43:(void)0;
}
}
{
var45 = ((val*(*)(val* self))(var42->class->vft[COLOR_core__abstract_text__Object__to_s]))(var42); /* to_s on <var42:MClassKind>*/
}
((struct instance_core__NativeArray*)var25)->values[3]=var45;
{
var46 = ((val*(*)(val* self))(var_mclass->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_mclass); /* to_s on <var_mclass:MClass>*/
}
((struct instance_core__NativeArray*)var25)->values[5]=var46;
{
var47 = ((val*(*)(val* self))(var25->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var25); /* native_to_s on <var25:NativeArray[String]>*/
}
varonce24 = var25;
{
nitc___nitc__ModelBuilder___error(var_modelbuilder, self, var47); /* Direct call modelbuilder_base#ModelBuilder#error on <var_modelbuilder:ModelBuilder>*/
}
} else {
}
var48 = NEW_nitc__MAttribute(&type_nitc__MAttribute);
if (likely(varonce49!=NULL)) {
var50 = varonce49;
} else {
var51 = "_";
var52 = core__abstract_text___CString___to_s_full(var51, 1l, 1l);
var50 = var52;
varonce49 = var50;
}
{
var53 = ((val*(*)(val* self, val* p0))(var50->class->vft[COLOR_core__abstract_text__Text___43d]))(var50, var_name); /* + on <var50:String>*/
}
{
{ /* Inline parser_nodes#ANode#location (self) on <self:AAttrPropdef> */
var56 = self->attrs[COLOR_nitc__parser_nodes__ANode___location].val; /* _location on <self:AAttrPropdef> */
if (unlikely(var56 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _location");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 25);
fatal_exit(1);
}
var54 = var56;
RET_LABEL55:(void)0;
}
}
var57 = glob_sys;
{
var58 = nitc__model_base___core__Sys___private_visibility(var57);
}
{
((void(*)(val* self, val* p0))(var48->class->vft[COLOR_nitc__model__MProperty__intro_mclassdef_61d]))(var48, var_mclassdef); /* intro_mclassdef= on <var48:MAttribute>*/
}
{
((void(*)(val* self, val* p0))(var48->class->vft[COLOR_nitc__model__MProperty__name_61d]))(var48, var53); /* name= on <var48:MAttribute>*/
}
{
((void(*)(val* self, val* p0))(var48->class->vft[COLOR_nitc__model__MProperty__location_61d]))(var48, var54); /* location= on <var48:MAttribute>*/
}
{
((void(*)(val* self, val* p0))(var48->class->vft[COLOR_nitc__model__MProperty__visibility_61d]))(var48, var58); /* visibility= on <var48:MAttribute>*/
}
{
((void(*)(val* self))(var48->class->vft[COLOR_core__kernel__Object__init]))(var48); /* init on <var48:MAttribute>*/
}
var_mprop = var48;
var59 = NEW_nitc__MAttributeDef(&type_nitc__MAttributeDef);
{
{ /* Inline parser_nodes#ANode#location (self) on <self:AAttrPropdef> */
var62 = self->attrs[COLOR_nitc__parser_nodes__ANode___location].val; /* _location on <self:AAttrPropdef> */
if (unlikely(var62 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _location");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 25);
fatal_exit(1);
}
var60 = var62;
RET_LABEL61:(void)0;
}
}
{
((void(*)(val* self, val* p0))(var59->class->vft[COLOR_nitc__model__MPropDef__mclassdef_61d]))(var59, var_mclassdef); /* mclassdef= on <var59:MAttributeDef>*/
}
{
((void(*)(val* self, val* p0))(var59->class->vft[COLOR_nitc__model__MPropDef__mproperty_61d]))(var59, var_mprop); /* mproperty= on <var59:MAttributeDef>*/
}
{
((void(*)(val* self, val* p0))(var59->class->vft[COLOR_nitc__model__MPropDef__location_61d]))(var59, var60); /* location= on <var59:MAttributeDef>*/
}
{
((void(*)(val* self))(var59->class->vft[COLOR_core__kernel__Object__init]))(var59); /* init on <var59:MAttributeDef>*/
}
var_mpropdef = var59;
/* <var_mpropdef:MAttributeDef> isa nullable MPROPDEF */
type_struct = self->type->resolution_table->types[COLOR_nullable__nitc__modelize_property__APropdef__MPROPDEF];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= var_mpropdef->type->table_size) {
var63 = 0;
} else {
var63 = var_mpropdef->type->type_table[cltype] == idtype;
}
if (unlikely(!var63)) {
var_class_name = var_mpropdef == NULL ? "null" : var_mpropdef->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "nullable MPROPDEF", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelize_property, 1190);
fatal_exit(1);
}
{
{ /* Inline modelize_property#APropdef#mpropdef= (self,var_mpropdef) on <self:AAttrPropdef> */
/* Covariant cast for argument 0 (mpropdef) <var_mpropdef:MAttributeDef> isa nullable MPROPDEF */
/* <var_mpropdef:MAttributeDef> isa nullable MPROPDEF */
type_struct68 = self->type->resolution_table->types[COLOR_nullable__nitc__modelize_property__APropdef__MPROPDEF];
cltype66 = type_struct68->color;
idtype67 = type_struct68->id;
if(cltype66 >= var_mpropdef->type->table_size) {
var65 = 0;
} else {
var65 = var_mpropdef->type->type_table[cltype66] == idtype67;
}
if (unlikely(!var65)) {
var_class_name69 = var_mpropdef == NULL ? "null" : var_mpropdef->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "nullable MPROPDEF", var_class_name69);
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelize_property, 557);
fatal_exit(1);
}
self->attrs[COLOR_nitc__modelize_property__APropdef___mpropdef].val = var_mpropdef; /* _mpropdef on <self:AAttrPropdef> */
RET_LABEL64:(void)0;
}
}
{
{ /* Inline modelize_property#ModelBuilder#mpropdef2npropdef (var_modelbuilder) on <var_modelbuilder:ModelBuilder> */
var72 = var_modelbuilder->attrs[COLOR_nitc__modelize_property__ModelBuilder___mpropdef2npropdef].val; /* _mpropdef2npropdef on <var_modelbuilder:ModelBuilder> */
if (unlikely(var72 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mpropdef2npropdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelize_property, 40);
fatal_exit(1);
}
var70 = var72;
RET_LABEL71:(void)0;
}
}
{
core___core__HashMap___core__abstract_collection__Map___91d_93d_61d(var70, var_mpropdef, self); /* Direct call hash_collection#HashMap#[]= on <var70:HashMap[MPropDef, APropdef]>*/
}
} else {
}
var_readname = var_name;
{
var73 = nitc___nitc__ModelBuilder___try_get_mproperty_by_name(var_modelbuilder, var_nid2, var_mclassdef, var_readname);
}
/* <var73:nullable MProperty> isa nullable MMethod */
cltype75 = type_nullable__nitc__MMethod.color;
idtype76 = type_nullable__nitc__MMethod.id;
if(var73 == NULL) {
var74 = 1;
} else {
if(cltype75 >= var73->type->table_size) {
var74 = 0;
} else {
var74 = var73->type->type_table[cltype75] == idtype76;
}
}
if (unlikely(!var74)) {
var_class_name77 = var73 == NULL ? "null" : var73->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "nullable MMethod", var_class_name77);
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelize_property, 1195);
fatal_exit(1);
}
var_mreadprop = var73;
if (var_mreadprop == NULL) {
var78 = 1; /* is null */
} else {
var78 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_mreadprop,((val*)NULL)) on <var_mreadprop:nullable MMethod> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_mreadprop,var_other) on <var_mreadprop:nullable MMethod(MMethod)> */
var83 = var_mreadprop == var_other;
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
{
{ /* Inline parser_nodes#ADefinition#n_visibility (self) on <self:AAttrPropdef> */
var86 = self->attrs[COLOR_nitc__parser_nodes__ADefinition___n_visibility].val; /* _n_visibility on <self:AAttrPropdef> */
var84 = var86;
RET_LABEL85:(void)0;
}
}
{
var87 = nitc__modelize_property___APropdef___new_property_visibility(self, var_modelbuilder, var_mclassdef, var84);
}
var_mvisibility = var87;
var88 = NEW_nitc__MMethod(&type_nitc__MMethod);
{
{ /* Inline parser_nodes#ANode#location (self) on <self:AAttrPropdef> */
var91 = self->attrs[COLOR_nitc__parser_nodes__ANode___location].val; /* _location on <self:AAttrPropdef> */
if (unlikely(var91 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _location");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 25);
fatal_exit(1);
}
var89 = var91;
RET_LABEL90:(void)0;
}
}
{
((void(*)(val* self, val* p0))(var88->class->vft[COLOR_nitc__model__MProperty__intro_mclassdef_61d]))(var88, var_mclassdef); /* intro_mclassdef= on <var88:MMethod>*/
}
{
((void(*)(val* self, val* p0))(var88->class->vft[COLOR_nitc__model__MProperty__name_61d]))(var88, var_readname); /* name= on <var88:MMethod>*/
}
{
((void(*)(val* self, val* p0))(var88->class->vft[COLOR_nitc__model__MProperty__location_61d]))(var88, var89); /* location= on <var88:MMethod>*/
}
{
((void(*)(val* self, val* p0))(var88->class->vft[COLOR_nitc__model__MProperty__visibility_61d]))(var88, var_mvisibility); /* visibility= on <var88:MMethod>*/
}
{
((void(*)(val* self))(var88->class->vft[COLOR_core__kernel__Object__init]))(var88); /* init on <var88:MMethod>*/
}
var_mreadprop = var88;
{
{ /* Inline parser_nodes#ADefinition#n_kwredef (self) on <self:AAttrPropdef> */
var94 = self->attrs[COLOR_nitc__parser_nodes__ADefinition___n_kwredef].val; /* _n_kwredef on <self:AAttrPropdef> */
var92 = var94;
RET_LABEL93:(void)0;
}
}
{
var95 = nitc__modelize_property___APropdef___check_redef_keyword(self, var_modelbuilder, var_mclassdef, var92, 0, var_mreadprop);
}
var96 = !var95;
if (var96){
{
{ /* Inline model_base#MEntity#is_broken= (var_mreadprop,1) on <var_mreadprop:nullable MMethod(MMethod)> */
var_mreadprop->attrs[COLOR_nitc__model_base__MEntity___is_broken].s = 1; /* _is_broken on <var_mreadprop:nullable MMethod(MMethod)> */
RET_LABEL97:(void)0;
}
}
goto RET_LABEL;
} else {
}
} else {
{
{ /* Inline model_base#MEntity#is_broken (var_mreadprop) on <var_mreadprop:nullable MMethod(MMethod)> */
var100 = var_mreadprop->attrs[COLOR_nitc__model_base__MEntity___is_broken].s; /* _is_broken on <var_mreadprop:nullable MMethod(MMethod)> */
var98 = var100;
RET_LABEL99:(void)0;
}
}
if (var98){
goto RET_LABEL;
} else {
}
{
{ /* Inline parser_nodes#ADefinition#n_kwredef (self) on <self:AAttrPropdef> */
var103 = self->attrs[COLOR_nitc__parser_nodes__ADefinition___n_kwredef].val; /* _n_kwredef on <self:AAttrPropdef> */
var101 = var103;
RET_LABEL102:(void)0;
}
}
{
var104 = nitc__modelize_property___APropdef___check_redef_keyword(self, var_modelbuilder, var_mclassdef, var101, 1, var_mreadprop);
}
var105 = !var104;
if (var105){
goto RET_LABEL;
} else {
}
{
{ /* Inline parser_nodes#ADefinition#n_visibility (self) on <self:AAttrPropdef> */
var108 = self->attrs[COLOR_nitc__parser_nodes__ADefinition___n_visibility].val; /* _n_visibility on <self:AAttrPropdef> */
var106 = var108;
RET_LABEL107:(void)0;
}
}
{
nitc__modelize_property___APropdef___check_redef_property_visibility(self, var_modelbuilder, var106, var_mreadprop); /* Direct call modelize_property#APropdef#check_redef_property_visibility on <self:AAttrPropdef>*/
}
}
{
{ /* Inline modelize_property#MClassDef#mprop2npropdef (var_mclassdef) on <var_mclassdef:MClassDef> */
var111 = var_mclassdef->attrs[COLOR_nitc__modelize_property__MClassDef___mprop2npropdef].val; /* _mprop2npropdef on <var_mclassdef:MClassDef> */
if (unlikely(var111 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mprop2npropdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelize_property, 504);
fatal_exit(1);
}
var109 = var111;
RET_LABEL110:(void)0;
}
}
{
((void(*)(val* self, val* p0, val* p1))((((long)var109&3)?class_info[((long)var109&3)]:var109->class)->vft[COLOR_core__abstract_collection__Map___91d_93d_61d]))(var109, var_mreadprop, self); /* []= on <var109:Map[MProperty, APropdef]>*/
}
var112 = NEW_nitc__MMethodDef(&type_nitc__MMethodDef);
{
{ /* Inline parser_nodes#ANode#location (self) on <self:AAttrPropdef> */
var115 = self->attrs[COLOR_nitc__parser_nodes__ANode___location].val; /* _location on <self:AAttrPropdef> */
if (unlikely(var115 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _location");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 25);
fatal_exit(1);
}
var113 = var115;
RET_LABEL114:(void)0;
}
}
{
((void(*)(val* self, val* p0))(var112->class->vft[COLOR_nitc__model__MPropDef__mclassdef_61d]))(var112, var_mclassdef); /* mclassdef= on <var112:MMethodDef>*/
}
{
((void(*)(val* self, val* p0))(var112->class->vft[COLOR_nitc__model__MPropDef__mproperty_61d]))(var112, var_mreadprop); /* mproperty= on <var112:MMethodDef>*/
}
{
((void(*)(val* self, val* p0))(var112->class->vft[COLOR_nitc__model__MPropDef__location_61d]))(var112, var113); /* location= on <var112:MMethodDef>*/
}
{
((void(*)(val* self))(var112->class->vft[COLOR_core__kernel__Object__init]))(var112); /* init on <var112:MMethodDef>*/
}
var_mreadpropdef = var112;
{
{ /* Inline modelize_property#AAttrPropdef#mreadpropdef= (self,var_mreadpropdef) on <self:AAttrPropdef> */
self->attrs[COLOR_nitc__modelize_property__AAttrPropdef___mreadpropdef].val = var_mreadpropdef; /* _mreadpropdef on <self:AAttrPropdef> */
RET_LABEL116:(void)0;
}
}
{
{ /* Inline modelize_property#ModelBuilder#mpropdef2npropdef (var_modelbuilder) on <var_modelbuilder:ModelBuilder> */
var119 = var_modelbuilder->attrs[COLOR_nitc__modelize_property__ModelBuilder___mpropdef2npropdef].val; /* _mpropdef2npropdef on <var_modelbuilder:ModelBuilder> */
if (unlikely(var119 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mpropdef2npropdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelize_property, 40);
fatal_exit(1);
}
var117 = var119;
RET_LABEL118:(void)0;
}
}
{
core___core__HashMap___core__abstract_collection__Map___91d_93d_61d(var117, var_mreadpropdef, self); /* Direct call hash_collection#HashMap#[]= on <var117:HashMap[MPropDef, APropdef]>*/
}
{
nitc__modelize_property___APropdef___set_doc(self, var_mreadpropdef, var_modelbuilder); /* Direct call modelize_property#APropdef#set_doc on <self:AAttrPropdef>*/
}
{
{ /* Inline modelize_property#APropdef#mpropdef (self) on <self:AAttrPropdef> */
var122 = self->attrs[COLOR_nitc__modelize_property__APropdef___mpropdef].val; /* _mpropdef on <self:AAttrPropdef> */
var120 = var122;
RET_LABEL121:(void)0;
}
}
if (var120 == NULL) {
var123 = 0; /* is null */
} else {
var123 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var120,((val*)NULL)) on <var120:nullable MPropDef(nullable MAttributeDef)> */
var_other126 = ((val*)NULL);
{
var127 = ((short int(*)(val* self, val* p0))(var120->class->vft[COLOR_core__kernel__Object___61d_61d]))(var120, var_other126); /* == on <var120:nullable MAttributeDef(MAttributeDef)>*/
}
var128 = !var127;
var124 = var128;
goto RET_LABEL125;
RET_LABEL125:(void)0;
}
var123 = var124;
}
if (var123){
{
{ /* Inline modelize_property#APropdef#mpropdef (self) on <self:AAttrPropdef> */
var131 = self->attrs[COLOR_nitc__modelize_property__APropdef___mpropdef].val; /* _mpropdef on <self:AAttrPropdef> */
var129 = var131;
RET_LABEL130:(void)0;
}
}
{
{ /* Inline mdoc#MEntity#mdoc (var_mreadpropdef) on <var_mreadpropdef:MMethodDef> */
var134 = var_mreadpropdef->attrs[COLOR_nitc__mdoc__MEntity___mdoc].val; /* _mdoc on <var_mreadpropdef:MMethodDef> */
var132 = var134;
RET_LABEL133:(void)0;
}
}
if (var129 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelize_property, 1214);
fatal_exit(1);
} else {
{ /* Inline mdoc#MEntity#mdoc= (var129,var132) on <var129:nullable MPropDef(nullable MAttributeDef)> */
if (unlikely(var129 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__mdoc, 37);
fatal_exit(1);
}
var129->attrs[COLOR_nitc__mdoc__MEntity___mdoc].val = var132; /* _mdoc on <var129:nullable MPropDef(nullable MAttributeDef)> */
RET_LABEL135:(void)0;
}
}
} else {
}
if (var_atabstract == NULL) {
var136 = 0; /* is null */
} else {
var136 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_atabstract,((val*)NULL)) on <var_atabstract:nullable AAnnotation> */
var_other126 = ((val*)NULL);
{
var139 = ((short int(*)(val* self, val* p0))(var_atabstract->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_atabstract, var_other126); /* == on <var_atabstract:nullable AAnnotation(AAnnotation)>*/
}
var140 = !var139;
var137 = var140;
goto RET_LABEL138;
RET_LABEL138:(void)0;
}
var136 = var137;
}
if (var136){
{
{ /* Inline model#MMethodDef#is_abstract= (var_mreadpropdef,1) on <var_mreadpropdef:MMethodDef> */
var_mreadpropdef->attrs[COLOR_nitc__model__MMethodDef___is_abstract].s = 1; /* _is_abstract on <var_mreadpropdef:MMethodDef> */
RET_LABEL141:(void)0;
}
}
} else {
}
{
{ /* Inline parser_nodes#AAttrPropdef#n_expr (self) on <self:AAttrPropdef> */
var145 = self->attrs[COLOR_nitc__parser_nodes__AAttrPropdef___n_expr].val; /* _n_expr on <self:AAttrPropdef> */
var143 = var145;
RET_LABEL144:(void)0;
}
}
if (var143 == NULL) {
var146 = 0; /* is null */
} else {
var146 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var143,((val*)NULL)) on <var143:nullable AExpr> */
var_other126 = ((val*)NULL);
{
var149 = ((short int(*)(val* self, val* p0))(var143->class->vft[COLOR_core__kernel__Object___61d_61d]))(var143, var_other126); /* == on <var143:nullable AExpr(AExpr)>*/
}
var150 = !var149;
var147 = var150;
goto RET_LABEL148;
RET_LABEL148:(void)0;
}
var146 = var147;
}
var_ = var146;
if (var146){
var142 = var_;
} else {
{
{ /* Inline parser_nodes#AAttrPropdef#n_block (self) on <self:AAttrPropdef> */
var153 = self->attrs[COLOR_nitc__parser_nodes__AAttrPropdef___n_block].val; /* _n_block on <self:AAttrPropdef> */
var151 = var153;
RET_LABEL152:(void)0;
}
}
if (var151 == NULL) {
var154 = 0; /* is null */
} else {
var154 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var151,((val*)NULL)) on <var151:nullable AExpr> */
var_other126 = ((val*)NULL);
{
var157 = ((short int(*)(val* self, val* p0))(var151->class->vft[COLOR_core__kernel__Object___61d_61d]))(var151, var_other126); /* == on <var151:nullable AExpr(AExpr)>*/
}
var158 = !var157;
var155 = var158;
goto RET_LABEL156;
RET_LABEL156:(void)0;
}
var154 = var155;
}
var142 = var154;
}
{
{ /* Inline modelize_property#AAttrPropdef#has_value= (self,var142) on <self:AAttrPropdef> */
self->attrs[COLOR_nitc__modelize_property__AAttrPropdef___has_value].s = var142; /* _has_value on <self:AAttrPropdef> */
RET_LABEL159:(void)0;
}
}
if (var_atabstract == NULL) {
var161 = 0; /* is null */
} else {
var161 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_atabstract,((val*)NULL)) on <var_atabstract:nullable AAnnotation> */
var_other126 = ((val*)NULL);
{
var164 = ((short int(*)(val* self, val* p0))(var_atabstract->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_atabstract, var_other126); /* == on <var_atabstract:nullable AAnnotation(AAnnotation)>*/
}
var165 = !var164;
var162 = var165;
goto RET_LABEL163;
RET_LABEL163:(void)0;
}
var161 = var162;
}
var_166 = var161;
if (var161){
{
{ /* Inline modelize_property#AAttrPropdef#has_value (self) on <self:AAttrPropdef> */
var169 = self->attrs[COLOR_nitc__modelize_property__AAttrPropdef___has_value].s; /* _has_value on <self:AAttrPropdef> */
var167 = var169;
RET_LABEL168:(void)0;
}
}
var160 = var167;
} else {
var160 = var_166;
}
if (var160){
if (likely(varonce170!=NULL)) {
var171 = varonce170;
} else {
var172 = "Error: `abstract` attributes cannot have an initial value.";
var173 = core__abstract_text___CString___to_s_full(var172, 58l, 58l);
var171 = var173;
varonce170 = var171;
}
{
nitc___nitc__ModelBuilder___error(var_modelbuilder, var_atabstract, var171); /* Direct call modelbuilder_base#ModelBuilder#error on <var_modelbuilder:ModelBuilder>*/
}
goto RET_LABEL;
} else {
}
if (likely(varonce174!=NULL)) {
var175 = varonce174;
} else {
var176 = "noinit";
var177 = core__abstract_text___CString___to_s_full(var176, 6l, 6l);
var175 = var177;
varonce174 = var175;
}
{
var178 = nitc__annotation___Prod___get_single_annotation(self, var175, var_modelbuilder);
}
var_atnoinit = var178;
if (var_atnoinit == NULL) {
var179 = 1; /* is null */
} else {
var179 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_atnoinit,((val*)NULL)) on <var_atnoinit:nullable AAnnotation> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_atnoinit,var_other) on <var_atnoinit:nullable AAnnotation(AAnnotation)> */
var184 = var_atnoinit == var_other;
var182 = var184;
goto RET_LABEL183;
RET_LABEL183:(void)0;
}
}
var180 = var182;
goto RET_LABEL181;
RET_LABEL181:(void)0;
}
var179 = var180;
}
if (var179){
if (likely(varonce185!=NULL)) {
var186 = varonce185;
} else {
var187 = "noautoinit";
var188 = core__abstract_text___CString___to_s_full(var187, 10l, 10l);
var186 = var188;
varonce185 = var186;
}
{
var189 = nitc__annotation___Prod___get_single_annotation(self, var186, var_modelbuilder);
}
var_atnoinit = var189;
} else {
}
if (var_atnoinit == NULL) {
var190 = 0; /* is null */
} else {
var190 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_atnoinit,((val*)NULL)) on <var_atnoinit:nullable AAnnotation> */
var_other126 = ((val*)NULL);
{
var193 = ((short int(*)(val* self, val* p0))(var_atnoinit->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_atnoinit, var_other126); /* == on <var_atnoinit:nullable AAnnotation(AAnnotation)>*/
}
var194 = !var193;
var191 = var194;
goto RET_LABEL192;
RET_LABEL192:(void)0;
}
var190 = var191;
}
if (var190){
{
{ /* Inline modelize_property#AAttrPropdef#noinit= (self,1) on <self:AAttrPropdef> */
self->attrs[COLOR_nitc__modelize_property__AAttrPropdef___noinit].s = 1; /* _noinit on <self:AAttrPropdef> */
RET_LABEL195:(void)0;
}
}
{
{ /* Inline modelize_property#AAttrPropdef#has_value (self) on <self:AAttrPropdef> */
var198 = self->attrs[COLOR_nitc__modelize_property__AAttrPropdef___has_value].s; /* _has_value on <self:AAttrPropdef> */
var196 = var198;
RET_LABEL197:(void)0;
}
}
if (var196){
if (likely(varonce199!=NULL)) {
var200 = varonce199;
} else {
var201 = "Error: `noautoinit` attributes cannot have an initial value.";
var202 = core__abstract_text___CString___to_s_full(var201, 60l, 60l);
var200 = var202;
varonce199 = var200;
}
{
nitc___nitc__ModelBuilder___error(var_modelbuilder, var_atnoinit, var200); /* Direct call modelbuilder_base#ModelBuilder#error on <var_modelbuilder:ModelBuilder>*/
}
goto RET_LABEL;
} else {
}
if (var_atabstract == NULL) {
var203 = 0; /* is null */
} else {
var203 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_atabstract,((val*)NULL)) on <var_atabstract:nullable AAnnotation> */
var_other126 = ((val*)NULL);
{
var206 = ((short int(*)(val* self, val* p0))(var_atabstract->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_atabstract, var_other126); /* == on <var_atabstract:nullable AAnnotation(AAnnotation)>*/
}
var207 = !var206;
var204 = var207;
goto RET_LABEL205;
RET_LABEL205:(void)0;
}
var203 = var204;
}
if (var203){
if (likely(varonce208!=NULL)) {
var209 = varonce208;
} else {
var210 = "useless-noautoinit";
var211 = core__abstract_text___CString___to_s_full(var210, 18l, 18l);
var209 = var211;
varonce208 = var209;
}
if (likely(varonce212!=NULL)) {
var213 = varonce212;
} else {
var214 = "Warning: superfluous `noautoinit` on abstract attribute.";
var215 = core__abstract_text___CString___to_s_full(var214, 56l, 56l);
var213 = var215;
varonce212 = var213;
}
{
nitc___nitc__ModelBuilder___warning(var_modelbuilder, var_atnoinit, var209, var213); /* Direct call modelbuilder_base#ModelBuilder#warning on <var_modelbuilder:ModelBuilder>*/
}
} else {
}
} else {
}
if (likely(varonce216!=NULL)) {
var217 = varonce216;
} else {
var218 = "lazy";
var219 = core__abstract_text___CString___to_s_full(var218, 4l, 4l);
var217 = var219;
varonce216 = var217;
}
{
var220 = nitc__annotation___Prod___get_single_annotation(self, var217, var_modelbuilder);
}
var_atlazy = var220;
if (likely(varonce221!=NULL)) {
var222 = varonce221;
} else {
var223 = "lateinit";
var224 = core__abstract_text___CString___to_s_full(var223, 8l, 8l);
var222 = var224;
varonce221 = var222;
}
{
var225 = nitc__annotation___Prod___get_single_annotation(self, var222, var_modelbuilder);
}
var_atlateinit = var225;
if (var_atlazy == NULL) {
var227 = 0; /* is null */
} else {
var227 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_atlazy,((val*)NULL)) on <var_atlazy:nullable AAnnotation> */
var_other126 = ((val*)NULL);
{
var230 = ((short int(*)(val* self, val* p0))(var_atlazy->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_atlazy, var_other126); /* == on <var_atlazy:nullable AAnnotation(AAnnotation)>*/
}
var231 = !var230;
var228 = var231;
goto RET_LABEL229;
RET_LABEL229:(void)0;
}
var227 = var228;
}
var_232 = var227;
if (var227){
var226 = var_232;
} else {
if (var_atlateinit == NULL) {
var233 = 0; /* is null */
} else {
var233 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_atlateinit,((val*)NULL)) on <var_atlateinit:nullable AAnnotation> */
var_other126 = ((val*)NULL);
{
var236 = ((short int(*)(val* self, val* p0))(var_atlateinit->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_atlateinit, var_other126); /* == on <var_atlateinit:nullable AAnnotation(AAnnotation)>*/
}
var237 = !var236;
var234 = var237;
goto RET_LABEL235;
RET_LABEL235:(void)0;
}
var233 = var234;
}
var226 = var233;
}
if (var226){
if (var_atlazy == NULL) {
var239 = 0; /* is null */
} else {
var239 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_atlazy,((val*)NULL)) on <var_atlazy:nullable AAnnotation> */
var_other126 = ((val*)NULL);
{
var242 = ((short int(*)(val* self, val* p0))(var_atlazy->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_atlazy, var_other126); /* == on <var_atlazy:nullable AAnnotation(AAnnotation)>*/
}
var243 = !var242;
var240 = var243;
goto RET_LABEL241;
RET_LABEL241:(void)0;
}
var239 = var240;
}
var_244 = var239;
if (var239){
if (var_atlateinit == NULL) {
var245 = 0; /* is null */
} else {
var245 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_atlateinit,((val*)NULL)) on <var_atlateinit:nullable AAnnotation> */
var_other126 = ((val*)NULL);
{
var248 = ((short int(*)(val* self, val* p0))(var_atlateinit->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_atlateinit, var_other126); /* == on <var_atlateinit:nullable AAnnotation(AAnnotation)>*/
}
var249 = !var248;
var246 = var249;
goto RET_LABEL247;
RET_LABEL247:(void)0;
}
var245 = var246;
}
var238 = var245;
} else {
var238 = var_244;
}
if (var238){
if (likely(varonce250!=NULL)) {
var251 = varonce250;
} else {
var252 = "Error: `lazy` incompatible with `lateinit`.";
var253 = core__abstract_text___CString___to_s_full(var252, 43l, 43l);
var251 = var253;
varonce250 = var251;
}
{
nitc___nitc__ModelBuilder___error(var_modelbuilder, var_atlazy, var251); /* Direct call modelbuilder_base#ModelBuilder#error on <var_modelbuilder:ModelBuilder>*/
}
goto RET_LABEL;
} else {
}
{
{ /* Inline modelize_property#AAttrPropdef#has_value (self) on <self:AAttrPropdef> */
var256 = self->attrs[COLOR_nitc__modelize_property__AAttrPropdef___has_value].s; /* _has_value on <self:AAttrPropdef> */
var254 = var256;
RET_LABEL255:(void)0;
}
}
var257 = !var254;
if (var257){
if (var_atlazy == NULL) {
var258 = 0; /* is null */
} else {
var258 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_atlazy,((val*)NULL)) on <var_atlazy:nullable AAnnotation> */
var_other126 = ((val*)NULL);
{
var261 = ((short int(*)(val* self, val* p0))(var_atlazy->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_atlazy, var_other126); /* == on <var_atlazy:nullable AAnnotation(AAnnotation)>*/
}
var262 = !var261;
var259 = var262;
goto RET_LABEL260;
RET_LABEL260:(void)0;
}
var258 = var259;
}
if (var258){
if (likely(varonce263!=NULL)) {
var264 = varonce263;
} else {
var265 = "Error: `lazy` attributes need a value.";
var266 = core__abstract_text___CString___to_s_full(var265, 38l, 38l);
var264 = var266;
varonce263 = var264;
}
{
nitc___nitc__ModelBuilder___error(var_modelbuilder, var_atlazy, var264); /* Direct call modelbuilder_base#ModelBuilder#error on <var_modelbuilder:ModelBuilder>*/
}
} else {
if (var_atlateinit == NULL) {
var267 = 0; /* is null */
} else {
var267 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_atlateinit,((val*)NULL)) on <var_atlateinit:nullable AAnnotation> */
var_other126 = ((val*)NULL);
{
var270 = ((short int(*)(val* self, val* p0))(var_atlateinit->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_atlateinit, var_other126); /* == on <var_atlateinit:nullable AAnnotation(AAnnotation)>*/
}
var271 = !var270;
var268 = var271;
goto RET_LABEL269;
RET_LABEL269:(void)0;
}
var267 = var268;
}
if (var267){
if (likely(varonce272!=NULL)) {
var273 = varonce272;
} else {
var274 = "Error: `lateinit` attributes need a value.";
var275 = core__abstract_text___CString___to_s_full(var274, 42l, 42l);
var273 = var275;
varonce272 = var273;
}
{
nitc___nitc__ModelBuilder___error(var_modelbuilder, var_atlateinit, var273); /* Direct call modelbuilder_base#ModelBuilder#error on <var_modelbuilder:ModelBuilder>*/
}
} else {
}
}
{
{ /* Inline modelize_property#AAttrPropdef#has_value= (self,1) on <self:AAttrPropdef> */
self->attrs[COLOR_nitc__modelize_property__AAttrPropdef___has_value].s = 1; /* _has_value on <self:AAttrPropdef> */
RET_LABEL276:(void)0;
}
}
goto RET_LABEL;
} else {
}
{
{ /* Inline modelize_property#AAttrPropdef#is_lazy= (self,1) on <self:AAttrPropdef> */
self->attrs[COLOR_nitc__modelize_property__AAttrPropdef___is_lazy].s = 1; /* _is_lazy on <self:AAttrPropdef> */
RET_LABEL277:(void)0;
}
}
var278 = NEW_nitc__MAttribute(&type_nitc__MAttribute);
if (likely(varonce279!=NULL)) {
var280 = varonce279;
} else {
var281 = "lazy _";
var282 = core__abstract_text___CString___to_s_full(var281, 6l, 6l);
var280 = var282;
varonce279 = var280;
}
{
var283 = ((val*(*)(val* self, val* p0))(var280->class->vft[COLOR_core__abstract_text__Text___43d]))(var280, var_name); /* + on <var280:String>*/
}
{
{ /* Inline parser_nodes#ANode#location (self) on <self:AAttrPropdef> */
var286 = self->attrs[COLOR_nitc__parser_nodes__ANode___location].val; /* _location on <self:AAttrPropdef> */
if (unlikely(var286 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _location");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 25);
fatal_exit(1);
}
var284 = var286;
RET_LABEL285:(void)0;
}
}
var287 = glob_sys;
{
var288 = nitc__model_base___core__Sys___none_visibility(var287);
}
{
((void(*)(val* self, val* p0))(var278->class->vft[COLOR_nitc__model__MProperty__intro_mclassdef_61d]))(var278, var_mclassdef); /* intro_mclassdef= on <var278:MAttribute>*/
}
{
((void(*)(val* self, val* p0))(var278->class->vft[COLOR_nitc__model__MProperty__name_61d]))(var278, var283); /* name= on <var278:MAttribute>*/
}
{
((void(*)(val* self, val* p0))(var278->class->vft[COLOR_nitc__model__MProperty__location_61d]))(var278, var284); /* location= on <var278:MAttribute>*/
}
{
((void(*)(val* self, val* p0))(var278->class->vft[COLOR_nitc__model__MProperty__visibility_61d]))(var278, var288); /* visibility= on <var278:MAttribute>*/
}
{
((void(*)(val* self))(var278->class->vft[COLOR_core__kernel__Object__init]))(var278); /* init on <var278:MAttribute>*/
}
var_mlazyprop = var278;
{
{ /* Inline model_base#MEntity#is_fictive= (var_mlazyprop,1) on <var_mlazyprop:MAttribute> */
var_mlazyprop->attrs[COLOR_nitc__model_base__MEntity___is_fictive].s = 1; /* _is_fictive on <var_mlazyprop:MAttribute> */
RET_LABEL289:(void)0;
}
}
var290 = NEW_nitc__MAttributeDef(&type_nitc__MAttributeDef);
{
{ /* Inline parser_nodes#ANode#location (self) on <self:AAttrPropdef> */
var293 = self->attrs[COLOR_nitc__parser_nodes__ANode___location].val; /* _location on <self:AAttrPropdef> */
if (unlikely(var293 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _location");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 25);
fatal_exit(1);
}
var291 = var293;
RET_LABEL292:(void)0;
}
}
{
((void(*)(val* self, val* p0))(var290->class->vft[COLOR_nitc__model__MPropDef__mclassdef_61d]))(var290, var_mclassdef); /* mclassdef= on <var290:MAttributeDef>*/
}
{
((void(*)(val* self, val* p0))(var290->class->vft[COLOR_nitc__model__MPropDef__mproperty_61d]))(var290, var_mlazyprop); /* mproperty= on <var290:MAttributeDef>*/
}
{
((void(*)(val* self, val* p0))(var290->class->vft[COLOR_nitc__model__MPropDef__location_61d]))(var290, var291); /* location= on <var290:MAttributeDef>*/
}
{
((void(*)(val* self))(var290->class->vft[COLOR_core__kernel__Object__init]))(var290); /* init on <var290:MAttributeDef>*/
}
var_mlazypropdef = var290;
{
{ /* Inline model_base#MEntity#is_fictive= (var_mlazypropdef,1) on <var_mlazypropdef:MAttributeDef> */
var_mlazypropdef->attrs[COLOR_nitc__model_base__MEntity___is_fictive].s = 1; /* _is_fictive on <var_mlazypropdef:MAttributeDef> */
RET_LABEL294:(void)0;
}
}
{
{ /* Inline modelize_property#AAttrPropdef#mlazypropdef= (self,var_mlazypropdef) on <self:AAttrPropdef> */
self->attrs[COLOR_nitc__modelize_property__AAttrPropdef___mlazypropdef].val = var_mlazypropdef; /* _mlazypropdef on <self:AAttrPropdef> */
RET_LABEL295:(void)0;
}
}
} else {
}
if (likely(varonce296!=NULL)) {
var297 = varonce296;
} else {
var298 = "optional";
var299 = core__abstract_text___CString___to_s_full(var298, 8l, 8l);
var297 = var299;
varonce296 = var297;
}
{
var300 = nitc__annotation___Prod___get_single_annotation(self, var297, var_modelbuilder);
}
var_atoptional = var300;
if (var_atoptional == NULL) {
var301 = 0; /* is null */
} else {
var301 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_atoptional,((val*)NULL)) on <var_atoptional:nullable AAnnotation> */
var_other126 = ((val*)NULL);
{
var304 = ((short int(*)(val* self, val* p0))(var_atoptional->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_atoptional, var_other126); /* == on <var_atoptional:nullable AAnnotation(AAnnotation)>*/
}
var305 = !var304;
var302 = var305;
goto RET_LABEL303;
RET_LABEL303:(void)0;
}
var301 = var302;
}
if (var301){
{
{ /* Inline modelize_property#AAttrPropdef#has_value (self) on <self:AAttrPropdef> */
var308 = self->attrs[COLOR_nitc__modelize_property__AAttrPropdef___has_value].s; /* _has_value on <self:AAttrPropdef> */
var306 = var308;
RET_LABEL307:(void)0;
}
}
var309 = !var306;
if (var309){
if (likely(varonce310!=NULL)) {
var311 = varonce310;
} else {
var312 = "Error: `optional` attributes need a default value.";
var313 = core__abstract_text___CString___to_s_full(var312, 50l, 50l);
var311 = var313;
varonce310 = var311;
}
{
nitc___nitc__ModelBuilder___error(var_modelbuilder, var_atoptional, var311); /* Direct call modelbuilder_base#ModelBuilder#error on <var_modelbuilder:ModelBuilder>*/
}
} else {
}
{
{ /* Inline modelize_property#AAttrPropdef#is_optional= (self,1) on <self:AAttrPropdef> */
self->attrs[COLOR_nitc__modelize_property__AAttrPropdef___is_optional].s = 1; /* _is_optional on <self:AAttrPropdef> */
RET_LABEL314:(void)0;
}
}
} else {
}
if (likely(varonce315!=NULL)) {
var316 = varonce315;
} else {
var317 = "readonly";
var318 = core__abstract_text___CString___to_s_full(var317, 8l, 8l);
var316 = var318;
varonce315 = var316;
}
{
var319 = nitc__annotation___Prod___get_single_annotation(self, var316, var_modelbuilder);
}
var_atreadonly = var319;
if (var_atreadonly == NULL) {
var320 = 0; /* is null */
} else {
var320 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_atreadonly,((val*)NULL)) on <var_atreadonly:nullable AAnnotation> */
var_other126 = ((val*)NULL);
{
var323 = ((short int(*)(val* self, val* p0))(var_atreadonly->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_atreadonly, var_other126); /* == on <var_atreadonly:nullable AAnnotation(AAnnotation)>*/
}
var324 = !var323;
var321 = var324;
goto RET_LABEL322;
RET_LABEL322:(void)0;
}
var320 = var321;
}
if (var320){
{
{ /* Inline modelize_property#AAttrPropdef#has_value (self) on <self:AAttrPropdef> */
var327 = self->attrs[COLOR_nitc__modelize_property__AAttrPropdef___has_value].s; /* _has_value on <self:AAttrPropdef> */
var325 = var327;
RET_LABEL326:(void)0;
}
}
var328 = !var325;
if (var328){
if (likely(varonce329!=NULL)) {
var330 = varonce329;
} else {
var331 = "Error: `readonly` attributes need a value.";
var332 = core__abstract_text___CString___to_s_full(var331, 42l, 42l);
var330 = var332;
varonce329 = var330;
}
{
nitc___nitc__ModelBuilder___error(var_modelbuilder, var_atreadonly, var330); /* Direct call modelbuilder_base#ModelBuilder#error on <var_modelbuilder:ModelBuilder>*/
}
} else {
}
goto RET_LABEL;
} else {
}
{
var335 = nitc___nitc__MClassDef___is_intro(var_mclassdef);
}
var336 = !var335;
var_337 = var336;
if (var336){
{
{ /* Inline modelize_property#AAttrPropdef#has_value (self) on <self:AAttrPropdef> */
var340 = self->attrs[COLOR_nitc__modelize_property__AAttrPropdef___has_value].s; /* _has_value on <self:AAttrPropdef> */
var338 = var340;
RET_LABEL339:(void)0;
}
}
var341 = !var338;
var334 = var341;
} else {
var334 = var_337;
}
var_342 = var334;
if (var334){
{
{ /* Inline modelize_property#AAttrPropdef#noinit (self) on <self:AAttrPropdef> */
var345 = self->attrs[COLOR_nitc__modelize_property__AAttrPropdef___noinit].s; /* _noinit on <self:AAttrPropdef> */
var343 = var345;
RET_LABEL344:(void)0;
}
}
var346 = !var343;
var333 = var346;
} else {
var333 = var_342;
}
if (var333){
if (likely(varonce347!=NULL)) {
var348 = varonce347;
} else {
var349 = "attr-in-refinement";
var350 = core__abstract_text___CString___to_s_full(var349, 18l, 18l);
var348 = var350;
varonce347 = var348;
}
if (likely(varonce351!=NULL)) {
var352 = varonce351;
} else {
var353 = "Warning: attributes in refinement need a value or `noautoinit`.";
var354 = core__abstract_text___CString___to_s_full(var353, 63l, 63l);
var352 = var354;
varonce351 = var352;
}
{
nitc___nitc__ModelBuilder___advice(var_modelbuilder, self, var348, var352); /* Direct call modelbuilder_base#ModelBuilder#advice on <var_modelbuilder:ModelBuilder>*/
}
} else {
}
if (likely(varonce355!=NULL)) {
var356 = varonce355;
} else {
var357 = "=";
var358 = core__abstract_text___CString___to_s_full(var357, 1l, 1l);
var356 = var358;
varonce355 = var356;
}
{
var359 = ((val*(*)(val* self, val* p0))(var_name->class->vft[COLOR_core__abstract_text__Text___43d]))(var_name, var356); /* + on <var_name:String>*/
}
var_writename = var359;
if (likely(varonce360!=NULL)) {
var361 = varonce360;
} else {
var362 = "writable";
var363 = core__abstract_text___CString___to_s_full(var362, 8l, 8l);
var361 = var363;
varonce360 = var361;
}
{
var364 = nitc__annotation___Prod___get_single_annotation(self, var361, var_modelbuilder);
}
var_atwritable = var364;
if (var_atwritable == NULL) {
var365 = 0; /* is null */
} else {
var365 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_atwritable,((val*)NULL)) on <var_atwritable:nullable AAnnotation> */
var_other126 = ((val*)NULL);
{
var368 = ((short int(*)(val* self, val* p0))(var_atwritable->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_atwritable, var_other126); /* == on <var_atwritable:nullable AAnnotation(AAnnotation)>*/
}
var369 = !var368;
var366 = var369;
goto RET_LABEL367;
RET_LABEL367:(void)0;
}
var365 = var366;
}
if (var365){
{
{ /* Inline parser_nodes#AAnnotation#n_args (var_atwritable) on <var_atwritable:nullable AAnnotation(AAnnotation)> */
var372 = var_atwritable->attrs[COLOR_nitc__parser_nodes__AAnnotation___n_args].val; /* _n_args on <var_atwritable:nullable AAnnotation(AAnnotation)> */
if (unlikely(var372 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _n_args");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 3007);
fatal_exit(1);
}
var370 = var372;
RET_LABEL371:(void)0;
}
}
{
var373 = nitc___nitc__ANodes___core__abstract_collection__Collection__is_empty(var370);
}
var374 = !var373;
if (var374){
{
var376 = nitc__annotation___AAnnotation___arg_as_id(var_atwritable, var_modelbuilder);
}
if (var376!=NULL) {
var375 = var376;
} else {
var375 = var_writename;
}
var_writename = var375;
} else {
}
} else {
}
{
var377 = nitc___nitc__ModelBuilder___try_get_mproperty_by_name(var_modelbuilder, var_nid2, var_mclassdef, var_writename);
}
/* <var377:nullable MProperty> isa nullable MMethod */
cltype379 = type_nullable__nitc__MMethod.color;
idtype380 = type_nullable__nitc__MMethod.id;
if(var377 == NULL) {
var378 = 1;
} else {
if(cltype379 >= var377->type->table_size) {
var378 = 0;
} else {
var378 = var377->type->type_table[cltype379] == idtype380;
}
}
if (unlikely(!var378)) {
var_class_name381 = var377 == NULL ? "null" : var377->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "nullable MMethod", var_class_name381);
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelize_property, 1289);
fatal_exit(1);
}
var_mwriteprop = var377;
var_nwkwredef = ((val*)NULL);
if (var_atwritable == NULL) {
var382 = 0; /* is null */
} else {
var382 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_atwritable,((val*)NULL)) on <var_atwritable:nullable AAnnotation> */
var_other126 = ((val*)NULL);
{
var385 = ((short int(*)(val* self, val* p0))(var_atwritable->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_atwritable, var_other126); /* == on <var_atwritable:nullable AAnnotation(AAnnotation)>*/
}
var386 = !var385;
var383 = var386;
goto RET_LABEL384;
RET_LABEL384:(void)0;
}
var382 = var383;
}
if (var382){
{
{ /* Inline parser_nodes#ADefinition#n_kwredef (var_atwritable) on <var_atwritable:nullable AAnnotation(AAnnotation)> */
var389 = var_atwritable->attrs[COLOR_nitc__parser_nodes__ADefinition___n_kwredef].val; /* _n_kwredef on <var_atwritable:nullable AAnnotation(AAnnotation)> */
var387 = var389;
RET_LABEL388:(void)0;
}
}
var_nwkwredef = var387;
} else {
}
if (var_mwriteprop == NULL) {
var390 = 1; /* is null */
} else {
var390 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_mwriteprop,((val*)NULL)) on <var_mwriteprop:nullable MMethod> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_mwriteprop,var_other) on <var_mwriteprop:nullable MMethod(MMethod)> */
var395 = var_mwriteprop == var_other;
var393 = var395;
goto RET_LABEL394;
RET_LABEL394:(void)0;
}
}
var391 = var393;
goto RET_LABEL392;
RET_LABEL392:(void)0;
}
var390 = var391;
}
if (var390){
if (var_atwritable == NULL) {
var396 = 0; /* is null */
} else {
var396 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_atwritable,((val*)NULL)) on <var_atwritable:nullable AAnnotation> */
var_other126 = ((val*)NULL);
{
var399 = ((short int(*)(val* self, val* p0))(var_atwritable->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_atwritable, var_other126); /* == on <var_atwritable:nullable AAnnotation(AAnnotation)>*/
}
var400 = !var399;
var397 = var400;
goto RET_LABEL398;
RET_LABEL398:(void)0;
}
var396 = var397;
}
if (var396){
{
{ /* Inline parser_nodes#ADefinition#n_visibility (var_atwritable) on <var_atwritable:nullable AAnnotation(AAnnotation)> */
var403 = var_atwritable->attrs[COLOR_nitc__parser_nodes__ADefinition___n_visibility].val; /* _n_visibility on <var_atwritable:nullable AAnnotation(AAnnotation)> */
var401 = var403;
RET_LABEL402:(void)0;
}
}
{
var404 = nitc__modelize_property___APropdef___new_property_visibility(self, var_modelbuilder, var_mclassdef, var401);
}
var_mvisibility405 = var404;
} else {
{
{ /* Inline model#MProperty#visibility (var_mreadprop) on <var_mreadprop:nullable MMethod(MMethod)> */
var408 = var_mreadprop->attrs[COLOR_nitc__model__MProperty___visibility].val; /* _visibility on <var_mreadprop:nullable MMethod(MMethod)> */
if (unlikely(var408 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _visibility");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2078);
fatal_exit(1);
}
var406 = var408;
RET_LABEL407:(void)0;
}
}
var_mvisibility405 = var406;
var409 = glob_sys;
{
var410 = nitc__model_base___core__Sys___protected_visibility(var409);
}
{
var411 = core___core__Comparable____62d(var_mvisibility405, var410);
}
if (var411){
var412 = glob_sys;
{
var413 = nitc__model_base___core__Sys___protected_visibility(var412);
}
var_mvisibility405 = var413;
} else {
}
}
var414 = NEW_nitc__MMethod(&type_nitc__MMethod);
{
{ /* Inline parser_nodes#ANode#location (self) on <self:AAttrPropdef> */
var417 = self->attrs[COLOR_nitc__parser_nodes__ANode___location].val; /* _location on <self:AAttrPropdef> */
if (unlikely(var417 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _location");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 25);
fatal_exit(1);
}
var415 = var417;
RET_LABEL416:(void)0;
}
}
{
((void(*)(val* self, val* p0))(var414->class->vft[COLOR_nitc__model__MProperty__intro_mclassdef_61d]))(var414, var_mclassdef); /* intro_mclassdef= on <var414:MMethod>*/
}
{
((void(*)(val* self, val* p0))(var414->class->vft[COLOR_nitc__model__MProperty__name_61d]))(var414, var_writename); /* name= on <var414:MMethod>*/
}
{
((void(*)(val* self, val* p0))(var414->class->vft[COLOR_nitc__model__MProperty__location_61d]))(var414, var415); /* location= on <var414:MMethod>*/
}
{
((void(*)(val* self, val* p0))(var414->class->vft[COLOR_nitc__model__MProperty__visibility_61d]))(var414, var_mvisibility405); /* visibility= on <var414:MMethod>*/
}
{
((void(*)(val* self))(var414->class->vft[COLOR_core__kernel__Object__init]))(var414); /* init on <var414:MMethod>*/
}
var_mwriteprop = var414;
{
var418 = nitc__modelize_property___APropdef___check_redef_keyword(self, var_modelbuilder, var_mclassdef, var_nwkwredef, 0, var_mwriteprop);
}
var419 = !var418;
if (var419){
{
{ /* Inline model_base#MEntity#is_broken= (var_mwriteprop,1) on <var_mwriteprop:nullable MMethod(MMethod)> */
var_mwriteprop->attrs[COLOR_nitc__model_base__MEntity___is_broken].s = 1; /* _is_broken on <var_mwriteprop:nullable MMethod(MMethod)> */
RET_LABEL420:(void)0;
}
}
goto RET_LABEL;
} else {
}
{
{ /* Inline mdoc#MEntity#deprecation (var_mreadprop) on <var_mreadprop:nullable MMethod(MMethod)> */
var423 = var_mreadprop->attrs[COLOR_nitc__mdoc__MEntity___deprecation].val; /* _deprecation on <var_mreadprop:nullable MMethod(MMethod)> */
var421 = var423;
RET_LABEL422:(void)0;
}
}
{
{ /* Inline mdoc#MEntity#deprecation= (var_mwriteprop,var421) on <var_mwriteprop:nullable MMethod(MMethod)> */
var_mwriteprop->attrs[COLOR_nitc__mdoc__MEntity___deprecation].val = var421; /* _deprecation on <var_mwriteprop:nullable MMethod(MMethod)> */
RET_LABEL424:(void)0;
}
}
} else {
{
{ /* Inline model_base#MEntity#is_broken (var_mwriteprop) on <var_mwriteprop:nullable MMethod(MMethod)> */
var427 = var_mwriteprop->attrs[COLOR_nitc__model_base__MEntity___is_broken].s; /* _is_broken on <var_mwriteprop:nullable MMethod(MMethod)> */
var425 = var427;
RET_LABEL426:(void)0;
}
}
if (var425){
goto RET_LABEL;
} else {
}
if (var_nwkwredef!=NULL) {
var428 = var_nwkwredef;
} else {
{
{ /* Inline parser_nodes#ADefinition#n_kwredef (self) on <self:AAttrPropdef> */
var431 = self->attrs[COLOR_nitc__parser_nodes__ADefinition___n_kwredef].val; /* _n_kwredef on <self:AAttrPropdef> */
var429 = var431;
RET_LABEL430:(void)0;
}
}
var428 = var429;
}
{
var432 = nitc__modelize_property___APropdef___check_redef_keyword(self, var_modelbuilder, var_mclassdef, var428, 1, var_mwriteprop);
}
var433 = !var432;
if (var433){
goto RET_LABEL;
} else {
}
if (var_atwritable == NULL) {
var434 = 0; /* is null */
} else {
var434 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_atwritable,((val*)NULL)) on <var_atwritable:nullable AAnnotation> */
var_other126 = ((val*)NULL);
{
var437 = ((short int(*)(val* self, val* p0))(var_atwritable->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_atwritable, var_other126); /* == on <var_atwritable:nullable AAnnotation(AAnnotation)>*/
}
var438 = !var437;
var435 = var438;
goto RET_LABEL436;
RET_LABEL436:(void)0;
}
var434 = var435;
}
if (var434){
{
{ /* Inline parser_nodes#ADefinition#n_visibility (var_atwritable) on <var_atwritable:nullable AAnnotation(AAnnotation)> */
var441 = var_atwritable->attrs[COLOR_nitc__parser_nodes__ADefinition___n_visibility].val; /* _n_visibility on <var_atwritable:nullable AAnnotation(AAnnotation)> */
var439 = var441;
RET_LABEL440:(void)0;
}
}
{
nitc__modelize_property___APropdef___check_redef_property_visibility(self, var_modelbuilder, var439, var_mwriteprop); /* Direct call modelize_property#APropdef#check_redef_property_visibility on <self:AAttrPropdef>*/
}
} else {
}
}
{
{ /* Inline modelize_property#MClassDef#mprop2npropdef (var_mclassdef) on <var_mclassdef:MClassDef> */
var444 = var_mclassdef->attrs[COLOR_nitc__modelize_property__MClassDef___mprop2npropdef].val; /* _mprop2npropdef on <var_mclassdef:MClassDef> */
if (unlikely(var444 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mprop2npropdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelize_property, 504);
fatal_exit(1);
}
var442 = var444;
RET_LABEL443:(void)0;
}
}
{
((void(*)(val* self, val* p0, val* p1))((((long)var442&3)?class_info[((long)var442&3)]:var442->class)->vft[COLOR_core__abstract_collection__Map___91d_93d_61d]))(var442, var_mwriteprop, self); /* []= on <var442:Map[MProperty, APropdef]>*/
}
var445 = NEW_nitc__MMethodDef(&type_nitc__MMethodDef);
{
{ /* Inline parser_nodes#ANode#location (self) on <self:AAttrPropdef> */
var448 = self->attrs[COLOR_nitc__parser_nodes__ANode___location].val; /* _location on <self:AAttrPropdef> */
if (unlikely(var448 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _location");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__parser_nodes, 25);
fatal_exit(1);
}
var446 = var448;
RET_LABEL447:(void)0;
}
}
{
((void(*)(val* self, val* p0))(var445->class->vft[COLOR_nitc__model__MPropDef__mclassdef_61d]))(var445, var_mclassdef); /* mclassdef= on <var445:MMethodDef>*/
}
{
((void(*)(val* self, val* p0))(var445->class->vft[COLOR_nitc__model__MPropDef__mproperty_61d]))(var445, var_mwriteprop); /* mproperty= on <var445:MMethodDef>*/
}
{
((void(*)(val* self, val* p0))(var445->class->vft[COLOR_nitc__model__MPropDef__location_61d]))(var445, var446); /* location= on <var445:MMethodDef>*/
}
{
((void(*)(val* self))(var445->class->vft[COLOR_core__kernel__Object__init]))(var445); /* init on <var445:MMethodDef>*/
}
var_mwritepropdef = var445;
{
{ /* Inline modelize_property#AAttrPropdef#mwritepropdef= (self,var_mwritepropdef) on <self:AAttrPropdef> */
self->attrs[COLOR_nitc__modelize_property__AAttrPropdef___mwritepropdef].val = var_mwritepropdef; /* _mwritepropdef on <self:AAttrPropdef> */
RET_LABEL449:(void)0;
}
}
{
{ /* Inline modelize_property#ModelBuilder#mpropdef2npropdef (var_modelbuilder) on <var_modelbuilder:ModelBuilder> */
var452 = var_modelbuilder->attrs[COLOR_nitc__modelize_property__ModelBuilder___mpropdef2npropdef].val; /* _mpropdef2npropdef on <var_modelbuilder:ModelBuilder> */
if (unlikely(var452 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mpropdef2npropdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelize_property, 40);
fatal_exit(1);
}
var450 = var452;
RET_LABEL451:(void)0;
}
}
{
core___core__HashMap___core__abstract_collection__Map___91d_93d_61d(var450, var_mwritepropdef, self); /* Direct call hash_collection#HashMap#[]= on <var450:HashMap[MPropDef, APropdef]>*/
}
{
{ /* Inline mdoc#MEntity#mdoc (var_mreadpropdef) on <var_mreadpropdef:MMethodDef> */
var455 = var_mreadpropdef->attrs[COLOR_nitc__mdoc__MEntity___mdoc].val; /* _mdoc on <var_mreadpropdef:MMethodDef> */
var453 = var455;
RET_LABEL454:(void)0;
}
}
{
{ /* Inline mdoc#MEntity#mdoc= (var_mwritepropdef,var453) on <var_mwritepropdef:MMethodDef> */
var_mwritepropdef->attrs[COLOR_nitc__mdoc__MEntity___mdoc].val = var453; /* _mdoc on <var_mwritepropdef:MMethodDef> */
RET_LABEL456:(void)0;
}
}
if (var_atabstract == NULL) {
var457 = 0; /* is null */
} else {
var457 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_atabstract,((val*)NULL)) on <var_atabstract:nullable AAnnotation> */
var_other126 = ((val*)NULL);
{
var460 = ((short int(*)(val* self, val* p0))(var_atabstract->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_atabstract, var_other126); /* == on <var_atabstract:nullable AAnnotation(AAnnotation)>*/
}
var461 = !var460;
var458 = var461;
goto RET_LABEL459;
RET_LABEL459:(void)0;
}
var457 = var458;
}
if (var457){
{
{ /* Inline model#MMethodDef#is_abstract= (var_mwritepropdef,1) on <var_mwritepropdef:MMethodDef> */
var_mwritepropdef->attrs[COLOR_nitc__model__MMethodDef___is_abstract].s = 1; /* _is_abstract on <var_mwritepropdef:MMethodDef> */
RET_LABEL462:(void)0;
}
}
} else {
}
if (likely(varonce463!=NULL)) {
var464 = varonce463;
} else {
var465 = "autoinit";
var466 = core__abstract_text___CString___to_s_full(var465, 8l, 8l);
var464 = var466;
varonce463 = var464;
}
{
var467 = nitc__annotation___Prod___get_single_annotation(self, var464, var_modelbuilder);
}
var_atautoinit = var467;
if (var_atautoinit == NULL) {
var468 = 0; /* is null */
} else {
var468 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_atautoinit,((val*)NULL)) on <var_atautoinit:nullable AAnnotation> */
var_other126 = ((val*)NULL);
{
var471 = ((short int(*)(val* self, val* p0))(var_atautoinit->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_atautoinit, var_other126); /* == on <var_atautoinit:nullable AAnnotation(AAnnotation)>*/
}
var472 = !var471;
var469 = var472;
goto RET_LABEL470;
RET_LABEL470:(void)0;
}
var468 = var469;
}
if (var468){
{
{ /* Inline modelize_property#AAttrPropdef#has_value (self) on <self:AAttrPropdef> */
var475 = self->attrs[COLOR_nitc__modelize_property__AAttrPropdef___has_value].s; /* _has_value on <self:AAttrPropdef> */
var473 = var475;
RET_LABEL474:(void)0;
}
}
if (var473){
if (likely(varonce476!=NULL)) {
var477 = varonce476;
} else {
var478 = "Error: `autoinit` attributes cannot have an initial value.";
var479 = core__abstract_text___CString___to_s_full(var478, 58l, 58l);
var477 = var479;
varonce476 = var477;
}
{
nitc___nitc__ModelBuilder___error(var_modelbuilder, var_atautoinit, var477); /* Direct call modelbuilder_base#ModelBuilder#error on <var_modelbuilder:ModelBuilder>*/
}
} else {
{
var480 = nitc___nitc__MPropDef___is_intro(var_mwritepropdef);
}
var481 = !var480;
if (var481){
if (likely(varonce482!=NULL)) {
var483 = varonce482;
} else {
var484 = "Error: `autoinit` attributes cannot be set on redefinitions.";
var485 = core__abstract_text___CString___to_s_full(var484, 60l, 60l);
var483 = var485;
varonce482 = var483;
}
{
nitc___nitc__ModelBuilder___error(var_modelbuilder, var_atautoinit, var483); /* Direct call modelbuilder_base#ModelBuilder#error on <var_modelbuilder:ModelBuilder>*/
}
} else {
{
var486 = nitc___nitc__MClassDef___is_intro(var_mclassdef);
}
var487 = !var486;
if (var487){
if (likely(varonce488!=NULL)) {
var489 = varonce488;
} else {
var490 = "Error: `autoinit` attributes cannot be used in class refinements.";
var491 = core__abstract_text___CString___to_s_full(var490, 65l, 65l);
var489 = var491;
varonce488 = var489;
}
{
nitc___nitc__ModelBuilder___error(var_modelbuilder, var_atautoinit, var489); /* Direct call modelbuilder_base#ModelBuilder#error on <var_modelbuilder:ModelBuilder>*/
}
} else {
if (var_atabstract == NULL) {
var492 = 1; /* is null */
} else {
var492 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_atabstract,((val*)NULL)) on <var_atabstract:nullable AAnnotation> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_atabstract,var_other) on <var_atabstract:nullable AAnnotation(AAnnotation)> */
var497 = var_atabstract == var_other;
var495 = var497;
goto RET_LABEL496;
RET_LABEL496:(void)0;
}
}
var493 = var495;
goto RET_LABEL494;
RET_LABEL494:(void)0;
}
var492 = var493;
}
if (var492){
if (likely(varonce498!=NULL)) {
var499 = varonce498;
} else {
var500 = "useless-autoinit";
var501 = core__abstract_text___CString___to_s_full(var500, 16l, 16l);
var499 = var501;
varonce498 = var499;
}
if (likely(varonce502!=NULL)) {
var503 = varonce502;
} else {
var504 = "Warning: superfluous `autoinit` on attribute.";
var505 = core__abstract_text___CString___to_s_full(var504, 45l, 45l);
var503 = var505;
varonce502 = var503;
}
{
nitc___nitc__ModelBuilder___warning(var_modelbuilder, var_atautoinit, var499, var503); /* Direct call modelbuilder_base#ModelBuilder#warning on <var_modelbuilder:ModelBuilder>*/
}
} else {
}
}
}
}
} else {
if (var_atabstract == NULL) {
var506 = 0; /* is null */
} else {
var506 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_atabstract,((val*)NULL)) on <var_atabstract:nullable AAnnotation> */
var_other126 = ((val*)NULL);
{
var509 = ((short int(*)(val* self, val* p0))(var_atabstract->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_atabstract, var_other126); /* == on <var_atabstract:nullable AAnnotation(AAnnotation)>*/
}
var510 = !var509;
var507 = var510;
goto RET_LABEL508;
RET_LABEL508:(void)0;
}
var506 = var507;
}
if (var506){
{
{ /* Inline modelize_property#AAttrPropdef#noinit= (self,1) on <self:AAttrPropdef> */
self->attrs[COLOR_nitc__modelize_property__AAttrPropdef___noinit].s = 1; /* _noinit on <self:AAttrPropdef> */
RET_LABEL511:(void)0;
}
}
} else {
}
}
RET_LABEL:;
}
