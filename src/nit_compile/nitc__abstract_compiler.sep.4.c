#include "nitc__abstract_compiler.sep.0.h"
/* method abstract_compiler#AMethPropdef#compile_intern_to_c for (self: AMethPropdef, AbstractCompilerVisitor, MMethodDef, Array[RuntimeVariable]): Bool */
short int nitc__abstract_compiler___AMethPropdef___compile_intern_to_c(val* self, val* p0, val* p1, val* p2) {
short int var /* : Bool */;
val* var_v /* var v: AbstractCompilerVisitor */;
val* var_mpropdef /* var mpropdef: MMethodDef */;
val* var_arguments /* var arguments: Array[RuntimeVariable] */;
val* var1 /* : MProperty */;
val* var3 /* : MProperty */;
val* var4 /* : String */;
val* var6 /* : String */;
val* var_pname /* var pname: String */;
val* var7 /* : MClassDef */;
val* var9 /* : MClassDef */;
val* var10 /* : MClass */;
val* var12 /* : MClass */;
val* var13 /* : String */;
val* var15 /* : String */;
val* var_cname /* var cname: String */;
val* var16 /* : nullable MSignature */;
val* var18 /* : nullable MSignature */;
val* var19 /* : nullable MType */;
val* var21 /* : nullable MType */;
val* var_ret /* var ret: nullable MType */;
short int var22 /* : Bool */;
short int var23 /* : Bool */;
val* var_other /* var other: nullable Object */;
short int var25 /* : Bool */;
short int var26 /* : Bool */;
val* var27 /* : nullable Object */;
val* var28 /* : MType */;
short int var29 /* : Bool */;
static val* varonce;
val* var30 /* : String */;
char* var31 /* : CString */;
val* var32 /* : String */;
short int var33 /* : Bool */;
short int var35 /* : Bool */;
short int var36 /* : Bool */;
short int var_ /* var : Bool */;
static val* varonce37;
val* var38 /* : String */;
char* var39 /* : CString */;
val* var40 /* : String */;
short int var41 /* : Bool */;
short int var43 /* : Bool */;
short int var44 /* : Bool */;
static val* varonce45;
val* var46 /* : String */;
char* var47 /* : CString */;
val* var48 /* : String */;
short int var49 /* : Bool */;
static val* varonce50;
val* var51 /* : String */;
char* var52 /* : CString */;
val* var53 /* : String */;
short int var54 /* : Bool */;
val* var56 /* : NativeArray[String] */;
static val* varonce55;
static val* varonce57;
val* var58 /* : String */;
char* var59 /* : CString */;
val* var60 /* : String */;
static val* varonce61;
val* var62 /* : String */;
char* var63 /* : CString */;
val* var64 /* : String */;
val* var65 /* : nullable Object */;
val* var66 /* : String */;
val* var67 /* : String */;
static val* varonce68;
val* var69 /* : String */;
char* var70 /* : CString */;
val* var71 /* : String */;
short int var72 /* : Bool */;
val* var73 /* : nullable Object */;
static val* varonce74;
val* var75 /* : String */;
char* var76 /* : CString */;
val* var77 /* : String */;
short int var78 /* : Bool */;
val* var80 /* : NativeArray[String] */;
static val* varonce79;
static val* varonce81;
val* var82 /* : String */;
char* var83 /* : CString */;
val* var84 /* : String */;
val* var85 /* : nullable Object */;
val* var86 /* : String */;
val* var87 /* : nullable Object */;
val* var88 /* : String */;
val* var89 /* : String */;
val* var90 /* : RuntimeVariable */;
static val* varonce91;
val* var92 /* : String */;
char* var93 /* : CString */;
val* var94 /* : String */;
short int var95 /* : Bool */;
val* var97 /* : NativeArray[String] */;
static val* varonce96;
static val* varonce98;
val* var99 /* : String */;
char* var100 /* : CString */;
val* var101 /* : String */;
val* var102 /* : nullable Object */;
val* var103 /* : String */;
val* var104 /* : nullable Object */;
val* var105 /* : String */;
val* var106 /* : String */;
val* var107 /* : RuntimeVariable */;
static val* varonce108;
val* var109 /* : String */;
char* var110 /* : CString */;
val* var111 /* : String */;
short int var112 /* : Bool */;
val* var114 /* : NativeArray[String] */;
static val* varonce113;
static val* varonce115;
val* var116 /* : String */;
char* var117 /* : CString */;
val* var118 /* : String */;
val* var119 /* : nullable Object */;
val* var120 /* : String */;
val* var121 /* : String */;
val* var122 /* : RuntimeVariable */;
static val* varonce123;
val* var124 /* : String */;
char* var125 /* : CString */;
val* var126 /* : String */;
short int var127 /* : Bool */;
val* var128 /* : nullable Object */;
static val* varonce129;
val* var130 /* : String */;
char* var131 /* : CString */;
val* var132 /* : String */;
short int var133 /* : Bool */;
val* var135 /* : NativeArray[String] */;
static val* varonce134;
static val* varonce136;
val* var137 /* : String */;
char* var138 /* : CString */;
val* var139 /* : String */;
val* var140 /* : nullable Object */;
val* var141 /* : String */;
val* var142 /* : nullable Object */;
val* var143 /* : String */;
val* var144 /* : String */;
val* var145 /* : RuntimeVariable */;
static val* varonce146;
val* var147 /* : String */;
char* var148 /* : CString */;
val* var149 /* : String */;
short int var150 /* : Bool */;
val* var152 /* : NativeArray[String] */;
static val* varonce151;
static val* varonce153;
val* var154 /* : String */;
char* var155 /* : CString */;
val* var156 /* : String */;
val* var157 /* : nullable Object */;
val* var158 /* : String */;
val* var159 /* : nullable Object */;
val* var160 /* : String */;
val* var161 /* : String */;
val* var162 /* : RuntimeVariable */;
static val* varonce163;
val* var164 /* : String */;
char* var165 /* : CString */;
val* var166 /* : String */;
short int var167 /* : Bool */;
val* var169 /* : NativeArray[String] */;
static val* varonce168;
static val* varonce170;
val* var171 /* : String */;
char* var172 /* : CString */;
val* var173 /* : String */;
val* var174 /* : nullable Object */;
val* var175 /* : String */;
val* var176 /* : nullable Object */;
val* var177 /* : String */;
val* var178 /* : String */;
val* var179 /* : RuntimeVariable */;
static val* varonce180;
val* var181 /* : String */;
char* var182 /* : CString */;
val* var183 /* : String */;
short int var184 /* : Bool */;
val* var185 /* : nullable Object */;
val* var186 /* : nullable Object */;
val* var187 /* : RuntimeVariable */;
static val* varonce188;
val* var189 /* : String */;
char* var190 /* : CString */;
val* var191 /* : String */;
short int var192 /* : Bool */;
val* var193 /* : nullable Object */;
val* var194 /* : nullable Object */;
val* var195 /* : RuntimeVariable */;
val* var_res /* var res: RuntimeVariable */;
val* var197 /* : NativeArray[String] */;
static val* varonce196;
static val* varonce198;
val* var199 /* : String */;
char* var200 /* : CString */;
val* var201 /* : String */;
val* var202 /* : String */;
val* var203 /* : String */;
val* var204 /* : RuntimeVariable */;
static val* varonce205;
val* var206 /* : String */;
char* var207 /* : CString */;
val* var208 /* : String */;
short int var209 /* : Bool */;
val* var211 /* : NativeArray[String] */;
static val* varonce210;
static val* varonce212;
val* var213 /* : String */;
char* var214 /* : CString */;
val* var215 /* : String */;
val* var216 /* : nullable Object */;
val* var217 /* : String */;
val* var218 /* : nullable Object */;
val* var219 /* : String */;
val* var220 /* : String */;
val* var221 /* : RuntimeVariable */;
static val* varonce222;
val* var223 /* : String */;
char* var224 /* : CString */;
val* var225 /* : String */;
short int var226 /* : Bool */;
val* var228 /* : NativeArray[String] */;
static val* varonce227;
static val* varonce229;
val* var230 /* : String */;
char* var231 /* : CString */;
val* var232 /* : String */;
val* var233 /* : nullable Object */;
val* var234 /* : String */;
val* var235 /* : nullable Object */;
val* var236 /* : String */;
val* var237 /* : String */;
val* var238 /* : RuntimeVariable */;
static val* varonce239;
val* var240 /* : String */;
char* var241 /* : CString */;
val* var242 /* : String */;
short int var243 /* : Bool */;
val* var245 /* : NativeArray[String] */;
static val* varonce244;
static val* varonce246;
val* var247 /* : String */;
char* var248 /* : CString */;
val* var249 /* : String */;
val* var250 /* : nullable Object */;
val* var251 /* : String */;
val* var252 /* : nullable Object */;
val* var253 /* : String */;
val* var254 /* : String */;
val* var255 /* : RuntimeVariable */;
static val* varonce256;
val* var257 /* : String */;
char* var258 /* : CString */;
val* var259 /* : String */;
short int var260 /* : Bool */;
val* var262 /* : NativeArray[String] */;
static val* varonce261;
static val* varonce263;
val* var264 /* : String */;
char* var265 /* : CString */;
val* var266 /* : String */;
val* var267 /* : nullable Object */;
val* var268 /* : String */;
val* var269 /* : nullable Object */;
val* var270 /* : String */;
val* var271 /* : String */;
val* var272 /* : RuntimeVariable */;
static val* varonce273;
val* var274 /* : String */;
char* var275 /* : CString */;
val* var276 /* : String */;
short int var277 /* : Bool */;
val* var279 /* : NativeArray[String] */;
static val* varonce278;
static val* varonce280;
val* var281 /* : String */;
char* var282 /* : CString */;
val* var283 /* : String */;
val* var284 /* : nullable Object */;
val* var285 /* : String */;
val* var286 /* : String */;
val* var287 /* : RuntimeVariable */;
static val* varonce288;
val* var289 /* : String */;
char* var290 /* : CString */;
val* var291 /* : String */;
short int var292 /* : Bool */;
val* var294 /* : NativeArray[String] */;
static val* varonce293;
static val* varonce295;
val* var296 /* : String */;
char* var297 /* : CString */;
val* var298 /* : String */;
val* var299 /* : nullable Object */;
val* var300 /* : String */;
val* var301 /* : String */;
val* var302 /* : RuntimeVariable */;
static val* varonce303;
val* var304 /* : String */;
char* var305 /* : CString */;
val* var306 /* : String */;
short int var307 /* : Bool */;
val* var309 /* : NativeArray[String] */;
static val* varonce308;
static val* varonce310;
val* var311 /* : String */;
char* var312 /* : CString */;
val* var313 /* : String */;
val* var314 /* : nullable Object */;
val* var315 /* : String */;
val* var316 /* : String */;
val* var317 /* : RuntimeVariable */;
static val* varonce318;
val* var319 /* : String */;
char* var320 /* : CString */;
val* var321 /* : String */;
short int var322 /* : Bool */;
val* var324 /* : NativeArray[String] */;
static val* varonce323;
static val* varonce325;
val* var326 /* : String */;
char* var327 /* : CString */;
val* var328 /* : String */;
val* var329 /* : nullable Object */;
val* var330 /* : String */;
val* var331 /* : String */;
val* var332 /* : RuntimeVariable */;
static val* varonce333;
val* var334 /* : String */;
char* var335 /* : CString */;
val* var336 /* : String */;
short int var337 /* : Bool */;
val* var339 /* : NativeArray[String] */;
static val* varonce338;
static val* varonce340;
val* var341 /* : String */;
char* var342 /* : CString */;
val* var343 /* : String */;
val* var344 /* : nullable Object */;
val* var345 /* : String */;
val* var346 /* : String */;
val* var347 /* : RuntimeVariable */;
static val* varonce348;
val* var349 /* : String */;
char* var350 /* : CString */;
val* var351 /* : String */;
short int var352 /* : Bool */;
val* var354 /* : NativeArray[String] */;
static val* varonce353;
static val* varonce355;
val* var356 /* : String */;
char* var357 /* : CString */;
val* var358 /* : String */;
val* var359 /* : nullable Object */;
val* var360 /* : String */;
val* var361 /* : String */;
val* var362 /* : RuntimeVariable */;
static val* varonce363;
val* var364 /* : String */;
char* var365 /* : CString */;
val* var366 /* : String */;
short int var367 /* : Bool */;
val* var369 /* : NativeArray[String] */;
static val* varonce368;
static val* varonce370;
val* var371 /* : String */;
char* var372 /* : CString */;
val* var373 /* : String */;
val* var374 /* : nullable Object */;
val* var375 /* : String */;
val* var376 /* : String */;
val* var377 /* : RuntimeVariable */;
static val* varonce378;
val* var379 /* : String */;
char* var380 /* : CString */;
val* var381 /* : String */;
short int var382 /* : Bool */;
val* var384 /* : NativeArray[String] */;
static val* varonce383;
static val* varonce385;
val* var386 /* : String */;
char* var387 /* : CString */;
val* var388 /* : String */;
val* var389 /* : nullable Object */;
val* var390 /* : String */;
val* var391 /* : String */;
val* var392 /* : RuntimeVariable */;
static val* varonce393;
val* var394 /* : String */;
char* var395 /* : CString */;
val* var396 /* : String */;
short int var397 /* : Bool */;
val* var399 /* : NativeArray[String] */;
static val* varonce398;
static val* varonce400;
val* var401 /* : String */;
char* var402 /* : CString */;
val* var403 /* : String */;
val* var404 /* : nullable Object */;
val* var405 /* : String */;
val* var406 /* : nullable Object */;
val* var407 /* : String */;
val* var408 /* : String */;
val* var409 /* : RuntimeVariable */;
static val* varonce410;
val* var411 /* : String */;
char* var412 /* : CString */;
val* var413 /* : String */;
short int var414 /* : Bool */;
val* var416 /* : NativeArray[String] */;
static val* varonce415;
static val* varonce417;
val* var418 /* : String */;
char* var419 /* : CString */;
val* var420 /* : String */;
val* var421 /* : nullable Object */;
val* var422 /* : String */;
val* var423 /* : nullable Object */;
val* var424 /* : String */;
val* var425 /* : String */;
val* var426 /* : RuntimeVariable */;
static val* varonce427;
val* var428 /* : String */;
char* var429 /* : CString */;
val* var430 /* : String */;
short int var431 /* : Bool */;
val* var433 /* : NativeArray[String] */;
static val* varonce432;
static val* varonce434;
val* var435 /* : String */;
char* var436 /* : CString */;
val* var437 /* : String */;
val* var438 /* : nullable Object */;
val* var439 /* : String */;
val* var440 /* : nullable Object */;
val* var441 /* : String */;
val* var442 /* : String */;
val* var443 /* : RuntimeVariable */;
static val* varonce444;
val* var445 /* : String */;
char* var446 /* : CString */;
val* var447 /* : String */;
short int var448 /* : Bool */;
val* var450 /* : NativeArray[String] */;
static val* varonce449;
static val* varonce451;
val* var452 /* : String */;
char* var453 /* : CString */;
val* var454 /* : String */;
val* var455 /* : nullable Object */;
val* var456 /* : String */;
val* var457 /* : nullable Object */;
val* var458 /* : String */;
val* var459 /* : String */;
val* var460 /* : RuntimeVariable */;
static val* varonce461;
val* var462 /* : String */;
char* var463 /* : CString */;
val* var464 /* : String */;
short int var465 /* : Bool */;
static val* varonce466;
val* var467 /* : String */;
char* var468 /* : CString */;
val* var469 /* : String */;
short int var470 /* : Bool */;
val* var472 /* : NativeArray[String] */;
static val* varonce471;
static val* varonce473;
val* var474 /* : String */;
char* var475 /* : CString */;
val* var476 /* : String */;
val* var477 /* : nullable Object */;
val* var478 /* : String */;
val* var479 /* : String */;
val* var480 /* : RuntimeVariable */;
static val* varonce481;
val* var482 /* : String */;
char* var483 /* : CString */;
val* var484 /* : String */;
short int var485 /* : Bool */;
val* var487 /* : NativeArray[String] */;
static val* varonce486;
static val* varonce488;
val* var489 /* : String */;
char* var490 /* : CString */;
val* var491 /* : String */;
val* var492 /* : nullable Object */;
val* var493 /* : String */;
val* var494 /* : nullable Object */;
val* var495 /* : String */;
val* var496 /* : String */;
val* var497 /* : RuntimeVariable */;
static val* varonce498;
val* var499 /* : String */;
char* var500 /* : CString */;
val* var501 /* : String */;
short int var502 /* : Bool */;
val* var504 /* : NativeArray[String] */;
static val* varonce503;
static val* varonce505;
val* var506 /* : String */;
char* var507 /* : CString */;
val* var508 /* : String */;
val* var509 /* : nullable Object */;
val* var510 /* : String */;
val* var511 /* : nullable Object */;
val* var512 /* : String */;
val* var513 /* : String */;
val* var514 /* : RuntimeVariable */;
static val* varonce515;
val* var516 /* : String */;
char* var517 /* : CString */;
val* var518 /* : String */;
short int var519 /* : Bool */;
val* var520 /* : nullable Object */;
val* var521 /* : nullable Object */;
val* var522 /* : RuntimeVariable */;
static val* varonce523;
val* var524 /* : String */;
char* var525 /* : CString */;
val* var526 /* : String */;
short int var527 /* : Bool */;
val* var528 /* : nullable Object */;
val* var529 /* : nullable Object */;
val* var530 /* : RuntimeVariable */;
val* var_res531 /* var res: RuntimeVariable */;
val* var533 /* : NativeArray[String] */;
static val* varonce532;
static val* varonce534;
val* var535 /* : String */;
char* var536 /* : CString */;
val* var537 /* : String */;
val* var538 /* : String */;
val* var539 /* : String */;
val* var540 /* : RuntimeVariable */;
static val* varonce541;
val* var542 /* : String */;
char* var543 /* : CString */;
val* var544 /* : String */;
short int var545 /* : Bool */;
val* var547 /* : NativeArray[String] */;
static val* varonce546;
static val* varonce548;
val* var549 /* : String */;
char* var550 /* : CString */;
val* var551 /* : String */;
val* var552 /* : nullable Object */;
val* var553 /* : String */;
val* var554 /* : nullable Object */;
val* var555 /* : String */;
val* var556 /* : String */;
val* var557 /* : RuntimeVariable */;
static val* varonce558;
val* var559 /* : String */;
char* var560 /* : CString */;
val* var561 /* : String */;
short int var562 /* : Bool */;
val* var564 /* : NativeArray[String] */;
static val* varonce563;
static val* varonce565;
val* var566 /* : String */;
char* var567 /* : CString */;
val* var568 /* : String */;
val* var569 /* : nullable Object */;
val* var570 /* : String */;
val* var571 /* : nullable Object */;
val* var572 /* : String */;
val* var573 /* : String */;
val* var574 /* : RuntimeVariable */;
static val* varonce575;
val* var576 /* : String */;
char* var577 /* : CString */;
val* var578 /* : String */;
short int var579 /* : Bool */;
val* var581 /* : NativeArray[String] */;
static val* varonce580;
static val* varonce582;
val* var583 /* : String */;
char* var584 /* : CString */;
val* var585 /* : String */;
val* var586 /* : nullable Object */;
val* var587 /* : String */;
val* var588 /* : nullable Object */;
val* var589 /* : String */;
val* var590 /* : String */;
val* var591 /* : RuntimeVariable */;
static val* varonce592;
val* var593 /* : String */;
char* var594 /* : CString */;
val* var595 /* : String */;
short int var596 /* : Bool */;
val* var598 /* : NativeArray[String] */;
static val* varonce597;
static val* varonce599;
val* var600 /* : String */;
char* var601 /* : CString */;
val* var602 /* : String */;
val* var603 /* : nullable Object */;
val* var604 /* : String */;
val* var605 /* : nullable Object */;
val* var606 /* : String */;
val* var607 /* : String */;
val* var608 /* : RuntimeVariable */;
static val* varonce609;
val* var610 /* : String */;
char* var611 /* : CString */;
val* var612 /* : String */;
short int var613 /* : Bool */;
val* var615 /* : NativeArray[String] */;
static val* varonce614;
static val* varonce616;
val* var617 /* : String */;
char* var618 /* : CString */;
val* var619 /* : String */;
val* var620 /* : nullable Object */;
val* var621 /* : String */;
val* var622 /* : String */;
val* var623 /* : RuntimeVariable */;
static val* varonce624;
val* var625 /* : String */;
char* var626 /* : CString */;
val* var627 /* : String */;
short int var628 /* : Bool */;
val* var630 /* : NativeArray[String] */;
static val* varonce629;
static val* varonce631;
val* var632 /* : String */;
char* var633 /* : CString */;
val* var634 /* : String */;
val* var635 /* : nullable Object */;
val* var636 /* : String */;
val* var637 /* : String */;
val* var638 /* : RuntimeVariable */;
static val* varonce639;
val* var640 /* : String */;
char* var641 /* : CString */;
val* var642 /* : String */;
short int var643 /* : Bool */;
static val* varonce644;
val* var645 /* : String */;
char* var646 /* : CString */;
val* var647 /* : String */;
short int var648 /* : Bool */;
val* var650 /* : NativeArray[String] */;
static val* varonce649;
static val* varonce651;
val* var652 /* : String */;
char* var653 /* : CString */;
val* var654 /* : String */;
static val* varonce655;
val* var656 /* : String */;
char* var657 /* : CString */;
val* var658 /* : String */;
val* var659 /* : nullable Object */;
val* var660 /* : String */;
val* var661 /* : String */;
static val* varonce662;
val* var663 /* : String */;
char* var664 /* : CString */;
val* var665 /* : String */;
short int var666 /* : Bool */;
val* var668 /* : NativeArray[String] */;
static val* varonce667;
static val* varonce669;
val* var670 /* : String */;
char* var671 /* : CString */;
val* var672 /* : String */;
val* var673 /* : nullable Object */;
val* var674 /* : String */;
val* var675 /* : String */;
val* var676 /* : RuntimeVariable */;
static val* varonce677;
val* var678 /* : String */;
char* var679 /* : CString */;
val* var680 /* : String */;
short int var681 /* : Bool */;
val* var683 /* : NativeArray[String] */;
static val* varonce682;
static val* varonce684;
val* var685 /* : String */;
char* var686 /* : CString */;
val* var687 /* : String */;
val* var688 /* : nullable Object */;
val* var689 /* : String */;
val* var690 /* : nullable Object */;
val* var691 /* : String */;
val* var692 /* : String */;
val* var693 /* : RuntimeVariable */;
static val* varonce694;
val* var695 /* : String */;
char* var696 /* : CString */;
val* var697 /* : String */;
short int var698 /* : Bool */;
val* var700 /* : NativeArray[String] */;
static val* varonce699;
static val* varonce701;
val* var702 /* : String */;
char* var703 /* : CString */;
val* var704 /* : String */;
val* var705 /* : nullable Object */;
val* var706 /* : String */;
val* var707 /* : nullable Object */;
val* var708 /* : String */;
val* var709 /* : String */;
val* var710 /* : RuntimeVariable */;
static val* varonce711;
val* var712 /* : String */;
char* var713 /* : CString */;
val* var714 /* : String */;
short int var715 /* : Bool */;
val* var717 /* : NativeArray[String] */;
static val* varonce716;
static val* varonce718;
val* var719 /* : String */;
char* var720 /* : CString */;
val* var721 /* : String */;
val* var722 /* : nullable Object */;
val* var723 /* : String */;
val* var724 /* : String */;
val* var725 /* : RuntimeVariable */;
static val* varonce726;
val* var727 /* : String */;
char* var728 /* : CString */;
val* var729 /* : String */;
short int var730 /* : Bool */;
val* var731 /* : nullable Object */;
static val* varonce732;
val* var733 /* : String */;
char* var734 /* : CString */;
val* var735 /* : String */;
short int var736 /* : Bool */;
val* var738 /* : NativeArray[String] */;
static val* varonce737;
static val* varonce739;
val* var740 /* : String */;
char* var741 /* : CString */;
val* var742 /* : String */;
val* var743 /* : nullable Object */;
val* var744 /* : String */;
val* var745 /* : nullable Object */;
val* var746 /* : String */;
val* var747 /* : String */;
val* var748 /* : RuntimeVariable */;
static val* varonce749;
val* var750 /* : String */;
char* var751 /* : CString */;
val* var752 /* : String */;
short int var753 /* : Bool */;
val* var755 /* : NativeArray[String] */;
static val* varonce754;
static val* varonce756;
val* var757 /* : String */;
char* var758 /* : CString */;
val* var759 /* : String */;
val* var760 /* : nullable Object */;
val* var761 /* : String */;
val* var762 /* : nullable Object */;
val* var763 /* : String */;
val* var764 /* : String */;
val* var765 /* : RuntimeVariable */;
static val* varonce766;
val* var767 /* : String */;
char* var768 /* : CString */;
val* var769 /* : String */;
short int var770 /* : Bool */;
val* var772 /* : NativeArray[String] */;
static val* varonce771;
static val* varonce773;
val* var774 /* : String */;
char* var775 /* : CString */;
val* var776 /* : String */;
val* var777 /* : nullable Object */;
val* var778 /* : String */;
val* var779 /* : nullable Object */;
val* var780 /* : String */;
val* var781 /* : String */;
val* var782 /* : RuntimeVariable */;
static val* varonce783;
val* var784 /* : String */;
char* var785 /* : CString */;
val* var786 /* : String */;
short int var787 /* : Bool */;
val* var788 /* : nullable Object */;
val* var789 /* : nullable Object */;
val* var790 /* : RuntimeVariable */;
static val* varonce791;
val* var792 /* : String */;
char* var793 /* : CString */;
val* var794 /* : String */;
short int var795 /* : Bool */;
val* var796 /* : nullable Object */;
val* var797 /* : nullable Object */;
val* var798 /* : RuntimeVariable */;
val* var_res799 /* var res: RuntimeVariable */;
val* var801 /* : NativeArray[String] */;
static val* varonce800;
static val* varonce802;
val* var803 /* : String */;
char* var804 /* : CString */;
val* var805 /* : String */;
val* var806 /* : String */;
val* var807 /* : String */;
val* var808 /* : RuntimeVariable */;
static val* varonce809;
val* var810 /* : String */;
char* var811 /* : CString */;
val* var812 /* : String */;
short int var813 /* : Bool */;
val* var815 /* : NativeArray[String] */;
static val* varonce814;
static val* varonce816;
val* var817 /* : String */;
char* var818 /* : CString */;
val* var819 /* : String */;
val* var820 /* : nullable Object */;
val* var821 /* : String */;
val* var822 /* : nullable Object */;
val* var823 /* : String */;
val* var824 /* : String */;
val* var825 /* : RuntimeVariable */;
static val* varonce826;
val* var827 /* : String */;
char* var828 /* : CString */;
val* var829 /* : String */;
short int var830 /* : Bool */;
val* var832 /* : NativeArray[String] */;
static val* varonce831;
static val* varonce833;
val* var834 /* : String */;
char* var835 /* : CString */;
val* var836 /* : String */;
val* var837 /* : nullable Object */;
val* var838 /* : String */;
val* var839 /* : nullable Object */;
val* var840 /* : String */;
val* var841 /* : String */;
val* var842 /* : RuntimeVariable */;
static val* varonce843;
val* var844 /* : String */;
char* var845 /* : CString */;
val* var846 /* : String */;
short int var847 /* : Bool */;
val* var849 /* : NativeArray[String] */;
static val* varonce848;
static val* varonce850;
val* var851 /* : String */;
char* var852 /* : CString */;
val* var853 /* : String */;
val* var854 /* : nullable Object */;
val* var855 /* : String */;
val* var856 /* : nullable Object */;
val* var857 /* : String */;
val* var858 /* : String */;
val* var859 /* : RuntimeVariable */;
static val* varonce860;
val* var861 /* : String */;
char* var862 /* : CString */;
val* var863 /* : String */;
short int var864 /* : Bool */;
val* var866 /* : NativeArray[String] */;
static val* varonce865;
static val* varonce867;
val* var868 /* : String */;
char* var869 /* : CString */;
val* var870 /* : String */;
val* var871 /* : nullable Object */;
val* var872 /* : String */;
val* var873 /* : nullable Object */;
val* var874 /* : String */;
val* var875 /* : String */;
val* var876 /* : RuntimeVariable */;
static val* varonce877;
val* var878 /* : String */;
char* var879 /* : CString */;
val* var880 /* : String */;
short int var881 /* : Bool */;
val* var883 /* : NativeArray[String] */;
static val* varonce882;
static val* varonce884;
val* var885 /* : String */;
char* var886 /* : CString */;
val* var887 /* : String */;
val* var888 /* : nullable Object */;
val* var889 /* : String */;
val* var890 /* : nullable Object */;
val* var891 /* : String */;
val* var892 /* : String */;
val* var893 /* : RuntimeVariable */;
static val* varonce894;
val* var895 /* : String */;
char* var896 /* : CString */;
val* var897 /* : String */;
short int var898 /* : Bool */;
val* var900 /* : NativeArray[String] */;
static val* varonce899;
static val* varonce901;
val* var902 /* : String */;
char* var903 /* : CString */;
val* var904 /* : String */;
val* var905 /* : nullable Object */;
val* var906 /* : String */;
val* var907 /* : nullable Object */;
val* var908 /* : String */;
val* var909 /* : String */;
val* var910 /* : RuntimeVariable */;
static val* varonce911;
val* var912 /* : String */;
char* var913 /* : CString */;
val* var914 /* : String */;
short int var915 /* : Bool */;
val* var917 /* : NativeArray[String] */;
static val* varonce916;
static val* varonce918;
val* var919 /* : String */;
char* var920 /* : CString */;
val* var921 /* : String */;
val* var922 /* : nullable Object */;
val* var923 /* : String */;
val* var924 /* : nullable Object */;
val* var925 /* : String */;
val* var926 /* : String */;
val* var927 /* : RuntimeVariable */;
static val* varonce928;
val* var929 /* : String */;
char* var930 /* : CString */;
val* var931 /* : String */;
short int var932 /* : Bool */;
val* var934 /* : NativeArray[String] */;
static val* varonce933;
static val* varonce935;
val* var936 /* : String */;
char* var937 /* : CString */;
val* var938 /* : String */;
val* var939 /* : nullable Object */;
val* var940 /* : String */;
val* var941 /* : String */;
val* var942 /* : RuntimeVariable */;
static val* varonce943;
val* var944 /* : String */;
char* var945 /* : CString */;
val* var946 /* : String */;
short int var947 /* : Bool */;
val* var949 /* : NativeArray[String] */;
static val* varonce948;
static val* varonce950;
val* var951 /* : String */;
char* var952 /* : CString */;
val* var953 /* : String */;
val* var954 /* : nullable Object */;
val* var955 /* : String */;
val* var956 /* : String */;
val* var957 /* : RuntimeVariable */;
static val* varonce958;
val* var959 /* : String */;
char* var960 /* : CString */;
val* var961 /* : String */;
short int var962 /* : Bool */;
val* var964 /* : NativeArray[String] */;
static val* varonce963;
static val* varonce965;
val* var966 /* : String */;
char* var967 /* : CString */;
val* var968 /* : String */;
val* var969 /* : nullable Object */;
val* var970 /* : String */;
val* var971 /* : String */;
val* var972 /* : RuntimeVariable */;
static val* varonce973;
val* var974 /* : String */;
char* var975 /* : CString */;
val* var976 /* : String */;
short int var977 /* : Bool */;
val* var979 /* : NativeArray[String] */;
static val* varonce978;
static val* varonce980;
val* var981 /* : String */;
char* var982 /* : CString */;
val* var983 /* : String */;
val* var984 /* : nullable Object */;
val* var985 /* : String */;
val* var986 /* : String */;
val* var987 /* : RuntimeVariable */;
static val* varonce988;
val* var989 /* : String */;
char* var990 /* : CString */;
val* var991 /* : String */;
short int var992 /* : Bool */;
val* var994 /* : NativeArray[String] */;
static val* varonce993;
static val* varonce995;
val* var996 /* : String */;
char* var997 /* : CString */;
val* var998 /* : String */;
val* var999 /* : nullable Object */;
val* var1000 /* : String */;
val* var1001 /* : String */;
val* var1002 /* : RuntimeVariable */;
static val* varonce1003;
val* var1004 /* : String */;
char* var1005 /* : CString */;
val* var1006 /* : String */;
short int var1007 /* : Bool */;
val* var1009 /* : NativeArray[String] */;
static val* varonce1008;
static val* varonce1010;
val* var1011 /* : String */;
char* var1012 /* : CString */;
val* var1013 /* : String */;
val* var1014 /* : nullable Object */;
val* var1015 /* : String */;
val* var1016 /* : String */;
val* var1017 /* : RuntimeVariable */;
static val* varonce1018;
val* var1019 /* : String */;
char* var1020 /* : CString */;
val* var1021 /* : String */;
short int var1022 /* : Bool */;
val* var1024 /* : NativeArray[String] */;
static val* varonce1023;
static val* varonce1025;
val* var1026 /* : String */;
char* var1027 /* : CString */;
val* var1028 /* : String */;
val* var1029 /* : nullable Object */;
val* var1030 /* : String */;
val* var1031 /* : String */;
val* var1032 /* : RuntimeVariable */;
static val* varonce1033;
val* var1034 /* : String */;
char* var1035 /* : CString */;
val* var1036 /* : String */;
short int var1037 /* : Bool */;
val* var1039 /* : NativeArray[String] */;
static val* varonce1038;
static val* varonce1040;
val* var1041 /* : String */;
char* var1042 /* : CString */;
val* var1043 /* : String */;
val* var1044 /* : nullable Object */;
val* var1045 /* : String */;
val* var1046 /* : String */;
val* var1047 /* : RuntimeVariable */;
static val* varonce1048;
val* var1049 /* : String */;
char* var1050 /* : CString */;
val* var1051 /* : String */;
short int var1052 /* : Bool */;
static val* varonce1053;
val* var1054 /* : String */;
char* var1055 /* : CString */;
val* var1056 /* : String */;
short int var1057 /* : Bool */;
val* var1059 /* : NativeArray[String] */;
static val* varonce1058;
static val* varonce1060;
val* var1061 /* : String */;
char* var1062 /* : CString */;
val* var1063 /* : String */;
static val* varonce1064;
val* var1065 /* : String */;
char* var1066 /* : CString */;
val* var1067 /* : String */;
val* var1068 /* : nullable Object */;
val* var1069 /* : String */;
val* var1070 /* : String */;
static val* varonce1071;
val* var1072 /* : String */;
char* var1073 /* : CString */;
val* var1074 /* : String */;
short int var1075 /* : Bool */;
val* var1077 /* : NativeArray[String] */;
static val* varonce1076;
static val* varonce1078;
val* var1079 /* : String */;
char* var1080 /* : CString */;
val* var1081 /* : String */;
val* var1082 /* : nullable Object */;
val* var1083 /* : String */;
val* var1084 /* : String */;
val* var1085 /* : RuntimeVariable */;
static val* varonce1086;
val* var1087 /* : String */;
char* var1088 /* : CString */;
val* var1089 /* : String */;
short int var1090 /* : Bool */;
val* var1091 /* : nullable Object */;
val* var1092 /* : nullable Object */;
val* var1093 /* : RuntimeVariable */;
static val* varonce1094;
val* var1095 /* : String */;
char* var1096 /* : CString */;
val* var1097 /* : String */;
short int var1098 /* : Bool */;
val* var1099 /* : nullable Object */;
val* var1100 /* : nullable Object */;
val* var1101 /* : RuntimeVariable */;
val* var_res1102 /* var res: RuntimeVariable */;
val* var1104 /* : NativeArray[String] */;
static val* varonce1103;
static val* varonce1105;
val* var1106 /* : String */;
char* var1107 /* : CString */;
val* var1108 /* : String */;
val* var1109 /* : String */;
val* var1110 /* : String */;
val* var1111 /* : RuntimeVariable */;
static val* varonce1112;
val* var1113 /* : String */;
char* var1114 /* : CString */;
val* var1115 /* : String */;
short int var1116 /* : Bool */;
static val* varonce1117;
val* var1118 /* : String */;
char* var1119 /* : CString */;
val* var1120 /* : String */;
short int var1121 /* : Bool */;
val* var1123 /* : NativeArray[String] */;
static val* varonce1122;
static val* varonce1124;
val* var1125 /* : String */;
char* var1126 /* : CString */;
val* var1127 /* : String */;
static val* varonce1128;
val* var1129 /* : String */;
char* var1130 /* : CString */;
val* var1131 /* : String */;
val* var1132 /* : nullable Object */;
val* var1133 /* : String */;
val* var1134 /* : String */;
static val* varonce1135;
val* var1136 /* : String */;
char* var1137 /* : CString */;
val* var1138 /* : String */;
short int var1139 /* : Bool */;
val* var1141 /* : NativeArray[String] */;
static val* varonce1140;
static val* varonce1142;
val* var1143 /* : String */;
char* var1144 /* : CString */;
val* var1145 /* : String */;
val* var1146 /* : nullable Object */;
val* var1147 /* : String */;
val* var1148 /* : String */;
val* var1149 /* : RuntimeVariable */;
static val* varonce1150;
val* var1151 /* : String */;
char* var1152 /* : CString */;
val* var1153 /* : String */;
short int var1154 /* : Bool */;
val* var1156 /* : NativeArray[String] */;
static val* varonce1155;
static val* varonce1157;
val* var1158 /* : String */;
char* var1159 /* : CString */;
val* var1160 /* : String */;
val* var1161 /* : nullable Object */;
val* var1162 /* : String */;
val* var1163 /* : nullable Object */;
val* var1164 /* : String */;
val* var1165 /* : String */;
val* var1166 /* : RuntimeVariable */;
static val* varonce1167;
val* var1168 /* : String */;
char* var1169 /* : CString */;
val* var1170 /* : String */;
short int var1171 /* : Bool */;
val* var1173 /* : NativeArray[String] */;
static val* varonce1172;
static val* varonce1174;
val* var1175 /* : String */;
char* var1176 /* : CString */;
val* var1177 /* : String */;
val* var1178 /* : nullable Object */;
val* var1179 /* : String */;
val* var1180 /* : nullable Object */;
val* var1181 /* : String */;
val* var1182 /* : String */;
val* var1183 /* : RuntimeVariable */;
static val* varonce1184;
val* var1185 /* : String */;
char* var1186 /* : CString */;
val* var1187 /* : String */;
short int var1188 /* : Bool */;
val* var1190 /* : NativeArray[String] */;
static val* varonce1189;
static val* varonce1191;
val* var1192 /* : String */;
char* var1193 /* : CString */;
val* var1194 /* : String */;
val* var1195 /* : nullable Object */;
val* var1196 /* : String */;
val* var1197 /* : String */;
val* var1198 /* : RuntimeVariable */;
static val* varonce1199;
val* var1200 /* : String */;
char* var1201 /* : CString */;
val* var1202 /* : String */;
short int var1203 /* : Bool */;
val* var1204 /* : nullable Object */;
static val* varonce1205;
val* var1206 /* : String */;
char* var1207 /* : CString */;
val* var1208 /* : String */;
short int var1209 /* : Bool */;
val* var1211 /* : NativeArray[String] */;
static val* varonce1210;
static val* varonce1212;
val* var1213 /* : String */;
char* var1214 /* : CString */;
val* var1215 /* : String */;
val* var1216 /* : nullable Object */;
val* var1217 /* : String */;
val* var1218 /* : String */;
val* var1219 /* : RuntimeVariable */;
static val* varonce1220;
val* var1221 /* : String */;
char* var1222 /* : CString */;
val* var1223 /* : String */;
short int var1224 /* : Bool */;
val* var1226 /* : NativeArray[String] */;
static val* varonce1225;
static val* varonce1227;
val* var1228 /* : String */;
char* var1229 /* : CString */;
val* var1230 /* : String */;
val* var1231 /* : nullable Object */;
val* var1232 /* : String */;
val* var1233 /* : String */;
val* var1234 /* : RuntimeVariable */;
static val* varonce1235;
val* var1236 /* : String */;
char* var1237 /* : CString */;
val* var1238 /* : String */;
short int var1239 /* : Bool */;
val* var1241 /* : NativeArray[String] */;
static val* varonce1240;
static val* varonce1242;
val* var1243 /* : String */;
char* var1244 /* : CString */;
val* var1245 /* : String */;
val* var1246 /* : nullable Object */;
val* var1247 /* : String */;
val* var1248 /* : nullable Object */;
val* var1249 /* : String */;
val* var1250 /* : String */;
val* var1251 /* : RuntimeVariable */;
static val* varonce1252;
val* var1253 /* : String */;
char* var1254 /* : CString */;
val* var1255 /* : String */;
short int var1256 /* : Bool */;
val* var1258 /* : NativeArray[String] */;
static val* varonce1257;
static val* varonce1259;
val* var1260 /* : String */;
char* var1261 /* : CString */;
val* var1262 /* : String */;
val* var1263 /* : nullable Object */;
val* var1264 /* : String */;
val* var1265 /* : nullable Object */;
val* var1266 /* : String */;
val* var1267 /* : String */;
val* var1268 /* : RuntimeVariable */;
static val* varonce1269;
val* var1270 /* : String */;
char* var1271 /* : CString */;
val* var1272 /* : String */;
short int var1273 /* : Bool */;
val* var1274 /* : nullable Object */;
val* var1275 /* : nullable Object */;
val* var1276 /* : RuntimeVariable */;
static val* varonce1277;
val* var1278 /* : String */;
char* var1279 /* : CString */;
val* var1280 /* : String */;
short int var1281 /* : Bool */;
val* var1282 /* : nullable Object */;
val* var1283 /* : nullable Object */;
val* var1284 /* : RuntimeVariable */;
val* var_res1285 /* var res: RuntimeVariable */;
val* var1287 /* : NativeArray[String] */;
static val* varonce1286;
static val* varonce1288;
val* var1289 /* : String */;
char* var1290 /* : CString */;
val* var1291 /* : String */;
val* var1292 /* : String */;
val* var1293 /* : String */;
val* var1294 /* : RuntimeVariable */;
static val* varonce1295;
val* var1296 /* : String */;
char* var1297 /* : CString */;
val* var1298 /* : String */;
short int var1299 /* : Bool */;
val* var1301 /* : NativeArray[String] */;
static val* varonce1300;
static val* varonce1302;
val* var1303 /* : String */;
char* var1304 /* : CString */;
val* var1305 /* : String */;
val* var1306 /* : nullable Object */;
val* var1307 /* : String */;
val* var1308 /* : nullable Object */;
val* var1309 /* : String */;
val* var1310 /* : String */;
val* var1311 /* : RuntimeVariable */;
static val* varonce1312;
val* var1313 /* : String */;
char* var1314 /* : CString */;
val* var1315 /* : String */;
short int var1316 /* : Bool */;
val* var1318 /* : NativeArray[String] */;
static val* varonce1317;
static val* varonce1319;
val* var1320 /* : String */;
char* var1321 /* : CString */;
val* var1322 /* : String */;
val* var1323 /* : nullable Object */;
val* var1324 /* : String */;
val* var1325 /* : nullable Object */;
val* var1326 /* : String */;
val* var1327 /* : String */;
val* var1328 /* : RuntimeVariable */;
static val* varonce1329;
val* var1330 /* : String */;
char* var1331 /* : CString */;
val* var1332 /* : String */;
short int var1333 /* : Bool */;
val* var1335 /* : NativeArray[String] */;
static val* varonce1334;
static val* varonce1336;
val* var1337 /* : String */;
char* var1338 /* : CString */;
val* var1339 /* : String */;
val* var1340 /* : nullable Object */;
val* var1341 /* : String */;
val* var1342 /* : nullable Object */;
val* var1343 /* : String */;
val* var1344 /* : String */;
val* var1345 /* : RuntimeVariable */;
static val* varonce1346;
val* var1347 /* : String */;
char* var1348 /* : CString */;
val* var1349 /* : String */;
short int var1350 /* : Bool */;
val* var1352 /* : NativeArray[String] */;
static val* varonce1351;
static val* varonce1353;
val* var1354 /* : String */;
char* var1355 /* : CString */;
val* var1356 /* : String */;
val* var1357 /* : nullable Object */;
val* var1358 /* : String */;
val* var1359 /* : nullable Object */;
val* var1360 /* : String */;
val* var1361 /* : String */;
val* var1362 /* : RuntimeVariable */;
static val* varonce1363;
val* var1364 /* : String */;
char* var1365 /* : CString */;
val* var1366 /* : String */;
short int var1367 /* : Bool */;
val* var1369 /* : NativeArray[String] */;
static val* varonce1368;
static val* varonce1370;
val* var1371 /* : String */;
char* var1372 /* : CString */;
val* var1373 /* : String */;
val* var1374 /* : nullable Object */;
val* var1375 /* : String */;
val* var1376 /* : String */;
val* var1377 /* : RuntimeVariable */;
static val* varonce1378;
val* var1379 /* : String */;
char* var1380 /* : CString */;
val* var1381 /* : String */;
short int var1382 /* : Bool */;
val* var1384 /* : NativeArray[String] */;
static val* varonce1383;
static val* varonce1385;
val* var1386 /* : String */;
char* var1387 /* : CString */;
val* var1388 /* : String */;
val* var1389 /* : nullable Object */;
val* var1390 /* : String */;
val* var1391 /* : String */;
val* var1392 /* : RuntimeVariable */;
static val* varonce1393;
val* var1394 /* : String */;
char* var1395 /* : CString */;
val* var1396 /* : String */;
short int var1397 /* : Bool */;
val* var1399 /* : NativeArray[String] */;
static val* varonce1398;
static val* varonce1400;
val* var1401 /* : String */;
char* var1402 /* : CString */;
val* var1403 /* : String */;
val* var1404 /* : nullable Object */;
val* var1405 /* : String */;
val* var1406 /* : String */;
val* var1407 /* : RuntimeVariable */;
static val* varonce1408;
val* var1409 /* : String */;
char* var1410 /* : CString */;
val* var1411 /* : String */;
short int var1412 /* : Bool */;
val* var1414 /* : NativeArray[String] */;
static val* varonce1413;
static val* varonce1415;
val* var1416 /* : String */;
char* var1417 /* : CString */;
val* var1418 /* : String */;
val* var1419 /* : nullable Object */;
val* var1420 /* : String */;
val* var1421 /* : String */;
val* var1422 /* : RuntimeVariable */;
static val* varonce1423;
val* var1424 /* : String */;
char* var1425 /* : CString */;
val* var1426 /* : String */;
short int var1427 /* : Bool */;
val* var1429 /* : NativeArray[String] */;
static val* varonce1428;
static val* varonce1430;
val* var1431 /* : String */;
char* var1432 /* : CString */;
val* var1433 /* : String */;
val* var1434 /* : nullable Object */;
val* var1435 /* : String */;
val* var1436 /* : String */;
val* var1437 /* : RuntimeVariable */;
static val* varonce1438;
val* var1439 /* : String */;
char* var1440 /* : CString */;
val* var1441 /* : String */;
short int var1442 /* : Bool */;
val* var1444 /* : NativeArray[String] */;
static val* varonce1443;
static val* varonce1445;
val* var1446 /* : String */;
char* var1447 /* : CString */;
val* var1448 /* : String */;
val* var1449 /* : nullable Object */;
val* var1450 /* : String */;
val* var1451 /* : String */;
val* var1452 /* : RuntimeVariable */;
static val* varonce1453;
val* var1454 /* : String */;
char* var1455 /* : CString */;
val* var1456 /* : String */;
short int var1457 /* : Bool */;
val* var1459 /* : NativeArray[String] */;
static val* varonce1458;
static val* varonce1460;
val* var1461 /* : String */;
char* var1462 /* : CString */;
val* var1463 /* : String */;
val* var1464 /* : nullable Object */;
val* var1465 /* : String */;
val* var1466 /* : String */;
val* var1467 /* : RuntimeVariable */;
static val* varonce1468;
val* var1469 /* : String */;
char* var1470 /* : CString */;
val* var1471 /* : String */;
short int var1472 /* : Bool */;
static val* varonce1473;
val* var1474 /* : String */;
char* var1475 /* : CString */;
val* var1476 /* : String */;
short int var1477 /* : Bool */;
val* var1479 /* : NativeArray[String] */;
static val* varonce1478;
static val* varonce1480;
val* var1481 /* : String */;
char* var1482 /* : CString */;
val* var1483 /* : String */;
static val* varonce1484;
val* var1485 /* : String */;
char* var1486 /* : CString */;
val* var1487 /* : String */;
static val* varonce1488;
val* var1489 /* : String */;
char* var1490 /* : CString */;
val* var1491 /* : String */;
val* var1492 /* : nullable Object */;
val* var1493 /* : String */;
val* var1494 /* : nullable Object */;
val* var1495 /* : String */;
val* var1496 /* : String */;
val* var1497 /* : RuntimeVariable */;
static val* varonce1498;
val* var1499 /* : String */;
char* var1500 /* : CString */;
val* var1501 /* : String */;
short int var1502 /* : Bool */;
val* var1504 /* : NativeArray[String] */;
static val* varonce1503;
static val* varonce1505;
val* var1506 /* : String */;
char* var1507 /* : CString */;
val* var1508 /* : String */;
static val* varonce1509;
val* var1510 /* : String */;
char* var1511 /* : CString */;
val* var1512 /* : String */;
static val* varonce1513;
val* var1514 /* : String */;
char* var1515 /* : CString */;
val* var1516 /* : String */;
val* var1517 /* : nullable Object */;
val* var1518 /* : String */;
val* var1519 /* : nullable Object */;
val* var1520 /* : String */;
val* var1521 /* : nullable Object */;
val* var1522 /* : String */;
val* var1523 /* : String */;
static val* varonce1524;
val* var1525 /* : String */;
char* var1526 /* : CString */;
val* var1527 /* : String */;
short int var1528 /* : Bool */;
val* var1530 /* : NativeArray[String] */;
static val* varonce1529;
static val* varonce1531;
val* var1532 /* : String */;
char* var1533 /* : CString */;
val* var1534 /* : String */;
static val* varonce1535;
val* var1536 /* : String */;
char* var1537 /* : CString */;
val* var1538 /* : String */;
static val* varonce1539;
val* var1540 /* : String */;
char* var1541 /* : CString */;
val* var1542 /* : String */;
static val* varonce1543;
val* var1544 /* : String */;
char* var1545 /* : CString */;
val* var1546 /* : String */;
static val* varonce1547;
val* var1548 /* : String */;
char* var1549 /* : CString */;
val* var1550 /* : String */;
static val* varonce1551;
val* var1552 /* : String */;
char* var1553 /* : CString */;
val* var1554 /* : String */;
val* var1555 /* : nullable Object */;
val* var1556 /* : String */;
val* var1557 /* : nullable Object */;
val* var1558 /* : String */;
val* var1559 /* : nullable Object */;
val* var1560 /* : String */;
val* var1561 /* : nullable Object */;
val* var1562 /* : String */;
val* var1563 /* : nullable Object */;
val* var1564 /* : String */;
val* var1565 /* : String */;
static val* varonce1566;
val* var1567 /* : String */;
char* var1568 /* : CString */;
val* var1569 /* : String */;
short int var1570 /* : Bool */;
val* var1572 /* : NativeArray[String] */;
static val* varonce1571;
static val* varonce1573;
val* var1574 /* : String */;
char* var1575 /* : CString */;
val* var1576 /* : String */;
static val* varonce1577;
val* var1578 /* : String */;
char* var1579 /* : CString */;
val* var1580 /* : String */;
val* var1581 /* : nullable Object */;
val* var1582 /* : String */;
val* var1583 /* : String */;
val* var1584 /* : RuntimeVariable */;
static val* varonce1585;
val* var1586 /* : String */;
char* var1587 /* : CString */;
val* var1588 /* : String */;
short int var1589 /* : Bool */;
val* var1591 /* : NativeArray[String] */;
static val* varonce1590;
static val* varonce1592;
val* var1593 /* : String */;
char* var1594 /* : CString */;
val* var1595 /* : String */;
val* var1596 /* : nullable Object */;
val* var1597 /* : String */;
val* var1598 /* : nullable Object */;
val* var1599 /* : String */;
val* var1600 /* : String */;
val* var1601 /* : RuntimeVariable */;
static val* varonce1602;
val* var1603 /* : String */;
char* var1604 /* : CString */;
val* var1605 /* : String */;
short int var1606 /* : Bool */;
val* var1607 /* : nullable Object */;
val* var1608 /* : nullable Object */;
val* var1609 /* : RuntimeVariable */;
static val* varonce1610;
val* var1611 /* : String */;
char* var1612 /* : CString */;
val* var1613 /* : String */;
short int var1614 /* : Bool */;
val* var1615 /* : nullable Object */;
val* var1616 /* : nullable Object */;
val* var1617 /* : RuntimeVariable */;
val* var_res1618 /* var res: RuntimeVariable */;
val* var1620 /* : NativeArray[String] */;
static val* varonce1619;
static val* varonce1621;
val* var1622 /* : String */;
char* var1623 /* : CString */;
val* var1624 /* : String */;
val* var1625 /* : String */;
val* var1626 /* : String */;
val* var1627 /* : RuntimeVariable */;
static val* varonce1628;
val* var1629 /* : String */;
char* var1630 /* : CString */;
val* var1631 /* : String */;
short int var1632 /* : Bool */;
val* var1633 /* : nullable Object */;
val* var1634 /* : String */;
static val* varonce1635;
val* var1636 /* : String */;
char* var1637 /* : CString */;
val* var1638 /* : String */;
val* var1639 /* : String */;
val* var_alloc /* var alloc: String */;
val* var1641 /* : NativeArray[String] */;
static val* varonce1640;
static val* varonce1642;
val* var1643 /* : String */;
char* var1644 /* : CString */;
val* var1645 /* : String */;
val* var1646 /* : String */;
val* var1647 /* : RuntimeVariable */;
static val* varonce1648;
val* var1649 /* : String */;
char* var1650 /* : CString */;
val* var1651 /* : String */;
short int var1652 /* : Bool */;
val* var1654 /* : NativeArray[String] */;
static val* varonce1653;
static val* varonce1655;
val* var1656 /* : String */;
char* var1657 /* : CString */;
val* var1658 /* : String */;
static val* varonce1659;
val* var1660 /* : String */;
char* var1661 /* : CString */;
val* var1662 /* : String */;
static val* varonce1663;
val* var1664 /* : String */;
char* var1665 /* : CString */;
val* var1666 /* : String */;
val* var1667 /* : nullable Object */;
val* var1668 /* : String */;
val* var1669 /* : nullable Object */;
val* var1670 /* : String */;
val* var1671 /* : String */;
val* var1672 /* : RuntimeVariable */;
static val* varonce1673;
val* var1674 /* : String */;
char* var1675 /* : CString */;
val* var1676 /* : String */;
short int var1677 /* : Bool */;
val* var1679 /* : NativeArray[String] */;
static val* varonce1678;
static val* varonce1680;
val* var1681 /* : String */;
char* var1682 /* : CString */;
val* var1683 /* : String */;
static val* varonce1684;
val* var1685 /* : String */;
char* var1686 /* : CString */;
val* var1687 /* : String */;
static val* varonce1688;
val* var1689 /* : String */;
char* var1690 /* : CString */;
val* var1691 /* : String */;
val* var1692 /* : nullable Object */;
val* var1693 /* : String */;
val* var1694 /* : nullable Object */;
val* var1695 /* : String */;
val* var1696 /* : String */;
val* var1697 /* : RuntimeVariable */;
static val* varonce1698;
val* var1699 /* : String */;
char* var1700 /* : CString */;
val* var1701 /* : String */;
short int var1702 /* : Bool */;
short int var1703 /* : Bool */;
static val* varonce1704;
val* var1705 /* : String */;
char* var1706 /* : CString */;
val* var1707 /* : String */;
short int var1708 /* : Bool */;
static val* varonce1709;
val* var1710 /* : String */;
char* var1711 /* : CString */;
val* var1712 /* : String */;
short int var1713 /* : Bool */;
val* var1715 /* : NativeArray[String] */;
static val* varonce1714;
static val* varonce1716;
val* var1717 /* : String */;
char* var1718 /* : CString */;
val* var1719 /* : String */;
static val* varonce1720;
val* var1721 /* : String */;
char* var1722 /* : CString */;
val* var1723 /* : String */;
val* var1724 /* : nullable Object */;
val* var1725 /* : String */;
val* var1726 /* : String */;
static val* varonce1727;
val* var1728 /* : String */;
char* var1729 /* : CString */;
val* var1730 /* : String */;
short int var1731 /* : Bool */;
val* var1733 /* : NativeArray[String] */;
static val* varonce1732;
static val* varonce1734;
val* var1735 /* : String */;
char* var1736 /* : CString */;
val* var1737 /* : String */;
val* var1738 /* : nullable Object */;
val* var1739 /* : String */;
val* var1740 /* : String */;
val* var1741 /* : RuntimeVariable */;
static val* varonce1742;
val* var1743 /* : String */;
char* var1744 /* : CString */;
val* var1745 /* : String */;
short int var1746 /* : Bool */;
val* var1748 /* : NativeArray[String] */;
static val* varonce1747;
static val* varonce1749;
val* var1750 /* : String */;
char* var1751 /* : CString */;
val* var1752 /* : String */;
val* var1753 /* : nullable Object */;
val* var1754 /* : String */;
val* var1755 /* : nullable Object */;
val* var1756 /* : String */;
val* var1757 /* : String */;
val* var1758 /* : RuntimeVariable */;
static val* varonce1759;
val* var1760 /* : String */;
char* var1761 /* : CString */;
val* var1762 /* : String */;
short int var1763 /* : Bool */;
val* var1765 /* : NativeArray[String] */;
static val* varonce1764;
static val* varonce1766;
val* var1767 /* : String */;
char* var1768 /* : CString */;
val* var1769 /* : String */;
val* var1770 /* : nullable Object */;
val* var1771 /* : String */;
val* var1772 /* : nullable Object */;
val* var1773 /* : String */;
val* var1774 /* : String */;
val* var1775 /* : RuntimeVariable */;
static val* varonce1776;
val* var1777 /* : String */;
char* var1778 /* : CString */;
val* var1779 /* : String */;
short int var1780 /* : Bool */;
val* var1782 /* : NativeArray[String] */;
static val* varonce1781;
static val* varonce1783;
val* var1784 /* : String */;
char* var1785 /* : CString */;
val* var1786 /* : String */;
val* var1787 /* : nullable Object */;
val* var1788 /* : String */;
val* var1789 /* : String */;
val* var1790 /* : RuntimeVariable */;
static val* varonce1791;
val* var1792 /* : String */;
char* var1793 /* : CString */;
val* var1794 /* : String */;
short int var1795 /* : Bool */;
val* var1796 /* : nullable Object */;
static val* varonce1797;
val* var1798 /* : String */;
char* var1799 /* : CString */;
val* var1800 /* : String */;
short int var1801 /* : Bool */;
val* var1803 /* : NativeArray[String] */;
static val* varonce1802;
static val* varonce1804;
val* var1805 /* : String */;
char* var1806 /* : CString */;
val* var1807 /* : String */;
val* var1808 /* : nullable Object */;
val* var1809 /* : String */;
val* var1810 /* : nullable Object */;
val* var1811 /* : String */;
val* var1812 /* : String */;
val* var1813 /* : RuntimeVariable */;
static val* varonce1814;
val* var1815 /* : String */;
char* var1816 /* : CString */;
val* var1817 /* : String */;
short int var1818 /* : Bool */;
val* var1820 /* : NativeArray[String] */;
static val* varonce1819;
static val* varonce1821;
val* var1822 /* : String */;
char* var1823 /* : CString */;
val* var1824 /* : String */;
val* var1825 /* : nullable Object */;
val* var1826 /* : String */;
val* var1827 /* : nullable Object */;
val* var1828 /* : String */;
val* var1829 /* : String */;
val* var1830 /* : RuntimeVariable */;
static val* varonce1831;
val* var1832 /* : String */;
char* var1833 /* : CString */;
val* var1834 /* : String */;
short int var1835 /* : Bool */;
val* var1837 /* : NativeArray[String] */;
static val* varonce1836;
static val* varonce1838;
val* var1839 /* : String */;
char* var1840 /* : CString */;
val* var1841 /* : String */;
val* var1842 /* : nullable Object */;
val* var1843 /* : String */;
val* var1844 /* : nullable Object */;
val* var1845 /* : String */;
val* var1846 /* : String */;
val* var1847 /* : RuntimeVariable */;
static val* varonce1848;
val* var1849 /* : String */;
char* var1850 /* : CString */;
val* var1851 /* : String */;
short int var1852 /* : Bool */;
val* var1854 /* : NativeArray[String] */;
static val* varonce1853;
static val* varonce1855;
val* var1856 /* : String */;
char* var1857 /* : CString */;
val* var1858 /* : String */;
val* var1859 /* : nullable Object */;
val* var1860 /* : String */;
val* var1861 /* : nullable Object */;
val* var1862 /* : String */;
val* var1863 /* : String */;
val* var1864 /* : RuntimeVariable */;
static val* varonce1865;
val* var1866 /* : String */;
char* var1867 /* : CString */;
val* var1868 /* : String */;
short int var1869 /* : Bool */;
val* var1871 /* : NativeArray[String] */;
static val* varonce1870;
static val* varonce1872;
val* var1873 /* : String */;
char* var1874 /* : CString */;
val* var1875 /* : String */;
val* var1876 /* : nullable Object */;
val* var1877 /* : String */;
val* var1878 /* : nullable Object */;
val* var1879 /* : String */;
val* var1880 /* : String */;
val* var1881 /* : RuntimeVariable */;
static val* varonce1882;
val* var1883 /* : String */;
char* var1884 /* : CString */;
val* var1885 /* : String */;
short int var1886 /* : Bool */;
val* var1887 /* : nullable Object */;
val* var1888 /* : nullable Object */;
val* var1889 /* : RuntimeVariable */;
static val* varonce1890;
val* var1891 /* : String */;
char* var1892 /* : CString */;
val* var1893 /* : String */;
short int var1894 /* : Bool */;
val* var1895 /* : nullable Object */;
val* var1896 /* : nullable Object */;
val* var1897 /* : RuntimeVariable */;
val* var_res1898 /* var res: RuntimeVariable */;
val* var1900 /* : NativeArray[String] */;
static val* varonce1899;
static val* varonce1901;
val* var1902 /* : String */;
char* var1903 /* : CString */;
val* var1904 /* : String */;
val* var1905 /* : String */;
val* var1906 /* : String */;
val* var1907 /* : RuntimeVariable */;
static val* varonce1908;
val* var1909 /* : String */;
char* var1910 /* : CString */;
val* var1911 /* : String */;
short int var1912 /* : Bool */;
val* var1914 /* : NativeArray[String] */;
static val* varonce1913;
static val* varonce1915;
val* var1916 /* : String */;
char* var1917 /* : CString */;
val* var1918 /* : String */;
val* var1919 /* : nullable Object */;
val* var1920 /* : String */;
val* var1921 /* : nullable Object */;
val* var1922 /* : String */;
val* var1923 /* : String */;
val* var1924 /* : RuntimeVariable */;
static val* varonce1925;
val* var1926 /* : String */;
char* var1927 /* : CString */;
val* var1928 /* : String */;
short int var1929 /* : Bool */;
val* var1931 /* : NativeArray[String] */;
static val* varonce1930;
static val* varonce1932;
val* var1933 /* : String */;
char* var1934 /* : CString */;
val* var1935 /* : String */;
val* var1936 /* : nullable Object */;
val* var1937 /* : String */;
val* var1938 /* : nullable Object */;
val* var1939 /* : String */;
val* var1940 /* : String */;
val* var1941 /* : RuntimeVariable */;
static val* varonce1942;
val* var1943 /* : String */;
char* var1944 /* : CString */;
val* var1945 /* : String */;
short int var1946 /* : Bool */;
val* var1948 /* : NativeArray[String] */;
static val* varonce1947;
static val* varonce1949;
val* var1950 /* : String */;
char* var1951 /* : CString */;
val* var1952 /* : String */;
val* var1953 /* : nullable Object */;
val* var1954 /* : String */;
val* var1955 /* : nullable Object */;
val* var1956 /* : String */;
val* var1957 /* : String */;
val* var1958 /* : RuntimeVariable */;
static val* varonce1959;
val* var1960 /* : String */;
char* var1961 /* : CString */;
val* var1962 /* : String */;
short int var1963 /* : Bool */;
val* var1965 /* : NativeArray[String] */;
static val* varonce1964;
static val* varonce1966;
val* var1967 /* : String */;
char* var1968 /* : CString */;
val* var1969 /* : String */;
val* var1970 /* : nullable Object */;
val* var1971 /* : String */;
val* var1972 /* : nullable Object */;
val* var1973 /* : String */;
val* var1974 /* : String */;
val* var1975 /* : RuntimeVariable */;
static val* varonce1976;
val* var1977 /* : String */;
char* var1978 /* : CString */;
val* var1979 /* : String */;
short int var1980 /* : Bool */;
val* var1982 /* : NativeArray[String] */;
static val* varonce1981;
static val* varonce1983;
val* var1984 /* : String */;
char* var1985 /* : CString */;
val* var1986 /* : String */;
val* var1987 /* : nullable Object */;
val* var1988 /* : String */;
val* var1989 /* : String */;
val* var1990 /* : RuntimeVariable */;
static val* varonce1991;
val* var1992 /* : String */;
char* var1993 /* : CString */;
val* var1994 /* : String */;
short int var1995 /* : Bool */;
val* var1997 /* : NativeArray[String] */;
static val* varonce1996;
static val* varonce1998;
val* var1999 /* : String */;
char* var2000 /* : CString */;
val* var2001 /* : String */;
val* var2002 /* : nullable Object */;
val* var2003 /* : String */;
val* var2004 /* : String */;
val* var2005 /* : RuntimeVariable */;
static val* varonce2006;
val* var2007 /* : String */;
char* var2008 /* : CString */;
val* var2009 /* : String */;
short int var2010 /* : Bool */;
val* var2012 /* : NativeArray[String] */;
static val* varonce2011;
static val* varonce2013;
val* var2014 /* : String */;
char* var2015 /* : CString */;
val* var2016 /* : String */;
val* var2017 /* : nullable Object */;
val* var2018 /* : String */;
val* var2019 /* : String */;
val* var2020 /* : RuntimeVariable */;
static val* varonce2021;
val* var2022 /* : String */;
char* var2023 /* : CString */;
val* var2024 /* : String */;
short int var2025 /* : Bool */;
val* var2027 /* : NativeArray[String] */;
static val* varonce2026;
static val* varonce2028;
val* var2029 /* : String */;
char* var2030 /* : CString */;
val* var2031 /* : String */;
val* var2032 /* : nullable Object */;
val* var2033 /* : String */;
val* var2034 /* : String */;
val* var2035 /* : RuntimeVariable */;
static val* varonce2036;
val* var2037 /* : String */;
char* var2038 /* : CString */;
val* var2039 /* : String */;
short int var2040 /* : Bool */;
val* var2042 /* : NativeArray[String] */;
static val* varonce2041;
static val* varonce2043;
val* var2044 /* : String */;
char* var2045 /* : CString */;
val* var2046 /* : String */;
val* var2047 /* : nullable Object */;
val* var2048 /* : String */;
val* var2049 /* : String */;
val* var2050 /* : RuntimeVariable */;
static val* varonce2051;
val* var2052 /* : String */;
char* var2053 /* : CString */;
val* var2054 /* : String */;
short int var2055 /* : Bool */;
val* var2057 /* : NativeArray[String] */;
static val* varonce2056;
static val* varonce2058;
val* var2059 /* : String */;
char* var2060 /* : CString */;
val* var2061 /* : String */;
val* var2062 /* : nullable Object */;
val* var2063 /* : String */;
val* var2064 /* : String */;
val* var2065 /* : RuntimeVariable */;
static val* varonce2066;
val* var2067 /* : String */;
char* var2068 /* : CString */;
val* var2069 /* : String */;
short int var2070 /* : Bool */;
val* var2072 /* : NativeArray[String] */;
static val* varonce2071;
static val* varonce2073;
val* var2074 /* : String */;
char* var2075 /* : CString */;
val* var2076 /* : String */;
val* var2077 /* : nullable Object */;
val* var2078 /* : String */;
val* var2079 /* : String */;
val* var2080 /* : RuntimeVariable */;
static val* varonce2081;
val* var2082 /* : String */;
char* var2083 /* : CString */;
val* var2084 /* : String */;
short int var2085 /* : Bool */;
val* var2087 /* : NativeArray[String] */;
static val* varonce2086;
static val* varonce2088;
val* var2089 /* : String */;
char* var2090 /* : CString */;
val* var2091 /* : String */;
val* var2092 /* : nullable Object */;
val* var2093 /* : String */;
val* var2094 /* : nullable Object */;
val* var2095 /* : String */;
val* var2096 /* : String */;
val* var2097 /* : RuntimeVariable */;
static val* varonce2098;
val* var2099 /* : String */;
char* var2100 /* : CString */;
val* var2101 /* : String */;
short int var2102 /* : Bool */;
val* var2104 /* : NativeArray[String] */;
static val* varonce2103;
static val* varonce2105;
val* var2106 /* : String */;
char* var2107 /* : CString */;
val* var2108 /* : String */;
val* var2109 /* : nullable Object */;
val* var2110 /* : String */;
val* var2111 /* : nullable Object */;
val* var2112 /* : String */;
val* var2113 /* : String */;
val* var2114 /* : RuntimeVariable */;
static val* varonce2115;
val* var2116 /* : String */;
char* var2117 /* : CString */;
val* var2118 /* : String */;
short int var2119 /* : Bool */;
val* var2121 /* : NativeArray[String] */;
static val* varonce2120;
static val* varonce2122;
val* var2123 /* : String */;
char* var2124 /* : CString */;
val* var2125 /* : String */;
val* var2126 /* : nullable Object */;
val* var2127 /* : String */;
val* var2128 /* : nullable Object */;
val* var2129 /* : String */;
val* var2130 /* : String */;
val* var2131 /* : RuntimeVariable */;
static val* varonce2132;
val* var2133 /* : String */;
char* var2134 /* : CString */;
val* var2135 /* : String */;
short int var2136 /* : Bool */;
val* var2138 /* : NativeArray[String] */;
static val* varonce2137;
static val* varonce2139;
val* var2140 /* : String */;
char* var2141 /* : CString */;
val* var2142 /* : String */;
val* var2143 /* : nullable Object */;
val* var2144 /* : String */;
val* var2145 /* : String */;
val* var2146 /* : RuntimeVariable */;
static val* varonce2147;
val* var2148 /* : String */;
char* var2149 /* : CString */;
val* var2150 /* : String */;
short int var2151 /* : Bool */;
static val* varonce2152;
val* var2153 /* : String */;
char* var2154 /* : CString */;
val* var2155 /* : String */;
short int var2156 /* : Bool */;
val* var2158 /* : NativeArray[String] */;
static val* varonce2157;
static val* varonce2159;
val* var2160 /* : String */;
char* var2161 /* : CString */;
val* var2162 /* : String */;
static val* varonce2163;
val* var2164 /* : String */;
char* var2165 /* : CString */;
val* var2166 /* : String */;
val* var2167 /* : nullable Object */;
val* var2168 /* : String */;
val* var2169 /* : String */;
static val* varonce2170;
val* var2171 /* : String */;
char* var2172 /* : CString */;
val* var2173 /* : String */;
short int var2174 /* : Bool */;
val* var2176 /* : NativeArray[String] */;
static val* varonce2175;
static val* varonce2177;
val* var2178 /* : String */;
char* var2179 /* : CString */;
val* var2180 /* : String */;
val* var2181 /* : nullable Object */;
val* var2182 /* : String */;
val* var2183 /* : String */;
val* var2184 /* : RuntimeVariable */;
static val* varonce2185;
val* var2186 /* : String */;
char* var2187 /* : CString */;
val* var2188 /* : String */;
short int var2189 /* : Bool */;
val* var2191 /* : NativeArray[String] */;
static val* varonce2190;
static val* varonce2192;
val* var2193 /* : String */;
char* var2194 /* : CString */;
val* var2195 /* : String */;
val* var2196 /* : nullable Object */;
val* var2197 /* : String */;
val* var2198 /* : nullable Object */;
val* var2199 /* : String */;
val* var2200 /* : String */;
val* var2201 /* : RuntimeVariable */;
static val* varonce2202;
val* var2203 /* : String */;
char* var2204 /* : CString */;
val* var2205 /* : String */;
short int var2206 /* : Bool */;
val* var2208 /* : NativeArray[String] */;
static val* varonce2207;
static val* varonce2209;
val* var2210 /* : String */;
char* var2211 /* : CString */;
val* var2212 /* : String */;
val* var2213 /* : nullable Object */;
val* var2214 /* : String */;
val* var2215 /* : nullable Object */;
val* var2216 /* : String */;
val* var2217 /* : String */;
val* var2218 /* : RuntimeVariable */;
static val* varonce2219;
val* var2220 /* : String */;
char* var2221 /* : CString */;
val* var2222 /* : String */;
short int var2223 /* : Bool */;
val* var2225 /* : NativeArray[String] */;
static val* varonce2224;
static val* varonce2226;
val* var2227 /* : String */;
char* var2228 /* : CString */;
val* var2229 /* : String */;
val* var2230 /* : nullable Object */;
val* var2231 /* : String */;
val* var2232 /* : String */;
val* var2233 /* : RuntimeVariable */;
static val* varonce2234;
val* var2235 /* : String */;
char* var2236 /* : CString */;
val* var2237 /* : String */;
short int var2238 /* : Bool */;
val* var2239 /* : nullable Object */;
static val* varonce2240;
val* var2241 /* : String */;
char* var2242 /* : CString */;
val* var2243 /* : String */;
short int var2244 /* : Bool */;
val* var2246 /* : NativeArray[String] */;
static val* varonce2245;
static val* varonce2247;
val* var2248 /* : String */;
char* var2249 /* : CString */;
val* var2250 /* : String */;
val* var2251 /* : nullable Object */;
val* var2252 /* : String */;
val* var2253 /* : nullable Object */;
val* var2254 /* : String */;
val* var2255 /* : String */;
val* var2256 /* : RuntimeVariable */;
static val* varonce2257;
val* var2258 /* : String */;
char* var2259 /* : CString */;
val* var2260 /* : String */;
short int var2261 /* : Bool */;
val* var2263 /* : NativeArray[String] */;
static val* varonce2262;
static val* varonce2264;
val* var2265 /* : String */;
char* var2266 /* : CString */;
val* var2267 /* : String */;
val* var2268 /* : nullable Object */;
val* var2269 /* : String */;
val* var2270 /* : nullable Object */;
val* var2271 /* : String */;
val* var2272 /* : String */;
val* var2273 /* : RuntimeVariable */;
static val* varonce2274;
val* var2275 /* : String */;
char* var2276 /* : CString */;
val* var2277 /* : String */;
short int var2278 /* : Bool */;
val* var2280 /* : NativeArray[String] */;
static val* varonce2279;
static val* varonce2281;
val* var2282 /* : String */;
char* var2283 /* : CString */;
val* var2284 /* : String */;
val* var2285 /* : nullable Object */;
val* var2286 /* : String */;
val* var2287 /* : nullable Object */;
val* var2288 /* : String */;
val* var2289 /* : String */;
val* var2290 /* : RuntimeVariable */;
static val* varonce2291;
val* var2292 /* : String */;
char* var2293 /* : CString */;
val* var2294 /* : String */;
short int var2295 /* : Bool */;
val* var2297 /* : NativeArray[String] */;
static val* varonce2296;
static val* varonce2298;
val* var2299 /* : String */;
char* var2300 /* : CString */;
val* var2301 /* : String */;
val* var2302 /* : nullable Object */;
val* var2303 /* : String */;
val* var2304 /* : nullable Object */;
val* var2305 /* : String */;
val* var2306 /* : String */;
val* var2307 /* : RuntimeVariable */;
static val* varonce2308;
val* var2309 /* : String */;
char* var2310 /* : CString */;
val* var2311 /* : String */;
short int var2312 /* : Bool */;
val* var2314 /* : NativeArray[String] */;
static val* varonce2313;
static val* varonce2315;
val* var2316 /* : String */;
char* var2317 /* : CString */;
val* var2318 /* : String */;
val* var2319 /* : nullable Object */;
val* var2320 /* : String */;
val* var2321 /* : nullable Object */;
val* var2322 /* : String */;
val* var2323 /* : String */;
val* var2324 /* : RuntimeVariable */;
static val* varonce2325;
val* var2326 /* : String */;
char* var2327 /* : CString */;
val* var2328 /* : String */;
short int var2329 /* : Bool */;
val* var2330 /* : nullable Object */;
val* var2331 /* : nullable Object */;
val* var2332 /* : RuntimeVariable */;
static val* varonce2333;
val* var2334 /* : String */;
char* var2335 /* : CString */;
val* var2336 /* : String */;
short int var2337 /* : Bool */;
val* var2338 /* : nullable Object */;
val* var2339 /* : nullable Object */;
val* var2340 /* : RuntimeVariable */;
val* var_res2341 /* var res: RuntimeVariable */;
val* var2343 /* : NativeArray[String] */;
static val* varonce2342;
static val* varonce2344;
val* var2345 /* : String */;
char* var2346 /* : CString */;
val* var2347 /* : String */;
val* var2348 /* : String */;
val* var2349 /* : String */;
val* var2350 /* : RuntimeVariable */;
static val* varonce2351;
val* var2352 /* : String */;
char* var2353 /* : CString */;
val* var2354 /* : String */;
short int var2355 /* : Bool */;
val* var2357 /* : NativeArray[String] */;
static val* varonce2356;
static val* varonce2358;
val* var2359 /* : String */;
char* var2360 /* : CString */;
val* var2361 /* : String */;
val* var2362 /* : nullable Object */;
val* var2363 /* : String */;
val* var2364 /* : nullable Object */;
val* var2365 /* : String */;
val* var2366 /* : String */;
val* var2367 /* : RuntimeVariable */;
static val* varonce2368;
val* var2369 /* : String */;
char* var2370 /* : CString */;
val* var2371 /* : String */;
short int var2372 /* : Bool */;
val* var2374 /* : NativeArray[String] */;
static val* varonce2373;
static val* varonce2375;
val* var2376 /* : String */;
char* var2377 /* : CString */;
val* var2378 /* : String */;
val* var2379 /* : nullable Object */;
val* var2380 /* : String */;
val* var2381 /* : nullable Object */;
val* var2382 /* : String */;
val* var2383 /* : String */;
val* var2384 /* : RuntimeVariable */;
static val* varonce2385;
val* var2386 /* : String */;
char* var2387 /* : CString */;
val* var2388 /* : String */;
short int var2389 /* : Bool */;
val* var2391 /* : NativeArray[String] */;
static val* varonce2390;
static val* varonce2392;
val* var2393 /* : String */;
char* var2394 /* : CString */;
val* var2395 /* : String */;
val* var2396 /* : nullable Object */;
val* var2397 /* : String */;
val* var2398 /* : nullable Object */;
val* var2399 /* : String */;
val* var2400 /* : String */;
val* var2401 /* : RuntimeVariable */;
static val* varonce2402;
val* var2403 /* : String */;
char* var2404 /* : CString */;
val* var2405 /* : String */;
short int var2406 /* : Bool */;
val* var2408 /* : NativeArray[String] */;
static val* varonce2407;
static val* varonce2409;
val* var2410 /* : String */;
char* var2411 /* : CString */;
val* var2412 /* : String */;
val* var2413 /* : nullable Object */;
val* var2414 /* : String */;
val* var2415 /* : nullable Object */;
val* var2416 /* : String */;
val* var2417 /* : String */;
val* var2418 /* : RuntimeVariable */;
static val* varonce2419;
val* var2420 /* : String */;
char* var2421 /* : CString */;
val* var2422 /* : String */;
short int var2423 /* : Bool */;
val* var2425 /* : NativeArray[String] */;
static val* varonce2424;
static val* varonce2426;
val* var2427 /* : String */;
char* var2428 /* : CString */;
val* var2429 /* : String */;
val* var2430 /* : nullable Object */;
val* var2431 /* : String */;
val* var2432 /* : String */;
val* var2433 /* : RuntimeVariable */;
static val* varonce2434;
val* var2435 /* : String */;
char* var2436 /* : CString */;
val* var2437 /* : String */;
short int var2438 /* : Bool */;
val* var2440 /* : NativeArray[String] */;
static val* varonce2439;
static val* varonce2441;
val* var2442 /* : String */;
char* var2443 /* : CString */;
val* var2444 /* : String */;
val* var2445 /* : nullable Object */;
val* var2446 /* : String */;
val* var2447 /* : String */;
val* var2448 /* : RuntimeVariable */;
static val* varonce2449;
val* var2450 /* : String */;
char* var2451 /* : CString */;
val* var2452 /* : String */;
short int var2453 /* : Bool */;
val* var2455 /* : NativeArray[String] */;
static val* varonce2454;
static val* varonce2456;
val* var2457 /* : String */;
char* var2458 /* : CString */;
val* var2459 /* : String */;
val* var2460 /* : nullable Object */;
val* var2461 /* : String */;
val* var2462 /* : String */;
val* var2463 /* : RuntimeVariable */;
static val* varonce2464;
val* var2465 /* : String */;
char* var2466 /* : CString */;
val* var2467 /* : String */;
short int var2468 /* : Bool */;
val* var2470 /* : NativeArray[String] */;
static val* varonce2469;
static val* varonce2471;
val* var2472 /* : String */;
char* var2473 /* : CString */;
val* var2474 /* : String */;
val* var2475 /* : nullable Object */;
val* var2476 /* : String */;
val* var2477 /* : String */;
val* var2478 /* : RuntimeVariable */;
static val* varonce2479;
val* var2480 /* : String */;
char* var2481 /* : CString */;
val* var2482 /* : String */;
short int var2483 /* : Bool */;
val* var2485 /* : NativeArray[String] */;
static val* varonce2484;
static val* varonce2486;
val* var2487 /* : String */;
char* var2488 /* : CString */;
val* var2489 /* : String */;
val* var2490 /* : nullable Object */;
val* var2491 /* : String */;
val* var2492 /* : String */;
val* var2493 /* : RuntimeVariable */;
static val* varonce2494;
val* var2495 /* : String */;
char* var2496 /* : CString */;
val* var2497 /* : String */;
short int var2498 /* : Bool */;
val* var2500 /* : NativeArray[String] */;
static val* varonce2499;
static val* varonce2501;
val* var2502 /* : String */;
char* var2503 /* : CString */;
val* var2504 /* : String */;
val* var2505 /* : nullable Object */;
val* var2506 /* : String */;
val* var2507 /* : String */;
val* var2508 /* : RuntimeVariable */;
static val* varonce2509;
val* var2510 /* : String */;
char* var2511 /* : CString */;
val* var2512 /* : String */;
short int var2513 /* : Bool */;
val* var2515 /* : NativeArray[String] */;
static val* varonce2514;
static val* varonce2516;
val* var2517 /* : String */;
char* var2518 /* : CString */;
val* var2519 /* : String */;
val* var2520 /* : nullable Object */;
val* var2521 /* : String */;
val* var2522 /* : String */;
val* var2523 /* : RuntimeVariable */;
static val* varonce2524;
val* var2525 /* : String */;
char* var2526 /* : CString */;
val* var2527 /* : String */;
short int var2528 /* : Bool */;
val* var2530 /* : NativeArray[String] */;
static val* varonce2529;
static val* varonce2531;
val* var2532 /* : String */;
char* var2533 /* : CString */;
val* var2534 /* : String */;
val* var2535 /* : nullable Object */;
val* var2536 /* : String */;
val* var2537 /* : nullable Object */;
val* var2538 /* : String */;
val* var2539 /* : String */;
val* var2540 /* : RuntimeVariable */;
static val* varonce2541;
val* var2542 /* : String */;
char* var2543 /* : CString */;
val* var2544 /* : String */;
short int var2545 /* : Bool */;
val* var2547 /* : NativeArray[String] */;
static val* varonce2546;
static val* varonce2548;
val* var2549 /* : String */;
char* var2550 /* : CString */;
val* var2551 /* : String */;
val* var2552 /* : nullable Object */;
val* var2553 /* : String */;
val* var2554 /* : nullable Object */;
val* var2555 /* : String */;
val* var2556 /* : String */;
val* var2557 /* : RuntimeVariable */;
static val* varonce2558;
val* var2559 /* : String */;
char* var2560 /* : CString */;
val* var2561 /* : String */;
short int var2562 /* : Bool */;
val* var2564 /* : NativeArray[String] */;
static val* varonce2563;
static val* varonce2565;
val* var2566 /* : String */;
char* var2567 /* : CString */;
val* var2568 /* : String */;
val* var2569 /* : nullable Object */;
val* var2570 /* : String */;
val* var2571 /* : nullable Object */;
val* var2572 /* : String */;
val* var2573 /* : String */;
val* var2574 /* : RuntimeVariable */;
static val* varonce2575;
val* var2576 /* : String */;
char* var2577 /* : CString */;
val* var2578 /* : String */;
short int var2579 /* : Bool */;
val* var2581 /* : NativeArray[String] */;
static val* varonce2580;
static val* varonce2582;
val* var2583 /* : String */;
char* var2584 /* : CString */;
val* var2585 /* : String */;
val* var2586 /* : nullable Object */;
val* var2587 /* : String */;
val* var2588 /* : String */;
val* var2589 /* : RuntimeVariable */;
static val* varonce2590;
val* var2591 /* : String */;
char* var2592 /* : CString */;
val* var2593 /* : String */;
short int var2594 /* : Bool */;
static val* varonce2595;
val* var2596 /* : String */;
char* var2597 /* : CString */;
val* var2598 /* : String */;
short int var2599 /* : Bool */;
val* var2601 /* : NativeArray[String] */;
static val* varonce2600;
static val* varonce2602;
val* var2603 /* : String */;
char* var2604 /* : CString */;
val* var2605 /* : String */;
static val* varonce2606;
val* var2607 /* : String */;
char* var2608 /* : CString */;
val* var2609 /* : String */;
val* var2610 /* : nullable Object */;
val* var2611 /* : String */;
val* var2612 /* : String */;
static val* varonce2613;
val* var2614 /* : String */;
char* var2615 /* : CString */;
val* var2616 /* : String */;
short int var2617 /* : Bool */;
val* var2619 /* : NativeArray[String] */;
static val* varonce2618;
static val* varonce2620;
val* var2621 /* : String */;
char* var2622 /* : CString */;
val* var2623 /* : String */;
val* var2624 /* : nullable Object */;
val* var2625 /* : String */;
val* var2626 /* : String */;
val* var2627 /* : RuntimeVariable */;
static val* varonce2628;
val* var2629 /* : String */;
char* var2630 /* : CString */;
val* var2631 /* : String */;
short int var2632 /* : Bool */;
val* var2634 /* : NativeArray[String] */;
static val* varonce2633;
static val* varonce2635;
val* var2636 /* : String */;
char* var2637 /* : CString */;
val* var2638 /* : String */;
val* var2639 /* : nullable Object */;
val* var2640 /* : String */;
val* var2641 /* : nullable Object */;
val* var2642 /* : String */;
val* var2643 /* : String */;
val* var2644 /* : RuntimeVariable */;
static val* varonce2645;
val* var2646 /* : String */;
char* var2647 /* : CString */;
val* var2648 /* : String */;
short int var2649 /* : Bool */;
val* var2651 /* : NativeArray[String] */;
static val* varonce2650;
static val* varonce2652;
val* var2653 /* : String */;
char* var2654 /* : CString */;
val* var2655 /* : String */;
val* var2656 /* : nullable Object */;
val* var2657 /* : String */;
val* var2658 /* : nullable Object */;
val* var2659 /* : String */;
val* var2660 /* : String */;
val* var2661 /* : RuntimeVariable */;
static val* varonce2662;
val* var2663 /* : String */;
char* var2664 /* : CString */;
val* var2665 /* : String */;
short int var2666 /* : Bool */;
val* var2668 /* : NativeArray[String] */;
static val* varonce2667;
static val* varonce2669;
val* var2670 /* : String */;
char* var2671 /* : CString */;
val* var2672 /* : String */;
val* var2673 /* : nullable Object */;
val* var2674 /* : String */;
val* var2675 /* : String */;
val* var2676 /* : RuntimeVariable */;
static val* varonce2677;
val* var2678 /* : String */;
char* var2679 /* : CString */;
val* var2680 /* : String */;
short int var2681 /* : Bool */;
val* var2682 /* : nullable Object */;
static val* varonce2683;
val* var2684 /* : String */;
char* var2685 /* : CString */;
val* var2686 /* : String */;
short int var2687 /* : Bool */;
val* var2689 /* : NativeArray[String] */;
static val* varonce2688;
static val* varonce2690;
val* var2691 /* : String */;
char* var2692 /* : CString */;
val* var2693 /* : String */;
val* var2694 /* : nullable Object */;
val* var2695 /* : String */;
val* var2696 /* : nullable Object */;
val* var2697 /* : String */;
val* var2698 /* : String */;
val* var2699 /* : RuntimeVariable */;
static val* varonce2700;
val* var2701 /* : String */;
char* var2702 /* : CString */;
val* var2703 /* : String */;
short int var2704 /* : Bool */;
val* var2706 /* : NativeArray[String] */;
static val* varonce2705;
static val* varonce2707;
val* var2708 /* : String */;
char* var2709 /* : CString */;
val* var2710 /* : String */;
val* var2711 /* : nullable Object */;
val* var2712 /* : String */;
val* var2713 /* : nullable Object */;
val* var2714 /* : String */;
val* var2715 /* : String */;
val* var2716 /* : RuntimeVariable */;
static val* varonce2717;
val* var2718 /* : String */;
char* var2719 /* : CString */;
val* var2720 /* : String */;
short int var2721 /* : Bool */;
val* var2723 /* : NativeArray[String] */;
static val* varonce2722;
static val* varonce2724;
val* var2725 /* : String */;
char* var2726 /* : CString */;
val* var2727 /* : String */;
val* var2728 /* : nullable Object */;
val* var2729 /* : String */;
val* var2730 /* : nullable Object */;
val* var2731 /* : String */;
val* var2732 /* : String */;
val* var2733 /* : RuntimeVariable */;
static val* varonce2734;
val* var2735 /* : String */;
char* var2736 /* : CString */;
val* var2737 /* : String */;
short int var2738 /* : Bool */;
val* var2740 /* : NativeArray[String] */;
static val* varonce2739;
static val* varonce2741;
val* var2742 /* : String */;
char* var2743 /* : CString */;
val* var2744 /* : String */;
val* var2745 /* : nullable Object */;
val* var2746 /* : String */;
val* var2747 /* : nullable Object */;
val* var2748 /* : String */;
val* var2749 /* : String */;
val* var2750 /* : RuntimeVariable */;
static val* varonce2751;
val* var2752 /* : String */;
char* var2753 /* : CString */;
val* var2754 /* : String */;
short int var2755 /* : Bool */;
val* var2757 /* : NativeArray[String] */;
static val* varonce2756;
static val* varonce2758;
val* var2759 /* : String */;
char* var2760 /* : CString */;
val* var2761 /* : String */;
val* var2762 /* : nullable Object */;
val* var2763 /* : String */;
val* var2764 /* : nullable Object */;
val* var2765 /* : String */;
val* var2766 /* : String */;
val* var2767 /* : RuntimeVariable */;
static val* varonce2768;
val* var2769 /* : String */;
char* var2770 /* : CString */;
val* var2771 /* : String */;
short int var2772 /* : Bool */;
val* var2773 /* : nullable Object */;
val* var2774 /* : nullable Object */;
val* var2775 /* : RuntimeVariable */;
static val* varonce2776;
val* var2777 /* : String */;
char* var2778 /* : CString */;
val* var2779 /* : String */;
short int var2780 /* : Bool */;
val* var2781 /* : nullable Object */;
val* var2782 /* : nullable Object */;
val* var2783 /* : RuntimeVariable */;
val* var_res2784 /* var res: RuntimeVariable */;
val* var2786 /* : NativeArray[String] */;
static val* varonce2785;
static val* varonce2787;
val* var2788 /* : String */;
char* var2789 /* : CString */;
val* var2790 /* : String */;
val* var2791 /* : String */;
val* var2792 /* : String */;
val* var2793 /* : RuntimeVariable */;
static val* varonce2794;
val* var2795 /* : String */;
char* var2796 /* : CString */;
val* var2797 /* : String */;
short int var2798 /* : Bool */;
val* var2800 /* : NativeArray[String] */;
static val* varonce2799;
static val* varonce2801;
val* var2802 /* : String */;
char* var2803 /* : CString */;
val* var2804 /* : String */;
val* var2805 /* : nullable Object */;
val* var2806 /* : String */;
val* var2807 /* : nullable Object */;
val* var2808 /* : String */;
val* var2809 /* : String */;
val* var2810 /* : RuntimeVariable */;
static val* varonce2811;
val* var2812 /* : String */;
char* var2813 /* : CString */;
val* var2814 /* : String */;
short int var2815 /* : Bool */;
val* var2817 /* : NativeArray[String] */;
static val* varonce2816;
static val* varonce2818;
val* var2819 /* : String */;
char* var2820 /* : CString */;
val* var2821 /* : String */;
val* var2822 /* : nullable Object */;
val* var2823 /* : String */;
val* var2824 /* : nullable Object */;
val* var2825 /* : String */;
val* var2826 /* : String */;
val* var2827 /* : RuntimeVariable */;
static val* varonce2828;
val* var2829 /* : String */;
char* var2830 /* : CString */;
val* var2831 /* : String */;
short int var2832 /* : Bool */;
val* var2834 /* : NativeArray[String] */;
static val* varonce2833;
static val* varonce2835;
val* var2836 /* : String */;
char* var2837 /* : CString */;
val* var2838 /* : String */;
val* var2839 /* : nullable Object */;
val* var2840 /* : String */;
val* var2841 /* : nullable Object */;
val* var2842 /* : String */;
val* var2843 /* : String */;
val* var2844 /* : RuntimeVariable */;
static val* varonce2845;
val* var2846 /* : String */;
char* var2847 /* : CString */;
val* var2848 /* : String */;
short int var2849 /* : Bool */;
val* var2851 /* : NativeArray[String] */;
static val* varonce2850;
static val* varonce2852;
val* var2853 /* : String */;
char* var2854 /* : CString */;
val* var2855 /* : String */;
val* var2856 /* : nullable Object */;
val* var2857 /* : String */;
val* var2858 /* : nullable Object */;
val* var2859 /* : String */;
val* var2860 /* : String */;
val* var2861 /* : RuntimeVariable */;
static val* varonce2862;
val* var2863 /* : String */;
char* var2864 /* : CString */;
val* var2865 /* : String */;
short int var2866 /* : Bool */;
val* var2868 /* : NativeArray[String] */;
static val* varonce2867;
static val* varonce2869;
val* var2870 /* : String */;
char* var2871 /* : CString */;
val* var2872 /* : String */;
val* var2873 /* : nullable Object */;
val* var2874 /* : String */;
val* var2875 /* : String */;
val* var2876 /* : RuntimeVariable */;
static val* varonce2877;
val* var2878 /* : String */;
char* var2879 /* : CString */;
val* var2880 /* : String */;
short int var2881 /* : Bool */;
val* var2883 /* : NativeArray[String] */;
static val* varonce2882;
static val* varonce2884;
val* var2885 /* : String */;
char* var2886 /* : CString */;
val* var2887 /* : String */;
val* var2888 /* : nullable Object */;
val* var2889 /* : String */;
val* var2890 /* : String */;
val* var2891 /* : RuntimeVariable */;
static val* varonce2892;
val* var2893 /* : String */;
char* var2894 /* : CString */;
val* var2895 /* : String */;
short int var2896 /* : Bool */;
val* var2898 /* : NativeArray[String] */;
static val* varonce2897;
static val* varonce2899;
val* var2900 /* : String */;
char* var2901 /* : CString */;
val* var2902 /* : String */;
val* var2903 /* : nullable Object */;
val* var2904 /* : String */;
val* var2905 /* : String */;
val* var2906 /* : RuntimeVariable */;
static val* varonce2907;
val* var2908 /* : String */;
char* var2909 /* : CString */;
val* var2910 /* : String */;
short int var2911 /* : Bool */;
val* var2913 /* : NativeArray[String] */;
static val* varonce2912;
static val* varonce2914;
val* var2915 /* : String */;
char* var2916 /* : CString */;
val* var2917 /* : String */;
val* var2918 /* : nullable Object */;
val* var2919 /* : String */;
val* var2920 /* : String */;
val* var2921 /* : RuntimeVariable */;
static val* varonce2922;
val* var2923 /* : String */;
char* var2924 /* : CString */;
val* var2925 /* : String */;
short int var2926 /* : Bool */;
val* var2928 /* : NativeArray[String] */;
static val* varonce2927;
static val* varonce2929;
val* var2930 /* : String */;
char* var2931 /* : CString */;
val* var2932 /* : String */;
val* var2933 /* : nullable Object */;
val* var2934 /* : String */;
val* var2935 /* : String */;
val* var2936 /* : RuntimeVariable */;
static val* varonce2937;
val* var2938 /* : String */;
char* var2939 /* : CString */;
val* var2940 /* : String */;
short int var2941 /* : Bool */;
val* var2943 /* : NativeArray[String] */;
static val* varonce2942;
static val* varonce2944;
val* var2945 /* : String */;
char* var2946 /* : CString */;
val* var2947 /* : String */;
val* var2948 /* : nullable Object */;
val* var2949 /* : String */;
val* var2950 /* : String */;
val* var2951 /* : RuntimeVariable */;
static val* varonce2952;
val* var2953 /* : String */;
char* var2954 /* : CString */;
val* var2955 /* : String */;
short int var2956 /* : Bool */;
val* var2958 /* : NativeArray[String] */;
static val* varonce2957;
static val* varonce2959;
val* var2960 /* : String */;
char* var2961 /* : CString */;
val* var2962 /* : String */;
val* var2963 /* : nullable Object */;
val* var2964 /* : String */;
val* var2965 /* : String */;
val* var2966 /* : RuntimeVariable */;
static val* varonce2967;
val* var2968 /* : String */;
char* var2969 /* : CString */;
val* var2970 /* : String */;
short int var2971 /* : Bool */;
val* var2973 /* : NativeArray[String] */;
static val* varonce2972;
static val* varonce2974;
val* var2975 /* : String */;
char* var2976 /* : CString */;
val* var2977 /* : String */;
val* var2978 /* : nullable Object */;
val* var2979 /* : String */;
val* var2980 /* : nullable Object */;
val* var2981 /* : String */;
val* var2982 /* : String */;
val* var2983 /* : RuntimeVariable */;
static val* varonce2984;
val* var2985 /* : String */;
char* var2986 /* : CString */;
val* var2987 /* : String */;
short int var2988 /* : Bool */;
val* var2990 /* : NativeArray[String] */;
static val* varonce2989;
static val* varonce2991;
val* var2992 /* : String */;
char* var2993 /* : CString */;
val* var2994 /* : String */;
val* var2995 /* : nullable Object */;
val* var2996 /* : String */;
val* var2997 /* : nullable Object */;
val* var2998 /* : String */;
val* var2999 /* : String */;
val* var3000 /* : RuntimeVariable */;
static val* varonce3001;
val* var3002 /* : String */;
char* var3003 /* : CString */;
val* var3004 /* : String */;
short int var3005 /* : Bool */;
val* var3007 /* : NativeArray[String] */;
static val* varonce3006;
static val* varonce3008;
val* var3009 /* : String */;
char* var3010 /* : CString */;
val* var3011 /* : String */;
val* var3012 /* : nullable Object */;
val* var3013 /* : String */;
val* var3014 /* : nullable Object */;
val* var3015 /* : String */;
val* var3016 /* : String */;
val* var3017 /* : RuntimeVariable */;
static val* varonce3018;
val* var3019 /* : String */;
char* var3020 /* : CString */;
val* var3021 /* : String */;
short int var3022 /* : Bool */;
val* var3024 /* : NativeArray[String] */;
static val* varonce3023;
static val* varonce3025;
val* var3026 /* : String */;
char* var3027 /* : CString */;
val* var3028 /* : String */;
val* var3029 /* : nullable Object */;
val* var3030 /* : String */;
val* var3031 /* : String */;
val* var3032 /* : RuntimeVariable */;
static val* varonce3033;
val* var3034 /* : String */;
char* var3035 /* : CString */;
val* var3036 /* : String */;
short int var3037 /* : Bool */;
static val* varonce3038;
val* var3039 /* : String */;
char* var3040 /* : CString */;
val* var3041 /* : String */;
short int var3042 /* : Bool */;
val* var3044 /* : NativeArray[String] */;
static val* varonce3043;
static val* varonce3045;
val* var3046 /* : String */;
char* var3047 /* : CString */;
val* var3048 /* : String */;
static val* varonce3049;
val* var3050 /* : String */;
char* var3051 /* : CString */;
val* var3052 /* : String */;
val* var3053 /* : nullable Object */;
val* var3054 /* : String */;
val* var3055 /* : String */;
static val* varonce3056;
val* var3057 /* : String */;
char* var3058 /* : CString */;
val* var3059 /* : String */;
short int var3060 /* : Bool */;
val* var3062 /* : NativeArray[String] */;
static val* varonce3061;
static val* varonce3063;
val* var3064 /* : String */;
char* var3065 /* : CString */;
val* var3066 /* : String */;
val* var3067 /* : nullable Object */;
val* var3068 /* : String */;
val* var3069 /* : String */;
val* var3070 /* : RuntimeVariable */;
static val* varonce3071;
val* var3072 /* : String */;
char* var3073 /* : CString */;
val* var3074 /* : String */;
short int var3075 /* : Bool */;
val* var3077 /* : NativeArray[String] */;
static val* varonce3076;
static val* varonce3078;
val* var3079 /* : String */;
char* var3080 /* : CString */;
val* var3081 /* : String */;
val* var3082 /* : nullable Object */;
val* var3083 /* : String */;
val* var3084 /* : nullable Object */;
val* var3085 /* : String */;
val* var3086 /* : String */;
val* var3087 /* : RuntimeVariable */;
static val* varonce3088;
val* var3089 /* : String */;
char* var3090 /* : CString */;
val* var3091 /* : String */;
short int var3092 /* : Bool */;
val* var3094 /* : NativeArray[String] */;
static val* varonce3093;
static val* varonce3095;
val* var3096 /* : String */;
char* var3097 /* : CString */;
val* var3098 /* : String */;
val* var3099 /* : nullable Object */;
val* var3100 /* : String */;
val* var3101 /* : nullable Object */;
val* var3102 /* : String */;
val* var3103 /* : String */;
val* var3104 /* : RuntimeVariable */;
static val* varonce3105;
val* var3106 /* : String */;
char* var3107 /* : CString */;
val* var3108 /* : String */;
short int var3109 /* : Bool */;
val* var3111 /* : NativeArray[String] */;
static val* varonce3110;
static val* varonce3112;
val* var3113 /* : String */;
char* var3114 /* : CString */;
val* var3115 /* : String */;
val* var3116 /* : nullable Object */;
val* var3117 /* : String */;
val* var3118 /* : String */;
val* var3119 /* : RuntimeVariable */;
static val* varonce3120;
val* var3121 /* : String */;
char* var3122 /* : CString */;
val* var3123 /* : String */;
short int var3124 /* : Bool */;
val* var3125 /* : nullable Object */;
static val* varonce3126;
val* var3127 /* : String */;
char* var3128 /* : CString */;
val* var3129 /* : String */;
short int var3130 /* : Bool */;
val* var3132 /* : NativeArray[String] */;
static val* varonce3131;
static val* varonce3133;
val* var3134 /* : String */;
char* var3135 /* : CString */;
val* var3136 /* : String */;
val* var3137 /* : nullable Object */;
val* var3138 /* : String */;
val* var3139 /* : nullable Object */;
val* var3140 /* : String */;
val* var3141 /* : String */;
val* var3142 /* : RuntimeVariable */;
static val* varonce3143;
val* var3144 /* : String */;
char* var3145 /* : CString */;
val* var3146 /* : String */;
short int var3147 /* : Bool */;
val* var3149 /* : NativeArray[String] */;
static val* varonce3148;
static val* varonce3150;
val* var3151 /* : String */;
char* var3152 /* : CString */;
val* var3153 /* : String */;
val* var3154 /* : nullable Object */;
val* var3155 /* : String */;
val* var3156 /* : nullable Object */;
val* var3157 /* : String */;
val* var3158 /* : String */;
val* var3159 /* : RuntimeVariable */;
static val* varonce3160;
val* var3161 /* : String */;
char* var3162 /* : CString */;
val* var3163 /* : String */;
short int var3164 /* : Bool */;
val* var3166 /* : NativeArray[String] */;
static val* varonce3165;
static val* varonce3167;
val* var3168 /* : String */;
char* var3169 /* : CString */;
val* var3170 /* : String */;
val* var3171 /* : nullable Object */;
val* var3172 /* : String */;
val* var3173 /* : nullable Object */;
val* var3174 /* : String */;
val* var3175 /* : String */;
val* var3176 /* : RuntimeVariable */;
static val* varonce3177;
val* var3178 /* : String */;
char* var3179 /* : CString */;
val* var3180 /* : String */;
short int var3181 /* : Bool */;
val* var3183 /* : NativeArray[String] */;
static val* varonce3182;
static val* varonce3184;
val* var3185 /* : String */;
char* var3186 /* : CString */;
val* var3187 /* : String */;
val* var3188 /* : nullable Object */;
val* var3189 /* : String */;
val* var3190 /* : nullable Object */;
val* var3191 /* : String */;
val* var3192 /* : String */;
val* var3193 /* : RuntimeVariable */;
static val* varonce3194;
val* var3195 /* : String */;
char* var3196 /* : CString */;
val* var3197 /* : String */;
short int var3198 /* : Bool */;
val* var3200 /* : NativeArray[String] */;
static val* varonce3199;
static val* varonce3201;
val* var3202 /* : String */;
char* var3203 /* : CString */;
val* var3204 /* : String */;
val* var3205 /* : nullable Object */;
val* var3206 /* : String */;
val* var3207 /* : nullable Object */;
val* var3208 /* : String */;
val* var3209 /* : String */;
val* var3210 /* : RuntimeVariable */;
static val* varonce3211;
val* var3212 /* : String */;
char* var3213 /* : CString */;
val* var3214 /* : String */;
short int var3215 /* : Bool */;
val* var3216 /* : nullable Object */;
val* var3217 /* : nullable Object */;
val* var3218 /* : RuntimeVariable */;
static val* varonce3219;
val* var3220 /* : String */;
char* var3221 /* : CString */;
val* var3222 /* : String */;
short int var3223 /* : Bool */;
val* var3224 /* : nullable Object */;
val* var3225 /* : nullable Object */;
val* var3226 /* : RuntimeVariable */;
val* var_res3227 /* var res: RuntimeVariable */;
val* var3229 /* : NativeArray[String] */;
static val* varonce3228;
static val* varonce3230;
val* var3231 /* : String */;
char* var3232 /* : CString */;
val* var3233 /* : String */;
val* var3234 /* : String */;
val* var3235 /* : String */;
val* var3236 /* : RuntimeVariable */;
static val* varonce3237;
val* var3238 /* : String */;
char* var3239 /* : CString */;
val* var3240 /* : String */;
short int var3241 /* : Bool */;
val* var3243 /* : NativeArray[String] */;
static val* varonce3242;
static val* varonce3244;
val* var3245 /* : String */;
char* var3246 /* : CString */;
val* var3247 /* : String */;
val* var3248 /* : nullable Object */;
val* var3249 /* : String */;
val* var3250 /* : nullable Object */;
val* var3251 /* : String */;
val* var3252 /* : String */;
val* var3253 /* : RuntimeVariable */;
static val* varonce3254;
val* var3255 /* : String */;
char* var3256 /* : CString */;
val* var3257 /* : String */;
short int var3258 /* : Bool */;
val* var3260 /* : NativeArray[String] */;
static val* varonce3259;
static val* varonce3261;
val* var3262 /* : String */;
char* var3263 /* : CString */;
val* var3264 /* : String */;
val* var3265 /* : nullable Object */;
val* var3266 /* : String */;
val* var3267 /* : nullable Object */;
val* var3268 /* : String */;
val* var3269 /* : String */;
val* var3270 /* : RuntimeVariable */;
static val* varonce3271;
val* var3272 /* : String */;
char* var3273 /* : CString */;
val* var3274 /* : String */;
short int var3275 /* : Bool */;
val* var3277 /* : NativeArray[String] */;
static val* varonce3276;
static val* varonce3278;
val* var3279 /* : String */;
char* var3280 /* : CString */;
val* var3281 /* : String */;
val* var3282 /* : nullable Object */;
val* var3283 /* : String */;
val* var3284 /* : nullable Object */;
val* var3285 /* : String */;
val* var3286 /* : String */;
val* var3287 /* : RuntimeVariable */;
static val* varonce3288;
val* var3289 /* : String */;
char* var3290 /* : CString */;
val* var3291 /* : String */;
short int var3292 /* : Bool */;
val* var3294 /* : NativeArray[String] */;
static val* varonce3293;
static val* varonce3295;
val* var3296 /* : String */;
char* var3297 /* : CString */;
val* var3298 /* : String */;
val* var3299 /* : nullable Object */;
val* var3300 /* : String */;
val* var3301 /* : nullable Object */;
val* var3302 /* : String */;
val* var3303 /* : String */;
val* var3304 /* : RuntimeVariable */;
static val* varonce3305;
val* var3306 /* : String */;
char* var3307 /* : CString */;
val* var3308 /* : String */;
short int var3309 /* : Bool */;
val* var3311 /* : NativeArray[String] */;
static val* varonce3310;
static val* varonce3312;
val* var3313 /* : String */;
char* var3314 /* : CString */;
val* var3315 /* : String */;
val* var3316 /* : nullable Object */;
val* var3317 /* : String */;
val* var3318 /* : String */;
val* var3319 /* : RuntimeVariable */;
static val* varonce3320;
val* var3321 /* : String */;
char* var3322 /* : CString */;
val* var3323 /* : String */;
short int var3324 /* : Bool */;
val* var3326 /* : NativeArray[String] */;
static val* varonce3325;
static val* varonce3327;
val* var3328 /* : String */;
char* var3329 /* : CString */;
val* var3330 /* : String */;
val* var3331 /* : nullable Object */;
val* var3332 /* : String */;
val* var3333 /* : String */;
val* var3334 /* : RuntimeVariable */;
static val* varonce3335;
val* var3336 /* : String */;
char* var3337 /* : CString */;
val* var3338 /* : String */;
short int var3339 /* : Bool */;
val* var3341 /* : NativeArray[String] */;
static val* varonce3340;
static val* varonce3342;
val* var3343 /* : String */;
char* var3344 /* : CString */;
val* var3345 /* : String */;
val* var3346 /* : nullable Object */;
val* var3347 /* : String */;
val* var3348 /* : String */;
val* var3349 /* : RuntimeVariable */;
static val* varonce3350;
val* var3351 /* : String */;
char* var3352 /* : CString */;
val* var3353 /* : String */;
short int var3354 /* : Bool */;
val* var3356 /* : NativeArray[String] */;
static val* varonce3355;
static val* varonce3357;
val* var3358 /* : String */;
char* var3359 /* : CString */;
val* var3360 /* : String */;
val* var3361 /* : nullable Object */;
val* var3362 /* : String */;
val* var3363 /* : String */;
val* var3364 /* : RuntimeVariable */;
static val* varonce3365;
val* var3366 /* : String */;
char* var3367 /* : CString */;
val* var3368 /* : String */;
short int var3369 /* : Bool */;
val* var3371 /* : NativeArray[String] */;
static val* varonce3370;
static val* varonce3372;
val* var3373 /* : String */;
char* var3374 /* : CString */;
val* var3375 /* : String */;
val* var3376 /* : nullable Object */;
val* var3377 /* : String */;
val* var3378 /* : String */;
val* var3379 /* : RuntimeVariable */;
static val* varonce3380;
val* var3381 /* : String */;
char* var3382 /* : CString */;
val* var3383 /* : String */;
short int var3384 /* : Bool */;
val* var3386 /* : NativeArray[String] */;
static val* varonce3385;
static val* varonce3387;
val* var3388 /* : String */;
char* var3389 /* : CString */;
val* var3390 /* : String */;
val* var3391 /* : nullable Object */;
val* var3392 /* : String */;
val* var3393 /* : String */;
val* var3394 /* : RuntimeVariable */;
static val* varonce3395;
val* var3396 /* : String */;
char* var3397 /* : CString */;
val* var3398 /* : String */;
short int var3399 /* : Bool */;
val* var3401 /* : NativeArray[String] */;
static val* varonce3400;
static val* varonce3402;
val* var3403 /* : String */;
char* var3404 /* : CString */;
val* var3405 /* : String */;
val* var3406 /* : nullable Object */;
val* var3407 /* : String */;
val* var3408 /* : String */;
val* var3409 /* : RuntimeVariable */;
static val* varonce3410;
val* var3411 /* : String */;
char* var3412 /* : CString */;
val* var3413 /* : String */;
short int var3414 /* : Bool */;
val* var3416 /* : NativeArray[String] */;
static val* varonce3415;
static val* varonce3417;
val* var3418 /* : String */;
char* var3419 /* : CString */;
val* var3420 /* : String */;
val* var3421 /* : nullable Object */;
val* var3422 /* : String */;
val* var3423 /* : nullable Object */;
val* var3424 /* : String */;
val* var3425 /* : String */;
val* var3426 /* : RuntimeVariable */;
static val* varonce3427;
val* var3428 /* : String */;
char* var3429 /* : CString */;
val* var3430 /* : String */;
short int var3431 /* : Bool */;
val* var3433 /* : NativeArray[String] */;
static val* varonce3432;
static val* varonce3434;
val* var3435 /* : String */;
char* var3436 /* : CString */;
val* var3437 /* : String */;
val* var3438 /* : nullable Object */;
val* var3439 /* : String */;
val* var3440 /* : nullable Object */;
val* var3441 /* : String */;
val* var3442 /* : String */;
val* var3443 /* : RuntimeVariable */;
static val* varonce3444;
val* var3445 /* : String */;
char* var3446 /* : CString */;
val* var3447 /* : String */;
short int var3448 /* : Bool */;
val* var3450 /* : NativeArray[String] */;
static val* varonce3449;
static val* varonce3451;
val* var3452 /* : String */;
char* var3453 /* : CString */;
val* var3454 /* : String */;
val* var3455 /* : nullable Object */;
val* var3456 /* : String */;
val* var3457 /* : nullable Object */;
val* var3458 /* : String */;
val* var3459 /* : String */;
val* var3460 /* : RuntimeVariable */;
static val* varonce3461;
val* var3462 /* : String */;
char* var3463 /* : CString */;
val* var3464 /* : String */;
short int var3465 /* : Bool */;
val* var3467 /* : NativeArray[String] */;
static val* varonce3466;
static val* varonce3468;
val* var3469 /* : String */;
char* var3470 /* : CString */;
val* var3471 /* : String */;
val* var3472 /* : nullable Object */;
val* var3473 /* : String */;
val* var3474 /* : String */;
val* var3475 /* : RuntimeVariable */;
static val* varonce3476;
val* var3477 /* : String */;
char* var3478 /* : CString */;
val* var3479 /* : String */;
short int var3480 /* : Bool */;
static val* varonce3481;
val* var3482 /* : String */;
char* var3483 /* : CString */;
val* var3484 /* : String */;
short int var3485 /* : Bool */;
val* var3487 /* : NativeArray[String] */;
static val* varonce3486;
static val* varonce3488;
val* var3489 /* : String */;
char* var3490 /* : CString */;
val* var3491 /* : String */;
static val* varonce3492;
val* var3493 /* : String */;
char* var3494 /* : CString */;
val* var3495 /* : String */;
val* var3496 /* : nullable Object */;
val* var3497 /* : String */;
val* var3498 /* : String */;
static val* varonce3499;
val* var3500 /* : String */;
char* var3501 /* : CString */;
val* var3502 /* : String */;
short int var3503 /* : Bool */;
val* var3505 /* : NativeArray[String] */;
static val* varonce3504;
static val* varonce3506;
val* var3507 /* : String */;
char* var3508 /* : CString */;
val* var3509 /* : String */;
val* var3510 /* : nullable Object */;
val* var3511 /* : String */;
val* var3512 /* : String */;
val* var3513 /* : RuntimeVariable */;
static val* varonce3514;
val* var3515 /* : String */;
char* var3516 /* : CString */;
val* var3517 /* : String */;
short int var3518 /* : Bool */;
val* var3520 /* : NativeArray[String] */;
static val* varonce3519;
static val* varonce3521;
val* var3522 /* : String */;
char* var3523 /* : CString */;
val* var3524 /* : String */;
val* var3525 /* : nullable Object */;
val* var3526 /* : String */;
val* var3527 /* : nullable Object */;
val* var3528 /* : String */;
val* var3529 /* : String */;
val* var3530 /* : RuntimeVariable */;
static val* varonce3531;
val* var3532 /* : String */;
char* var3533 /* : CString */;
val* var3534 /* : String */;
short int var3535 /* : Bool */;
val* var3537 /* : NativeArray[String] */;
static val* varonce3536;
static val* varonce3538;
val* var3539 /* : String */;
char* var3540 /* : CString */;
val* var3541 /* : String */;
val* var3542 /* : nullable Object */;
val* var3543 /* : String */;
val* var3544 /* : nullable Object */;
val* var3545 /* : String */;
val* var3546 /* : String */;
val* var3547 /* : RuntimeVariable */;
static val* varonce3548;
val* var3549 /* : String */;
char* var3550 /* : CString */;
val* var3551 /* : String */;
short int var3552 /* : Bool */;
val* var3554 /* : NativeArray[String] */;
static val* varonce3553;
static val* varonce3555;
val* var3556 /* : String */;
char* var3557 /* : CString */;
val* var3558 /* : String */;
val* var3559 /* : nullable Object */;
val* var3560 /* : String */;
val* var3561 /* : String */;
val* var3562 /* : RuntimeVariable */;
static val* varonce3563;
val* var3564 /* : String */;
char* var3565 /* : CString */;
val* var3566 /* : String */;
short int var3567 /* : Bool */;
val* var3568 /* : nullable Object */;
static val* varonce3569;
val* var3570 /* : String */;
char* var3571 /* : CString */;
val* var3572 /* : String */;
short int var3573 /* : Bool */;
val* var3575 /* : NativeArray[String] */;
static val* varonce3574;
static val* varonce3576;
val* var3577 /* : String */;
char* var3578 /* : CString */;
val* var3579 /* : String */;
val* var3580 /* : nullable Object */;
val* var3581 /* : String */;
val* var3582 /* : nullable Object */;
val* var3583 /* : String */;
val* var3584 /* : String */;
val* var3585 /* : RuntimeVariable */;
static val* varonce3586;
val* var3587 /* : String */;
char* var3588 /* : CString */;
val* var3589 /* : String */;
short int var3590 /* : Bool */;
val* var3592 /* : NativeArray[String] */;
static val* varonce3591;
static val* varonce3593;
val* var3594 /* : String */;
char* var3595 /* : CString */;
val* var3596 /* : String */;
val* var3597 /* : nullable Object */;
val* var3598 /* : String */;
val* var3599 /* : nullable Object */;
val* var3600 /* : String */;
val* var3601 /* : String */;
val* var3602 /* : RuntimeVariable */;
static val* varonce3603;
val* var3604 /* : String */;
char* var3605 /* : CString */;
val* var3606 /* : String */;
short int var3607 /* : Bool */;
val* var3609 /* : NativeArray[String] */;
static val* varonce3608;
static val* varonce3610;
val* var3611 /* : String */;
char* var3612 /* : CString */;
val* var3613 /* : String */;
val* var3614 /* : nullable Object */;
val* var3615 /* : String */;
val* var3616 /* : nullable Object */;
val* var3617 /* : String */;
val* var3618 /* : String */;
val* var3619 /* : RuntimeVariable */;
static val* varonce3620;
val* var3621 /* : String */;
char* var3622 /* : CString */;
val* var3623 /* : String */;
short int var3624 /* : Bool */;
val* var3626 /* : NativeArray[String] */;
static val* varonce3625;
static val* varonce3627;
val* var3628 /* : String */;
char* var3629 /* : CString */;
val* var3630 /* : String */;
val* var3631 /* : nullable Object */;
val* var3632 /* : String */;
val* var3633 /* : nullable Object */;
val* var3634 /* : String */;
val* var3635 /* : String */;
val* var3636 /* : RuntimeVariable */;
static val* varonce3637;
val* var3638 /* : String */;
char* var3639 /* : CString */;
val* var3640 /* : String */;
short int var3641 /* : Bool */;
val* var3643 /* : NativeArray[String] */;
static val* varonce3642;
static val* varonce3644;
val* var3645 /* : String */;
char* var3646 /* : CString */;
val* var3647 /* : String */;
val* var3648 /* : nullable Object */;
val* var3649 /* : String */;
val* var3650 /* : nullable Object */;
val* var3651 /* : String */;
val* var3652 /* : String */;
val* var3653 /* : RuntimeVariable */;
static val* varonce3654;
val* var3655 /* : String */;
char* var3656 /* : CString */;
val* var3657 /* : String */;
short int var3658 /* : Bool */;
val* var3659 /* : nullable Object */;
val* var3660 /* : nullable Object */;
val* var3661 /* : RuntimeVariable */;
static val* varonce3662;
val* var3663 /* : String */;
char* var3664 /* : CString */;
val* var3665 /* : String */;
short int var3666 /* : Bool */;
val* var3667 /* : nullable Object */;
val* var3668 /* : nullable Object */;
val* var3669 /* : RuntimeVariable */;
val* var_res3670 /* var res: RuntimeVariable */;
val* var3672 /* : NativeArray[String] */;
static val* varonce3671;
static val* varonce3673;
val* var3674 /* : String */;
char* var3675 /* : CString */;
val* var3676 /* : String */;
val* var3677 /* : String */;
val* var3678 /* : String */;
val* var3679 /* : RuntimeVariable */;
static val* varonce3680;
val* var3681 /* : String */;
char* var3682 /* : CString */;
val* var3683 /* : String */;
short int var3684 /* : Bool */;
val* var3686 /* : NativeArray[String] */;
static val* varonce3685;
static val* varonce3687;
val* var3688 /* : String */;
char* var3689 /* : CString */;
val* var3690 /* : String */;
val* var3691 /* : nullable Object */;
val* var3692 /* : String */;
val* var3693 /* : nullable Object */;
val* var3694 /* : String */;
val* var3695 /* : String */;
val* var3696 /* : RuntimeVariable */;
static val* varonce3697;
val* var3698 /* : String */;
char* var3699 /* : CString */;
val* var3700 /* : String */;
short int var3701 /* : Bool */;
val* var3703 /* : NativeArray[String] */;
static val* varonce3702;
static val* varonce3704;
val* var3705 /* : String */;
char* var3706 /* : CString */;
val* var3707 /* : String */;
val* var3708 /* : nullable Object */;
val* var3709 /* : String */;
val* var3710 /* : nullable Object */;
val* var3711 /* : String */;
val* var3712 /* : String */;
val* var3713 /* : RuntimeVariable */;
static val* varonce3714;
val* var3715 /* : String */;
char* var3716 /* : CString */;
val* var3717 /* : String */;
short int var3718 /* : Bool */;
val* var3720 /* : NativeArray[String] */;
static val* varonce3719;
static val* varonce3721;
val* var3722 /* : String */;
char* var3723 /* : CString */;
val* var3724 /* : String */;
val* var3725 /* : nullable Object */;
val* var3726 /* : String */;
val* var3727 /* : nullable Object */;
val* var3728 /* : String */;
val* var3729 /* : String */;
val* var3730 /* : RuntimeVariable */;
static val* varonce3731;
val* var3732 /* : String */;
char* var3733 /* : CString */;
val* var3734 /* : String */;
short int var3735 /* : Bool */;
val* var3737 /* : NativeArray[String] */;
static val* varonce3736;
static val* varonce3738;
val* var3739 /* : String */;
char* var3740 /* : CString */;
val* var3741 /* : String */;
val* var3742 /* : nullable Object */;
val* var3743 /* : String */;
val* var3744 /* : nullable Object */;
val* var3745 /* : String */;
val* var3746 /* : String */;
val* var3747 /* : RuntimeVariable */;
static val* varonce3748;
val* var3749 /* : String */;
char* var3750 /* : CString */;
val* var3751 /* : String */;
short int var3752 /* : Bool */;
val* var3754 /* : NativeArray[String] */;
static val* varonce3753;
static val* varonce3755;
val* var3756 /* : String */;
char* var3757 /* : CString */;
val* var3758 /* : String */;
val* var3759 /* : nullable Object */;
val* var3760 /* : String */;
val* var3761 /* : String */;
val* var3762 /* : RuntimeVariable */;
static val* varonce3763;
val* var3764 /* : String */;
char* var3765 /* : CString */;
val* var3766 /* : String */;
short int var3767 /* : Bool */;
val* var3769 /* : NativeArray[String] */;
static val* varonce3768;
static val* varonce3770;
val* var3771 /* : String */;
char* var3772 /* : CString */;
val* var3773 /* : String */;
val* var3774 /* : nullable Object */;
val* var3775 /* : String */;
val* var3776 /* : String */;
val* var3777 /* : RuntimeVariable */;
static val* varonce3778;
val* var3779 /* : String */;
char* var3780 /* : CString */;
val* var3781 /* : String */;
short int var3782 /* : Bool */;
val* var3784 /* : NativeArray[String] */;
static val* varonce3783;
static val* varonce3785;
val* var3786 /* : String */;
char* var3787 /* : CString */;
val* var3788 /* : String */;
val* var3789 /* : nullable Object */;
val* var3790 /* : String */;
val* var3791 /* : String */;
val* var3792 /* : RuntimeVariable */;
static val* varonce3793;
val* var3794 /* : String */;
char* var3795 /* : CString */;
val* var3796 /* : String */;
short int var3797 /* : Bool */;
val* var3799 /* : NativeArray[String] */;
static val* varonce3798;
static val* varonce3800;
val* var3801 /* : String */;
char* var3802 /* : CString */;
val* var3803 /* : String */;
val* var3804 /* : nullable Object */;
val* var3805 /* : String */;
val* var3806 /* : String */;
val* var3807 /* : RuntimeVariable */;
static val* varonce3808;
val* var3809 /* : String */;
char* var3810 /* : CString */;
val* var3811 /* : String */;
short int var3812 /* : Bool */;
val* var3814 /* : NativeArray[String] */;
static val* varonce3813;
static val* varonce3815;
val* var3816 /* : String */;
char* var3817 /* : CString */;
val* var3818 /* : String */;
val* var3819 /* : nullable Object */;
val* var3820 /* : String */;
val* var3821 /* : String */;
val* var3822 /* : RuntimeVariable */;
static val* varonce3823;
val* var3824 /* : String */;
char* var3825 /* : CString */;
val* var3826 /* : String */;
short int var3827 /* : Bool */;
val* var3829 /* : NativeArray[String] */;
static val* varonce3828;
static val* varonce3830;
val* var3831 /* : String */;
char* var3832 /* : CString */;
val* var3833 /* : String */;
val* var3834 /* : nullable Object */;
val* var3835 /* : String */;
val* var3836 /* : String */;
val* var3837 /* : RuntimeVariable */;
static val* varonce3838;
val* var3839 /* : String */;
char* var3840 /* : CString */;
val* var3841 /* : String */;
short int var3842 /* : Bool */;
val* var3844 /* : NativeArray[String] */;
static val* varonce3843;
static val* varonce3845;
val* var3846 /* : String */;
char* var3847 /* : CString */;
val* var3848 /* : String */;
val* var3849 /* : nullable Object */;
val* var3850 /* : String */;
val* var3851 /* : String */;
val* var3852 /* : RuntimeVariable */;
static val* varonce3853;
val* var3854 /* : String */;
char* var3855 /* : CString */;
val* var3856 /* : String */;
short int var3857 /* : Bool */;
val* var3859 /* : NativeArray[String] */;
static val* varonce3858;
static val* varonce3860;
val* var3861 /* : String */;
char* var3862 /* : CString */;
val* var3863 /* : String */;
val* var3864 /* : nullable Object */;
val* var3865 /* : String */;
val* var3866 /* : nullable Object */;
val* var3867 /* : String */;
val* var3868 /* : String */;
val* var3869 /* : RuntimeVariable */;
static val* varonce3870;
val* var3871 /* : String */;
char* var3872 /* : CString */;
val* var3873 /* : String */;
short int var3874 /* : Bool */;
val* var3876 /* : NativeArray[String] */;
static val* varonce3875;
static val* varonce3877;
val* var3878 /* : String */;
char* var3879 /* : CString */;
val* var3880 /* : String */;
val* var3881 /* : nullable Object */;
val* var3882 /* : String */;
val* var3883 /* : nullable Object */;
val* var3884 /* : String */;
val* var3885 /* : String */;
val* var3886 /* : RuntimeVariable */;
static val* varonce3887;
val* var3888 /* : String */;
char* var3889 /* : CString */;
val* var3890 /* : String */;
short int var3891 /* : Bool */;
val* var3893 /* : NativeArray[String] */;
static val* varonce3892;
static val* varonce3894;
val* var3895 /* : String */;
char* var3896 /* : CString */;
val* var3897 /* : String */;
val* var3898 /* : nullable Object */;
val* var3899 /* : String */;
val* var3900 /* : nullable Object */;
val* var3901 /* : String */;
val* var3902 /* : String */;
val* var3903 /* : RuntimeVariable */;
static val* varonce3904;
val* var3905 /* : String */;
char* var3906 /* : CString */;
val* var3907 /* : String */;
short int var3908 /* : Bool */;
val* var3910 /* : NativeArray[String] */;
static val* varonce3909;
static val* varonce3911;
val* var3912 /* : String */;
char* var3913 /* : CString */;
val* var3914 /* : String */;
val* var3915 /* : nullable Object */;
val* var3916 /* : String */;
val* var3917 /* : String */;
val* var3918 /* : RuntimeVariable */;
static val* varonce3919;
val* var3920 /* : String */;
char* var3921 /* : CString */;
val* var3922 /* : String */;
short int var3923 /* : Bool */;
val* var3925 /* : NativeArray[String] */;
static val* varonce3924;
static val* varonce3926;
val* var3927 /* : String */;
char* var3928 /* : CString */;
val* var3929 /* : String */;
static val* varonce3930;
val* var3931 /* : String */;
char* var3932 /* : CString */;
val* var3933 /* : String */;
val* var3934 /* : nullable Object */;
val* var3935 /* : String */;
val* var3936 /* : String */;
static val* varonce3937;
val* var3938 /* : String */;
char* var3939 /* : CString */;
val* var3940 /* : String */;
short int var3941 /* : Bool */;
static val* varonce3942;
val* var3943 /* : String */;
char* var3944 /* : CString */;
val* var3945 /* : String */;
val* var3946 /* : RuntimeVariable */;
static val* varonce3947;
val* var3948 /* : String */;
char* var3949 /* : CString */;
val* var3950 /* : String */;
short int var3951 /* : Bool */;
val* var3953 /* : NativeArray[String] */;
static val* varonce3952;
static val* varonce3954;
val* var3955 /* : String */;
char* var3956 /* : CString */;
val* var3957 /* : String */;
val* var3958 /* : nullable Object */;
val* var3959 /* : String */;
val* var3960 /* : String */;
val* var3961 /* : RuntimeVariable */;
static val* varonce3962;
val* var3963 /* : String */;
char* var3964 /* : CString */;
val* var3965 /* : String */;
short int var3966 /* : Bool */;
val* var3967 /* : nullable Object */;
val* var3968 /* : nullable Object */;
val* var3969 /* : RuntimeVariable */;
static val* varonce3970;
val* var3971 /* : String */;
char* var3972 /* : CString */;
val* var3973 /* : String */;
short int var3974 /* : Bool */;
val* var3975 /* : nullable Object */;
val* var3976 /* : nullable Object */;
val* var3977 /* : RuntimeVariable */;
static val* varonce3978;
val* var3979 /* : String */;
char* var3980 /* : CString */;
val* var3981 /* : String */;
short int var3982 /* : Bool */;
val* var3983 /* : nullable Object */;
val* var3984 /* : String */;
val* var_nat /* var nat: String */;
val* var3986 /* : NativeArray[String] */;
static val* varonce3985;
static val* varonce3987;
val* var3988 /* : String */;
char* var3989 /* : CString */;
val* var3990 /* : String */;
static val* varonce3991;
val* var3992 /* : String */;
char* var3993 /* : CString */;
val* var3994 /* : String */;
val* var3995 /* : String */;
static val* varonce3996;
val* var3997 /* : String */;
char* var3998 /* : CString */;
val* var3999 /* : String */;
short int var4000 /* : Bool */;
val* var4001 /* : nullable Object */;
val* var4002 /* : String */;
val* var_nat4003 /* var nat: String */;
val* var4005 /* : NativeArray[String] */;
static val* varonce4004;
static val* varonce4006;
val* var4007 /* : String */;
char* var4008 /* : CString */;
val* var4009 /* : String */;
val* var4010 /* : String */;
val* var4011 /* : RuntimeVariable */;
static val* varonce4012;
val* var4013 /* : String */;
char* var4014 /* : CString */;
val* var4015 /* : String */;
short int var4016 /* : Bool */;
static val* varonce4017;
val* var4018 /* : String */;
char* var4019 /* : CString */;
val* var4020 /* : String */;
static val* varonce4021;
val* var4022 /* : String */;
char* var4023 /* : CString */;
val* var4024 /* : String */;
short int var4025 /* : Bool */;
static val* varonce4026;
val* var4027 /* : String */;
char* var4028 /* : CString */;
val* var4029 /* : String */;
val* var4030 /* : RuntimeVariable */;
static val* varonce4031;
val* var4032 /* : String */;
char* var4033 /* : CString */;
val* var4034 /* : String */;
short int var4035 /* : Bool */;
val* var4037 /* : NativeArray[String] */;
static val* varonce4036;
static val* varonce4038;
val* var4039 /* : String */;
char* var4040 /* : CString */;
val* var4041 /* : String */;
static val* varonce4042;
val* var4043 /* : String */;
char* var4044 /* : CString */;
val* var4045 /* : String */;
val* var4046 /* : nullable Object */;
val* var4047 /* : String */;
val* var4048 /* : String */;
val* var4049 /* : RuntimeVariable */;
var_v = p0;
var_mpropdef = p1;
var_arguments = p2;
{
{ /* Inline model#MPropDef#mproperty (var_mpropdef) on <var_mpropdef:MMethodDef> */
var3 = var_mpropdef->attrs[COLOR_nitc__model__MPropDef___mproperty].val; /* _mproperty on <var_mpropdef:MMethodDef> */
if (unlikely(var3 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mproperty");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2357);
fatal_exit(1);
}
var1 = var3;
RET_LABEL2:(void)0;
}
}
{
{ /* Inline model#MProperty#name (var1) on <var1:MProperty(MMethod)> */
var6 = var1->attrs[COLOR_nitc__model__MProperty___name].val; /* _name on <var1:MProperty(MMethod)> */
if (unlikely(var6 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2047);
fatal_exit(1);
}
var4 = var6;
RET_LABEL5:(void)0;
}
}
var_pname = var4;
{
{ /* Inline model#MPropDef#mclassdef (var_mpropdef) on <var_mpropdef:MMethodDef> */
var9 = var_mpropdef->attrs[COLOR_nitc__model__MPropDef___mclassdef].val; /* _mclassdef on <var_mpropdef:MMethodDef> */
if (unlikely(var9 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclassdef");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 2354);
fatal_exit(1);
}
var7 = var9;
RET_LABEL8:(void)0;
}
}
{
{ /* Inline model#MClassDef#mclass (var7) on <var7:MClassDef> */
var12 = var7->attrs[COLOR_nitc__model__MClassDef___mclass].val; /* _mclass on <var7:MClassDef> */
if (unlikely(var12 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _mclass");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 591);
fatal_exit(1);
}
var10 = var12;
RET_LABEL11:(void)0;
}
}
{
{ /* Inline model#MClass#name (var10) on <var10:MClass> */
var15 = var10->attrs[COLOR_nitc__model__MClass___name].val; /* _name on <var10:MClass> */
if (unlikely(var15 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Uninitialized attribute _name");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 396);
fatal_exit(1);
}
var13 = var15;
RET_LABEL14:(void)0;
}
}
var_cname = var13;
{
{ /* Inline model#MMethodDef#msignature (var_mpropdef) on <var_mpropdef:MMethodDef> */
var18 = var_mpropdef->attrs[COLOR_nitc__model__MMethodDef___msignature].val; /* _msignature on <var_mpropdef:MMethodDef> */
var16 = var18;
RET_LABEL17:(void)0;
}
}
if (var16 == NULL) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2291);
fatal_exit(1);
} else {
{ /* Inline model#MSignature#return_mtype (var16) on <var16:nullable MSignature> */
if (unlikely(var16 == NULL)) {
PRINT_ERROR("Runtime error: %s", "Receiver is null");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__model, 1891);
fatal_exit(1);
}
var21 = var16->attrs[COLOR_nitc__model__MSignature___return_mtype].val; /* _return_mtype on <var16:nullable MSignature> */
var19 = var21;
RET_LABEL20:(void)0;
}
}
var_ret = var19;
if (var_ret == NULL) {
var22 = 0; /* is null */
} else {
var22 = 1; /* arg is null and recv is not */
}
if (0) {
{ /* Inline kernel#Object#!= (var_ret,((val*)NULL)) on <var_ret:nullable MType> */
var_other = ((val*)NULL);
{
var25 = ((short int(*)(val* self, val* p0))(var_ret->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_ret, var_other); /* == on <var_ret:nullable MType(MType)>*/
}
var26 = !var25;
var23 = var26;
goto RET_LABEL24;
RET_LABEL24:(void)0;
}
var22 = var23;
}
if (var22){
{
var27 = core___core__SequenceRead___Collection__first(var_arguments);
}
{
var28 = nitc___nitc__AbstractCompilerVisitor___resolve_for(var_v, var_ret, var27);
}
var_ret = var28;
} else {
}
if (likely(varonce!=NULL)) {
var30 = varonce;
} else {
var31 = "==";
var32 = core__abstract_text___CString___to_s_full(var31, 2l, 2l);
var30 = var32;
varonce = var30;
}
{
{ /* Inline kernel#Object#!= (var_pname,var30) on <var_pname:String> */
var_other = var30;
{
var35 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var_other); /* == on <var_pname:String>*/
}
var36 = !var35;
var33 = var36;
goto RET_LABEL34;
RET_LABEL34:(void)0;
}
}
var_ = var33;
if (var33){
if (likely(varonce37!=NULL)) {
var38 = varonce37;
} else {
var39 = "!=";
var40 = core__abstract_text___CString___to_s_full(var39, 2l, 2l);
var38 = var40;
varonce37 = var38;
}
{
{ /* Inline kernel#Object#!= (var_pname,var38) on <var_pname:String> */
var_other = var38;
{
var43 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var_other); /* == on <var_pname:String>*/
}
var44 = !var43;
var41 = var44;
goto RET_LABEL42;
RET_LABEL42:(void)0;
}
}
var29 = var41;
} else {
var29 = var_;
}
if (var29){
{
((void(*)(val* self, val* p0, val* p1))(var_v->class->vft[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor__adapt_signature]))(var_v, var_mpropdef, var_arguments); /* adapt_signature on <var_v:AbstractCompilerVisitor>*/
}
{
((void(*)(val* self, val* p0, val* p1))(var_v->class->vft[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor__unbox_signature_extern]))(var_v, var_mpropdef, var_arguments); /* unbox_signature_extern on <var_v:AbstractCompilerVisitor>*/
}
} else {
}
if (likely(varonce45!=NULL)) {
var46 = varonce45;
} else {
var47 = "Int";
var48 = core__abstract_text___CString___to_s_full(var47, 3l, 3l);
var46 = var48;
varonce45 = var46;
}
{
var49 = ((short int(*)(val* self, val* p0))(var_cname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_cname, var46); /* == on <var_cname:String>*/
}
if (var49){
if (likely(varonce50!=NULL)) {
var51 = varonce50;
} else {
var52 = "output";
var53 = core__abstract_text___CString___to_s_full(var52, 6l, 6l);
var51 = var53;
varonce50 = var51;
}
{
var54 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var51); /* == on <var_pname:String>*/
}
if (var54){
if (unlikely(varonce55==NULL)) {
var56 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce57!=NULL)) {
var58 = varonce57;
} else {
var59 = "printf(\"%ld\\n\", ";
var60 = core__abstract_text___CString___to_s_full(var59, 16l, 16l);
var58 = var60;
varonce57 = var58;
}
((struct instance_core__NativeArray*)var56)->values[0]=var58;
if (likely(varonce61!=NULL)) {
var62 = varonce61;
} else {
var63 = ");";
var64 = core__abstract_text___CString___to_s_full(var63, 2l, 2l);
var62 = var64;
varonce61 = var62;
}
((struct instance_core__NativeArray*)var56)->values[2]=var62;
} else {
var56 = varonce55;
varonce55 = NULL;
}
{
var65 = core___core__SequenceRead___Collection__first(var_arguments);
}
{
var66 = ((val*(*)(val* self))(var65->class->vft[COLOR_core__abstract_text__Object__to_s]))(var65); /* to_s on <var65:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var56)->values[1]=var66;
{
var67 = ((val*(*)(val* self))(var56->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var56); /* native_to_s on <var56:NativeArray[String]>*/
}
varonce55 = var56;
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var67); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce68!=NULL)) {
var69 = varonce68;
} else {
var70 = "object_id";
var71 = core__abstract_text___CString___to_s_full(var70, 9l, 9l);
var69 = var71;
varonce68 = var69;
}
{
var72 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var69); /* == on <var_pname:String>*/
}
if (var72){
{
var73 = core___core__SequenceRead___Collection__first(var_arguments);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var73); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce74!=NULL)) {
var75 = varonce74;
} else {
var76 = "+";
var77 = core__abstract_text___CString___to_s_full(var76, 1l, 1l);
var75 = var77;
varonce74 = var75;
}
{
var78 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var75); /* == on <var_pname:String>*/
}
if (var78){
if (unlikely(varonce79==NULL)) {
var80 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce81!=NULL)) {
var82 = varonce81;
} else {
var83 = " + ";
var84 = core__abstract_text___CString___to_s_full(var83, 3l, 3l);
var82 = var84;
varonce81 = var82;
}
((struct instance_core__NativeArray*)var80)->values[1]=var82;
} else {
var80 = varonce79;
varonce79 = NULL;
}
{
var85 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var86 = ((val*(*)(val* self))(var85->class->vft[COLOR_core__abstract_text__Object__to_s]))(var85); /* to_s on <var85:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var80)->values[0]=var86;
{
var87 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 1l);
}
{
var88 = ((val*(*)(val* self))(var87->class->vft[COLOR_core__abstract_text__Object__to_s]))(var87); /* to_s on <var87:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var80)->values[2]=var88;
{
var89 = ((val*(*)(val* self))(var80->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var80); /* native_to_s on <var80:NativeArray[String]>*/
}
varonce79 = var80;
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2307);
fatal_exit(1);
}
{
var90 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var89, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var90); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce91!=NULL)) {
var92 = varonce91;
} else {
var93 = "-";
var94 = core__abstract_text___CString___to_s_full(var93, 1l, 1l);
var92 = var94;
varonce91 = var92;
}
{
var95 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var92); /* == on <var_pname:String>*/
}
if (var95){
if (unlikely(varonce96==NULL)) {
var97 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce98!=NULL)) {
var99 = varonce98;
} else {
var100 = " - ";
var101 = core__abstract_text___CString___to_s_full(var100, 3l, 3l);
var99 = var101;
varonce98 = var99;
}
((struct instance_core__NativeArray*)var97)->values[1]=var99;
} else {
var97 = varonce96;
varonce96 = NULL;
}
{
var102 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var103 = ((val*(*)(val* self))(var102->class->vft[COLOR_core__abstract_text__Object__to_s]))(var102); /* to_s on <var102:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var97)->values[0]=var103;
{
var104 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 1l);
}
{
var105 = ((val*(*)(val* self))(var104->class->vft[COLOR_core__abstract_text__Object__to_s]))(var104); /* to_s on <var104:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var97)->values[2]=var105;
{
var106 = ((val*(*)(val* self))(var97->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var97); /* native_to_s on <var97:NativeArray[String]>*/
}
varonce96 = var97;
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2310);
fatal_exit(1);
}
{
var107 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var106, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var107); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce108!=NULL)) {
var109 = varonce108;
} else {
var110 = "unary -";
var111 = core__abstract_text___CString___to_s_full(var110, 7l, 7l);
var109 = var111;
varonce108 = var109;
}
{
var112 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var109); /* == on <var_pname:String>*/
}
if (var112){
if (unlikely(varonce113==NULL)) {
var114 = NEW_core__NativeArray(2l, &type_core__NativeArray__core__String);
if (likely(varonce115!=NULL)) {
var116 = varonce115;
} else {
var117 = "-";
var118 = core__abstract_text___CString___to_s_full(var117, 1l, 1l);
var116 = var118;
varonce115 = var116;
}
((struct instance_core__NativeArray*)var114)->values[0]=var116;
} else {
var114 = varonce113;
varonce113 = NULL;
}
{
var119 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var120 = ((val*(*)(val* self))(var119->class->vft[COLOR_core__abstract_text__Object__to_s]))(var119); /* to_s on <var119:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var114)->values[1]=var120;
{
var121 = ((val*(*)(val* self))(var114->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var114); /* native_to_s on <var114:NativeArray[String]>*/
}
varonce113 = var114;
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2313);
fatal_exit(1);
}
{
var122 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var121, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var122); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce123!=NULL)) {
var124 = varonce123;
} else {
var125 = "unary +";
var126 = core__abstract_text___CString___to_s_full(var125, 7l, 7l);
var124 = var126;
varonce123 = var124;
}
{
var127 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var124); /* == on <var_pname:String>*/
}
if (var127){
{
var128 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var128); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce129!=NULL)) {
var130 = varonce129;
} else {
var131 = "*";
var132 = core__abstract_text___CString___to_s_full(var131, 1l, 1l);
var130 = var132;
varonce129 = var130;
}
{
var133 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var130); /* == on <var_pname:String>*/
}
if (var133){
if (unlikely(varonce134==NULL)) {
var135 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce136!=NULL)) {
var137 = varonce136;
} else {
var138 = " * ";
var139 = core__abstract_text___CString___to_s_full(var138, 3l, 3l);
var137 = var139;
varonce136 = var137;
}
((struct instance_core__NativeArray*)var135)->values[1]=var137;
} else {
var135 = varonce134;
varonce134 = NULL;
}
{
var140 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var141 = ((val*(*)(val* self))(var140->class->vft[COLOR_core__abstract_text__Object__to_s]))(var140); /* to_s on <var140:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var135)->values[0]=var141;
{
var142 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 1l);
}
{
var143 = ((val*(*)(val* self))(var142->class->vft[COLOR_core__abstract_text__Object__to_s]))(var142); /* to_s on <var142:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var135)->values[2]=var143;
{
var144 = ((val*(*)(val* self))(var135->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var135); /* native_to_s on <var135:NativeArray[String]>*/
}
varonce134 = var135;
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2319);
fatal_exit(1);
}
{
var145 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var144, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var145); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce146!=NULL)) {
var147 = varonce146;
} else {
var148 = "/";
var149 = core__abstract_text___CString___to_s_full(var148, 1l, 1l);
var147 = var149;
varonce146 = var147;
}
{
var150 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var147); /* == on <var_pname:String>*/
}
if (var150){
if (unlikely(varonce151==NULL)) {
var152 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce153!=NULL)) {
var154 = varonce153;
} else {
var155 = " / ";
var156 = core__abstract_text___CString___to_s_full(var155, 3l, 3l);
var154 = var156;
varonce153 = var154;
}
((struct instance_core__NativeArray*)var152)->values[1]=var154;
} else {
var152 = varonce151;
varonce151 = NULL;
}
{
var157 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var158 = ((val*(*)(val* self))(var157->class->vft[COLOR_core__abstract_text__Object__to_s]))(var157); /* to_s on <var157:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var152)->values[0]=var158;
{
var159 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 1l);
}
{
var160 = ((val*(*)(val* self))(var159->class->vft[COLOR_core__abstract_text__Object__to_s]))(var159); /* to_s on <var159:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var152)->values[2]=var160;
{
var161 = ((val*(*)(val* self))(var152->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var152); /* native_to_s on <var152:NativeArray[String]>*/
}
varonce151 = var152;
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2322);
fatal_exit(1);
}
{
var162 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var161, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var162); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce163!=NULL)) {
var164 = varonce163;
} else {
var165 = "%";
var166 = core__abstract_text___CString___to_s_full(var165, 1l, 1l);
var164 = var166;
varonce163 = var164;
}
{
var167 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var164); /* == on <var_pname:String>*/
}
if (var167){
if (unlikely(varonce168==NULL)) {
var169 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce170!=NULL)) {
var171 = varonce170;
} else {
var172 = " % ";
var173 = core__abstract_text___CString___to_s_full(var172, 3l, 3l);
var171 = var173;
varonce170 = var171;
}
((struct instance_core__NativeArray*)var169)->values[1]=var171;
} else {
var169 = varonce168;
varonce168 = NULL;
}
{
var174 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var175 = ((val*(*)(val* self))(var174->class->vft[COLOR_core__abstract_text__Object__to_s]))(var174); /* to_s on <var174:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var169)->values[0]=var175;
{
var176 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 1l);
}
{
var177 = ((val*(*)(val* self))(var176->class->vft[COLOR_core__abstract_text__Object__to_s]))(var176); /* to_s on <var176:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var169)->values[2]=var177;
{
var178 = ((val*(*)(val* self))(var169->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var169); /* native_to_s on <var169:NativeArray[String]>*/
}
varonce168 = var169;
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2325);
fatal_exit(1);
}
{
var179 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var178, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var179); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce180!=NULL)) {
var181 = varonce180;
} else {
var182 = "==";
var183 = core__abstract_text___CString___to_s_full(var182, 2l, 2l);
var181 = var183;
varonce180 = var181;
}
{
var184 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var181); /* == on <var_pname:String>*/
}
if (var184){
{
var185 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var186 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 1l);
}
{
var187 = ((val*(*)(val* self, val* p0, val* p1))(var_v->class->vft[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor__equal_test]))(var_v, var185, var186); /* equal_test on <var_v:AbstractCompilerVisitor>*/
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var187); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce188!=NULL)) {
var189 = varonce188;
} else {
var190 = "!=";
var191 = core__abstract_text___CString___to_s_full(var190, 2l, 2l);
var189 = var191;
varonce188 = var189;
}
{
var192 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var189); /* == on <var_pname:String>*/
}
if (var192){
{
var193 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var194 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 1l);
}
{
var195 = ((val*(*)(val* self, val* p0, val* p1))(var_v->class->vft[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor__equal_test]))(var_v, var193, var194); /* equal_test on <var_v:AbstractCompilerVisitor>*/
}
var_res = var195;
if (unlikely(varonce196==NULL)) {
var197 = NEW_core__NativeArray(2l, &type_core__NativeArray__core__String);
if (likely(varonce198!=NULL)) {
var199 = varonce198;
} else {
var200 = "!";
var201 = core__abstract_text___CString___to_s_full(var200, 1l, 1l);
var199 = var201;
varonce198 = var199;
}
((struct instance_core__NativeArray*)var197)->values[0]=var199;
} else {
var197 = varonce196;
varonce196 = NULL;
}
{
var202 = ((val*(*)(val* self))(var_res->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_res); /* to_s on <var_res:RuntimeVariable>*/
}
((struct instance_core__NativeArray*)var197)->values[1]=var202;
{
var203 = ((val*(*)(val* self))(var197->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var197); /* native_to_s on <var197:NativeArray[String]>*/
}
varonce196 = var197;
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2332);
fatal_exit(1);
}
{
var204 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var203, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var204); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce205!=NULL)) {
var206 = varonce205;
} else {
var207 = "<";
var208 = core__abstract_text___CString___to_s_full(var207, 1l, 1l);
var206 = var208;
varonce205 = var206;
}
{
var209 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var206); /* == on <var_pname:String>*/
}
if (var209){
if (unlikely(varonce210==NULL)) {
var211 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce212!=NULL)) {
var213 = varonce212;
} else {
var214 = " < ";
var215 = core__abstract_text___CString___to_s_full(var214, 3l, 3l);
var213 = var215;
varonce212 = var213;
}
((struct instance_core__NativeArray*)var211)->values[1]=var213;
} else {
var211 = varonce210;
varonce210 = NULL;
}
{
var216 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var217 = ((val*(*)(val* self))(var216->class->vft[COLOR_core__abstract_text__Object__to_s]))(var216); /* to_s on <var216:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var211)->values[0]=var217;
{
var218 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 1l);
}
{
var219 = ((val*(*)(val* self))(var218->class->vft[COLOR_core__abstract_text__Object__to_s]))(var218); /* to_s on <var218:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var211)->values[2]=var219;
{
var220 = ((val*(*)(val* self))(var211->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var211); /* native_to_s on <var211:NativeArray[String]>*/
}
varonce210 = var211;
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2335);
fatal_exit(1);
}
{
var221 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var220, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var221); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce222!=NULL)) {
var223 = varonce222;
} else {
var224 = ">";
var225 = core__abstract_text___CString___to_s_full(var224, 1l, 1l);
var223 = var225;
varonce222 = var223;
}
{
var226 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var223); /* == on <var_pname:String>*/
}
if (var226){
if (unlikely(varonce227==NULL)) {
var228 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce229!=NULL)) {
var230 = varonce229;
} else {
var231 = " > ";
var232 = core__abstract_text___CString___to_s_full(var231, 3l, 3l);
var230 = var232;
varonce229 = var230;
}
((struct instance_core__NativeArray*)var228)->values[1]=var230;
} else {
var228 = varonce227;
varonce227 = NULL;
}
{
var233 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var234 = ((val*(*)(val* self))(var233->class->vft[COLOR_core__abstract_text__Object__to_s]))(var233); /* to_s on <var233:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var228)->values[0]=var234;
{
var235 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 1l);
}
{
var236 = ((val*(*)(val* self))(var235->class->vft[COLOR_core__abstract_text__Object__to_s]))(var235); /* to_s on <var235:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var228)->values[2]=var236;
{
var237 = ((val*(*)(val* self))(var228->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var228); /* native_to_s on <var228:NativeArray[String]>*/
}
varonce227 = var228;
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2338);
fatal_exit(1);
}
{
var238 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var237, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var238); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce239!=NULL)) {
var240 = varonce239;
} else {
var241 = "<=";
var242 = core__abstract_text___CString___to_s_full(var241, 2l, 2l);
var240 = var242;
varonce239 = var240;
}
{
var243 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var240); /* == on <var_pname:String>*/
}
if (var243){
if (unlikely(varonce244==NULL)) {
var245 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce246!=NULL)) {
var247 = varonce246;
} else {
var248 = " <= ";
var249 = core__abstract_text___CString___to_s_full(var248, 4l, 4l);
var247 = var249;
varonce246 = var247;
}
((struct instance_core__NativeArray*)var245)->values[1]=var247;
} else {
var245 = varonce244;
varonce244 = NULL;
}
{
var250 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var251 = ((val*(*)(val* self))(var250->class->vft[COLOR_core__abstract_text__Object__to_s]))(var250); /* to_s on <var250:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var245)->values[0]=var251;
{
var252 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 1l);
}
{
var253 = ((val*(*)(val* self))(var252->class->vft[COLOR_core__abstract_text__Object__to_s]))(var252); /* to_s on <var252:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var245)->values[2]=var253;
{
var254 = ((val*(*)(val* self))(var245->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var245); /* native_to_s on <var245:NativeArray[String]>*/
}
varonce244 = var245;
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2341);
fatal_exit(1);
}
{
var255 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var254, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var255); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce256!=NULL)) {
var257 = varonce256;
} else {
var258 = ">=";
var259 = core__abstract_text___CString___to_s_full(var258, 2l, 2l);
var257 = var259;
varonce256 = var257;
}
{
var260 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var257); /* == on <var_pname:String>*/
}
if (var260){
if (unlikely(varonce261==NULL)) {
var262 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce263!=NULL)) {
var264 = varonce263;
} else {
var265 = " >= ";
var266 = core__abstract_text___CString___to_s_full(var265, 4l, 4l);
var264 = var266;
varonce263 = var264;
}
((struct instance_core__NativeArray*)var262)->values[1]=var264;
} else {
var262 = varonce261;
varonce261 = NULL;
}
{
var267 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var268 = ((val*(*)(val* self))(var267->class->vft[COLOR_core__abstract_text__Object__to_s]))(var267); /* to_s on <var267:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var262)->values[0]=var268;
{
var269 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 1l);
}
{
var270 = ((val*(*)(val* self))(var269->class->vft[COLOR_core__abstract_text__Object__to_s]))(var269); /* to_s on <var269:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var262)->values[2]=var270;
{
var271 = ((val*(*)(val* self))(var262->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var262); /* native_to_s on <var262:NativeArray[String]>*/
}
varonce261 = var262;
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2344);
fatal_exit(1);
}
{
var272 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var271, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var272); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce273!=NULL)) {
var274 = varonce273;
} else {
var275 = "to_i8";
var276 = core__abstract_text___CString___to_s_full(var275, 5l, 5l);
var274 = var276;
varonce273 = var274;
}
{
var277 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var274); /* == on <var_pname:String>*/
}
if (var277){
if (unlikely(varonce278==NULL)) {
var279 = NEW_core__NativeArray(2l, &type_core__NativeArray__core__String);
if (likely(varonce280!=NULL)) {
var281 = varonce280;
} else {
var282 = "(int8_t)";
var283 = core__abstract_text___CString___to_s_full(var282, 8l, 8l);
var281 = var283;
varonce280 = var281;
}
((struct instance_core__NativeArray*)var279)->values[0]=var281;
} else {
var279 = varonce278;
varonce278 = NULL;
}
{
var284 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var285 = ((val*(*)(val* self))(var284->class->vft[COLOR_core__abstract_text__Object__to_s]))(var284); /* to_s on <var284:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var279)->values[1]=var285;
{
var286 = ((val*(*)(val* self))(var279->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var279); /* native_to_s on <var279:NativeArray[String]>*/
}
varonce278 = var279;
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2347);
fatal_exit(1);
}
{
var287 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var286, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var287); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce288!=NULL)) {
var289 = varonce288;
} else {
var290 = "to_i16";
var291 = core__abstract_text___CString___to_s_full(var290, 6l, 6l);
var289 = var291;
varonce288 = var289;
}
{
var292 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var289); /* == on <var_pname:String>*/
}
if (var292){
if (unlikely(varonce293==NULL)) {
var294 = NEW_core__NativeArray(2l, &type_core__NativeArray__core__String);
if (likely(varonce295!=NULL)) {
var296 = varonce295;
} else {
var297 = "(int16_t)";
var298 = core__abstract_text___CString___to_s_full(var297, 9l, 9l);
var296 = var298;
varonce295 = var296;
}
((struct instance_core__NativeArray*)var294)->values[0]=var296;
} else {
var294 = varonce293;
varonce293 = NULL;
}
{
var299 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var300 = ((val*(*)(val* self))(var299->class->vft[COLOR_core__abstract_text__Object__to_s]))(var299); /* to_s on <var299:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var294)->values[1]=var300;
{
var301 = ((val*(*)(val* self))(var294->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var294); /* native_to_s on <var294:NativeArray[String]>*/
}
varonce293 = var294;
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2350);
fatal_exit(1);
}
{
var302 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var301, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var302); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce303!=NULL)) {
var304 = varonce303;
} else {
var305 = "to_u16";
var306 = core__abstract_text___CString___to_s_full(var305, 6l, 6l);
var304 = var306;
varonce303 = var304;
}
{
var307 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var304); /* == on <var_pname:String>*/
}
if (var307){
if (unlikely(varonce308==NULL)) {
var309 = NEW_core__NativeArray(2l, &type_core__NativeArray__core__String);
if (likely(varonce310!=NULL)) {
var311 = varonce310;
} else {
var312 = "(uint16_t)";
var313 = core__abstract_text___CString___to_s_full(var312, 10l, 10l);
var311 = var313;
varonce310 = var311;
}
((struct instance_core__NativeArray*)var309)->values[0]=var311;
} else {
var309 = varonce308;
varonce308 = NULL;
}
{
var314 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var315 = ((val*(*)(val* self))(var314->class->vft[COLOR_core__abstract_text__Object__to_s]))(var314); /* to_s on <var314:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var309)->values[1]=var315;
{
var316 = ((val*(*)(val* self))(var309->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var309); /* native_to_s on <var309:NativeArray[String]>*/
}
varonce308 = var309;
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2353);
fatal_exit(1);
}
{
var317 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var316, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var317); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce318!=NULL)) {
var319 = varonce318;
} else {
var320 = "to_i32";
var321 = core__abstract_text___CString___to_s_full(var320, 6l, 6l);
var319 = var321;
varonce318 = var319;
}
{
var322 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var319); /* == on <var_pname:String>*/
}
if (var322){
if (unlikely(varonce323==NULL)) {
var324 = NEW_core__NativeArray(2l, &type_core__NativeArray__core__String);
if (likely(varonce325!=NULL)) {
var326 = varonce325;
} else {
var327 = "(int32_t)";
var328 = core__abstract_text___CString___to_s_full(var327, 9l, 9l);
var326 = var328;
varonce325 = var326;
}
((struct instance_core__NativeArray*)var324)->values[0]=var326;
} else {
var324 = varonce323;
varonce323 = NULL;
}
{
var329 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var330 = ((val*(*)(val* self))(var329->class->vft[COLOR_core__abstract_text__Object__to_s]))(var329); /* to_s on <var329:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var324)->values[1]=var330;
{
var331 = ((val*(*)(val* self))(var324->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var324); /* native_to_s on <var324:NativeArray[String]>*/
}
varonce323 = var324;
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2356);
fatal_exit(1);
}
{
var332 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var331, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var332); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce333!=NULL)) {
var334 = varonce333;
} else {
var335 = "to_u32";
var336 = core__abstract_text___CString___to_s_full(var335, 6l, 6l);
var334 = var336;
varonce333 = var334;
}
{
var337 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var334); /* == on <var_pname:String>*/
}
if (var337){
if (unlikely(varonce338==NULL)) {
var339 = NEW_core__NativeArray(2l, &type_core__NativeArray__core__String);
if (likely(varonce340!=NULL)) {
var341 = varonce340;
} else {
var342 = "(uint32_t)";
var343 = core__abstract_text___CString___to_s_full(var342, 10l, 10l);
var341 = var343;
varonce340 = var341;
}
((struct instance_core__NativeArray*)var339)->values[0]=var341;
} else {
var339 = varonce338;
varonce338 = NULL;
}
{
var344 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var345 = ((val*(*)(val* self))(var344->class->vft[COLOR_core__abstract_text__Object__to_s]))(var344); /* to_s on <var344:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var339)->values[1]=var345;
{
var346 = ((val*(*)(val* self))(var339->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var339); /* native_to_s on <var339:NativeArray[String]>*/
}
varonce338 = var339;
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2359);
fatal_exit(1);
}
{
var347 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var346, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var347); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce348!=NULL)) {
var349 = varonce348;
} else {
var350 = "to_f";
var351 = core__abstract_text___CString___to_s_full(var350, 4l, 4l);
var349 = var351;
varonce348 = var349;
}
{
var352 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var349); /* == on <var_pname:String>*/
}
if (var352){
if (unlikely(varonce353==NULL)) {
var354 = NEW_core__NativeArray(2l, &type_core__NativeArray__core__String);
if (likely(varonce355!=NULL)) {
var356 = varonce355;
} else {
var357 = "(double)";
var358 = core__abstract_text___CString___to_s_full(var357, 8l, 8l);
var356 = var358;
varonce355 = var356;
}
((struct instance_core__NativeArray*)var354)->values[0]=var356;
} else {
var354 = varonce353;
varonce353 = NULL;
}
{
var359 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var360 = ((val*(*)(val* self))(var359->class->vft[COLOR_core__abstract_text__Object__to_s]))(var359); /* to_s on <var359:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var354)->values[1]=var360;
{
var361 = ((val*(*)(val* self))(var354->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var354); /* native_to_s on <var354:NativeArray[String]>*/
}
varonce353 = var354;
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2362);
fatal_exit(1);
}
{
var362 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var361, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var362); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce363!=NULL)) {
var364 = varonce363;
} else {
var365 = "to_b";
var366 = core__abstract_text___CString___to_s_full(var365, 4l, 4l);
var364 = var366;
varonce363 = var364;
}
{
var367 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var364); /* == on <var_pname:String>*/
}
if (var367){
if (unlikely(varonce368==NULL)) {
var369 = NEW_core__NativeArray(2l, &type_core__NativeArray__core__String);
if (likely(varonce370!=NULL)) {
var371 = varonce370;
} else {
var372 = "(unsigned char)";
var373 = core__abstract_text___CString___to_s_full(var372, 15l, 15l);
var371 = var373;
varonce370 = var371;
}
((struct instance_core__NativeArray*)var369)->values[0]=var371;
} else {
var369 = varonce368;
varonce368 = NULL;
}
{
var374 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var375 = ((val*(*)(val* self))(var374->class->vft[COLOR_core__abstract_text__Object__to_s]))(var374); /* to_s on <var374:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var369)->values[1]=var375;
{
var376 = ((val*(*)(val* self))(var369->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var369); /* native_to_s on <var369:NativeArray[String]>*/
}
varonce368 = var369;
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2365);
fatal_exit(1);
}
{
var377 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var376, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var377); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce378!=NULL)) {
var379 = varonce378;
} else {
var380 = "code_point";
var381 = core__abstract_text___CString___to_s_full(var380, 10l, 10l);
var379 = var381;
varonce378 = var379;
}
{
var382 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var379); /* == on <var_pname:String>*/
}
if (var382){
if (unlikely(varonce383==NULL)) {
var384 = NEW_core__NativeArray(2l, &type_core__NativeArray__core__String);
if (likely(varonce385!=NULL)) {
var386 = varonce385;
} else {
var387 = "(uint32_t)";
var388 = core__abstract_text___CString___to_s_full(var387, 10l, 10l);
var386 = var388;
varonce385 = var386;
}
((struct instance_core__NativeArray*)var384)->values[0]=var386;
} else {
var384 = varonce383;
varonce383 = NULL;
}
{
var389 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var390 = ((val*(*)(val* self))(var389->class->vft[COLOR_core__abstract_text__Object__to_s]))(var389); /* to_s on <var389:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var384)->values[1]=var390;
{
var391 = ((val*(*)(val* self))(var384->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var384); /* native_to_s on <var384:NativeArray[String]>*/
}
varonce383 = var384;
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2368);
fatal_exit(1);
}
{
var392 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var391, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var392); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce393!=NULL)) {
var394 = varonce393;
} else {
var395 = "&";
var396 = core__abstract_text___CString___to_s_full(var395, 1l, 1l);
var394 = var396;
varonce393 = var394;
}
{
var397 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var394); /* == on <var_pname:String>*/
}
if (var397){
if (unlikely(varonce398==NULL)) {
var399 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce400!=NULL)) {
var401 = varonce400;
} else {
var402 = " & ";
var403 = core__abstract_text___CString___to_s_full(var402, 3l, 3l);
var401 = var403;
varonce400 = var401;
}
((struct instance_core__NativeArray*)var399)->values[1]=var401;
} else {
var399 = varonce398;
varonce398 = NULL;
}
{
var404 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var405 = ((val*(*)(val* self))(var404->class->vft[COLOR_core__abstract_text__Object__to_s]))(var404); /* to_s on <var404:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var399)->values[0]=var405;
{
var406 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 1l);
}
{
var407 = ((val*(*)(val* self))(var406->class->vft[COLOR_core__abstract_text__Object__to_s]))(var406); /* to_s on <var406:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var399)->values[2]=var407;
{
var408 = ((val*(*)(val* self))(var399->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var399); /* native_to_s on <var399:NativeArray[String]>*/
}
varonce398 = var399;
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2371);
fatal_exit(1);
}
{
var409 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var408, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var409); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce410!=NULL)) {
var411 = varonce410;
} else {
var412 = "|";
var413 = core__abstract_text___CString___to_s_full(var412, 1l, 1l);
var411 = var413;
varonce410 = var411;
}
{
var414 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var411); /* == on <var_pname:String>*/
}
if (var414){
if (unlikely(varonce415==NULL)) {
var416 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce417!=NULL)) {
var418 = varonce417;
} else {
var419 = " | ";
var420 = core__abstract_text___CString___to_s_full(var419, 3l, 3l);
var418 = var420;
varonce417 = var418;
}
((struct instance_core__NativeArray*)var416)->values[1]=var418;
} else {
var416 = varonce415;
varonce415 = NULL;
}
{
var421 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var422 = ((val*(*)(val* self))(var421->class->vft[COLOR_core__abstract_text__Object__to_s]))(var421); /* to_s on <var421:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var416)->values[0]=var422;
{
var423 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 1l);
}
{
var424 = ((val*(*)(val* self))(var423->class->vft[COLOR_core__abstract_text__Object__to_s]))(var423); /* to_s on <var423:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var416)->values[2]=var424;
{
var425 = ((val*(*)(val* self))(var416->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var416); /* native_to_s on <var416:NativeArray[String]>*/
}
varonce415 = var416;
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2374);
fatal_exit(1);
}
{
var426 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var425, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var426); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce427!=NULL)) {
var428 = varonce427;
} else {
var429 = ">>";
var430 = core__abstract_text___CString___to_s_full(var429, 2l, 2l);
var428 = var430;
varonce427 = var428;
}
{
var431 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var428); /* == on <var_pname:String>*/
}
if (var431){
if (unlikely(varonce432==NULL)) {
var433 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce434!=NULL)) {
var435 = varonce434;
} else {
var436 = " >> ";
var437 = core__abstract_text___CString___to_s_full(var436, 4l, 4l);
var435 = var437;
varonce434 = var435;
}
((struct instance_core__NativeArray*)var433)->values[1]=var435;
} else {
var433 = varonce432;
varonce432 = NULL;
}
{
var438 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var439 = ((val*(*)(val* self))(var438->class->vft[COLOR_core__abstract_text__Object__to_s]))(var438); /* to_s on <var438:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var433)->values[0]=var439;
{
var440 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 1l);
}
{
var441 = ((val*(*)(val* self))(var440->class->vft[COLOR_core__abstract_text__Object__to_s]))(var440); /* to_s on <var440:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var433)->values[2]=var441;
{
var442 = ((val*(*)(val* self))(var433->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var433); /* native_to_s on <var433:NativeArray[String]>*/
}
varonce432 = var433;
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2377);
fatal_exit(1);
}
{
var443 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var442, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var443); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce444!=NULL)) {
var445 = varonce444;
} else {
var446 = "<<";
var447 = core__abstract_text___CString___to_s_full(var446, 2l, 2l);
var445 = var447;
varonce444 = var445;
}
{
var448 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var445); /* == on <var_pname:String>*/
}
if (var448){
if (unlikely(varonce449==NULL)) {
var450 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce451!=NULL)) {
var452 = varonce451;
} else {
var453 = " << ";
var454 = core__abstract_text___CString___to_s_full(var453, 4l, 4l);
var452 = var454;
varonce451 = var452;
}
((struct instance_core__NativeArray*)var450)->values[1]=var452;
} else {
var450 = varonce449;
varonce449 = NULL;
}
{
var455 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var456 = ((val*(*)(val* self))(var455->class->vft[COLOR_core__abstract_text__Object__to_s]))(var455); /* to_s on <var455:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var450)->values[0]=var456;
{
var457 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 1l);
}
{
var458 = ((val*(*)(val* self))(var457->class->vft[COLOR_core__abstract_text__Object__to_s]))(var457); /* to_s on <var457:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var450)->values[2]=var458;
{
var459 = ((val*(*)(val* self))(var450->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var450); /* native_to_s on <var450:NativeArray[String]>*/
}
varonce449 = var450;
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2380);
fatal_exit(1);
}
{
var460 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var459, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var460); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
} else {
if (likely(varonce461!=NULL)) {
var462 = varonce461;
} else {
var463 = "Char";
var464 = core__abstract_text___CString___to_s_full(var463, 4l, 4l);
var462 = var464;
varonce461 = var462;
}
{
var465 = ((short int(*)(val* self, val* p0))(var_cname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_cname, var462); /* == on <var_cname:String>*/
}
if (var465){
if (likely(varonce466!=NULL)) {
var467 = varonce466;
} else {
var468 = "object_id";
var469 = core__abstract_text___CString___to_s_full(var468, 9l, 9l);
var467 = var469;
varonce466 = var467;
}
{
var470 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var467); /* == on <var_pname:String>*/
}
if (var470){
if (unlikely(varonce471==NULL)) {
var472 = NEW_core__NativeArray(2l, &type_core__NativeArray__core__String);
if (likely(varonce473!=NULL)) {
var474 = varonce473;
} else {
var475 = "(long)";
var476 = core__abstract_text___CString___to_s_full(var475, 6l, 6l);
var474 = var476;
varonce473 = var474;
}
((struct instance_core__NativeArray*)var472)->values[0]=var474;
} else {
var472 = varonce471;
varonce471 = NULL;
}
{
var477 = core___core__SequenceRead___Collection__first(var_arguments);
}
{
var478 = ((val*(*)(val* self))(var477->class->vft[COLOR_core__abstract_text__Object__to_s]))(var477); /* to_s on <var477:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var472)->values[1]=var478;
{
var479 = ((val*(*)(val* self))(var472->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var472); /* native_to_s on <var472:NativeArray[String]>*/
}
varonce471 = var472;
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2385);
fatal_exit(1);
}
{
var480 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var479, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var480); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce481!=NULL)) {
var482 = varonce481;
} else {
var483 = "successor";
var484 = core__abstract_text___CString___to_s_full(var483, 9l, 9l);
var482 = var484;
varonce481 = var482;
}
{
var485 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var482); /* == on <var_pname:String>*/
}
if (var485){
if (unlikely(varonce486==NULL)) {
var487 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce488!=NULL)) {
var489 = varonce488;
} else {
var490 = " + ";
var491 = core__abstract_text___CString___to_s_full(var490, 3l, 3l);
var489 = var491;
varonce488 = var489;
}
((struct instance_core__NativeArray*)var487)->values[1]=var489;
} else {
var487 = varonce486;
varonce486 = NULL;
}
{
var492 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var493 = ((val*(*)(val* self))(var492->class->vft[COLOR_core__abstract_text__Object__to_s]))(var492); /* to_s on <var492:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var487)->values[0]=var493;
{
var494 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 1l);
}
{
var495 = ((val*(*)(val* self))(var494->class->vft[COLOR_core__abstract_text__Object__to_s]))(var494); /* to_s on <var494:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var487)->values[2]=var495;
{
var496 = ((val*(*)(val* self))(var487->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var487); /* native_to_s on <var487:NativeArray[String]>*/
}
varonce486 = var487;
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2388);
fatal_exit(1);
}
{
var497 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var496, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var497); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce498!=NULL)) {
var499 = varonce498;
} else {
var500 = "predecessor";
var501 = core__abstract_text___CString___to_s_full(var500, 11l, 11l);
var499 = var501;
varonce498 = var499;
}
{
var502 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var499); /* == on <var_pname:String>*/
}
if (var502){
if (unlikely(varonce503==NULL)) {
var504 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce505!=NULL)) {
var506 = varonce505;
} else {
var507 = " - ";
var508 = core__abstract_text___CString___to_s_full(var507, 3l, 3l);
var506 = var508;
varonce505 = var506;
}
((struct instance_core__NativeArray*)var504)->values[1]=var506;
} else {
var504 = varonce503;
varonce503 = NULL;
}
{
var509 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var510 = ((val*(*)(val* self))(var509->class->vft[COLOR_core__abstract_text__Object__to_s]))(var509); /* to_s on <var509:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var504)->values[0]=var510;
{
var511 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 1l);
}
{
var512 = ((val*(*)(val* self))(var511->class->vft[COLOR_core__abstract_text__Object__to_s]))(var511); /* to_s on <var511:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var504)->values[2]=var512;
{
var513 = ((val*(*)(val* self))(var504->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var504); /* native_to_s on <var504:NativeArray[String]>*/
}
varonce503 = var504;
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2391);
fatal_exit(1);
}
{
var514 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var513, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var514); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce515!=NULL)) {
var516 = varonce515;
} else {
var517 = "==";
var518 = core__abstract_text___CString___to_s_full(var517, 2l, 2l);
var516 = var518;
varonce515 = var516;
}
{
var519 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var516); /* == on <var_pname:String>*/
}
if (var519){
{
var520 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var521 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 1l);
}
{
var522 = ((val*(*)(val* self, val* p0, val* p1))(var_v->class->vft[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor__equal_test]))(var_v, var520, var521); /* equal_test on <var_v:AbstractCompilerVisitor>*/
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var522); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce523!=NULL)) {
var524 = varonce523;
} else {
var525 = "!=";
var526 = core__abstract_text___CString___to_s_full(var525, 2l, 2l);
var524 = var526;
varonce523 = var524;
}
{
var527 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var524); /* == on <var_pname:String>*/
}
if (var527){
{
var528 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var529 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 1l);
}
{
var530 = ((val*(*)(val* self, val* p0, val* p1))(var_v->class->vft[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor__equal_test]))(var_v, var528, var529); /* equal_test on <var_v:AbstractCompilerVisitor>*/
}
var_res531 = var530;
if (unlikely(varonce532==NULL)) {
var533 = NEW_core__NativeArray(2l, &type_core__NativeArray__core__String);
if (likely(varonce534!=NULL)) {
var535 = varonce534;
} else {
var536 = "!";
var537 = core__abstract_text___CString___to_s_full(var536, 1l, 1l);
var535 = var537;
varonce534 = var535;
}
((struct instance_core__NativeArray*)var533)->values[0]=var535;
} else {
var533 = varonce532;
varonce532 = NULL;
}
{
var538 = ((val*(*)(val* self))(var_res531->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_res531); /* to_s on <var_res531:RuntimeVariable>*/
}
((struct instance_core__NativeArray*)var533)->values[1]=var538;
{
var539 = ((val*(*)(val* self))(var533->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var533); /* native_to_s on <var533:NativeArray[String]>*/
}
varonce532 = var533;
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2398);
fatal_exit(1);
}
{
var540 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var539, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var540); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce541!=NULL)) {
var542 = varonce541;
} else {
var543 = "<";
var544 = core__abstract_text___CString___to_s_full(var543, 1l, 1l);
var542 = var544;
varonce541 = var542;
}
{
var545 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var542); /* == on <var_pname:String>*/
}
if (var545){
if (unlikely(varonce546==NULL)) {
var547 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce548!=NULL)) {
var549 = varonce548;
} else {
var550 = " < ";
var551 = core__abstract_text___CString___to_s_full(var550, 3l, 3l);
var549 = var551;
varonce548 = var549;
}
((struct instance_core__NativeArray*)var547)->values[1]=var549;
} else {
var547 = varonce546;
varonce546 = NULL;
}
{
var552 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var553 = ((val*(*)(val* self))(var552->class->vft[COLOR_core__abstract_text__Object__to_s]))(var552); /* to_s on <var552:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var547)->values[0]=var553;
{
var554 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 1l);
}
{
var555 = ((val*(*)(val* self))(var554->class->vft[COLOR_core__abstract_text__Object__to_s]))(var554); /* to_s on <var554:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var547)->values[2]=var555;
{
var556 = ((val*(*)(val* self))(var547->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var547); /* native_to_s on <var547:NativeArray[String]>*/
}
varonce546 = var547;
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2401);
fatal_exit(1);
}
{
var557 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var556, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var557); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce558!=NULL)) {
var559 = varonce558;
} else {
var560 = ">";
var561 = core__abstract_text___CString___to_s_full(var560, 1l, 1l);
var559 = var561;
varonce558 = var559;
}
{
var562 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var559); /* == on <var_pname:String>*/
}
if (var562){
if (unlikely(varonce563==NULL)) {
var564 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce565!=NULL)) {
var566 = varonce565;
} else {
var567 = " > ";
var568 = core__abstract_text___CString___to_s_full(var567, 3l, 3l);
var566 = var568;
varonce565 = var566;
}
((struct instance_core__NativeArray*)var564)->values[1]=var566;
} else {
var564 = varonce563;
varonce563 = NULL;
}
{
var569 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var570 = ((val*(*)(val* self))(var569->class->vft[COLOR_core__abstract_text__Object__to_s]))(var569); /* to_s on <var569:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var564)->values[0]=var570;
{
var571 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 1l);
}
{
var572 = ((val*(*)(val* self))(var571->class->vft[COLOR_core__abstract_text__Object__to_s]))(var571); /* to_s on <var571:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var564)->values[2]=var572;
{
var573 = ((val*(*)(val* self))(var564->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var564); /* native_to_s on <var564:NativeArray[String]>*/
}
varonce563 = var564;
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2404);
fatal_exit(1);
}
{
var574 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var573, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var574); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce575!=NULL)) {
var576 = varonce575;
} else {
var577 = "<=";
var578 = core__abstract_text___CString___to_s_full(var577, 2l, 2l);
var576 = var578;
varonce575 = var576;
}
{
var579 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var576); /* == on <var_pname:String>*/
}
if (var579){
if (unlikely(varonce580==NULL)) {
var581 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce582!=NULL)) {
var583 = varonce582;
} else {
var584 = " <= ";
var585 = core__abstract_text___CString___to_s_full(var584, 4l, 4l);
var583 = var585;
varonce582 = var583;
}
((struct instance_core__NativeArray*)var581)->values[1]=var583;
} else {
var581 = varonce580;
varonce580 = NULL;
}
{
var586 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var587 = ((val*(*)(val* self))(var586->class->vft[COLOR_core__abstract_text__Object__to_s]))(var586); /* to_s on <var586:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var581)->values[0]=var587;
{
var588 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 1l);
}
{
var589 = ((val*(*)(val* self))(var588->class->vft[COLOR_core__abstract_text__Object__to_s]))(var588); /* to_s on <var588:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var581)->values[2]=var589;
{
var590 = ((val*(*)(val* self))(var581->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var581); /* native_to_s on <var581:NativeArray[String]>*/
}
varonce580 = var581;
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2407);
fatal_exit(1);
}
{
var591 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var590, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var591); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce592!=NULL)) {
var593 = varonce592;
} else {
var594 = ">=";
var595 = core__abstract_text___CString___to_s_full(var594, 2l, 2l);
var593 = var595;
varonce592 = var593;
}
{
var596 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var593); /* == on <var_pname:String>*/
}
if (var596){
if (unlikely(varonce597==NULL)) {
var598 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce599!=NULL)) {
var600 = varonce599;
} else {
var601 = " >= ";
var602 = core__abstract_text___CString___to_s_full(var601, 4l, 4l);
var600 = var602;
varonce599 = var600;
}
((struct instance_core__NativeArray*)var598)->values[1]=var600;
} else {
var598 = varonce597;
varonce597 = NULL;
}
{
var603 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var604 = ((val*(*)(val* self))(var603->class->vft[COLOR_core__abstract_text__Object__to_s]))(var603); /* to_s on <var603:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var598)->values[0]=var604;
{
var605 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 1l);
}
{
var606 = ((val*(*)(val* self))(var605->class->vft[COLOR_core__abstract_text__Object__to_s]))(var605); /* to_s on <var605:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var598)->values[2]=var606;
{
var607 = ((val*(*)(val* self))(var598->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var598); /* native_to_s on <var598:NativeArray[String]>*/
}
varonce597 = var598;
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2410);
fatal_exit(1);
}
{
var608 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var607, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var608); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce609!=NULL)) {
var610 = varonce609;
} else {
var611 = "to_i";
var612 = core__abstract_text___CString___to_s_full(var611, 4l, 4l);
var610 = var612;
varonce609 = var610;
}
{
var613 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var610); /* == on <var_pname:String>*/
}
if (var613){
if (unlikely(varonce614==NULL)) {
var615 = NEW_core__NativeArray(2l, &type_core__NativeArray__core__String);
if (likely(varonce616!=NULL)) {
var617 = varonce616;
} else {
var618 = "-\'0\'";
var619 = core__abstract_text___CString___to_s_full(var618, 4l, 4l);
var617 = var619;
varonce616 = var617;
}
((struct instance_core__NativeArray*)var615)->values[1]=var617;
} else {
var615 = varonce614;
varonce614 = NULL;
}
{
var620 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var621 = ((val*(*)(val* self))(var620->class->vft[COLOR_core__abstract_text__Object__to_s]))(var620); /* to_s on <var620:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var615)->values[0]=var621;
{
var622 = ((val*(*)(val* self))(var615->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var615); /* native_to_s on <var615:NativeArray[String]>*/
}
varonce614 = var615;
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2413);
fatal_exit(1);
}
{
var623 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var622, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var623); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce624!=NULL)) {
var625 = varonce624;
} else {
var626 = "code_point";
var627 = core__abstract_text___CString___to_s_full(var626, 10l, 10l);
var625 = var627;
varonce624 = var625;
}
{
var628 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var625); /* == on <var_pname:String>*/
}
if (var628){
if (unlikely(varonce629==NULL)) {
var630 = NEW_core__NativeArray(2l, &type_core__NativeArray__core__String);
if (likely(varonce631!=NULL)) {
var632 = varonce631;
} else {
var633 = "(long)";
var634 = core__abstract_text___CString___to_s_full(var633, 6l, 6l);
var632 = var634;
varonce631 = var632;
}
((struct instance_core__NativeArray*)var630)->values[0]=var632;
} else {
var630 = varonce629;
varonce629 = NULL;
}
{
var635 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var636 = ((val*(*)(val* self))(var635->class->vft[COLOR_core__abstract_text__Object__to_s]))(var635); /* to_s on <var635:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var630)->values[1]=var636;
{
var637 = ((val*(*)(val* self))(var630->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var630); /* native_to_s on <var630:NativeArray[String]>*/
}
varonce629 = var630;
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2416);
fatal_exit(1);
}
{
var638 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var637, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var638); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
}
}
}
}
}
}
}
}
}
}
}
} else {
if (likely(varonce639!=NULL)) {
var640 = varonce639;
} else {
var641 = "Byte";
var642 = core__abstract_text___CString___to_s_full(var641, 4l, 4l);
var640 = var642;
varonce639 = var640;
}
{
var643 = ((short int(*)(val* self, val* p0))(var_cname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_cname, var640); /* == on <var_cname:String>*/
}
if (var643){
if (likely(varonce644!=NULL)) {
var645 = varonce644;
} else {
var646 = "output";
var647 = core__abstract_text___CString___to_s_full(var646, 6l, 6l);
var645 = var647;
varonce644 = var645;
}
{
var648 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var645); /* == on <var_pname:String>*/
}
if (var648){
if (unlikely(varonce649==NULL)) {
var650 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce651!=NULL)) {
var652 = varonce651;
} else {
var653 = "printf(\"%x\\n\", ";
var654 = core__abstract_text___CString___to_s_full(var653, 15l, 15l);
var652 = var654;
varonce651 = var652;
}
((struct instance_core__NativeArray*)var650)->values[0]=var652;
if (likely(varonce655!=NULL)) {
var656 = varonce655;
} else {
var657 = ");";
var658 = core__abstract_text___CString___to_s_full(var657, 2l, 2l);
var656 = var658;
varonce655 = var656;
}
((struct instance_core__NativeArray*)var650)->values[2]=var656;
} else {
var650 = varonce649;
varonce649 = NULL;
}
{
var659 = core___core__SequenceRead___Collection__first(var_arguments);
}
{
var660 = ((val*(*)(val* self))(var659->class->vft[COLOR_core__abstract_text__Object__to_s]))(var659); /* to_s on <var659:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var650)->values[1]=var660;
{
var661 = ((val*(*)(val* self))(var650->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var650); /* native_to_s on <var650:NativeArray[String]>*/
}
varonce649 = var650;
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var661); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce662!=NULL)) {
var663 = varonce662;
} else {
var664 = "object_id";
var665 = core__abstract_text___CString___to_s_full(var664, 9l, 9l);
var663 = var665;
varonce662 = var663;
}
{
var666 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var663); /* == on <var_pname:String>*/
}
if (var666){
if (unlikely(varonce667==NULL)) {
var668 = NEW_core__NativeArray(2l, &type_core__NativeArray__core__String);
if (likely(varonce669!=NULL)) {
var670 = varonce669;
} else {
var671 = "(long)";
var672 = core__abstract_text___CString___to_s_full(var671, 6l, 6l);
var670 = var672;
varonce669 = var670;
}
((struct instance_core__NativeArray*)var668)->values[0]=var670;
} else {
var668 = varonce667;
varonce667 = NULL;
}
{
var673 = core___core__SequenceRead___Collection__first(var_arguments);
}
{
var674 = ((val*(*)(val* self))(var673->class->vft[COLOR_core__abstract_text__Object__to_s]))(var673); /* to_s on <var673:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var668)->values[1]=var674;
{
var675 = ((val*(*)(val* self))(var668->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var668); /* native_to_s on <var668:NativeArray[String]>*/
}
varonce667 = var668;
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2424);
fatal_exit(1);
}
{
var676 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var675, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var676); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce677!=NULL)) {
var678 = varonce677;
} else {
var679 = "+";
var680 = core__abstract_text___CString___to_s_full(var679, 1l, 1l);
var678 = var680;
varonce677 = var678;
}
{
var681 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var678); /* == on <var_pname:String>*/
}
if (var681){
if (unlikely(varonce682==NULL)) {
var683 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce684!=NULL)) {
var685 = varonce684;
} else {
var686 = " + ";
var687 = core__abstract_text___CString___to_s_full(var686, 3l, 3l);
var685 = var687;
varonce684 = var685;
}
((struct instance_core__NativeArray*)var683)->values[1]=var685;
} else {
var683 = varonce682;
varonce682 = NULL;
}
{
var688 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var689 = ((val*(*)(val* self))(var688->class->vft[COLOR_core__abstract_text__Object__to_s]))(var688); /* to_s on <var688:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var683)->values[0]=var689;
{
var690 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 1l);
}
{
var691 = ((val*(*)(val* self))(var690->class->vft[COLOR_core__abstract_text__Object__to_s]))(var690); /* to_s on <var690:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var683)->values[2]=var691;
{
var692 = ((val*(*)(val* self))(var683->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var683); /* native_to_s on <var683:NativeArray[String]>*/
}
varonce682 = var683;
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2427);
fatal_exit(1);
}
{
var693 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var692, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var693); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce694!=NULL)) {
var695 = varonce694;
} else {
var696 = "-";
var697 = core__abstract_text___CString___to_s_full(var696, 1l, 1l);
var695 = var697;
varonce694 = var695;
}
{
var698 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var695); /* == on <var_pname:String>*/
}
if (var698){
if (unlikely(varonce699==NULL)) {
var700 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce701!=NULL)) {
var702 = varonce701;
} else {
var703 = " - ";
var704 = core__abstract_text___CString___to_s_full(var703, 3l, 3l);
var702 = var704;
varonce701 = var702;
}
((struct instance_core__NativeArray*)var700)->values[1]=var702;
} else {
var700 = varonce699;
varonce699 = NULL;
}
{
var705 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var706 = ((val*(*)(val* self))(var705->class->vft[COLOR_core__abstract_text__Object__to_s]))(var705); /* to_s on <var705:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var700)->values[0]=var706;
{
var707 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 1l);
}
{
var708 = ((val*(*)(val* self))(var707->class->vft[COLOR_core__abstract_text__Object__to_s]))(var707); /* to_s on <var707:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var700)->values[2]=var708;
{
var709 = ((val*(*)(val* self))(var700->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var700); /* native_to_s on <var700:NativeArray[String]>*/
}
varonce699 = var700;
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2430);
fatal_exit(1);
}
{
var710 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var709, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var710); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce711!=NULL)) {
var712 = varonce711;
} else {
var713 = "unary -";
var714 = core__abstract_text___CString___to_s_full(var713, 7l, 7l);
var712 = var714;
varonce711 = var712;
}
{
var715 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var712); /* == on <var_pname:String>*/
}
if (var715){
if (unlikely(varonce716==NULL)) {
var717 = NEW_core__NativeArray(2l, &type_core__NativeArray__core__String);
if (likely(varonce718!=NULL)) {
var719 = varonce718;
} else {
var720 = "-";
var721 = core__abstract_text___CString___to_s_full(var720, 1l, 1l);
var719 = var721;
varonce718 = var719;
}
((struct instance_core__NativeArray*)var717)->values[0]=var719;
} else {
var717 = varonce716;
varonce716 = NULL;
}
{
var722 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var723 = ((val*(*)(val* self))(var722->class->vft[COLOR_core__abstract_text__Object__to_s]))(var722); /* to_s on <var722:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var717)->values[1]=var723;
{
var724 = ((val*(*)(val* self))(var717->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var717); /* native_to_s on <var717:NativeArray[String]>*/
}
varonce716 = var717;
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2433);
fatal_exit(1);
}
{
var725 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var724, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var725); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce726!=NULL)) {
var727 = varonce726;
} else {
var728 = "unary +";
var729 = core__abstract_text___CString___to_s_full(var728, 7l, 7l);
var727 = var729;
varonce726 = var727;
}
{
var730 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var727); /* == on <var_pname:String>*/
}
if (var730){
{
var731 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var731); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce732!=NULL)) {
var733 = varonce732;
} else {
var734 = "*";
var735 = core__abstract_text___CString___to_s_full(var734, 1l, 1l);
var733 = var735;
varonce732 = var733;
}
{
var736 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var733); /* == on <var_pname:String>*/
}
if (var736){
if (unlikely(varonce737==NULL)) {
var738 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce739!=NULL)) {
var740 = varonce739;
} else {
var741 = " * ";
var742 = core__abstract_text___CString___to_s_full(var741, 3l, 3l);
var740 = var742;
varonce739 = var740;
}
((struct instance_core__NativeArray*)var738)->values[1]=var740;
} else {
var738 = varonce737;
varonce737 = NULL;
}
{
var743 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var744 = ((val*(*)(val* self))(var743->class->vft[COLOR_core__abstract_text__Object__to_s]))(var743); /* to_s on <var743:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var738)->values[0]=var744;
{
var745 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 1l);
}
{
var746 = ((val*(*)(val* self))(var745->class->vft[COLOR_core__abstract_text__Object__to_s]))(var745); /* to_s on <var745:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var738)->values[2]=var746;
{
var747 = ((val*(*)(val* self))(var738->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var738); /* native_to_s on <var738:NativeArray[String]>*/
}
varonce737 = var738;
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2439);
fatal_exit(1);
}
{
var748 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var747, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var748); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce749!=NULL)) {
var750 = varonce749;
} else {
var751 = "/";
var752 = core__abstract_text___CString___to_s_full(var751, 1l, 1l);
var750 = var752;
varonce749 = var750;
}
{
var753 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var750); /* == on <var_pname:String>*/
}
if (var753){
if (unlikely(varonce754==NULL)) {
var755 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce756!=NULL)) {
var757 = varonce756;
} else {
var758 = " / ";
var759 = core__abstract_text___CString___to_s_full(var758, 3l, 3l);
var757 = var759;
varonce756 = var757;
}
((struct instance_core__NativeArray*)var755)->values[1]=var757;
} else {
var755 = varonce754;
varonce754 = NULL;
}
{
var760 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var761 = ((val*(*)(val* self))(var760->class->vft[COLOR_core__abstract_text__Object__to_s]))(var760); /* to_s on <var760:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var755)->values[0]=var761;
{
var762 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 1l);
}
{
var763 = ((val*(*)(val* self))(var762->class->vft[COLOR_core__abstract_text__Object__to_s]))(var762); /* to_s on <var762:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var755)->values[2]=var763;
{
var764 = ((val*(*)(val* self))(var755->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var755); /* native_to_s on <var755:NativeArray[String]>*/
}
varonce754 = var755;
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2442);
fatal_exit(1);
}
{
var765 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var764, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var765); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce766!=NULL)) {
var767 = varonce766;
} else {
var768 = "%";
var769 = core__abstract_text___CString___to_s_full(var768, 1l, 1l);
var767 = var769;
varonce766 = var767;
}
{
var770 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var767); /* == on <var_pname:String>*/
}
if (var770){
if (unlikely(varonce771==NULL)) {
var772 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce773!=NULL)) {
var774 = varonce773;
} else {
var775 = " % ";
var776 = core__abstract_text___CString___to_s_full(var775, 3l, 3l);
var774 = var776;
varonce773 = var774;
}
((struct instance_core__NativeArray*)var772)->values[1]=var774;
} else {
var772 = varonce771;
varonce771 = NULL;
}
{
var777 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var778 = ((val*(*)(val* self))(var777->class->vft[COLOR_core__abstract_text__Object__to_s]))(var777); /* to_s on <var777:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var772)->values[0]=var778;
{
var779 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 1l);
}
{
var780 = ((val*(*)(val* self))(var779->class->vft[COLOR_core__abstract_text__Object__to_s]))(var779); /* to_s on <var779:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var772)->values[2]=var780;
{
var781 = ((val*(*)(val* self))(var772->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var772); /* native_to_s on <var772:NativeArray[String]>*/
}
varonce771 = var772;
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2445);
fatal_exit(1);
}
{
var782 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var781, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var782); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce783!=NULL)) {
var784 = varonce783;
} else {
var785 = "==";
var786 = core__abstract_text___CString___to_s_full(var785, 2l, 2l);
var784 = var786;
varonce783 = var784;
}
{
var787 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var784); /* == on <var_pname:String>*/
}
if (var787){
{
var788 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var789 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 1l);
}
{
var790 = ((val*(*)(val* self, val* p0, val* p1))(var_v->class->vft[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor__equal_test]))(var_v, var788, var789); /* equal_test on <var_v:AbstractCompilerVisitor>*/
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var790); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce791!=NULL)) {
var792 = varonce791;
} else {
var793 = "!=";
var794 = core__abstract_text___CString___to_s_full(var793, 2l, 2l);
var792 = var794;
varonce791 = var792;
}
{
var795 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var792); /* == on <var_pname:String>*/
}
if (var795){
{
var796 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var797 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 1l);
}
{
var798 = ((val*(*)(val* self, val* p0, val* p1))(var_v->class->vft[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor__equal_test]))(var_v, var796, var797); /* equal_test on <var_v:AbstractCompilerVisitor>*/
}
var_res799 = var798;
if (unlikely(varonce800==NULL)) {
var801 = NEW_core__NativeArray(2l, &type_core__NativeArray__core__String);
if (likely(varonce802!=NULL)) {
var803 = varonce802;
} else {
var804 = "!";
var805 = core__abstract_text___CString___to_s_full(var804, 1l, 1l);
var803 = var805;
varonce802 = var803;
}
((struct instance_core__NativeArray*)var801)->values[0]=var803;
} else {
var801 = varonce800;
varonce800 = NULL;
}
{
var806 = ((val*(*)(val* self))(var_res799->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_res799); /* to_s on <var_res799:RuntimeVariable>*/
}
((struct instance_core__NativeArray*)var801)->values[1]=var806;
{
var807 = ((val*(*)(val* self))(var801->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var801); /* native_to_s on <var801:NativeArray[String]>*/
}
varonce800 = var801;
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2452);
fatal_exit(1);
}
{
var808 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var807, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var808); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce809!=NULL)) {
var810 = varonce809;
} else {
var811 = "<";
var812 = core__abstract_text___CString___to_s_full(var811, 1l, 1l);
var810 = var812;
varonce809 = var810;
}
{
var813 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var810); /* == on <var_pname:String>*/
}
if (var813){
if (unlikely(varonce814==NULL)) {
var815 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce816!=NULL)) {
var817 = varonce816;
} else {
var818 = " < ";
var819 = core__abstract_text___CString___to_s_full(var818, 3l, 3l);
var817 = var819;
varonce816 = var817;
}
((struct instance_core__NativeArray*)var815)->values[1]=var817;
} else {
var815 = varonce814;
varonce814 = NULL;
}
{
var820 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var821 = ((val*(*)(val* self))(var820->class->vft[COLOR_core__abstract_text__Object__to_s]))(var820); /* to_s on <var820:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var815)->values[0]=var821;
{
var822 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 1l);
}
{
var823 = ((val*(*)(val* self))(var822->class->vft[COLOR_core__abstract_text__Object__to_s]))(var822); /* to_s on <var822:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var815)->values[2]=var823;
{
var824 = ((val*(*)(val* self))(var815->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var815); /* native_to_s on <var815:NativeArray[String]>*/
}
varonce814 = var815;
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2455);
fatal_exit(1);
}
{
var825 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var824, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var825); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce826!=NULL)) {
var827 = varonce826;
} else {
var828 = ">";
var829 = core__abstract_text___CString___to_s_full(var828, 1l, 1l);
var827 = var829;
varonce826 = var827;
}
{
var830 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var827); /* == on <var_pname:String>*/
}
if (var830){
if (unlikely(varonce831==NULL)) {
var832 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce833!=NULL)) {
var834 = varonce833;
} else {
var835 = " > ";
var836 = core__abstract_text___CString___to_s_full(var835, 3l, 3l);
var834 = var836;
varonce833 = var834;
}
((struct instance_core__NativeArray*)var832)->values[1]=var834;
} else {
var832 = varonce831;
varonce831 = NULL;
}
{
var837 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var838 = ((val*(*)(val* self))(var837->class->vft[COLOR_core__abstract_text__Object__to_s]))(var837); /* to_s on <var837:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var832)->values[0]=var838;
{
var839 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 1l);
}
{
var840 = ((val*(*)(val* self))(var839->class->vft[COLOR_core__abstract_text__Object__to_s]))(var839); /* to_s on <var839:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var832)->values[2]=var840;
{
var841 = ((val*(*)(val* self))(var832->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var832); /* native_to_s on <var832:NativeArray[String]>*/
}
varonce831 = var832;
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2458);
fatal_exit(1);
}
{
var842 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var841, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var842); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce843!=NULL)) {
var844 = varonce843;
} else {
var845 = "<=";
var846 = core__abstract_text___CString___to_s_full(var845, 2l, 2l);
var844 = var846;
varonce843 = var844;
}
{
var847 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var844); /* == on <var_pname:String>*/
}
if (var847){
if (unlikely(varonce848==NULL)) {
var849 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce850!=NULL)) {
var851 = varonce850;
} else {
var852 = " <= ";
var853 = core__abstract_text___CString___to_s_full(var852, 4l, 4l);
var851 = var853;
varonce850 = var851;
}
((struct instance_core__NativeArray*)var849)->values[1]=var851;
} else {
var849 = varonce848;
varonce848 = NULL;
}
{
var854 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var855 = ((val*(*)(val* self))(var854->class->vft[COLOR_core__abstract_text__Object__to_s]))(var854); /* to_s on <var854:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var849)->values[0]=var855;
{
var856 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 1l);
}
{
var857 = ((val*(*)(val* self))(var856->class->vft[COLOR_core__abstract_text__Object__to_s]))(var856); /* to_s on <var856:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var849)->values[2]=var857;
{
var858 = ((val*(*)(val* self))(var849->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var849); /* native_to_s on <var849:NativeArray[String]>*/
}
varonce848 = var849;
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2461);
fatal_exit(1);
}
{
var859 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var858, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var859); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce860!=NULL)) {
var861 = varonce860;
} else {
var862 = ">=";
var863 = core__abstract_text___CString___to_s_full(var862, 2l, 2l);
var861 = var863;
varonce860 = var861;
}
{
var864 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var861); /* == on <var_pname:String>*/
}
if (var864){
if (unlikely(varonce865==NULL)) {
var866 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce867!=NULL)) {
var868 = varonce867;
} else {
var869 = " >= ";
var870 = core__abstract_text___CString___to_s_full(var869, 4l, 4l);
var868 = var870;
varonce867 = var868;
}
((struct instance_core__NativeArray*)var866)->values[1]=var868;
} else {
var866 = varonce865;
varonce865 = NULL;
}
{
var871 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var872 = ((val*(*)(val* self))(var871->class->vft[COLOR_core__abstract_text__Object__to_s]))(var871); /* to_s on <var871:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var866)->values[0]=var872;
{
var873 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 1l);
}
{
var874 = ((val*(*)(val* self))(var873->class->vft[COLOR_core__abstract_text__Object__to_s]))(var873); /* to_s on <var873:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var866)->values[2]=var874;
{
var875 = ((val*(*)(val* self))(var866->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var866); /* native_to_s on <var866:NativeArray[String]>*/
}
varonce865 = var866;
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2464);
fatal_exit(1);
}
{
var876 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var875, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var876); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce877!=NULL)) {
var878 = varonce877;
} else {
var879 = ">>";
var880 = core__abstract_text___CString___to_s_full(var879, 2l, 2l);
var878 = var880;
varonce877 = var878;
}
{
var881 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var878); /* == on <var_pname:String>*/
}
if (var881){
if (unlikely(varonce882==NULL)) {
var883 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce884!=NULL)) {
var885 = varonce884;
} else {
var886 = " >> ";
var887 = core__abstract_text___CString___to_s_full(var886, 4l, 4l);
var885 = var887;
varonce884 = var885;
}
((struct instance_core__NativeArray*)var883)->values[1]=var885;
} else {
var883 = varonce882;
varonce882 = NULL;
}
{
var888 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var889 = ((val*(*)(val* self))(var888->class->vft[COLOR_core__abstract_text__Object__to_s]))(var888); /* to_s on <var888:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var883)->values[0]=var889;
{
var890 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 1l);
}
{
var891 = ((val*(*)(val* self))(var890->class->vft[COLOR_core__abstract_text__Object__to_s]))(var890); /* to_s on <var890:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var883)->values[2]=var891;
{
var892 = ((val*(*)(val* self))(var883->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var883); /* native_to_s on <var883:NativeArray[String]>*/
}
varonce882 = var883;
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2467);
fatal_exit(1);
}
{
var893 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var892, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var893); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce894!=NULL)) {
var895 = varonce894;
} else {
var896 = "<<";
var897 = core__abstract_text___CString___to_s_full(var896, 2l, 2l);
var895 = var897;
varonce894 = var895;
}
{
var898 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var895); /* == on <var_pname:String>*/
}
if (var898){
if (unlikely(varonce899==NULL)) {
var900 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce901!=NULL)) {
var902 = varonce901;
} else {
var903 = " << ";
var904 = core__abstract_text___CString___to_s_full(var903, 4l, 4l);
var902 = var904;
varonce901 = var902;
}
((struct instance_core__NativeArray*)var900)->values[1]=var902;
} else {
var900 = varonce899;
varonce899 = NULL;
}
{
var905 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var906 = ((val*(*)(val* self))(var905->class->vft[COLOR_core__abstract_text__Object__to_s]))(var905); /* to_s on <var905:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var900)->values[0]=var906;
{
var907 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 1l);
}
{
var908 = ((val*(*)(val* self))(var907->class->vft[COLOR_core__abstract_text__Object__to_s]))(var907); /* to_s on <var907:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var900)->values[2]=var908;
{
var909 = ((val*(*)(val* self))(var900->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var900); /* native_to_s on <var900:NativeArray[String]>*/
}
varonce899 = var900;
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2470);
fatal_exit(1);
}
{
var910 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var909, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var910); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce911!=NULL)) {
var912 = varonce911;
} else {
var913 = "&";
var914 = core__abstract_text___CString___to_s_full(var913, 1l, 1l);
var912 = var914;
varonce911 = var912;
}
{
var915 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var912); /* == on <var_pname:String>*/
}
if (var915){
if (unlikely(varonce916==NULL)) {
var917 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce918!=NULL)) {
var919 = varonce918;
} else {
var920 = " & ";
var921 = core__abstract_text___CString___to_s_full(var920, 3l, 3l);
var919 = var921;
varonce918 = var919;
}
((struct instance_core__NativeArray*)var917)->values[1]=var919;
} else {
var917 = varonce916;
varonce916 = NULL;
}
{
var922 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var923 = ((val*(*)(val* self))(var922->class->vft[COLOR_core__abstract_text__Object__to_s]))(var922); /* to_s on <var922:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var917)->values[0]=var923;
{
var924 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 1l);
}
{
var925 = ((val*(*)(val* self))(var924->class->vft[COLOR_core__abstract_text__Object__to_s]))(var924); /* to_s on <var924:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var917)->values[2]=var925;
{
var926 = ((val*(*)(val* self))(var917->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var917); /* native_to_s on <var917:NativeArray[String]>*/
}
varonce916 = var917;
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2473);
fatal_exit(1);
}
{
var927 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var926, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var927); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce928!=NULL)) {
var929 = varonce928;
} else {
var930 = "to_i";
var931 = core__abstract_text___CString___to_s_full(var930, 4l, 4l);
var929 = var931;
varonce928 = var929;
}
{
var932 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var929); /* == on <var_pname:String>*/
}
if (var932){
if (unlikely(varonce933==NULL)) {
var934 = NEW_core__NativeArray(2l, &type_core__NativeArray__core__String);
if (likely(varonce935!=NULL)) {
var936 = varonce935;
} else {
var937 = "(long)";
var938 = core__abstract_text___CString___to_s_full(var937, 6l, 6l);
var936 = var938;
varonce935 = var936;
}
((struct instance_core__NativeArray*)var934)->values[0]=var936;
} else {
var934 = varonce933;
varonce933 = NULL;
}
{
var939 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var940 = ((val*(*)(val* self))(var939->class->vft[COLOR_core__abstract_text__Object__to_s]))(var939); /* to_s on <var939:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var934)->values[1]=var940;
{
var941 = ((val*(*)(val* self))(var934->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var934); /* native_to_s on <var934:NativeArray[String]>*/
}
varonce933 = var934;
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2476);
fatal_exit(1);
}
{
var942 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var941, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var942); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce943!=NULL)) {
var944 = varonce943;
} else {
var945 = "to_f";
var946 = core__abstract_text___CString___to_s_full(var945, 4l, 4l);
var944 = var946;
varonce943 = var944;
}
{
var947 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var944); /* == on <var_pname:String>*/
}
if (var947){
if (unlikely(varonce948==NULL)) {
var949 = NEW_core__NativeArray(2l, &type_core__NativeArray__core__String);
if (likely(varonce950!=NULL)) {
var951 = varonce950;
} else {
var952 = "(double)";
var953 = core__abstract_text___CString___to_s_full(var952, 8l, 8l);
var951 = var953;
varonce950 = var951;
}
((struct instance_core__NativeArray*)var949)->values[0]=var951;
} else {
var949 = varonce948;
varonce948 = NULL;
}
{
var954 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var955 = ((val*(*)(val* self))(var954->class->vft[COLOR_core__abstract_text__Object__to_s]))(var954); /* to_s on <var954:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var949)->values[1]=var955;
{
var956 = ((val*(*)(val* self))(var949->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var949); /* native_to_s on <var949:NativeArray[String]>*/
}
varonce948 = var949;
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2479);
fatal_exit(1);
}
{
var957 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var956, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var957); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce958!=NULL)) {
var959 = varonce958;
} else {
var960 = "to_i8";
var961 = core__abstract_text___CString___to_s_full(var960, 5l, 5l);
var959 = var961;
varonce958 = var959;
}
{
var962 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var959); /* == on <var_pname:String>*/
}
if (var962){
if (unlikely(varonce963==NULL)) {
var964 = NEW_core__NativeArray(2l, &type_core__NativeArray__core__String);
if (likely(varonce965!=NULL)) {
var966 = varonce965;
} else {
var967 = "(int8_t)";
var968 = core__abstract_text___CString___to_s_full(var967, 8l, 8l);
var966 = var968;
varonce965 = var966;
}
((struct instance_core__NativeArray*)var964)->values[0]=var966;
} else {
var964 = varonce963;
varonce963 = NULL;
}
{
var969 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var970 = ((val*(*)(val* self))(var969->class->vft[COLOR_core__abstract_text__Object__to_s]))(var969); /* to_s on <var969:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var964)->values[1]=var970;
{
var971 = ((val*(*)(val* self))(var964->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var964); /* native_to_s on <var964:NativeArray[String]>*/
}
varonce963 = var964;
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2482);
fatal_exit(1);
}
{
var972 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var971, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var972); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce973!=NULL)) {
var974 = varonce973;
} else {
var975 = "to_i16";
var976 = core__abstract_text___CString___to_s_full(var975, 6l, 6l);
var974 = var976;
varonce973 = var974;
}
{
var977 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var974); /* == on <var_pname:String>*/
}
if (var977){
if (unlikely(varonce978==NULL)) {
var979 = NEW_core__NativeArray(2l, &type_core__NativeArray__core__String);
if (likely(varonce980!=NULL)) {
var981 = varonce980;
} else {
var982 = "(int16_t)";
var983 = core__abstract_text___CString___to_s_full(var982, 9l, 9l);
var981 = var983;
varonce980 = var981;
}
((struct instance_core__NativeArray*)var979)->values[0]=var981;
} else {
var979 = varonce978;
varonce978 = NULL;
}
{
var984 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var985 = ((val*(*)(val* self))(var984->class->vft[COLOR_core__abstract_text__Object__to_s]))(var984); /* to_s on <var984:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var979)->values[1]=var985;
{
var986 = ((val*(*)(val* self))(var979->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var979); /* native_to_s on <var979:NativeArray[String]>*/
}
varonce978 = var979;
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2485);
fatal_exit(1);
}
{
var987 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var986, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var987); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce988!=NULL)) {
var989 = varonce988;
} else {
var990 = "to_u16";
var991 = core__abstract_text___CString___to_s_full(var990, 6l, 6l);
var989 = var991;
varonce988 = var989;
}
{
var992 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var989); /* == on <var_pname:String>*/
}
if (var992){
if (unlikely(varonce993==NULL)) {
var994 = NEW_core__NativeArray(2l, &type_core__NativeArray__core__String);
if (likely(varonce995!=NULL)) {
var996 = varonce995;
} else {
var997 = "(uint16_t)";
var998 = core__abstract_text___CString___to_s_full(var997, 10l, 10l);
var996 = var998;
varonce995 = var996;
}
((struct instance_core__NativeArray*)var994)->values[0]=var996;
} else {
var994 = varonce993;
varonce993 = NULL;
}
{
var999 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var1000 = ((val*(*)(val* self))(var999->class->vft[COLOR_core__abstract_text__Object__to_s]))(var999); /* to_s on <var999:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var994)->values[1]=var1000;
{
var1001 = ((val*(*)(val* self))(var994->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var994); /* native_to_s on <var994:NativeArray[String]>*/
}
varonce993 = var994;
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2488);
fatal_exit(1);
}
{
var1002 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var1001, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var1002); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce1003!=NULL)) {
var1004 = varonce1003;
} else {
var1005 = "to_i32";
var1006 = core__abstract_text___CString___to_s_full(var1005, 6l, 6l);
var1004 = var1006;
varonce1003 = var1004;
}
{
var1007 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var1004); /* == on <var_pname:String>*/
}
if (var1007){
if (unlikely(varonce1008==NULL)) {
var1009 = NEW_core__NativeArray(2l, &type_core__NativeArray__core__String);
if (likely(varonce1010!=NULL)) {
var1011 = varonce1010;
} else {
var1012 = "(int32_t)";
var1013 = core__abstract_text___CString___to_s_full(var1012, 9l, 9l);
var1011 = var1013;
varonce1010 = var1011;
}
((struct instance_core__NativeArray*)var1009)->values[0]=var1011;
} else {
var1009 = varonce1008;
varonce1008 = NULL;
}
{
var1014 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var1015 = ((val*(*)(val* self))(var1014->class->vft[COLOR_core__abstract_text__Object__to_s]))(var1014); /* to_s on <var1014:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var1009)->values[1]=var1015;
{
var1016 = ((val*(*)(val* self))(var1009->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var1009); /* native_to_s on <var1009:NativeArray[String]>*/
}
varonce1008 = var1009;
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2491);
fatal_exit(1);
}
{
var1017 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var1016, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var1017); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce1018!=NULL)) {
var1019 = varonce1018;
} else {
var1020 = "to_u32";
var1021 = core__abstract_text___CString___to_s_full(var1020, 6l, 6l);
var1019 = var1021;
varonce1018 = var1019;
}
{
var1022 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var1019); /* == on <var_pname:String>*/
}
if (var1022){
if (unlikely(varonce1023==NULL)) {
var1024 = NEW_core__NativeArray(2l, &type_core__NativeArray__core__String);
if (likely(varonce1025!=NULL)) {
var1026 = varonce1025;
} else {
var1027 = "(uint32_t)";
var1028 = core__abstract_text___CString___to_s_full(var1027, 10l, 10l);
var1026 = var1028;
varonce1025 = var1026;
}
((struct instance_core__NativeArray*)var1024)->values[0]=var1026;
} else {
var1024 = varonce1023;
varonce1023 = NULL;
}
{
var1029 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var1030 = ((val*(*)(val* self))(var1029->class->vft[COLOR_core__abstract_text__Object__to_s]))(var1029); /* to_s on <var1029:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var1024)->values[1]=var1030;
{
var1031 = ((val*(*)(val* self))(var1024->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var1024); /* native_to_s on <var1024:NativeArray[String]>*/
}
varonce1023 = var1024;
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2494);
fatal_exit(1);
}
{
var1032 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var1031, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var1032); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce1033!=NULL)) {
var1034 = varonce1033;
} else {
var1035 = "ascii";
var1036 = core__abstract_text___CString___to_s_full(var1035, 5l, 5l);
var1034 = var1036;
varonce1033 = var1034;
}
{
var1037 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var1034); /* == on <var_pname:String>*/
}
if (var1037){
if (unlikely(varonce1038==NULL)) {
var1039 = NEW_core__NativeArray(2l, &type_core__NativeArray__core__String);
if (likely(varonce1040!=NULL)) {
var1041 = varonce1040;
} else {
var1042 = "(uint32_t)";
var1043 = core__abstract_text___CString___to_s_full(var1042, 10l, 10l);
var1041 = var1043;
varonce1040 = var1041;
}
((struct instance_core__NativeArray*)var1039)->values[0]=var1041;
} else {
var1039 = varonce1038;
varonce1038 = NULL;
}
{
var1044 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var1045 = ((val*(*)(val* self))(var1044->class->vft[COLOR_core__abstract_text__Object__to_s]))(var1044); /* to_s on <var1044:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var1039)->values[1]=var1045;
{
var1046 = ((val*(*)(val* self))(var1039->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var1039); /* native_to_s on <var1039:NativeArray[String]>*/
}
varonce1038 = var1039;
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2497);
fatal_exit(1);
}
{
var1047 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var1046, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var1047); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
} else {
if (likely(varonce1048!=NULL)) {
var1049 = varonce1048;
} else {
var1050 = "Bool";
var1051 = core__abstract_text___CString___to_s_full(var1050, 4l, 4l);
var1049 = var1051;
varonce1048 = var1049;
}
{
var1052 = ((short int(*)(val* self, val* p0))(var_cname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_cname, var1049); /* == on <var_cname:String>*/
}
if (var1052){
if (likely(varonce1053!=NULL)) {
var1054 = varonce1053;
} else {
var1055 = "output";
var1056 = core__abstract_text___CString___to_s_full(var1055, 6l, 6l);
var1054 = var1056;
varonce1053 = var1054;
}
{
var1057 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var1054); /* == on <var_pname:String>*/
}
if (var1057){
if (unlikely(varonce1058==NULL)) {
var1059 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce1060!=NULL)) {
var1061 = varonce1060;
} else {
var1062 = "printf(";
var1063 = core__abstract_text___CString___to_s_full(var1062, 7l, 7l);
var1061 = var1063;
varonce1060 = var1061;
}
((struct instance_core__NativeArray*)var1059)->values[0]=var1061;
if (likely(varonce1064!=NULL)) {
var1065 = varonce1064;
} else {
var1066 = "?\"true\\n\":\"false\\n\");";
var1067 = core__abstract_text___CString___to_s_full(var1066, 21l, 21l);
var1065 = var1067;
varonce1064 = var1065;
}
((struct instance_core__NativeArray*)var1059)->values[2]=var1065;
} else {
var1059 = varonce1058;
varonce1058 = NULL;
}
{
var1068 = core___core__SequenceRead___Collection__first(var_arguments);
}
{
var1069 = ((val*(*)(val* self))(var1068->class->vft[COLOR_core__abstract_text__Object__to_s]))(var1068); /* to_s on <var1068:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var1059)->values[1]=var1069;
{
var1070 = ((val*(*)(val* self))(var1059->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var1059); /* native_to_s on <var1059:NativeArray[String]>*/
}
varonce1058 = var1059;
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var1070); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce1071!=NULL)) {
var1072 = varonce1071;
} else {
var1073 = "object_id";
var1074 = core__abstract_text___CString___to_s_full(var1073, 9l, 9l);
var1072 = var1074;
varonce1071 = var1072;
}
{
var1075 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var1072); /* == on <var_pname:String>*/
}
if (var1075){
if (unlikely(varonce1076==NULL)) {
var1077 = NEW_core__NativeArray(2l, &type_core__NativeArray__core__String);
if (likely(varonce1078!=NULL)) {
var1079 = varonce1078;
} else {
var1080 = "(long)";
var1081 = core__abstract_text___CString___to_s_full(var1080, 6l, 6l);
var1079 = var1081;
varonce1078 = var1079;
}
((struct instance_core__NativeArray*)var1077)->values[0]=var1079;
} else {
var1077 = varonce1076;
varonce1076 = NULL;
}
{
var1082 = core___core__SequenceRead___Collection__first(var_arguments);
}
{
var1083 = ((val*(*)(val* self))(var1082->class->vft[COLOR_core__abstract_text__Object__to_s]))(var1082); /* to_s on <var1082:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var1077)->values[1]=var1083;
{
var1084 = ((val*(*)(val* self))(var1077->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var1077); /* native_to_s on <var1077:NativeArray[String]>*/
}
varonce1076 = var1077;
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2505);
fatal_exit(1);
}
{
var1085 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var1084, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var1085); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce1086!=NULL)) {
var1087 = varonce1086;
} else {
var1088 = "==";
var1089 = core__abstract_text___CString___to_s_full(var1088, 2l, 2l);
var1087 = var1089;
varonce1086 = var1087;
}
{
var1090 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var1087); /* == on <var_pname:String>*/
}
if (var1090){
{
var1091 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var1092 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 1l);
}
{
var1093 = ((val*(*)(val* self, val* p0, val* p1))(var_v->class->vft[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor__equal_test]))(var_v, var1091, var1092); /* equal_test on <var_v:AbstractCompilerVisitor>*/
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var1093); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce1094!=NULL)) {
var1095 = varonce1094;
} else {
var1096 = "!=";
var1097 = core__abstract_text___CString___to_s_full(var1096, 2l, 2l);
var1095 = var1097;
varonce1094 = var1095;
}
{
var1098 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var1095); /* == on <var_pname:String>*/
}
if (var1098){
{
var1099 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var1100 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 1l);
}
{
var1101 = ((val*(*)(val* self, val* p0, val* p1))(var_v->class->vft[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor__equal_test]))(var_v, var1099, var1100); /* equal_test on <var_v:AbstractCompilerVisitor>*/
}
var_res1102 = var1101;
if (unlikely(varonce1103==NULL)) {
var1104 = NEW_core__NativeArray(2l, &type_core__NativeArray__core__String);
if (likely(varonce1105!=NULL)) {
var1106 = varonce1105;
} else {
var1107 = "!";
var1108 = core__abstract_text___CString___to_s_full(var1107, 1l, 1l);
var1106 = var1108;
varonce1105 = var1106;
}
((struct instance_core__NativeArray*)var1104)->values[0]=var1106;
} else {
var1104 = varonce1103;
varonce1103 = NULL;
}
{
var1109 = ((val*(*)(val* self))(var_res1102->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_res1102); /* to_s on <var_res1102:RuntimeVariable>*/
}
((struct instance_core__NativeArray*)var1104)->values[1]=var1109;
{
var1110 = ((val*(*)(val* self))(var1104->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var1104); /* native_to_s on <var1104:NativeArray[String]>*/
}
varonce1103 = var1104;
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2512);
fatal_exit(1);
}
{
var1111 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var1110, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var1111); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
}
}
}
}
} else {
if (likely(varonce1112!=NULL)) {
var1113 = varonce1112;
} else {
var1114 = "Float";
var1115 = core__abstract_text___CString___to_s_full(var1114, 5l, 5l);
var1113 = var1115;
varonce1112 = var1113;
}
{
var1116 = ((short int(*)(val* self, val* p0))(var_cname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_cname, var1113); /* == on <var_cname:String>*/
}
if (var1116){
if (likely(varonce1117!=NULL)) {
var1118 = varonce1117;
} else {
var1119 = "output";
var1120 = core__abstract_text___CString___to_s_full(var1119, 6l, 6l);
var1118 = var1120;
varonce1117 = var1118;
}
{
var1121 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var1118); /* == on <var_pname:String>*/
}
if (var1121){
if (unlikely(varonce1122==NULL)) {
var1123 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce1124!=NULL)) {
var1125 = varonce1124;
} else {
var1126 = "printf(\"%f\\n\", ";
var1127 = core__abstract_text___CString___to_s_full(var1126, 15l, 15l);
var1125 = var1127;
varonce1124 = var1125;
}
((struct instance_core__NativeArray*)var1123)->values[0]=var1125;
if (likely(varonce1128!=NULL)) {
var1129 = varonce1128;
} else {
var1130 = ");";
var1131 = core__abstract_text___CString___to_s_full(var1130, 2l, 2l);
var1129 = var1131;
varonce1128 = var1129;
}
((struct instance_core__NativeArray*)var1123)->values[2]=var1129;
} else {
var1123 = varonce1122;
varonce1122 = NULL;
}
{
var1132 = core___core__SequenceRead___Collection__first(var_arguments);
}
{
var1133 = ((val*(*)(val* self))(var1132->class->vft[COLOR_core__abstract_text__Object__to_s]))(var1132); /* to_s on <var1132:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var1123)->values[1]=var1133;
{
var1134 = ((val*(*)(val* self))(var1123->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var1123); /* native_to_s on <var1123:NativeArray[String]>*/
}
varonce1122 = var1123;
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var1134); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce1135!=NULL)) {
var1136 = varonce1135;
} else {
var1137 = "object_id";
var1138 = core__abstract_text___CString___to_s_full(var1137, 9l, 9l);
var1136 = var1138;
varonce1135 = var1136;
}
{
var1139 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var1136); /* == on <var_pname:String>*/
}
if (var1139){
if (unlikely(varonce1140==NULL)) {
var1141 = NEW_core__NativeArray(2l, &type_core__NativeArray__core__String);
if (likely(varonce1142!=NULL)) {
var1143 = varonce1142;
} else {
var1144 = "(double)";
var1145 = core__abstract_text___CString___to_s_full(var1144, 8l, 8l);
var1143 = var1145;
varonce1142 = var1143;
}
((struct instance_core__NativeArray*)var1141)->values[0]=var1143;
} else {
var1141 = varonce1140;
varonce1140 = NULL;
}
{
var1146 = core___core__SequenceRead___Collection__first(var_arguments);
}
{
var1147 = ((val*(*)(val* self))(var1146->class->vft[COLOR_core__abstract_text__Object__to_s]))(var1146); /* to_s on <var1146:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var1141)->values[1]=var1147;
{
var1148 = ((val*(*)(val* self))(var1141->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var1141); /* native_to_s on <var1141:NativeArray[String]>*/
}
varonce1140 = var1141;
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2520);
fatal_exit(1);
}
{
var1149 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var1148, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var1149); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce1150!=NULL)) {
var1151 = varonce1150;
} else {
var1152 = "+";
var1153 = core__abstract_text___CString___to_s_full(var1152, 1l, 1l);
var1151 = var1153;
varonce1150 = var1151;
}
{
var1154 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var1151); /* == on <var_pname:String>*/
}
if (var1154){
if (unlikely(varonce1155==NULL)) {
var1156 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce1157!=NULL)) {
var1158 = varonce1157;
} else {
var1159 = " + ";
var1160 = core__abstract_text___CString___to_s_full(var1159, 3l, 3l);
var1158 = var1160;
varonce1157 = var1158;
}
((struct instance_core__NativeArray*)var1156)->values[1]=var1158;
} else {
var1156 = varonce1155;
varonce1155 = NULL;
}
{
var1161 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var1162 = ((val*(*)(val* self))(var1161->class->vft[COLOR_core__abstract_text__Object__to_s]))(var1161); /* to_s on <var1161:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var1156)->values[0]=var1162;
{
var1163 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 1l);
}
{
var1164 = ((val*(*)(val* self))(var1163->class->vft[COLOR_core__abstract_text__Object__to_s]))(var1163); /* to_s on <var1163:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var1156)->values[2]=var1164;
{
var1165 = ((val*(*)(val* self))(var1156->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var1156); /* native_to_s on <var1156:NativeArray[String]>*/
}
varonce1155 = var1156;
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2523);
fatal_exit(1);
}
{
var1166 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var1165, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var1166); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce1167!=NULL)) {
var1168 = varonce1167;
} else {
var1169 = "-";
var1170 = core__abstract_text___CString___to_s_full(var1169, 1l, 1l);
var1168 = var1170;
varonce1167 = var1168;
}
{
var1171 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var1168); /* == on <var_pname:String>*/
}
if (var1171){
if (unlikely(varonce1172==NULL)) {
var1173 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce1174!=NULL)) {
var1175 = varonce1174;
} else {
var1176 = " - ";
var1177 = core__abstract_text___CString___to_s_full(var1176, 3l, 3l);
var1175 = var1177;
varonce1174 = var1175;
}
((struct instance_core__NativeArray*)var1173)->values[1]=var1175;
} else {
var1173 = varonce1172;
varonce1172 = NULL;
}
{
var1178 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var1179 = ((val*(*)(val* self))(var1178->class->vft[COLOR_core__abstract_text__Object__to_s]))(var1178); /* to_s on <var1178:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var1173)->values[0]=var1179;
{
var1180 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 1l);
}
{
var1181 = ((val*(*)(val* self))(var1180->class->vft[COLOR_core__abstract_text__Object__to_s]))(var1180); /* to_s on <var1180:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var1173)->values[2]=var1181;
{
var1182 = ((val*(*)(val* self))(var1173->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var1173); /* native_to_s on <var1173:NativeArray[String]>*/
}
varonce1172 = var1173;
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2526);
fatal_exit(1);
}
{
var1183 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var1182, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var1183); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce1184!=NULL)) {
var1185 = varonce1184;
} else {
var1186 = "unary -";
var1187 = core__abstract_text___CString___to_s_full(var1186, 7l, 7l);
var1185 = var1187;
varonce1184 = var1185;
}
{
var1188 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var1185); /* == on <var_pname:String>*/
}
if (var1188){
if (unlikely(varonce1189==NULL)) {
var1190 = NEW_core__NativeArray(2l, &type_core__NativeArray__core__String);
if (likely(varonce1191!=NULL)) {
var1192 = varonce1191;
} else {
var1193 = "-";
var1194 = core__abstract_text___CString___to_s_full(var1193, 1l, 1l);
var1192 = var1194;
varonce1191 = var1192;
}
((struct instance_core__NativeArray*)var1190)->values[0]=var1192;
} else {
var1190 = varonce1189;
varonce1189 = NULL;
}
{
var1195 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var1196 = ((val*(*)(val* self))(var1195->class->vft[COLOR_core__abstract_text__Object__to_s]))(var1195); /* to_s on <var1195:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var1190)->values[1]=var1196;
{
var1197 = ((val*(*)(val* self))(var1190->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var1190); /* native_to_s on <var1190:NativeArray[String]>*/
}
varonce1189 = var1190;
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2529);
fatal_exit(1);
}
{
var1198 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var1197, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var1198); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce1199!=NULL)) {
var1200 = varonce1199;
} else {
var1201 = "unary +";
var1202 = core__abstract_text___CString___to_s_full(var1201, 7l, 7l);
var1200 = var1202;
varonce1199 = var1200;
}
{
var1203 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var1200); /* == on <var_pname:String>*/
}
if (var1203){
{
var1204 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var1204); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce1205!=NULL)) {
var1206 = varonce1205;
} else {
var1207 = "succ";
var1208 = core__abstract_text___CString___to_s_full(var1207, 4l, 4l);
var1206 = var1208;
varonce1205 = var1206;
}
{
var1209 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var1206); /* == on <var_pname:String>*/
}
if (var1209){
if (unlikely(varonce1210==NULL)) {
var1211 = NEW_core__NativeArray(2l, &type_core__NativeArray__core__String);
if (likely(varonce1212!=NULL)) {
var1213 = varonce1212;
} else {
var1214 = "+1";
var1215 = core__abstract_text___CString___to_s_full(var1214, 2l, 2l);
var1213 = var1215;
varonce1212 = var1213;
}
((struct instance_core__NativeArray*)var1211)->values[1]=var1213;
} else {
var1211 = varonce1210;
varonce1210 = NULL;
}
{
var1216 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var1217 = ((val*(*)(val* self))(var1216->class->vft[COLOR_core__abstract_text__Object__to_s]))(var1216); /* to_s on <var1216:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var1211)->values[0]=var1217;
{
var1218 = ((val*(*)(val* self))(var1211->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var1211); /* native_to_s on <var1211:NativeArray[String]>*/
}
varonce1210 = var1211;
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2535);
fatal_exit(1);
}
{
var1219 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var1218, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var1219); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce1220!=NULL)) {
var1221 = varonce1220;
} else {
var1222 = "prec";
var1223 = core__abstract_text___CString___to_s_full(var1222, 4l, 4l);
var1221 = var1223;
varonce1220 = var1221;
}
{
var1224 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var1221); /* == on <var_pname:String>*/
}
if (var1224){
if (unlikely(varonce1225==NULL)) {
var1226 = NEW_core__NativeArray(2l, &type_core__NativeArray__core__String);
if (likely(varonce1227!=NULL)) {
var1228 = varonce1227;
} else {
var1229 = "-1";
var1230 = core__abstract_text___CString___to_s_full(var1229, 2l, 2l);
var1228 = var1230;
varonce1227 = var1228;
}
((struct instance_core__NativeArray*)var1226)->values[1]=var1228;
} else {
var1226 = varonce1225;
varonce1225 = NULL;
}
{
var1231 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var1232 = ((val*(*)(val* self))(var1231->class->vft[COLOR_core__abstract_text__Object__to_s]))(var1231); /* to_s on <var1231:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var1226)->values[0]=var1232;
{
var1233 = ((val*(*)(val* self))(var1226->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var1226); /* native_to_s on <var1226:NativeArray[String]>*/
}
varonce1225 = var1226;
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2538);
fatal_exit(1);
}
{
var1234 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var1233, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var1234); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce1235!=NULL)) {
var1236 = varonce1235;
} else {
var1237 = "*";
var1238 = core__abstract_text___CString___to_s_full(var1237, 1l, 1l);
var1236 = var1238;
varonce1235 = var1236;
}
{
var1239 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var1236); /* == on <var_pname:String>*/
}
if (var1239){
if (unlikely(varonce1240==NULL)) {
var1241 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce1242!=NULL)) {
var1243 = varonce1242;
} else {
var1244 = " * ";
var1245 = core__abstract_text___CString___to_s_full(var1244, 3l, 3l);
var1243 = var1245;
varonce1242 = var1243;
}
((struct instance_core__NativeArray*)var1241)->values[1]=var1243;
} else {
var1241 = varonce1240;
varonce1240 = NULL;
}
{
var1246 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var1247 = ((val*(*)(val* self))(var1246->class->vft[COLOR_core__abstract_text__Object__to_s]))(var1246); /* to_s on <var1246:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var1241)->values[0]=var1247;
{
var1248 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 1l);
}
{
var1249 = ((val*(*)(val* self))(var1248->class->vft[COLOR_core__abstract_text__Object__to_s]))(var1248); /* to_s on <var1248:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var1241)->values[2]=var1249;
{
var1250 = ((val*(*)(val* self))(var1241->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var1241); /* native_to_s on <var1241:NativeArray[String]>*/
}
varonce1240 = var1241;
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2541);
fatal_exit(1);
}
{
var1251 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var1250, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var1251); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce1252!=NULL)) {
var1253 = varonce1252;
} else {
var1254 = "/";
var1255 = core__abstract_text___CString___to_s_full(var1254, 1l, 1l);
var1253 = var1255;
varonce1252 = var1253;
}
{
var1256 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var1253); /* == on <var_pname:String>*/
}
if (var1256){
if (unlikely(varonce1257==NULL)) {
var1258 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce1259!=NULL)) {
var1260 = varonce1259;
} else {
var1261 = " / ";
var1262 = core__abstract_text___CString___to_s_full(var1261, 3l, 3l);
var1260 = var1262;
varonce1259 = var1260;
}
((struct instance_core__NativeArray*)var1258)->values[1]=var1260;
} else {
var1258 = varonce1257;
varonce1257 = NULL;
}
{
var1263 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var1264 = ((val*(*)(val* self))(var1263->class->vft[COLOR_core__abstract_text__Object__to_s]))(var1263); /* to_s on <var1263:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var1258)->values[0]=var1264;
{
var1265 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 1l);
}
{
var1266 = ((val*(*)(val* self))(var1265->class->vft[COLOR_core__abstract_text__Object__to_s]))(var1265); /* to_s on <var1265:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var1258)->values[2]=var1266;
{
var1267 = ((val*(*)(val* self))(var1258->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var1258); /* native_to_s on <var1258:NativeArray[String]>*/
}
varonce1257 = var1258;
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2544);
fatal_exit(1);
}
{
var1268 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var1267, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var1268); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce1269!=NULL)) {
var1270 = varonce1269;
} else {
var1271 = "==";
var1272 = core__abstract_text___CString___to_s_full(var1271, 2l, 2l);
var1270 = var1272;
varonce1269 = var1270;
}
{
var1273 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var1270); /* == on <var_pname:String>*/
}
if (var1273){
{
var1274 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var1275 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 1l);
}
{
var1276 = ((val*(*)(val* self, val* p0, val* p1))(var_v->class->vft[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor__equal_test]))(var_v, var1274, var1275); /* equal_test on <var_v:AbstractCompilerVisitor>*/
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var1276); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce1277!=NULL)) {
var1278 = varonce1277;
} else {
var1279 = "!=";
var1280 = core__abstract_text___CString___to_s_full(var1279, 2l, 2l);
var1278 = var1280;
varonce1277 = var1278;
}
{
var1281 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var1278); /* == on <var_pname:String>*/
}
if (var1281){
{
var1282 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var1283 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 1l);
}
{
var1284 = ((val*(*)(val* self, val* p0, val* p1))(var_v->class->vft[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor__equal_test]))(var_v, var1282, var1283); /* equal_test on <var_v:AbstractCompilerVisitor>*/
}
var_res1285 = var1284;
if (unlikely(varonce1286==NULL)) {
var1287 = NEW_core__NativeArray(2l, &type_core__NativeArray__core__String);
if (likely(varonce1288!=NULL)) {
var1289 = varonce1288;
} else {
var1290 = "!";
var1291 = core__abstract_text___CString___to_s_full(var1290, 1l, 1l);
var1289 = var1291;
varonce1288 = var1289;
}
((struct instance_core__NativeArray*)var1287)->values[0]=var1289;
} else {
var1287 = varonce1286;
varonce1286 = NULL;
}
{
var1292 = ((val*(*)(val* self))(var_res1285->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_res1285); /* to_s on <var_res1285:RuntimeVariable>*/
}
((struct instance_core__NativeArray*)var1287)->values[1]=var1292;
{
var1293 = ((val*(*)(val* self))(var1287->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var1287); /* native_to_s on <var1287:NativeArray[String]>*/
}
varonce1286 = var1287;
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2551);
fatal_exit(1);
}
{
var1294 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var1293, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var1294); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce1295!=NULL)) {
var1296 = varonce1295;
} else {
var1297 = "<";
var1298 = core__abstract_text___CString___to_s_full(var1297, 1l, 1l);
var1296 = var1298;
varonce1295 = var1296;
}
{
var1299 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var1296); /* == on <var_pname:String>*/
}
if (var1299){
if (unlikely(varonce1300==NULL)) {
var1301 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce1302!=NULL)) {
var1303 = varonce1302;
} else {
var1304 = " < ";
var1305 = core__abstract_text___CString___to_s_full(var1304, 3l, 3l);
var1303 = var1305;
varonce1302 = var1303;
}
((struct instance_core__NativeArray*)var1301)->values[1]=var1303;
} else {
var1301 = varonce1300;
varonce1300 = NULL;
}
{
var1306 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var1307 = ((val*(*)(val* self))(var1306->class->vft[COLOR_core__abstract_text__Object__to_s]))(var1306); /* to_s on <var1306:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var1301)->values[0]=var1307;
{
var1308 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 1l);
}
{
var1309 = ((val*(*)(val* self))(var1308->class->vft[COLOR_core__abstract_text__Object__to_s]))(var1308); /* to_s on <var1308:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var1301)->values[2]=var1309;
{
var1310 = ((val*(*)(val* self))(var1301->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var1301); /* native_to_s on <var1301:NativeArray[String]>*/
}
varonce1300 = var1301;
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2554);
fatal_exit(1);
}
{
var1311 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var1310, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var1311); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce1312!=NULL)) {
var1313 = varonce1312;
} else {
var1314 = ">";
var1315 = core__abstract_text___CString___to_s_full(var1314, 1l, 1l);
var1313 = var1315;
varonce1312 = var1313;
}
{
var1316 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var1313); /* == on <var_pname:String>*/
}
if (var1316){
if (unlikely(varonce1317==NULL)) {
var1318 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce1319!=NULL)) {
var1320 = varonce1319;
} else {
var1321 = " > ";
var1322 = core__abstract_text___CString___to_s_full(var1321, 3l, 3l);
var1320 = var1322;
varonce1319 = var1320;
}
((struct instance_core__NativeArray*)var1318)->values[1]=var1320;
} else {
var1318 = varonce1317;
varonce1317 = NULL;
}
{
var1323 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var1324 = ((val*(*)(val* self))(var1323->class->vft[COLOR_core__abstract_text__Object__to_s]))(var1323); /* to_s on <var1323:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var1318)->values[0]=var1324;
{
var1325 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 1l);
}
{
var1326 = ((val*(*)(val* self))(var1325->class->vft[COLOR_core__abstract_text__Object__to_s]))(var1325); /* to_s on <var1325:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var1318)->values[2]=var1326;
{
var1327 = ((val*(*)(val* self))(var1318->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var1318); /* native_to_s on <var1318:NativeArray[String]>*/
}
varonce1317 = var1318;
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2557);
fatal_exit(1);
}
{
var1328 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var1327, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var1328); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce1329!=NULL)) {
var1330 = varonce1329;
} else {
var1331 = "<=";
var1332 = core__abstract_text___CString___to_s_full(var1331, 2l, 2l);
var1330 = var1332;
varonce1329 = var1330;
}
{
var1333 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var1330); /* == on <var_pname:String>*/
}
if (var1333){
if (unlikely(varonce1334==NULL)) {
var1335 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce1336!=NULL)) {
var1337 = varonce1336;
} else {
var1338 = " <= ";
var1339 = core__abstract_text___CString___to_s_full(var1338, 4l, 4l);
var1337 = var1339;
varonce1336 = var1337;
}
((struct instance_core__NativeArray*)var1335)->values[1]=var1337;
} else {
var1335 = varonce1334;
varonce1334 = NULL;
}
{
var1340 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var1341 = ((val*(*)(val* self))(var1340->class->vft[COLOR_core__abstract_text__Object__to_s]))(var1340); /* to_s on <var1340:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var1335)->values[0]=var1341;
{
var1342 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 1l);
}
{
var1343 = ((val*(*)(val* self))(var1342->class->vft[COLOR_core__abstract_text__Object__to_s]))(var1342); /* to_s on <var1342:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var1335)->values[2]=var1343;
{
var1344 = ((val*(*)(val* self))(var1335->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var1335); /* native_to_s on <var1335:NativeArray[String]>*/
}
varonce1334 = var1335;
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2560);
fatal_exit(1);
}
{
var1345 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var1344, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var1345); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce1346!=NULL)) {
var1347 = varonce1346;
} else {
var1348 = ">=";
var1349 = core__abstract_text___CString___to_s_full(var1348, 2l, 2l);
var1347 = var1349;
varonce1346 = var1347;
}
{
var1350 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var1347); /* == on <var_pname:String>*/
}
if (var1350){
if (unlikely(varonce1351==NULL)) {
var1352 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce1353!=NULL)) {
var1354 = varonce1353;
} else {
var1355 = " >= ";
var1356 = core__abstract_text___CString___to_s_full(var1355, 4l, 4l);
var1354 = var1356;
varonce1353 = var1354;
}
((struct instance_core__NativeArray*)var1352)->values[1]=var1354;
} else {
var1352 = varonce1351;
varonce1351 = NULL;
}
{
var1357 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var1358 = ((val*(*)(val* self))(var1357->class->vft[COLOR_core__abstract_text__Object__to_s]))(var1357); /* to_s on <var1357:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var1352)->values[0]=var1358;
{
var1359 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 1l);
}
{
var1360 = ((val*(*)(val* self))(var1359->class->vft[COLOR_core__abstract_text__Object__to_s]))(var1359); /* to_s on <var1359:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var1352)->values[2]=var1360;
{
var1361 = ((val*(*)(val* self))(var1352->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var1352); /* native_to_s on <var1352:NativeArray[String]>*/
}
varonce1351 = var1352;
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2563);
fatal_exit(1);
}
{
var1362 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var1361, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var1362); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce1363!=NULL)) {
var1364 = varonce1363;
} else {
var1365 = "to_i";
var1366 = core__abstract_text___CString___to_s_full(var1365, 4l, 4l);
var1364 = var1366;
varonce1363 = var1364;
}
{
var1367 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var1364); /* == on <var_pname:String>*/
}
if (var1367){
if (unlikely(varonce1368==NULL)) {
var1369 = NEW_core__NativeArray(2l, &type_core__NativeArray__core__String);
if (likely(varonce1370!=NULL)) {
var1371 = varonce1370;
} else {
var1372 = "(long)";
var1373 = core__abstract_text___CString___to_s_full(var1372, 6l, 6l);
var1371 = var1373;
varonce1370 = var1371;
}
((struct instance_core__NativeArray*)var1369)->values[0]=var1371;
} else {
var1369 = varonce1368;
varonce1368 = NULL;
}
{
var1374 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var1375 = ((val*(*)(val* self))(var1374->class->vft[COLOR_core__abstract_text__Object__to_s]))(var1374); /* to_s on <var1374:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var1369)->values[1]=var1375;
{
var1376 = ((val*(*)(val* self))(var1369->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var1369); /* native_to_s on <var1369:NativeArray[String]>*/
}
varonce1368 = var1369;
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2566);
fatal_exit(1);
}
{
var1377 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var1376, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var1377); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce1378!=NULL)) {
var1379 = varonce1378;
} else {
var1380 = "to_b";
var1381 = core__abstract_text___CString___to_s_full(var1380, 4l, 4l);
var1379 = var1381;
varonce1378 = var1379;
}
{
var1382 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var1379); /* == on <var_pname:String>*/
}
if (var1382){
if (unlikely(varonce1383==NULL)) {
var1384 = NEW_core__NativeArray(2l, &type_core__NativeArray__core__String);
if (likely(varonce1385!=NULL)) {
var1386 = varonce1385;
} else {
var1387 = "(unsigned char)";
var1388 = core__abstract_text___CString___to_s_full(var1387, 15l, 15l);
var1386 = var1388;
varonce1385 = var1386;
}
((struct instance_core__NativeArray*)var1384)->values[0]=var1386;
} else {
var1384 = varonce1383;
varonce1383 = NULL;
}
{
var1389 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var1390 = ((val*(*)(val* self))(var1389->class->vft[COLOR_core__abstract_text__Object__to_s]))(var1389); /* to_s on <var1389:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var1384)->values[1]=var1390;
{
var1391 = ((val*(*)(val* self))(var1384->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var1384); /* native_to_s on <var1384:NativeArray[String]>*/
}
varonce1383 = var1384;
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2569);
fatal_exit(1);
}
{
var1392 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var1391, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var1392); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce1393!=NULL)) {
var1394 = varonce1393;
} else {
var1395 = "to_i8";
var1396 = core__abstract_text___CString___to_s_full(var1395, 5l, 5l);
var1394 = var1396;
varonce1393 = var1394;
}
{
var1397 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var1394); /* == on <var_pname:String>*/
}
if (var1397){
if (unlikely(varonce1398==NULL)) {
var1399 = NEW_core__NativeArray(2l, &type_core__NativeArray__core__String);
if (likely(varonce1400!=NULL)) {
var1401 = varonce1400;
} else {
var1402 = "(int8_t)";
var1403 = core__abstract_text___CString___to_s_full(var1402, 8l, 8l);
var1401 = var1403;
varonce1400 = var1401;
}
((struct instance_core__NativeArray*)var1399)->values[0]=var1401;
} else {
var1399 = varonce1398;
varonce1398 = NULL;
}
{
var1404 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var1405 = ((val*(*)(val* self))(var1404->class->vft[COLOR_core__abstract_text__Object__to_s]))(var1404); /* to_s on <var1404:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var1399)->values[1]=var1405;
{
var1406 = ((val*(*)(val* self))(var1399->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var1399); /* native_to_s on <var1399:NativeArray[String]>*/
}
varonce1398 = var1399;
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2572);
fatal_exit(1);
}
{
var1407 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var1406, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var1407); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce1408!=NULL)) {
var1409 = varonce1408;
} else {
var1410 = "to_i16";
var1411 = core__abstract_text___CString___to_s_full(var1410, 6l, 6l);
var1409 = var1411;
varonce1408 = var1409;
}
{
var1412 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var1409); /* == on <var_pname:String>*/
}
if (var1412){
if (unlikely(varonce1413==NULL)) {
var1414 = NEW_core__NativeArray(2l, &type_core__NativeArray__core__String);
if (likely(varonce1415!=NULL)) {
var1416 = varonce1415;
} else {
var1417 = "(int16_t)";
var1418 = core__abstract_text___CString___to_s_full(var1417, 9l, 9l);
var1416 = var1418;
varonce1415 = var1416;
}
((struct instance_core__NativeArray*)var1414)->values[0]=var1416;
} else {
var1414 = varonce1413;
varonce1413 = NULL;
}
{
var1419 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var1420 = ((val*(*)(val* self))(var1419->class->vft[COLOR_core__abstract_text__Object__to_s]))(var1419); /* to_s on <var1419:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var1414)->values[1]=var1420;
{
var1421 = ((val*(*)(val* self))(var1414->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var1414); /* native_to_s on <var1414:NativeArray[String]>*/
}
varonce1413 = var1414;
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2575);
fatal_exit(1);
}
{
var1422 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var1421, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var1422); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce1423!=NULL)) {
var1424 = varonce1423;
} else {
var1425 = "to_u16";
var1426 = core__abstract_text___CString___to_s_full(var1425, 6l, 6l);
var1424 = var1426;
varonce1423 = var1424;
}
{
var1427 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var1424); /* == on <var_pname:String>*/
}
if (var1427){
if (unlikely(varonce1428==NULL)) {
var1429 = NEW_core__NativeArray(2l, &type_core__NativeArray__core__String);
if (likely(varonce1430!=NULL)) {
var1431 = varonce1430;
} else {
var1432 = "(uint16_t)";
var1433 = core__abstract_text___CString___to_s_full(var1432, 10l, 10l);
var1431 = var1433;
varonce1430 = var1431;
}
((struct instance_core__NativeArray*)var1429)->values[0]=var1431;
} else {
var1429 = varonce1428;
varonce1428 = NULL;
}
{
var1434 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var1435 = ((val*(*)(val* self))(var1434->class->vft[COLOR_core__abstract_text__Object__to_s]))(var1434); /* to_s on <var1434:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var1429)->values[1]=var1435;
{
var1436 = ((val*(*)(val* self))(var1429->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var1429); /* native_to_s on <var1429:NativeArray[String]>*/
}
varonce1428 = var1429;
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2578);
fatal_exit(1);
}
{
var1437 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var1436, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var1437); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce1438!=NULL)) {
var1439 = varonce1438;
} else {
var1440 = "to_i32";
var1441 = core__abstract_text___CString___to_s_full(var1440, 6l, 6l);
var1439 = var1441;
varonce1438 = var1439;
}
{
var1442 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var1439); /* == on <var_pname:String>*/
}
if (var1442){
if (unlikely(varonce1443==NULL)) {
var1444 = NEW_core__NativeArray(2l, &type_core__NativeArray__core__String);
if (likely(varonce1445!=NULL)) {
var1446 = varonce1445;
} else {
var1447 = "(int32_t)";
var1448 = core__abstract_text___CString___to_s_full(var1447, 9l, 9l);
var1446 = var1448;
varonce1445 = var1446;
}
((struct instance_core__NativeArray*)var1444)->values[0]=var1446;
} else {
var1444 = varonce1443;
varonce1443 = NULL;
}
{
var1449 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var1450 = ((val*(*)(val* self))(var1449->class->vft[COLOR_core__abstract_text__Object__to_s]))(var1449); /* to_s on <var1449:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var1444)->values[1]=var1450;
{
var1451 = ((val*(*)(val* self))(var1444->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var1444); /* native_to_s on <var1444:NativeArray[String]>*/
}
varonce1443 = var1444;
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2581);
fatal_exit(1);
}
{
var1452 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var1451, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var1452); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce1453!=NULL)) {
var1454 = varonce1453;
} else {
var1455 = "to_u32";
var1456 = core__abstract_text___CString___to_s_full(var1455, 6l, 6l);
var1454 = var1456;
varonce1453 = var1454;
}
{
var1457 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var1454); /* == on <var_pname:String>*/
}
if (var1457){
if (unlikely(varonce1458==NULL)) {
var1459 = NEW_core__NativeArray(2l, &type_core__NativeArray__core__String);
if (likely(varonce1460!=NULL)) {
var1461 = varonce1460;
} else {
var1462 = "(uint32_t)";
var1463 = core__abstract_text___CString___to_s_full(var1462, 10l, 10l);
var1461 = var1463;
varonce1460 = var1461;
}
((struct instance_core__NativeArray*)var1459)->values[0]=var1461;
} else {
var1459 = varonce1458;
varonce1458 = NULL;
}
{
var1464 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var1465 = ((val*(*)(val* self))(var1464->class->vft[COLOR_core__abstract_text__Object__to_s]))(var1464); /* to_s on <var1464:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var1459)->values[1]=var1465;
{
var1466 = ((val*(*)(val* self))(var1459->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var1459); /* native_to_s on <var1459:NativeArray[String]>*/
}
varonce1458 = var1459;
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2584);
fatal_exit(1);
}
{
var1467 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var1466, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var1467); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
} else {
if (likely(varonce1468!=NULL)) {
var1469 = varonce1468;
} else {
var1470 = "CString";
var1471 = core__abstract_text___CString___to_s_full(var1470, 7l, 7l);
var1469 = var1471;
varonce1468 = var1469;
}
{
var1472 = ((short int(*)(val* self, val* p0))(var_cname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_cname, var1469); /* == on <var_cname:String>*/
}
if (var1472){
if (likely(varonce1473!=NULL)) {
var1474 = varonce1473;
} else {
var1475 = "[]";
var1476 = core__abstract_text___CString___to_s_full(var1475, 2l, 2l);
var1474 = var1476;
varonce1473 = var1474;
}
{
var1477 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var1474); /* == on <var_pname:String>*/
}
if (var1477){
if (unlikely(varonce1478==NULL)) {
var1479 = NEW_core__NativeArray(5l, &type_core__NativeArray__core__String);
if (likely(varonce1480!=NULL)) {
var1481 = varonce1480;
} else {
var1482 = "(unsigned char)((int)";
var1483 = core__abstract_text___CString___to_s_full(var1482, 21l, 21l);
var1481 = var1483;
varonce1480 = var1481;
}
((struct instance_core__NativeArray*)var1479)->values[0]=var1481;
if (likely(varonce1484!=NULL)) {
var1485 = varonce1484;
} else {
var1486 = "[";
var1487 = core__abstract_text___CString___to_s_full(var1486, 1l, 1l);
var1485 = var1487;
varonce1484 = var1485;
}
((struct instance_core__NativeArray*)var1479)->values[2]=var1485;
if (likely(varonce1488!=NULL)) {
var1489 = varonce1488;
} else {
var1490 = "])";
var1491 = core__abstract_text___CString___to_s_full(var1490, 2l, 2l);
var1489 = var1491;
varonce1488 = var1489;
}
((struct instance_core__NativeArray*)var1479)->values[4]=var1489;
} else {
var1479 = varonce1478;
varonce1478 = NULL;
}
{
var1492 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var1493 = ((val*(*)(val* self))(var1492->class->vft[COLOR_core__abstract_text__Object__to_s]))(var1492); /* to_s on <var1492:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var1479)->values[1]=var1493;
{
var1494 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 1l);
}
{
var1495 = ((val*(*)(val* self))(var1494->class->vft[COLOR_core__abstract_text__Object__to_s]))(var1494); /* to_s on <var1494:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var1479)->values[3]=var1495;
{
var1496 = ((val*(*)(val* self))(var1479->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var1479); /* native_to_s on <var1479:NativeArray[String]>*/
}
varonce1478 = var1479;
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2589);
fatal_exit(1);
}
{
var1497 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var1496, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var1497); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce1498!=NULL)) {
var1499 = varonce1498;
} else {
var1500 = "[]=";
var1501 = core__abstract_text___CString___to_s_full(var1500, 3l, 3l);
var1499 = var1501;
varonce1498 = var1499;
}
{
var1502 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var1499); /* == on <var_pname:String>*/
}
if (var1502){
if (unlikely(varonce1503==NULL)) {
var1504 = NEW_core__NativeArray(6l, &type_core__NativeArray__core__String);
if (likely(varonce1505!=NULL)) {
var1506 = varonce1505;
} else {
var1507 = "[";
var1508 = core__abstract_text___CString___to_s_full(var1507, 1l, 1l);
var1506 = var1508;
varonce1505 = var1506;
}
((struct instance_core__NativeArray*)var1504)->values[1]=var1506;
if (likely(varonce1509!=NULL)) {
var1510 = varonce1509;
} else {
var1511 = "]=(unsigned char)";
var1512 = core__abstract_text___CString___to_s_full(var1511, 17l, 17l);
var1510 = var1512;
varonce1509 = var1510;
}
((struct instance_core__NativeArray*)var1504)->values[3]=var1510;
if (likely(varonce1513!=NULL)) {
var1514 = varonce1513;
} else {
var1515 = ";";
var1516 = core__abstract_text___CString___to_s_full(var1515, 1l, 1l);
var1514 = var1516;
varonce1513 = var1514;
}
((struct instance_core__NativeArray*)var1504)->values[5]=var1514;
} else {
var1504 = varonce1503;
varonce1503 = NULL;
}
{
var1517 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var1518 = ((val*(*)(val* self))(var1517->class->vft[COLOR_core__abstract_text__Object__to_s]))(var1517); /* to_s on <var1517:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var1504)->values[0]=var1518;
{
var1519 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 1l);
}
{
var1520 = ((val*(*)(val* self))(var1519->class->vft[COLOR_core__abstract_text__Object__to_s]))(var1519); /* to_s on <var1519:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var1504)->values[2]=var1520;
{
var1521 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 2l);
}
{
var1522 = ((val*(*)(val* self))(var1521->class->vft[COLOR_core__abstract_text__Object__to_s]))(var1521); /* to_s on <var1521:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var1504)->values[4]=var1522;
{
var1523 = ((val*(*)(val* self))(var1504->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var1504); /* native_to_s on <var1504:NativeArray[String]>*/
}
varonce1503 = var1504;
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var1523); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce1524!=NULL)) {
var1525 = varonce1524;
} else {
var1526 = "copy_to";
var1527 = core__abstract_text___CString___to_s_full(var1526, 7l, 7l);
var1525 = var1527;
varonce1524 = var1525;
}
{
var1528 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var1525); /* == on <var_pname:String>*/
}
if (var1528){
if (unlikely(varonce1529==NULL)) {
var1530 = NEW_core__NativeArray(11l, &type_core__NativeArray__core__String);
if (likely(varonce1531!=NULL)) {
var1532 = varonce1531;
} else {
var1533 = "memmove(";
var1534 = core__abstract_text___CString___to_s_full(var1533, 8l, 8l);
var1532 = var1534;
varonce1531 = var1532;
}
((struct instance_core__NativeArray*)var1530)->values[0]=var1532;
if (likely(varonce1535!=NULL)) {
var1536 = varonce1535;
} else {
var1537 = "+";
var1538 = core__abstract_text___CString___to_s_full(var1537, 1l, 1l);
var1536 = var1538;
varonce1535 = var1536;
}
((struct instance_core__NativeArray*)var1530)->values[2]=var1536;
if (likely(varonce1539!=NULL)) {
var1540 = varonce1539;
} else {
var1541 = ",";
var1542 = core__abstract_text___CString___to_s_full(var1541, 1l, 1l);
var1540 = var1542;
varonce1539 = var1540;
}
((struct instance_core__NativeArray*)var1530)->values[4]=var1540;
if (likely(varonce1543!=NULL)) {
var1544 = varonce1543;
} else {
var1545 = "+";
var1546 = core__abstract_text___CString___to_s_full(var1545, 1l, 1l);
var1544 = var1546;
varonce1543 = var1544;
}
((struct instance_core__NativeArray*)var1530)->values[6]=var1544;
if (likely(varonce1547!=NULL)) {
var1548 = varonce1547;
} else {
var1549 = ",";
var1550 = core__abstract_text___CString___to_s_full(var1549, 1l, 1l);
var1548 = var1550;
varonce1547 = var1548;
}
((struct instance_core__NativeArray*)var1530)->values[8]=var1548;
if (likely(varonce1551!=NULL)) {
var1552 = varonce1551;
} else {
var1553 = ");";
var1554 = core__abstract_text___CString___to_s_full(var1553, 2l, 2l);
var1552 = var1554;
varonce1551 = var1552;
}
((struct instance_core__NativeArray*)var1530)->values[10]=var1552;
} else {
var1530 = varonce1529;
varonce1529 = NULL;
}
{
var1555 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 1l);
}
{
var1556 = ((val*(*)(val* self))(var1555->class->vft[COLOR_core__abstract_text__Object__to_s]))(var1555); /* to_s on <var1555:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var1530)->values[1]=var1556;
{
var1557 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 4l);
}
{
var1558 = ((val*(*)(val* self))(var1557->class->vft[COLOR_core__abstract_text__Object__to_s]))(var1557); /* to_s on <var1557:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var1530)->values[3]=var1558;
{
var1559 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var1560 = ((val*(*)(val* self))(var1559->class->vft[COLOR_core__abstract_text__Object__to_s]))(var1559); /* to_s on <var1559:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var1530)->values[5]=var1560;
{
var1561 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 3l);
}
{
var1562 = ((val*(*)(val* self))(var1561->class->vft[COLOR_core__abstract_text__Object__to_s]))(var1561); /* to_s on <var1561:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var1530)->values[7]=var1562;
{
var1563 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 2l);
}
{
var1564 = ((val*(*)(val* self))(var1563->class->vft[COLOR_core__abstract_text__Object__to_s]))(var1563); /* to_s on <var1563:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var1530)->values[9]=var1564;
{
var1565 = ((val*(*)(val* self))(var1530->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var1530); /* native_to_s on <var1530:NativeArray[String]>*/
}
varonce1529 = var1530;
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var1565); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce1566!=NULL)) {
var1567 = varonce1566;
} else {
var1568 = "atoi";
var1569 = core__abstract_text___CString___to_s_full(var1568, 4l, 4l);
var1567 = var1569;
varonce1566 = var1567;
}
{
var1570 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var1567); /* == on <var_pname:String>*/
}
if (var1570){
if (unlikely(varonce1571==NULL)) {
var1572 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce1573!=NULL)) {
var1574 = varonce1573;
} else {
var1575 = "atoi(";
var1576 = core__abstract_text___CString___to_s_full(var1575, 5l, 5l);
var1574 = var1576;
varonce1573 = var1574;
}
((struct instance_core__NativeArray*)var1572)->values[0]=var1574;
if (likely(varonce1577!=NULL)) {
var1578 = varonce1577;
} else {
var1579 = ");";
var1580 = core__abstract_text___CString___to_s_full(var1579, 2l, 2l);
var1578 = var1580;
varonce1577 = var1578;
}
((struct instance_core__NativeArray*)var1572)->values[2]=var1578;
} else {
var1572 = varonce1571;
varonce1571 = NULL;
}
{
var1581 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var1582 = ((val*(*)(val* self))(var1581->class->vft[COLOR_core__abstract_text__Object__to_s]))(var1581); /* to_s on <var1581:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var1572)->values[1]=var1582;
{
var1583 = ((val*(*)(val* self))(var1572->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var1572); /* native_to_s on <var1572:NativeArray[String]>*/
}
varonce1571 = var1572;
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2598);
fatal_exit(1);
}
{
var1584 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var1583, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var1584); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce1585!=NULL)) {
var1586 = varonce1585;
} else {
var1587 = "fast_cstring";
var1588 = core__abstract_text___CString___to_s_full(var1587, 12l, 12l);
var1586 = var1588;
varonce1585 = var1586;
}
{
var1589 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var1586); /* == on <var_pname:String>*/
}
if (var1589){
if (unlikely(varonce1590==NULL)) {
var1591 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce1592!=NULL)) {
var1593 = varonce1592;
} else {
var1594 = " + ";
var1595 = core__abstract_text___CString___to_s_full(var1594, 3l, 3l);
var1593 = var1595;
varonce1592 = var1593;
}
((struct instance_core__NativeArray*)var1591)->values[1]=var1593;
} else {
var1591 = varonce1590;
varonce1590 = NULL;
}
{
var1596 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var1597 = ((val*(*)(val* self))(var1596->class->vft[COLOR_core__abstract_text__Object__to_s]))(var1596); /* to_s on <var1596:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var1591)->values[0]=var1597;
{
var1598 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 1l);
}
{
var1599 = ((val*(*)(val* self))(var1598->class->vft[COLOR_core__abstract_text__Object__to_s]))(var1598); /* to_s on <var1598:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var1591)->values[2]=var1599;
{
var1600 = ((val*(*)(val* self))(var1591->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var1591); /* native_to_s on <var1591:NativeArray[String]>*/
}
varonce1590 = var1591;
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2601);
fatal_exit(1);
}
{
var1601 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var1600, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var1601); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce1602!=NULL)) {
var1603 = varonce1602;
} else {
var1604 = "==";
var1605 = core__abstract_text___CString___to_s_full(var1604, 2l, 2l);
var1603 = var1605;
varonce1602 = var1603;
}
{
var1606 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var1603); /* == on <var_pname:String>*/
}
if (var1606){
{
var1607 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var1608 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 1l);
}
{
var1609 = ((val*(*)(val* self, val* p0, val* p1))(var_v->class->vft[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor__equal_test]))(var_v, var1607, var1608); /* equal_test on <var_v:AbstractCompilerVisitor>*/
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var1609); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce1610!=NULL)) {
var1611 = varonce1610;
} else {
var1612 = "!=";
var1613 = core__abstract_text___CString___to_s_full(var1612, 2l, 2l);
var1611 = var1613;
varonce1610 = var1611;
}
{
var1614 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var1611); /* == on <var_pname:String>*/
}
if (var1614){
{
var1615 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var1616 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 1l);
}
{
var1617 = ((val*(*)(val* self, val* p0, val* p1))(var_v->class->vft[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor__equal_test]))(var_v, var1615, var1616); /* equal_test on <var_v:AbstractCompilerVisitor>*/
}
var_res1618 = var1617;
if (unlikely(varonce1619==NULL)) {
var1620 = NEW_core__NativeArray(2l, &type_core__NativeArray__core__String);
if (likely(varonce1621!=NULL)) {
var1622 = varonce1621;
} else {
var1623 = "!";
var1624 = core__abstract_text___CString___to_s_full(var1623, 1l, 1l);
var1622 = var1624;
varonce1621 = var1622;
}
((struct instance_core__NativeArray*)var1620)->values[0]=var1622;
} else {
var1620 = varonce1619;
varonce1619 = NULL;
}
{
var1625 = ((val*(*)(val* self))(var_res1618->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_res1618); /* to_s on <var_res1618:RuntimeVariable>*/
}
((struct instance_core__NativeArray*)var1620)->values[1]=var1625;
{
var1626 = ((val*(*)(val* self))(var1620->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var1620); /* native_to_s on <var1620:NativeArray[String]>*/
}
varonce1619 = var1620;
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2608);
fatal_exit(1);
}
{
var1627 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var1626, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var1627); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce1628!=NULL)) {
var1629 = varonce1628;
} else {
var1630 = "new";
var1631 = core__abstract_text___CString___to_s_full(var1630, 3l, 3l);
var1629 = var1631;
varonce1628 = var1629;
}
{
var1632 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var1629); /* == on <var_pname:String>*/
}
if (var1632){
{
var1633 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 1l);
}
{
var1634 = nitc___nitc__RuntimeVariable___core__abstract_text__Object__to_s(var1633);
}
if (likely(varonce1635!=NULL)) {
var1636 = varonce1635;
} else {
var1637 = "CString";
var1638 = core__abstract_text___CString___to_s_full(var1637, 7l, 7l);
var1636 = var1638;
varonce1635 = var1636;
}
{
var1639 = nitc__memory_logger___AbstractCompilerVisitor___nit_alloc(var_v, var1634, var1636);
}
var_alloc = var1639;
if (unlikely(varonce1640==NULL)) {
var1641 = NEW_core__NativeArray(2l, &type_core__NativeArray__core__String);
if (likely(varonce1642!=NULL)) {
var1643 = varonce1642;
} else {
var1644 = "(char*)";
var1645 = core__abstract_text___CString___to_s_full(var1644, 7l, 7l);
var1643 = var1645;
varonce1642 = var1643;
}
((struct instance_core__NativeArray*)var1641)->values[0]=var1643;
} else {
var1641 = varonce1640;
varonce1640 = NULL;
}
((struct instance_core__NativeArray*)var1641)->values[1]=var_alloc;
{
var1646 = ((val*(*)(val* self))(var1641->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var1641); /* native_to_s on <var1641:NativeArray[String]>*/
}
varonce1640 = var1641;
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2612);
fatal_exit(1);
}
{
var1647 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var1646, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var1647); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce1648!=NULL)) {
var1649 = varonce1648;
} else {
var1650 = "fetch_4_chars";
var1651 = core__abstract_text___CString___to_s_full(var1650, 13l, 13l);
var1649 = var1651;
varonce1648 = var1649;
}
{
var1652 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var1649); /* == on <var_pname:String>*/
}
if (var1652){
if (unlikely(varonce1653==NULL)) {
var1654 = NEW_core__NativeArray(5l, &type_core__NativeArray__core__String);
if (likely(varonce1655!=NULL)) {
var1656 = varonce1655;
} else {
var1657 = "*((uint32_t*)(";
var1658 = core__abstract_text___CString___to_s_full(var1657, 14l, 14l);
var1656 = var1658;
varonce1655 = var1656;
}
((struct instance_core__NativeArray*)var1654)->values[0]=var1656;
if (likely(varonce1659!=NULL)) {
var1660 = varonce1659;
} else {
var1661 = " + ";
var1662 = core__abstract_text___CString___to_s_full(var1661, 3l, 3l);
var1660 = var1662;
varonce1659 = var1660;
}
((struct instance_core__NativeArray*)var1654)->values[2]=var1660;
if (likely(varonce1663!=NULL)) {
var1664 = varonce1663;
} else {
var1665 = "))";
var1666 = core__abstract_text___CString___to_s_full(var1665, 2l, 2l);
var1664 = var1666;
varonce1663 = var1664;
}
((struct instance_core__NativeArray*)var1654)->values[4]=var1664;
} else {
var1654 = varonce1653;
varonce1653 = NULL;
}
{
var1667 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var1668 = ((val*(*)(val* self))(var1667->class->vft[COLOR_core__abstract_text__Object__to_s]))(var1667); /* to_s on <var1667:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var1654)->values[1]=var1668;
{
var1669 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 1l);
}
{
var1670 = ((val*(*)(val* self))(var1669->class->vft[COLOR_core__abstract_text__Object__to_s]))(var1669); /* to_s on <var1669:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var1654)->values[3]=var1670;
{
var1671 = ((val*(*)(val* self))(var1654->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var1654); /* native_to_s on <var1654:NativeArray[String]>*/
}
varonce1653 = var1654;
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2615);
fatal_exit(1);
}
{
var1672 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var1671, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var1672); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce1673!=NULL)) {
var1674 = varonce1673;
} else {
var1675 = "fetch_4_hchars";
var1676 = core__abstract_text___CString___to_s_full(var1675, 14l, 14l);
var1674 = var1676;
varonce1673 = var1674;
}
{
var1677 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var1674); /* == on <var_pname:String>*/
}
if (var1677){
if (unlikely(varonce1678==NULL)) {
var1679 = NEW_core__NativeArray(5l, &type_core__NativeArray__core__String);
if (likely(varonce1680!=NULL)) {
var1681 = varonce1680;
} else {
var1682 = "(uint32_t)be32toh(*((uint32_t*)(";
var1683 = core__abstract_text___CString___to_s_full(var1682, 32l, 32l);
var1681 = var1683;
varonce1680 = var1681;
}
((struct instance_core__NativeArray*)var1679)->values[0]=var1681;
if (likely(varonce1684!=NULL)) {
var1685 = varonce1684;
} else {
var1686 = " + ";
var1687 = core__abstract_text___CString___to_s_full(var1686, 3l, 3l);
var1685 = var1687;
varonce1684 = var1685;
}
((struct instance_core__NativeArray*)var1679)->values[2]=var1685;
if (likely(varonce1688!=NULL)) {
var1689 = varonce1688;
} else {
var1690 = ")))";
var1691 = core__abstract_text___CString___to_s_full(var1690, 3l, 3l);
var1689 = var1691;
varonce1688 = var1689;
}
((struct instance_core__NativeArray*)var1679)->values[4]=var1689;
} else {
var1679 = varonce1678;
varonce1678 = NULL;
}
{
var1692 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var1693 = ((val*(*)(val* self))(var1692->class->vft[COLOR_core__abstract_text__Object__to_s]))(var1692); /* to_s on <var1692:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var1679)->values[1]=var1693;
{
var1694 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 1l);
}
{
var1695 = ((val*(*)(val* self))(var1694->class->vft[COLOR_core__abstract_text__Object__to_s]))(var1694); /* to_s on <var1694:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var1679)->values[3]=var1695;
{
var1696 = ((val*(*)(val* self))(var1679->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var1679); /* native_to_s on <var1679:NativeArray[String]>*/
}
varonce1678 = var1679;
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2618);
fatal_exit(1);
}
{
var1697 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var1696, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var1697); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
}
}
}
}
}
}
}
}
}
}
} else {
if (likely(varonce1698!=NULL)) {
var1699 = varonce1698;
} else {
var1700 = "NativeArray";
var1701 = core__abstract_text___CString___to_s_full(var1700, 11l, 11l);
var1699 = var1701;
varonce1698 = var1699;
}
{
var1702 = ((short int(*)(val* self, val* p0))(var_cname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_cname, var1699); /* == on <var_cname:String>*/
}
if (var1702){
{
var1703 = ((short int(*)(val* self, val* p0, val* p1, val* p2))(var_v->class->vft[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor__native_array_def]))(var_v, var_pname, var_ret, var_arguments); /* native_array_def on <var_v:AbstractCompilerVisitor>*/
}
var = var1703;
goto RET_LABEL;
} else {
if (likely(varonce1704!=NULL)) {
var1705 = varonce1704;
} else {
var1706 = "Int8";
var1707 = core__abstract_text___CString___to_s_full(var1706, 4l, 4l);
var1705 = var1707;
varonce1704 = var1705;
}
{
var1708 = ((short int(*)(val* self, val* p0))(var_cname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_cname, var1705); /* == on <var_cname:String>*/
}
if (var1708){
if (likely(varonce1709!=NULL)) {
var1710 = varonce1709;
} else {
var1711 = "output";
var1712 = core__abstract_text___CString___to_s_full(var1711, 6l, 6l);
var1710 = var1712;
varonce1709 = var1710;
}
{
var1713 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var1710); /* == on <var_pname:String>*/
}
if (var1713){
if (unlikely(varonce1714==NULL)) {
var1715 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce1716!=NULL)) {
var1717 = varonce1716;
} else {
var1718 = "printf(\"%\"PRIi8 \"\\n\", ";
var1719 = core__abstract_text___CString___to_s_full(var1718, 22l, 22l);
var1717 = var1719;
varonce1716 = var1717;
}
((struct instance_core__NativeArray*)var1715)->values[0]=var1717;
if (likely(varonce1720!=NULL)) {
var1721 = varonce1720;
} else {
var1722 = ");";
var1723 = core__abstract_text___CString___to_s_full(var1722, 2l, 2l);
var1721 = var1723;
varonce1720 = var1721;
}
((struct instance_core__NativeArray*)var1715)->values[2]=var1721;
} else {
var1715 = varonce1714;
varonce1714 = NULL;
}
{
var1724 = core___core__SequenceRead___Collection__first(var_arguments);
}
{
var1725 = ((val*(*)(val* self))(var1724->class->vft[COLOR_core__abstract_text__Object__to_s]))(var1724); /* to_s on <var1724:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var1715)->values[1]=var1725;
{
var1726 = ((val*(*)(val* self))(var1715->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var1715); /* native_to_s on <var1715:NativeArray[String]>*/
}
varonce1714 = var1715;
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var1726); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce1727!=NULL)) {
var1728 = varonce1727;
} else {
var1729 = "object_id";
var1730 = core__abstract_text___CString___to_s_full(var1729, 9l, 9l);
var1728 = var1730;
varonce1727 = var1728;
}
{
var1731 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var1728); /* == on <var_pname:String>*/
}
if (var1731){
if (unlikely(varonce1732==NULL)) {
var1733 = NEW_core__NativeArray(2l, &type_core__NativeArray__core__String);
if (likely(varonce1734!=NULL)) {
var1735 = varonce1734;
} else {
var1736 = "(long)";
var1737 = core__abstract_text___CString___to_s_full(var1736, 6l, 6l);
var1735 = var1737;
varonce1734 = var1735;
}
((struct instance_core__NativeArray*)var1733)->values[0]=var1735;
} else {
var1733 = varonce1732;
varonce1732 = NULL;
}
{
var1738 = core___core__SequenceRead___Collection__first(var_arguments);
}
{
var1739 = ((val*(*)(val* self))(var1738->class->vft[COLOR_core__abstract_text__Object__to_s]))(var1738); /* to_s on <var1738:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var1733)->values[1]=var1739;
{
var1740 = ((val*(*)(val* self))(var1733->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var1733); /* native_to_s on <var1733:NativeArray[String]>*/
}
varonce1732 = var1733;
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2628);
fatal_exit(1);
}
{
var1741 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var1740, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var1741); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce1742!=NULL)) {
var1743 = varonce1742;
} else {
var1744 = "+";
var1745 = core__abstract_text___CString___to_s_full(var1744, 1l, 1l);
var1743 = var1745;
varonce1742 = var1743;
}
{
var1746 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var1743); /* == on <var_pname:String>*/
}
if (var1746){
if (unlikely(varonce1747==NULL)) {
var1748 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce1749!=NULL)) {
var1750 = varonce1749;
} else {
var1751 = " + ";
var1752 = core__abstract_text___CString___to_s_full(var1751, 3l, 3l);
var1750 = var1752;
varonce1749 = var1750;
}
((struct instance_core__NativeArray*)var1748)->values[1]=var1750;
} else {
var1748 = varonce1747;
varonce1747 = NULL;
}
{
var1753 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var1754 = ((val*(*)(val* self))(var1753->class->vft[COLOR_core__abstract_text__Object__to_s]))(var1753); /* to_s on <var1753:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var1748)->values[0]=var1754;
{
var1755 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 1l);
}
{
var1756 = ((val*(*)(val* self))(var1755->class->vft[COLOR_core__abstract_text__Object__to_s]))(var1755); /* to_s on <var1755:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var1748)->values[2]=var1756;
{
var1757 = ((val*(*)(val* self))(var1748->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var1748); /* native_to_s on <var1748:NativeArray[String]>*/
}
varonce1747 = var1748;
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2631);
fatal_exit(1);
}
{
var1758 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var1757, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var1758); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce1759!=NULL)) {
var1760 = varonce1759;
} else {
var1761 = "-";
var1762 = core__abstract_text___CString___to_s_full(var1761, 1l, 1l);
var1760 = var1762;
varonce1759 = var1760;
}
{
var1763 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var1760); /* == on <var_pname:String>*/
}
if (var1763){
if (unlikely(varonce1764==NULL)) {
var1765 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce1766!=NULL)) {
var1767 = varonce1766;
} else {
var1768 = " - ";
var1769 = core__abstract_text___CString___to_s_full(var1768, 3l, 3l);
var1767 = var1769;
varonce1766 = var1767;
}
((struct instance_core__NativeArray*)var1765)->values[1]=var1767;
} else {
var1765 = varonce1764;
varonce1764 = NULL;
}
{
var1770 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var1771 = ((val*(*)(val* self))(var1770->class->vft[COLOR_core__abstract_text__Object__to_s]))(var1770); /* to_s on <var1770:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var1765)->values[0]=var1771;
{
var1772 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 1l);
}
{
var1773 = ((val*(*)(val* self))(var1772->class->vft[COLOR_core__abstract_text__Object__to_s]))(var1772); /* to_s on <var1772:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var1765)->values[2]=var1773;
{
var1774 = ((val*(*)(val* self))(var1765->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var1765); /* native_to_s on <var1765:NativeArray[String]>*/
}
varonce1764 = var1765;
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2634);
fatal_exit(1);
}
{
var1775 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var1774, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var1775); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce1776!=NULL)) {
var1777 = varonce1776;
} else {
var1778 = "unary -";
var1779 = core__abstract_text___CString___to_s_full(var1778, 7l, 7l);
var1777 = var1779;
varonce1776 = var1777;
}
{
var1780 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var1777); /* == on <var_pname:String>*/
}
if (var1780){
if (unlikely(varonce1781==NULL)) {
var1782 = NEW_core__NativeArray(2l, &type_core__NativeArray__core__String);
if (likely(varonce1783!=NULL)) {
var1784 = varonce1783;
} else {
var1785 = "-";
var1786 = core__abstract_text___CString___to_s_full(var1785, 1l, 1l);
var1784 = var1786;
varonce1783 = var1784;
}
((struct instance_core__NativeArray*)var1782)->values[0]=var1784;
} else {
var1782 = varonce1781;
varonce1781 = NULL;
}
{
var1787 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var1788 = ((val*(*)(val* self))(var1787->class->vft[COLOR_core__abstract_text__Object__to_s]))(var1787); /* to_s on <var1787:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var1782)->values[1]=var1788;
{
var1789 = ((val*(*)(val* self))(var1782->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var1782); /* native_to_s on <var1782:NativeArray[String]>*/
}
varonce1781 = var1782;
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2637);
fatal_exit(1);
}
{
var1790 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var1789, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var1790); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce1791!=NULL)) {
var1792 = varonce1791;
} else {
var1793 = "unary +";
var1794 = core__abstract_text___CString___to_s_full(var1793, 7l, 7l);
var1792 = var1794;
varonce1791 = var1792;
}
{
var1795 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var1792); /* == on <var_pname:String>*/
}
if (var1795){
{
var1796 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var1796); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce1797!=NULL)) {
var1798 = varonce1797;
} else {
var1799 = "*";
var1800 = core__abstract_text___CString___to_s_full(var1799, 1l, 1l);
var1798 = var1800;
varonce1797 = var1798;
}
{
var1801 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var1798); /* == on <var_pname:String>*/
}
if (var1801){
if (unlikely(varonce1802==NULL)) {
var1803 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce1804!=NULL)) {
var1805 = varonce1804;
} else {
var1806 = " * ";
var1807 = core__abstract_text___CString___to_s_full(var1806, 3l, 3l);
var1805 = var1807;
varonce1804 = var1805;
}
((struct instance_core__NativeArray*)var1803)->values[1]=var1805;
} else {
var1803 = varonce1802;
varonce1802 = NULL;
}
{
var1808 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var1809 = ((val*(*)(val* self))(var1808->class->vft[COLOR_core__abstract_text__Object__to_s]))(var1808); /* to_s on <var1808:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var1803)->values[0]=var1809;
{
var1810 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 1l);
}
{
var1811 = ((val*(*)(val* self))(var1810->class->vft[COLOR_core__abstract_text__Object__to_s]))(var1810); /* to_s on <var1810:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var1803)->values[2]=var1811;
{
var1812 = ((val*(*)(val* self))(var1803->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var1803); /* native_to_s on <var1803:NativeArray[String]>*/
}
varonce1802 = var1803;
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2643);
fatal_exit(1);
}
{
var1813 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var1812, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var1813); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce1814!=NULL)) {
var1815 = varonce1814;
} else {
var1816 = "/";
var1817 = core__abstract_text___CString___to_s_full(var1816, 1l, 1l);
var1815 = var1817;
varonce1814 = var1815;
}
{
var1818 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var1815); /* == on <var_pname:String>*/
}
if (var1818){
if (unlikely(varonce1819==NULL)) {
var1820 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce1821!=NULL)) {
var1822 = varonce1821;
} else {
var1823 = " / ";
var1824 = core__abstract_text___CString___to_s_full(var1823, 3l, 3l);
var1822 = var1824;
varonce1821 = var1822;
}
((struct instance_core__NativeArray*)var1820)->values[1]=var1822;
} else {
var1820 = varonce1819;
varonce1819 = NULL;
}
{
var1825 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var1826 = ((val*(*)(val* self))(var1825->class->vft[COLOR_core__abstract_text__Object__to_s]))(var1825); /* to_s on <var1825:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var1820)->values[0]=var1826;
{
var1827 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 1l);
}
{
var1828 = ((val*(*)(val* self))(var1827->class->vft[COLOR_core__abstract_text__Object__to_s]))(var1827); /* to_s on <var1827:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var1820)->values[2]=var1828;
{
var1829 = ((val*(*)(val* self))(var1820->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var1820); /* native_to_s on <var1820:NativeArray[String]>*/
}
varonce1819 = var1820;
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2646);
fatal_exit(1);
}
{
var1830 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var1829, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var1830); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce1831!=NULL)) {
var1832 = varonce1831;
} else {
var1833 = "%";
var1834 = core__abstract_text___CString___to_s_full(var1833, 1l, 1l);
var1832 = var1834;
varonce1831 = var1832;
}
{
var1835 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var1832); /* == on <var_pname:String>*/
}
if (var1835){
if (unlikely(varonce1836==NULL)) {
var1837 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce1838!=NULL)) {
var1839 = varonce1838;
} else {
var1840 = " % ";
var1841 = core__abstract_text___CString___to_s_full(var1840, 3l, 3l);
var1839 = var1841;
varonce1838 = var1839;
}
((struct instance_core__NativeArray*)var1837)->values[1]=var1839;
} else {
var1837 = varonce1836;
varonce1836 = NULL;
}
{
var1842 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var1843 = ((val*(*)(val* self))(var1842->class->vft[COLOR_core__abstract_text__Object__to_s]))(var1842); /* to_s on <var1842:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var1837)->values[0]=var1843;
{
var1844 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 1l);
}
{
var1845 = ((val*(*)(val* self))(var1844->class->vft[COLOR_core__abstract_text__Object__to_s]))(var1844); /* to_s on <var1844:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var1837)->values[2]=var1845;
{
var1846 = ((val*(*)(val* self))(var1837->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var1837); /* native_to_s on <var1837:NativeArray[String]>*/
}
varonce1836 = var1837;
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2649);
fatal_exit(1);
}
{
var1847 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var1846, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var1847); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce1848!=NULL)) {
var1849 = varonce1848;
} else {
var1850 = "<<";
var1851 = core__abstract_text___CString___to_s_full(var1850, 2l, 2l);
var1849 = var1851;
varonce1848 = var1849;
}
{
var1852 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var1849); /* == on <var_pname:String>*/
}
if (var1852){
if (unlikely(varonce1853==NULL)) {
var1854 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce1855!=NULL)) {
var1856 = varonce1855;
} else {
var1857 = " << ";
var1858 = core__abstract_text___CString___to_s_full(var1857, 4l, 4l);
var1856 = var1858;
varonce1855 = var1856;
}
((struct instance_core__NativeArray*)var1854)->values[1]=var1856;
} else {
var1854 = varonce1853;
varonce1853 = NULL;
}
{
var1859 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var1860 = ((val*(*)(val* self))(var1859->class->vft[COLOR_core__abstract_text__Object__to_s]))(var1859); /* to_s on <var1859:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var1854)->values[0]=var1860;
{
var1861 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 1l);
}
{
var1862 = ((val*(*)(val* self))(var1861->class->vft[COLOR_core__abstract_text__Object__to_s]))(var1861); /* to_s on <var1861:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var1854)->values[2]=var1862;
{
var1863 = ((val*(*)(val* self))(var1854->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var1854); /* native_to_s on <var1854:NativeArray[String]>*/
}
varonce1853 = var1854;
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2652);
fatal_exit(1);
}
{
var1864 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var1863, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var1864); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce1865!=NULL)) {
var1866 = varonce1865;
} else {
var1867 = ">>";
var1868 = core__abstract_text___CString___to_s_full(var1867, 2l, 2l);
var1866 = var1868;
varonce1865 = var1866;
}
{
var1869 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var1866); /* == on <var_pname:String>*/
}
if (var1869){
if (unlikely(varonce1870==NULL)) {
var1871 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce1872!=NULL)) {
var1873 = varonce1872;
} else {
var1874 = " >> ";
var1875 = core__abstract_text___CString___to_s_full(var1874, 4l, 4l);
var1873 = var1875;
varonce1872 = var1873;
}
((struct instance_core__NativeArray*)var1871)->values[1]=var1873;
} else {
var1871 = varonce1870;
varonce1870 = NULL;
}
{
var1876 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var1877 = ((val*(*)(val* self))(var1876->class->vft[COLOR_core__abstract_text__Object__to_s]))(var1876); /* to_s on <var1876:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var1871)->values[0]=var1877;
{
var1878 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 1l);
}
{
var1879 = ((val*(*)(val* self))(var1878->class->vft[COLOR_core__abstract_text__Object__to_s]))(var1878); /* to_s on <var1878:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var1871)->values[2]=var1879;
{
var1880 = ((val*(*)(val* self))(var1871->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var1871); /* native_to_s on <var1871:NativeArray[String]>*/
}
varonce1870 = var1871;
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2655);
fatal_exit(1);
}
{
var1881 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var1880, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var1881); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce1882!=NULL)) {
var1883 = varonce1882;
} else {
var1884 = "==";
var1885 = core__abstract_text___CString___to_s_full(var1884, 2l, 2l);
var1883 = var1885;
varonce1882 = var1883;
}
{
var1886 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var1883); /* == on <var_pname:String>*/
}
if (var1886){
{
var1887 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var1888 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 1l);
}
{
var1889 = ((val*(*)(val* self, val* p0, val* p1))(var_v->class->vft[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor__equal_test]))(var_v, var1887, var1888); /* equal_test on <var_v:AbstractCompilerVisitor>*/
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var1889); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce1890!=NULL)) {
var1891 = varonce1890;
} else {
var1892 = "!=";
var1893 = core__abstract_text___CString___to_s_full(var1892, 2l, 2l);
var1891 = var1893;
varonce1890 = var1891;
}
{
var1894 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var1891); /* == on <var_pname:String>*/
}
if (var1894){
{
var1895 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var1896 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 1l);
}
{
var1897 = ((val*(*)(val* self, val* p0, val* p1))(var_v->class->vft[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor__equal_test]))(var_v, var1895, var1896); /* equal_test on <var_v:AbstractCompilerVisitor>*/
}
var_res1898 = var1897;
if (unlikely(varonce1899==NULL)) {
var1900 = NEW_core__NativeArray(2l, &type_core__NativeArray__core__String);
if (likely(varonce1901!=NULL)) {
var1902 = varonce1901;
} else {
var1903 = "!";
var1904 = core__abstract_text___CString___to_s_full(var1903, 1l, 1l);
var1902 = var1904;
varonce1901 = var1902;
}
((struct instance_core__NativeArray*)var1900)->values[0]=var1902;
} else {
var1900 = varonce1899;
varonce1899 = NULL;
}
{
var1905 = ((val*(*)(val* self))(var_res1898->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_res1898); /* to_s on <var_res1898:RuntimeVariable>*/
}
((struct instance_core__NativeArray*)var1900)->values[1]=var1905;
{
var1906 = ((val*(*)(val* self))(var1900->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var1900); /* native_to_s on <var1900:NativeArray[String]>*/
}
varonce1899 = var1900;
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2662);
fatal_exit(1);
}
{
var1907 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var1906, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var1907); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce1908!=NULL)) {
var1909 = varonce1908;
} else {
var1910 = "<";
var1911 = core__abstract_text___CString___to_s_full(var1910, 1l, 1l);
var1909 = var1911;
varonce1908 = var1909;
}
{
var1912 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var1909); /* == on <var_pname:String>*/
}
if (var1912){
if (unlikely(varonce1913==NULL)) {
var1914 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce1915!=NULL)) {
var1916 = varonce1915;
} else {
var1917 = " < ";
var1918 = core__abstract_text___CString___to_s_full(var1917, 3l, 3l);
var1916 = var1918;
varonce1915 = var1916;
}
((struct instance_core__NativeArray*)var1914)->values[1]=var1916;
} else {
var1914 = varonce1913;
varonce1913 = NULL;
}
{
var1919 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var1920 = ((val*(*)(val* self))(var1919->class->vft[COLOR_core__abstract_text__Object__to_s]))(var1919); /* to_s on <var1919:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var1914)->values[0]=var1920;
{
var1921 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 1l);
}
{
var1922 = ((val*(*)(val* self))(var1921->class->vft[COLOR_core__abstract_text__Object__to_s]))(var1921); /* to_s on <var1921:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var1914)->values[2]=var1922;
{
var1923 = ((val*(*)(val* self))(var1914->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var1914); /* native_to_s on <var1914:NativeArray[String]>*/
}
varonce1913 = var1914;
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2665);
fatal_exit(1);
}
{
var1924 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var1923, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var1924); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce1925!=NULL)) {
var1926 = varonce1925;
} else {
var1927 = ">";
var1928 = core__abstract_text___CString___to_s_full(var1927, 1l, 1l);
var1926 = var1928;
varonce1925 = var1926;
}
{
var1929 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var1926); /* == on <var_pname:String>*/
}
if (var1929){
if (unlikely(varonce1930==NULL)) {
var1931 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce1932!=NULL)) {
var1933 = varonce1932;
} else {
var1934 = " > ";
var1935 = core__abstract_text___CString___to_s_full(var1934, 3l, 3l);
var1933 = var1935;
varonce1932 = var1933;
}
((struct instance_core__NativeArray*)var1931)->values[1]=var1933;
} else {
var1931 = varonce1930;
varonce1930 = NULL;
}
{
var1936 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var1937 = ((val*(*)(val* self))(var1936->class->vft[COLOR_core__abstract_text__Object__to_s]))(var1936); /* to_s on <var1936:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var1931)->values[0]=var1937;
{
var1938 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 1l);
}
{
var1939 = ((val*(*)(val* self))(var1938->class->vft[COLOR_core__abstract_text__Object__to_s]))(var1938); /* to_s on <var1938:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var1931)->values[2]=var1939;
{
var1940 = ((val*(*)(val* self))(var1931->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var1931); /* native_to_s on <var1931:NativeArray[String]>*/
}
varonce1930 = var1931;
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2668);
fatal_exit(1);
}
{
var1941 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var1940, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var1941); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce1942!=NULL)) {
var1943 = varonce1942;
} else {
var1944 = "<=";
var1945 = core__abstract_text___CString___to_s_full(var1944, 2l, 2l);
var1943 = var1945;
varonce1942 = var1943;
}
{
var1946 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var1943); /* == on <var_pname:String>*/
}
if (var1946){
if (unlikely(varonce1947==NULL)) {
var1948 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce1949!=NULL)) {
var1950 = varonce1949;
} else {
var1951 = " <= ";
var1952 = core__abstract_text___CString___to_s_full(var1951, 4l, 4l);
var1950 = var1952;
varonce1949 = var1950;
}
((struct instance_core__NativeArray*)var1948)->values[1]=var1950;
} else {
var1948 = varonce1947;
varonce1947 = NULL;
}
{
var1953 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var1954 = ((val*(*)(val* self))(var1953->class->vft[COLOR_core__abstract_text__Object__to_s]))(var1953); /* to_s on <var1953:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var1948)->values[0]=var1954;
{
var1955 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 1l);
}
{
var1956 = ((val*(*)(val* self))(var1955->class->vft[COLOR_core__abstract_text__Object__to_s]))(var1955); /* to_s on <var1955:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var1948)->values[2]=var1956;
{
var1957 = ((val*(*)(val* self))(var1948->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var1948); /* native_to_s on <var1948:NativeArray[String]>*/
}
varonce1947 = var1948;
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2671);
fatal_exit(1);
}
{
var1958 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var1957, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var1958); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce1959!=NULL)) {
var1960 = varonce1959;
} else {
var1961 = ">=";
var1962 = core__abstract_text___CString___to_s_full(var1961, 2l, 2l);
var1960 = var1962;
varonce1959 = var1960;
}
{
var1963 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var1960); /* == on <var_pname:String>*/
}
if (var1963){
if (unlikely(varonce1964==NULL)) {
var1965 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce1966!=NULL)) {
var1967 = varonce1966;
} else {
var1968 = " >= ";
var1969 = core__abstract_text___CString___to_s_full(var1968, 4l, 4l);
var1967 = var1969;
varonce1966 = var1967;
}
((struct instance_core__NativeArray*)var1965)->values[1]=var1967;
} else {
var1965 = varonce1964;
varonce1964 = NULL;
}
{
var1970 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var1971 = ((val*(*)(val* self))(var1970->class->vft[COLOR_core__abstract_text__Object__to_s]))(var1970); /* to_s on <var1970:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var1965)->values[0]=var1971;
{
var1972 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 1l);
}
{
var1973 = ((val*(*)(val* self))(var1972->class->vft[COLOR_core__abstract_text__Object__to_s]))(var1972); /* to_s on <var1972:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var1965)->values[2]=var1973;
{
var1974 = ((val*(*)(val* self))(var1965->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var1965); /* native_to_s on <var1965:NativeArray[String]>*/
}
varonce1964 = var1965;
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2674);
fatal_exit(1);
}
{
var1975 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var1974, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var1975); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce1976!=NULL)) {
var1977 = varonce1976;
} else {
var1978 = "to_i";
var1979 = core__abstract_text___CString___to_s_full(var1978, 4l, 4l);
var1977 = var1979;
varonce1976 = var1977;
}
{
var1980 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var1977); /* == on <var_pname:String>*/
}
if (var1980){
if (unlikely(varonce1981==NULL)) {
var1982 = NEW_core__NativeArray(2l, &type_core__NativeArray__core__String);
if (likely(varonce1983!=NULL)) {
var1984 = varonce1983;
} else {
var1985 = "(long)";
var1986 = core__abstract_text___CString___to_s_full(var1985, 6l, 6l);
var1984 = var1986;
varonce1983 = var1984;
}
((struct instance_core__NativeArray*)var1982)->values[0]=var1984;
} else {
var1982 = varonce1981;
varonce1981 = NULL;
}
{
var1987 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var1988 = ((val*(*)(val* self))(var1987->class->vft[COLOR_core__abstract_text__Object__to_s]))(var1987); /* to_s on <var1987:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var1982)->values[1]=var1988;
{
var1989 = ((val*(*)(val* self))(var1982->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var1982); /* native_to_s on <var1982:NativeArray[String]>*/
}
varonce1981 = var1982;
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2677);
fatal_exit(1);
}
{
var1990 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var1989, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var1990); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce1991!=NULL)) {
var1992 = varonce1991;
} else {
var1993 = "to_b";
var1994 = core__abstract_text___CString___to_s_full(var1993, 4l, 4l);
var1992 = var1994;
varonce1991 = var1992;
}
{
var1995 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var1992); /* == on <var_pname:String>*/
}
if (var1995){
if (unlikely(varonce1996==NULL)) {
var1997 = NEW_core__NativeArray(2l, &type_core__NativeArray__core__String);
if (likely(varonce1998!=NULL)) {
var1999 = varonce1998;
} else {
var2000 = "(unsigned char)";
var2001 = core__abstract_text___CString___to_s_full(var2000, 15l, 15l);
var1999 = var2001;
varonce1998 = var1999;
}
((struct instance_core__NativeArray*)var1997)->values[0]=var1999;
} else {
var1997 = varonce1996;
varonce1996 = NULL;
}
{
var2002 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var2003 = ((val*(*)(val* self))(var2002->class->vft[COLOR_core__abstract_text__Object__to_s]))(var2002); /* to_s on <var2002:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var1997)->values[1]=var2003;
{
var2004 = ((val*(*)(val* self))(var1997->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var1997); /* native_to_s on <var1997:NativeArray[String]>*/
}
varonce1996 = var1997;
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2680);
fatal_exit(1);
}
{
var2005 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var2004, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var2005); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce2006!=NULL)) {
var2007 = varonce2006;
} else {
var2008 = "to_i16";
var2009 = core__abstract_text___CString___to_s_full(var2008, 6l, 6l);
var2007 = var2009;
varonce2006 = var2007;
}
{
var2010 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var2007); /* == on <var_pname:String>*/
}
if (var2010){
if (unlikely(varonce2011==NULL)) {
var2012 = NEW_core__NativeArray(2l, &type_core__NativeArray__core__String);
if (likely(varonce2013!=NULL)) {
var2014 = varonce2013;
} else {
var2015 = "(int16_t)";
var2016 = core__abstract_text___CString___to_s_full(var2015, 9l, 9l);
var2014 = var2016;
varonce2013 = var2014;
}
((struct instance_core__NativeArray*)var2012)->values[0]=var2014;
} else {
var2012 = varonce2011;
varonce2011 = NULL;
}
{
var2017 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var2018 = ((val*(*)(val* self))(var2017->class->vft[COLOR_core__abstract_text__Object__to_s]))(var2017); /* to_s on <var2017:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var2012)->values[1]=var2018;
{
var2019 = ((val*(*)(val* self))(var2012->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var2012); /* native_to_s on <var2012:NativeArray[String]>*/
}
varonce2011 = var2012;
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2683);
fatal_exit(1);
}
{
var2020 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var2019, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var2020); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce2021!=NULL)) {
var2022 = varonce2021;
} else {
var2023 = "to_u16";
var2024 = core__abstract_text___CString___to_s_full(var2023, 6l, 6l);
var2022 = var2024;
varonce2021 = var2022;
}
{
var2025 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var2022); /* == on <var_pname:String>*/
}
if (var2025){
if (unlikely(varonce2026==NULL)) {
var2027 = NEW_core__NativeArray(2l, &type_core__NativeArray__core__String);
if (likely(varonce2028!=NULL)) {
var2029 = varonce2028;
} else {
var2030 = "(uint16_t)";
var2031 = core__abstract_text___CString___to_s_full(var2030, 10l, 10l);
var2029 = var2031;
varonce2028 = var2029;
}
((struct instance_core__NativeArray*)var2027)->values[0]=var2029;
} else {
var2027 = varonce2026;
varonce2026 = NULL;
}
{
var2032 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var2033 = ((val*(*)(val* self))(var2032->class->vft[COLOR_core__abstract_text__Object__to_s]))(var2032); /* to_s on <var2032:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var2027)->values[1]=var2033;
{
var2034 = ((val*(*)(val* self))(var2027->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var2027); /* native_to_s on <var2027:NativeArray[String]>*/
}
varonce2026 = var2027;
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2686);
fatal_exit(1);
}
{
var2035 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var2034, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var2035); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce2036!=NULL)) {
var2037 = varonce2036;
} else {
var2038 = "to_i32";
var2039 = core__abstract_text___CString___to_s_full(var2038, 6l, 6l);
var2037 = var2039;
varonce2036 = var2037;
}
{
var2040 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var2037); /* == on <var_pname:String>*/
}
if (var2040){
if (unlikely(varonce2041==NULL)) {
var2042 = NEW_core__NativeArray(2l, &type_core__NativeArray__core__String);
if (likely(varonce2043!=NULL)) {
var2044 = varonce2043;
} else {
var2045 = "(int32_t)";
var2046 = core__abstract_text___CString___to_s_full(var2045, 9l, 9l);
var2044 = var2046;
varonce2043 = var2044;
}
((struct instance_core__NativeArray*)var2042)->values[0]=var2044;
} else {
var2042 = varonce2041;
varonce2041 = NULL;
}
{
var2047 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var2048 = ((val*(*)(val* self))(var2047->class->vft[COLOR_core__abstract_text__Object__to_s]))(var2047); /* to_s on <var2047:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var2042)->values[1]=var2048;
{
var2049 = ((val*(*)(val* self))(var2042->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var2042); /* native_to_s on <var2042:NativeArray[String]>*/
}
varonce2041 = var2042;
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2689);
fatal_exit(1);
}
{
var2050 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var2049, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var2050); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce2051!=NULL)) {
var2052 = varonce2051;
} else {
var2053 = "to_u32";
var2054 = core__abstract_text___CString___to_s_full(var2053, 6l, 6l);
var2052 = var2054;
varonce2051 = var2052;
}
{
var2055 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var2052); /* == on <var_pname:String>*/
}
if (var2055){
if (unlikely(varonce2056==NULL)) {
var2057 = NEW_core__NativeArray(2l, &type_core__NativeArray__core__String);
if (likely(varonce2058!=NULL)) {
var2059 = varonce2058;
} else {
var2060 = "(uint32_t)";
var2061 = core__abstract_text___CString___to_s_full(var2060, 10l, 10l);
var2059 = var2061;
varonce2058 = var2059;
}
((struct instance_core__NativeArray*)var2057)->values[0]=var2059;
} else {
var2057 = varonce2056;
varonce2056 = NULL;
}
{
var2062 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var2063 = ((val*(*)(val* self))(var2062->class->vft[COLOR_core__abstract_text__Object__to_s]))(var2062); /* to_s on <var2062:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var2057)->values[1]=var2063;
{
var2064 = ((val*(*)(val* self))(var2057->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var2057); /* native_to_s on <var2057:NativeArray[String]>*/
}
varonce2056 = var2057;
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2692);
fatal_exit(1);
}
{
var2065 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var2064, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var2065); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce2066!=NULL)) {
var2067 = varonce2066;
} else {
var2068 = "to_f";
var2069 = core__abstract_text___CString___to_s_full(var2068, 4l, 4l);
var2067 = var2069;
varonce2066 = var2067;
}
{
var2070 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var2067); /* == on <var_pname:String>*/
}
if (var2070){
if (unlikely(varonce2071==NULL)) {
var2072 = NEW_core__NativeArray(2l, &type_core__NativeArray__core__String);
if (likely(varonce2073!=NULL)) {
var2074 = varonce2073;
} else {
var2075 = "(double)";
var2076 = core__abstract_text___CString___to_s_full(var2075, 8l, 8l);
var2074 = var2076;
varonce2073 = var2074;
}
((struct instance_core__NativeArray*)var2072)->values[0]=var2074;
} else {
var2072 = varonce2071;
varonce2071 = NULL;
}
{
var2077 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var2078 = ((val*(*)(val* self))(var2077->class->vft[COLOR_core__abstract_text__Object__to_s]))(var2077); /* to_s on <var2077:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var2072)->values[1]=var2078;
{
var2079 = ((val*(*)(val* self))(var2072->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var2072); /* native_to_s on <var2072:NativeArray[String]>*/
}
varonce2071 = var2072;
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2695);
fatal_exit(1);
}
{
var2080 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var2079, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var2080); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce2081!=NULL)) {
var2082 = varonce2081;
} else {
var2083 = "&";
var2084 = core__abstract_text___CString___to_s_full(var2083, 1l, 1l);
var2082 = var2084;
varonce2081 = var2082;
}
{
var2085 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var2082); /* == on <var_pname:String>*/
}
if (var2085){
if (unlikely(varonce2086==NULL)) {
var2087 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce2088!=NULL)) {
var2089 = varonce2088;
} else {
var2090 = " & ";
var2091 = core__abstract_text___CString___to_s_full(var2090, 3l, 3l);
var2089 = var2091;
varonce2088 = var2089;
}
((struct instance_core__NativeArray*)var2087)->values[1]=var2089;
} else {
var2087 = varonce2086;
varonce2086 = NULL;
}
{
var2092 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var2093 = ((val*(*)(val* self))(var2092->class->vft[COLOR_core__abstract_text__Object__to_s]))(var2092); /* to_s on <var2092:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var2087)->values[0]=var2093;
{
var2094 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 1l);
}
{
var2095 = ((val*(*)(val* self))(var2094->class->vft[COLOR_core__abstract_text__Object__to_s]))(var2094); /* to_s on <var2094:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var2087)->values[2]=var2095;
{
var2096 = ((val*(*)(val* self))(var2087->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var2087); /* native_to_s on <var2087:NativeArray[String]>*/
}
varonce2086 = var2087;
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2698);
fatal_exit(1);
}
{
var2097 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var2096, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var2097); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce2098!=NULL)) {
var2099 = varonce2098;
} else {
var2100 = "|";
var2101 = core__abstract_text___CString___to_s_full(var2100, 1l, 1l);
var2099 = var2101;
varonce2098 = var2099;
}
{
var2102 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var2099); /* == on <var_pname:String>*/
}
if (var2102){
if (unlikely(varonce2103==NULL)) {
var2104 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce2105!=NULL)) {
var2106 = varonce2105;
} else {
var2107 = " | ";
var2108 = core__abstract_text___CString___to_s_full(var2107, 3l, 3l);
var2106 = var2108;
varonce2105 = var2106;
}
((struct instance_core__NativeArray*)var2104)->values[1]=var2106;
} else {
var2104 = varonce2103;
varonce2103 = NULL;
}
{
var2109 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var2110 = ((val*(*)(val* self))(var2109->class->vft[COLOR_core__abstract_text__Object__to_s]))(var2109); /* to_s on <var2109:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var2104)->values[0]=var2110;
{
var2111 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 1l);
}
{
var2112 = ((val*(*)(val* self))(var2111->class->vft[COLOR_core__abstract_text__Object__to_s]))(var2111); /* to_s on <var2111:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var2104)->values[2]=var2112;
{
var2113 = ((val*(*)(val* self))(var2104->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var2104); /* native_to_s on <var2104:NativeArray[String]>*/
}
varonce2103 = var2104;
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2701);
fatal_exit(1);
}
{
var2114 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var2113, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var2114); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce2115!=NULL)) {
var2116 = varonce2115;
} else {
var2117 = "^";
var2118 = core__abstract_text___CString___to_s_full(var2117, 1l, 1l);
var2116 = var2118;
varonce2115 = var2116;
}
{
var2119 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var2116); /* == on <var_pname:String>*/
}
if (var2119){
if (unlikely(varonce2120==NULL)) {
var2121 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce2122!=NULL)) {
var2123 = varonce2122;
} else {
var2124 = " ^ ";
var2125 = core__abstract_text___CString___to_s_full(var2124, 3l, 3l);
var2123 = var2125;
varonce2122 = var2123;
}
((struct instance_core__NativeArray*)var2121)->values[1]=var2123;
} else {
var2121 = varonce2120;
varonce2120 = NULL;
}
{
var2126 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var2127 = ((val*(*)(val* self))(var2126->class->vft[COLOR_core__abstract_text__Object__to_s]))(var2126); /* to_s on <var2126:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var2121)->values[0]=var2127;
{
var2128 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 1l);
}
{
var2129 = ((val*(*)(val* self))(var2128->class->vft[COLOR_core__abstract_text__Object__to_s]))(var2128); /* to_s on <var2128:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var2121)->values[2]=var2129;
{
var2130 = ((val*(*)(val* self))(var2121->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var2121); /* native_to_s on <var2121:NativeArray[String]>*/
}
varonce2120 = var2121;
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2704);
fatal_exit(1);
}
{
var2131 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var2130, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var2131); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce2132!=NULL)) {
var2133 = varonce2132;
} else {
var2134 = "unary ~";
var2135 = core__abstract_text___CString___to_s_full(var2134, 7l, 7l);
var2133 = var2135;
varonce2132 = var2133;
}
{
var2136 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var2133); /* == on <var_pname:String>*/
}
if (var2136){
if (unlikely(varonce2137==NULL)) {
var2138 = NEW_core__NativeArray(2l, &type_core__NativeArray__core__String);
if (likely(varonce2139!=NULL)) {
var2140 = varonce2139;
} else {
var2141 = "~";
var2142 = core__abstract_text___CString___to_s_full(var2141, 1l, 1l);
var2140 = var2142;
varonce2139 = var2140;
}
((struct instance_core__NativeArray*)var2138)->values[0]=var2140;
} else {
var2138 = varonce2137;
varonce2137 = NULL;
}
{
var2143 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var2144 = ((val*(*)(val* self))(var2143->class->vft[COLOR_core__abstract_text__Object__to_s]))(var2143); /* to_s on <var2143:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var2138)->values[1]=var2144;
{
var2145 = ((val*(*)(val* self))(var2138->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var2138); /* native_to_s on <var2138:NativeArray[String]>*/
}
varonce2137 = var2138;
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2707);
fatal_exit(1);
}
{
var2146 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var2145, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var2146); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
} else {
if (likely(varonce2147!=NULL)) {
var2148 = varonce2147;
} else {
var2149 = "Int16";
var2150 = core__abstract_text___CString___to_s_full(var2149, 5l, 5l);
var2148 = var2150;
varonce2147 = var2148;
}
{
var2151 = ((short int(*)(val* self, val* p0))(var_cname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_cname, var2148); /* == on <var_cname:String>*/
}
if (var2151){
if (likely(varonce2152!=NULL)) {
var2153 = varonce2152;
} else {
var2154 = "output";
var2155 = core__abstract_text___CString___to_s_full(var2154, 6l, 6l);
var2153 = var2155;
varonce2152 = var2153;
}
{
var2156 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var2153); /* == on <var_pname:String>*/
}
if (var2156){
if (unlikely(varonce2157==NULL)) {
var2158 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce2159!=NULL)) {
var2160 = varonce2159;
} else {
var2161 = "printf(\"%\"PRIi16 \"\\n\", ";
var2162 = core__abstract_text___CString___to_s_full(var2161, 23l, 23l);
var2160 = var2162;
varonce2159 = var2160;
}
((struct instance_core__NativeArray*)var2158)->values[0]=var2160;
if (likely(varonce2163!=NULL)) {
var2164 = varonce2163;
} else {
var2165 = ");";
var2166 = core__abstract_text___CString___to_s_full(var2165, 2l, 2l);
var2164 = var2166;
varonce2163 = var2164;
}
((struct instance_core__NativeArray*)var2158)->values[2]=var2164;
} else {
var2158 = varonce2157;
varonce2157 = NULL;
}
{
var2167 = core___core__SequenceRead___Collection__first(var_arguments);
}
{
var2168 = ((val*(*)(val* self))(var2167->class->vft[COLOR_core__abstract_text__Object__to_s]))(var2167); /* to_s on <var2167:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var2158)->values[1]=var2168;
{
var2169 = ((val*(*)(val* self))(var2158->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var2158); /* native_to_s on <var2158:NativeArray[String]>*/
}
varonce2157 = var2158;
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var2169); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce2170!=NULL)) {
var2171 = varonce2170;
} else {
var2172 = "object_id";
var2173 = core__abstract_text___CString___to_s_full(var2172, 9l, 9l);
var2171 = var2173;
varonce2170 = var2171;
}
{
var2174 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var2171); /* == on <var_pname:String>*/
}
if (var2174){
if (unlikely(varonce2175==NULL)) {
var2176 = NEW_core__NativeArray(2l, &type_core__NativeArray__core__String);
if (likely(varonce2177!=NULL)) {
var2178 = varonce2177;
} else {
var2179 = "(long)";
var2180 = core__abstract_text___CString___to_s_full(var2179, 6l, 6l);
var2178 = var2180;
varonce2177 = var2178;
}
((struct instance_core__NativeArray*)var2176)->values[0]=var2178;
} else {
var2176 = varonce2175;
varonce2175 = NULL;
}
{
var2181 = core___core__SequenceRead___Collection__first(var_arguments);
}
{
var2182 = ((val*(*)(val* self))(var2181->class->vft[COLOR_core__abstract_text__Object__to_s]))(var2181); /* to_s on <var2181:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var2176)->values[1]=var2182;
{
var2183 = ((val*(*)(val* self))(var2176->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var2176); /* native_to_s on <var2176:NativeArray[String]>*/
}
varonce2175 = var2176;
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2715);
fatal_exit(1);
}
{
var2184 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var2183, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var2184); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce2185!=NULL)) {
var2186 = varonce2185;
} else {
var2187 = "+";
var2188 = core__abstract_text___CString___to_s_full(var2187, 1l, 1l);
var2186 = var2188;
varonce2185 = var2186;
}
{
var2189 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var2186); /* == on <var_pname:String>*/
}
if (var2189){
if (unlikely(varonce2190==NULL)) {
var2191 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce2192!=NULL)) {
var2193 = varonce2192;
} else {
var2194 = " + ";
var2195 = core__abstract_text___CString___to_s_full(var2194, 3l, 3l);
var2193 = var2195;
varonce2192 = var2193;
}
((struct instance_core__NativeArray*)var2191)->values[1]=var2193;
} else {
var2191 = varonce2190;
varonce2190 = NULL;
}
{
var2196 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var2197 = ((val*(*)(val* self))(var2196->class->vft[COLOR_core__abstract_text__Object__to_s]))(var2196); /* to_s on <var2196:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var2191)->values[0]=var2197;
{
var2198 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 1l);
}
{
var2199 = ((val*(*)(val* self))(var2198->class->vft[COLOR_core__abstract_text__Object__to_s]))(var2198); /* to_s on <var2198:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var2191)->values[2]=var2199;
{
var2200 = ((val*(*)(val* self))(var2191->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var2191); /* native_to_s on <var2191:NativeArray[String]>*/
}
varonce2190 = var2191;
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2718);
fatal_exit(1);
}
{
var2201 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var2200, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var2201); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce2202!=NULL)) {
var2203 = varonce2202;
} else {
var2204 = "-";
var2205 = core__abstract_text___CString___to_s_full(var2204, 1l, 1l);
var2203 = var2205;
varonce2202 = var2203;
}
{
var2206 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var2203); /* == on <var_pname:String>*/
}
if (var2206){
if (unlikely(varonce2207==NULL)) {
var2208 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce2209!=NULL)) {
var2210 = varonce2209;
} else {
var2211 = " - ";
var2212 = core__abstract_text___CString___to_s_full(var2211, 3l, 3l);
var2210 = var2212;
varonce2209 = var2210;
}
((struct instance_core__NativeArray*)var2208)->values[1]=var2210;
} else {
var2208 = varonce2207;
varonce2207 = NULL;
}
{
var2213 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var2214 = ((val*(*)(val* self))(var2213->class->vft[COLOR_core__abstract_text__Object__to_s]))(var2213); /* to_s on <var2213:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var2208)->values[0]=var2214;
{
var2215 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 1l);
}
{
var2216 = ((val*(*)(val* self))(var2215->class->vft[COLOR_core__abstract_text__Object__to_s]))(var2215); /* to_s on <var2215:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var2208)->values[2]=var2216;
{
var2217 = ((val*(*)(val* self))(var2208->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var2208); /* native_to_s on <var2208:NativeArray[String]>*/
}
varonce2207 = var2208;
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2721);
fatal_exit(1);
}
{
var2218 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var2217, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var2218); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce2219!=NULL)) {
var2220 = varonce2219;
} else {
var2221 = "unary -";
var2222 = core__abstract_text___CString___to_s_full(var2221, 7l, 7l);
var2220 = var2222;
varonce2219 = var2220;
}
{
var2223 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var2220); /* == on <var_pname:String>*/
}
if (var2223){
if (unlikely(varonce2224==NULL)) {
var2225 = NEW_core__NativeArray(2l, &type_core__NativeArray__core__String);
if (likely(varonce2226!=NULL)) {
var2227 = varonce2226;
} else {
var2228 = "-";
var2229 = core__abstract_text___CString___to_s_full(var2228, 1l, 1l);
var2227 = var2229;
varonce2226 = var2227;
}
((struct instance_core__NativeArray*)var2225)->values[0]=var2227;
} else {
var2225 = varonce2224;
varonce2224 = NULL;
}
{
var2230 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var2231 = ((val*(*)(val* self))(var2230->class->vft[COLOR_core__abstract_text__Object__to_s]))(var2230); /* to_s on <var2230:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var2225)->values[1]=var2231;
{
var2232 = ((val*(*)(val* self))(var2225->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var2225); /* native_to_s on <var2225:NativeArray[String]>*/
}
varonce2224 = var2225;
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2724);
fatal_exit(1);
}
{
var2233 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var2232, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var2233); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce2234!=NULL)) {
var2235 = varonce2234;
} else {
var2236 = "unary +";
var2237 = core__abstract_text___CString___to_s_full(var2236, 7l, 7l);
var2235 = var2237;
varonce2234 = var2235;
}
{
var2238 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var2235); /* == on <var_pname:String>*/
}
if (var2238){
{
var2239 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var2239); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce2240!=NULL)) {
var2241 = varonce2240;
} else {
var2242 = "*";
var2243 = core__abstract_text___CString___to_s_full(var2242, 1l, 1l);
var2241 = var2243;
varonce2240 = var2241;
}
{
var2244 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var2241); /* == on <var_pname:String>*/
}
if (var2244){
if (unlikely(varonce2245==NULL)) {
var2246 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce2247!=NULL)) {
var2248 = varonce2247;
} else {
var2249 = " * ";
var2250 = core__abstract_text___CString___to_s_full(var2249, 3l, 3l);
var2248 = var2250;
varonce2247 = var2248;
}
((struct instance_core__NativeArray*)var2246)->values[1]=var2248;
} else {
var2246 = varonce2245;
varonce2245 = NULL;
}
{
var2251 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var2252 = ((val*(*)(val* self))(var2251->class->vft[COLOR_core__abstract_text__Object__to_s]))(var2251); /* to_s on <var2251:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var2246)->values[0]=var2252;
{
var2253 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 1l);
}
{
var2254 = ((val*(*)(val* self))(var2253->class->vft[COLOR_core__abstract_text__Object__to_s]))(var2253); /* to_s on <var2253:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var2246)->values[2]=var2254;
{
var2255 = ((val*(*)(val* self))(var2246->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var2246); /* native_to_s on <var2246:NativeArray[String]>*/
}
varonce2245 = var2246;
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2730);
fatal_exit(1);
}
{
var2256 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var2255, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var2256); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce2257!=NULL)) {
var2258 = varonce2257;
} else {
var2259 = "/";
var2260 = core__abstract_text___CString___to_s_full(var2259, 1l, 1l);
var2258 = var2260;
varonce2257 = var2258;
}
{
var2261 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var2258); /* == on <var_pname:String>*/
}
if (var2261){
if (unlikely(varonce2262==NULL)) {
var2263 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce2264!=NULL)) {
var2265 = varonce2264;
} else {
var2266 = " / ";
var2267 = core__abstract_text___CString___to_s_full(var2266, 3l, 3l);
var2265 = var2267;
varonce2264 = var2265;
}
((struct instance_core__NativeArray*)var2263)->values[1]=var2265;
} else {
var2263 = varonce2262;
varonce2262 = NULL;
}
{
var2268 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var2269 = ((val*(*)(val* self))(var2268->class->vft[COLOR_core__abstract_text__Object__to_s]))(var2268); /* to_s on <var2268:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var2263)->values[0]=var2269;
{
var2270 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 1l);
}
{
var2271 = ((val*(*)(val* self))(var2270->class->vft[COLOR_core__abstract_text__Object__to_s]))(var2270); /* to_s on <var2270:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var2263)->values[2]=var2271;
{
var2272 = ((val*(*)(val* self))(var2263->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var2263); /* native_to_s on <var2263:NativeArray[String]>*/
}
varonce2262 = var2263;
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2733);
fatal_exit(1);
}
{
var2273 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var2272, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var2273); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce2274!=NULL)) {
var2275 = varonce2274;
} else {
var2276 = "%";
var2277 = core__abstract_text___CString___to_s_full(var2276, 1l, 1l);
var2275 = var2277;
varonce2274 = var2275;
}
{
var2278 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var2275); /* == on <var_pname:String>*/
}
if (var2278){
if (unlikely(varonce2279==NULL)) {
var2280 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce2281!=NULL)) {
var2282 = varonce2281;
} else {
var2283 = " % ";
var2284 = core__abstract_text___CString___to_s_full(var2283, 3l, 3l);
var2282 = var2284;
varonce2281 = var2282;
}
((struct instance_core__NativeArray*)var2280)->values[1]=var2282;
} else {
var2280 = varonce2279;
varonce2279 = NULL;
}
{
var2285 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var2286 = ((val*(*)(val* self))(var2285->class->vft[COLOR_core__abstract_text__Object__to_s]))(var2285); /* to_s on <var2285:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var2280)->values[0]=var2286;
{
var2287 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 1l);
}
{
var2288 = ((val*(*)(val* self))(var2287->class->vft[COLOR_core__abstract_text__Object__to_s]))(var2287); /* to_s on <var2287:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var2280)->values[2]=var2288;
{
var2289 = ((val*(*)(val* self))(var2280->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var2280); /* native_to_s on <var2280:NativeArray[String]>*/
}
varonce2279 = var2280;
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2736);
fatal_exit(1);
}
{
var2290 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var2289, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var2290); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce2291!=NULL)) {
var2292 = varonce2291;
} else {
var2293 = "<<";
var2294 = core__abstract_text___CString___to_s_full(var2293, 2l, 2l);
var2292 = var2294;
varonce2291 = var2292;
}
{
var2295 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var2292); /* == on <var_pname:String>*/
}
if (var2295){
if (unlikely(varonce2296==NULL)) {
var2297 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce2298!=NULL)) {
var2299 = varonce2298;
} else {
var2300 = " << ";
var2301 = core__abstract_text___CString___to_s_full(var2300, 4l, 4l);
var2299 = var2301;
varonce2298 = var2299;
}
((struct instance_core__NativeArray*)var2297)->values[1]=var2299;
} else {
var2297 = varonce2296;
varonce2296 = NULL;
}
{
var2302 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var2303 = ((val*(*)(val* self))(var2302->class->vft[COLOR_core__abstract_text__Object__to_s]))(var2302); /* to_s on <var2302:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var2297)->values[0]=var2303;
{
var2304 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 1l);
}
{
var2305 = ((val*(*)(val* self))(var2304->class->vft[COLOR_core__abstract_text__Object__to_s]))(var2304); /* to_s on <var2304:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var2297)->values[2]=var2305;
{
var2306 = ((val*(*)(val* self))(var2297->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var2297); /* native_to_s on <var2297:NativeArray[String]>*/
}
varonce2296 = var2297;
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2739);
fatal_exit(1);
}
{
var2307 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var2306, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var2307); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce2308!=NULL)) {
var2309 = varonce2308;
} else {
var2310 = ">>";
var2311 = core__abstract_text___CString___to_s_full(var2310, 2l, 2l);
var2309 = var2311;
varonce2308 = var2309;
}
{
var2312 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var2309); /* == on <var_pname:String>*/
}
if (var2312){
if (unlikely(varonce2313==NULL)) {
var2314 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce2315!=NULL)) {
var2316 = varonce2315;
} else {
var2317 = " >> ";
var2318 = core__abstract_text___CString___to_s_full(var2317, 4l, 4l);
var2316 = var2318;
varonce2315 = var2316;
}
((struct instance_core__NativeArray*)var2314)->values[1]=var2316;
} else {
var2314 = varonce2313;
varonce2313 = NULL;
}
{
var2319 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var2320 = ((val*(*)(val* self))(var2319->class->vft[COLOR_core__abstract_text__Object__to_s]))(var2319); /* to_s on <var2319:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var2314)->values[0]=var2320;
{
var2321 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 1l);
}
{
var2322 = ((val*(*)(val* self))(var2321->class->vft[COLOR_core__abstract_text__Object__to_s]))(var2321); /* to_s on <var2321:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var2314)->values[2]=var2322;
{
var2323 = ((val*(*)(val* self))(var2314->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var2314); /* native_to_s on <var2314:NativeArray[String]>*/
}
varonce2313 = var2314;
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2742);
fatal_exit(1);
}
{
var2324 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var2323, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var2324); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce2325!=NULL)) {
var2326 = varonce2325;
} else {
var2327 = "==";
var2328 = core__abstract_text___CString___to_s_full(var2327, 2l, 2l);
var2326 = var2328;
varonce2325 = var2326;
}
{
var2329 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var2326); /* == on <var_pname:String>*/
}
if (var2329){
{
var2330 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var2331 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 1l);
}
{
var2332 = ((val*(*)(val* self, val* p0, val* p1))(var_v->class->vft[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor__equal_test]))(var_v, var2330, var2331); /* equal_test on <var_v:AbstractCompilerVisitor>*/
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var2332); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce2333!=NULL)) {
var2334 = varonce2333;
} else {
var2335 = "!=";
var2336 = core__abstract_text___CString___to_s_full(var2335, 2l, 2l);
var2334 = var2336;
varonce2333 = var2334;
}
{
var2337 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var2334); /* == on <var_pname:String>*/
}
if (var2337){
{
var2338 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var2339 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 1l);
}
{
var2340 = ((val*(*)(val* self, val* p0, val* p1))(var_v->class->vft[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor__equal_test]))(var_v, var2338, var2339); /* equal_test on <var_v:AbstractCompilerVisitor>*/
}
var_res2341 = var2340;
if (unlikely(varonce2342==NULL)) {
var2343 = NEW_core__NativeArray(2l, &type_core__NativeArray__core__String);
if (likely(varonce2344!=NULL)) {
var2345 = varonce2344;
} else {
var2346 = "!";
var2347 = core__abstract_text___CString___to_s_full(var2346, 1l, 1l);
var2345 = var2347;
varonce2344 = var2345;
}
((struct instance_core__NativeArray*)var2343)->values[0]=var2345;
} else {
var2343 = varonce2342;
varonce2342 = NULL;
}
{
var2348 = ((val*(*)(val* self))(var_res2341->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_res2341); /* to_s on <var_res2341:RuntimeVariable>*/
}
((struct instance_core__NativeArray*)var2343)->values[1]=var2348;
{
var2349 = ((val*(*)(val* self))(var2343->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var2343); /* native_to_s on <var2343:NativeArray[String]>*/
}
varonce2342 = var2343;
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2749);
fatal_exit(1);
}
{
var2350 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var2349, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var2350); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce2351!=NULL)) {
var2352 = varonce2351;
} else {
var2353 = "<";
var2354 = core__abstract_text___CString___to_s_full(var2353, 1l, 1l);
var2352 = var2354;
varonce2351 = var2352;
}
{
var2355 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var2352); /* == on <var_pname:String>*/
}
if (var2355){
if (unlikely(varonce2356==NULL)) {
var2357 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce2358!=NULL)) {
var2359 = varonce2358;
} else {
var2360 = " < ";
var2361 = core__abstract_text___CString___to_s_full(var2360, 3l, 3l);
var2359 = var2361;
varonce2358 = var2359;
}
((struct instance_core__NativeArray*)var2357)->values[1]=var2359;
} else {
var2357 = varonce2356;
varonce2356 = NULL;
}
{
var2362 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var2363 = ((val*(*)(val* self))(var2362->class->vft[COLOR_core__abstract_text__Object__to_s]))(var2362); /* to_s on <var2362:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var2357)->values[0]=var2363;
{
var2364 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 1l);
}
{
var2365 = ((val*(*)(val* self))(var2364->class->vft[COLOR_core__abstract_text__Object__to_s]))(var2364); /* to_s on <var2364:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var2357)->values[2]=var2365;
{
var2366 = ((val*(*)(val* self))(var2357->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var2357); /* native_to_s on <var2357:NativeArray[String]>*/
}
varonce2356 = var2357;
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2752);
fatal_exit(1);
}
{
var2367 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var2366, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var2367); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce2368!=NULL)) {
var2369 = varonce2368;
} else {
var2370 = ">";
var2371 = core__abstract_text___CString___to_s_full(var2370, 1l, 1l);
var2369 = var2371;
varonce2368 = var2369;
}
{
var2372 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var2369); /* == on <var_pname:String>*/
}
if (var2372){
if (unlikely(varonce2373==NULL)) {
var2374 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce2375!=NULL)) {
var2376 = varonce2375;
} else {
var2377 = " > ";
var2378 = core__abstract_text___CString___to_s_full(var2377, 3l, 3l);
var2376 = var2378;
varonce2375 = var2376;
}
((struct instance_core__NativeArray*)var2374)->values[1]=var2376;
} else {
var2374 = varonce2373;
varonce2373 = NULL;
}
{
var2379 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var2380 = ((val*(*)(val* self))(var2379->class->vft[COLOR_core__abstract_text__Object__to_s]))(var2379); /* to_s on <var2379:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var2374)->values[0]=var2380;
{
var2381 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 1l);
}
{
var2382 = ((val*(*)(val* self))(var2381->class->vft[COLOR_core__abstract_text__Object__to_s]))(var2381); /* to_s on <var2381:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var2374)->values[2]=var2382;
{
var2383 = ((val*(*)(val* self))(var2374->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var2374); /* native_to_s on <var2374:NativeArray[String]>*/
}
varonce2373 = var2374;
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2755);
fatal_exit(1);
}
{
var2384 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var2383, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var2384); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce2385!=NULL)) {
var2386 = varonce2385;
} else {
var2387 = "<=";
var2388 = core__abstract_text___CString___to_s_full(var2387, 2l, 2l);
var2386 = var2388;
varonce2385 = var2386;
}
{
var2389 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var2386); /* == on <var_pname:String>*/
}
if (var2389){
if (unlikely(varonce2390==NULL)) {
var2391 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce2392!=NULL)) {
var2393 = varonce2392;
} else {
var2394 = " <= ";
var2395 = core__abstract_text___CString___to_s_full(var2394, 4l, 4l);
var2393 = var2395;
varonce2392 = var2393;
}
((struct instance_core__NativeArray*)var2391)->values[1]=var2393;
} else {
var2391 = varonce2390;
varonce2390 = NULL;
}
{
var2396 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var2397 = ((val*(*)(val* self))(var2396->class->vft[COLOR_core__abstract_text__Object__to_s]))(var2396); /* to_s on <var2396:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var2391)->values[0]=var2397;
{
var2398 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 1l);
}
{
var2399 = ((val*(*)(val* self))(var2398->class->vft[COLOR_core__abstract_text__Object__to_s]))(var2398); /* to_s on <var2398:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var2391)->values[2]=var2399;
{
var2400 = ((val*(*)(val* self))(var2391->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var2391); /* native_to_s on <var2391:NativeArray[String]>*/
}
varonce2390 = var2391;
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2758);
fatal_exit(1);
}
{
var2401 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var2400, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var2401); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce2402!=NULL)) {
var2403 = varonce2402;
} else {
var2404 = ">=";
var2405 = core__abstract_text___CString___to_s_full(var2404, 2l, 2l);
var2403 = var2405;
varonce2402 = var2403;
}
{
var2406 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var2403); /* == on <var_pname:String>*/
}
if (var2406){
if (unlikely(varonce2407==NULL)) {
var2408 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce2409!=NULL)) {
var2410 = varonce2409;
} else {
var2411 = " >= ";
var2412 = core__abstract_text___CString___to_s_full(var2411, 4l, 4l);
var2410 = var2412;
varonce2409 = var2410;
}
((struct instance_core__NativeArray*)var2408)->values[1]=var2410;
} else {
var2408 = varonce2407;
varonce2407 = NULL;
}
{
var2413 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var2414 = ((val*(*)(val* self))(var2413->class->vft[COLOR_core__abstract_text__Object__to_s]))(var2413); /* to_s on <var2413:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var2408)->values[0]=var2414;
{
var2415 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 1l);
}
{
var2416 = ((val*(*)(val* self))(var2415->class->vft[COLOR_core__abstract_text__Object__to_s]))(var2415); /* to_s on <var2415:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var2408)->values[2]=var2416;
{
var2417 = ((val*(*)(val* self))(var2408->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var2408); /* native_to_s on <var2408:NativeArray[String]>*/
}
varonce2407 = var2408;
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2761);
fatal_exit(1);
}
{
var2418 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var2417, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var2418); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce2419!=NULL)) {
var2420 = varonce2419;
} else {
var2421 = "to_i";
var2422 = core__abstract_text___CString___to_s_full(var2421, 4l, 4l);
var2420 = var2422;
varonce2419 = var2420;
}
{
var2423 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var2420); /* == on <var_pname:String>*/
}
if (var2423){
if (unlikely(varonce2424==NULL)) {
var2425 = NEW_core__NativeArray(2l, &type_core__NativeArray__core__String);
if (likely(varonce2426!=NULL)) {
var2427 = varonce2426;
} else {
var2428 = "(long)";
var2429 = core__abstract_text___CString___to_s_full(var2428, 6l, 6l);
var2427 = var2429;
varonce2426 = var2427;
}
((struct instance_core__NativeArray*)var2425)->values[0]=var2427;
} else {
var2425 = varonce2424;
varonce2424 = NULL;
}
{
var2430 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var2431 = ((val*(*)(val* self))(var2430->class->vft[COLOR_core__abstract_text__Object__to_s]))(var2430); /* to_s on <var2430:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var2425)->values[1]=var2431;
{
var2432 = ((val*(*)(val* self))(var2425->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var2425); /* native_to_s on <var2425:NativeArray[String]>*/
}
varonce2424 = var2425;
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2764);
fatal_exit(1);
}
{
var2433 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var2432, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var2433); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce2434!=NULL)) {
var2435 = varonce2434;
} else {
var2436 = "to_b";
var2437 = core__abstract_text___CString___to_s_full(var2436, 4l, 4l);
var2435 = var2437;
varonce2434 = var2435;
}
{
var2438 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var2435); /* == on <var_pname:String>*/
}
if (var2438){
if (unlikely(varonce2439==NULL)) {
var2440 = NEW_core__NativeArray(2l, &type_core__NativeArray__core__String);
if (likely(varonce2441!=NULL)) {
var2442 = varonce2441;
} else {
var2443 = "(unsigned char)";
var2444 = core__abstract_text___CString___to_s_full(var2443, 15l, 15l);
var2442 = var2444;
varonce2441 = var2442;
}
((struct instance_core__NativeArray*)var2440)->values[0]=var2442;
} else {
var2440 = varonce2439;
varonce2439 = NULL;
}
{
var2445 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var2446 = ((val*(*)(val* self))(var2445->class->vft[COLOR_core__abstract_text__Object__to_s]))(var2445); /* to_s on <var2445:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var2440)->values[1]=var2446;
{
var2447 = ((val*(*)(val* self))(var2440->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var2440); /* native_to_s on <var2440:NativeArray[String]>*/
}
varonce2439 = var2440;
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2767);
fatal_exit(1);
}
{
var2448 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var2447, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var2448); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce2449!=NULL)) {
var2450 = varonce2449;
} else {
var2451 = "to_i8";
var2452 = core__abstract_text___CString___to_s_full(var2451, 5l, 5l);
var2450 = var2452;
varonce2449 = var2450;
}
{
var2453 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var2450); /* == on <var_pname:String>*/
}
if (var2453){
if (unlikely(varonce2454==NULL)) {
var2455 = NEW_core__NativeArray(2l, &type_core__NativeArray__core__String);
if (likely(varonce2456!=NULL)) {
var2457 = varonce2456;
} else {
var2458 = "(int8_t)";
var2459 = core__abstract_text___CString___to_s_full(var2458, 8l, 8l);
var2457 = var2459;
varonce2456 = var2457;
}
((struct instance_core__NativeArray*)var2455)->values[0]=var2457;
} else {
var2455 = varonce2454;
varonce2454 = NULL;
}
{
var2460 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var2461 = ((val*(*)(val* self))(var2460->class->vft[COLOR_core__abstract_text__Object__to_s]))(var2460); /* to_s on <var2460:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var2455)->values[1]=var2461;
{
var2462 = ((val*(*)(val* self))(var2455->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var2455); /* native_to_s on <var2455:NativeArray[String]>*/
}
varonce2454 = var2455;
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2770);
fatal_exit(1);
}
{
var2463 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var2462, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var2463); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce2464!=NULL)) {
var2465 = varonce2464;
} else {
var2466 = "to_u16";
var2467 = core__abstract_text___CString___to_s_full(var2466, 6l, 6l);
var2465 = var2467;
varonce2464 = var2465;
}
{
var2468 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var2465); /* == on <var_pname:String>*/
}
if (var2468){
if (unlikely(varonce2469==NULL)) {
var2470 = NEW_core__NativeArray(2l, &type_core__NativeArray__core__String);
if (likely(varonce2471!=NULL)) {
var2472 = varonce2471;
} else {
var2473 = "(uint16_t)";
var2474 = core__abstract_text___CString___to_s_full(var2473, 10l, 10l);
var2472 = var2474;
varonce2471 = var2472;
}
((struct instance_core__NativeArray*)var2470)->values[0]=var2472;
} else {
var2470 = varonce2469;
varonce2469 = NULL;
}
{
var2475 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var2476 = ((val*(*)(val* self))(var2475->class->vft[COLOR_core__abstract_text__Object__to_s]))(var2475); /* to_s on <var2475:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var2470)->values[1]=var2476;
{
var2477 = ((val*(*)(val* self))(var2470->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var2470); /* native_to_s on <var2470:NativeArray[String]>*/
}
varonce2469 = var2470;
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2773);
fatal_exit(1);
}
{
var2478 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var2477, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var2478); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce2479!=NULL)) {
var2480 = varonce2479;
} else {
var2481 = "to_i32";
var2482 = core__abstract_text___CString___to_s_full(var2481, 6l, 6l);
var2480 = var2482;
varonce2479 = var2480;
}
{
var2483 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var2480); /* == on <var_pname:String>*/
}
if (var2483){
if (unlikely(varonce2484==NULL)) {
var2485 = NEW_core__NativeArray(2l, &type_core__NativeArray__core__String);
if (likely(varonce2486!=NULL)) {
var2487 = varonce2486;
} else {
var2488 = "(int32_t)";
var2489 = core__abstract_text___CString___to_s_full(var2488, 9l, 9l);
var2487 = var2489;
varonce2486 = var2487;
}
((struct instance_core__NativeArray*)var2485)->values[0]=var2487;
} else {
var2485 = varonce2484;
varonce2484 = NULL;
}
{
var2490 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var2491 = ((val*(*)(val* self))(var2490->class->vft[COLOR_core__abstract_text__Object__to_s]))(var2490); /* to_s on <var2490:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var2485)->values[1]=var2491;
{
var2492 = ((val*(*)(val* self))(var2485->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var2485); /* native_to_s on <var2485:NativeArray[String]>*/
}
varonce2484 = var2485;
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2776);
fatal_exit(1);
}
{
var2493 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var2492, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var2493); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce2494!=NULL)) {
var2495 = varonce2494;
} else {
var2496 = "to_u32";
var2497 = core__abstract_text___CString___to_s_full(var2496, 6l, 6l);
var2495 = var2497;
varonce2494 = var2495;
}
{
var2498 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var2495); /* == on <var_pname:String>*/
}
if (var2498){
if (unlikely(varonce2499==NULL)) {
var2500 = NEW_core__NativeArray(2l, &type_core__NativeArray__core__String);
if (likely(varonce2501!=NULL)) {
var2502 = varonce2501;
} else {
var2503 = "(uint32_t)";
var2504 = core__abstract_text___CString___to_s_full(var2503, 10l, 10l);
var2502 = var2504;
varonce2501 = var2502;
}
((struct instance_core__NativeArray*)var2500)->values[0]=var2502;
} else {
var2500 = varonce2499;
varonce2499 = NULL;
}
{
var2505 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var2506 = ((val*(*)(val* self))(var2505->class->vft[COLOR_core__abstract_text__Object__to_s]))(var2505); /* to_s on <var2505:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var2500)->values[1]=var2506;
{
var2507 = ((val*(*)(val* self))(var2500->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var2500); /* native_to_s on <var2500:NativeArray[String]>*/
}
varonce2499 = var2500;
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2779);
fatal_exit(1);
}
{
var2508 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var2507, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var2508); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce2509!=NULL)) {
var2510 = varonce2509;
} else {
var2511 = "to_f";
var2512 = core__abstract_text___CString___to_s_full(var2511, 4l, 4l);
var2510 = var2512;
varonce2509 = var2510;
}
{
var2513 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var2510); /* == on <var_pname:String>*/
}
if (var2513){
if (unlikely(varonce2514==NULL)) {
var2515 = NEW_core__NativeArray(2l, &type_core__NativeArray__core__String);
if (likely(varonce2516!=NULL)) {
var2517 = varonce2516;
} else {
var2518 = "(double)";
var2519 = core__abstract_text___CString___to_s_full(var2518, 8l, 8l);
var2517 = var2519;
varonce2516 = var2517;
}
((struct instance_core__NativeArray*)var2515)->values[0]=var2517;
} else {
var2515 = varonce2514;
varonce2514 = NULL;
}
{
var2520 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var2521 = ((val*(*)(val* self))(var2520->class->vft[COLOR_core__abstract_text__Object__to_s]))(var2520); /* to_s on <var2520:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var2515)->values[1]=var2521;
{
var2522 = ((val*(*)(val* self))(var2515->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var2515); /* native_to_s on <var2515:NativeArray[String]>*/
}
varonce2514 = var2515;
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2782);
fatal_exit(1);
}
{
var2523 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var2522, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var2523); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce2524!=NULL)) {
var2525 = varonce2524;
} else {
var2526 = "&";
var2527 = core__abstract_text___CString___to_s_full(var2526, 1l, 1l);
var2525 = var2527;
varonce2524 = var2525;
}
{
var2528 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var2525); /* == on <var_pname:String>*/
}
if (var2528){
if (unlikely(varonce2529==NULL)) {
var2530 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce2531!=NULL)) {
var2532 = varonce2531;
} else {
var2533 = " & ";
var2534 = core__abstract_text___CString___to_s_full(var2533, 3l, 3l);
var2532 = var2534;
varonce2531 = var2532;
}
((struct instance_core__NativeArray*)var2530)->values[1]=var2532;
} else {
var2530 = varonce2529;
varonce2529 = NULL;
}
{
var2535 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var2536 = ((val*(*)(val* self))(var2535->class->vft[COLOR_core__abstract_text__Object__to_s]))(var2535); /* to_s on <var2535:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var2530)->values[0]=var2536;
{
var2537 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 1l);
}
{
var2538 = ((val*(*)(val* self))(var2537->class->vft[COLOR_core__abstract_text__Object__to_s]))(var2537); /* to_s on <var2537:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var2530)->values[2]=var2538;
{
var2539 = ((val*(*)(val* self))(var2530->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var2530); /* native_to_s on <var2530:NativeArray[String]>*/
}
varonce2529 = var2530;
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2785);
fatal_exit(1);
}
{
var2540 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var2539, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var2540); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce2541!=NULL)) {
var2542 = varonce2541;
} else {
var2543 = "|";
var2544 = core__abstract_text___CString___to_s_full(var2543, 1l, 1l);
var2542 = var2544;
varonce2541 = var2542;
}
{
var2545 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var2542); /* == on <var_pname:String>*/
}
if (var2545){
if (unlikely(varonce2546==NULL)) {
var2547 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce2548!=NULL)) {
var2549 = varonce2548;
} else {
var2550 = " | ";
var2551 = core__abstract_text___CString___to_s_full(var2550, 3l, 3l);
var2549 = var2551;
varonce2548 = var2549;
}
((struct instance_core__NativeArray*)var2547)->values[1]=var2549;
} else {
var2547 = varonce2546;
varonce2546 = NULL;
}
{
var2552 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var2553 = ((val*(*)(val* self))(var2552->class->vft[COLOR_core__abstract_text__Object__to_s]))(var2552); /* to_s on <var2552:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var2547)->values[0]=var2553;
{
var2554 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 1l);
}
{
var2555 = ((val*(*)(val* self))(var2554->class->vft[COLOR_core__abstract_text__Object__to_s]))(var2554); /* to_s on <var2554:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var2547)->values[2]=var2555;
{
var2556 = ((val*(*)(val* self))(var2547->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var2547); /* native_to_s on <var2547:NativeArray[String]>*/
}
varonce2546 = var2547;
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2788);
fatal_exit(1);
}
{
var2557 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var2556, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var2557); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce2558!=NULL)) {
var2559 = varonce2558;
} else {
var2560 = "^";
var2561 = core__abstract_text___CString___to_s_full(var2560, 1l, 1l);
var2559 = var2561;
varonce2558 = var2559;
}
{
var2562 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var2559); /* == on <var_pname:String>*/
}
if (var2562){
if (unlikely(varonce2563==NULL)) {
var2564 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce2565!=NULL)) {
var2566 = varonce2565;
} else {
var2567 = " ^ ";
var2568 = core__abstract_text___CString___to_s_full(var2567, 3l, 3l);
var2566 = var2568;
varonce2565 = var2566;
}
((struct instance_core__NativeArray*)var2564)->values[1]=var2566;
} else {
var2564 = varonce2563;
varonce2563 = NULL;
}
{
var2569 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var2570 = ((val*(*)(val* self))(var2569->class->vft[COLOR_core__abstract_text__Object__to_s]))(var2569); /* to_s on <var2569:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var2564)->values[0]=var2570;
{
var2571 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 1l);
}
{
var2572 = ((val*(*)(val* self))(var2571->class->vft[COLOR_core__abstract_text__Object__to_s]))(var2571); /* to_s on <var2571:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var2564)->values[2]=var2572;
{
var2573 = ((val*(*)(val* self))(var2564->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var2564); /* native_to_s on <var2564:NativeArray[String]>*/
}
varonce2563 = var2564;
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2791);
fatal_exit(1);
}
{
var2574 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var2573, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var2574); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce2575!=NULL)) {
var2576 = varonce2575;
} else {
var2577 = "unary ~";
var2578 = core__abstract_text___CString___to_s_full(var2577, 7l, 7l);
var2576 = var2578;
varonce2575 = var2576;
}
{
var2579 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var2576); /* == on <var_pname:String>*/
}
if (var2579){
if (unlikely(varonce2580==NULL)) {
var2581 = NEW_core__NativeArray(2l, &type_core__NativeArray__core__String);
if (likely(varonce2582!=NULL)) {
var2583 = varonce2582;
} else {
var2584 = "~";
var2585 = core__abstract_text___CString___to_s_full(var2584, 1l, 1l);
var2583 = var2585;
varonce2582 = var2583;
}
((struct instance_core__NativeArray*)var2581)->values[0]=var2583;
} else {
var2581 = varonce2580;
varonce2580 = NULL;
}
{
var2586 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var2587 = ((val*(*)(val* self))(var2586->class->vft[COLOR_core__abstract_text__Object__to_s]))(var2586); /* to_s on <var2586:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var2581)->values[1]=var2587;
{
var2588 = ((val*(*)(val* self))(var2581->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var2581); /* native_to_s on <var2581:NativeArray[String]>*/
}
varonce2580 = var2581;
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2794);
fatal_exit(1);
}
{
var2589 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var2588, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var2589); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
} else {
if (likely(varonce2590!=NULL)) {
var2591 = varonce2590;
} else {
var2592 = "UInt16";
var2593 = core__abstract_text___CString___to_s_full(var2592, 6l, 6l);
var2591 = var2593;
varonce2590 = var2591;
}
{
var2594 = ((short int(*)(val* self, val* p0))(var_cname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_cname, var2591); /* == on <var_cname:String>*/
}
if (var2594){
if (likely(varonce2595!=NULL)) {
var2596 = varonce2595;
} else {
var2597 = "output";
var2598 = core__abstract_text___CString___to_s_full(var2597, 6l, 6l);
var2596 = var2598;
varonce2595 = var2596;
}
{
var2599 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var2596); /* == on <var_pname:String>*/
}
if (var2599){
if (unlikely(varonce2600==NULL)) {
var2601 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce2602!=NULL)) {
var2603 = varonce2602;
} else {
var2604 = "printf(\"%\"PRIu16 \"\\n\", ";
var2605 = core__abstract_text___CString___to_s_full(var2604, 23l, 23l);
var2603 = var2605;
varonce2602 = var2603;
}
((struct instance_core__NativeArray*)var2601)->values[0]=var2603;
if (likely(varonce2606!=NULL)) {
var2607 = varonce2606;
} else {
var2608 = ");";
var2609 = core__abstract_text___CString___to_s_full(var2608, 2l, 2l);
var2607 = var2609;
varonce2606 = var2607;
}
((struct instance_core__NativeArray*)var2601)->values[2]=var2607;
} else {
var2601 = varonce2600;
varonce2600 = NULL;
}
{
var2610 = core___core__SequenceRead___Collection__first(var_arguments);
}
{
var2611 = ((val*(*)(val* self))(var2610->class->vft[COLOR_core__abstract_text__Object__to_s]))(var2610); /* to_s on <var2610:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var2601)->values[1]=var2611;
{
var2612 = ((val*(*)(val* self))(var2601->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var2601); /* native_to_s on <var2601:NativeArray[String]>*/
}
varonce2600 = var2601;
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var2612); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce2613!=NULL)) {
var2614 = varonce2613;
} else {
var2615 = "object_id";
var2616 = core__abstract_text___CString___to_s_full(var2615, 9l, 9l);
var2614 = var2616;
varonce2613 = var2614;
}
{
var2617 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var2614); /* == on <var_pname:String>*/
}
if (var2617){
if (unlikely(varonce2618==NULL)) {
var2619 = NEW_core__NativeArray(2l, &type_core__NativeArray__core__String);
if (likely(varonce2620!=NULL)) {
var2621 = varonce2620;
} else {
var2622 = "(long)";
var2623 = core__abstract_text___CString___to_s_full(var2622, 6l, 6l);
var2621 = var2623;
varonce2620 = var2621;
}
((struct instance_core__NativeArray*)var2619)->values[0]=var2621;
} else {
var2619 = varonce2618;
varonce2618 = NULL;
}
{
var2624 = core___core__SequenceRead___Collection__first(var_arguments);
}
{
var2625 = ((val*(*)(val* self))(var2624->class->vft[COLOR_core__abstract_text__Object__to_s]))(var2624); /* to_s on <var2624:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var2619)->values[1]=var2625;
{
var2626 = ((val*(*)(val* self))(var2619->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var2619); /* native_to_s on <var2619:NativeArray[String]>*/
}
varonce2618 = var2619;
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2802);
fatal_exit(1);
}
{
var2627 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var2626, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var2627); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce2628!=NULL)) {
var2629 = varonce2628;
} else {
var2630 = "+";
var2631 = core__abstract_text___CString___to_s_full(var2630, 1l, 1l);
var2629 = var2631;
varonce2628 = var2629;
}
{
var2632 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var2629); /* == on <var_pname:String>*/
}
if (var2632){
if (unlikely(varonce2633==NULL)) {
var2634 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce2635!=NULL)) {
var2636 = varonce2635;
} else {
var2637 = " + ";
var2638 = core__abstract_text___CString___to_s_full(var2637, 3l, 3l);
var2636 = var2638;
varonce2635 = var2636;
}
((struct instance_core__NativeArray*)var2634)->values[1]=var2636;
} else {
var2634 = varonce2633;
varonce2633 = NULL;
}
{
var2639 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var2640 = ((val*(*)(val* self))(var2639->class->vft[COLOR_core__abstract_text__Object__to_s]))(var2639); /* to_s on <var2639:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var2634)->values[0]=var2640;
{
var2641 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 1l);
}
{
var2642 = ((val*(*)(val* self))(var2641->class->vft[COLOR_core__abstract_text__Object__to_s]))(var2641); /* to_s on <var2641:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var2634)->values[2]=var2642;
{
var2643 = ((val*(*)(val* self))(var2634->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var2634); /* native_to_s on <var2634:NativeArray[String]>*/
}
varonce2633 = var2634;
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2805);
fatal_exit(1);
}
{
var2644 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var2643, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var2644); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce2645!=NULL)) {
var2646 = varonce2645;
} else {
var2647 = "-";
var2648 = core__abstract_text___CString___to_s_full(var2647, 1l, 1l);
var2646 = var2648;
varonce2645 = var2646;
}
{
var2649 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var2646); /* == on <var_pname:String>*/
}
if (var2649){
if (unlikely(varonce2650==NULL)) {
var2651 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce2652!=NULL)) {
var2653 = varonce2652;
} else {
var2654 = " - ";
var2655 = core__abstract_text___CString___to_s_full(var2654, 3l, 3l);
var2653 = var2655;
varonce2652 = var2653;
}
((struct instance_core__NativeArray*)var2651)->values[1]=var2653;
} else {
var2651 = varonce2650;
varonce2650 = NULL;
}
{
var2656 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var2657 = ((val*(*)(val* self))(var2656->class->vft[COLOR_core__abstract_text__Object__to_s]))(var2656); /* to_s on <var2656:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var2651)->values[0]=var2657;
{
var2658 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 1l);
}
{
var2659 = ((val*(*)(val* self))(var2658->class->vft[COLOR_core__abstract_text__Object__to_s]))(var2658); /* to_s on <var2658:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var2651)->values[2]=var2659;
{
var2660 = ((val*(*)(val* self))(var2651->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var2651); /* native_to_s on <var2651:NativeArray[String]>*/
}
varonce2650 = var2651;
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2808);
fatal_exit(1);
}
{
var2661 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var2660, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var2661); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce2662!=NULL)) {
var2663 = varonce2662;
} else {
var2664 = "unary -";
var2665 = core__abstract_text___CString___to_s_full(var2664, 7l, 7l);
var2663 = var2665;
varonce2662 = var2663;
}
{
var2666 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var2663); /* == on <var_pname:String>*/
}
if (var2666){
if (unlikely(varonce2667==NULL)) {
var2668 = NEW_core__NativeArray(2l, &type_core__NativeArray__core__String);
if (likely(varonce2669!=NULL)) {
var2670 = varonce2669;
} else {
var2671 = "-";
var2672 = core__abstract_text___CString___to_s_full(var2671, 1l, 1l);
var2670 = var2672;
varonce2669 = var2670;
}
((struct instance_core__NativeArray*)var2668)->values[0]=var2670;
} else {
var2668 = varonce2667;
varonce2667 = NULL;
}
{
var2673 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var2674 = ((val*(*)(val* self))(var2673->class->vft[COLOR_core__abstract_text__Object__to_s]))(var2673); /* to_s on <var2673:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var2668)->values[1]=var2674;
{
var2675 = ((val*(*)(val* self))(var2668->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var2668); /* native_to_s on <var2668:NativeArray[String]>*/
}
varonce2667 = var2668;
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2811);
fatal_exit(1);
}
{
var2676 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var2675, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var2676); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce2677!=NULL)) {
var2678 = varonce2677;
} else {
var2679 = "unary +";
var2680 = core__abstract_text___CString___to_s_full(var2679, 7l, 7l);
var2678 = var2680;
varonce2677 = var2678;
}
{
var2681 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var2678); /* == on <var_pname:String>*/
}
if (var2681){
{
var2682 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var2682); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce2683!=NULL)) {
var2684 = varonce2683;
} else {
var2685 = "*";
var2686 = core__abstract_text___CString___to_s_full(var2685, 1l, 1l);
var2684 = var2686;
varonce2683 = var2684;
}
{
var2687 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var2684); /* == on <var_pname:String>*/
}
if (var2687){
if (unlikely(varonce2688==NULL)) {
var2689 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce2690!=NULL)) {
var2691 = varonce2690;
} else {
var2692 = " * ";
var2693 = core__abstract_text___CString___to_s_full(var2692, 3l, 3l);
var2691 = var2693;
varonce2690 = var2691;
}
((struct instance_core__NativeArray*)var2689)->values[1]=var2691;
} else {
var2689 = varonce2688;
varonce2688 = NULL;
}
{
var2694 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var2695 = ((val*(*)(val* self))(var2694->class->vft[COLOR_core__abstract_text__Object__to_s]))(var2694); /* to_s on <var2694:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var2689)->values[0]=var2695;
{
var2696 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 1l);
}
{
var2697 = ((val*(*)(val* self))(var2696->class->vft[COLOR_core__abstract_text__Object__to_s]))(var2696); /* to_s on <var2696:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var2689)->values[2]=var2697;
{
var2698 = ((val*(*)(val* self))(var2689->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var2689); /* native_to_s on <var2689:NativeArray[String]>*/
}
varonce2688 = var2689;
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2817);
fatal_exit(1);
}
{
var2699 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var2698, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var2699); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce2700!=NULL)) {
var2701 = varonce2700;
} else {
var2702 = "/";
var2703 = core__abstract_text___CString___to_s_full(var2702, 1l, 1l);
var2701 = var2703;
varonce2700 = var2701;
}
{
var2704 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var2701); /* == on <var_pname:String>*/
}
if (var2704){
if (unlikely(varonce2705==NULL)) {
var2706 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce2707!=NULL)) {
var2708 = varonce2707;
} else {
var2709 = " / ";
var2710 = core__abstract_text___CString___to_s_full(var2709, 3l, 3l);
var2708 = var2710;
varonce2707 = var2708;
}
((struct instance_core__NativeArray*)var2706)->values[1]=var2708;
} else {
var2706 = varonce2705;
varonce2705 = NULL;
}
{
var2711 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var2712 = ((val*(*)(val* self))(var2711->class->vft[COLOR_core__abstract_text__Object__to_s]))(var2711); /* to_s on <var2711:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var2706)->values[0]=var2712;
{
var2713 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 1l);
}
{
var2714 = ((val*(*)(val* self))(var2713->class->vft[COLOR_core__abstract_text__Object__to_s]))(var2713); /* to_s on <var2713:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var2706)->values[2]=var2714;
{
var2715 = ((val*(*)(val* self))(var2706->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var2706); /* native_to_s on <var2706:NativeArray[String]>*/
}
varonce2705 = var2706;
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2820);
fatal_exit(1);
}
{
var2716 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var2715, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var2716); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce2717!=NULL)) {
var2718 = varonce2717;
} else {
var2719 = "%";
var2720 = core__abstract_text___CString___to_s_full(var2719, 1l, 1l);
var2718 = var2720;
varonce2717 = var2718;
}
{
var2721 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var2718); /* == on <var_pname:String>*/
}
if (var2721){
if (unlikely(varonce2722==NULL)) {
var2723 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce2724!=NULL)) {
var2725 = varonce2724;
} else {
var2726 = " % ";
var2727 = core__abstract_text___CString___to_s_full(var2726, 3l, 3l);
var2725 = var2727;
varonce2724 = var2725;
}
((struct instance_core__NativeArray*)var2723)->values[1]=var2725;
} else {
var2723 = varonce2722;
varonce2722 = NULL;
}
{
var2728 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var2729 = ((val*(*)(val* self))(var2728->class->vft[COLOR_core__abstract_text__Object__to_s]))(var2728); /* to_s on <var2728:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var2723)->values[0]=var2729;
{
var2730 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 1l);
}
{
var2731 = ((val*(*)(val* self))(var2730->class->vft[COLOR_core__abstract_text__Object__to_s]))(var2730); /* to_s on <var2730:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var2723)->values[2]=var2731;
{
var2732 = ((val*(*)(val* self))(var2723->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var2723); /* native_to_s on <var2723:NativeArray[String]>*/
}
varonce2722 = var2723;
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2823);
fatal_exit(1);
}
{
var2733 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var2732, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var2733); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce2734!=NULL)) {
var2735 = varonce2734;
} else {
var2736 = "<<";
var2737 = core__abstract_text___CString___to_s_full(var2736, 2l, 2l);
var2735 = var2737;
varonce2734 = var2735;
}
{
var2738 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var2735); /* == on <var_pname:String>*/
}
if (var2738){
if (unlikely(varonce2739==NULL)) {
var2740 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce2741!=NULL)) {
var2742 = varonce2741;
} else {
var2743 = " << ";
var2744 = core__abstract_text___CString___to_s_full(var2743, 4l, 4l);
var2742 = var2744;
varonce2741 = var2742;
}
((struct instance_core__NativeArray*)var2740)->values[1]=var2742;
} else {
var2740 = varonce2739;
varonce2739 = NULL;
}
{
var2745 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var2746 = ((val*(*)(val* self))(var2745->class->vft[COLOR_core__abstract_text__Object__to_s]))(var2745); /* to_s on <var2745:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var2740)->values[0]=var2746;
{
var2747 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 1l);
}
{
var2748 = ((val*(*)(val* self))(var2747->class->vft[COLOR_core__abstract_text__Object__to_s]))(var2747); /* to_s on <var2747:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var2740)->values[2]=var2748;
{
var2749 = ((val*(*)(val* self))(var2740->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var2740); /* native_to_s on <var2740:NativeArray[String]>*/
}
varonce2739 = var2740;
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2826);
fatal_exit(1);
}
{
var2750 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var2749, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var2750); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce2751!=NULL)) {
var2752 = varonce2751;
} else {
var2753 = ">>";
var2754 = core__abstract_text___CString___to_s_full(var2753, 2l, 2l);
var2752 = var2754;
varonce2751 = var2752;
}
{
var2755 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var2752); /* == on <var_pname:String>*/
}
if (var2755){
if (unlikely(varonce2756==NULL)) {
var2757 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce2758!=NULL)) {
var2759 = varonce2758;
} else {
var2760 = " >> ";
var2761 = core__abstract_text___CString___to_s_full(var2760, 4l, 4l);
var2759 = var2761;
varonce2758 = var2759;
}
((struct instance_core__NativeArray*)var2757)->values[1]=var2759;
} else {
var2757 = varonce2756;
varonce2756 = NULL;
}
{
var2762 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var2763 = ((val*(*)(val* self))(var2762->class->vft[COLOR_core__abstract_text__Object__to_s]))(var2762); /* to_s on <var2762:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var2757)->values[0]=var2763;
{
var2764 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 1l);
}
{
var2765 = ((val*(*)(val* self))(var2764->class->vft[COLOR_core__abstract_text__Object__to_s]))(var2764); /* to_s on <var2764:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var2757)->values[2]=var2765;
{
var2766 = ((val*(*)(val* self))(var2757->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var2757); /* native_to_s on <var2757:NativeArray[String]>*/
}
varonce2756 = var2757;
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2829);
fatal_exit(1);
}
{
var2767 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var2766, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var2767); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce2768!=NULL)) {
var2769 = varonce2768;
} else {
var2770 = "==";
var2771 = core__abstract_text___CString___to_s_full(var2770, 2l, 2l);
var2769 = var2771;
varonce2768 = var2769;
}
{
var2772 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var2769); /* == on <var_pname:String>*/
}
if (var2772){
{
var2773 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var2774 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 1l);
}
{
var2775 = ((val*(*)(val* self, val* p0, val* p1))(var_v->class->vft[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor__equal_test]))(var_v, var2773, var2774); /* equal_test on <var_v:AbstractCompilerVisitor>*/
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var2775); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce2776!=NULL)) {
var2777 = varonce2776;
} else {
var2778 = "!=";
var2779 = core__abstract_text___CString___to_s_full(var2778, 2l, 2l);
var2777 = var2779;
varonce2776 = var2777;
}
{
var2780 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var2777); /* == on <var_pname:String>*/
}
if (var2780){
{
var2781 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var2782 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 1l);
}
{
var2783 = ((val*(*)(val* self, val* p0, val* p1))(var_v->class->vft[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor__equal_test]))(var_v, var2781, var2782); /* equal_test on <var_v:AbstractCompilerVisitor>*/
}
var_res2784 = var2783;
if (unlikely(varonce2785==NULL)) {
var2786 = NEW_core__NativeArray(2l, &type_core__NativeArray__core__String);
if (likely(varonce2787!=NULL)) {
var2788 = varonce2787;
} else {
var2789 = "!";
var2790 = core__abstract_text___CString___to_s_full(var2789, 1l, 1l);
var2788 = var2790;
varonce2787 = var2788;
}
((struct instance_core__NativeArray*)var2786)->values[0]=var2788;
} else {
var2786 = varonce2785;
varonce2785 = NULL;
}
{
var2791 = ((val*(*)(val* self))(var_res2784->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_res2784); /* to_s on <var_res2784:RuntimeVariable>*/
}
((struct instance_core__NativeArray*)var2786)->values[1]=var2791;
{
var2792 = ((val*(*)(val* self))(var2786->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var2786); /* native_to_s on <var2786:NativeArray[String]>*/
}
varonce2785 = var2786;
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2836);
fatal_exit(1);
}
{
var2793 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var2792, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var2793); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce2794!=NULL)) {
var2795 = varonce2794;
} else {
var2796 = "<";
var2797 = core__abstract_text___CString___to_s_full(var2796, 1l, 1l);
var2795 = var2797;
varonce2794 = var2795;
}
{
var2798 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var2795); /* == on <var_pname:String>*/
}
if (var2798){
if (unlikely(varonce2799==NULL)) {
var2800 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce2801!=NULL)) {
var2802 = varonce2801;
} else {
var2803 = " < ";
var2804 = core__abstract_text___CString___to_s_full(var2803, 3l, 3l);
var2802 = var2804;
varonce2801 = var2802;
}
((struct instance_core__NativeArray*)var2800)->values[1]=var2802;
} else {
var2800 = varonce2799;
varonce2799 = NULL;
}
{
var2805 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var2806 = ((val*(*)(val* self))(var2805->class->vft[COLOR_core__abstract_text__Object__to_s]))(var2805); /* to_s on <var2805:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var2800)->values[0]=var2806;
{
var2807 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 1l);
}
{
var2808 = ((val*(*)(val* self))(var2807->class->vft[COLOR_core__abstract_text__Object__to_s]))(var2807); /* to_s on <var2807:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var2800)->values[2]=var2808;
{
var2809 = ((val*(*)(val* self))(var2800->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var2800); /* native_to_s on <var2800:NativeArray[String]>*/
}
varonce2799 = var2800;
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2839);
fatal_exit(1);
}
{
var2810 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var2809, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var2810); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce2811!=NULL)) {
var2812 = varonce2811;
} else {
var2813 = ">";
var2814 = core__abstract_text___CString___to_s_full(var2813, 1l, 1l);
var2812 = var2814;
varonce2811 = var2812;
}
{
var2815 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var2812); /* == on <var_pname:String>*/
}
if (var2815){
if (unlikely(varonce2816==NULL)) {
var2817 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce2818!=NULL)) {
var2819 = varonce2818;
} else {
var2820 = " > ";
var2821 = core__abstract_text___CString___to_s_full(var2820, 3l, 3l);
var2819 = var2821;
varonce2818 = var2819;
}
((struct instance_core__NativeArray*)var2817)->values[1]=var2819;
} else {
var2817 = varonce2816;
varonce2816 = NULL;
}
{
var2822 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var2823 = ((val*(*)(val* self))(var2822->class->vft[COLOR_core__abstract_text__Object__to_s]))(var2822); /* to_s on <var2822:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var2817)->values[0]=var2823;
{
var2824 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 1l);
}
{
var2825 = ((val*(*)(val* self))(var2824->class->vft[COLOR_core__abstract_text__Object__to_s]))(var2824); /* to_s on <var2824:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var2817)->values[2]=var2825;
{
var2826 = ((val*(*)(val* self))(var2817->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var2817); /* native_to_s on <var2817:NativeArray[String]>*/
}
varonce2816 = var2817;
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2842);
fatal_exit(1);
}
{
var2827 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var2826, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var2827); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce2828!=NULL)) {
var2829 = varonce2828;
} else {
var2830 = "<=";
var2831 = core__abstract_text___CString___to_s_full(var2830, 2l, 2l);
var2829 = var2831;
varonce2828 = var2829;
}
{
var2832 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var2829); /* == on <var_pname:String>*/
}
if (var2832){
if (unlikely(varonce2833==NULL)) {
var2834 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce2835!=NULL)) {
var2836 = varonce2835;
} else {
var2837 = " <= ";
var2838 = core__abstract_text___CString___to_s_full(var2837, 4l, 4l);
var2836 = var2838;
varonce2835 = var2836;
}
((struct instance_core__NativeArray*)var2834)->values[1]=var2836;
} else {
var2834 = varonce2833;
varonce2833 = NULL;
}
{
var2839 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var2840 = ((val*(*)(val* self))(var2839->class->vft[COLOR_core__abstract_text__Object__to_s]))(var2839); /* to_s on <var2839:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var2834)->values[0]=var2840;
{
var2841 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 1l);
}
{
var2842 = ((val*(*)(val* self))(var2841->class->vft[COLOR_core__abstract_text__Object__to_s]))(var2841); /* to_s on <var2841:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var2834)->values[2]=var2842;
{
var2843 = ((val*(*)(val* self))(var2834->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var2834); /* native_to_s on <var2834:NativeArray[String]>*/
}
varonce2833 = var2834;
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2845);
fatal_exit(1);
}
{
var2844 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var2843, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var2844); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce2845!=NULL)) {
var2846 = varonce2845;
} else {
var2847 = ">=";
var2848 = core__abstract_text___CString___to_s_full(var2847, 2l, 2l);
var2846 = var2848;
varonce2845 = var2846;
}
{
var2849 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var2846); /* == on <var_pname:String>*/
}
if (var2849){
if (unlikely(varonce2850==NULL)) {
var2851 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce2852!=NULL)) {
var2853 = varonce2852;
} else {
var2854 = " >= ";
var2855 = core__abstract_text___CString___to_s_full(var2854, 4l, 4l);
var2853 = var2855;
varonce2852 = var2853;
}
((struct instance_core__NativeArray*)var2851)->values[1]=var2853;
} else {
var2851 = varonce2850;
varonce2850 = NULL;
}
{
var2856 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var2857 = ((val*(*)(val* self))(var2856->class->vft[COLOR_core__abstract_text__Object__to_s]))(var2856); /* to_s on <var2856:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var2851)->values[0]=var2857;
{
var2858 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 1l);
}
{
var2859 = ((val*(*)(val* self))(var2858->class->vft[COLOR_core__abstract_text__Object__to_s]))(var2858); /* to_s on <var2858:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var2851)->values[2]=var2859;
{
var2860 = ((val*(*)(val* self))(var2851->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var2851); /* native_to_s on <var2851:NativeArray[String]>*/
}
varonce2850 = var2851;
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2848);
fatal_exit(1);
}
{
var2861 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var2860, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var2861); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce2862!=NULL)) {
var2863 = varonce2862;
} else {
var2864 = "to_i";
var2865 = core__abstract_text___CString___to_s_full(var2864, 4l, 4l);
var2863 = var2865;
varonce2862 = var2863;
}
{
var2866 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var2863); /* == on <var_pname:String>*/
}
if (var2866){
if (unlikely(varonce2867==NULL)) {
var2868 = NEW_core__NativeArray(2l, &type_core__NativeArray__core__String);
if (likely(varonce2869!=NULL)) {
var2870 = varonce2869;
} else {
var2871 = "(long)";
var2872 = core__abstract_text___CString___to_s_full(var2871, 6l, 6l);
var2870 = var2872;
varonce2869 = var2870;
}
((struct instance_core__NativeArray*)var2868)->values[0]=var2870;
} else {
var2868 = varonce2867;
varonce2867 = NULL;
}
{
var2873 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var2874 = ((val*(*)(val* self))(var2873->class->vft[COLOR_core__abstract_text__Object__to_s]))(var2873); /* to_s on <var2873:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var2868)->values[1]=var2874;
{
var2875 = ((val*(*)(val* self))(var2868->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var2868); /* native_to_s on <var2868:NativeArray[String]>*/
}
varonce2867 = var2868;
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2851);
fatal_exit(1);
}
{
var2876 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var2875, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var2876); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce2877!=NULL)) {
var2878 = varonce2877;
} else {
var2879 = "to_b";
var2880 = core__abstract_text___CString___to_s_full(var2879, 4l, 4l);
var2878 = var2880;
varonce2877 = var2878;
}
{
var2881 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var2878); /* == on <var_pname:String>*/
}
if (var2881){
if (unlikely(varonce2882==NULL)) {
var2883 = NEW_core__NativeArray(2l, &type_core__NativeArray__core__String);
if (likely(varonce2884!=NULL)) {
var2885 = varonce2884;
} else {
var2886 = "(unsigned char)";
var2887 = core__abstract_text___CString___to_s_full(var2886, 15l, 15l);
var2885 = var2887;
varonce2884 = var2885;
}
((struct instance_core__NativeArray*)var2883)->values[0]=var2885;
} else {
var2883 = varonce2882;
varonce2882 = NULL;
}
{
var2888 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var2889 = ((val*(*)(val* self))(var2888->class->vft[COLOR_core__abstract_text__Object__to_s]))(var2888); /* to_s on <var2888:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var2883)->values[1]=var2889;
{
var2890 = ((val*(*)(val* self))(var2883->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var2883); /* native_to_s on <var2883:NativeArray[String]>*/
}
varonce2882 = var2883;
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2854);
fatal_exit(1);
}
{
var2891 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var2890, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var2891); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce2892!=NULL)) {
var2893 = varonce2892;
} else {
var2894 = "to_i8";
var2895 = core__abstract_text___CString___to_s_full(var2894, 5l, 5l);
var2893 = var2895;
varonce2892 = var2893;
}
{
var2896 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var2893); /* == on <var_pname:String>*/
}
if (var2896){
if (unlikely(varonce2897==NULL)) {
var2898 = NEW_core__NativeArray(2l, &type_core__NativeArray__core__String);
if (likely(varonce2899!=NULL)) {
var2900 = varonce2899;
} else {
var2901 = "(int8_t)";
var2902 = core__abstract_text___CString___to_s_full(var2901, 8l, 8l);
var2900 = var2902;
varonce2899 = var2900;
}
((struct instance_core__NativeArray*)var2898)->values[0]=var2900;
} else {
var2898 = varonce2897;
varonce2897 = NULL;
}
{
var2903 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var2904 = ((val*(*)(val* self))(var2903->class->vft[COLOR_core__abstract_text__Object__to_s]))(var2903); /* to_s on <var2903:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var2898)->values[1]=var2904;
{
var2905 = ((val*(*)(val* self))(var2898->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var2898); /* native_to_s on <var2898:NativeArray[String]>*/
}
varonce2897 = var2898;
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2857);
fatal_exit(1);
}
{
var2906 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var2905, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var2906); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce2907!=NULL)) {
var2908 = varonce2907;
} else {
var2909 = "to_i16";
var2910 = core__abstract_text___CString___to_s_full(var2909, 6l, 6l);
var2908 = var2910;
varonce2907 = var2908;
}
{
var2911 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var2908); /* == on <var_pname:String>*/
}
if (var2911){
if (unlikely(varonce2912==NULL)) {
var2913 = NEW_core__NativeArray(2l, &type_core__NativeArray__core__String);
if (likely(varonce2914!=NULL)) {
var2915 = varonce2914;
} else {
var2916 = "(int16_t)";
var2917 = core__abstract_text___CString___to_s_full(var2916, 9l, 9l);
var2915 = var2917;
varonce2914 = var2915;
}
((struct instance_core__NativeArray*)var2913)->values[0]=var2915;
} else {
var2913 = varonce2912;
varonce2912 = NULL;
}
{
var2918 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var2919 = ((val*(*)(val* self))(var2918->class->vft[COLOR_core__abstract_text__Object__to_s]))(var2918); /* to_s on <var2918:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var2913)->values[1]=var2919;
{
var2920 = ((val*(*)(val* self))(var2913->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var2913); /* native_to_s on <var2913:NativeArray[String]>*/
}
varonce2912 = var2913;
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2860);
fatal_exit(1);
}
{
var2921 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var2920, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var2921); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce2922!=NULL)) {
var2923 = varonce2922;
} else {
var2924 = "to_i32";
var2925 = core__abstract_text___CString___to_s_full(var2924, 6l, 6l);
var2923 = var2925;
varonce2922 = var2923;
}
{
var2926 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var2923); /* == on <var_pname:String>*/
}
if (var2926){
if (unlikely(varonce2927==NULL)) {
var2928 = NEW_core__NativeArray(2l, &type_core__NativeArray__core__String);
if (likely(varonce2929!=NULL)) {
var2930 = varonce2929;
} else {
var2931 = "(int32_t)";
var2932 = core__abstract_text___CString___to_s_full(var2931, 9l, 9l);
var2930 = var2932;
varonce2929 = var2930;
}
((struct instance_core__NativeArray*)var2928)->values[0]=var2930;
} else {
var2928 = varonce2927;
varonce2927 = NULL;
}
{
var2933 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var2934 = ((val*(*)(val* self))(var2933->class->vft[COLOR_core__abstract_text__Object__to_s]))(var2933); /* to_s on <var2933:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var2928)->values[1]=var2934;
{
var2935 = ((val*(*)(val* self))(var2928->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var2928); /* native_to_s on <var2928:NativeArray[String]>*/
}
varonce2927 = var2928;
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2863);
fatal_exit(1);
}
{
var2936 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var2935, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var2936); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce2937!=NULL)) {
var2938 = varonce2937;
} else {
var2939 = "to_u32";
var2940 = core__abstract_text___CString___to_s_full(var2939, 6l, 6l);
var2938 = var2940;
varonce2937 = var2938;
}
{
var2941 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var2938); /* == on <var_pname:String>*/
}
if (var2941){
if (unlikely(varonce2942==NULL)) {
var2943 = NEW_core__NativeArray(2l, &type_core__NativeArray__core__String);
if (likely(varonce2944!=NULL)) {
var2945 = varonce2944;
} else {
var2946 = "(uint32_t)";
var2947 = core__abstract_text___CString___to_s_full(var2946, 10l, 10l);
var2945 = var2947;
varonce2944 = var2945;
}
((struct instance_core__NativeArray*)var2943)->values[0]=var2945;
} else {
var2943 = varonce2942;
varonce2942 = NULL;
}
{
var2948 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var2949 = ((val*(*)(val* self))(var2948->class->vft[COLOR_core__abstract_text__Object__to_s]))(var2948); /* to_s on <var2948:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var2943)->values[1]=var2949;
{
var2950 = ((val*(*)(val* self))(var2943->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var2943); /* native_to_s on <var2943:NativeArray[String]>*/
}
varonce2942 = var2943;
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2866);
fatal_exit(1);
}
{
var2951 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var2950, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var2951); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce2952!=NULL)) {
var2953 = varonce2952;
} else {
var2954 = "to_f";
var2955 = core__abstract_text___CString___to_s_full(var2954, 4l, 4l);
var2953 = var2955;
varonce2952 = var2953;
}
{
var2956 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var2953); /* == on <var_pname:String>*/
}
if (var2956){
if (unlikely(varonce2957==NULL)) {
var2958 = NEW_core__NativeArray(2l, &type_core__NativeArray__core__String);
if (likely(varonce2959!=NULL)) {
var2960 = varonce2959;
} else {
var2961 = "(double)";
var2962 = core__abstract_text___CString___to_s_full(var2961, 8l, 8l);
var2960 = var2962;
varonce2959 = var2960;
}
((struct instance_core__NativeArray*)var2958)->values[0]=var2960;
} else {
var2958 = varonce2957;
varonce2957 = NULL;
}
{
var2963 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var2964 = ((val*(*)(val* self))(var2963->class->vft[COLOR_core__abstract_text__Object__to_s]))(var2963); /* to_s on <var2963:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var2958)->values[1]=var2964;
{
var2965 = ((val*(*)(val* self))(var2958->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var2958); /* native_to_s on <var2958:NativeArray[String]>*/
}
varonce2957 = var2958;
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2869);
fatal_exit(1);
}
{
var2966 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var2965, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var2966); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce2967!=NULL)) {
var2968 = varonce2967;
} else {
var2969 = "&";
var2970 = core__abstract_text___CString___to_s_full(var2969, 1l, 1l);
var2968 = var2970;
varonce2967 = var2968;
}
{
var2971 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var2968); /* == on <var_pname:String>*/
}
if (var2971){
if (unlikely(varonce2972==NULL)) {
var2973 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce2974!=NULL)) {
var2975 = varonce2974;
} else {
var2976 = " & ";
var2977 = core__abstract_text___CString___to_s_full(var2976, 3l, 3l);
var2975 = var2977;
varonce2974 = var2975;
}
((struct instance_core__NativeArray*)var2973)->values[1]=var2975;
} else {
var2973 = varonce2972;
varonce2972 = NULL;
}
{
var2978 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var2979 = ((val*(*)(val* self))(var2978->class->vft[COLOR_core__abstract_text__Object__to_s]))(var2978); /* to_s on <var2978:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var2973)->values[0]=var2979;
{
var2980 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 1l);
}
{
var2981 = ((val*(*)(val* self))(var2980->class->vft[COLOR_core__abstract_text__Object__to_s]))(var2980); /* to_s on <var2980:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var2973)->values[2]=var2981;
{
var2982 = ((val*(*)(val* self))(var2973->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var2973); /* native_to_s on <var2973:NativeArray[String]>*/
}
varonce2972 = var2973;
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2872);
fatal_exit(1);
}
{
var2983 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var2982, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var2983); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce2984!=NULL)) {
var2985 = varonce2984;
} else {
var2986 = "|";
var2987 = core__abstract_text___CString___to_s_full(var2986, 1l, 1l);
var2985 = var2987;
varonce2984 = var2985;
}
{
var2988 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var2985); /* == on <var_pname:String>*/
}
if (var2988){
if (unlikely(varonce2989==NULL)) {
var2990 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce2991!=NULL)) {
var2992 = varonce2991;
} else {
var2993 = " | ";
var2994 = core__abstract_text___CString___to_s_full(var2993, 3l, 3l);
var2992 = var2994;
varonce2991 = var2992;
}
((struct instance_core__NativeArray*)var2990)->values[1]=var2992;
} else {
var2990 = varonce2989;
varonce2989 = NULL;
}
{
var2995 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var2996 = ((val*(*)(val* self))(var2995->class->vft[COLOR_core__abstract_text__Object__to_s]))(var2995); /* to_s on <var2995:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var2990)->values[0]=var2996;
{
var2997 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 1l);
}
{
var2998 = ((val*(*)(val* self))(var2997->class->vft[COLOR_core__abstract_text__Object__to_s]))(var2997); /* to_s on <var2997:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var2990)->values[2]=var2998;
{
var2999 = ((val*(*)(val* self))(var2990->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var2990); /* native_to_s on <var2990:NativeArray[String]>*/
}
varonce2989 = var2990;
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2875);
fatal_exit(1);
}
{
var3000 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var2999, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var3000); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce3001!=NULL)) {
var3002 = varonce3001;
} else {
var3003 = "^";
var3004 = core__abstract_text___CString___to_s_full(var3003, 1l, 1l);
var3002 = var3004;
varonce3001 = var3002;
}
{
var3005 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var3002); /* == on <var_pname:String>*/
}
if (var3005){
if (unlikely(varonce3006==NULL)) {
var3007 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce3008!=NULL)) {
var3009 = varonce3008;
} else {
var3010 = " ^ ";
var3011 = core__abstract_text___CString___to_s_full(var3010, 3l, 3l);
var3009 = var3011;
varonce3008 = var3009;
}
((struct instance_core__NativeArray*)var3007)->values[1]=var3009;
} else {
var3007 = varonce3006;
varonce3006 = NULL;
}
{
var3012 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var3013 = ((val*(*)(val* self))(var3012->class->vft[COLOR_core__abstract_text__Object__to_s]))(var3012); /* to_s on <var3012:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var3007)->values[0]=var3013;
{
var3014 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 1l);
}
{
var3015 = ((val*(*)(val* self))(var3014->class->vft[COLOR_core__abstract_text__Object__to_s]))(var3014); /* to_s on <var3014:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var3007)->values[2]=var3015;
{
var3016 = ((val*(*)(val* self))(var3007->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var3007); /* native_to_s on <var3007:NativeArray[String]>*/
}
varonce3006 = var3007;
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2878);
fatal_exit(1);
}
{
var3017 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var3016, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var3017); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce3018!=NULL)) {
var3019 = varonce3018;
} else {
var3020 = "unary ~";
var3021 = core__abstract_text___CString___to_s_full(var3020, 7l, 7l);
var3019 = var3021;
varonce3018 = var3019;
}
{
var3022 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var3019); /* == on <var_pname:String>*/
}
if (var3022){
if (unlikely(varonce3023==NULL)) {
var3024 = NEW_core__NativeArray(2l, &type_core__NativeArray__core__String);
if (likely(varonce3025!=NULL)) {
var3026 = varonce3025;
} else {
var3027 = "~";
var3028 = core__abstract_text___CString___to_s_full(var3027, 1l, 1l);
var3026 = var3028;
varonce3025 = var3026;
}
((struct instance_core__NativeArray*)var3024)->values[0]=var3026;
} else {
var3024 = varonce3023;
varonce3023 = NULL;
}
{
var3029 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var3030 = ((val*(*)(val* self))(var3029->class->vft[COLOR_core__abstract_text__Object__to_s]))(var3029); /* to_s on <var3029:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var3024)->values[1]=var3030;
{
var3031 = ((val*(*)(val* self))(var3024->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var3024); /* native_to_s on <var3024:NativeArray[String]>*/
}
varonce3023 = var3024;
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2881);
fatal_exit(1);
}
{
var3032 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var3031, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var3032); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
} else {
if (likely(varonce3033!=NULL)) {
var3034 = varonce3033;
} else {
var3035 = "Int32";
var3036 = core__abstract_text___CString___to_s_full(var3035, 5l, 5l);
var3034 = var3036;
varonce3033 = var3034;
}
{
var3037 = ((short int(*)(val* self, val* p0))(var_cname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_cname, var3034); /* == on <var_cname:String>*/
}
if (var3037){
if (likely(varonce3038!=NULL)) {
var3039 = varonce3038;
} else {
var3040 = "output";
var3041 = core__abstract_text___CString___to_s_full(var3040, 6l, 6l);
var3039 = var3041;
varonce3038 = var3039;
}
{
var3042 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var3039); /* == on <var_pname:String>*/
}
if (var3042){
if (unlikely(varonce3043==NULL)) {
var3044 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce3045!=NULL)) {
var3046 = varonce3045;
} else {
var3047 = "printf(\"%\"PRIi32 \"\\n\", ";
var3048 = core__abstract_text___CString___to_s_full(var3047, 23l, 23l);
var3046 = var3048;
varonce3045 = var3046;
}
((struct instance_core__NativeArray*)var3044)->values[0]=var3046;
if (likely(varonce3049!=NULL)) {
var3050 = varonce3049;
} else {
var3051 = ");";
var3052 = core__abstract_text___CString___to_s_full(var3051, 2l, 2l);
var3050 = var3052;
varonce3049 = var3050;
}
((struct instance_core__NativeArray*)var3044)->values[2]=var3050;
} else {
var3044 = varonce3043;
varonce3043 = NULL;
}
{
var3053 = core___core__SequenceRead___Collection__first(var_arguments);
}
{
var3054 = ((val*(*)(val* self))(var3053->class->vft[COLOR_core__abstract_text__Object__to_s]))(var3053); /* to_s on <var3053:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var3044)->values[1]=var3054;
{
var3055 = ((val*(*)(val* self))(var3044->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var3044); /* native_to_s on <var3044:NativeArray[String]>*/
}
varonce3043 = var3044;
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var3055); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce3056!=NULL)) {
var3057 = varonce3056;
} else {
var3058 = "object_id";
var3059 = core__abstract_text___CString___to_s_full(var3058, 9l, 9l);
var3057 = var3059;
varonce3056 = var3057;
}
{
var3060 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var3057); /* == on <var_pname:String>*/
}
if (var3060){
if (unlikely(varonce3061==NULL)) {
var3062 = NEW_core__NativeArray(2l, &type_core__NativeArray__core__String);
if (likely(varonce3063!=NULL)) {
var3064 = varonce3063;
} else {
var3065 = "(long)";
var3066 = core__abstract_text___CString___to_s_full(var3065, 6l, 6l);
var3064 = var3066;
varonce3063 = var3064;
}
((struct instance_core__NativeArray*)var3062)->values[0]=var3064;
} else {
var3062 = varonce3061;
varonce3061 = NULL;
}
{
var3067 = core___core__SequenceRead___Collection__first(var_arguments);
}
{
var3068 = ((val*(*)(val* self))(var3067->class->vft[COLOR_core__abstract_text__Object__to_s]))(var3067); /* to_s on <var3067:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var3062)->values[1]=var3068;
{
var3069 = ((val*(*)(val* self))(var3062->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var3062); /* native_to_s on <var3062:NativeArray[String]>*/
}
varonce3061 = var3062;
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2889);
fatal_exit(1);
}
{
var3070 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var3069, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var3070); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce3071!=NULL)) {
var3072 = varonce3071;
} else {
var3073 = "+";
var3074 = core__abstract_text___CString___to_s_full(var3073, 1l, 1l);
var3072 = var3074;
varonce3071 = var3072;
}
{
var3075 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var3072); /* == on <var_pname:String>*/
}
if (var3075){
if (unlikely(varonce3076==NULL)) {
var3077 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce3078!=NULL)) {
var3079 = varonce3078;
} else {
var3080 = " + ";
var3081 = core__abstract_text___CString___to_s_full(var3080, 3l, 3l);
var3079 = var3081;
varonce3078 = var3079;
}
((struct instance_core__NativeArray*)var3077)->values[1]=var3079;
} else {
var3077 = varonce3076;
varonce3076 = NULL;
}
{
var3082 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var3083 = ((val*(*)(val* self))(var3082->class->vft[COLOR_core__abstract_text__Object__to_s]))(var3082); /* to_s on <var3082:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var3077)->values[0]=var3083;
{
var3084 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 1l);
}
{
var3085 = ((val*(*)(val* self))(var3084->class->vft[COLOR_core__abstract_text__Object__to_s]))(var3084); /* to_s on <var3084:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var3077)->values[2]=var3085;
{
var3086 = ((val*(*)(val* self))(var3077->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var3077); /* native_to_s on <var3077:NativeArray[String]>*/
}
varonce3076 = var3077;
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2892);
fatal_exit(1);
}
{
var3087 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var3086, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var3087); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce3088!=NULL)) {
var3089 = varonce3088;
} else {
var3090 = "-";
var3091 = core__abstract_text___CString___to_s_full(var3090, 1l, 1l);
var3089 = var3091;
varonce3088 = var3089;
}
{
var3092 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var3089); /* == on <var_pname:String>*/
}
if (var3092){
if (unlikely(varonce3093==NULL)) {
var3094 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce3095!=NULL)) {
var3096 = varonce3095;
} else {
var3097 = " - ";
var3098 = core__abstract_text___CString___to_s_full(var3097, 3l, 3l);
var3096 = var3098;
varonce3095 = var3096;
}
((struct instance_core__NativeArray*)var3094)->values[1]=var3096;
} else {
var3094 = varonce3093;
varonce3093 = NULL;
}
{
var3099 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var3100 = ((val*(*)(val* self))(var3099->class->vft[COLOR_core__abstract_text__Object__to_s]))(var3099); /* to_s on <var3099:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var3094)->values[0]=var3100;
{
var3101 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 1l);
}
{
var3102 = ((val*(*)(val* self))(var3101->class->vft[COLOR_core__abstract_text__Object__to_s]))(var3101); /* to_s on <var3101:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var3094)->values[2]=var3102;
{
var3103 = ((val*(*)(val* self))(var3094->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var3094); /* native_to_s on <var3094:NativeArray[String]>*/
}
varonce3093 = var3094;
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2895);
fatal_exit(1);
}
{
var3104 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var3103, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var3104); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce3105!=NULL)) {
var3106 = varonce3105;
} else {
var3107 = "unary -";
var3108 = core__abstract_text___CString___to_s_full(var3107, 7l, 7l);
var3106 = var3108;
varonce3105 = var3106;
}
{
var3109 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var3106); /* == on <var_pname:String>*/
}
if (var3109){
if (unlikely(varonce3110==NULL)) {
var3111 = NEW_core__NativeArray(2l, &type_core__NativeArray__core__String);
if (likely(varonce3112!=NULL)) {
var3113 = varonce3112;
} else {
var3114 = "-";
var3115 = core__abstract_text___CString___to_s_full(var3114, 1l, 1l);
var3113 = var3115;
varonce3112 = var3113;
}
((struct instance_core__NativeArray*)var3111)->values[0]=var3113;
} else {
var3111 = varonce3110;
varonce3110 = NULL;
}
{
var3116 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var3117 = ((val*(*)(val* self))(var3116->class->vft[COLOR_core__abstract_text__Object__to_s]))(var3116); /* to_s on <var3116:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var3111)->values[1]=var3117;
{
var3118 = ((val*(*)(val* self))(var3111->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var3111); /* native_to_s on <var3111:NativeArray[String]>*/
}
varonce3110 = var3111;
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2898);
fatal_exit(1);
}
{
var3119 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var3118, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var3119); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce3120!=NULL)) {
var3121 = varonce3120;
} else {
var3122 = "unary +";
var3123 = core__abstract_text___CString___to_s_full(var3122, 7l, 7l);
var3121 = var3123;
varonce3120 = var3121;
}
{
var3124 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var3121); /* == on <var_pname:String>*/
}
if (var3124){
{
var3125 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var3125); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce3126!=NULL)) {
var3127 = varonce3126;
} else {
var3128 = "*";
var3129 = core__abstract_text___CString___to_s_full(var3128, 1l, 1l);
var3127 = var3129;
varonce3126 = var3127;
}
{
var3130 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var3127); /* == on <var_pname:String>*/
}
if (var3130){
if (unlikely(varonce3131==NULL)) {
var3132 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce3133!=NULL)) {
var3134 = varonce3133;
} else {
var3135 = " * ";
var3136 = core__abstract_text___CString___to_s_full(var3135, 3l, 3l);
var3134 = var3136;
varonce3133 = var3134;
}
((struct instance_core__NativeArray*)var3132)->values[1]=var3134;
} else {
var3132 = varonce3131;
varonce3131 = NULL;
}
{
var3137 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var3138 = ((val*(*)(val* self))(var3137->class->vft[COLOR_core__abstract_text__Object__to_s]))(var3137); /* to_s on <var3137:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var3132)->values[0]=var3138;
{
var3139 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 1l);
}
{
var3140 = ((val*(*)(val* self))(var3139->class->vft[COLOR_core__abstract_text__Object__to_s]))(var3139); /* to_s on <var3139:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var3132)->values[2]=var3140;
{
var3141 = ((val*(*)(val* self))(var3132->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var3132); /* native_to_s on <var3132:NativeArray[String]>*/
}
varonce3131 = var3132;
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2904);
fatal_exit(1);
}
{
var3142 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var3141, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var3142); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce3143!=NULL)) {
var3144 = varonce3143;
} else {
var3145 = "/";
var3146 = core__abstract_text___CString___to_s_full(var3145, 1l, 1l);
var3144 = var3146;
varonce3143 = var3144;
}
{
var3147 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var3144); /* == on <var_pname:String>*/
}
if (var3147){
if (unlikely(varonce3148==NULL)) {
var3149 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce3150!=NULL)) {
var3151 = varonce3150;
} else {
var3152 = " / ";
var3153 = core__abstract_text___CString___to_s_full(var3152, 3l, 3l);
var3151 = var3153;
varonce3150 = var3151;
}
((struct instance_core__NativeArray*)var3149)->values[1]=var3151;
} else {
var3149 = varonce3148;
varonce3148 = NULL;
}
{
var3154 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var3155 = ((val*(*)(val* self))(var3154->class->vft[COLOR_core__abstract_text__Object__to_s]))(var3154); /* to_s on <var3154:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var3149)->values[0]=var3155;
{
var3156 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 1l);
}
{
var3157 = ((val*(*)(val* self))(var3156->class->vft[COLOR_core__abstract_text__Object__to_s]))(var3156); /* to_s on <var3156:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var3149)->values[2]=var3157;
{
var3158 = ((val*(*)(val* self))(var3149->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var3149); /* native_to_s on <var3149:NativeArray[String]>*/
}
varonce3148 = var3149;
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2907);
fatal_exit(1);
}
{
var3159 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var3158, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var3159); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce3160!=NULL)) {
var3161 = varonce3160;
} else {
var3162 = "%";
var3163 = core__abstract_text___CString___to_s_full(var3162, 1l, 1l);
var3161 = var3163;
varonce3160 = var3161;
}
{
var3164 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var3161); /* == on <var_pname:String>*/
}
if (var3164){
if (unlikely(varonce3165==NULL)) {
var3166 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce3167!=NULL)) {
var3168 = varonce3167;
} else {
var3169 = " % ";
var3170 = core__abstract_text___CString___to_s_full(var3169, 3l, 3l);
var3168 = var3170;
varonce3167 = var3168;
}
((struct instance_core__NativeArray*)var3166)->values[1]=var3168;
} else {
var3166 = varonce3165;
varonce3165 = NULL;
}
{
var3171 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var3172 = ((val*(*)(val* self))(var3171->class->vft[COLOR_core__abstract_text__Object__to_s]))(var3171); /* to_s on <var3171:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var3166)->values[0]=var3172;
{
var3173 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 1l);
}
{
var3174 = ((val*(*)(val* self))(var3173->class->vft[COLOR_core__abstract_text__Object__to_s]))(var3173); /* to_s on <var3173:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var3166)->values[2]=var3174;
{
var3175 = ((val*(*)(val* self))(var3166->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var3166); /* native_to_s on <var3166:NativeArray[String]>*/
}
varonce3165 = var3166;
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2910);
fatal_exit(1);
}
{
var3176 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var3175, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var3176); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce3177!=NULL)) {
var3178 = varonce3177;
} else {
var3179 = "<<";
var3180 = core__abstract_text___CString___to_s_full(var3179, 2l, 2l);
var3178 = var3180;
varonce3177 = var3178;
}
{
var3181 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var3178); /* == on <var_pname:String>*/
}
if (var3181){
if (unlikely(varonce3182==NULL)) {
var3183 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce3184!=NULL)) {
var3185 = varonce3184;
} else {
var3186 = " << ";
var3187 = core__abstract_text___CString___to_s_full(var3186, 4l, 4l);
var3185 = var3187;
varonce3184 = var3185;
}
((struct instance_core__NativeArray*)var3183)->values[1]=var3185;
} else {
var3183 = varonce3182;
varonce3182 = NULL;
}
{
var3188 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var3189 = ((val*(*)(val* self))(var3188->class->vft[COLOR_core__abstract_text__Object__to_s]))(var3188); /* to_s on <var3188:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var3183)->values[0]=var3189;
{
var3190 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 1l);
}
{
var3191 = ((val*(*)(val* self))(var3190->class->vft[COLOR_core__abstract_text__Object__to_s]))(var3190); /* to_s on <var3190:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var3183)->values[2]=var3191;
{
var3192 = ((val*(*)(val* self))(var3183->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var3183); /* native_to_s on <var3183:NativeArray[String]>*/
}
varonce3182 = var3183;
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2913);
fatal_exit(1);
}
{
var3193 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var3192, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var3193); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce3194!=NULL)) {
var3195 = varonce3194;
} else {
var3196 = ">>";
var3197 = core__abstract_text___CString___to_s_full(var3196, 2l, 2l);
var3195 = var3197;
varonce3194 = var3195;
}
{
var3198 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var3195); /* == on <var_pname:String>*/
}
if (var3198){
if (unlikely(varonce3199==NULL)) {
var3200 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce3201!=NULL)) {
var3202 = varonce3201;
} else {
var3203 = " >> ";
var3204 = core__abstract_text___CString___to_s_full(var3203, 4l, 4l);
var3202 = var3204;
varonce3201 = var3202;
}
((struct instance_core__NativeArray*)var3200)->values[1]=var3202;
} else {
var3200 = varonce3199;
varonce3199 = NULL;
}
{
var3205 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var3206 = ((val*(*)(val* self))(var3205->class->vft[COLOR_core__abstract_text__Object__to_s]))(var3205); /* to_s on <var3205:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var3200)->values[0]=var3206;
{
var3207 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 1l);
}
{
var3208 = ((val*(*)(val* self))(var3207->class->vft[COLOR_core__abstract_text__Object__to_s]))(var3207); /* to_s on <var3207:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var3200)->values[2]=var3208;
{
var3209 = ((val*(*)(val* self))(var3200->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var3200); /* native_to_s on <var3200:NativeArray[String]>*/
}
varonce3199 = var3200;
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2916);
fatal_exit(1);
}
{
var3210 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var3209, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var3210); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce3211!=NULL)) {
var3212 = varonce3211;
} else {
var3213 = "==";
var3214 = core__abstract_text___CString___to_s_full(var3213, 2l, 2l);
var3212 = var3214;
varonce3211 = var3212;
}
{
var3215 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var3212); /* == on <var_pname:String>*/
}
if (var3215){
{
var3216 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var3217 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 1l);
}
{
var3218 = ((val*(*)(val* self, val* p0, val* p1))(var_v->class->vft[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor__equal_test]))(var_v, var3216, var3217); /* equal_test on <var_v:AbstractCompilerVisitor>*/
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var3218); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce3219!=NULL)) {
var3220 = varonce3219;
} else {
var3221 = "!=";
var3222 = core__abstract_text___CString___to_s_full(var3221, 2l, 2l);
var3220 = var3222;
varonce3219 = var3220;
}
{
var3223 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var3220); /* == on <var_pname:String>*/
}
if (var3223){
{
var3224 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var3225 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 1l);
}
{
var3226 = ((val*(*)(val* self, val* p0, val* p1))(var_v->class->vft[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor__equal_test]))(var_v, var3224, var3225); /* equal_test on <var_v:AbstractCompilerVisitor>*/
}
var_res3227 = var3226;
if (unlikely(varonce3228==NULL)) {
var3229 = NEW_core__NativeArray(2l, &type_core__NativeArray__core__String);
if (likely(varonce3230!=NULL)) {
var3231 = varonce3230;
} else {
var3232 = "!";
var3233 = core__abstract_text___CString___to_s_full(var3232, 1l, 1l);
var3231 = var3233;
varonce3230 = var3231;
}
((struct instance_core__NativeArray*)var3229)->values[0]=var3231;
} else {
var3229 = varonce3228;
varonce3228 = NULL;
}
{
var3234 = ((val*(*)(val* self))(var_res3227->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_res3227); /* to_s on <var_res3227:RuntimeVariable>*/
}
((struct instance_core__NativeArray*)var3229)->values[1]=var3234;
{
var3235 = ((val*(*)(val* self))(var3229->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var3229); /* native_to_s on <var3229:NativeArray[String]>*/
}
varonce3228 = var3229;
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2923);
fatal_exit(1);
}
{
var3236 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var3235, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var3236); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce3237!=NULL)) {
var3238 = varonce3237;
} else {
var3239 = "<";
var3240 = core__abstract_text___CString___to_s_full(var3239, 1l, 1l);
var3238 = var3240;
varonce3237 = var3238;
}
{
var3241 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var3238); /* == on <var_pname:String>*/
}
if (var3241){
if (unlikely(varonce3242==NULL)) {
var3243 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce3244!=NULL)) {
var3245 = varonce3244;
} else {
var3246 = " < ";
var3247 = core__abstract_text___CString___to_s_full(var3246, 3l, 3l);
var3245 = var3247;
varonce3244 = var3245;
}
((struct instance_core__NativeArray*)var3243)->values[1]=var3245;
} else {
var3243 = varonce3242;
varonce3242 = NULL;
}
{
var3248 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var3249 = ((val*(*)(val* self))(var3248->class->vft[COLOR_core__abstract_text__Object__to_s]))(var3248); /* to_s on <var3248:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var3243)->values[0]=var3249;
{
var3250 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 1l);
}
{
var3251 = ((val*(*)(val* self))(var3250->class->vft[COLOR_core__abstract_text__Object__to_s]))(var3250); /* to_s on <var3250:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var3243)->values[2]=var3251;
{
var3252 = ((val*(*)(val* self))(var3243->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var3243); /* native_to_s on <var3243:NativeArray[String]>*/
}
varonce3242 = var3243;
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2926);
fatal_exit(1);
}
{
var3253 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var3252, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var3253); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce3254!=NULL)) {
var3255 = varonce3254;
} else {
var3256 = ">";
var3257 = core__abstract_text___CString___to_s_full(var3256, 1l, 1l);
var3255 = var3257;
varonce3254 = var3255;
}
{
var3258 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var3255); /* == on <var_pname:String>*/
}
if (var3258){
if (unlikely(varonce3259==NULL)) {
var3260 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce3261!=NULL)) {
var3262 = varonce3261;
} else {
var3263 = " > ";
var3264 = core__abstract_text___CString___to_s_full(var3263, 3l, 3l);
var3262 = var3264;
varonce3261 = var3262;
}
((struct instance_core__NativeArray*)var3260)->values[1]=var3262;
} else {
var3260 = varonce3259;
varonce3259 = NULL;
}
{
var3265 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var3266 = ((val*(*)(val* self))(var3265->class->vft[COLOR_core__abstract_text__Object__to_s]))(var3265); /* to_s on <var3265:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var3260)->values[0]=var3266;
{
var3267 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 1l);
}
{
var3268 = ((val*(*)(val* self))(var3267->class->vft[COLOR_core__abstract_text__Object__to_s]))(var3267); /* to_s on <var3267:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var3260)->values[2]=var3268;
{
var3269 = ((val*(*)(val* self))(var3260->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var3260); /* native_to_s on <var3260:NativeArray[String]>*/
}
varonce3259 = var3260;
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2929);
fatal_exit(1);
}
{
var3270 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var3269, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var3270); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce3271!=NULL)) {
var3272 = varonce3271;
} else {
var3273 = "<=";
var3274 = core__abstract_text___CString___to_s_full(var3273, 2l, 2l);
var3272 = var3274;
varonce3271 = var3272;
}
{
var3275 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var3272); /* == on <var_pname:String>*/
}
if (var3275){
if (unlikely(varonce3276==NULL)) {
var3277 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce3278!=NULL)) {
var3279 = varonce3278;
} else {
var3280 = " <= ";
var3281 = core__abstract_text___CString___to_s_full(var3280, 4l, 4l);
var3279 = var3281;
varonce3278 = var3279;
}
((struct instance_core__NativeArray*)var3277)->values[1]=var3279;
} else {
var3277 = varonce3276;
varonce3276 = NULL;
}
{
var3282 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var3283 = ((val*(*)(val* self))(var3282->class->vft[COLOR_core__abstract_text__Object__to_s]))(var3282); /* to_s on <var3282:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var3277)->values[0]=var3283;
{
var3284 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 1l);
}
{
var3285 = ((val*(*)(val* self))(var3284->class->vft[COLOR_core__abstract_text__Object__to_s]))(var3284); /* to_s on <var3284:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var3277)->values[2]=var3285;
{
var3286 = ((val*(*)(val* self))(var3277->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var3277); /* native_to_s on <var3277:NativeArray[String]>*/
}
varonce3276 = var3277;
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2932);
fatal_exit(1);
}
{
var3287 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var3286, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var3287); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce3288!=NULL)) {
var3289 = varonce3288;
} else {
var3290 = ">=";
var3291 = core__abstract_text___CString___to_s_full(var3290, 2l, 2l);
var3289 = var3291;
varonce3288 = var3289;
}
{
var3292 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var3289); /* == on <var_pname:String>*/
}
if (var3292){
if (unlikely(varonce3293==NULL)) {
var3294 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce3295!=NULL)) {
var3296 = varonce3295;
} else {
var3297 = " >= ";
var3298 = core__abstract_text___CString___to_s_full(var3297, 4l, 4l);
var3296 = var3298;
varonce3295 = var3296;
}
((struct instance_core__NativeArray*)var3294)->values[1]=var3296;
} else {
var3294 = varonce3293;
varonce3293 = NULL;
}
{
var3299 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var3300 = ((val*(*)(val* self))(var3299->class->vft[COLOR_core__abstract_text__Object__to_s]))(var3299); /* to_s on <var3299:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var3294)->values[0]=var3300;
{
var3301 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 1l);
}
{
var3302 = ((val*(*)(val* self))(var3301->class->vft[COLOR_core__abstract_text__Object__to_s]))(var3301); /* to_s on <var3301:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var3294)->values[2]=var3302;
{
var3303 = ((val*(*)(val* self))(var3294->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var3294); /* native_to_s on <var3294:NativeArray[String]>*/
}
varonce3293 = var3294;
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2935);
fatal_exit(1);
}
{
var3304 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var3303, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var3304); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce3305!=NULL)) {
var3306 = varonce3305;
} else {
var3307 = "to_i";
var3308 = core__abstract_text___CString___to_s_full(var3307, 4l, 4l);
var3306 = var3308;
varonce3305 = var3306;
}
{
var3309 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var3306); /* == on <var_pname:String>*/
}
if (var3309){
if (unlikely(varonce3310==NULL)) {
var3311 = NEW_core__NativeArray(2l, &type_core__NativeArray__core__String);
if (likely(varonce3312!=NULL)) {
var3313 = varonce3312;
} else {
var3314 = "(long)";
var3315 = core__abstract_text___CString___to_s_full(var3314, 6l, 6l);
var3313 = var3315;
varonce3312 = var3313;
}
((struct instance_core__NativeArray*)var3311)->values[0]=var3313;
} else {
var3311 = varonce3310;
varonce3310 = NULL;
}
{
var3316 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var3317 = ((val*(*)(val* self))(var3316->class->vft[COLOR_core__abstract_text__Object__to_s]))(var3316); /* to_s on <var3316:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var3311)->values[1]=var3317;
{
var3318 = ((val*(*)(val* self))(var3311->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var3311); /* native_to_s on <var3311:NativeArray[String]>*/
}
varonce3310 = var3311;
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2938);
fatal_exit(1);
}
{
var3319 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var3318, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var3319); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce3320!=NULL)) {
var3321 = varonce3320;
} else {
var3322 = "to_b";
var3323 = core__abstract_text___CString___to_s_full(var3322, 4l, 4l);
var3321 = var3323;
varonce3320 = var3321;
}
{
var3324 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var3321); /* == on <var_pname:String>*/
}
if (var3324){
if (unlikely(varonce3325==NULL)) {
var3326 = NEW_core__NativeArray(2l, &type_core__NativeArray__core__String);
if (likely(varonce3327!=NULL)) {
var3328 = varonce3327;
} else {
var3329 = "(unsigned char)";
var3330 = core__abstract_text___CString___to_s_full(var3329, 15l, 15l);
var3328 = var3330;
varonce3327 = var3328;
}
((struct instance_core__NativeArray*)var3326)->values[0]=var3328;
} else {
var3326 = varonce3325;
varonce3325 = NULL;
}
{
var3331 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var3332 = ((val*(*)(val* self))(var3331->class->vft[COLOR_core__abstract_text__Object__to_s]))(var3331); /* to_s on <var3331:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var3326)->values[1]=var3332;
{
var3333 = ((val*(*)(val* self))(var3326->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var3326); /* native_to_s on <var3326:NativeArray[String]>*/
}
varonce3325 = var3326;
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2941);
fatal_exit(1);
}
{
var3334 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var3333, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var3334); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce3335!=NULL)) {
var3336 = varonce3335;
} else {
var3337 = "to_i8";
var3338 = core__abstract_text___CString___to_s_full(var3337, 5l, 5l);
var3336 = var3338;
varonce3335 = var3336;
}
{
var3339 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var3336); /* == on <var_pname:String>*/
}
if (var3339){
if (unlikely(varonce3340==NULL)) {
var3341 = NEW_core__NativeArray(2l, &type_core__NativeArray__core__String);
if (likely(varonce3342!=NULL)) {
var3343 = varonce3342;
} else {
var3344 = "(int8_t)";
var3345 = core__abstract_text___CString___to_s_full(var3344, 8l, 8l);
var3343 = var3345;
varonce3342 = var3343;
}
((struct instance_core__NativeArray*)var3341)->values[0]=var3343;
} else {
var3341 = varonce3340;
varonce3340 = NULL;
}
{
var3346 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var3347 = ((val*(*)(val* self))(var3346->class->vft[COLOR_core__abstract_text__Object__to_s]))(var3346); /* to_s on <var3346:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var3341)->values[1]=var3347;
{
var3348 = ((val*(*)(val* self))(var3341->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var3341); /* native_to_s on <var3341:NativeArray[String]>*/
}
varonce3340 = var3341;
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2944);
fatal_exit(1);
}
{
var3349 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var3348, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var3349); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce3350!=NULL)) {
var3351 = varonce3350;
} else {
var3352 = "to_i16";
var3353 = core__abstract_text___CString___to_s_full(var3352, 6l, 6l);
var3351 = var3353;
varonce3350 = var3351;
}
{
var3354 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var3351); /* == on <var_pname:String>*/
}
if (var3354){
if (unlikely(varonce3355==NULL)) {
var3356 = NEW_core__NativeArray(2l, &type_core__NativeArray__core__String);
if (likely(varonce3357!=NULL)) {
var3358 = varonce3357;
} else {
var3359 = "(int16_t)";
var3360 = core__abstract_text___CString___to_s_full(var3359, 9l, 9l);
var3358 = var3360;
varonce3357 = var3358;
}
((struct instance_core__NativeArray*)var3356)->values[0]=var3358;
} else {
var3356 = varonce3355;
varonce3355 = NULL;
}
{
var3361 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var3362 = ((val*(*)(val* self))(var3361->class->vft[COLOR_core__abstract_text__Object__to_s]))(var3361); /* to_s on <var3361:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var3356)->values[1]=var3362;
{
var3363 = ((val*(*)(val* self))(var3356->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var3356); /* native_to_s on <var3356:NativeArray[String]>*/
}
varonce3355 = var3356;
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2947);
fatal_exit(1);
}
{
var3364 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var3363, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var3364); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce3365!=NULL)) {
var3366 = varonce3365;
} else {
var3367 = "to_u16";
var3368 = core__abstract_text___CString___to_s_full(var3367, 6l, 6l);
var3366 = var3368;
varonce3365 = var3366;
}
{
var3369 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var3366); /* == on <var_pname:String>*/
}
if (var3369){
if (unlikely(varonce3370==NULL)) {
var3371 = NEW_core__NativeArray(2l, &type_core__NativeArray__core__String);
if (likely(varonce3372!=NULL)) {
var3373 = varonce3372;
} else {
var3374 = "(uint16_t)";
var3375 = core__abstract_text___CString___to_s_full(var3374, 10l, 10l);
var3373 = var3375;
varonce3372 = var3373;
}
((struct instance_core__NativeArray*)var3371)->values[0]=var3373;
} else {
var3371 = varonce3370;
varonce3370 = NULL;
}
{
var3376 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var3377 = ((val*(*)(val* self))(var3376->class->vft[COLOR_core__abstract_text__Object__to_s]))(var3376); /* to_s on <var3376:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var3371)->values[1]=var3377;
{
var3378 = ((val*(*)(val* self))(var3371->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var3371); /* native_to_s on <var3371:NativeArray[String]>*/
}
varonce3370 = var3371;
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2950);
fatal_exit(1);
}
{
var3379 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var3378, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var3379); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce3380!=NULL)) {
var3381 = varonce3380;
} else {
var3382 = "to_u32";
var3383 = core__abstract_text___CString___to_s_full(var3382, 6l, 6l);
var3381 = var3383;
varonce3380 = var3381;
}
{
var3384 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var3381); /* == on <var_pname:String>*/
}
if (var3384){
if (unlikely(varonce3385==NULL)) {
var3386 = NEW_core__NativeArray(2l, &type_core__NativeArray__core__String);
if (likely(varonce3387!=NULL)) {
var3388 = varonce3387;
} else {
var3389 = "(uint32_t)";
var3390 = core__abstract_text___CString___to_s_full(var3389, 10l, 10l);
var3388 = var3390;
varonce3387 = var3388;
}
((struct instance_core__NativeArray*)var3386)->values[0]=var3388;
} else {
var3386 = varonce3385;
varonce3385 = NULL;
}
{
var3391 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var3392 = ((val*(*)(val* self))(var3391->class->vft[COLOR_core__abstract_text__Object__to_s]))(var3391); /* to_s on <var3391:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var3386)->values[1]=var3392;
{
var3393 = ((val*(*)(val* self))(var3386->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var3386); /* native_to_s on <var3386:NativeArray[String]>*/
}
varonce3385 = var3386;
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2953);
fatal_exit(1);
}
{
var3394 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var3393, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var3394); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce3395!=NULL)) {
var3396 = varonce3395;
} else {
var3397 = "to_f";
var3398 = core__abstract_text___CString___to_s_full(var3397, 4l, 4l);
var3396 = var3398;
varonce3395 = var3396;
}
{
var3399 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var3396); /* == on <var_pname:String>*/
}
if (var3399){
if (unlikely(varonce3400==NULL)) {
var3401 = NEW_core__NativeArray(2l, &type_core__NativeArray__core__String);
if (likely(varonce3402!=NULL)) {
var3403 = varonce3402;
} else {
var3404 = "(double)";
var3405 = core__abstract_text___CString___to_s_full(var3404, 8l, 8l);
var3403 = var3405;
varonce3402 = var3403;
}
((struct instance_core__NativeArray*)var3401)->values[0]=var3403;
} else {
var3401 = varonce3400;
varonce3400 = NULL;
}
{
var3406 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var3407 = ((val*(*)(val* self))(var3406->class->vft[COLOR_core__abstract_text__Object__to_s]))(var3406); /* to_s on <var3406:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var3401)->values[1]=var3407;
{
var3408 = ((val*(*)(val* self))(var3401->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var3401); /* native_to_s on <var3401:NativeArray[String]>*/
}
varonce3400 = var3401;
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2956);
fatal_exit(1);
}
{
var3409 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var3408, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var3409); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce3410!=NULL)) {
var3411 = varonce3410;
} else {
var3412 = "&";
var3413 = core__abstract_text___CString___to_s_full(var3412, 1l, 1l);
var3411 = var3413;
varonce3410 = var3411;
}
{
var3414 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var3411); /* == on <var_pname:String>*/
}
if (var3414){
if (unlikely(varonce3415==NULL)) {
var3416 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce3417!=NULL)) {
var3418 = varonce3417;
} else {
var3419 = " & ";
var3420 = core__abstract_text___CString___to_s_full(var3419, 3l, 3l);
var3418 = var3420;
varonce3417 = var3418;
}
((struct instance_core__NativeArray*)var3416)->values[1]=var3418;
} else {
var3416 = varonce3415;
varonce3415 = NULL;
}
{
var3421 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var3422 = ((val*(*)(val* self))(var3421->class->vft[COLOR_core__abstract_text__Object__to_s]))(var3421); /* to_s on <var3421:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var3416)->values[0]=var3422;
{
var3423 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 1l);
}
{
var3424 = ((val*(*)(val* self))(var3423->class->vft[COLOR_core__abstract_text__Object__to_s]))(var3423); /* to_s on <var3423:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var3416)->values[2]=var3424;
{
var3425 = ((val*(*)(val* self))(var3416->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var3416); /* native_to_s on <var3416:NativeArray[String]>*/
}
varonce3415 = var3416;
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2959);
fatal_exit(1);
}
{
var3426 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var3425, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var3426); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce3427!=NULL)) {
var3428 = varonce3427;
} else {
var3429 = "|";
var3430 = core__abstract_text___CString___to_s_full(var3429, 1l, 1l);
var3428 = var3430;
varonce3427 = var3428;
}
{
var3431 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var3428); /* == on <var_pname:String>*/
}
if (var3431){
if (unlikely(varonce3432==NULL)) {
var3433 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce3434!=NULL)) {
var3435 = varonce3434;
} else {
var3436 = " | ";
var3437 = core__abstract_text___CString___to_s_full(var3436, 3l, 3l);
var3435 = var3437;
varonce3434 = var3435;
}
((struct instance_core__NativeArray*)var3433)->values[1]=var3435;
} else {
var3433 = varonce3432;
varonce3432 = NULL;
}
{
var3438 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var3439 = ((val*(*)(val* self))(var3438->class->vft[COLOR_core__abstract_text__Object__to_s]))(var3438); /* to_s on <var3438:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var3433)->values[0]=var3439;
{
var3440 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 1l);
}
{
var3441 = ((val*(*)(val* self))(var3440->class->vft[COLOR_core__abstract_text__Object__to_s]))(var3440); /* to_s on <var3440:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var3433)->values[2]=var3441;
{
var3442 = ((val*(*)(val* self))(var3433->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var3433); /* native_to_s on <var3433:NativeArray[String]>*/
}
varonce3432 = var3433;
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2962);
fatal_exit(1);
}
{
var3443 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var3442, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var3443); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce3444!=NULL)) {
var3445 = varonce3444;
} else {
var3446 = "^";
var3447 = core__abstract_text___CString___to_s_full(var3446, 1l, 1l);
var3445 = var3447;
varonce3444 = var3445;
}
{
var3448 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var3445); /* == on <var_pname:String>*/
}
if (var3448){
if (unlikely(varonce3449==NULL)) {
var3450 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce3451!=NULL)) {
var3452 = varonce3451;
} else {
var3453 = " ^ ";
var3454 = core__abstract_text___CString___to_s_full(var3453, 3l, 3l);
var3452 = var3454;
varonce3451 = var3452;
}
((struct instance_core__NativeArray*)var3450)->values[1]=var3452;
} else {
var3450 = varonce3449;
varonce3449 = NULL;
}
{
var3455 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var3456 = ((val*(*)(val* self))(var3455->class->vft[COLOR_core__abstract_text__Object__to_s]))(var3455); /* to_s on <var3455:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var3450)->values[0]=var3456;
{
var3457 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 1l);
}
{
var3458 = ((val*(*)(val* self))(var3457->class->vft[COLOR_core__abstract_text__Object__to_s]))(var3457); /* to_s on <var3457:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var3450)->values[2]=var3458;
{
var3459 = ((val*(*)(val* self))(var3450->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var3450); /* native_to_s on <var3450:NativeArray[String]>*/
}
varonce3449 = var3450;
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2965);
fatal_exit(1);
}
{
var3460 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var3459, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var3460); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce3461!=NULL)) {
var3462 = varonce3461;
} else {
var3463 = "unary ~";
var3464 = core__abstract_text___CString___to_s_full(var3463, 7l, 7l);
var3462 = var3464;
varonce3461 = var3462;
}
{
var3465 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var3462); /* == on <var_pname:String>*/
}
if (var3465){
if (unlikely(varonce3466==NULL)) {
var3467 = NEW_core__NativeArray(2l, &type_core__NativeArray__core__String);
if (likely(varonce3468!=NULL)) {
var3469 = varonce3468;
} else {
var3470 = "~";
var3471 = core__abstract_text___CString___to_s_full(var3470, 1l, 1l);
var3469 = var3471;
varonce3468 = var3469;
}
((struct instance_core__NativeArray*)var3467)->values[0]=var3469;
} else {
var3467 = varonce3466;
varonce3466 = NULL;
}
{
var3472 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var3473 = ((val*(*)(val* self))(var3472->class->vft[COLOR_core__abstract_text__Object__to_s]))(var3472); /* to_s on <var3472:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var3467)->values[1]=var3473;
{
var3474 = ((val*(*)(val* self))(var3467->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var3467); /* native_to_s on <var3467:NativeArray[String]>*/
}
varonce3466 = var3467;
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2968);
fatal_exit(1);
}
{
var3475 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var3474, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var3475); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
} else {
if (likely(varonce3476!=NULL)) {
var3477 = varonce3476;
} else {
var3478 = "UInt32";
var3479 = core__abstract_text___CString___to_s_full(var3478, 6l, 6l);
var3477 = var3479;
varonce3476 = var3477;
}
{
var3480 = ((short int(*)(val* self, val* p0))(var_cname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_cname, var3477); /* == on <var_cname:String>*/
}
if (var3480){
if (likely(varonce3481!=NULL)) {
var3482 = varonce3481;
} else {
var3483 = "output";
var3484 = core__abstract_text___CString___to_s_full(var3483, 6l, 6l);
var3482 = var3484;
varonce3481 = var3482;
}
{
var3485 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var3482); /* == on <var_pname:String>*/
}
if (var3485){
if (unlikely(varonce3486==NULL)) {
var3487 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce3488!=NULL)) {
var3489 = varonce3488;
} else {
var3490 = "printf(\"%\"PRIu32 \"\\n\", ";
var3491 = core__abstract_text___CString___to_s_full(var3490, 23l, 23l);
var3489 = var3491;
varonce3488 = var3489;
}
((struct instance_core__NativeArray*)var3487)->values[0]=var3489;
if (likely(varonce3492!=NULL)) {
var3493 = varonce3492;
} else {
var3494 = ");";
var3495 = core__abstract_text___CString___to_s_full(var3494, 2l, 2l);
var3493 = var3495;
varonce3492 = var3493;
}
((struct instance_core__NativeArray*)var3487)->values[2]=var3493;
} else {
var3487 = varonce3486;
varonce3486 = NULL;
}
{
var3496 = core___core__SequenceRead___Collection__first(var_arguments);
}
{
var3497 = ((val*(*)(val* self))(var3496->class->vft[COLOR_core__abstract_text__Object__to_s]))(var3496); /* to_s on <var3496:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var3487)->values[1]=var3497;
{
var3498 = ((val*(*)(val* self))(var3487->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var3487); /* native_to_s on <var3487:NativeArray[String]>*/
}
varonce3486 = var3487;
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var3498); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce3499!=NULL)) {
var3500 = varonce3499;
} else {
var3501 = "object_id";
var3502 = core__abstract_text___CString___to_s_full(var3501, 9l, 9l);
var3500 = var3502;
varonce3499 = var3500;
}
{
var3503 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var3500); /* == on <var_pname:String>*/
}
if (var3503){
if (unlikely(varonce3504==NULL)) {
var3505 = NEW_core__NativeArray(2l, &type_core__NativeArray__core__String);
if (likely(varonce3506!=NULL)) {
var3507 = varonce3506;
} else {
var3508 = "(long)";
var3509 = core__abstract_text___CString___to_s_full(var3508, 6l, 6l);
var3507 = var3509;
varonce3506 = var3507;
}
((struct instance_core__NativeArray*)var3505)->values[0]=var3507;
} else {
var3505 = varonce3504;
varonce3504 = NULL;
}
{
var3510 = core___core__SequenceRead___Collection__first(var_arguments);
}
{
var3511 = ((val*(*)(val* self))(var3510->class->vft[COLOR_core__abstract_text__Object__to_s]))(var3510); /* to_s on <var3510:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var3505)->values[1]=var3511;
{
var3512 = ((val*(*)(val* self))(var3505->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var3505); /* native_to_s on <var3505:NativeArray[String]>*/
}
varonce3504 = var3505;
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2976);
fatal_exit(1);
}
{
var3513 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var3512, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var3513); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce3514!=NULL)) {
var3515 = varonce3514;
} else {
var3516 = "+";
var3517 = core__abstract_text___CString___to_s_full(var3516, 1l, 1l);
var3515 = var3517;
varonce3514 = var3515;
}
{
var3518 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var3515); /* == on <var_pname:String>*/
}
if (var3518){
if (unlikely(varonce3519==NULL)) {
var3520 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce3521!=NULL)) {
var3522 = varonce3521;
} else {
var3523 = " + ";
var3524 = core__abstract_text___CString___to_s_full(var3523, 3l, 3l);
var3522 = var3524;
varonce3521 = var3522;
}
((struct instance_core__NativeArray*)var3520)->values[1]=var3522;
} else {
var3520 = varonce3519;
varonce3519 = NULL;
}
{
var3525 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var3526 = ((val*(*)(val* self))(var3525->class->vft[COLOR_core__abstract_text__Object__to_s]))(var3525); /* to_s on <var3525:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var3520)->values[0]=var3526;
{
var3527 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 1l);
}
{
var3528 = ((val*(*)(val* self))(var3527->class->vft[COLOR_core__abstract_text__Object__to_s]))(var3527); /* to_s on <var3527:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var3520)->values[2]=var3528;
{
var3529 = ((val*(*)(val* self))(var3520->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var3520); /* native_to_s on <var3520:NativeArray[String]>*/
}
varonce3519 = var3520;
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2979);
fatal_exit(1);
}
{
var3530 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var3529, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var3530); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce3531!=NULL)) {
var3532 = varonce3531;
} else {
var3533 = "-";
var3534 = core__abstract_text___CString___to_s_full(var3533, 1l, 1l);
var3532 = var3534;
varonce3531 = var3532;
}
{
var3535 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var3532); /* == on <var_pname:String>*/
}
if (var3535){
if (unlikely(varonce3536==NULL)) {
var3537 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce3538!=NULL)) {
var3539 = varonce3538;
} else {
var3540 = " - ";
var3541 = core__abstract_text___CString___to_s_full(var3540, 3l, 3l);
var3539 = var3541;
varonce3538 = var3539;
}
((struct instance_core__NativeArray*)var3537)->values[1]=var3539;
} else {
var3537 = varonce3536;
varonce3536 = NULL;
}
{
var3542 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var3543 = ((val*(*)(val* self))(var3542->class->vft[COLOR_core__abstract_text__Object__to_s]))(var3542); /* to_s on <var3542:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var3537)->values[0]=var3543;
{
var3544 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 1l);
}
{
var3545 = ((val*(*)(val* self))(var3544->class->vft[COLOR_core__abstract_text__Object__to_s]))(var3544); /* to_s on <var3544:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var3537)->values[2]=var3545;
{
var3546 = ((val*(*)(val* self))(var3537->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var3537); /* native_to_s on <var3537:NativeArray[String]>*/
}
varonce3536 = var3537;
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2982);
fatal_exit(1);
}
{
var3547 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var3546, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var3547); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce3548!=NULL)) {
var3549 = varonce3548;
} else {
var3550 = "unary -";
var3551 = core__abstract_text___CString___to_s_full(var3550, 7l, 7l);
var3549 = var3551;
varonce3548 = var3549;
}
{
var3552 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var3549); /* == on <var_pname:String>*/
}
if (var3552){
if (unlikely(varonce3553==NULL)) {
var3554 = NEW_core__NativeArray(2l, &type_core__NativeArray__core__String);
if (likely(varonce3555!=NULL)) {
var3556 = varonce3555;
} else {
var3557 = "-";
var3558 = core__abstract_text___CString___to_s_full(var3557, 1l, 1l);
var3556 = var3558;
varonce3555 = var3556;
}
((struct instance_core__NativeArray*)var3554)->values[0]=var3556;
} else {
var3554 = varonce3553;
varonce3553 = NULL;
}
{
var3559 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var3560 = ((val*(*)(val* self))(var3559->class->vft[COLOR_core__abstract_text__Object__to_s]))(var3559); /* to_s on <var3559:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var3554)->values[1]=var3560;
{
var3561 = ((val*(*)(val* self))(var3554->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var3554); /* native_to_s on <var3554:NativeArray[String]>*/
}
varonce3553 = var3554;
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2985);
fatal_exit(1);
}
{
var3562 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var3561, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var3562); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce3563!=NULL)) {
var3564 = varonce3563;
} else {
var3565 = "unary +";
var3566 = core__abstract_text___CString___to_s_full(var3565, 7l, 7l);
var3564 = var3566;
varonce3563 = var3564;
}
{
var3567 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var3564); /* == on <var_pname:String>*/
}
if (var3567){
{
var3568 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var3568); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce3569!=NULL)) {
var3570 = varonce3569;
} else {
var3571 = "*";
var3572 = core__abstract_text___CString___to_s_full(var3571, 1l, 1l);
var3570 = var3572;
varonce3569 = var3570;
}
{
var3573 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var3570); /* == on <var_pname:String>*/
}
if (var3573){
if (unlikely(varonce3574==NULL)) {
var3575 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce3576!=NULL)) {
var3577 = varonce3576;
} else {
var3578 = " * ";
var3579 = core__abstract_text___CString___to_s_full(var3578, 3l, 3l);
var3577 = var3579;
varonce3576 = var3577;
}
((struct instance_core__NativeArray*)var3575)->values[1]=var3577;
} else {
var3575 = varonce3574;
varonce3574 = NULL;
}
{
var3580 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var3581 = ((val*(*)(val* self))(var3580->class->vft[COLOR_core__abstract_text__Object__to_s]))(var3580); /* to_s on <var3580:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var3575)->values[0]=var3581;
{
var3582 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 1l);
}
{
var3583 = ((val*(*)(val* self))(var3582->class->vft[COLOR_core__abstract_text__Object__to_s]))(var3582); /* to_s on <var3582:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var3575)->values[2]=var3583;
{
var3584 = ((val*(*)(val* self))(var3575->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var3575); /* native_to_s on <var3575:NativeArray[String]>*/
}
varonce3574 = var3575;
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2991);
fatal_exit(1);
}
{
var3585 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var3584, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var3585); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce3586!=NULL)) {
var3587 = varonce3586;
} else {
var3588 = "/";
var3589 = core__abstract_text___CString___to_s_full(var3588, 1l, 1l);
var3587 = var3589;
varonce3586 = var3587;
}
{
var3590 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var3587); /* == on <var_pname:String>*/
}
if (var3590){
if (unlikely(varonce3591==NULL)) {
var3592 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce3593!=NULL)) {
var3594 = varonce3593;
} else {
var3595 = " / ";
var3596 = core__abstract_text___CString___to_s_full(var3595, 3l, 3l);
var3594 = var3596;
varonce3593 = var3594;
}
((struct instance_core__NativeArray*)var3592)->values[1]=var3594;
} else {
var3592 = varonce3591;
varonce3591 = NULL;
}
{
var3597 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var3598 = ((val*(*)(val* self))(var3597->class->vft[COLOR_core__abstract_text__Object__to_s]))(var3597); /* to_s on <var3597:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var3592)->values[0]=var3598;
{
var3599 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 1l);
}
{
var3600 = ((val*(*)(val* self))(var3599->class->vft[COLOR_core__abstract_text__Object__to_s]))(var3599); /* to_s on <var3599:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var3592)->values[2]=var3600;
{
var3601 = ((val*(*)(val* self))(var3592->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var3592); /* native_to_s on <var3592:NativeArray[String]>*/
}
varonce3591 = var3592;
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2994);
fatal_exit(1);
}
{
var3602 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var3601, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var3602); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce3603!=NULL)) {
var3604 = varonce3603;
} else {
var3605 = "%";
var3606 = core__abstract_text___CString___to_s_full(var3605, 1l, 1l);
var3604 = var3606;
varonce3603 = var3604;
}
{
var3607 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var3604); /* == on <var_pname:String>*/
}
if (var3607){
if (unlikely(varonce3608==NULL)) {
var3609 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce3610!=NULL)) {
var3611 = varonce3610;
} else {
var3612 = " % ";
var3613 = core__abstract_text___CString___to_s_full(var3612, 3l, 3l);
var3611 = var3613;
varonce3610 = var3611;
}
((struct instance_core__NativeArray*)var3609)->values[1]=var3611;
} else {
var3609 = varonce3608;
varonce3608 = NULL;
}
{
var3614 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var3615 = ((val*(*)(val* self))(var3614->class->vft[COLOR_core__abstract_text__Object__to_s]))(var3614); /* to_s on <var3614:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var3609)->values[0]=var3615;
{
var3616 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 1l);
}
{
var3617 = ((val*(*)(val* self))(var3616->class->vft[COLOR_core__abstract_text__Object__to_s]))(var3616); /* to_s on <var3616:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var3609)->values[2]=var3617;
{
var3618 = ((val*(*)(val* self))(var3609->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var3609); /* native_to_s on <var3609:NativeArray[String]>*/
}
varonce3608 = var3609;
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 2997);
fatal_exit(1);
}
{
var3619 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var3618, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var3619); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce3620!=NULL)) {
var3621 = varonce3620;
} else {
var3622 = "<<";
var3623 = core__abstract_text___CString___to_s_full(var3622, 2l, 2l);
var3621 = var3623;
varonce3620 = var3621;
}
{
var3624 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var3621); /* == on <var_pname:String>*/
}
if (var3624){
if (unlikely(varonce3625==NULL)) {
var3626 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce3627!=NULL)) {
var3628 = varonce3627;
} else {
var3629 = " << ";
var3630 = core__abstract_text___CString___to_s_full(var3629, 4l, 4l);
var3628 = var3630;
varonce3627 = var3628;
}
((struct instance_core__NativeArray*)var3626)->values[1]=var3628;
} else {
var3626 = varonce3625;
varonce3625 = NULL;
}
{
var3631 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var3632 = ((val*(*)(val* self))(var3631->class->vft[COLOR_core__abstract_text__Object__to_s]))(var3631); /* to_s on <var3631:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var3626)->values[0]=var3632;
{
var3633 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 1l);
}
{
var3634 = ((val*(*)(val* self))(var3633->class->vft[COLOR_core__abstract_text__Object__to_s]))(var3633); /* to_s on <var3633:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var3626)->values[2]=var3634;
{
var3635 = ((val*(*)(val* self))(var3626->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var3626); /* native_to_s on <var3626:NativeArray[String]>*/
}
varonce3625 = var3626;
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 3000);
fatal_exit(1);
}
{
var3636 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var3635, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var3636); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce3637!=NULL)) {
var3638 = varonce3637;
} else {
var3639 = ">>";
var3640 = core__abstract_text___CString___to_s_full(var3639, 2l, 2l);
var3638 = var3640;
varonce3637 = var3638;
}
{
var3641 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var3638); /* == on <var_pname:String>*/
}
if (var3641){
if (unlikely(varonce3642==NULL)) {
var3643 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce3644!=NULL)) {
var3645 = varonce3644;
} else {
var3646 = " >> ";
var3647 = core__abstract_text___CString___to_s_full(var3646, 4l, 4l);
var3645 = var3647;
varonce3644 = var3645;
}
((struct instance_core__NativeArray*)var3643)->values[1]=var3645;
} else {
var3643 = varonce3642;
varonce3642 = NULL;
}
{
var3648 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var3649 = ((val*(*)(val* self))(var3648->class->vft[COLOR_core__abstract_text__Object__to_s]))(var3648); /* to_s on <var3648:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var3643)->values[0]=var3649;
{
var3650 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 1l);
}
{
var3651 = ((val*(*)(val* self))(var3650->class->vft[COLOR_core__abstract_text__Object__to_s]))(var3650); /* to_s on <var3650:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var3643)->values[2]=var3651;
{
var3652 = ((val*(*)(val* self))(var3643->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var3643); /* native_to_s on <var3643:NativeArray[String]>*/
}
varonce3642 = var3643;
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 3003);
fatal_exit(1);
}
{
var3653 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var3652, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var3653); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce3654!=NULL)) {
var3655 = varonce3654;
} else {
var3656 = "==";
var3657 = core__abstract_text___CString___to_s_full(var3656, 2l, 2l);
var3655 = var3657;
varonce3654 = var3655;
}
{
var3658 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var3655); /* == on <var_pname:String>*/
}
if (var3658){
{
var3659 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var3660 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 1l);
}
{
var3661 = ((val*(*)(val* self, val* p0, val* p1))(var_v->class->vft[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor__equal_test]))(var_v, var3659, var3660); /* equal_test on <var_v:AbstractCompilerVisitor>*/
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var3661); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce3662!=NULL)) {
var3663 = varonce3662;
} else {
var3664 = "!=";
var3665 = core__abstract_text___CString___to_s_full(var3664, 2l, 2l);
var3663 = var3665;
varonce3662 = var3663;
}
{
var3666 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var3663); /* == on <var_pname:String>*/
}
if (var3666){
{
var3667 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var3668 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 1l);
}
{
var3669 = ((val*(*)(val* self, val* p0, val* p1))(var_v->class->vft[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor__equal_test]))(var_v, var3667, var3668); /* equal_test on <var_v:AbstractCompilerVisitor>*/
}
var_res3670 = var3669;
if (unlikely(varonce3671==NULL)) {
var3672 = NEW_core__NativeArray(2l, &type_core__NativeArray__core__String);
if (likely(varonce3673!=NULL)) {
var3674 = varonce3673;
} else {
var3675 = "!";
var3676 = core__abstract_text___CString___to_s_full(var3675, 1l, 1l);
var3674 = var3676;
varonce3673 = var3674;
}
((struct instance_core__NativeArray*)var3672)->values[0]=var3674;
} else {
var3672 = varonce3671;
varonce3671 = NULL;
}
{
var3677 = ((val*(*)(val* self))(var_res3670->class->vft[COLOR_core__abstract_text__Object__to_s]))(var_res3670); /* to_s on <var_res3670:RuntimeVariable>*/
}
((struct instance_core__NativeArray*)var3672)->values[1]=var3677;
{
var3678 = ((val*(*)(val* self))(var3672->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var3672); /* native_to_s on <var3672:NativeArray[String]>*/
}
varonce3671 = var3672;
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 3010);
fatal_exit(1);
}
{
var3679 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var3678, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var3679); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce3680!=NULL)) {
var3681 = varonce3680;
} else {
var3682 = "<";
var3683 = core__abstract_text___CString___to_s_full(var3682, 1l, 1l);
var3681 = var3683;
varonce3680 = var3681;
}
{
var3684 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var3681); /* == on <var_pname:String>*/
}
if (var3684){
if (unlikely(varonce3685==NULL)) {
var3686 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce3687!=NULL)) {
var3688 = varonce3687;
} else {
var3689 = " < ";
var3690 = core__abstract_text___CString___to_s_full(var3689, 3l, 3l);
var3688 = var3690;
varonce3687 = var3688;
}
((struct instance_core__NativeArray*)var3686)->values[1]=var3688;
} else {
var3686 = varonce3685;
varonce3685 = NULL;
}
{
var3691 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var3692 = ((val*(*)(val* self))(var3691->class->vft[COLOR_core__abstract_text__Object__to_s]))(var3691); /* to_s on <var3691:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var3686)->values[0]=var3692;
{
var3693 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 1l);
}
{
var3694 = ((val*(*)(val* self))(var3693->class->vft[COLOR_core__abstract_text__Object__to_s]))(var3693); /* to_s on <var3693:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var3686)->values[2]=var3694;
{
var3695 = ((val*(*)(val* self))(var3686->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var3686); /* native_to_s on <var3686:NativeArray[String]>*/
}
varonce3685 = var3686;
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 3013);
fatal_exit(1);
}
{
var3696 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var3695, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var3696); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce3697!=NULL)) {
var3698 = varonce3697;
} else {
var3699 = ">";
var3700 = core__abstract_text___CString___to_s_full(var3699, 1l, 1l);
var3698 = var3700;
varonce3697 = var3698;
}
{
var3701 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var3698); /* == on <var_pname:String>*/
}
if (var3701){
if (unlikely(varonce3702==NULL)) {
var3703 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce3704!=NULL)) {
var3705 = varonce3704;
} else {
var3706 = " > ";
var3707 = core__abstract_text___CString___to_s_full(var3706, 3l, 3l);
var3705 = var3707;
varonce3704 = var3705;
}
((struct instance_core__NativeArray*)var3703)->values[1]=var3705;
} else {
var3703 = varonce3702;
varonce3702 = NULL;
}
{
var3708 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var3709 = ((val*(*)(val* self))(var3708->class->vft[COLOR_core__abstract_text__Object__to_s]))(var3708); /* to_s on <var3708:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var3703)->values[0]=var3709;
{
var3710 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 1l);
}
{
var3711 = ((val*(*)(val* self))(var3710->class->vft[COLOR_core__abstract_text__Object__to_s]))(var3710); /* to_s on <var3710:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var3703)->values[2]=var3711;
{
var3712 = ((val*(*)(val* self))(var3703->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var3703); /* native_to_s on <var3703:NativeArray[String]>*/
}
varonce3702 = var3703;
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 3016);
fatal_exit(1);
}
{
var3713 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var3712, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var3713); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce3714!=NULL)) {
var3715 = varonce3714;
} else {
var3716 = "<=";
var3717 = core__abstract_text___CString___to_s_full(var3716, 2l, 2l);
var3715 = var3717;
varonce3714 = var3715;
}
{
var3718 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var3715); /* == on <var_pname:String>*/
}
if (var3718){
if (unlikely(varonce3719==NULL)) {
var3720 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce3721!=NULL)) {
var3722 = varonce3721;
} else {
var3723 = " <= ";
var3724 = core__abstract_text___CString___to_s_full(var3723, 4l, 4l);
var3722 = var3724;
varonce3721 = var3722;
}
((struct instance_core__NativeArray*)var3720)->values[1]=var3722;
} else {
var3720 = varonce3719;
varonce3719 = NULL;
}
{
var3725 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var3726 = ((val*(*)(val* self))(var3725->class->vft[COLOR_core__abstract_text__Object__to_s]))(var3725); /* to_s on <var3725:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var3720)->values[0]=var3726;
{
var3727 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 1l);
}
{
var3728 = ((val*(*)(val* self))(var3727->class->vft[COLOR_core__abstract_text__Object__to_s]))(var3727); /* to_s on <var3727:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var3720)->values[2]=var3728;
{
var3729 = ((val*(*)(val* self))(var3720->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var3720); /* native_to_s on <var3720:NativeArray[String]>*/
}
varonce3719 = var3720;
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 3019);
fatal_exit(1);
}
{
var3730 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var3729, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var3730); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce3731!=NULL)) {
var3732 = varonce3731;
} else {
var3733 = ">=";
var3734 = core__abstract_text___CString___to_s_full(var3733, 2l, 2l);
var3732 = var3734;
varonce3731 = var3732;
}
{
var3735 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var3732); /* == on <var_pname:String>*/
}
if (var3735){
if (unlikely(varonce3736==NULL)) {
var3737 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce3738!=NULL)) {
var3739 = varonce3738;
} else {
var3740 = " >= ";
var3741 = core__abstract_text___CString___to_s_full(var3740, 4l, 4l);
var3739 = var3741;
varonce3738 = var3739;
}
((struct instance_core__NativeArray*)var3737)->values[1]=var3739;
} else {
var3737 = varonce3736;
varonce3736 = NULL;
}
{
var3742 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var3743 = ((val*(*)(val* self))(var3742->class->vft[COLOR_core__abstract_text__Object__to_s]))(var3742); /* to_s on <var3742:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var3737)->values[0]=var3743;
{
var3744 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 1l);
}
{
var3745 = ((val*(*)(val* self))(var3744->class->vft[COLOR_core__abstract_text__Object__to_s]))(var3744); /* to_s on <var3744:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var3737)->values[2]=var3745;
{
var3746 = ((val*(*)(val* self))(var3737->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var3737); /* native_to_s on <var3737:NativeArray[String]>*/
}
varonce3736 = var3737;
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 3022);
fatal_exit(1);
}
{
var3747 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var3746, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var3747); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce3748!=NULL)) {
var3749 = varonce3748;
} else {
var3750 = "to_i";
var3751 = core__abstract_text___CString___to_s_full(var3750, 4l, 4l);
var3749 = var3751;
varonce3748 = var3749;
}
{
var3752 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var3749); /* == on <var_pname:String>*/
}
if (var3752){
if (unlikely(varonce3753==NULL)) {
var3754 = NEW_core__NativeArray(2l, &type_core__NativeArray__core__String);
if (likely(varonce3755!=NULL)) {
var3756 = varonce3755;
} else {
var3757 = "(long)";
var3758 = core__abstract_text___CString___to_s_full(var3757, 6l, 6l);
var3756 = var3758;
varonce3755 = var3756;
}
((struct instance_core__NativeArray*)var3754)->values[0]=var3756;
} else {
var3754 = varonce3753;
varonce3753 = NULL;
}
{
var3759 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var3760 = ((val*(*)(val* self))(var3759->class->vft[COLOR_core__abstract_text__Object__to_s]))(var3759); /* to_s on <var3759:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var3754)->values[1]=var3760;
{
var3761 = ((val*(*)(val* self))(var3754->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var3754); /* native_to_s on <var3754:NativeArray[String]>*/
}
varonce3753 = var3754;
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 3025);
fatal_exit(1);
}
{
var3762 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var3761, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var3762); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce3763!=NULL)) {
var3764 = varonce3763;
} else {
var3765 = "to_b";
var3766 = core__abstract_text___CString___to_s_full(var3765, 4l, 4l);
var3764 = var3766;
varonce3763 = var3764;
}
{
var3767 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var3764); /* == on <var_pname:String>*/
}
if (var3767){
if (unlikely(varonce3768==NULL)) {
var3769 = NEW_core__NativeArray(2l, &type_core__NativeArray__core__String);
if (likely(varonce3770!=NULL)) {
var3771 = varonce3770;
} else {
var3772 = "(unsigned char)";
var3773 = core__abstract_text___CString___to_s_full(var3772, 15l, 15l);
var3771 = var3773;
varonce3770 = var3771;
}
((struct instance_core__NativeArray*)var3769)->values[0]=var3771;
} else {
var3769 = varonce3768;
varonce3768 = NULL;
}
{
var3774 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var3775 = ((val*(*)(val* self))(var3774->class->vft[COLOR_core__abstract_text__Object__to_s]))(var3774); /* to_s on <var3774:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var3769)->values[1]=var3775;
{
var3776 = ((val*(*)(val* self))(var3769->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var3769); /* native_to_s on <var3769:NativeArray[String]>*/
}
varonce3768 = var3769;
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 3028);
fatal_exit(1);
}
{
var3777 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var3776, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var3777); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce3778!=NULL)) {
var3779 = varonce3778;
} else {
var3780 = "to_i8";
var3781 = core__abstract_text___CString___to_s_full(var3780, 5l, 5l);
var3779 = var3781;
varonce3778 = var3779;
}
{
var3782 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var3779); /* == on <var_pname:String>*/
}
if (var3782){
if (unlikely(varonce3783==NULL)) {
var3784 = NEW_core__NativeArray(2l, &type_core__NativeArray__core__String);
if (likely(varonce3785!=NULL)) {
var3786 = varonce3785;
} else {
var3787 = "(int8_t)";
var3788 = core__abstract_text___CString___to_s_full(var3787, 8l, 8l);
var3786 = var3788;
varonce3785 = var3786;
}
((struct instance_core__NativeArray*)var3784)->values[0]=var3786;
} else {
var3784 = varonce3783;
varonce3783 = NULL;
}
{
var3789 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var3790 = ((val*(*)(val* self))(var3789->class->vft[COLOR_core__abstract_text__Object__to_s]))(var3789); /* to_s on <var3789:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var3784)->values[1]=var3790;
{
var3791 = ((val*(*)(val* self))(var3784->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var3784); /* native_to_s on <var3784:NativeArray[String]>*/
}
varonce3783 = var3784;
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 3031);
fatal_exit(1);
}
{
var3792 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var3791, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var3792); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce3793!=NULL)) {
var3794 = varonce3793;
} else {
var3795 = "to_i16";
var3796 = core__abstract_text___CString___to_s_full(var3795, 6l, 6l);
var3794 = var3796;
varonce3793 = var3794;
}
{
var3797 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var3794); /* == on <var_pname:String>*/
}
if (var3797){
if (unlikely(varonce3798==NULL)) {
var3799 = NEW_core__NativeArray(2l, &type_core__NativeArray__core__String);
if (likely(varonce3800!=NULL)) {
var3801 = varonce3800;
} else {
var3802 = "(int16_t)";
var3803 = core__abstract_text___CString___to_s_full(var3802, 9l, 9l);
var3801 = var3803;
varonce3800 = var3801;
}
((struct instance_core__NativeArray*)var3799)->values[0]=var3801;
} else {
var3799 = varonce3798;
varonce3798 = NULL;
}
{
var3804 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var3805 = ((val*(*)(val* self))(var3804->class->vft[COLOR_core__abstract_text__Object__to_s]))(var3804); /* to_s on <var3804:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var3799)->values[1]=var3805;
{
var3806 = ((val*(*)(val* self))(var3799->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var3799); /* native_to_s on <var3799:NativeArray[String]>*/
}
varonce3798 = var3799;
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 3034);
fatal_exit(1);
}
{
var3807 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var3806, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var3807); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce3808!=NULL)) {
var3809 = varonce3808;
} else {
var3810 = "to_u16";
var3811 = core__abstract_text___CString___to_s_full(var3810, 6l, 6l);
var3809 = var3811;
varonce3808 = var3809;
}
{
var3812 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var3809); /* == on <var_pname:String>*/
}
if (var3812){
if (unlikely(varonce3813==NULL)) {
var3814 = NEW_core__NativeArray(2l, &type_core__NativeArray__core__String);
if (likely(varonce3815!=NULL)) {
var3816 = varonce3815;
} else {
var3817 = "(uint16_t)";
var3818 = core__abstract_text___CString___to_s_full(var3817, 10l, 10l);
var3816 = var3818;
varonce3815 = var3816;
}
((struct instance_core__NativeArray*)var3814)->values[0]=var3816;
} else {
var3814 = varonce3813;
varonce3813 = NULL;
}
{
var3819 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var3820 = ((val*(*)(val* self))(var3819->class->vft[COLOR_core__abstract_text__Object__to_s]))(var3819); /* to_s on <var3819:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var3814)->values[1]=var3820;
{
var3821 = ((val*(*)(val* self))(var3814->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var3814); /* native_to_s on <var3814:NativeArray[String]>*/
}
varonce3813 = var3814;
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 3037);
fatal_exit(1);
}
{
var3822 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var3821, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var3822); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce3823!=NULL)) {
var3824 = varonce3823;
} else {
var3825 = "to_i32";
var3826 = core__abstract_text___CString___to_s_full(var3825, 6l, 6l);
var3824 = var3826;
varonce3823 = var3824;
}
{
var3827 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var3824); /* == on <var_pname:String>*/
}
if (var3827){
if (unlikely(varonce3828==NULL)) {
var3829 = NEW_core__NativeArray(2l, &type_core__NativeArray__core__String);
if (likely(varonce3830!=NULL)) {
var3831 = varonce3830;
} else {
var3832 = "(int32_t)";
var3833 = core__abstract_text___CString___to_s_full(var3832, 9l, 9l);
var3831 = var3833;
varonce3830 = var3831;
}
((struct instance_core__NativeArray*)var3829)->values[0]=var3831;
} else {
var3829 = varonce3828;
varonce3828 = NULL;
}
{
var3834 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var3835 = ((val*(*)(val* self))(var3834->class->vft[COLOR_core__abstract_text__Object__to_s]))(var3834); /* to_s on <var3834:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var3829)->values[1]=var3835;
{
var3836 = ((val*(*)(val* self))(var3829->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var3829); /* native_to_s on <var3829:NativeArray[String]>*/
}
varonce3828 = var3829;
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 3040);
fatal_exit(1);
}
{
var3837 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var3836, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var3837); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce3838!=NULL)) {
var3839 = varonce3838;
} else {
var3840 = "to_f";
var3841 = core__abstract_text___CString___to_s_full(var3840, 4l, 4l);
var3839 = var3841;
varonce3838 = var3839;
}
{
var3842 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var3839); /* == on <var_pname:String>*/
}
if (var3842){
if (unlikely(varonce3843==NULL)) {
var3844 = NEW_core__NativeArray(2l, &type_core__NativeArray__core__String);
if (likely(varonce3845!=NULL)) {
var3846 = varonce3845;
} else {
var3847 = "(double)";
var3848 = core__abstract_text___CString___to_s_full(var3847, 8l, 8l);
var3846 = var3848;
varonce3845 = var3846;
}
((struct instance_core__NativeArray*)var3844)->values[0]=var3846;
} else {
var3844 = varonce3843;
varonce3843 = NULL;
}
{
var3849 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var3850 = ((val*(*)(val* self))(var3849->class->vft[COLOR_core__abstract_text__Object__to_s]))(var3849); /* to_s on <var3849:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var3844)->values[1]=var3850;
{
var3851 = ((val*(*)(val* self))(var3844->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var3844); /* native_to_s on <var3844:NativeArray[String]>*/
}
varonce3843 = var3844;
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 3043);
fatal_exit(1);
}
{
var3852 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var3851, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var3852); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce3853!=NULL)) {
var3854 = varonce3853;
} else {
var3855 = "&";
var3856 = core__abstract_text___CString___to_s_full(var3855, 1l, 1l);
var3854 = var3856;
varonce3853 = var3854;
}
{
var3857 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var3854); /* == on <var_pname:String>*/
}
if (var3857){
if (unlikely(varonce3858==NULL)) {
var3859 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce3860!=NULL)) {
var3861 = varonce3860;
} else {
var3862 = " & ";
var3863 = core__abstract_text___CString___to_s_full(var3862, 3l, 3l);
var3861 = var3863;
varonce3860 = var3861;
}
((struct instance_core__NativeArray*)var3859)->values[1]=var3861;
} else {
var3859 = varonce3858;
varonce3858 = NULL;
}
{
var3864 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var3865 = ((val*(*)(val* self))(var3864->class->vft[COLOR_core__abstract_text__Object__to_s]))(var3864); /* to_s on <var3864:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var3859)->values[0]=var3865;
{
var3866 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 1l);
}
{
var3867 = ((val*(*)(val* self))(var3866->class->vft[COLOR_core__abstract_text__Object__to_s]))(var3866); /* to_s on <var3866:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var3859)->values[2]=var3867;
{
var3868 = ((val*(*)(val* self))(var3859->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var3859); /* native_to_s on <var3859:NativeArray[String]>*/
}
varonce3858 = var3859;
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 3046);
fatal_exit(1);
}
{
var3869 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var3868, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var3869); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce3870!=NULL)) {
var3871 = varonce3870;
} else {
var3872 = "|";
var3873 = core__abstract_text___CString___to_s_full(var3872, 1l, 1l);
var3871 = var3873;
varonce3870 = var3871;
}
{
var3874 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var3871); /* == on <var_pname:String>*/
}
if (var3874){
if (unlikely(varonce3875==NULL)) {
var3876 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce3877!=NULL)) {
var3878 = varonce3877;
} else {
var3879 = " | ";
var3880 = core__abstract_text___CString___to_s_full(var3879, 3l, 3l);
var3878 = var3880;
varonce3877 = var3878;
}
((struct instance_core__NativeArray*)var3876)->values[1]=var3878;
} else {
var3876 = varonce3875;
varonce3875 = NULL;
}
{
var3881 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var3882 = ((val*(*)(val* self))(var3881->class->vft[COLOR_core__abstract_text__Object__to_s]))(var3881); /* to_s on <var3881:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var3876)->values[0]=var3882;
{
var3883 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 1l);
}
{
var3884 = ((val*(*)(val* self))(var3883->class->vft[COLOR_core__abstract_text__Object__to_s]))(var3883); /* to_s on <var3883:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var3876)->values[2]=var3884;
{
var3885 = ((val*(*)(val* self))(var3876->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var3876); /* native_to_s on <var3876:NativeArray[String]>*/
}
varonce3875 = var3876;
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 3049);
fatal_exit(1);
}
{
var3886 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var3885, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var3886); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce3887!=NULL)) {
var3888 = varonce3887;
} else {
var3889 = "^";
var3890 = core__abstract_text___CString___to_s_full(var3889, 1l, 1l);
var3888 = var3890;
varonce3887 = var3888;
}
{
var3891 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var3888); /* == on <var_pname:String>*/
}
if (var3891){
if (unlikely(varonce3892==NULL)) {
var3893 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce3894!=NULL)) {
var3895 = varonce3894;
} else {
var3896 = " ^ ";
var3897 = core__abstract_text___CString___to_s_full(var3896, 3l, 3l);
var3895 = var3897;
varonce3894 = var3895;
}
((struct instance_core__NativeArray*)var3893)->values[1]=var3895;
} else {
var3893 = varonce3892;
varonce3892 = NULL;
}
{
var3898 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var3899 = ((val*(*)(val* self))(var3898->class->vft[COLOR_core__abstract_text__Object__to_s]))(var3898); /* to_s on <var3898:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var3893)->values[0]=var3899;
{
var3900 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 1l);
}
{
var3901 = ((val*(*)(val* self))(var3900->class->vft[COLOR_core__abstract_text__Object__to_s]))(var3900); /* to_s on <var3900:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var3893)->values[2]=var3901;
{
var3902 = ((val*(*)(val* self))(var3893->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var3893); /* native_to_s on <var3893:NativeArray[String]>*/
}
varonce3892 = var3893;
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 3052);
fatal_exit(1);
}
{
var3903 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var3902, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var3903); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce3904!=NULL)) {
var3905 = varonce3904;
} else {
var3906 = "unary ~";
var3907 = core__abstract_text___CString___to_s_full(var3906, 7l, 7l);
var3905 = var3907;
varonce3904 = var3905;
}
{
var3908 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var3905); /* == on <var_pname:String>*/
}
if (var3908){
if (unlikely(varonce3909==NULL)) {
var3910 = NEW_core__NativeArray(2l, &type_core__NativeArray__core__String);
if (likely(varonce3911!=NULL)) {
var3912 = varonce3911;
} else {
var3913 = "~";
var3914 = core__abstract_text___CString___to_s_full(var3913, 1l, 1l);
var3912 = var3914;
varonce3911 = var3912;
}
((struct instance_core__NativeArray*)var3910)->values[0]=var3912;
} else {
var3910 = varonce3909;
varonce3909 = NULL;
}
{
var3915 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var3916 = ((val*(*)(val* self))(var3915->class->vft[COLOR_core__abstract_text__Object__to_s]))(var3915); /* to_s on <var3915:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var3910)->values[1]=var3916;
{
var3917 = ((val*(*)(val* self))(var3910->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var3910); /* native_to_s on <var3910:NativeArray[String]>*/
}
varonce3909 = var3910;
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 3055);
fatal_exit(1);
}
{
var3918 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var3917, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var3918); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
} else {
}
}
}
}
}
}
}
}
}
}
}
}
if (likely(varonce3919!=NULL)) {
var3920 = varonce3919;
} else {
var3921 = "exit";
var3922 = core__abstract_text___CString___to_s_full(var3921, 4l, 4l);
var3920 = var3922;
varonce3919 = var3920;
}
{
var3923 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var3920); /* == on <var_pname:String>*/
}
if (var3923){
if (unlikely(varonce3924==NULL)) {
var3925 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce3926!=NULL)) {
var3927 = varonce3926;
} else {
var3928 = "exit((int)";
var3929 = core__abstract_text___CString___to_s_full(var3928, 10l, 10l);
var3927 = var3929;
varonce3926 = var3927;
}
((struct instance_core__NativeArray*)var3925)->values[0]=var3927;
if (likely(varonce3930!=NULL)) {
var3931 = varonce3930;
} else {
var3932 = ");";
var3933 = core__abstract_text___CString___to_s_full(var3932, 2l, 2l);
var3931 = var3933;
varonce3930 = var3931;
}
((struct instance_core__NativeArray*)var3925)->values[2]=var3931;
} else {
var3925 = varonce3924;
varonce3924 = NULL;
}
{
var3934 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 1l);
}
{
var3935 = ((val*(*)(val* self))(var3934->class->vft[COLOR_core__abstract_text__Object__to_s]))(var3934); /* to_s on <var3934:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var3925)->values[1]=var3935;
{
var3936 = ((val*(*)(val* self))(var3925->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var3925); /* native_to_s on <var3925:NativeArray[String]>*/
}
varonce3924 = var3925;
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var3936); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce3937!=NULL)) {
var3938 = varonce3937;
} else {
var3939 = "sys";
var3940 = core__abstract_text___CString___to_s_full(var3939, 3l, 3l);
var3938 = var3940;
varonce3937 = var3938;
}
{
var3941 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var3938); /* == on <var_pname:String>*/
}
if (var3941){
if (likely(varonce3942!=NULL)) {
var3943 = varonce3942;
} else {
var3944 = "glob_sys";
var3945 = core__abstract_text___CString___to_s_full(var3944, 8l, 8l);
var3943 = var3945;
varonce3942 = var3943;
}
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 3063);
fatal_exit(1);
}
{
var3946 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var3943, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var3946); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce3947!=NULL)) {
var3948 = varonce3947;
} else {
var3949 = "object_id";
var3950 = core__abstract_text___CString___to_s_full(var3949, 9l, 9l);
var3948 = var3950;
varonce3947 = var3948;
}
{
var3951 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var3948); /* == on <var_pname:String>*/
}
if (var3951){
if (unlikely(varonce3952==NULL)) {
var3953 = NEW_core__NativeArray(2l, &type_core__NativeArray__core__String);
if (likely(varonce3954!=NULL)) {
var3955 = varonce3954;
} else {
var3956 = "(long)";
var3957 = core__abstract_text___CString___to_s_full(var3956, 6l, 6l);
var3955 = var3957;
varonce3954 = var3955;
}
((struct instance_core__NativeArray*)var3953)->values[0]=var3955;
} else {
var3953 = varonce3952;
varonce3952 = NULL;
}
{
var3958 = core___core__SequenceRead___Collection__first(var_arguments);
}
{
var3959 = ((val*(*)(val* self))(var3958->class->vft[COLOR_core__abstract_text__Object__to_s]))(var3958); /* to_s on <var3958:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var3953)->values[1]=var3959;
{
var3960 = ((val*(*)(val* self))(var3953->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var3953); /* native_to_s on <var3953:NativeArray[String]>*/
}
varonce3952 = var3953;
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 3066);
fatal_exit(1);
}
{
var3961 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var3960, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var3961); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce3962!=NULL)) {
var3963 = varonce3962;
} else {
var3964 = "is_same_type";
var3965 = core__abstract_text___CString___to_s_full(var3964, 12l, 12l);
var3963 = var3965;
varonce3962 = var3963;
}
{
var3966 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var3963); /* == on <var_pname:String>*/
}
if (var3966){
{
var3967 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var3968 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 1l);
}
{
var3969 = ((val*(*)(val* self, val* p0, val* p1))(var_v->class->vft[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor__is_same_type_test]))(var_v, var3967, var3968); /* is_same_type_test on <var_v:AbstractCompilerVisitor>*/
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var3969); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce3970!=NULL)) {
var3971 = varonce3970;
} else {
var3972 = "is_same_instance";
var3973 = core__abstract_text___CString___to_s_full(var3972, 16l, 16l);
var3971 = var3973;
varonce3970 = var3971;
}
{
var3974 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var3971); /* == on <var_pname:String>*/
}
if (var3974){
{
var3975 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 0l);
}
{
var3976 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 1l);
}
{
var3977 = ((val*(*)(val* self, val* p0, val* p1))(var_v->class->vft[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor__equal_test]))(var_v, var3975, var3976); /* equal_test on <var_v:AbstractCompilerVisitor>*/
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var3977); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce3978!=NULL)) {
var3979 = varonce3978;
} else {
var3980 = "output_class_name";
var3981 = core__abstract_text___CString___to_s_full(var3980, 17l, 17l);
var3979 = var3981;
varonce3978 = var3979;
}
{
var3982 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var3979); /* == on <var_pname:String>*/
}
if (var3982){
{
var3983 = core___core__SequenceRead___Collection__first(var_arguments);
}
{
var3984 = ((val*(*)(val* self, val* p0))(var_v->class->vft[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor__class_name_string]))(var_v, var3983); /* class_name_string on <var_v:AbstractCompilerVisitor>*/
}
var_nat = var3984;
if (unlikely(varonce3985==NULL)) {
var3986 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce3987!=NULL)) {
var3988 = varonce3987;
} else {
var3989 = "printf(\"%s\\n\", ";
var3990 = core__abstract_text___CString___to_s_full(var3989, 15l, 15l);
var3988 = var3990;
varonce3987 = var3988;
}
((struct instance_core__NativeArray*)var3986)->values[0]=var3988;
if (likely(varonce3991!=NULL)) {
var3992 = varonce3991;
} else {
var3993 = ");";
var3994 = core__abstract_text___CString___to_s_full(var3993, 2l, 2l);
var3992 = var3994;
varonce3991 = var3992;
}
((struct instance_core__NativeArray*)var3986)->values[2]=var3992;
} else {
var3986 = varonce3985;
varonce3985 = NULL;
}
((struct instance_core__NativeArray*)var3986)->values[1]=var_nat;
{
var3995 = ((val*(*)(val* self))(var3986->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var3986); /* native_to_s on <var3986:NativeArray[String]>*/
}
varonce3985 = var3986;
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var3995); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce3996!=NULL)) {
var3997 = varonce3996;
} else {
var3998 = "native_class_name";
var3999 = core__abstract_text___CString___to_s_full(var3998, 17l, 17l);
var3997 = var3999;
varonce3996 = var3997;
}
{
var4000 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var3997); /* == on <var_pname:String>*/
}
if (var4000){
{
var4001 = core___core__SequenceRead___Collection__first(var_arguments);
}
{
var4002 = ((val*(*)(val* self, val* p0))(var_v->class->vft[COLOR_nitc__abstract_compiler__AbstractCompilerVisitor__class_name_string]))(var_v, var4001); /* class_name_string on <var_v:AbstractCompilerVisitor>*/
}
var_nat4003 = var4002;
if (unlikely(varonce4004==NULL)) {
var4005 = NEW_core__NativeArray(2l, &type_core__NativeArray__core__String);
if (likely(varonce4006!=NULL)) {
var4007 = varonce4006;
} else {
var4008 = "(char*)";
var4009 = core__abstract_text___CString___to_s_full(var4008, 7l, 7l);
var4007 = var4009;
varonce4006 = var4007;
}
((struct instance_core__NativeArray*)var4005)->values[0]=var4007;
} else {
var4005 = varonce4004;
varonce4004 = NULL;
}
((struct instance_core__NativeArray*)var4005)->values[1]=var_nat4003;
{
var4010 = ((val*(*)(val* self))(var4005->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var4005); /* native_to_s on <var4005:NativeArray[String]>*/
}
varonce4004 = var4005;
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 3080);
fatal_exit(1);
}
{
var4011 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var4010, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var4011); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce4012!=NULL)) {
var4013 = varonce4012;
} else {
var4014 = "force_garbage_collection";
var4015 = core__abstract_text___CString___to_s_full(var4014, 24l, 24l);
var4013 = var4015;
varonce4012 = var4013;
}
{
var4016 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var4013); /* == on <var_pname:String>*/
}
if (var4016){
if (likely(varonce4017!=NULL)) {
var4018 = varonce4017;
} else {
var4019 = "nit_gcollect();";
var4020 = core__abstract_text___CString___to_s_full(var4019, 15l, 15l);
var4018 = var4020;
varonce4017 = var4018;
}
{
nitc___nitc__AbstractCompilerVisitor___add(var_v, var4018); /* Direct call abstract_compiler#AbstractCompilerVisitor#add on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce4021!=NULL)) {
var4022 = varonce4021;
} else {
var4023 = "native_argc";
var4024 = core__abstract_text___CString___to_s_full(var4023, 11l, 11l);
var4022 = var4024;
varonce4021 = var4022;
}
{
var4025 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var4022); /* == on <var_pname:String>*/
}
if (var4025){
if (likely(varonce4026!=NULL)) {
var4027 = varonce4026;
} else {
var4028 = "glob_argc";
var4029 = core__abstract_text___CString___to_s_full(var4028, 9l, 9l);
var4027 = var4029;
varonce4026 = var4027;
}
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 3086);
fatal_exit(1);
}
{
var4030 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var4027, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var4030); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
if (likely(varonce4031!=NULL)) {
var4032 = varonce4031;
} else {
var4033 = "native_argv";
var4034 = core__abstract_text___CString___to_s_full(var4033, 11l, 11l);
var4032 = var4034;
varonce4031 = var4032;
}
{
var4035 = ((short int(*)(val* self, val* p0))(var_pname->class->vft[COLOR_core__kernel__Object___61d_61d]))(var_pname, var4032); /* == on <var_pname:String>*/
}
if (var4035){
if (unlikely(varonce4036==NULL)) {
var4037 = NEW_core__NativeArray(3l, &type_core__NativeArray__core__String);
if (likely(varonce4038!=NULL)) {
var4039 = varonce4038;
} else {
var4040 = "glob_argv[";
var4041 = core__abstract_text___CString___to_s_full(var4040, 10l, 10l);
var4039 = var4041;
varonce4038 = var4039;
}
((struct instance_core__NativeArray*)var4037)->values[0]=var4039;
if (likely(varonce4042!=NULL)) {
var4043 = varonce4042;
} else {
var4044 = "]";
var4045 = core__abstract_text___CString___to_s_full(var4044, 1l, 1l);
var4043 = var4045;
varonce4042 = var4043;
}
((struct instance_core__NativeArray*)var4037)->values[2]=var4043;
} else {
var4037 = varonce4036;
varonce4036 = NULL;
}
{
var4046 = core___core__Array___core__abstract_collection__SequenceRead___91d_93d(var_arguments, 1l);
}
{
var4047 = ((val*(*)(val* self))(var4046->class->vft[COLOR_core__abstract_text__Object__to_s]))(var4046); /* to_s on <var4046:nullable Object(RuntimeVariable)>*/
}
((struct instance_core__NativeArray*)var4037)->values[1]=var4047;
{
var4048 = ((val*(*)(val* self))(var4037->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var4037); /* native_to_s on <var4037:NativeArray[String]>*/
}
varonce4036 = var4037;
if (unlikely(var_ret == NULL)) {
PRINT_ERROR("Runtime error: %s", "Cast failed");
PRINT_ERROR(" (%s:%d)\n", FILE_nitc__abstract_compiler, 3089);
fatal_exit(1);
}
{
var4049 = nitc___nitc__AbstractCompilerVisitor___new_expr(var_v, var4048, var_ret);
}
{
nitc___nitc__AbstractCompilerVisitor___ret(var_v, var4049); /* Direct call abstract_compiler#AbstractCompilerVisitor#ret on <var_v:AbstractCompilerVisitor>*/
}
var = 1;
goto RET_LABEL;
} else {
}
}
}
}
}
}
}
}
}
}
var = 0;
goto RET_LABEL;
RET_LABEL:;
return var;
}
