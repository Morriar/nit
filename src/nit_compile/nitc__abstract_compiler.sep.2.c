#include "nitc__abstract_compiler.sep.0.h"
/* method abstract_compiler#AbstractCompiler#compile_begin_main for (self: AbstractCompiler, AbstractCompilerVisitor) */
void nitc___nitc__AbstractCompiler___compile_begin_main(val* self, val* p0) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
val* var_v /* var v: AbstractCompilerVisitor */;
/* Covariant cast for argument 0 (v) <p0:AbstractCompilerVisitor> isa VISITOR */
/* <p0:AbstractCompilerVisitor> isa VISITOR */
type_struct = self->type->resolution_table->types[COLOR_nitc__abstract_compiler__AbstractCompiler__VISITOR];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= p0->type->table_size) {
var = 0;
} else {
var = p0->type->type_table[cltype] == idtype;
}
if (unlikely(!var)) {
var_class_name = p0 == NULL ? "null" : p0->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "VISITOR", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 796);
fatal_exit(1);
}
var_v = p0;
RET_LABEL:;
}
/* method abstract_compiler#AbstractCompiler#compile_main_function for (self: AbstractCompiler) */
void nitc___nitc__AbstractCompiler___compile_main_function(val* self) {
val* var /* : AbstractCompilerVisitor */;
val* var_v /* var v: AbstractCompilerVisitor */;
static val* varonce;
val* var1 /* : String */;
char* var2 /* : CString */;
val* var3 /* : String */;
val* var4 /* : Platform */;
val* var6 /* : Platform */;
val* var_platform /* var platform: Platform */;
short int var7 /* : Bool */;
short int var8 /* : Bool */;
short int var_ /* var : Bool */;
val* var9 /* : ModelBuilder */;
val* var11 /* : ModelBuilder */;
val* var12 /* : ToolContext */;
val* var14 /* : ToolContext */;
val* var15 /* : OptionBool */;
val* var17 /* : OptionBool */;
val* var18 /* : nullable Object */;
val* var20 /* : nullable Object */;
short int var21 /* : Bool */;
short int var_no_main /* var no_main: Bool */;
short int var22 /* : Bool */;
static val* varonce23;
val* var24 /* : String */;
char* var25 /* : CString */;
val* var26 /* : String */;
static val* varonce27;
val* var28 /* : String */;
char* var29 /* : CString */;
val* var30 /* : String */;
static val* varonce31;
val* var32 /* : String */;
char* var33 /* : CString */;
val* var34 /* : String */;
static val* varonce35;
val* var36 /* : String */;
char* var37 /* : CString */;
val* var38 /* : String */;
static val* varonce39;
val* var40 /* : String */;
char* var41 /* : CString */;
val* var42 /* : String */;
static val* varonce43;
val* var44 /* : String */;
char* var45 /* : CString */;
val* var46 /* : String */;
static val* varonce47;
val* var48 /* : String */;
char* var49 /* : CString */;
val* var50 /* : String */;
static val* varonce51;
val* var52 /* : String */;
char* var53 /* : CString */;
val* var54 /* : String */;
static val* varonce55;
val* var56 /* : String */;
char* var57 /* : CString */;
val* var58 /* : String */;
val* var59 /* : ModelBuilder */;
val* var61 /* : ModelBuilder */;
val* var62 /* : ToolContext */;
val* var64 /* : ToolContext */;
val* var65 /* : OptionBool */;
val* var67 /* : OptionBool */;
val* var68 /* : nullable Object */;
val* var70 /* : nullable Object */;
short int var71 /* : Bool */;
val* var72 /* : Array[String] */;
val* var74 /* : Array[String] */;
val* var_75 /* var : Array[String] */;
val* var76 /* : IndexedIterator[nullable Object] */;
val* var_77 /* var : IndexedIterator[String] */;
short int var78 /* : Bool */;
val* var79 /* : nullable Object */;
val* var_tag /* var tag: String */;
val* var81 /* : NativeArray[String] */;
static val* varonce80;
static val* varonce82;
val* var83 /* : String */;
char* var84 /* : CString */;
val* var85 /* : String */;
static val* varonce86;
val* var87 /* : String */;
char* var88 /* : CString */;
val* var89 /* : String */;
val* var90 /* : String */;
val* var92 /* : NativeArray[String] */;
static val* varonce91;
static val* varonce93;
val* var94 /* : String */;
char* var95 /* : CString */;
val* var96 /* : String */;
static val* varonce97;
val* var98 /* : String */;
char* var99 /* : CString */;
val* var100 /* : String */;
val* var101 /* : String */;
val* var103 /* : NativeArray[String] */;
static val* varonce102;
static val* varonce104;
val* var105 /* : String */;
char* var106 /* : CString */;
val* var107 /* : String */;
static val* varonce108;
val* var109 /* : String */;
char* var110 /* : CString */;
val* var111 /* : String */;
val* var112 /* : String */;
val* var113 /* : AbstractCompiler */;
val* var115 /* : AbstractCompiler */;
val* var116 /* : CodeWriter */;
val* var118 /* : CodeWriter */;
val* var120 /* : NativeArray[String] */;
static val* varonce119;
static val* varonce121;
val* var122 /* : String */;
char* var123 /* : CString */;
val* var124 /* : String */;
static val* varonce125;
val* var126 /* : String */;
char* var127 /* : CString */;
val* var128 /* : String */;
val* var129 /* : String */;
val* var130 /* : AbstractCompiler */;
val* var132 /* : AbstractCompiler */;
val* var133 /* : CodeWriter */;
val* var135 /* : CodeWriter */;
val* var137 /* : NativeArray[String] */;
static val* varonce136;
static val* varonce138;
val* var139 /* : String */;
char* var140 /* : CString */;
val* var141 /* : String */;
static val* varonce142;
val* var143 /* : String */;
char* var144 /* : CString */;
val* var145 /* : String */;
val* var146 /* : String */;
val* var147 /* : AbstractCompiler */;
val* var149 /* : AbstractCompiler */;
val* var150 /* : CodeWriter */;
val* var152 /* : CodeWriter */;
val* var154 /* : NativeArray[String] */;
static val* varonce153;
static val* varonce155;
val* var156 /* : String */;
char* var157 /* : CString */;
val* var158 /* : String */;
static val* varonce159;
val* var160 /* : String */;
char* var161 /* : CString */;
val* var162 /* : String */;
val* var163 /* : String */;
val* var164 /* : ModelBuilder */;
val* var166 /* : ModelBuilder */;
val* var167 /* : ToolContext */;
val* var169 /* : ToolContext */;
val* var170 /* : OptionBool */;
val* var172 /* : OptionBool */;
val* var173 /* : nullable Object */;
val* var175 /* : nullable Object */;
short int var176 /* : Bool */;
static val* varonce177;
val* var178 /* : String */;
char* var179 /* : CString */;
val* var180 /* : String */;
static val* varonce181;
val* var182 /* : String */;
char* var183 /* : CString */;
val* var184 /* : String */;
static val* varonce185;
val* var186 /* : String */;
char* var187 /* : CString */;
val* var188 /* : String */;
val* var189 /* : AbstractCompiler */;
val* var191 /* : AbstractCompiler */;
val* var192 /* : CodeWriter */;
val* var194 /* : CodeWriter */;
static val* varonce195;
val* var196 /* : String */;
char* var197 /* : CString */;
val* var198 /* : String */;
val* var199 /* : AbstractCompiler */;
val* var201 /* : AbstractCompiler */;
val* var202 /* : CodeWriter */;
val* var204 /* : CodeWriter */;
static val* varonce205;
val* var206 /* : String */;
char* var207 /* : CString */;
val* var208 /* : String */;
val* var209 /* : AbstractCompiler */;
val* var211 /* : AbstractCompiler */;
val* var212 /* : CodeWriter */;
val* var214 /* : CodeWriter */;
static val* varonce215;
val* var216 /* : String */;
char* var217 /* : CString */;
val* var218 /* : String */;
val* var219 /* : ModelBuilder */;
val* var221 /* : ModelBuilder */;
val* var222 /* : ToolContext */;
val* var224 /* : ToolContext */;
val* var225 /* : OptionBool */;
val* var227 /* : OptionBool */;
val* var228 /* : nullable Object */;
val* var230 /* : nullable Object */;
short int var231 /* : Bool */;
static val* varonce232;
val* var233 /* : String */;
char* var234 /* : CString */;
val* var235 /* : String */;
static val* varonce236;
val* var237 /* : String */;
char* var238 /* : CString */;
val* var239 /* : String */;
val* var240 /* : AbstractCompiler */;
val* var242 /* : AbstractCompiler */;
val* var243 /* : CodeWriter */;
val* var245 /* : CodeWriter */;
static val* varonce246;
val* var247 /* : String */;
char* var248 /* : CString */;
val* var249 /* : String */;
val* var250 /* : AbstractCompiler */;
val* var252 /* : AbstractCompiler */;
val* var253 /* : CodeWriter */;
val* var255 /* : CodeWriter */;
static val* varonce256;
val* var257 /* : String */;
char* var258 /* : CString */;
val* var259 /* : String */;
static val* varonce260;
val* var261 /* : String */;
char* var262 /* : CString */;
val* var263 /* : String */;
short int var264 /* : Bool */;
static val* varonce265;
val* var266 /* : String */;
char* var267 /* : CString */;
val* var268 /* : String */;
static val* varonce269;
val* var270 /* : String */;
char* var271 /* : CString */;
val* var272 /* : String */;
static val* varonce273;
val* var274 /* : String */;
char* var275 /* : CString */;
val* var276 /* : String */;
static val* varonce277;
val* var278 /* : String */;
char* var279 /* : CString */;
val* var280 /* : String */;
static val* varonce281;
val* var282 /* : String */;
char* var283 /* : CString */;
val* var284 /* : String */;
static val* varonce285;
val* var286 /* : String */;
char* var287 /* : CString */;
val* var288 /* : String */;
static val* varonce289;
val* var290 /* : String */;
char* var291 /* : CString */;
val* var292 /* : String */;
static val* varonce293;
val* var294 /* : String */;
char* var295 /* : CString */;
val* var296 /* : String */;
static val* varonce297;
val* var298 /* : String */;
char* var299 /* : CString */;
val* var300 /* : String */;
static val* varonce301;
val* var302 /* : String */;
char* var303 /* : CString */;
val* var304 /* : String */;
static val* varonce305;
val* var306 /* : String */;
char* var307 /* : CString */;
val* var308 /* : String */;
static val* varonce309;
val* var310 /* : String */;
char* var311 /* : CString */;
val* var312 /* : String */;
static val* varonce313;
val* var314 /* : String */;
char* var315 /* : CString */;
val* var316 /* : String */;
static val* varonce317;
val* var318 /* : String */;
char* var319 /* : CString */;
val* var320 /* : String */;
static val* varonce321;
val* var322 /* : String */;
char* var323 /* : CString */;
val* var324 /* : String */;
static val* varonce325;
val* var326 /* : String */;
char* var327 /* : CString */;
val* var328 /* : String */;
static val* varonce329;
val* var330 /* : String */;
char* var331 /* : CString */;
val* var332 /* : String */;
static val* varonce333;
val* var334 /* : String */;
char* var335 /* : CString */;
val* var336 /* : String */;
static val* varonce337;
val* var338 /* : String */;
char* var339 /* : CString */;
val* var340 /* : String */;
static val* varonce341;
val* var342 /* : String */;
char* var343 /* : CString */;
val* var344 /* : String */;
static val* varonce345;
val* var346 /* : String */;
char* var347 /* : CString */;
val* var348 /* : String */;
static val* varonce349;
val* var350 /* : String */;
char* var351 /* : CString */;
val* var352 /* : String */;
static val* varonce353;
val* var354 /* : String */;
char* var355 /* : CString */;
val* var356 /* : String */;
static val* varonce357;
val* var358 /* : String */;
char* var359 /* : CString */;
val* var360 /* : String */;
static val* varonce361;
val* var362 /* : String */;
char* var363 /* : CString */;
val* var364 /* : String */;
static val* varonce365;
val* var366 /* : String */;
char* var367 /* : CString */;
val* var368 /* : String */;
static val* varonce369;
val* var370 /* : String */;
char* var371 /* : CString */;
val* var372 /* : String */;
static val* varonce373;
val* var374 /* : String */;
char* var375 /* : CString */;
val* var376 /* : String */;
static val* varonce377;
val* var378 /* : String */;
char* var379 /* : CString */;
val* var380 /* : String */;
static val* varonce381;
val* var382 /* : String */;
char* var383 /* : CString */;
val* var384 /* : String */;
static val* varonce385;
val* var386 /* : String */;
char* var387 /* : CString */;
val* var388 /* : String */;
static val* varonce389;
val* var390 /* : String */;
char* var391 /* : CString */;
val* var392 /* : String */;
static val* varonce393;
val* var394 /* : String */;
char* var395 /* : CString */;
val* var396 /* : String */;
static val* varonce397;
val* var398 /* : String */;
char* var399 /* : CString */;
val* var400 /* : String */;
static val* varonce401;
val* var402 /* : String */;
char* var403 /* : CString */;
val* var404 /* : String */;
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
static val* varonce417;
val* var418 /* : String */;
char* var419 /* : CString */;
val* var420 /* : String */;
static val* varonce421;
val* var422 /* : String */;
char* var423 /* : CString */;
val* var424 /* : String */;
static val* varonce425;
val* var426 /* : String */;
char* var427 /* : CString */;
val* var428 /* : String */;
static val* varonce429;
val* var430 /* : String */;
char* var431 /* : CString */;
val* var432 /* : String */;
static val* varonce433;
val* var434 /* : String */;
char* var435 /* : CString */;
val* var436 /* : String */;
static val* varonce437;
val* var438 /* : String */;
char* var439 /* : CString */;
val* var440 /* : String */;
static val* varonce441;
val* var442 /* : String */;
char* var443 /* : CString */;
val* var444 /* : String */;
static val* varonce445;
val* var446 /* : String */;
char* var447 /* : CString */;
val* var448 /* : String */;
static val* varonce449;
val* var450 /* : String */;
char* var451 /* : CString */;
val* var452 /* : String */;
static val* varonce453;
val* var454 /* : String */;
char* var455 /* : CString */;
val* var456 /* : String */;
static val* varonce457;
val* var458 /* : String */;
char* var459 /* : CString */;
val* var460 /* : String */;
static val* varonce461;
val* var462 /* : String */;
char* var463 /* : CString */;
val* var464 /* : String */;
static val* varonce465;
val* var466 /* : String */;
char* var467 /* : CString */;
val* var468 /* : String */;
static val* varonce469;
val* var470 /* : String */;
char* var471 /* : CString */;
val* var472 /* : String */;
static val* varonce473;
val* var474 /* : String */;
char* var475 /* : CString */;
val* var476 /* : String */;
static val* varonce477;
val* var478 /* : String */;
char* var479 /* : CString */;
val* var480 /* : String */;
static val* varonce481;
val* var482 /* : String */;
char* var483 /* : CString */;
val* var484 /* : String */;
static val* varonce485;
val* var486 /* : String */;
char* var487 /* : CString */;
val* var488 /* : String */;
static val* varonce489;
val* var490 /* : String */;
char* var491 /* : CString */;
val* var492 /* : String */;
static val* varonce493;
val* var494 /* : String */;
char* var495 /* : CString */;
val* var496 /* : String */;
static val* varonce497;
val* var498 /* : String */;
char* var499 /* : CString */;
val* var500 /* : String */;
val* var501 /* : MModule */;
val* var503 /* : MModule */;
val* var504 /* : nullable MClassType */;
val* var_main_type /* var main_type: nullable MClassType */;
short int var505 /* : Bool */;
short int var506 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var508 /* : Bool */;
short int var509 /* : Bool */;
val* var510 /* : AbstractCompiler */;
val* var512 /* : AbstractCompiler */;
val* var513 /* : MModule */;
val* var515 /* : MModule */;
val* var_mainmodule /* var mainmodule: MModule */;
val* var516 /* : RuntimeVariable */;
val* var_glob_sys /* var glob_sys: RuntimeVariable */;
val* var518 /* : NativeArray[String] */;
static val* varonce517;
static val* varonce519;
val* var520 /* : String */;
char* var521 /* : CString */;
val* var522 /* : String */;
static val* varonce523;
val* var524 /* : String */;
char* var525 /* : CString */;
val* var526 /* : String */;
val* var527 /* : String */;
val* var528 /* : String */;
static val* varonce529;
val* var530 /* : String */;
char* var531 /* : CString */;
val* var532 /* : String */;
val* var533 /* : MClass */;
val* var535 /* : MClass */;
val* var536 /* : nullable MMethod */;
val* var_main_init /* var main_init: nullable MMethod */;
short int var537 /* : Bool */;
short int var538 /* : Bool */;
short int var540 /* : Bool */;
short int var541 /* : Bool */;
val* var542 /* : Array[RuntimeVariable] */;
val* var_543 /* var : Array[RuntimeVariable] */;
val* var544 /* : nullable RuntimeVariable */;
val* var545 /* : nullable MMethod */;
static val* varonce546;
val* var547 /* : String */;
char* var548 /* : CString */;
val* var549 /* : String */;
val* var550 /* : MClass */;
val* var552 /* : MClass */;
val* var553 /* : nullable MMethod */;
static val* varonce554;
val* var555 /* : String */;
char* var556 /* : CString */;
val* var557 /* : String */;
val* var558 /* : MClass */;
val* var560 /* : MClass */;
val* var561 /* : nullable MMethod */;
val* var_main_method /* var main_method: nullable MMethod */;
short int var562 /* : Bool */;
short int var563 /* : Bool */;
short int var565 /* : Bool */;
short int var566 /* : Bool */;
val* var567 /* : Array[RuntimeVariable] */;
val* var_568 /* var : Array[RuntimeVariable] */;
val* var569 /* : nullable RuntimeVariable */;
val* var570 /* : ModelBuilder */;
val* var572 /* : ModelBuilder */;
val* var573 /* : ToolContext */;
val* var575 /* : ToolContext */;
val* var576 /* : OptionBool */;
val* var578 /* : OptionBool */;
val* var579 /* : nullable Object */;
val* var581 /* : nullable Object */;
short int var582 /* : Bool */;
static val* varonce583;
val* var584 /* : String */;
char* var585 /* : CString */;
val* var586 /* : String */;
static val* varonce587;
val* var588 /* : String */;
char* var589 /* : CString */;
val* var590 /* : String */;
static val* varonce591;
val* var592 /* : String */;
char* var593 /* : CString */;
val* var594 /* : String */;
static val* varonce595;
val* var596 /* : String */;
char* var597 /* : CString */;
val* var598 /* : String */;
val* var599 /* : Array[String] */;
val* var601 /* : Array[String] */;
val* var_602 /* var : Array[String] */;
val* var603 /* : IndexedIterator[nullable Object] */;
val* var_604 /* var : IndexedIterator[String] */;
short int var605 /* : Bool */;
val* var607 /* : nullable Object */;
val* var_tag608 /* var tag: String */;
val* var610 /* : NativeArray[String] */;
static val* varonce609;
static val* varonce611;
val* var612 /* : String */;
char* var613 /* : CString */;
val* var614 /* : String */;
static val* varonce615;
val* var616 /* : String */;
char* var617 /* : CString */;
val* var618 /* : String */;
val* var619 /* : String */;
val* var621 /* : NativeArray[String] */;
static val* varonce620;
static val* varonce622;
val* var623 /* : String */;
char* var624 /* : CString */;
val* var625 /* : String */;
static val* varonce626;
val* var627 /* : String */;
char* var628 /* : CString */;
val* var629 /* : String */;
static val* varonce630;
val* var631 /* : String */;
char* var632 /* : CString */;
val* var633 /* : String */;
static val* varonce634;
val* var635 /* : String */;
char* var636 /* : CString */;
val* var637 /* : String */;
static val* varonce638;
val* var639 /* : String */;
char* var640 /* : CString */;
val* var641 /* : String */;
val* var642 /* : String */;
val* var644 /* : NativeArray[String] */;
static val* varonce643;
static val* varonce645;
val* var646 /* : String */;
char* var647 /* : CString */;
val* var648 /* : String */;
static val* varonce649;
val* var650 /* : String */;
char* var651 /* : CString */;
val* var652 /* : String */;
val* var653 /* : String */;
val* var655 /* : NativeArray[String] */;
static val* varonce654;
static val* varonce656;
val* var657 /* : String */;
char* var658 /* : CString */;
val* var659 /* : String */;
static val* varonce660;
val* var661 /* : String */;
char* var662 /* : CString */;
val* var663 /* : String */;
val* var664 /* : String */;
val* var666 /* : NativeArray[String] */;
static val* varonce665;
static val* varonce667;
val* var668 /* : String */;
char* var669 /* : CString */;
val* var670 /* : String */;
static val* varonce671;
val* var672 /* : String */;
char* var673 /* : CString */;
val* var674 /* : String */;
val* var675 /* : String */;
val* var677 /* : NativeArray[String] */;
static val* varonce676;
static val* varonce678;
val* var679 /* : String */;
char* var680 /* : CString */;
val* var681 /* : String */;
static val* varonce682;
val* var683 /* : String */;
char* var684 /* : CString */;
val* var685 /* : String */;
val* var686 /* : String */;
static val* varonce687;
val* var688 /* : String */;
char* var689 /* : CString */;
val* var690 /* : String */;
static val* varonce691;
val* var692 /* : String */;
char* var693 /* : CString */;
val* var694 /* : String */;
val* var695 /* : Array[String] */;
val* var697 /* : Array[String] */;
val* var698 /* : Array[nullable Object] */;
val* var_tags /* var tags: Array[String] */;
static val* varonce699;
val* var700 /* : String */;
char* var701 /* : CString */;
val* var702 /* : String */;
val* var_703 /* var : Array[String] */;
val* var704 /* : IndexedIterator[nullable Object] */;
val* var_705 /* var : IndexedIterator[String] */;
short int var706 /* : Bool */;
val* var708 /* : nullable Object */;
val* var_tag709 /* var tag: String */;
val* var711 /* : NativeArray[String] */;
static val* varonce710;
static val* varonce712;
val* var713 /* : String */;
char* var714 /* : CString */;
val* var715 /* : String */;
static val* varonce716;
val* var717 /* : String */;
char* var718 /* : CString */;
val* var719 /* : String */;
val* var720 /* : String */;
val* var722 /* : NativeArray[String] */;
static val* varonce721;
static val* varonce723;
val* var724 /* : String */;
char* var725 /* : CString */;
val* var726 /* : String */;
static val* varonce727;
val* var728 /* : String */;
char* var729 /* : CString */;
val* var730 /* : String */;
static val* varonce731;
val* var732 /* : String */;
char* var733 /* : CString */;
val* var734 /* : String */;
val* var735 /* : String */;
val* var737 /* : NativeArray[String] */;
static val* varonce736;
static val* varonce738;
val* var739 /* : String */;
char* var740 /* : CString */;
val* var741 /* : String */;
static val* varonce742;
val* var743 /* : String */;
char* var744 /* : CString */;
val* var745 /* : String */;
static val* varonce746;
val* var747 /* : String */;
char* var748 /* : CString */;
val* var749 /* : String */;
val* var750 /* : String */;
val* var752 /* : NativeArray[String] */;
static val* varonce751;
static val* varonce753;
val* var754 /* : String */;
char* var755 /* : CString */;
val* var756 /* : String */;
static val* varonce757;
val* var758 /* : String */;
char* var759 /* : CString */;
val* var760 /* : String */;
static val* varonce761;
val* var762 /* : String */;
char* var763 /* : CString */;
val* var764 /* : String */;
val* var765 /* : String */;
val* var767 /* : NativeArray[String] */;
static val* varonce766;
static val* varonce768;
val* var769 /* : String */;
char* var770 /* : CString */;
val* var771 /* : String */;
static val* varonce772;
val* var773 /* : String */;
char* var774 /* : CString */;
val* var775 /* : String */;
static val* varonce776;
val* var777 /* : String */;
char* var778 /* : CString */;
val* var779 /* : String */;
val* var780 /* : String */;
val* var781 /* : ModelBuilder */;
val* var783 /* : ModelBuilder */;
val* var784 /* : ToolContext */;
val* var786 /* : ToolContext */;
val* var787 /* : OptionBool */;
val* var789 /* : OptionBool */;
val* var790 /* : nullable Object */;
val* var792 /* : nullable Object */;
short int var793 /* : Bool */;
static val* varonce794;
val* var795 /* : String */;
char* var796 /* : CString */;
val* var797 /* : String */;
static val* varonce798;
val* var799 /* : String */;
char* var800 /* : CString */;
val* var801 /* : String */;
static val* varonce802;
val* var803 /* : String */;
char* var804 /* : CString */;
val* var805 /* : String */;
static val* varonce806;
val* var807 /* : String */;
char* var808 /* : CString */;
val* var809 /* : String */;
static val* varonce810;
val* var811 /* : String */;
char* var812 /* : CString */;
val* var813 /* : String */;
static val* varonce814;
val* var815 /* : String */;
char* var816 /* : CString */;
val* var817 /* : String */;
val* var818 /* : ModelBuilder */;
val* var820 /* : ModelBuilder */;
val* var821 /* : ToolContext */;
val* var823 /* : ToolContext */;
val* var824 /* : OptionBool */;
val* var826 /* : OptionBool */;
val* var827 /* : nullable Object */;
val* var829 /* : nullable Object */;
short int var830 /* : Bool */;
static val* varonce831;
val* var832 /* : String */;
char* var833 /* : CString */;
val* var834 /* : String */;
static val* varonce835;
val* var836 /* : String */;
char* var837 /* : CString */;
val* var838 /* : String */;
static val* varonce839;
val* var840 /* : String */;
char* var841 /* : CString */;
val* var842 /* : String */;
static val* varonce843;
val* var844 /* : String */;
char* var845 /* : CString */;
val* var846 /* : String */;
val* var847 /* : MModule */;
val* var849 /* : MModule */;
val* var850 /* : POSetElement[MModule] */;
val* var852 /* : POSetElement[MModule] */;
val* var853 /* : Collection[nullable Object] */;
val* var_854 /* var : Collection[MModule] */;
val* var855 /* : Iterator[nullable Object] */;
val* var_856 /* var : Iterator[MModule] */;
short int var857 /* : Bool */;
val* var859 /* : nullable Object */;
val* var_m /* var m: MModule */;
static val* varonce860;
val* var861 /* : String */;
char* var862 /* : CString */;
val* var863 /* : String */;
val* var864 /* : String */;
val* var865 /* : Text */;
val* var_f /* var f: String */;
val* var867 /* : NativeArray[String] */;
static val* varonce866;
static val* varonce868;
val* var869 /* : String */;
char* var870 /* : CString */;
val* var871 /* : String */;
static val* varonce872;
val* var873 /* : String */;
char* var874 /* : CString */;
val* var875 /* : String */;
static val* varonce876;
val* var877 /* : String */;
char* var878 /* : CString */;
val* var879 /* : String */;
val* var880 /* : Location */;
val* var882 /* : Location */;
val* var883 /* : nullable SourceFile */;
val* var885 /* : nullable SourceFile */;
val* var886 /* : String */;
val* var888 /* : String */;
val* var889 /* : String */;
val* var890 /* : String */;
val* var892 /* : NativeArray[String] */;
static val* varonce891;
static val* varonce893;
val* var894 /* : String */;
char* var895 /* : CString */;
val* var896 /* : String */;
static val* varonce897;
val* var898 /* : String */;
char* var899 /* : CString */;
val* var900 /* : String */;
val* var901 /* : String */;
{
var = ((val*(*)(val* self))(self->class->vft[COLOR_nitc__abstract_compiler__AbstractCompiler__new_visitor]))(self); /* new_visitor on <self:AbstractCompiler>*/
}
var_v = var;
if (likely(varonce!=NULL)) {
var1 = varonce;
} else {
var2 = "#include <signal.h>";
var3 = core__abstract_text___CString___to_s_full(var2, 19l, 19l);
var1 = var3;
varonce = var1;
}
{
nitc___nitc__AbstractCompilerVisitor___add_decl(var_v, var1); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:AbstractCompilerVisitor>*/
}
{
{ /* Inline abstract_compiler#AbstractCompiler#target_platform (self) on <self:AbstractCompiler> */
var6 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___target_platform].val; /* _target_platform on <self:AbstractCompiler> */
if (unlikely(var6 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _target_platform");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 549);
fatal_exit(1);
}
var4 = var6;
RET_LABEL5:(void)0;
}
}
var_platform = var4;
{
var8 = ((short int(*)(val* self))(var_platform->class->vft[COLOR_nitc__platform__Platform__no_main]))(var_platform); /* no_main on <var_platform:Platform>*/
}
var_ = var8;
if (var8){
var7 = var_;
} else {
{
{ /* Inline abstract_compiler#AbstractCompiler#modelbuilder (self) on <self:AbstractCompiler> */
var11 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___modelbuilder].val; /* _modelbuilder on <self:AbstractCompiler> */
if (unlikely(var11 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 538);
fatal_exit(1);
}
var9 = var11;
RET_LABEL10:(void)0;
}
}
{
{ /* Inline modelbuilder_base#ModelBuilder#toolcontext (var9) on <var9:ModelBuilder> */
var14 = var9->attrs[COLOR_nitc__modelbuilder_base__ModelBuilder___toolcontext].val; /* _toolcontext on <var9:ModelBuilder> */
if (unlikely(var14 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelbuilder_base, 47);
fatal_exit(1);
}
var12 = var14;
RET_LABEL13:(void)0;
}
}
{
{ /* Inline abstract_compiler#ToolContext#opt_no_main (var12) on <var12:ToolContext> */
var17 = var12->attrs[COLOR_nitc__abstract_compiler__ToolContext___opt_no_main].val; /* _opt_no_main on <var12:ToolContext> */
if (unlikely(var17 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_no_main");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 36);
fatal_exit(1);
}
var15 = var17;
RET_LABEL16:(void)0;
}
}
{
{ /* Inline opts#Option#value (var15) on <var15:OptionBool> */
var20 = var15->attrs[COLOR_opts__Option___value].val; /* _value on <var15:OptionBool> */
var18 = var20;
RET_LABEL19:(void)0;
}
}
var21 = (short int)((long)(var18)>>2);
var7 = var21;
}
var_no_main = var7;
{
var22 = ((short int(*)(val* self))(var_platform->class->vft[COLOR_nitc__platform__Platform__supports_libunwind]))(var_platform); /* supports_libunwind on <var_platform:Platform>*/
}
if (var22){
if (likely(varonce23!=NULL)) {
var24 = varonce23;
} else {
var25 = "#ifndef NO_STACKTRACE";
var26 = core__abstract_text___CString___to_s_full(var25, 21l, 21l);
var24 = var26;
varonce23 = var24;
}
{
nitc___nitc__AbstractCompilerVisitor___add_decl(var_v, var24); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:AbstractCompilerVisitor>*/
}
if (likely(varonce27!=NULL)) {
var28 = varonce27;
} else {
var29 = "#define UNW_LOCAL_ONLY";
var30 = core__abstract_text___CString___to_s_full(var29, 22l, 22l);
var28 = var30;
varonce27 = var28;
}
{
nitc___nitc__AbstractCompilerVisitor___add_decl(var_v, var28); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:AbstractCompilerVisitor>*/
}
if (likely(varonce31!=NULL)) {
var32 = varonce31;
} else {
var33 = "#include <libunwind.h>";
var34 = core__abstract_text___CString___to_s_full(var33, 22l, 22l);
var32 = var34;
varonce31 = var32;
}
{
nitc___nitc__AbstractCompilerVisitor___add_decl(var_v, var32); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:AbstractCompilerVisitor>*/
}
if (likely(varonce35!=NULL)) {
var36 = varonce35;
} else {
var37 = "#include \"c_functions_hash.h\"";
var38 = core__abstract_text___CString___to_s_full(var37, 29l, 29l);
var36 = var38;
varonce35 = var36;
}
{
nitc___nitc__AbstractCompilerVisitor___add_decl(var_v, var36); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:AbstractCompilerVisitor>*/
}
if (likely(varonce39!=NULL)) {
var40 = varonce39;
} else {
var41 = "#endif";
var42 = core__abstract_text___CString___to_s_full(var41, 6l, 6l);
var40 = var42;
varonce39 = var40;
}
{
nitc___nitc__AbstractCompilerVisitor___add_decl(var_v, var40); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:AbstractCompilerVisitor>*/
}
} else {
}
if (likely(varonce43!=NULL)) {
var44 = varonce43;
} else {
var45 = "int glob_argc;";
var46 = core__abstract_text___CString___to_s_full(var45, 14l, 14l);
var44 = var46;
varonce43 = var44;
}
{
nitc___nitc__AbstractCompilerVisitor___add_decl(var_v, var44); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:AbstractCompilerVisitor>*/
}
if (likely(varonce47!=NULL)) {
var48 = varonce47;
} else {
var49 = "char **glob_argv;";
var50 = core__abstract_text___CString___to_s_full(var49, 17l, 17l);
var48 = var50;
varonce47 = var48;
}
{
nitc___nitc__AbstractCompilerVisitor___add_decl(var_v, var48); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:AbstractCompilerVisitor>*/
}
if (likely(varonce51!=NULL)) {
var52 = varonce51;
} else {
var53 = "val *glob_sys;";
var54 = core__abstract_text___CString___to_s_full(var53, 14l, 14l);
var52 = var54;
varonce51 = var52;
}
{
nitc___nitc__AbstractCompilerVisitor___add_decl(var_v, var52); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:AbstractCompilerVisitor>*/
}
if (likely(varonce55!=NULL)) {
var56 = varonce55;
} else {
var57 = "struct catch_stack_t catchStack;";
var58 = core__abstract_text___CString___to_s_full(var57, 32l, 32l);
var56 = var58;
varonce55 = var56;
}
{
nitc___nitc__AbstractCompilerVisitor___add_decl(var_v, var56); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:AbstractCompilerVisitor>*/
}
{
{ /* Inline abstract_compiler#AbstractCompiler#modelbuilder (self) on <self:AbstractCompiler> */
var61 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___modelbuilder].val; /* _modelbuilder on <self:AbstractCompiler> */
if (unlikely(var61 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 538);
fatal_exit(1);
}
var59 = var61;
RET_LABEL60:(void)0;
}
}
{
{ /* Inline modelbuilder_base#ModelBuilder#toolcontext (var59) on <var59:ModelBuilder> */
var64 = var59->attrs[COLOR_nitc__modelbuilder_base__ModelBuilder___toolcontext].val; /* _toolcontext on <var59:ModelBuilder> */
if (unlikely(var64 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelbuilder_base, 47);
fatal_exit(1);
}
var62 = var64;
RET_LABEL63:(void)0;
}
}
{
{ /* Inline abstract_compiler#ToolContext#opt_typing_test_metrics (var62) on <var62:ToolContext> */
var67 = var62->attrs[COLOR_nitc__abstract_compiler__ToolContext___opt_typing_test_metrics].val; /* _opt_typing_test_metrics on <var62:ToolContext> */
if (unlikely(var67 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_typing_test_metrics");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 60);
fatal_exit(1);
}
var65 = var67;
RET_LABEL66:(void)0;
}
}
{
{ /* Inline opts#Option#value (var65) on <var65:OptionBool> */
var70 = var65->attrs[COLOR_opts__Option___value].val; /* _value on <var65:OptionBool> */
var68 = var70;
RET_LABEL69:(void)0;
}
}
var71 = (short int)((long)(var68)>>2);
if (var71){
{
{ /* Inline abstract_compiler#AbstractCompiler#count_type_test_tags (self) on <self:AbstractCompiler> */
var74 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___count_type_test_tags].val; /* _count_type_test_tags on <self:AbstractCompiler> */
if (unlikely(var74 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _count_type_test_tags");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1096);
fatal_exit(1);
}
var72 = var74;
RET_LABEL73:(void)0;
}
}
var_75 = var72;
{
var76 = core___core__AbstractArrayRead___core__abstract_collection__Collection__iterator(var_75);
}
var_77 = var76;
for(;;) {
{
var78 = ((short int(*)(val* self))((((long)var_77&3)?class_info[((long)var_77&3)]:var_77->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_77); /* is_ok on <var_77:IndexedIterator[String]>*/
}
if (var78){
} else {
goto BREAK_label;
}
{
var79 = ((val*(*)(val* self))((((long)var_77&3)?class_info[((long)var_77&3)]:var_77->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_77); /* item on <var_77:IndexedIterator[String]>*/
}
var_tag = var79;
if (unlikely(varonce80==NULL)) {
var81 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce82!=NULL)) {
var83 = varonce82;
} else {
var84 = "long count_type_test_resolved_";
var85 = core__abstract_text___CString___to_s_full(var84, 30l, 30l);
var83 = var85;
varonce82 = var83;
}
((struct instance_core__NativeArray*)var81)->values[0]=var83;
if (likely(varonce86!=NULL)) {
var87 = varonce86;
} else {
var88 = ";";
var89 = core__abstract_text___CString___to_s_full(var88, 1l, 1l);
var87 = var89;
varonce86 = var87;
}
((struct instance_core__NativeArray*)var81)->values[2]=var87;
} else {
var81 = varonce80;
varonce80 = NULL;
}
((struct instance_core__NativeArray*)var81)->values[1]=var_tag;
{
var90 = ((val*(*)(val* self))(var81->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var81); /* native_to_s on <var81:NativeArray[String]>*/
}
varonce80 = var81;
{
nitc___nitc__AbstractCompilerVisitor___add_decl(var_v, var90); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:AbstractCompilerVisitor>*/
}
if (unlikely(varonce91==NULL)) {
var92 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce93!=NULL)) {
var94 = varonce93;
} else {
var95 = "long count_type_test_unresolved_";
var96 = core__abstract_text___CString___to_s_full(var95, 32l, 32l);
var94 = var96;
varonce93 = var94;
}
((struct instance_core__NativeArray*)var92)->values[0]=var94;
if (likely(varonce97!=NULL)) {
var98 = varonce97;
} else {
var99 = ";";
var100 = core__abstract_text___CString___to_s_full(var99, 1l, 1l);
var98 = var100;
varonce97 = var98;
}
((struct instance_core__NativeArray*)var92)->values[2]=var98;
} else {
var92 = varonce91;
varonce91 = NULL;
}
((struct instance_core__NativeArray*)var92)->values[1]=var_tag;
{
var101 = ((val*(*)(val* self))(var92->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var92); /* native_to_s on <var92:NativeArray[String]>*/
}
varonce91 = var92;
{
nitc___nitc__AbstractCompilerVisitor___add_decl(var_v, var101); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:AbstractCompilerVisitor>*/
}
if (unlikely(varonce102==NULL)) {
var103 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce104!=NULL)) {
var105 = varonce104;
} else {
var106 = "long count_type_test_skipped_";
var107 = core__abstract_text___CString___to_s_full(var106, 29l, 29l);
var105 = var107;
varonce104 = var105;
}
((struct instance_core__NativeArray*)var103)->values[0]=var105;
if (likely(varonce108!=NULL)) {
var109 = varonce108;
} else {
var110 = ";";
var111 = core__abstract_text___CString___to_s_full(var110, 1l, 1l);
var109 = var111;
varonce108 = var109;
}
((struct instance_core__NativeArray*)var103)->values[2]=var109;
} else {
var103 = varonce102;
varonce102 = NULL;
}
((struct instance_core__NativeArray*)var103)->values[1]=var_tag;
{
var112 = ((val*(*)(val* self))(var103->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var103); /* native_to_s on <var103:NativeArray[String]>*/
}
varonce102 = var103;
{
nitc___nitc__AbstractCompilerVisitor___add_decl(var_v, var112); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:AbstractCompilerVisitor>*/
}
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler (var_v) on <var_v:AbstractCompilerVisitor> */
var115 = var_v->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <var_v:AbstractCompilerVisitor> */
if (unlikely(var115 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1200);
fatal_exit(1);
}
var113 = var115;
RET_LABEL114:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompiler#header (var113) on <var113:AbstractCompiler> */
var118 = var113->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___header].val; /* _header on <var113:AbstractCompiler> */
if (unlikely(var118 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 585);
fatal_exit(1);
}
var116 = var118;
RET_LABEL117:(void)0;
}
}
if (unlikely(varonce119==NULL)) {
var120 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce121!=NULL)) {
var122 = varonce121;
} else {
var123 = "extern long count_type_test_resolved_";
var124 = core__abstract_text___CString___to_s_full(var123, 37l, 37l);
var122 = var124;
varonce121 = var122;
}
((struct instance_core__NativeArray*)var120)->values[0]=var122;
if (likely(varonce125!=NULL)) {
var126 = varonce125;
} else {
var127 = ";";
var128 = core__abstract_text___CString___to_s_full(var127, 1l, 1l);
var126 = var128;
varonce125 = var126;
}
((struct instance_core__NativeArray*)var120)->values[2]=var126;
} else {
var120 = varonce119;
varonce119 = NULL;
}
((struct instance_core__NativeArray*)var120)->values[1]=var_tag;
{
var129 = ((val*(*)(val* self))(var120->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var120); /* native_to_s on <var120:NativeArray[String]>*/
}
varonce119 = var120;
{
nitc___nitc__CodeWriter___add_decl(var116, var129); /* Direct call abstract_compiler#CodeWriter#add_decl on <var116:CodeWriter>*/
}
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler (var_v) on <var_v:AbstractCompilerVisitor> */
var132 = var_v->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <var_v:AbstractCompilerVisitor> */
if (unlikely(var132 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1200);
fatal_exit(1);
}
var130 = var132;
RET_LABEL131:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompiler#header (var130) on <var130:AbstractCompiler> */
var135 = var130->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___header].val; /* _header on <var130:AbstractCompiler> */
if (unlikely(var135 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 585);
fatal_exit(1);
}
var133 = var135;
RET_LABEL134:(void)0;
}
}
if (unlikely(varonce136==NULL)) {
var137 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce138!=NULL)) {
var139 = varonce138;
} else {
var140 = "extern long count_type_test_unresolved_";
var141 = core__abstract_text___CString___to_s_full(var140, 39l, 39l);
var139 = var141;
varonce138 = var139;
}
((struct instance_core__NativeArray*)var137)->values[0]=var139;
if (likely(varonce142!=NULL)) {
var143 = varonce142;
} else {
var144 = ";";
var145 = core__abstract_text___CString___to_s_full(var144, 1l, 1l);
var143 = var145;
varonce142 = var143;
}
((struct instance_core__NativeArray*)var137)->values[2]=var143;
} else {
var137 = varonce136;
varonce136 = NULL;
}
((struct instance_core__NativeArray*)var137)->values[1]=var_tag;
{
var146 = ((val*(*)(val* self))(var137->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var137); /* native_to_s on <var137:NativeArray[String]>*/
}
varonce136 = var137;
{
nitc___nitc__CodeWriter___add_decl(var133, var146); /* Direct call abstract_compiler#CodeWriter#add_decl on <var133:CodeWriter>*/
}
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler (var_v) on <var_v:AbstractCompilerVisitor> */
var149 = var_v->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <var_v:AbstractCompilerVisitor> */
if (unlikely(var149 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1200);
fatal_exit(1);
}
var147 = var149;
RET_LABEL148:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompiler#header (var147) on <var147:AbstractCompiler> */
var152 = var147->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___header].val; /* _header on <var147:AbstractCompiler> */
if (unlikely(var152 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 585);
fatal_exit(1);
}
var150 = var152;
RET_LABEL151:(void)0;
}
}
if (unlikely(varonce153==NULL)) {
var154 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce155!=NULL)) {
var156 = varonce155;
} else {
var157 = "extern long count_type_test_skipped_";
var158 = core__abstract_text___CString___to_s_full(var157, 36l, 36l);
var156 = var158;
varonce155 = var156;
}
((struct instance_core__NativeArray*)var154)->values[0]=var156;
if (likely(varonce159!=NULL)) {
var160 = varonce159;
} else {
var161 = ";";
var162 = core__abstract_text___CString___to_s_full(var161, 1l, 1l);
var160 = var162;
varonce159 = var160;
}
((struct instance_core__NativeArray*)var154)->values[2]=var160;
} else {
var154 = varonce153;
varonce153 = NULL;
}
((struct instance_core__NativeArray*)var154)->values[1]=var_tag;
{
var163 = ((val*(*)(val* self))(var154->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var154); /* native_to_s on <var154:NativeArray[String]>*/
}
varonce153 = var154;
{
nitc___nitc__CodeWriter___add_decl(var150, var163); /* Direct call abstract_compiler#CodeWriter#add_decl on <var150:CodeWriter>*/
}
{
((void(*)(val* self))((((long)var_77&3)?class_info[((long)var_77&3)]:var_77->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_77); /* next on <var_77:IndexedIterator[String]>*/
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_77&3)?class_info[((long)var_77&3)]:var_77->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_77); /* finish on <var_77:IndexedIterator[String]>*/
}
} else {
}
{
{ /* Inline abstract_compiler#AbstractCompiler#modelbuilder (self) on <self:AbstractCompiler> */
var166 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___modelbuilder].val; /* _modelbuilder on <self:AbstractCompiler> */
if (unlikely(var166 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 538);
fatal_exit(1);
}
var164 = var166;
RET_LABEL165:(void)0;
}
}
{
{ /* Inline modelbuilder_base#ModelBuilder#toolcontext (var164) on <var164:ModelBuilder> */
var169 = var164->attrs[COLOR_nitc__modelbuilder_base__ModelBuilder___toolcontext].val; /* _toolcontext on <var164:ModelBuilder> */
if (unlikely(var169 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelbuilder_base, 47);
fatal_exit(1);
}
var167 = var169;
RET_LABEL168:(void)0;
}
}
{
{ /* Inline abstract_compiler#ToolContext#opt_invocation_metrics (var167) on <var167:ToolContext> */
var172 = var167->attrs[COLOR_nitc__abstract_compiler__ToolContext___opt_invocation_metrics].val; /* _opt_invocation_metrics on <var167:ToolContext> */
if (unlikely(var172 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_invocation_metrics");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 62);
fatal_exit(1);
}
var170 = var172;
RET_LABEL171:(void)0;
}
}
{
{ /* Inline opts#Option#value (var170) on <var170:OptionBool> */
var175 = var170->attrs[COLOR_opts__Option___value].val; /* _value on <var170:OptionBool> */
var173 = var175;
RET_LABEL174:(void)0;
}
}
var176 = (short int)((long)(var173)>>2);
if (var176){
if (likely(varonce177!=NULL)) {
var178 = varonce177;
} else {
var179 = "long count_invoke_by_tables;";
var180 = core__abstract_text___CString___to_s_full(var179, 28l, 28l);
var178 = var180;
varonce177 = var178;
}
{
nitc___nitc__AbstractCompilerVisitor___add_decl(var_v, var178); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:AbstractCompilerVisitor>*/
}
if (likely(varonce181!=NULL)) {
var182 = varonce181;
} else {
var183 = "long count_invoke_by_direct;";
var184 = core__abstract_text___CString___to_s_full(var183, 28l, 28l);
var182 = var184;
varonce181 = var182;
}
{
nitc___nitc__AbstractCompilerVisitor___add_decl(var_v, var182); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:AbstractCompilerVisitor>*/
}
if (likely(varonce185!=NULL)) {
var186 = varonce185;
} else {
var187 = "long count_invoke_by_inline;";
var188 = core__abstract_text___CString___to_s_full(var187, 28l, 28l);
var186 = var188;
varonce185 = var186;
}
{
nitc___nitc__AbstractCompilerVisitor___add_decl(var_v, var186); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:AbstractCompilerVisitor>*/
}
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler (var_v) on <var_v:AbstractCompilerVisitor> */
var191 = var_v->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <var_v:AbstractCompilerVisitor> */
if (unlikely(var191 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1200);
fatal_exit(1);
}
var189 = var191;
RET_LABEL190:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompiler#header (var189) on <var189:AbstractCompiler> */
var194 = var189->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___header].val; /* _header on <var189:AbstractCompiler> */
if (unlikely(var194 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 585);
fatal_exit(1);
}
var192 = var194;
RET_LABEL193:(void)0;
}
}
if (likely(varonce195!=NULL)) {
var196 = varonce195;
} else {
var197 = "extern long count_invoke_by_tables;";
var198 = core__abstract_text___CString___to_s_full(var197, 35l, 35l);
var196 = var198;
varonce195 = var196;
}
{
nitc___nitc__CodeWriter___add_decl(var192, var196); /* Direct call abstract_compiler#CodeWriter#add_decl on <var192:CodeWriter>*/
}
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler (var_v) on <var_v:AbstractCompilerVisitor> */
var201 = var_v->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <var_v:AbstractCompilerVisitor> */
if (unlikely(var201 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1200);
fatal_exit(1);
}
var199 = var201;
RET_LABEL200:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompiler#header (var199) on <var199:AbstractCompiler> */
var204 = var199->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___header].val; /* _header on <var199:AbstractCompiler> */
if (unlikely(var204 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 585);
fatal_exit(1);
}
var202 = var204;
RET_LABEL203:(void)0;
}
}
if (likely(varonce205!=NULL)) {
var206 = varonce205;
} else {
var207 = "extern long count_invoke_by_direct;";
var208 = core__abstract_text___CString___to_s_full(var207, 35l, 35l);
var206 = var208;
varonce205 = var206;
}
{
nitc___nitc__CodeWriter___add_decl(var202, var206); /* Direct call abstract_compiler#CodeWriter#add_decl on <var202:CodeWriter>*/
}
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler (var_v) on <var_v:AbstractCompilerVisitor> */
var211 = var_v->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <var_v:AbstractCompilerVisitor> */
if (unlikely(var211 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1200);
fatal_exit(1);
}
var209 = var211;
RET_LABEL210:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompiler#header (var209) on <var209:AbstractCompiler> */
var214 = var209->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___header].val; /* _header on <var209:AbstractCompiler> */
if (unlikely(var214 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 585);
fatal_exit(1);
}
var212 = var214;
RET_LABEL213:(void)0;
}
}
if (likely(varonce215!=NULL)) {
var216 = varonce215;
} else {
var217 = "extern long count_invoke_by_inline;";
var218 = core__abstract_text___CString___to_s_full(var217, 35l, 35l);
var216 = var218;
varonce215 = var216;
}
{
nitc___nitc__CodeWriter___add_decl(var212, var216); /* Direct call abstract_compiler#CodeWriter#add_decl on <var212:CodeWriter>*/
}
} else {
}
{
{ /* Inline abstract_compiler#AbstractCompiler#modelbuilder (self) on <self:AbstractCompiler> */
var221 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___modelbuilder].val; /* _modelbuilder on <self:AbstractCompiler> */
if (unlikely(var221 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 538);
fatal_exit(1);
}
var219 = var221;
RET_LABEL220:(void)0;
}
}
{
{ /* Inline modelbuilder_base#ModelBuilder#toolcontext (var219) on <var219:ModelBuilder> */
var224 = var219->attrs[COLOR_nitc__modelbuilder_base__ModelBuilder___toolcontext].val; /* _toolcontext on <var219:ModelBuilder> */
if (unlikely(var224 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelbuilder_base, 47);
fatal_exit(1);
}
var222 = var224;
RET_LABEL223:(void)0;
}
}
{
{ /* Inline abstract_compiler#ToolContext#opt_isset_checks_metrics (var222) on <var222:ToolContext> */
var227 = var222->attrs[COLOR_nitc__abstract_compiler__ToolContext___opt_isset_checks_metrics].val; /* _opt_isset_checks_metrics on <var222:ToolContext> */
if (unlikely(var227 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_isset_checks_metrics");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 64);
fatal_exit(1);
}
var225 = var227;
RET_LABEL226:(void)0;
}
}
{
{ /* Inline opts#Option#value (var225) on <var225:OptionBool> */
var230 = var225->attrs[COLOR_opts__Option___value].val; /* _value on <var225:OptionBool> */
var228 = var230;
RET_LABEL229:(void)0;
}
}
var231 = (short int)((long)(var228)>>2);
if (var231){
if (likely(varonce232!=NULL)) {
var233 = varonce232;
} else {
var234 = "long count_attr_reads = 0;";
var235 = core__abstract_text___CString___to_s_full(var234, 26l, 26l);
var233 = var235;
varonce232 = var233;
}
{
nitc___nitc__AbstractCompilerVisitor___add_decl(var_v, var233); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:AbstractCompilerVisitor>*/
}
if (likely(varonce236!=NULL)) {
var237 = varonce236;
} else {
var238 = "long count_isset_checks = 0;";
var239 = core__abstract_text___CString___to_s_full(var238, 28l, 28l);
var237 = var239;
varonce236 = var237;
}
{
nitc___nitc__AbstractCompilerVisitor___add_decl(var_v, var237); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:AbstractCompilerVisitor>*/
}
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler (var_v) on <var_v:AbstractCompilerVisitor> */
var242 = var_v->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <var_v:AbstractCompilerVisitor> */
if (unlikely(var242 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1200);
fatal_exit(1);
}
var240 = var242;
RET_LABEL241:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompiler#header (var240) on <var240:AbstractCompiler> */
var245 = var240->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___header].val; /* _header on <var240:AbstractCompiler> */
if (unlikely(var245 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 585);
fatal_exit(1);
}
var243 = var245;
RET_LABEL244:(void)0;
}
}
if (likely(varonce246!=NULL)) {
var247 = varonce246;
} else {
var248 = "extern long count_attr_reads;";
var249 = core__abstract_text___CString___to_s_full(var248, 29l, 29l);
var247 = var249;
varonce246 = var247;
}
{
nitc___nitc__CodeWriter___add_decl(var243, var247); /* Direct call abstract_compiler#CodeWriter#add_decl on <var243:CodeWriter>*/
}
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler (var_v) on <var_v:AbstractCompilerVisitor> */
var252 = var_v->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <var_v:AbstractCompilerVisitor> */
if (unlikely(var252 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1200);
fatal_exit(1);
}
var250 = var252;
RET_LABEL251:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompiler#header (var250) on <var250:AbstractCompiler> */
var255 = var250->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___header].val; /* _header on <var250:AbstractCompiler> */
if (unlikely(var255 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _header");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 585);
fatal_exit(1);
}
var253 = var255;
RET_LABEL254:(void)0;
}
}
if (likely(varonce256!=NULL)) {
var257 = varonce256;
} else {
var258 = "extern long count_isset_checks;";
var259 = core__abstract_text___CString___to_s_full(var258, 31l, 31l);
var257 = var259;
varonce256 = var257;
}
{
nitc___nitc__CodeWriter___add_decl(var253, var257); /* Direct call abstract_compiler#CodeWriter#add_decl on <var253:CodeWriter>*/
}
} else {
}
if (likely(varonce260!=NULL)) {
var261 = varonce260;
} else {
var262 = "static void show_backtrace(void) {";
var263 = core__abstract_text___CString___to_s_full(var262, 34l, 34l);
var261 = var263;
varonce260 = var261;
}
{
nitc___nitc__AbstractCompilerVisitor___add_decl(var_v, var261); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:AbstractCompilerVisitor>*/
}
{
var264 = ((short int(*)(val* self))(var_platform->class->vft[COLOR_nitc__platform__Platform__supports_libunwind]))(var_platform); /* supports_libunwind on <var_platform:Platform>*/
}
if (var264){
if (likely(varonce265!=NULL)) {
var266 = varonce265;
} else {
var267 = "#ifndef NO_STACKTRACE";
var268 = core__abstract_text___CString___to_s_full(var267, 21l, 21l);
var266 = var268;
varonce265 = var266;
}
{
nitc___nitc__AbstractCompilerVisitor___add_decl(var_v, var266); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:AbstractCompilerVisitor>*/
}
if (likely(varonce269!=NULL)) {
var270 = varonce269;
} else {
var271 = "char* opt = getenv(\"NIT_NO_STACK\");";
var272 = core__abstract_text___CString___to_s_full(var271, 35l, 35l);
var270 = var272;
varonce269 = var270;
}
{
nitc___nitc__AbstractCompilerVisitor___add_decl(var_v, var270); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:AbstractCompilerVisitor>*/
}
if (likely(varonce273!=NULL)) {
var274 = varonce273;
} else {
var275 = "unw_cursor_t cursor;";
var276 = core__abstract_text___CString___to_s_full(var275, 20l, 20l);
var274 = var276;
varonce273 = var274;
}
{
nitc___nitc__AbstractCompilerVisitor___add_decl(var_v, var274); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:AbstractCompilerVisitor>*/
}
if (likely(varonce277!=NULL)) {
var278 = varonce277;
} else {
var279 = "if(opt==NULL){";
var280 = core__abstract_text___CString___to_s_full(var279, 14l, 14l);
var278 = var280;
varonce277 = var278;
}
{
nitc___nitc__AbstractCompilerVisitor___add_decl(var_v, var278); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:AbstractCompilerVisitor>*/
}
if (likely(varonce281!=NULL)) {
var282 = varonce281;
} else {
var283 = "unw_context_t uc;";
var284 = core__abstract_text___CString___to_s_full(var283, 17l, 17l);
var282 = var284;
varonce281 = var282;
}
{
nitc___nitc__AbstractCompilerVisitor___add_decl(var_v, var282); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:AbstractCompilerVisitor>*/
}
if (likely(varonce285!=NULL)) {
var286 = varonce285;
} else {
var287 = "unw_word_t ip;";
var288 = core__abstract_text___CString___to_s_full(var287, 14l, 14l);
var286 = var288;
varonce285 = var286;
}
{
nitc___nitc__AbstractCompilerVisitor___add_decl(var_v, var286); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:AbstractCompilerVisitor>*/
}
if (likely(varonce289!=NULL)) {
var290 = varonce289;
} else {
var291 = "char* procname = malloc(sizeof(char) * 100);";
var292 = core__abstract_text___CString___to_s_full(var291, 44l, 44l);
var290 = var292;
varonce289 = var290;
}
{
nitc___nitc__AbstractCompilerVisitor___add_decl(var_v, var290); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:AbstractCompilerVisitor>*/
}
if (likely(varonce293!=NULL)) {
var294 = varonce293;
} else {
var295 = "unw_getcontext(&uc);";
var296 = core__abstract_text___CString___to_s_full(var295, 20l, 20l);
var294 = var296;
varonce293 = var294;
}
{
nitc___nitc__AbstractCompilerVisitor___add_decl(var_v, var294); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:AbstractCompilerVisitor>*/
}
if (likely(varonce297!=NULL)) {
var298 = varonce297;
} else {
var299 = "unw_init_local(&cursor, &uc);";
var300 = core__abstract_text___CString___to_s_full(var299, 29l, 29l);
var298 = var300;
varonce297 = var298;
}
{
nitc___nitc__AbstractCompilerVisitor___add_decl(var_v, var298); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:AbstractCompilerVisitor>*/
}
if (likely(varonce301!=NULL)) {
var302 = varonce301;
} else {
var303 = "PRINT_ERROR(\"-------------------------------------------------\\n\");";
var304 = core__abstract_text___CString___to_s_full(var303, 67l, 67l);
var302 = var304;
varonce301 = var302;
}
{
nitc___nitc__AbstractCompilerVisitor___add_decl(var_v, var302); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:AbstractCompilerVisitor>*/
}
if (likely(varonce305!=NULL)) {
var306 = varonce305;
} else {
var307 = "PRINT_ERROR(\"--   Stack Trace   ------------------------------\\n\");";
var308 = core__abstract_text___CString___to_s_full(var307, 67l, 67l);
var306 = var308;
varonce305 = var306;
}
{
nitc___nitc__AbstractCompilerVisitor___add_decl(var_v, var306); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:AbstractCompilerVisitor>*/
}
if (likely(varonce309!=NULL)) {
var310 = varonce309;
} else {
var311 = "PRINT_ERROR(\"-------------------------------------------------\\n\");";
var312 = core__abstract_text___CString___to_s_full(var311, 67l, 67l);
var310 = var312;
varonce309 = var310;
}
{
nitc___nitc__AbstractCompilerVisitor___add_decl(var_v, var310); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:AbstractCompilerVisitor>*/
}
if (likely(varonce313!=NULL)) {
var314 = varonce313;
} else {
var315 = "while (unw_step(&cursor) > 0) {";
var316 = core__abstract_text___CString___to_s_full(var315, 31l, 31l);
var314 = var316;
varonce313 = var314;
}
{
nitc___nitc__AbstractCompilerVisitor___add_decl(var_v, var314); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:AbstractCompilerVisitor>*/
}
if (likely(varonce317!=NULL)) {
var318 = varonce317;
} else {
var319 = "\tunw_get_proc_name(&cursor, procname, 100, &ip);";
var320 = core__abstract_text___CString___to_s_full(var319, 48l, 48l);
var318 = var320;
varonce317 = var318;
}
{
nitc___nitc__AbstractCompilerVisitor___add_decl(var_v, var318); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:AbstractCompilerVisitor>*/
}
if (likely(varonce321!=NULL)) {
var322 = varonce321;
} else {
var323 = "\tconst char* recv = get_nit_name(procname, strlen(procname));";
var324 = core__abstract_text___CString___to_s_full(var323, 61l, 61l);
var322 = var324;
varonce321 = var322;
}
{
nitc___nitc__AbstractCompilerVisitor___add_decl(var_v, var322); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:AbstractCompilerVisitor>*/
}
if (likely(varonce325!=NULL)) {
var326 = varonce325;
} else {
var327 = "\tif (recv != NULL){";
var328 = core__abstract_text___CString___to_s_full(var327, 19l, 19l);
var326 = var328;
varonce325 = var326;
}
{
nitc___nitc__AbstractCompilerVisitor___add_decl(var_v, var326); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:AbstractCompilerVisitor>*/
}
if (likely(varonce329!=NULL)) {
var330 = varonce329;
} else {
var331 = "\t\tPRINT_ERROR(\"` %s\\n\", recv);";
var332 = core__abstract_text___CString___to_s_full(var331, 30l, 30l);
var330 = var332;
varonce329 = var330;
}
{
nitc___nitc__AbstractCompilerVisitor___add_decl(var_v, var330); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:AbstractCompilerVisitor>*/
}
if (likely(varonce333!=NULL)) {
var334 = varonce333;
} else {
var335 = "\t}else{";
var336 = core__abstract_text___CString___to_s_full(var335, 7l, 7l);
var334 = var336;
varonce333 = var334;
}
{
nitc___nitc__AbstractCompilerVisitor___add_decl(var_v, var334); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:AbstractCompilerVisitor>*/
}
if (likely(varonce337!=NULL)) {
var338 = varonce337;
} else {
var339 = "\t\tPRINT_ERROR(\"` %s\\n\", procname);";
var340 = core__abstract_text___CString___to_s_full(var339, 34l, 34l);
var338 = var340;
varonce337 = var338;
}
{
nitc___nitc__AbstractCompilerVisitor___add_decl(var_v, var338); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:AbstractCompilerVisitor>*/
}
if (likely(varonce341!=NULL)) {
var342 = varonce341;
} else {
var343 = "\t}";
var344 = core__abstract_text___CString___to_s_full(var343, 2l, 2l);
var342 = var344;
varonce341 = var342;
}
{
nitc___nitc__AbstractCompilerVisitor___add_decl(var_v, var342); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:AbstractCompilerVisitor>*/
}
if (likely(varonce345!=NULL)) {
var346 = varonce345;
} else {
var347 = "}";
var348 = core__abstract_text___CString___to_s_full(var347, 1l, 1l);
var346 = var348;
varonce345 = var346;
}
{
nitc___nitc__AbstractCompilerVisitor___add_decl(var_v, var346); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:AbstractCompilerVisitor>*/
}
if (likely(varonce349!=NULL)) {
var350 = varonce349;
} else {
var351 = "PRINT_ERROR(\"-------------------------------------------------\\n\");";
var352 = core__abstract_text___CString___to_s_full(var351, 67l, 67l);
var350 = var352;
varonce349 = var350;
}
{
nitc___nitc__AbstractCompilerVisitor___add_decl(var_v, var350); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:AbstractCompilerVisitor>*/
}
if (likely(varonce353!=NULL)) {
var354 = varonce353;
} else {
var355 = "free(procname);";
var356 = core__abstract_text___CString___to_s_full(var355, 15l, 15l);
var354 = var356;
varonce353 = var354;
}
{
nitc___nitc__AbstractCompilerVisitor___add_decl(var_v, var354); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:AbstractCompilerVisitor>*/
}
if (likely(varonce357!=NULL)) {
var358 = varonce357;
} else {
var359 = "}";
var360 = core__abstract_text___CString___to_s_full(var359, 1l, 1l);
var358 = var360;
varonce357 = var358;
}
{
nitc___nitc__AbstractCompilerVisitor___add_decl(var_v, var358); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:AbstractCompilerVisitor>*/
}
if (likely(varonce361!=NULL)) {
var362 = varonce361;
} else {
var363 = "#endif /* NO_STACKTRACE */";
var364 = core__abstract_text___CString___to_s_full(var363, 26l, 26l);
var362 = var364;
varonce361 = var362;
}
{
nitc___nitc__AbstractCompilerVisitor___add_decl(var_v, var362); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:AbstractCompilerVisitor>*/
}
} else {
}
if (likely(varonce365!=NULL)) {
var366 = varonce365;
} else {
var367 = "}";
var368 = core__abstract_text___CString___to_s_full(var367, 1l, 1l);
var366 = var368;
varonce365 = var366;
}
{
nitc___nitc__AbstractCompilerVisitor___add_decl(var_v, var366); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:AbstractCompilerVisitor>*/
}
if (likely(varonce369!=NULL)) {
var370 = varonce369;
} else {
var371 = "void sig_handler(int signo){";
var372 = core__abstract_text___CString___to_s_full(var371, 28l, 28l);
var370 = var372;
varonce369 = var370;
}
{
nitc___nitc__AbstractCompilerVisitor___add_decl(var_v, var370); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:AbstractCompilerVisitor>*/
}
if (likely(varonce373!=NULL)) {
var374 = varonce373;
} else {
var375 = "#ifdef _WIN32";
var376 = core__abstract_text___CString___to_s_full(var375, 13l, 13l);
var374 = var376;
varonce373 = var374;
}
{
nitc___nitc__AbstractCompilerVisitor___add_decl(var_v, var374); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:AbstractCompilerVisitor>*/
}
if (likely(varonce377!=NULL)) {
var378 = varonce377;
} else {
var379 = "PRINT_ERROR(\"Caught signal : %s\\n\", signo);";
var380 = core__abstract_text___CString___to_s_full(var379, 43l, 43l);
var378 = var380;
varonce377 = var378;
}
{
nitc___nitc__AbstractCompilerVisitor___add_decl(var_v, var378); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:AbstractCompilerVisitor>*/
}
if (likely(varonce381!=NULL)) {
var382 = varonce381;
} else {
var383 = "#else";
var384 = core__abstract_text___CString___to_s_full(var383, 5l, 5l);
var382 = var384;
varonce381 = var382;
}
{
nitc___nitc__AbstractCompilerVisitor___add_decl(var_v, var382); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:AbstractCompilerVisitor>*/
}
if (likely(varonce385!=NULL)) {
var386 = varonce385;
} else {
var387 = "PRINT_ERROR(\"Caught signal : %s\\n\", strsignal(signo));";
var388 = core__abstract_text___CString___to_s_full(var387, 54l, 54l);
var386 = var388;
varonce385 = var386;
}
{
nitc___nitc__AbstractCompilerVisitor___add_decl(var_v, var386); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:AbstractCompilerVisitor>*/
}
if (likely(varonce389!=NULL)) {
var390 = varonce389;
} else {
var391 = "#endif";
var392 = core__abstract_text___CString___to_s_full(var391, 6l, 6l);
var390 = var392;
varonce389 = var390;
}
{
nitc___nitc__AbstractCompilerVisitor___add_decl(var_v, var390); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:AbstractCompilerVisitor>*/
}
if (likely(varonce393!=NULL)) {
var394 = varonce393;
} else {
var395 = "show_backtrace();";
var396 = core__abstract_text___CString___to_s_full(var395, 17l, 17l);
var394 = var396;
varonce393 = var394;
}
{
nitc___nitc__AbstractCompilerVisitor___add_decl(var_v, var394); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:AbstractCompilerVisitor>*/
}
if (likely(varonce397!=NULL)) {
var398 = varonce397;
} else {
var399 = "signal(signo, SIG_DFL);";
var400 = core__abstract_text___CString___to_s_full(var399, 23l, 23l);
var398 = var400;
varonce397 = var398;
}
{
nitc___nitc__AbstractCompilerVisitor___add_decl(var_v, var398); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:AbstractCompilerVisitor>*/
}
if (likely(varonce401!=NULL)) {
var402 = varonce401;
} else {
var403 = "#ifndef _WIN32";
var404 = core__abstract_text___CString___to_s_full(var403, 14l, 14l);
var402 = var404;
varonce401 = var402;
}
{
nitc___nitc__AbstractCompilerVisitor___add_decl(var_v, var402); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:AbstractCompilerVisitor>*/
}
if (likely(varonce405!=NULL)) {
var406 = varonce405;
} else {
var407 = "kill(getpid(), signo);";
var408 = core__abstract_text___CString___to_s_full(var407, 22l, 22l);
var406 = var408;
varonce405 = var406;
}
{
nitc___nitc__AbstractCompilerVisitor___add_decl(var_v, var406); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:AbstractCompilerVisitor>*/
}
if (likely(varonce409!=NULL)) {
var410 = varonce409;
} else {
var411 = "#endif";
var412 = core__abstract_text___CString___to_s_full(var411, 6l, 6l);
var410 = var412;
varonce409 = var410;
}
{
nitc___nitc__AbstractCompilerVisitor___add_decl(var_v, var410); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:AbstractCompilerVisitor>*/
}
if (likely(varonce413!=NULL)) {
var414 = varonce413;
} else {
var415 = "}";
var416 = core__abstract_text___CString___to_s_full(var415, 1l, 1l);
var414 = var416;
varonce413 = var414;
}
{
nitc___nitc__AbstractCompilerVisitor___add_decl(var_v, var414); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:AbstractCompilerVisitor>*/
}
if (likely(varonce417!=NULL)) {
var418 = varonce417;
} else {
var419 = "void fatal_exit(int status) {";
var420 = core__abstract_text___CString___to_s_full(var419, 29l, 29l);
var418 = var420;
varonce417 = var418;
}
{
nitc___nitc__AbstractCompilerVisitor___add_decl(var_v, var418); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:AbstractCompilerVisitor>*/
}
if (likely(varonce421!=NULL)) {
var422 = varonce421;
} else {
var423 = "show_backtrace();";
var424 = core__abstract_text___CString___to_s_full(var423, 17l, 17l);
var422 = var424;
varonce421 = var422;
}
{
nitc___nitc__AbstractCompilerVisitor___add_decl(var_v, var422); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:AbstractCompilerVisitor>*/
}
if (likely(varonce425!=NULL)) {
var426 = varonce425;
} else {
var427 = "exit(status);";
var428 = core__abstract_text___CString___to_s_full(var427, 13l, 13l);
var426 = var428;
varonce425 = var426;
}
{
nitc___nitc__AbstractCompilerVisitor___add_decl(var_v, var426); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:AbstractCompilerVisitor>*/
}
if (likely(varonce429!=NULL)) {
var430 = varonce429;
} else {
var431 = "}";
var432 = core__abstract_text___CString___to_s_full(var431, 1l, 1l);
var430 = var432;
varonce429 = var430;
}
{
nitc___nitc__AbstractCompilerVisitor___add_decl(var_v, var430); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:AbstractCompilerVisitor>*/
}
{
nitc__memory_logger___AbstractCompiler___compile_before_main(self, var_v); /* Direct call memory_logger#AbstractCompiler#compile_before_main on <self:AbstractCompiler>*/
}
if (var_no_main){
if (likely(varonce433!=NULL)) {
var434 = varonce433;
} else {
var435 = "int nit_main(int argc, char** argv) {";
var436 = core__abstract_text___CString___to_s_full(var435, 37l, 37l);
var434 = var436;
varonce433 = var434;
}
{
nitc___nitc__AbstractCompilerVisitor___add_decl(var_v, var434); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:AbstractCompilerVisitor>*/
}
} else {
if (likely(varonce437!=NULL)) {
var438 = varonce437;
} else {
var439 = "int main(int argc, char** argv) {";
var440 = core__abstract_text___CString___to_s_full(var439, 33l, 33l);
var438 = var440;
varonce437 = var438;
}
{
nitc___nitc__AbstractCompilerVisitor___add_decl(var_v, var438); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:AbstractCompilerVisitor>*/
}
}
{
nitc__memory_logger___AbstractCompiler___compile_begin_main(self, var_v); /* Direct call memory_logger#AbstractCompiler#compile_begin_main on <self:AbstractCompiler>*/
}
if (likely(varonce441!=NULL)) {
var442 = varonce441;
} else {
var443 = "#if !defined(__ANDROID__) && !defined(TARGET_OS_IPHONE)";
var444 = core__abstract_text___CString___to_s_full(var443, 55l, 55l);
var442 = var444;
varonce441 = var442;
}
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var442); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
if (likely(varonce445!=NULL)) {
var446 = varonce445;
} else {
var447 = "signal(SIGABRT, sig_handler);";
var448 = core__abstract_text___CString___to_s_full(var447, 29l, 29l);
var446 = var448;
varonce445 = var446;
}
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var446); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
if (likely(varonce449!=NULL)) {
var450 = varonce449;
} else {
var451 = "signal(SIGFPE, sig_handler);";
var452 = core__abstract_text___CString___to_s_full(var451, 28l, 28l);
var450 = var452;
varonce449 = var450;
}
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var450); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
if (likely(varonce453!=NULL)) {
var454 = varonce453;
} else {
var455 = "signal(SIGILL, sig_handler);";
var456 = core__abstract_text___CString___to_s_full(var455, 28l, 28l);
var454 = var456;
varonce453 = var454;
}
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var454); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
if (likely(varonce457!=NULL)) {
var458 = varonce457;
} else {
var459 = "signal(SIGINT, sig_handler);";
var460 = core__abstract_text___CString___to_s_full(var459, 28l, 28l);
var458 = var460;
varonce457 = var458;
}
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var458); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
if (likely(varonce461!=NULL)) {
var462 = varonce461;
} else {
var463 = "signal(SIGTERM, sig_handler);";
var464 = core__abstract_text___CString___to_s_full(var463, 29l, 29l);
var462 = var464;
varonce461 = var462;
}
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var462); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
if (likely(varonce465!=NULL)) {
var466 = varonce465;
} else {
var467 = "signal(SIGSEGV, sig_handler);";
var468 = core__abstract_text___CString___to_s_full(var467, 29l, 29l);
var466 = var468;
varonce465 = var466;
}
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var466); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
if (likely(varonce469!=NULL)) {
var470 = varonce469;
} else {
var471 = "#endif";
var472 = core__abstract_text___CString___to_s_full(var471, 6l, 6l);
var470 = var472;
varonce469 = var470;
}
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var470); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
if (likely(varonce473!=NULL)) {
var474 = varonce473;
} else {
var475 = "#ifndef _WIN32";
var476 = core__abstract_text___CString___to_s_full(var475, 14l, 14l);
var474 = var476;
varonce473 = var474;
}
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var474); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
if (likely(varonce477!=NULL)) {
var478 = varonce477;
} else {
var479 = "signal(SIGPIPE, SIG_IGN);";
var480 = core__abstract_text___CString___to_s_full(var479, 25l, 25l);
var478 = var480;
varonce477 = var478;
}
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var478); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
if (likely(varonce481!=NULL)) {
var482 = varonce481;
} else {
var483 = "#endif";
var484 = core__abstract_text___CString___to_s_full(var483, 6l, 6l);
var482 = var484;
varonce481 = var482;
}
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var482); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
if (likely(varonce485!=NULL)) {
var486 = varonce485;
} else {
var487 = "glob_argc = argc; glob_argv = argv;";
var488 = core__abstract_text___CString___to_s_full(var487, 35l, 35l);
var486 = var488;
varonce485 = var486;
}
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var486); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
if (likely(varonce489!=NULL)) {
var490 = varonce489;
} else {
var491 = "catchStack.cursor = -1;";
var492 = core__abstract_text___CString___to_s_full(var491, 23l, 23l);
var490 = var492;
varonce489 = var490;
}
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var490); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
if (likely(varonce493!=NULL)) {
var494 = varonce493;
} else {
var495 = "initialize_gc_option();";
var496 = core__abstract_text___CString___to_s_full(var495, 23l, 23l);
var494 = var496;
varonce493 = var494;
}
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var494); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
if (likely(varonce497!=NULL)) {
var498 = varonce497;
} else {
var499 = "initialize_nitni_global_refs();";
var500 = core__abstract_text___CString___to_s_full(var499, 31l, 31l);
var498 = var500;
varonce497 = var498;
}
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var498); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
{
{ /* Inline abstract_compiler#AbstractCompiler#mainmodule (self) on <self:AbstractCompiler> */
var503 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___mainmodule].val; /* _mainmodule on <self:AbstractCompiler> */
if (unlikely(var503 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mainmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 531);
fatal_exit(1);
}
var501 = var503;
RET_LABEL502:(void)0;
}
}
{
var504 = nitc__model___MModule___sys_type(var501);
}
var_main_type = var504;
if (var_main_type == NULL) {
var505 = 0; /* is null */
} else {
var505 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_main_type,((val*)NULL)) on <var_main_type:nullable MClassType> */
var_other = ((val*)NULL);
{
var508 = ((short int(*)(val* self, val* p0))(var_main_type->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_main_type, var_other); /* == on <var_main_type:nullable MClassType(MClassType)>*/
}
var509 = !var508;
var506 = var509;
goto RET_LABEL507;
RET_LABEL507:(void)0;
}
var505 = var506;
}
if (var505){
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler (var_v) on <var_v:AbstractCompilerVisitor> */
var512 = var_v->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <var_v:AbstractCompilerVisitor> */
if (unlikely(var512 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1200);
fatal_exit(1);
}
var510 = var512;
RET_LABEL511:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompiler#mainmodule (var510) on <var510:AbstractCompiler> */
var515 = var510->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___mainmodule].val; /* _mainmodule on <var510:AbstractCompiler> */
if (unlikely(var515 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mainmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 531);
fatal_exit(1);
}
var513 = var515;
RET_LABEL514:(void)0;
}
}
var_mainmodule = var513;
{
var516 = ((val*(*)(val* self, val* p0))(var_v->class->vft[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor__init_instance]))(var_v, var_main_type); /* init_instance on <var_v:AbstractCompilerVisitor>*/
}
var_glob_sys = var516;
if (unlikely(varonce517==NULL)) {
var518 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce519!=NULL)) {
var520 = varonce519;
} else {
var521 = "glob_sys = ";
var522 = core__abstract_text___CString___to_s_full(var521, 11l, 11l);
var520 = var522;
varonce519 = var520;
}
((struct instance_core__NativeArray*)var518)->values[0]=var520;
if (likely(varonce523!=NULL)) {
var524 = varonce523;
} else {
var525 = ";";
var526 = core__abstract_text___CString___to_s_full(var525, 1l, 1l);
var524 = var526;
varonce523 = var524;
}
((struct instance_core__NativeArray*)var518)->values[2]=var524;
} else {
var518 = varonce517;
varonce517 = NULL;
}
{
var527 = ((val*(*)(val* self))(var_glob_sys->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_glob_sys); /* to_s on <var_glob_sys:RuntimeVariable>*/
}
((struct instance_core__NativeArray*)var518)->values[1]=var527;
{
var528 = ((val*(*)(val* self))(var518->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var518); /* native_to_s on <var518:NativeArray[String]>*/
}
varonce517 = var518;
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var528); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
if (likely(varonce529!=NULL)) {
var530 = varonce529;
} else {
var531 = "init";
var532 = core__abstract_text___CString___to_s_full(var531, 4l, 4l);
var530 = var532;
varonce529 = var530;
}
{
{ /* Inline model#MClassType#mclass (var_main_type) on <var_main_type:nullable MClassType(MClassType)> */
var535 = var_main_type->attrs[COLOR_nitc__model__MClassType___mclass].val; /* _mclass on <var_main_type:nullable MClassType(MClassType)> */
if (unlikely(var535 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1197);
fatal_exit(1);
}
var533 = var535;
RET_LABEL534:(void)0;
}
}
{
var536 = nitc__model___MModule___try_get_primitive_method(var_mainmodule, var530, var533);
}
var_main_init = var536;
if (var_main_init == NULL) {
var537 = 0; /* is null */
} else {
var537 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_main_init,((val*)NULL)) on <var_main_init:nullable MMethod> */
var_other = ((val*)NULL);
{
var540 = ((short int(*)(val* self, val* p0))(var_main_init->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_main_init, var_other); /* == on <var_main_init:nullable MMethod(MMethod)>*/
}
var541 = !var540;
var538 = var541;
goto RET_LABEL539;
RET_LABEL539:(void)0;
}
var537 = var538;
}
if (var537){
var542 = NEW_core__Array(&type_core__Array__nitc__RuntimeVariable);
{
core___core__Array___with_capacity(var542, 1l); /* Direct call array#Array#with_capacity on <var542:Array[RuntimeVariable]>*/
}
var_543 = var542;
{
core___core__AbstractArray___core__abstract_collection__Sequence__push(var_543, var_glob_sys); /* Direct call array#AbstractArray#push on <var_543:Array[RuntimeVariable]>*/
}
{
var544 = ((val*(*)(val* self, val* p0, val* p1))(var_v->class->vft[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor__send]))(var_v, var_main_init, var_543); /* send on <var_v:AbstractCompilerVisitor>*/
}
} else {
}
if (likely(varonce546!=NULL)) {
var547 = varonce546;
} else {
var548 = "run";
var549 = core__abstract_text___CString___to_s_full(var548, 3l, 3l);
var547 = var549;
varonce546 = var547;
}
{
{ /* Inline model#MClassType#mclass (var_main_type) on <var_main_type:nullable MClassType(MClassType)> */
var552 = var_main_type->attrs[COLOR_nitc__model__MClassType___mclass].val; /* _mclass on <var_main_type:nullable MClassType(MClassType)> */
if (unlikely(var552 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1197);
fatal_exit(1);
}
var550 = var552;
RET_LABEL551:(void)0;
}
}
{
var553 = nitc__model___MModule___try_get_primitive_method(var_mainmodule, var547, var550);
}
if (var553!=NULL) {
var545 = var553;
} else {
if (likely(varonce554!=NULL)) {
var555 = varonce554;
} else {
var556 = "main";
var557 = core__abstract_text___CString___to_s_full(var556, 4l, 4l);
var555 = var557;
varonce554 = var555;
}
{
{ /* Inline model#MClassType#mclass (var_main_type) on <var_main_type:nullable MClassType(MClassType)> */
var560 = var_main_type->attrs[COLOR_nitc__model__MClassType___mclass].val; /* _mclass on <var_main_type:nullable MClassType(MClassType)> */
if (unlikely(var560 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1197);
fatal_exit(1);
}
var558 = var560;
RET_LABEL559:(void)0;
}
}
{
var561 = nitc__model___MModule___try_get_primitive_method(var_mainmodule, var555, var558);
}
var545 = var561;
}
var_main_method = var545;
if (var_main_method == NULL) {
var562 = 0; /* is null */
} else {
var562 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_main_method,((val*)NULL)) on <var_main_method:nullable MMethod> */
var_other = ((val*)NULL);
{
var565 = ((short int(*)(val* self, val* p0))(var_main_method->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_main_method, var_other); /* == on <var_main_method:nullable MMethod(MMethod)>*/
}
var566 = !var565;
var563 = var566;
goto RET_LABEL564;
RET_LABEL564:(void)0;
}
var562 = var563;
}
if (var562){
var567 = NEW_core__Array(&type_core__Array__nitc__RuntimeVariable);
{
core___core__Array___with_capacity(var567, 1l); /* Direct call array#Array#with_capacity on <var567:Array[RuntimeVariable]>*/
}
var_568 = var567;
{
core___core__AbstractArray___core__abstract_collection__Sequence__push(var_568, var_glob_sys); /* Direct call array#AbstractArray#push on <var_568:Array[RuntimeVariable]>*/
}
{
var569 = ((val*(*)(val* self, val* p0, val* p1))(var_v->class->vft[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor__send]))(var_v, var_main_method, var_568); /* send on <var_v:AbstractCompilerVisitor>*/
}
} else {
}
} else {
}
{
{ /* Inline abstract_compiler#AbstractCompiler#modelbuilder (self) on <self:AbstractCompiler> */
var572 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___modelbuilder].val; /* _modelbuilder on <self:AbstractCompiler> */
if (unlikely(var572 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 538);
fatal_exit(1);
}
var570 = var572;
RET_LABEL571:(void)0;
}
}
{
{ /* Inline modelbuilder_base#ModelBuilder#toolcontext (var570) on <var570:ModelBuilder> */
var575 = var570->attrs[COLOR_nitc__modelbuilder_base__ModelBuilder___toolcontext].val; /* _toolcontext on <var570:ModelBuilder> */
if (unlikely(var575 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelbuilder_base, 47);
fatal_exit(1);
}
var573 = var575;
RET_LABEL574:(void)0;
}
}
{
{ /* Inline abstract_compiler#ToolContext#opt_typing_test_metrics (var573) on <var573:ToolContext> */
var578 = var573->attrs[COLOR_nitc__abstract_compiler__ToolContext___opt_typing_test_metrics].val; /* _opt_typing_test_metrics on <var573:ToolContext> */
if (unlikely(var578 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_typing_test_metrics");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 60);
fatal_exit(1);
}
var576 = var578;
RET_LABEL577:(void)0;
}
}
{
{ /* Inline opts#Option#value (var576) on <var576:OptionBool> */
var581 = var576->attrs[COLOR_opts__Option___value].val; /* _value on <var576:OptionBool> */
var579 = var581;
RET_LABEL580:(void)0;
}
}
var582 = (short int)((long)(var579)>>2);
if (var582){
if (likely(varonce583!=NULL)) {
var584 = varonce583;
} else {
var585 = "long count_type_test_resolved_total = 0;";
var586 = core__abstract_text___CString___to_s_full(var585, 40l, 40l);
var584 = var586;
varonce583 = var584;
}
{
nitc___nitc__AbstractCompilerVisitor___add_decl(var_v, var584); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:AbstractCompilerVisitor>*/
}
if (likely(varonce587!=NULL)) {
var588 = varonce587;
} else {
var589 = "long count_type_test_unresolved_total = 0;";
var590 = core__abstract_text___CString___to_s_full(var589, 42l, 42l);
var588 = var590;
varonce587 = var588;
}
{
nitc___nitc__AbstractCompilerVisitor___add_decl(var_v, var588); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:AbstractCompilerVisitor>*/
}
if (likely(varonce591!=NULL)) {
var592 = varonce591;
} else {
var593 = "long count_type_test_skipped_total = 0;";
var594 = core__abstract_text___CString___to_s_full(var593, 39l, 39l);
var592 = var594;
varonce591 = var592;
}
{
nitc___nitc__AbstractCompilerVisitor___add_decl(var_v, var592); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:AbstractCompilerVisitor>*/
}
if (likely(varonce595!=NULL)) {
var596 = varonce595;
} else {
var597 = "long count_type_test_total_total = 0;";
var598 = core__abstract_text___CString___to_s_full(var597, 37l, 37l);
var596 = var598;
varonce595 = var596;
}
{
nitc___nitc__AbstractCompilerVisitor___add_decl(var_v, var596); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:AbstractCompilerVisitor>*/
}
{
{ /* Inline abstract_compiler#AbstractCompiler#count_type_test_tags (self) on <self:AbstractCompiler> */
var601 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___count_type_test_tags].val; /* _count_type_test_tags on <self:AbstractCompiler> */
if (unlikely(var601 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _count_type_test_tags");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1096);
fatal_exit(1);
}
var599 = var601;
RET_LABEL600:(void)0;
}
}
var_602 = var599;
{
var603 = core___core__AbstractArrayRead___core__abstract_collection__Collection__iterator(var_602);
}
var_604 = var603;
for(;;) {
{
var605 = ((short int(*)(val* self))((((long)var_604&3)?class_info[((long)var_604&3)]:var_604->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_604); /* is_ok on <var_604:IndexedIterator[String]>*/
}
if (var605){
} else {
goto BREAK_label606;
}
{
var607 = ((val*(*)(val* self))((((long)var_604&3)?class_info[((long)var_604&3)]:var_604->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_604); /* item on <var_604:IndexedIterator[String]>*/
}
var_tag608 = var607;
if (unlikely(varonce609==NULL)) {
var610 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce611!=NULL)) {
var612 = varonce611;
} else {
var613 = "long count_type_test_total_";
var614 = core__abstract_text___CString___to_s_full(var613, 27l, 27l);
var612 = var614;
varonce611 = var612;
}
((struct instance_core__NativeArray*)var610)->values[0]=var612;
if (likely(varonce615!=NULL)) {
var616 = varonce615;
} else {
var617 = ";";
var618 = core__abstract_text___CString___to_s_full(var617, 1l, 1l);
var616 = var618;
varonce615 = var616;
}
((struct instance_core__NativeArray*)var610)->values[2]=var616;
} else {
var610 = varonce609;
varonce609 = NULL;
}
((struct instance_core__NativeArray*)var610)->values[1]=var_tag608;
{
var619 = ((val*(*)(val* self))(var610->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var610); /* native_to_s on <var610:NativeArray[String]>*/
}
varonce609 = var610;
{
nitc___nitc__AbstractCompilerVisitor___add_decl(var_v, var619); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:AbstractCompilerVisitor>*/
}
if (unlikely(varonce620==NULL)) {
var621 = NEW_core__NativeArray(9l, &type_core__NativeArray__core__String);
if (likely(varonce622!=NULL)) {
var623 = varonce622;
} else {
var624 = "count_type_test_total_";
var625 = core__abstract_text___CString___to_s_full(var624, 22l, 22l);
var623 = var625;
varonce622 = var623;
}
((struct instance_core__NativeArray*)var621)->values[0]=var623;
if (likely(varonce626!=NULL)) {
var627 = varonce626;
} else {
var628 = " = count_type_test_resolved_";
var629 = core__abstract_text___CString___to_s_full(var628, 28l, 28l);
var627 = var629;
varonce626 = var627;
}
((struct instance_core__NativeArray*)var621)->values[2]=var627;
if (likely(varonce630!=NULL)) {
var631 = varonce630;
} else {
var632 = " + count_type_test_unresolved_";
var633 = core__abstract_text___CString___to_s_full(var632, 30l, 30l);
var631 = var633;
varonce630 = var631;
}
((struct instance_core__NativeArray*)var621)->values[4]=var631;
if (likely(varonce634!=NULL)) {
var635 = varonce634;
} else {
var636 = " + count_type_test_skipped_";
var637 = core__abstract_text___CString___to_s_full(var636, 27l, 27l);
var635 = var637;
varonce634 = var635;
}
((struct instance_core__NativeArray*)var621)->values[6]=var635;
if (likely(varonce638!=NULL)) {
var639 = varonce638;
} else {
var640 = ";";
var641 = core__abstract_text___CString___to_s_full(var640, 1l, 1l);
var639 = var641;
varonce638 = var639;
}
((struct instance_core__NativeArray*)var621)->values[8]=var639;
} else {
var621 = varonce620;
varonce620 = NULL;
}
((struct instance_core__NativeArray*)var621)->values[1]=var_tag608;
((struct instance_core__NativeArray*)var621)->values[3]=var_tag608;
((struct instance_core__NativeArray*)var621)->values[5]=var_tag608;
((struct instance_core__NativeArray*)var621)->values[7]=var_tag608;
{
var642 = ((val*(*)(val* self))(var621->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var621); /* native_to_s on <var621:NativeArray[String]>*/
}
varonce620 = var621;
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var642); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
if (unlikely(varonce643==NULL)) {
var644 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce645!=NULL)) {
var646 = varonce645;
} else {
var647 = "count_type_test_resolved_total += count_type_test_resolved_";
var648 = core__abstract_text___CString___to_s_full(var647, 59l, 59l);
var646 = var648;
varonce645 = var646;
}
((struct instance_core__NativeArray*)var644)->values[0]=var646;
if (likely(varonce649!=NULL)) {
var650 = varonce649;
} else {
var651 = ";";
var652 = core__abstract_text___CString___to_s_full(var651, 1l, 1l);
var650 = var652;
varonce649 = var650;
}
((struct instance_core__NativeArray*)var644)->values[2]=var650;
} else {
var644 = varonce643;
varonce643 = NULL;
}
((struct instance_core__NativeArray*)var644)->values[1]=var_tag608;
{
var653 = ((val*(*)(val* self))(var644->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var644); /* native_to_s on <var644:NativeArray[String]>*/
}
varonce643 = var644;
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var653); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
if (unlikely(varonce654==NULL)) {
var655 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce656!=NULL)) {
var657 = varonce656;
} else {
var658 = "count_type_test_unresolved_total += count_type_test_unresolved_";
var659 = core__abstract_text___CString___to_s_full(var658, 63l, 63l);
var657 = var659;
varonce656 = var657;
}
((struct instance_core__NativeArray*)var655)->values[0]=var657;
if (likely(varonce660!=NULL)) {
var661 = varonce660;
} else {
var662 = ";";
var663 = core__abstract_text___CString___to_s_full(var662, 1l, 1l);
var661 = var663;
varonce660 = var661;
}
((struct instance_core__NativeArray*)var655)->values[2]=var661;
} else {
var655 = varonce654;
varonce654 = NULL;
}
((struct instance_core__NativeArray*)var655)->values[1]=var_tag608;
{
var664 = ((val*(*)(val* self))(var655->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var655); /* native_to_s on <var655:NativeArray[String]>*/
}
varonce654 = var655;
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var664); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
if (unlikely(varonce665==NULL)) {
var666 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce667!=NULL)) {
var668 = varonce667;
} else {
var669 = "count_type_test_skipped_total += count_type_test_skipped_";
var670 = core__abstract_text___CString___to_s_full(var669, 57l, 57l);
var668 = var670;
varonce667 = var668;
}
((struct instance_core__NativeArray*)var666)->values[0]=var668;
if (likely(varonce671!=NULL)) {
var672 = varonce671;
} else {
var673 = ";";
var674 = core__abstract_text___CString___to_s_full(var673, 1l, 1l);
var672 = var674;
varonce671 = var672;
}
((struct instance_core__NativeArray*)var666)->values[2]=var672;
} else {
var666 = varonce665;
varonce665 = NULL;
}
((struct instance_core__NativeArray*)var666)->values[1]=var_tag608;
{
var675 = ((val*(*)(val* self))(var666->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var666); /* native_to_s on <var666:NativeArray[String]>*/
}
varonce665 = var666;
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var675); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
if (unlikely(varonce676==NULL)) {
var677 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce678!=NULL)) {
var679 = varonce678;
} else {
var680 = "count_type_test_total_total += count_type_test_total_";
var681 = core__abstract_text___CString___to_s_full(var680, 53l, 53l);
var679 = var681;
varonce678 = var679;
}
((struct instance_core__NativeArray*)var677)->values[0]=var679;
if (likely(varonce682!=NULL)) {
var683 = varonce682;
} else {
var684 = ";";
var685 = core__abstract_text___CString___to_s_full(var684, 1l, 1l);
var683 = var685;
varonce682 = var683;
}
((struct instance_core__NativeArray*)var677)->values[2]=var683;
} else {
var677 = varonce676;
varonce676 = NULL;
}
((struct instance_core__NativeArray*)var677)->values[1]=var_tag608;
{
var686 = ((val*(*)(val* self))(var677->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var677); /* native_to_s on <var677:NativeArray[String]>*/
}
varonce676 = var677;
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var686); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
{
((void(*)(val* self))((((long)var_604&3)?class_info[((long)var_604&3)]:var_604->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_604); /* next on <var_604:IndexedIterator[String]>*/
}
}
BREAK_label606: (void)0;
{
((void(*)(val* self))((((long)var_604&3)?class_info[((long)var_604&3)]:var_604->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_604); /* finish on <var_604:IndexedIterator[String]>*/
}
if (likely(varonce687!=NULL)) {
var688 = varonce687;
} else {
var689 = "printf(\"# dynamic count_type_test: total %l\\n\");";
var690 = core__abstract_text___CString___to_s_full(var689, 48l, 48l);
var688 = var690;
varonce687 = var688;
}
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var688); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
if (likely(varonce691!=NULL)) {
var692 = varonce691;
} else {
var693 = "printf(\"\\tresolved\\tunresolved\\tskipped\\ttotal\\n\");";
var694 = core__abstract_text___CString___to_s_full(var693, 51l, 51l);
var692 = var694;
varonce691 = var692;
}
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var692); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
{
{ /* Inline abstract_compiler#AbstractCompiler#count_type_test_tags (self) on <self:AbstractCompiler> */
var697 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___count_type_test_tags].val; /* _count_type_test_tags on <self:AbstractCompiler> */
if (unlikely(var697 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _count_type_test_tags");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1096);
fatal_exit(1);
}
var695 = var697;
RET_LABEL696:(void)0;
}
}
{
var698 = core__array___Collection___to_a(var695);
}
var_tags = var698;
if (likely(varonce699!=NULL)) {
var700 = varonce699;
} else {
var701 = "total";
var702 = core__abstract_text___CString___to_s_full(var701, 5l, 5l);
var700 = var702;
varonce699 = var700;
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_tags, var700); /* Direct call array#Array#add on <var_tags:Array[String]>*/
}
var_703 = var_tags;
{
var704 = core___core__AbstractArrayRead___core__abstract_collection__Collection__iterator(var_703);
}
var_705 = var704;
for(;;) {
{
var706 = ((short int(*)(val* self))((((long)var_705&3)?class_info[((long)var_705&3)]:var_705->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_705); /* is_ok on <var_705:IndexedIterator[String]>*/
}
if (var706){
} else {
goto BREAK_label707;
}
{
var708 = ((val*(*)(val* self))((((long)var_705&3)?class_info[((long)var_705&3)]:var_705->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_705); /* item on <var_705:IndexedIterator[String]>*/
}
var_tag709 = var708;
if (unlikely(varonce710==NULL)) {
var711 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce712!=NULL)) {
var713 = varonce712;
} else {
var714 = "printf(\"";
var715 = core__abstract_text___CString___to_s_full(var714, 8l, 8l);
var713 = var715;
varonce712 = var713;
}
((struct instance_core__NativeArray*)var711)->values[0]=var713;
if (likely(varonce716!=NULL)) {
var717 = varonce716;
} else {
var718 = "\");";
var719 = core__abstract_text___CString___to_s_full(var718, 3l, 3l);
var717 = var719;
varonce716 = var717;
}
((struct instance_core__NativeArray*)var711)->values[2]=var717;
} else {
var711 = varonce710;
varonce710 = NULL;
}
((struct instance_core__NativeArray*)var711)->values[1]=var_tag709;
{
var720 = ((val*(*)(val* self))(var711->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var711); /* native_to_s on <var711:NativeArray[String]>*/
}
varonce710 = var711;
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var720); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
if (unlikely(varonce721==NULL)) {
var722 = NEW_core__NativeArray(5l, &type_core__NativeArray__core__String);
if (likely(varonce723!=NULL)) {
var724 = varonce723;
} else {
var725 = "printf(\"\\t%ld (%.2f%%)\", count_type_test_resolved_";
var726 = core__abstract_text___CString___to_s_full(var725, 50l, 50l);
var724 = var726;
varonce723 = var724;
}
((struct instance_core__NativeArray*)var722)->values[0]=var724;
if (likely(varonce727!=NULL)) {
var728 = varonce727;
} else {
var729 = ", 100.0*count_type_test_resolved_";
var730 = core__abstract_text___CString___to_s_full(var729, 33l, 33l);
var728 = var730;
varonce727 = var728;
}
((struct instance_core__NativeArray*)var722)->values[2]=var728;
if (likely(varonce731!=NULL)) {
var732 = varonce731;
} else {
var733 = "/count_type_test_total_total);";
var734 = core__abstract_text___CString___to_s_full(var733, 30l, 30l);
var732 = var734;
varonce731 = var732;
}
((struct instance_core__NativeArray*)var722)->values[4]=var732;
} else {
var722 = varonce721;
varonce721 = NULL;
}
((struct instance_core__NativeArray*)var722)->values[1]=var_tag709;
((struct instance_core__NativeArray*)var722)->values[3]=var_tag709;
{
var735 = ((val*(*)(val* self))(var722->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var722); /* native_to_s on <var722:NativeArray[String]>*/
}
varonce721 = var722;
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var735); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
if (unlikely(varonce736==NULL)) {
var737 = NEW_core__NativeArray(5l, &type_core__NativeArray__core__String);
if (likely(varonce738!=NULL)) {
var739 = varonce738;
} else {
var740 = "printf(\"\\t%ld (%.2f%%)\", count_type_test_unresolved_";
var741 = core__abstract_text___CString___to_s_full(var740, 52l, 52l);
var739 = var741;
varonce738 = var739;
}
((struct instance_core__NativeArray*)var737)->values[0]=var739;
if (likely(varonce742!=NULL)) {
var743 = varonce742;
} else {
var744 = ", 100.0*count_type_test_unresolved_";
var745 = core__abstract_text___CString___to_s_full(var744, 35l, 35l);
var743 = var745;
varonce742 = var743;
}
((struct instance_core__NativeArray*)var737)->values[2]=var743;
if (likely(varonce746!=NULL)) {
var747 = varonce746;
} else {
var748 = "/count_type_test_total_total);";
var749 = core__abstract_text___CString___to_s_full(var748, 30l, 30l);
var747 = var749;
varonce746 = var747;
}
((struct instance_core__NativeArray*)var737)->values[4]=var747;
} else {
var737 = varonce736;
varonce736 = NULL;
}
((struct instance_core__NativeArray*)var737)->values[1]=var_tag709;
((struct instance_core__NativeArray*)var737)->values[3]=var_tag709;
{
var750 = ((val*(*)(val* self))(var737->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var737); /* native_to_s on <var737:NativeArray[String]>*/
}
varonce736 = var737;
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var750); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
if (unlikely(varonce751==NULL)) {
var752 = NEW_core__NativeArray(5l, &type_core__NativeArray__core__String);
if (likely(varonce753!=NULL)) {
var754 = varonce753;
} else {
var755 = "printf(\"\\t%ld (%.2f%%)\", count_type_test_skipped_";
var756 = core__abstract_text___CString___to_s_full(var755, 49l, 49l);
var754 = var756;
varonce753 = var754;
}
((struct instance_core__NativeArray*)var752)->values[0]=var754;
if (likely(varonce757!=NULL)) {
var758 = varonce757;
} else {
var759 = ", 100.0*count_type_test_skipped_";
var760 = core__abstract_text___CString___to_s_full(var759, 32l, 32l);
var758 = var760;
varonce757 = var758;
}
((struct instance_core__NativeArray*)var752)->values[2]=var758;
if (likely(varonce761!=NULL)) {
var762 = varonce761;
} else {
var763 = "/count_type_test_total_total);";
var764 = core__abstract_text___CString___to_s_full(var763, 30l, 30l);
var762 = var764;
varonce761 = var762;
}
((struct instance_core__NativeArray*)var752)->values[4]=var762;
} else {
var752 = varonce751;
varonce751 = NULL;
}
((struct instance_core__NativeArray*)var752)->values[1]=var_tag709;
((struct instance_core__NativeArray*)var752)->values[3]=var_tag709;
{
var765 = ((val*(*)(val* self))(var752->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var752); /* native_to_s on <var752:NativeArray[String]>*/
}
varonce751 = var752;
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var765); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
if (unlikely(varonce766==NULL)) {
var767 = NEW_core__NativeArray(5l, &type_core__NativeArray__core__String);
if (likely(varonce768!=NULL)) {
var769 = varonce768;
} else {
var770 = "printf(\"\\t%ld (%.2f%%)\\n\", count_type_test_total_";
var771 = core__abstract_text___CString___to_s_full(var770, 49l, 49l);
var769 = var771;
varonce768 = var769;
}
((struct instance_core__NativeArray*)var767)->values[0]=var769;
if (likely(varonce772!=NULL)) {
var773 = varonce772;
} else {
var774 = ", 100.0*count_type_test_total_";
var775 = core__abstract_text___CString___to_s_full(var774, 30l, 30l);
var773 = var775;
varonce772 = var773;
}
((struct instance_core__NativeArray*)var767)->values[2]=var773;
if (likely(varonce776!=NULL)) {
var777 = varonce776;
} else {
var778 = "/count_type_test_total_total);";
var779 = core__abstract_text___CString___to_s_full(var778, 30l, 30l);
var777 = var779;
varonce776 = var777;
}
((struct instance_core__NativeArray*)var767)->values[4]=var777;
} else {
var767 = varonce766;
varonce766 = NULL;
}
((struct instance_core__NativeArray*)var767)->values[1]=var_tag709;
((struct instance_core__NativeArray*)var767)->values[3]=var_tag709;
{
var780 = ((val*(*)(val* self))(var767->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var767); /* native_to_s on <var767:NativeArray[String]>*/
}
varonce766 = var767;
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var780); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
{
((void(*)(val* self))((((long)var_705&3)?class_info[((long)var_705&3)]:var_705->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_705); /* next on <var_705:IndexedIterator[String]>*/
}
}
BREAK_label707: (void)0;
{
((void(*)(val* self))((((long)var_705&3)?class_info[((long)var_705&3)]:var_705->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_705); /* finish on <var_705:IndexedIterator[String]>*/
}
} else {
}
{
{ /* Inline abstract_compiler#AbstractCompiler#modelbuilder (self) on <self:AbstractCompiler> */
var783 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___modelbuilder].val; /* _modelbuilder on <self:AbstractCompiler> */
if (unlikely(var783 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 538);
fatal_exit(1);
}
var781 = var783;
RET_LABEL782:(void)0;
}
}
{
{ /* Inline modelbuilder_base#ModelBuilder#toolcontext (var781) on <var781:ModelBuilder> */
var786 = var781->attrs[COLOR_nitc__modelbuilder_base__ModelBuilder___toolcontext].val; /* _toolcontext on <var781:ModelBuilder> */
if (unlikely(var786 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelbuilder_base, 47);
fatal_exit(1);
}
var784 = var786;
RET_LABEL785:(void)0;
}
}
{
{ /* Inline abstract_compiler#ToolContext#opt_invocation_metrics (var784) on <var784:ToolContext> */
var789 = var784->attrs[COLOR_nitc__abstract_compiler__ToolContext___opt_invocation_metrics].val; /* _opt_invocation_metrics on <var784:ToolContext> */
if (unlikely(var789 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_invocation_metrics");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 62);
fatal_exit(1);
}
var787 = var789;
RET_LABEL788:(void)0;
}
}
{
{ /* Inline opts#Option#value (var787) on <var787:OptionBool> */
var792 = var787->attrs[COLOR_opts__Option___value].val; /* _value on <var787:OptionBool> */
var790 = var792;
RET_LABEL791:(void)0;
}
}
var793 = (short int)((long)(var790)>>2);
if (var793){
if (likely(varonce794!=NULL)) {
var795 = varonce794;
} else {
var796 = "long count_invoke_total;";
var797 = core__abstract_text___CString___to_s_full(var796, 24l, 24l);
var795 = var797;
varonce794 = var795;
}
{
nitc___nitc__AbstractCompilerVisitor___add_decl(var_v, var795); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <var_v:AbstractCompilerVisitor>*/
}
if (likely(varonce798!=NULL)) {
var799 = varonce798;
} else {
var800 = "count_invoke_total = count_invoke_by_tables + count_invoke_by_direct + count_invoke_by_inline;";
var801 = core__abstract_text___CString___to_s_full(var800, 94l, 94l);
var799 = var801;
varonce798 = var799;
}
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var799); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
if (likely(varonce802!=NULL)) {
var803 = varonce802;
} else {
var804 = "printf(\"# dynamic count_invocation: total %ld\\n\", count_invoke_total);";
var805 = core__abstract_text___CString___to_s_full(var804, 70l, 70l);
var803 = var805;
varonce802 = var803;
}
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var803); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
if (likely(varonce806!=NULL)) {
var807 = varonce806;
} else {
var808 = "printf(\"by table: %ld (%.2f%%)\\n\", count_invoke_by_tables, 100.0*count_invoke_by_tables/count_invoke_total);";
var809 = core__abstract_text___CString___to_s_full(var808, 108l, 108l);
var807 = var809;
varonce806 = var807;
}
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var807); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
if (likely(varonce810!=NULL)) {
var811 = varonce810;
} else {
var812 = "printf(\"direct:   %ld (%.2f%%)\\n\", count_invoke_by_direct, 100.0*count_invoke_by_direct/count_invoke_total);";
var813 = core__abstract_text___CString___to_s_full(var812, 108l, 108l);
var811 = var813;
varonce810 = var811;
}
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var811); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
if (likely(varonce814!=NULL)) {
var815 = varonce814;
} else {
var816 = "printf(\"inlined:  %ld (%.2f%%)\\n\", count_invoke_by_inline, 100.0*count_invoke_by_inline/count_invoke_total);";
var817 = core__abstract_text___CString___to_s_full(var816, 108l, 108l);
var815 = var817;
varonce814 = var815;
}
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var815); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
} else {
}
{
{ /* Inline abstract_compiler#AbstractCompiler#modelbuilder (self) on <self:AbstractCompiler> */
var820 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___modelbuilder].val; /* _modelbuilder on <self:AbstractCompiler> */
if (unlikely(var820 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 538);
fatal_exit(1);
}
var818 = var820;
RET_LABEL819:(void)0;
}
}
{
{ /* Inline modelbuilder_base#ModelBuilder#toolcontext (var818) on <var818:ModelBuilder> */
var823 = var818->attrs[COLOR_nitc__modelbuilder_base__ModelBuilder___toolcontext].val; /* _toolcontext on <var818:ModelBuilder> */
if (unlikely(var823 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelbuilder_base, 47);
fatal_exit(1);
}
var821 = var823;
RET_LABEL822:(void)0;
}
}
{
{ /* Inline abstract_compiler#ToolContext#opt_isset_checks_metrics (var821) on <var821:ToolContext> */
var826 = var821->attrs[COLOR_nitc__abstract_compiler__ToolContext___opt_isset_checks_metrics].val; /* _opt_isset_checks_metrics on <var821:ToolContext> */
if (unlikely(var826 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_isset_checks_metrics");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 64);
fatal_exit(1);
}
var824 = var826;
RET_LABEL825:(void)0;
}
}
{
{ /* Inline opts#Option#value (var824) on <var824:OptionBool> */
var829 = var824->attrs[COLOR_opts__Option___value].val; /* _value on <var824:OptionBool> */
var827 = var829;
RET_LABEL828:(void)0;
}
}
var830 = (short int)((long)(var827)>>2);
if (var830){
if (likely(varonce831!=NULL)) {
var832 = varonce831;
} else {
var833 = "printf(\"# dynamic attribute reads: %ld\\n\", count_attr_reads);";
var834 = core__abstract_text___CString___to_s_full(var833, 61l, 61l);
var832 = var834;
varonce831 = var832;
}
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var832); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
if (likely(varonce835!=NULL)) {
var836 = varonce835;
} else {
var837 = "printf(\"# dynamic isset checks: %ld\\n\", count_isset_checks);";
var838 = core__abstract_text___CString___to_s_full(var837, 60l, 60l);
var836 = var838;
varonce835 = var836;
}
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var836); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
} else {
}
if (likely(varonce839!=NULL)) {
var840 = varonce839;
} else {
var841 = "return 0;";
var842 = core__abstract_text___CString___to_s_full(var841, 9l, 9l);
var840 = var842;
varonce839 = var840;
}
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var840); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
if (likely(varonce843!=NULL)) {
var844 = varonce843;
} else {
var845 = "}";
var846 = core__abstract_text___CString___to_s_full(var845, 1l, 1l);
var844 = var846;
varonce843 = var844;
}
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var844); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
{
{ /* Inline abstract_compiler#AbstractCompiler#mainmodule (self) on <self:AbstractCompiler> */
var849 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___mainmodule].val; /* _mainmodule on <self:AbstractCompiler> */
if (unlikely(var849 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mainmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 531);
fatal_exit(1);
}
var847 = var849;
RET_LABEL848:(void)0;
}
}
{
{ /* Inline mmodule#MModule#in_importation (var847) on <var847:MModule> */
var852 = var847->attrs[COLOR_nitc__mmodule__MModule___in_importation].val; /* _in_importation on <var847:MModule> */
if (unlikely(var852 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _in_importation");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__mmodule, 108);
fatal_exit(1);
}
var850 = var852;
RET_LABEL851:(void)0;
}
}
{
var853 = poset___poset__POSetElement___greaters(var850);
}
var_854 = var853;
{
var855 = ((val*(*)(val* self))((((long)var_854&3)?class_info[((long)var_854&3)]:var_854->class)->vft[COLOR_core__abstract_collection__Collection__iterator]))(var_854); /* iterator on <var_854:Collection[MModule]>*/
}
var_856 = var855;
for(;;) {
{
var857 = ((short int(*)(val* self))((((long)var_856&3)?class_info[((long)var_856&3)]:var_856->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_856); /* is_ok on <var_856:Iterator[MModule]>*/
}
if (var857){
} else {
goto BREAK_label858;
}
{
var859 = ((val*(*)(val* self))((((long)var_856&3)?class_info[((long)var_856&3)]:var_856->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_856); /* item on <var_856:Iterator[MModule]>*/
}
var_m = var859;
if (likely(varonce860!=NULL)) {
var861 = varonce860;
} else {
var862 = "FILE_";
var863 = core__abstract_text___CString___to_s_full(var862, 5l, 5l);
var861 = var863;
varonce860 = var861;
}
{
var864 = nitc___nitc__MModule___nitc__model_base__MEntity__c_name(var_m);
}
{
var865 = ((val*(*)(val* self, val* p0))(var861->class->vft[COLOR_core__abstract_text__Text___43d]))(var861, var864); /* + on <var861:String>*/
}
var_f = var865;
if (unlikely(varonce866==NULL)) {
var867 = NEW_core__NativeArray(5l, &type_core__NativeArray__core__String);
if (likely(varonce868!=NULL)) {
var869 = varonce868;
} else {
var870 = "const char ";
var871 = core__abstract_text___CString___to_s_full(var870, 11l, 11l);
var869 = var871;
varonce868 = var869;
}
((struct instance_core__NativeArray*)var867)->values[0]=var869;
if (likely(varonce872!=NULL)) {
var873 = varonce872;
} else {
var874 = "[] = \"";
var875 = core__abstract_text___CString___to_s_full(var874, 6l, 6l);
var873 = var875;
varonce872 = var873;
}
((struct instance_core__NativeArray*)var867)->values[2]=var873;
if (likely(varonce876!=NULL)) {
var877 = varonce876;
} else {
var878 = "\";";
var879 = core__abstract_text___CString___to_s_full(var878, 2l, 2l);
var877 = var879;
varonce876 = var877;
}
((struct instance_core__NativeArray*)var867)->values[4]=var877;
} else {
var867 = varonce866;
varonce866 = NULL;
}
((struct instance_core__NativeArray*)var867)->values[1]=var_f;
{
{ /* Inline mmodule#MModule#location (var_m) on <var_m:MModule> */
var882 = var_m->attrs[COLOR_nitc__mmodule__MModule___location].val; /* _location on <var_m:MModule> */
if (unlikely(var882 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _location");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__mmodule, 103);
fatal_exit(1);
}
var880 = var882;
RET_LABEL881:(void)0;
}
}
{
{ /* Inline location#Location#file (var880) on <var880:Location> */
var885 = var880->attrs[COLOR_nitc__location__Location___file].val; /* _file on <var880:Location> */
var883 = var885;
RET_LABEL884:(void)0;
}
}
if (var883 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 995);
fatal_exit(1);
} else {
{ /* Inline location#SourceFile#filename (var883) on <var883:nullable SourceFile> */
if (unlikely(var883 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__location, 22);
fatal_exit(1);
}
var888 = var883->attrs[COLOR_nitc__location__SourceFile___filename].val; /* _filename on <var883:nullable SourceFile> */
if (unlikely(var888 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _filename");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__location, 22);
fatal_exit(1);
}
var886 = var888;
RET_LABEL887:(void)0;
}
}
{
var889 = ((val*(*)(val* self))(var886->class->vft[COLOR_core__abstract_text__Text__escape_to_c]))(var886); /* escape_to_c on <var886:String>*/
}
((struct instance_core__NativeArray*)var867)->values[3]=var889;
{
var890 = ((val*(*)(val* self))(var867->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var867); /* native_to_s on <var867:NativeArray[String]>*/
}
varonce866 = var867;
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var890); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
if (unlikely(varonce891==NULL)) {
var892 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce893!=NULL)) {
var894 = varonce893;
} else {
var895 = "extern const char ";
var896 = core__abstract_text___CString___to_s_full(var895, 18l, 18l);
var894 = var896;
varonce893 = var894;
}
((struct instance_core__NativeArray*)var892)->values[0]=var894;
if (likely(varonce897!=NULL)) {
var898 = varonce897;
} else {
var899 = "[];";
var900 = core__abstract_text___CString___to_s_full(var899, 3l, 3l);
var898 = var900;
varonce897 = var898;
}
((struct instance_core__NativeArray*)var892)->values[2]=var898;
} else {
var892 = varonce891;
varonce891 = NULL;
}
((struct instance_core__NativeArray*)var892)->values[1]=var_f;
{
var901 = ((val*(*)(val* self))(var892->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var892); /* native_to_s on <var892:NativeArray[String]>*/
}
varonce891 = var892;
{
nitc___nitc__AbstractCompiler___provide_declaration(self, var_f, var901); /* Direct call abstract_compiler#AbstractCompiler#provide_declaration on <self:AbstractCompiler>*/
}
{
((void(*)(val* self))((((long)var_856&3)?class_info[((long)var_856&3)]:var_856->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_856); /* next on <var_856:Iterator[MModule]>*/
}
}
BREAK_label858: (void)0;
{
((void(*)(val* self))((((long)var_856&3)?class_info[((long)var_856&3)]:var_856->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_856); /* finish on <var_856:Iterator[MModule]>*/
}
RET_LABEL:;
}
/* method abstract_compiler#AbstractCompiler#compile_nitni_global_ref_functions for (self: AbstractCompiler) */
void nitc___nitc__AbstractCompiler___compile_nitni_global_ref_functions(val* self) {
val* var /* : AbstractCompilerVisitor */;
val* var_v /* var v: AbstractCompilerVisitor */;
static val* varonce;
val* var1 /* : String */;
char* var2 /* : CString */;
val* var3 /* : String */;
{
var = ((val*(*)(val* self))(self->class->vft[COLOR_nitc__abstract_compiler__AbstractCompiler__new_visitor]))(self); /* new_visitor on <self:AbstractCompiler>*/
}
var_v = var;
if (likely(varonce!=NULL)) {
var1 = varonce;
} else {
var2 = "struct nitni_global_ref_list_t *nitni_global_ref_list;\nvoid initialize_nitni_global_refs() {\n\tnitni_global_ref_list = (struct nitni_global_ref_list_t*)nit_alloc(sizeof(struct nitni_global_ref_list_t));\n\tnitni_global_ref_list->head = NULL;\n\tnitni_global_ref_list->tail = NULL;\n}\n\nvoid nitni_global_ref_add( struct nitni_ref *ref ) {\n\tif ( nitni_global_ref_list->head == NULL ) {\n\t\tnitni_global_ref_list->head = ref;\n\t\tref->prev = NULL;\n\t} else {\n\t\tnitni_global_ref_list->tail->next = ref;\n\t\tref->prev = nitni_global_ref_list->tail;\n\t}\n\tnitni_global_ref_list->tail = ref;\n\n\tref->next = NULL;\n}\n\nvoid nitni_global_ref_remove( struct nitni_ref *ref ) {\n\tif ( ref->prev == NULL ) {\n\t\tnitni_global_ref_list->head = ref->next;\n\t} else {\n\t\tref->prev->next = ref->next;\n\t}\n\n\tif ( ref->next == NULL ) {\n\t\tnitni_global_ref_list->tail = ref->prev;\n\t} else {\n\t\tref->next->prev = ref->prev;\n\t}\n}\n\nextern void nitni_global_ref_incr( struct nitni_ref *ref ) {\n\tif ( ref->count == 0 ) /* not registered */\n\t{\n\t\t/* add to list */\n\t\tnitni_global_ref_add( ref );\n\t}\n\n\tref->count ++;\n}\n\nextern void nitni_global_ref_decr( struct nitni_ref *ref ) {\n\tif ( ref->count == 1 ) /* was last reference */\n\t{\n\t\t/* remove from list */\n\t\tnitni_global_ref_remove( ref );\n\t}\n\n\tref->count --;\n}\n";
var3 = core__abstract_text___CString___to_s_full(var2, 1260l, 1260l);
var1 = var3;
varonce = var1;
}
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var1); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
RET_LABEL:;
}
/* method abstract_compiler#AbstractCompiler#extern_bodies for (self: AbstractCompiler): Array[ExternFile] */
val* nitc___nitc__AbstractCompiler___extern_bodies(val* self) {
val* var /* : Array[ExternFile] */;
val* var1 /* : Array[ExternFile] */;
var1 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___extern_bodies].val; /* _extern_bodies on <self:AbstractCompiler> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _extern_bodies");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1061);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AbstractCompiler#files_to_copy for (self: AbstractCompiler): Array[String] */
val* nitc___nitc__AbstractCompiler___files_to_copy(val* self) {
val* var /* : Array[String] */;
val* var1 /* : Array[String] */;
var1 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___files_to_copy].val; /* _files_to_copy on <self:AbstractCompiler> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _files_to_copy");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1064);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AbstractCompiler#seen_extern for (self: AbstractCompiler): ArraySet[String] */
val* nitc___nitc__AbstractCompiler___seen_extern(val* self) {
val* var /* : ArraySet[String] */;
val* var1 /* : ArraySet[String] */;
var1 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___seen_extern].val; /* _seen_extern on <self:AbstractCompiler> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _seen_extern");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1067);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AbstractCompiler#generate_init_attr for (self: AbstractCompiler, AbstractCompilerVisitor, RuntimeVariable, MClassType) */
void nitc___nitc__AbstractCompiler___generate_init_attr(val* self, val* p0, val* p1, val* p2) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
val* var_v /* var v: AbstractCompilerVisitor */;
val* var_recv /* var recv: RuntimeVariable */;
val* var_mtype /* var mtype: MClassType */;
val* var1 /* : MModule */;
val* var3 /* : MModule */;
val* var4 /* : Set[MClassDef] */;
val* var5 /* : Array[nullable Object] */;
val* var_cds /* var cds: Array[MClassDef] */;
val* var6 /* : MModule */;
val* var8 /* : MModule */;
val* var_ /* var : Array[MClassDef] */;
val* var9 /* : IndexedIterator[nullable Object] */;
val* var_10 /* var : IndexedIterator[MClassDef] */;
short int var11 /* : Bool */;
val* var12 /* : nullable Object */;
val* var_cd /* var cd: MClassDef */;
val* var13 /* : ModelBuilder */;
val* var15 /* : ModelBuilder */;
val* var16 /* : Array[AAttrPropdef] */;
val* var_17 /* var : Array[AAttrPropdef] */;
val* var18 /* : IndexedIterator[nullable Object] */;
val* var_19 /* var : IndexedIterator[AAttrPropdef] */;
short int var20 /* : Bool */;
val* var22 /* : nullable Object */;
val* var_npropdef /* var npropdef: AAttrPropdef */;
/* Covariant cast for argument 0 (v) <p0:AbstractCompilerVisitor> isa VISITOR */
/* <p0:AbstractCompilerVisitor> isa VISITOR */
type_struct = self->type->resolution_table->types[COLOR_nitc__abstract_compiler__AbstractCompiler__VISITOR];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= p0->type->table_size) {
var = 0;
} else {
var = p0->type->type_table[cltype] == idtype;
}
if (unlikely(!var)) {
var_class_name = p0 == NULL ? "null" : p0->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "VISITOR", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1070);
fatal_exit(1);
}
var_v = p0;
var_recv = p1;
var_mtype = p2;
{
{ /* Inline abstract_compiler#AbstractCompiler#mainmodule (self) on <self:AbstractCompiler> */
var3 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___mainmodule].val; /* _mainmodule on <self:AbstractCompiler> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mainmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 531);
fatal_exit(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
var4 = nitc___nitc__MClassType___MType__collect_mclassdefs(var_mtype, var1);
}
{
var5 = core__array___Collection___to_a(var4);
}
var_cds = var5;
{
{ /* Inline abstract_compiler#AbstractCompiler#mainmodule (self) on <self:AbstractCompiler> */
var8 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___mainmodule].val; /* _mainmodule on <self:AbstractCompiler> */
if (unlikely(var8 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mainmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 531);
fatal_exit(1);
}
var6 = var8;
RET_LABEL7:(void)0;
}
}
{
nitc__model___MModule___linearize_mclassdefs(var6, var_cds); /* Direct call model#MModule#linearize_mclassdefs on <var6:MModule>*/
}
var_ = var_cds;
{
var9 = core___core__AbstractArrayRead___core__abstract_collection__Collection__iterator(var_);
}
var_10 = var9;
for(;;) {
{
var11 = ((short int(*)(val* self))((((long)var_10&3)?class_info[((long)var_10&3)]:var_10->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_10); /* is_ok on <var_10:IndexedIterator[MClassDef]>*/
}
if (var11){
} else {
goto BREAK_label;
}
{
var12 = ((val*(*)(val* self))((((long)var_10&3)?class_info[((long)var_10&3)]:var_10->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_10); /* item on <var_10:IndexedIterator[MClassDef]>*/
}
var_cd = var12;
{
{ /* Inline abstract_compiler#AbstractCompiler#modelbuilder (self) on <self:AbstractCompiler> */
var15 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___modelbuilder].val; /* _modelbuilder on <self:AbstractCompiler> */
if (unlikely(var15 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 538);
fatal_exit(1);
}
var13 = var15;
RET_LABEL14:(void)0;
}
}
{
var16 = nitc__modelize_property___ModelBuilder___collect_attr_propdef(var13, var_cd);
}
var_17 = var16;
{
var18 = core___core__AbstractArrayRead___core__abstract_collection__Collection__iterator(var_17);
}
var_19 = var18;
for(;;) {
{
var20 = ((short int(*)(val* self))((((long)var_19&3)?class_info[((long)var_19&3)]:var_19->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_19); /* is_ok on <var_19:IndexedIterator[AAttrPropdef]>*/
}
if (var20){
} else {
goto BREAK_label21;
}
{
var22 = ((val*(*)(val* self))((((long)var_19&3)?class_info[((long)var_19&3)]:var_19->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_19); /* item on <var_19:IndexedIterator[AAttrPropdef]>*/
}
var_npropdef = var22;
{
nitc__separate_compiler___AAttrPropdef___init_expr(var_npropdef, var_v, var_recv); /* Direct call separate_compiler#AAttrPropdef#init_expr on <var_npropdef:AAttrPropdef>*/
}
{
((void(*)(val* self))((((long)var_19&3)?class_info[((long)var_19&3)]:var_19->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_19); /* next on <var_19:IndexedIterator[AAttrPropdef]>*/
}
}
BREAK_label21: (void)0;
{
((void(*)(val* self))((((long)var_19&3)?class_info[((long)var_19&3)]:var_19->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_19); /* finish on <var_19:IndexedIterator[AAttrPropdef]>*/
}
{
((void(*)(val* self))((((long)var_10&3)?class_info[((long)var_10&3)]:var_10->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_10); /* next on <var_10:IndexedIterator[MClassDef]>*/
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_10&3)?class_info[((long)var_10&3)]:var_10->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_10); /* finish on <var_10:IndexedIterator[MClassDef]>*/
}
RET_LABEL:;
}
/* method abstract_compiler#AbstractCompiler#count_type_test_tags for (self: AbstractCompiler): Array[String] */
val* nitc___nitc__AbstractCompiler___count_type_test_tags(val* self) {
val* var /* : Array[String] */;
val* var1 /* : Array[String] */;
var1 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___count_type_test_tags].val; /* _count_type_test_tags on <self:AbstractCompiler> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _count_type_test_tags");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1096);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AbstractCompiler#count_type_test_resolved for (self: AbstractCompiler): HashMap[String, Int] */
val* nitc___nitc__AbstractCompiler___count_type_test_resolved(val* self) {
val* var /* : HashMap[String, Int] */;
val* var1 /* : HashMap[String, Int] */;
var1 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___count_type_test_resolved].val; /* _count_type_test_resolved on <self:AbstractCompiler> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _count_type_test_resolved");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1097);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AbstractCompiler#count_type_test_unresolved for (self: AbstractCompiler): HashMap[String, Int] */
val* nitc___nitc__AbstractCompiler___count_type_test_unresolved(val* self) {
val* var /* : HashMap[String, Int] */;
val* var1 /* : HashMap[String, Int] */;
var1 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___count_type_test_unresolved].val; /* _count_type_test_unresolved on <self:AbstractCompiler> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _count_type_test_unresolved");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1098);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AbstractCompiler#count_type_test_skipped for (self: AbstractCompiler): HashMap[String, Int] */
val* nitc___nitc__AbstractCompiler___count_type_test_skipped(val* self) {
val* var /* : HashMap[String, Int] */;
val* var1 /* : HashMap[String, Int] */;
var1 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___count_type_test_skipped].val; /* _count_type_test_skipped on <self:AbstractCompiler> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _count_type_test_skipped");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1099);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AbstractCompiler#init_count_type_test_tags for (self: AbstractCompiler): HashMap[String, Int] */
val* nitc___nitc__AbstractCompiler___init_count_type_test_tags(val* self) {
val* var /* : HashMap[String, Int] */;
val* var1 /* : HashMap[String, Int] */;
val* var_res /* var res: HashMap[String, Int] */;
val* var2 /* : Array[String] */;
val* var4 /* : Array[String] */;
val* var_ /* var : Array[String] */;
val* var5 /* : IndexedIterator[nullable Object] */;
val* var_6 /* var : IndexedIterator[String] */;
short int var7 /* : Bool */;
val* var8 /* : nullable Object */;
val* var_tag /* var tag: String */;
val* var9 /* : nullable Object */;
var1 = NEW_core__HashMap(&type_core__HashMap__core__String__core__Int);
{
core___core__HashMap___core__kernel__Object__init(var1); /* Direct call hash_collection#HashMap#init on <var1:HashMap[String, Int]>*/
}
var_res = var1;
{
{ /* Inline abstract_compiler#AbstractCompiler#count_type_test_tags (self) on <self:AbstractCompiler> */
var4 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___count_type_test_tags].val; /* _count_type_test_tags on <self:AbstractCompiler> */
if (unlikely(var4 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _count_type_test_tags");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1096);
fatal_exit(1);
}
var2 = var4;
RET_LABEL3:(void)0;
}
}
var_ = var2;
{
var5 = core___core__AbstractArrayRead___core__abstract_collection__Collection__iterator(var_);
}
var_6 = var5;
for(;;) {
{
var7 = ((short int(*)(val* self))((((long)var_6&3)?class_info[((long)var_6&3)]:var_6->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_6); /* is_ok on <var_6:IndexedIterator[String]>*/
}
if (var7){
} else {
goto BREAK_label;
}
{
var8 = ((val*(*)(val* self))((((long)var_6&3)?class_info[((long)var_6&3)]:var_6->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_6); /* item on <var_6:IndexedIterator[String]>*/
}
var_tag = var8;
{
var9 = (val*)(0l<<2|1);
core___core__HashMap___core__abstract_collection__Map___91d_93d_61d(var_res, var_tag, var9); /* Direct call hash_collection#HashMap#[]= on <var_res:HashMap[String, Int]>*/
}
{
((void(*)(val* self))((((long)var_6&3)?class_info[((long)var_6&3)]:var_6->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_6); /* next on <var_6:IndexedIterator[String]>*/
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_6&3)?class_info[((long)var_6&3)]:var_6->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_6); /* finish on <var_6:IndexedIterator[String]>*/
}
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AbstractCompiler#display_stats for (self: AbstractCompiler) */
void nitc___nitc__AbstractCompiler___display_stats(val* self) {
val* var /* : ModelBuilder */;
val* var2 /* : ModelBuilder */;
val* var3 /* : ToolContext */;
val* var5 /* : ToolContext */;
val* var6 /* : OptionBool */;
val* var8 /* : OptionBool */;
val* var9 /* : nullable Object */;
val* var11 /* : nullable Object */;
short int var12 /* : Bool */;
val* var13 /* : Sys */;
static val* varonce;
val* var14 /* : String */;
char* var15 /* : CString */;
val* var16 /* : String */;
val* var17 /* : Sys */;
static val* varonce18;
val* var19 /* : String */;
char* var20 /* : CString */;
val* var21 /* : String */;
val* var22 /* : HashMap[String, Int] */;
val* var_count_type_test_total /* var count_type_test_total: HashMap[String, Int] */;
val* var23 /* : HashMap[String, Int] */;
val* var25 /* : HashMap[String, Int] */;
static val* varonce26;
val* var27 /* : String */;
char* var28 /* : CString */;
val* var29 /* : String */;
val* var30 /* : nullable Object */;
val* var31 /* : HashMap[String, Int] */;
val* var33 /* : HashMap[String, Int] */;
static val* varonce34;
val* var35 /* : String */;
char* var36 /* : CString */;
val* var37 /* : String */;
val* var38 /* : nullable Object */;
val* var39 /* : HashMap[String, Int] */;
val* var41 /* : HashMap[String, Int] */;
static val* varonce42;
val* var43 /* : String */;
char* var44 /* : CString */;
val* var45 /* : String */;
val* var46 /* : nullable Object */;
static val* varonce47;
val* var48 /* : String */;
char* var49 /* : CString */;
val* var50 /* : String */;
val* var51 /* : nullable Object */;
val* var52 /* : Array[String] */;
val* var54 /* : Array[String] */;
val* var_ /* var : Array[String] */;
val* var55 /* : IndexedIterator[nullable Object] */;
val* var_56 /* var : IndexedIterator[String] */;
short int var57 /* : Bool */;
val* var58 /* : nullable Object */;
val* var_tag /* var tag: String */;
val* var59 /* : HashMap[String, Int] */;
val* var61 /* : HashMap[String, Int] */;
val* var62 /* : nullable Object */;
val* var63 /* : HashMap[String, Int] */;
val* var65 /* : HashMap[String, Int] */;
val* var66 /* : nullable Object */;
long var67 /* : Int */;
short int var69 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var70 /* : Int */;
long var71 /* : Int */;
long var72 /* : Int */;
val* var73 /* : HashMap[String, Int] */;
val* var75 /* : HashMap[String, Int] */;
val* var76 /* : nullable Object */;
long var77 /* : Int */;
short int var79 /* : Bool */;
int cltype80;
int idtype81;
const char* var_class_name82;
long var83 /* : Int */;
long var84 /* : Int */;
val* var85 /* : nullable Object */;
val* var86 /* : HashMap[String, Int] */;
val* var88 /* : HashMap[String, Int] */;
val* var_89 /* var : HashMap[String, Int] */;
static val* varonce90;
val* var91 /* : String */;
char* var92 /* : CString */;
val* var93 /* : String */;
val* var_94 /* var : String */;
val* var95 /* : nullable Object */;
val* var96 /* : HashMap[String, Int] */;
val* var98 /* : HashMap[String, Int] */;
val* var99 /* : nullable Object */;
long var100 /* : Int */;
short int var102 /* : Bool */;
int cltype103;
int idtype104;
const char* var_class_name105;
long var106 /* : Int */;
long var107 /* : Int */;
long var108 /* : Int */;
val* var109 /* : nullable Object */;
val* var110 /* : HashMap[String, Int] */;
val* var112 /* : HashMap[String, Int] */;
val* var_113 /* var : HashMap[String, Int] */;
static val* varonce114;
val* var115 /* : String */;
char* var116 /* : CString */;
val* var117 /* : String */;
val* var_118 /* var : String */;
val* var119 /* : nullable Object */;
val* var120 /* : HashMap[String, Int] */;
val* var122 /* : HashMap[String, Int] */;
val* var123 /* : nullable Object */;
long var124 /* : Int */;
short int var126 /* : Bool */;
int cltype127;
int idtype128;
const char* var_class_name129;
long var130 /* : Int */;
long var131 /* : Int */;
long var132 /* : Int */;
val* var133 /* : nullable Object */;
val* var134 /* : HashMap[String, Int] */;
val* var136 /* : HashMap[String, Int] */;
val* var_137 /* var : HashMap[String, Int] */;
static val* varonce138;
val* var139 /* : String */;
char* var140 /* : CString */;
val* var141 /* : String */;
val* var_142 /* var : String */;
val* var143 /* : nullable Object */;
val* var144 /* : HashMap[String, Int] */;
val* var146 /* : HashMap[String, Int] */;
val* var147 /* : nullable Object */;
long var148 /* : Int */;
short int var150 /* : Bool */;
int cltype151;
int idtype152;
const char* var_class_name153;
long var154 /* : Int */;
long var155 /* : Int */;
long var156 /* : Int */;
val* var157 /* : nullable Object */;
val* var_158 /* var : HashMap[String, Int] */;
static val* varonce159;
val* var160 /* : String */;
char* var161 /* : CString */;
val* var162 /* : String */;
val* var_163 /* var : String */;
val* var164 /* : nullable Object */;
val* var165 /* : nullable Object */;
long var166 /* : Int */;
short int var168 /* : Bool */;
int cltype169;
int idtype170;
const char* var_class_name171;
long var172 /* : Int */;
long var173 /* : Int */;
long var174 /* : Int */;
val* var175 /* : nullable Object */;
static val* varonce176;
val* var177 /* : String */;
char* var178 /* : CString */;
val* var179 /* : String */;
val* var180 /* : nullable Object */;
long var181 /* : Int */;
long var_count_type_test /* var count_type_test: Int */;
val* var182 /* : Array[String] */;
val* var184 /* : Array[String] */;
val* var185 /* : Array[nullable Object] */;
val* var_tags /* var tags: Array[String] */;
static val* varonce186;
val* var187 /* : String */;
char* var188 /* : CString */;
val* var189 /* : String */;
val* var_190 /* var : Array[String] */;
val* var191 /* : IndexedIterator[nullable Object] */;
val* var_192 /* var : IndexedIterator[String] */;
short int var193 /* : Bool */;
val* var195 /* : nullable Object */;
val* var_tag196 /* var tag: String */;
val* var197 /* : Sys */;
val* var198 /* : Array[Object] */;
val* var199 /* : NativeArray[Object] */;
val* var200 /* : Sys */;
val* var202 /* : NativeArray[String] */;
static val* varonce201;
static val* varonce203;
val* var204 /* : String */;
char* var205 /* : CString */;
val* var206 /* : String */;
static val* varonce207;
val* var208 /* : String */;
char* var209 /* : CString */;
val* var210 /* : String */;
static val* varonce211;
val* var212 /* : String */;
char* var213 /* : CString */;
val* var214 /* : String */;
val* var215 /* : HashMap[String, Int] */;
val* var217 /* : HashMap[String, Int] */;
val* var218 /* : nullable Object */;
val* var219 /* : String */;
long var220 /* : Int */;
val* var221 /* : Sys */;
val* var222 /* : HashMap[String, Int] */;
val* var224 /* : HashMap[String, Int] */;
val* var225 /* : nullable Object */;
val* var226 /* : String */;
long var227 /* : Int */;
val* var228 /* : String */;
val* var229 /* : Array[Object] */;
val* var230 /* : NativeArray[Object] */;
val* var231 /* : Sys */;
val* var233 /* : NativeArray[String] */;
static val* varonce232;
static val* varonce234;
val* var235 /* : String */;
char* var236 /* : CString */;
val* var237 /* : String */;
static val* varonce238;
val* var239 /* : String */;
char* var240 /* : CString */;
val* var241 /* : String */;
static val* varonce242;
val* var243 /* : String */;
char* var244 /* : CString */;
val* var245 /* : String */;
val* var246 /* : HashMap[String, Int] */;
val* var248 /* : HashMap[String, Int] */;
val* var249 /* : nullable Object */;
val* var250 /* : String */;
long var251 /* : Int */;
val* var252 /* : Sys */;
val* var253 /* : HashMap[String, Int] */;
val* var255 /* : HashMap[String, Int] */;
val* var256 /* : nullable Object */;
val* var257 /* : String */;
long var258 /* : Int */;
val* var259 /* : String */;
val* var260 /* : Array[Object] */;
val* var261 /* : NativeArray[Object] */;
val* var262 /* : Sys */;
val* var264 /* : NativeArray[String] */;
static val* varonce263;
static val* varonce265;
val* var266 /* : String */;
char* var267 /* : CString */;
val* var268 /* : String */;
static val* varonce269;
val* var270 /* : String */;
char* var271 /* : CString */;
val* var272 /* : String */;
static val* varonce273;
val* var274 /* : String */;
char* var275 /* : CString */;
val* var276 /* : String */;
val* var277 /* : HashMap[String, Int] */;
val* var279 /* : HashMap[String, Int] */;
val* var280 /* : nullable Object */;
val* var281 /* : String */;
long var282 /* : Int */;
val* var283 /* : Sys */;
val* var284 /* : HashMap[String, Int] */;
val* var286 /* : HashMap[String, Int] */;
val* var287 /* : nullable Object */;
val* var288 /* : String */;
long var289 /* : Int */;
val* var290 /* : String */;
val* var291 /* : Array[Object] */;
val* var292 /* : NativeArray[Object] */;
val* var293 /* : Sys */;
val* var295 /* : NativeArray[String] */;
static val* varonce294;
static val* varonce296;
val* var297 /* : String */;
char* var298 /* : CString */;
val* var299 /* : String */;
static val* varonce300;
val* var301 /* : String */;
char* var302 /* : CString */;
val* var303 /* : String */;
static val* varonce304;
val* var305 /* : String */;
char* var306 /* : CString */;
val* var307 /* : String */;
val* var308 /* : nullable Object */;
val* var309 /* : String */;
long var310 /* : Int */;
val* var311 /* : Sys */;
val* var312 /* : nullable Object */;
val* var313 /* : String */;
long var314 /* : Int */;
val* var315 /* : String */;
val* var316 /* : Array[Object] */;
val* var317 /* : NativeArray[Object] */;
val* var318 /* : Sys */;
static val* varonce319;
val* var320 /* : String */;
char* var321 /* : CString */;
val* var322 /* : String */;
{
{ /* Inline abstract_compiler#AbstractCompiler#modelbuilder (self) on <self:AbstractCompiler> */
var2 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___modelbuilder].val; /* _modelbuilder on <self:AbstractCompiler> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 538);
fatal_exit(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
{ /* Inline modelbuilder_base#ModelBuilder#toolcontext (var) on <var:ModelBuilder> */
var5 = var->attrs[COLOR_nitc__modelbuilder_base__ModelBuilder___toolcontext].val; /* _toolcontext on <var:ModelBuilder> */
if (unlikely(var5 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelbuilder_base, 47);
fatal_exit(1);
}
var3 = var5;
RET_LABEL4:(void)0;
}
}
{
{ /* Inline abstract_compiler#ToolContext#opt_typing_test_metrics (var3) on <var3:ToolContext> */
var8 = var3->attrs[COLOR_nitc__abstract_compiler__ToolContext___opt_typing_test_metrics].val; /* _opt_typing_test_metrics on <var3:ToolContext> */
if (unlikely(var8 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_typing_test_metrics");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 60);
fatal_exit(1);
}
var6 = var8;
RET_LABEL7:(void)0;
}
}
{
{ /* Inline opts#Option#value (var6) on <var6:OptionBool> */
var11 = var6->attrs[COLOR_opts__Option___value].val; /* _value on <var6:OptionBool> */
var9 = var11;
RET_LABEL10:(void)0;
}
}
var12 = (short int)((long)(var9)>>2);
if (var12){
var13 = glob_sys;
if (likely(varonce!=NULL)) {
var14 = varonce;
} else {
var15 = "# static count_type_test";
var16 = core__abstract_text___CString___to_s_full(var15, 24l, 24l);
var14 = var16;
varonce = var14;
}
{
core__file___Sys___print(var13, var14); /* Direct call file#Sys#print on <var13:Sys>*/
}
var17 = glob_sys;
if (likely(varonce18!=NULL)) {
var19 = varonce18;
} else {
var20 = "\tresolved:\tunresolved\tskipped\ttotal";
var21 = core__abstract_text___CString___to_s_full(var20, 35l, 35l);
var19 = var21;
varonce18 = var19;
}
{
core__file___Sys___print(var17, var19); /* Direct call file#Sys#print on <var17:Sys>*/
}
{
var22 = nitc___nitc__AbstractCompiler___init_count_type_test_tags(self);
}
var_count_type_test_total = var22;
{
{ /* Inline abstract_compiler#AbstractCompiler#count_type_test_resolved (self) on <self:AbstractCompiler> */
var25 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___count_type_test_resolved].val; /* _count_type_test_resolved on <self:AbstractCompiler> */
if (unlikely(var25 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _count_type_test_resolved");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1097);
fatal_exit(1);
}
var23 = var25;
RET_LABEL24:(void)0;
}
}
if (likely(varonce26!=NULL)) {
var27 = varonce26;
} else {
var28 = "total";
var29 = core__abstract_text___CString___to_s_full(var28, 5l, 5l);
var27 = var29;
varonce26 = var27;
}
{
var30 = (val*)(0l<<2|1);
core___core__HashMap___core__abstract_collection__Map___91d_93d_61d(var23, var27, var30); /* Direct call hash_collection#HashMap#[]= on <var23:HashMap[String, Int]>*/
}
{
{ /* Inline abstract_compiler#AbstractCompiler#count_type_test_unresolved (self) on <self:AbstractCompiler> */
var33 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___count_type_test_unresolved].val; /* _count_type_test_unresolved on <self:AbstractCompiler> */
if (unlikely(var33 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _count_type_test_unresolved");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1098);
fatal_exit(1);
}
var31 = var33;
RET_LABEL32:(void)0;
}
}
if (likely(varonce34!=NULL)) {
var35 = varonce34;
} else {
var36 = "total";
var37 = core__abstract_text___CString___to_s_full(var36, 5l, 5l);
var35 = var37;
varonce34 = var35;
}
{
var38 = (val*)(0l<<2|1);
core___core__HashMap___core__abstract_collection__Map___91d_93d_61d(var31, var35, var38); /* Direct call hash_collection#HashMap#[]= on <var31:HashMap[String, Int]>*/
}
{
{ /* Inline abstract_compiler#AbstractCompiler#count_type_test_skipped (self) on <self:AbstractCompiler> */
var41 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___count_type_test_skipped].val; /* _count_type_test_skipped on <self:AbstractCompiler> */
if (unlikely(var41 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _count_type_test_skipped");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1099);
fatal_exit(1);
}
var39 = var41;
RET_LABEL40:(void)0;
}
}
if (likely(varonce42!=NULL)) {
var43 = varonce42;
} else {
var44 = "total";
var45 = core__abstract_text___CString___to_s_full(var44, 5l, 5l);
var43 = var45;
varonce42 = var43;
}
{
var46 = (val*)(0l<<2|1);
core___core__HashMap___core__abstract_collection__Map___91d_93d_61d(var39, var43, var46); /* Direct call hash_collection#HashMap#[]= on <var39:HashMap[String, Int]>*/
}
if (likely(varonce47!=NULL)) {
var48 = varonce47;
} else {
var49 = "total";
var50 = core__abstract_text___CString___to_s_full(var49, 5l, 5l);
var48 = var50;
varonce47 = var48;
}
{
var51 = (val*)(0l<<2|1);
core___core__HashMap___core__abstract_collection__Map___91d_93d_61d(var_count_type_test_total, var48, var51); /* Direct call hash_collection#HashMap#[]= on <var_count_type_test_total:HashMap[String, Int]>*/
}
{
{ /* Inline abstract_compiler#AbstractCompiler#count_type_test_tags (self) on <self:AbstractCompiler> */
var54 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___count_type_test_tags].val; /* _count_type_test_tags on <self:AbstractCompiler> */
if (unlikely(var54 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _count_type_test_tags");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1096);
fatal_exit(1);
}
var52 = var54;
RET_LABEL53:(void)0;
}
}
var_ = var52;
{
var55 = core___core__AbstractArrayRead___core__abstract_collection__Collection__iterator(var_);
}
var_56 = var55;
for(;;) {
{
var57 = ((short int(*)(val* self))((((long)var_56&3)?class_info[((long)var_56&3)]:var_56->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_56); /* is_ok on <var_56:IndexedIterator[String]>*/
}
if (var57){
} else {
goto BREAK_label;
}
{
var58 = ((val*(*)(val* self))((((long)var_56&3)?class_info[((long)var_56&3)]:var_56->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_56); /* item on <var_56:IndexedIterator[String]>*/
}
var_tag = var58;
{
{ /* Inline abstract_compiler#AbstractCompiler#count_type_test_resolved (self) on <self:AbstractCompiler> */
var61 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___count_type_test_resolved].val; /* _count_type_test_resolved on <self:AbstractCompiler> */
if (unlikely(var61 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _count_type_test_resolved");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1097);
fatal_exit(1);
}
var59 = var61;
RET_LABEL60:(void)0;
}
}
{
var62 = core___core__HashMap___core__abstract_collection__MapRead___91d_93d(var59, var_tag);
}
{
{ /* Inline abstract_compiler#AbstractCompiler#count_type_test_unresolved (self) on <self:AbstractCompiler> */
var65 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___count_type_test_unresolved].val; /* _count_type_test_unresolved on <self:AbstractCompiler> */
if (unlikely(var65 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _count_type_test_unresolved");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1098);
fatal_exit(1);
}
var63 = var65;
RET_LABEL64:(void)0;
}
}
{
var66 = core___core__HashMap___core__abstract_collection__MapRead___91d_93d(var63, var_tag);
}
{
{ /* Inline kernel#Int#+ (var62,var66) on <var62:nullable Object(Int)> */
/* Covariant cast for argument 0 (i) <var66:nullable Object(Int)> isa OTHER */
/* <var66:nullable Object(Int)> isa OTHER */
var69 = 1; /* easy <var66:nullable Object(Int)> isa OTHER*/
if (unlikely(!var69)) {
var_class_name = var66 == NULL ? "null" : (((long)var66&3)?type_info[((long)var66&3)]:var66->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var70 = (long)(var62)>>2;
var71 = (long)(var66)>>2;
var72 = var70 + var71;
var67 = var72;
goto RET_LABEL68;
RET_LABEL68:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompiler#count_type_test_skipped (self) on <self:AbstractCompiler> */
var75 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___count_type_test_skipped].val; /* _count_type_test_skipped on <self:AbstractCompiler> */
if (unlikely(var75 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _count_type_test_skipped");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1099);
fatal_exit(1);
}
var73 = var75;
RET_LABEL74:(void)0;
}
}
{
var76 = core___core__HashMap___core__abstract_collection__MapRead___91d_93d(var73, var_tag);
}
{
{ /* Inline kernel#Int#+ (var67,var76) on <var67:Int> */
/* Covariant cast for argument 0 (i) <var76:nullable Object(Int)> isa OTHER */
/* <var76:nullable Object(Int)> isa OTHER */
var79 = 1; /* easy <var76:nullable Object(Int)> isa OTHER*/
if (unlikely(!var79)) {
var_class_name82 = var76 == NULL ? "null" : (((long)var76&3)?type_info[((long)var76&3)]:var76->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name82);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var83 = (long)(var76)>>2;
var84 = var67 + var83;
var77 = var84;
goto RET_LABEL78;
RET_LABEL78:(void)0;
}
}
{
var85 = (val*)(var77<<2|1);
core___core__HashMap___core__abstract_collection__Map___91d_93d_61d(var_count_type_test_total, var_tag, var85); /* Direct call hash_collection#HashMap#[]= on <var_count_type_test_total:HashMap[String, Int]>*/
}
{
{ /* Inline abstract_compiler#AbstractCompiler#count_type_test_resolved (self) on <self:AbstractCompiler> */
var88 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___count_type_test_resolved].val; /* _count_type_test_resolved on <self:AbstractCompiler> */
if (unlikely(var88 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _count_type_test_resolved");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1097);
fatal_exit(1);
}
var86 = var88;
RET_LABEL87:(void)0;
}
}
var_89 = var86;
if (likely(varonce90!=NULL)) {
var91 = varonce90;
} else {
var92 = "total";
var93 = core__abstract_text___CString___to_s_full(var92, 5l, 5l);
var91 = var93;
varonce90 = var91;
}
var_94 = var91;
{
var95 = core___core__HashMap___core__abstract_collection__MapRead___91d_93d(var_89, var_94);
}
{
{ /* Inline abstract_compiler#AbstractCompiler#count_type_test_resolved (self) on <self:AbstractCompiler> */
var98 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___count_type_test_resolved].val; /* _count_type_test_resolved on <self:AbstractCompiler> */
if (unlikely(var98 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _count_type_test_resolved");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1097);
fatal_exit(1);
}
var96 = var98;
RET_LABEL97:(void)0;
}
}
{
var99 = core___core__HashMap___core__abstract_collection__MapRead___91d_93d(var96, var_tag);
}
{
{ /* Inline kernel#Int#+ (var95,var99) on <var95:nullable Object(Int)> */
/* Covariant cast for argument 0 (i) <var99:nullable Object(Int)> isa OTHER */
/* <var99:nullable Object(Int)> isa OTHER */
var102 = 1; /* easy <var99:nullable Object(Int)> isa OTHER*/
if (unlikely(!var102)) {
var_class_name105 = var99 == NULL ? "null" : (((long)var99&3)?type_info[((long)var99&3)]:var99->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name105);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var106 = (long)(var95)>>2;
var107 = (long)(var99)>>2;
var108 = var106 + var107;
var100 = var108;
goto RET_LABEL101;
RET_LABEL101:(void)0;
}
}
{
var109 = (val*)(var100<<2|1);
core___core__HashMap___core__abstract_collection__Map___91d_93d_61d(var_89, var_94, var109); /* Direct call hash_collection#HashMap#[]= on <var_89:HashMap[String, Int]>*/
}
{
{ /* Inline abstract_compiler#AbstractCompiler#count_type_test_unresolved (self) on <self:AbstractCompiler> */
var112 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___count_type_test_unresolved].val; /* _count_type_test_unresolved on <self:AbstractCompiler> */
if (unlikely(var112 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _count_type_test_unresolved");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1098);
fatal_exit(1);
}
var110 = var112;
RET_LABEL111:(void)0;
}
}
var_113 = var110;
if (likely(varonce114!=NULL)) {
var115 = varonce114;
} else {
var116 = "total";
var117 = core__abstract_text___CString___to_s_full(var116, 5l, 5l);
var115 = var117;
varonce114 = var115;
}
var_118 = var115;
{
var119 = core___core__HashMap___core__abstract_collection__MapRead___91d_93d(var_113, var_118);
}
{
{ /* Inline abstract_compiler#AbstractCompiler#count_type_test_unresolved (self) on <self:AbstractCompiler> */
var122 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___count_type_test_unresolved].val; /* _count_type_test_unresolved on <self:AbstractCompiler> */
if (unlikely(var122 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _count_type_test_unresolved");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1098);
fatal_exit(1);
}
var120 = var122;
RET_LABEL121:(void)0;
}
}
{
var123 = core___core__HashMap___core__abstract_collection__MapRead___91d_93d(var120, var_tag);
}
{
{ /* Inline kernel#Int#+ (var119,var123) on <var119:nullable Object(Int)> */
/* Covariant cast for argument 0 (i) <var123:nullable Object(Int)> isa OTHER */
/* <var123:nullable Object(Int)> isa OTHER */
var126 = 1; /* easy <var123:nullable Object(Int)> isa OTHER*/
if (unlikely(!var126)) {
var_class_name129 = var123 == NULL ? "null" : (((long)var123&3)?type_info[((long)var123&3)]:var123->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name129);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var130 = (long)(var119)>>2;
var131 = (long)(var123)>>2;
var132 = var130 + var131;
var124 = var132;
goto RET_LABEL125;
RET_LABEL125:(void)0;
}
}
{
var133 = (val*)(var124<<2|1);
core___core__HashMap___core__abstract_collection__Map___91d_93d_61d(var_113, var_118, var133); /* Direct call hash_collection#HashMap#[]= on <var_113:HashMap[String, Int]>*/
}
{
{ /* Inline abstract_compiler#AbstractCompiler#count_type_test_skipped (self) on <self:AbstractCompiler> */
var136 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___count_type_test_skipped].val; /* _count_type_test_skipped on <self:AbstractCompiler> */
if (unlikely(var136 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _count_type_test_skipped");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1099);
fatal_exit(1);
}
var134 = var136;
RET_LABEL135:(void)0;
}
}
var_137 = var134;
if (likely(varonce138!=NULL)) {
var139 = varonce138;
} else {
var140 = "total";
var141 = core__abstract_text___CString___to_s_full(var140, 5l, 5l);
var139 = var141;
varonce138 = var139;
}
var_142 = var139;
{
var143 = core___core__HashMap___core__abstract_collection__MapRead___91d_93d(var_137, var_142);
}
{
{ /* Inline abstract_compiler#AbstractCompiler#count_type_test_skipped (self) on <self:AbstractCompiler> */
var146 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___count_type_test_skipped].val; /* _count_type_test_skipped on <self:AbstractCompiler> */
if (unlikely(var146 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _count_type_test_skipped");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1099);
fatal_exit(1);
}
var144 = var146;
RET_LABEL145:(void)0;
}
}
{
var147 = core___core__HashMap___core__abstract_collection__MapRead___91d_93d(var144, var_tag);
}
{
{ /* Inline kernel#Int#+ (var143,var147) on <var143:nullable Object(Int)> */
/* Covariant cast for argument 0 (i) <var147:nullable Object(Int)> isa OTHER */
/* <var147:nullable Object(Int)> isa OTHER */
var150 = 1; /* easy <var147:nullable Object(Int)> isa OTHER*/
if (unlikely(!var150)) {
var_class_name153 = var147 == NULL ? "null" : (((long)var147&3)?type_info[((long)var147&3)]:var147->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name153);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var154 = (long)(var143)>>2;
var155 = (long)(var147)>>2;
var156 = var154 + var155;
var148 = var156;
goto RET_LABEL149;
RET_LABEL149:(void)0;
}
}
{
var157 = (val*)(var148<<2|1);
core___core__HashMap___core__abstract_collection__Map___91d_93d_61d(var_137, var_142, var157); /* Direct call hash_collection#HashMap#[]= on <var_137:HashMap[String, Int]>*/
}
var_158 = var_count_type_test_total;
if (likely(varonce159!=NULL)) {
var160 = varonce159;
} else {
var161 = "total";
var162 = core__abstract_text___CString___to_s_full(var161, 5l, 5l);
var160 = var162;
varonce159 = var160;
}
var_163 = var160;
{
var164 = core___core__HashMap___core__abstract_collection__MapRead___91d_93d(var_158, var_163);
}
{
var165 = core___core__HashMap___core__abstract_collection__MapRead___91d_93d(var_count_type_test_total, var_tag);
}
{
{ /* Inline kernel#Int#+ (var164,var165) on <var164:nullable Object(Int)> */
/* Covariant cast for argument 0 (i) <var165:nullable Object(Int)> isa OTHER */
/* <var165:nullable Object(Int)> isa OTHER */
var168 = 1; /* easy <var165:nullable Object(Int)> isa OTHER*/
if (unlikely(!var168)) {
var_class_name171 = var165 == NULL ? "null" : (((long)var165&3)?type_info[((long)var165&3)]:var165->type)->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name171);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var172 = (long)(var164)>>2;
var173 = (long)(var165)>>2;
var174 = var172 + var173;
var166 = var174;
goto RET_LABEL167;
RET_LABEL167:(void)0;
}
}
{
var175 = (val*)(var166<<2|1);
core___core__HashMap___core__abstract_collection__Map___91d_93d_61d(var_158, var_163, var175); /* Direct call hash_collection#HashMap#[]= on <var_158:HashMap[String, Int]>*/
}
{
((void(*)(val* self))((((long)var_56&3)?class_info[((long)var_56&3)]:var_56->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_56); /* next on <var_56:IndexedIterator[String]>*/
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_56&3)?class_info[((long)var_56&3)]:var_56->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_56); /* finish on <var_56:IndexedIterator[String]>*/
}
if (likely(varonce176!=NULL)) {
var177 = varonce176;
} else {
var178 = "total";
var179 = core__abstract_text___CString___to_s_full(var178, 5l, 5l);
var177 = var179;
varonce176 = var177;
}
{
var180 = core___core__HashMap___core__abstract_collection__MapRead___91d_93d(var_count_type_test_total, var177);
}
var181 = (long)(var180)>>2;
var_count_type_test = var181;
{
{ /* Inline abstract_compiler#AbstractCompiler#count_type_test_tags (self) on <self:AbstractCompiler> */
var184 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___count_type_test_tags].val; /* _count_type_test_tags on <self:AbstractCompiler> */
if (unlikely(var184 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _count_type_test_tags");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1096);
fatal_exit(1);
}
var182 = var184;
RET_LABEL183:(void)0;
}
}
{
var185 = core__array___Collection___to_a(var182);
}
var_tags = var185;
if (likely(varonce186!=NULL)) {
var187 = varonce186;
} else {
var188 = "total";
var189 = core__abstract_text___CString___to_s_full(var188, 5l, 5l);
var187 = var189;
varonce186 = var187;
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_tags, var187); /* Direct call array#Array#add on <var_tags:Array[String]>*/
}
var_190 = var_tags;
{
var191 = core___core__AbstractArrayRead___core__abstract_collection__Collection__iterator(var_190);
}
var_192 = var191;
for(;;) {
{
var193 = ((short int(*)(val* self))((((long)var_192&3)?class_info[((long)var_192&3)]:var_192->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_192); /* is_ok on <var_192:IndexedIterator[String]>*/
}
if (var193){
} else {
goto BREAK_label194;
}
{
var195 = ((val*(*)(val* self))((((long)var_192&3)?class_info[((long)var_192&3)]:var_192->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_192); /* item on <var_192:IndexedIterator[String]>*/
}
var_tag196 = var195;
var197 = glob_sys;
var198 = NEW_core__Array(&type_core__Array__core__Object);
{ /* var198 = array_instance Array[Object] */
var199 = NEW_core__NativeArray(1l, &type_core__NativeArray__core__Object);
((struct instance_core__NativeArray*)var199)->values[0] = (val*) var_tag196;
{
((void(*)(val* self, val* p0, long p1))(var198->class->vft[COLOR_core__array__Array__with_native]))(var198, var199, 1l); /* with_native on <var198:Array[Object]>*/
}
}
{
core__file___Sys___printn(var197, var198); /* Direct call file#Sys#printn on <var197:Sys>*/
}
var200 = glob_sys;
if (unlikely(varonce201==NULL)) {
var202 = NEW_core__NativeArray(5l, &type_core__NativeArray__core__String);
if (likely(varonce203!=NULL)) {
var204 = varonce203;
} else {
var205 = "\t";
var206 = core__abstract_text___CString___to_s_full(var205, 1l, 1l);
var204 = var206;
varonce203 = var204;
}
((struct instance_core__NativeArray*)var202)->values[0]=var204;
if (likely(varonce207!=NULL)) {
var208 = varonce207;
} else {
var209 = " (";
var210 = core__abstract_text___CString___to_s_full(var209, 2l, 2l);
var208 = var210;
varonce207 = var208;
}
((struct instance_core__NativeArray*)var202)->values[2]=var208;
if (likely(varonce211!=NULL)) {
var212 = varonce211;
} else {
var213 = "%)";
var214 = core__abstract_text___CString___to_s_full(var213, 2l, 2l);
var212 = var214;
varonce211 = var212;
}
((struct instance_core__NativeArray*)var202)->values[4]=var212;
} else {
var202 = varonce201;
varonce201 = NULL;
}
{
{ /* Inline abstract_compiler#AbstractCompiler#count_type_test_resolved (self) on <self:AbstractCompiler> */
var217 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___count_type_test_resolved].val; /* _count_type_test_resolved on <self:AbstractCompiler> */
if (unlikely(var217 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _count_type_test_resolved");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1097);
fatal_exit(1);
}
var215 = var217;
RET_LABEL216:(void)0;
}
}
{
var218 = core___core__HashMap___core__abstract_collection__MapRead___91d_93d(var215, var_tag196);
}
var220 = (long)(var218)>>2;
var219 = core__flat___Int___core__abstract_text__Object__to_s(var220);
((struct instance_core__NativeArray*)var202)->values[1]=var219;
var221 = glob_sys;
{
{ /* Inline abstract_compiler#AbstractCompiler#count_type_test_resolved (self) on <self:AbstractCompiler> */
var224 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___count_type_test_resolved].val; /* _count_type_test_resolved on <self:AbstractCompiler> */
if (unlikely(var224 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _count_type_test_resolved");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1097);
fatal_exit(1);
}
var222 = var224;
RET_LABEL223:(void)0;
}
}
{
var225 = core___core__HashMap___core__abstract_collection__MapRead___91d_93d(var222, var_tag196);
}
{
var227 = (long)(var225)>>2;
var226 = counter___core__Sys___div(var221, var227, var_count_type_test);
}
((struct instance_core__NativeArray*)var202)->values[3]=var226;
{
var228 = ((val*(*)(val* self))(var202->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var202); /* native_to_s on <var202:NativeArray[String]>*/
}
varonce201 = var202;
var229 = NEW_core__Array(&type_core__Array__core__Object);
{ /* var229 = array_instance Array[Object] */
var230 = NEW_core__NativeArray(1l, &type_core__NativeArray__core__Object);
((struct instance_core__NativeArray*)var230)->values[0] = (val*) var228;
{
((void(*)(val* self, val* p0, long p1))(var229->class->vft[COLOR_core__array__Array__with_native]))(var229, var230, 1l); /* with_native on <var229:Array[Object]>*/
}
}
{
core__file___Sys___printn(var200, var229); /* Direct call file#Sys#printn on <var200:Sys>*/
}
var231 = glob_sys;
if (unlikely(varonce232==NULL)) {
var233 = NEW_core__NativeArray(5l, &type_core__NativeArray__core__String);
if (likely(varonce234!=NULL)) {
var235 = varonce234;
} else {
var236 = "\t";
var237 = core__abstract_text___CString___to_s_full(var236, 1l, 1l);
var235 = var237;
varonce234 = var235;
}
((struct instance_core__NativeArray*)var233)->values[0]=var235;
if (likely(varonce238!=NULL)) {
var239 = varonce238;
} else {
var240 = " (";
var241 = core__abstract_text___CString___to_s_full(var240, 2l, 2l);
var239 = var241;
varonce238 = var239;
}
((struct instance_core__NativeArray*)var233)->values[2]=var239;
if (likely(varonce242!=NULL)) {
var243 = varonce242;
} else {
var244 = "%)";
var245 = core__abstract_text___CString___to_s_full(var244, 2l, 2l);
var243 = var245;
varonce242 = var243;
}
((struct instance_core__NativeArray*)var233)->values[4]=var243;
} else {
var233 = varonce232;
varonce232 = NULL;
}
{
{ /* Inline abstract_compiler#AbstractCompiler#count_type_test_unresolved (self) on <self:AbstractCompiler> */
var248 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___count_type_test_unresolved].val; /* _count_type_test_unresolved on <self:AbstractCompiler> */
if (unlikely(var248 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _count_type_test_unresolved");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1098);
fatal_exit(1);
}
var246 = var248;
RET_LABEL247:(void)0;
}
}
{
var249 = core___core__HashMap___core__abstract_collection__MapRead___91d_93d(var246, var_tag196);
}
var251 = (long)(var249)>>2;
var250 = core__flat___Int___core__abstract_text__Object__to_s(var251);
((struct instance_core__NativeArray*)var233)->values[1]=var250;
var252 = glob_sys;
{
{ /* Inline abstract_compiler#AbstractCompiler#count_type_test_unresolved (self) on <self:AbstractCompiler> */
var255 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___count_type_test_unresolved].val; /* _count_type_test_unresolved on <self:AbstractCompiler> */
if (unlikely(var255 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _count_type_test_unresolved");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1098);
fatal_exit(1);
}
var253 = var255;
RET_LABEL254:(void)0;
}
}
{
var256 = core___core__HashMap___core__abstract_collection__MapRead___91d_93d(var253, var_tag196);
}
{
var258 = (long)(var256)>>2;
var257 = counter___core__Sys___div(var252, var258, var_count_type_test);
}
((struct instance_core__NativeArray*)var233)->values[3]=var257;
{
var259 = ((val*(*)(val* self))(var233->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var233); /* native_to_s on <var233:NativeArray[String]>*/
}
varonce232 = var233;
var260 = NEW_core__Array(&type_core__Array__core__Object);
{ /* var260 = array_instance Array[Object] */
var261 = NEW_core__NativeArray(1l, &type_core__NativeArray__core__Object);
((struct instance_core__NativeArray*)var261)->values[0] = (val*) var259;
{
((void(*)(val* self, val* p0, long p1))(var260->class->vft[COLOR_core__array__Array__with_native]))(var260, var261, 1l); /* with_native on <var260:Array[Object]>*/
}
}
{
core__file___Sys___printn(var231, var260); /* Direct call file#Sys#printn on <var231:Sys>*/
}
var262 = glob_sys;
if (unlikely(varonce263==NULL)) {
var264 = NEW_core__NativeArray(5l, &type_core__NativeArray__core__String);
if (likely(varonce265!=NULL)) {
var266 = varonce265;
} else {
var267 = "\t";
var268 = core__abstract_text___CString___to_s_full(var267, 1l, 1l);
var266 = var268;
varonce265 = var266;
}
((struct instance_core__NativeArray*)var264)->values[0]=var266;
if (likely(varonce269!=NULL)) {
var270 = varonce269;
} else {
var271 = " (";
var272 = core__abstract_text___CString___to_s_full(var271, 2l, 2l);
var270 = var272;
varonce269 = var270;
}
((struct instance_core__NativeArray*)var264)->values[2]=var270;
if (likely(varonce273!=NULL)) {
var274 = varonce273;
} else {
var275 = "%)";
var276 = core__abstract_text___CString___to_s_full(var275, 2l, 2l);
var274 = var276;
varonce273 = var274;
}
((struct instance_core__NativeArray*)var264)->values[4]=var274;
} else {
var264 = varonce263;
varonce263 = NULL;
}
{
{ /* Inline abstract_compiler#AbstractCompiler#count_type_test_skipped (self) on <self:AbstractCompiler> */
var279 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___count_type_test_skipped].val; /* _count_type_test_skipped on <self:AbstractCompiler> */
if (unlikely(var279 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _count_type_test_skipped");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1099);
fatal_exit(1);
}
var277 = var279;
RET_LABEL278:(void)0;
}
}
{
var280 = core___core__HashMap___core__abstract_collection__MapRead___91d_93d(var277, var_tag196);
}
var282 = (long)(var280)>>2;
var281 = core__flat___Int___core__abstract_text__Object__to_s(var282);
((struct instance_core__NativeArray*)var264)->values[1]=var281;
var283 = glob_sys;
{
{ /* Inline abstract_compiler#AbstractCompiler#count_type_test_skipped (self) on <self:AbstractCompiler> */
var286 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___count_type_test_skipped].val; /* _count_type_test_skipped on <self:AbstractCompiler> */
if (unlikely(var286 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _count_type_test_skipped");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1099);
fatal_exit(1);
}
var284 = var286;
RET_LABEL285:(void)0;
}
}
{
var287 = core___core__HashMap___core__abstract_collection__MapRead___91d_93d(var284, var_tag196);
}
{
var289 = (long)(var287)>>2;
var288 = counter___core__Sys___div(var283, var289, var_count_type_test);
}
((struct instance_core__NativeArray*)var264)->values[3]=var288;
{
var290 = ((val*(*)(val* self))(var264->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var264); /* native_to_s on <var264:NativeArray[String]>*/
}
varonce263 = var264;
var291 = NEW_core__Array(&type_core__Array__core__Object);
{ /* var291 = array_instance Array[Object] */
var292 = NEW_core__NativeArray(1l, &type_core__NativeArray__core__Object);
((struct instance_core__NativeArray*)var292)->values[0] = (val*) var290;
{
((void(*)(val* self, val* p0, long p1))(var291->class->vft[COLOR_core__array__Array__with_native]))(var291, var292, 1l); /* with_native on <var291:Array[Object]>*/
}
}
{
core__file___Sys___printn(var262, var291); /* Direct call file#Sys#printn on <var262:Sys>*/
}
var293 = glob_sys;
if (unlikely(varonce294==NULL)) {
var295 = NEW_core__NativeArray(5l, &type_core__NativeArray__core__String);
if (likely(varonce296!=NULL)) {
var297 = varonce296;
} else {
var298 = "\t";
var299 = core__abstract_text___CString___to_s_full(var298, 1l, 1l);
var297 = var299;
varonce296 = var297;
}
((struct instance_core__NativeArray*)var295)->values[0]=var297;
if (likely(varonce300!=NULL)) {
var301 = varonce300;
} else {
var302 = " (";
var303 = core__abstract_text___CString___to_s_full(var302, 2l, 2l);
var301 = var303;
varonce300 = var301;
}
((struct instance_core__NativeArray*)var295)->values[2]=var301;
if (likely(varonce304!=NULL)) {
var305 = varonce304;
} else {
var306 = "%)";
var307 = core__abstract_text___CString___to_s_full(var306, 2l, 2l);
var305 = var307;
varonce304 = var305;
}
((struct instance_core__NativeArray*)var295)->values[4]=var305;
} else {
var295 = varonce294;
varonce294 = NULL;
}
{
var308 = core___core__HashMap___core__abstract_collection__MapRead___91d_93d(var_count_type_test_total, var_tag196);
}
var310 = (long)(var308)>>2;
var309 = core__flat___Int___core__abstract_text__Object__to_s(var310);
((struct instance_core__NativeArray*)var295)->values[1]=var309;
var311 = glob_sys;
{
var312 = core___core__HashMap___core__abstract_collection__MapRead___91d_93d(var_count_type_test_total, var_tag196);
}
{
var314 = (long)(var312)>>2;
var313 = counter___core__Sys___div(var311, var314, var_count_type_test);
}
((struct instance_core__NativeArray*)var295)->values[3]=var313;
{
var315 = ((val*(*)(val* self))(var295->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var295); /* native_to_s on <var295:NativeArray[String]>*/
}
varonce294 = var295;
var316 = NEW_core__Array(&type_core__Array__core__Object);
{ /* var316 = array_instance Array[Object] */
var317 = NEW_core__NativeArray(1l, &type_core__NativeArray__core__Object);
((struct instance_core__NativeArray*)var317)->values[0] = (val*) var315;
{
((void(*)(val* self, val* p0, long p1))(var316->class->vft[COLOR_core__array__Array__with_native]))(var316, var317, 1l); /* with_native on <var316:Array[Object]>*/
}
}
{
core__file___Sys___printn(var293, var316); /* Direct call file#Sys#printn on <var293:Sys>*/
}
var318 = glob_sys;
if (likely(varonce319!=NULL)) {
var320 = varonce319;
} else {
var321 = "";
var322 = core__abstract_text___CString___to_s_full(var321, 0l, 0l);
var320 = var322;
varonce319 = var320;
}
{
core__file___Sys___print(var318, var320); /* Direct call file#Sys#print on <var318:Sys>*/
}
{
((void(*)(val* self))((((long)var_192&3)?class_info[((long)var_192&3)]:var_192->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_192); /* next on <var_192:IndexedIterator[String]>*/
}
}
BREAK_label194: (void)0;
{
((void(*)(val* self))((((long)var_192&3)?class_info[((long)var_192&3)]:var_192->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_192); /* finish on <var_192:IndexedIterator[String]>*/
}
} else {
}
RET_LABEL:;
}
/* method abstract_compiler#AbstractCompiler#finalize_ffi_for_module for (self: AbstractCompiler, MModule) */
void nitc___nitc__AbstractCompiler___finalize_ffi_for_module(val* self, val* p0) {
val* var_mmodule /* var mmodule: MModule */;
var_mmodule = p0;
{
nitc__compiler_ffi___MModule___finalize_ffi(var_mmodule, self); /* Direct call compiler_ffi#MModule#finalize_ffi on <var_mmodule:MModule>*/
}
RET_LABEL:;
}
/* method abstract_compiler#CodeFile#name for (self: CodeFile): String */
val* nitc___nitc__CodeFile___name(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = self->attrs[COLOR_nitc__abstract_compiler__CodeFile___name].val; /* _name on <self:CodeFile> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1156);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#CodeFile#name= for (self: CodeFile, String) */
void nitc___nitc__CodeFile___name_61d(val* self, val* p0) {
self->attrs[COLOR_nitc__abstract_compiler__CodeFile___name].val = p0; /* _name on <self:CodeFile> */
RET_LABEL:;
}
/* method abstract_compiler#CodeFile#writers for (self: CodeFile): Array[CodeWriter] */
val* nitc___nitc__CodeFile___writers(val* self) {
val* var /* : Array[CodeWriter] */;
val* var1 /* : Array[CodeWriter] */;
var1 = self->attrs[COLOR_nitc__abstract_compiler__CodeFile___writers].val; /* _writers on <self:CodeFile> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _writers");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1159);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#CodeFile#required_declarations for (self: CodeFile): HashSet[String] */
val* nitc___nitc__CodeFile___required_declarations(val* self) {
val* var /* : HashSet[String] */;
val* var1 /* : HashSet[String] */;
var1 = self->attrs[COLOR_nitc__abstract_compiler__CodeFile___required_declarations].val; /* _required_declarations on <self:CodeFile> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _required_declarations");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1162);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#CodeFile#init for (self: CodeFile) */
void nitc___nitc__CodeFile___core__kernel__Object__init(val* self) {
{
((void(*)(val* self))(self->class->vft[COLOR_nitc___nitc__CodeFile___core__kernel__Object__init]))(self); /* init on <self:CodeFile>*/
}
RET_LABEL:;
}
/* method abstract_compiler#CodeWriter#file for (self: CodeWriter): CodeFile */
val* nitc___nitc__CodeWriter___file(val* self) {
val* var /* : CodeFile */;
val* var1 /* : CodeFile */;
var1 = self->attrs[COLOR_nitc__abstract_compiler__CodeWriter___file].val; /* _file on <self:CodeWriter> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _file");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1172);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#CodeWriter#file= for (self: CodeWriter, CodeFile) */
void nitc___nitc__CodeWriter___file_61d(val* self, val* p0) {
self->attrs[COLOR_nitc__abstract_compiler__CodeWriter___file].val = p0; /* _file on <self:CodeWriter> */
RET_LABEL:;
}
/* method abstract_compiler#CodeWriter#lines for (self: CodeWriter): Array[String] */
val* nitc___nitc__CodeWriter___lines(val* self) {
val* var /* : Array[String] */;
val* var1 /* : Array[String] */;
var1 = self->attrs[COLOR_nitc__abstract_compiler__CodeWriter___lines].val; /* _lines on <self:CodeWriter> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _lines");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1175);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#CodeWriter#decl_lines for (self: CodeWriter): Array[String] */
val* nitc___nitc__CodeWriter___decl_lines(val* self) {
val* var /* : Array[String] */;
val* var1 /* : Array[String] */;
var1 = self->attrs[COLOR_nitc__abstract_compiler__CodeWriter___decl_lines].val; /* _decl_lines on <self:CodeWriter> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _decl_lines");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1178);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#CodeWriter#add for (self: CodeWriter, String) */
void nitc___nitc__CodeWriter___add(val* self, val* p0) {
val* var_s /* var s: String */;
val* var /* : Array[String] */;
val* var2 /* : Array[String] */;
var_s = p0;
{
{ /* Inline abstract_compiler#CodeWriter#lines (self) on <self:CodeWriter> */
var2 = self->attrs[COLOR_nitc__abstract_compiler__CodeWriter___lines].val; /* _lines on <self:CodeWriter> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _lines");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1175);
fatal_exit(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var, var_s); /* Direct call array#Array#add on <var:Array[String]>*/
}
RET_LABEL:;
}
/* method abstract_compiler#CodeWriter#add_decl for (self: CodeWriter, String) */
void nitc___nitc__CodeWriter___add_decl(val* self, val* p0) {
val* var_s /* var s: String */;
val* var /* : Array[String] */;
val* var2 /* : Array[String] */;
var_s = p0;
{
{ /* Inline abstract_compiler#CodeWriter#decl_lines (self) on <self:CodeWriter> */
var2 = self->attrs[COLOR_nitc__abstract_compiler__CodeWriter___decl_lines].val; /* _decl_lines on <self:CodeWriter> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _decl_lines");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1178);
fatal_exit(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var, var_s); /* Direct call array#Array#add on <var:Array[String]>*/
}
RET_LABEL:;
}
/* method abstract_compiler#CodeWriter#init for (self: CodeWriter) */
void nitc___nitc__CodeWriter___core__kernel__Object__init(val* self) {
val* var /* : CodeFile */;
val* var2 /* : CodeFile */;
val* var3 /* : Array[CodeWriter] */;
val* var5 /* : Array[CodeWriter] */;
{
((void(*)(val* self))(self->class->vft[COLOR_nitc___nitc__CodeWriter___core__kernel__Object__init]))(self); /* init on <self:CodeWriter>*/
}
{
{ /* Inline abstract_compiler#CodeWriter#file (self) on <self:CodeWriter> */
var2 = self->attrs[COLOR_nitc__abstract_compiler__CodeWriter___file].val; /* _file on <self:CodeWriter> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _file");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1172);
fatal_exit(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
{ /* Inline abstract_compiler#CodeFile#writers (var) on <var:CodeFile> */
var5 = var->attrs[COLOR_nitc__abstract_compiler__CodeFile___writers].val; /* _writers on <var:CodeFile> */
if (unlikely(var5 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _writers");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1159);
fatal_exit(1);
}
var3 = var5;
RET_LABEL4:(void)0;
}
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var3, self); /* Direct call array#Array#add on <var3:Array[CodeWriter]>*/
}
RET_LABEL:;
}
/* method abstract_compiler#AbstractCompilerVisitor#compiler for (self: AbstractCompilerVisitor): AbstractCompiler */
val* nitc___nitc__AbstractCompilerVisitor___compiler(val* self) {
val* var /* : AbstractCompiler */;
val* var1 /* : AbstractCompiler */;
var1 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:AbstractCompilerVisitor> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1200);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AbstractCompilerVisitor#compiler= for (self: AbstractCompilerVisitor, AbstractCompiler) */
void nitc___nitc__AbstractCompilerVisitor___compiler_61d(val* self, val* p0) {
short int var /* : Bool */;
int cltype;
int idtype;
const struct type* type_struct;
const char* var_class_name;
/* Covariant cast for argument 0 (compiler) <p0:AbstractCompiler> isa COMPILER */
/* <p0:AbstractCompiler> isa COMPILER */
type_struct = self->type->resolution_table->types[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor__COMPILER];
cltype = type_struct->color;
idtype = type_struct->id;
if(cltype >= p0->type->table_size) {
var = 0;
} else {
var = p0->type->type_table[cltype] == idtype;
}
if (unlikely(!var)) {
var_class_name = p0 == NULL ? "null" : p0->type->name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "COMPILER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1200);
fatal_exit(1);
}
self->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___compiler].val = p0; /* _compiler on <self:AbstractCompilerVisitor> */
RET_LABEL:;
}
/* method abstract_compiler#AbstractCompilerVisitor#current_node for (self: AbstractCompilerVisitor): nullable ANode */
val* nitc___nitc__AbstractCompilerVisitor___current_node(val* self) {
val* var /* : nullable ANode */;
val* var1 /* : nullable ANode */;
var1 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___current_node].val; /* _current_node on <self:AbstractCompilerVisitor> */
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AbstractCompilerVisitor#current_node= for (self: AbstractCompilerVisitor, nullable ANode) */
void nitc___nitc__AbstractCompilerVisitor___current_node_61d(val* self, val* p0) {
self->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___current_node].val = p0; /* _current_node on <self:AbstractCompilerVisitor> */
RET_LABEL:;
}
/* method abstract_compiler#AbstractCompilerVisitor#frame for (self: AbstractCompilerVisitor): nullable StaticFrame */
val* nitc___nitc__AbstractCompilerVisitor___frame(val* self) {
val* var /* : nullable StaticFrame */;
val* var1 /* : nullable StaticFrame */;
var1 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___frame].val; /* _frame on <self:AbstractCompilerVisitor> */
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AbstractCompilerVisitor#frame= for (self: AbstractCompilerVisitor, nullable StaticFrame) */
void nitc___nitc__AbstractCompilerVisitor___frame_61d(val* self, val* p0) {
self->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___frame].val = p0; /* _frame on <self:AbstractCompilerVisitor> */
RET_LABEL:;
}
/* method abstract_compiler#AbstractCompilerVisitor#object_type for (self: AbstractCompilerVisitor): MClassType */
val* nitc___nitc__AbstractCompilerVisitor___object_type(val* self) {
val* var /* : MClassType */;
val* var1 /* : AbstractCompiler */;
val* var3 /* : AbstractCompiler */;
val* var4 /* : MModule */;
val* var6 /* : MModule */;
val* var7 /* : MClassType */;
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler (self) on <self:AbstractCompilerVisitor> */
var3 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:AbstractCompilerVisitor> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1200);
fatal_exit(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompiler#mainmodule (var1) on <var1:AbstractCompiler> */
var6 = var1->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___mainmodule].val; /* _mainmodule on <var1:AbstractCompiler> */
if (unlikely(var6 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mainmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 531);
fatal_exit(1);
}
var4 = var6;
RET_LABEL5:(void)0;
}
}
{
var7 = nitc__model___MModule___object_type(var4);
}
var = var7;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AbstractCompilerVisitor#bool_type for (self: AbstractCompilerVisitor): MClassType */
val* nitc___nitc__AbstractCompilerVisitor___bool_type(val* self) {
val* var /* : MClassType */;
val* var1 /* : AbstractCompiler */;
val* var3 /* : AbstractCompiler */;
val* var4 /* : MModule */;
val* var6 /* : MModule */;
val* var7 /* : MClassType */;
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler (self) on <self:AbstractCompilerVisitor> */
var3 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:AbstractCompilerVisitor> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1200);
fatal_exit(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompiler#mainmodule (var1) on <var1:AbstractCompiler> */
var6 = var1->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___mainmodule].val; /* _mainmodule on <var1:AbstractCompiler> */
if (unlikely(var6 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mainmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 531);
fatal_exit(1);
}
var4 = var6;
RET_LABEL5:(void)0;
}
}
{
var7 = nitc__model___MModule___bool_type(var4);
}
var = var7;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AbstractCompilerVisitor#writer for (self: AbstractCompilerVisitor): CodeWriter */
val* nitc___nitc__AbstractCompilerVisitor___writer(val* self) {
val* var /* : CodeWriter */;
val* var1 /* : CodeWriter */;
var1 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___writer].val; /* _writer on <self:AbstractCompilerVisitor> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _writer");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1215);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AbstractCompilerVisitor#writer= for (self: AbstractCompilerVisitor, CodeWriter) */
void nitc___nitc__AbstractCompilerVisitor___writer_61d(val* self, val* p0) {
self->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___writer].val = p0; /* _writer on <self:AbstractCompilerVisitor> */
RET_LABEL:;
}
/* method abstract_compiler#AbstractCompilerVisitor#init for (self: AbstractCompilerVisitor) */
void nitc___nitc__AbstractCompilerVisitor___core__kernel__Object__init(val* self) {
val* var /* : CodeWriter */;
val* var1 /* : AbstractCompiler */;
val* var3 /* : AbstractCompiler */;
val* var4 /* : Array[CodeFile] */;
val* var6 /* : Array[CodeFile] */;
val* var7 /* : nullable Object */;
{
((void(*)(val* self))(self->class->vft[COLOR_nitc___nitc__AbstractCompilerVisitor___core__kernel__Object__init]))(self); /* init on <self:AbstractCompilerVisitor>*/
}
var = NEW_nitc__CodeWriter(&type_nitc__CodeWriter);
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler (self) on <self:AbstractCompilerVisitor> */
var3 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:AbstractCompilerVisitor> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1200);
fatal_exit(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompiler#files (var1) on <var1:AbstractCompiler> */
var6 = var1->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___files].val; /* _files on <var1:AbstractCompiler> */
if (unlikely(var6 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _files");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 578);
fatal_exit(1);
}
var4 = var6;
RET_LABEL5:(void)0;
}
}
{
var7 = core___core__SequenceRead___last(var4);
}
{
((void(*)(val* self, val* p0))(var->class->vft[COLOR_nitc__abstract_compiler__CodeWriter__file_61d]))(var, var7); /* file= on <var:CodeWriter>*/
}
{
((void(*)(val* self))(var->class->vft[COLOR_core__kernel__Object__init]))(var); /* init on <var:CodeWriter>*/
}
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#writer= (self,var) on <self:AbstractCompilerVisitor> */
self->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___writer].val = var; /* _writer on <self:AbstractCompilerVisitor> */
RET_LABEL8:(void)0;
}
}
RET_LABEL:;
}
/* method abstract_compiler#AbstractCompilerVisitor#get_property for (self: AbstractCompilerVisitor, String, MType): MMethod */
val* nitc___nitc__AbstractCompilerVisitor___get_property(val* self, val* p0, val* p1) {
val* var /* : MMethod */;
val* var_name /* var name: String */;
val* var_recv /* var recv: MType */;
short int var1 /* : Bool */;
int cltype;
int idtype;
val* var2 /* : AbstractCompiler */;
val* var4 /* : AbstractCompiler */;
val* var5 /* : ModelBuilder */;
val* var7 /* : ModelBuilder */;
val* var8 /* : nullable ANode */;
val* var10 /* : nullable ANode */;
val* var11 /* : MClass */;
val* var13 /* : MClass */;
val* var14 /* : AbstractCompiler */;
val* var16 /* : AbstractCompiler */;
val* var17 /* : MModule */;
val* var19 /* : MModule */;
val* var20 /* : MMethod */;
var_name = p0;
var_recv = p1;
/* <var_recv:MType> isa MClassType */
cltype = type_nitc__MClassType.color;
idtype = type_nitc__MClassType.id;
if(cltype >= var_recv->type->table_size) {
var1 = 0;
} else {
var1 = var_recv->type->type_table[cltype] == idtype;
}
if (unlikely(!var1)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1225);
fatal_exit(1);
}
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler (self) on <self:AbstractCompilerVisitor> */
var4 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:AbstractCompilerVisitor> */
if (unlikely(var4 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1200);
fatal_exit(1);
}
var2 = var4;
RET_LABEL3:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompiler#modelbuilder (var2) on <var2:AbstractCompiler> */
var7 = var2->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___modelbuilder].val; /* _modelbuilder on <var2:AbstractCompiler> */
if (unlikely(var7 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 538);
fatal_exit(1);
}
var5 = var7;
RET_LABEL6:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#current_node (self) on <self:AbstractCompilerVisitor> */
var10 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___current_node].val; /* _current_node on <self:AbstractCompilerVisitor> */
var8 = var10;
RET_LABEL9:(void)0;
}
}
{
{ /* Inline model#MClassType#mclass (var_recv) on <var_recv:MType(MClassType)> */
var13 = var_recv->attrs[COLOR_nitc__model__MClassType___mclass].val; /* _mclass on <var_recv:MType(MClassType)> */
if (unlikely(var13 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1197);
fatal_exit(1);
}
var11 = var13;
RET_LABEL12:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler (self) on <self:AbstractCompilerVisitor> */
var16 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:AbstractCompilerVisitor> */
if (unlikely(var16 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1200);
fatal_exit(1);
}
var14 = var16;
RET_LABEL15:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompiler#mainmodule (var14) on <var14:AbstractCompiler> */
var19 = var14->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___mainmodule].val; /* _mainmodule on <var14:AbstractCompiler> */
if (unlikely(var19 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mainmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 531);
fatal_exit(1);
}
var17 = var19;
RET_LABEL18:(void)0;
}
}
{
var20 = nitc___nitc__ModelBuilder___force_get_primitive_method(var5, var8, var_name, var11, var17);
}
var = var20;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AbstractCompilerVisitor#compile_callsite for (self: AbstractCompilerVisitor, CallSite, Array[RuntimeVariable]): nullable RuntimeVariable */
val* nitc___nitc__AbstractCompilerVisitor___compile_callsite(val* self, val* p0, val* p1) {
val* var /* : nullable RuntimeVariable */;
val* var_callsite /* var callsite: CallSite */;
val* var_arguments /* var arguments: Array[RuntimeVariable] */;
short int var1 /* : Bool */;
short int var3 /* : Bool */;
val* var4 /* : MMethodDef */;
val* var6 /* : MMethodDef */;
val* var7 /* : Array[MProperty] */;
val* var9 /* : Array[MProperty] */;
val* var_initializers /* var initializers: Array[MProperty] */;
short int var10 /* : Bool */;
short int var11 /* : Bool */;
val* var12 /* : nullable Object */;
val* var_recv /* var recv: RuntimeVariable */;
long var_i /* var i: Int */;
val* var_ /* var : Array[MProperty] */;
val* var13 /* : IndexedIterator[nullable Object] */;
val* var_14 /* var : IndexedIterator[MProperty] */;
short int var15 /* : Bool */;
val* var16 /* : nullable Object */;
val* var_p /* var p: MProperty */;
short int var17 /* : Bool */;
int cltype;
int idtype;
val* var18 /* : Array[RuntimeVariable] */;
val* var_19 /* var : Array[RuntimeVariable] */;
val* var_args /* var args: Array[RuntimeVariable] */;
val* var20 /* : MPropDef */;
val* var22 /* : MPropDef */;
val* var23 /* : nullable MSignature */;
val* var25 /* : nullable MSignature */;
val* var26 /* : Array[MParameter] */;
val* var28 /* : Array[MParameter] */;
val* var_29 /* var : Array[MParameter] */;
val* var30 /* : IndexedIterator[nullable Object] */;
val* var_31 /* var : IndexedIterator[MParameter] */;
short int var32 /* : Bool */;
val* var34 /* : nullable Object */;
val* var_x /* var x: MParameter */;
val* var35 /* : nullable Object */;
long var36 /* : Int */;
short int var38 /* : Bool */;
int cltype39;
int idtype40;
const char* var_class_name;
long var41 /* : Int */;
val* var42 /* : nullable RuntimeVariable */;
short int var43 /* : Bool */;
int cltype44;
int idtype45;
val* var46 /* : nullable Object */;
long var47 /* : Int */;
short int var49 /* : Bool */;
int cltype50;
int idtype51;
const char* var_class_name52;
long var53 /* : Int */;
long var54 /* : Int */;
long var56 /* : Int */;
short int var57 /* : Bool */;
short int var59 /* : Bool */;
val* var60 /* : MMethod */;
val* var62 /* : MMethod */;
val* var63 /* : Array[RuntimeVariable] */;
val* var_64 /* var : Array[RuntimeVariable] */;
val* var65 /* : nullable RuntimeVariable */;
val* var66 /* : MMethod */;
val* var68 /* : MMethod */;
val* var69 /* : nullable RuntimeVariable */;
var_callsite = p0;
var_arguments = p1;
{
{ /* Inline model_base#MEntity#is_broken (var_callsite) on <var_callsite:CallSite> */
var3 = var_callsite->attrs[COLOR_nitc__model_base__MEntity___is_broken].s; /* _is_broken on <var_callsite:CallSite> */
var1 = var3;
RET_LABEL2:(void)0;
}
}
if (var1){
var = ((val*)NULL);
goto RET_LABEL;
} else {
}
{
{ /* Inline typing#CallSite#mpropdef (var_callsite) on <var_callsite:CallSite> */
var6 = var_callsite->attrs[COLOR_nitc__typing__CallSite___mpropdef].val; /* _mpropdef on <var_callsite:CallSite> */
if (unlikely(var6 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mpropdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__typing, 659);
fatal_exit(1);
}
var4 = var6;
RET_LABEL5:(void)0;
}
}
{
{ /* Inline model#MMethodDef#initializers (var4) on <var4:MMethodDef> */
var9 = var4->attrs[COLOR_nitc__model__MMethodDef___initializers].val; /* _initializers on <var4:MMethodDef> */
if (unlikely(var9 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _initializers");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2492);
fatal_exit(1);
}
var7 = var9;
RET_LABEL8:(void)0;
}
}
var_initializers = var7;
{
var10 = core___core__AbstractArrayRead___core__abstract_collection__Collection__is_empty(var_initializers);
}
var11 = !var10;
if (var11){
{
var12 = core___core__SequenceRead___Collection__first(var_arguments);
}
var_recv = var12;
var_i = 1l;
var_ = var_initializers;
{
var13 = core___core__AbstractArrayRead___core__abstract_collection__Collection__iterator(var_);
}
var_14 = var13;
for(;;) {
{
var15 = ((short int(*)(val* self))((((long)var_14&3)?class_info[((long)var_14&3)]:var_14->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_14); /* is_ok on <var_14:IndexedIterator[MProperty]>*/
}
if (var15){
} else {
goto BREAK_label;
}
{
var16 = ((val*(*)(val* self))((((long)var_14&3)?class_info[((long)var_14&3)]:var_14->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_14); /* item on <var_14:IndexedIterator[MProperty]>*/
}
var_p = var16;
/* <var_p:MProperty> isa MMethod */
cltype = type_nitc__MMethod.color;
idtype = type_nitc__MMethod.id;
if(cltype >= var_p->type->table_size) {
var17 = 0;
} else {
var17 = var_p->type->type_table[cltype] == idtype;
}
if (var17){
var18 = NEW_core__Array(&type_core__Array__nitc__RuntimeVariable);
{
core___core__Array___with_capacity(var18, 1l); /* Direct call array#Array#with_capacity on <var18:Array[RuntimeVariable]>*/
}
var_19 = var18;
{
core___core__AbstractArray___core__abstract_collection__Sequence__push(var_19, var_recv); /* Direct call array#AbstractArray#push on <var_19:Array[RuntimeVariable]>*/
}
var_args = var_19;
{
{ /* Inline model#MProperty#intro (var_p) on <var_p:MProperty(MMethod)> */
var22 = var_p->attrs[COLOR_nitc__model__MProperty___intro].val; /* _intro on <var_p:MProperty(MMethod)> */
if (unlikely(var22 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _intro");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2097);
fatal_exit(1);
}
var20 = var22;
RET_LABEL21:(void)0;
}
}
{
{ /* Inline model#MMethodDef#msignature (var20) on <var20:MPropDef(MMethodDef)> */
var25 = var20->attrs[COLOR_nitc__model__MMethodDef___msignature].val; /* _msignature on <var20:MPropDef(MMethodDef)> */
var23 = var25;
RET_LABEL24:(void)0;
}
}
if (var23 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1240);
fatal_exit(1);
} else {
{ /* Inline model#MSignature#mparameters (var23) on <var23:nullable MSignature> */
if (unlikely(var23 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1879);
fatal_exit(1);
}
var28 = var23->attrs[COLOR_nitc__model__MSignature___mparameters].val; /* _mparameters on <var23:nullable MSignature> */
if (unlikely(var28 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mparameters");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1879);
fatal_exit(1);
}
var26 = var28;
RET_LABEL27:(void)0;
}
}
var_29 = var26;
{
var30 = core___core__AbstractArrayRead___core__abstract_collection__Collection__iterator(var_29);
}
var_31 = var30;
for(;;) {
{
var32 = ((short int(*)(val* self))((((long)var_31&3)?class_info[((long)var_31&3)]:var_31->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_31); /* is_ok on <var_31:IndexedIterator[MParameter]>*/
}
if (var32){
} else {
goto BREAK_label33;
}
{
var34 = ((val*(*)(val* self))((((long)var_31&3)?class_info[((long)var_31&3)]:var_31->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_31); /* item on <var_31:IndexedIterator[MParameter]>*/
}
var_x = var34;
{
var35 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, var_i);
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_args, var35); /* Direct call array#Array#add on <var_args:Array[RuntimeVariable]>*/
}
{
{ /* Inline kernel#Int#+ (var_i,1l) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var38 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var38)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var41 = var_i + 1l;
var36 = var41;
goto RET_LABEL37;
RET_LABEL37:(void)0;
}
}
var_i = var36;
{
((void(*)(val* self))((((long)var_31&3)?class_info[((long)var_31&3)]:var_31->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_31); /* next on <var_31:IndexedIterator[MParameter]>*/
}
}
BREAK_label33: (void)0;
{
((void(*)(val* self))((((long)var_31&3)?class_info[((long)var_31&3)]:var_31->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_31); /* finish on <var_31:IndexedIterator[MParameter]>*/
}
{
var42 = ((val*(*)(val* self, val* p0, val* p1))(self->class->vft[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor__send]))(self, var_p, var_args); /* send on <self:AbstractCompilerVisitor>*/
}
} else {
/* <var_p:MProperty> isa MAttribute */
cltype44 = type_nitc__MAttribute.color;
idtype45 = type_nitc__MAttribute.id;
if(cltype44 >= var_p->type->table_size) {
var43 = 0;
} else {
var43 = var_p->type->type_table[cltype44] == idtype45;
}
if (var43){
{
var46 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, var_i);
}
{
((void(*)(val* self, val* p0, val* p1, val* p2))(self->class->vft[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor__write_attribute]))(self, var_p, var_recv, var46); /* write_attribute on <self:AbstractCompilerVisitor>*/
}
{
{ /* Inline kernel#Int#+ (var_i,1l) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var49 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var49)) {
var_class_name52 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name52);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var53 = var_i + 1l;
var47 = var53;
goto RET_LABEL48;
RET_LABEL48:(void)0;
}
}
var_i = var47;
} else {
PRINT_ERROR("Runtime error: %s", "Aborted");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1248);
fatal_exit(1);
}
}
{
((void(*)(val* self))((((long)var_14&3)?class_info[((long)var_14&3)]:var_14->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_14); /* next on <var_14:IndexedIterator[MProperty]>*/
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_14&3)?class_info[((long)var_14&3)]:var_14->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_14); /* finish on <var_14:IndexedIterator[MProperty]>*/
}
{
{ /* Inline array#AbstractArrayRead#length (var_arguments) on <var_arguments:Array[RuntimeVariable]> */
var56 = var_arguments->attrs[COLOR_core__array__AbstractArrayRead___length].l; /* _length on <var_arguments:Array[RuntimeVariable]> */
var54 = var56;
RET_LABEL55:(void)0;
}
}
{
{ /* Inline kernel#Int#== (var_i,var54) on <var_i:Int> */
var59 = var_i == var54;
var57 = var59;
goto RET_LABEL58;
RET_LABEL58:(void)0;
}
}
if (unlikely(!var57)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1250);
fatal_exit(1);
}
{
{ /* Inline typing#CallSite#mproperty (var_callsite) on <var_callsite:CallSite> */
var62 = var_callsite->attrs[COLOR_nitc__typing__CallSite___mproperty].val; /* _mproperty on <var_callsite:CallSite> */
if (unlikely(var62 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__typing, 656);
fatal_exit(1);
}
var60 = var62;
RET_LABEL61:(void)0;
}
}
var63 = NEW_core__Array(&type_core__Array__nitc__RuntimeVariable);
{
core___core__Array___with_capacity(var63, 1l); /* Direct call array#Array#with_capacity on <var63:Array[RuntimeVariable]>*/
}
var_64 = var63;
{
core___core__AbstractArray___core__abstract_collection__Sequence__push(var_64, var_recv); /* Direct call array#AbstractArray#push on <var_64:Array[RuntimeVariable]>*/
}
{
var65 = ((val*(*)(val* self, val* p0, val* p1))(self->class->vft[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor__send]))(self, var60, var_64); /* send on <self:AbstractCompilerVisitor>*/
}
var = var65;
goto RET_LABEL;
} else {
}
{
{ /* Inline typing#CallSite#mproperty (var_callsite) on <var_callsite:CallSite> */
var68 = var_callsite->attrs[COLOR_nitc__typing__CallSite___mproperty].val; /* _mproperty on <var_callsite:CallSite> */
if (unlikely(var68 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__typing, 656);
fatal_exit(1);
}
var66 = var68;
RET_LABEL67:(void)0;
}
}
{
var69 = ((val*(*)(val* self, val* p0, val* p1))(self->class->vft[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor__send]))(self, var66, var_arguments); /* send on <self:AbstractCompilerVisitor>*/
}
var = var69;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AbstractCompilerVisitor#nit_alloc for (self: AbstractCompilerVisitor, String, nullable String): String */
val* nitc___nitc__AbstractCompilerVisitor___nit_alloc(val* self, val* p0, val* p1) {
val* var /* : String */;
val* var_size /* var size: String */;
val* var_tag /* var tag: nullable String */;
val* var1 /* : NativeArray[String] */;
static val* varonce;
static val* varonce2;
val* var3 /* : String */;
char* var4 /* : CString */;
val* var5 /* : String */;
static val* varonce6;
val* var7 /* : String */;
char* var8 /* : CString */;
val* var9 /* : String */;
val* var10 /* : String */;
var_size = p0;
var_tag = p1;
if (unlikely(varonce==NULL)) {
var1 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce2!=NULL)) {
var3 = varonce2;
} else {
var4 = "nit_alloc(";
var5 = core__abstract_text___CString___to_s_full(var4, 10l, 10l);
var3 = var5;
varonce2 = var3;
}
((struct instance_core__NativeArray*)var1)->values[0]=var3;
if (likely(varonce6!=NULL)) {
var7 = varonce6;
} else {
var8 = ")";
var9 = core__abstract_text___CString___to_s_full(var8, 1l, 1l);
var7 = var9;
varonce6 = var7;
}
((struct instance_core__NativeArray*)var1)->values[2]=var7;
} else {
var1 = varonce;
varonce = NULL;
}
((struct instance_core__NativeArray*)var1)->values[1]=var_size;
{
var10 = ((val*(*)(val* self))(var1->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var1); /* native_to_s on <var1:NativeArray[String]>*/
}
varonce = var1;
var = var10;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AbstractCompilerVisitor#varargize for (self: AbstractCompilerVisitor, MMethodDef, nullable SignatureMap, RuntimeVariable, SequenceRead[AExpr]): Array[RuntimeVariable] */
val* nitc___nitc__AbstractCompilerVisitor___varargize(val* self, val* p0, val* p1, val* p2, val* p3) {
val* var /* : Array[RuntimeVariable] */;
val* var_mpropdef /* var mpropdef: MMethodDef */;
val* var_map /* var map: nullable SignatureMap */;
val* var_recv /* var recv: RuntimeVariable */;
val* var_args /* var args: SequenceRead[AExpr] */;
val* var1 /* : MSignature */;
val* var2 /* : nullable MSignature */;
val* var4 /* : nullable MSignature */;
val* var5 /* : nullable MSignature */;
val* var7 /* : nullable MSignature */;
val* var_msignature /* var msignature: MSignature */;
val* var8 /* : Array[RuntimeVariable] */;
val* var_res /* var res: Array[RuntimeVariable] */;
long var9 /* : Int */;
short int var10 /* : Bool */;
short int var12 /* : Bool */;
short int var13 /* : Bool */;
short int var14 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var16 /* : Bool */;
short int var18 /* : Bool */;
long var19 /* : Int */;
long var20 /* : Int */;
short int var21 /* : Bool */;
short int var23 /* : Bool */;
val* var_ /* var : SequenceRead[AExpr] */;
val* var24 /* : Iterator[nullable Object] */;
val* var_25 /* var : IndexedIterator[AExpr] */;
short int var26 /* : Bool */;
val* var27 /* : nullable Object */;
val* var_ne /* var ne: AExpr */;
val* var28 /* : RuntimeVariable */;
val* var29 /* : Array[RuntimeVariable] */;
long var30 /* : Int */;
val* var_exprs /* var exprs: Array[RuntimeVariable] */;
val* var_31 /* var : SequenceRead[AExpr] */;
val* var32 /* : Iterator[nullable Object] */;
val* var_33 /* var : IndexedIterator[AExpr] */;
short int var34 /* : Bool */;
val* var36 /* : nullable Object */;
val* var_ne37 /* var ne: AExpr */;
val* var38 /* : RuntimeVariable */;
long var_i /* var i: Int */;
long var39 /* : Int */;
long var_40 /* var : Int */;
short int var41 /* : Bool */;
short int var43 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var44 /* : Bool */;
val* var46 /* : Array[MParameter] */;
val* var48 /* : Array[MParameter] */;
val* var49 /* : nullable Object */;
val* var_param /* var param: MParameter */;
val* var50 /* : ArrayMap[Int, Int] */;
val* var52 /* : ArrayMap[Int, Int] */;
val* var53 /* : nullable Object */;
val* var54 /* : nullable Object */;
val* var_j /* var j: nullable Int */;
short int var55 /* : Bool */;
short int var56 /* : Bool */;
short int var58 /* : Bool */;
val* var59 /* : RuntimeVariable */;
short int var61 /* : Bool */;
short int var62 /* : Bool */;
short int var64 /* : Bool */;
short int var_65 /* var : Bool */;
val* var66 /* : nullable Object */;
long var67 /* : Int */;
long var69 /* : Int */;
short int var70 /* : Bool */;
short int var72 /* : Bool */;
int cltype73;
int idtype74;
const char* var_class_name75;
short int var76 /* : Bool */;
val* var77 /* : nullable Object */;
long var78 /* : Int */;
long var80 /* : Int */;
val* var81 /* : Array[nullable Object] */;
long var82 /* : Int */;
val* var_vararg /* var vararg: Array[RuntimeVariable] */;
val* var83 /* : MType */;
val* var85 /* : MType */;
val* var_elttype /* var elttype: MType */;
val* var86 /* : RuntimeVariable */;
val* var_arg /* var arg: RuntimeVariable */;
val* var87 /* : nullable Object */;
long var88 /* : Int */;
long var89 /* : Int */;
var_mpropdef = p0;
var_map = p1;
var_recv = p2;
var_args = p3;
{
{ /* Inline model#MMethodDef#new_msignature (var_mpropdef) on <var_mpropdef:MMethodDef> */
var4 = var_mpropdef->attrs[COLOR_nitc__model__MMethodDef___new_msignature].val; /* _new_msignature on <var_mpropdef:MMethodDef> */
var2 = var4;
RET_LABEL3:(void)0;
}
}
if (var2!=NULL) {
var1 = var2;
} else {
{
{ /* Inline model#MMethodDef#msignature (var_mpropdef) on <var_mpropdef:MMethodDef> */
var7 = var_mpropdef->attrs[COLOR_nitc__model__MMethodDef___msignature].val; /* _msignature on <var_mpropdef:MMethodDef> */
var5 = var7;
RET_LABEL6:(void)0;
}
}
if (unlikely(var5 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1285);
fatal_exit(1);
}
var1 = var5;
}
var_msignature = var1;
var8 = NEW_core__Array(&type_core__Array__nitc__RuntimeVariable);
{
core___core__Array___core__kernel__Object__init(var8); /* Direct call array#Array#init on <var8:Array[RuntimeVariable]>*/
}
var_res = var8;
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_res, var_recv); /* Direct call array#Array#add on <var_res:Array[RuntimeVariable]>*/
}
{
var9 = nitc___nitc__MSignature___arity(var_msignature);
}
{
{ /* Inline kernel#Int#== (var9,0l) on <var9:Int> */
var12 = var9 == 0l;
var10 = var12;
goto RET_LABEL11;
RET_LABEL11:(void)0;
}
}
if (var10){
var = var_res;
goto RET_LABEL;
} else {
}
if (var_map == NULL) {
var13 = 1; /* is null */
} else {
var13 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_map,((val*)NULL)) on <var_map:nullable SignatureMap> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_map,var_other) on <var_map:nullable SignatureMap(SignatureMap)> */
var18 = var_map == var_other;
var16 = var18;
goto RET_LABEL17;
RET_LABEL17:(void)0;
}
}
var14 = var16;
goto RET_LABEL15;
RET_LABEL15:(void)0;
}
var13 = var14;
}
if (var13){
{
var19 = ((long(*)(val* self))((((long)var_args&3)?class_info[((long)var_args&3)]:var_args->class)->vft[COLOR_core__abstract_collection__Collection__length]))(var_args); /* length on <var_args:SequenceRead[AExpr]>*/
}
{
var20 = nitc___nitc__MSignature___arity(var_msignature);
}
{
{ /* Inline kernel#Int#== (var19,var20) on <var19:Int> */
var23 = var19 == var20;
var21 = var23;
goto RET_LABEL22;
RET_LABEL22:(void)0;
}
}
if (unlikely(!var21)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1292);
fatal_exit(1);
}
var_ = var_args;
{
var24 = ((val*(*)(val* self))((((long)var_&3)?class_info[((long)var_&3)]:var_->class)->vft[COLOR_core__abstract_collection__Collection__iterator]))(var_); /* iterator on <var_:SequenceRead[AExpr]>*/
}
var_25 = var24;
for(;;) {
{
var26 = ((short int(*)(val* self))((((long)var_25&3)?class_info[((long)var_25&3)]:var_25->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_25); /* is_ok on <var_25:IndexedIterator[AExpr]>*/
}
if (var26){
} else {
goto BREAK_label;
}
{
var27 = ((val*(*)(val* self))((((long)var_25&3)?class_info[((long)var_25&3)]:var_25->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_25); /* item on <var_25:IndexedIterator[AExpr]>*/
}
var_ne = var27;
{
var28 = nitc___nitc__AbstractCompilerVisitor___expr(self, var_ne, ((val*)NULL));
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_res, var28); /* Direct call array#Array#add on <var_res:Array[RuntimeVariable]>*/
}
{
((void(*)(val* self))((((long)var_25&3)?class_info[((long)var_25&3)]:var_25->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_25); /* next on <var_25:IndexedIterator[AExpr]>*/
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_25&3)?class_info[((long)var_25&3)]:var_25->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_25); /* finish on <var_25:IndexedIterator[AExpr]>*/
}
var = var_res;
goto RET_LABEL;
} else {
}
var29 = NEW_core__Array(&type_core__Array__nitc__RuntimeVariable);
{
var30 = ((long(*)(val* self))((((long)var_args&3)?class_info[((long)var_args&3)]:var_args->class)->vft[COLOR_core__abstract_collection__Collection__length]))(var_args); /* length on <var_args:SequenceRead[AExpr]>*/
}
{
core___core__Array___with_capacity(var29, var30); /* Direct call array#Array#with_capacity on <var29:Array[RuntimeVariable]>*/
}
var_exprs = var29;
var_31 = var_args;
{
var32 = ((val*(*)(val* self))((((long)var_31&3)?class_info[((long)var_31&3)]:var_31->class)->vft[COLOR_core__abstract_collection__Collection__iterator]))(var_31); /* iterator on <var_31:SequenceRead[AExpr]>*/
}
var_33 = var32;
for(;;) {
{
var34 = ((short int(*)(val* self))((((long)var_33&3)?class_info[((long)var_33&3)]:var_33->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_33); /* is_ok on <var_33:IndexedIterator[AExpr]>*/
}
if (var34){
} else {
goto BREAK_label35;
}
{
var36 = ((val*(*)(val* self))((((long)var_33&3)?class_info[((long)var_33&3)]:var_33->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_33); /* item on <var_33:IndexedIterator[AExpr]>*/
}
var_ne37 = var36;
{
var38 = nitc___nitc__AbstractCompilerVisitor___expr(self, var_ne37, ((val*)NULL));
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_exprs, var38); /* Direct call array#Array#add on <var_exprs:Array[RuntimeVariable]>*/
}
{
((void(*)(val* self))((((long)var_33&3)?class_info[((long)var_33&3)]:var_33->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_33); /* next on <var_33:IndexedIterator[AExpr]>*/
}
}
BREAK_label35: (void)0;
{
((void(*)(val* self))((((long)var_33&3)?class_info[((long)var_33&3)]:var_33->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_33); /* finish on <var_33:IndexedIterator[AExpr]>*/
}
var_i = 0l;
{
var39 = nitc___nitc__MSignature___arity(var_msignature);
}
var_40 = var39;
for(;;) {
{
{ /* Inline kernel#Int#< (var_i,var_40) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var_40:Int> isa OTHER */
/* <var_40:Int> isa OTHER */
var43 = 1; /* easy <var_40:Int> isa OTHER*/
if (unlikely(!var43)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var44 = var_i < var_40;
var41 = var44;
goto RET_LABEL42;
RET_LABEL42:(void)0;
}
}
if (var41){
} else {
goto BREAK_label45;
}
{
{ /* Inline model#MSignature#mparameters (var_msignature) on <var_msignature:MSignature> */
var48 = var_msignature->attrs[COLOR_nitc__model__MSignature___mparameters].val; /* _mparameters on <var_msignature:MSignature> */
if (unlikely(var48 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mparameters");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1879);
fatal_exit(1);
}
var46 = var48;
RET_LABEL47:(void)0;
}
}
{
var49 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var46, var_i);
}
var_param = var49;
{
{ /* Inline typing#SignatureMap#map (var_map) on <var_map:nullable SignatureMap(SignatureMap)> */
var52 = var_map->attrs[COLOR_nitc__typing__SignatureMap___map].val; /* _map on <var_map:nullable SignatureMap(SignatureMap)> */
if (unlikely(var52 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _map");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__typing, 632);
fatal_exit(1);
}
var50 = var52;
RET_LABEL51:(void)0;
}
}
{
var54 = (val*)(var_i<<2|1);
var53 = core___core__MapRead___get_or_null(var50, var54);
}
var_j = var53;
if (var_j == NULL) {
var55 = 1; /* is null */
} else {
var55 = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Int#== (var_j,((val*)NULL)) on <var_j:nullable Int> */
var58 = 0; /* incompatible types Int vs. null; cannot be NULL */
var56 = var58;
goto RET_LABEL57;
RET_LABEL57:(void)0;
}
var55 = var56;
}
if (var55){
{
var59 = nitc___nitc__AbstractCompilerVisitor___null_instance(self);
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_res, var59); /* Direct call array#Array#add on <var_res:Array[RuntimeVariable]>*/
}
goto BREAK_label60;
} else {
}
{
{ /* Inline model#MParameter#is_vararg (var_param) on <var_param:MParameter> */
var64 = var_param->attrs[COLOR_nitc__model__MParameter___is_vararg].s; /* _is_vararg on <var_param:MParameter> */
var62 = var64;
RET_LABEL63:(void)0;
}
}
var_65 = var62;
if (var62){
{
var66 = ((val*(*)(val* self, long p0))((((long)var_args&3)?class_info[((long)var_args&3)]:var_args->class)->vft[COLOR_core__abstract_collection__SequenceRead___91d_93d]))(var_args, var_i); /* [] on <var_args:SequenceRead[AExpr]>*/
}
{
{ /* Inline typing#AExpr#vararg_decl (var66) on <var66:nullable Object(AExpr)> */
var69 = var66->attrs[COLOR_nitc__typing__AExpr___vararg_decl].l; /* _vararg_decl on <var66:nullable Object(AExpr)> */
var67 = var69;
RET_LABEL68:(void)0;
}
}
{
{ /* Inline kernel#Int#> (var67,0l) on <var67:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var72 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var72)) {
var_class_name75 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name75);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 727);
fatal_exit(1);
}
var76 = var67 > 0l;
var70 = var76;
goto RET_LABEL71;
RET_LABEL71:(void)0;
}
}
var61 = var70;
} else {
var61 = var_65;
}
if (var61){
{
var77 = ((val*(*)(val* self, long p0))((((long)var_args&3)?class_info[((long)var_args&3)]:var_args->class)->vft[COLOR_core__abstract_collection__SequenceRead___91d_93d]))(var_args, var_i); /* [] on <var_args:SequenceRead[AExpr]>*/
}
{
{ /* Inline typing#AExpr#vararg_decl (var77) on <var77:nullable Object(AExpr)> */
var80 = var77->attrs[COLOR_nitc__typing__AExpr___vararg_decl].l; /* _vararg_decl on <var77:nullable Object(AExpr)> */
var78 = var80;
RET_LABEL79:(void)0;
}
}
{
var82 = (long)(var_j)>>2;
var81 = core___core__AbstractArrayRead___sub(var_exprs, var82, var78);
}
var_vararg = var81;
{
{ /* Inline model#MParameter#mtype (var_param) on <var_param:MParameter> */
var85 = var_param->attrs[COLOR_nitc__model__MParameter___mtype].val; /* _mtype on <var_param:MParameter> */
if (unlikely(var85 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1996);
fatal_exit(1);
}
var83 = var85;
RET_LABEL84:(void)0;
}
}
var_elttype = var83;
{
var86 = ((val*(*)(val* self, val* p0, val* p1, val* p2, val* p3))(self->class->vft[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor__vararg_instance]))(self, var_mpropdef, var_recv, var_vararg, var_elttype); /* vararg_instance on <self:AbstractCompilerVisitor>*/
}
var_arg = var86;
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_res, var_arg); /* Direct call array#Array#add on <var_res:Array[RuntimeVariable]>*/
}
goto BREAK_label60;
} else {
}
{
var88 = (long)(var_j)>>2;
var87 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_exprs, var88);
}
{
core___core__Array___core__abstract_collection__SimpleCollection__add(var_res, var87); /* Direct call array#Array#add on <var_res:Array[RuntimeVariable]>*/
}
BREAK_label60: (void)0;
{
var89 = core___core__Int___Discrete__successor(var_i, 1l);
}
var_i = var89;
}
BREAK_label45: (void)0;
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AbstractCompilerVisitor#anchor for (self: AbstractCompilerVisitor, MType): MType */
val* nitc___nitc__AbstractCompilerVisitor___anchor(val* self, val* p0) {
val* var /* : MType */;
val* var_mtype /* var mtype: MType */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var3 /* : AbstractCompiler */;
val* var5 /* : AbstractCompiler */;
val* var6 /* : MModule */;
val* var8 /* : MModule */;
val* var9 /* : nullable StaticFrame */;
val* var11 /* : nullable StaticFrame */;
val* var12 /* : MClassType */;
val* var14 /* : MClassType */;
val* var15 /* : MType */;
var_mtype = p0;
{
var1 = ((short int(*)(val* self))(var_mtype->class->vft[COLOR_nitc__model__MType__need_anchor]))(var_mtype); /* need_anchor on <var_mtype:MType>*/
}
var2 = !var1;
if (var2){
var = var_mtype;
goto RET_LABEL;
} else {
}
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler (self) on <self:AbstractCompilerVisitor> */
var5 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:AbstractCompilerVisitor> */
if (unlikely(var5 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1200);
fatal_exit(1);
}
var3 = var5;
RET_LABEL4:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompiler#mainmodule (var3) on <var3:AbstractCompiler> */
var8 = var3->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___mainmodule].val; /* _mainmodule on <var3:AbstractCompiler> */
if (unlikely(var8 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mainmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 531);
fatal_exit(1);
}
var6 = var8;
RET_LABEL7:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#frame (self) on <self:AbstractCompilerVisitor> */
var11 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___frame].val; /* _frame on <self:AbstractCompilerVisitor> */
var9 = var11;
RET_LABEL10:(void)0;
}
}
if (var9 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1332);
fatal_exit(1);
} else {
{ /* Inline abstract_compiler#StaticFrame#receiver (var9) on <var9:nullable StaticFrame> */
if (unlikely(var9 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2017);
fatal_exit(1);
}
var14 = var9->attrs[COLOR_nitc__abstract_compiler__StaticFrame___receiver].val; /* _receiver on <var9:nullable StaticFrame> */
if (unlikely(var14 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _receiver");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2017);
fatal_exit(1);
}
var12 = var14;
RET_LABEL13:(void)0;
}
}
{
var15 = ((val*(*)(val* self, val* p0, val* p1))(var_mtype->class->vft[COLOR_nitc__model__MType__anchor_to]))(var_mtype, var6, var12); /* anchor_to on <var_mtype:MType>*/
}
var = var15;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AbstractCompilerVisitor#resolve_for for (self: AbstractCompilerVisitor, MType, RuntimeVariable): MType */
val* nitc___nitc__AbstractCompilerVisitor___resolve_for(val* self, val* p0, val* p1) {
val* var /* : MType */;
val* var_mtype /* var mtype: MType */;
val* var_recv /* var recv: RuntimeVariable */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var3 /* : MType */;
val* var5 /* : MType */;
val* var6 /* : nullable StaticFrame */;
val* var8 /* : nullable StaticFrame */;
val* var9 /* : MClassType */;
val* var11 /* : MClassType */;
val* var12 /* : AbstractCompiler */;
val* var14 /* : AbstractCompiler */;
val* var15 /* : MModule */;
val* var17 /* : MModule */;
val* var18 /* : MType */;
var_mtype = p0;
var_recv = p1;
{
var1 = ((short int(*)(val* self))(var_mtype->class->vft[COLOR_nitc__model__MType__need_anchor]))(var_mtype); /* need_anchor on <var_mtype:MType>*/
}
var2 = !var1;
if (var2){
var = var_mtype;
goto RET_LABEL;
} else {
}
{
{ /* Inline abstract_compiler#RuntimeVariable#mcasttype (var_recv) on <var_recv:RuntimeVariable> */
var5 = var_recv->attrs[COLOR_nitc__abstract_compiler__RuntimeVariable___mcasttype].val; /* _mcasttype on <var_recv:RuntimeVariable> */
if (unlikely(var5 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mcasttype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1972);
fatal_exit(1);
}
var3 = var5;
RET_LABEL4:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#frame (self) on <self:AbstractCompilerVisitor> */
var8 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___frame].val; /* _frame on <self:AbstractCompilerVisitor> */
var6 = var8;
RET_LABEL7:(void)0;
}
}
if (var6 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1338);
fatal_exit(1);
} else {
{ /* Inline abstract_compiler#StaticFrame#receiver (var6) on <var6:nullable StaticFrame> */
if (unlikely(var6 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2017);
fatal_exit(1);
}
var11 = var6->attrs[COLOR_nitc__abstract_compiler__StaticFrame___receiver].val; /* _receiver on <var6:nullable StaticFrame> */
if (unlikely(var11 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _receiver");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2017);
fatal_exit(1);
}
var9 = var11;
RET_LABEL10:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler (self) on <self:AbstractCompilerVisitor> */
var14 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:AbstractCompilerVisitor> */
if (unlikely(var14 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1200);
fatal_exit(1);
}
var12 = var14;
RET_LABEL13:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompiler#mainmodule (var12) on <var12:AbstractCompiler> */
var17 = var12->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___mainmodule].val; /* _mainmodule on <var12:AbstractCompiler> */
if (unlikely(var17 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mainmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 531);
fatal_exit(1);
}
var15 = var17;
RET_LABEL16:(void)0;
}
}
{
var18 = ((val*(*)(val* self, val* p0, val* p1, val* p2, short int p3))(var_mtype->class->vft[COLOR_nitc__model__MType__resolve_for]))(var_mtype, var3, var9, var15, 1); /* resolve_for on <var_mtype:MType>*/
}
var = var18;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AbstractCompilerVisitor#autoadapt for (self: AbstractCompilerVisitor, RuntimeVariable, MType): RuntimeVariable */
val* nitc___nitc__AbstractCompilerVisitor___autoadapt(val* self, val* p0, val* p1) {
val* var /* : RuntimeVariable */;
val* var_value /* var value: RuntimeVariable */;
val* var_mtype /* var mtype: MType */;
val* var1 /* : MType */;
val* var2 /* : MType */;
val* var4 /* : MType */;
val* var_valmtype /* var valmtype: MType */;
val* var5 /* : AbstractCompiler */;
val* var7 /* : AbstractCompiler */;
val* var8 /* : MModule */;
val* var10 /* : MModule */;
short int var11 /* : Bool */;
short int var12 /* : Bool */;
short int var13 /* : Bool */;
int cltype;
int idtype;
short int var_ /* var : Bool */;
val* var14 /* : MType */;
val* var16 /* : MType */;
val* var17 /* : AbstractCompiler */;
val* var19 /* : AbstractCompiler */;
val* var20 /* : MModule */;
val* var22 /* : MModule */;
short int var23 /* : Bool */;
val* var24 /* : MType */;
val* var26 /* : MType */;
val* var27 /* : RuntimeVariable */;
val* var28 /* : String */;
val* var30 /* : String */;
val* var31 /* : MType */;
val* var33 /* : MType */;
val* var_res /* var res: RuntimeVariable */;
var_value = p0;
var_mtype = p1;
{
var1 = nitc___nitc__AbstractCompilerVisitor___anchor(self, var_mtype);
}
var_mtype = var1;
{
{ /* Inline abstract_compiler#RuntimeVariable#mcasttype (var_value) on <var_value:RuntimeVariable> */
var4 = var_value->attrs[COLOR_nitc__abstract_compiler__RuntimeVariable___mcasttype].val; /* _mcasttype on <var_value:RuntimeVariable> */
if (unlikely(var4 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mcasttype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1972);
fatal_exit(1);
}
var2 = var4;
RET_LABEL3:(void)0;
}
}
var_valmtype = var2;
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler (self) on <self:AbstractCompilerVisitor> */
var7 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:AbstractCompilerVisitor> */
if (unlikely(var7 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1200);
fatal_exit(1);
}
var5 = var7;
RET_LABEL6:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompiler#mainmodule (var5) on <var5:AbstractCompiler> */
var10 = var5->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___mainmodule].val; /* _mainmodule on <var5:AbstractCompiler> */
if (unlikely(var10 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mainmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 531);
fatal_exit(1);
}
var8 = var10;
RET_LABEL9:(void)0;
}
}
{
var11 = nitc___nitc__MType___is_subtype(var_valmtype, var8, ((val*)NULL), var_mtype);
}
if (var11){
var = var_value;
goto RET_LABEL;
} else {
}
/* <var_valmtype:MType> isa MNullableType */
cltype = type_nitc__MNullableType.color;
idtype = type_nitc__MNullableType.id;
if(cltype >= var_valmtype->type->table_size) {
var13 = 0;
} else {
var13 = var_valmtype->type->type_table[cltype] == idtype;
}
var_ = var13;
if (var13){
{
{ /* Inline model#MProxyType#mtype (var_valmtype) on <var_valmtype:MType(MNullableType)> */
var16 = var_valmtype->attrs[COLOR_nitc__model__MProxyType___mtype].val; /* _mtype on <var_valmtype:MType(MNullableType)> */
if (unlikely(var16 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1689);
fatal_exit(1);
}
var14 = var16;
RET_LABEL15:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler (self) on <self:AbstractCompilerVisitor> */
var19 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:AbstractCompilerVisitor> */
if (unlikely(var19 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1200);
fatal_exit(1);
}
var17 = var19;
RET_LABEL18:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompiler#mainmodule (var17) on <var17:AbstractCompiler> */
var22 = var17->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___mainmodule].val; /* _mainmodule on <var17:AbstractCompiler> */
if (unlikely(var22 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mainmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 531);
fatal_exit(1);
}
var20 = var22;
RET_LABEL21:(void)0;
}
}
{
var23 = nitc___nitc__MType___is_subtype(var14, var20, ((val*)NULL), var_mtype);
}
var12 = var23;
} else {
var12 = var_;
}
if (var12){
{
{ /* Inline model#MProxyType#mtype (var_valmtype) on <var_valmtype:MType(MNullableType)> */
var26 = var_valmtype->attrs[COLOR_nitc__model__MProxyType___mtype].val; /* _mtype on <var_valmtype:MType(MNullableType)> */
if (unlikely(var26 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1689);
fatal_exit(1);
}
var24 = var26;
RET_LABEL25:(void)0;
}
}
var_mtype = var24;
} else {
}
var27 = NEW_nitc__RuntimeVariable(&type_nitc__RuntimeVariable);
{
{ /* Inline abstract_compiler#RuntimeVariable#name (var_value) on <var_value:RuntimeVariable> */
var30 = var_value->attrs[COLOR_nitc__abstract_compiler__RuntimeVariable___name].val; /* _name on <var_value:RuntimeVariable> */
if (unlikely(var30 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1966);
fatal_exit(1);
}
var28 = var30;
RET_LABEL29:(void)0;
}
}
{
{ /* Inline abstract_compiler#RuntimeVariable#mtype (var_value) on <var_value:RuntimeVariable> */
var33 = var_value->attrs[COLOR_nitc__abstract_compiler__RuntimeVariable___mtype].val; /* _mtype on <var_value:RuntimeVariable> */
if (unlikely(var33 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1969);
fatal_exit(1);
}
var31 = var33;
RET_LABEL32:(void)0;
}
}
{
((void(*)(val* self, val* p0))(var27->class->vft[COLOR_nitc__abstract_compiler__RuntimeVariable__name_61d]))(var27, var28); /* name= on <var27:RuntimeVariable>*/
}
{
((void(*)(val* self, val* p0))(var27->class->vft[COLOR_nitc__abstract_compiler__RuntimeVariable__mtype_61d]))(var27, var31); /* mtype= on <var27:RuntimeVariable>*/
}
{
((void(*)(val* self, val* p0))(var27->class->vft[COLOR_nitc__abstract_compiler__RuntimeVariable__mcasttype_61d]))(var27, var_mtype); /* mcasttype= on <var27:RuntimeVariable>*/
}
{
((void(*)(val* self))(var27->class->vft[COLOR_core__kernel__Object__init]))(var27); /* init on <var27:RuntimeVariable>*/
}
var_res = var27;
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AbstractCompilerVisitor#monomorphic_send for (self: AbstractCompilerVisitor, MMethod, MType, Array[RuntimeVariable]): nullable RuntimeVariable */
val* nitc___nitc__AbstractCompilerVisitor___monomorphic_send(val* self, val* p0, val* p1, val* p2) {
val* var /* : nullable RuntimeVariable */;
val* var_m /* var m: MMethod */;
val* var_t /* var t: MType */;
val* var_args /* var args: Array[RuntimeVariable] */;
short int var1 /* : Bool */;
int cltype;
int idtype;
val* var2 /* : AbstractCompiler */;
val* var4 /* : AbstractCompiler */;
val* var5 /* : MModule */;
val* var7 /* : MModule */;
val* var8 /* : MPropDef */;
val* var_propdef /* var propdef: MMethodDef */;
val* var9 /* : nullable RuntimeVariable */;
var_m = p0;
var_t = p1;
var_args = p2;
/* <var_t:MType> isa MClassType */
cltype = type_nitc__MClassType.color;
idtype = type_nitc__MClassType.id;
if(cltype >= var_t->type->table_size) {
var1 = 0;
} else {
var1 = var_t->type->type_table[cltype] == idtype;
}
if (unlikely(!var1)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1405);
fatal_exit(1);
}
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler (self) on <self:AbstractCompilerVisitor> */
var4 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:AbstractCompilerVisitor> */
if (unlikely(var4 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1200);
fatal_exit(1);
}
var2 = var4;
RET_LABEL3:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompiler#mainmodule (var2) on <var2:AbstractCompiler> */
var7 = var2->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___mainmodule].val; /* _mainmodule on <var2:AbstractCompiler> */
if (unlikely(var7 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mainmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 531);
fatal_exit(1);
}
var5 = var7;
RET_LABEL6:(void)0;
}
}
{
var8 = nitc___nitc__MProperty___lookup_first_definition(var_m, var5, var_t);
}
var_propdef = var8;
{
var9 = ((val*(*)(val* self, val* p0, val* p1, val* p2))(self->class->vft[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor__call]))(self, var_propdef, var_t, var_args); /* call on <self:AbstractCompilerVisitor>*/
}
var = var9;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AbstractCompilerVisitor#monomorphic_super_send for (self: AbstractCompilerVisitor, MMethodDef, MType, Array[RuntimeVariable]): nullable RuntimeVariable */
val* nitc___nitc__AbstractCompilerVisitor___monomorphic_super_send(val* self, val* p0, val* p1, val* p2) {
val* var /* : nullable RuntimeVariable */;
val* var_m /* var m: MMethodDef */;
val* var_t /* var t: MType */;
val* var_args /* var args: Array[RuntimeVariable] */;
short int var1 /* : Bool */;
int cltype;
int idtype;
val* var2 /* : AbstractCompiler */;
val* var4 /* : AbstractCompiler */;
val* var5 /* : MModule */;
val* var7 /* : MModule */;
val* var8 /* : MPropDef */;
val* var9 /* : nullable RuntimeVariable */;
var_m = p0;
var_t = p1;
var_args = p2;
/* <var_t:MType> isa MClassType */
cltype = type_nitc__MClassType.color;
idtype = type_nitc__MClassType.id;
if(cltype >= var_t->type->table_size) {
var1 = 0;
} else {
var1 = var_t->type->type_table[cltype] == idtype;
}
if (unlikely(!var1)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1413);
fatal_exit(1);
}
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler (self) on <self:AbstractCompilerVisitor> */
var4 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:AbstractCompilerVisitor> */
if (unlikely(var4 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1200);
fatal_exit(1);
}
var2 = var4;
RET_LABEL3:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompiler#mainmodule (var2) on <var2:AbstractCompiler> */
var7 = var2->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___mainmodule].val; /* _mainmodule on <var2:AbstractCompiler> */
if (unlikely(var7 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mainmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 531);
fatal_exit(1);
}
var5 = var7;
RET_LABEL6:(void)0;
}
}
{
var8 = nitc___nitc__MPropDef___lookup_next_definition(var_m, var5, var_t);
}
var_m = var8;
{
var9 = ((val*(*)(val* self, val* p0, val* p1, val* p2))(self->class->vft[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor__call]))(self, var_m, var_t, var_args); /* call on <self:AbstractCompilerVisitor>*/
}
var = var9;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AbstractCompilerVisitor#maybenull for (self: AbstractCompilerVisitor, RuntimeVariable): Bool */
short int nitc___nitc__AbstractCompilerVisitor___maybenull(val* self, val* p0) {
short int var /* : Bool */;
val* var_value /* var value: RuntimeVariable */;
short int var1 /* : Bool */;
val* var2 /* : MType */;
val* var4 /* : MType */;
short int var5 /* : Bool */;
int cltype;
int idtype;
short int var_ /* var : Bool */;
val* var6 /* : MType */;
val* var8 /* : MType */;
short int var9 /* : Bool */;
int cltype10;
int idtype11;
var_value = p0;
{
{ /* Inline abstract_compiler#RuntimeVariable#mcasttype (var_value) on <var_value:RuntimeVariable> */
var4 = var_value->attrs[COLOR_nitc__abstract_compiler__RuntimeVariable___mcasttype].val; /* _mcasttype on <var_value:RuntimeVariable> */
if (unlikely(var4 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mcasttype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1972);
fatal_exit(1);
}
var2 = var4;
RET_LABEL3:(void)0;
}
}
/* <var2:MType> isa MNullableType */
cltype = type_nitc__MNullableType.color;
idtype = type_nitc__MNullableType.id;
if(cltype >= var2->type->table_size) {
var5 = 0;
} else {
var5 = var2->type->type_table[cltype] == idtype;
}
var_ = var5;
if (var5){
var1 = var_;
} else {
{
{ /* Inline abstract_compiler#RuntimeVariable#mcasttype (var_value) on <var_value:RuntimeVariable> */
var8 = var_value->attrs[COLOR_nitc__abstract_compiler__RuntimeVariable___mcasttype].val; /* _mcasttype on <var_value:RuntimeVariable> */
if (unlikely(var8 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mcasttype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1972);
fatal_exit(1);
}
var6 = var8;
RET_LABEL7:(void)0;
}
}
/* <var6:MType> isa MNullType */
cltype10 = type_nitc__MNullType.color;
idtype11 = type_nitc__MNullType.id;
if(cltype10 >= var6->type->table_size) {
var9 = 0;
} else {
var9 = var6->type->type_table[cltype10] == idtype11;
}
var1 = var9;
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AbstractCompilerVisitor#check_recv_notnull for (self: AbstractCompilerVisitor, RuntimeVariable) */
void nitc___nitc__AbstractCompilerVisitor___check_recv_notnull(val* self, val* p0) {
val* var_recv /* var recv: RuntimeVariable */;
val* var /* : AbstractCompiler */;
val* var2 /* : AbstractCompiler */;
val* var3 /* : ModelBuilder */;
val* var5 /* : ModelBuilder */;
val* var6 /* : ToolContext */;
val* var8 /* : ToolContext */;
val* var9 /* : OptionBool */;
val* var11 /* : OptionBool */;
val* var12 /* : nullable Object */;
val* var14 /* : nullable Object */;
short int var15 /* : Bool */;
short int var16 /* : Bool */;
val* var17 /* : NativeArray[String] */;
static val* varonce;
static val* varonce18;
val* var19 /* : String */;
char* var20 /* : CString */;
val* var21 /* : String */;
static val* varonce22;
val* var23 /* : String */;
char* var24 /* : CString */;
val* var25 /* : String */;
val* var26 /* : String */;
val* var27 /* : String */;
static val* varonce28;
val* var29 /* : String */;
char* var30 /* : CString */;
val* var31 /* : String */;
static val* varonce32;
val* var33 /* : String */;
char* var34 /* : CString */;
val* var35 /* : String */;
var_recv = p0;
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler (self) on <self:AbstractCompilerVisitor> */
var2 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:AbstractCompilerVisitor> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1200);
fatal_exit(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompiler#modelbuilder (var) on <var:AbstractCompiler> */
var5 = var->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___modelbuilder].val; /* _modelbuilder on <var:AbstractCompiler> */
if (unlikely(var5 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _modelbuilder");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 538);
fatal_exit(1);
}
var3 = var5;
RET_LABEL4:(void)0;
}
}
{
{ /* Inline modelbuilder_base#ModelBuilder#toolcontext (var3) on <var3:ModelBuilder> */
var8 = var3->attrs[COLOR_nitc__modelbuilder_base__ModelBuilder___toolcontext].val; /* _toolcontext on <var3:ModelBuilder> */
if (unlikely(var8 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _toolcontext");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__modelbuilder_base, 47);
fatal_exit(1);
}
var6 = var8;
RET_LABEL7:(void)0;
}
}
{
{ /* Inline abstract_compiler#ToolContext#opt_no_check_null (var6) on <var6:ToolContext> */
var11 = var6->attrs[COLOR_nitc__abstract_compiler__ToolContext___opt_no_check_null].val; /* _opt_no_check_null on <var6:ToolContext> */
if (unlikely(var11 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _opt_no_check_null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 56);
fatal_exit(1);
}
var9 = var11;
RET_LABEL10:(void)0;
}
}
{
{ /* Inline opts#Option#value (var9) on <var9:OptionBool> */
var14 = var9->attrs[COLOR_opts__Option___value].val; /* _value on <var9:OptionBool> */
var12 = var14;
RET_LABEL13:(void)0;
}
}
var15 = (short int)((long)(var12)>>2);
if (var15){
goto RET_LABEL;
} else {
}
{
var16 = nitc___nitc__AbstractCompilerVisitor___maybenull(self, var_recv);
}
if (var16){
if (unlikely(varonce==NULL)) {
var17 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce18!=NULL)) {
var19 = varonce18;
} else {
var20 = "if (unlikely(";
var21 = core__abstract_text___CString___to_s_full(var20, 13l, 13l);
var19 = var21;
varonce18 = var19;
}
((struct instance_core__NativeArray*)var17)->values[0]=var19;
if (likely(varonce22!=NULL)) {
var23 = varonce22;
} else {
var24 = " == NULL)) {";
var25 = core__abstract_text___CString___to_s_full(var24, 12l, 12l);
var23 = var25;
varonce22 = var23;
}
((struct instance_core__NativeArray*)var17)->values[2]=var23;
} else {
var17 = varonce;
varonce = NULL;
}
{
var26 = ((val*(*)(val* self))(var_recv->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_recv); /* to_s on <var_recv:RuntimeVariable>*/
}
((struct instance_core__NativeArray*)var17)->values[1]=var26;
{
var27 = ((val*(*)(val* self))(var17->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var17); /* native_to_s on <var17:NativeArray[String]>*/
}
varonce = var17;
{
nitc___nitc__AbstractCompilerVisitor___add(self, var27); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:AbstractCompilerVisitor>*/
}
if (likely(varonce28!=NULL)) {
var29 = varonce28;
} else {
var30 = "Receiver is null";
var31 = core__abstract_text___CString___to_s_full(var30, 16l, 16l);
var29 = var31;
varonce28 = var29;
}
{
nitc___nitc__AbstractCompilerVisitor___add_abort(self, var29); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_abort on <self:AbstractCompilerVisitor>*/
}
if (likely(varonce32!=NULL)) {
var33 = varonce32;
} else {
var34 = "}";
var35 = core__abstract_text___CString___to_s_full(var34, 1l, 1l);
var33 = var35;
varonce32 = var33;
}
{
nitc___nitc__AbstractCompilerVisitor___add(self, var33); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:AbstractCompilerVisitor>*/
}
} else {
}
RET_LABEL:;
}
/* method abstract_compiler#AbstractCompilerVisitor#names for (self: AbstractCompilerVisitor): HashSet[String] */
val* nitc___nitc__AbstractCompilerVisitor___names(val* self) {
val* var /* : HashSet[String] */;
val* var1 /* : HashSet[String] */;
var1 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___names].val; /* _names on <self:AbstractCompilerVisitor> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _names");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1451);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AbstractCompilerVisitor#last for (self: AbstractCompilerVisitor): Int */
long nitc___nitc__AbstractCompilerVisitor___last(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___last].l; /* _last on <self:AbstractCompilerVisitor> */
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AbstractCompilerVisitor#last= for (self: AbstractCompilerVisitor, Int) */
void nitc___nitc__AbstractCompilerVisitor___last_61d(val* self, long p0) {
self->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___last].l = p0; /* _last on <self:AbstractCompilerVisitor> */
RET_LABEL:;
}
/* method abstract_compiler#AbstractCompilerVisitor#get_name for (self: AbstractCompilerVisitor, String): String */
val* nitc___nitc__AbstractCompilerVisitor___get_name(val* self, val* p0) {
val* var /* : String */;
val* var_s /* var s: String */;
val* var1 /* : HashSet[String] */;
val* var3 /* : HashSet[String] */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
val* var6 /* : HashSet[String] */;
val* var8 /* : HashSet[String] */;
long var9 /* : Int */;
long var11 /* : Int */;
long var12 /* : Int */;
short int var14 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var15 /* : Int */;
long var_i /* var i: Int */;
val* var16 /* : String */;
val* var17 /* : Text */;
val* var_s2 /* var s2: String */;
val* var18 /* : HashSet[String] */;
val* var20 /* : HashSet[String] */;
short int var21 /* : Bool */;
short int var22 /* : Bool */;
val* var24 /* : HashSet[String] */;
val* var26 /* : HashSet[String] */;
long var27 /* : Int */;
short int var29 /* : Bool */;
int cltype30;
int idtype31;
const char* var_class_name32;
long var33 /* : Int */;
var_s = p0;
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#names (self) on <self:AbstractCompilerVisitor> */
var3 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___names].val; /* _names on <self:AbstractCompilerVisitor> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _names");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1451);
fatal_exit(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
var4 = core___core__HashSet___core__abstract_collection__Collection__has(var1, var_s);
}
var5 = !var4;
if (var5){
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#names (self) on <self:AbstractCompilerVisitor> */
var8 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___names].val; /* _names on <self:AbstractCompilerVisitor> */
if (unlikely(var8 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _names");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1451);
fatal_exit(1);
}
var6 = var8;
RET_LABEL7:(void)0;
}
}
{
core___core__HashSet___core__abstract_collection__SimpleCollection__add(var6, var_s); /* Direct call hash_collection#HashSet#add on <var6:HashSet[String]>*/
}
var = var_s;
goto RET_LABEL;
} else {
}
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#last (self) on <self:AbstractCompilerVisitor> */
var11 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___last].l; /* _last on <self:AbstractCompilerVisitor> */
var9 = var11;
RET_LABEL10:(void)0;
}
}
{
{ /* Inline kernel#Int#+ (var9,1l) on <var9:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var14 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var14)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var15 = var9 + 1l;
var12 = var15;
goto RET_LABEL13;
RET_LABEL13:(void)0;
}
}
var_i = var12;
for(;;) {
{
var16 = core__flat___Int___core__abstract_text__Object__to_s(var_i);
}
{
var17 = ((val*(*)(val* self, val* p0))(var_s->class->vft[COLOR_core__abstract_text__Text___43d]))(var_s, var16); /* + on <var_s:String>*/
}
var_s2 = var17;
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#names (self) on <self:AbstractCompilerVisitor> */
var20 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___names].val; /* _names on <self:AbstractCompilerVisitor> */
if (unlikely(var20 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _names");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1451);
fatal_exit(1);
}
var18 = var20;
RET_LABEL19:(void)0;
}
}
{
var21 = core___core__HashSet___core__abstract_collection__Collection__has(var18, var_s2);
}
var22 = !var21;
if (var22){
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#last= (self,var_i) on <self:AbstractCompilerVisitor> */
self->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___last].l = var_i; /* _last on <self:AbstractCompilerVisitor> */
RET_LABEL23:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#names (self) on <self:AbstractCompilerVisitor> */
var26 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___names].val; /* _names on <self:AbstractCompilerVisitor> */
if (unlikely(var26 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _names");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1451);
fatal_exit(1);
}
var24 = var26;
RET_LABEL25:(void)0;
}
}
{
core___core__HashSet___core__abstract_collection__SimpleCollection__add(var24, var_s2); /* Direct call hash_collection#HashSet#add on <var24:HashSet[String]>*/
}
var = var_s2;
goto RET_LABEL;
} else {
}
{
{ /* Inline kernel#Int#+ (var_i,1l) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var29 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var29)) {
var_class_name32 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name32);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var33 = var_i + 1l;
var27 = var33;
goto RET_LABEL28;
RET_LABEL28:(void)0;
}
}
var_i = var27;
}
RET_LABEL:;
return var;
}
/* method abstract_compiler#AbstractCompilerVisitor#escapemark_name for (self: AbstractCompilerVisitor, nullable EscapeMark): String */
val* nitc___nitc__AbstractCompilerVisitor___escapemark_name(val* self, val* p0) {
val* var /* : String */;
val* var_e /* var e: nullable EscapeMark */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var4 /* : Bool */;
short int var5 /* : Bool */;
val* var6 /* : nullable StaticFrame */;
val* var8 /* : nullable StaticFrame */;
val* var9 /* : HashMap[EscapeMark, String] */;
val* var11 /* : HashMap[EscapeMark, String] */;
short int var12 /* : Bool */;
val* var13 /* : nullable StaticFrame */;
val* var15 /* : nullable StaticFrame */;
val* var16 /* : HashMap[EscapeMark, String] */;
val* var18 /* : HashMap[EscapeMark, String] */;
val* var19 /* : nullable Object */;
val* var20 /* : nullable String */;
val* var22 /* : nullable String */;
val* var_name /* var name: nullable String */;
short int var23 /* : Bool */;
short int var24 /* : Bool */;
static val* varonce;
val* var25 /* : String */;
char* var26 /* : CString */;
val* var27 /* : String */;
val* var28 /* : String */;
val* var29 /* : nullable StaticFrame */;
val* var31 /* : nullable StaticFrame */;
val* var32 /* : HashMap[EscapeMark, String] */;
val* var34 /* : HashMap[EscapeMark, String] */;
var_e = p0;
if (var_e == NULL) {
var1 = 0; /* is null */
} else {
var1 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_e,((val*)NULL)) on <var_e:nullable EscapeMark> */
var_other = ((val*)NULL);
{
var4 = ((short int(*)(val* self, val* p0))(var_e->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_e, var_other); /* == on <var_e:nullable EscapeMark(EscapeMark)>*/
}
var5 = !var4;
var2 = var5;
goto RET_LABEL3;
RET_LABEL3:(void)0;
}
var1 = var2;
}
if (unlikely(!var1)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1476);
fatal_exit(1);
}
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#frame (self) on <self:AbstractCompilerVisitor> */
var8 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___frame].val; /* _frame on <self:AbstractCompilerVisitor> */
var6 = var8;
RET_LABEL7:(void)0;
}
}
if (var6 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1477);
fatal_exit(1);
} else {
{ /* Inline abstract_compiler#StaticFrame#escapemark_names (var6) on <var6:nullable StaticFrame> */
if (unlikely(var6 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2029);
fatal_exit(1);
}
var11 = var6->attrs[COLOR_nitc__abstract_compiler__StaticFrame___escapemark_names].val; /* _escapemark_names on <var6:nullable StaticFrame> */
if (unlikely(var11 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _escapemark_names");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2029);
fatal_exit(1);
}
var9 = var11;
RET_LABEL10:(void)0;
}
}
{
var12 = core___core__HashMap___core__abstract_collection__MapRead__has_key(var9, var_e);
}
if (var12){
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#frame (self) on <self:AbstractCompilerVisitor> */
var15 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___frame].val; /* _frame on <self:AbstractCompilerVisitor> */
var13 = var15;
RET_LABEL14:(void)0;
}
}
if (var13 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1477);
fatal_exit(1);
} else {
{ /* Inline abstract_compiler#StaticFrame#escapemark_names (var13) on <var13:nullable StaticFrame> */
if (unlikely(var13 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2029);
fatal_exit(1);
}
var18 = var13->attrs[COLOR_nitc__abstract_compiler__StaticFrame___escapemark_names].val; /* _escapemark_names on <var13:nullable StaticFrame> */
if (unlikely(var18 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _escapemark_names");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2029);
fatal_exit(1);
}
var16 = var18;
RET_LABEL17:(void)0;
}
}
{
var19 = core___core__HashMap___core__abstract_collection__MapRead___91d_93d(var16, var_e);
}
var = var19;
goto RET_LABEL;
} else {
}
{
{ /* Inline scope#EscapeMark#name (var_e) on <var_e:nullable EscapeMark(EscapeMark)> */
var22 = var_e->attrs[COLOR_nitc__scope__EscapeMark___name].val; /* _name on <var_e:nullable EscapeMark(EscapeMark)> */
var20 = var22;
RET_LABEL21:(void)0;
}
}
var_name = var20;
if (var_name == NULL) {
var23 = 1; /* is null */
} else {
var23 = 0; /* arg is null but recv is not */
}
if (0) {
var24 = ((short int(*)(val* self, val* p0))(var_name->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_name, ((val*)NULL)); /* == on <var_name:nullable String>*/
var23 = var24;
}
if (var23){
if (likely(varonce!=NULL)) {
var25 = varonce;
} else {
var26 = "label";
var27 = core__abstract_text___CString___to_s_full(var26, 5l, 5l);
var25 = var27;
varonce = var25;
}
var_name = var25;
} else {
}
{
var28 = nitc___nitc__AbstractCompilerVisitor___get_name(self, var_name);
}
var_name = var28;
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#frame (self) on <self:AbstractCompilerVisitor> */
var31 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___frame].val; /* _frame on <self:AbstractCompilerVisitor> */
var29 = var31;
RET_LABEL30:(void)0;
}
}
if (var29 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1481);
fatal_exit(1);
} else {
{ /* Inline abstract_compiler#StaticFrame#escapemark_names (var29) on <var29:nullable StaticFrame> */
if (unlikely(var29 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2029);
fatal_exit(1);
}
var34 = var29->attrs[COLOR_nitc__abstract_compiler__StaticFrame___escapemark_names].val; /* _escapemark_names on <var29:nullable StaticFrame> */
if (unlikely(var34 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _escapemark_names");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2029);
fatal_exit(1);
}
var32 = var34;
RET_LABEL33:(void)0;
}
}
{
core___core__HashMap___core__abstract_collection__Map___91d_93d_61d(var32, var_e, var_name); /* Direct call hash_collection#HashMap#[]= on <var32:HashMap[EscapeMark, String]>*/
}
var = var_name;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AbstractCompilerVisitor#add_escape_label for (self: AbstractCompilerVisitor, nullable EscapeMark) */
void nitc___nitc__AbstractCompilerVisitor___add_escape_label(val* self, val* p0) {
val* var_e /* var e: nullable EscapeMark */;
short int var /* : Bool */;
short int var1 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var3 /* : Bool */;
short int var5 /* : Bool */;
val* var6 /* : Array[AEscapeExpr] */;
val* var8 /* : Array[AEscapeExpr] */;
short int var9 /* : Bool */;
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
val* var19 /* : String */;
val* var20 /* : String */;
var_e = p0;
if (var_e == NULL) {
var = 1; /* is null */
} else {
var = 0; /* arg is null but recv is not */
}
if (0) {
{ /* Inline kernel#Object#== (var_e,((val*)NULL)) on <var_e:nullable EscapeMark> */
var_other = ((val*)NULL);
{
{ /* Inline kernel#Object#is_same_instance (var_e,var_other) on <var_e:nullable EscapeMark(EscapeMark)> */
var5 = var_e == var_other;
var3 = var5;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
}
var1 = var3;
goto RET_LABEL2;
RET_LABEL2:(void)0;
}
var = var1;
}
if (var){
goto RET_LABEL;
} else {
}
{
{ /* Inline scope#EscapeMark#escapes (var_e) on <var_e:nullable EscapeMark(EscapeMark)> */
var8 = var_e->attrs[COLOR_nitc__scope__EscapeMark___escapes].val; /* _escapes on <var_e:nullable EscapeMark(EscapeMark)> */
if (unlikely(var8 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _escapes");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__scope, 59);
fatal_exit(1);
}
var6 = var8;
RET_LABEL7:(void)0;
}
}
{
var9 = core___core__AbstractArrayRead___core__abstract_collection__Collection__is_empty(var6);
}
if (var9){
goto RET_LABEL;
} else {
}
if (unlikely(varonce==NULL)) {
var10 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce11!=NULL)) {
var12 = varonce11;
} else {
var13 = "BREAK_";
var14 = core__abstract_text___CString___to_s_full(var13, 6l, 6l);
var12 = var14;
varonce11 = var12;
}
((struct instance_core__NativeArray*)var10)->values[0]=var12;
if (likely(varonce15!=NULL)) {
var16 = varonce15;
} else {
var17 = ": (void)0;";
var18 = core__abstract_text___CString___to_s_full(var17, 10l, 10l);
var16 = var18;
varonce15 = var16;
}
((struct instance_core__NativeArray*)var10)->values[2]=var16;
} else {
var10 = varonce;
varonce = NULL;
}
{
var19 = nitc___nitc__AbstractCompilerVisitor___escapemark_name(self, var_e);
}
((struct instance_core__NativeArray*)var10)->values[1]=var19;
{
var20 = ((val*(*)(val* self))(var10->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var10); /* native_to_s on <var10:NativeArray[String]>*/
}
varonce = var10;
{
nitc___nitc__AbstractCompilerVisitor___add(self, var20); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:AbstractCompilerVisitor>*/
}
RET_LABEL:;
}
/* method abstract_compiler#AbstractCompilerVisitor#variables for (self: AbstractCompilerVisitor): HashMap[Variable, RuntimeVariable] */
val* nitc___nitc__AbstractCompilerVisitor___variables(val* self) {
val* var /* : HashMap[Variable, RuntimeVariable] */;
val* var1 /* : HashMap[Variable, RuntimeVariable] */;
var1 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___variables].val; /* _variables on <self:AbstractCompilerVisitor> */
if (unlikely(var1 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _variables");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1499);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AbstractCompilerVisitor#variable for (self: AbstractCompilerVisitor, Variable): RuntimeVariable */
val* nitc___nitc__AbstractCompilerVisitor___variable(val* self, val* p0) {
val* var /* : RuntimeVariable */;
val* var_variable /* var variable: Variable */;
val* var1 /* : HashMap[Variable, RuntimeVariable] */;
val* var3 /* : HashMap[Variable, RuntimeVariable] */;
short int var4 /* : Bool */;
val* var5 /* : HashMap[Variable, RuntimeVariable] */;
val* var7 /* : HashMap[Variable, RuntimeVariable] */;
val* var8 /* : nullable Object */;
val* var9 /* : NativeArray[String] */;
static val* varonce;
static val* varonce10;
val* var11 /* : String */;
char* var12 /* : CString */;
val* var13 /* : String */;
val* var14 /* : String */;
val* var16 /* : String */;
val* var17 /* : String */;
val* var18 /* : String */;
val* var_name /* var name: String */;
val* var19 /* : nullable MType */;
val* var21 /* : nullable MType */;
val* var_mtype /* var mtype: MType */;
val* var22 /* : MType */;
val* var23 /* : RuntimeVariable */;
val* var_res /* var res: RuntimeVariable */;
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
val* var42 /* : String */;
val* var43 /* : String */;
val* var44 /* : String */;
val* var45 /* : String */;
val* var46 /* : HashMap[Variable, RuntimeVariable] */;
val* var48 /* : HashMap[Variable, RuntimeVariable] */;
var_variable = p0;
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#variables (self) on <self:AbstractCompilerVisitor> */
var3 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___variables].val; /* _variables on <self:AbstractCompilerVisitor> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _variables");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1499);
fatal_exit(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
var4 = core___core__HashMap___core__abstract_collection__MapRead__has_key(var1, var_variable);
}
if (var4){
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#variables (self) on <self:AbstractCompilerVisitor> */
var7 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___variables].val; /* _variables on <self:AbstractCompilerVisitor> */
if (unlikely(var7 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _variables");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1499);
fatal_exit(1);
}
var5 = var7;
RET_LABEL6:(void)0;
}
}
{
var8 = core___core__HashMap___core__abstract_collection__MapRead___91d_93d(var5, var_variable);
}
var = var8;
goto RET_LABEL;
} else {
if (unlikely(varonce==NULL)) {
var9 = NEW_core__NativeArray(2l, &type_core__NativeArray__core__String);
if (likely(varonce10!=NULL)) {
var11 = varonce10;
} else {
var12 = "var_";
var13 = core__abstract_text___CString___to_s_full(var12, 4l, 4l);
var11 = var13;
varonce10 = var11;
}
((struct instance_core__NativeArray*)var9)->values[0]=var11;
} else {
var9 = varonce;
varonce = NULL;
}
{
{ /* Inline scope#Variable#name (var_variable) on <var_variable:Variable> */
var16 = var_variable->attrs[COLOR_nitc__scope__Variable___name].val; /* _name on <var_variable:Variable> */
if (unlikely(var16 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__scope, 36);
fatal_exit(1);
}
var14 = var16;
RET_LABEL15:(void)0;
}
}
((struct instance_core__NativeArray*)var9)->values[1]=var14;
{
var17 = ((val*(*)(val* self))(var9->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var9); /* native_to_s on <var9:NativeArray[String]>*/
}
varonce = var9;
{
var18 = nitc___nitc__AbstractCompilerVisitor___get_name(self, var17);
}
var_name = var18;
{
{ /* Inline typing#Variable#declared_type (var_variable) on <var_variable:Variable> */
var21 = var_variable->attrs[COLOR_nitc__typing__Variable___declared_type].val; /* _declared_type on <var_variable:Variable> */
var19 = var21;
RET_LABEL20:(void)0;
}
}
if (unlikely(var19 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1508);
fatal_exit(1);
}
var_mtype = var19;
{
var22 = nitc___nitc__AbstractCompilerVisitor___anchor(self, var_mtype);
}
var_mtype = var22;
var23 = NEW_nitc__RuntimeVariable(&type_nitc__RuntimeVariable);
{
((void(*)(val* self, val* p0))(var23->class->vft[COLOR_nitc__abstract_compiler__RuntimeVariable__name_61d]))(var23, var_name); /* name= on <var23:RuntimeVariable>*/
}
{
((void(*)(val* self, val* p0))(var23->class->vft[COLOR_nitc__abstract_compiler__RuntimeVariable__mtype_61d]))(var23, var_mtype); /* mtype= on <var23:RuntimeVariable>*/
}
{
((void(*)(val* self, val* p0))(var23->class->vft[COLOR_nitc__abstract_compiler__RuntimeVariable__mcasttype_61d]))(var23, var_mtype); /* mcasttype= on <var23:RuntimeVariable>*/
}
{
((void(*)(val* self))(var23->class->vft[COLOR_core__kernel__Object__init]))(var23); /* init on <var23:RuntimeVariable>*/
}
var_res = var23;
if (unlikely(varonce24==NULL)) {
var25 = NEW_core__NativeArray(8l, &type_core__NativeArray__core__String);
if (likely(varonce26!=NULL)) {
var27 = varonce26;
} else {
var28 = " ";
var29 = core__abstract_text___CString___to_s_full(var28, 1l, 1l);
var27 = var29;
varonce26 = var27;
}
((struct instance_core__NativeArray*)var25)->values[1]=var27;
if (likely(varonce30!=NULL)) {
var31 = varonce30;
} else {
var32 = " /* var ";
var33 = core__abstract_text___CString___to_s_full(var32, 8l, 8l);
var31 = var33;
varonce30 = var31;
}
((struct instance_core__NativeArray*)var25)->values[3]=var31;
if (likely(varonce34!=NULL)) {
var35 = varonce34;
} else {
var36 = ": ";
var37 = core__abstract_text___CString___to_s_full(var36, 2l, 2l);
var35 = var37;
varonce34 = var35;
}
((struct instance_core__NativeArray*)var25)->values[5]=var35;
if (likely(varonce38!=NULL)) {
var39 = varonce38;
} else {
var40 = " */;";
var41 = core__abstract_text___CString___to_s_full(var40, 4l, 4l);
var39 = var41;
varonce38 = var39;
}
((struct instance_core__NativeArray*)var25)->values[7]=var39;
} else {
var25 = varonce24;
varonce24 = NULL;
}
{
var42 = ((val*(*)(val* self))(var_mtype->class->vft[COLOR_nitc__abstract_compiler__MType__ctype]))(var_mtype); /* ctype on <var_mtype:MType>*/
}
((struct instance_core__NativeArray*)var25)->values[0]=var42;
((struct instance_core__NativeArray*)var25)->values[2]=var_name;
{
var43 = ((val*(*)(val* self))(var_variable->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_variable); /* to_s on <var_variable:Variable>*/
}
((struct instance_core__NativeArray*)var25)->values[4]=var43;
{
var44 = ((val*(*)(val* self))(var_mtype->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_mtype); /* to_s on <var_mtype:MType>*/
}
((struct instance_core__NativeArray*)var25)->values[6]=var44;
{
var45 = ((val*(*)(val* self))(var25->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var25); /* native_to_s on <var25:NativeArray[String]>*/
}
varonce24 = var25;
{
nitc___nitc__AbstractCompilerVisitor___add_decl(self, var45); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <self:AbstractCompilerVisitor>*/
}
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#variables (self) on <self:AbstractCompilerVisitor> */
var48 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___variables].val; /* _variables on <self:AbstractCompilerVisitor> */
if (unlikely(var48 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _variables");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1499);
fatal_exit(1);
}
var46 = var48;
RET_LABEL47:(void)0;
}
}
{
core___core__HashMap___core__abstract_collection__Map___91d_93d_61d(var46, var_variable, var_res); /* Direct call hash_collection#HashMap#[]= on <var46:HashMap[Variable, RuntimeVariable]>*/
}
var = var_res;
goto RET_LABEL;
}
RET_LABEL:;
return var;
}
/* method abstract_compiler#AbstractCompilerVisitor#new_var for (self: AbstractCompilerVisitor, MType): RuntimeVariable */
val* nitc___nitc__AbstractCompilerVisitor___new_var(val* self, val* p0) {
val* var /* : RuntimeVariable */;
val* var_mtype /* var mtype: MType */;
val* var1 /* : MType */;
static val* varonce;
val* var2 /* : String */;
char* var3 /* : CString */;
val* var4 /* : String */;
val* var5 /* : String */;
val* var_name /* var name: String */;
val* var6 /* : RuntimeVariable */;
val* var_res /* var res: RuntimeVariable */;
val* var8 /* : NativeArray[String] */;
static val* varonce7;
static val* varonce9;
val* var10 /* : String */;
char* var11 /* : CString */;
val* var12 /* : String */;
static val* varonce13;
val* var14 /* : String */;
char* var15 /* : CString */;
val* var16 /* : String */;
static val* varonce17;
val* var18 /* : String */;
char* var19 /* : CString */;
val* var20 /* : String */;
val* var21 /* : String */;
val* var22 /* : String */;
val* var23 /* : String */;
var_mtype = p0;
{
var1 = nitc___nitc__AbstractCompilerVisitor___anchor(self, var_mtype);
}
var_mtype = var1;
if (likely(varonce!=NULL)) {
var2 = varonce;
} else {
var3 = "var";
var4 = core__abstract_text___CString___to_s_full(var3, 3l, 3l);
var2 = var4;
varonce = var2;
}
{
var5 = nitc___nitc__AbstractCompilerVisitor___get_name(self, var2);
}
var_name = var5;
var6 = NEW_nitc__RuntimeVariable(&type_nitc__RuntimeVariable);
{
((void(*)(val* self, val* p0))(var6->class->vft[COLOR_nitc__abstract_compiler__RuntimeVariable__name_61d]))(var6, var_name); /* name= on <var6:RuntimeVariable>*/
}
{
((void(*)(val* self, val* p0))(var6->class->vft[COLOR_nitc__abstract_compiler__RuntimeVariable__mtype_61d]))(var6, var_mtype); /* mtype= on <var6:RuntimeVariable>*/
}
{
((void(*)(val* self, val* p0))(var6->class->vft[COLOR_nitc__abstract_compiler__RuntimeVariable__mcasttype_61d]))(var6, var_mtype); /* mcasttype= on <var6:RuntimeVariable>*/
}
{
((void(*)(val* self))(var6->class->vft[COLOR_core__kernel__Object__init]))(var6); /* init on <var6:RuntimeVariable>*/
}
var_res = var6;
if (unlikely(varonce7==NULL)) {
var8 = NEW_core__NativeArray(6l, &type_core__NativeArray__core__String);
if (likely(varonce9!=NULL)) {
var10 = varonce9;
} else {
var11 = " ";
var12 = core__abstract_text___CString___to_s_full(var11, 1l, 1l);
var10 = var12;
varonce9 = var10;
}
((struct instance_core__NativeArray*)var8)->values[1]=var10;
if (likely(varonce13!=NULL)) {
var14 = varonce13;
} else {
var15 = " /* : ";
var16 = core__abstract_text___CString___to_s_full(var15, 6l, 6l);
var14 = var16;
varonce13 = var14;
}
((struct instance_core__NativeArray*)var8)->values[3]=var14;
if (likely(varonce17!=NULL)) {
var18 = varonce17;
} else {
var19 = " */;";
var20 = core__abstract_text___CString___to_s_full(var19, 4l, 4l);
var18 = var20;
varonce17 = var18;
}
((struct instance_core__NativeArray*)var8)->values[5]=var18;
} else {
var8 = varonce7;
varonce7 = NULL;
}
{
var21 = ((val*(*)(val* self))(var_mtype->class->vft[COLOR_nitc__abstract_compiler__MType__ctype]))(var_mtype); /* ctype on <var_mtype:MType>*/
}
((struct instance_core__NativeArray*)var8)->values[0]=var21;
((struct instance_core__NativeArray*)var8)->values[2]=var_name;
{
var22 = ((val*(*)(val* self))(var_mtype->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_mtype); /* to_s on <var_mtype:MType>*/
}
((struct instance_core__NativeArray*)var8)->values[4]=var22;
{
var23 = ((val*(*)(val* self))(var8->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var8); /* native_to_s on <var8:NativeArray[String]>*/
}
varonce7 = var8;
{
nitc___nitc__AbstractCompilerVisitor___add_decl(self, var23); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <self:AbstractCompilerVisitor>*/
}
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AbstractCompilerVisitor#new_var_extern for (self: AbstractCompilerVisitor, MType): RuntimeVariable */
val* nitc___nitc__AbstractCompilerVisitor___new_var_extern(val* self, val* p0) {
val* var /* : RuntimeVariable */;
val* var_mtype /* var mtype: MType */;
val* var1 /* : MType */;
static val* varonce;
val* var2 /* : String */;
char* var3 /* : CString */;
val* var4 /* : String */;
val* var5 /* : String */;
val* var_name /* var name: String */;
val* var6 /* : RuntimeVariable */;
val* var_res /* var res: RuntimeVariable */;
val* var8 /* : NativeArray[String] */;
static val* varonce7;
static val* varonce9;
val* var10 /* : String */;
char* var11 /* : CString */;
val* var12 /* : String */;
static val* varonce13;
val* var14 /* : String */;
char* var15 /* : CString */;
val* var16 /* : String */;
static val* varonce17;
val* var18 /* : String */;
char* var19 /* : CString */;
val* var20 /* : String */;
val* var21 /* : String */;
val* var22 /* : String */;
val* var23 /* : String */;
var_mtype = p0;
{
var1 = nitc___nitc__AbstractCompilerVisitor___anchor(self, var_mtype);
}
var_mtype = var1;
if (likely(varonce!=NULL)) {
var2 = varonce;
} else {
var3 = "var";
var4 = core__abstract_text___CString___to_s_full(var3, 3l, 3l);
var2 = var4;
varonce = var2;
}
{
var5 = nitc___nitc__AbstractCompilerVisitor___get_name(self, var2);
}
var_name = var5;
var6 = NEW_nitc__RuntimeVariable(&type_nitc__RuntimeVariable);
{
((void(*)(val* self, val* p0))(var6->class->vft[COLOR_nitc__abstract_compiler__RuntimeVariable__name_61d]))(var6, var_name); /* name= on <var6:RuntimeVariable>*/
}
{
((void(*)(val* self, val* p0))(var6->class->vft[COLOR_nitc__abstract_compiler__RuntimeVariable__mtype_61d]))(var6, var_mtype); /* mtype= on <var6:RuntimeVariable>*/
}
{
((void(*)(val* self, val* p0))(var6->class->vft[COLOR_nitc__abstract_compiler__RuntimeVariable__mcasttype_61d]))(var6, var_mtype); /* mcasttype= on <var6:RuntimeVariable>*/
}
{
((void(*)(val* self))(var6->class->vft[COLOR_core__kernel__Object__init]))(var6); /* init on <var6:RuntimeVariable>*/
}
var_res = var6;
if (unlikely(varonce7==NULL)) {
var8 = NEW_core__NativeArray(6l, &type_core__NativeArray__core__String);
if (likely(varonce9!=NULL)) {
var10 = varonce9;
} else {
var11 = " ";
var12 = core__abstract_text___CString___to_s_full(var11, 1l, 1l);
var10 = var12;
varonce9 = var10;
}
((struct instance_core__NativeArray*)var8)->values[1]=var10;
if (likely(varonce13!=NULL)) {
var14 = varonce13;
} else {
var15 = " /* : ";
var16 = core__abstract_text___CString___to_s_full(var15, 6l, 6l);
var14 = var16;
varonce13 = var14;
}
((struct instance_core__NativeArray*)var8)->values[3]=var14;
if (likely(varonce17!=NULL)) {
var18 = varonce17;
} else {
var19 = " for extern */;";
var20 = core__abstract_text___CString___to_s_full(var19, 15l, 15l);
var18 = var20;
varonce17 = var18;
}
((struct instance_core__NativeArray*)var8)->values[5]=var18;
} else {
var8 = varonce7;
varonce7 = NULL;
}
{
var21 = ((val*(*)(val* self))(var_mtype->class->vft[COLOR_nitc__abstract_compiler__MType__ctype_extern]))(var_mtype); /* ctype_extern on <var_mtype:MType>*/
}
((struct instance_core__NativeArray*)var8)->values[0]=var21;
((struct instance_core__NativeArray*)var8)->values[2]=var_name;
{
var22 = ((val*(*)(val* self))(var_mtype->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_mtype); /* to_s on <var_mtype:MType>*/
}
((struct instance_core__NativeArray*)var8)->values[4]=var22;
{
var23 = ((val*(*)(val* self))(var8->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var8); /* native_to_s on <var8:NativeArray[String]>*/
}
varonce7 = var8;
{
nitc___nitc__AbstractCompilerVisitor___add_decl(self, var23); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <self:AbstractCompilerVisitor>*/
}
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AbstractCompilerVisitor#new_named_var for (self: AbstractCompilerVisitor, MType, String): RuntimeVariable */
val* nitc___nitc__AbstractCompilerVisitor___new_named_var(val* self, val* p0, val* p1) {
val* var /* : RuntimeVariable */;
val* var_mtype /* var mtype: MType */;
val* var_name /* var name: String */;
val* var1 /* : MType */;
val* var2 /* : RuntimeVariable */;
val* var_res /* var res: RuntimeVariable */;
val* var3 /* : NativeArray[String] */;
static val* varonce;
static val* varonce4;
val* var5 /* : String */;
char* var6 /* : CString */;
val* var7 /* : String */;
static val* varonce8;
val* var9 /* : String */;
char* var10 /* : CString */;
val* var11 /* : String */;
static val* varonce12;
val* var13 /* : String */;
char* var14 /* : CString */;
val* var15 /* : String */;
val* var16 /* : String */;
val* var17 /* : String */;
val* var18 /* : String */;
var_mtype = p0;
var_name = p1;
{
var1 = nitc___nitc__AbstractCompilerVisitor___anchor(self, var_mtype);
}
var_mtype = var1;
var2 = NEW_nitc__RuntimeVariable(&type_nitc__RuntimeVariable);
{
((void(*)(val* self, val* p0))(var2->class->vft[COLOR_nitc__abstract_compiler__RuntimeVariable__name_61d]))(var2, var_name); /* name= on <var2:RuntimeVariable>*/
}
{
((void(*)(val* self, val* p0))(var2->class->vft[COLOR_nitc__abstract_compiler__RuntimeVariable__mtype_61d]))(var2, var_mtype); /* mtype= on <var2:RuntimeVariable>*/
}
{
((void(*)(val* self, val* p0))(var2->class->vft[COLOR_nitc__abstract_compiler__RuntimeVariable__mcasttype_61d]))(var2, var_mtype); /* mcasttype= on <var2:RuntimeVariable>*/
}
{
((void(*)(val* self))(var2->class->vft[COLOR_core__kernel__Object__init]))(var2); /* init on <var2:RuntimeVariable>*/
}
var_res = var2;
if (unlikely(varonce==NULL)) {
var3 = NEW_core__NativeArray(6l, &type_core__NativeArray__core__String);
if (likely(varonce4!=NULL)) {
var5 = varonce4;
} else {
var6 = " ";
var7 = core__abstract_text___CString___to_s_full(var6, 1l, 1l);
var5 = var7;
varonce4 = var5;
}
((struct instance_core__NativeArray*)var3)->values[1]=var5;
if (likely(varonce8!=NULL)) {
var9 = varonce8;
} else {
var10 = " /* : ";
var11 = core__abstract_text___CString___to_s_full(var10, 6l, 6l);
var9 = var11;
varonce8 = var9;
}
((struct instance_core__NativeArray*)var3)->values[3]=var9;
if (likely(varonce12!=NULL)) {
var13 = varonce12;
} else {
var14 = " */;";
var15 = core__abstract_text___CString___to_s_full(var14, 4l, 4l);
var13 = var15;
varonce12 = var13;
}
((struct instance_core__NativeArray*)var3)->values[5]=var13;
} else {
var3 = varonce;
varonce = NULL;
}
{
var16 = ((val*(*)(val* self))(var_mtype->class->vft[COLOR_nitc__abstract_compiler__MType__ctype]))(var_mtype); /* ctype on <var_mtype:MType>*/
}
((struct instance_core__NativeArray*)var3)->values[0]=var16;
((struct instance_core__NativeArray*)var3)->values[2]=var_name;
{
var17 = ((val*(*)(val* self))(var_mtype->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_mtype); /* to_s on <var_mtype:MType>*/
}
((struct instance_core__NativeArray*)var3)->values[4]=var17;
{
var18 = ((val*(*)(val* self))(var3->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var3); /* native_to_s on <var3:NativeArray[String]>*/
}
varonce = var3;
{
nitc___nitc__AbstractCompilerVisitor___add_decl(self, var18); /* Direct call abstract_compiler#AbstractCompilerVisitor#add_decl on <self:AbstractCompilerVisitor>*/
}
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AbstractCompilerVisitor#assign for (self: AbstractCompilerVisitor, RuntimeVariable, RuntimeVariable) */
void nitc___nitc__AbstractCompilerVisitor___assign(val* self, val* p0, val* p1) {
val* var_left /* var left: RuntimeVariable */;
val* var_right /* var right: RuntimeVariable */;
val* var /* : MType */;
val* var2 /* : MType */;
val* var3 /* : RuntimeVariable */;
val* var4 /* : NativeArray[String] */;
static val* varonce;
static val* varonce5;
val* var6 /* : String */;
char* var7 /* : CString */;
val* var8 /* : String */;
static val* varonce9;
val* var10 /* : String */;
char* var11 /* : CString */;
val* var12 /* : String */;
val* var13 /* : String */;
val* var14 /* : String */;
val* var15 /* : String */;
var_left = p0;
var_right = p1;
{
{ /* Inline abstract_compiler#RuntimeVariable#mtype (var_left) on <var_left:RuntimeVariable> */
var2 = var_left->attrs[COLOR_nitc__abstract_compiler__RuntimeVariable___mtype].val; /* _mtype on <var_left:RuntimeVariable> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1969);
fatal_exit(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
{
var3 = ((val*(*)(val* self, val* p0, val* p1))(self->class->vft[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor__autobox]))(self, var_right, var); /* autobox on <self:AbstractCompilerVisitor>*/
}
var_right = var3;
if (unlikely(varonce==NULL)) {
var4 = NEW_core__NativeArray(4l, &type_core__NativeArray__core__String);
if (likely(varonce5!=NULL)) {
var6 = varonce5;
} else {
var7 = " = ";
var8 = core__abstract_text___CString___to_s_full(var7, 3l, 3l);
var6 = var8;
varonce5 = var6;
}
((struct instance_core__NativeArray*)var4)->values[1]=var6;
if (likely(varonce9!=NULL)) {
var10 = varonce9;
} else {
var11 = ";";
var12 = core__abstract_text___CString___to_s_full(var11, 1l, 1l);
var10 = var12;
varonce9 = var10;
}
((struct instance_core__NativeArray*)var4)->values[3]=var10;
} else {
var4 = varonce;
varonce = NULL;
}
{
var13 = ((val*(*)(val* self))(var_left->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_left); /* to_s on <var_left:RuntimeVariable>*/
}
((struct instance_core__NativeArray*)var4)->values[0]=var13;
{
var14 = ((val*(*)(val* self))(var_right->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_right); /* to_s on <var_right:RuntimeVariable>*/
}
((struct instance_core__NativeArray*)var4)->values[2]=var14;
{
var15 = ((val*(*)(val* self))(var4->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var4); /* native_to_s on <var4:NativeArray[String]>*/
}
varonce = var4;
{
nitc___nitc__AbstractCompilerVisitor___add(self, var15); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:AbstractCompilerVisitor>*/
}
RET_LABEL:;
}
/* method abstract_compiler#AbstractCompilerVisitor#init_instance_or_extern for (self: AbstractCompilerVisitor, MClassType): RuntimeVariable */
val* nitc___nitc__AbstractCompilerVisitor___init_instance_or_extern(val* self, val* p0) {
val* var /* : RuntimeVariable */;
val* var_mtype /* var mtype: MClassType */;
val* var1 /* : String */;
val* var_ctype /* var ctype: String */;
val* var2 /* : MClass */;
val* var4 /* : MClass */;
val* var5 /* : String */;
val* var7 /* : String */;
static val* varonce;
val* var8 /* : String */;
char* var9 /* : CString */;
val* var10 /* : String */;
short int var11 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var13 /* : Bool */;
short int var14 /* : Bool */;
short int var15 /* : Bool */;
short int var16 /* : Bool */;
val* var17 /* : RuntimeVariable */;
val* var_recv /* var recv: nullable Object */;
static val* varonce18;
val* var19 /* : String */;
char* var20 /* : CString */;
val* var21 /* : String */;
short int var22 /* : Bool */;
static val* varonce23;
val* var24 /* : String */;
char* var25 /* : CString */;
val* var26 /* : String */;
val* var27 /* : RuntimeVariable */;
val* var29 /* : NativeArray[String] */;
static val* varonce28;
static val* varonce30;
val* var31 /* : String */;
char* var32 /* : CString */;
val* var33 /* : String */;
static val* varonce34;
val* var35 /* : String */;
char* var36 /* : CString */;
val* var37 /* : String */;
val* var38 /* : String */;
val* var39 /* : RuntimeVariable */;
var_mtype = p0;
{
var1 = nitc__abstract_compiler___MClassType___MType__ctype(var_mtype);
}
var_ctype = var1;
{
{ /* Inline model#MClassType#mclass (var_mtype) on <var_mtype:MClassType> */
var4 = var_mtype->attrs[COLOR_nitc__model__MClassType___mclass].val; /* _mclass on <var_mtype:MClassType> */
if (unlikely(var4 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1197);
fatal_exit(1);
}
var2 = var4;
RET_LABEL3:(void)0;
}
}
{
{ /* Inline model#MClass#name (var2) on <var2:MClass> */
var7 = var2->attrs[COLOR_nitc__model__MClass___name].val; /* _name on <var2:MClass> */
if (unlikely(var7 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 396);
fatal_exit(1);
}
var5 = var7;
RET_LABEL6:(void)0;
}
}
if (likely(varonce!=NULL)) {
var8 = varonce;
} else {
var9 = "NativeArray";
var10 = core__abstract_text___CString___to_s_full(var9, 11l, 11l);
var8 = var10;
varonce = var8;
}
{
{ /* Inline kernel#Object#!= (var5,var8) on <var5:String> */
var_other = var8;
{
var13 = ((short int(*)(val* self, val* p0))(var5->class->vft[COLOR_core__kernel__Object___61d_61d]))(var5, var_other); /* == on <var5:String>*/
}
var14 = !var13;
var11 = var14;
goto RET_LABEL12;
RET_LABEL12:(void)0;
}
}
if (unlikely(!var11)) {
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1566);
fatal_exit(1);
}
{
var15 = nitc__abstract_compiler___MClassType___MType__is_c_primitive(var_mtype);
}
var16 = !var15;
if (var16){
{
var17 = ((val*(*)(val* self, val* p0))(self->class->vft[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor__init_instance]))(self, var_mtype); /* init_instance on <self:AbstractCompilerVisitor>*/
}
var_recv = var17;
} else {
if (likely(varonce18!=NULL)) {
var19 = varonce18;
} else {
var20 = "char*";
var21 = core__abstract_text___CString___to_s_full(var20, 5l, 5l);
var19 = var21;
varonce18 = var19;
}
{
var22 = ((short int(*)(val* self, val* p0))(var_ctype->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_ctype, var19); /* == on <var_ctype:String>*/
}
if (var22){
if (likely(varonce23!=NULL)) {
var24 = varonce23;
} else {
var25 = "NULL/*special!*/";
var26 = core__abstract_text___CString___to_s_full(var25, 16l, 16l);
var24 = var26;
varonce23 = var24;
}
{
var27 = nitc___nitc__AbstractCompilerVisitor___new_expr(self, var24, var_mtype);
}
var_recv = var27;
} else {
if (unlikely(varonce28==NULL)) {
var29 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce30!=NULL)) {
var31 = varonce30;
} else {
var32 = "(";
var33 = core__abstract_text___CString___to_s_full(var32, 1l, 1l);
var31 = var33;
varonce30 = var31;
}
((struct instance_core__NativeArray*)var29)->values[0]=var31;
if (likely(varonce34!=NULL)) {
var35 = varonce34;
} else {
var36 = ")0/*special!*/";
var37 = core__abstract_text___CString___to_s_full(var36, 14l, 14l);
var35 = var37;
varonce34 = var35;
}
((struct instance_core__NativeArray*)var29)->values[2]=var35;
} else {
var29 = varonce28;
varonce28 = NULL;
}
((struct instance_core__NativeArray*)var29)->values[1]=var_ctype;
{
var38 = ((val*(*)(val* self))(var29->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var29); /* native_to_s on <var29:NativeArray[String]>*/
}
varonce28 = var29;
{
var39 = nitc___nitc__AbstractCompilerVisitor___new_expr(self, var38, var_mtype);
}
var_recv = var39;
}
}
var = var_recv;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AbstractCompilerVisitor#set_finalizer for (self: AbstractCompilerVisitor, RuntimeVariable) */
void nitc___nitc__AbstractCompilerVisitor___set_finalizer(val* self, val* p0) {
val* var_recv /* var recv: RuntimeVariable */;
val* var /* : MType */;
val* var2 /* : MType */;
val* var_mtype /* var mtype: MType */;
val* var3 /* : AbstractCompiler */;
val* var5 /* : AbstractCompiler */;
val* var6 /* : MModule */;
val* var8 /* : MModule */;
val* var9 /* : nullable MClassType */;
val* var_finalizable_type /* var finalizable_type: nullable MClassType */;
short int var10 /* : Bool */;
short int var11 /* : Bool */;
short int var12 /* : Bool */;
short int var13 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var15 /* : Bool */;
short int var16 /* : Bool */;
short int var_ /* var : Bool */;
short int var17 /* : Bool */;
short int var18 /* : Bool */;
short int var_19 /* var : Bool */;
val* var20 /* : AbstractCompiler */;
val* var22 /* : AbstractCompiler */;
val* var23 /* : MModule */;
val* var25 /* : MModule */;
short int var26 /* : Bool */;
val* var27 /* : NativeArray[String] */;
static val* varonce;
static val* varonce28;
val* var29 /* : String */;
char* var30 /* : CString */;
val* var31 /* : String */;
static val* varonce32;
val* var33 /* : String */;
char* var34 /* : CString */;
val* var35 /* : String */;
val* var36 /* : String */;
val* var37 /* : String */;
var_recv = p0;
{
{ /* Inline abstract_compiler#RuntimeVariable#mtype (var_recv) on <var_recv:RuntimeVariable> */
var2 = var_recv->attrs[COLOR_nitc__abstract_compiler__RuntimeVariable___mtype].val; /* _mtype on <var_recv:RuntimeVariable> */
if (unlikely(var2 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mtype");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1969);
fatal_exit(1);
}
var = var2;
RET_LABEL1:(void)0;
}
}
var_mtype = var;
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler (self) on <self:AbstractCompilerVisitor> */
var5 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:AbstractCompilerVisitor> */
if (unlikely(var5 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1200);
fatal_exit(1);
}
var3 = var5;
RET_LABEL4:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompiler#mainmodule (var3) on <var3:AbstractCompiler> */
var8 = var3->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___mainmodule].val; /* _mainmodule on <var3:AbstractCompiler> */
if (unlikely(var8 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mainmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 531);
fatal_exit(1);
}
var6 = var8;
RET_LABEL7:(void)0;
}
}
{
var9 = nitc__model___MModule___finalizable_type(var6);
}
var_finalizable_type = var9;
if (var_finalizable_type == NULL) {
var12 = 0; /* is null */
} else {
var12 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_finalizable_type,((val*)NULL)) on <var_finalizable_type:nullable MClassType> */
var_other = ((val*)NULL);
{
var15 = ((short int(*)(val* self, val* p0))(var_finalizable_type->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_finalizable_type, var_other); /* == on <var_finalizable_type:nullable MClassType(MClassType)>*/
}
var16 = !var15;
var13 = var16;
goto RET_LABEL14;
RET_LABEL14:(void)0;
}
var12 = var13;
}
var_ = var12;
if (var12){
{
var17 = ((short int(*)(val* self))(var_mtype->class->vft[COLOR_nitc__model__MType__need_anchor]))(var_mtype); /* need_anchor on <var_mtype:MType>*/
}
var18 = !var17;
var11 = var18;
} else {
var11 = var_;
}
var_19 = var11;
if (var11){
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler (self) on <self:AbstractCompilerVisitor> */
var22 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:AbstractCompilerVisitor> */
if (unlikely(var22 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1200);
fatal_exit(1);
}
var20 = var22;
RET_LABEL21:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompiler#mainmodule (var20) on <var20:AbstractCompiler> */
var25 = var20->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___mainmodule].val; /* _mainmodule on <var20:AbstractCompiler> */
if (unlikely(var25 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mainmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 531);
fatal_exit(1);
}
var23 = var25;
RET_LABEL24:(void)0;
}
}
{
var26 = nitc___nitc__MType___is_subtype(var_mtype, var23, ((val*)NULL), var_finalizable_type);
}
var10 = var26;
} else {
var10 = var_19;
}
if (var10){
if (unlikely(varonce==NULL)) {
var27 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce28!=NULL)) {
var29 = varonce28;
} else {
var30 = "gc_register_finalizer(";
var31 = core__abstract_text___CString___to_s_full(var30, 22l, 22l);
var29 = var31;
varonce28 = var29;
}
((struct instance_core__NativeArray*)var27)->values[0]=var29;
if (likely(varonce32!=NULL)) {
var33 = varonce32;
} else {
var34 = ");";
var35 = core__abstract_text___CString___to_s_full(var34, 2l, 2l);
var33 = var35;
varonce32 = var33;
}
((struct instance_core__NativeArray*)var27)->values[2]=var33;
} else {
var27 = varonce;
varonce = NULL;
}
{
var36 = ((val*(*)(val* self))(var_recv->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_recv); /* to_s on <var_recv:RuntimeVariable>*/
}
((struct instance_core__NativeArray*)var27)->values[1]=var36;
{
var37 = ((val*(*)(val* self))(var27->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var27); /* native_to_s on <var27:NativeArray[String]>*/
}
varonce = var27;
{
nitc___nitc__AbstractCompilerVisitor___add(self, var37); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <self:AbstractCompilerVisitor>*/
}
} else {
}
RET_LABEL:;
}
/* method abstract_compiler#AbstractCompilerVisitor#mmodule for (self: AbstractCompilerVisitor): MModule */
val* nitc___nitc__AbstractCompilerVisitor___mmodule(val* self) {
val* var /* : MModule */;
val* var1 /* : AbstractCompiler */;
val* var3 /* : AbstractCompiler */;
val* var4 /* : MModule */;
val* var6 /* : MModule */;
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler (self) on <self:AbstractCompilerVisitor> */
var3 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:AbstractCompilerVisitor> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1200);
fatal_exit(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompiler#mainmodule (var1) on <var1:AbstractCompiler> */
var6 = var1->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___mainmodule].val; /* _mainmodule on <var1:AbstractCompiler> */
if (unlikely(var6 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mainmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 531);
fatal_exit(1);
}
var4 = var6;
RET_LABEL5:(void)0;
}
}
var = var4;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AbstractCompilerVisitor#int_instance for (self: AbstractCompilerVisitor, Int): RuntimeVariable */
val* nitc___nitc__AbstractCompilerVisitor___int_instance(val* self, long p0) {
val* var /* : RuntimeVariable */;
long var_value /* var value: Int */;
val* var1 /* : MModule */;
val* var2 /* : MClassType */;
val* var_t /* var t: MClassType */;
val* var3 /* : RuntimeVariable */;
val* var4 /* : NativeArray[String] */;
static val* varonce;
static val* varonce5;
val* var6 /* : String */;
char* var7 /* : CString */;
val* var8 /* : String */;
val* var9 /* : String */;
val* var10 /* : String */;
val* var_res /* var res: RuntimeVariable */;
var_value = p0;
{
var1 = nitc___nitc__AbstractCompilerVisitor___mmodule(self);
}
{
var2 = nitc__model___MModule___int_type(var1);
}
var_t = var2;
var3 = NEW_nitc__RuntimeVariable(&type_nitc__RuntimeVariable);
if (unlikely(varonce==NULL)) {
var4 = NEW_core__NativeArray(2l, &type_core__NativeArray__core__String);
if (likely(varonce5!=NULL)) {
var6 = varonce5;
} else {
var7 = "l";
var8 = core__abstract_text___CString___to_s_full(var7, 1l, 1l);
var6 = var8;
varonce5 = var6;
}
((struct instance_core__NativeArray*)var4)->values[1]=var6;
} else {
var4 = varonce;
varonce = NULL;
}
{
var9 = core__flat___Int___core__abstract_text__Object__to_s(var_value);
}
((struct instance_core__NativeArray*)var4)->values[0]=var9;
{
var10 = ((val*(*)(val* self))(var4->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var4); /* native_to_s on <var4:NativeArray[String]>*/
}
varonce = var4;
{
((void(*)(val* self, val* p0))(var3->class->vft[COLOR_nitc__abstract_compiler__RuntimeVariable__name_61d]))(var3, var10); /* name= on <var3:RuntimeVariable>*/
}
{
((void(*)(val* self, val* p0))(var3->class->vft[COLOR_nitc__abstract_compiler__RuntimeVariable__mtype_61d]))(var3, var_t); /* mtype= on <var3:RuntimeVariable>*/
}
{
((void(*)(val* self, val* p0))(var3->class->vft[COLOR_nitc__abstract_compiler__RuntimeVariable__mcasttype_61d]))(var3, var_t); /* mcasttype= on <var3:RuntimeVariable>*/
}
{
((void(*)(val* self))(var3->class->vft[COLOR_core__kernel__Object__init]))(var3); /* init on <var3:RuntimeVariable>*/
}
var_res = var3;
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AbstractCompilerVisitor#byte_instance for (self: AbstractCompilerVisitor, Byte): RuntimeVariable */
val* nitc___nitc__AbstractCompilerVisitor___byte_instance(val* self, unsigned char p0) {
val* var /* : RuntimeVariable */;
unsigned char var_value /* var value: Byte */;
val* var1 /* : MModule */;
val* var2 /* : MClassType */;
val* var_t /* var t: MClassType */;
val* var3 /* : RuntimeVariable */;
val* var4 /* : NativeArray[String] */;
static val* varonce;
static val* varonce5;
val* var6 /* : String */;
char* var7 /* : CString */;
val* var8 /* : String */;
static val* varonce9;
val* var10 /* : String */;
char* var11 /* : CString */;
val* var12 /* : String */;
val* var13 /* : String */;
val* var14 /* : String */;
val* var_res /* var res: RuntimeVariable */;
var_value = p0;
{
var1 = nitc___nitc__AbstractCompilerVisitor___mmodule(self);
}
{
var2 = nitc__model___MModule___byte_type(var1);
}
var_t = var2;
var3 = NEW_nitc__RuntimeVariable(&type_nitc__RuntimeVariable);
if (unlikely(varonce==NULL)) {
var4 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce5!=NULL)) {
var6 = varonce5;
} else {
var7 = "((unsigned char)";
var8 = core__abstract_text___CString___to_s_full(var7, 16l, 16l);
var6 = var8;
varonce5 = var6;
}
((struct instance_core__NativeArray*)var4)->values[0]=var6;
if (likely(varonce9!=NULL)) {
var10 = varonce9;
} else {
var11 = ")";
var12 = core__abstract_text___CString___to_s_full(var11, 1l, 1l);
var10 = var12;
varonce9 = var10;
}
((struct instance_core__NativeArray*)var4)->values[2]=var10;
} else {
var4 = varonce;
varonce = NULL;
}
{
var13 = core__abstract_text___Byte___Object__to_s(var_value);
}
((struct instance_core__NativeArray*)var4)->values[1]=var13;
{
var14 = ((val*(*)(val* self))(var4->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var4); /* native_to_s on <var4:NativeArray[String]>*/
}
varonce = var4;
{
((void(*)(val* self, val* p0))(var3->class->vft[COLOR_nitc__abstract_compiler__RuntimeVariable__name_61d]))(var3, var14); /* name= on <var3:RuntimeVariable>*/
}
{
((void(*)(val* self, val* p0))(var3->class->vft[COLOR_nitc__abstract_compiler__RuntimeVariable__mtype_61d]))(var3, var_t); /* mtype= on <var3:RuntimeVariable>*/
}
{
((void(*)(val* self, val* p0))(var3->class->vft[COLOR_nitc__abstract_compiler__RuntimeVariable__mcasttype_61d]))(var3, var_t); /* mcasttype= on <var3:RuntimeVariable>*/
}
{
((void(*)(val* self))(var3->class->vft[COLOR_core__kernel__Object__init]))(var3); /* init on <var3:RuntimeVariable>*/
}
var_res = var3;
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AbstractCompilerVisitor#int8_instance for (self: AbstractCompilerVisitor, Int8): RuntimeVariable */
val* nitc___nitc__AbstractCompilerVisitor___int8_instance(val* self, int8_t p0) {
val* var /* : RuntimeVariable */;
int8_t var_value /* var value: Int8 */;
val* var1 /* : MModule */;
val* var2 /* : MClassType */;
val* var_t /* var t: MClassType */;
val* var3 /* : RuntimeVariable */;
val* var4 /* : NativeArray[String] */;
static val* varonce;
static val* varonce5;
val* var6 /* : String */;
char* var7 /* : CString */;
val* var8 /* : String */;
static val* varonce9;
val* var10 /* : String */;
char* var11 /* : CString */;
val* var12 /* : String */;
val* var13 /* : String */;
val* var14 /* : String */;
val* var_res /* var res: RuntimeVariable */;
var_value = p0;
{
var1 = nitc___nitc__AbstractCompilerVisitor___mmodule(self);
}
{
var2 = nitc__model___MModule___int8_type(var1);
}
var_t = var2;
var3 = NEW_nitc__RuntimeVariable(&type_nitc__RuntimeVariable);
if (unlikely(varonce==NULL)) {
var4 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce5!=NULL)) {
var6 = varonce5;
} else {
var7 = "INT8_C(";
var8 = core__abstract_text___CString___to_s_full(var7, 7l, 7l);
var6 = var8;
varonce5 = var6;
}
((struct instance_core__NativeArray*)var4)->values[0]=var6;
if (likely(varonce9!=NULL)) {
var10 = varonce9;
} else {
var11 = ")";
var12 = core__abstract_text___CString___to_s_full(var11, 1l, 1l);
var10 = var12;
varonce9 = var10;
}
((struct instance_core__NativeArray*)var4)->values[2]=var10;
} else {
var4 = varonce;
varonce = NULL;
}
{
var13 = core__fixed_ints_text___Int8___core__abstract_text__Object__to_s(var_value);
}
((struct instance_core__NativeArray*)var4)->values[1]=var13;
{
var14 = ((val*(*)(val* self))(var4->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var4); /* native_to_s on <var4:NativeArray[String]>*/
}
varonce = var4;
{
((void(*)(val* self, val* p0))(var3->class->vft[COLOR_nitc__abstract_compiler__RuntimeVariable__name_61d]))(var3, var14); /* name= on <var3:RuntimeVariable>*/
}
{
((void(*)(val* self, val* p0))(var3->class->vft[COLOR_nitc__abstract_compiler__RuntimeVariable__mtype_61d]))(var3, var_t); /* mtype= on <var3:RuntimeVariable>*/
}
{
((void(*)(val* self, val* p0))(var3->class->vft[COLOR_nitc__abstract_compiler__RuntimeVariable__mcasttype_61d]))(var3, var_t); /* mcasttype= on <var3:RuntimeVariable>*/
}
{
((void(*)(val* self))(var3->class->vft[COLOR_core__kernel__Object__init]))(var3); /* init on <var3:RuntimeVariable>*/
}
var_res = var3;
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AbstractCompilerVisitor#int16_instance for (self: AbstractCompilerVisitor, Int16): RuntimeVariable */
val* nitc___nitc__AbstractCompilerVisitor___int16_instance(val* self, int16_t p0) {
val* var /* : RuntimeVariable */;
int16_t var_value /* var value: Int16 */;
val* var1 /* : MModule */;
val* var2 /* : MClassType */;
val* var_t /* var t: MClassType */;
val* var3 /* : RuntimeVariable */;
val* var4 /* : NativeArray[String] */;
static val* varonce;
static val* varonce5;
val* var6 /* : String */;
char* var7 /* : CString */;
val* var8 /* : String */;
static val* varonce9;
val* var10 /* : String */;
char* var11 /* : CString */;
val* var12 /* : String */;
val* var13 /* : String */;
val* var14 /* : String */;
val* var_res /* var res: RuntimeVariable */;
var_value = p0;
{
var1 = nitc___nitc__AbstractCompilerVisitor___mmodule(self);
}
{
var2 = nitc__model___MModule___int16_type(var1);
}
var_t = var2;
var3 = NEW_nitc__RuntimeVariable(&type_nitc__RuntimeVariable);
if (unlikely(varonce==NULL)) {
var4 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce5!=NULL)) {
var6 = varonce5;
} else {
var7 = "INT16_C(";
var8 = core__abstract_text___CString___to_s_full(var7, 8l, 8l);
var6 = var8;
varonce5 = var6;
}
((struct instance_core__NativeArray*)var4)->values[0]=var6;
if (likely(varonce9!=NULL)) {
var10 = varonce9;
} else {
var11 = ")";
var12 = core__abstract_text___CString___to_s_full(var11, 1l, 1l);
var10 = var12;
varonce9 = var10;
}
((struct instance_core__NativeArray*)var4)->values[2]=var10;
} else {
var4 = varonce;
varonce = NULL;
}
{
var13 = core__fixed_ints_text___Int16___core__abstract_text__Object__to_s(var_value);
}
((struct instance_core__NativeArray*)var4)->values[1]=var13;
{
var14 = ((val*(*)(val* self))(var4->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var4); /* native_to_s on <var4:NativeArray[String]>*/
}
varonce = var4;
{
((void(*)(val* self, val* p0))(var3->class->vft[COLOR_nitc__abstract_compiler__RuntimeVariable__name_61d]))(var3, var14); /* name= on <var3:RuntimeVariable>*/
}
{
((void(*)(val* self, val* p0))(var3->class->vft[COLOR_nitc__abstract_compiler__RuntimeVariable__mtype_61d]))(var3, var_t); /* mtype= on <var3:RuntimeVariable>*/
}
{
((void(*)(val* self, val* p0))(var3->class->vft[COLOR_nitc__abstract_compiler__RuntimeVariable__mcasttype_61d]))(var3, var_t); /* mcasttype= on <var3:RuntimeVariable>*/
}
{
((void(*)(val* self))(var3->class->vft[COLOR_core__kernel__Object__init]))(var3); /* init on <var3:RuntimeVariable>*/
}
var_res = var3;
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AbstractCompilerVisitor#uint16_instance for (self: AbstractCompilerVisitor, UInt16): RuntimeVariable */
val* nitc___nitc__AbstractCompilerVisitor___uint16_instance(val* self, uint16_t p0) {
val* var /* : RuntimeVariable */;
uint16_t var_value /* var value: UInt16 */;
val* var1 /* : MModule */;
val* var2 /* : MClassType */;
val* var_t /* var t: MClassType */;
val* var3 /* : RuntimeVariable */;
val* var4 /* : NativeArray[String] */;
static val* varonce;
static val* varonce5;
val* var6 /* : String */;
char* var7 /* : CString */;
val* var8 /* : String */;
static val* varonce9;
val* var10 /* : String */;
char* var11 /* : CString */;
val* var12 /* : String */;
val* var13 /* : String */;
val* var14 /* : String */;
val* var_res /* var res: RuntimeVariable */;
var_value = p0;
{
var1 = nitc___nitc__AbstractCompilerVisitor___mmodule(self);
}
{
var2 = nitc__model___MModule___uint16_type(var1);
}
var_t = var2;
var3 = NEW_nitc__RuntimeVariable(&type_nitc__RuntimeVariable);
if (unlikely(varonce==NULL)) {
var4 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce5!=NULL)) {
var6 = varonce5;
} else {
var7 = "UINT16_C(";
var8 = core__abstract_text___CString___to_s_full(var7, 9l, 9l);
var6 = var8;
varonce5 = var6;
}
((struct instance_core__NativeArray*)var4)->values[0]=var6;
if (likely(varonce9!=NULL)) {
var10 = varonce9;
} else {
var11 = ")";
var12 = core__abstract_text___CString___to_s_full(var11, 1l, 1l);
var10 = var12;
varonce9 = var10;
}
((struct instance_core__NativeArray*)var4)->values[2]=var10;
} else {
var4 = varonce;
varonce = NULL;
}
{
var13 = core__fixed_ints_text___UInt16___core__abstract_text__Object__to_s(var_value);
}
((struct instance_core__NativeArray*)var4)->values[1]=var13;
{
var14 = ((val*(*)(val* self))(var4->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var4); /* native_to_s on <var4:NativeArray[String]>*/
}
varonce = var4;
{
((void(*)(val* self, val* p0))(var3->class->vft[COLOR_nitc__abstract_compiler__RuntimeVariable__name_61d]))(var3, var14); /* name= on <var3:RuntimeVariable>*/
}
{
((void(*)(val* self, val* p0))(var3->class->vft[COLOR_nitc__abstract_compiler__RuntimeVariable__mtype_61d]))(var3, var_t); /* mtype= on <var3:RuntimeVariable>*/
}
{
((void(*)(val* self, val* p0))(var3->class->vft[COLOR_nitc__abstract_compiler__RuntimeVariable__mcasttype_61d]))(var3, var_t); /* mcasttype= on <var3:RuntimeVariable>*/
}
{
((void(*)(val* self))(var3->class->vft[COLOR_core__kernel__Object__init]))(var3); /* init on <var3:RuntimeVariable>*/
}
var_res = var3;
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AbstractCompilerVisitor#int32_instance for (self: AbstractCompilerVisitor, Int32): RuntimeVariable */
val* nitc___nitc__AbstractCompilerVisitor___int32_instance(val* self, int32_t p0) {
val* var /* : RuntimeVariable */;
int32_t var_value /* var value: Int32 */;
val* var1 /* : MModule */;
val* var2 /* : MClassType */;
val* var_t /* var t: MClassType */;
val* var3 /* : RuntimeVariable */;
val* var4 /* : NativeArray[String] */;
static val* varonce;
static val* varonce5;
val* var6 /* : String */;
char* var7 /* : CString */;
val* var8 /* : String */;
static val* varonce9;
val* var10 /* : String */;
char* var11 /* : CString */;
val* var12 /* : String */;
val* var13 /* : String */;
val* var14 /* : String */;
val* var_res /* var res: RuntimeVariable */;
var_value = p0;
{
var1 = nitc___nitc__AbstractCompilerVisitor___mmodule(self);
}
{
var2 = nitc__model___MModule___int32_type(var1);
}
var_t = var2;
var3 = NEW_nitc__RuntimeVariable(&type_nitc__RuntimeVariable);
if (unlikely(varonce==NULL)) {
var4 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce5!=NULL)) {
var6 = varonce5;
} else {
var7 = "INT32_C(";
var8 = core__abstract_text___CString___to_s_full(var7, 8l, 8l);
var6 = var8;
varonce5 = var6;
}
((struct instance_core__NativeArray*)var4)->values[0]=var6;
if (likely(varonce9!=NULL)) {
var10 = varonce9;
} else {
var11 = ")";
var12 = core__abstract_text___CString___to_s_full(var11, 1l, 1l);
var10 = var12;
varonce9 = var10;
}
((struct instance_core__NativeArray*)var4)->values[2]=var10;
} else {
var4 = varonce;
varonce = NULL;
}
{
var13 = core__fixed_ints_text___Int32___core__abstract_text__Object__to_s(var_value);
}
((struct instance_core__NativeArray*)var4)->values[1]=var13;
{
var14 = ((val*(*)(val* self))(var4->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var4); /* native_to_s on <var4:NativeArray[String]>*/
}
varonce = var4;
{
((void(*)(val* self, val* p0))(var3->class->vft[COLOR_nitc__abstract_compiler__RuntimeVariable__name_61d]))(var3, var14); /* name= on <var3:RuntimeVariable>*/
}
{
((void(*)(val* self, val* p0))(var3->class->vft[COLOR_nitc__abstract_compiler__RuntimeVariable__mtype_61d]))(var3, var_t); /* mtype= on <var3:RuntimeVariable>*/
}
{
((void(*)(val* self, val* p0))(var3->class->vft[COLOR_nitc__abstract_compiler__RuntimeVariable__mcasttype_61d]))(var3, var_t); /* mcasttype= on <var3:RuntimeVariable>*/
}
{
((void(*)(val* self))(var3->class->vft[COLOR_core__kernel__Object__init]))(var3); /* init on <var3:RuntimeVariable>*/
}
var_res = var3;
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AbstractCompilerVisitor#uint32_instance for (self: AbstractCompilerVisitor, UInt32): RuntimeVariable */
val* nitc___nitc__AbstractCompilerVisitor___uint32_instance(val* self, uint32_t p0) {
val* var /* : RuntimeVariable */;
uint32_t var_value /* var value: UInt32 */;
val* var1 /* : MModule */;
val* var2 /* : MClassType */;
val* var_t /* var t: MClassType */;
val* var3 /* : RuntimeVariable */;
val* var4 /* : NativeArray[String] */;
static val* varonce;
static val* varonce5;
val* var6 /* : String */;
char* var7 /* : CString */;
val* var8 /* : String */;
static val* varonce9;
val* var10 /* : String */;
char* var11 /* : CString */;
val* var12 /* : String */;
val* var13 /* : String */;
val* var14 /* : String */;
val* var_res /* var res: RuntimeVariable */;
var_value = p0;
{
var1 = nitc___nitc__AbstractCompilerVisitor___mmodule(self);
}
{
var2 = nitc__model___MModule___uint32_type(var1);
}
var_t = var2;
var3 = NEW_nitc__RuntimeVariable(&type_nitc__RuntimeVariable);
if (unlikely(varonce==NULL)) {
var4 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce5!=NULL)) {
var6 = varonce5;
} else {
var7 = "UINT32_C(";
var8 = core__abstract_text___CString___to_s_full(var7, 9l, 9l);
var6 = var8;
varonce5 = var6;
}
((struct instance_core__NativeArray*)var4)->values[0]=var6;
if (likely(varonce9!=NULL)) {
var10 = varonce9;
} else {
var11 = ")";
var12 = core__abstract_text___CString___to_s_full(var11, 1l, 1l);
var10 = var12;
varonce9 = var10;
}
((struct instance_core__NativeArray*)var4)->values[2]=var10;
} else {
var4 = varonce;
varonce = NULL;
}
{
var13 = core__fixed_ints_text___UInt32___core__abstract_text__Object__to_s(var_value);
}
((struct instance_core__NativeArray*)var4)->values[1]=var13;
{
var14 = ((val*(*)(val* self))(var4->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var4); /* native_to_s on <var4:NativeArray[String]>*/
}
varonce = var4;
{
((void(*)(val* self, val* p0))(var3->class->vft[COLOR_nitc__abstract_compiler__RuntimeVariable__name_61d]))(var3, var14); /* name= on <var3:RuntimeVariable>*/
}
{
((void(*)(val* self, val* p0))(var3->class->vft[COLOR_nitc__abstract_compiler__RuntimeVariable__mtype_61d]))(var3, var_t); /* mtype= on <var3:RuntimeVariable>*/
}
{
((void(*)(val* self, val* p0))(var3->class->vft[COLOR_nitc__abstract_compiler__RuntimeVariable__mcasttype_61d]))(var3, var_t); /* mcasttype= on <var3:RuntimeVariable>*/
}
{
((void(*)(val* self))(var3->class->vft[COLOR_core__kernel__Object__init]))(var3); /* init on <var3:RuntimeVariable>*/
}
var_res = var3;
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AbstractCompilerVisitor#char_instance for (self: AbstractCompilerVisitor, Char): RuntimeVariable */
val* nitc___nitc__AbstractCompilerVisitor___char_instance(val* self, uint32_t p0) {
val* var /* : RuntimeVariable */;
uint32_t var_value /* var value: Char */;
val* var1 /* : MModule */;
val* var2 /* : MClassType */;
val* var_t /* var t: MClassType */;
long var3 /* : Int */;
long var5 /* : Int */;
short int var6 /* : Bool */;
short int var8 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var9 /* : Bool */;
val* var10 /* : RuntimeVariable */;
val* var11 /* : NativeArray[String] */;
static val* varonce;
static val* varonce12;
val* var13 /* : String */;
char* var14 /* : CString */;
val* var15 /* : String */;
static val* varonce16;
val* var17 /* : String */;
char* var18 /* : CString */;
val* var19 /* : String */;
val* var20 /* : String */;
val* var21 /* : String */;
val* var22 /* : String */;
val* var23 /* : RuntimeVariable */;
val* var25 /* : NativeArray[String] */;
static val* varonce24;
long var26 /* : Int */;
long var28 /* : Int */;
val* var29 /* : String */;
val* var30 /* : String */;
var_value = p0;
{
var1 = nitc___nitc__AbstractCompilerVisitor___mmodule(self);
}
{
var2 = nitc__model___MModule___char_type(var1);
}
var_t = var2;
{
{ /* Inline kernel#Char#code_point (var_value) on <var_value:Char> */
var5 = (long)var_value;
var3 = var5;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
}
{
{ /* Inline kernel#Int#< (var3,128l) on <var3:Int> */
/* Covariant cast for argument 0 (i) <128l:Int> isa OTHER */
/* <128l:Int> isa OTHER */
var8 = 1; /* easy <128l:Int> isa OTHER*/
if (unlikely(!var8)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var9 = var3 < 128l;
var6 = var9;
goto RET_LABEL7;
RET_LABEL7:(void)0;
}
}
if (var6){
var10 = NEW_nitc__RuntimeVariable(&type_nitc__RuntimeVariable);
if (unlikely(varonce==NULL)) {
var11 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce12!=NULL)) {
var13 = varonce12;
} else {
var14 = "\'";
var15 = core__abstract_text___CString___to_s_full(var14, 1l, 1l);
var13 = var15;
varonce12 = var13;
}
((struct instance_core__NativeArray*)var11)->values[0]=var13;
if (likely(varonce16!=NULL)) {
var17 = varonce16;
} else {
var18 = "\'";
var19 = core__abstract_text___CString___to_s_full(var18, 1l, 1l);
var17 = var19;
varonce16 = var17;
}
((struct instance_core__NativeArray*)var11)->values[2]=var17;
} else {
var11 = varonce;
varonce = NULL;
}
{
var20 = core__abstract_text___Char___Object__to_s(var_value);
}
{
var21 = ((val*(*)(val* self))(var20->class->vft[COLOR_core__abstract_text__Text__escape_to_c]))(var20); /* escape_to_c on <var20:String>*/
}
((struct instance_core__NativeArray*)var11)->values[1]=var21;
{
var22 = ((val*(*)(val* self))(var11->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var11); /* native_to_s on <var11:NativeArray[String]>*/
}
varonce = var11;
{
((void(*)(val* self, val* p0))(var10->class->vft[COLOR_nitc__abstract_compiler__RuntimeVariable__name_61d]))(var10, var22); /* name= on <var10:RuntimeVariable>*/
}
{
((void(*)(val* self, val* p0))(var10->class->vft[COLOR_nitc__abstract_compiler__RuntimeVariable__mtype_61d]))(var10, var_t); /* mtype= on <var10:RuntimeVariable>*/
}
{
((void(*)(val* self, val* p0))(var10->class->vft[COLOR_nitc__abstract_compiler__RuntimeVariable__mcasttype_61d]))(var10, var_t); /* mcasttype= on <var10:RuntimeVariable>*/
}
{
((void(*)(val* self))(var10->class->vft[COLOR_core__kernel__Object__init]))(var10); /* init on <var10:RuntimeVariable>*/
}
var = var10;
goto RET_LABEL;
} else {
var23 = NEW_nitc__RuntimeVariable(&type_nitc__RuntimeVariable);
if (unlikely(varonce24==NULL)) {
var25 = NEW_core__NativeArray(1l, &type_core__NativeArray__core__String);
} else {
var25 = varonce24;
varonce24 = NULL;
}
{
{ /* Inline kernel#Char#code_point (var_value) on <var_value:Char> */
var28 = (long)var_value;
var26 = var28;
goto RET_LABEL27;
RET_LABEL27:(void)0;
}
}
var29 = core__flat___Int___core__abstract_text__Object__to_s(var26);
((struct instance_core__NativeArray*)var25)->values[0]=var29;
{
var30 = ((val*(*)(val* self))(var25->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var25); /* native_to_s on <var25:NativeArray[String]>*/
}
varonce24 = var25;
{
((void(*)(val* self, val* p0))(var23->class->vft[COLOR_nitc__abstract_compiler__RuntimeVariable__name_61d]))(var23, var30); /* name= on <var23:RuntimeVariable>*/
}
{
((void(*)(val* self, val* p0))(var23->class->vft[COLOR_nitc__abstract_compiler__RuntimeVariable__mtype_61d]))(var23, var_t); /* mtype= on <var23:RuntimeVariable>*/
}
{
((void(*)(val* self, val* p0))(var23->class->vft[COLOR_nitc__abstract_compiler__RuntimeVariable__mcasttype_61d]))(var23, var_t); /* mcasttype= on <var23:RuntimeVariable>*/
}
{
((void(*)(val* self))(var23->class->vft[COLOR_core__kernel__Object__init]))(var23); /* init on <var23:RuntimeVariable>*/
}
var = var23;
goto RET_LABEL;
}
RET_LABEL:;
return var;
}
/* method abstract_compiler#AbstractCompilerVisitor#float_instance for (self: AbstractCompilerVisitor, String): RuntimeVariable */
val* nitc___nitc__AbstractCompilerVisitor___float_instance(val* self, val* p0) {
val* var /* : RuntimeVariable */;
val* var_value /* var value: String */;
val* var1 /* : MModule */;
val* var2 /* : MClassType */;
val* var_t /* var t: MClassType */;
val* var3 /* : RuntimeVariable */;
val* var4 /* : NativeArray[String] */;
static val* varonce;
val* var5 /* : String */;
val* var_res /* var res: RuntimeVariable */;
var_value = p0;
{
var1 = nitc___nitc__AbstractCompilerVisitor___mmodule(self);
}
{
var2 = nitc__model___MModule___float_type(var1);
}
var_t = var2;
var3 = NEW_nitc__RuntimeVariable(&type_nitc__RuntimeVariable);
if (unlikely(varonce==NULL)) {
var4 = NEW_core__NativeArray(1l, &type_core__NativeArray__core__String);
} else {
var4 = varonce;
varonce = NULL;
}
((struct instance_core__NativeArray*)var4)->values[0]=var_value;
{
var5 = ((val*(*)(val* self))(var4->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var4); /* native_to_s on <var4:NativeArray[String]>*/
}
varonce = var4;
{
((void(*)(val* self, val* p0))(var3->class->vft[COLOR_nitc__abstract_compiler__RuntimeVariable__name_61d]))(var3, var5); /* name= on <var3:RuntimeVariable>*/
}
{
((void(*)(val* self, val* p0))(var3->class->vft[COLOR_nitc__abstract_compiler__RuntimeVariable__mtype_61d]))(var3, var_t); /* mtype= on <var3:RuntimeVariable>*/
}
{
((void(*)(val* self, val* p0))(var3->class->vft[COLOR_nitc__abstract_compiler__RuntimeVariable__mcasttype_61d]))(var3, var_t); /* mcasttype= on <var3:RuntimeVariable>*/
}
{
((void(*)(val* self))(var3->class->vft[COLOR_core__kernel__Object__init]))(var3); /* init on <var3:RuntimeVariable>*/
}
var_res = var3;
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AbstractCompilerVisitor#bool_instance for (self: AbstractCompilerVisitor, Bool): RuntimeVariable */
val* nitc___nitc__AbstractCompilerVisitor___bool_instance(val* self, short int p0) {
val* var /* : RuntimeVariable */;
short int var_value /* var value: Bool */;
val* var1 /* : String */;
static val* varonce;
val* var2 /* : String */;
char* var3 /* : CString */;
val* var4 /* : String */;
static val* varonce5;
val* var6 /* : String */;
char* var7 /* : CString */;
val* var8 /* : String */;
val* var_s /* var s: String */;
val* var9 /* : RuntimeVariable */;
val* var10 /* : MClassType */;
val* var11 /* : MClassType */;
val* var_res /* var res: RuntimeVariable */;
var_value = p0;
if (var_value){
if (likely(varonce!=NULL)) {
var2 = varonce;
} else {
var3 = "1";
var4 = core__abstract_text___CString___to_s_full(var3, 1l, 1l);
var2 = var4;
varonce = var2;
}
var1 = var2;
} else {
if (likely(varonce5!=NULL)) {
var6 = varonce5;
} else {
var7 = "0";
var8 = core__abstract_text___CString___to_s_full(var7, 1l, 1l);
var6 = var8;
varonce5 = var6;
}
var1 = var6;
}
var_s = var1;
var9 = NEW_nitc__RuntimeVariable(&type_nitc__RuntimeVariable);
{
var10 = nitc___nitc__AbstractCompilerVisitor___bool_type(self);
}
{
var11 = nitc___nitc__AbstractCompilerVisitor___bool_type(self);
}
{
((void(*)(val* self, val* p0))(var9->class->vft[COLOR_nitc__abstract_compiler__RuntimeVariable__name_61d]))(var9, var_s); /* name= on <var9:RuntimeVariable>*/
}
{
((void(*)(val* self, val* p0))(var9->class->vft[COLOR_nitc__abstract_compiler__RuntimeVariable__mtype_61d]))(var9, var10); /* mtype= on <var9:RuntimeVariable>*/
}
{
((void(*)(val* self, val* p0))(var9->class->vft[COLOR_nitc__abstract_compiler__RuntimeVariable__mcasttype_61d]))(var9, var11); /* mcasttype= on <var9:RuntimeVariable>*/
}
{
((void(*)(val* self))(var9->class->vft[COLOR_core__kernel__Object__init]))(var9); /* init on <var9:RuntimeVariable>*/
}
var_res = var9;
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method abstract_compiler#AbstractCompilerVisitor#null_instance for (self: AbstractCompilerVisitor): RuntimeVariable */
val* nitc___nitc__AbstractCompilerVisitor___null_instance(val* self) {
val* var /* : RuntimeVariable */;
val* var1 /* : AbstractCompiler */;
val* var3 /* : AbstractCompiler */;
val* var4 /* : MModule */;
val* var6 /* : MModule */;
val* var7 /* : Model */;
val* var9 /* : Model */;
val* var10 /* : MNullType */;
val* var12 /* : MNullType */;
val* var_t /* var t: MNullType */;
val* var13 /* : RuntimeVariable */;
static val* varonce;
val* var14 /* : String */;
char* var15 /* : CString */;
val* var16 /* : String */;
val* var_res /* var res: RuntimeVariable */;
{
{ /* Inline abstract_compiler#AbstractCompilerVisitor#compiler (self) on <self:AbstractCompilerVisitor> */
var3 = self->attrs[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor___compiler].val; /* _compiler on <self:AbstractCompilerVisitor> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _compiler");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 1200);
fatal_exit(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
{ /* Inline abstract_compiler#AbstractCompiler#mainmodule (var1) on <var1:AbstractCompiler> */
var6 = var1->attrs[COLOR_nitc__abstract_compiler__AbstractCompiler___mainmodule].val; /* _mainmodule on <var1:AbstractCompiler> */
if (unlikely(var6 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mainmodule");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 531);
fatal_exit(1);
}
var4 = var6;
RET_LABEL5:(void)0;
}
}
{
{ /* Inline mmodule#MModule#model (var4) on <var4:MModule> */
var9 = var4->attrs[COLOR_nitc__mmodule__MModule___model].val; /* _model on <var4:MModule> */
if (unlikely(var9 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _model");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__mmodule, 77);
fatal_exit(1);
}
var7 = var9;
RET_LABEL8:(void)0;
}
}
{
{ /* Inline model#Model#null_type (var7) on <var7:Model> */
var12 = var7->attrs[COLOR_nitc__model__Model___null_type].val; /* _null_type on <var7:Model> */
if (unlikely(var12 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _null_type");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 103);
fatal_exit(1);
}
var10 = var12;
RET_LABEL11:(void)0;
}
}
var_t = var10;
var13 = NEW_nitc__RuntimeVariable(&type_nitc__RuntimeVariable);
if (likely(varonce!=NULL)) {
var14 = varonce;
} else {
var15 = "((val*)NULL)";
var16 = core__abstract_text___CString___to_s_full(var15, 12l, 12l);
var14 = var16;
varonce = var14;
}
{
((void(*)(val* self, val* p0))(var13->class->vft[COLOR_nitc__abstract_compiler__RuntimeVariable__name_61d]))(var13, var14); /* name= on <var13:RuntimeVariable>*/
}
{
((void(*)(val* self, val* p0))(var13->class->vft[COLOR_nitc__abstract_compiler__RuntimeVariable__mtype_61d]))(var13, var_t); /* mtype= on <var13:RuntimeVariable>*/
}
{
((void(*)(val* self, val* p0))(var13->class->vft[COLOR_nitc__abstract_compiler__RuntimeVariable__mcasttype_61d]))(var13, var_t); /* mcasttype= on <var13:RuntimeVariable>*/
}
{
((void(*)(val* self))(var13->class->vft[COLOR_core__kernel__Object__init]))(var13); /* init on <var13:RuntimeVariable>*/
}
var_res = var13;
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
