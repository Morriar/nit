#include "nitcc__grammar.sep.0.h"
/* method grammar$Generator$gen_to_nit for (self: Generator, LRAutomaton, String) */
void nitcc__grammar___nitcc__grammar__Generator___gen_to_nit(val* self, val* p0, val* p1) {
val* var_autom /* var autom: LRAutomaton */;
val* var_name /* var name: String */;
val* var /* : Array[LRState] */;
val* var_states /* var states: Array[LRState] */;
val* var1 /* : Gram */;
val* var_gram /* var gram: Gram */;
val* var2 /* : NativeArray[String] */;
static val* varonce;
static val* varonce3;
val* var4 /* : String */;
char* var5 /* : CString */;
val* var6 /* : String */;
val* var7 /* : nullable Int */;
val* var8 /* : nullable Int */;
val* var9 /* : nullable Bool */;
val* var10 /* : nullable Bool */;
val* var11 /* : String */;
val* var13 /* : NativeArray[String] */;
static val* varonce12;
static val* varonce14;
val* var15 /* : String */;
char* var16 /* : CString */;
val* var17 /* : String */;
val* var18 /* : nullable Int */;
val* var19 /* : nullable Int */;
val* var20 /* : nullable Bool */;
val* var21 /* : nullable Bool */;
static val* varonce22;
val* var23 /* : String */;
char* var24 /* : CString */;
val* var25 /* : String */;
val* var26 /* : nullable Int */;
val* var27 /* : nullable Int */;
val* var28 /* : nullable Bool */;
val* var29 /* : nullable Bool */;
val* var30 /* : String */;
static val* varonce31;
val* var32 /* : String */;
char* var33 /* : CString */;
val* var34 /* : String */;
val* var35 /* : nullable Int */;
val* var36 /* : nullable Int */;
val* var37 /* : nullable Bool */;
val* var38 /* : nullable Bool */;
val* var40 /* : NativeArray[String] */;
static val* varonce39;
static val* varonce41;
val* var42 /* : String */;
char* var43 /* : CString */;
val* var44 /* : String */;
val* var45 /* : nullable Int */;
val* var46 /* : nullable Int */;
val* var47 /* : nullable Bool */;
val* var48 /* : nullable Bool */;
val* var49 /* : String */;
static val* varonce50;
val* var51 /* : String */;
char* var52 /* : CString */;
val* var53 /* : String */;
val* var54 /* : nullable Int */;
val* var55 /* : nullable Int */;
val* var56 /* : nullable Bool */;
val* var57 /* : nullable Bool */;
val* var59 /* : NativeArray[String] */;
static val* varonce58;
static val* varonce60;
val* var61 /* : String */;
char* var62 /* : CString */;
val* var63 /* : String */;
val* var64 /* : nullable Int */;
val* var65 /* : nullable Int */;
val* var66 /* : nullable Bool */;
val* var67 /* : nullable Bool */;
val* var68 /* : nullable Object */;
val* var69 /* : String */;
val* var70 /* : String */;
static val* varonce71;
val* var72 /* : String */;
char* var73 /* : CString */;
val* var74 /* : String */;
val* var75 /* : nullable Int */;
val* var76 /* : nullable Int */;
val* var77 /* : nullable Bool */;
val* var78 /* : nullable Bool */;
val* var_ /* var : Array[LRState] */;
val* var79 /* : Iterator[nullable Object] */;
val* var_80 /* var : IndexedIterator[LRState] */;
short int var81 /* : Bool */;
val* var82 /* : nullable Object */;
val* var_s /* var s: LRState */;
val* var84 /* : NativeArray[String] */;
static val* varonce83;
static val* varonce85;
val* var86 /* : String */;
char* var87 /* : CString */;
val* var88 /* : String */;
val* var89 /* : nullable Int */;
val* var90 /* : nullable Int */;
val* var91 /* : nullable Bool */;
val* var92 /* : nullable Bool */;
static val* varonce93;
val* var94 /* : String */;
char* var95 /* : CString */;
val* var96 /* : String */;
val* var97 /* : nullable Int */;
val* var98 /* : nullable Int */;
val* var99 /* : nullable Bool */;
val* var100 /* : nullable Bool */;
static val* varonce101;
val* var102 /* : String */;
char* var103 /* : CString */;
val* var104 /* : String */;
val* var105 /* : nullable Int */;
val* var106 /* : nullable Int */;
val* var107 /* : nullable Bool */;
val* var108 /* : nullable Bool */;
val* var109 /* : String */;
val* var110 /* : String */;
val* var111 /* : String */;
val* var112 /* : String */;
val* var113 /* : Array[Production] */;
val* var_114 /* var : Array[Production] */;
val* var115 /* : Iterator[nullable Object] */;
val* var_116 /* var : IndexedIterator[Production] */;
short int var117 /* : Bool */;
val* var119 /* : nullable Object */;
val* var_p /* var p: Production */;
val* var121 /* : NativeArray[String] */;
static val* varonce120;
static val* varonce122;
val* var123 /* : String */;
char* var124 /* : CString */;
val* var125 /* : String */;
val* var126 /* : nullable Int */;
val* var127 /* : nullable Int */;
val* var128 /* : nullable Bool */;
val* var129 /* : nullable Bool */;
static val* varonce130;
val* var131 /* : String */;
char* var132 /* : CString */;
val* var133 /* : String */;
val* var134 /* : nullable Int */;
val* var135 /* : nullable Int */;
val* var136 /* : nullable Bool */;
val* var137 /* : nullable Bool */;
static val* varonce138;
val* var139 /* : String */;
char* var140 /* : CString */;
val* var141 /* : String */;
val* var142 /* : nullable Int */;
val* var143 /* : nullable Int */;
val* var144 /* : nullable Bool */;
val* var145 /* : nullable Bool */;
val* var146 /* : String */;
val* var147 /* : String */;
val* var148 /* : String */;
val* var149 /* : String */;
val* var150 /* : Array[Alternative] */;
val* var_151 /* var : Array[Alternative] */;
val* var152 /* : Iterator[nullable Object] */;
val* var_153 /* var : IndexedIterator[Alternative] */;
short int var154 /* : Bool */;
val* var156 /* : nullable Object */;
val* var_a /* var a: Alternative */;
val* var158 /* : NativeArray[String] */;
static val* varonce157;
static val* varonce159;
val* var160 /* : String */;
char* var161 /* : CString */;
val* var162 /* : String */;
val* var163 /* : nullable Int */;
val* var164 /* : nullable Int */;
val* var165 /* : nullable Bool */;
val* var166 /* : nullable Bool */;
static val* varonce167;
val* var168 /* : String */;
char* var169 /* : CString */;
val* var170 /* : String */;
val* var171 /* : nullable Int */;
val* var172 /* : nullable Int */;
val* var173 /* : nullable Bool */;
val* var174 /* : nullable Bool */;
val* var175 /* : String */;
val* var176 /* : String */;
static val* varonce177;
val* var178 /* : String */;
char* var179 /* : CString */;
val* var180 /* : String */;
val* var181 /* : nullable Int */;
val* var182 /* : nullable Int */;
val* var183 /* : nullable Bool */;
val* var184 /* : nullable Bool */;
static val* varonce185;
val* var186 /* : String */;
char* var187 /* : CString */;
val* var188 /* : String */;
val* var189 /* : nullable Int */;
val* var190 /* : nullable Int */;
val* var191 /* : nullable Bool */;
val* var192 /* : nullable Bool */;
val* var_193 /* var : Array[LRState] */;
val* var194 /* : Iterator[nullable Object] */;
val* var_195 /* var : IndexedIterator[LRState] */;
short int var196 /* : Bool */;
val* var198 /* : nullable Object */;
val* var_s199 /* var s: LRState */;
short int var200 /* : Bool */;
short int var201 /* : Bool */;
val* var204 /* : NativeArray[String] */;
static val* varonce203;
static val* varonce205;
val* var206 /* : String */;
char* var207 /* : CString */;
val* var208 /* : String */;
val* var209 /* : nullable Int */;
val* var210 /* : nullable Int */;
val* var211 /* : nullable Bool */;
val* var212 /* : nullable Bool */;
val* var213 /* : String */;
val* var214 /* : String */;
val* var216 /* : NativeArray[String] */;
static val* varonce215;
static val* varonce217;
val* var218 /* : String */;
char* var219 /* : CString */;
val* var220 /* : String */;
val* var221 /* : nullable Int */;
val* var222 /* : nullable Int */;
val* var223 /* : nullable Bool */;
val* var224 /* : nullable Bool */;
static val* varonce225;
val* var226 /* : String */;
char* var227 /* : CString */;
val* var228 /* : String */;
val* var229 /* : nullable Int */;
val* var230 /* : nullable Int */;
val* var231 /* : nullable Bool */;
val* var232 /* : nullable Bool */;
static val* varonce233;
val* var234 /* : String */;
char* var235 /* : CString */;
val* var236 /* : String */;
val* var237 /* : nullable Int */;
val* var238 /* : nullable Int */;
val* var239 /* : nullable Bool */;
val* var240 /* : nullable Bool */;
val* var241 /* : ArraySet[Token] */;
long var242 /* : Int */;
val* var243 /* : String */;
val* var244 /* : ArraySet[Alternative] */;
long var245 /* : Int */;
val* var246 /* : String */;
val* var247 /* : String */;
val* var249 /* : NativeArray[String] */;
static val* varonce248;
static val* varonce250;
val* var251 /* : String */;
char* var252 /* : CString */;
val* var253 /* : String */;
val* var254 /* : nullable Int */;
val* var255 /* : nullable Int */;
val* var256 /* : nullable Bool */;
val* var257 /* : nullable Bool */;
static val* varonce258;
val* var259 /* : String */;
char* var260 /* : CString */;
val* var261 /* : String */;
val* var262 /* : nullable Int */;
val* var263 /* : nullable Int */;
val* var264 /* : nullable Bool */;
val* var265 /* : nullable Bool */;
val* var266 /* : String */;
val* var267 /* : String */;
val* var268 /* : ArraySet[Alternative] */;
long var269 /* : Int */;
short int var270 /* : Bool */;
short int var272 /* : Bool */;
short int var273 /* : Bool */;
static val* varonce274;
val* var275 /* : String */;
char* var276 /* : CString */;
val* var277 /* : String */;
val* var278 /* : nullable Int */;
val* var279 /* : nullable Int */;
val* var280 /* : nullable Bool */;
val* var281 /* : nullable Bool */;
val* var283 /* : NativeArray[String] */;
static val* varonce282;
static val* varonce284;
val* var285 /* : String */;
char* var286 /* : CString */;
val* var287 /* : String */;
val* var288 /* : nullable Int */;
val* var289 /* : nullable Int */;
val* var290 /* : nullable Bool */;
val* var291 /* : nullable Bool */;
static val* varonce292;
val* var293 /* : String */;
char* var294 /* : CString */;
val* var295 /* : String */;
val* var296 /* : nullable Int */;
val* var297 /* : nullable Int */;
val* var298 /* : nullable Bool */;
val* var299 /* : nullable Bool */;
val* var300 /* : ArraySet[Alternative] */;
val* var301 /* : nullable Object */;
val* var302 /* : String */;
val* var303 /* : String */;
static val* varonce304;
val* var305 /* : String */;
char* var306 /* : CString */;
val* var307 /* : String */;
val* var308 /* : nullable Int */;
val* var309 /* : nullable Int */;
val* var310 /* : nullable Bool */;
val* var311 /* : nullable Bool */;
static val* varonce312;
val* var313 /* : String */;
char* var314 /* : CString */;
val* var315 /* : String */;
val* var316 /* : nullable Int */;
val* var317 /* : nullable Int */;
val* var318 /* : nullable Bool */;
val* var319 /* : nullable Bool */;
val* var320 /* : Array[Token] */;
val* var_321 /* var : Array[Token] */;
val* var322 /* : Iterator[nullable Object] */;
val* var_323 /* var : IndexedIterator[Token] */;
short int var324 /* : Bool */;
val* var326 /* : nullable Object */;
val* var_t /* var t: Token */;
val* var327 /* : String */;
static val* varonce328;
val* var329 /* : String */;
char* var330 /* : CString */;
val* var331 /* : String */;
val* var332 /* : nullable Int */;
val* var333 /* : nullable Int */;
val* var334 /* : nullable Bool */;
val* var335 /* : nullable Bool */;
short int var336 /* : Bool */;
val* var338 /* : NativeArray[String] */;
static val* varonce337;
static val* varonce339;
val* var340 /* : String */;
char* var341 /* : CString */;
val* var342 /* : String */;
val* var343 /* : nullable Int */;
val* var344 /* : nullable Int */;
val* var345 /* : nullable Bool */;
val* var346 /* : nullable Bool */;
val* var347 /* : String */;
val* var348 /* : String */;
val* var350 /* : NativeArray[String] */;
static val* varonce349;
static val* varonce351;
val* var352 /* : String */;
char* var353 /* : CString */;
val* var354 /* : String */;
val* var355 /* : nullable Int */;
val* var356 /* : nullable Int */;
val* var357 /* : nullable Bool */;
val* var358 /* : nullable Bool */;
val* var359 /* : String */;
val* var360 /* : String */;
static val* varonce361;
val* var362 /* : String */;
char* var363 /* : CString */;
val* var364 /* : String */;
val* var365 /* : nullable Int */;
val* var366 /* : nullable Int */;
val* var367 /* : nullable Bool */;
val* var368 /* : nullable Bool */;
val* var369 /* : ArraySet[LRState] */;
val* var_370 /* var : ArraySet[LRState] */;
val* var371 /* : Iterator[nullable Object] */;
val* var_372 /* var : Iterator[LRState] */;
short int var373 /* : Bool */;
val* var375 /* : nullable Object */;
val* var_s376 /* var s: LRState */;
short int var377 /* : Bool */;
short int var378 /* : Bool */;
val* var381 /* : NativeArray[String] */;
static val* varonce380;
static val* varonce382;
val* var383 /* : String */;
char* var384 /* : CString */;
val* var385 /* : String */;
val* var386 /* : nullable Int */;
val* var387 /* : nullable Int */;
val* var388 /* : nullable Bool */;
val* var389 /* : nullable Bool */;
static val* varonce390;
val* var391 /* : String */;
char* var392 /* : CString */;
val* var393 /* : String */;
val* var394 /* : nullable Int */;
val* var395 /* : nullable Int */;
val* var396 /* : nullable Bool */;
val* var397 /* : nullable Bool */;
val* var398 /* : String */;
val* var399 /* : String */;
static val* varonce400;
val* var401 /* : String */;
char* var402 /* : CString */;
val* var403 /* : String */;
val* var404 /* : nullable Int */;
val* var405 /* : nullable Int */;
val* var406 /* : nullable Bool */;
val* var407 /* : nullable Bool */;
val* var408 /* : ArraySet[LRState] */;
val* var_409 /* var : ArraySet[LRState] */;
val* var410 /* : Iterator[nullable Object] */;
val* var_411 /* var : Iterator[LRState] */;
short int var412 /* : Bool */;
val* var414 /* : nullable Object */;
val* var_s415 /* var s: LRState */;
short int var416 /* : Bool */;
short int var417 /* : Bool */;
val* var419 /* : ArraySet[Alternative] */;
long var420 /* : Int */;
short int var421 /* : Bool */;
short int var423 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var424 /* : Bool */;
val* var426 /* : NativeArray[String] */;
static val* varonce425;
static val* varonce427;
val* var428 /* : String */;
char* var429 /* : CString */;
val* var430 /* : String */;
val* var431 /* : nullable Int */;
val* var432 /* : nullable Int */;
val* var433 /* : nullable Bool */;
val* var434 /* : nullable Bool */;
static val* varonce435;
val* var436 /* : String */;
char* var437 /* : CString */;
val* var438 /* : String */;
val* var439 /* : nullable Int */;
val* var440 /* : nullable Int */;
val* var441 /* : nullable Bool */;
val* var442 /* : nullable Bool */;
val* var443 /* : String */;
val* var444 /* : String */;
val* var446 /* : NativeArray[String] */;
static val* varonce445;
static val* varonce447;
val* var448 /* : String */;
char* var449 /* : CString */;
val* var450 /* : String */;
val* var451 /* : nullable Int */;
val* var452 /* : nullable Int */;
val* var453 /* : nullable Bool */;
val* var454 /* : nullable Bool */;
static val* varonce455;
val* var456 /* : String */;
char* var457 /* : CString */;
val* var458 /* : String */;
val* var459 /* : nullable Int */;
val* var460 /* : nullable Int */;
val* var461 /* : nullable Bool */;
val* var462 /* : nullable Bool */;
val* var463 /* : HashMap[Token, Set[Item]] */;
val* var464 /* : nullable Object */;
val* var465 /* : nullable Object */;
val* var466 /* : Alternative */;
val* var467 /* : String */;
val* var468 /* : String */;
static val* varonce469;
val* var470 /* : String */;
char* var471 /* : CString */;
val* var472 /* : String */;
val* var473 /* : nullable Int */;
val* var474 /* : nullable Int */;
val* var475 /* : nullable Bool */;
val* var476 /* : nullable Bool */;
val* var478 /* : NativeArray[String] */;
static val* varonce477;
static val* varonce479;
val* var480 /* : String */;
char* var481 /* : CString */;
val* var482 /* : String */;
val* var483 /* : nullable Int */;
val* var484 /* : nullable Int */;
val* var485 /* : nullable Bool */;
val* var486 /* : nullable Bool */;
static val* varonce487;
val* var488 /* : String */;
char* var489 /* : CString */;
val* var490 /* : String */;
val* var491 /* : nullable Int */;
val* var492 /* : nullable Int */;
val* var493 /* : nullable Bool */;
val* var494 /* : nullable Bool */;
val* var495 /* : String */;
val* var496 /* : String */;
val* var497 /* : String */;
static val* varonce498;
val* var499 /* : String */;
char* var500 /* : CString */;
val* var501 /* : String */;
val* var502 /* : nullable Int */;
val* var503 /* : nullable Int */;
val* var504 /* : nullable Bool */;
val* var505 /* : nullable Bool */;
static val* varonce506;
val* var507 /* : String */;
char* var508 /* : CString */;
val* var509 /* : String */;
val* var510 /* : nullable Int */;
val* var511 /* : nullable Int */;
val* var512 /* : nullable Bool */;
val* var513 /* : nullable Bool */;
val* var_514 /* var : Array[LRState] */;
val* var515 /* : Iterator[nullable Object] */;
val* var_516 /* var : IndexedIterator[LRState] */;
short int var517 /* : Bool */;
val* var519 /* : nullable Object */;
val* var_s520 /* var s: LRState */;
val* var521 /* : ArraySet[Production] */;
long var522 /* : Int */;
short int var523 /* : Bool */;
short int var525 /* : Bool */;
int cltype526;
int idtype527;
const char* var_class_name528;
short int var529 /* : Bool */;
val* var532 /* : NativeArray[String] */;
static val* varonce531;
static val* varonce533;
val* var534 /* : String */;
char* var535 /* : CString */;
val* var536 /* : String */;
val* var537 /* : nullable Int */;
val* var538 /* : nullable Int */;
val* var539 /* : nullable Bool */;
val* var540 /* : nullable Bool */;
static val* varonce541;
val* var542 /* : String */;
char* var543 /* : CString */;
val* var544 /* : String */;
val* var545 /* : nullable Int */;
val* var546 /* : nullable Int */;
val* var547 /* : nullable Bool */;
val* var548 /* : nullable Bool */;
val* var549 /* : String */;
val* var550 /* : String */;
static val* varonce551;
val* var552 /* : String */;
char* var553 /* : CString */;
val* var554 /* : String */;
val* var555 /* : nullable Int */;
val* var556 /* : nullable Int */;
val* var557 /* : nullable Bool */;
val* var558 /* : nullable Bool */;
val* var559 /* : Array[Production] */;
val* var_560 /* var : Array[Production] */;
val* var561 /* : Iterator[nullable Object] */;
val* var_562 /* var : IndexedIterator[Production] */;
short int var563 /* : Bool */;
val* var565 /* : nullable Object */;
val* var_p566 /* var p: Production */;
val* var568 /* : NativeArray[String] */;
static val* varonce567;
static val* varonce569;
val* var570 /* : String */;
char* var571 /* : CString */;
val* var572 /* : String */;
val* var573 /* : nullable Int */;
val* var574 /* : nullable Int */;
val* var575 /* : nullable Bool */;
val* var576 /* : nullable Bool */;
val* var577 /* : String */;
val* var578 /* : String */;
static val* varonce579;
val* var580 /* : String */;
char* var581 /* : CString */;
val* var582 /* : String */;
val* var583 /* : nullable Int */;
val* var584 /* : nullable Int */;
val* var585 /* : nullable Bool */;
val* var586 /* : nullable Bool */;
val* var587 /* : ArraySet[LRState] */;
val* var_588 /* var : ArraySet[LRState] */;
val* var589 /* : Iterator[nullable Object] */;
val* var_590 /* var : Iterator[LRState] */;
short int var591 /* : Bool */;
val* var593 /* : nullable Object */;
val* var_s594 /* var s: LRState */;
val* var595 /* : ArraySet[Production] */;
long var596 /* : Int */;
short int var597 /* : Bool */;
short int var599 /* : Bool */;
int cltype600;
int idtype601;
const char* var_class_name602;
short int var603 /* : Bool */;
val* var606 /* : NativeArray[String] */;
static val* varonce605;
static val* varonce607;
val* var608 /* : String */;
char* var609 /* : CString */;
val* var610 /* : String */;
val* var611 /* : nullable Int */;
val* var612 /* : nullable Int */;
val* var613 /* : nullable Bool */;
val* var614 /* : nullable Bool */;
static val* varonce615;
val* var616 /* : String */;
char* var617 /* : CString */;
val* var618 /* : String */;
val* var619 /* : nullable Int */;
val* var620 /* : nullable Int */;
val* var621 /* : nullable Bool */;
val* var622 /* : nullable Bool */;
val* var623 /* : String */;
val* var624 /* : String */;
static val* varonce625;
val* var626 /* : String */;
char* var627 /* : CString */;
val* var628 /* : String */;
val* var629 /* : nullable Int */;
val* var630 /* : nullable Int */;
val* var631 /* : nullable Bool */;
val* var632 /* : nullable Bool */;
static val* varonce633;
val* var634 /* : String */;
char* var635 /* : CString */;
val* var636 /* : String */;
val* var637 /* : nullable Int */;
val* var638 /* : nullable Int */;
val* var639 /* : nullable Bool */;
val* var640 /* : nullable Bool */;
val* var641 /* : Array[Production] */;
val* var642 /* : Array[nullable Object] */;
val* var_ps /* var ps: Array[Production] */;
val* var643 /* : Array[Production] */;
val* var_644 /* var : Array[Production] */;
val* var645 /* : Iterator[nullable Object] */;
val* var_646 /* var : IndexedIterator[Production] */;
short int var647 /* : Bool */;
val* var649 /* : nullable Object */;
val* var_p650 /* var p: Production */;
short int var651 /* : Bool */;
val* var652 /* : nullable Production */;
short int var653 /* : Bool */;
short int var654 /* : Bool */;
short int var_655 /* var : Bool */;
short int var656 /* : Bool */;
short int var657 /* : Bool */;
short int var658 /* : Bool */;
val* var659 /* : String */;
static val* varonce660;
val* var661 /* : String */;
char* var662 /* : CString */;
val* var663 /* : String */;
val* var664 /* : nullable Int */;
val* var665 /* : nullable Int */;
val* var666 /* : nullable Bool */;
val* var667 /* : nullable Bool */;
short int var668 /* : Bool */;
short int var_669 /* var : Bool */;
val* var670 /* : String */;
static val* varonce671;
val* var672 /* : String */;
char* var673 /* : CString */;
val* var674 /* : String */;
val* var675 /* : nullable Int */;
val* var676 /* : nullable Int */;
val* var677 /* : nullable Bool */;
val* var678 /* : nullable Bool */;
short int var679 /* : Bool */;
val* var682 /* : NativeArray[String] */;
static val* varonce681;
static val* varonce683;
val* var684 /* : String */;
char* var685 /* : CString */;
val* var686 /* : String */;
val* var687 /* : nullable Int */;
val* var688 /* : nullable Int */;
val* var689 /* : nullable Bool */;
val* var690 /* : nullable Bool */;
val* var691 /* : String */;
val* var692 /* : String */;
static val* varonce693;
val* var694 /* : String */;
char* var695 /* : CString */;
val* var696 /* : String */;
val* var697 /* : nullable Int */;
val* var698 /* : nullable Int */;
val* var699 /* : nullable Bool */;
val* var700 /* : nullable Bool */;
val* var702 /* : NativeArray[String] */;
static val* varonce701;
static val* varonce703;
val* var704 /* : String */;
char* var705 /* : CString */;
val* var706 /* : String */;
val* var707 /* : nullable Int */;
val* var708 /* : nullable Int */;
val* var709 /* : nullable Bool */;
val* var710 /* : nullable Bool */;
static val* varonce711;
val* var712 /* : String */;
char* var713 /* : CString */;
val* var714 /* : String */;
val* var715 /* : nullable Int */;
val* var716 /* : nullable Int */;
val* var717 /* : nullable Bool */;
val* var718 /* : nullable Bool */;
val* var719 /* : String */;
val* var720 /* : String */;
val* var721 /* : String */;
static val* varonce722;
val* var723 /* : String */;
char* var724 /* : CString */;
val* var725 /* : String */;
val* var726 /* : nullable Int */;
val* var727 /* : nullable Int */;
val* var728 /* : nullable Bool */;
val* var729 /* : nullable Bool */;
val* var730 /* : Array[Alternative] */;
val* var731 /* : Array[nullable Object] */;
val* var_als /* var als: Array[Alternative] */;
val* var732 /* : Array[Alternative] */;
val* var_733 /* var : Array[Alternative] */;
val* var734 /* : Iterator[nullable Object] */;
val* var_735 /* var : IndexedIterator[Alternative] */;
short int var736 /* : Bool */;
val* var738 /* : nullable Object */;
val* var_a739 /* var a: Alternative */;
short int var740 /* : Bool */;
val* var743 /* : NativeArray[String] */;
static val* varonce742;
static val* varonce744;
val* var745 /* : String */;
char* var746 /* : CString */;
val* var747 /* : String */;
val* var748 /* : nullable Int */;
val* var749 /* : nullable Int */;
val* var750 /* : nullable Bool */;
val* var751 /* : nullable Bool */;
val* var752 /* : String */;
val* var753 /* : String */;
short int var754 /* : Bool */;
static val* varonce755;
val* var756 /* : String */;
char* var757 /* : CString */;
val* var758 /* : String */;
val* var759 /* : nullable Int */;
val* var760 /* : nullable Int */;
val* var761 /* : nullable Bool */;
val* var762 /* : nullable Bool */;
val* var764 /* : NativeArray[String] */;
static val* varonce763;
static val* varonce765;
val* var766 /* : String */;
char* var767 /* : CString */;
val* var768 /* : String */;
val* var769 /* : nullable Int */;
val* var770 /* : nullable Int */;
val* var771 /* : nullable Bool */;
val* var772 /* : nullable Bool */;
val* var773 /* : String */;
val* var774 /* : String */;
val* var776 /* : NativeArray[String] */;
static val* varonce775;
static val* varonce777;
val* var778 /* : String */;
char* var779 /* : CString */;
val* var780 /* : String */;
val* var781 /* : nullable Int */;
val* var782 /* : nullable Int */;
val* var783 /* : nullable Bool */;
val* var784 /* : nullable Bool */;
static val* varonce785;
val* var786 /* : String */;
char* var787 /* : CString */;
val* var788 /* : String */;
val* var789 /* : nullable Int */;
val* var790 /* : nullable Int */;
val* var791 /* : nullable Bool */;
val* var792 /* : nullable Bool */;
val* var793 /* : String */;
val* var794 /* : String */;
val* var795 /* : String */;
val* var796 /* : Array[String] */;
val* var_initarg /* var initarg: Array[String] */;
long var_i /* var i: Int */;
val* var797 /* : Array[Element] */;
long var798 /* : Int */;
long var_799 /* var : Int */;
short int var800 /* : Bool */;
short int var802 /* : Bool */;
int cltype803;
int idtype804;
const char* var_class_name805;
short int var806 /* : Bool */;
val* var809 /* : NativeArray[String] */;
static val* varonce808;
static val* varonce810;
val* var811 /* : String */;
char* var812 /* : CString */;
val* var813 /* : String */;
val* var814 /* : nullable Int */;
val* var815 /* : nullable Int */;
val* var816 /* : nullable Bool */;
val* var817 /* : nullable Bool */;
static val* varonce818;
val* var819 /* : String */;
char* var820 /* : CString */;
val* var821 /* : String */;
val* var822 /* : nullable Int */;
val* var823 /* : nullable Int */;
val* var824 /* : nullable Bool */;
val* var825 /* : nullable Bool */;
val* var826 /* : String */;
val* var827 /* : Array[Element] */;
val* var828 /* : nullable Object */;
val* var829 /* : String */;
val* var830 /* : String */;
val* var832 /* : NativeArray[String] */;
static val* varonce831;
static val* varonce833;
val* var834 /* : String */;
char* var835 /* : CString */;
val* var836 /* : String */;
val* var837 /* : nullable Int */;
val* var838 /* : nullable Int */;
val* var839 /* : nullable Bool */;
val* var840 /* : nullable Bool */;
static val* varonce841;
val* var842 /* : String */;
char* var843 /* : CString */;
val* var844 /* : String */;
val* var845 /* : nullable Int */;
val* var846 /* : nullable Int */;
val* var847 /* : nullable Bool */;
val* var848 /* : nullable Bool */;
val* var849 /* : String */;
val* var850 /* : Array[Element] */;
val* var851 /* : nullable Object */;
val* var852 /* : String */;
val* var853 /* : String */;
long var854 /* : Int */;
short int var855 /* : Bool */;
static val* varonce856;
val* var857 /* : String */;
char* var858 /* : CString */;
val* var859 /* : String */;
val* var860 /* : nullable Int */;
val* var861 /* : nullable Int */;
val* var862 /* : nullable Bool */;
val* var863 /* : nullable Bool */;
val* var865 /* : NativeArray[String] */;
static val* varonce864;
static val* varonce866;
val* var867 /* : String */;
char* var868 /* : CString */;
val* var869 /* : String */;
val* var870 /* : nullable Int */;
val* var871 /* : nullable Int */;
val* var872 /* : nullable Bool */;
val* var873 /* : nullable Bool */;
static val* varonce874;
val* var875 /* : String */;
char* var876 /* : CString */;
val* var877 /* : String */;
val* var878 /* : nullable Int */;
val* var879 /* : nullable Int */;
val* var880 /* : nullable Bool */;
val* var881 /* : nullable Bool */;
static val* varonce882;
val* var883 /* : String */;
char* var884 /* : CString */;
val* var885 /* : String */;
val* var886 /* : nullable Int */;
val* var887 /* : nullable Int */;
val* var888 /* : nullable Bool */;
val* var889 /* : nullable Bool */;
val* var890 /* : String */;
val* var891 /* : String */;
long var_i892 /* var i: Int */;
val* var893 /* : Array[Element] */;
long var894 /* : Int */;
long var_895 /* var : Int */;
short int var896 /* : Bool */;
short int var898 /* : Bool */;
int cltype899;
int idtype900;
const char* var_class_name901;
short int var902 /* : Bool */;
val* var905 /* : NativeArray[String] */;
static val* varonce904;
static val* varonce906;
val* var907 /* : String */;
char* var908 /* : CString */;
val* var909 /* : String */;
val* var910 /* : nullable Int */;
val* var911 /* : nullable Int */;
val* var912 /* : nullable Bool */;
val* var913 /* : nullable Bool */;
static val* varonce914;
val* var915 /* : String */;
char* var916 /* : CString */;
val* var917 /* : String */;
val* var918 /* : nullable Int */;
val* var919 /* : nullable Int */;
val* var920 /* : nullable Bool */;
val* var921 /* : nullable Bool */;
val* var922 /* : String */;
val* var923 /* : String */;
val* var924 /* : String */;
long var925 /* : Int */;
static val* varonce926;
val* var927 /* : String */;
char* var928 /* : CString */;
val* var929 /* : String */;
val* var930 /* : nullable Int */;
val* var931 /* : nullable Int */;
val* var932 /* : nullable Bool */;
val* var933 /* : nullable Bool */;
val* var935 /* : NativeArray[String] */;
static val* varonce934;
static val* varonce936;
val* var937 /* : String */;
char* var938 /* : CString */;
val* var939 /* : String */;
val* var940 /* : nullable Int */;
val* var941 /* : nullable Int */;
val* var942 /* : nullable Bool */;
val* var943 /* : nullable Bool */;
val* var944 /* : Array[Element] */;
long var945 /* : Int */;
val* var946 /* : String */;
val* var947 /* : String */;
static val* varonce948;
val* var949 /* : String */;
char* var950 /* : CString */;
val* var951 /* : String */;
val* var952 /* : nullable Int */;
val* var953 /* : nullable Int */;
val* var954 /* : nullable Bool */;
val* var955 /* : nullable Bool */;
long var_i956 /* var i: Int */;
val* var957 /* : Array[Element] */;
long var958 /* : Int */;
long var_959 /* var : Int */;
short int var960 /* : Bool */;
short int var962 /* : Bool */;
int cltype963;
int idtype964;
const char* var_class_name965;
short int var966 /* : Bool */;
val* var969 /* : NativeArray[String] */;
static val* varonce968;
static val* varonce970;
val* var971 /* : String */;
char* var972 /* : CString */;
val* var973 /* : String */;
val* var974 /* : nullable Int */;
val* var975 /* : nullable Int */;
val* var976 /* : nullable Bool */;
val* var977 /* : nullable Bool */;
static val* varonce978;
val* var979 /* : String */;
char* var980 /* : CString */;
val* var981 /* : String */;
val* var982 /* : nullable Int */;
val* var983 /* : nullable Int */;
val* var984 /* : nullable Bool */;
val* var985 /* : nullable Bool */;
val* var986 /* : String */;
val* var987 /* : String */;
val* var988 /* : String */;
long var989 /* : Int */;
static val* varonce990;
val* var991 /* : String */;
char* var992 /* : CString */;
val* var993 /* : String */;
val* var994 /* : nullable Int */;
val* var995 /* : nullable Int */;
val* var996 /* : nullable Bool */;
val* var997 /* : nullable Bool */;
static val* varonce998;
val* var999 /* : String */;
char* var1000 /* : CString */;
val* var1001 /* : String */;
val* var1002 /* : nullable Int */;
val* var1003 /* : nullable Int */;
val* var1004 /* : nullable Bool */;
val* var1005 /* : nullable Bool */;
static val* varonce1006;
val* var1007 /* : String */;
char* var1008 /* : CString */;
val* var1009 /* : String */;
val* var1010 /* : nullable Int */;
val* var1011 /* : nullable Int */;
val* var1012 /* : nullable Bool */;
val* var1013 /* : nullable Bool */;
val* var_1014 /* var : Array[LRState] */;
val* var1015 /* : Iterator[nullable Object] */;
val* var_1016 /* var : IndexedIterator[LRState] */;
short int var1017 /* : Bool */;
val* var1019 /* : nullable Object */;
val* var_s1020 /* var s: LRState */;
val* var1022 /* : NativeArray[String] */;
static val* varonce1021;
static val* varonce1023;
val* var1024 /* : String */;
char* var1025 /* : CString */;
val* var1026 /* : String */;
val* var1027 /* : nullable Int */;
val* var1028 /* : nullable Int */;
val* var1029 /* : nullable Bool */;
val* var1030 /* : nullable Bool */;
val* var1031 /* : String */;
val* var1032 /* : String */;
val* var1034 /* : NativeArray[String] */;
static val* varonce1033;
static val* varonce1035;
val* var1036 /* : String */;
char* var1037 /* : CString */;
val* var1038 /* : String */;
val* var1039 /* : nullable Int */;
val* var1040 /* : nullable Int */;
val* var1041 /* : nullable Bool */;
val* var1042 /* : nullable Bool */;
val* var1043 /* : String */;
val* var1044 /* : String */;
static val* varonce1045;
val* var1046 /* : String */;
char* var1047 /* : CString */;
val* var1048 /* : String */;
val* var1049 /* : nullable Int */;
val* var1050 /* : nullable Int */;
val* var1051 /* : nullable Bool */;
val* var1052 /* : nullable Bool */;
val* var1054 /* : NativeArray[String] */;
static val* varonce1053;
static val* varonce1055;
val* var1056 /* : String */;
char* var1057 /* : CString */;
val* var1058 /* : String */;
val* var1059 /* : nullable Int */;
val* var1060 /* : nullable Int */;
val* var1061 /* : nullable Bool */;
val* var1062 /* : nullable Bool */;
static val* varonce1063;
val* var1064 /* : String */;
char* var1065 /* : CString */;
val* var1066 /* : String */;
val* var1067 /* : nullable Int */;
val* var1068 /* : nullable Int */;
val* var1069 /* : nullable Bool */;
val* var1070 /* : nullable Bool */;
val* var1071 /* : String */;
val* var1072 /* : String */;
val* var1073 /* : String */;
val* var1074 /* : Array[String] */;
val* var_err /* var err: Array[String] */;
val* var1075 /* : Array[LRTransition] */;
val* var_1076 /* var : Array[LRTransition] */;
val* var1077 /* : Iterator[nullable Object] */;
val* var_1078 /* var : IndexedIterator[LRTransition] */;
short int var1079 /* : Bool */;
val* var1081 /* : nullable Object */;
val* var_t1082 /* var t: LRTransition */;
val* var1083 /* : Element */;
val* var_e /* var e: Element */;
short int var1084 /* : Bool */;
int cltype1085;
int idtype1086;
val* var1087 /* : String */;
short int var1088 /* : Bool */;
val* var1089 /* : Array[LRTransition] */;
val* var_1090 /* var : Array[LRTransition] */;
val* var1091 /* : Iterator[nullable Object] */;
val* var_1092 /* var : IndexedIterator[LRTransition] */;
short int var1093 /* : Bool */;
val* var1095 /* : nullable Object */;
val* var_t1096 /* var t: LRTransition */;
val* var1097 /* : Element */;
val* var_e1098 /* var e: Element */;
short int var1099 /* : Bool */;
int cltype1100;
int idtype1101;
val* var1102 /* : String */;
val* var1104 /* : NativeArray[String] */;
static val* varonce1103;
static val* varonce1105;
val* var1106 /* : String */;
char* var1107 /* : CString */;
val* var1108 /* : String */;
val* var1109 /* : nullable Int */;
val* var1110 /* : nullable Int */;
val* var1111 /* : nullable Bool */;
val* var1112 /* : nullable Bool */;
static val* varonce1113;
val* var1114 /* : String */;
char* var1115 /* : CString */;
val* var1116 /* : String */;
val* var1117 /* : nullable Int */;
val* var1118 /* : nullable Int */;
val* var1119 /* : nullable Bool */;
val* var1120 /* : nullable Bool */;
static val* varonce1121;
val* var1122 /* : String */;
char* var1123 /* : CString */;
val* var1124 /* : String */;
val* var1125 /* : nullable Int */;
val* var1126 /* : nullable Int */;
val* var1127 /* : nullable Bool */;
val* var1128 /* : nullable Bool */;
val* var1129 /* : String */;
val* var1130 /* : String */;
val* var1131 /* : String */;
static val* varonce1132;
val* var1133 /* : String */;
char* var1134 /* : CString */;
val* var1135 /* : String */;
val* var1136 /* : nullable Int */;
val* var1137 /* : nullable Int */;
val* var1138 /* : nullable Bool */;
val* var1139 /* : nullable Bool */;
short int var1140 /* : Bool */;
val* var1142 /* : NativeArray[String] */;
static val* varonce1141;
static val* varonce1143;
val* var1144 /* : String */;
char* var1145 /* : CString */;
val* var1146 /* : String */;
val* var1147 /* : nullable Int */;
val* var1148 /* : nullable Int */;
val* var1149 /* : nullable Bool */;
val* var1150 /* : nullable Bool */;
static val* varonce1151;
val* var1152 /* : String */;
char* var1153 /* : CString */;
val* var1154 /* : String */;
val* var1155 /* : nullable Int */;
val* var1156 /* : nullable Int */;
val* var1157 /* : nullable Bool */;
val* var1158 /* : nullable Bool */;
val* var1159 /* : String */;
val* var1160 /* : String */;
val* var1161 /* : ArraySet[Alternative] */;
long var1162 /* : Int */;
short int var1163 /* : Bool */;
short int var1165 /* : Bool */;
val* var1167 /* : NativeArray[String] */;
static val* varonce1166;
static val* varonce1168;
val* var1169 /* : String */;
char* var1170 /* : CString */;
val* var1171 /* : String */;
val* var1172 /* : nullable Int */;
val* var1173 /* : nullable Int */;
val* var1174 /* : nullable Bool */;
val* var1175 /* : nullable Bool */;
static val* varonce1176;
val* var1177 /* : String */;
char* var1178 /* : CString */;
val* var1179 /* : String */;
val* var1180 /* : nullable Int */;
val* var1181 /* : nullable Int */;
val* var1182 /* : nullable Bool */;
val* var1183 /* : nullable Bool */;
val* var1184 /* : ArraySet[Alternative] */;
val* var1185 /* : nullable Object */;
val* var1186 /* : String */;
val* var1187 /* : String */;
static val* varonce1188;
val* var1189 /* : String */;
char* var1190 /* : CString */;
val* var1191 /* : String */;
val* var1192 /* : nullable Int */;
val* var1193 /* : nullable Int */;
val* var1194 /* : nullable Bool */;
val* var1195 /* : nullable Bool */;
val* var1196 /* : ArraySet[Production] */;
short int var1197 /* : Bool */;
short int var1198 /* : Bool */;
static val* varonce1199;
val* var1200 /* : String */;
char* var1201 /* : CString */;
val* var1202 /* : String */;
val* var1203 /* : nullable Int */;
val* var1204 /* : nullable Int */;
val* var1205 /* : nullable Bool */;
val* var1206 /* : nullable Bool */;
val* var1207 /* : ArraySet[Production] */;
long var1208 /* : Int */;
short int var1209 /* : Bool */;
short int var1211 /* : Bool */;
int cltype1212;
int idtype1213;
const char* var_class_name1214;
short int var1215 /* : Bool */;
val* var1217 /* : NativeArray[String] */;
static val* varonce1216;
static val* varonce1218;
val* var1219 /* : String */;
char* var1220 /* : CString */;
val* var1221 /* : String */;
val* var1222 /* : nullable Int */;
val* var1223 /* : nullable Int */;
val* var1224 /* : nullable Bool */;
val* var1225 /* : nullable Bool */;
static val* varonce1226;
val* var1227 /* : String */;
char* var1228 /* : CString */;
val* var1229 /* : String */;
val* var1230 /* : nullable Int */;
val* var1231 /* : nullable Int */;
val* var1232 /* : nullable Bool */;
val* var1233 /* : nullable Bool */;
val* var1234 /* : String */;
val* var1235 /* : String */;
val* var1236 /* : ArraySet[Production] */;
val* var1237 /* : nullable Object */;
static val* varonce1238;
val* var1239 /* : String */;
char* var1240 /* : CString */;
val* var1241 /* : String */;
val* var1242 /* : nullable Int */;
val* var1243 /* : nullable Int */;
val* var1244 /* : nullable Bool */;
val* var1245 /* : nullable Bool */;
static val* varonce1246;
val* var1247 /* : String */;
char* var1248 /* : CString */;
val* var1249 /* : String */;
val* var1250 /* : nullable Int */;
val* var1251 /* : nullable Int */;
val* var1252 /* : nullable Bool */;
val* var1253 /* : nullable Bool */;
var_autom = p0;
var_name = p1;
{
var = ((val*(*)(val* self))(var_autom->class->vft[COLOR_nitcc__grammar__LRAutomaton__states]))(var_autom); /* states on <var_autom:LRAutomaton>*/
}
var_states = var;
{
var1 = ((val*(*)(val* self))(var_autom->class->vft[COLOR_nitcc__grammar__LRAutomaton__grammar]))(var_autom); /* grammar on <var_autom:LRAutomaton>*/
}
var_gram = var1;
if (unlikely(varonce==NULL)) {
var2 = NEW_core__NativeArray((int)2l, &type_core__NativeArray__core__String);
if (likely(varonce3!=NULL)) {
var4 = varonce3;
} else {
var5 = "# Parser generated by nitcc for the grammar ";
var7 = (val*)(44l<<2|1);
var8 = (val*)(44l<<2|1);
var9 = (val*)((long)(0)<<2|3);
var10 = (val*)((long)(0)<<2|3);
var6 = core__flat___CString___to_s_unsafe(var5, var7, var8, var9, var10);
var4 = var6;
varonce3 = var4;
}
((struct instance_core__NativeArray*)var2)->values[0]=var4;
} else {
var2 = varonce;
varonce = NULL;
}
((struct instance_core__NativeArray*)var2)->values[1]=var_name;
{
var11 = ((val*(*)(val* self))(var2->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var2); /* native_to_s on <var2:NativeArray[String]>*/
}
varonce = var2;
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nitcc__grammar__Generator__add]))(self, var11); /* add on <self:Generator>*/
}
if (unlikely(varonce12==NULL)) {
var13 = NEW_core__NativeArray((int)3l, &type_core__NativeArray__core__String);
if (likely(varonce14!=NULL)) {
var15 = varonce14;
} else {
var16 = "module ";
var18 = (val*)(7l<<2|1);
var19 = (val*)(7l<<2|1);
var20 = (val*)((long)(0)<<2|3);
var21 = (val*)((long)(0)<<2|3);
var17 = core__flat___CString___to_s_unsafe(var16, var18, var19, var20, var21);
var15 = var17;
varonce14 = var15;
}
((struct instance_core__NativeArray*)var13)->values[0]=var15;
if (likely(varonce22!=NULL)) {
var23 = varonce22;
} else {
var24 = "_parser is generated, no_warning(\"missing-doc\",\"old-init\")";
var26 = (val*)(58l<<2|1);
var27 = (val*)(58l<<2|1);
var28 = (val*)((long)(0)<<2|3);
var29 = (val*)((long)(0)<<2|3);
var25 = core__flat___CString___to_s_unsafe(var24, var26, var27, var28, var29);
var23 = var25;
varonce22 = var23;
}
((struct instance_core__NativeArray*)var13)->values[2]=var23;
} else {
var13 = varonce12;
varonce12 = NULL;
}
((struct instance_core__NativeArray*)var13)->values[1]=var_name;
{
var30 = ((val*(*)(val* self))(var13->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var13); /* native_to_s on <var13:NativeArray[String]>*/
}
varonce12 = var13;
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nitcc__grammar__Generator__add]))(self, var30); /* add on <self:Generator>*/
}
if (likely(varonce31!=NULL)) {
var32 = varonce31;
} else {
var33 = "import nitcc_runtime";
var35 = (val*)(20l<<2|1);
var36 = (val*)(20l<<2|1);
var37 = (val*)((long)(0)<<2|3);
var38 = (val*)((long)(0)<<2|3);
var34 = core__flat___CString___to_s_unsafe(var33, var35, var36, var37, var38);
var32 = var34;
varonce31 = var32;
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nitcc__grammar__Generator__add]))(self, var32); /* add on <self:Generator>*/
}
if (unlikely(varonce39==NULL)) {
var40 = NEW_core__NativeArray((int)2l, &type_core__NativeArray__core__String);
if (likely(varonce41!=NULL)) {
var42 = varonce41;
} else {
var43 = "class Parser_";
var45 = (val*)(13l<<2|1);
var46 = (val*)(13l<<2|1);
var47 = (val*)((long)(0)<<2|3);
var48 = (val*)((long)(0)<<2|3);
var44 = core__flat___CString___to_s_unsafe(var43, var45, var46, var47, var48);
var42 = var44;
varonce41 = var42;
}
((struct instance_core__NativeArray*)var40)->values[0]=var42;
} else {
var40 = varonce39;
varonce39 = NULL;
}
((struct instance_core__NativeArray*)var40)->values[1]=var_name;
{
var49 = ((val*(*)(val* self))(var40->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var40); /* native_to_s on <var40:NativeArray[String]>*/
}
varonce39 = var40;
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nitcc__grammar__Generator__add]))(self, var49); /* add on <self:Generator>*/
}
if (likely(varonce50!=NULL)) {
var51 = varonce50;
} else {
var52 = "\tsuper Parser";
var54 = (val*)(13l<<2|1);
var55 = (val*)(13l<<2|1);
var56 = (val*)((long)(0)<<2|3);
var57 = (val*)((long)(0)<<2|3);
var53 = core__flat___CString___to_s_unsafe(var52, var54, var55, var56, var57);
var51 = var53;
varonce50 = var51;
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nitcc__grammar__Generator__add]))(self, var51); /* add on <self:Generator>*/
}
if (unlikely(varonce58==NULL)) {
var59 = NEW_core__NativeArray((int)2l, &type_core__NativeArray__core__String);
if (likely(varonce60!=NULL)) {
var61 = varonce60;
} else {
var62 = "\tredef fun start_state do return state_";
var64 = (val*)(39l<<2|1);
var65 = (val*)(39l<<2|1);
var66 = (val*)((long)(0)<<2|3);
var67 = (val*)((long)(0)<<2|3);
var63 = core__flat___CString___to_s_unsafe(var62, var64, var65, var66, var67);
var61 = var63;
varonce60 = var61;
}
((struct instance_core__NativeArray*)var59)->values[0]=var61;
} else {
var59 = varonce58;
varonce58 = NULL;
}
{
var68 = ((val*(*)(val* self))(var_states->class->vft[COLOR_core__abstract_collection__Collection__first]))(var_states); /* first on <var_states:Array[LRState]>*/
}
{
var69 = ((val*(*)(val* self))(var68->class->vft[COLOR_nitcc__grammar__LRState__cname]))(var68); /* cname on <var68:nullable Object(LRState)>*/
}
((struct instance_core__NativeArray*)var59)->values[1]=var69;
{
var70 = ((val*(*)(val* self))(var59->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var59); /* native_to_s on <var59:NativeArray[String]>*/
}
varonce58 = var59;
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nitcc__grammar__Generator__add]))(self, var70); /* add on <self:Generator>*/
}
if (likely(varonce71!=NULL)) {
var72 = varonce71;
} else {
var73 = "end";
var75 = (val*)(3l<<2|1);
var76 = (val*)(3l<<2|1);
var77 = (val*)((long)(0)<<2|3);
var78 = (val*)((long)(0)<<2|3);
var74 = core__flat___CString___to_s_unsafe(var73, var75, var76, var77, var78);
var72 = var74;
varonce71 = var72;
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nitcc__grammar__Generator__add]))(self, var72); /* add on <self:Generator>*/
}
var_ = var_states;
{
var79 = ((val*(*)(val* self))(var_->class->vft[COLOR_core__abstract_collection__Collection__iterator]))(var_); /* iterator on <var_:Array[LRState]>*/
}
var_80 = var79;
for(;;) {
{
var81 = ((short int(*)(val* self))((((long)var_80&3)?class_info[((long)var_80&3)]:var_80->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_80); /* is_ok on <var_80:IndexedIterator[LRState]>*/
}
if (var81){
} else {
goto BREAK_label;
}
{
var82 = ((val*(*)(val* self))((((long)var_80&3)?class_info[((long)var_80&3)]:var_80->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_80); /* item on <var_80:IndexedIterator[LRState]>*/
}
var_s = var82;
if (unlikely(varonce83==NULL)) {
var84 = NEW_core__NativeArray((int)6l, &type_core__NativeArray__core__String);
if (likely(varonce85!=NULL)) {
var86 = varonce85;
} else {
var87 = "private fun state_";
var89 = (val*)(18l<<2|1);
var90 = (val*)(18l<<2|1);
var91 = (val*)((long)(0)<<2|3);
var92 = (val*)((long)(0)<<2|3);
var88 = core__flat___CString___to_s_unsafe(var87, var89, var90, var91, var92);
var86 = var88;
varonce85 = var86;
}
((struct instance_core__NativeArray*)var84)->values[0]=var86;
if (likely(varonce93!=NULL)) {
var94 = varonce93;
} else {
var95 = ": LRState";
var97 = (val*)(9l<<2|1);
var98 = (val*)(9l<<2|1);
var99 = (val*)((long)(0)<<2|3);
var100 = (val*)((long)(0)<<2|3);
var96 = core__flat___CString___to_s_unsafe(var95, var97, var98, var99, var100);
var94 = var96;
varonce93 = var94;
}
((struct instance_core__NativeArray*)var84)->values[2]=var94;
if (likely(varonce101!=NULL)) {
var102 = varonce101;
} else {
var103 = " do return once new LRState";
var105 = (val*)(27l<<2|1);
var106 = (val*)(27l<<2|1);
var107 = (val*)((long)(0)<<2|3);
var108 = (val*)((long)(0)<<2|3);
var104 = core__flat___CString___to_s_unsafe(var103, var105, var106, var107, var108);
var102 = var104;
varonce101 = var102;
}
((struct instance_core__NativeArray*)var84)->values[4]=var102;
} else {
var84 = varonce83;
varonce83 = NULL;
}
{
var109 = ((val*(*)(val* self))(var_s->class->vft[COLOR_nitcc__grammar__LRState__cname]))(var_s); /* cname on <var_s:LRState>*/
}
((struct instance_core__NativeArray*)var84)->values[1]=var109;
{
var110 = ((val*(*)(val* self))(var_s->class->vft[COLOR_nitcc__grammar__LRState__cname]))(var_s); /* cname on <var_s:LRState>*/
}
((struct instance_core__NativeArray*)var84)->values[3]=var110;
{
var111 = ((val*(*)(val* self))(var_s->class->vft[COLOR_nitcc__grammar__LRState__cname]))(var_s); /* cname on <var_s:LRState>*/
}
((struct instance_core__NativeArray*)var84)->values[5]=var111;
{
var112 = ((val*(*)(val* self))(var84->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var84); /* native_to_s on <var84:NativeArray[String]>*/
}
varonce83 = var84;
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nitcc__grammar__Generator__add]))(self, var112); /* add on <self:Generator>*/
}
{
((void(*)(val* self))((((long)var_80&3)?class_info[((long)var_80&3)]:var_80->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_80); /* next on <var_80:IndexedIterator[LRState]>*/
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_80&3)?class_info[((long)var_80&3)]:var_80->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_80); /* finish on <var_80:IndexedIterator[LRState]>*/
}
{
var113 = ((val*(*)(val* self))(var_gram->class->vft[COLOR_nitcc__grammar__Gram__prods]))(var_gram); /* prods on <var_gram:Gram>*/
}
var_114 = var113;
{
var115 = ((val*(*)(val* self))(var_114->class->vft[COLOR_core__abstract_collection__Collection__iterator]))(var_114); /* iterator on <var_114:Array[Production]>*/
}
var_116 = var115;
for(;;) {
{
var117 = ((short int(*)(val* self))((((long)var_116&3)?class_info[((long)var_116&3)]:var_116->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_116); /* is_ok on <var_116:IndexedIterator[Production]>*/
}
if (var117){
} else {
goto BREAK_label118;
}
{
var119 = ((val*(*)(val* self))((((long)var_116&3)?class_info[((long)var_116&3)]:var_116->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_116); /* item on <var_116:IndexedIterator[Production]>*/
}
var_p = var119;
if (unlikely(varonce120==NULL)) {
var121 = NEW_core__NativeArray((int)6l, &type_core__NativeArray__core__String);
if (likely(varonce122!=NULL)) {
var123 = varonce122;
} else {
var124 = "private fun goto_";
var126 = (val*)(17l<<2|1);
var127 = (val*)(17l<<2|1);
var128 = (val*)((long)(0)<<2|3);
var129 = (val*)((long)(0)<<2|3);
var125 = core__flat___CString___to_s_unsafe(var124, var126, var127, var128, var129);
var123 = var125;
varonce122 = var123;
}
((struct instance_core__NativeArray*)var121)->values[0]=var123;
if (likely(varonce130!=NULL)) {
var131 = varonce130;
} else {
var132 = ": Goto_";
var134 = (val*)(7l<<2|1);
var135 = (val*)(7l<<2|1);
var136 = (val*)((long)(0)<<2|3);
var137 = (val*)((long)(0)<<2|3);
var133 = core__flat___CString___to_s_unsafe(var132, var134, var135, var136, var137);
var131 = var133;
varonce130 = var131;
}
((struct instance_core__NativeArray*)var121)->values[2]=var131;
if (likely(varonce138!=NULL)) {
var139 = varonce138;
} else {
var140 = " do return once new Goto_";
var142 = (val*)(25l<<2|1);
var143 = (val*)(25l<<2|1);
var144 = (val*)((long)(0)<<2|3);
var145 = (val*)((long)(0)<<2|3);
var141 = core__flat___CString___to_s_unsafe(var140, var142, var143, var144, var145);
var139 = var141;
varonce138 = var139;
}
((struct instance_core__NativeArray*)var121)->values[4]=var139;
} else {
var121 = varonce120;
varonce120 = NULL;
}
{
var146 = ((val*(*)(val* self))(var_p->class->vft[COLOR_nitcc__grammar__Element__cname]))(var_p); /* cname on <var_p:Production>*/
}
((struct instance_core__NativeArray*)var121)->values[1]=var146;
{
var147 = ((val*(*)(val* self))(var_p->class->vft[COLOR_nitcc__grammar__Element__cname]))(var_p); /* cname on <var_p:Production>*/
}
((struct instance_core__NativeArray*)var121)->values[3]=var147;
{
var148 = ((val*(*)(val* self))(var_p->class->vft[COLOR_nitcc__grammar__Element__cname]))(var_p); /* cname on <var_p:Production>*/
}
((struct instance_core__NativeArray*)var121)->values[5]=var148;
{
var149 = ((val*(*)(val* self))(var121->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var121); /* native_to_s on <var121:NativeArray[String]>*/
}
varonce120 = var121;
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nitcc__grammar__Generator__add]))(self, var149); /* add on <self:Generator>*/
}
{
var150 = ((val*(*)(val* self))(var_p->class->vft[COLOR_nitcc__grammar__Production__alts]))(var_p); /* alts on <var_p:Production>*/
}
var_151 = var150;
{
var152 = ((val*(*)(val* self))(var_151->class->vft[COLOR_core__abstract_collection__Collection__iterator]))(var_151); /* iterator on <var_151:Array[Alternative]>*/
}
var_153 = var152;
for(;;) {
{
var154 = ((short int(*)(val* self))((((long)var_153&3)?class_info[((long)var_153&3)]:var_153->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_153); /* is_ok on <var_153:IndexedIterator[Alternative]>*/
}
if (var154){
} else {
goto BREAK_label155;
}
{
var156 = ((val*(*)(val* self))((((long)var_153&3)?class_info[((long)var_153&3)]:var_153->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_153); /* item on <var_153:IndexedIterator[Alternative]>*/
}
var_a = var156;
if (unlikely(varonce157==NULL)) {
var158 = NEW_core__NativeArray((int)3l, &type_core__NativeArray__core__String);
if (likely(varonce159!=NULL)) {
var160 = varonce159;
} else {
var161 = "private fun reduce_";
var163 = (val*)(19l<<2|1);
var164 = (val*)(19l<<2|1);
var165 = (val*)((long)(0)<<2|3);
var166 = (val*)((long)(0)<<2|3);
var162 = core__flat___CString___to_s_unsafe(var161, var163, var164, var165, var166);
var160 = var162;
varonce159 = var160;
}
((struct instance_core__NativeArray*)var158)->values[0]=var160;
if (likely(varonce167!=NULL)) {
var168 = varonce167;
} else {
var169 = "(parser: Parser) do";
var171 = (val*)(19l<<2|1);
var172 = (val*)(19l<<2|1);
var173 = (val*)((long)(0)<<2|3);
var174 = (val*)((long)(0)<<2|3);
var170 = core__flat___CString___to_s_unsafe(var169, var171, var172, var173, var174);
var168 = var170;
varonce167 = var168;
}
((struct instance_core__NativeArray*)var158)->values[2]=var168;
} else {
var158 = varonce157;
varonce157 = NULL;
}
{
var175 = ((val*(*)(val* self))(var_a->class->vft[COLOR_nitcc__grammar__Alternative__cname]))(var_a); /* cname on <var_a:Alternative>*/
}
((struct instance_core__NativeArray*)var158)->values[1]=var175;
{
var176 = ((val*(*)(val* self))(var158->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var158); /* native_to_s on <var158:NativeArray[String]>*/
}
varonce157 = var158;
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nitcc__grammar__Generator__add]))(self, var176); /* add on <self:Generator>*/
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nitcc__grammar__Generator__gen_reduce_to_nit]))(self, var_a); /* gen_reduce_to_nit on <self:Generator>*/
}
if (likely(varonce177!=NULL)) {
var178 = varonce177;
} else {
var179 = "end";
var181 = (val*)(3l<<2|1);
var182 = (val*)(3l<<2|1);
var183 = (val*)((long)(0)<<2|3);
var184 = (val*)((long)(0)<<2|3);
var180 = core__flat___CString___to_s_unsafe(var179, var181, var182, var183, var184);
var178 = var180;
varonce177 = var178;
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nitcc__grammar__Generator__add]))(self, var178); /* add on <self:Generator>*/
}
{
((void(*)(val* self))((((long)var_153&3)?class_info[((long)var_153&3)]:var_153->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_153); /* next on <var_153:IndexedIterator[Alternative]>*/
}
}
BREAK_label155: (void)0;
{
((void(*)(val* self))((((long)var_153&3)?class_info[((long)var_153&3)]:var_153->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_153); /* finish on <var_153:IndexedIterator[Alternative]>*/
}
{
((void(*)(val* self))((((long)var_116&3)?class_info[((long)var_116&3)]:var_116->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_116); /* next on <var_116:IndexedIterator[Production]>*/
}
}
BREAK_label118: (void)0;
{
((void(*)(val* self))((((long)var_116&3)?class_info[((long)var_116&3)]:var_116->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_116); /* finish on <var_116:IndexedIterator[Production]>*/
}
if (likely(varonce185!=NULL)) {
var186 = varonce185;
} else {
var187 = "redef class NToken";
var189 = (val*)(18l<<2|1);
var190 = (val*)(18l<<2|1);
var191 = (val*)((long)(0)<<2|3);
var192 = (val*)((long)(0)<<2|3);
var188 = core__flat___CString___to_s_unsafe(var187, var189, var190, var191, var192);
var186 = var188;
varonce185 = var186;
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nitcc__grammar__Generator__add]))(self, var186); /* add on <self:Generator>*/
}
var_193 = var_states;
{
var194 = ((val*(*)(val* self))(var_193->class->vft[COLOR_core__abstract_collection__Collection__iterator]))(var_193); /* iterator on <var_193:Array[LRState]>*/
}
var_195 = var194;
for(;;) {
{
var196 = ((short int(*)(val* self))((((long)var_195&3)?class_info[((long)var_195&3)]:var_195->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_195); /* is_ok on <var_195:IndexedIterator[LRState]>*/
}
if (var196){
} else {
goto BREAK_label197;
}
{
var198 = ((val*(*)(val* self))((((long)var_195&3)?class_info[((long)var_195&3)]:var_195->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_195); /* item on <var_195:IndexedIterator[LRState]>*/
}
var_s199 = var198;
{
var200 = ((short int(*)(val* self))(var_s199->class->vft[COLOR_nitcc__grammar__LRState__need_guard]))(var_s199); /* need_guard on <var_s199:LRState>*/
}
var201 = !var200;
if (var201){
goto BREAK_label202;
} else {
}
if (unlikely(varonce203==NULL)) {
var204 = NEW_core__NativeArray((int)2l, &type_core__NativeArray__core__String);
if (likely(varonce205!=NULL)) {
var206 = varonce205;
} else {
var207 = "\t# guarded action for state ";
var209 = (val*)(28l<<2|1);
var210 = (val*)(28l<<2|1);
var211 = (val*)((long)(0)<<2|3);
var212 = (val*)((long)(0)<<2|3);
var208 = core__flat___CString___to_s_unsafe(var207, var209, var210, var211, var212);
var206 = var208;
varonce205 = var206;
}
((struct instance_core__NativeArray*)var204)->values[0]=var206;
} else {
var204 = varonce203;
varonce203 = NULL;
}
{
var213 = ((val*(*)(val* self))(var_s199->class->vft[COLOR_nitcc__grammar__LRState__name]))(var_s199); /* name on <var_s199:LRState>*/
}
((struct instance_core__NativeArray*)var204)->values[1]=var213;
{
var214 = ((val*(*)(val* self))(var204->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var204); /* native_to_s on <var204:NativeArray[String]>*/
}
varonce203 = var204;
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nitcc__grammar__Generator__add]))(self, var214); /* add on <self:Generator>*/
}
if (unlikely(varonce215==NULL)) {
var216 = NEW_core__NativeArray((int)5l, &type_core__NativeArray__core__String);
if (likely(varonce217!=NULL)) {
var218 = varonce217;
} else {
var219 = "\t# ";
var221 = (val*)(3l<<2|1);
var222 = (val*)(3l<<2|1);
var223 = (val*)((long)(0)<<2|3);
var224 = (val*)((long)(0)<<2|3);
var220 = core__flat___CString___to_s_unsafe(var219, var221, var222, var223, var224);
var218 = var220;
varonce217 = var218;
}
((struct instance_core__NativeArray*)var216)->values[0]=var218;
if (likely(varonce225!=NULL)) {
var226 = varonce225;
} else {
var227 = " shift(s) and ";
var229 = (val*)(14l<<2|1);
var230 = (val*)(14l<<2|1);
var231 = (val*)((long)(0)<<2|3);
var232 = (val*)((long)(0)<<2|3);
var228 = core__flat___CString___to_s_unsafe(var227, var229, var230, var231, var232);
var226 = var228;
varonce225 = var226;
}
((struct instance_core__NativeArray*)var216)->values[2]=var226;
if (likely(varonce233!=NULL)) {
var234 = varonce233;
} else {
var235 = " reduce(s)";
var237 = (val*)(10l<<2|1);
var238 = (val*)(10l<<2|1);
var239 = (val*)((long)(0)<<2|3);
var240 = (val*)((long)(0)<<2|3);
var236 = core__flat___CString___to_s_unsafe(var235, var237, var238, var239, var240);
var234 = var236;
varonce233 = var234;
}
((struct instance_core__NativeArray*)var216)->values[4]=var234;
} else {
var216 = varonce215;
varonce215 = NULL;
}
{
var241 = ((val*(*)(val* self))(var_s199->class->vft[COLOR_nitcc__grammar__LRState__shifts]))(var_s199); /* shifts on <var_s199:LRState>*/
}
{
var242 = ((long(*)(val* self))(var241->class->vft[COLOR_core__abstract_collection__Collection__length]))(var241); /* length on <var241:ArraySet[Token]>*/
}
var243 = core__flat___Int___core__abstract_text__Object__to_s(var242);
((struct instance_core__NativeArray*)var216)->values[1]=var243;
{
var244 = ((val*(*)(val* self))(var_s199->class->vft[COLOR_nitcc__grammar__LRState__reduces]))(var_s199); /* reduces on <var_s199:LRState>*/
}
{
var245 = ((long(*)(val* self))(var244->class->vft[COLOR_core__abstract_collection__Collection__length]))(var244); /* length on <var244:ArraySet[Alternative]>*/
}
var246 = core__flat___Int___core__abstract_text__Object__to_s(var245);
((struct instance_core__NativeArray*)var216)->values[3]=var246;
{
var247 = ((val*(*)(val* self))(var216->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var216); /* native_to_s on <var216:NativeArray[String]>*/
}
varonce215 = var216;
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nitcc__grammar__Generator__add]))(self, var247); /* add on <self:Generator>*/
}
if (unlikely(varonce248==NULL)) {
var249 = NEW_core__NativeArray((int)3l, &type_core__NativeArray__core__String);
if (likely(varonce250!=NULL)) {
var251 = varonce250;
} else {
var252 = "\tprivate fun action_s";
var254 = (val*)(21l<<2|1);
var255 = (val*)(21l<<2|1);
var256 = (val*)((long)(0)<<2|3);
var257 = (val*)((long)(0)<<2|3);
var253 = core__flat___CString___to_s_unsafe(var252, var254, var255, var256, var257);
var251 = var253;
varonce250 = var251;
}
((struct instance_core__NativeArray*)var249)->values[0]=var251;
if (likely(varonce258!=NULL)) {
var259 = varonce258;
} else {
var260 = "(parser: Parser) do";
var262 = (val*)(19l<<2|1);
var263 = (val*)(19l<<2|1);
var264 = (val*)((long)(0)<<2|3);
var265 = (val*)((long)(0)<<2|3);
var261 = core__flat___CString___to_s_unsafe(var260, var262, var263, var264, var265);
var259 = var261;
varonce258 = var259;
}
((struct instance_core__NativeArray*)var249)->values[2]=var259;
} else {
var249 = varonce248;
varonce248 = NULL;
}
{
var266 = ((val*(*)(val* self))(var_s199->class->vft[COLOR_nitcc__grammar__LRState__cname]))(var_s199); /* cname on <var_s199:LRState>*/
}
((struct instance_core__NativeArray*)var249)->values[1]=var266;
{
var267 = ((val*(*)(val* self))(var249->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var249); /* native_to_s on <var249:NativeArray[String]>*/
}
varonce248 = var249;
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nitcc__grammar__Generator__add]))(self, var267); /* add on <self:Generator>*/
}
{
var268 = ((val*(*)(val* self))(var_s199->class->vft[COLOR_nitcc__grammar__LRState__reduces]))(var_s199); /* reduces on <var_s199:LRState>*/
}
{
var269 = ((long(*)(val* self))(var268->class->vft[COLOR_core__abstract_collection__Collection__length]))(var268); /* length on <var268:ArraySet[Alternative]>*/
}
{
{ /* Inline kernel$Int$!= (var269,1l) on <var269:Int> */
var272 = var269 == 1l;
var273 = !var272;
var270 = var273;
goto RET_LABEL271;
RET_LABEL271:(void)0;
}
}
if (var270){
if (likely(varonce274!=NULL)) {
var275 = varonce274;
} else {
var276 = "\t\tparser.parse_error";
var278 = (val*)(20l<<2|1);
var279 = (val*)(20l<<2|1);
var280 = (val*)((long)(0)<<2|3);
var281 = (val*)((long)(0)<<2|3);
var277 = core__flat___CString___to_s_unsafe(var276, var278, var279, var280, var281);
var275 = var277;
varonce274 = var275;
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nitcc__grammar__Generator__add]))(self, var275); /* add on <self:Generator>*/
}
} else {
if (unlikely(varonce282==NULL)) {
var283 = NEW_core__NativeArray((int)3l, &type_core__NativeArray__core__String);
if (likely(varonce284!=NULL)) {
var285 = varonce284;
} else {
var286 = "\t\treduce_";
var288 = (val*)(9l<<2|1);
var289 = (val*)(9l<<2|1);
var290 = (val*)((long)(0)<<2|3);
var291 = (val*)((long)(0)<<2|3);
var287 = core__flat___CString___to_s_unsafe(var286, var288, var289, var290, var291);
var285 = var287;
varonce284 = var285;
}
((struct instance_core__NativeArray*)var283)->values[0]=var285;
if (likely(varonce292!=NULL)) {
var293 = varonce292;
} else {
var294 = "(parser)";
var296 = (val*)(8l<<2|1);
var297 = (val*)(8l<<2|1);
var298 = (val*)((long)(0)<<2|3);
var299 = (val*)((long)(0)<<2|3);
var295 = core__flat___CString___to_s_unsafe(var294, var296, var297, var298, var299);
var293 = var295;
varonce292 = var293;
}
((struct instance_core__NativeArray*)var283)->values[2]=var293;
} else {
var283 = varonce282;
varonce282 = NULL;
}
{
var300 = ((val*(*)(val* self))(var_s199->class->vft[COLOR_nitcc__grammar__LRState__reduces]))(var_s199); /* reduces on <var_s199:LRState>*/
}
{
var301 = ((val*(*)(val* self))(var300->class->vft[COLOR_core__abstract_collection__Collection__first]))(var300); /* first on <var300:ArraySet[Alternative]>*/
}
{
var302 = ((val*(*)(val* self))(var301->class->vft[COLOR_nitcc__grammar__Alternative__cname]))(var301); /* cname on <var301:nullable Object(Alternative)>*/
}
((struct instance_core__NativeArray*)var283)->values[1]=var302;
{
var303 = ((val*(*)(val* self))(var283->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var283); /* native_to_s on <var283:NativeArray[String]>*/
}
varonce282 = var283;
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nitcc__grammar__Generator__add]))(self, var303); /* add on <self:Generator>*/
}
}
if (likely(varonce304!=NULL)) {
var305 = varonce304;
} else {
var306 = "\tend";
var308 = (val*)(4l<<2|1);
var309 = (val*)(4l<<2|1);
var310 = (val*)((long)(0)<<2|3);
var311 = (val*)((long)(0)<<2|3);
var307 = core__flat___CString___to_s_unsafe(var306, var308, var309, var310, var311);
var305 = var307;
varonce304 = var305;
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nitcc__grammar__Generator__add]))(self, var305); /* add on <self:Generator>*/
}
BREAK_label202: (void)0;
{
((void(*)(val* self))((((long)var_195&3)?class_info[((long)var_195&3)]:var_195->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_195); /* next on <var_195:IndexedIterator[LRState]>*/
}
}
BREAK_label197: (void)0;
{
((void(*)(val* self))((((long)var_195&3)?class_info[((long)var_195&3)]:var_195->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_195); /* finish on <var_195:IndexedIterator[LRState]>*/
}
if (likely(varonce312!=NULL)) {
var313 = varonce312;
} else {
var314 = "end";
var316 = (val*)(3l<<2|1);
var317 = (val*)(3l<<2|1);
var318 = (val*)((long)(0)<<2|3);
var319 = (val*)((long)(0)<<2|3);
var315 = core__flat___CString___to_s_unsafe(var314, var316, var317, var318, var319);
var313 = var315;
varonce312 = var313;
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nitcc__grammar__Generator__add]))(self, var313); /* add on <self:Generator>*/
}
{
var320 = ((val*(*)(val* self))(var_gram->class->vft[COLOR_nitcc__grammar__Gram__tokens]))(var_gram); /* tokens on <var_gram:Gram>*/
}
var_321 = var320;
{
var322 = ((val*(*)(val* self))(var_321->class->vft[COLOR_core__abstract_collection__Collection__iterator]))(var_321); /* iterator on <var_321:Array[Token]>*/
}
var_323 = var322;
for(;;) {
{
var324 = ((short int(*)(val* self))((((long)var_323&3)?class_info[((long)var_323&3)]:var_323->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_323); /* is_ok on <var_323:IndexedIterator[Token]>*/
}
if (var324){
} else {
goto BREAK_label325;
}
{
var326 = ((val*(*)(val* self))((((long)var_323&3)?class_info[((long)var_323&3)]:var_323->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_323); /* item on <var_323:IndexedIterator[Token]>*/
}
var_t = var326;
{
var327 = ((val*(*)(val* self))(var_t->class->vft[COLOR_nitcc__grammar__Element__name]))(var_t); /* name on <var_t:Token>*/
}
if (likely(varonce328!=NULL)) {
var329 = varonce328;
} else {
var330 = "Eof";
var332 = (val*)(3l<<2|1);
var333 = (val*)(3l<<2|1);
var334 = (val*)((long)(0)<<2|3);
var335 = (val*)((long)(0)<<2|3);
var331 = core__flat___CString___to_s_unsafe(var330, var332, var333, var334, var335);
var329 = var331;
varonce328 = var329;
}
{
var336 = ((short int(*)(val* self, val* p0))(var327->class->vft[COLOR_core__kernel__Object___61d_61d]))(var327, var329); /* == on <var327:String>*/
}
if (var336){
if (unlikely(varonce337==NULL)) {
var338 = NEW_core__NativeArray((int)2l, &type_core__NativeArray__core__String);
if (likely(varonce339!=NULL)) {
var340 = varonce339;
} else {
var341 = "redef class ";
var343 = (val*)(12l<<2|1);
var344 = (val*)(12l<<2|1);
var345 = (val*)((long)(0)<<2|3);
var346 = (val*)((long)(0)<<2|3);
var342 = core__flat___CString___to_s_unsafe(var341, var343, var344, var345, var346);
var340 = var342;
varonce339 = var340;
}
((struct instance_core__NativeArray*)var338)->values[0]=var340;
} else {
var338 = varonce337;
varonce337 = NULL;
}
{
var347 = ((val*(*)(val* self))(var_t->class->vft[COLOR_nitcc__grammar__Element__cname]))(var_t); /* cname on <var_t:Token>*/
}
((struct instance_core__NativeArray*)var338)->values[1]=var347;
{
var348 = ((val*(*)(val* self))(var338->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var338); /* native_to_s on <var338:NativeArray[String]>*/
}
varonce337 = var338;
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nitcc__grammar__Generator__add]))(self, var348); /* add on <self:Generator>*/
}
} else {
if (unlikely(varonce349==NULL)) {
var350 = NEW_core__NativeArray((int)2l, &type_core__NativeArray__core__String);
if (likely(varonce351!=NULL)) {
var352 = varonce351;
} else {
var353 = "class ";
var355 = (val*)(6l<<2|1);
var356 = (val*)(6l<<2|1);
var357 = (val*)((long)(0)<<2|3);
var358 = (val*)((long)(0)<<2|3);
var354 = core__flat___CString___to_s_unsafe(var353, var355, var356, var357, var358);
var352 = var354;
varonce351 = var352;
}
((struct instance_core__NativeArray*)var350)->values[0]=var352;
} else {
var350 = varonce349;
varonce349 = NULL;
}
{
var359 = ((val*(*)(val* self))(var_t->class->vft[COLOR_nitcc__grammar__Element__cname]))(var_t); /* cname on <var_t:Token>*/
}
((struct instance_core__NativeArray*)var350)->values[1]=var359;
{
var360 = ((val*(*)(val* self))(var350->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var350); /* native_to_s on <var350:NativeArray[String]>*/
}
varonce349 = var350;
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nitcc__grammar__Generator__add]))(self, var360); /* add on <self:Generator>*/
}
}
if (likely(varonce361!=NULL)) {
var362 = varonce361;
} else {
var363 = "\tsuper NToken";
var365 = (val*)(13l<<2|1);
var366 = (val*)(13l<<2|1);
var367 = (val*)((long)(0)<<2|3);
var368 = (val*)((long)(0)<<2|3);
var364 = core__flat___CString___to_s_unsafe(var363, var365, var366, var367, var368);
var362 = var364;
varonce361 = var362;
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nitcc__grammar__Generator__add]))(self, var362); /* add on <self:Generator>*/
}
{
var369 = ((val*(*)(val* self))(var_t->class->vft[COLOR_nitcc__grammar__Token__shifts]))(var_t); /* shifts on <var_t:Token>*/
}
var_370 = var369;
{
var371 = ((val*(*)(val* self))(var_370->class->vft[COLOR_core__abstract_collection__Collection__iterator]))(var_370); /* iterator on <var_370:ArraySet[LRState]>*/
}
var_372 = var371;
for(;;) {
{
var373 = ((short int(*)(val* self))((((long)var_372&3)?class_info[((long)var_372&3)]:var_372->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_372); /* is_ok on <var_372:Iterator[LRState]>*/
}
if (var373){
} else {
goto BREAK_label374;
}
{
var375 = ((val*(*)(val* self))((((long)var_372&3)?class_info[((long)var_372&3)]:var_372->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_372); /* item on <var_372:Iterator[LRState]>*/
}
var_s376 = var375;
{
var377 = ((short int(*)(val* self))(var_s376->class->vft[COLOR_nitcc__grammar__LRState__need_guard]))(var_s376); /* need_guard on <var_s376:LRState>*/
}
var378 = !var377;
if (var378){
goto BREAK_label379;
} else {
}
if (unlikely(varonce380==NULL)) {
var381 = NEW_core__NativeArray((int)3l, &type_core__NativeArray__core__String);
if (likely(varonce382!=NULL)) {
var383 = varonce382;
} else {
var384 = "\tredef fun action_s";
var386 = (val*)(19l<<2|1);
var387 = (val*)(19l<<2|1);
var388 = (val*)((long)(0)<<2|3);
var389 = (val*)((long)(0)<<2|3);
var385 = core__flat___CString___to_s_unsafe(var384, var386, var387, var388, var389);
var383 = var385;
varonce382 = var383;
}
((struct instance_core__NativeArray*)var381)->values[0]=var383;
if (likely(varonce390!=NULL)) {
var391 = varonce390;
} else {
var392 = "(parser) do";
var394 = (val*)(11l<<2|1);
var395 = (val*)(11l<<2|1);
var396 = (val*)((long)(0)<<2|3);
var397 = (val*)((long)(0)<<2|3);
var393 = core__flat___CString___to_s_unsafe(var392, var394, var395, var396, var397);
var391 = var393;
varonce390 = var391;
}
((struct instance_core__NativeArray*)var381)->values[2]=var391;
} else {
var381 = varonce380;
varonce380 = NULL;
}
{
var398 = ((val*(*)(val* self))(var_s376->class->vft[COLOR_nitcc__grammar__LRState__cname]))(var_s376); /* cname on <var_s376:LRState>*/
}
((struct instance_core__NativeArray*)var381)->values[1]=var398;
{
var399 = ((val*(*)(val* self))(var381->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var381); /* native_to_s on <var381:NativeArray[String]>*/
}
varonce380 = var381;
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nitcc__grammar__Generator__add]))(self, var399); /* add on <self:Generator>*/
}
{
((void(*)(val* self, val* p0, val* p1))(self->class->vft[COLOR_nitcc__grammar__Generator__gen_shift_to_nit]))(self, var_s376, var_t); /* gen_shift_to_nit on <self:Generator>*/
}
if (likely(varonce400!=NULL)) {
var401 = varonce400;
} else {
var402 = "\tend";
var404 = (val*)(4l<<2|1);
var405 = (val*)(4l<<2|1);
var406 = (val*)((long)(0)<<2|3);
var407 = (val*)((long)(0)<<2|3);
var403 = core__flat___CString___to_s_unsafe(var402, var404, var405, var406, var407);
var401 = var403;
varonce400 = var401;
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nitcc__grammar__Generator__add]))(self, var401); /* add on <self:Generator>*/
}
BREAK_label379: (void)0;
{
((void(*)(val* self))((((long)var_372&3)?class_info[((long)var_372&3)]:var_372->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_372); /* next on <var_372:Iterator[LRState]>*/
}
}
BREAK_label374: (void)0;
{
((void(*)(val* self))((((long)var_372&3)?class_info[((long)var_372&3)]:var_372->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_372); /* finish on <var_372:Iterator[LRState]>*/
}
{
var408 = ((val*(*)(val* self))(var_t->class->vft[COLOR_nitcc__grammar__Token__reduces]))(var_t); /* reduces on <var_t:Token>*/
}
var_409 = var408;
{
var410 = ((val*(*)(val* self))(var_409->class->vft[COLOR_core__abstract_collection__Collection__iterator]))(var_409); /* iterator on <var_409:ArraySet[LRState]>*/
}
var_411 = var410;
for(;;) {
{
var412 = ((short int(*)(val* self))((((long)var_411&3)?class_info[((long)var_411&3)]:var_411->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_411); /* is_ok on <var_411:Iterator[LRState]>*/
}
if (var412){
} else {
goto BREAK_label413;
}
{
var414 = ((val*(*)(val* self))((((long)var_411&3)?class_info[((long)var_411&3)]:var_411->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_411); /* item on <var_411:Iterator[LRState]>*/
}
var_s415 = var414;
{
var416 = ((short int(*)(val* self))(var_s415->class->vft[COLOR_nitcc__grammar__LRState__need_guard]))(var_s415); /* need_guard on <var_s415:LRState>*/
}
var417 = !var416;
if (var417){
goto BREAK_label418;
} else {
}
{
var419 = ((val*(*)(val* self))(var_s415->class->vft[COLOR_nitcc__grammar__LRState__reduces]))(var_s415); /* reduces on <var_s415:LRState>*/
}
{
var420 = ((long(*)(val* self))(var419->class->vft[COLOR_core__abstract_collection__Collection__length]))(var419); /* length on <var419:ArraySet[Alternative]>*/
}
{
{ /* Inline kernel$Int$<= (var420,1l) on <var420:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var423 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var423)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 724);
fatal_exit(1);
}
var424 = var420 <= 1l;
var421 = var424;
goto RET_LABEL422;
RET_LABEL422:(void)0;
}
}
if (var421){
goto BREAK_label418;
} else {
}
if (unlikely(varonce425==NULL)) {
var426 = NEW_core__NativeArray((int)3l, &type_core__NativeArray__core__String);
if (likely(varonce427!=NULL)) {
var428 = varonce427;
} else {
var429 = "\tredef fun action_s";
var431 = (val*)(19l<<2|1);
var432 = (val*)(19l<<2|1);
var433 = (val*)((long)(0)<<2|3);
var434 = (val*)((long)(0)<<2|3);
var430 = core__flat___CString___to_s_unsafe(var429, var431, var432, var433, var434);
var428 = var430;
varonce427 = var428;
}
((struct instance_core__NativeArray*)var426)->values[0]=var428;
if (likely(varonce435!=NULL)) {
var436 = varonce435;
} else {
var437 = "(parser) do";
var439 = (val*)(11l<<2|1);
var440 = (val*)(11l<<2|1);
var441 = (val*)((long)(0)<<2|3);
var442 = (val*)((long)(0)<<2|3);
var438 = core__flat___CString___to_s_unsafe(var437, var439, var440, var441, var442);
var436 = var438;
varonce435 = var436;
}
((struct instance_core__NativeArray*)var426)->values[2]=var436;
} else {
var426 = varonce425;
varonce425 = NULL;
}
{
var443 = ((val*(*)(val* self))(var_s415->class->vft[COLOR_nitcc__grammar__LRState__cname]))(var_s415); /* cname on <var_s415:LRState>*/
}
((struct instance_core__NativeArray*)var426)->values[1]=var443;
{
var444 = ((val*(*)(val* self))(var426->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var426); /* native_to_s on <var426:NativeArray[String]>*/
}
varonce425 = var426;
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nitcc__grammar__Generator__add]))(self, var444); /* add on <self:Generator>*/
}
if (unlikely(varonce445==NULL)) {
var446 = NEW_core__NativeArray((int)3l, &type_core__NativeArray__core__String);
if (likely(varonce447!=NULL)) {
var448 = varonce447;
} else {
var449 = "\t\treduce_";
var451 = (val*)(9l<<2|1);
var452 = (val*)(9l<<2|1);
var453 = (val*)((long)(0)<<2|3);
var454 = (val*)((long)(0)<<2|3);
var450 = core__flat___CString___to_s_unsafe(var449, var451, var452, var453, var454);
var448 = var450;
varonce447 = var448;
}
((struct instance_core__NativeArray*)var446)->values[0]=var448;
if (likely(varonce455!=NULL)) {
var456 = varonce455;
} else {
var457 = "(parser)";
var459 = (val*)(8l<<2|1);
var460 = (val*)(8l<<2|1);
var461 = (val*)((long)(0)<<2|3);
var462 = (val*)((long)(0)<<2|3);
var458 = core__flat___CString___to_s_unsafe(var457, var459, var460, var461, var462);
var456 = var458;
varonce455 = var456;
}
((struct instance_core__NativeArray*)var446)->values[2]=var456;
} else {
var446 = varonce445;
varonce445 = NULL;
}
{
var463 = ((val*(*)(val* self))(var_s415->class->vft[COLOR_nitcc__grammar__LRState__guarded_reduce]))(var_s415); /* guarded_reduce on <var_s415:LRState>*/
}
{
var464 = ((val*(*)(val* self, val* p0))(var463->class->vft[COLOR_core__abstract_collection__MapRead___91d_93d]))(var463, var_t); /* [] on <var463:HashMap[Token, Set[Item]]>*/
}
{
var465 = ((val*(*)(val* self))((((long)var464&3)?class_info[((long)var464&3)]:var464->class)->vft[COLOR_core__abstract_collection__Collection__first]))(var464); /* first on <var464:nullable Object(Set[Item])>*/
}
{
var466 = ((val*(*)(val* self))(var465->class->vft[COLOR_nitcc__grammar__Item__alt]))(var465); /* alt on <var465:nullable Object(Item)>*/
}
{
var467 = ((val*(*)(val* self))(var466->class->vft[COLOR_nitcc__grammar__Alternative__cname]))(var466); /* cname on <var466:Alternative>*/
}
((struct instance_core__NativeArray*)var446)->values[1]=var467;
{
var468 = ((val*(*)(val* self))(var446->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var446); /* native_to_s on <var446:NativeArray[String]>*/
}
varonce445 = var446;
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nitcc__grammar__Generator__add]))(self, var468); /* add on <self:Generator>*/
}
if (likely(varonce469!=NULL)) {
var470 = varonce469;
} else {
var471 = "\tend";
var473 = (val*)(4l<<2|1);
var474 = (val*)(4l<<2|1);
var475 = (val*)((long)(0)<<2|3);
var476 = (val*)((long)(0)<<2|3);
var472 = core__flat___CString___to_s_unsafe(var471, var473, var474, var475, var476);
var470 = var472;
varonce469 = var470;
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nitcc__grammar__Generator__add]))(self, var470); /* add on <self:Generator>*/
}
BREAK_label418: (void)0;
{
((void(*)(val* self))((((long)var_411&3)?class_info[((long)var_411&3)]:var_411->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_411); /* next on <var_411:Iterator[LRState]>*/
}
}
BREAK_label413: (void)0;
{
((void(*)(val* self))((((long)var_411&3)?class_info[((long)var_411&3)]:var_411->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_411); /* finish on <var_411:Iterator[LRState]>*/
}
if (unlikely(varonce477==NULL)) {
var478 = NEW_core__NativeArray((int)3l, &type_core__NativeArray__core__String);
if (likely(varonce479!=NULL)) {
var480 = varonce479;
} else {
var481 = "\tredef fun node_name do return \"";
var483 = (val*)(32l<<2|1);
var484 = (val*)(32l<<2|1);
var485 = (val*)((long)(0)<<2|3);
var486 = (val*)((long)(0)<<2|3);
var482 = core__flat___CString___to_s_unsafe(var481, var483, var484, var485, var486);
var480 = var482;
varonce479 = var480;
}
((struct instance_core__NativeArray*)var478)->values[0]=var480;
if (likely(varonce487!=NULL)) {
var488 = varonce487;
} else {
var489 = "\"";
var491 = (val*)(1l<<2|1);
var492 = (val*)(1l<<2|1);
var493 = (val*)((long)(0)<<2|3);
var494 = (val*)((long)(0)<<2|3);
var490 = core__flat___CString___to_s_unsafe(var489, var491, var492, var493, var494);
var488 = var490;
varonce487 = var488;
}
((struct instance_core__NativeArray*)var478)->values[2]=var488;
} else {
var478 = varonce477;
varonce477 = NULL;
}
{
var495 = ((val*(*)(val* self))(var_t->class->vft[COLOR_nitcc__grammar__Element__name]))(var_t); /* name on <var_t:Token>*/
}
{
var496 = ((val*(*)(val* self))(var495->class->vft[COLOR_core__abstract_text__Text__escape_to_nit]))(var495); /* escape_to_nit on <var495:String>*/
}
((struct instance_core__NativeArray*)var478)->values[1]=var496;
{
var497 = ((val*(*)(val* self))(var478->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var478); /* native_to_s on <var478:NativeArray[String]>*/
}
varonce477 = var478;
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nitcc__grammar__Generator__add]))(self, var497); /* add on <self:Generator>*/
}
if (likely(varonce498!=NULL)) {
var499 = varonce498;
} else {
var500 = "end";
var502 = (val*)(3l<<2|1);
var503 = (val*)(3l<<2|1);
var504 = (val*)((long)(0)<<2|3);
var505 = (val*)((long)(0)<<2|3);
var501 = core__flat___CString___to_s_unsafe(var500, var502, var503, var504, var505);
var499 = var501;
varonce498 = var499;
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nitcc__grammar__Generator__add]))(self, var499); /* add on <self:Generator>*/
}
{
((void(*)(val* self))((((long)var_323&3)?class_info[((long)var_323&3)]:var_323->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_323); /* next on <var_323:IndexedIterator[Token]>*/
}
}
BREAK_label325: (void)0;
{
((void(*)(val* self))((((long)var_323&3)?class_info[((long)var_323&3)]:var_323->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_323); /* finish on <var_323:IndexedIterator[Token]>*/
}
if (likely(varonce506!=NULL)) {
var507 = varonce506;
} else {
var508 = "redef class LRGoto";
var510 = (val*)(18l<<2|1);
var511 = (val*)(18l<<2|1);
var512 = (val*)((long)(0)<<2|3);
var513 = (val*)((long)(0)<<2|3);
var509 = core__flat___CString___to_s_unsafe(var508, var510, var511, var512, var513);
var507 = var509;
varonce506 = var507;
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nitcc__grammar__Generator__add]))(self, var507); /* add on <self:Generator>*/
}
var_514 = var_states;
{
var515 = ((val*(*)(val* self))(var_514->class->vft[COLOR_core__abstract_collection__Collection__iterator]))(var_514); /* iterator on <var_514:Array[LRState]>*/
}
var_516 = var515;
for(;;) {
{
var517 = ((short int(*)(val* self))((((long)var_516&3)?class_info[((long)var_516&3)]:var_516->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_516); /* is_ok on <var_516:IndexedIterator[LRState]>*/
}
if (var517){
} else {
goto BREAK_label518;
}
{
var519 = ((val*(*)(val* self))((((long)var_516&3)?class_info[((long)var_516&3)]:var_516->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_516); /* item on <var_516:IndexedIterator[LRState]>*/
}
var_s520 = var519;
{
var521 = ((val*(*)(val* self))(var_s520->class->vft[COLOR_nitcc__grammar__LRState__gotos]))(var_s520); /* gotos on <var_s520:LRState>*/
}
{
var522 = ((long(*)(val* self))(var521->class->vft[COLOR_core__abstract_collection__Collection__length]))(var521); /* length on <var521:ArraySet[Production]>*/
}
{
{ /* Inline kernel$Int$<= (var522,1l) on <var522:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var525 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var525)) {
var_class_name528 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name528);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 724);
fatal_exit(1);
}
var529 = var522 <= 1l;
var523 = var529;
goto RET_LABEL524;
RET_LABEL524:(void)0;
}
}
if (var523){
goto BREAK_label530;
} else {
}
if (unlikely(varonce531==NULL)) {
var532 = NEW_core__NativeArray((int)3l, &type_core__NativeArray__core__String);
if (likely(varonce533!=NULL)) {
var534 = varonce533;
} else {
var535 = "\tprivate fun goto_s";
var537 = (val*)(19l<<2|1);
var538 = (val*)(19l<<2|1);
var539 = (val*)((long)(0)<<2|3);
var540 = (val*)((long)(0)<<2|3);
var536 = core__flat___CString___to_s_unsafe(var535, var537, var538, var539, var540);
var534 = var536;
varonce533 = var534;
}
((struct instance_core__NativeArray*)var532)->values[0]=var534;
if (likely(varonce541!=NULL)) {
var542 = varonce541;
} else {
var543 = "(parser: Parser) do abort";
var545 = (val*)(25l<<2|1);
var546 = (val*)(25l<<2|1);
var547 = (val*)((long)(0)<<2|3);
var548 = (val*)((long)(0)<<2|3);
var544 = core__flat___CString___to_s_unsafe(var543, var545, var546, var547, var548);
var542 = var544;
varonce541 = var542;
}
((struct instance_core__NativeArray*)var532)->values[2]=var542;
} else {
var532 = varonce531;
varonce531 = NULL;
}
{
var549 = ((val*(*)(val* self))(var_s520->class->vft[COLOR_nitcc__grammar__LRState__cname]))(var_s520); /* cname on <var_s520:LRState>*/
}
((struct instance_core__NativeArray*)var532)->values[1]=var549;
{
var550 = ((val*(*)(val* self))(var532->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var532); /* native_to_s on <var532:NativeArray[String]>*/
}
varonce531 = var532;
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nitcc__grammar__Generator__add]))(self, var550); /* add on <self:Generator>*/
}
BREAK_label530: (void)0;
{
((void(*)(val* self))((((long)var_516&3)?class_info[((long)var_516&3)]:var_516->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_516); /* next on <var_516:IndexedIterator[LRState]>*/
}
}
BREAK_label518: (void)0;
{
((void(*)(val* self))((((long)var_516&3)?class_info[((long)var_516&3)]:var_516->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_516); /* finish on <var_516:IndexedIterator[LRState]>*/
}
if (likely(varonce551!=NULL)) {
var552 = varonce551;
} else {
var553 = "end";
var555 = (val*)(3l<<2|1);
var556 = (val*)(3l<<2|1);
var557 = (val*)((long)(0)<<2|3);
var558 = (val*)((long)(0)<<2|3);
var554 = core__flat___CString___to_s_unsafe(var553, var555, var556, var557, var558);
var552 = var554;
varonce551 = var552;
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nitcc__grammar__Generator__add]))(self, var552); /* add on <self:Generator>*/
}
{
var559 = ((val*(*)(val* self))(var_gram->class->vft[COLOR_nitcc__grammar__Gram__prods]))(var_gram); /* prods on <var_gram:Gram>*/
}
var_560 = var559;
{
var561 = ((val*(*)(val* self))(var_560->class->vft[COLOR_core__abstract_collection__Collection__iterator]))(var_560); /* iterator on <var_560:Array[Production]>*/
}
var_562 = var561;
for(;;) {
{
var563 = ((short int(*)(val* self))((((long)var_562&3)?class_info[((long)var_562&3)]:var_562->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_562); /* is_ok on <var_562:IndexedIterator[Production]>*/
}
if (var563){
} else {
goto BREAK_label564;
}
{
var565 = ((val*(*)(val* self))((((long)var_562&3)?class_info[((long)var_562&3)]:var_562->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_562); /* item on <var_562:IndexedIterator[Production]>*/
}
var_p566 = var565;
if (unlikely(varonce567==NULL)) {
var568 = NEW_core__NativeArray((int)2l, &type_core__NativeArray__core__String);
if (likely(varonce569!=NULL)) {
var570 = varonce569;
} else {
var571 = "class Goto_";
var573 = (val*)(11l<<2|1);
var574 = (val*)(11l<<2|1);
var575 = (val*)((long)(0)<<2|3);
var576 = (val*)((long)(0)<<2|3);
var572 = core__flat___CString___to_s_unsafe(var571, var573, var574, var575, var576);
var570 = var572;
varonce569 = var570;
}
((struct instance_core__NativeArray*)var568)->values[0]=var570;
} else {
var568 = varonce567;
varonce567 = NULL;
}
{
var577 = ((val*(*)(val* self))(var_p566->class->vft[COLOR_nitcc__grammar__Element__cname]))(var_p566); /* cname on <var_p566:Production>*/
}
((struct instance_core__NativeArray*)var568)->values[1]=var577;
{
var578 = ((val*(*)(val* self))(var568->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var568); /* native_to_s on <var568:NativeArray[String]>*/
}
varonce567 = var568;
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nitcc__grammar__Generator__add]))(self, var578); /* add on <self:Generator>*/
}
if (likely(varonce579!=NULL)) {
var580 = varonce579;
} else {
var581 = "\tsuper LRGoto";
var583 = (val*)(13l<<2|1);
var584 = (val*)(13l<<2|1);
var585 = (val*)((long)(0)<<2|3);
var586 = (val*)((long)(0)<<2|3);
var582 = core__flat___CString___to_s_unsafe(var581, var583, var584, var585, var586);
var580 = var582;
varonce579 = var580;
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nitcc__grammar__Generator__add]))(self, var580); /* add on <self:Generator>*/
}
{
var587 = ((val*(*)(val* self))(var_p566->class->vft[COLOR_nitcc__grammar__Production__gotos]))(var_p566); /* gotos on <var_p566:Production>*/
}
var_588 = var587;
{
var589 = ((val*(*)(val* self))(var_588->class->vft[COLOR_core__abstract_collection__Collection__iterator]))(var_588); /* iterator on <var_588:ArraySet[LRState]>*/
}
var_590 = var589;
for(;;) {
{
var591 = ((short int(*)(val* self))((((long)var_590&3)?class_info[((long)var_590&3)]:var_590->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_590); /* is_ok on <var_590:Iterator[LRState]>*/
}
if (var591){
} else {
goto BREAK_label592;
}
{
var593 = ((val*(*)(val* self))((((long)var_590&3)?class_info[((long)var_590&3)]:var_590->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_590); /* item on <var_590:Iterator[LRState]>*/
}
var_s594 = var593;
{
var595 = ((val*(*)(val* self))(var_s594->class->vft[COLOR_nitcc__grammar__LRState__gotos]))(var_s594); /* gotos on <var_s594:LRState>*/
}
{
var596 = ((long(*)(val* self))(var595->class->vft[COLOR_core__abstract_collection__Collection__length]))(var595); /* length on <var595:ArraySet[Production]>*/
}
{
{ /* Inline kernel$Int$<= (var596,1l) on <var596:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var599 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var599)) {
var_class_name602 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name602);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 724);
fatal_exit(1);
}
var603 = var596 <= 1l;
var597 = var603;
goto RET_LABEL598;
RET_LABEL598:(void)0;
}
}
if (var597){
goto BREAK_label604;
} else {
}
if (unlikely(varonce605==NULL)) {
var606 = NEW_core__NativeArray((int)3l, &type_core__NativeArray__core__String);
if (likely(varonce607!=NULL)) {
var608 = varonce607;
} else {
var609 = "\tredef fun goto_s";
var611 = (val*)(17l<<2|1);
var612 = (val*)(17l<<2|1);
var613 = (val*)((long)(0)<<2|3);
var614 = (val*)((long)(0)<<2|3);
var610 = core__flat___CString___to_s_unsafe(var609, var611, var612, var613, var614);
var608 = var610;
varonce607 = var608;
}
((struct instance_core__NativeArray*)var606)->values[0]=var608;
if (likely(varonce615!=NULL)) {
var616 = varonce615;
} else {
var617 = "(parser) do";
var619 = (val*)(11l<<2|1);
var620 = (val*)(11l<<2|1);
var621 = (val*)((long)(0)<<2|3);
var622 = (val*)((long)(0)<<2|3);
var618 = core__flat___CString___to_s_unsafe(var617, var619, var620, var621, var622);
var616 = var618;
varonce615 = var616;
}
((struct instance_core__NativeArray*)var606)->values[2]=var616;
} else {
var606 = varonce605;
varonce605 = NULL;
}
{
var623 = ((val*(*)(val* self))(var_s594->class->vft[COLOR_nitcc__grammar__LRState__cname]))(var_s594); /* cname on <var_s594:LRState>*/
}
((struct instance_core__NativeArray*)var606)->values[1]=var623;
{
var624 = ((val*(*)(val* self))(var606->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var606); /* native_to_s on <var606:NativeArray[String]>*/
}
varonce605 = var606;
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nitcc__grammar__Generator__add]))(self, var624); /* add on <self:Generator>*/
}
{
((void(*)(val* self, val* p0, val* p1))(self->class->vft[COLOR_nitcc__grammar__Generator__gen_goto_to_nit]))(self, var_s594, var_p566); /* gen_goto_to_nit on <self:Generator>*/
}
if (likely(varonce625!=NULL)) {
var626 = varonce625;
} else {
var627 = "\tend";
var629 = (val*)(4l<<2|1);
var630 = (val*)(4l<<2|1);
var631 = (val*)((long)(0)<<2|3);
var632 = (val*)((long)(0)<<2|3);
var628 = core__flat___CString___to_s_unsafe(var627, var629, var630, var631, var632);
var626 = var628;
varonce625 = var626;
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nitcc__grammar__Generator__add]))(self, var626); /* add on <self:Generator>*/
}
BREAK_label604: (void)0;
{
((void(*)(val* self))((((long)var_590&3)?class_info[((long)var_590&3)]:var_590->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_590); /* next on <var_590:Iterator[LRState]>*/
}
}
BREAK_label592: (void)0;
{
((void(*)(val* self))((((long)var_590&3)?class_info[((long)var_590&3)]:var_590->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_590); /* finish on <var_590:Iterator[LRState]>*/
}
if (likely(varonce633!=NULL)) {
var634 = varonce633;
} else {
var635 = "end";
var637 = (val*)(3l<<2|1);
var638 = (val*)(3l<<2|1);
var639 = (val*)((long)(0)<<2|3);
var640 = (val*)((long)(0)<<2|3);
var636 = core__flat___CString___to_s_unsafe(var635, var637, var638, var639, var640);
var634 = var636;
varonce633 = var634;
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nitcc__grammar__Generator__add]))(self, var634); /* add on <self:Generator>*/
}
{
((void(*)(val* self))((((long)var_562&3)?class_info[((long)var_562&3)]:var_562->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_562); /* next on <var_562:IndexedIterator[Production]>*/
}
}
BREAK_label564: (void)0;
{
((void(*)(val* self))((((long)var_562&3)?class_info[((long)var_562&3)]:var_562->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_562); /* finish on <var_562:IndexedIterator[Production]>*/
}
{
var641 = ((val*(*)(val* self))(var_gram->class->vft[COLOR_nitcc__grammar__Gram__prods]))(var_gram); /* prods on <var_gram:Gram>*/
}
{
var642 = ((val*(*)(val* self))(var641->class->vft[COLOR_core__array__Collection__to_a]))(var641); /* to_a on <var641:Array[Production]>*/
}
var_ps = var642;
{
var643 = ((val*(*)(val* self))(var_gram->class->vft[COLOR_nitcc__grammar__Gram__ast_prods]))(var_gram); /* ast_prods on <var_gram:Gram>*/
}
{
((void(*)(val* self, val* p0))(var_ps->class->vft[COLOR_core__abstract_collection__SimpleCollection__add_all]))(var_ps, var643); /* add_all on <var_ps:Array[Production]>*/
}
var_644 = var_ps;
{
var645 = ((val*(*)(val* self))(var_644->class->vft[COLOR_core__abstract_collection__Collection__iterator]))(var_644); /* iterator on <var_644:Array[Production]>*/
}
var_646 = var645;
for(;;) {
{
var647 = ((short int(*)(val* self))((((long)var_646&3)?class_info[((long)var_646&3)]:var_646->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_646); /* is_ok on <var_646:IndexedIterator[Production]>*/
}
if (var647){
} else {
goto BREAK_label648;
}
{
var649 = ((val*(*)(val* self))((((long)var_646&3)?class_info[((long)var_646&3)]:var_646->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_646); /* item on <var_646:IndexedIterator[Production]>*/
}
var_p650 = var649;
{
var652 = ((val*(*)(val* self))(var_p650->class->vft[COLOR_nitcc__grammar__Production__spe]))(var_p650); /* spe on <var_p650:Production>*/
}
if (var652 == NULL) {
var653 = 1; /* is null */
} else {
var653 = 0; /* arg is null but recv is not */
}
if (0) {
var654 = ((short int(*)(val* self, val* p0))(var652->class->vft[COLOR_core__kernel__Object___61d_61d]))(var652, ((val*)NULL)); /* == on <var652:nullable Production>*/
var653 = var654;
}
var_655 = var653;
if (var653){
{
var656 = ((short int(*)(val* self))(var_p650->class->vft[COLOR_nitcc__grammar__Production__altone]))(var_p650); /* altone on <var_p650:Production>*/
}
var657 = !var656;
var651 = var657;
} else {
var651 = var_655;
}
if (var651){
{
var659 = ((val*(*)(val* self))(var_p650->class->vft[COLOR_nitcc__grammar__Element__name]))(var_p650); /* name on <var_p650:Production>*/
}
if (likely(varonce660!=NULL)) {
var661 = varonce660;
} else {
var662 = "?";
var664 = (val*)(1l<<2|1);
var665 = (val*)(1l<<2|1);
var666 = (val*)((long)(0)<<2|3);
var667 = (val*)((long)(0)<<2|3);
var663 = core__flat___CString___to_s_unsafe(var662, var664, var665, var666, var667);
var661 = var663;
varonce660 = var661;
}
{
var668 = ((short int(*)(val* self, val* p0))(var659->class->vft[COLOR_core__abstract_text__Text__has_suffix]))(var659, var661); /* has_suffix on <var659:String>*/
}
var_669 = var668;
if (var668){
var658 = var_669;
} else {
{
var670 = ((val*(*)(val* self))(var_p650->class->vft[COLOR_nitcc__grammar__Element__name]))(var_p650); /* name on <var_p650:Production>*/
}
if (likely(varonce671!=NULL)) {
var672 = varonce671;
} else {
var673 = "+";
var675 = (val*)(1l<<2|1);
var676 = (val*)(1l<<2|1);
var677 = (val*)((long)(0)<<2|3);
var678 = (val*)((long)(0)<<2|3);
var674 = core__flat___CString___to_s_unsafe(var673, var675, var676, var677, var678);
var672 = var674;
varonce671 = var672;
}
{
var679 = ((short int(*)(val* self, val* p0))(var670->class->vft[COLOR_core__abstract_text__Text__has_suffix]))(var670, var672); /* has_suffix on <var670:String>*/
}
var658 = var679;
}
if (var658){
goto BREAK_label680;
} else {
}
if (unlikely(varonce681==NULL)) {
var682 = NEW_core__NativeArray((int)2l, &type_core__NativeArray__core__String);
if (likely(varonce683!=NULL)) {
var684 = varonce683;
} else {
var685 = "class ";
var687 = (val*)(6l<<2|1);
var688 = (val*)(6l<<2|1);
var689 = (val*)((long)(0)<<2|3);
var690 = (val*)((long)(0)<<2|3);
var686 = core__flat___CString___to_s_unsafe(var685, var687, var688, var689, var690);
var684 = var686;
varonce683 = var684;
}
((struct instance_core__NativeArray*)var682)->values[0]=var684;
} else {
var682 = varonce681;
varonce681 = NULL;
}
{
var691 = ((val*(*)(val* self))(var_p650->class->vft[COLOR_nitcc__grammar__Element__acname]))(var_p650); /* acname on <var_p650:Production>*/
}
((struct instance_core__NativeArray*)var682)->values[1]=var691;
{
var692 = ((val*(*)(val* self))(var682->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var682); /* native_to_s on <var682:NativeArray[String]>*/
}
varonce681 = var682;
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nitcc__grammar__Generator__add]))(self, var692); /* add on <self:Generator>*/
}
if (likely(varonce693!=NULL)) {
var694 = varonce693;
} else {
var695 = "\tsuper NProd";
var697 = (val*)(12l<<2|1);
var698 = (val*)(12l<<2|1);
var699 = (val*)((long)(0)<<2|3);
var700 = (val*)((long)(0)<<2|3);
var696 = core__flat___CString___to_s_unsafe(var695, var697, var698, var699, var700);
var694 = var696;
varonce693 = var694;
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nitcc__grammar__Generator__add]))(self, var694); /* add on <self:Generator>*/
}
if (unlikely(varonce701==NULL)) {
var702 = NEW_core__NativeArray((int)3l, &type_core__NativeArray__core__String);
if (likely(varonce703!=NULL)) {
var704 = varonce703;
} else {
var705 = "\tredef fun node_name do return \"";
var707 = (val*)(32l<<2|1);
var708 = (val*)(32l<<2|1);
var709 = (val*)((long)(0)<<2|3);
var710 = (val*)((long)(0)<<2|3);
var706 = core__flat___CString___to_s_unsafe(var705, var707, var708, var709, var710);
var704 = var706;
varonce703 = var704;
}
((struct instance_core__NativeArray*)var702)->values[0]=var704;
if (likely(varonce711!=NULL)) {
var712 = varonce711;
} else {
var713 = "\"";
var715 = (val*)(1l<<2|1);
var716 = (val*)(1l<<2|1);
var717 = (val*)((long)(0)<<2|3);
var718 = (val*)((long)(0)<<2|3);
var714 = core__flat___CString___to_s_unsafe(var713, var715, var716, var717, var718);
var712 = var714;
varonce711 = var712;
}
((struct instance_core__NativeArray*)var702)->values[2]=var712;
} else {
var702 = varonce701;
varonce701 = NULL;
}
{
var719 = ((val*(*)(val* self))(var_p650->class->vft[COLOR_nitcc__grammar__Element__name]))(var_p650); /* name on <var_p650:Production>*/
}
{
var720 = ((val*(*)(val* self))(var719->class->vft[COLOR_core__abstract_text__Text__escape_to_nit]))(var719); /* escape_to_nit on <var719:String>*/
}
((struct instance_core__NativeArray*)var702)->values[1]=var720;
{
var721 = ((val*(*)(val* self))(var702->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var702); /* native_to_s on <var702:NativeArray[String]>*/
}
varonce701 = var702;
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nitcc__grammar__Generator__add]))(self, var721); /* add on <self:Generator>*/
}
if (likely(varonce722!=NULL)) {
var723 = varonce722;
} else {
var724 = "end";
var726 = (val*)(3l<<2|1);
var727 = (val*)(3l<<2|1);
var728 = (val*)((long)(0)<<2|3);
var729 = (val*)((long)(0)<<2|3);
var725 = core__flat___CString___to_s_unsafe(var724, var726, var727, var728, var729);
var723 = var725;
varonce722 = var723;
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nitcc__grammar__Generator__add]))(self, var723); /* add on <self:Generator>*/
}
} else {
}
{
var730 = ((val*(*)(val* self))(var_p650->class->vft[COLOR_nitcc__grammar__Production__alts]))(var_p650); /* alts on <var_p650:Production>*/
}
{
var731 = ((val*(*)(val* self))(var730->class->vft[COLOR_core__array__Collection__to_a]))(var730); /* to_a on <var730:Array[Alternative]>*/
}
var_als = var731;
{
var732 = ((val*(*)(val* self))(var_p650->class->vft[COLOR_nitcc__grammar__Production__ast_alts]))(var_p650); /* ast_alts on <var_p650:Production>*/
}
{
((void(*)(val* self, val* p0))(var_als->class->vft[COLOR_core__abstract_collection__SimpleCollection__add_all]))(var_als, var732); /* add_all on <var_als:Array[Alternative]>*/
}
var_733 = var_als;
{
var734 = ((val*(*)(val* self))(var_733->class->vft[COLOR_core__abstract_collection__Collection__iterator]))(var_733); /* iterator on <var_733:Array[Alternative]>*/
}
var_735 = var734;
for(;;) {
{
var736 = ((short int(*)(val* self))((((long)var_735&3)?class_info[((long)var_735&3)]:var_735->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_735); /* is_ok on <var_735:IndexedIterator[Alternative]>*/
}
if (var736){
} else {
goto BREAK_label737;
}
{
var738 = ((val*(*)(val* self))((((long)var_735&3)?class_info[((long)var_735&3)]:var_735->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_735); /* item on <var_735:IndexedIterator[Alternative]>*/
}
var_a739 = var738;
{
var740 = ((short int(*)(val* self))(var_a739->class->vft[COLOR_nitcc__grammar__Alternative__trans]))(var_a739); /* trans on <var_a739:Alternative>*/
}
if (var740){
goto BREAK_label741;
} else {
}
if (unlikely(varonce742==NULL)) {
var743 = NEW_core__NativeArray((int)2l, &type_core__NativeArray__core__String);
if (likely(varonce744!=NULL)) {
var745 = varonce744;
} else {
var746 = "class ";
var748 = (val*)(6l<<2|1);
var749 = (val*)(6l<<2|1);
var750 = (val*)((long)(0)<<2|3);
var751 = (val*)((long)(0)<<2|3);
var747 = core__flat___CString___to_s_unsafe(var746, var748, var749, var750, var751);
var745 = var747;
varonce744 = var745;
}
((struct instance_core__NativeArray*)var743)->values[0]=var745;
} else {
var743 = varonce742;
varonce742 = NULL;
}
{
var752 = ((val*(*)(val* self))(var_a739->class->vft[COLOR_nitcc__grammar__Alternative__cname]))(var_a739); /* cname on <var_a739:Alternative>*/
}
((struct instance_core__NativeArray*)var743)->values[1]=var752;
{
var753 = ((val*(*)(val* self))(var743->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var743); /* native_to_s on <var743:NativeArray[String]>*/
}
varonce742 = var743;
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nitcc__grammar__Generator__add]))(self, var753); /* add on <self:Generator>*/
}
{
var754 = ((short int(*)(val* self))(var_p650->class->vft[COLOR_nitcc__grammar__Production__altone]))(var_p650); /* altone on <var_p650:Production>*/
}
if (var754){
if (likely(varonce755!=NULL)) {
var756 = varonce755;
} else {
var757 = "\tsuper NProd";
var759 = (val*)(12l<<2|1);
var760 = (val*)(12l<<2|1);
var761 = (val*)((long)(0)<<2|3);
var762 = (val*)((long)(0)<<2|3);
var758 = core__flat___CString___to_s_unsafe(var757, var759, var760, var761, var762);
var756 = var758;
varonce755 = var756;
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nitcc__grammar__Generator__add]))(self, var756); /* add on <self:Generator>*/
}
} else {
if (unlikely(varonce763==NULL)) {
var764 = NEW_core__NativeArray((int)2l, &type_core__NativeArray__core__String);
if (likely(varonce765!=NULL)) {
var766 = varonce765;
} else {
var767 = "\tsuper ";
var769 = (val*)(7l<<2|1);
var770 = (val*)(7l<<2|1);
var771 = (val*)((long)(0)<<2|3);
var772 = (val*)((long)(0)<<2|3);
var768 = core__flat___CString___to_s_unsafe(var767, var769, var770, var771, var772);
var766 = var768;
varonce765 = var766;
}
((struct instance_core__NativeArray*)var764)->values[0]=var766;
} else {
var764 = varonce763;
varonce763 = NULL;
}
{
var773 = ((val*(*)(val* self))(var_p650->class->vft[COLOR_nitcc__grammar__Element__acname]))(var_p650); /* acname on <var_p650:Production>*/
}
((struct instance_core__NativeArray*)var764)->values[1]=var773;
{
var774 = ((val*(*)(val* self))(var764->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var764); /* native_to_s on <var764:NativeArray[String]>*/
}
varonce763 = var764;
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nitcc__grammar__Generator__add]))(self, var774); /* add on <self:Generator>*/
}
}
if (unlikely(varonce775==NULL)) {
var776 = NEW_core__NativeArray((int)3l, &type_core__NativeArray__core__String);
if (likely(varonce777!=NULL)) {
var778 = varonce777;
} else {
var779 = "\tredef fun node_name do return \"";
var781 = (val*)(32l<<2|1);
var782 = (val*)(32l<<2|1);
var783 = (val*)((long)(0)<<2|3);
var784 = (val*)((long)(0)<<2|3);
var780 = core__flat___CString___to_s_unsafe(var779, var781, var782, var783, var784);
var778 = var780;
varonce777 = var778;
}
((struct instance_core__NativeArray*)var776)->values[0]=var778;
if (likely(varonce785!=NULL)) {
var786 = varonce785;
} else {
var787 = "\"";
var789 = (val*)(1l<<2|1);
var790 = (val*)(1l<<2|1);
var791 = (val*)((long)(0)<<2|3);
var792 = (val*)((long)(0)<<2|3);
var788 = core__flat___CString___to_s_unsafe(var787, var789, var790, var791, var792);
var786 = var788;
varonce785 = var786;
}
((struct instance_core__NativeArray*)var776)->values[2]=var786;
} else {
var776 = varonce775;
varonce775 = NULL;
}
{
var793 = ((val*(*)(val* self))(var_a739->class->vft[COLOR_nitcc__grammar__Alternative__name]))(var_a739); /* name on <var_a739:Alternative>*/
}
{
var794 = ((val*(*)(val* self))(var793->class->vft[COLOR_core__abstract_text__Text__escape_to_nit]))(var793); /* escape_to_nit on <var793:String>*/
}
((struct instance_core__NativeArray*)var776)->values[1]=var794;
{
var795 = ((val*(*)(val* self))(var776->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var776); /* native_to_s on <var776:NativeArray[String]>*/
}
varonce775 = var776;
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nitcc__grammar__Generator__add]))(self, var795); /* add on <self:Generator>*/
}
var796 = NEW_core__Array(&type_core__Array__core__String);
{
((void(*)(val* self))(var796->class->vft[COLOR_core__kernel__Object__init]))(var796); /* init on <var796:Array[String]>*/
}
var_initarg = var796;
var_i = 0l;
{
var797 = ((val*(*)(val* self))(var_a739->class->vft[COLOR_nitcc__grammar__Alternative__elems]))(var_a739); /* elems on <var_a739:Alternative>*/
}
{
var798 = ((long(*)(val* self))(var797->class->vft[COLOR_core__abstract_collection__Collection__length]))(var797); /* length on <var797:Array[Element]>*/
}
var_799 = var798;
for(;;) {
{
{ /* Inline kernel$Int$< (var_i,var_799) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var_799:Int> isa OTHER */
/* <var_799:Int> isa OTHER */
var802 = 1; /* easy <var_799:Int> isa OTHER*/
if (unlikely(!var802)) {
var_class_name805 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name805);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var806 = var_i < var_799;
var800 = var806;
goto RET_LABEL801;
RET_LABEL801:(void)0;
}
}
if (var800){
} else {
goto BREAK_label807;
}
if (unlikely(varonce808==NULL)) {
var809 = NEW_core__NativeArray((int)4l, &type_core__NativeArray__core__String);
if (likely(varonce810!=NULL)) {
var811 = varonce810;
} else {
var812 = "\tvar n_";
var814 = (val*)(7l<<2|1);
var815 = (val*)(7l<<2|1);
var816 = (val*)((long)(0)<<2|3);
var817 = (val*)((long)(0)<<2|3);
var813 = core__flat___CString___to_s_unsafe(var812, var814, var815, var816, var817);
var811 = var813;
varonce810 = var811;
}
((struct instance_core__NativeArray*)var809)->values[0]=var811;
if (likely(varonce818!=NULL)) {
var819 = varonce818;
} else {
var820 = ": ";
var822 = (val*)(2l<<2|1);
var823 = (val*)(2l<<2|1);
var824 = (val*)((long)(0)<<2|3);
var825 = (val*)((long)(0)<<2|3);
var821 = core__flat___CString___to_s_unsafe(var820, var822, var823, var824, var825);
var819 = var821;
varonce818 = var819;
}
((struct instance_core__NativeArray*)var809)->values[2]=var819;
} else {
var809 = varonce808;
varonce808 = NULL;
}
{
var826 = ((val*(*)(val* self, long p0))(var_a739->class->vft[COLOR_nitcc__grammar__Alternative__elemname]))(var_a739, var_i); /* elemname on <var_a739:Alternative>*/
}
((struct instance_core__NativeArray*)var809)->values[1]=var826;
{
var827 = ((val*(*)(val* self))(var_a739->class->vft[COLOR_nitcc__grammar__Alternative__elems]))(var_a739); /* elems on <var_a739:Alternative>*/
}
{
var828 = ((val*(*)(val* self, long p0))(var827->class->vft[COLOR_core__abstract_collection__SequenceRead___91d_93d]))(var827, var_i); /* [] on <var827:Array[Element]>*/
}
{
var829 = ((val*(*)(val* self))(var828->class->vft[COLOR_nitcc__grammar__Element__acname]))(var828); /* acname on <var828:nullable Object(Element)>*/
}
((struct instance_core__NativeArray*)var809)->values[3]=var829;
{
var830 = ((val*(*)(val* self))(var809->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var809); /* native_to_s on <var809:NativeArray[String]>*/
}
varonce808 = var809;
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nitcc__grammar__Generator__add]))(self, var830); /* add on <self:Generator>*/
}
if (unlikely(varonce831==NULL)) {
var832 = NEW_core__NativeArray((int)4l, &type_core__NativeArray__core__String);
if (likely(varonce833!=NULL)) {
var834 = varonce833;
} else {
var835 = "n_";
var837 = (val*)(2l<<2|1);
var838 = (val*)(2l<<2|1);
var839 = (val*)((long)(0)<<2|3);
var840 = (val*)((long)(0)<<2|3);
var836 = core__flat___CString___to_s_unsafe(var835, var837, var838, var839, var840);
var834 = var836;
varonce833 = var834;
}
((struct instance_core__NativeArray*)var832)->values[0]=var834;
if (likely(varonce841!=NULL)) {
var842 = varonce841;
} else {
var843 = ": ";
var845 = (val*)(2l<<2|1);
var846 = (val*)(2l<<2|1);
var847 = (val*)((long)(0)<<2|3);
var848 = (val*)((long)(0)<<2|3);
var844 = core__flat___CString___to_s_unsafe(var843, var845, var846, var847, var848);
var842 = var844;
varonce841 = var842;
}
((struct instance_core__NativeArray*)var832)->values[2]=var842;
} else {
var832 = varonce831;
varonce831 = NULL;
}
{
var849 = ((val*(*)(val* self, long p0))(var_a739->class->vft[COLOR_nitcc__grammar__Alternative__elemname]))(var_a739, var_i); /* elemname on <var_a739:Alternative>*/
}
((struct instance_core__NativeArray*)var832)->values[1]=var849;
{
var850 = ((val*(*)(val* self))(var_a739->class->vft[COLOR_nitcc__grammar__Alternative__elems]))(var_a739); /* elems on <var_a739:Alternative>*/
}
{
var851 = ((val*(*)(val* self, long p0))(var850->class->vft[COLOR_core__abstract_collection__SequenceRead___91d_93d]))(var850, var_i); /* [] on <var850:Array[Element]>*/
}
{
var852 = ((val*(*)(val* self))(var851->class->vft[COLOR_nitcc__grammar__Element__acname]))(var851); /* acname on <var851:nullable Object(Element)>*/
}
((struct instance_core__NativeArray*)var832)->values[3]=var852;
{
var853 = ((val*(*)(val* self))(var832->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var832); /* native_to_s on <var832:NativeArray[String]>*/
}
varonce831 = var832;
{
((void(*)(val* self, val* p0))(var_initarg->class->vft[COLOR_core__abstract_collection__SimpleCollection__add]))(var_initarg, var853); /* add on <var_initarg:Array[String]>*/
}
var854 = core___core__Int___Discrete__successor(var_i, 1l);
var_i = var854;
}
BREAK_label807: (void)0;
{
var855 = ((short int(*)(val* self))(var_initarg->class->vft[COLOR_core__abstract_collection__Collection__is_empty]))(var_initarg); /* is_empty on <var_initarg:Array[String]>*/
}
if (var855){
if (likely(varonce856!=NULL)) {
var857 = varonce856;
} else {
var858 = "\tinit do end";
var860 = (val*)(12l<<2|1);
var861 = (val*)(12l<<2|1);
var862 = (val*)((long)(0)<<2|3);
var863 = (val*)((long)(0)<<2|3);
var859 = core__flat___CString___to_s_unsafe(var858, var860, var861, var862, var863);
var857 = var859;
varonce856 = var857;
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nitcc__grammar__Generator__add]))(self, var857); /* add on <self:Generator>*/
}
} else {
if (unlikely(varonce864==NULL)) {
var865 = NEW_core__NativeArray((int)3l, &type_core__NativeArray__core__String);
if (likely(varonce866!=NULL)) {
var867 = varonce866;
} else {
var868 = "\tinit(";
var870 = (val*)(6l<<2|1);
var871 = (val*)(6l<<2|1);
var872 = (val*)((long)(0)<<2|3);
var873 = (val*)((long)(0)<<2|3);
var869 = core__flat___CString___to_s_unsafe(var868, var870, var871, var872, var873);
var867 = var869;
varonce866 = var867;
}
((struct instance_core__NativeArray*)var865)->values[0]=var867;
if (likely(varonce874!=NULL)) {
var875 = varonce874;
} else {
var876 = ") do";
var878 = (val*)(4l<<2|1);
var879 = (val*)(4l<<2|1);
var880 = (val*)((long)(0)<<2|3);
var881 = (val*)((long)(0)<<2|3);
var877 = core__flat___CString___to_s_unsafe(var876, var878, var879, var880, var881);
var875 = var877;
varonce874 = var875;
}
((struct instance_core__NativeArray*)var865)->values[2]=var875;
} else {
var865 = varonce864;
varonce864 = NULL;
}
if (likely(varonce882!=NULL)) {
var883 = varonce882;
} else {
var884 = ", ";
var886 = (val*)(2l<<2|1);
var887 = (val*)(2l<<2|1);
var888 = (val*)((long)(0)<<2|3);
var889 = (val*)((long)(0)<<2|3);
var885 = core__flat___CString___to_s_unsafe(var884, var886, var887, var888, var889);
var883 = var885;
varonce882 = var883;
}
{
var890 = ((val*(*)(val* self, val* p0, val* p1))(var_initarg->class->vft[COLOR_core__abstract_text__Collection__join]))(var_initarg, var883, ((val*)NULL)); /* join on <var_initarg:Array[String]>*/
}
((struct instance_core__NativeArray*)var865)->values[1]=var890;
{
var891 = ((val*(*)(val* self))(var865->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var865); /* native_to_s on <var865:NativeArray[String]>*/
}
varonce864 = var865;
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nitcc__grammar__Generator__add]))(self, var891); /* add on <self:Generator>*/
}
var_i892 = 0l;
{
var893 = ((val*(*)(val* self))(var_a739->class->vft[COLOR_nitcc__grammar__Alternative__elems]))(var_a739); /* elems on <var_a739:Alternative>*/
}
{
var894 = ((long(*)(val* self))(var893->class->vft[COLOR_core__abstract_collection__Collection__length]))(var893); /* length on <var893:Array[Element]>*/
}
var_895 = var894;
for(;;) {
{
{ /* Inline kernel$Int$< (var_i892,var_895) on <var_i892:Int> */
/* Covariant cast for argument 0 (i) <var_895:Int> isa OTHER */
/* <var_895:Int> isa OTHER */
var898 = 1; /* easy <var_895:Int> isa OTHER*/
if (unlikely(!var898)) {
var_class_name901 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name901);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var902 = var_i892 < var_895;
var896 = var902;
goto RET_LABEL897;
RET_LABEL897:(void)0;
}
}
if (var896){
} else {
goto BREAK_label903;
}
if (unlikely(varonce904==NULL)) {
var905 = NEW_core__NativeArray((int)4l, &type_core__NativeArray__core__String);
if (likely(varonce906!=NULL)) {
var907 = varonce906;
} else {
var908 = "\t\tself.n_";
var910 = (val*)(9l<<2|1);
var911 = (val*)(9l<<2|1);
var912 = (val*)((long)(0)<<2|3);
var913 = (val*)((long)(0)<<2|3);
var909 = core__flat___CString___to_s_unsafe(var908, var910, var911, var912, var913);
var907 = var909;
varonce906 = var907;
}
((struct instance_core__NativeArray*)var905)->values[0]=var907;
if (likely(varonce914!=NULL)) {
var915 = varonce914;
} else {
var916 = " = n_";
var918 = (val*)(5l<<2|1);
var919 = (val*)(5l<<2|1);
var920 = (val*)((long)(0)<<2|3);
var921 = (val*)((long)(0)<<2|3);
var917 = core__flat___CString___to_s_unsafe(var916, var918, var919, var920, var921);
var915 = var917;
varonce914 = var915;
}
((struct instance_core__NativeArray*)var905)->values[2]=var915;
} else {
var905 = varonce904;
varonce904 = NULL;
}
{
var922 = ((val*(*)(val* self, long p0))(var_a739->class->vft[COLOR_nitcc__grammar__Alternative__elemname]))(var_a739, var_i892); /* elemname on <var_a739:Alternative>*/
}
((struct instance_core__NativeArray*)var905)->values[1]=var922;
{
var923 = ((val*(*)(val* self, long p0))(var_a739->class->vft[COLOR_nitcc__grammar__Alternative__elemname]))(var_a739, var_i892); /* elemname on <var_a739:Alternative>*/
}
((struct instance_core__NativeArray*)var905)->values[3]=var923;
{
var924 = ((val*(*)(val* self))(var905->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var905); /* native_to_s on <var905:NativeArray[String]>*/
}
varonce904 = var905;
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nitcc__grammar__Generator__add]))(self, var924); /* add on <self:Generator>*/
}
var925 = core___core__Int___Discrete__successor(var_i892, 1l);
var_i892 = var925;
}
BREAK_label903: (void)0;
if (likely(varonce926!=NULL)) {
var927 = varonce926;
} else {
var928 = "\tend";
var930 = (val*)(4l<<2|1);
var931 = (val*)(4l<<2|1);
var932 = (val*)((long)(0)<<2|3);
var933 = (val*)((long)(0)<<2|3);
var929 = core__flat___CString___to_s_unsafe(var928, var930, var931, var932, var933);
var927 = var929;
varonce926 = var927;
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nitcc__grammar__Generator__add]))(self, var927); /* add on <self:Generator>*/
}
}
if (unlikely(varonce934==NULL)) {
var935 = NEW_core__NativeArray((int)2l, &type_core__NativeArray__core__String);
if (likely(varonce936!=NULL)) {
var937 = varonce936;
} else {
var938 = "\tredef fun number_of_children do return ";
var940 = (val*)(40l<<2|1);
var941 = (val*)(40l<<2|1);
var942 = (val*)((long)(0)<<2|3);
var943 = (val*)((long)(0)<<2|3);
var939 = core__flat___CString___to_s_unsafe(var938, var940, var941, var942, var943);
var937 = var939;
varonce936 = var937;
}
((struct instance_core__NativeArray*)var935)->values[0]=var937;
} else {
var935 = varonce934;
varonce934 = NULL;
}
{
var944 = ((val*(*)(val* self))(var_a739->class->vft[COLOR_nitcc__grammar__Alternative__elems]))(var_a739); /* elems on <var_a739:Alternative>*/
}
{
var945 = ((long(*)(val* self))(var944->class->vft[COLOR_core__abstract_collection__Collection__length]))(var944); /* length on <var944:Array[Element]>*/
}
var946 = core__flat___Int___core__abstract_text__Object__to_s(var945);
((struct instance_core__NativeArray*)var935)->values[1]=var946;
{
var947 = ((val*(*)(val* self))(var935->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var935); /* native_to_s on <var935:NativeArray[String]>*/
}
varonce934 = var935;
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nitcc__grammar__Generator__add]))(self, var947); /* add on <self:Generator>*/
}
if (likely(varonce948!=NULL)) {
var949 = varonce948;
} else {
var950 = "\tredef fun child(i) do";
var952 = (val*)(22l<<2|1);
var953 = (val*)(22l<<2|1);
var954 = (val*)((long)(0)<<2|3);
var955 = (val*)((long)(0)<<2|3);
var951 = core__flat___CString___to_s_unsafe(var950, var952, var953, var954, var955);
var949 = var951;
varonce948 = var949;
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nitcc__grammar__Generator__add]))(self, var949); /* add on <self:Generator>*/
}
var_i956 = 0l;
{
var957 = ((val*(*)(val* self))(var_a739->class->vft[COLOR_nitcc__grammar__Alternative__elems]))(var_a739); /* elems on <var_a739:Alternative>*/
}
{
var958 = ((long(*)(val* self))(var957->class->vft[COLOR_core__abstract_collection__Collection__length]))(var957); /* length on <var957:Array[Element]>*/
}
var_959 = var958;
for(;;) {
{
{ /* Inline kernel$Int$< (var_i956,var_959) on <var_i956:Int> */
/* Covariant cast for argument 0 (i) <var_959:Int> isa OTHER */
/* <var_959:Int> isa OTHER */
var962 = 1; /* easy <var_959:Int> isa OTHER*/
if (unlikely(!var962)) {
var_class_name965 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name965);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var966 = var_i956 < var_959;
var960 = var966;
goto RET_LABEL961;
RET_LABEL961:(void)0;
}
}
if (var960){
} else {
goto BREAK_label967;
}
if (unlikely(varonce968==NULL)) {
var969 = NEW_core__NativeArray((int)4l, &type_core__NativeArray__core__String);
if (likely(varonce970!=NULL)) {
var971 = varonce970;
} else {
var972 = "\t\tif i == ";
var974 = (val*)(10l<<2|1);
var975 = (val*)(10l<<2|1);
var976 = (val*)((long)(0)<<2|3);
var977 = (val*)((long)(0)<<2|3);
var973 = core__flat___CString___to_s_unsafe(var972, var974, var975, var976, var977);
var971 = var973;
varonce970 = var971;
}
((struct instance_core__NativeArray*)var969)->values[0]=var971;
if (likely(varonce978!=NULL)) {
var979 = varonce978;
} else {
var980 = " then return n_";
var982 = (val*)(15l<<2|1);
var983 = (val*)(15l<<2|1);
var984 = (val*)((long)(0)<<2|3);
var985 = (val*)((long)(0)<<2|3);
var981 = core__flat___CString___to_s_unsafe(var980, var982, var983, var984, var985);
var979 = var981;
varonce978 = var979;
}
((struct instance_core__NativeArray*)var969)->values[2]=var979;
} else {
var969 = varonce968;
varonce968 = NULL;
}
var986 = core__flat___Int___core__abstract_text__Object__to_s(var_i956);
((struct instance_core__NativeArray*)var969)->values[1]=var986;
{
var987 = ((val*(*)(val* self, long p0))(var_a739->class->vft[COLOR_nitcc__grammar__Alternative__elemname]))(var_a739, var_i956); /* elemname on <var_a739:Alternative>*/
}
((struct instance_core__NativeArray*)var969)->values[3]=var987;
{
var988 = ((val*(*)(val* self))(var969->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var969); /* native_to_s on <var969:NativeArray[String]>*/
}
varonce968 = var969;
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nitcc__grammar__Generator__add]))(self, var988); /* add on <self:Generator>*/
}
var989 = core___core__Int___Discrete__successor(var_i956, 1l);
var_i956 = var989;
}
BREAK_label967: (void)0;
if (likely(varonce990!=NULL)) {
var991 = varonce990;
} else {
var992 = "\t\tabort";
var994 = (val*)(7l<<2|1);
var995 = (val*)(7l<<2|1);
var996 = (val*)((long)(0)<<2|3);
var997 = (val*)((long)(0)<<2|3);
var993 = core__flat___CString___to_s_unsafe(var992, var994, var995, var996, var997);
var991 = var993;
varonce990 = var991;
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nitcc__grammar__Generator__add]))(self, var991); /* add on <self:Generator>*/
}
if (likely(varonce998!=NULL)) {
var999 = varonce998;
} else {
var1000 = "\tend";
var1002 = (val*)(4l<<2|1);
var1003 = (val*)(4l<<2|1);
var1004 = (val*)((long)(0)<<2|3);
var1005 = (val*)((long)(0)<<2|3);
var1001 = core__flat___CString___to_s_unsafe(var1000, var1002, var1003, var1004, var1005);
var999 = var1001;
varonce998 = var999;
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nitcc__grammar__Generator__add]))(self, var999); /* add on <self:Generator>*/
}
if (likely(varonce1006!=NULL)) {
var1007 = varonce1006;
} else {
var1008 = "end";
var1010 = (val*)(3l<<2|1);
var1011 = (val*)(3l<<2|1);
var1012 = (val*)((long)(0)<<2|3);
var1013 = (val*)((long)(0)<<2|3);
var1009 = core__flat___CString___to_s_unsafe(var1008, var1010, var1011, var1012, var1013);
var1007 = var1009;
varonce1006 = var1007;
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nitcc__grammar__Generator__add]))(self, var1007); /* add on <self:Generator>*/
}
BREAK_label741: (void)0;
{
((void(*)(val* self))((((long)var_735&3)?class_info[((long)var_735&3)]:var_735->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_735); /* next on <var_735:IndexedIterator[Alternative]>*/
}
}
BREAK_label737: (void)0;
{
((void(*)(val* self))((((long)var_735&3)?class_info[((long)var_735&3)]:var_735->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_735); /* finish on <var_735:IndexedIterator[Alternative]>*/
}
BREAK_label680: (void)0;
{
((void(*)(val* self))((((long)var_646&3)?class_info[((long)var_646&3)]:var_646->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_646); /* next on <var_646:IndexedIterator[Production]>*/
}
}
BREAK_label648: (void)0;
{
((void(*)(val* self))((((long)var_646&3)?class_info[((long)var_646&3)]:var_646->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_646); /* finish on <var_646:IndexedIterator[Production]>*/
}
var_1014 = var_states;
{
var1015 = ((val*(*)(val* self))(var_1014->class->vft[COLOR_core__abstract_collection__Collection__iterator]))(var_1014); /* iterator on <var_1014:Array[LRState]>*/
}
var_1016 = var1015;
for(;;) {
{
var1017 = ((short int(*)(val* self))((((long)var_1016&3)?class_info[((long)var_1016&3)]:var_1016->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_1016); /* is_ok on <var_1016:IndexedIterator[LRState]>*/
}
if (var1017){
} else {
goto BREAK_label1018;
}
{
var1019 = ((val*(*)(val* self))((((long)var_1016&3)?class_info[((long)var_1016&3)]:var_1016->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_1016); /* item on <var_1016:IndexedIterator[LRState]>*/
}
var_s1020 = var1019;
if (unlikely(varonce1021==NULL)) {
var1022 = NEW_core__NativeArray((int)2l, &type_core__NativeArray__core__String);
if (likely(varonce1023!=NULL)) {
var1024 = varonce1023;
} else {
var1025 = "# State ";
var1027 = (val*)(8l<<2|1);
var1028 = (val*)(8l<<2|1);
var1029 = (val*)((long)(0)<<2|3);
var1030 = (val*)((long)(0)<<2|3);
var1026 = core__flat___CString___to_s_unsafe(var1025, var1027, var1028, var1029, var1030);
var1024 = var1026;
varonce1023 = var1024;
}
((struct instance_core__NativeArray*)var1022)->values[0]=var1024;
} else {
var1022 = varonce1021;
varonce1021 = NULL;
}
{
var1031 = ((val*(*)(val* self))(var_s1020->class->vft[COLOR_nitcc__grammar__LRState__name]))(var_s1020); /* name on <var_s1020:LRState>*/
}
((struct instance_core__NativeArray*)var1022)->values[1]=var1031;
{
var1032 = ((val*(*)(val* self))(var1022->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var1022); /* native_to_s on <var1022:NativeArray[String]>*/
}
varonce1021 = var1022;
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nitcc__grammar__Generator__add]))(self, var1032); /* add on <self:Generator>*/
}
if (unlikely(varonce1033==NULL)) {
var1034 = NEW_core__NativeArray((int)2l, &type_core__NativeArray__core__String);
if (likely(varonce1035!=NULL)) {
var1036 = varonce1035;
} else {
var1037 = "private class LRState";
var1039 = (val*)(21l<<2|1);
var1040 = (val*)(21l<<2|1);
var1041 = (val*)((long)(0)<<2|3);
var1042 = (val*)((long)(0)<<2|3);
var1038 = core__flat___CString___to_s_unsafe(var1037, var1039, var1040, var1041, var1042);
var1036 = var1038;
varonce1035 = var1036;
}
((struct instance_core__NativeArray*)var1034)->values[0]=var1036;
} else {
var1034 = varonce1033;
varonce1033 = NULL;
}
{
var1043 = ((val*(*)(val* self))(var_s1020->class->vft[COLOR_nitcc__grammar__LRState__cname]))(var_s1020); /* cname on <var_s1020:LRState>*/
}
((struct instance_core__NativeArray*)var1034)->values[1]=var1043;
{
var1044 = ((val*(*)(val* self))(var1034->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var1034); /* native_to_s on <var1034:NativeArray[String]>*/
}
varonce1033 = var1034;
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nitcc__grammar__Generator__add]))(self, var1044); /* add on <self:Generator>*/
}
if (likely(varonce1045!=NULL)) {
var1046 = varonce1045;
} else {
var1047 = "\tsuper LRState";
var1049 = (val*)(14l<<2|1);
var1050 = (val*)(14l<<2|1);
var1051 = (val*)((long)(0)<<2|3);
var1052 = (val*)((long)(0)<<2|3);
var1048 = core__flat___CString___to_s_unsafe(var1047, var1049, var1050, var1051, var1052);
var1046 = var1048;
varonce1045 = var1046;
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nitcc__grammar__Generator__add]))(self, var1046); /* add on <self:Generator>*/
}
if (unlikely(varonce1053==NULL)) {
var1054 = NEW_core__NativeArray((int)3l, &type_core__NativeArray__core__String);
if (likely(varonce1055!=NULL)) {
var1056 = varonce1055;
} else {
var1057 = "\tredef fun to_s do return \"";
var1059 = (val*)(27l<<2|1);
var1060 = (val*)(27l<<2|1);
var1061 = (val*)((long)(0)<<2|3);
var1062 = (val*)((long)(0)<<2|3);
var1058 = core__flat___CString___to_s_unsafe(var1057, var1059, var1060, var1061, var1062);
var1056 = var1058;
varonce1055 = var1056;
}
((struct instance_core__NativeArray*)var1054)->values[0]=var1056;
if (likely(varonce1063!=NULL)) {
var1064 = varonce1063;
} else {
var1065 = "\"";
var1067 = (val*)(1l<<2|1);
var1068 = (val*)(1l<<2|1);
var1069 = (val*)((long)(0)<<2|3);
var1070 = (val*)((long)(0)<<2|3);
var1066 = core__flat___CString___to_s_unsafe(var1065, var1067, var1068, var1069, var1070);
var1064 = var1066;
varonce1063 = var1064;
}
((struct instance_core__NativeArray*)var1054)->values[2]=var1064;
} else {
var1054 = varonce1053;
varonce1053 = NULL;
}
{
var1071 = ((val*(*)(val* self))(var_s1020->class->vft[COLOR_nitcc__grammar__LRState__name]))(var_s1020); /* name on <var_s1020:LRState>*/
}
{
var1072 = ((val*(*)(val* self))(var1071->class->vft[COLOR_core__abstract_text__Text__escape_to_nit]))(var1071); /* escape_to_nit on <var1071:String>*/
}
((struct instance_core__NativeArray*)var1054)->values[1]=var1072;
{
var1073 = ((val*(*)(val* self))(var1054->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var1054); /* native_to_s on <var1054:NativeArray[String]>*/
}
varonce1053 = var1054;
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nitcc__grammar__Generator__add]))(self, var1073); /* add on <self:Generator>*/
}
var1074 = NEW_core__Array(&type_core__Array__core__String);
{
((void(*)(val* self))(var1074->class->vft[COLOR_core__kernel__Object__init]))(var1074); /* init on <var1074:Array[String]>*/
}
var_err = var1074;
{
var1075 = ((val*(*)(val* self))(var_s1020->class->vft[COLOR_nitcc__grammar__LRState__outs]))(var_s1020); /* outs on <var_s1020:LRState>*/
}
var_1076 = var1075;
{
var1077 = ((val*(*)(val* self))(var_1076->class->vft[COLOR_core__abstract_collection__Collection__iterator]))(var_1076); /* iterator on <var_1076:Array[LRTransition]>*/
}
var_1078 = var1077;
for(;;) {
{
var1079 = ((short int(*)(val* self))((((long)var_1078&3)?class_info[((long)var_1078&3)]:var_1078->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_1078); /* is_ok on <var_1078:IndexedIterator[LRTransition]>*/
}
if (var1079){
} else {
goto BREAK_label1080;
}
{
var1081 = ((val*(*)(val* self))((((long)var_1078&3)?class_info[((long)var_1078&3)]:var_1078->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_1078); /* item on <var_1078:IndexedIterator[LRTransition]>*/
}
var_t1082 = var1081;
{
var1083 = ((val*(*)(val* self))(var_t1082->class->vft[COLOR_nitcc__grammar__LRTransition__elem]))(var_t1082); /* elem on <var_t1082:LRTransition>*/
}
var_e = var1083;
/* <var_e:Element> isa Production */
cltype1085 = type_nitcc__Production.color;
idtype1086 = type_nitcc__Production.id;
if(cltype1085 >= var_e->type->table_size) {
var1084 = 0;
} else {
var1084 = var_e->type->type_table[cltype1085] == idtype1086;
}
if (var1084){
{
var1087 = ((val*(*)(val* self))(var_e->class->vft[COLOR_nitcc__grammar__Element__name]))(var_e); /* name on <var_e:Element(Production)>*/
}
{
((void(*)(val* self, val* p0))(var_err->class->vft[COLOR_core__abstract_collection__SimpleCollection__add]))(var_err, var1087); /* add on <var_err:Array[String]>*/
}
} else {
}
{
((void(*)(val* self))((((long)var_1078&3)?class_info[((long)var_1078&3)]:var_1078->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_1078); /* next on <var_1078:IndexedIterator[LRTransition]>*/
}
}
BREAK_label1080: (void)0;
{
((void(*)(val* self))((((long)var_1078&3)?class_info[((long)var_1078&3)]:var_1078->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_1078); /* finish on <var_1078:IndexedIterator[LRTransition]>*/
}
{
var1088 = ((short int(*)(val* self))(var_err->class->vft[COLOR_core__abstract_collection__Collection__is_empty]))(var_err); /* is_empty on <var_err:Array[String]>*/
}
if (var1088){
{
var1089 = ((val*(*)(val* self))(var_s1020->class->vft[COLOR_nitcc__grammar__LRState__outs]))(var_s1020); /* outs on <var_s1020:LRState>*/
}
var_1090 = var1089;
{
var1091 = ((val*(*)(val* self))(var_1090->class->vft[COLOR_core__abstract_collection__Collection__iterator]))(var_1090); /* iterator on <var_1090:Array[LRTransition]>*/
}
var_1092 = var1091;
for(;;) {
{
var1093 = ((short int(*)(val* self))((((long)var_1092&3)?class_info[((long)var_1092&3)]:var_1092->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_1092); /* is_ok on <var_1092:IndexedIterator[LRTransition]>*/
}
if (var1093){
} else {
goto BREAK_label1094;
}
{
var1095 = ((val*(*)(val* self))((((long)var_1092&3)?class_info[((long)var_1092&3)]:var_1092->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_1092); /* item on <var_1092:IndexedIterator[LRTransition]>*/
}
var_t1096 = var1095;
{
var1097 = ((val*(*)(val* self))(var_t1096->class->vft[COLOR_nitcc__grammar__LRTransition__elem]))(var_t1096); /* elem on <var_t1096:LRTransition>*/
}
var_e1098 = var1097;
/* <var_e1098:Element> isa Token */
cltype1100 = type_nitcc__Token.color;
idtype1101 = type_nitcc__Token.id;
if(cltype1100 >= var_e1098->type->table_size) {
var1099 = 0;
} else {
var1099 = var_e1098->type->type_table[cltype1100] == idtype1101;
}
if (var1099){
{
var1102 = ((val*(*)(val* self))(var_e1098->class->vft[COLOR_nitcc__grammar__Element__name]))(var_e1098); /* name on <var_e1098:Element(Token)>*/
}
{
((void(*)(val* self, val* p0))(var_err->class->vft[COLOR_core__abstract_collection__SimpleCollection__add]))(var_err, var1102); /* add on <var_err:Array[String]>*/
}
} else {
}
{
((void(*)(val* self))((((long)var_1092&3)?class_info[((long)var_1092&3)]:var_1092->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_1092); /* next on <var_1092:IndexedIterator[LRTransition]>*/
}
}
BREAK_label1094: (void)0;
{
((void(*)(val* self))((((long)var_1092&3)?class_info[((long)var_1092&3)]:var_1092->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_1092); /* finish on <var_1092:IndexedIterator[LRTransition]>*/
}
} else {
}
if (unlikely(varonce1103==NULL)) {
var1104 = NEW_core__NativeArray((int)3l, &type_core__NativeArray__core__String);
if (likely(varonce1105!=NULL)) {
var1106 = varonce1105;
} else {
var1107 = "\tredef fun error_msg do return \"";
var1109 = (val*)(32l<<2|1);
var1110 = (val*)(32l<<2|1);
var1111 = (val*)((long)(0)<<2|3);
var1112 = (val*)((long)(0)<<2|3);
var1108 = core__flat___CString___to_s_unsafe(var1107, var1109, var1110, var1111, var1112);
var1106 = var1108;
varonce1105 = var1106;
}
((struct instance_core__NativeArray*)var1104)->values[0]=var1106;
if (likely(varonce1113!=NULL)) {
var1114 = varonce1113;
} else {
var1115 = "\"";
var1117 = (val*)(1l<<2|1);
var1118 = (val*)(1l<<2|1);
var1119 = (val*)((long)(0)<<2|3);
var1120 = (val*)((long)(0)<<2|3);
var1116 = core__flat___CString___to_s_unsafe(var1115, var1117, var1118, var1119, var1120);
var1114 = var1116;
varonce1113 = var1114;
}
((struct instance_core__NativeArray*)var1104)->values[2]=var1114;
} else {
var1104 = varonce1103;
varonce1103 = NULL;
}
if (likely(varonce1121!=NULL)) {
var1122 = varonce1121;
} else {
var1123 = ", ";
var1125 = (val*)(2l<<2|1);
var1126 = (val*)(2l<<2|1);
var1127 = (val*)((long)(0)<<2|3);
var1128 = (val*)((long)(0)<<2|3);
var1124 = core__flat___CString___to_s_unsafe(var1123, var1125, var1126, var1127, var1128);
var1122 = var1124;
varonce1121 = var1122;
}
{
var1129 = ((val*(*)(val* self, val* p0, val* p1))(var_err->class->vft[COLOR_core__abstract_text__Collection__join]))(var_err, var1122, ((val*)NULL)); /* join on <var_err:Array[String]>*/
}
{
var1130 = ((val*(*)(val* self))(var1129->class->vft[COLOR_core__abstract_text__Text__escape_to_nit]))(var1129); /* escape_to_nit on <var1129:String>*/
}
((struct instance_core__NativeArray*)var1104)->values[1]=var1130;
{
var1131 = ((val*(*)(val* self))(var1104->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var1104); /* native_to_s on <var1104:NativeArray[String]>*/
}
varonce1103 = var1104;
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nitcc__grammar__Generator__add]))(self, var1131); /* add on <self:Generator>*/
}
if (likely(varonce1132!=NULL)) {
var1133 = varonce1132;
} else {
var1134 = "\tredef fun action(parser) do";
var1136 = (val*)(28l<<2|1);
var1137 = (val*)(28l<<2|1);
var1138 = (val*)((long)(0)<<2|3);
var1139 = (val*)((long)(0)<<2|3);
var1135 = core__flat___CString___to_s_unsafe(var1134, var1136, var1137, var1138, var1139);
var1133 = var1135;
varonce1132 = var1133;
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nitcc__grammar__Generator__add]))(self, var1133); /* add on <self:Generator>*/
}
{
var1140 = ((short int(*)(val* self))(var_s1020->class->vft[COLOR_nitcc__grammar__LRState__need_guard]))(var_s1020); /* need_guard on <var_s1020:LRState>*/
}
if (var1140){
if (unlikely(varonce1141==NULL)) {
var1142 = NEW_core__NativeArray((int)3l, &type_core__NativeArray__core__String);
if (likely(varonce1143!=NULL)) {
var1144 = varonce1143;
} else {
var1145 = "\t\tparser.peek_token.action_s";
var1147 = (val*)(28l<<2|1);
var1148 = (val*)(28l<<2|1);
var1149 = (val*)((long)(0)<<2|3);
var1150 = (val*)((long)(0)<<2|3);
var1146 = core__flat___CString___to_s_unsafe(var1145, var1147, var1148, var1149, var1150);
var1144 = var1146;
varonce1143 = var1144;
}
((struct instance_core__NativeArray*)var1142)->values[0]=var1144;
if (likely(varonce1151!=NULL)) {
var1152 = varonce1151;
} else {
var1153 = "(parser)";
var1155 = (val*)(8l<<2|1);
var1156 = (val*)(8l<<2|1);
var1157 = (val*)((long)(0)<<2|3);
var1158 = (val*)((long)(0)<<2|3);
var1154 = core__flat___CString___to_s_unsafe(var1153, var1155, var1156, var1157, var1158);
var1152 = var1154;
varonce1151 = var1152;
}
((struct instance_core__NativeArray*)var1142)->values[2]=var1152;
} else {
var1142 = varonce1141;
varonce1141 = NULL;
}
{
var1159 = ((val*(*)(val* self))(var_s1020->class->vft[COLOR_nitcc__grammar__LRState__cname]))(var_s1020); /* cname on <var_s1020:LRState>*/
}
((struct instance_core__NativeArray*)var1142)->values[1]=var1159;
{
var1160 = ((val*(*)(val* self))(var1142->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var1142); /* native_to_s on <var1142:NativeArray[String]>*/
}
varonce1141 = var1142;
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nitcc__grammar__Generator__add]))(self, var1160); /* add on <self:Generator>*/
}
} else {
{
var1161 = ((val*(*)(val* self))(var_s1020->class->vft[COLOR_nitcc__grammar__LRState__reduces]))(var_s1020); /* reduces on <var_s1020:LRState>*/
}
{
var1162 = ((long(*)(val* self))(var1161->class->vft[COLOR_core__abstract_collection__Collection__length]))(var1161); /* length on <var1161:ArraySet[Alternative]>*/
}
{
{ /* Inline kernel$Int$== (var1162,1l) on <var1162:Int> */
var1165 = var1162 == 1l;
var1163 = var1165;
goto RET_LABEL1164;
RET_LABEL1164:(void)0;
}
}
if (var1163){
if (unlikely(varonce1166==NULL)) {
var1167 = NEW_core__NativeArray((int)3l, &type_core__NativeArray__core__String);
if (likely(varonce1168!=NULL)) {
var1169 = varonce1168;
} else {
var1170 = "\t\treduce_";
var1172 = (val*)(9l<<2|1);
var1173 = (val*)(9l<<2|1);
var1174 = (val*)((long)(0)<<2|3);
var1175 = (val*)((long)(0)<<2|3);
var1171 = core__flat___CString___to_s_unsafe(var1170, var1172, var1173, var1174, var1175);
var1169 = var1171;
varonce1168 = var1169;
}
((struct instance_core__NativeArray*)var1167)->values[0]=var1169;
if (likely(varonce1176!=NULL)) {
var1177 = varonce1176;
} else {
var1178 = "(parser)";
var1180 = (val*)(8l<<2|1);
var1181 = (val*)(8l<<2|1);
var1182 = (val*)((long)(0)<<2|3);
var1183 = (val*)((long)(0)<<2|3);
var1179 = core__flat___CString___to_s_unsafe(var1178, var1180, var1181, var1182, var1183);
var1177 = var1179;
varonce1176 = var1177;
}
((struct instance_core__NativeArray*)var1167)->values[2]=var1177;
} else {
var1167 = varonce1166;
varonce1166 = NULL;
}
{
var1184 = ((val*(*)(val* self))(var_s1020->class->vft[COLOR_nitcc__grammar__LRState__reduces]))(var_s1020); /* reduces on <var_s1020:LRState>*/
}
{
var1185 = ((val*(*)(val* self))(var1184->class->vft[COLOR_core__abstract_collection__Collection__first]))(var1184); /* first on <var1184:ArraySet[Alternative]>*/
}
{
var1186 = ((val*(*)(val* self))(var1185->class->vft[COLOR_nitcc__grammar__Alternative__cname]))(var1185); /* cname on <var1185:nullable Object(Alternative)>*/
}
((struct instance_core__NativeArray*)var1167)->values[1]=var1186;
{
var1187 = ((val*(*)(val* self))(var1167->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var1167); /* native_to_s on <var1167:NativeArray[String]>*/
}
varonce1166 = var1167;
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nitcc__grammar__Generator__add]))(self, var1187); /* add on <self:Generator>*/
}
} else {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Aborted");
PRINT_ERROR(" (%s:%d)\n", FILE_nitcc__grammar, 796);
fatal_exit(1);
}
}
if (likely(varonce1188!=NULL)) {
var1189 = varonce1188;
} else {
var1190 = "\tend";
var1192 = (val*)(4l<<2|1);
var1193 = (val*)(4l<<2|1);
var1194 = (val*)((long)(0)<<2|3);
var1195 = (val*)((long)(0)<<2|3);
var1191 = core__flat___CString___to_s_unsafe(var1190, var1192, var1193, var1194, var1195);
var1189 = var1191;
varonce1188 = var1189;
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nitcc__grammar__Generator__add]))(self, var1189); /* add on <self:Generator>*/
}
{
var1196 = ((val*(*)(val* self))(var_s1020->class->vft[COLOR_nitcc__grammar__LRState__gotos]))(var_s1020); /* gotos on <var_s1020:LRState>*/
}
{
var1197 = ((short int(*)(val* self))(var1196->class->vft[COLOR_core__abstract_collection__Collection__is_empty]))(var1196); /* is_empty on <var1196:ArraySet[Production]>*/
}
var1198 = !var1197;
if (var1198){
if (likely(varonce1199!=NULL)) {
var1200 = varonce1199;
} else {
var1201 = "\tredef fun goto(parser, goto) do";
var1203 = (val*)(32l<<2|1);
var1204 = (val*)(32l<<2|1);
var1205 = (val*)((long)(0)<<2|3);
var1206 = (val*)((long)(0)<<2|3);
var1202 = core__flat___CString___to_s_unsafe(var1201, var1203, var1204, var1205, var1206);
var1200 = var1202;
varonce1199 = var1200;
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nitcc__grammar__Generator__add]))(self, var1200); /* add on <self:Generator>*/
}
{
var1207 = ((val*(*)(val* self))(var_s1020->class->vft[COLOR_nitcc__grammar__LRState__gotos]))(var_s1020); /* gotos on <var_s1020:LRState>*/
}
{
var1208 = ((long(*)(val* self))(var1207->class->vft[COLOR_core__abstract_collection__Collection__length]))(var1207); /* length on <var1207:ArraySet[Production]>*/
}
{
{ /* Inline kernel$Int$> (var1208,1l) on <var1208:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var1211 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var1211)) {
var_class_name1214 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name1214);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 727);
fatal_exit(1);
}
var1215 = var1208 > 1l;
var1209 = var1215;
goto RET_LABEL1210;
RET_LABEL1210:(void)0;
}
}
if (var1209){
if (unlikely(varonce1216==NULL)) {
var1217 = NEW_core__NativeArray((int)3l, &type_core__NativeArray__core__String);
if (likely(varonce1218!=NULL)) {
var1219 = varonce1218;
} else {
var1220 = "\t\tgoto.goto_s";
var1222 = (val*)(13l<<2|1);
var1223 = (val*)(13l<<2|1);
var1224 = (val*)((long)(0)<<2|3);
var1225 = (val*)((long)(0)<<2|3);
var1221 = core__flat___CString___to_s_unsafe(var1220, var1222, var1223, var1224, var1225);
var1219 = var1221;
varonce1218 = var1219;
}
((struct instance_core__NativeArray*)var1217)->values[0]=var1219;
if (likely(varonce1226!=NULL)) {
var1227 = varonce1226;
} else {
var1228 = "(parser)";
var1230 = (val*)(8l<<2|1);
var1231 = (val*)(8l<<2|1);
var1232 = (val*)((long)(0)<<2|3);
var1233 = (val*)((long)(0)<<2|3);
var1229 = core__flat___CString___to_s_unsafe(var1228, var1230, var1231, var1232, var1233);
var1227 = var1229;
varonce1226 = var1227;
}
((struct instance_core__NativeArray*)var1217)->values[2]=var1227;
} else {
var1217 = varonce1216;
varonce1216 = NULL;
}
{
var1234 = ((val*(*)(val* self))(var_s1020->class->vft[COLOR_nitcc__grammar__LRState__cname]))(var_s1020); /* cname on <var_s1020:LRState>*/
}
((struct instance_core__NativeArray*)var1217)->values[1]=var1234;
{
var1235 = ((val*(*)(val* self))(var1217->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var1217); /* native_to_s on <var1217:NativeArray[String]>*/
}
varonce1216 = var1217;
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nitcc__grammar__Generator__add]))(self, var1235); /* add on <self:Generator>*/
}
} else {
{
var1236 = ((val*(*)(val* self))(var_s1020->class->vft[COLOR_nitcc__grammar__LRState__gotos]))(var_s1020); /* gotos on <var_s1020:LRState>*/
}
{
var1237 = ((val*(*)(val* self))(var1236->class->vft[COLOR_core__abstract_collection__Collection__first]))(var1236); /* first on <var1236:ArraySet[Production]>*/
}
{
((void(*)(val* self, val* p0, val* p1))(self->class->vft[COLOR_nitcc__grammar__Generator__gen_goto_to_nit]))(self, var_s1020, var1237); /* gen_goto_to_nit on <self:Generator>*/
}
}
if (likely(varonce1238!=NULL)) {
var1239 = varonce1238;
} else {
var1240 = "\tend";
var1242 = (val*)(4l<<2|1);
var1243 = (val*)(4l<<2|1);
var1244 = (val*)((long)(0)<<2|3);
var1245 = (val*)((long)(0)<<2|3);
var1241 = core__flat___CString___to_s_unsafe(var1240, var1242, var1243, var1244, var1245);
var1239 = var1241;
varonce1238 = var1239;
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nitcc__grammar__Generator__add]))(self, var1239); /* add on <self:Generator>*/
}
} else {
}
if (likely(varonce1246!=NULL)) {
var1247 = varonce1246;
} else {
var1248 = "end";
var1250 = (val*)(3l<<2|1);
var1251 = (val*)(3l<<2|1);
var1252 = (val*)((long)(0)<<2|3);
var1253 = (val*)((long)(0)<<2|3);
var1249 = core__flat___CString___to_s_unsafe(var1248, var1250, var1251, var1252, var1253);
var1247 = var1249;
varonce1246 = var1247;
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nitcc__grammar__Generator__add]))(self, var1247); /* add on <self:Generator>*/
}
{
((void(*)(val* self))((((long)var_1016&3)?class_info[((long)var_1016&3)]:var_1016->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_1016); /* next on <var_1016:IndexedIterator[LRState]>*/
}
}
BREAK_label1018: (void)0;
{
((void(*)(val* self))((((long)var_1016&3)?class_info[((long)var_1016&3)]:var_1016->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_1016); /* finish on <var_1016:IndexedIterator[LRState]>*/
}
RET_LABEL:;
}
/* method grammar$Generator$gen_shift_to_nit for (self: Generator, LRState, Token) */
void nitcc__grammar___nitcc__grammar__Generator___gen_shift_to_nit(val* self, val* p0, val* p1) {
val* var_s /* var s: LRState */;
val* var_t /* var t: Token */;
val* var /* : nullable LRState */;
val* var_dest /* var dest: nullable LRState */;
val* var1 /* : NativeArray[String] */;
static val* varonce;
static val* varonce2;
val* var3 /* : String */;
char* var4 /* : CString */;
val* var5 /* : String */;
val* var6 /* : nullable Int */;
val* var7 /* : nullable Int */;
val* var8 /* : nullable Bool */;
val* var9 /* : nullable Bool */;
static val* varonce10;
val* var11 /* : String */;
char* var12 /* : CString */;
val* var13 /* : String */;
val* var14 /* : nullable Int */;
val* var15 /* : nullable Int */;
val* var16 /* : nullable Bool */;
val* var17 /* : nullable Bool */;
val* var18 /* : String */;
val* var19 /* : String */;
var_s = p0;
var_t = p1;
{
var = ((val*(*)(val* self, val* p0))(var_s->class->vft[COLOR_nitcc__grammar__LRState__trans]))(var_s, var_t); /* trans on <var_s:LRState>*/
}
var_dest = var;
if (unlikely(varonce==NULL)) {
var1 = NEW_core__NativeArray((int)3l, &type_core__NativeArray__core__String);
if (likely(varonce2!=NULL)) {
var3 = varonce2;
} else {
var4 = "\t\tparser.shift(state_";
var6 = (val*)(21l<<2|1);
var7 = (val*)(21l<<2|1);
var8 = (val*)((long)(0)<<2|3);
var9 = (val*)((long)(0)<<2|3);
var5 = core__flat___CString___to_s_unsafe(var4, var6, var7, var8, var9);
var3 = var5;
varonce2 = var3;
}
((struct instance_core__NativeArray*)var1)->values[0]=var3;
if (likely(varonce10!=NULL)) {
var11 = varonce10;
} else {
var12 = ")";
var14 = (val*)(1l<<2|1);
var15 = (val*)(1l<<2|1);
var16 = (val*)((long)(0)<<2|3);
var17 = (val*)((long)(0)<<2|3);
var13 = core__flat___CString___to_s_unsafe(var12, var14, var15, var16, var17);
var11 = var13;
varonce10 = var11;
}
((struct instance_core__NativeArray*)var1)->values[2]=var11;
} else {
var1 = varonce;
varonce = NULL;
}
if (var_dest == NULL) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitcc__grammar, 819);
fatal_exit(1);
} else {
var18 = ((val*(*)(val* self))(var_dest->class->vft[COLOR_nitcc__grammar__LRState__cname]))(var_dest); /* cname on <var_dest:nullable LRState>*/
}
((struct instance_core__NativeArray*)var1)->values[1]=var18;
{
var19 = ((val*(*)(val* self))(var1->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var1); /* native_to_s on <var1:NativeArray[String]>*/
}
varonce = var1;
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nitcc__grammar__Generator__add]))(self, var19); /* add on <self:Generator>*/
}
RET_LABEL:;
}
/* method grammar$Generator$gen_goto_to_nit for (self: Generator, LRState, Production) */
void nitcc__grammar___nitcc__grammar__Generator___gen_goto_to_nit(val* self, val* p0, val* p1) {
val* var_s /* var s: LRState */;
val* var_p /* var p: Production */;
val* var /* : nullable LRState */;
val* var_dest /* var dest: nullable LRState */;
val* var1 /* : NativeArray[String] */;
static val* varonce;
static val* varonce2;
val* var3 /* : String */;
char* var4 /* : CString */;
val* var5 /* : String */;
val* var6 /* : nullable Int */;
val* var7 /* : nullable Int */;
val* var8 /* : nullable Bool */;
val* var9 /* : nullable Bool */;
static val* varonce10;
val* var11 /* : String */;
char* var12 /* : CString */;
val* var13 /* : String */;
val* var14 /* : nullable Int */;
val* var15 /* : nullable Int */;
val* var16 /* : nullable Bool */;
val* var17 /* : nullable Bool */;
val* var18 /* : String */;
val* var19 /* : String */;
var_s = p0;
var_p = p1;
{
var = ((val*(*)(val* self, val* p0))(var_s->class->vft[COLOR_nitcc__grammar__LRState__trans]))(var_s, var_p); /* trans on <var_s:LRState>*/
}
var_dest = var;
if (unlikely(varonce==NULL)) {
var1 = NEW_core__NativeArray((int)3l, &type_core__NativeArray__core__String);
if (likely(varonce2!=NULL)) {
var3 = varonce2;
} else {
var4 = "\t\tparser.push(state_";
var6 = (val*)(20l<<2|1);
var7 = (val*)(20l<<2|1);
var8 = (val*)((long)(0)<<2|3);
var9 = (val*)((long)(0)<<2|3);
var5 = core__flat___CString___to_s_unsafe(var4, var6, var7, var8, var9);
var3 = var5;
varonce2 = var3;
}
((struct instance_core__NativeArray*)var1)->values[0]=var3;
if (likely(varonce10!=NULL)) {
var11 = varonce10;
} else {
var12 = ")";
var14 = (val*)(1l<<2|1);
var15 = (val*)(1l<<2|1);
var16 = (val*)((long)(0)<<2|3);
var17 = (val*)((long)(0)<<2|3);
var13 = core__flat___CString___to_s_unsafe(var12, var14, var15, var16, var17);
var11 = var13;
varonce10 = var11;
}
((struct instance_core__NativeArray*)var1)->values[2]=var11;
} else {
var1 = varonce;
varonce = NULL;
}
if (var_dest == NULL) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitcc__grammar, 826);
fatal_exit(1);
} else {
var18 = ((val*(*)(val* self))(var_dest->class->vft[COLOR_nitcc__grammar__LRState__cname]))(var_dest); /* cname on <var_dest:nullable LRState>*/
}
((struct instance_core__NativeArray*)var1)->values[1]=var18;
{
var19 = ((val*(*)(val* self))(var1->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var1); /* native_to_s on <var1:NativeArray[String]>*/
}
varonce = var1;
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nitcc__grammar__Generator__add]))(self, var19); /* add on <self:Generator>*/
}
RET_LABEL:;
}
/* method grammar$Generator$gen_reduce_to_nit for (self: Generator, Alternative) */
void nitcc__grammar___nitcc__grammar__Generator___gen_reduce_to_nit(val* self, val* p0) {
val* var_alt /* var alt: Alternative */;
val* var /* : NativeArray[String] */;
static val* varonce;
static val* varonce1;
val* var2 /* : String */;
char* var3 /* : CString */;
val* var4 /* : String */;
val* var5 /* : nullable Int */;
val* var6 /* : nullable Int */;
val* var7 /* : nullable Bool */;
val* var8 /* : nullable Bool */;
val* var9 /* : String */;
val* var10 /* : String */;
val* var11 /* : Array[Element] */;
long var12 /* : Int */;
long var13 /* : Int */;
short int var15 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var16 /* : Int */;
long var_i /* var i: Int */;
val* var17 /* : Array[Element] */;
val* var18 /* : Array[nullable Object] */;
val* var19 /* : Array[nullable Object] */;
val* var_ /* var : Array[Element] */;
val* var20 /* : Iterator[nullable Object] */;
val* var_21 /* var : IndexedIterator[Element] */;
short int var22 /* : Bool */;
val* var23 /* : nullable Object */;
val* var_e /* var e: Element */;
val* var25 /* : NativeArray[String] */;
static val* varonce24;
static val* varonce26;
val* var27 /* : String */;
char* var28 /* : CString */;
val* var29 /* : String */;
val* var30 /* : nullable Int */;
val* var31 /* : nullable Int */;
val* var32 /* : nullable Bool */;
val* var33 /* : nullable Bool */;
static val* varonce34;
val* var35 /* : String */;
char* var36 /* : CString */;
val* var37 /* : String */;
val* var38 /* : nullable Int */;
val* var39 /* : nullable Int */;
val* var40 /* : nullable Bool */;
val* var41 /* : nullable Bool */;
static val* varonce42;
val* var43 /* : String */;
char* var44 /* : CString */;
val* var45 /* : String */;
val* var46 /* : nullable Int */;
val* var47 /* : nullable Int */;
val* var48 /* : nullable Bool */;
val* var49 /* : nullable Bool */;
val* var50 /* : String */;
val* var51 /* : String */;
val* var52 /* : String */;
long var53 /* : Int */;
short int var55 /* : Bool */;
int cltype56;
int idtype57;
const char* var_class_name58;
long var59 /* : Int */;
val* var60 /* : String */;
static val* varonce61;
val* var62 /* : String */;
char* var63 /* : CString */;
val* var64 /* : String */;
val* var65 /* : nullable Int */;
val* var66 /* : nullable Int */;
val* var67 /* : nullable Bool */;
val* var68 /* : nullable Bool */;
short int var69 /* : Bool */;
static val* varonce70;
val* var71 /* : String */;
char* var72 /* : CString */;
val* var73 /* : String */;
val* var74 /* : nullable Int */;
val* var75 /* : nullable Int */;
val* var76 /* : nullable Bool */;
val* var77 /* : nullable Bool */;
static val* varonce78;
val* var79 /* : String */;
char* var80 /* : CString */;
val* var81 /* : String */;
val* var82 /* : nullable Int */;
val* var83 /* : nullable Int */;
val* var84 /* : nullable Bool */;
val* var85 /* : nullable Bool */;
val* var86 /* : String */;
static val* varonce87;
val* var88 /* : String */;
char* var89 /* : CString */;
val* var90 /* : String */;
val* var91 /* : nullable Int */;
val* var92 /* : nullable Int */;
val* var93 /* : nullable Bool */;
val* var94 /* : nullable Bool */;
short int var95 /* : Bool */;
val* var97 /* : NativeArray[String] */;
static val* varonce96;
static val* varonce98;
val* var99 /* : String */;
char* var100 /* : CString */;
val* var101 /* : String */;
val* var102 /* : nullable Int */;
val* var103 /* : nullable Int */;
val* var104 /* : nullable Bool */;
val* var105 /* : nullable Bool */;
val* var106 /* : Production */;
val* var107 /* : String */;
val* var108 /* : String */;
static val* varonce109;
val* var110 /* : String */;
char* var111 /* : CString */;
val* var112 /* : String */;
val* var113 /* : nullable Int */;
val* var114 /* : nullable Int */;
val* var115 /* : nullable Bool */;
val* var116 /* : nullable Bool */;
long var_cpt /* var cpt: Int */;
val* var117 /* : Array[String] */;
val* var_st /* var st: Array[String] */;
val* var118 /* : nullable Array[Code] */;
val* var_119 /* var : Array[Code] */;
val* var120 /* : Iterator[nullable Object] */;
val* var_121 /* var : IndexedIterator[Code] */;
short int var122 /* : Bool */;
val* var124 /* : nullable Object */;
val* var_c /* var c: Code */;
short int var125 /* : Bool */;
int cltype126;
int idtype127;
val* var129 /* : NativeArray[String] */;
static val* varonce128;
static val* varonce130;
val* var131 /* : String */;
char* var132 /* : CString */;
val* var133 /* : String */;
val* var134 /* : nullable Int */;
val* var135 /* : nullable Int */;
val* var136 /* : nullable Bool */;
val* var137 /* : nullable Bool */;
val* var138 /* : String */;
val* var139 /* : String */;
long var140 /* : Int */;
short int var142 /* : Bool */;
int cltype143;
int idtype144;
const char* var_class_name145;
long var146 /* : Int */;
short int var147 /* : Bool */;
int cltype148;
int idtype149;
static val* varonce150;
val* var151 /* : String */;
char* var152 /* : CString */;
val* var153 /* : String */;
val* var154 /* : nullable Int */;
val* var155 /* : nullable Int */;
val* var156 /* : nullable Bool */;
val* var157 /* : nullable Bool */;
short int var158 /* : Bool */;
int cltype159;
int idtype160;
val* var161 /* : Alternative */;
val* var_calt /* var calt: Alternative */;
long var162 /* : Int */;
short int var164 /* : Bool */;
int cltype165;
int idtype166;
const char* var_class_name167;
long var168 /* : Int */;
long var169 /* : Int */;
val* var170 /* : Array[Element] */;
long var171 /* : Int */;
long var172 /* : Int */;
short int var174 /* : Bool */;
int cltype175;
int idtype176;
const char* var_class_name177;
long var178 /* : Int */;
long var_from /* var from: Int */;
val* var179 /* : List[String] */;
val* var_args /* var args: List[String] */;
long var_j /* var j: Int */;
long var180 /* : Int */;
long var_181 /* var : Int */;
short int var182 /* : Bool */;
short int var184 /* : Bool */;
int cltype185;
int idtype186;
const char* var_class_name187;
short int var188 /* : Bool */;
val* var190 /* : nullable Object */;
long var191 /* : Int */;
short int var192 /* : Bool */;
val* var194 /* : NativeArray[String] */;
static val* varonce193;
static val* varonce195;
val* var196 /* : String */;
char* var197 /* : CString */;
val* var198 /* : String */;
val* var199 /* : nullable Int */;
val* var200 /* : nullable Int */;
val* var201 /* : nullable Bool */;
val* var202 /* : nullable Bool */;
static val* varonce203;
val* var204 /* : String */;
char* var205 /* : CString */;
val* var206 /* : String */;
val* var207 /* : nullable Int */;
val* var208 /* : nullable Int */;
val* var209 /* : nullable Bool */;
val* var210 /* : nullable Bool */;
val* var211 /* : String */;
val* var212 /* : String */;
val* var213 /* : String */;
val* var215 /* : NativeArray[String] */;
static val* varonce214;
static val* varonce216;
val* var217 /* : String */;
char* var218 /* : CString */;
val* var219 /* : String */;
val* var220 /* : nullable Int */;
val* var221 /* : nullable Int */;
val* var222 /* : nullable Bool */;
val* var223 /* : nullable Bool */;
static val* varonce224;
val* var225 /* : String */;
char* var226 /* : CString */;
val* var227 /* : String */;
val* var228 /* : nullable Int */;
val* var229 /* : nullable Int */;
val* var230 /* : nullable Bool */;
val* var231 /* : nullable Bool */;
static val* varonce232;
val* var233 /* : String */;
char* var234 /* : CString */;
val* var235 /* : String */;
val* var236 /* : nullable Int */;
val* var237 /* : nullable Int */;
val* var238 /* : nullable Bool */;
val* var239 /* : nullable Bool */;
static val* varonce240;
val* var241 /* : String */;
char* var242 /* : CString */;
val* var243 /* : String */;
val* var244 /* : nullable Int */;
val* var245 /* : nullable Int */;
val* var246 /* : nullable Bool */;
val* var247 /* : nullable Bool */;
val* var248 /* : String */;
val* var249 /* : String */;
static val* varonce250;
val* var251 /* : String */;
char* var252 /* : CString */;
val* var253 /* : String */;
val* var254 /* : nullable Int */;
val* var255 /* : nullable Int */;
val* var256 /* : nullable Bool */;
val* var257 /* : nullable Bool */;
val* var258 /* : String */;
val* var259 /* : String */;
val* var261 /* : NativeArray[String] */;
static val* varonce260;
static val* varonce262;
val* var263 /* : String */;
char* var264 /* : CString */;
val* var265 /* : String */;
val* var266 /* : nullable Int */;
val* var267 /* : nullable Int */;
val* var268 /* : nullable Bool */;
val* var269 /* : nullable Bool */;
val* var270 /* : String */;
val* var271 /* : String */;
long var272 /* : Int */;
short int var273 /* : Bool */;
short int var275 /* : Bool */;
val* var277 /* : NativeArray[String] */;
static val* varonce276;
static val* varonce278;
val* var279 /* : String */;
char* var280 /* : CString */;
val* var281 /* : String */;
val* var282 /* : nullable Int */;
val* var283 /* : nullable Int */;
val* var284 /* : nullable Bool */;
val* var285 /* : nullable Bool */;
val* var286 /* : nullable Object */;
val* var287 /* : String */;
static val* varonce288;
val* var289 /* : String */;
char* var290 /* : CString */;
val* var291 /* : String */;
val* var292 /* : nullable Int */;
val* var293 /* : nullable Int */;
val* var294 /* : nullable Bool */;
val* var295 /* : nullable Bool */;
val* var296 /* : Production */;
short int var297 /* : Bool */;
static val* varonce298;
val* var299 /* : String */;
char* var300 /* : CString */;
val* var301 /* : String */;
val* var302 /* : nullable Int */;
val* var303 /* : nullable Int */;
val* var304 /* : nullable Bool */;
val* var305 /* : nullable Bool */;
val* var307 /* : NativeArray[String] */;
static val* varonce306;
static val* varonce308;
val* var309 /* : String */;
char* var310 /* : CString */;
val* var311 /* : String */;
val* var312 /* : nullable Int */;
val* var313 /* : nullable Int */;
val* var314 /* : nullable Bool */;
val* var315 /* : nullable Bool */;
static val* varonce316;
val* var317 /* : String */;
char* var318 /* : CString */;
val* var319 /* : String */;
val* var320 /* : nullable Int */;
val* var321 /* : nullable Int */;
val* var322 /* : nullable Bool */;
val* var323 /* : nullable Bool */;
val* var324 /* : Production */;
val* var325 /* : String */;
val* var326 /* : String */;
var_alt = p0;
if (unlikely(varonce==NULL)) {
var = NEW_core__NativeArray((int)2l, &type_core__NativeArray__core__String);
if (likely(varonce1!=NULL)) {
var2 = varonce1;
} else {
var3 = "\t\t# REDUCE ";
var5 = (val*)(11l<<2|1);
var6 = (val*)(11l<<2|1);
var7 = (val*)((long)(0)<<2|3);
var8 = (val*)((long)(0)<<2|3);
var4 = core__flat___CString___to_s_unsafe(var3, var5, var6, var7, var8);
var2 = var4;
varonce1 = var2;
}
((struct instance_core__NativeArray*)var)->values[0]=var2;
} else {
var = varonce;
varonce = NULL;
}
{
var9 = ((val*(*)(val* self))(var_alt->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_alt); /* to_s on <var_alt:Alternative>*/
}
((struct instance_core__NativeArray*)var)->values[1]=var9;
{
var10 = ((val*(*)(val* self))(var->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var); /* native_to_s on <var:NativeArray[String]>*/
}
varonce = var;
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nitcc__grammar__Generator__add]))(self, var10); /* add on <self:Generator>*/
}
{
var11 = ((val*(*)(val* self))(var_alt->class->vft[COLOR_nitcc__grammar__Alternative__elems]))(var_alt); /* elems on <var_alt:Alternative>*/
}
{
var12 = ((long(*)(val* self))(var11->class->vft[COLOR_core__abstract_collection__Collection__length]))(var11); /* length on <var11:Array[Element]>*/
}
{
{ /* Inline kernel$Int$- (var12,1l) on <var12:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var15 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var15)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var16 = var12 - 1l;
var13 = var16;
goto RET_LABEL14;
RET_LABEL14:(void)0;
}
}
var_i = var13;
{
var17 = ((val*(*)(val* self))(var_alt->class->vft[COLOR_nitcc__grammar__Alternative__elems]))(var_alt); /* elems on <var_alt:Alternative>*/
}
{
var18 = ((val*(*)(val* self))(var17->class->vft[COLOR_core__array__Collection__to_a]))(var17); /* to_a on <var17:Array[Element]>*/
}
{
var19 = ((val*(*)(val* self))(var18->class->vft[COLOR_core__array__AbstractArrayRead__reversed]))(var18); /* reversed on <var18:Array[nullable Object](Array[Element])>*/
}
var_ = var19;
{
var20 = ((val*(*)(val* self))(var_->class->vft[COLOR_core__abstract_collection__Collection__iterator]))(var_); /* iterator on <var_:Array[Element]>*/
}
var_21 = var20;
for(;;) {
{
var22 = ((short int(*)(val* self))((((long)var_21&3)?class_info[((long)var_21&3)]:var_21->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_21); /* is_ok on <var_21:IndexedIterator[Element]>*/
}
if (var22){
} else {
goto BREAK_label;
}
{
var23 = ((val*(*)(val* self))((((long)var_21&3)?class_info[((long)var_21&3)]:var_21->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_21); /* item on <var_21:IndexedIterator[Element]>*/
}
var_e = var23;
if (unlikely(varonce24==NULL)) {
var25 = NEW_core__NativeArray((int)5l, &type_core__NativeArray__core__String);
if (likely(varonce26!=NULL)) {
var27 = varonce26;
} else {
var28 = "\t\tvar n";
var30 = (val*)(7l<<2|1);
var31 = (val*)(7l<<2|1);
var32 = (val*)((long)(0)<<2|3);
var33 = (val*)((long)(0)<<2|3);
var29 = core__flat___CString___to_s_unsafe(var28, var30, var31, var32, var33);
var27 = var29;
varonce26 = var27;
}
((struct instance_core__NativeArray*)var25)->values[0]=var27;
if (likely(varonce34!=NULL)) {
var35 = varonce34;
} else {
var36 = " = parser.pop.as(";
var38 = (val*)(17l<<2|1);
var39 = (val*)(17l<<2|1);
var40 = (val*)((long)(0)<<2|3);
var41 = (val*)((long)(0)<<2|3);
var37 = core__flat___CString___to_s_unsafe(var36, var38, var39, var40, var41);
var35 = var37;
varonce34 = var35;
}
((struct instance_core__NativeArray*)var25)->values[2]=var35;
if (likely(varonce42!=NULL)) {
var43 = varonce42;
} else {
var44 = ")";
var46 = (val*)(1l<<2|1);
var47 = (val*)(1l<<2|1);
var48 = (val*)((long)(0)<<2|3);
var49 = (val*)((long)(0)<<2|3);
var45 = core__flat___CString___to_s_unsafe(var44, var46, var47, var48, var49);
var43 = var45;
varonce42 = var43;
}
((struct instance_core__NativeArray*)var25)->values[4]=var43;
} else {
var25 = varonce24;
varonce24 = NULL;
}
var50 = core__flat___Int___core__abstract_text__Object__to_s(var_i);
((struct instance_core__NativeArray*)var25)->values[1]=var50;
{
var51 = ((val*(*)(val* self))(var_e->class->vft[COLOR_nitcc__grammar__Element__acname]))(var_e); /* acname on <var_e:Element>*/
}
((struct instance_core__NativeArray*)var25)->values[3]=var51;
{
var52 = ((val*(*)(val* self))(var25->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var25); /* native_to_s on <var25:NativeArray[String]>*/
}
varonce24 = var25;
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nitcc__grammar__Generator__add]))(self, var52); /* add on <self:Generator>*/
}
{
{ /* Inline kernel$Int$- (var_i,1l) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var55 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var55)) {
var_class_name58 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name58);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var59 = var_i - 1l;
var53 = var59;
goto RET_LABEL54;
RET_LABEL54:(void)0;
}
}
var_i = var53;
{
((void(*)(val* self))((((long)var_21&3)?class_info[((long)var_21&3)]:var_21->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_21); /* next on <var_21:IndexedIterator[Element]>*/
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_21&3)?class_info[((long)var_21&3)]:var_21->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_21); /* finish on <var_21:IndexedIterator[Element]>*/
}
{
var60 = ((val*(*)(val* self))(var_alt->class->vft[COLOR_nitcc__grammar__Alternative__name]))(var_alt); /* name on <var_alt:Alternative>*/
}
if (likely(varonce61!=NULL)) {
var62 = varonce61;
} else {
var63 = "+_more";
var65 = (val*)(6l<<2|1);
var66 = (val*)(6l<<2|1);
var67 = (val*)((long)(0)<<2|3);
var68 = (val*)((long)(0)<<2|3);
var64 = core__flat___CString___to_s_unsafe(var63, var65, var66, var67, var68);
var62 = var64;
varonce61 = var62;
}
{
var69 = ((short int(*)(val* self, val* p0))(var60->class->vft[COLOR_core__abstract_text__Text__has_suffix]))(var60, var62); /* has_suffix on <var60:String>*/
}
if (var69){
if (likely(varonce70!=NULL)) {
var71 = varonce70;
} else {
var72 = "\t\tvar prod = n0";
var74 = (val*)(15l<<2|1);
var75 = (val*)(15l<<2|1);
var76 = (val*)((long)(0)<<2|3);
var77 = (val*)((long)(0)<<2|3);
var73 = core__flat___CString___to_s_unsafe(var72, var74, var75, var76, var77);
var71 = var73;
varonce70 = var71;
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nitcc__grammar__Generator__add]))(self, var71); /* add on <self:Generator>*/
}
if (likely(varonce78!=NULL)) {
var79 = varonce78;
} else {
var80 = "\t\tn0.children.add(n1)";
var82 = (val*)(21l<<2|1);
var83 = (val*)(21l<<2|1);
var84 = (val*)((long)(0)<<2|3);
var85 = (val*)((long)(0)<<2|3);
var81 = core__flat___CString___to_s_unsafe(var80, var82, var83, var84, var85);
var79 = var81;
varonce78 = var79;
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nitcc__grammar__Generator__add]))(self, var79); /* add on <self:Generator>*/
}
} else {
{
var86 = ((val*(*)(val* self))(var_alt->class->vft[COLOR_nitcc__grammar__Alternative__name]))(var_alt); /* name on <var_alt:Alternative>*/
}
if (likely(varonce87!=NULL)) {
var88 = varonce87;
} else {
var89 = "+_one";
var91 = (val*)(5l<<2|1);
var92 = (val*)(5l<<2|1);
var93 = (val*)((long)(0)<<2|3);
var94 = (val*)((long)(0)<<2|3);
var90 = core__flat___CString___to_s_unsafe(var89, var91, var92, var93, var94);
var88 = var90;
varonce87 = var88;
}
{
var95 = ((short int(*)(val* self, val* p0))(var86->class->vft[COLOR_core__abstract_text__Text__has_suffix]))(var86, var88); /* has_suffix on <var86:String>*/
}
if (var95){
if (unlikely(varonce96==NULL)) {
var97 = NEW_core__NativeArray((int)2l, &type_core__NativeArray__core__String);
if (likely(varonce98!=NULL)) {
var99 = varonce98;
} else {
var100 = "\t\tvar prod = new ";
var102 = (val*)(17l<<2|1);
var103 = (val*)(17l<<2|1);
var104 = (val*)((long)(0)<<2|3);
var105 = (val*)((long)(0)<<2|3);
var101 = core__flat___CString___to_s_unsafe(var100, var102, var103, var104, var105);
var99 = var101;
varonce98 = var99;
}
((struct instance_core__NativeArray*)var97)->values[0]=var99;
} else {
var97 = varonce96;
varonce96 = NULL;
}
{
var106 = ((val*(*)(val* self))(var_alt->class->vft[COLOR_nitcc__grammar__Alternative__prod]))(var_alt); /* prod on <var_alt:Alternative>*/
}
{
var107 = ((val*(*)(val* self))(var106->class->vft[COLOR_nitcc__grammar__Element__acname]))(var106); /* acname on <var106:Production>*/
}
((struct instance_core__NativeArray*)var97)->values[1]=var107;
{
var108 = ((val*(*)(val* self))(var97->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var97); /* native_to_s on <var97:NativeArray[String]>*/
}
varonce96 = var97;
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nitcc__grammar__Generator__add]))(self, var108); /* add on <self:Generator>*/
}
if (likely(varonce109!=NULL)) {
var110 = varonce109;
} else {
var111 = "\t\tprod.children.add(n0)";
var113 = (val*)(23l<<2|1);
var114 = (val*)(23l<<2|1);
var115 = (val*)((long)(0)<<2|3);
var116 = (val*)((long)(0)<<2|3);
var112 = core__flat___CString___to_s_unsafe(var111, var113, var114, var115, var116);
var110 = var112;
varonce109 = var110;
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nitcc__grammar__Generator__add]))(self, var110); /* add on <self:Generator>*/
}
} else {
{
((void(*)(val* self))(var_alt->class->vft[COLOR_nitcc__grammar__Alternative__make_codes]))(var_alt); /* make_codes on <var_alt:Alternative>*/
}
var_cpt = 0l;
var_i = 0l;
var117 = NEW_core__Array(&type_core__Array__core__String);
{
((void(*)(val* self))(var117->class->vft[COLOR_core__kernel__Object__init]))(var117); /* init on <var117:Array[String]>*/
}
var_st = var117;
{
var118 = ((val*(*)(val* self))(var_alt->class->vft[COLOR_nitcc__grammar__Alternative__codes]))(var_alt); /* codes on <var_alt:Alternative>*/
}
if (unlikely(var118 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitcc__grammar, 849);
fatal_exit(1);
}
var_119 = var118;
{
var120 = ((val*(*)(val* self))(var_119->class->vft[COLOR_core__abstract_collection__Collection__iterator]))(var_119); /* iterator on <var_119:Array[Code]>*/
}
var_121 = var120;
for(;;) {
{
var122 = ((short int(*)(val* self))((((long)var_121&3)?class_info[((long)var_121&3)]:var_121->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_121); /* is_ok on <var_121:IndexedIterator[Code]>*/
}
if (var122){
} else {
goto BREAK_label123;
}
{
var124 = ((val*(*)(val* self))((((long)var_121&3)?class_info[((long)var_121&3)]:var_121->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_121); /* item on <var_121:IndexedIterator[Code]>*/
}
var_c = var124;
/* <var_c:Code> isa CodePop */
cltype126 = type_nitcc__CodePop.color;
idtype127 = type_nitcc__CodePop.id;
if(cltype126 >= (((long)var_c&3)?type_info[((long)var_c&3)]:var_c->type)->table_size) {
var125 = 0;
} else {
var125 = (((long)var_c&3)?type_info[((long)var_c&3)]:var_c->type)->type_table[cltype126] == idtype127;
}
if (var125){
if (unlikely(varonce128==NULL)) {
var129 = NEW_core__NativeArray((int)2l, &type_core__NativeArray__core__String);
if (likely(varonce130!=NULL)) {
var131 = varonce130;
} else {
var132 = "n";
var134 = (val*)(1l<<2|1);
var135 = (val*)(1l<<2|1);
var136 = (val*)((long)(0)<<2|3);
var137 = (val*)((long)(0)<<2|3);
var133 = core__flat___CString___to_s_unsafe(var132, var134, var135, var136, var137);
var131 = var133;
varonce130 = var131;
}
((struct instance_core__NativeArray*)var129)->values[0]=var131;
} else {
var129 = varonce128;
varonce128 = NULL;
}
var138 = core__flat___Int___core__abstract_text__Object__to_s(var_i);
((struct instance_core__NativeArray*)var129)->values[1]=var138;
{
var139 = ((val*(*)(val* self))(var129->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var129); /* native_to_s on <var129:NativeArray[String]>*/
}
varonce128 = var129;
{
((void(*)(val* self, val* p0))(var_st->class->vft[COLOR_core__abstract_collection__SimpleCollection__add]))(var_st, var139); /* add on <var_st:Array[String]>*/
}
{
{ /* Inline kernel$Int$+ (var_i,1l) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var142 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var142)) {
var_class_name145 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name145);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var146 = var_i + 1l;
var140 = var146;
goto RET_LABEL141;
RET_LABEL141:(void)0;
}
}
var_i = var140;
} else {
/* <var_c:Code> isa CodeNull */
cltype148 = type_nitcc__CodeNull.color;
idtype149 = type_nitcc__CodeNull.id;
if(cltype148 >= (((long)var_c&3)?type_info[((long)var_c&3)]:var_c->type)->table_size) {
var147 = 0;
} else {
var147 = (((long)var_c&3)?type_info[((long)var_c&3)]:var_c->type)->type_table[cltype148] == idtype149;
}
if (var147){
if (likely(varonce150!=NULL)) {
var151 = varonce150;
} else {
var152 = "null";
var154 = (val*)(4l<<2|1);
var155 = (val*)(4l<<2|1);
var156 = (val*)((long)(0)<<2|3);
var157 = (val*)((long)(0)<<2|3);
var153 = core__flat___CString___to_s_unsafe(var152, var154, var155, var156, var157);
var151 = var153;
varonce150 = var151;
}
{
((void(*)(val* self, val* p0))(var_st->class->vft[COLOR_core__abstract_collection__SimpleCollection__add]))(var_st, var151); /* add on <var_st:Array[String]>*/
}
} else {
/* <var_c:Code> isa CodeNew */
cltype159 = type_nitcc__CodeNew.color;
idtype160 = type_nitcc__CodeNew.id;
if(cltype159 >= (((long)var_c&3)?type_info[((long)var_c&3)]:var_c->type)->table_size) {
var158 = 0;
} else {
var158 = (((long)var_c&3)?type_info[((long)var_c&3)]:var_c->type)->type_table[cltype159] == idtype160;
}
if (var158){
{
var161 = ((val*(*)(val* self))(var_c->class->vft[COLOR_nitcc__grammar__CodeNew__alt]))(var_c); /* alt on <var_c:Code(CodeNew)>*/
}
var_calt = var161;
{
{ /* Inline kernel$Int$+ (var_cpt,1l) on <var_cpt:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var164 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var164)) {
var_class_name167 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name167);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var168 = var_cpt + 1l;
var162 = var168;
goto RET_LABEL163;
RET_LABEL163:(void)0;
}
}
var_cpt = var162;
{
var169 = ((long(*)(val* self))(var_st->class->vft[COLOR_core__abstract_collection__Collection__length]))(var_st); /* length on <var_st:Array[String]>*/
}
{
var170 = ((val*(*)(val* self))(var_calt->class->vft[COLOR_nitcc__grammar__Alternative__elems]))(var_calt); /* elems on <var_calt:Alternative>*/
}
{
var171 = ((long(*)(val* self))(var170->class->vft[COLOR_core__abstract_collection__Collection__length]))(var170); /* length on <var170:Array[Element]>*/
}
{
{ /* Inline kernel$Int$- (var169,var171) on <var169:Int> */
/* Covariant cast for argument 0 (i) <var171:Int> isa OTHER */
/* <var171:Int> isa OTHER */
var174 = 1; /* easy <var171:Int> isa OTHER*/
if (unlikely(!var174)) {
var_class_name177 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name177);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 731);
fatal_exit(1);
}
var178 = var169 - var171;
var172 = var178;
goto RET_LABEL173;
RET_LABEL173:(void)0;
}
}
var_from = var172;
var179 = NEW_core__List(&type_core__List__core__String);
{
((void(*)(val* self))(var179->class->vft[COLOR_core__kernel__Object__init]))(var179); /* init on <var179:List[String]>*/
}
var_args = var179;
var_j = var_from;
{
var180 = ((long(*)(val* self))(var_st->class->vft[COLOR_core__abstract_collection__Collection__length]))(var_st); /* length on <var_st:Array[String]>*/
}
var_181 = var180;
for(;;) {
{
{ /* Inline kernel$Int$< (var_j,var_181) on <var_j:Int> */
/* Covariant cast for argument 0 (i) <var_181:Int> isa OTHER */
/* <var_181:Int> isa OTHER */
var184 = 1; /* easy <var_181:Int> isa OTHER*/
if (unlikely(!var184)) {
var_class_name187 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name187);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var188 = var_j < var_181;
var182 = var188;
goto RET_LABEL183;
RET_LABEL183:(void)0;
}
}
if (var182){
} else {
goto BREAK_label189;
}
{
var190 = ((val*(*)(val* self))(var_st->class->vft[COLOR_core__abstract_collection__Sequence__pop]))(var_st); /* pop on <var_st:Array[String]>*/
}
{
((void(*)(val* self, val* p0))(var_args->class->vft[COLOR_core__abstract_collection__Sequence__unshift]))(var_args, var190); /* unshift on <var_args:List[String]>*/
}
var191 = core___core__Int___Discrete__successor(var_j, 1l);
var_j = var191;
}
BREAK_label189: (void)0;
{
var192 = ((short int(*)(val* self))(var_args->class->vft[COLOR_core__abstract_collection__Collection__is_empty]))(var_args); /* is_empty on <var_args:List[String]>*/
}
if (var192){
if (unlikely(varonce193==NULL)) {
var194 = NEW_core__NativeArray((int)4l, &type_core__NativeArray__core__String);
if (likely(varonce195!=NULL)) {
var196 = varonce195;
} else {
var197 = "\t\tvar p";
var199 = (val*)(7l<<2|1);
var200 = (val*)(7l<<2|1);
var201 = (val*)((long)(0)<<2|3);
var202 = (val*)((long)(0)<<2|3);
var198 = core__flat___CString___to_s_unsafe(var197, var199, var200, var201, var202);
var196 = var198;
varonce195 = var196;
}
((struct instance_core__NativeArray*)var194)->values[0]=var196;
if (likely(varonce203!=NULL)) {
var204 = varonce203;
} else {
var205 = " = new ";
var207 = (val*)(7l<<2|1);
var208 = (val*)(7l<<2|1);
var209 = (val*)((long)(0)<<2|3);
var210 = (val*)((long)(0)<<2|3);
var206 = core__flat___CString___to_s_unsafe(var205, var207, var208, var209, var210);
var204 = var206;
varonce203 = var204;
}
((struct instance_core__NativeArray*)var194)->values[2]=var204;
} else {
var194 = varonce193;
varonce193 = NULL;
}
var211 = core__flat___Int___core__abstract_text__Object__to_s(var_cpt);
((struct instance_core__NativeArray*)var194)->values[1]=var211;
{
var212 = ((val*(*)(val* self))(var_calt->class->vft[COLOR_nitcc__grammar__Alternative__cname]))(var_calt); /* cname on <var_calt:Alternative>*/
}
((struct instance_core__NativeArray*)var194)->values[3]=var212;
{
var213 = ((val*(*)(val* self))(var194->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var194); /* native_to_s on <var194:NativeArray[String]>*/
}
varonce193 = var194;
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nitcc__grammar__Generator__add]))(self, var213); /* add on <self:Generator>*/
}
} else {
if (unlikely(varonce214==NULL)) {
var215 = NEW_core__NativeArray((int)7l, &type_core__NativeArray__core__String);
if (likely(varonce216!=NULL)) {
var217 = varonce216;
} else {
var218 = "\t\tvar p";
var220 = (val*)(7l<<2|1);
var221 = (val*)(7l<<2|1);
var222 = (val*)((long)(0)<<2|3);
var223 = (val*)((long)(0)<<2|3);
var219 = core__flat___CString___to_s_unsafe(var218, var220, var221, var222, var223);
var217 = var219;
varonce216 = var217;
}
((struct instance_core__NativeArray*)var215)->values[0]=var217;
if (likely(varonce224!=NULL)) {
var225 = varonce224;
} else {
var226 = " = new ";
var228 = (val*)(7l<<2|1);
var229 = (val*)(7l<<2|1);
var230 = (val*)((long)(0)<<2|3);
var231 = (val*)((long)(0)<<2|3);
var227 = core__flat___CString___to_s_unsafe(var226, var228, var229, var230, var231);
var225 = var227;
varonce224 = var225;
}
((struct instance_core__NativeArray*)var215)->values[2]=var225;
if (likely(varonce232!=NULL)) {
var233 = varonce232;
} else {
var234 = "(";
var236 = (val*)(1l<<2|1);
var237 = (val*)(1l<<2|1);
var238 = (val*)((long)(0)<<2|3);
var239 = (val*)((long)(0)<<2|3);
var235 = core__flat___CString___to_s_unsafe(var234, var236, var237, var238, var239);
var233 = var235;
varonce232 = var233;
}
((struct instance_core__NativeArray*)var215)->values[4]=var233;
if (likely(varonce240!=NULL)) {
var241 = varonce240;
} else {
var242 = ")";
var244 = (val*)(1l<<2|1);
var245 = (val*)(1l<<2|1);
var246 = (val*)((long)(0)<<2|3);
var247 = (val*)((long)(0)<<2|3);
var243 = core__flat___CString___to_s_unsafe(var242, var244, var245, var246, var247);
var241 = var243;
varonce240 = var241;
}
((struct instance_core__NativeArray*)var215)->values[6]=var241;
} else {
var215 = varonce214;
varonce214 = NULL;
}
var248 = core__flat___Int___core__abstract_text__Object__to_s(var_cpt);
((struct instance_core__NativeArray*)var215)->values[1]=var248;
{
var249 = ((val*(*)(val* self))(var_calt->class->vft[COLOR_nitcc__grammar__Alternative__cname]))(var_calt); /* cname on <var_calt:Alternative>*/
}
((struct instance_core__NativeArray*)var215)->values[3]=var249;
if (likely(varonce250!=NULL)) {
var251 = varonce250;
} else {
var252 = ", ";
var254 = (val*)(2l<<2|1);
var255 = (val*)(2l<<2|1);
var256 = (val*)((long)(0)<<2|3);
var257 = (val*)((long)(0)<<2|3);
var253 = core__flat___CString___to_s_unsafe(var252, var254, var255, var256, var257);
var251 = var253;
varonce250 = var251;
}
{
var258 = ((val*(*)(val* self, val* p0, val* p1))(var_args->class->vft[COLOR_core__abstract_text__Collection__join]))(var_args, var251, ((val*)NULL)); /* join on <var_args:List[String]>*/
}
((struct instance_core__NativeArray*)var215)->values[5]=var258;
{
var259 = ((val*(*)(val* self))(var215->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var215); /* native_to_s on <var215:NativeArray[String]>*/
}
varonce214 = var215;
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nitcc__grammar__Generator__add]))(self, var259); /* add on <self:Generator>*/
}
}
if (unlikely(varonce260==NULL)) {
var261 = NEW_core__NativeArray((int)2l, &type_core__NativeArray__core__String);
if (likely(varonce262!=NULL)) {
var263 = varonce262;
} else {
var264 = "p";
var266 = (val*)(1l<<2|1);
var267 = (val*)(1l<<2|1);
var268 = (val*)((long)(0)<<2|3);
var269 = (val*)((long)(0)<<2|3);
var265 = core__flat___CString___to_s_unsafe(var264, var266, var267, var268, var269);
var263 = var265;
varonce262 = var263;
}
((struct instance_core__NativeArray*)var261)->values[0]=var263;
} else {
var261 = varonce260;
varonce260 = NULL;
}
var270 = core__flat___Int___core__abstract_text__Object__to_s(var_cpt);
((struct instance_core__NativeArray*)var261)->values[1]=var270;
{
var271 = ((val*(*)(val* self))(var261->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var261); /* native_to_s on <var261:NativeArray[String]>*/
}
varonce260 = var261;
{
((void(*)(val* self, val* p0))(var_st->class->vft[COLOR_core__abstract_collection__SimpleCollection__add]))(var_st, var271); /* add on <var_st:Array[String]>*/
}
} else {
}
}
}
{
((void(*)(val* self))((((long)var_121&3)?class_info[((long)var_121&3)]:var_121->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_121); /* next on <var_121:IndexedIterator[Code]>*/
}
}
BREAK_label123: (void)0;
{
((void(*)(val* self))((((long)var_121&3)?class_info[((long)var_121&3)]:var_121->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_121); /* finish on <var_121:IndexedIterator[Code]>*/
}
{
var272 = ((long(*)(val* self))(var_st->class->vft[COLOR_core__abstract_collection__Collection__length]))(var_st); /* length on <var_st:Array[String]>*/
}
{
{ /* Inline kernel$Int$== (var272,1l) on <var272:Int> */
var275 = var272 == 1l;
var273 = var275;
goto RET_LABEL274;
RET_LABEL274:(void)0;
}
}
if (unlikely(!var273)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitcc__grammar, 878);
fatal_exit(1);
}
if (unlikely(varonce276==NULL)) {
var277 = NEW_core__NativeArray((int)2l, &type_core__NativeArray__core__String);
if (likely(varonce278!=NULL)) {
var279 = varonce278;
} else {
var280 = "\t\tvar prod = ";
var282 = (val*)(13l<<2|1);
var283 = (val*)(13l<<2|1);
var284 = (val*)((long)(0)<<2|3);
var285 = (val*)((long)(0)<<2|3);
var281 = core__flat___CString___to_s_unsafe(var280, var282, var283, var284, var285);
var279 = var281;
varonce278 = var279;
}
((struct instance_core__NativeArray*)var277)->values[0]=var279;
} else {
var277 = varonce276;
varonce276 = NULL;
}
{
var286 = ((val*(*)(val* self))(var_st->class->vft[COLOR_core__abstract_collection__Collection__first]))(var_st); /* first on <var_st:Array[String]>*/
}
((struct instance_core__NativeArray*)var277)->values[1]=var286;
{
var287 = ((val*(*)(val* self))(var277->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var277); /* native_to_s on <var277:NativeArray[String]>*/
}
varonce276 = var277;
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nitcc__grammar__Generator__add]))(self, var287); /* add on <self:Generator>*/
}
}
}
if (likely(varonce288!=NULL)) {
var289 = varonce288;
} else {
var290 = "\t\tparser.node_stack.push prod";
var292 = (val*)(29l<<2|1);
var293 = (val*)(29l<<2|1);
var294 = (val*)((long)(0)<<2|3);
var295 = (val*)((long)(0)<<2|3);
var291 = core__flat___CString___to_s_unsafe(var290, var292, var293, var294, var295);
var289 = var291;
varonce288 = var289;
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nitcc__grammar__Generator__add]))(self, var289); /* add on <self:Generator>*/
}
{
var296 = ((val*(*)(val* self))(var_alt->class->vft[COLOR_nitcc__grammar__Alternative__prod]))(var_alt); /* prod on <var_alt:Alternative>*/
}
{
var297 = ((short int(*)(val* self))(var296->class->vft[COLOR_nitcc__grammar__Production__accept]))(var296); /* accept on <var296:Production>*/
}
if (var297){
if (likely(varonce298!=NULL)) {
var299 = varonce298;
} else {
var300 = "\t\tparser.stop = true";
var302 = (val*)(20l<<2|1);
var303 = (val*)(20l<<2|1);
var304 = (val*)((long)(0)<<2|3);
var305 = (val*)((long)(0)<<2|3);
var301 = core__flat___CString___to_s_unsafe(var300, var302, var303, var304, var305);
var299 = var301;
varonce298 = var299;
}
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nitcc__grammar__Generator__add]))(self, var299); /* add on <self:Generator>*/
}
} else {
if (unlikely(varonce306==NULL)) {
var307 = NEW_core__NativeArray((int)3l, &type_core__NativeArray__core__String);
if (likely(varonce308!=NULL)) {
var309 = varonce308;
} else {
var310 = "\t\tparser.goto(goto_";
var312 = (val*)(19l<<2|1);
var313 = (val*)(19l<<2|1);
var314 = (val*)((long)(0)<<2|3);
var315 = (val*)((long)(0)<<2|3);
var311 = core__flat___CString___to_s_unsafe(var310, var312, var313, var314, var315);
var309 = var311;
varonce308 = var309;
}
((struct instance_core__NativeArray*)var307)->values[0]=var309;
if (likely(varonce316!=NULL)) {
var317 = varonce316;
} else {
var318 = ")";
var320 = (val*)(1l<<2|1);
var321 = (val*)(1l<<2|1);
var322 = (val*)((long)(0)<<2|3);
var323 = (val*)((long)(0)<<2|3);
var319 = core__flat___CString___to_s_unsafe(var318, var320, var321, var322, var323);
var317 = var319;
varonce316 = var317;
}
((struct instance_core__NativeArray*)var307)->values[2]=var317;
} else {
var307 = varonce306;
varonce306 = NULL;
}
{
var324 = ((val*(*)(val* self))(var_alt->class->vft[COLOR_nitcc__grammar__Alternative__prod]))(var_alt); /* prod on <var_alt:Alternative>*/
}
{
var325 = ((val*(*)(val* self))(var324->class->vft[COLOR_nitcc__grammar__Element__cname]))(var324); /* cname on <var324:Production>*/
}
((struct instance_core__NativeArray*)var307)->values[1]=var325;
{
var326 = ((val*(*)(val* self))(var307->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var307); /* native_to_s on <var307:NativeArray[String]>*/
}
varonce306 = var307;
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nitcc__grammar__Generator__add]))(self, var326); /* add on <self:Generator>*/
}
}
RET_LABEL:;
}
/* method grammar$LRState$name for (self: LRState): String */
val* nitcc___nitcc__LRState___name(val* self) {
val* var /* : String */;
val* var1 /* : String */;
var1 = self->attrs[COLOR_nitcc__grammar__LRState___name].val; /* _name on <self:LRState> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nitcc__grammar, 893);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method grammar$LRState$name= for (self: LRState, String) */
void nitcc___nitcc__LRState___name_61d(val* self, val* p0) {
self->attrs[COLOR_nitcc__grammar__LRState___name].val = p0; /* _name on <self:LRState> */
RET_LABEL:;
}
/* method grammar$LRState$cname for (self: LRState): String */
val* nitcc___nitcc__LRState___cname(val* self) {
val* var /* : String */;
short int var1 /* : Bool */;
val* var2 /* : String */;
val* var3 /* : String */;
val* var5 /* : String */;
val* var6 /* : String */;
var1 = self->attrs[COLOR_nitcc__grammar__LRState___cname].val != NULL; /* _cname on <self:LRState> */
if(likely(var1)) {
var2 = self->attrs[COLOR_nitcc__grammar__LRState___cname].val; /* _cname on <self:LRState> */
if (unlikely(var2 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _cname");
PRINT_ERROR(" (%s:%d)\n", FILE_nitcc__grammar, 896);
fatal_exit(1);
}
} else {
{
{
var5 = ((val*(*)(val* self))(self->class->vft[COLOR_nitcc__grammar__LRState__name]))(self); /* name on <self:LRState>*/
}
{
var6 = ((val*(*)(val* self))(var5->class->vft[COLOR_core__abstract_text__Text__to_cmangle]))(var5); /* to_cmangle on <var5:String>*/
}
var3 = var6;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
self->attrs[COLOR_nitcc__grammar__LRState___cname].val = var3; /* _cname on <self:LRState> */
var2 = var3;
}
var = var2;
RET_LABEL:;
return var;
}
/* method grammar$LRState$cname= for (self: LRState, String) */
void nitcc___nitcc__LRState___cname_61d(val* self, val* p0) {
self->attrs[COLOR_nitcc__grammar__LRState___cname].val = p0; /* _cname on <self:LRState> */
RET_LABEL:;
}
/* method grammar$LRState$number for (self: LRState): Int */
long nitcc___nitcc__LRState___number(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = self->attrs[COLOR_nitcc__grammar__LRState___number].l; /* _number on <self:LRState> */
var = var1;
RET_LABEL:;
return var;
}
/* method grammar$LRState$number= for (self: LRState, Int) */
void nitcc___nitcc__LRState___number_61d(val* self, long p0) {
self->attrs[COLOR_nitcc__grammar__LRState___number].l = p0; /* _number on <self:LRState> */
RET_LABEL:;
}
/* method grammar$LRState$items for (self: LRState): HashSet[Item] */
val* nitcc___nitcc__LRState___items(val* self) {
val* var /* : HashSet[Item] */;
val* var1 /* : HashSet[Item] */;
var1 = self->attrs[COLOR_nitcc__grammar__LRState___items].val; /* _items on <self:LRState> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _items");
PRINT_ERROR(" (%s:%d)\n", FILE_nitcc__grammar, 902);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method grammar$LRState$items= for (self: LRState, HashSet[Item]) */
void nitcc___nitcc__LRState___items_61d(val* self, val* p0) {
self->attrs[COLOR_nitcc__grammar__LRState___items].val = p0; /* _items on <self:LRState> */
RET_LABEL:;
}
/* method grammar$LRState$core for (self: LRState): HashSet[Item] */
val* nitcc___nitcc__LRState___core(val* self) {
val* var /* : HashSet[Item] */;
val* var1 /* : HashSet[Item] */;
var1 = self->attrs[COLOR_nitcc__grammar__LRState___core].val; /* _core on <self:LRState> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _core");
PRINT_ERROR(" (%s:%d)\n", FILE_nitcc__grammar, 905);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method grammar$LRState$core= for (self: LRState, HashSet[Item]) */
void nitcc___nitcc__LRState___core_61d(val* self, val* p0) {
self->attrs[COLOR_nitcc__grammar__LRState___core].val = p0; /* _core on <self:LRState> */
RET_LABEL:;
}
/* method grammar$LRState$ins for (self: LRState): Array[LRTransition] */
val* nitcc___nitcc__LRState___ins(val* self) {
val* var /* : Array[LRTransition] */;
val* var1 /* : Array[LRTransition] */;
var1 = self->attrs[COLOR_nitcc__grammar__LRState___ins].val; /* _ins on <self:LRState> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _ins");
PRINT_ERROR(" (%s:%d)\n", FILE_nitcc__grammar, 908);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method grammar$LRState$ins= for (self: LRState, Array[LRTransition]) */
void nitcc___nitcc__LRState___ins_61d(val* self, val* p0) {
self->attrs[COLOR_nitcc__grammar__LRState___ins].val = p0; /* _ins on <self:LRState> */
RET_LABEL:;
}
/* method grammar$LRState$outs for (self: LRState): Array[LRTransition] */
val* nitcc___nitcc__LRState___outs(val* self) {
val* var /* : Array[LRTransition] */;
val* var1 /* : Array[LRTransition] */;
var1 = self->attrs[COLOR_nitcc__grammar__LRState___outs].val; /* _outs on <self:LRState> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _outs");
PRINT_ERROR(" (%s:%d)\n", FILE_nitcc__grammar, 911);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method grammar$LRState$outs= for (self: LRState, Array[LRTransition]) */
void nitcc___nitcc__LRState___outs_61d(val* self, val* p0) {
self->attrs[COLOR_nitcc__grammar__LRState___outs].val = p0; /* _outs on <self:LRState> */
RET_LABEL:;
}
/* method grammar$LRState$trans for (self: LRState, Element): nullable LRState */
val* nitcc___nitcc__LRState___trans(val* self, val* p0) {
val* var /* : nullable LRState */;
val* var_e /* var e: Element */;
val* var1 /* : Array[LRTransition] */;
val* var_ /* var : Array[LRTransition] */;
val* var2 /* : Iterator[nullable Object] */;
val* var_3 /* var : IndexedIterator[LRTransition] */;
short int var4 /* : Bool */;
val* var5 /* : nullable Object */;
val* var_t /* var t: LRTransition */;
val* var6 /* : Element */;
short int var7 /* : Bool */;
val* var8 /* : LRState */;
var_e = p0;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_nitcc__grammar__LRState__outs]))(self); /* outs on <self:LRState>*/
}
var_ = var1;
{
var2 = ((val*(*)(val* self))(var_->class->vft[COLOR_core__abstract_collection__Collection__iterator]))(var_); /* iterator on <var_:Array[LRTransition]>*/
}
var_3 = var2;
for(;;) {
{
var4 = ((short int(*)(val* self))((((long)var_3&3)?class_info[((long)var_3&3)]:var_3->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_3); /* is_ok on <var_3:IndexedIterator[LRTransition]>*/
}
if (var4){
} else {
goto BREAK_label;
}
{
var5 = ((val*(*)(val* self))((((long)var_3&3)?class_info[((long)var_3&3)]:var_3->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_3); /* item on <var_3:IndexedIterator[LRTransition]>*/
}
var_t = var5;
{
var6 = ((val*(*)(val* self))(var_t->class->vft[COLOR_nitcc__grammar__LRTransition__elem]))(var_t); /* elem on <var_t:LRTransition>*/
}
{
var7 = ((short int(*)(val* self, val* p0))(var6->class->vft[COLOR_core__kernel__Object___61d_61d]))(var6, var_e); /* == on <var6:Element>*/
}
if (var7){
{
var8 = ((val*(*)(val* self))(var_t->class->vft[COLOR_nitcc__grammar__LRTransition__to]))(var_t); /* to on <var_t:LRTransition>*/
}
var = var8;
goto RET_LABEL;
} else {
}
{
((void(*)(val* self))((((long)var_3&3)?class_info[((long)var_3&3)]:var_3->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_3); /* next on <var_3:IndexedIterator[LRTransition]>*/
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_3&3)?class_info[((long)var_3&3)]:var_3->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_3); /* finish on <var_3:IndexedIterator[LRTransition]>*/
}
var = ((val*)NULL);
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method grammar$LRState$== for (self: LRState, nullable Object): Bool */
short int nitcc___nitcc__LRState___core__kernel__Object___61d_61d(val* self, val* p0) {
short int var /* : Bool */;
val* var_o /* var o: nullable Object */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
int cltype;
int idtype;
short int var_ /* var : Bool */;
val* var3 /* : HashSet[Item] */;
val* var4 /* : HashSet[Item] */;
short int var5 /* : Bool */;
var_o = p0;
/* <var_o:nullable Object> isa LRState */
cltype = type_nitcc__LRState.color;
idtype = type_nitcc__LRState.id;
if(var_o == NULL) {
var2 = 0;
} else {
if(cltype >= (((long)var_o&3)?type_info[((long)var_o&3)]:var_o->type)->table_size) {
var2 = 0;
} else {
var2 = (((long)var_o&3)?type_info[((long)var_o&3)]:var_o->type)->type_table[cltype] == idtype;
}
}
var_ = var2;
if (var2){
{
var3 = ((val*(*)(val* self))(self->class->vft[COLOR_nitcc__grammar__LRState__core]))(self); /* core on <self:LRState>*/
}
{
var4 = ((val*(*)(val* self))(var_o->class->vft[COLOR_nitcc__grammar__LRState__core]))(var_o); /* core on <var_o:nullable Object(LRState)>*/
}
{
var5 = ((short int(*)(val* self, val* p0))(var3->class->vft[COLOR_core__kernel__Object___61d_61d]))(var3, var4); /* == on <var3:HashSet[Item]>*/
}
var1 = var5;
} else {
var1 = var_;
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method grammar$LRState$hash for (self: LRState): Int */
long nitcc___nitcc__LRState___core__kernel__Object__hash(val* self) {
long var /* : Int */;
val* var1 /* : HashSet[Item] */;
long var2 /* : Int */;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_nitcc__grammar__LRState__items]))(self); /* items on <self:LRState>*/
}
{
var2 = ((long(*)(val* self))(var1->class->vft[COLOR_core__abstract_collection__Collection__length]))(var1); /* length on <var1:HashSet[Item]>*/
}
var = var2;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method grammar$LRState$to_s for (self: LRState): String */
val* nitcc___nitcc__LRState___core__abstract_text__Object__to_s(val* self) {
val* var /* : String */;
val* var1 /* : HashSet[Item] */;
static val* varonce;
val* var2 /* : String */;
char* var3 /* : CString */;
val* var4 /* : String */;
val* var5 /* : nullable Int */;
val* var6 /* : nullable Int */;
val* var7 /* : nullable Bool */;
val* var8 /* : nullable Bool */;
val* var9 /* : String */;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_nitcc__grammar__LRState__items]))(self); /* items on <self:LRState>*/
}
if (likely(varonce!=NULL)) {
var2 = varonce;
} else {
var3 = " ; ";
var5 = (val*)(3l<<2|1);
var6 = (val*)(3l<<2|1);
var7 = (val*)((long)(0)<<2|3);
var8 = (val*)((long)(0)<<2|3);
var4 = core__flat___CString___to_s_unsafe(var3, var5, var6, var7, var8);
var2 = var4;
varonce = var2;
}
{
var9 = ((val*(*)(val* self, val* p0, val* p1))(var1->class->vft[COLOR_core__abstract_text__Collection__join]))(var1, var2, ((val*)NULL)); /* join on <var1:HashSet[Item]>*/
}
var = var9;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method grammar$LRState$add for (self: LRState, Item): Bool */
short int nitcc___nitcc__LRState___add(val* self, val* p0) {
short int var /* : Bool */;
val* var_i /* var i: Item */;
val* var1 /* : HashSet[Item] */;
short int var2 /* : Bool */;
val* var3 /* : HashSet[Item] */;
short int var4 /* : Bool */;
long var5 /* : Int */;
short int var6 /* : Bool */;
short int var8 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var9 /* : Bool */;
short int var_ /* var : Bool */;
val* var10 /* : Alternative */;
val* var11 /* : Production */;
short int var12 /* : Bool */;
val* var13 /* : HashSet[Item] */;
var_i = p0;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_nitcc__grammar__LRState__items]))(self); /* items on <self:LRState>*/
}
{
var2 = ((short int(*)(val* self, val* p0))(var1->class->vft[COLOR_core__abstract_collection__Collection__has]))(var1, var_i); /* has on <var1:HashSet[Item]>*/
}
if (var2){
var = 0;
goto RET_LABEL;
} else {
}
{
var3 = ((val*(*)(val* self))(self->class->vft[COLOR_nitcc__grammar__LRState__items]))(self); /* items on <self:LRState>*/
}
{
((void(*)(val* self, val* p0))(var3->class->vft[COLOR_core__abstract_collection__SimpleCollection__add]))(var3, var_i); /* add on <var3:HashSet[Item]>*/
}
{
var5 = ((long(*)(val* self))(var_i->class->vft[COLOR_nitcc__grammar__Item__pos]))(var_i); /* pos on <var_i:Item>*/
}
{
{ /* Inline kernel$Int$> (var5,0l) on <var5:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var8 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var8)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 727);
fatal_exit(1);
}
var9 = var5 > 0l;
var6 = var9;
goto RET_LABEL7;
RET_LABEL7:(void)0;
}
}
var_ = var6;
if (var6){
var4 = var_;
} else {
{
var10 = ((val*(*)(val* self))(var_i->class->vft[COLOR_nitcc__grammar__Item__alt]))(var_i); /* alt on <var_i:Item>*/
}
{
var11 = ((val*(*)(val* self))(var10->class->vft[COLOR_nitcc__grammar__Alternative__prod]))(var10); /* prod on <var10:Alternative>*/
}
{
var12 = ((short int(*)(val* self))(var11->class->vft[COLOR_nitcc__grammar__Production__accept]))(var11); /* accept on <var11:Production>*/
}
var4 = var12;
}
if (var4){
{
var13 = ((val*(*)(val* self))(self->class->vft[COLOR_nitcc__grammar__LRState__core]))(self); /* core on <self:LRState>*/
}
{
((void(*)(val* self, val* p0))(var13->class->vft[COLOR_core__abstract_collection__SimpleCollection__add]))(var13, var_i); /* add on <var13:HashSet[Item]>*/
}
} else {
}
var = 1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method grammar$LRState$extends for (self: LRState, Item) */
void nitcc___nitcc__LRState___extends(val* self, val* p0) {
val* var_i /* var i: Item */;
val* var /* : nullable Element */;
val* var_e /* var e: nullable Element */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
short int var3 /* : Bool */;
int cltype;
int idtype;
short int var4 /* : Bool */;
val* var5 /* : Array[Item] */;
val* var_ /* var : Array[Item] */;
val* var6 /* : Iterator[nullable Object] */;
val* var_7 /* var : IndexedIterator[Item] */;
short int var8 /* : Bool */;
val* var9 /* : nullable Object */;
val* var_i2 /* var i2: Item */;
short int var10 /* : Bool */;
var_i = p0;
{
var = ((val*(*)(val* self))(var_i->class->vft[COLOR_nitcc__grammar__Item__next]))(var_i); /* next on <var_i:Item>*/
}
var_e = var;
if (var_e == NULL) {
var1 = 1; /* is null */
} else {
var1 = 0; /* arg is null but recv is not */
}
if (0) {
var2 = ((short int(*)(val* self, val* p0))(var_e->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_e, ((val*)NULL)); /* == on <var_e:nullable Element>*/
var1 = var2;
}
if (var1){
goto RET_LABEL;
} else {
}
/* <var_e:nullable Element(Element)> isa Production */
cltype = type_nitcc__Production.color;
idtype = type_nitcc__Production.id;
if(cltype >= var_e->type->table_size) {
var3 = 0;
} else {
var3 = var_e->type->type_table[cltype] == idtype;
}
var4 = !var3;
if (var4){
goto RET_LABEL;
} else {
}
{
var5 = ((val*(*)(val* self))(var_e->class->vft[COLOR_nitcc__grammar__Production__start_state]))(var_e); /* start_state on <var_e:nullable Element(Production)>*/
}
var_ = var5;
{
var6 = ((val*(*)(val* self))(var_->class->vft[COLOR_core__abstract_collection__Collection__iterator]))(var_); /* iterator on <var_:Array[Item]>*/
}
var_7 = var6;
for(;;) {
{
var8 = ((short int(*)(val* self))((((long)var_7&3)?class_info[((long)var_7&3)]:var_7->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_7); /* is_ok on <var_7:IndexedIterator[Item]>*/
}
if (var8){
} else {
goto BREAK_label;
}
{
var9 = ((val*(*)(val* self))((((long)var_7&3)?class_info[((long)var_7&3)]:var_7->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_7); /* item on <var_7:IndexedIterator[Item]>*/
}
var_i2 = var9;
{
var10 = ((short int(*)(val* self, val* p0))(self->class->vft[COLOR_nitcc__grammar__LRState__add]))(self, var_i2); /* add on <self:LRState>*/
}
if (var10){
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nitcc__grammar__LRState__extends]))(self, var_i2); /* extends on <self:LRState>*/
}
} else {
}
{
((void(*)(val* self))((((long)var_7&3)?class_info[((long)var_7&3)]:var_7->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_7); /* next on <var_7:IndexedIterator[Item]>*/
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_7&3)?class_info[((long)var_7&3)]:var_7->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_7); /* finish on <var_7:IndexedIterator[Item]>*/
}
RET_LABEL:;
}
/* method grammar$LRState$lookahead for (self: LRState, Item): Set[Item] */
val* nitcc___nitcc__LRState___lookahead(val* self, val* p0) {
val* var /* : Set[Item] */;
val* var_i /* var i: Item */;
val* var1 /* : Alternative */;
val* var2 /* : Production */;
val* var3 /* : HashSet[Item] */;
var_i = p0;
{
var1 = ((val*(*)(val* self))(var_i->class->vft[COLOR_nitcc__grammar__Item__alt]))(var_i); /* alt on <var_i:Item>*/
}
{
var2 = ((val*(*)(val* self))(var1->class->vft[COLOR_nitcc__grammar__Alternative__prod]))(var1); /* prod on <var1:Alternative>*/
}
{
var3 = ((val*(*)(val* self))(var2->class->vft[COLOR_nitcc__grammar__Production__afters]))(var2); /* afters on <var2:Production>*/
}
var = var3;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method grammar$LRState$reduces for (self: LRState): ArraySet[Alternative] */
val* nitcc___nitcc__LRState___reduces(val* self) {
val* var /* : ArraySet[Alternative] */;
val* var1 /* : ArraySet[Alternative] */;
var1 = self->attrs[COLOR_nitcc__grammar__LRState___reduces].val; /* _reduces on <self:LRState> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _reduces");
PRINT_ERROR(" (%s:%d)\n", FILE_nitcc__grammar, 953);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method grammar$LRState$reduces= for (self: LRState, ArraySet[Alternative]) */
void nitcc___nitcc__LRState___reduces_61d(val* self, val* p0) {
self->attrs[COLOR_nitcc__grammar__LRState___reduces].val = p0; /* _reduces on <self:LRState> */
RET_LABEL:;
}
/* method grammar$LRState$shifts for (self: LRState): ArraySet[Token] */
val* nitcc___nitcc__LRState___shifts(val* self) {
val* var /* : ArraySet[Token] */;
val* var1 /* : ArraySet[Token] */;
var1 = self->attrs[COLOR_nitcc__grammar__LRState___shifts].val; /* _shifts on <self:LRState> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _shifts");
PRINT_ERROR(" (%s:%d)\n", FILE_nitcc__grammar, 955);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method grammar$LRState$shifts= for (self: LRState, ArraySet[Token]) */
void nitcc___nitcc__LRState___shifts_61d(val* self, val* p0) {
self->attrs[COLOR_nitcc__grammar__LRState___shifts].val = p0; /* _shifts on <self:LRState> */
RET_LABEL:;
}
/* method grammar$LRState$gotos for (self: LRState): ArraySet[Production] */
val* nitcc___nitcc__LRState___gotos(val* self) {
val* var /* : ArraySet[Production] */;
val* var1 /* : ArraySet[Production] */;
var1 = self->attrs[COLOR_nitcc__grammar__LRState___gotos].val; /* _gotos on <self:LRState> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _gotos");
PRINT_ERROR(" (%s:%d)\n", FILE_nitcc__grammar, 957);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method grammar$LRState$gotos= for (self: LRState, ArraySet[Production]) */
void nitcc___nitcc__LRState___gotos_61d(val* self, val* p0) {
self->attrs[COLOR_nitcc__grammar__LRState___gotos].val = p0; /* _gotos on <self:LRState> */
RET_LABEL:;
}
/* method grammar$LRState$guarded_reduce for (self: LRState): HashMap[Token, Set[Item]] */
val* nitcc___nitcc__LRState___guarded_reduce(val* self) {
val* var /* : HashMap[Token, Set[Item]] */;
val* var1 /* : HashMap[Token, Set[Item]] */;
var1 = self->attrs[COLOR_nitcc__grammar__LRState___guarded_reduce].val; /* _guarded_reduce on <self:LRState> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _guarded_reduce");
PRINT_ERROR(" (%s:%d)\n", FILE_nitcc__grammar, 959);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method grammar$LRState$guarded_reduce= for (self: LRState, HashMap[Token, Set[Item]]) */
void nitcc___nitcc__LRState___guarded_reduce_61d(val* self, val* p0) {
self->attrs[COLOR_nitcc__grammar__LRState___guarded_reduce].val = p0; /* _guarded_reduce on <self:LRState> */
RET_LABEL:;
}
/* method grammar$LRState$guarded_shift for (self: LRState): HashMap[Token, Set[Item]] */
val* nitcc___nitcc__LRState___guarded_shift(val* self) {
val* var /* : HashMap[Token, Set[Item]] */;
val* var1 /* : HashMap[Token, Set[Item]] */;
var1 = self->attrs[COLOR_nitcc__grammar__LRState___guarded_shift].val; /* _guarded_shift on <self:LRState> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _guarded_shift");
PRINT_ERROR(" (%s:%d)\n", FILE_nitcc__grammar, 961);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method grammar$LRState$guarded_shift= for (self: LRState, HashMap[Token, Set[Item]]) */
void nitcc___nitcc__LRState___guarded_shift_61d(val* self, val* p0) {
self->attrs[COLOR_nitcc__grammar__LRState___guarded_shift].val = p0; /* _guarded_shift on <self:LRState> */
RET_LABEL:;
}
/* method grammar$LRState$need_guard for (self: LRState): Bool */
short int nitcc___nitcc__LRState___need_guard(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
val* var2 /* : ArraySet[Token] */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
short int var_ /* var : Bool */;
val* var5 /* : ArraySet[Alternative] */;
long var6 /* : Int */;
short int var7 /* : Bool */;
short int var9 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var10 /* : Bool */;
{
var2 = ((val*(*)(val* self))(self->class->vft[COLOR_nitcc__grammar__LRState__shifts]))(self); /* shifts on <self:LRState>*/
}
{
var3 = ((short int(*)(val* self))(var2->class->vft[COLOR_core__abstract_collection__Collection__is_empty]))(var2); /* is_empty on <var2:ArraySet[Token]>*/
}
var4 = !var3;
var_ = var4;
if (var4){
var1 = var_;
} else {
{
var5 = ((val*(*)(val* self))(self->class->vft[COLOR_nitcc__grammar__LRState__reduces]))(self); /* reduces on <self:LRState>*/
}
{
var6 = ((long(*)(val* self))(var5->class->vft[COLOR_core__abstract_collection__Collection__length]))(var5); /* length on <var5:ArraySet[Alternative]>*/
}
{
{ /* Inline kernel$Int$> (var6,1l) on <var6:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var9 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var9)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 727);
fatal_exit(1);
}
var10 = var6 > 1l;
var7 = var10;
goto RET_LABEL8;
RET_LABEL8:(void)0;
}
}
var1 = var7;
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method grammar$LRState$is_lr0 for (self: LRState): Bool */
short int nitcc___nitcc__LRState___is_lr0(val* self) {
short int var /* : Bool */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
val* var3 /* : ArraySet[Alternative] */;
long var4 /* : Int */;
short int var5 /* : Bool */;
short int var7 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var8 /* : Bool */;
short int var_ /* var : Bool */;
val* var9 /* : ArraySet[Token] */;
short int var10 /* : Bool */;
short int var_11 /* var : Bool */;
val* var12 /* : ArraySet[Alternative] */;
short int var13 /* : Bool */;
{
var3 = ((val*(*)(val* self))(self->class->vft[COLOR_nitcc__grammar__LRState__reduces]))(self); /* reduces on <self:LRState>*/
}
{
var4 = ((long(*)(val* self))(var3->class->vft[COLOR_core__abstract_collection__Collection__length]))(var3); /* length on <var3:ArraySet[Alternative]>*/
}
{
{ /* Inline kernel$Int$<= (var4,1l) on <var4:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var7 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var7)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 724);
fatal_exit(1);
}
var8 = var4 <= 1l;
var5 = var8;
goto RET_LABEL6;
RET_LABEL6:(void)0;
}
}
var_ = var5;
if (var5){
{
var9 = ((val*(*)(val* self))(self->class->vft[COLOR_nitcc__grammar__LRState__shifts]))(self); /* shifts on <self:LRState>*/
}
{
var10 = ((short int(*)(val* self))(var9->class->vft[COLOR_core__abstract_collection__Collection__is_empty]))(var9); /* is_empty on <var9:ArraySet[Token]>*/
}
var2 = var10;
} else {
var2 = var_;
}
var_11 = var2;
if (var2){
var1 = var_11;
} else {
{
var12 = ((val*(*)(val* self))(self->class->vft[COLOR_nitcc__grammar__LRState__reduces]))(self); /* reduces on <self:LRState>*/
}
{
var13 = ((short int(*)(val* self))(var12->class->vft[COLOR_core__abstract_collection__Collection__is_empty]))(var12); /* is_empty on <var12:ArraySet[Alternative]>*/
}
var1 = var13;
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method grammar$LRState$analysis for (self: LRState) */
void nitcc___nitcc__LRState___analysis(val* self) {
val* var /* : HashSet[Item] */;
val* var1 /* : Array[nullable Object] */;
val* var_ /* var : Array[Item] */;
val* var2 /* : Iterator[nullable Object] */;
val* var_3 /* var : IndexedIterator[Item] */;
short int var4 /* : Bool */;
val* var5 /* : nullable Object */;
val* var_i /* var i: Item */;
val* var6 /* : HashSet[Item] */;
val* var_7 /* var : HashSet[Item] */;
val* var8 /* : Iterator[nullable Object] */;
val* var_9 /* var : Iterator[Item] */;
short int var10 /* : Bool */;
val* var12 /* : nullable Object */;
val* var_i13 /* var i: Item */;
val* var14 /* : nullable Element */;
val* var_n /* var n: nullable Element */;
short int var15 /* : Bool */;
short int var16 /* : Bool */;
val* var17 /* : ArraySet[Alternative] */;
val* var18 /* : Alternative */;
val* var19 /* : Set[Item] */;
val* var_20 /* var : Set[Item] */;
val* var21 /* : Iterator[nullable Object] */;
val* var_22 /* var : Iterator[Item] */;
short int var23 /* : Bool */;
val* var25 /* : nullable Object */;
val* var_i2 /* var i2: Item */;
val* var26 /* : nullable Element */;
val* var_t /* var t: nullable Element */;
short int var27 /* : Bool */;
int cltype;
int idtype;
val* var28 /* : ArraySet[LRState] */;
val* var29 /* : HashMap[Token, Set[Item]] */;
short int var30 /* : Bool */;
short int var31 /* : Bool */;
val* var32 /* : HashMap[Token, Set[Item]] */;
val* var33 /* : ArraySet[Item] */;
val* var34 /* : HashMap[Token, Set[Item]] */;
val* var35 /* : nullable Object */;
short int var36 /* : Bool */;
int cltype37;
int idtype38;
val* var39 /* : ArraySet[Token] */;
val* var40 /* : ArraySet[LRState] */;
val* var41 /* : HashMap[Token, Set[Item]] */;
short int var42 /* : Bool */;
short int var43 /* : Bool */;
val* var44 /* : HashMap[Token, Set[Item]] */;
val* var45 /* : ArraySet[Item] */;
val* var46 /* : HashMap[Token, Set[Item]] */;
val* var47 /* : nullable Object */;
short int var48 /* : Bool */;
int cltype49;
int idtype50;
val* var51 /* : ArraySet[Production] */;
val* var52 /* : ArraySet[LRState] */;
val* var53 /* : Array[Token] */;
val* var_removed_reduces /* var removed_reduces: Array[Token] */;
val* var54 /* : HashMap[Token, Set[Item]] */;
val* var_55 /* var : HashMap[Token, Set[Item]] */;
val* var56 /* : MapIterator[nullable Object, nullable Object] */;
val* var_57 /* var : MapIterator[Token, Set[Item]] */;
short int var58 /* : Bool */;
val* var60 /* : nullable Object */;
val* var_t61 /* var t: Token */;
val* var62 /* : nullable Object */;
val* var_a /* var a: Set[Item] */;
long var63 /* : Int */;
short int var64 /* : Bool */;
short int var66 /* : Bool */;
int cltype67;
int idtype68;
const char* var_class_name;
short int var69 /* : Bool */;
val* var70 /* : Sys */;
val* var71 /* : NativeArray[String] */;
static val* varonce;
static val* varonce72;
val* var73 /* : String */;
char* var74 /* : CString */;
val* var75 /* : String */;
val* var76 /* : nullable Int */;
val* var77 /* : nullable Int */;
val* var78 /* : nullable Bool */;
val* var79 /* : nullable Bool */;
static val* varonce80;
val* var81 /* : String */;
char* var82 /* : CString */;
val* var83 /* : String */;
val* var84 /* : nullable Int */;
val* var85 /* : nullable Int */;
val* var86 /* : nullable Bool */;
val* var87 /* : nullable Bool */;
static val* varonce88;
val* var89 /* : String */;
char* var90 /* : CString */;
val* var91 /* : String */;
val* var92 /* : nullable Int */;
val* var93 /* : nullable Int */;
val* var94 /* : nullable Bool */;
val* var95 /* : nullable Bool */;
static val* varonce96;
val* var97 /* : String */;
char* var98 /* : CString */;
val* var99 /* : String */;
val* var100 /* : nullable Int */;
val* var101 /* : nullable Int */;
val* var102 /* : nullable Bool */;
val* var103 /* : nullable Bool */;
long var104 /* : Int */;
val* var105 /* : String */;
val* var106 /* : String */;
val* var107 /* : String */;
val* var108 /* : String */;
val* var_109 /* var : Set[Item] */;
val* var110 /* : Iterator[nullable Object] */;
val* var_111 /* var : Iterator[Item] */;
short int var112 /* : Bool */;
val* var114 /* : nullable Object */;
val* var_i115 /* var i: Item */;
val* var116 /* : Sys */;
val* var118 /* : NativeArray[String] */;
static val* varonce117;
static val* varonce119;
val* var120 /* : String */;
char* var121 /* : CString */;
val* var122 /* : String */;
val* var123 /* : nullable Int */;
val* var124 /* : nullable Int */;
val* var125 /* : nullable Bool */;
val* var126 /* : nullable Bool */;
val* var127 /* : String */;
val* var128 /* : String */;
val* var129 /* : ArraySet[Item] */;
val* var130 /* : HashMap[Token, Set[Item]] */;
short int var131 /* : Bool */;
val* var132 /* : nullable Object */;
val* var_ri /* var ri: Item */;
val* var133 /* : Array[Item] */;
val* var_confs /* var confs: Array[Item] */;
val* var134 /* : Array[String] */;
val* var_ress /* var ress: Array[String] */;
val* var135 /* : HashMap[Token, Set[Item]] */;
val* var136 /* : nullable Object */;
val* var_g /* var g: Set[Item] */;
val* var137 /* : Set[Item] */;
val* var_138 /* var : Set[Item] */;
val* var139 /* : Iterator[nullable Object] */;
val* var_140 /* var : Iterator[Item] */;
short int var141 /* : Bool */;
val* var143 /* : nullable Object */;
val* var_si /* var si: Item */;
val* var144 /* : nullable Element */;
short int var145 /* : Bool */;
short int var146 /* : Bool */;
short int var148 /* : Bool */;
short int var149 /* : Bool */;
val* var150 /* : Alternative */;
val* var151 /* : Production */;
val* var_p /* var p: Production */;
val* var_csi /* var csi: nullable Item */;
val* var152 /* : Set[Item] */;
val* var_153 /* var : Set[Item] */;
val* var154 /* : Iterator[nullable Object] */;
val* var_155 /* var : Iterator[Item] */;
short int var156 /* : Bool */;
val* var158 /* : nullable Object */;
val* var_bsi /* var bsi: Item */;
val* var159 /* : Alternative */;
val* var160 /* : Production */;
short int var161 /* : Bool */;
short int var162 /* : Bool */;
short int var163 /* : Bool */;
val* var165 /* : NativeArray[String] */;
static val* varonce164;
static val* varonce166;
val* var167 /* : String */;
char* var168 /* : CString */;
val* var169 /* : String */;
val* var170 /* : nullable Int */;
val* var171 /* : nullable Int */;
val* var172 /* : nullable Bool */;
val* var173 /* : nullable Bool */;
val* var174 /* : String */;
val* var175 /* : String */;
short int var176 /* : Bool */;
val* var178 /* : NativeArray[String] */;
static val* varonce177;
static val* varonce179;
val* var180 /* : String */;
char* var181 /* : CString */;
val* var182 /* : String */;
val* var183 /* : nullable Int */;
val* var184 /* : nullable Int */;
val* var185 /* : nullable Bool */;
val* var186 /* : nullable Bool */;
val* var187 /* : String */;
val* var188 /* : String */;
short int var189 /* : Bool */;
val* var190 /* : Sys */;
val* var192 /* : NativeArray[String] */;
static val* varonce191;
static val* varonce193;
val* var194 /* : String */;
char* var195 /* : CString */;
val* var196 /* : String */;
val* var197 /* : nullable Int */;
val* var198 /* : nullable Int */;
val* var199 /* : nullable Bool */;
val* var200 /* : nullable Bool */;
static val* varonce201;
val* var202 /* : String */;
char* var203 /* : CString */;
val* var204 /* : String */;
val* var205 /* : nullable Int */;
val* var206 /* : nullable Int */;
val* var207 /* : nullable Bool */;
val* var208 /* : nullable Bool */;
static val* varonce209;
val* var210 /* : String */;
char* var211 /* : CString */;
val* var212 /* : String */;
val* var213 /* : nullable Int */;
val* var214 /* : nullable Int */;
val* var215 /* : nullable Bool */;
val* var216 /* : nullable Bool */;
static val* varonce217;
val* var218 /* : String */;
char* var219 /* : CString */;
val* var220 /* : String */;
val* var221 /* : nullable Int */;
val* var222 /* : nullable Int */;
val* var223 /* : nullable Bool */;
val* var224 /* : nullable Bool */;
long var225 /* : Int */;
val* var226 /* : String */;
val* var227 /* : String */;
val* var228 /* : String */;
val* var229 /* : String */;
val* var230 /* : Sys */;
val* var232 /* : NativeArray[String] */;
static val* varonce231;
static val* varonce233;
val* var234 /* : String */;
char* var235 /* : CString */;
val* var236 /* : String */;
val* var237 /* : nullable Int */;
val* var238 /* : nullable Int */;
val* var239 /* : nullable Bool */;
val* var240 /* : nullable Bool */;
val* var241 /* : String */;
val* var242 /* : String */;
val* var_243 /* var : Array[String] */;
val* var244 /* : Iterator[nullable Object] */;
val* var_245 /* var : IndexedIterator[String] */;
short int var246 /* : Bool */;
val* var248 /* : nullable Object */;
val* var_r /* var r: String */;
val* var249 /* : Sys */;
val* var250 /* : Sys */;
val* var252 /* : NativeArray[String] */;
static val* varonce251;
static val* varonce253;
val* var254 /* : String */;
char* var255 /* : CString */;
val* var256 /* : String */;
val* var257 /* : nullable Int */;
val* var258 /* : nullable Int */;
val* var259 /* : nullable Bool */;
val* var260 /* : nullable Bool */;
static val* varonce261;
val* var262 /* : String */;
char* var263 /* : CString */;
val* var264 /* : String */;
val* var265 /* : nullable Int */;
val* var266 /* : nullable Int */;
val* var267 /* : nullable Bool */;
val* var268 /* : nullable Bool */;
static val* varonce269;
val* var270 /* : String */;
char* var271 /* : CString */;
val* var272 /* : String */;
val* var273 /* : nullable Int */;
val* var274 /* : nullable Int */;
val* var275 /* : nullable Bool */;
val* var276 /* : nullable Bool */;
static val* varonce277;
val* var278 /* : String */;
char* var279 /* : CString */;
val* var280 /* : String */;
val* var281 /* : nullable Int */;
val* var282 /* : nullable Int */;
val* var283 /* : nullable Bool */;
val* var284 /* : nullable Bool */;
long var285 /* : Int */;
val* var286 /* : String */;
val* var287 /* : String */;
val* var288 /* : String */;
val* var289 /* : String */;
val* var290 /* : Sys */;
val* var292 /* : NativeArray[String] */;
static val* varonce291;
static val* varonce293;
val* var294 /* : String */;
char* var295 /* : CString */;
val* var296 /* : String */;
val* var297 /* : nullable Int */;
val* var298 /* : nullable Int */;
val* var299 /* : nullable Bool */;
val* var300 /* : nullable Bool */;
val* var301 /* : String */;
val* var302 /* : String */;
val* var303 /* : HashMap[Token, Set[Item]] */;
val* var304 /* : nullable Object */;
val* var_305 /* var : Set[Item] */;
val* var306 /* : Iterator[nullable Object] */;
val* var_307 /* var : Iterator[Item] */;
short int var308 /* : Bool */;
val* var310 /* : nullable Object */;
val* var_i311 /* var i: Item */;
val* var312 /* : Sys */;
val* var314 /* : NativeArray[String] */;
static val* varonce313;
static val* varonce315;
val* var316 /* : String */;
char* var317 /* : CString */;
val* var318 /* : String */;
val* var319 /* : nullable Int */;
val* var320 /* : nullable Int */;
val* var321 /* : nullable Bool */;
val* var322 /* : nullable Bool */;
val* var323 /* : String */;
val* var324 /* : String */;
val* var325 /* : ArraySet[Item] */;
val* var326 /* : ArraySet[Item] */;
val* var327 /* : HashMap[Token, Set[Item]] */;
val* var328 /* : nullable Object */;
val* var_329 /* var : Array[Token] */;
val* var330 /* : Iterator[nullable Object] */;
val* var_331 /* var : IndexedIterator[Token] */;
short int var332 /* : Bool */;
val* var334 /* : nullable Object */;
val* var_t335 /* var t: Token */;
val* var336 /* : HashMap[Token, Set[Item]] */;
val* var337 /* : Collection[nullable Object] */;
val* var338 /* : ArraySet[LRState] */;
{
var = ((val*(*)(val* self))(self->class->vft[COLOR_nitcc__grammar__LRState__items]))(self); /* items on <self:LRState>*/
}
{
var1 = ((val*(*)(val* self))(var->class->vft[COLOR_core__array__Collection__to_a]))(var); /* to_a on <var:HashSet[Item]>*/
}
var_ = var1;
{
var2 = ((val*(*)(val* self))(var_->class->vft[COLOR_core__abstract_collection__Collection__iterator]))(var_); /* iterator on <var_:Array[Item]>*/
}
var_3 = var2;
for(;;) {
{
var4 = ((short int(*)(val* self))((((long)var_3&3)?class_info[((long)var_3&3)]:var_3->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_3); /* is_ok on <var_3:IndexedIterator[Item]>*/
}
if (var4){
} else {
goto BREAK_label;
}
{
var5 = ((val*(*)(val* self))((((long)var_3&3)?class_info[((long)var_3&3)]:var_3->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_3); /* item on <var_3:IndexedIterator[Item]>*/
}
var_i = var5;
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_nitcc__grammar__LRState__extends]))(self, var_i); /* extends on <self:LRState>*/
}
{
((void(*)(val* self))((((long)var_3&3)?class_info[((long)var_3&3)]:var_3->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_3); /* next on <var_3:IndexedIterator[Item]>*/
}
}
BREAK_label: (void)0;
{
((void(*)(val* self))((((long)var_3&3)?class_info[((long)var_3&3)]:var_3->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_3); /* finish on <var_3:IndexedIterator[Item]>*/
}
{
var6 = ((val*(*)(val* self))(self->class->vft[COLOR_nitcc__grammar__LRState__items]))(self); /* items on <self:LRState>*/
}
var_7 = var6;
{
var8 = ((val*(*)(val* self))(var_7->class->vft[COLOR_core__abstract_collection__Collection__iterator]))(var_7); /* iterator on <var_7:HashSet[Item]>*/
}
var_9 = var8;
for(;;) {
{
var10 = ((short int(*)(val* self))((((long)var_9&3)?class_info[((long)var_9&3)]:var_9->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_9); /* is_ok on <var_9:Iterator[Item]>*/
}
if (var10){
} else {
goto BREAK_label11;
}
{
var12 = ((val*(*)(val* self))((((long)var_9&3)?class_info[((long)var_9&3)]:var_9->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_9); /* item on <var_9:Iterator[Item]>*/
}
var_i13 = var12;
{
var14 = ((val*(*)(val* self))(var_i13->class->vft[COLOR_nitcc__grammar__Item__next]))(var_i13); /* next on <var_i13:Item>*/
}
var_n = var14;
if (var_n == NULL) {
var15 = 1; /* is null */
} else {
var15 = 0; /* arg is null but recv is not */
}
if (0) {
var16 = ((short int(*)(val* self, val* p0))(var_n->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_n, ((val*)NULL)); /* == on <var_n:nullable Element>*/
var15 = var16;
}
if (var15){
{
var17 = ((val*(*)(val* self))(self->class->vft[COLOR_nitcc__grammar__LRState__reduces]))(self); /* reduces on <self:LRState>*/
}
{
var18 = ((val*(*)(val* self))(var_i13->class->vft[COLOR_nitcc__grammar__Item__alt]))(var_i13); /* alt on <var_i13:Item>*/
}
{
((void(*)(val* self, val* p0))(var17->class->vft[COLOR_core__abstract_collection__SimpleCollection__add]))(var17, var18); /* add on <var17:ArraySet[Alternative]>*/
}
{
var19 = ((val*(*)(val* self, val* p0))(self->class->vft[COLOR_nitcc__grammar__LRState__lookahead]))(self, var_i13); /* lookahead on <self:LRState>*/
}
var_20 = var19;
{
var21 = ((val*(*)(val* self))((((long)var_20&3)?class_info[((long)var_20&3)]:var_20->class)->vft[COLOR_core__abstract_collection__Collection__iterator]))(var_20); /* iterator on <var_20:Set[Item]>*/
}
var_22 = var21;
for(;;) {
{
var23 = ((short int(*)(val* self))((((long)var_22&3)?class_info[((long)var_22&3)]:var_22->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_22); /* is_ok on <var_22:Iterator[Item]>*/
}
if (var23){
} else {
goto BREAK_label24;
}
{
var25 = ((val*(*)(val* self))((((long)var_22&3)?class_info[((long)var_22&3)]:var_22->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_22); /* item on <var_22:Iterator[Item]>*/
}
var_i2 = var25;
{
var26 = ((val*(*)(val* self))(var_i2->class->vft[COLOR_nitcc__grammar__Item__next]))(var_i2); /* next on <var_i2:Item>*/
}
var_t = var26;
/* <var_t:nullable Element> isa Token */
cltype = type_nitcc__Token.color;
idtype = type_nitcc__Token.id;
if(var_t == NULL) {
var27 = 0;
} else {
if(cltype >= var_t->type->table_size) {
var27 = 0;
} else {
var27 = var_t->type->type_table[cltype] == idtype;
}
}
if (unlikely(!var27)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Assert failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitcc__grammar, 985);
fatal_exit(1);
}
{
var28 = ((val*(*)(val* self))(var_t->class->vft[COLOR_nitcc__grammar__Token__reduces]))(var_t); /* reduces on <var_t:nullable Element(Token)>*/
}
{
((void(*)(val* self, val* p0))(var28->class->vft[COLOR_core__abstract_collection__SimpleCollection__add]))(var28, self); /* add on <var28:ArraySet[LRState]>*/
}
{
var29 = ((val*(*)(val* self))(self->class->vft[COLOR_nitcc__grammar__LRState__guarded_reduce]))(self); /* guarded_reduce on <self:LRState>*/
}
{
var30 = ((short int(*)(val* self, val* p0))(var29->class->vft[COLOR_core__abstract_collection__MapRead__has_key]))(var29, var_t); /* has_key on <var29:HashMap[Token, Set[Item]]>*/
}
var31 = !var30;
if (var31){
{
var32 = ((val*(*)(val* self))(self->class->vft[COLOR_nitcc__grammar__LRState__guarded_reduce]))(self); /* guarded_reduce on <self:LRState>*/
}
var33 = NEW_core__ArraySet(&type_core__ArraySet__nitcc__Item);
{
((void(*)(val* self))(var33->class->vft[COLOR_core__kernel__Object__init]))(var33); /* init on <var33:ArraySet[Item]>*/
}
{
((void(*)(val* self, val* p0, val* p1))(var32->class->vft[COLOR_core__abstract_collection__Map___91d_93d_61d]))(var32, var_t, var33); /* []= on <var32:HashMap[Token, Set[Item]]>*/
}
} else {
}
{
var34 = ((val*(*)(val* self))(self->class->vft[COLOR_nitcc__grammar__LRState__guarded_reduce]))(self); /* guarded_reduce on <self:LRState>*/
}
{
var35 = ((val*(*)(val* self, val* p0))(var34->class->vft[COLOR_core__abstract_collection__MapRead___91d_93d]))(var34, var_t); /* [] on <var34:HashMap[Token, Set[Item]]>*/
}
{
((void(*)(val* self, val* p0))((((long)var35&3)?class_info[((long)var35&3)]:var35->class)->vft[COLOR_core__abstract_collection__SimpleCollection__add]))(var35, var_i13); /* add on <var35:nullable Object(Set[Item])>*/
}
{
((void(*)(val* self))((((long)var_22&3)?class_info[((long)var_22&3)]:var_22->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_22); /* next on <var_22:Iterator[Item]>*/
}
}
BREAK_label24: (void)0;
{
((void(*)(val* self))((((long)var_22&3)?class_info[((long)var_22&3)]:var_22->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_22); /* finish on <var_22:Iterator[Item]>*/
}
} else {
/* <var_n:nullable Element(Element)> isa Token */
cltype37 = type_nitcc__Token.color;
idtype38 = type_nitcc__Token.id;
if(cltype37 >= var_n->type->table_size) {
var36 = 0;
} else {
var36 = var_n->type->type_table[cltype37] == idtype38;
}
if (var36){
{
var39 = ((val*(*)(val* self))(self->class->vft[COLOR_nitcc__grammar__LRState__shifts]))(self); /* shifts on <self:LRState>*/
}
{
((void(*)(val* self, val* p0))(var39->class->vft[COLOR_core__abstract_collection__SimpleCollection__add]))(var39, var_n); /* add on <var39:ArraySet[Token]>*/
}
{
var40 = ((val*(*)(val* self))(var_n->class->vft[COLOR_nitcc__grammar__Token__shifts]))(var_n); /* shifts on <var_n:nullable Element(Token)>*/
}
{
((void(*)(val* self, val* p0))(var40->class->vft[COLOR_core__abstract_collection__SimpleCollection__add]))(var40, self); /* add on <var40:ArraySet[LRState]>*/
}
{
var41 = ((val*(*)(val* self))(self->class->vft[COLOR_nitcc__grammar__LRState__guarded_shift]))(self); /* guarded_shift on <self:LRState>*/
}
{
var42 = ((short int(*)(val* self, val* p0))(var41->class->vft[COLOR_core__abstract_collection__MapRead__has_key]))(var41, var_n); /* has_key on <var41:HashMap[Token, Set[Item]]>*/
}
var43 = !var42;
if (var43){
{
var44 = ((val*(*)(val* self))(self->class->vft[COLOR_nitcc__grammar__LRState__guarded_shift]))(self); /* guarded_shift on <self:LRState>*/
}
var45 = NEW_core__ArraySet(&type_core__ArraySet__nitcc__Item);
{
((void(*)(val* self))(var45->class->vft[COLOR_core__kernel__Object__init]))(var45); /* init on <var45:ArraySet[Item]>*/
}
{
((void(*)(val* self, val* p0, val* p1))(var44->class->vft[COLOR_core__abstract_collection__Map___91d_93d_61d]))(var44, var_n, var45); /* []= on <var44:HashMap[Token, Set[Item]]>*/
}
} else {
}
{
var46 = ((val*(*)(val* self))(self->class->vft[COLOR_nitcc__grammar__LRState__guarded_shift]))(self); /* guarded_shift on <self:LRState>*/
}
{
var47 = ((val*(*)(val* self, val* p0))(var46->class->vft[COLOR_core__abstract_collection__MapRead___91d_93d]))(var46, var_n); /* [] on <var46:HashMap[Token, Set[Item]]>*/
}
{
((void(*)(val* self, val* p0))((((long)var47&3)?class_info[((long)var47&3)]:var47->class)->vft[COLOR_core__abstract_collection__SimpleCollection__add]))(var47, var_i13); /* add on <var47:nullable Object(Set[Item])>*/
}
} else {
/* <var_n:nullable Element(Element)> isa Production */
cltype49 = type_nitcc__Production.color;
idtype50 = type_nitcc__Production.id;
if(cltype49 >= var_n->type->table_size) {
var48 = 0;
} else {
var48 = var_n->type->type_table[cltype49] == idtype50;
}
if (var48){
{
var51 = ((val*(*)(val* self))(self->class->vft[COLOR_nitcc__grammar__LRState__gotos]))(self); /* gotos on <self:LRState>*/
}
{
((void(*)(val* self, val* p0))(var51->class->vft[COLOR_core__abstract_collection__SimpleCollection__add]))(var51, var_n); /* add on <var51:ArraySet[Production]>*/
}
{
var52 = ((val*(*)(val* self))(var_n->class->vft[COLOR_nitcc__grammar__Production__gotos]))(var_n); /* gotos on <var_n:nullable Element(Production)>*/
}
{
((void(*)(val* self, val* p0))(var52->class->vft[COLOR_core__abstract_collection__SimpleCollection__add]))(var52, self); /* add on <var52:ArraySet[LRState]>*/
}
} else {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Aborted");
PRINT_ERROR(" (%s:%d)\n", FILE_nitcc__grammar, 1003);
fatal_exit(1);
}
}
}
{
((void(*)(val* self))((((long)var_9&3)?class_info[((long)var_9&3)]:var_9->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_9); /* next on <var_9:Iterator[Item]>*/
}
}
BREAK_label11: (void)0;
{
((void(*)(val* self))((((long)var_9&3)?class_info[((long)var_9&3)]:var_9->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_9); /* finish on <var_9:Iterator[Item]>*/
}
var53 = NEW_core__Array(&type_core__Array__nitcc__Token);
{
((void(*)(val* self))(var53->class->vft[COLOR_core__kernel__Object__init]))(var53); /* init on <var53:Array[Token]>*/
}
var_removed_reduces = var53;
{
var54 = ((val*(*)(val* self))(self->class->vft[COLOR_nitcc__grammar__LRState__guarded_reduce]))(self); /* guarded_reduce on <self:LRState>*/
}
var_55 = var54;
{
var56 = ((val*(*)(val* self))(var_55->class->vft[COLOR_core__abstract_collection__MapRead__iterator]))(var_55); /* iterator on <var_55:HashMap[Token, Set[Item]]>*/
}
var_57 = var56;
for(;;) {
{
var58 = ((short int(*)(val* self))((((long)var_57&3)?class_info[((long)var_57&3)]:var_57->class)->vft[COLOR_core__abstract_collection__MapIterator__is_ok]))(var_57); /* is_ok on <var_57:MapIterator[Token, Set[Item]]>*/
}
if (var58){
} else {
goto BREAK_label59;
}
{
var60 = ((val*(*)(val* self))((((long)var_57&3)?class_info[((long)var_57&3)]:var_57->class)->vft[COLOR_core__abstract_collection__MapIterator__key]))(var_57); /* key on <var_57:MapIterator[Token, Set[Item]]>*/
}
var_t61 = var60;
{
var62 = ((val*(*)(val* self))((((long)var_57&3)?class_info[((long)var_57&3)]:var_57->class)->vft[COLOR_core__abstract_collection__MapIterator__item]))(var_57); /* item on <var_57:MapIterator[Token, Set[Item]]>*/
}
var_a = var62;
{
var63 = ((long(*)(val* self))((((long)var_a&3)?class_info[((long)var_a&3)]:var_a->class)->vft[COLOR_core__abstract_collection__Collection__length]))(var_a); /* length on <var_a:Set[Item]>*/
}
{
{ /* Inline kernel$Int$> (var63,1l) on <var63:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var66 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var66)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 727);
fatal_exit(1);
}
var69 = var63 > 1l;
var64 = var69;
goto RET_LABEL65;
RET_LABEL65:(void)0;
}
}
if (var64){
var70 = glob_sys;
if (unlikely(varonce==NULL)) {
var71 = NEW_core__NativeArray((int)7l, &type_core__NativeArray__core__String);
if (likely(varonce72!=NULL)) {
var73 = varonce72;
} else {
var74 = "REDUCE/REDUCE Conflict on state ";
var76 = (val*)(32l<<2|1);
var77 = (val*)(32l<<2|1);
var78 = (val*)((long)(0)<<2|3);
var79 = (val*)((long)(0)<<2|3);
var75 = core__flat___CString___to_s_unsafe(var74, var76, var77, var78, var79);
var73 = var75;
varonce72 = var73;
}
((struct instance_core__NativeArray*)var71)->values[0]=var73;
if (likely(varonce80!=NULL)) {
var81 = varonce80;
} else {
var82 = " ";
var84 = (val*)(1l<<2|1);
var85 = (val*)(1l<<2|1);
var86 = (val*)((long)(0)<<2|3);
var87 = (val*)((long)(0)<<2|3);
var83 = core__flat___CString___to_s_unsafe(var82, var84, var85, var86, var87);
var81 = var83;
varonce80 = var81;
}
((struct instance_core__NativeArray*)var71)->values[2]=var81;
if (likely(varonce88!=NULL)) {
var89 = varonce88;
} else {
var90 = " for token ";
var92 = (val*)(11l<<2|1);
var93 = (val*)(11l<<2|1);
var94 = (val*)((long)(0)<<2|3);
var95 = (val*)((long)(0)<<2|3);
var91 = core__flat___CString___to_s_unsafe(var90, var92, var93, var94, var95);
var89 = var91;
varonce88 = var89;
}
((struct instance_core__NativeArray*)var71)->values[4]=var89;
if (likely(varonce96!=NULL)) {
var97 = varonce96;
} else {
var98 = ":";
var100 = (val*)(1l<<2|1);
var101 = (val*)(1l<<2|1);
var102 = (val*)((long)(0)<<2|3);
var103 = (val*)((long)(0)<<2|3);
var99 = core__flat___CString___to_s_unsafe(var98, var100, var101, var102, var103);
var97 = var99;
varonce96 = var97;
}
((struct instance_core__NativeArray*)var71)->values[6]=var97;
} else {
var71 = varonce;
varonce = NULL;
}
{
var104 = ((long(*)(val* self))(self->class->vft[COLOR_nitcc__grammar__LRState__number]))(self); /* number on <self:LRState>*/
}
var105 = core__flat___Int___core__abstract_text__Object__to_s(var104);
((struct instance_core__NativeArray*)var71)->values[1]=var105;
{
var106 = ((val*(*)(val* self))(self->class->vft[COLOR_nitcc__grammar__LRState__name]))(self); /* name on <self:LRState>*/
}
((struct instance_core__NativeArray*)var71)->values[3]=var106;
{
var107 = ((val*(*)(val* self))(var_t61->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_t61); /* to_s on <var_t61:Token>*/
}
((struct instance_core__NativeArray*)var71)->values[5]=var107;
{
var108 = ((val*(*)(val* self))(var71->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var71); /* native_to_s on <var71:NativeArray[String]>*/
}
varonce = var71;
{
((void(*)(val* self, val* p0))(var70->class->vft[COLOR_core__file__Sys__print]))(var70, var108); /* print on <var70:Sys>*/
}
var_109 = var_a;
{
var110 = ((val*(*)(val* self))((((long)var_109&3)?class_info[((long)var_109&3)]:var_109->class)->vft[COLOR_core__abstract_collection__Collection__iterator]))(var_109); /* iterator on <var_109:Set[Item]>*/
}
var_111 = var110;
for(;;) {
{
var112 = ((short int(*)(val* self))((((long)var_111&3)?class_info[((long)var_111&3)]:var_111->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_111); /* is_ok on <var_111:Iterator[Item]>*/
}
if (var112){
} else {
goto BREAK_label113;
}
{
var114 = ((val*(*)(val* self))((((long)var_111&3)?class_info[((long)var_111&3)]:var_111->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_111); /* item on <var_111:Iterator[Item]>*/
}
var_i115 = var114;
var116 = glob_sys;
if (unlikely(varonce117==NULL)) {
var118 = NEW_core__NativeArray((int)2l, &type_core__NativeArray__core__String);
if (likely(varonce119!=NULL)) {
var120 = varonce119;
} else {
var121 = "\treduce: ";
var123 = (val*)(9l<<2|1);
var124 = (val*)(9l<<2|1);
var125 = (val*)((long)(0)<<2|3);
var126 = (val*)((long)(0)<<2|3);
var122 = core__flat___CString___to_s_unsafe(var121, var123, var124, var125, var126);
var120 = var122;
varonce119 = var120;
}
((struct instance_core__NativeArray*)var118)->values[0]=var120;
} else {
var118 = varonce117;
varonce117 = NULL;
}
{
var127 = ((val*(*)(val* self))(var_i115->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_i115); /* to_s on <var_i115:Item>*/
}
((struct instance_core__NativeArray*)var118)->values[1]=var127;
{
var128 = ((val*(*)(val* self))(var118->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var118); /* native_to_s on <var118:NativeArray[String]>*/
}
varonce117 = var118;
{
((void(*)(val* self, val* p0))(var116->class->vft[COLOR_core__file__Sys__print]))(var116, var128); /* print on <var116:Sys>*/
}
{
((void(*)(val* self))((((long)var_111&3)?class_info[((long)var_111&3)]:var_111->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_111); /* next on <var_111:Iterator[Item]>*/
}
}
BREAK_label113: (void)0;
{
((void(*)(val* self))((((long)var_111&3)?class_info[((long)var_111&3)]:var_111->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_111); /* finish on <var_111:Iterator[Item]>*/
}
{
var129 = ((val*(*)(val* self))(self->class->vft[COLOR_nitcc__grammar__LRState__conflicting_items]))(self); /* conflicting_items on <self:LRState>*/
}
{
((void(*)(val* self, val* p0))(var129->class->vft[COLOR_core__abstract_collection__SimpleCollection__add_all]))(var129, var_a); /* add_all on <var129:ArraySet[Item]>*/
}
} else {
}
{
var130 = ((val*(*)(val* self))(self->class->vft[COLOR_nitcc__grammar__LRState__guarded_shift]))(self); /* guarded_shift on <self:LRState>*/
}
{
var131 = ((short int(*)(val* self, val* p0))(var130->class->vft[COLOR_core__abstract_collection__MapRead__has_key]))(var130, var_t61); /* has_key on <var130:HashMap[Token, Set[Item]]>*/
}
if (var131){
{
var132 = ((val*(*)(val* self))((((long)var_a&3)?class_info[((long)var_a&3)]:var_a->class)->vft[COLOR_core__abstract_collection__Collection__first]))(var_a); /* first on <var_a:Set[Item]>*/
}
var_ri = var132;
var133 = NEW_core__Array(&type_core__Array__nitcc__Item);
{
((void(*)(val* self))(var133->class->vft[COLOR_core__kernel__Object__init]))(var133); /* init on <var133:Array[Item]>*/
}
var_confs = var133;
var134 = NEW_core__Array(&type_core__Array__core__String);
{
((void(*)(val* self))(var134->class->vft[COLOR_core__kernel__Object__init]))(var134); /* init on <var134:Array[String]>*/
}
var_ress = var134;
{
var135 = ((val*(*)(val* self))(self->class->vft[COLOR_nitcc__grammar__LRState__guarded_shift]))(self); /* guarded_shift on <self:LRState>*/
}
{
var136 = ((val*(*)(val* self, val* p0))(var135->class->vft[COLOR_core__abstract_collection__MapRead___91d_93d]))(var135, var_t61); /* [] on <var135:HashMap[Token, Set[Item]]>*/
}
var_g = var136;
{
var137 = ((val*(*)(val* self, val* p0))(self->class->vft[COLOR_nitcc__grammar__LRState__lookahead]))(self, var_ri); /* lookahead on <self:LRState>*/
}
var_138 = var137;
{
var139 = ((val*(*)(val* self))((((long)var_138&3)?class_info[((long)var_138&3)]:var_138->class)->vft[COLOR_core__abstract_collection__Collection__iterator]))(var_138); /* iterator on <var_138:Set[Item]>*/
}
var_140 = var139;
for(;;) {
{
var141 = ((short int(*)(val* self))((((long)var_140&3)?class_info[((long)var_140&3)]:var_140->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_140); /* is_ok on <var_140:Iterator[Item]>*/
}
if (var141){
} else {
goto BREAK_label142;
}
{
var143 = ((val*(*)(val* self))((((long)var_140&3)?class_info[((long)var_140&3)]:var_140->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_140); /* item on <var_140:Iterator[Item]>*/
}
var_si = var143;
{
var144 = ((val*(*)(val* self))(var_si->class->vft[COLOR_nitcc__grammar__Item__next]))(var_si); /* next on <var_si:Item>*/
}
if (var144 == NULL) {
var145 = 1; /* <var_t61:Token> cannot be null */
} else {
var146 = ((short int(*)(val* self, val* p0))(var144->class->vft[COLOR_core__kernel__Object___33d_61d]))(var144, var_t61); /* != on <var144:nullable Element>*/
var145 = var146;
}
if (var145){
goto BREAK_label147;
} else {
}
{
var148 = ((short int(*)(val* self, val* p0))((((long)var_g&3)?class_info[((long)var_g&3)]:var_g->class)->vft[COLOR_core__abstract_collection__Collection__has]))(var_g, var_si); /* has on <var_g:Set[Item]>*/
}
var149 = !var148;
if (var149){
{
((void(*)(val* self, val* p0))(var_confs->class->vft[COLOR_core__abstract_collection__SimpleCollection__add]))(var_confs, var_si); /* add on <var_confs:Array[Item]>*/
}
goto BREAK_label147;
} else {
}
{
var150 = ((val*(*)(val* self))(var_ri->class->vft[COLOR_nitcc__grammar__Item__alt]))(var_ri); /* alt on <var_ri:Item>*/
}
{
var151 = ((val*(*)(val* self))(var150->class->vft[COLOR_nitcc__grammar__Alternative__prod]))(var150); /* prod on <var150:Alternative>*/
}
var_p = var151;
var_csi = ((val*)NULL);
{
var152 = ((val*(*)(val* self, val* p0))(self->class->vft[COLOR_nitcc__grammar__LRState__back_expand]))(self, var_si); /* back_expand on <self:LRState>*/
}
var_153 = var152;
{
var154 = ((val*(*)(val* self))((((long)var_153&3)?class_info[((long)var_153&3)]:var_153->class)->vft[COLOR_core__abstract_collection__Collection__iterator]))(var_153); /* iterator on <var_153:Set[Item]>*/
}
var_155 = var154;
for(;;) {
{
var156 = ((short int(*)(val* self))((((long)var_155&3)?class_info[((long)var_155&3)]:var_155->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_155); /* is_ok on <var_155:Iterator[Item]>*/
}
if (var156){
} else {
goto BREAK_label157;
}
{
var158 = ((val*(*)(val* self))((((long)var_155&3)?class_info[((long)var_155&3)]:var_155->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_155); /* item on <var_155:Iterator[Item]>*/
}
var_bsi = var158;
{
var159 = ((val*(*)(val* self))(var_bsi->class->vft[COLOR_nitcc__grammar__Item__alt]))(var_bsi); /* alt on <var_bsi:Item>*/
}
{
var160 = ((val*(*)(val* self))(var159->class->vft[COLOR_nitcc__grammar__Alternative__prod]))(var159); /* prod on <var159:Alternative>*/
}
{
var161 = ((short int(*)(val* self, val* p0))(var160->class->vft[COLOR_core__kernel__Object___61d_61d]))(var160, var_p); /* == on <var160:Production>*/
}
if (var161){
var_csi = var_bsi;
goto BREAK_label157;
} else {
}
{
((void(*)(val* self))((((long)var_155&3)?class_info[((long)var_155&3)]:var_155->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_155); /* next on <var_155:Iterator[Item]>*/
}
}
BREAK_label157: (void)0;
{
((void(*)(val* self))((((long)var_155&3)?class_info[((long)var_155&3)]:var_155->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_155); /* finish on <var_155:Iterator[Item]>*/
}
if (var_csi == NULL) {
var162 = 1; /* is null */
} else {
var162 = 0; /* arg is null but recv is not */
}
if (0) {
var163 = ((short int(*)(val* self, val* p0))(var_csi->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_csi, ((val*)NULL)); /* == on <var_csi:nullable Item>*/
var162 = var163;
}
if (var162){
{
((void(*)(val* self, val* p0))(var_confs->class->vft[COLOR_core__abstract_collection__SimpleCollection__add]))(var_confs, var_si); /* add on <var_confs:Array[Item]>*/
}
goto BREAK_label147;
} else {
}
if (unlikely(varonce164==NULL)) {
var165 = NEW_core__NativeArray((int)2l, &type_core__NativeArray__core__String);
if (likely(varonce166!=NULL)) {
var167 = varonce166;
} else {
var168 = "\tshift:  ";
var170 = (val*)(9l<<2|1);
var171 = (val*)(9l<<2|1);
var172 = (val*)((long)(0)<<2|3);
var173 = (val*)((long)(0)<<2|3);
var169 = core__flat___CString___to_s_unsafe(var168, var170, var171, var172, var173);
var167 = var169;
varonce166 = var167;
}
((struct instance_core__NativeArray*)var165)->values[0]=var167;
} else {
var165 = varonce164;
varonce164 = NULL;
}
{
var174 = ((val*(*)(val* self))(var_si->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_si); /* to_s on <var_si:Item>*/
}
((struct instance_core__NativeArray*)var165)->values[1]=var174;
{
var175 = ((val*(*)(val* self))(var165->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var165); /* native_to_s on <var165:NativeArray[String]>*/
}
varonce164 = var165;
{
((void(*)(val* self, val* p0))(var_ress->class->vft[COLOR_core__abstract_collection__SimpleCollection__add]))(var_ress, var175); /* add on <var_ress:Array[String]>*/
}
{
var176 = ((short int(*)(val* self, val* p0))(var_si->class->vft[COLOR_core__kernel__Object___33d_61d]))(var_si, var_csi); /* != on <var_si:Item>*/
}
if (var176){
if (unlikely(varonce177==NULL)) {
var178 = NEW_core__NativeArray((int)2l, &type_core__NativeArray__core__String);
if (likely(varonce179!=NULL)) {
var180 = varonce179;
} else {
var181 = "\tcore shift: ";
var183 = (val*)(13l<<2|1);
var184 = (val*)(13l<<2|1);
var185 = (val*)((long)(0)<<2|3);
var186 = (val*)((long)(0)<<2|3);
var182 = core__flat___CString___to_s_unsafe(var181, var183, var184, var185, var186);
var180 = var182;
varonce179 = var180;
}
((struct instance_core__NativeArray*)var178)->values[0]=var180;
} else {
var178 = varonce177;
varonce177 = NULL;
}
{
var187 = ((val*(*)(val* self))(var_csi->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_csi); /* to_s on <var_csi:nullable Item(Item)>*/
}
((struct instance_core__NativeArray*)var178)->values[1]=var187;
{
var188 = ((val*(*)(val* self))(var178->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var178); /* native_to_s on <var178:NativeArray[String]>*/
}
varonce177 = var178;
{
((void(*)(val* self, val* p0))(var_ress->class->vft[COLOR_core__abstract_collection__SimpleCollection__add]))(var_ress, var188); /* add on <var_ress:Array[String]>*/
}
} else {
}
BREAK_label147: (void)0;
{
((void(*)(val* self))((((long)var_140&3)?class_info[((long)var_140&3)]:var_140->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_140); /* next on <var_140:Iterator[Item]>*/
}
}
BREAK_label142: (void)0;
{
((void(*)(val* self))((((long)var_140&3)?class_info[((long)var_140&3)]:var_140->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_140); /* finish on <var_140:Iterator[Item]>*/
}
{
var189 = ((short int(*)(val* self))(var_confs->class->vft[COLOR_core__abstract_collection__Collection__is_empty]))(var_confs); /* is_empty on <var_confs:Array[Item]>*/
}
if (var189){
var190 = glob_sys;
if (unlikely(varonce191==NULL)) {
var192 = NEW_core__NativeArray((int)7l, &type_core__NativeArray__core__String);
if (likely(varonce193!=NULL)) {
var194 = varonce193;
} else {
var195 = "Automatic Dangling on state ";
var197 = (val*)(28l<<2|1);
var198 = (val*)(28l<<2|1);
var199 = (val*)((long)(0)<<2|3);
var200 = (val*)((long)(0)<<2|3);
var196 = core__flat___CString___to_s_unsafe(var195, var197, var198, var199, var200);
var194 = var196;
varonce193 = var194;
}
((struct instance_core__NativeArray*)var192)->values[0]=var194;
if (likely(varonce201!=NULL)) {
var202 = varonce201;
} else {
var203 = " ";
var205 = (val*)(1l<<2|1);
var206 = (val*)(1l<<2|1);
var207 = (val*)((long)(0)<<2|3);
var208 = (val*)((long)(0)<<2|3);
var204 = core__flat___CString___to_s_unsafe(var203, var205, var206, var207, var208);
var202 = var204;
varonce201 = var202;
}
((struct instance_core__NativeArray*)var192)->values[2]=var202;
if (likely(varonce209!=NULL)) {
var210 = varonce209;
} else {
var211 = " for token ";
var213 = (val*)(11l<<2|1);
var214 = (val*)(11l<<2|1);
var215 = (val*)((long)(0)<<2|3);
var216 = (val*)((long)(0)<<2|3);
var212 = core__flat___CString___to_s_unsafe(var211, var213, var214, var215, var216);
var210 = var212;
varonce209 = var210;
}
((struct instance_core__NativeArray*)var192)->values[4]=var210;
if (likely(varonce217!=NULL)) {
var218 = varonce217;
} else {
var219 = ":";
var221 = (val*)(1l<<2|1);
var222 = (val*)(1l<<2|1);
var223 = (val*)((long)(0)<<2|3);
var224 = (val*)((long)(0)<<2|3);
var220 = core__flat___CString___to_s_unsafe(var219, var221, var222, var223, var224);
var218 = var220;
varonce217 = var218;
}
((struct instance_core__NativeArray*)var192)->values[6]=var218;
} else {
var192 = varonce191;
varonce191 = NULL;
}
{
var225 = ((long(*)(val* self))(self->class->vft[COLOR_nitcc__grammar__LRState__number]))(self); /* number on <self:LRState>*/
}
var226 = core__flat___Int___core__abstract_text__Object__to_s(var225);
((struct instance_core__NativeArray*)var192)->values[1]=var226;
{
var227 = ((val*(*)(val* self))(self->class->vft[COLOR_nitcc__grammar__LRState__name]))(self); /* name on <self:LRState>*/
}
((struct instance_core__NativeArray*)var192)->values[3]=var227;
{
var228 = ((val*(*)(val* self))(var_t61->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_t61); /* to_s on <var_t61:Token>*/
}
((struct instance_core__NativeArray*)var192)->values[5]=var228;
{
var229 = ((val*(*)(val* self))(var192->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var192); /* native_to_s on <var192:NativeArray[String]>*/
}
varonce191 = var192;
{
((void(*)(val* self, val* p0))(var190->class->vft[COLOR_core__file__Sys__print]))(var190, var229); /* print on <var190:Sys>*/
}
var230 = glob_sys;
if (unlikely(varonce231==NULL)) {
var232 = NEW_core__NativeArray((int)2l, &type_core__NativeArray__core__String);
if (likely(varonce233!=NULL)) {
var234 = varonce233;
} else {
var235 = "\treduce: ";
var237 = (val*)(9l<<2|1);
var238 = (val*)(9l<<2|1);
var239 = (val*)((long)(0)<<2|3);
var240 = (val*)((long)(0)<<2|3);
var236 = core__flat___CString___to_s_unsafe(var235, var237, var238, var239, var240);
var234 = var236;
varonce233 = var234;
}
((struct instance_core__NativeArray*)var232)->values[0]=var234;
} else {
var232 = varonce231;
varonce231 = NULL;
}
{
var241 = ((val*(*)(val* self))(var_ri->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_ri); /* to_s on <var_ri:Item>*/
}
((struct instance_core__NativeArray*)var232)->values[1]=var241;
{
var242 = ((val*(*)(val* self))(var232->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var232); /* native_to_s on <var232:NativeArray[String]>*/
}
varonce231 = var232;
{
((void(*)(val* self, val* p0))(var230->class->vft[COLOR_core__file__Sys__print]))(var230, var242); /* print on <var230:Sys>*/
}
var_243 = var_ress;
{
var244 = ((val*(*)(val* self))(var_243->class->vft[COLOR_core__abstract_collection__Collection__iterator]))(var_243); /* iterator on <var_243:Array[String]>*/
}
var_245 = var244;
for(;;) {
{
var246 = ((short int(*)(val* self))((((long)var_245&3)?class_info[((long)var_245&3)]:var_245->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_245); /* is_ok on <var_245:IndexedIterator[String]>*/
}
if (var246){
} else {
goto BREAK_label247;
}
{
var248 = ((val*(*)(val* self))((((long)var_245&3)?class_info[((long)var_245&3)]:var_245->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_245); /* item on <var_245:IndexedIterator[String]>*/
}
var_r = var248;
var249 = glob_sys;
{
((void(*)(val* self, val* p0))(var249->class->vft[COLOR_core__file__Sys__print]))(var249, var_r); /* print on <var249:Sys>*/
}
{
((void(*)(val* self))((((long)var_245&3)?class_info[((long)var_245&3)]:var_245->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_245); /* next on <var_245:IndexedIterator[String]>*/
}
}
BREAK_label247: (void)0;
{
((void(*)(val* self))((((long)var_245&3)?class_info[((long)var_245&3)]:var_245->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_245); /* finish on <var_245:IndexedIterator[String]>*/
}
{
((void(*)(val* self, val* p0))(var_removed_reduces->class->vft[COLOR_core__abstract_collection__SimpleCollection__add]))(var_removed_reduces, var_t61); /* add on <var_removed_reduces:Array[Token]>*/
}
} else {
var250 = glob_sys;
if (unlikely(varonce251==NULL)) {
var252 = NEW_core__NativeArray((int)7l, &type_core__NativeArray__core__String);
if (likely(varonce253!=NULL)) {
var254 = varonce253;
} else {
var255 = "SHIFT/REDUCE Conflict on state ";
var257 = (val*)(31l<<2|1);
var258 = (val*)(31l<<2|1);
var259 = (val*)((long)(0)<<2|3);
var260 = (val*)((long)(0)<<2|3);
var256 = core__flat___CString___to_s_unsafe(var255, var257, var258, var259, var260);
var254 = var256;
varonce253 = var254;
}
((struct instance_core__NativeArray*)var252)->values[0]=var254;
if (likely(varonce261!=NULL)) {
var262 = varonce261;
} else {
var263 = " ";
var265 = (val*)(1l<<2|1);
var266 = (val*)(1l<<2|1);
var267 = (val*)((long)(0)<<2|3);
var268 = (val*)((long)(0)<<2|3);
var264 = core__flat___CString___to_s_unsafe(var263, var265, var266, var267, var268);
var262 = var264;
varonce261 = var262;
}
((struct instance_core__NativeArray*)var252)->values[2]=var262;
if (likely(varonce269!=NULL)) {
var270 = varonce269;
} else {
var271 = " for token ";
var273 = (val*)(11l<<2|1);
var274 = (val*)(11l<<2|1);
var275 = (val*)((long)(0)<<2|3);
var276 = (val*)((long)(0)<<2|3);
var272 = core__flat___CString___to_s_unsafe(var271, var273, var274, var275, var276);
var270 = var272;
varonce269 = var270;
}
((struct instance_core__NativeArray*)var252)->values[4]=var270;
if (likely(varonce277!=NULL)) {
var278 = varonce277;
} else {
var279 = ":";
var281 = (val*)(1l<<2|1);
var282 = (val*)(1l<<2|1);
var283 = (val*)((long)(0)<<2|3);
var284 = (val*)((long)(0)<<2|3);
var280 = core__flat___CString___to_s_unsafe(var279, var281, var282, var283, var284);
var278 = var280;
varonce277 = var278;
}
((struct instance_core__NativeArray*)var252)->values[6]=var278;
} else {
var252 = varonce251;
varonce251 = NULL;
}
{
var285 = ((long(*)(val* self))(self->class->vft[COLOR_nitcc__grammar__LRState__number]))(self); /* number on <self:LRState>*/
}
var286 = core__flat___Int___core__abstract_text__Object__to_s(var285);
((struct instance_core__NativeArray*)var252)->values[1]=var286;
{
var287 = ((val*(*)(val* self))(self->class->vft[COLOR_nitcc__grammar__LRState__name]))(self); /* name on <self:LRState>*/
}
((struct instance_core__NativeArray*)var252)->values[3]=var287;
{
var288 = ((val*(*)(val* self))(var_t61->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_t61); /* to_s on <var_t61:Token>*/
}
((struct instance_core__NativeArray*)var252)->values[5]=var288;
{
var289 = ((val*(*)(val* self))(var252->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var252); /* native_to_s on <var252:NativeArray[String]>*/
}
varonce251 = var252;
{
((void(*)(val* self, val* p0))(var250->class->vft[COLOR_core__file__Sys__print]))(var250, var289); /* print on <var250:Sys>*/
}
var290 = glob_sys;
if (unlikely(varonce291==NULL)) {
var292 = NEW_core__NativeArray((int)2l, &type_core__NativeArray__core__String);
if (likely(varonce293!=NULL)) {
var294 = varonce293;
} else {
var295 = "\treduce: ";
var297 = (val*)(9l<<2|1);
var298 = (val*)(9l<<2|1);
var299 = (val*)((long)(0)<<2|3);
var300 = (val*)((long)(0)<<2|3);
var296 = core__flat___CString___to_s_unsafe(var295, var297, var298, var299, var300);
var294 = var296;
varonce293 = var294;
}
((struct instance_core__NativeArray*)var292)->values[0]=var294;
} else {
var292 = varonce291;
varonce291 = NULL;
}
{
var301 = ((val*(*)(val* self))(var_ri->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_ri); /* to_s on <var_ri:Item>*/
}
((struct instance_core__NativeArray*)var292)->values[1]=var301;
{
var302 = ((val*(*)(val* self))(var292->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var292); /* native_to_s on <var292:NativeArray[String]>*/
}
varonce291 = var292;
{
((void(*)(val* self, val* p0))(var290->class->vft[COLOR_core__file__Sys__print]))(var290, var302); /* print on <var290:Sys>*/
}
{
var303 = ((val*(*)(val* self))(self->class->vft[COLOR_nitcc__grammar__LRState__guarded_shift]))(self); /* guarded_shift on <self:LRState>*/
}
{
var304 = ((val*(*)(val* self, val* p0))(var303->class->vft[COLOR_core__abstract_collection__MapRead___91d_93d]))(var303, var_t61); /* [] on <var303:HashMap[Token, Set[Item]]>*/
}
var_305 = var304;
{
var306 = ((val*(*)(val* self))((((long)var_305&3)?class_info[((long)var_305&3)]:var_305->class)->vft[COLOR_core__abstract_collection__Collection__iterator]))(var_305); /* iterator on <var_305:Set[Item]>*/
}
var_307 = var306;
for(;;) {
{
var308 = ((short int(*)(val* self))((((long)var_307&3)?class_info[((long)var_307&3)]:var_307->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_307); /* is_ok on <var_307:Iterator[Item]>*/
}
if (var308){
} else {
goto BREAK_label309;
}
{
var310 = ((val*(*)(val* self))((((long)var_307&3)?class_info[((long)var_307&3)]:var_307->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_307); /* item on <var_307:Iterator[Item]>*/
}
var_i311 = var310;
var312 = glob_sys;
if (unlikely(varonce313==NULL)) {
var314 = NEW_core__NativeArray((int)2l, &type_core__NativeArray__core__String);
if (likely(varonce315!=NULL)) {
var316 = varonce315;
} else {
var317 = "\tshift:  ";
var319 = (val*)(9l<<2|1);
var320 = (val*)(9l<<2|1);
var321 = (val*)((long)(0)<<2|3);
var322 = (val*)((long)(0)<<2|3);
var318 = core__flat___CString___to_s_unsafe(var317, var319, var320, var321, var322);
var316 = var318;
varonce315 = var316;
}
((struct instance_core__NativeArray*)var314)->values[0]=var316;
} else {
var314 = varonce313;
varonce313 = NULL;
}
{
var323 = ((val*(*)(val* self))(var_i311->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_i311); /* to_s on <var_i311:Item>*/
}
((struct instance_core__NativeArray*)var314)->values[1]=var323;
{
var324 = ((val*(*)(val* self))(var314->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var314); /* native_to_s on <var314:NativeArray[String]>*/
}
varonce313 = var314;
{
((void(*)(val* self, val* p0))(var312->class->vft[COLOR_core__file__Sys__print]))(var312, var324); /* print on <var312:Sys>*/
}
{
((void(*)(val* self))((((long)var_307&3)?class_info[((long)var_307&3)]:var_307->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_307); /* next on <var_307:Iterator[Item]>*/
}
}
BREAK_label309: (void)0;
{
((void(*)(val* self))((((long)var_307&3)?class_info[((long)var_307&3)]:var_307->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_307); /* finish on <var_307:Iterator[Item]>*/
}
{
((void(*)(val* self, val* p0))(var_removed_reduces->class->vft[COLOR_core__abstract_collection__SimpleCollection__add]))(var_removed_reduces, var_t61); /* add on <var_removed_reduces:Array[Token]>*/
}
{
var325 = ((val*(*)(val* self))(self->class->vft[COLOR_nitcc__grammar__LRState__conflicting_items]))(self); /* conflicting_items on <self:LRState>*/
}
{
((void(*)(val* self, val* p0))(var325->class->vft[COLOR_core__abstract_collection__SimpleCollection__add_all]))(var325, var_a); /* add_all on <var325:ArraySet[Item]>*/
}
{
var326 = ((val*(*)(val* self))(self->class->vft[COLOR_nitcc__grammar__LRState__conflicting_items]))(self); /* conflicting_items on <self:LRState>*/
}
{
var327 = ((val*(*)(val* self))(self->class->vft[COLOR_nitcc__grammar__LRState__guarded_shift]))(self); /* guarded_shift on <self:LRState>*/
}
{
var328 = ((val*(*)(val* self, val* p0))(var327->class->vft[COLOR_core__abstract_collection__MapRead___91d_93d]))(var327, var_t61); /* [] on <var327:HashMap[Token, Set[Item]]>*/
}
{
((void(*)(val* self, val* p0))(var326->class->vft[COLOR_core__abstract_collection__SimpleCollection__add_all]))(var326, var328); /* add_all on <var326:ArraySet[Item]>*/
}
}
} else {
}
{
((void(*)(val* self))((((long)var_57&3)?class_info[((long)var_57&3)]:var_57->class)->vft[COLOR_core__abstract_collection__MapIterator__next]))(var_57); /* next on <var_57:MapIterator[Token, Set[Item]]>*/
}
}
BREAK_label59: (void)0;
{
((void(*)(val* self))((((long)var_57&3)?class_info[((long)var_57&3)]:var_57->class)->vft[COLOR_core__abstract_collection__MapIterator__finish]))(var_57); /* finish on <var_57:MapIterator[Token, Set[Item]]>*/
}
var_329 = var_removed_reduces;
{
var330 = ((val*(*)(val* self))(var_329->class->vft[COLOR_core__abstract_collection__Collection__iterator]))(var_329); /* iterator on <var_329:Array[Token]>*/
}
var_331 = var330;
for(;;) {
{
var332 = ((short int(*)(val* self))((((long)var_331&3)?class_info[((long)var_331&3)]:var_331->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_331); /* is_ok on <var_331:IndexedIterator[Token]>*/
}
if (var332){
} else {
goto BREAK_label333;
}
{
var334 = ((val*(*)(val* self))((((long)var_331&3)?class_info[((long)var_331&3)]:var_331->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_331); /* item on <var_331:IndexedIterator[Token]>*/
}
var_t335 = var334;
{
var336 = ((val*(*)(val* self))(self->class->vft[COLOR_nitcc__grammar__LRState__guarded_reduce]))(self); /* guarded_reduce on <self:LRState>*/
}
{
var337 = ((val*(*)(val* self))(var336->class->vft[COLOR_core__abstract_collection__MapRead__keys]))(var336); /* keys on <var336:HashMap[Token, Set[Item]]>*/
}
{
((void(*)(val* self, val* p0))((((long)var337&3)?class_info[((long)var337&3)]:var337->class)->vft[COLOR_core__abstract_collection__RemovableCollection__remove]))(var337, var_t335); /* remove on <var337:Collection[nullable Object](RemovableCollection[Token])>*/
}
{
var338 = ((val*(*)(val* self))(var_t335->class->vft[COLOR_nitcc__grammar__Token__reduces]))(var_t335); /* reduces on <var_t335:Token>*/
}
{
((void(*)(val* self, val* p0))(var338->class->vft[COLOR_core__abstract_collection__RemovableCollection__remove]))(var338, self); /* remove on <var338:ArraySet[LRState]>*/
}
{
((void(*)(val* self))((((long)var_331&3)?class_info[((long)var_331&3)]:var_331->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_331); /* next on <var_331:IndexedIterator[Token]>*/
}
}
BREAK_label333: (void)0;
{
((void(*)(val* self))((((long)var_331&3)?class_info[((long)var_331&3)]:var_331->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_331); /* finish on <var_331:IndexedIterator[Token]>*/
}
RET_LABEL:;
}
/* method grammar$LRState$conflicting_items for (self: LRState): ArraySet[Item] */
val* nitcc___nitcc__LRState___conflicting_items(val* self) {
val* var /* : ArraySet[Item] */;
val* var1 /* : ArraySet[Item] */;
var1 = self->attrs[COLOR_nitcc__grammar__LRState___conflicting_items].val; /* _conflicting_items on <self:LRState> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _conflicting_items");
PRINT_ERROR(" (%s:%d)\n", FILE_nitcc__grammar, 1063);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method grammar$LRState$conflicting_items= for (self: LRState, ArraySet[Item]) */
void nitcc___nitcc__LRState___conflicting_items_61d(val* self, val* p0) {
self->attrs[COLOR_nitcc__grammar__LRState___conflicting_items].val = p0; /* _conflicting_items on <self:LRState> */
RET_LABEL:;
}
/* method grammar$LRState$back_expand for (self: LRState, Item): Set[Item] */
val* nitcc___nitcc__LRState___back_expand(val* self, val* p0) {
val* var /* : Set[Item] */;
val* var_i /* var i: Item */;
val* var1 /* : ArraySet[Item] */;
val* var_res /* var res: ArraySet[Item] */;
val* var2 /* : Array[Item] */;
val* var_ /* var : Array[Item] */;
val* var_todo /* var todo: Array[Item] */;
short int var3 /* : Bool */;
short int var4 /* : Bool */;
val* var5 /* : nullable Object */;
val* var_x /* var x: Item */;
long var6 /* : Int */;
short int var7 /* : Bool */;
short int var9 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var10 /* : Bool */;
val* var11 /* : Alternative */;
val* var12 /* : Production */;
val* var_p /* var p: Production */;
val* var13 /* : HashSet[Item] */;
val* var_14 /* var : HashSet[Item] */;
val* var15 /* : Iterator[nullable Object] */;
val* var_16 /* var : Iterator[Item] */;
short int var17 /* : Bool */;
val* var19 /* : nullable Object */;
val* var_y /* var y: Item */;
val* var20 /* : nullable Element */;
short int var21 /* : Bool */;
short int var22 /* : Bool */;
short int var24 /* : Bool */;
var_i = p0;
var1 = NEW_core__ArraySet(&type_core__ArraySet__nitcc__Item);
{
((void(*)(val* self))(var1->class->vft[COLOR_core__kernel__Object__init]))(var1); /* init on <var1:ArraySet[Item]>*/
}
var_res = var1;
var2 = NEW_core__Array(&type_core__Array__nitcc__Item);
{
((void(*)(val* self, long p0))(var2->class->vft[COLOR_core__array__Array__with_capacity]))(var2, 1l); /* with_capacity on <var2:Array[Item]>*/
}
var_ = var2;
{
((void(*)(val* self, val* p0))(var_->class->vft[COLOR_core__abstract_collection__Sequence__push]))(var_, var_i); /* push on <var_:Array[Item]>*/
}
var_todo = var_;
{
((void(*)(val* self, val* p0))(var_res->class->vft[COLOR_core__abstract_collection__SimpleCollection__add]))(var_res, var_i); /* add on <var_res:ArraySet[Item]>*/
}
for(;;) {
{
var3 = ((short int(*)(val* self))(var_todo->class->vft[COLOR_core__abstract_collection__Collection__is_empty]))(var_todo); /* is_empty on <var_todo:Array[Item]>*/
}
var4 = !var3;
if (var4){
{
var5 = ((val*(*)(val* self))(var_todo->class->vft[COLOR_core__abstract_collection__Sequence__pop]))(var_todo); /* pop on <var_todo:Array[Item]>*/
}
var_x = var5;
{
var6 = ((long(*)(val* self))(var_x->class->vft[COLOR_nitcc__grammar__Item__pos]))(var_x); /* pos on <var_x:Item>*/
}
{
{ /* Inline kernel$Int$> (var6,0l) on <var6:Int> */
/* Covariant cast for argument 0 (i) <0l:Int> isa OTHER */
/* <0l:Int> isa OTHER */
var9 = 1; /* easy <0l:Int> isa OTHER*/
if (unlikely(!var9)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 727);
fatal_exit(1);
}
var10 = var6 > 0l;
var7 = var10;
goto RET_LABEL8;
RET_LABEL8:(void)0;
}
}
if (var7){
goto BREAK_label;
} else {
}
{
var11 = ((val*(*)(val* self))(var_x->class->vft[COLOR_nitcc__grammar__Item__alt]))(var_x); /* alt on <var_x:Item>*/
}
{
var12 = ((val*(*)(val* self))(var11->class->vft[COLOR_nitcc__grammar__Alternative__prod]))(var11); /* prod on <var11:Alternative>*/
}
var_p = var12;
{
var13 = ((val*(*)(val* self))(self->class->vft[COLOR_nitcc__grammar__LRState__items]))(self); /* items on <self:LRState>*/
}
var_14 = var13;
{
var15 = ((val*(*)(val* self))(var_14->class->vft[COLOR_core__abstract_collection__Collection__iterator]))(var_14); /* iterator on <var_14:HashSet[Item]>*/
}
var_16 = var15;
for(;;) {
{
var17 = ((short int(*)(val* self))((((long)var_16&3)?class_info[((long)var_16&3)]:var_16->class)->vft[COLOR_core__abstract_collection__Iterator__is_ok]))(var_16); /* is_ok on <var_16:Iterator[Item]>*/
}
if (var17){
} else {
goto BREAK_label18;
}
{
var19 = ((val*(*)(val* self))((((long)var_16&3)?class_info[((long)var_16&3)]:var_16->class)->vft[COLOR_core__abstract_collection__Iterator__item]))(var_16); /* item on <var_16:Iterator[Item]>*/
}
var_y = var19;
{
var20 = ((val*(*)(val* self))(var_y->class->vft[COLOR_nitcc__grammar__Item__next]))(var_y); /* next on <var_y:Item>*/
}
if (var20 == NULL) {
var21 = 1; /* <var_p:Production> cannot be null */
} else {
var22 = ((short int(*)(val* self, val* p0))(var20->class->vft[COLOR_core__kernel__Object___33d_61d]))(var20, var_p); /* != on <var20:nullable Element>*/
var21 = var22;
}
if (var21){
goto BREAK_label23;
} else {
}
{
var24 = ((short int(*)(val* self, val* p0))(var_res->class->vft[COLOR_core__abstract_collection__Collection__has]))(var_res, var_y); /* has on <var_res:ArraySet[Item]>*/
}
if (var24){
goto BREAK_label23;
} else {
}
{
((void(*)(val* self, val* p0))(var_res->class->vft[COLOR_core__abstract_collection__SimpleCollection__add]))(var_res, var_y); /* add on <var_res:ArraySet[Item]>*/
}
{
((void(*)(val* self, val* p0))(var_todo->class->vft[COLOR_core__abstract_collection__SimpleCollection__add]))(var_todo, var_y); /* add on <var_todo:Array[Item]>*/
}
BREAK_label23: (void)0;
{
((void(*)(val* self))((((long)var_16&3)?class_info[((long)var_16&3)]:var_16->class)->vft[COLOR_core__abstract_collection__Iterator__next]))(var_16); /* next on <var_16:Iterator[Item]>*/
}
}
BREAK_label18: (void)0;
{
((void(*)(val* self))((((long)var_16&3)?class_info[((long)var_16&3)]:var_16->class)->vft[COLOR_core__abstract_collection__Iterator__finish]))(var_16); /* finish on <var_16:Iterator[Item]>*/
}
} else {
goto BREAK_label25;
}
BREAK_label: (void)0;
}
BREAK_label25: (void)0;
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method grammar$LRState$init for (self: LRState) */
void nitcc___nitcc__LRState___core__kernel__Object__init(val* self) {
{
((void(*)(val* self))(self->class->vft[COLOR_nitcc___nitcc__LRState___core__kernel__Object__init]))(self); /* init on <self:LRState>*/
}
RET_LABEL:;
}
/* method grammar$LRTransition$from for (self: LRTransition): LRState */
val* nitcc___nitcc__LRTransition___from(val* self) {
val* var /* : LRState */;
val* var1 /* : LRState */;
var1 = self->attrs[COLOR_nitcc__grammar__LRTransition___from].val; /* _from on <self:LRTransition> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _from");
PRINT_ERROR(" (%s:%d)\n", FILE_nitcc__grammar, 1091);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method grammar$LRTransition$from= for (self: LRTransition, LRState) */
void nitcc___nitcc__LRTransition___from_61d(val* self, val* p0) {
self->attrs[COLOR_nitcc__grammar__LRTransition___from].val = p0; /* _from on <self:LRTransition> */
RET_LABEL:;
}
/* method grammar$LRTransition$to for (self: LRTransition): LRState */
val* nitcc___nitcc__LRTransition___to(val* self) {
val* var /* : LRState */;
val* var1 /* : LRState */;
var1 = self->attrs[COLOR_nitcc__grammar__LRTransition___to].val; /* _to on <self:LRTransition> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _to");
PRINT_ERROR(" (%s:%d)\n", FILE_nitcc__grammar, 1093);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method grammar$LRTransition$to= for (self: LRTransition, LRState) */
void nitcc___nitcc__LRTransition___to_61d(val* self, val* p0) {
self->attrs[COLOR_nitcc__grammar__LRTransition___to].val = p0; /* _to on <self:LRTransition> */
RET_LABEL:;
}
/* method grammar$LRTransition$elem for (self: LRTransition): Element */
val* nitcc___nitcc__LRTransition___elem(val* self) {
val* var /* : Element */;
val* var1 /* : Element */;
var1 = self->attrs[COLOR_nitcc__grammar__LRTransition___elem].val; /* _elem on <self:LRTransition> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _elem");
PRINT_ERROR(" (%s:%d)\n", FILE_nitcc__grammar, 1095);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method grammar$LRTransition$elem= for (self: LRTransition, Element) */
void nitcc___nitcc__LRTransition___elem_61d(val* self, val* p0) {
self->attrs[COLOR_nitcc__grammar__LRTransition___elem].val = p0; /* _elem on <self:LRTransition> */
RET_LABEL:;
}
/* method grammar$LRTransition$init for (self: LRTransition) */
void nitcc___nitcc__LRTransition___core__kernel__Object__init(val* self) {
{
((void(*)(val* self))(self->class->vft[COLOR_nitcc___nitcc__LRTransition___core__kernel__Object__init]))(self); /* init on <self:LRTransition>*/
}
RET_LABEL:;
}
/* method grammar$Item$alt for (self: Item): Alternative */
val* nitcc___nitcc__Item___alt(val* self) {
val* var /* : Alternative */;
val* var1 /* : Alternative */;
var1 = self->attrs[COLOR_nitcc__grammar__Item___alt].val; /* _alt on <self:Item> */
if (unlikely(var1 == NULL)) {
if(catchStack.cursor >= 0){
longjmp(catchStack.envs[catchStack.cursor], 1);
}
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _alt");
PRINT_ERROR(" (%s:%d)\n", FILE_nitcc__grammar, 1101);
fatal_exit(1);
}
var = var1;
RET_LABEL:;
return var;
}
/* method grammar$Item$alt= for (self: Item, Alternative) */
void nitcc___nitcc__Item___alt_61d(val* self, val* p0) {
self->attrs[COLOR_nitcc__grammar__Item___alt].val = p0; /* _alt on <self:Item> */
RET_LABEL:;
}
/* method grammar$Item$pos for (self: Item): Int */
long nitcc___nitcc__Item___pos(val* self) {
long var /* : Int */;
long var1 /* : Int */;
var1 = self->attrs[COLOR_nitcc__grammar__Item___pos].l; /* _pos on <self:Item> */
var = var1;
RET_LABEL:;
return var;
}
/* method grammar$Item$pos= for (self: Item, Int) */
void nitcc___nitcc__Item___pos_61d(val* self, long p0) {
self->attrs[COLOR_nitcc__grammar__Item___pos].l = p0; /* _pos on <self:Item> */
RET_LABEL:;
}
/* method grammar$Item$== for (self: Item, nullable Object): Bool */
short int nitcc___nitcc__Item___core__kernel__Object___61d_61d(val* self, val* p0) {
short int var /* : Bool */;
val* var_o /* var o: nullable Object */;
short int var1 /* : Bool */;
short int var2 /* : Bool */;
short int var3 /* : Bool */;
int cltype;
int idtype;
short int var_ /* var : Bool */;
val* var4 /* : Alternative */;
val* var5 /* : Alternative */;
short int var6 /* : Bool */;
short int var_7 /* var : Bool */;
long var8 /* : Int */;
long var9 /* : Int */;
short int var10 /* : Bool */;
short int var12 /* : Bool */;
var_o = p0;
/* <var_o:nullable Object> isa Item */
cltype = type_nitcc__Item.color;
idtype = type_nitcc__Item.id;
if(var_o == NULL) {
var3 = 0;
} else {
if(cltype >= (((long)var_o&3)?type_info[((long)var_o&3)]:var_o->type)->table_size) {
var3 = 0;
} else {
var3 = (((long)var_o&3)?type_info[((long)var_o&3)]:var_o->type)->type_table[cltype] == idtype;
}
}
var_ = var3;
if (var3){
{
var4 = ((val*(*)(val* self))(self->class->vft[COLOR_nitcc__grammar__Item__alt]))(self); /* alt on <self:Item>*/
}
{
var5 = ((val*(*)(val* self))(var_o->class->vft[COLOR_nitcc__grammar__Item__alt]))(var_o); /* alt on <var_o:nullable Object(Item)>*/
}
{
var6 = ((short int(*)(val* self, val* p0))(var4->class->vft[COLOR_core__kernel__Object___61d_61d]))(var4, var5); /* == on <var4:Alternative>*/
}
var2 = var6;
} else {
var2 = var_;
}
var_7 = var2;
if (var2){
{
var8 = ((long(*)(val* self))(self->class->vft[COLOR_nitcc__grammar__Item__pos]))(self); /* pos on <self:Item>*/
}
{
var9 = ((long(*)(val* self))(var_o->class->vft[COLOR_nitcc__grammar__Item__pos]))(var_o); /* pos on <var_o:nullable Object(Item)>*/
}
{
{ /* Inline kernel$Int$== (var8,var9) on <var8:Int> */
var12 = var8 == var9;
var10 = var12;
goto RET_LABEL11;
RET_LABEL11:(void)0;
}
}
var1 = var10;
} else {
var1 = var_7;
}
var = var1;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method grammar$Item$hash for (self: Item): Int */
long nitcc___nitcc__Item___core__kernel__Object__hash(val* self) {
long var /* : Int */;
val* var1 /* : Alternative */;
long var2 /* : Int */;
long var3 /* : Int */;
long var4 /* : Int */;
short int var6 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var7 /* : Int */;
{
var1 = ((val*(*)(val* self))(self->class->vft[COLOR_nitcc__grammar__Item__alt]))(self); /* alt on <self:Item>*/
}
{
var2 = ((long(*)(val* self))(var1->class->vft[COLOR_core__kernel__Object__hash]))(var1); /* hash on <var1:Alternative>*/
}
{
var3 = ((long(*)(val* self))(self->class->vft[COLOR_nitcc__grammar__Item__pos]))(self); /* pos on <self:Item>*/
}
{
{ /* Inline kernel$Int$+ (var2,var3) on <var2:Int> */
/* Covariant cast for argument 0 (i) <var3:Int> isa OTHER */
/* <var3:Int> isa OTHER */
var6 = 1; /* easy <var3:Int> isa OTHER*/
if (unlikely(!var6)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var7 = var2 + var3;
var4 = var7;
goto RET_LABEL5;
RET_LABEL5:(void)0;
}
}
var = var4;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method grammar$Item$to_s for (self: Item): String */
val* nitcc___nitcc__Item___core__abstract_text__Object__to_s(val* self) {
val* var /* : String */;
val* var1 /* : FlatBuffer */;
val* var_b /* var b: FlatBuffer */;
val* var2 /* : NativeArray[String] */;
static val* varonce;
static val* varonce3;
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
val* var19 /* : Alternative */;
val* var20 /* : Production */;
val* var21 /* : String */;
val* var22 /* : Alternative */;
val* var23 /* : String */;
val* var24 /* : String */;
long var_i /* var i: Int */;
val* var25 /* : Alternative */;
val* var26 /* : Array[Element] */;
long var27 /* : Int */;
long var_ /* var : Int */;
short int var28 /* : Bool */;
short int var30 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var31 /* : Bool */;
long var32 /* : Int */;
short int var33 /* : Bool */;
short int var35 /* : Bool */;
static val* varonce36;
val* var37 /* : String */;
char* var38 /* : CString */;
val* var39 /* : String */;
val* var40 /* : nullable Int */;
val* var41 /* : nullable Int */;
val* var42 /* : nullable Bool */;
val* var43 /* : nullable Bool */;
static val* varonce44;
val* var45 /* : String */;
char* var46 /* : CString */;
val* var47 /* : String */;
val* var48 /* : nullable Int */;
val* var49 /* : nullable Int */;
val* var50 /* : nullable Bool */;
val* var51 /* : nullable Bool */;
val* var52 /* : Alternative */;
val* var53 /* : Array[Element] */;
val* var54 /* : nullable Object */;
val* var55 /* : String */;
long var56 /* : Int */;
long var57 /* : Int */;
val* var58 /* : Alternative */;
val* var59 /* : Array[Element] */;
long var60 /* : Int */;
short int var61 /* : Bool */;
short int var63 /* : Bool */;
static val* varonce64;
val* var65 /* : String */;
char* var66 /* : CString */;
val* var67 /* : String */;
val* var68 /* : nullable Int */;
val* var69 /* : nullable Int */;
val* var70 /* : nullable Bool */;
val* var71 /* : nullable Bool */;
val* var72 /* : String */;
var1 = NEW_core__FlatBuffer(&type_core__FlatBuffer);
{
((void(*)(val* self))(var1->class->vft[COLOR_core__kernel__Object__init]))(var1); /* init on <var1:FlatBuffer>*/
}
var_b = var1;
if (unlikely(varonce==NULL)) {
var2 = NEW_core__NativeArray((int)4l, &type_core__NativeArray__core__String);
if (likely(varonce3!=NULL)) {
var4 = varonce3;
} else {
var5 = "::";
var7 = (val*)(2l<<2|1);
var8 = (val*)(2l<<2|1);
var9 = (val*)((long)(0)<<2|3);
var10 = (val*)((long)(0)<<2|3);
var6 = core__flat___CString___to_s_unsafe(var5, var7, var8, var9, var10);
var4 = var6;
varonce3 = var4;
}
((struct instance_core__NativeArray*)var2)->values[1]=var4;
if (likely(varonce11!=NULL)) {
var12 = varonce11;
} else {
var13 = "=";
var15 = (val*)(1l<<2|1);
var16 = (val*)(1l<<2|1);
var17 = (val*)((long)(0)<<2|3);
var18 = (val*)((long)(0)<<2|3);
var14 = core__flat___CString___to_s_unsafe(var13, var15, var16, var17, var18);
var12 = var14;
varonce11 = var12;
}
((struct instance_core__NativeArray*)var2)->values[3]=var12;
} else {
var2 = varonce;
varonce = NULL;
}
{
var19 = ((val*(*)(val* self))(self->class->vft[COLOR_nitcc__grammar__Item__alt]))(self); /* alt on <self:Item>*/
}
{
var20 = ((val*(*)(val* self))(var19->class->vft[COLOR_nitcc__grammar__Alternative__prod]))(var19); /* prod on <var19:Alternative>*/
}
{
var21 = ((val*(*)(val* self))(var20->class->vft[COLOR_nitcc__grammar__Element__name]))(var20); /* name on <var20:Production>*/
}
((struct instance_core__NativeArray*)var2)->values[0]=var21;
{
var22 = ((val*(*)(val* self))(self->class->vft[COLOR_nitcc__grammar__Item__alt]))(self); /* alt on <self:Item>*/
}
{
var23 = ((val*(*)(val* self))(var22->class->vft[COLOR_nitcc__grammar__Alternative__name]))(var22); /* name on <var22:Alternative>*/
}
((struct instance_core__NativeArray*)var2)->values[2]=var23;
{
var24 = ((val*(*)(val* self))(var2->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var2); /* native_to_s on <var2:NativeArray[String]>*/
}
varonce = var2;
{
((void(*)(val* self, val* p0))(var_b->class->vft[COLOR_core__abstract_text__Buffer__append]))(var_b, var24); /* append on <var_b:FlatBuffer>*/
}
var_i = 0l;
{
var25 = ((val*(*)(val* self))(self->class->vft[COLOR_nitcc__grammar__Item__alt]))(self); /* alt on <self:Item>*/
}
{
var26 = ((val*(*)(val* self))(var25->class->vft[COLOR_nitcc__grammar__Alternative__elems]))(var25); /* elems on <var25:Alternative>*/
}
{
var27 = ((long(*)(val* self))(var26->class->vft[COLOR_core__abstract_collection__Collection__length]))(var26); /* length on <var26:Array[Element]>*/
}
var_ = var27;
for(;;) {
{
{ /* Inline kernel$Int$< (var_i,var_) on <var_i:Int> */
/* Covariant cast for argument 0 (i) <var_:Int> isa OTHER */
/* <var_:Int> isa OTHER */
var30 = 1; /* easy <var_:Int> isa OTHER*/
if (unlikely(!var30)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var31 = var_i < var_;
var28 = var31;
goto RET_LABEL29;
RET_LABEL29:(void)0;
}
}
if (var28){
} else {
goto BREAK_label;
}
{
var32 = ((long(*)(val* self))(self->class->vft[COLOR_nitcc__grammar__Item__pos]))(self); /* pos on <self:Item>*/
}
{
{ /* Inline kernel$Int$== (var32,var_i) on <var32:Int> */
var35 = var32 == var_i;
var33 = var35;
goto RET_LABEL34;
RET_LABEL34:(void)0;
}
}
if (var33){
if (likely(varonce36!=NULL)) {
var37 = varonce36;
} else {
var38 = ".";
var40 = (val*)(1l<<2|1);
var41 = (val*)(1l<<2|1);
var42 = (val*)((long)(0)<<2|3);
var43 = (val*)((long)(0)<<2|3);
var39 = core__flat___CString___to_s_unsafe(var38, var40, var41, var42, var43);
var37 = var39;
varonce36 = var37;
}
{
((void(*)(val* self, val* p0))(var_b->class->vft[COLOR_core__abstract_text__Buffer__append]))(var_b, var37); /* append on <var_b:FlatBuffer>*/
}
} else {
if (likely(varonce44!=NULL)) {
var45 = varonce44;
} else {
var46 = " ";
var48 = (val*)(1l<<2|1);
var49 = (val*)(1l<<2|1);
var50 = (val*)((long)(0)<<2|3);
var51 = (val*)((long)(0)<<2|3);
var47 = core__flat___CString___to_s_unsafe(var46, var48, var49, var50, var51);
var45 = var47;
varonce44 = var45;
}
{
((void(*)(val* self, val* p0))(var_b->class->vft[COLOR_core__abstract_text__Buffer__append]))(var_b, var45); /* append on <var_b:FlatBuffer>*/
}
}
{
var52 = ((val*(*)(val* self))(self->class->vft[COLOR_nitcc__grammar__Item__alt]))(self); /* alt on <self:Item>*/
}
{
var53 = ((val*(*)(val* self))(var52->class->vft[COLOR_nitcc__grammar__Alternative__elems]))(var52); /* elems on <var52:Alternative>*/
}
{
var54 = ((val*(*)(val* self, long p0))(var53->class->vft[COLOR_core__abstract_collection__SequenceRead___91d_93d]))(var53, var_i); /* [] on <var53:Array[Element]>*/
}
{
var55 = ((val*(*)(val* self))(var54->class->vft[COLOR_core__abstract_text__Object__to_s]))(var54); /* to_s on <var54:nullable Object(Element)>*/
}
{
((void(*)(val* self, val* p0))(var_b->class->vft[COLOR_core__abstract_text__Buffer__append]))(var_b, var55); /* append on <var_b:FlatBuffer>*/
}
var56 = core___core__Int___Discrete__successor(var_i, 1l);
var_i = var56;
}
BREAK_label: (void)0;
{
var57 = ((long(*)(val* self))(self->class->vft[COLOR_nitcc__grammar__Item__pos]))(self); /* pos on <self:Item>*/
}
{
var58 = ((val*(*)(val* self))(self->class->vft[COLOR_nitcc__grammar__Item__alt]))(self); /* alt on <self:Item>*/
}
{
var59 = ((val*(*)(val* self))(var58->class->vft[COLOR_nitcc__grammar__Alternative__elems]))(var58); /* elems on <var58:Alternative>*/
}
{
var60 = ((long(*)(val* self))(var59->class->vft[COLOR_core__abstract_collection__Collection__length]))(var59); /* length on <var59:Array[Element]>*/
}
{
{ /* Inline kernel$Int$== (var57,var60) on <var57:Int> */
var63 = var57 == var60;
var61 = var63;
goto RET_LABEL62;
RET_LABEL62:(void)0;
}
}
if (var61){
if (likely(varonce64!=NULL)) {
var65 = varonce64;
} else {
var66 = ".";
var68 = (val*)(1l<<2|1);
var69 = (val*)(1l<<2|1);
var70 = (val*)((long)(0)<<2|3);
var71 = (val*)((long)(0)<<2|3);
var67 = core__flat___CString___to_s_unsafe(var66, var68, var69, var70, var71);
var65 = var67;
varonce64 = var65;
}
{
((void(*)(val* self, val* p0))(var_b->class->vft[COLOR_core__abstract_text__Buffer__append]))(var_b, var65); /* append on <var_b:FlatBuffer>*/
}
} else {
}
{
var72 = ((val*(*)(val* self))(var_b->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_b); /* to_s on <var_b:FlatBuffer>*/
}
var = var72;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method grammar$Item$next for (self: Item): nullable Element */
val* nitcc___nitcc__Item___next(val* self) {
val* var /* : nullable Element */;
long var1 /* : Int */;
val* var2 /* : Alternative */;
val* var3 /* : Array[Element] */;
long var4 /* : Int */;
short int var5 /* : Bool */;
short int var7 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
short int var8 /* : Bool */;
val* var9 /* : Alternative */;
val* var10 /* : Array[Element] */;
long var11 /* : Int */;
val* var12 /* : nullable Object */;
{
var1 = ((long(*)(val* self))(self->class->vft[COLOR_nitcc__grammar__Item__pos]))(self); /* pos on <self:Item>*/
}
{
var2 = ((val*(*)(val* self))(self->class->vft[COLOR_nitcc__grammar__Item__alt]))(self); /* alt on <self:Item>*/
}
{
var3 = ((val*(*)(val* self))(var2->class->vft[COLOR_nitcc__grammar__Alternative__elems]))(var2); /* elems on <var2:Alternative>*/
}
{
var4 = ((long(*)(val* self))(var3->class->vft[COLOR_core__abstract_collection__Collection__length]))(var3); /* length on <var3:Array[Element]>*/
}
{
{ /* Inline kernel$Int$>= (var1,var4) on <var1:Int> */
/* Covariant cast for argument 0 (i) <var4:Int> isa OTHER */
/* <var4:Int> isa OTHER */
var7 = 1; /* easy <var4:Int> isa OTHER*/
if (unlikely(!var7)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 726);
fatal_exit(1);
}
var8 = var1 >= var4;
var5 = var8;
goto RET_LABEL6;
RET_LABEL6:(void)0;
}
}
if (var5){
var = ((val*)NULL);
goto RET_LABEL;
} else {
}
{
var9 = ((val*(*)(val* self))(self->class->vft[COLOR_nitcc__grammar__Item__alt]))(self); /* alt on <self:Item>*/
}
{
var10 = ((val*(*)(val* self))(var9->class->vft[COLOR_nitcc__grammar__Alternative__elems]))(var9); /* elems on <var9:Alternative>*/
}
{
var11 = ((long(*)(val* self))(self->class->vft[COLOR_nitcc__grammar__Item__pos]))(self); /* pos on <self:Item>*/
}
{
var12 = ((val*(*)(val* self, long p0))(var10->class->vft[COLOR_core__abstract_collection__SequenceRead___91d_93d]))(var10, var11); /* [] on <var10:Array[Element]>*/
}
var = var12;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method grammar$Item$lookahead for (self: Item): Set[Token] */
val* nitcc___nitcc__Item___lookahead(val* self) {
val* var /* : Set[Token] */;
val* var1 /* : HashSet[Token] */;
val* var_res /* var res: HashSet[Token] */;
long var2 /* : Int */;
long var3 /* : Int */;
short int var5 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var6 /* : Int */;
long var_p /* var p: Int */;
val* var7 /* : Alternative */;
val* var8 /* : Array[Element] */;
long var9 /* : Int */;
short int var10 /* : Bool */;
short int var12 /* : Bool */;
int cltype13;
int idtype14;
const char* var_class_name15;
short int var16 /* : Bool */;
val* var17 /* : Alternative */;
val* var18 /* : Array[Element] */;
val* var19 /* : nullable Object */;
val* var_e /* var e: Element */;
short int var20 /* : Bool */;
int cltype21;
int idtype22;
short int var23 /* : Bool */;
int cltype24;
int idtype25;
short int var26 /* : Bool */;
short int var27 /* : Bool */;
long var28 /* : Int */;
short int var30 /* : Bool */;
int cltype31;
int idtype32;
const char* var_class_name33;
long var34 /* : Int */;
var1 = NEW_core__HashSet(&type_core__HashSet__nitcc__Token);
{
((void(*)(val* self))(var1->class->vft[COLOR_core__kernel__Object__init]))(var1); /* init on <var1:HashSet[Token]>*/
}
var_res = var1;
{
var2 = ((long(*)(val* self))(self->class->vft[COLOR_nitcc__grammar__Item__pos]))(self); /* pos on <self:Item>*/
}
{
{ /* Inline kernel$Int$+ (var2,1l) on <var2:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var5 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var5)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var6 = var2 + 1l;
var3 = var6;
goto RET_LABEL4;
RET_LABEL4:(void)0;
}
}
var_p = var3;
for(;;) {
{
var7 = ((val*(*)(val* self))(self->class->vft[COLOR_nitcc__grammar__Item__alt]))(self); /* alt on <self:Item>*/
}
{
var8 = ((val*(*)(val* self))(var7->class->vft[COLOR_nitcc__grammar__Alternative__elems]))(var7); /* elems on <var7:Alternative>*/
}
{
var9 = ((long(*)(val* self))(var8->class->vft[COLOR_core__abstract_collection__Collection__length]))(var8); /* length on <var8:Array[Element]>*/
}
{
{ /* Inline kernel$Int$< (var_p,var9) on <var_p:Int> */
/* Covariant cast for argument 0 (i) <var9:Int> isa OTHER */
/* <var9:Int> isa OTHER */
var12 = 1; /* easy <var9:Int> isa OTHER*/
if (unlikely(!var12)) {
var_class_name15 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name15);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 725);
fatal_exit(1);
}
var16 = var_p < var9;
var10 = var16;
goto RET_LABEL11;
RET_LABEL11:(void)0;
}
}
if (var10){
{
var17 = ((val*(*)(val* self))(self->class->vft[COLOR_nitcc__grammar__Item__alt]))(self); /* alt on <self:Item>*/
}
{
var18 = ((val*(*)(val* self))(var17->class->vft[COLOR_nitcc__grammar__Alternative__elems]))(var17); /* elems on <var17:Alternative>*/
}
{
var19 = ((val*(*)(val* self, long p0))(var18->class->vft[COLOR_core__abstract_collection__SequenceRead___91d_93d]))(var18, var_p); /* [] on <var18:Array[Element]>*/
}
var_e = var19;
/* <var_e:Element> isa Token */
cltype21 = type_nitcc__Token.color;
idtype22 = type_nitcc__Token.id;
if(cltype21 >= var_e->type->table_size) {
var20 = 0;
} else {
var20 = var_e->type->type_table[cltype21] == idtype22;
}
if (var20){
{
((void(*)(val* self, val* p0))(var_res->class->vft[COLOR_core__abstract_collection__SimpleCollection__add]))(var_res, var_e); /* add on <var_res:HashSet[Token]>*/
}
goto BREAK_label;
} else {
/* <var_e:Element> isa Production */
cltype24 = type_nitcc__Production.color;
idtype25 = type_nitcc__Production.id;
if(cltype24 >= var_e->type->table_size) {
var23 = 0;
} else {
var23 = var_e->type->type_table[cltype24] == idtype25;
}
if (var23){
{
var26 = ((short int(*)(val* self))(var_e->class->vft[COLOR_nitcc__grammar__Production__is_nullable]))(var_e); /* is_nullable on <var_e:Element(Production)>*/
}
var27 = !var26;
if (var27){
goto BREAK_label;
} else {
}
} else {
}
}
{
{ /* Inline kernel$Int$+ (var_p,1l) on <var_p:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var30 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var30)) {
var_class_name33 = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name33);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var34 = var_p + 1l;
var28 = var34;
goto RET_LABEL29;
RET_LABEL29:(void)0;
}
}
var_p = var28;
} else {
goto BREAK_label;
}
}
BREAK_label: (void)0;
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method grammar$Item$avance for (self: Item): Item */
val* nitcc___nitcc__Item___avance(val* self) {
val* var /* : Item */;
val* var1 /* : Item */;
val* var2 /* : Alternative */;
long var3 /* : Int */;
long var4 /* : Int */;
short int var6 /* : Bool */;
int cltype;
int idtype;
const char* var_class_name;
long var7 /* : Int */;
val* var_res /* var res: Item */;
var1 = NEW_nitcc__Item(&type_nitcc__Item);
{
var2 = ((val*(*)(val* self))(self->class->vft[COLOR_nitcc__grammar__Item__alt]))(self); /* alt on <self:Item>*/
}
{
var3 = ((long(*)(val* self))(self->class->vft[COLOR_nitcc__grammar__Item__pos]))(self); /* pos on <self:Item>*/
}
{
{ /* Inline kernel$Int$+ (var3,1l) on <var3:Int> */
/* Covariant cast for argument 0 (i) <1l:Int> isa OTHER */
/* <1l:Int> isa OTHER */
var6 = 1; /* easy <1l:Int> isa OTHER*/
if (unlikely(!var6)) {
var_class_name = type_core__Int.name;
PRINT_ERROR("Runtime error: Cast failed. Expected `%s`, got `%s`", "OTHER", var_class_name);
PRINT_ERROR(" (%s:%d)\n", FILE_core__kernel, 728);
fatal_exit(1);
}
var7 = var3 + 1l;
var4 = var7;
goto RET_LABEL5;
RET_LABEL5:(void)0;
}
}
{
((void(*)(val* self, val* p0))(var1->class->vft[COLOR_nitcc__grammar__Item__alt_61d]))(var1, var2); /* alt= on <var1:Item>*/
}
{
((void(*)(val* self, long p0))(var1->class->vft[COLOR_nitcc__grammar__Item__pos_61d]))(var1, var4); /* pos= on <var1:Item>*/
}
{
((void(*)(val* self))(var1->class->vft[COLOR_core__kernel__Object__init]))(var1); /* init on <var1:Item>*/
}
var_res = var1;
var = var_res;
goto RET_LABEL;
RET_LABEL:;
return var;
}
/* method grammar$Item$init for (self: Item) */
void nitcc___nitcc__Item___core__kernel__Object__init(val* self) {
{
((void(*)(val* self))(self->class->vft[COLOR_nitcc___nitcc__Item___core__kernel__Object__init]))(self); /* init on <self:Item>*/
}
RET_LABEL:;
}
