#include "nitcc__nitcc_parser_gen.sep.0.h"
/* method nitcc_parser_gen$Sys$main for (self: Sys) */
void nitcc__nitcc_parser_gen___core__Sys___main(val* self) {
val* var /* : Gram */;
val* var_g /* var g: Gram */;
val* var1 /* : Production */;
static val* varonce;
val* var2 /* : String */;
char* var3 /* : CString */;
val* var4 /* : String */;
val* var5 /* : nullable Int */;
val* var6 /* : nullable Int */;
val* var7 /* : nullable Bool */;
val* var8 /* : nullable Bool */;
val* var_p_gr /* var p_gr: Production */;
val* var9 /* : Production */;
static val* varonce10;
val* var11 /* : String */;
char* var12 /* : CString */;
val* var13 /* : String */;
val* var14 /* : nullable Int */;
val* var15 /* : nullable Int */;
val* var16 /* : nullable Bool */;
val* var17 /* : nullable Bool */;
val* var_p_lex /* var p_lex: Production */;
val* var18 /* : Production */;
static val* varonce19;
val* var20 /* : String */;
char* var21 /* : CString */;
val* var22 /* : String */;
val* var23 /* : nullable Int */;
val* var24 /* : nullable Int */;
val* var25 /* : nullable Bool */;
val* var26 /* : nullable Bool */;
val* var_p_exprs /* var p_exprs: Production */;
val* var27 /* : Production */;
static val* varonce28;
val* var29 /* : String */;
char* var30 /* : CString */;
val* var31 /* : String */;
val* var32 /* : nullable Int */;
val* var33 /* : nullable Int */;
val* var34 /* : nullable Bool */;
val* var35 /* : nullable Bool */;
val* var_p_expr /* var p_expr: Production */;
val* var36 /* : Production */;
static val* varonce37;
val* var38 /* : String */;
char* var39 /* : CString */;
val* var40 /* : String */;
val* var41 /* : nullable Int */;
val* var42 /* : nullable Int */;
val* var43 /* : nullable Bool */;
val* var44 /* : nullable Bool */;
val* var_p_re /* var p_re: Production */;
val* var45 /* : Production */;
static val* varonce46;
val* var47 /* : String */;
char* var48 /* : CString */;
val* var49 /* : String */;
val* var50 /* : nullable Int */;
val* var51 /* : nullable Int */;
val* var52 /* : nullable Bool */;
val* var53 /* : nullable Bool */;
val* var_p_re1 /* var p_re1: Production */;
val* var54 /* : Production */;
static val* varonce55;
val* var56 /* : String */;
char* var57 /* : CString */;
val* var58 /* : String */;
val* var59 /* : nullable Int */;
val* var60 /* : nullable Int */;
val* var61 /* : nullable Bool */;
val* var62 /* : nullable Bool */;
val* var_p_re2 /* var p_re2: Production */;
val* var63 /* : Production */;
static val* varonce64;
val* var65 /* : String */;
char* var66 /* : CString */;
val* var67 /* : String */;
val* var68 /* : nullable Int */;
val* var69 /* : nullable Int */;
val* var70 /* : nullable Bool */;
val* var71 /* : nullable Bool */;
val* var_p_re3 /* var p_re3: Production */;
val* var72 /* : Production */;
static val* varonce73;
val* var74 /* : String */;
char* var75 /* : CString */;
val* var76 /* : String */;
val* var77 /* : nullable Int */;
val* var78 /* : nullable Int */;
val* var79 /* : nullable Bool */;
val* var80 /* : nullable Bool */;
val* var_p_text /* var p_text: Production */;
val* var81 /* : Production */;
static val* varonce82;
val* var83 /* : String */;
char* var84 /* : CString */;
val* var85 /* : String */;
val* var86 /* : nullable Int */;
val* var87 /* : nullable Int */;
val* var88 /* : nullable Bool */;
val* var89 /* : nullable Bool */;
val* var_p_par /* var p_par: Production */;
val* var90 /* : Production */;
static val* varonce91;
val* var92 /* : String */;
char* var93 /* : CString */;
val* var94 /* : String */;
val* var95 /* : nullable Int */;
val* var96 /* : nullable Int */;
val* var97 /* : nullable Bool */;
val* var98 /* : nullable Bool */;
val* var_p_ign /* var p_ign: Production */;
val* var99 /* : Production */;
static val* varonce100;
val* var101 /* : String */;
char* var102 /* : CString */;
val* var103 /* : String */;
val* var104 /* : nullable Int */;
val* var105 /* : nullable Int */;
val* var106 /* : nullable Bool */;
val* var107 /* : nullable Bool */;
val* var_p_rej /* var p_rej: Production */;
val* var108 /* : Production */;
static val* varonce109;
val* var110 /* : String */;
char* var111 /* : CString */;
val* var112 /* : String */;
val* var113 /* : nullable Int */;
val* var114 /* : nullable Int */;
val* var115 /* : nullable Bool */;
val* var116 /* : nullable Bool */;
val* var_p_prods /* var p_prods: Production */;
val* var117 /* : Production */;
static val* varonce118;
val* var119 /* : String */;
char* var120 /* : CString */;
val* var121 /* : String */;
val* var122 /* : nullable Int */;
val* var123 /* : nullable Int */;
val* var124 /* : nullable Bool */;
val* var125 /* : nullable Bool */;
val* var_p_prod /* var p_prod: Production */;
val* var126 /* : Production */;
static val* varonce127;
val* var128 /* : String */;
char* var129 /* : CString */;
val* var130 /* : String */;
val* var131 /* : nullable Int */;
val* var132 /* : nullable Int */;
val* var133 /* : nullable Bool */;
val* var134 /* : nullable Bool */;
val* var_p_ptrans_o /* var p_ptrans_o: Production */;
val* var135 /* : Production */;
static val* varonce136;
val* var137 /* : String */;
char* var138 /* : CString */;
val* var139 /* : String */;
val* var140 /* : nullable Int */;
val* var141 /* : nullable Int */;
val* var142 /* : nullable Bool */;
val* var143 /* : nullable Bool */;
val* var_p_alts /* var p_alts: Production */;
val* var144 /* : Production */;
static val* varonce145;
val* var146 /* : String */;
char* var147 /* : CString */;
val* var148 /* : String */;
val* var149 /* : nullable Int */;
val* var150 /* : nullable Int */;
val* var151 /* : nullable Bool */;
val* var152 /* : nullable Bool */;
val* var_p_alt /* var p_alt: Production */;
val* var153 /* : Production */;
static val* varonce154;
val* var155 /* : String */;
char* var156 /* : CString */;
val* var157 /* : String */;
val* var158 /* : nullable Int */;
val* var159 /* : nullable Int */;
val* var160 /* : nullable Bool */;
val* var161 /* : nullable Bool */;
val* var_p_altid_o /* var p_altid_o: Production */;
val* var162 /* : Production */;
static val* varonce163;
val* var164 /* : String */;
char* var165 /* : CString */;
val* var166 /* : String */;
val* var167 /* : nullable Int */;
val* var168 /* : nullable Int */;
val* var169 /* : nullable Bool */;
val* var170 /* : nullable Bool */;
val* var_p_altid /* var p_altid: Production */;
val* var171 /* : Production */;
static val* varonce172;
val* var173 /* : String */;
char* var174 /* : CString */;
val* var175 /* : String */;
val* var176 /* : nullable Int */;
val* var177 /* : nullable Int */;
val* var178 /* : nullable Bool */;
val* var179 /* : nullable Bool */;
val* var_p_elems /* var p_elems: Production */;
val* var180 /* : Production */;
static val* varonce181;
val* var182 /* : String */;
char* var183 /* : CString */;
val* var184 /* : String */;
val* var185 /* : nullable Int */;
val* var186 /* : nullable Int */;
val* var187 /* : nullable Bool */;
val* var188 /* : nullable Bool */;
val* var_p_elem_list /* var p_elem_list: Production */;
val* var189 /* : Production */;
static val* varonce190;
val* var191 /* : String */;
char* var192 /* : CString */;
val* var193 /* : String */;
val* var194 /* : nullable Int */;
val* var195 /* : nullable Int */;
val* var196 /* : nullable Bool */;
val* var197 /* : nullable Bool */;
val* var_p_elem /* var p_elem: Production */;
val* var198 /* : Production */;
static val* varonce199;
val* var200 /* : String */;
char* var201 /* : CString */;
val* var202 /* : String */;
val* var203 /* : nullable Int */;
val* var204 /* : nullable Int */;
val* var205 /* : nullable Bool */;
val* var206 /* : nullable Bool */;
val* var_p_pri /* var p_pri: Production */;
val* var207 /* : Array[Production] */;
val* var208 /* : Array[Production] */;
val* var_ /* var : Array[Production] */;
val* var209 /* : Array[Production] */;
val* var210 /* : Production */;
static val* varonce211;
val* var212 /* : String */;
char* var213 /* : CString */;
val* var214 /* : String */;
val* var215 /* : nullable Int */;
val* var216 /* : nullable Int */;
val* var217 /* : nullable Bool */;
val* var218 /* : nullable Bool */;
val* var219 /* : Array[Production] */;
val* var220 /* : Production */;
static val* varonce221;
val* var222 /* : String */;
char* var223 /* : CString */;
val* var224 /* : String */;
val* var225 /* : nullable Int */;
val* var226 /* : nullable Int */;
val* var227 /* : nullable Bool */;
val* var228 /* : nullable Bool */;
val* var229 /* : Array[Production] */;
val* var230 /* : Production */;
static val* varonce231;
val* var232 /* : String */;
char* var233 /* : CString */;
val* var234 /* : String */;
val* var235 /* : nullable Int */;
val* var236 /* : nullable Int */;
val* var237 /* : nullable Bool */;
val* var238 /* : nullable Bool */;
val* var239 /* : Array[Production] */;
val* var240 /* : Production */;
static val* varonce241;
val* var242 /* : String */;
char* var243 /* : CString */;
val* var244 /* : String */;
val* var245 /* : nullable Int */;
val* var246 /* : nullable Int */;
val* var247 /* : nullable Bool */;
val* var248 /* : nullable Bool */;
val* var249 /* : Token */;
static val* varonce250;
val* var251 /* : String */;
char* var252 /* : CString */;
val* var253 /* : String */;
val* var254 /* : nullable Int */;
val* var255 /* : nullable Int */;
val* var256 /* : nullable Bool */;
val* var257 /* : nullable Bool */;
val* var_t_opar /* var t_opar: Token */;
val* var258 /* : Token */;
static val* varonce259;
val* var260 /* : String */;
char* var261 /* : CString */;
val* var262 /* : String */;
val* var263 /* : nullable Int */;
val* var264 /* : nullable Int */;
val* var265 /* : nullable Bool */;
val* var266 /* : nullable Bool */;
val* var_t_cpar /* var t_cpar: Token */;
val* var267 /* : Token */;
static val* varonce268;
val* var269 /* : String */;
char* var270 /* : CString */;
val* var271 /* : String */;
val* var272 /* : nullable Int */;
val* var273 /* : nullable Int */;
val* var274 /* : nullable Bool */;
val* var275 /* : nullable Bool */;
val* var_t_ocur /* var t_ocur: Token */;
val* var276 /* : Token */;
static val* varonce277;
val* var278 /* : String */;
char* var279 /* : CString */;
val* var280 /* : String */;
val* var281 /* : nullable Int */;
val* var282 /* : nullable Int */;
val* var283 /* : nullable Bool */;
val* var284 /* : nullable Bool */;
val* var_t_ccur /* var t_ccur: Token */;
val* var285 /* : Token */;
static val* varonce286;
val* var287 /* : String */;
char* var288 /* : CString */;
val* var289 /* : String */;
val* var290 /* : nullable Int */;
val* var291 /* : nullable Int */;
val* var292 /* : nullable Bool */;
val* var293 /* : nullable Bool */;
val* var_t_pipe /* var t_pipe: Token */;
val* var294 /* : Token */;
static val* varonce295;
val* var296 /* : String */;
char* var297 /* : CString */;
val* var298 /* : String */;
val* var299 /* : nullable Int */;
val* var300 /* : nullable Int */;
val* var301 /* : nullable Bool */;
val* var302 /* : nullable Bool */;
val* var_t_star /* var t_star: Token */;
val* var303 /* : Token */;
static val* varonce304;
val* var305 /* : String */;
char* var306 /* : CString */;
val* var307 /* : String */;
val* var308 /* : nullable Int */;
val* var309 /* : nullable Int */;
val* var310 /* : nullable Bool */;
val* var311 /* : nullable Bool */;
val* var_t_ques /* var t_ques: Token */;
val* var312 /* : Token */;
static val* varonce313;
val* var314 /* : String */;
char* var315 /* : CString */;
val* var316 /* : String */;
val* var317 /* : nullable Int */;
val* var318 /* : nullable Int */;
val* var319 /* : nullable Bool */;
val* var320 /* : nullable Bool */;
val* var_t_plus /* var t_plus: Token */;
val* var321 /* : Token */;
static val* varonce322;
val* var323 /* : String */;
char* var324 /* : CString */;
val* var325 /* : String */;
val* var326 /* : nullable Int */;
val* var327 /* : nullable Int */;
val* var328 /* : nullable Bool */;
val* var329 /* : nullable Bool */;
val* var_t_minus /* var t_minus: Token */;
val* var330 /* : Token */;
static val* varonce331;
val* var332 /* : String */;
char* var333 /* : CString */;
val* var334 /* : String */;
val* var335 /* : nullable Int */;
val* var336 /* : nullable Int */;
val* var337 /* : nullable Bool */;
val* var338 /* : nullable Bool */;
val* var_t_comma /* var t_comma: Token */;
val* var339 /* : Token */;
static val* varonce340;
val* var341 /* : String */;
char* var342 /* : CString */;
val* var343 /* : String */;
val* var344 /* : nullable Int */;
val* var345 /* : nullable Int */;
val* var346 /* : nullable Bool */;
val* var347 /* : nullable Bool */;
val* var_t_colo /* var t_colo: Token */;
val* var348 /* : Token */;
static val* varonce349;
val* var350 /* : String */;
char* var351 /* : CString */;
val* var352 /* : String */;
val* var353 /* : nullable Int */;
val* var354 /* : nullable Int */;
val* var355 /* : nullable Bool */;
val* var356 /* : nullable Bool */;
val* var_t_semi /* var t_semi: Token */;
val* var357 /* : Token */;
static val* varonce358;
val* var359 /* : String */;
char* var360 /* : CString */;
val* var361 /* : String */;
val* var362 /* : nullable Int */;
val* var363 /* : nullable Int */;
val* var364 /* : nullable Bool */;
val* var365 /* : nullable Bool */;
val* var_t_dot /* var t_dot: Token */;
val* var366 /* : Token */;
static val* varonce367;
val* var368 /* : String */;
char* var369 /* : CString */;
val* var370 /* : String */;
val* var371 /* : nullable Int */;
val* var372 /* : nullable Int */;
val* var373 /* : nullable Bool */;
val* var374 /* : nullable Bool */;
val* var_t_eq /* var t_eq: Token */;
val* var375 /* : Token */;
static val* varonce376;
val* var377 /* : String */;
char* var378 /* : CString */;
val* var379 /* : String */;
val* var380 /* : nullable Int */;
val* var381 /* : nullable Int */;
val* var382 /* : nullable Bool */;
val* var383 /* : nullable Bool */;
val* var_t_arrow /* var t_arrow: Token */;
val* var384 /* : Token */;
static val* varonce385;
val* var386 /* : String */;
char* var387 /* : CString */;
val* var388 /* : String */;
val* var389 /* : nullable Int */;
val* var390 /* : nullable Int */;
val* var391 /* : nullable Bool */;
val* var392 /* : nullable Bool */;
val* var_t_str /* var t_str: Token */;
val* var393 /* : Token */;
static val* varonce394;
val* var395 /* : String */;
char* var396 /* : CString */;
val* var397 /* : String */;
val* var398 /* : nullable Int */;
val* var399 /* : nullable Int */;
val* var400 /* : nullable Bool */;
val* var401 /* : nullable Bool */;
val* var_t_id /* var t_id: Token */;
val* var402 /* : Token */;
static val* varonce403;
val* var404 /* : String */;
char* var405 /* : CString */;
val* var406 /* : String */;
val* var407 /* : nullable Int */;
val* var408 /* : nullable Int */;
val* var409 /* : nullable Bool */;
val* var410 /* : nullable Bool */;
val* var_t_kw /* var t_kw: Token */;
val* var411 /* : Token */;
static val* varonce412;
val* var413 /* : String */;
char* var414 /* : CString */;
val* var415 /* : String */;
val* var416 /* : nullable Int */;
val* var417 /* : nullable Int */;
val* var418 /* : nullable Bool */;
val* var419 /* : nullable Bool */;
val* var_t_any /* var t_any: Token */;
val* var420 /* : Token */;
static val* varonce421;
val* var422 /* : String */;
char* var423 /* : CString */;
val* var424 /* : String */;
val* var425 /* : nullable Int */;
val* var426 /* : nullable Int */;
val* var427 /* : nullable Bool */;
val* var428 /* : nullable Bool */;
val* var_t_end /* var t_end: Token */;
val* var429 /* : Token */;
static val* varonce430;
val* var431 /* : String */;
char* var432 /* : CString */;
val* var433 /* : String */;
val* var434 /* : nullable Int */;
val* var435 /* : nullable Int */;
val* var436 /* : nullable Bool */;
val* var437 /* : nullable Bool */;
val* var_t_and /* var t_and: Token */;
val* var438 /* : Token */;
static val* varonce439;
val* var440 /* : String */;
char* var441 /* : CString */;
val* var442 /* : String */;
val* var443 /* : nullable Int */;
val* var444 /* : nullable Int */;
val* var445 /* : nullable Bool */;
val* var446 /* : nullable Bool */;
val* var_t_except /* var t_except: Token */;
val* var447 /* : Token */;
static val* varonce448;
val* var449 /* : String */;
char* var450 /* : CString */;
val* var451 /* : String */;
val* var452 /* : nullable Int */;
val* var453 /* : nullable Int */;
val* var454 /* : nullable Bool */;
val* var455 /* : nullable Bool */;
val* var_t_shortest /* var t_shortest: Token */;
val* var456 /* : Token */;
static val* varonce457;
val* var458 /* : String */;
char* var459 /* : CString */;
val* var460 /* : String */;
val* var461 /* : nullable Int */;
val* var462 /* : nullable Int */;
val* var463 /* : nullable Bool */;
val* var464 /* : nullable Bool */;
val* var_t_longest /* var t_longest: Token */;
val* var465 /* : Token */;
static val* varonce466;
val* var467 /* : String */;
char* var468 /* : CString */;
val* var469 /* : String */;
val* var470 /* : nullable Int */;
val* var471 /* : nullable Int */;
val* var472 /* : nullable Bool */;
val* var473 /* : nullable Bool */;
val* var_t_prefixes /* var t_prefixes: Token */;
val* var474 /* : Token */;
static val* varonce475;
val* var476 /* : String */;
char* var477 /* : CString */;
val* var478 /* : String */;
val* var479 /* : nullable Int */;
val* var480 /* : nullable Int */;
val* var481 /* : nullable Bool */;
val* var482 /* : nullable Bool */;
val* var_t_ch_dec /* var t_ch_dec: Token */;
val* var483 /* : Token */;
static val* varonce484;
val* var485 /* : String */;
char* var486 /* : CString */;
val* var487 /* : String */;
val* var488 /* : nullable Int */;
val* var489 /* : nullable Int */;
val* var490 /* : nullable Bool */;
val* var491 /* : nullable Bool */;
val* var_t_ch_hex /* var t_ch_hex: Token */;
val* var492 /* : Array[Token] */;
val* var493 /* : Array[Token] */;
val* var_494 /* var : Array[Token] */;
static val* varonce495;
val* var496 /* : String */;
char* var497 /* : CString */;
val* var498 /* : String */;
val* var499 /* : nullable Int */;
val* var500 /* : nullable Int */;
val* var501 /* : nullable Bool */;
val* var502 /* : nullable Bool */;
val* var503 /* : Array[Element] */;
val* var504 /* : NativeArray[Element] */;
val* var505 /* : Alternative */;
static val* varonce506;
val* var507 /* : String */;
char* var508 /* : CString */;
val* var509 /* : String */;
val* var510 /* : nullable Int */;
val* var511 /* : nullable Int */;
val* var512 /* : nullable Bool */;
val* var513 /* : nullable Bool */;
val* var514 /* : Array[Element] */;
val* var515 /* : NativeArray[Element] */;
val* var516 /* : Alternative */;
static val* varonce517;
val* var518 /* : String */;
char* var519 /* : CString */;
val* var520 /* : String */;
val* var521 /* : nullable Int */;
val* var522 /* : nullable Int */;
val* var523 /* : nullable Bool */;
val* var524 /* : nullable Bool */;
val* var525 /* : Array[Element] */;
val* var526 /* : NativeArray[Element] */;
val* var527 /* : Alternative */;
static val* varonce528;
val* var529 /* : String */;
char* var530 /* : CString */;
val* var531 /* : String */;
val* var532 /* : nullable Int */;
val* var533 /* : nullable Int */;
val* var534 /* : nullable Bool */;
val* var535 /* : nullable Bool */;
val* var536 /* : Alternative */;
static val* varonce537;
val* var538 /* : String */;
char* var539 /* : CString */;
val* var540 /* : String */;
val* var541 /* : nullable Int */;
val* var542 /* : nullable Int */;
val* var543 /* : nullable Bool */;
val* var544 /* : nullable Bool */;
val* var545 /* : Array[Element] */;
val* var546 /* : NativeArray[Element] */;
val* var547 /* : Alternative */;
static val* varonce548;
val* var549 /* : String */;
char* var550 /* : CString */;
val* var551 /* : String */;
val* var552 /* : nullable Int */;
val* var553 /* : nullable Int */;
val* var554 /* : nullable Bool */;
val* var555 /* : nullable Bool */;
val* var556 /* : Array[Element] */;
val* var557 /* : NativeArray[Element] */;
val* var558 /* : Alternative */;
static val* varonce559;
val* var560 /* : String */;
char* var561 /* : CString */;
val* var562 /* : String */;
val* var563 /* : nullable Int */;
val* var564 /* : nullable Int */;
val* var565 /* : nullable Bool */;
val* var566 /* : nullable Bool */;
val* var567 /* : Array[Element] */;
val* var568 /* : NativeArray[Element] */;
val* var569 /* : Alternative */;
static val* varonce570;
val* var571 /* : String */;
char* var572 /* : CString */;
val* var573 /* : String */;
val* var574 /* : nullable Int */;
val* var575 /* : nullable Int */;
val* var576 /* : nullable Bool */;
val* var577 /* : nullable Bool */;
val* var578 /* : Array[Element] */;
val* var579 /* : NativeArray[Element] */;
val* var580 /* : Alternative */;
static val* varonce581;
val* var582 /* : String */;
char* var583 /* : CString */;
val* var584 /* : String */;
val* var585 /* : nullable Int */;
val* var586 /* : nullable Int */;
val* var587 /* : nullable Bool */;
val* var588 /* : nullable Bool */;
val* var589 /* : Array[Element] */;
val* var590 /* : NativeArray[Element] */;
val* var591 /* : Alternative */;
static val* varonce592;
val* var593 /* : String */;
char* var594 /* : CString */;
val* var595 /* : String */;
val* var596 /* : nullable Int */;
val* var597 /* : nullable Int */;
val* var598 /* : nullable Bool */;
val* var599 /* : nullable Bool */;
val* var600 /* : Array[Element] */;
val* var601 /* : NativeArray[Element] */;
val* var602 /* : Alternative */;
static val* varonce603;
val* var604 /* : String */;
char* var605 /* : CString */;
val* var606 /* : String */;
val* var607 /* : nullable Int */;
val* var608 /* : nullable Int */;
val* var609 /* : nullable Bool */;
val* var610 /* : nullable Bool */;
val* var611 /* : Array[Element] */;
val* var612 /* : NativeArray[Element] */;
val* var613 /* : Alternative */;
static val* varonce614;
val* var615 /* : String */;
char* var616 /* : CString */;
val* var617 /* : String */;
val* var618 /* : nullable Int */;
val* var619 /* : nullable Int */;
val* var620 /* : nullable Bool */;
val* var621 /* : nullable Bool */;
val* var622 /* : Array[Element] */;
val* var623 /* : NativeArray[Element] */;
val* var624 /* : Alternative */;
static val* varonce625;
val* var626 /* : String */;
char* var627 /* : CString */;
val* var628 /* : String */;
val* var629 /* : nullable Int */;
val* var630 /* : nullable Int */;
val* var631 /* : nullable Bool */;
val* var632 /* : nullable Bool */;
val* var633 /* : Array[Element] */;
val* var634 /* : NativeArray[Element] */;
val* var635 /* : Alternative */;
static val* varonce636;
val* var637 /* : String */;
char* var638 /* : CString */;
val* var639 /* : String */;
val* var640 /* : nullable Int */;
val* var641 /* : nullable Int */;
val* var642 /* : nullable Bool */;
val* var643 /* : nullable Bool */;
val* var644 /* : Array[Element] */;
val* var645 /* : NativeArray[Element] */;
val* var646 /* : Alternative */;
static val* varonce647;
val* var648 /* : String */;
char* var649 /* : CString */;
val* var650 /* : String */;
val* var651 /* : nullable Int */;
val* var652 /* : nullable Int */;
val* var653 /* : nullable Bool */;
val* var654 /* : nullable Bool */;
val* var655 /* : Array[Element] */;
val* var656 /* : NativeArray[Element] */;
val* var657 /* : Alternative */;
static val* varonce658;
val* var659 /* : String */;
char* var660 /* : CString */;
val* var661 /* : String */;
val* var662 /* : nullable Int */;
val* var663 /* : nullable Int */;
val* var664 /* : nullable Bool */;
val* var665 /* : nullable Bool */;
val* var666 /* : Array[Element] */;
val* var667 /* : NativeArray[Element] */;
val* var668 /* : Alternative */;
static val* varonce669;
val* var670 /* : String */;
char* var671 /* : CString */;
val* var672 /* : String */;
val* var673 /* : nullable Int */;
val* var674 /* : nullable Int */;
val* var675 /* : nullable Bool */;
val* var676 /* : nullable Bool */;
val* var677 /* : Array[Element] */;
val* var678 /* : NativeArray[Element] */;
val* var679 /* : Alternative */;
static val* varonce680;
val* var681 /* : String */;
char* var682 /* : CString */;
val* var683 /* : String */;
val* var684 /* : nullable Int */;
val* var685 /* : nullable Int */;
val* var686 /* : nullable Bool */;
val* var687 /* : nullable Bool */;
val* var688 /* : Array[Element] */;
val* var689 /* : NativeArray[Element] */;
val* var690 /* : Alternative */;
static val* varonce691;
val* var692 /* : String */;
char* var693 /* : CString */;
val* var694 /* : String */;
val* var695 /* : nullable Int */;
val* var696 /* : nullable Int */;
val* var697 /* : nullable Bool */;
val* var698 /* : nullable Bool */;
val* var699 /* : Array[Element] */;
val* var700 /* : NativeArray[Element] */;
val* var701 /* : Alternative */;
static val* varonce702;
val* var703 /* : String */;
char* var704 /* : CString */;
val* var705 /* : String */;
val* var706 /* : nullable Int */;
val* var707 /* : nullable Int */;
val* var708 /* : nullable Bool */;
val* var709 /* : nullable Bool */;
val* var710 /* : Array[Element] */;
val* var711 /* : NativeArray[Element] */;
val* var712 /* : Alternative */;
static val* varonce713;
val* var714 /* : String */;
char* var715 /* : CString */;
val* var716 /* : String */;
val* var717 /* : nullable Int */;
val* var718 /* : nullable Int */;
val* var719 /* : nullable Bool */;
val* var720 /* : nullable Bool */;
val* var721 /* : Array[Element] */;
val* var722 /* : NativeArray[Element] */;
val* var723 /* : Alternative */;
static val* varonce724;
val* var725 /* : String */;
char* var726 /* : CString */;
val* var727 /* : String */;
val* var728 /* : nullable Int */;
val* var729 /* : nullable Int */;
val* var730 /* : nullable Bool */;
val* var731 /* : nullable Bool */;
val* var732 /* : Array[Element] */;
val* var733 /* : NativeArray[Element] */;
val* var734 /* : Alternative */;
static val* varonce735;
val* var736 /* : String */;
char* var737 /* : CString */;
val* var738 /* : String */;
val* var739 /* : nullable Int */;
val* var740 /* : nullable Int */;
val* var741 /* : nullable Bool */;
val* var742 /* : nullable Bool */;
val* var743 /* : Array[Element] */;
val* var744 /* : NativeArray[Element] */;
val* var745 /* : Alternative */;
static val* varonce746;
val* var747 /* : String */;
char* var748 /* : CString */;
val* var749 /* : String */;
val* var750 /* : nullable Int */;
val* var751 /* : nullable Int */;
val* var752 /* : nullable Bool */;
val* var753 /* : nullable Bool */;
val* var754 /* : Array[Element] */;
val* var755 /* : NativeArray[Element] */;
val* var756 /* : Alternative */;
static val* varonce757;
val* var758 /* : String */;
char* var759 /* : CString */;
val* var760 /* : String */;
val* var761 /* : nullable Int */;
val* var762 /* : nullable Int */;
val* var763 /* : nullable Bool */;
val* var764 /* : nullable Bool */;
val* var765 /* : Array[Element] */;
val* var766 /* : NativeArray[Element] */;
val* var767 /* : Alternative */;
static val* varonce768;
val* var769 /* : String */;
char* var770 /* : CString */;
val* var771 /* : String */;
val* var772 /* : nullable Int */;
val* var773 /* : nullable Int */;
val* var774 /* : nullable Bool */;
val* var775 /* : nullable Bool */;
val* var776 /* : Array[Element] */;
val* var777 /* : NativeArray[Element] */;
val* var778 /* : Alternative */;
static val* varonce779;
val* var780 /* : String */;
char* var781 /* : CString */;
val* var782 /* : String */;
val* var783 /* : nullable Int */;
val* var784 /* : nullable Int */;
val* var785 /* : nullable Bool */;
val* var786 /* : nullable Bool */;
val* var787 /* : Array[Element] */;
val* var788 /* : NativeArray[Element] */;
val* var789 /* : Alternative */;
static val* varonce790;
val* var791 /* : String */;
char* var792 /* : CString */;
val* var793 /* : String */;
val* var794 /* : nullable Int */;
val* var795 /* : nullable Int */;
val* var796 /* : nullable Bool */;
val* var797 /* : nullable Bool */;
val* var798 /* : Array[Element] */;
val* var799 /* : NativeArray[Element] */;
val* var800 /* : Alternative */;
static val* varonce801;
val* var802 /* : String */;
char* var803 /* : CString */;
val* var804 /* : String */;
val* var805 /* : nullable Int */;
val* var806 /* : nullable Int */;
val* var807 /* : nullable Bool */;
val* var808 /* : nullable Bool */;
val* var809 /* : Array[Element] */;
val* var810 /* : NativeArray[Element] */;
val* var811 /* : Alternative */;
static val* varonce812;
val* var813 /* : String */;
char* var814 /* : CString */;
val* var815 /* : String */;
val* var816 /* : nullable Int */;
val* var817 /* : nullable Int */;
val* var818 /* : nullable Bool */;
val* var819 /* : nullable Bool */;
val* var820 /* : Array[Element] */;
val* var821 /* : NativeArray[Element] */;
val* var822 /* : Alternative */;
static val* varonce823;
val* var824 /* : String */;
char* var825 /* : CString */;
val* var826 /* : String */;
val* var827 /* : nullable Int */;
val* var828 /* : nullable Int */;
val* var829 /* : nullable Bool */;
val* var830 /* : nullable Bool */;
val* var831 /* : Array[Element] */;
val* var832 /* : NativeArray[Element] */;
val* var833 /* : Alternative */;
static val* varonce834;
val* var835 /* : String */;
char* var836 /* : CString */;
val* var837 /* : String */;
val* var838 /* : nullable Int */;
val* var839 /* : nullable Int */;
val* var840 /* : nullable Bool */;
val* var841 /* : nullable Bool */;
val* var842 /* : Array[Element] */;
val* var843 /* : NativeArray[Element] */;
val* var844 /* : Alternative */;
static val* varonce845;
val* var846 /* : String */;
char* var847 /* : CString */;
val* var848 /* : String */;
val* var849 /* : nullable Int */;
val* var850 /* : nullable Int */;
val* var851 /* : nullable Bool */;
val* var852 /* : nullable Bool */;
val* var853 /* : Array[Element] */;
val* var854 /* : NativeArray[Element] */;
val* var855 /* : Alternative */;
static val* varonce856;
val* var857 /* : String */;
char* var858 /* : CString */;
val* var859 /* : String */;
val* var860 /* : nullable Int */;
val* var861 /* : nullable Int */;
val* var862 /* : nullable Bool */;
val* var863 /* : nullable Bool */;
val* var864 /* : Alternative */;
static val* varonce865;
val* var866 /* : String */;
char* var867 /* : CString */;
val* var868 /* : String */;
val* var869 /* : nullable Int */;
val* var870 /* : nullable Int */;
val* var871 /* : nullable Bool */;
val* var872 /* : nullable Bool */;
val* var873 /* : Array[Element] */;
val* var874 /* : NativeArray[Element] */;
val* var875 /* : Alternative */;
static val* varonce876;
val* var877 /* : String */;
char* var878 /* : CString */;
val* var879 /* : String */;
val* var880 /* : nullable Int */;
val* var881 /* : nullable Int */;
val* var882 /* : nullable Bool */;
val* var883 /* : nullable Bool */;
val* var884 /* : Array[Element] */;
val* var885 /* : NativeArray[Element] */;
val* var886 /* : Alternative */;
static val* varonce887;
val* var888 /* : String */;
char* var889 /* : CString */;
val* var890 /* : String */;
val* var891 /* : nullable Int */;
val* var892 /* : nullable Int */;
val* var893 /* : nullable Bool */;
val* var894 /* : nullable Bool */;
val* var895 /* : Alternative */;
static val* varonce896;
val* var897 /* : String */;
char* var898 /* : CString */;
val* var899 /* : String */;
val* var900 /* : nullable Int */;
val* var901 /* : nullable Int */;
val* var902 /* : nullable Bool */;
val* var903 /* : nullable Bool */;
val* var904 /* : Array[Element] */;
val* var905 /* : NativeArray[Element] */;
val* var906 /* : Alternative */;
static val* varonce907;
val* var908 /* : String */;
char* var909 /* : CString */;
val* var910 /* : String */;
val* var911 /* : nullable Int */;
val* var912 /* : nullable Int */;
val* var913 /* : nullable Bool */;
val* var914 /* : nullable Bool */;
val* var915 /* : Array[Element] */;
val* var916 /* : NativeArray[Element] */;
val* var917 /* : Alternative */;
static val* varonce918;
val* var919 /* : String */;
char* var920 /* : CString */;
val* var921 /* : String */;
val* var922 /* : nullable Int */;
val* var923 /* : nullable Int */;
val* var924 /* : nullable Bool */;
val* var925 /* : nullable Bool */;
val* var926 /* : Array[Element] */;
val* var927 /* : NativeArray[Element] */;
val* var928 /* : Alternative */;
static val* varonce929;
val* var930 /* : String */;
char* var931 /* : CString */;
val* var932 /* : String */;
val* var933 /* : nullable Int */;
val* var934 /* : nullable Int */;
val* var935 /* : nullable Bool */;
val* var936 /* : nullable Bool */;
val* var937 /* : Alternative */;
static val* varonce938;
val* var939 /* : String */;
char* var940 /* : CString */;
val* var941 /* : String */;
val* var942 /* : nullable Int */;
val* var943 /* : nullable Int */;
val* var944 /* : nullable Bool */;
val* var945 /* : nullable Bool */;
val* var946 /* : Array[Element] */;
val* var947 /* : NativeArray[Element] */;
val* var948 /* : Alternative */;
static val* varonce949;
val* var950 /* : String */;
char* var951 /* : CString */;
val* var952 /* : String */;
val* var953 /* : nullable Int */;
val* var954 /* : nullable Int */;
val* var955 /* : nullable Bool */;
val* var956 /* : nullable Bool */;
val* var957 /* : Array[Element] */;
val* var958 /* : NativeArray[Element] */;
val* var959 /* : Alternative */;
static val* varonce960;
val* var961 /* : String */;
char* var962 /* : CString */;
val* var963 /* : String */;
val* var964 /* : nullable Int */;
val* var965 /* : nullable Int */;
val* var966 /* : nullable Bool */;
val* var967 /* : nullable Bool */;
val* var968 /* : Array[Element] */;
val* var969 /* : NativeArray[Element] */;
val* var970 /* : Alternative */;
static val* varonce971;
val* var972 /* : String */;
char* var973 /* : CString */;
val* var974 /* : String */;
val* var975 /* : nullable Int */;
val* var976 /* : nullable Int */;
val* var977 /* : nullable Bool */;
val* var978 /* : nullable Bool */;
val* var979 /* : Alternative */;
static val* varonce980;
val* var981 /* : String */;
char* var982 /* : CString */;
val* var983 /* : String */;
val* var984 /* : nullable Int */;
val* var985 /* : nullable Int */;
val* var986 /* : nullable Bool */;
val* var987 /* : nullable Bool */;
val* var988 /* : Array[Element] */;
val* var989 /* : NativeArray[Element] */;
val* var990 /* : Alternative */;
static val* varonce991;
val* var992 /* : String */;
char* var993 /* : CString */;
val* var994 /* : String */;
val* var995 /* : nullable Int */;
val* var996 /* : nullable Int */;
val* var997 /* : nullable Bool */;
val* var998 /* : nullable Bool */;
val* var999 /* : Array[Element] */;
val* var1000 /* : NativeArray[Element] */;
val* var1001 /* : Alternative */;
static val* varonce1002;
val* var1003 /* : String */;
char* var1004 /* : CString */;
val* var1005 /* : String */;
val* var1006 /* : nullable Int */;
val* var1007 /* : nullable Int */;
val* var1008 /* : nullable Bool */;
val* var1009 /* : nullable Bool */;
val* var1010 /* : Array[Element] */;
val* var1011 /* : NativeArray[Element] */;
val* var1012 /* : Alternative */;
static val* varonce1013;
val* var1014 /* : String */;
char* var1015 /* : CString */;
val* var1016 /* : String */;
val* var1017 /* : nullable Int */;
val* var1018 /* : nullable Int */;
val* var1019 /* : nullable Bool */;
val* var1020 /* : nullable Bool */;
val* var1021 /* : Array[Element] */;
val* var1022 /* : NativeArray[Element] */;
val* var1023 /* : Alternative */;
static val* varonce1024;
val* var1025 /* : String */;
char* var1026 /* : CString */;
val* var1027 /* : String */;
val* var1028 /* : nullable Int */;
val* var1029 /* : nullable Int */;
val* var1030 /* : nullable Bool */;
val* var1031 /* : nullable Bool */;
val* var1032 /* : Array[Element] */;
val* var1033 /* : NativeArray[Element] */;
val* var1034 /* : Alternative */;
static val* varonce1035;
val* var1036 /* : String */;
char* var1037 /* : CString */;
val* var1038 /* : String */;
val* var1039 /* : nullable Int */;
val* var1040 /* : nullable Int */;
val* var1041 /* : nullable Bool */;
val* var1042 /* : nullable Bool */;
val* var1043 /* : Array[Element] */;
val* var1044 /* : NativeArray[Element] */;
val* var1045 /* : Alternative */;
static val* varonce1046;
val* var1047 /* : String */;
char* var1048 /* : CString */;
val* var1049 /* : String */;
val* var1050 /* : nullable Int */;
val* var1051 /* : nullable Int */;
val* var1052 /* : nullable Bool */;
val* var1053 /* : nullable Bool */;
val* var1054 /* : Array[Element] */;
val* var1055 /* : NativeArray[Element] */;
val* var1056 /* : Alternative */;
static val* varonce1057;
val* var1058 /* : String */;
char* var1059 /* : CString */;
val* var1060 /* : String */;
val* var1061 /* : nullable Int */;
val* var1062 /* : nullable Int */;
val* var1063 /* : nullable Bool */;
val* var1064 /* : nullable Bool */;
val* var1065 /* : Array[Element] */;
val* var1066 /* : NativeArray[Element] */;
val* var1067 /* : Alternative */;
static val* varonce1068;
val* var1069 /* : String */;
char* var1070 /* : CString */;
val* var1071 /* : String */;
val* var1072 /* : nullable Int */;
val* var1073 /* : nullable Int */;
val* var1074 /* : nullable Bool */;
val* var1075 /* : nullable Bool */;
val* var1076 /* : Alternative */;
static val* varonce1077;
val* var1078 /* : String */;
char* var1079 /* : CString */;
val* var1080 /* : String */;
val* var1081 /* : nullable Int */;
val* var1082 /* : nullable Int */;
val* var1083 /* : nullable Bool */;
val* var1084 /* : nullable Bool */;
val* var1085 /* : Alternative */;
static val* varonce1086;
val* var1087 /* : String */;
char* var1088 /* : CString */;
val* var1089 /* : String */;
val* var1090 /* : nullable Int */;
val* var1091 /* : nullable Int */;
val* var1092 /* : nullable Bool */;
val* var1093 /* : nullable Bool */;
val* var1094 /* : Alternative */;
val* var1095 /* : LRAutomaton */;
val* var_a /* var a: LRAutomaton */;
val* var1097 /* : NativeArray[String] */;
static val* varonce1096;
static val* varonce1098;
val* var1099 /* : String */;
char* var1100 /* : CString */;
val* var1101 /* : String */;
val* var1102 /* : nullable Int */;
val* var1103 /* : nullable Int */;
val* var1104 /* : nullable Bool */;
val* var1105 /* : nullable Bool */;
static val* varonce1106;
val* var1107 /* : String */;
char* var1108 /* : CString */;
val* var1109 /* : String */;
val* var1110 /* : nullable Int */;
val* var1111 /* : nullable Int */;
val* var1112 /* : nullable Bool */;
val* var1113 /* : nullable Bool */;
val* var1114 /* : Array[LRState] */;
long var1115 /* : Int */;
val* var1116 /* : String */;
val* var1117 /* : String */;
static val* varonce1118;
val* var1119 /* : String */;
char* var1120 /* : CString */;
val* var1121 /* : String */;
val* var1122 /* : nullable Int */;
val* var1123 /* : nullable Int */;
val* var1124 /* : nullable Bool */;
val* var1125 /* : nullable Bool */;
static val* varonce1126;
val* var1127 /* : String */;
char* var1128 /* : CString */;
val* var1129 /* : String */;
val* var1130 /* : nullable Int */;
val* var1131 /* : nullable Int */;
val* var1132 /* : nullable Bool */;
val* var1133 /* : nullable Bool */;
static val* varonce1134;
val* var1135 /* : String */;
char* var1136 /* : CString */;
val* var1137 /* : String */;
val* var1138 /* : nullable Int */;
val* var1139 /* : nullable Int */;
val* var1140 /* : nullable Bool */;
val* var1141 /* : nullable Bool */;
val* var1142 /* : FileWriter */;
static val* varonce1143;
val* var1144 /* : String */;
char* var1145 /* : CString */;
val* var1146 /* : String */;
val* var1147 /* : nullable Int */;
val* var1148 /* : nullable Int */;
val* var1149 /* : nullable Bool */;
val* var1150 /* : nullable Bool */;
val* var_f /* var f: FileWriter */;
static val* varonce1151;
val* var1152 /* : String */;
char* var1153 /* : CString */;
val* var1154 /* : String */;
val* var1155 /* : nullable Int */;
val* var1156 /* : nullable Int */;
val* var1157 /* : nullable Bool */;
val* var1158 /* : nullable Bool */;
var = NEW_nitcc__Gram(&type_nitcc__Gram);
{
((void(*)(val* self))(var->class->vft[COLOR_core__kernel__Object__init]))(var); /* init on <var:Gram>*/
}
var_g = var;
var1 = NEW_nitcc__Production(&type_nitcc__Production);
if (likely(varonce!=NULL)) {
var2 = varonce;
} else {
var3 = "grammar";
var5 = (val*)(7l<<2|1);
var6 = (val*)(7l<<2|1);
var7 = (val*)((long)(0)<<2|3);
var8 = (val*)((long)(0)<<2|3);
var4 = core__flat___CString___to_s_unsafe(var3, var5, var6, var7, var8);
var2 = var4;
varonce = var2;
}
{
((void(*)(val* self, val* p0))(var1->class->vft[COLOR_nitcc__grammar__Element__name_61d]))(var1, var2); /* name= on <var1:Production>*/
}
{
((void(*)(val* self))(var1->class->vft[COLOR_core__kernel__Object__init]))(var1); /* init on <var1:Production>*/
}
var_p_gr = var1;
var9 = NEW_nitcc__Production(&type_nitcc__Production);
if (likely(varonce10!=NULL)) {
var11 = varonce10;
} else {
var12 = "lexer";
var14 = (val*)(5l<<2|1);
var15 = (val*)(5l<<2|1);
var16 = (val*)((long)(0)<<2|3);
var17 = (val*)((long)(0)<<2|3);
var13 = core__flat___CString___to_s_unsafe(var12, var14, var15, var16, var17);
var11 = var13;
varonce10 = var11;
}
{
((void(*)(val* self, val* p0))(var9->class->vft[COLOR_nitcc__grammar__Element__name_61d]))(var9, var11); /* name= on <var9:Production>*/
}
{
((void(*)(val* self))(var9->class->vft[COLOR_core__kernel__Object__init]))(var9); /* init on <var9:Production>*/
}
var_p_lex = var9;
var18 = NEW_nitcc__Production(&type_nitcc__Production);
if (likely(varonce19!=NULL)) {
var20 = varonce19;
} else {
var21 = "exprs";
var23 = (val*)(5l<<2|1);
var24 = (val*)(5l<<2|1);
var25 = (val*)((long)(0)<<2|3);
var26 = (val*)((long)(0)<<2|3);
var22 = core__flat___CString___to_s_unsafe(var21, var23, var24, var25, var26);
var20 = var22;
varonce19 = var20;
}
{
((void(*)(val* self, val* p0))(var18->class->vft[COLOR_nitcc__grammar__Element__name_61d]))(var18, var20); /* name= on <var18:Production>*/
}
{
((void(*)(val* self))(var18->class->vft[COLOR_core__kernel__Object__init]))(var18); /* init on <var18:Production>*/
}
var_p_exprs = var18;
var27 = NEW_nitcc__Production(&type_nitcc__Production);
if (likely(varonce28!=NULL)) {
var29 = varonce28;
} else {
var30 = "expression";
var32 = (val*)(10l<<2|1);
var33 = (val*)(10l<<2|1);
var34 = (val*)((long)(0)<<2|3);
var35 = (val*)((long)(0)<<2|3);
var31 = core__flat___CString___to_s_unsafe(var30, var32, var33, var34, var35);
var29 = var31;
varonce28 = var29;
}
{
((void(*)(val* self, val* p0))(var27->class->vft[COLOR_nitcc__grammar__Element__name_61d]))(var27, var29); /* name= on <var27:Production>*/
}
{
((void(*)(val* self))(var27->class->vft[COLOR_core__kernel__Object__init]))(var27); /* init on <var27:Production>*/
}
var_p_expr = var27;
var36 = NEW_nitcc__Production(&type_nitcc__Production);
if (likely(varonce37!=NULL)) {
var38 = varonce37;
} else {
var39 = "re";
var41 = (val*)(2l<<2|1);
var42 = (val*)(2l<<2|1);
var43 = (val*)((long)(0)<<2|3);
var44 = (val*)((long)(0)<<2|3);
var40 = core__flat___CString___to_s_unsafe(var39, var41, var42, var43, var44);
var38 = var40;
varonce37 = var38;
}
{
((void(*)(val* self, val* p0))(var36->class->vft[COLOR_nitcc__grammar__Element__name_61d]))(var36, var38); /* name= on <var36:Production>*/
}
{
((void(*)(val* self))(var36->class->vft[COLOR_core__kernel__Object__init]))(var36); /* init on <var36:Production>*/
}
var_p_re = var36;
var45 = NEW_nitcc__Production(&type_nitcc__Production);
if (likely(varonce46!=NULL)) {
var47 = varonce46;
} else {
var48 = "re1";
var50 = (val*)(3l<<2|1);
var51 = (val*)(3l<<2|1);
var52 = (val*)((long)(0)<<2|3);
var53 = (val*)((long)(0)<<2|3);
var49 = core__flat___CString___to_s_unsafe(var48, var50, var51, var52, var53);
var47 = var49;
varonce46 = var47;
}
{
((void(*)(val* self, val* p0))(var45->class->vft[COLOR_nitcc__grammar__Element__name_61d]))(var45, var47); /* name= on <var45:Production>*/
}
{
((void(*)(val* self))(var45->class->vft[COLOR_core__kernel__Object__init]))(var45); /* init on <var45:Production>*/
}
var_p_re1 = var45;
var54 = NEW_nitcc__Production(&type_nitcc__Production);
if (likely(varonce55!=NULL)) {
var56 = varonce55;
} else {
var57 = "re2";
var59 = (val*)(3l<<2|1);
var60 = (val*)(3l<<2|1);
var61 = (val*)((long)(0)<<2|3);
var62 = (val*)((long)(0)<<2|3);
var58 = core__flat___CString___to_s_unsafe(var57, var59, var60, var61, var62);
var56 = var58;
varonce55 = var56;
}
{
((void(*)(val* self, val* p0))(var54->class->vft[COLOR_nitcc__grammar__Element__name_61d]))(var54, var56); /* name= on <var54:Production>*/
}
{
((void(*)(val* self))(var54->class->vft[COLOR_core__kernel__Object__init]))(var54); /* init on <var54:Production>*/
}
var_p_re2 = var54;
var63 = NEW_nitcc__Production(&type_nitcc__Production);
if (likely(varonce64!=NULL)) {
var65 = varonce64;
} else {
var66 = "re3";
var68 = (val*)(3l<<2|1);
var69 = (val*)(3l<<2|1);
var70 = (val*)((long)(0)<<2|3);
var71 = (val*)((long)(0)<<2|3);
var67 = core__flat___CString___to_s_unsafe(var66, var68, var69, var70, var71);
var65 = var67;
varonce64 = var65;
}
{
((void(*)(val* self, val* p0))(var63->class->vft[COLOR_nitcc__grammar__Element__name_61d]))(var63, var65); /* name= on <var63:Production>*/
}
{
((void(*)(val* self))(var63->class->vft[COLOR_core__kernel__Object__init]))(var63); /* init on <var63:Production>*/
}
var_p_re3 = var63;
var72 = NEW_nitcc__Production(&type_nitcc__Production);
if (likely(varonce73!=NULL)) {
var74 = varonce73;
} else {
var75 = "text";
var77 = (val*)(4l<<2|1);
var78 = (val*)(4l<<2|1);
var79 = (val*)((long)(0)<<2|3);
var80 = (val*)((long)(0)<<2|3);
var76 = core__flat___CString___to_s_unsafe(var75, var77, var78, var79, var80);
var74 = var76;
varonce73 = var74;
}
{
((void(*)(val* self, val* p0))(var72->class->vft[COLOR_nitcc__grammar__Element__name_61d]))(var72, var74); /* name= on <var72:Production>*/
}
{
((void(*)(val* self))(var72->class->vft[COLOR_core__kernel__Object__init]))(var72); /* init on <var72:Production>*/
}
var_p_text = var72;
var81 = NEW_nitcc__Production(&type_nitcc__Production);
if (likely(varonce82!=NULL)) {
var83 = varonce82;
} else {
var84 = "parser";
var86 = (val*)(6l<<2|1);
var87 = (val*)(6l<<2|1);
var88 = (val*)((long)(0)<<2|3);
var89 = (val*)((long)(0)<<2|3);
var85 = core__flat___CString___to_s_unsafe(var84, var86, var87, var88, var89);
var83 = var85;
varonce82 = var83;
}
{
((void(*)(val* self, val* p0))(var81->class->vft[COLOR_nitcc__grammar__Element__name_61d]))(var81, var83); /* name= on <var81:Production>*/
}
{
((void(*)(val* self))(var81->class->vft[COLOR_core__kernel__Object__init]))(var81); /* init on <var81:Production>*/
}
var_p_par = var81;
var90 = NEW_nitcc__Production(&type_nitcc__Production);
if (likely(varonce91!=NULL)) {
var92 = varonce91;
} else {
var93 = "ignored";
var95 = (val*)(7l<<2|1);
var96 = (val*)(7l<<2|1);
var97 = (val*)((long)(0)<<2|3);
var98 = (val*)((long)(0)<<2|3);
var94 = core__flat___CString___to_s_unsafe(var93, var95, var96, var97, var98);
var92 = var94;
varonce91 = var92;
}
{
((void(*)(val* self, val* p0))(var90->class->vft[COLOR_nitcc__grammar__Element__name_61d]))(var90, var92); /* name= on <var90:Production>*/
}
{
((void(*)(val* self))(var90->class->vft[COLOR_core__kernel__Object__init]))(var90); /* init on <var90:Production>*/
}
var_p_ign = var90;
var99 = NEW_nitcc__Production(&type_nitcc__Production);
if (likely(varonce100!=NULL)) {
var101 = varonce100;
} else {
var102 = "rejected";
var104 = (val*)(8l<<2|1);
var105 = (val*)(8l<<2|1);
var106 = (val*)((long)(0)<<2|3);
var107 = (val*)((long)(0)<<2|3);
var103 = core__flat___CString___to_s_unsafe(var102, var104, var105, var106, var107);
var101 = var103;
varonce100 = var101;
}
{
((void(*)(val* self, val* p0))(var99->class->vft[COLOR_nitcc__grammar__Element__name_61d]))(var99, var101); /* name= on <var99:Production>*/
}
{
((void(*)(val* self))(var99->class->vft[COLOR_core__kernel__Object__init]))(var99); /* init on <var99:Production>*/
}
var_p_rej = var99;
var108 = NEW_nitcc__Production(&type_nitcc__Production);
if (likely(varonce109!=NULL)) {
var110 = varonce109;
} else {
var111 = "prods";
var113 = (val*)(5l<<2|1);
var114 = (val*)(5l<<2|1);
var115 = (val*)((long)(0)<<2|3);
var116 = (val*)((long)(0)<<2|3);
var112 = core__flat___CString___to_s_unsafe(var111, var113, var114, var115, var116);
var110 = var112;
varonce109 = var110;
}
{
((void(*)(val* self, val* p0))(var108->class->vft[COLOR_nitcc__grammar__Element__name_61d]))(var108, var110); /* name= on <var108:Production>*/
}
{
((void(*)(val* self))(var108->class->vft[COLOR_core__kernel__Object__init]))(var108); /* init on <var108:Production>*/
}
var_p_prods = var108;
var117 = NEW_nitcc__Production(&type_nitcc__Production);
if (likely(varonce118!=NULL)) {
var119 = varonce118;
} else {
var120 = "production";
var122 = (val*)(10l<<2|1);
var123 = (val*)(10l<<2|1);
var124 = (val*)((long)(0)<<2|3);
var125 = (val*)((long)(0)<<2|3);
var121 = core__flat___CString___to_s_unsafe(var120, var122, var123, var124, var125);
var119 = var121;
varonce118 = var119;
}
{
((void(*)(val* self, val* p0))(var117->class->vft[COLOR_nitcc__grammar__Element__name_61d]))(var117, var119); /* name= on <var117:Production>*/
}
{
((void(*)(val* self))(var117->class->vft[COLOR_core__kernel__Object__init]))(var117); /* init on <var117:Production>*/
}
var_p_prod = var117;
var126 = NEW_nitcc__Production(&type_nitcc__Production);
if (likely(varonce127!=NULL)) {
var128 = varonce127;
} else {
var129 = "ptrans_o";
var131 = (val*)(8l<<2|1);
var132 = (val*)(8l<<2|1);
var133 = (val*)((long)(0)<<2|3);
var134 = (val*)((long)(0)<<2|3);
var130 = core__flat___CString___to_s_unsafe(var129, var131, var132, var133, var134);
var128 = var130;
varonce127 = var128;
}
{
((void(*)(val* self, val* p0))(var126->class->vft[COLOR_nitcc__grammar__Element__name_61d]))(var126, var128); /* name= on <var126:Production>*/
}
{
((void(*)(val* self))(var126->class->vft[COLOR_core__kernel__Object__init]))(var126); /* init on <var126:Production>*/
}
var_p_ptrans_o = var126;
var135 = NEW_nitcc__Production(&type_nitcc__Production);
if (likely(varonce136!=NULL)) {
var137 = varonce136;
} else {
var138 = "alts";
var140 = (val*)(4l<<2|1);
var141 = (val*)(4l<<2|1);
var142 = (val*)((long)(0)<<2|3);
var143 = (val*)((long)(0)<<2|3);
var139 = core__flat___CString___to_s_unsafe(var138, var140, var141, var142, var143);
var137 = var139;
varonce136 = var137;
}
{
((void(*)(val* self, val* p0))(var135->class->vft[COLOR_nitcc__grammar__Element__name_61d]))(var135, var137); /* name= on <var135:Production>*/
}
{
((void(*)(val* self))(var135->class->vft[COLOR_core__kernel__Object__init]))(var135); /* init on <var135:Production>*/
}
var_p_alts = var135;
var144 = NEW_nitcc__Production(&type_nitcc__Production);
if (likely(varonce145!=NULL)) {
var146 = varonce145;
} else {
var147 = "alternative";
var149 = (val*)(11l<<2|1);
var150 = (val*)(11l<<2|1);
var151 = (val*)((long)(0)<<2|3);
var152 = (val*)((long)(0)<<2|3);
var148 = core__flat___CString___to_s_unsafe(var147, var149, var150, var151, var152);
var146 = var148;
varonce145 = var146;
}
{
((void(*)(val* self, val* p0))(var144->class->vft[COLOR_nitcc__grammar__Element__name_61d]))(var144, var146); /* name= on <var144:Production>*/
}
{
((void(*)(val* self))(var144->class->vft[COLOR_core__kernel__Object__init]))(var144); /* init on <var144:Production>*/
}
var_p_alt = var144;
var153 = NEW_nitcc__Production(&type_nitcc__Production);
if (likely(varonce154!=NULL)) {
var155 = varonce154;
} else {
var156 = "altid_o";
var158 = (val*)(7l<<2|1);
var159 = (val*)(7l<<2|1);
var160 = (val*)((long)(0)<<2|3);
var161 = (val*)((long)(0)<<2|3);
var157 = core__flat___CString___to_s_unsafe(var156, var158, var159, var160, var161);
var155 = var157;
varonce154 = var155;
}
{
((void(*)(val* self, val* p0))(var153->class->vft[COLOR_nitcc__grammar__Element__name_61d]))(var153, var155); /* name= on <var153:Production>*/
}
{
((void(*)(val* self))(var153->class->vft[COLOR_core__kernel__Object__init]))(var153); /* init on <var153:Production>*/
}
var_p_altid_o = var153;
var162 = NEW_nitcc__Production(&type_nitcc__Production);
if (likely(varonce163!=NULL)) {
var164 = varonce163;
} else {
var165 = "altident";
var167 = (val*)(8l<<2|1);
var168 = (val*)(8l<<2|1);
var169 = (val*)((long)(0)<<2|3);
var170 = (val*)((long)(0)<<2|3);
var166 = core__flat___CString___to_s_unsafe(var165, var167, var168, var169, var170);
var164 = var166;
varonce163 = var164;
}
{
((void(*)(val* self, val* p0))(var162->class->vft[COLOR_nitcc__grammar__Element__name_61d]))(var162, var164); /* name= on <var162:Production>*/
}
{
((void(*)(val* self))(var162->class->vft[COLOR_core__kernel__Object__init]))(var162); /* init on <var162:Production>*/
}
var_p_altid = var162;
var171 = NEW_nitcc__Production(&type_nitcc__Production);
if (likely(varonce172!=NULL)) {
var173 = varonce172;
} else {
var174 = "elems";
var176 = (val*)(5l<<2|1);
var177 = (val*)(5l<<2|1);
var178 = (val*)((long)(0)<<2|3);
var179 = (val*)((long)(0)<<2|3);
var175 = core__flat___CString___to_s_unsafe(var174, var176, var177, var178, var179);
var173 = var175;
varonce172 = var173;
}
{
((void(*)(val* self, val* p0))(var171->class->vft[COLOR_nitcc__grammar__Element__name_61d]))(var171, var173); /* name= on <var171:Production>*/
}
{
((void(*)(val* self))(var171->class->vft[COLOR_core__kernel__Object__init]))(var171); /* init on <var171:Production>*/
}
var_p_elems = var171;
var180 = NEW_nitcc__Production(&type_nitcc__Production);
if (likely(varonce181!=NULL)) {
var182 = varonce181;
} else {
var183 = "elem_list";
var185 = (val*)(9l<<2|1);
var186 = (val*)(9l<<2|1);
var187 = (val*)((long)(0)<<2|3);
var188 = (val*)((long)(0)<<2|3);
var184 = core__flat___CString___to_s_unsafe(var183, var185, var186, var187, var188);
var182 = var184;
varonce181 = var182;
}
{
((void(*)(val* self, val* p0))(var180->class->vft[COLOR_nitcc__grammar__Element__name_61d]))(var180, var182); /* name= on <var180:Production>*/
}
{
((void(*)(val* self))(var180->class->vft[COLOR_core__kernel__Object__init]))(var180); /* init on <var180:Production>*/
}
var_p_elem_list = var180;
var189 = NEW_nitcc__Production(&type_nitcc__Production);
if (likely(varonce190!=NULL)) {
var191 = varonce190;
} else {
var192 = "elem";
var194 = (val*)(4l<<2|1);
var195 = (val*)(4l<<2|1);
var196 = (val*)((long)(0)<<2|3);
var197 = (val*)((long)(0)<<2|3);
var193 = core__flat___CString___to_s_unsafe(var192, var194, var195, var196, var197);
var191 = var193;
varonce190 = var191;
}
{
((void(*)(val* self, val* p0))(var189->class->vft[COLOR_nitcc__grammar__Element__name_61d]))(var189, var191); /* name= on <var189:Production>*/
}
{
((void(*)(val* self))(var189->class->vft[COLOR_core__kernel__Object__init]))(var189); /* init on <var189:Production>*/
}
var_p_elem = var189;
var198 = NEW_nitcc__Production(&type_nitcc__Production);
if (likely(varonce199!=NULL)) {
var200 = varonce199;
} else {
var201 = "priority";
var203 = (val*)(8l<<2|1);
var204 = (val*)(8l<<2|1);
var205 = (val*)((long)(0)<<2|3);
var206 = (val*)((long)(0)<<2|3);
var202 = core__flat___CString___to_s_unsafe(var201, var203, var204, var205, var206);
var200 = var202;
varonce199 = var200;
}
{
((void(*)(val* self, val* p0))(var198->class->vft[COLOR_nitcc__grammar__Element__name_61d]))(var198, var200); /* name= on <var198:Production>*/
}
{
((void(*)(val* self))(var198->class->vft[COLOR_core__kernel__Object__init]))(var198); /* init on <var198:Production>*/
}
var_p_pri = var198;
{
var207 = ((val*(*)(val* self))(var_g->class->vft[COLOR_nitcc__grammar__Gram__prods]))(var_g); /* prods on <var_g:Gram>*/
}
var208 = NEW_core__Array(&type_core__Array__nitcc__Production);
{
((void(*)(val* self, long p0))(var208->class->vft[COLOR_core__array__Array__with_capacity]))(var208, 23l); /* with_capacity on <var208:Array[Production]>*/
}
var_ = var208;
{
((void(*)(val* self, val* p0))(var_->class->vft[COLOR_core__abstract_collection__Sequence__push]))(var_, var_p_gr); /* push on <var_:Array[Production]>*/
}
{
((void(*)(val* self, val* p0))(var_->class->vft[COLOR_core__abstract_collection__Sequence__push]))(var_, var_p_re); /* push on <var_:Array[Production]>*/
}
{
((void(*)(val* self, val* p0))(var_->class->vft[COLOR_core__abstract_collection__Sequence__push]))(var_, var_p_re1); /* push on <var_:Array[Production]>*/
}
{
((void(*)(val* self, val* p0))(var_->class->vft[COLOR_core__abstract_collection__Sequence__push]))(var_, var_p_re2); /* push on <var_:Array[Production]>*/
}
{
((void(*)(val* self, val* p0))(var_->class->vft[COLOR_core__abstract_collection__Sequence__push]))(var_, var_p_re3); /* push on <var_:Array[Production]>*/
}
{
((void(*)(val* self, val* p0))(var_->class->vft[COLOR_core__abstract_collection__Sequence__push]))(var_, var_p_text); /* push on <var_:Array[Production]>*/
}
{
((void(*)(val* self, val* p0))(var_->class->vft[COLOR_core__abstract_collection__Sequence__push]))(var_, var_p_lex); /* push on <var_:Array[Production]>*/
}
{
((void(*)(val* self, val* p0))(var_->class->vft[COLOR_core__abstract_collection__Sequence__push]))(var_, var_p_exprs); /* push on <var_:Array[Production]>*/
}
{
((void(*)(val* self, val* p0))(var_->class->vft[COLOR_core__abstract_collection__Sequence__push]))(var_, var_p_expr); /* push on <var_:Array[Production]>*/
}
{
((void(*)(val* self, val* p0))(var_->class->vft[COLOR_core__abstract_collection__Sequence__push]))(var_, var_p_par); /* push on <var_:Array[Production]>*/
}
{
((void(*)(val* self, val* p0))(var_->class->vft[COLOR_core__abstract_collection__Sequence__push]))(var_, var_p_ign); /* push on <var_:Array[Production]>*/
}
{
((void(*)(val* self, val* p0))(var_->class->vft[COLOR_core__abstract_collection__Sequence__push]))(var_, var_p_rej); /* push on <var_:Array[Production]>*/
}
{
((void(*)(val* self, val* p0))(var_->class->vft[COLOR_core__abstract_collection__Sequence__push]))(var_, var_p_prods); /* push on <var_:Array[Production]>*/
}
{
((void(*)(val* self, val* p0))(var_->class->vft[COLOR_core__abstract_collection__Sequence__push]))(var_, var_p_prod); /* push on <var_:Array[Production]>*/
}
{
((void(*)(val* self, val* p0))(var_->class->vft[COLOR_core__abstract_collection__Sequence__push]))(var_, var_p_ptrans_o); /* push on <var_:Array[Production]>*/
}
{
((void(*)(val* self, val* p0))(var_->class->vft[COLOR_core__abstract_collection__Sequence__push]))(var_, var_p_alts); /* push on <var_:Array[Production]>*/
}
{
((void(*)(val* self, val* p0))(var_->class->vft[COLOR_core__abstract_collection__Sequence__push]))(var_, var_p_alt); /* push on <var_:Array[Production]>*/
}
{
((void(*)(val* self, val* p0))(var_->class->vft[COLOR_core__abstract_collection__Sequence__push]))(var_, var_p_altid_o); /* push on <var_:Array[Production]>*/
}
{
((void(*)(val* self, val* p0))(var_->class->vft[COLOR_core__abstract_collection__Sequence__push]))(var_, var_p_altid); /* push on <var_:Array[Production]>*/
}
{
((void(*)(val* self, val* p0))(var_->class->vft[COLOR_core__abstract_collection__Sequence__push]))(var_, var_p_elems); /* push on <var_:Array[Production]>*/
}
{
((void(*)(val* self, val* p0))(var_->class->vft[COLOR_core__abstract_collection__Sequence__push]))(var_, var_p_elem_list); /* push on <var_:Array[Production]>*/
}
{
((void(*)(val* self, val* p0))(var_->class->vft[COLOR_core__abstract_collection__Sequence__push]))(var_, var_p_elem); /* push on <var_:Array[Production]>*/
}
{
((void(*)(val* self, val* p0))(var_->class->vft[COLOR_core__abstract_collection__Sequence__push]))(var_, var_p_pri); /* push on <var_:Array[Production]>*/
}
{
((void(*)(val* self, val* p0))(var207->class->vft[COLOR_core__abstract_collection__SimpleCollection__add_all]))(var207, var_); /* add_all on <var207:Array[Production]>*/
}
{
var209 = ((val*(*)(val* self))(var_g->class->vft[COLOR_nitcc__grammar__Gram__prods]))(var_g); /* prods on <var_g:Gram>*/
}
var210 = NEW_nitcc__Production(&type_nitcc__Production);
if (likely(varonce211!=NULL)) {
var212 = varonce211;
} else {
var213 = "atrans";
var215 = (val*)(6l<<2|1);
var216 = (val*)(6l<<2|1);
var217 = (val*)((long)(0)<<2|3);
var218 = (val*)((long)(0)<<2|3);
var214 = core__flat___CString___to_s_unsafe(var213, var215, var216, var217, var218);
var212 = var214;
varonce211 = var212;
}
{
((void(*)(val* self, val* p0))(var210->class->vft[COLOR_nitcc__grammar__Element__name_61d]))(var210, var212); /* name= on <var210:Production>*/
}
{
((void(*)(val* self))(var210->class->vft[COLOR_core__kernel__Object__init]))(var210); /* init on <var210:Production>*/
}
{
((void(*)(val* self, val* p0))(var209->class->vft[COLOR_core__abstract_collection__SimpleCollection__add]))(var209, var210); /* add on <var209:Array[Production]>*/
}
{
var219 = ((val*(*)(val* self))(var_g->class->vft[COLOR_nitcc__grammar__Gram__prods]))(var_g); /* prods on <var_g:Gram>*/
}
var220 = NEW_nitcc__Production(&type_nitcc__Production);
if (likely(varonce221!=NULL)) {
var222 = varonce221;
} else {
var223 = "elemid";
var225 = (val*)(6l<<2|1);
var226 = (val*)(6l<<2|1);
var227 = (val*)((long)(0)<<2|3);
var228 = (val*)((long)(0)<<2|3);
var224 = core__flat___CString___to_s_unsafe(var223, var225, var226, var227, var228);
var222 = var224;
varonce221 = var222;
}
{
((void(*)(val* self, val* p0))(var220->class->vft[COLOR_nitcc__grammar__Element__name_61d]))(var220, var222); /* name= on <var220:Production>*/
}
{
((void(*)(val* self))(var220->class->vft[COLOR_core__kernel__Object__init]))(var220); /* init on <var220:Production>*/
}
{
((void(*)(val* self, val* p0))(var219->class->vft[COLOR_core__abstract_collection__SimpleCollection__add]))(var219, var220); /* add on <var219:Array[Production]>*/
}
{
var229 = ((val*(*)(val* self))(var_g->class->vft[COLOR_nitcc__grammar__Gram__prods]))(var_g); /* prods on <var_g:Gram>*/
}
var230 = NEW_nitcc__Production(&type_nitcc__Production);
if (likely(varonce231!=NULL)) {
var232 = varonce231;
} else {
var233 = "nelem";
var235 = (val*)(5l<<2|1);
var236 = (val*)(5l<<2|1);
var237 = (val*)((long)(0)<<2|3);
var238 = (val*)((long)(0)<<2|3);
var234 = core__flat___CString___to_s_unsafe(var233, var235, var236, var237, var238);
var232 = var234;
varonce231 = var232;
}
{
((void(*)(val* self, val* p0))(var230->class->vft[COLOR_nitcc__grammar__Element__name_61d]))(var230, var232); /* name= on <var230:Production>*/
}
{
((void(*)(val* self))(var230->class->vft[COLOR_core__kernel__Object__init]))(var230); /* init on <var230:Production>*/
}
{
((void(*)(val* self, val* p0))(var229->class->vft[COLOR_core__abstract_collection__SimpleCollection__add]))(var229, var230); /* add on <var229:Array[Production]>*/
}
{
var239 = ((val*(*)(val* self))(var_g->class->vft[COLOR_nitcc__grammar__Gram__prods]))(var_g); /* prods on <var_g:Gram>*/
}
var240 = NEW_nitcc__Production(&type_nitcc__Production);
if (likely(varonce241!=NULL)) {
var242 = varonce241;
} else {
var243 = "tree_part";
var245 = (val*)(9l<<2|1);
var246 = (val*)(9l<<2|1);
var247 = (val*)((long)(0)<<2|3);
var248 = (val*)((long)(0)<<2|3);
var244 = core__flat___CString___to_s_unsafe(var243, var245, var246, var247, var248);
var242 = var244;
varonce241 = var242;
}
{
((void(*)(val* self, val* p0))(var240->class->vft[COLOR_nitcc__grammar__Element__name_61d]))(var240, var242); /* name= on <var240:Production>*/
}
{
((void(*)(val* self))(var240->class->vft[COLOR_core__kernel__Object__init]))(var240); /* init on <var240:Production>*/
}
{
((void(*)(val* self, val* p0))(var239->class->vft[COLOR_core__abstract_collection__SimpleCollection__add]))(var239, var240); /* add on <var239:Array[Production]>*/
}
var249 = NEW_nitcc__Token(&type_nitcc__Token);
if (likely(varonce250!=NULL)) {
var251 = varonce250;
} else {
var252 = "opar";
var254 = (val*)(4l<<2|1);
var255 = (val*)(4l<<2|1);
var256 = (val*)((long)(0)<<2|3);
var257 = (val*)((long)(0)<<2|3);
var253 = core__flat___CString___to_s_unsafe(var252, var254, var255, var256, var257);
var251 = var253;
varonce250 = var251;
}
{
((void(*)(val* self, val* p0))(var249->class->vft[COLOR_nitcc__grammar__Element__name_61d]))(var249, var251); /* name= on <var249:Token>*/
}
{
((void(*)(val* self))(var249->class->vft[COLOR_core__kernel__Object__init]))(var249); /* init on <var249:Token>*/
}
var_t_opar = var249;
var258 = NEW_nitcc__Token(&type_nitcc__Token);
if (likely(varonce259!=NULL)) {
var260 = varonce259;
} else {
var261 = "cpar";
var263 = (val*)(4l<<2|1);
var264 = (val*)(4l<<2|1);
var265 = (val*)((long)(0)<<2|3);
var266 = (val*)((long)(0)<<2|3);
var262 = core__flat___CString___to_s_unsafe(var261, var263, var264, var265, var266);
var260 = var262;
varonce259 = var260;
}
{
((void(*)(val* self, val* p0))(var258->class->vft[COLOR_nitcc__grammar__Element__name_61d]))(var258, var260); /* name= on <var258:Token>*/
}
{
((void(*)(val* self))(var258->class->vft[COLOR_core__kernel__Object__init]))(var258); /* init on <var258:Token>*/
}
var_t_cpar = var258;
var267 = NEW_nitcc__Token(&type_nitcc__Token);
if (likely(varonce268!=NULL)) {
var269 = varonce268;
} else {
var270 = "ocur";
var272 = (val*)(4l<<2|1);
var273 = (val*)(4l<<2|1);
var274 = (val*)((long)(0)<<2|3);
var275 = (val*)((long)(0)<<2|3);
var271 = core__flat___CString___to_s_unsafe(var270, var272, var273, var274, var275);
var269 = var271;
varonce268 = var269;
}
{
((void(*)(val* self, val* p0))(var267->class->vft[COLOR_nitcc__grammar__Element__name_61d]))(var267, var269); /* name= on <var267:Token>*/
}
{
((void(*)(val* self))(var267->class->vft[COLOR_core__kernel__Object__init]))(var267); /* init on <var267:Token>*/
}
var_t_ocur = var267;
var276 = NEW_nitcc__Token(&type_nitcc__Token);
if (likely(varonce277!=NULL)) {
var278 = varonce277;
} else {
var279 = "ccur";
var281 = (val*)(4l<<2|1);
var282 = (val*)(4l<<2|1);
var283 = (val*)((long)(0)<<2|3);
var284 = (val*)((long)(0)<<2|3);
var280 = core__flat___CString___to_s_unsafe(var279, var281, var282, var283, var284);
var278 = var280;
varonce277 = var278;
}
{
((void(*)(val* self, val* p0))(var276->class->vft[COLOR_nitcc__grammar__Element__name_61d]))(var276, var278); /* name= on <var276:Token>*/
}
{
((void(*)(val* self))(var276->class->vft[COLOR_core__kernel__Object__init]))(var276); /* init on <var276:Token>*/
}
var_t_ccur = var276;
var285 = NEW_nitcc__Token(&type_nitcc__Token);
if (likely(varonce286!=NULL)) {
var287 = varonce286;
} else {
var288 = "pipe";
var290 = (val*)(4l<<2|1);
var291 = (val*)(4l<<2|1);
var292 = (val*)((long)(0)<<2|3);
var293 = (val*)((long)(0)<<2|3);
var289 = core__flat___CString___to_s_unsafe(var288, var290, var291, var292, var293);
var287 = var289;
varonce286 = var287;
}
{
((void(*)(val* self, val* p0))(var285->class->vft[COLOR_nitcc__grammar__Element__name_61d]))(var285, var287); /* name= on <var285:Token>*/
}
{
((void(*)(val* self))(var285->class->vft[COLOR_core__kernel__Object__init]))(var285); /* init on <var285:Token>*/
}
var_t_pipe = var285;
var294 = NEW_nitcc__Token(&type_nitcc__Token);
if (likely(varonce295!=NULL)) {
var296 = varonce295;
} else {
var297 = "star";
var299 = (val*)(4l<<2|1);
var300 = (val*)(4l<<2|1);
var301 = (val*)((long)(0)<<2|3);
var302 = (val*)((long)(0)<<2|3);
var298 = core__flat___CString___to_s_unsafe(var297, var299, var300, var301, var302);
var296 = var298;
varonce295 = var296;
}
{
((void(*)(val* self, val* p0))(var294->class->vft[COLOR_nitcc__grammar__Element__name_61d]))(var294, var296); /* name= on <var294:Token>*/
}
{
((void(*)(val* self))(var294->class->vft[COLOR_core__kernel__Object__init]))(var294); /* init on <var294:Token>*/
}
var_t_star = var294;
var303 = NEW_nitcc__Token(&type_nitcc__Token);
if (likely(varonce304!=NULL)) {
var305 = varonce304;
} else {
var306 = "ques";
var308 = (val*)(4l<<2|1);
var309 = (val*)(4l<<2|1);
var310 = (val*)((long)(0)<<2|3);
var311 = (val*)((long)(0)<<2|3);
var307 = core__flat___CString___to_s_unsafe(var306, var308, var309, var310, var311);
var305 = var307;
varonce304 = var305;
}
{
((void(*)(val* self, val* p0))(var303->class->vft[COLOR_nitcc__grammar__Element__name_61d]))(var303, var305); /* name= on <var303:Token>*/
}
{
((void(*)(val* self))(var303->class->vft[COLOR_core__kernel__Object__init]))(var303); /* init on <var303:Token>*/
}
var_t_ques = var303;
var312 = NEW_nitcc__Token(&type_nitcc__Token);
if (likely(varonce313!=NULL)) {
var314 = varonce313;
} else {
var315 = "plus";
var317 = (val*)(4l<<2|1);
var318 = (val*)(4l<<2|1);
var319 = (val*)((long)(0)<<2|3);
var320 = (val*)((long)(0)<<2|3);
var316 = core__flat___CString___to_s_unsafe(var315, var317, var318, var319, var320);
var314 = var316;
varonce313 = var314;
}
{
((void(*)(val* self, val* p0))(var312->class->vft[COLOR_nitcc__grammar__Element__name_61d]))(var312, var314); /* name= on <var312:Token>*/
}
{
((void(*)(val* self))(var312->class->vft[COLOR_core__kernel__Object__init]))(var312); /* init on <var312:Token>*/
}
var_t_plus = var312;
var321 = NEW_nitcc__Token(&type_nitcc__Token);
if (likely(varonce322!=NULL)) {
var323 = varonce322;
} else {
var324 = "minus";
var326 = (val*)(5l<<2|1);
var327 = (val*)(5l<<2|1);
var328 = (val*)((long)(0)<<2|3);
var329 = (val*)((long)(0)<<2|3);
var325 = core__flat___CString___to_s_unsafe(var324, var326, var327, var328, var329);
var323 = var325;
varonce322 = var323;
}
{
((void(*)(val* self, val* p0))(var321->class->vft[COLOR_nitcc__grammar__Element__name_61d]))(var321, var323); /* name= on <var321:Token>*/
}
{
((void(*)(val* self))(var321->class->vft[COLOR_core__kernel__Object__init]))(var321); /* init on <var321:Token>*/
}
var_t_minus = var321;
var330 = NEW_nitcc__Token(&type_nitcc__Token);
if (likely(varonce331!=NULL)) {
var332 = varonce331;
} else {
var333 = "comma";
var335 = (val*)(5l<<2|1);
var336 = (val*)(5l<<2|1);
var337 = (val*)((long)(0)<<2|3);
var338 = (val*)((long)(0)<<2|3);
var334 = core__flat___CString___to_s_unsafe(var333, var335, var336, var337, var338);
var332 = var334;
varonce331 = var332;
}
{
((void(*)(val* self, val* p0))(var330->class->vft[COLOR_nitcc__grammar__Element__name_61d]))(var330, var332); /* name= on <var330:Token>*/
}
{
((void(*)(val* self))(var330->class->vft[COLOR_core__kernel__Object__init]))(var330); /* init on <var330:Token>*/
}
var_t_comma = var330;
var339 = NEW_nitcc__Token(&type_nitcc__Token);
if (likely(varonce340!=NULL)) {
var341 = varonce340;
} else {
var342 = "colo";
var344 = (val*)(4l<<2|1);
var345 = (val*)(4l<<2|1);
var346 = (val*)((long)(0)<<2|3);
var347 = (val*)((long)(0)<<2|3);
var343 = core__flat___CString___to_s_unsafe(var342, var344, var345, var346, var347);
var341 = var343;
varonce340 = var341;
}
{
((void(*)(val* self, val* p0))(var339->class->vft[COLOR_nitcc__grammar__Element__name_61d]))(var339, var341); /* name= on <var339:Token>*/
}
{
((void(*)(val* self))(var339->class->vft[COLOR_core__kernel__Object__init]))(var339); /* init on <var339:Token>*/
}
var_t_colo = var339;
var348 = NEW_nitcc__Token(&type_nitcc__Token);
if (likely(varonce349!=NULL)) {
var350 = varonce349;
} else {
var351 = "semi";
var353 = (val*)(4l<<2|1);
var354 = (val*)(4l<<2|1);
var355 = (val*)((long)(0)<<2|3);
var356 = (val*)((long)(0)<<2|3);
var352 = core__flat___CString___to_s_unsafe(var351, var353, var354, var355, var356);
var350 = var352;
varonce349 = var350;
}
{
((void(*)(val* self, val* p0))(var348->class->vft[COLOR_nitcc__grammar__Element__name_61d]))(var348, var350); /* name= on <var348:Token>*/
}
{
((void(*)(val* self))(var348->class->vft[COLOR_core__kernel__Object__init]))(var348); /* init on <var348:Token>*/
}
var_t_semi = var348;
var357 = NEW_nitcc__Token(&type_nitcc__Token);
if (likely(varonce358!=NULL)) {
var359 = varonce358;
} else {
var360 = "dot";
var362 = (val*)(3l<<2|1);
var363 = (val*)(3l<<2|1);
var364 = (val*)((long)(0)<<2|3);
var365 = (val*)((long)(0)<<2|3);
var361 = core__flat___CString___to_s_unsafe(var360, var362, var363, var364, var365);
var359 = var361;
varonce358 = var359;
}
{
((void(*)(val* self, val* p0))(var357->class->vft[COLOR_nitcc__grammar__Element__name_61d]))(var357, var359); /* name= on <var357:Token>*/
}
{
((void(*)(val* self))(var357->class->vft[COLOR_core__kernel__Object__init]))(var357); /* init on <var357:Token>*/
}
var_t_dot = var357;
var366 = NEW_nitcc__Token(&type_nitcc__Token);
if (likely(varonce367!=NULL)) {
var368 = varonce367;
} else {
var369 = "eq";
var371 = (val*)(2l<<2|1);
var372 = (val*)(2l<<2|1);
var373 = (val*)((long)(0)<<2|3);
var374 = (val*)((long)(0)<<2|3);
var370 = core__flat___CString___to_s_unsafe(var369, var371, var372, var373, var374);
var368 = var370;
varonce367 = var368;
}
{
((void(*)(val* self, val* p0))(var366->class->vft[COLOR_nitcc__grammar__Element__name_61d]))(var366, var368); /* name= on <var366:Token>*/
}
{
((void(*)(val* self))(var366->class->vft[COLOR_core__kernel__Object__init]))(var366); /* init on <var366:Token>*/
}
var_t_eq = var366;
var375 = NEW_nitcc__Token(&type_nitcc__Token);
if (likely(varonce376!=NULL)) {
var377 = varonce376;
} else {
var378 = "arrow";
var380 = (val*)(5l<<2|1);
var381 = (val*)(5l<<2|1);
var382 = (val*)((long)(0)<<2|3);
var383 = (val*)((long)(0)<<2|3);
var379 = core__flat___CString___to_s_unsafe(var378, var380, var381, var382, var383);
var377 = var379;
varonce376 = var377;
}
{
((void(*)(val* self, val* p0))(var375->class->vft[COLOR_nitcc__grammar__Element__name_61d]))(var375, var377); /* name= on <var375:Token>*/
}
{
((void(*)(val* self))(var375->class->vft[COLOR_core__kernel__Object__init]))(var375); /* init on <var375:Token>*/
}
var_t_arrow = var375;
var384 = NEW_nitcc__Token(&type_nitcc__Token);
if (likely(varonce385!=NULL)) {
var386 = varonce385;
} else {
var387 = "str";
var389 = (val*)(3l<<2|1);
var390 = (val*)(3l<<2|1);
var391 = (val*)((long)(0)<<2|3);
var392 = (val*)((long)(0)<<2|3);
var388 = core__flat___CString___to_s_unsafe(var387, var389, var390, var391, var392);
var386 = var388;
varonce385 = var386;
}
{
((void(*)(val* self, val* p0))(var384->class->vft[COLOR_nitcc__grammar__Element__name_61d]))(var384, var386); /* name= on <var384:Token>*/
}
{
((void(*)(val* self))(var384->class->vft[COLOR_core__kernel__Object__init]))(var384); /* init on <var384:Token>*/
}
var_t_str = var384;
var393 = NEW_nitcc__Token(&type_nitcc__Token);
if (likely(varonce394!=NULL)) {
var395 = varonce394;
} else {
var396 = "id";
var398 = (val*)(2l<<2|1);
var399 = (val*)(2l<<2|1);
var400 = (val*)((long)(0)<<2|3);
var401 = (val*)((long)(0)<<2|3);
var397 = core__flat___CString___to_s_unsafe(var396, var398, var399, var400, var401);
var395 = var397;
varonce394 = var395;
}
{
((void(*)(val* self, val* p0))(var393->class->vft[COLOR_nitcc__grammar__Element__name_61d]))(var393, var395); /* name= on <var393:Token>*/
}
{
((void(*)(val* self))(var393->class->vft[COLOR_core__kernel__Object__init]))(var393); /* init on <var393:Token>*/
}
var_t_id = var393;
var402 = NEW_nitcc__Token(&type_nitcc__Token);
if (likely(varonce403!=NULL)) {
var404 = varonce403;
} else {
var405 = "kw";
var407 = (val*)(2l<<2|1);
var408 = (val*)(2l<<2|1);
var409 = (val*)((long)(0)<<2|3);
var410 = (val*)((long)(0)<<2|3);
var406 = core__flat___CString___to_s_unsafe(var405, var407, var408, var409, var410);
var404 = var406;
varonce403 = var404;
}
{
((void(*)(val* self, val* p0))(var402->class->vft[COLOR_nitcc__grammar__Element__name_61d]))(var402, var404); /* name= on <var402:Token>*/
}
{
((void(*)(val* self))(var402->class->vft[COLOR_core__kernel__Object__init]))(var402); /* init on <var402:Token>*/
}
var_t_kw = var402;
var411 = NEW_nitcc__Token(&type_nitcc__Token);
if (likely(varonce412!=NULL)) {
var413 = varonce412;
} else {
var414 = "any";
var416 = (val*)(3l<<2|1);
var417 = (val*)(3l<<2|1);
var418 = (val*)((long)(0)<<2|3);
var419 = (val*)((long)(0)<<2|3);
var415 = core__flat___CString___to_s_unsafe(var414, var416, var417, var418, var419);
var413 = var415;
varonce412 = var413;
}
{
((void(*)(val* self, val* p0))(var411->class->vft[COLOR_nitcc__grammar__Element__name_61d]))(var411, var413); /* name= on <var411:Token>*/
}
{
((void(*)(val* self))(var411->class->vft[COLOR_core__kernel__Object__init]))(var411); /* init on <var411:Token>*/
}
var_t_any = var411;
var420 = NEW_nitcc__Token(&type_nitcc__Token);
if (likely(varonce421!=NULL)) {
var422 = varonce421;
} else {
var423 = "end";
var425 = (val*)(3l<<2|1);
var426 = (val*)(3l<<2|1);
var427 = (val*)((long)(0)<<2|3);
var428 = (val*)((long)(0)<<2|3);
var424 = core__flat___CString___to_s_unsafe(var423, var425, var426, var427, var428);
var422 = var424;
varonce421 = var422;
}
{
((void(*)(val* self, val* p0))(var420->class->vft[COLOR_nitcc__grammar__Element__name_61d]))(var420, var422); /* name= on <var420:Token>*/
}
{
((void(*)(val* self))(var420->class->vft[COLOR_core__kernel__Object__init]))(var420); /* init on <var420:Token>*/
}
var_t_end = var420;
var429 = NEW_nitcc__Token(&type_nitcc__Token);
if (likely(varonce430!=NULL)) {
var431 = varonce430;
} else {
var432 = "and";
var434 = (val*)(3l<<2|1);
var435 = (val*)(3l<<2|1);
var436 = (val*)((long)(0)<<2|3);
var437 = (val*)((long)(0)<<2|3);
var433 = core__flat___CString___to_s_unsafe(var432, var434, var435, var436, var437);
var431 = var433;
varonce430 = var431;
}
{
((void(*)(val* self, val* p0))(var429->class->vft[COLOR_nitcc__grammar__Element__name_61d]))(var429, var431); /* name= on <var429:Token>*/
}
{
((void(*)(val* self))(var429->class->vft[COLOR_core__kernel__Object__init]))(var429); /* init on <var429:Token>*/
}
var_t_and = var429;
var438 = NEW_nitcc__Token(&type_nitcc__Token);
if (likely(varonce439!=NULL)) {
var440 = varonce439;
} else {
var441 = "except";
var443 = (val*)(6l<<2|1);
var444 = (val*)(6l<<2|1);
var445 = (val*)((long)(0)<<2|3);
var446 = (val*)((long)(0)<<2|3);
var442 = core__flat___CString___to_s_unsafe(var441, var443, var444, var445, var446);
var440 = var442;
varonce439 = var440;
}
{
((void(*)(val* self, val* p0))(var438->class->vft[COLOR_nitcc__grammar__Element__name_61d]))(var438, var440); /* name= on <var438:Token>*/
}
{
((void(*)(val* self))(var438->class->vft[COLOR_core__kernel__Object__init]))(var438); /* init on <var438:Token>*/
}
var_t_except = var438;
var447 = NEW_nitcc__Token(&type_nitcc__Token);
if (likely(varonce448!=NULL)) {
var449 = varonce448;
} else {
var450 = "shortest";
var452 = (val*)(8l<<2|1);
var453 = (val*)(8l<<2|1);
var454 = (val*)((long)(0)<<2|3);
var455 = (val*)((long)(0)<<2|3);
var451 = core__flat___CString___to_s_unsafe(var450, var452, var453, var454, var455);
var449 = var451;
varonce448 = var449;
}
{
((void(*)(val* self, val* p0))(var447->class->vft[COLOR_nitcc__grammar__Element__name_61d]))(var447, var449); /* name= on <var447:Token>*/
}
{
((void(*)(val* self))(var447->class->vft[COLOR_core__kernel__Object__init]))(var447); /* init on <var447:Token>*/
}
var_t_shortest = var447;
var456 = NEW_nitcc__Token(&type_nitcc__Token);
if (likely(varonce457!=NULL)) {
var458 = varonce457;
} else {
var459 = "longest";
var461 = (val*)(7l<<2|1);
var462 = (val*)(7l<<2|1);
var463 = (val*)((long)(0)<<2|3);
var464 = (val*)((long)(0)<<2|3);
var460 = core__flat___CString___to_s_unsafe(var459, var461, var462, var463, var464);
var458 = var460;
varonce457 = var458;
}
{
((void(*)(val* self, val* p0))(var456->class->vft[COLOR_nitcc__grammar__Element__name_61d]))(var456, var458); /* name= on <var456:Token>*/
}
{
((void(*)(val* self))(var456->class->vft[COLOR_core__kernel__Object__init]))(var456); /* init on <var456:Token>*/
}
var_t_longest = var456;
var465 = NEW_nitcc__Token(&type_nitcc__Token);
if (likely(varonce466!=NULL)) {
var467 = varonce466;
} else {
var468 = "prefixes";
var470 = (val*)(8l<<2|1);
var471 = (val*)(8l<<2|1);
var472 = (val*)((long)(0)<<2|3);
var473 = (val*)((long)(0)<<2|3);
var469 = core__flat___CString___to_s_unsafe(var468, var470, var471, var472, var473);
var467 = var469;
varonce466 = var467;
}
{
((void(*)(val* self, val* p0))(var465->class->vft[COLOR_nitcc__grammar__Element__name_61d]))(var465, var467); /* name= on <var465:Token>*/
}
{
((void(*)(val* self))(var465->class->vft[COLOR_core__kernel__Object__init]))(var465); /* init on <var465:Token>*/
}
var_t_prefixes = var465;
var474 = NEW_nitcc__Token(&type_nitcc__Token);
if (likely(varonce475!=NULL)) {
var476 = varonce475;
} else {
var477 = "ch_dec";
var479 = (val*)(6l<<2|1);
var480 = (val*)(6l<<2|1);
var481 = (val*)((long)(0)<<2|3);
var482 = (val*)((long)(0)<<2|3);
var478 = core__flat___CString___to_s_unsafe(var477, var479, var480, var481, var482);
var476 = var478;
varonce475 = var476;
}
{
((void(*)(val* self, val* p0))(var474->class->vft[COLOR_nitcc__grammar__Element__name_61d]))(var474, var476); /* name= on <var474:Token>*/
}
{
((void(*)(val* self))(var474->class->vft[COLOR_core__kernel__Object__init]))(var474); /* init on <var474:Token>*/
}
var_t_ch_dec = var474;
var483 = NEW_nitcc__Token(&type_nitcc__Token);
if (likely(varonce484!=NULL)) {
var485 = varonce484;
} else {
var486 = "ch_hex";
var488 = (val*)(6l<<2|1);
var489 = (val*)(6l<<2|1);
var490 = (val*)((long)(0)<<2|3);
var491 = (val*)((long)(0)<<2|3);
var487 = core__flat___CString___to_s_unsafe(var486, var488, var489, var490, var491);
var485 = var487;
varonce484 = var485;
}
{
((void(*)(val* self, val* p0))(var483->class->vft[COLOR_nitcc__grammar__Element__name_61d]))(var483, var485); /* name= on <var483:Token>*/
}
{
((void(*)(val* self))(var483->class->vft[COLOR_core__kernel__Object__init]))(var483); /* init on <var483:Token>*/
}
var_t_ch_hex = var483;
{
var492 = ((val*(*)(val* self))(var_g->class->vft[COLOR_nitcc__grammar__Gram__tokens]))(var_g); /* tokens on <var_g:Gram>*/
}
var493 = NEW_core__Array(&type_core__Array__nitcc__Token);
{
((void(*)(val* self, long p0))(var493->class->vft[COLOR_core__array__Array__with_capacity]))(var493, 27l); /* with_capacity on <var493:Array[Token]>*/
}
var_494 = var493;
{
((void(*)(val* self, val* p0))(var_494->class->vft[COLOR_core__abstract_collection__Sequence__push]))(var_494, var_t_opar); /* push on <var_494:Array[Token]>*/
}
{
((void(*)(val* self, val* p0))(var_494->class->vft[COLOR_core__abstract_collection__Sequence__push]))(var_494, var_t_cpar); /* push on <var_494:Array[Token]>*/
}
{
((void(*)(val* self, val* p0))(var_494->class->vft[COLOR_core__abstract_collection__Sequence__push]))(var_494, var_t_ocur); /* push on <var_494:Array[Token]>*/
}
{
((void(*)(val* self, val* p0))(var_494->class->vft[COLOR_core__abstract_collection__Sequence__push]))(var_494, var_t_ccur); /* push on <var_494:Array[Token]>*/
}
{
((void(*)(val* self, val* p0))(var_494->class->vft[COLOR_core__abstract_collection__Sequence__push]))(var_494, var_t_pipe); /* push on <var_494:Array[Token]>*/
}
{
((void(*)(val* self, val* p0))(var_494->class->vft[COLOR_core__abstract_collection__Sequence__push]))(var_494, var_t_star); /* push on <var_494:Array[Token]>*/
}
{
((void(*)(val* self, val* p0))(var_494->class->vft[COLOR_core__abstract_collection__Sequence__push]))(var_494, var_t_ques); /* push on <var_494:Array[Token]>*/
}
{
((void(*)(val* self, val* p0))(var_494->class->vft[COLOR_core__abstract_collection__Sequence__push]))(var_494, var_t_plus); /* push on <var_494:Array[Token]>*/
}
{
((void(*)(val* self, val* p0))(var_494->class->vft[COLOR_core__abstract_collection__Sequence__push]))(var_494, var_t_minus); /* push on <var_494:Array[Token]>*/
}
{
((void(*)(val* self, val* p0))(var_494->class->vft[COLOR_core__abstract_collection__Sequence__push]))(var_494, var_t_comma); /* push on <var_494:Array[Token]>*/
}
{
((void(*)(val* self, val* p0))(var_494->class->vft[COLOR_core__abstract_collection__Sequence__push]))(var_494, var_t_colo); /* push on <var_494:Array[Token]>*/
}
{
((void(*)(val* self, val* p0))(var_494->class->vft[COLOR_core__abstract_collection__Sequence__push]))(var_494, var_t_semi); /* push on <var_494:Array[Token]>*/
}
{
((void(*)(val* self, val* p0))(var_494->class->vft[COLOR_core__abstract_collection__Sequence__push]))(var_494, var_t_dot); /* push on <var_494:Array[Token]>*/
}
{
((void(*)(val* self, val* p0))(var_494->class->vft[COLOR_core__abstract_collection__Sequence__push]))(var_494, var_t_eq); /* push on <var_494:Array[Token]>*/
}
{
((void(*)(val* self, val* p0))(var_494->class->vft[COLOR_core__abstract_collection__Sequence__push]))(var_494, var_t_arrow); /* push on <var_494:Array[Token]>*/
}
{
((void(*)(val* self, val* p0))(var_494->class->vft[COLOR_core__abstract_collection__Sequence__push]))(var_494, var_t_str); /* push on <var_494:Array[Token]>*/
}
{
((void(*)(val* self, val* p0))(var_494->class->vft[COLOR_core__abstract_collection__Sequence__push]))(var_494, var_t_id); /* push on <var_494:Array[Token]>*/
}
{
((void(*)(val* self, val* p0))(var_494->class->vft[COLOR_core__abstract_collection__Sequence__push]))(var_494, var_t_kw); /* push on <var_494:Array[Token]>*/
}
{
((void(*)(val* self, val* p0))(var_494->class->vft[COLOR_core__abstract_collection__Sequence__push]))(var_494, var_t_any); /* push on <var_494:Array[Token]>*/
}
{
((void(*)(val* self, val* p0))(var_494->class->vft[COLOR_core__abstract_collection__Sequence__push]))(var_494, var_t_end); /* push on <var_494:Array[Token]>*/
}
{
((void(*)(val* self, val* p0))(var_494->class->vft[COLOR_core__abstract_collection__Sequence__push]))(var_494, var_t_and); /* push on <var_494:Array[Token]>*/
}
{
((void(*)(val* self, val* p0))(var_494->class->vft[COLOR_core__abstract_collection__Sequence__push]))(var_494, var_t_except); /* push on <var_494:Array[Token]>*/
}
{
((void(*)(val* self, val* p0))(var_494->class->vft[COLOR_core__abstract_collection__Sequence__push]))(var_494, var_t_shortest); /* push on <var_494:Array[Token]>*/
}
{
((void(*)(val* self, val* p0))(var_494->class->vft[COLOR_core__abstract_collection__Sequence__push]))(var_494, var_t_longest); /* push on <var_494:Array[Token]>*/
}
{
((void(*)(val* self, val* p0))(var_494->class->vft[COLOR_core__abstract_collection__Sequence__push]))(var_494, var_t_prefixes); /* push on <var_494:Array[Token]>*/
}
{
((void(*)(val* self, val* p0))(var_494->class->vft[COLOR_core__abstract_collection__Sequence__push]))(var_494, var_t_ch_dec); /* push on <var_494:Array[Token]>*/
}
{
((void(*)(val* self, val* p0))(var_494->class->vft[COLOR_core__abstract_collection__Sequence__push]))(var_494, var_t_ch_hex); /* push on <var_494:Array[Token]>*/
}
{
((void(*)(val* self, val* p0))(var492->class->vft[COLOR_core__abstract_collection__SimpleCollection__add_all]))(var492, var_494); /* add_all on <var492:Array[Token]>*/
}
if (likely(varonce495!=NULL)) {
var496 = varonce495;
} else {
var497 = "gr";
var499 = (val*)(2l<<2|1);
var500 = (val*)(2l<<2|1);
var501 = (val*)((long)(0)<<2|3);
var502 = (val*)((long)(0)<<2|3);
var498 = core__flat___CString___to_s_unsafe(var497, var499, var500, var501, var502);
var496 = var498;
varonce495 = var496;
}
var503 = NEW_core__Array(&type_core__Array__nitcc__Element);
{ /* var503 = array_instance Array[Element] */
var504 = NEW_core__NativeArray((int)5l, &type_core__NativeArray__nitcc__Element);
((struct instance_core__NativeArray*)var504)->values[0] = (val*) var_t_kw;
((struct instance_core__NativeArray*)var504)->values[1] = (val*) var_t_id;
((struct instance_core__NativeArray*)var504)->values[2] = (val*) var_t_semi;
((struct instance_core__NativeArray*)var504)->values[3] = (val*) var_p_lex;
((struct instance_core__NativeArray*)var504)->values[4] = (val*) var_p_par;
{
((void(*)(val* self, val* p0, long p1))(var503->class->vft[COLOR_core__array__Array__with_native]))(var503, var504, 5l); /* with_native on <var503:Array[Element]>*/
}
}
{
var505 = ((val*(*)(val* self, val* p0, val* p1))(var_p_gr->class->vft[COLOR_nitcc__grammar__Production__new_alt]))(var_p_gr, var496, var503); /* new_alt on <var_p_gr:Production>*/
}
if (likely(varonce506!=NULL)) {
var507 = varonce506;
} else {
var508 = "lex";
var510 = (val*)(3l<<2|1);
var511 = (val*)(3l<<2|1);
var512 = (val*)((long)(0)<<2|3);
var513 = (val*)((long)(0)<<2|3);
var509 = core__flat___CString___to_s_unsafe(var508, var510, var511, var512, var513);
var507 = var509;
varonce506 = var507;
}
var514 = NEW_core__Array(&type_core__Array__nitcc__Element);
{ /* var514 = array_instance Array[Element] */
var515 = NEW_core__NativeArray((int)2l, &type_core__NativeArray__nitcc__Element);
((struct instance_core__NativeArray*)var515)->values[0] = (val*) var_t_kw;
((struct instance_core__NativeArray*)var515)->values[1] = (val*) var_p_exprs;
{
((void(*)(val* self, val* p0, long p1))(var514->class->vft[COLOR_core__array__Array__with_native]))(var514, var515, 2l); /* with_native on <var514:Array[Element]>*/
}
}
{
var516 = ((val*(*)(val* self, val* p0, val* p1))(var_p_lex->class->vft[COLOR_nitcc__grammar__Production__new_alt]))(var_p_lex, var507, var514); /* new_alt on <var_p_lex:Production>*/
}
if (likely(varonce517!=NULL)) {
var518 = varonce517;
} else {
var519 = "exprs_many";
var521 = (val*)(10l<<2|1);
var522 = (val*)(10l<<2|1);
var523 = (val*)((long)(0)<<2|3);
var524 = (val*)((long)(0)<<2|3);
var520 = core__flat___CString___to_s_unsafe(var519, var521, var522, var523, var524);
var518 = var520;
varonce517 = var518;
}
var525 = NEW_core__Array(&type_core__Array__nitcc__Element);
{ /* var525 = array_instance Array[Element] */
var526 = NEW_core__NativeArray((int)2l, &type_core__NativeArray__nitcc__Element);
((struct instance_core__NativeArray*)var526)->values[0] = (val*) var_p_exprs;
((struct instance_core__NativeArray*)var526)->values[1] = (val*) var_p_expr;
{
((void(*)(val* self, val* p0, long p1))(var525->class->vft[COLOR_core__array__Array__with_native]))(var525, var526, 2l); /* with_native on <var525:Array[Element]>*/
}
}
{
var527 = ((val*(*)(val* self, val* p0, val* p1))(var_p_exprs->class->vft[COLOR_nitcc__grammar__Production__new_alt]))(var_p_exprs, var518, var525); /* new_alt on <var_p_exprs:Production>*/
}
if (likely(varonce528!=NULL)) {
var529 = varonce528;
} else {
var530 = "exprs_none";
var532 = (val*)(10l<<2|1);
var533 = (val*)(10l<<2|1);
var534 = (val*)((long)(0)<<2|3);
var535 = (val*)((long)(0)<<2|3);
var531 = core__flat___CString___to_s_unsafe(var530, var532, var533, var534, var535);
var529 = var531;
varonce528 = var529;
}
{
var536 = ((val*(*)(val* self, val* p0))(var_p_exprs->class->vft[COLOR_nitcc__grammar__Production__new_alt0]))(var_p_exprs, var529); /* new_alt0 on <var_p_exprs:Production>*/
}
if (likely(varonce537!=NULL)) {
var538 = varonce537;
} else {
var539 = "expr";
var541 = (val*)(4l<<2|1);
var542 = (val*)(4l<<2|1);
var543 = (val*)((long)(0)<<2|3);
var544 = (val*)((long)(0)<<2|3);
var540 = core__flat___CString___to_s_unsafe(var539, var541, var542, var543, var544);
var538 = var540;
varonce537 = var538;
}
var545 = NEW_core__Array(&type_core__Array__nitcc__Element);
{ /* var545 = array_instance Array[Element] */
var546 = NEW_core__NativeArray((int)4l, &type_core__NativeArray__nitcc__Element);
((struct instance_core__NativeArray*)var546)->values[0] = (val*) var_t_id;
((struct instance_core__NativeArray*)var546)->values[1] = (val*) var_t_eq;
((struct instance_core__NativeArray*)var546)->values[2] = (val*) var_p_re;
((struct instance_core__NativeArray*)var546)->values[3] = (val*) var_t_semi;
{
((void(*)(val* self, val* p0, long p1))(var545->class->vft[COLOR_core__array__Array__with_native]))(var545, var546, 4l); /* with_native on <var545:Array[Element]>*/
}
}
{
var547 = ((val*(*)(val* self, val* p0, val* p1))(var_p_expr->class->vft[COLOR_nitcc__grammar__Production__new_alt]))(var_p_expr, var538, var545); /* new_alt on <var_p_expr:Production>*/
}
if (likely(varonce548!=NULL)) {
var549 = varonce548;
} else {
var550 = "re_alter";
var552 = (val*)(8l<<2|1);
var553 = (val*)(8l<<2|1);
var554 = (val*)((long)(0)<<2|3);
var555 = (val*)((long)(0)<<2|3);
var551 = core__flat___CString___to_s_unsafe(var550, var552, var553, var554, var555);
var549 = var551;
varonce548 = var549;
}
var556 = NEW_core__Array(&type_core__Array__nitcc__Element);
{ /* var556 = array_instance Array[Element] */
var557 = NEW_core__NativeArray((int)3l, &type_core__NativeArray__nitcc__Element);
((struct instance_core__NativeArray*)var557)->values[0] = (val*) var_p_re;
((struct instance_core__NativeArray*)var557)->values[1] = (val*) var_t_pipe;
((struct instance_core__NativeArray*)var557)->values[2] = (val*) var_p_re1;
{
((void(*)(val* self, val* p0, long p1))(var556->class->vft[COLOR_core__array__Array__with_native]))(var556, var557, 3l); /* with_native on <var556:Array[Element]>*/
}
}
{
var558 = ((val*(*)(val* self, val* p0, val* p1))(var_p_re->class->vft[COLOR_nitcc__grammar__Production__new_alt]))(var_p_re, var549, var556); /* new_alt on <var_p_re:Production>*/
}
if (likely(varonce559!=NULL)) {
var560 = varonce559;
} else {
var561 = "re_re2";
var563 = (val*)(6l<<2|1);
var564 = (val*)(6l<<2|1);
var565 = (val*)((long)(0)<<2|3);
var566 = (val*)((long)(0)<<2|3);
var562 = core__flat___CString___to_s_unsafe(var561, var563, var564, var565, var566);
var560 = var562;
varonce559 = var560;
}
var567 = NEW_core__Array(&type_core__Array__nitcc__Element);
{ /* var567 = array_instance Array[Element] */
var568 = NEW_core__NativeArray((int)1l, &type_core__NativeArray__nitcc__Element);
((struct instance_core__NativeArray*)var568)->values[0] = (val*) var_p_re1;
{
((void(*)(val* self, val* p0, long p1))(var567->class->vft[COLOR_core__array__Array__with_native]))(var567, var568, 1l); /* with_native on <var567:Array[Element]>*/
}
}
{
var569 = ((val*(*)(val* self, val* p0, val* p1))(var_p_re->class->vft[COLOR_nitcc__grammar__Production__new_alt]))(var_p_re, var560, var567); /* new_alt on <var_p_re:Production>*/
}
if (likely(varonce570!=NULL)) {
var571 = varonce570;
} else {
var572 = "re_minus";
var574 = (val*)(8l<<2|1);
var575 = (val*)(8l<<2|1);
var576 = (val*)((long)(0)<<2|3);
var577 = (val*)((long)(0)<<2|3);
var573 = core__flat___CString___to_s_unsafe(var572, var574, var575, var576, var577);
var571 = var573;
varonce570 = var571;
}
var578 = NEW_core__Array(&type_core__Array__nitcc__Element);
{ /* var578 = array_instance Array[Element] */
var579 = NEW_core__NativeArray((int)3l, &type_core__NativeArray__nitcc__Element);
((struct instance_core__NativeArray*)var579)->values[0] = (val*) var_p_re1;
((struct instance_core__NativeArray*)var579)->values[1] = (val*) var_t_minus;
((struct instance_core__NativeArray*)var579)->values[2] = (val*) var_p_re2;
{
((void(*)(val* self, val* p0, long p1))(var578->class->vft[COLOR_core__array__Array__with_native]))(var578, var579, 3l); /* with_native on <var578:Array[Element]>*/
}
}
{
var580 = ((val*(*)(val* self, val* p0, val* p1))(var_p_re1->class->vft[COLOR_nitcc__grammar__Production__new_alt]))(var_p_re1, var571, var578); /* new_alt on <var_p_re1:Production>*/
}
if (likely(varonce581!=NULL)) {
var582 = varonce581;
} else {
var583 = "re_except";
var585 = (val*)(9l<<2|1);
var586 = (val*)(9l<<2|1);
var587 = (val*)((long)(0)<<2|3);
var588 = (val*)((long)(0)<<2|3);
var584 = core__flat___CString___to_s_unsafe(var583, var585, var586, var587, var588);
var582 = var584;
varonce581 = var582;
}
var589 = NEW_core__Array(&type_core__Array__nitcc__Element);
{ /* var589 = array_instance Array[Element] */
var590 = NEW_core__NativeArray((int)3l, &type_core__NativeArray__nitcc__Element);
((struct instance_core__NativeArray*)var590)->values[0] = (val*) var_p_re1;
((struct instance_core__NativeArray*)var590)->values[1] = (val*) var_t_and;
((struct instance_core__NativeArray*)var590)->values[2] = (val*) var_p_re2;
{
((void(*)(val* self, val* p0, long p1))(var589->class->vft[COLOR_core__array__Array__with_native]))(var589, var590, 3l); /* with_native on <var589:Array[Element]>*/
}
}
{
var591 = ((val*(*)(val* self, val* p0, val* p1))(var_p_re1->class->vft[COLOR_nitcc__grammar__Production__new_alt]))(var_p_re1, var582, var589); /* new_alt on <var_p_re1:Production>*/
}
if (likely(varonce592!=NULL)) {
var593 = varonce592;
} else {
var594 = "re_and";
var596 = (val*)(6l<<2|1);
var597 = (val*)(6l<<2|1);
var598 = (val*)((long)(0)<<2|3);
var599 = (val*)((long)(0)<<2|3);
var595 = core__flat___CString___to_s_unsafe(var594, var596, var597, var598, var599);
var593 = var595;
varonce592 = var593;
}
var600 = NEW_core__Array(&type_core__Array__nitcc__Element);
{ /* var600 = array_instance Array[Element] */
var601 = NEW_core__NativeArray((int)3l, &type_core__NativeArray__nitcc__Element);
((struct instance_core__NativeArray*)var601)->values[0] = (val*) var_p_re1;
((struct instance_core__NativeArray*)var601)->values[1] = (val*) var_t_except;
((struct instance_core__NativeArray*)var601)->values[2] = (val*) var_p_re2;
{
((void(*)(val* self, val* p0, long p1))(var600->class->vft[COLOR_core__array__Array__with_native]))(var600, var601, 3l); /* with_native on <var600:Array[Element]>*/
}
}
{
var602 = ((val*(*)(val* self, val* p0, val* p1))(var_p_re1->class->vft[COLOR_nitcc__grammar__Production__new_alt]))(var_p_re1, var593, var600); /* new_alt on <var_p_re1:Production>*/
}
if (likely(varonce603!=NULL)) {
var604 = varonce603;
} else {
var605 = "re_re1";
var607 = (val*)(6l<<2|1);
var608 = (val*)(6l<<2|1);
var609 = (val*)((long)(0)<<2|3);
var610 = (val*)((long)(0)<<2|3);
var606 = core__flat___CString___to_s_unsafe(var605, var607, var608, var609, var610);
var604 = var606;
varonce603 = var604;
}
var611 = NEW_core__Array(&type_core__Array__nitcc__Element);
{ /* var611 = array_instance Array[Element] */
var612 = NEW_core__NativeArray((int)1l, &type_core__NativeArray__nitcc__Element);
((struct instance_core__NativeArray*)var612)->values[0] = (val*) var_p_re2;
{
((void(*)(val* self, val* p0, long p1))(var611->class->vft[COLOR_core__array__Array__with_native]))(var611, var612, 1l); /* with_native on <var611:Array[Element]>*/
}
}
{
var613 = ((val*(*)(val* self, val* p0, val* p1))(var_p_re1->class->vft[COLOR_nitcc__grammar__Production__new_alt]))(var_p_re1, var604, var611); /* new_alt on <var_p_re1:Production>*/
}
if (likely(varonce614!=NULL)) {
var615 = varonce614;
} else {
var616 = "re_conc";
var618 = (val*)(7l<<2|1);
var619 = (val*)(7l<<2|1);
var620 = (val*)((long)(0)<<2|3);
var621 = (val*)((long)(0)<<2|3);
var617 = core__flat___CString___to_s_unsafe(var616, var618, var619, var620, var621);
var615 = var617;
varonce614 = var615;
}
var622 = NEW_core__Array(&type_core__Array__nitcc__Element);
{ /* var622 = array_instance Array[Element] */
var623 = NEW_core__NativeArray((int)2l, &type_core__NativeArray__nitcc__Element);
((struct instance_core__NativeArray*)var623)->values[0] = (val*) var_p_re2;
((struct instance_core__NativeArray*)var623)->values[1] = (val*) var_p_re3;
{
((void(*)(val* self, val* p0, long p1))(var622->class->vft[COLOR_core__array__Array__with_native]))(var622, var623, 2l); /* with_native on <var622:Array[Element]>*/
}
}
{
var624 = ((val*(*)(val* self, val* p0, val* p1))(var_p_re2->class->vft[COLOR_nitcc__grammar__Production__new_alt]))(var_p_re2, var615, var622); /* new_alt on <var_p_re2:Production>*/
}
if (likely(varonce625!=NULL)) {
var626 = varonce625;
} else {
var627 = "re_re3";
var629 = (val*)(6l<<2|1);
var630 = (val*)(6l<<2|1);
var631 = (val*)((long)(0)<<2|3);
var632 = (val*)((long)(0)<<2|3);
var628 = core__flat___CString___to_s_unsafe(var627, var629, var630, var631, var632);
var626 = var628;
varonce625 = var626;
}
var633 = NEW_core__Array(&type_core__Array__nitcc__Element);
{ /* var633 = array_instance Array[Element] */
var634 = NEW_core__NativeArray((int)1l, &type_core__NativeArray__nitcc__Element);
((struct instance_core__NativeArray*)var634)->values[0] = (val*) var_p_re3;
{
((void(*)(val* self, val* p0, long p1))(var633->class->vft[COLOR_core__array__Array__with_native]))(var633, var634, 1l); /* with_native on <var633:Array[Element]>*/
}
}
{
var635 = ((val*(*)(val* self, val* p0, val* p1))(var_p_re2->class->vft[COLOR_nitcc__grammar__Production__new_alt]))(var_p_re2, var626, var633); /* new_alt on <var_p_re2:Production>*/
}
if (likely(varonce636!=NULL)) {
var637 = varonce636;
} else {
var638 = "re_star";
var640 = (val*)(7l<<2|1);
var641 = (val*)(7l<<2|1);
var642 = (val*)((long)(0)<<2|3);
var643 = (val*)((long)(0)<<2|3);
var639 = core__flat___CString___to_s_unsafe(var638, var640, var641, var642, var643);
var637 = var639;
varonce636 = var637;
}
var644 = NEW_core__Array(&type_core__Array__nitcc__Element);
{ /* var644 = array_instance Array[Element] */
var645 = NEW_core__NativeArray((int)2l, &type_core__NativeArray__nitcc__Element);
((struct instance_core__NativeArray*)var645)->values[0] = (val*) var_p_re3;
((struct instance_core__NativeArray*)var645)->values[1] = (val*) var_t_star;
{
((void(*)(val* self, val* p0, long p1))(var644->class->vft[COLOR_core__array__Array__with_native]))(var644, var645, 2l); /* with_native on <var644:Array[Element]>*/
}
}
{
var646 = ((val*(*)(val* self, val* p0, val* p1))(var_p_re3->class->vft[COLOR_nitcc__grammar__Production__new_alt]))(var_p_re3, var637, var644); /* new_alt on <var_p_re3:Production>*/
}
if (likely(varonce647!=NULL)) {
var648 = varonce647;
} else {
var649 = "re_ques";
var651 = (val*)(7l<<2|1);
var652 = (val*)(7l<<2|1);
var653 = (val*)((long)(0)<<2|3);
var654 = (val*)((long)(0)<<2|3);
var650 = core__flat___CString___to_s_unsafe(var649, var651, var652, var653, var654);
var648 = var650;
varonce647 = var648;
}
var655 = NEW_core__Array(&type_core__Array__nitcc__Element);
{ /* var655 = array_instance Array[Element] */
var656 = NEW_core__NativeArray((int)2l, &type_core__NativeArray__nitcc__Element);
((struct instance_core__NativeArray*)var656)->values[0] = (val*) var_p_re3;
((struct instance_core__NativeArray*)var656)->values[1] = (val*) var_t_ques;
{
((void(*)(val* self, val* p0, long p1))(var655->class->vft[COLOR_core__array__Array__with_native]))(var655, var656, 2l); /* with_native on <var655:Array[Element]>*/
}
}
{
var657 = ((val*(*)(val* self, val* p0, val* p1))(var_p_re3->class->vft[COLOR_nitcc__grammar__Production__new_alt]))(var_p_re3, var648, var655); /* new_alt on <var_p_re3:Production>*/
}
if (likely(varonce658!=NULL)) {
var659 = varonce658;
} else {
var660 = "re_plus";
var662 = (val*)(7l<<2|1);
var663 = (val*)(7l<<2|1);
var664 = (val*)((long)(0)<<2|3);
var665 = (val*)((long)(0)<<2|3);
var661 = core__flat___CString___to_s_unsafe(var660, var662, var663, var664, var665);
var659 = var661;
varonce658 = var659;
}
var666 = NEW_core__Array(&type_core__Array__nitcc__Element);
{ /* var666 = array_instance Array[Element] */
var667 = NEW_core__NativeArray((int)2l, &type_core__NativeArray__nitcc__Element);
((struct instance_core__NativeArray*)var667)->values[0] = (val*) var_p_re3;
((struct instance_core__NativeArray*)var667)->values[1] = (val*) var_t_plus;
{
((void(*)(val* self, val* p0, long p1))(var666->class->vft[COLOR_core__array__Array__with_native]))(var666, var667, 2l); /* with_native on <var666:Array[Element]>*/
}
}
{
var668 = ((val*(*)(val* self, val* p0, val* p1))(var_p_re3->class->vft[COLOR_nitcc__grammar__Production__new_alt]))(var_p_re3, var659, var666); /* new_alt on <var_p_re3:Production>*/
}
if (likely(varonce669!=NULL)) {
var670 = varonce669;
} else {
var671 = "re_shortest";
var673 = (val*)(11l<<2|1);
var674 = (val*)(11l<<2|1);
var675 = (val*)((long)(0)<<2|3);
var676 = (val*)((long)(0)<<2|3);
var672 = core__flat___CString___to_s_unsafe(var671, var673, var674, var675, var676);
var670 = var672;
varonce669 = var670;
}
var677 = NEW_core__Array(&type_core__Array__nitcc__Element);
{ /* var677 = array_instance Array[Element] */
var678 = NEW_core__NativeArray((int)4l, &type_core__NativeArray__nitcc__Element);
((struct instance_core__NativeArray*)var678)->values[0] = (val*) var_t_shortest;
((struct instance_core__NativeArray*)var678)->values[1] = (val*) var_t_opar;
((struct instance_core__NativeArray*)var678)->values[2] = (val*) var_p_re;
((struct instance_core__NativeArray*)var678)->values[3] = (val*) var_t_cpar;
{
((void(*)(val* self, val* p0, long p1))(var677->class->vft[COLOR_core__array__Array__with_native]))(var677, var678, 4l); /* with_native on <var677:Array[Element]>*/
}
}
{
var679 = ((val*(*)(val* self, val* p0, val* p1))(var_p_re3->class->vft[COLOR_nitcc__grammar__Production__new_alt]))(var_p_re3, var670, var677); /* new_alt on <var_p_re3:Production>*/
}
if (likely(varonce680!=NULL)) {
var681 = varonce680;
} else {
var682 = "re_longest";
var684 = (val*)(10l<<2|1);
var685 = (val*)(10l<<2|1);
var686 = (val*)((long)(0)<<2|3);
var687 = (val*)((long)(0)<<2|3);
var683 = core__flat___CString___to_s_unsafe(var682, var684, var685, var686, var687);
var681 = var683;
varonce680 = var681;
}
var688 = NEW_core__Array(&type_core__Array__nitcc__Element);
{ /* var688 = array_instance Array[Element] */
var689 = NEW_core__NativeArray((int)4l, &type_core__NativeArray__nitcc__Element);
((struct instance_core__NativeArray*)var689)->values[0] = (val*) var_t_longest;
((struct instance_core__NativeArray*)var689)->values[1] = (val*) var_t_opar;
((struct instance_core__NativeArray*)var689)->values[2] = (val*) var_p_re;
((struct instance_core__NativeArray*)var689)->values[3] = (val*) var_t_cpar;
{
((void(*)(val* self, val* p0, long p1))(var688->class->vft[COLOR_core__array__Array__with_native]))(var688, var689, 4l); /* with_native on <var688:Array[Element]>*/
}
}
{
var690 = ((val*(*)(val* self, val* p0, val* p1))(var_p_re3->class->vft[COLOR_nitcc__grammar__Production__new_alt]))(var_p_re3, var681, var688); /* new_alt on <var_p_re3:Production>*/
}
if (likely(varonce691!=NULL)) {
var692 = varonce691;
} else {
var693 = "re_prefixes";
var695 = (val*)(11l<<2|1);
var696 = (val*)(11l<<2|1);
var697 = (val*)((long)(0)<<2|3);
var698 = (val*)((long)(0)<<2|3);
var694 = core__flat___CString___to_s_unsafe(var693, var695, var696, var697, var698);
var692 = var694;
varonce691 = var692;
}
var699 = NEW_core__Array(&type_core__Array__nitcc__Element);
{ /* var699 = array_instance Array[Element] */
var700 = NEW_core__NativeArray((int)4l, &type_core__NativeArray__nitcc__Element);
((struct instance_core__NativeArray*)var700)->values[0] = (val*) var_t_prefixes;
((struct instance_core__NativeArray*)var700)->values[1] = (val*) var_t_opar;
((struct instance_core__NativeArray*)var700)->values[2] = (val*) var_p_re;
((struct instance_core__NativeArray*)var700)->values[3] = (val*) var_t_cpar;
{
((void(*)(val* self, val* p0, long p1))(var699->class->vft[COLOR_core__array__Array__with_native]))(var699, var700, 4l); /* with_native on <var699:Array[Element]>*/
}
}
{
var701 = ((val*(*)(val* self, val* p0, val* p1))(var_p_re3->class->vft[COLOR_nitcc__grammar__Production__new_alt]))(var_p_re3, var692, var699); /* new_alt on <var_p_re3:Production>*/
}
if (likely(varonce702!=NULL)) {
var703 = varonce702;
} else {
var704 = "re_par";
var706 = (val*)(6l<<2|1);
var707 = (val*)(6l<<2|1);
var708 = (val*)((long)(0)<<2|3);
var709 = (val*)((long)(0)<<2|3);
var705 = core__flat___CString___to_s_unsafe(var704, var706, var707, var708, var709);
var703 = var705;
varonce702 = var703;
}
var710 = NEW_core__Array(&type_core__Array__nitcc__Element);
{ /* var710 = array_instance Array[Element] */
var711 = NEW_core__NativeArray((int)3l, &type_core__NativeArray__nitcc__Element);
((struct instance_core__NativeArray*)var711)->values[0] = (val*) var_t_opar;
((struct instance_core__NativeArray*)var711)->values[1] = (val*) var_p_re;
((struct instance_core__NativeArray*)var711)->values[2] = (val*) var_t_cpar;
{
((void(*)(val* self, val* p0, long p1))(var710->class->vft[COLOR_core__array__Array__with_native]))(var710, var711, 3l); /* with_native on <var710:Array[Element]>*/
}
}
{
var712 = ((val*(*)(val* self, val* p0, val* p1))(var_p_re3->class->vft[COLOR_nitcc__grammar__Production__new_alt]))(var_p_re3, var703, var710); /* new_alt on <var_p_re3:Production>*/
}
if (likely(varonce713!=NULL)) {
var714 = varonce713;
} else {
var715 = "re_class";
var717 = (val*)(8l<<2|1);
var718 = (val*)(8l<<2|1);
var719 = (val*)((long)(0)<<2|3);
var720 = (val*)((long)(0)<<2|3);
var716 = core__flat___CString___to_s_unsafe(var715, var717, var718, var719, var720);
var714 = var716;
varonce713 = var714;
}
var721 = NEW_core__Array(&type_core__Array__nitcc__Element);
{ /* var721 = array_instance Array[Element] */
var722 = NEW_core__NativeArray((int)4l, &type_core__NativeArray__nitcc__Element);
((struct instance_core__NativeArray*)var722)->values[0] = (val*) var_p_text;
((struct instance_core__NativeArray*)var722)->values[1] = (val*) var_t_dot;
((struct instance_core__NativeArray*)var722)->values[2] = (val*) var_t_dot;
((struct instance_core__NativeArray*)var722)->values[3] = (val*) var_p_text;
{
((void(*)(val* self, val* p0, long p1))(var721->class->vft[COLOR_core__array__Array__with_native]))(var721, var722, 4l); /* with_native on <var721:Array[Element]>*/
}
}
{
var723 = ((val*(*)(val* self, val* p0, val* p1))(var_p_re3->class->vft[COLOR_nitcc__grammar__Production__new_alt]))(var_p_re3, var714, var721); /* new_alt on <var_p_re3:Production>*/
}
if (likely(varonce724!=NULL)) {
var725 = varonce724;
} else {
var726 = "re_openclass";
var728 = (val*)(12l<<2|1);
var729 = (val*)(12l<<2|1);
var730 = (val*)((long)(0)<<2|3);
var731 = (val*)((long)(0)<<2|3);
var727 = core__flat___CString___to_s_unsafe(var726, var728, var729, var730, var731);
var725 = var727;
varonce724 = var725;
}
var732 = NEW_core__Array(&type_core__Array__nitcc__Element);
{ /* var732 = array_instance Array[Element] */
var733 = NEW_core__NativeArray((int)4l, &type_core__NativeArray__nitcc__Element);
((struct instance_core__NativeArray*)var733)->values[0] = (val*) var_p_text;
((struct instance_core__NativeArray*)var733)->values[1] = (val*) var_t_dot;
((struct instance_core__NativeArray*)var733)->values[2] = (val*) var_t_dot;
((struct instance_core__NativeArray*)var733)->values[3] = (val*) var_t_dot;
{
((void(*)(val* self, val* p0, long p1))(var732->class->vft[COLOR_core__array__Array__with_native]))(var732, var733, 4l); /* with_native on <var732:Array[Element]>*/
}
}
{
var734 = ((val*(*)(val* self, val* p0, val* p1))(var_p_re3->class->vft[COLOR_nitcc__grammar__Production__new_alt]))(var_p_re3, var725, var732); /* new_alt on <var_p_re3:Production>*/
}
if (likely(varonce735!=NULL)) {
var736 = varonce735;
} else {
var737 = "re_any";
var739 = (val*)(6l<<2|1);
var740 = (val*)(6l<<2|1);
var741 = (val*)((long)(0)<<2|3);
var742 = (val*)((long)(0)<<2|3);
var738 = core__flat___CString___to_s_unsafe(var737, var739, var740, var741, var742);
var736 = var738;
varonce735 = var736;
}
var743 = NEW_core__Array(&type_core__Array__nitcc__Element);
{ /* var743 = array_instance Array[Element] */
var744 = NEW_core__NativeArray((int)1l, &type_core__NativeArray__nitcc__Element);
((struct instance_core__NativeArray*)var744)->values[0] = (val*) var_t_any;
{
((void(*)(val* self, val* p0, long p1))(var743->class->vft[COLOR_core__array__Array__with_native]))(var743, var744, 1l); /* with_native on <var743:Array[Element]>*/
}
}
{
var745 = ((val*(*)(val* self, val* p0, val* p1))(var_p_re3->class->vft[COLOR_nitcc__grammar__Production__new_alt]))(var_p_re3, var736, var743); /* new_alt on <var_p_re3:Production>*/
}
if (likely(varonce746!=NULL)) {
var747 = varonce746;
} else {
var748 = "re_end";
var750 = (val*)(6l<<2|1);
var751 = (val*)(6l<<2|1);
var752 = (val*)((long)(0)<<2|3);
var753 = (val*)((long)(0)<<2|3);
var749 = core__flat___CString___to_s_unsafe(var748, var750, var751, var752, var753);
var747 = var749;
varonce746 = var747;
}
var754 = NEW_core__Array(&type_core__Array__nitcc__Element);
{ /* var754 = array_instance Array[Element] */
var755 = NEW_core__NativeArray((int)1l, &type_core__NativeArray__nitcc__Element);
((struct instance_core__NativeArray*)var755)->values[0] = (val*) var_t_end;
{
((void(*)(val* self, val* p0, long p1))(var754->class->vft[COLOR_core__array__Array__with_native]))(var754, var755, 1l); /* with_native on <var754:Array[Element]>*/
}
}
{
var756 = ((val*(*)(val* self, val* p0, val* p1))(var_p_re3->class->vft[COLOR_nitcc__grammar__Production__new_alt]))(var_p_re3, var747, var754); /* new_alt on <var_p_re3:Production>*/
}
if (likely(varonce757!=NULL)) {
var758 = varonce757;
} else {
var759 = "re_id";
var761 = (val*)(5l<<2|1);
var762 = (val*)(5l<<2|1);
var763 = (val*)((long)(0)<<2|3);
var764 = (val*)((long)(0)<<2|3);
var760 = core__flat___CString___to_s_unsafe(var759, var761, var762, var763, var764);
var758 = var760;
varonce757 = var758;
}
var765 = NEW_core__Array(&type_core__Array__nitcc__Element);
{ /* var765 = array_instance Array[Element] */
var766 = NEW_core__NativeArray((int)1l, &type_core__NativeArray__nitcc__Element);
((struct instance_core__NativeArray*)var766)->values[0] = (val*) var_t_id;
{
((void(*)(val* self, val* p0, long p1))(var765->class->vft[COLOR_core__array__Array__with_native]))(var765, var766, 1l); /* with_native on <var765:Array[Element]>*/
}
}
{
var767 = ((val*(*)(val* self, val* p0, val* p1))(var_p_re3->class->vft[COLOR_nitcc__grammar__Production__new_alt]))(var_p_re3, var758, var765); /* new_alt on <var_p_re3:Production>*/
}
if (likely(varonce768!=NULL)) {
var769 = varonce768;
} else {
var770 = "re_text";
var772 = (val*)(7l<<2|1);
var773 = (val*)(7l<<2|1);
var774 = (val*)((long)(0)<<2|3);
var775 = (val*)((long)(0)<<2|3);
var771 = core__flat___CString___to_s_unsafe(var770, var772, var773, var774, var775);
var769 = var771;
varonce768 = var769;
}
var776 = NEW_core__Array(&type_core__Array__nitcc__Element);
{ /* var776 = array_instance Array[Element] */
var777 = NEW_core__NativeArray((int)1l, &type_core__NativeArray__nitcc__Element);
((struct instance_core__NativeArray*)var777)->values[0] = (val*) var_p_text;
{
((void(*)(val* self, val* p0, long p1))(var776->class->vft[COLOR_core__array__Array__with_native]))(var776, var777, 1l); /* with_native on <var776:Array[Element]>*/
}
}
{
var778 = ((val*(*)(val* self, val* p0, val* p1))(var_p_re3->class->vft[COLOR_nitcc__grammar__Production__new_alt]))(var_p_re3, var769, var776); /* new_alt on <var_p_re3:Production>*/
}
if (likely(varonce779!=NULL)) {
var780 = varonce779;
} else {
var781 = "re_str";
var783 = (val*)(6l<<2|1);
var784 = (val*)(6l<<2|1);
var785 = (val*)((long)(0)<<2|3);
var786 = (val*)((long)(0)<<2|3);
var782 = core__flat___CString___to_s_unsafe(var781, var783, var784, var785, var786);
var780 = var782;
varonce779 = var780;
}
var787 = NEW_core__Array(&type_core__Array__nitcc__Element);
{ /* var787 = array_instance Array[Element] */
var788 = NEW_core__NativeArray((int)1l, &type_core__NativeArray__nitcc__Element);
((struct instance_core__NativeArray*)var788)->values[0] = (val*) var_t_str;
{
((void(*)(val* self, val* p0, long p1))(var787->class->vft[COLOR_core__array__Array__with_native]))(var787, var788, 1l); /* with_native on <var787:Array[Element]>*/
}
}
{
var789 = ((val*(*)(val* self, val* p0, val* p1))(var_p_text->class->vft[COLOR_nitcc__grammar__Production__new_alt]))(var_p_text, var780, var787); /* new_alt on <var_p_text:Production>*/
}
if (likely(varonce790!=NULL)) {
var791 = varonce790;
} else {
var792 = "re_ch_dec";
var794 = (val*)(9l<<2|1);
var795 = (val*)(9l<<2|1);
var796 = (val*)((long)(0)<<2|3);
var797 = (val*)((long)(0)<<2|3);
var793 = core__flat___CString___to_s_unsafe(var792, var794, var795, var796, var797);
var791 = var793;
varonce790 = var791;
}
var798 = NEW_core__Array(&type_core__Array__nitcc__Element);
{ /* var798 = array_instance Array[Element] */
var799 = NEW_core__NativeArray((int)1l, &type_core__NativeArray__nitcc__Element);
((struct instance_core__NativeArray*)var799)->values[0] = (val*) var_t_ch_dec;
{
((void(*)(val* self, val* p0, long p1))(var798->class->vft[COLOR_core__array__Array__with_native]))(var798, var799, 1l); /* with_native on <var798:Array[Element]>*/
}
}
{
var800 = ((val*(*)(val* self, val* p0, val* p1))(var_p_text->class->vft[COLOR_nitcc__grammar__Production__new_alt]))(var_p_text, var791, var798); /* new_alt on <var_p_text:Production>*/
}
if (likely(varonce801!=NULL)) {
var802 = varonce801;
} else {
var803 = "re_ch_hex";
var805 = (val*)(9l<<2|1);
var806 = (val*)(9l<<2|1);
var807 = (val*)((long)(0)<<2|3);
var808 = (val*)((long)(0)<<2|3);
var804 = core__flat___CString___to_s_unsafe(var803, var805, var806, var807, var808);
var802 = var804;
varonce801 = var802;
}
var809 = NEW_core__Array(&type_core__Array__nitcc__Element);
{ /* var809 = array_instance Array[Element] */
var810 = NEW_core__NativeArray((int)1l, &type_core__NativeArray__nitcc__Element);
((struct instance_core__NativeArray*)var810)->values[0] = (val*) var_t_ch_hex;
{
((void(*)(val* self, val* p0, long p1))(var809->class->vft[COLOR_core__array__Array__with_native]))(var809, var810, 1l); /* with_native on <var809:Array[Element]>*/
}
}
{
var811 = ((val*(*)(val* self, val* p0, val* p1))(var_p_text->class->vft[COLOR_nitcc__grammar__Production__new_alt]))(var_p_text, var802, var809); /* new_alt on <var_p_text:Production>*/
}
if (likely(varonce812!=NULL)) {
var813 = varonce812;
} else {
var814 = "par";
var816 = (val*)(3l<<2|1);
var817 = (val*)(3l<<2|1);
var818 = (val*)((long)(0)<<2|3);
var819 = (val*)((long)(0)<<2|3);
var815 = core__flat___CString___to_s_unsafe(var814, var816, var817, var818, var819);
var813 = var815;
varonce812 = var813;
}
var820 = NEW_core__Array(&type_core__Array__nitcc__Element);
{ /* var820 = array_instance Array[Element] */
var821 = NEW_core__NativeArray((int)4l, &type_core__NativeArray__nitcc__Element);
((struct instance_core__NativeArray*)var821)->values[0] = (val*) var_t_kw;
((struct instance_core__NativeArray*)var821)->values[1] = (val*) var_p_ign;
((struct instance_core__NativeArray*)var821)->values[2] = (val*) var_p_rej;
((struct instance_core__NativeArray*)var821)->values[3] = (val*) var_p_prods;
{
((void(*)(val* self, val* p0, long p1))(var820->class->vft[COLOR_core__array__Array__with_native]))(var820, var821, 4l); /* with_native on <var820:Array[Element]>*/
}
}
{
var822 = ((val*(*)(val* self, val* p0, val* p1))(var_p_par->class->vft[COLOR_nitcc__grammar__Production__new_alt]))(var_p_par, var813, var820); /* new_alt on <var_p_par:Production>*/
}
if (likely(varonce823!=NULL)) {
var824 = varonce823;
} else {
var825 = "ign";
var827 = (val*)(3l<<2|1);
var828 = (val*)(3l<<2|1);
var829 = (val*)((long)(0)<<2|3);
var830 = (val*)((long)(0)<<2|3);
var826 = core__flat___CString___to_s_unsafe(var825, var827, var828, var829, var830);
var824 = var826;
varonce823 = var824;
}
var831 = NEW_core__Array(&type_core__Array__nitcc__Element);
{ /* var831 = array_instance Array[Element] */
var832 = NEW_core__NativeArray((int)3l, &type_core__NativeArray__nitcc__Element);
((struct instance_core__NativeArray*)var832)->values[0] = (val*) var_t_kw;
((struct instance_core__NativeArray*)var832)->values[1] = (val*) var_p_elem_list;
((struct instance_core__NativeArray*)var832)->values[2] = (val*) var_t_semi;
{
((void(*)(val* self, val* p0, long p1))(var831->class->vft[COLOR_core__array__Array__with_native]))(var831, var832, 3l); /* with_native on <var831:Array[Element]>*/
}
}
{
var833 = ((val*(*)(val* self, val* p0, val* p1))(var_p_ign->class->vft[COLOR_nitcc__grammar__Production__new_alt]))(var_p_ign, var824, var831); /* new_alt on <var_p_ign:Production>*/
}
if (likely(varonce834!=NULL)) {
var835 = varonce834;
} else {
var836 = "rej";
var838 = (val*)(3l<<2|1);
var839 = (val*)(3l<<2|1);
var840 = (val*)((long)(0)<<2|3);
var841 = (val*)((long)(0)<<2|3);
var837 = core__flat___CString___to_s_unsafe(var836, var838, var839, var840, var841);
var835 = var837;
varonce834 = var835;
}
var842 = NEW_core__Array(&type_core__Array__nitcc__Element);
{ /* var842 = array_instance Array[Element] */
var843 = NEW_core__NativeArray((int)3l, &type_core__NativeArray__nitcc__Element);
((struct instance_core__NativeArray*)var843)->values[0] = (val*) var_t_kw;
((struct instance_core__NativeArray*)var843)->values[1] = (val*) var_p_elem_list;
((struct instance_core__NativeArray*)var843)->values[2] = (val*) var_t_semi;
{
((void(*)(val* self, val* p0, long p1))(var842->class->vft[COLOR_core__array__Array__with_native]))(var842, var843, 3l); /* with_native on <var842:Array[Element]>*/
}
}
{
var844 = ((val*(*)(val* self, val* p0, val* p1))(var_p_rej->class->vft[COLOR_nitcc__grammar__Production__new_alt]))(var_p_rej, var835, var842); /* new_alt on <var_p_rej:Production>*/
}
if (likely(varonce845!=NULL)) {
var846 = varonce845;
} else {
var847 = "prods_many";
var849 = (val*)(10l<<2|1);
var850 = (val*)(10l<<2|1);
var851 = (val*)((long)(0)<<2|3);
var852 = (val*)((long)(0)<<2|3);
var848 = core__flat___CString___to_s_unsafe(var847, var849, var850, var851, var852);
var846 = var848;
varonce845 = var846;
}
var853 = NEW_core__Array(&type_core__Array__nitcc__Element);
{ /* var853 = array_instance Array[Element] */
var854 = NEW_core__NativeArray((int)2l, &type_core__NativeArray__nitcc__Element);
((struct instance_core__NativeArray*)var854)->values[0] = (val*) var_p_prods;
((struct instance_core__NativeArray*)var854)->values[1] = (val*) var_p_prod;
{
((void(*)(val* self, val* p0, long p1))(var853->class->vft[COLOR_core__array__Array__with_native]))(var853, var854, 2l); /* with_native on <var853:Array[Element]>*/
}
}
{
var855 = ((val*(*)(val* self, val* p0, val* p1))(var_p_prods->class->vft[COLOR_nitcc__grammar__Production__new_alt]))(var_p_prods, var846, var853); /* new_alt on <var_p_prods:Production>*/
}
if (likely(varonce856!=NULL)) {
var857 = varonce856;
} else {
var858 = "prods_none";
var860 = (val*)(10l<<2|1);
var861 = (val*)(10l<<2|1);
var862 = (val*)((long)(0)<<2|3);
var863 = (val*)((long)(0)<<2|3);
var859 = core__flat___CString___to_s_unsafe(var858, var860, var861, var862, var863);
var857 = var859;
varonce856 = var857;
}
{
var864 = ((val*(*)(val* self, val* p0))(var_p_prods->class->vft[COLOR_nitcc__grammar__Production__new_alt0]))(var_p_prods, var857); /* new_alt0 on <var_p_prods:Production>*/
}
if (likely(varonce865!=NULL)) {
var866 = varonce865;
} else {
var867 = "prod";
var869 = (val*)(4l<<2|1);
var870 = (val*)(4l<<2|1);
var871 = (val*)((long)(0)<<2|3);
var872 = (val*)((long)(0)<<2|3);
var868 = core__flat___CString___to_s_unsafe(var867, var869, var870, var871, var872);
var866 = var868;
varonce865 = var866;
}
var873 = NEW_core__Array(&type_core__Array__nitcc__Element);
{ /* var873 = array_instance Array[Element] */
var874 = NEW_core__NativeArray((int)5l, &type_core__NativeArray__nitcc__Element);
((struct instance_core__NativeArray*)var874)->values[0] = (val*) var_t_id;
((struct instance_core__NativeArray*)var874)->values[1] = (val*) var_p_ptrans_o;
((struct instance_core__NativeArray*)var874)->values[2] = (val*) var_t_eq;
((struct instance_core__NativeArray*)var874)->values[3] = (val*) var_p_alts;
((struct instance_core__NativeArray*)var874)->values[4] = (val*) var_t_semi;
{
((void(*)(val* self, val* p0, long p1))(var873->class->vft[COLOR_core__array__Array__with_native]))(var873, var874, 5l); /* with_native on <var873:Array[Element]>*/
}
}
{
var875 = ((val*(*)(val* self, val* p0, val* p1))(var_p_prod->class->vft[COLOR_nitcc__grammar__Production__new_alt]))(var_p_prod, var866, var873); /* new_alt on <var_p_prod:Production>*/
}
if (likely(varonce876!=NULL)) {
var877 = varonce876;
} else {
var878 = "ptrans";
var880 = (val*)(6l<<2|1);
var881 = (val*)(6l<<2|1);
var882 = (val*)((long)(0)<<2|3);
var883 = (val*)((long)(0)<<2|3);
var879 = core__flat___CString___to_s_unsafe(var878, var880, var881, var882, var883);
var877 = var879;
varonce876 = var877;
}
var884 = NEW_core__Array(&type_core__Array__nitcc__Element);
{ /* var884 = array_instance Array[Element] */
var885 = NEW_core__NativeArray((int)4l, &type_core__NativeArray__nitcc__Element);
((struct instance_core__NativeArray*)var885)->values[0] = (val*) var_t_ocur;
((struct instance_core__NativeArray*)var885)->values[1] = (val*) var_t_arrow;
((struct instance_core__NativeArray*)var885)->values[2] = (val*) var_t_id;
((struct instance_core__NativeArray*)var885)->values[3] = (val*) var_t_ccur;
{
((void(*)(val* self, val* p0, long p1))(var884->class->vft[COLOR_core__array__Array__with_native]))(var884, var885, 4l); /* with_native on <var884:Array[Element]>*/
}
}
{
var886 = ((val*(*)(val* self, val* p0, val* p1))(var_p_ptrans_o->class->vft[COLOR_nitcc__grammar__Production__new_alt]))(var_p_ptrans_o, var877, var884); /* new_alt on <var_p_ptrans_o:Production>*/
}
if (likely(varonce887!=NULL)) {
var888 = varonce887;
} else {
var889 = "ptrans_none";
var891 = (val*)(11l<<2|1);
var892 = (val*)(11l<<2|1);
var893 = (val*)((long)(0)<<2|3);
var894 = (val*)((long)(0)<<2|3);
var890 = core__flat___CString___to_s_unsafe(var889, var891, var892, var893, var894);
var888 = var890;
varonce887 = var888;
}
{
var895 = ((val*(*)(val* self, val* p0))(var_p_ptrans_o->class->vft[COLOR_nitcc__grammar__Production__new_alt0]))(var_p_ptrans_o, var888); /* new_alt0 on <var_p_ptrans_o:Production>*/
}
if (likely(varonce896!=NULL)) {
var897 = varonce896;
} else {
var898 = "alts_many";
var900 = (val*)(9l<<2|1);
var901 = (val*)(9l<<2|1);
var902 = (val*)((long)(0)<<2|3);
var903 = (val*)((long)(0)<<2|3);
var899 = core__flat___CString___to_s_unsafe(var898, var900, var901, var902, var903);
var897 = var899;
varonce896 = var897;
}
var904 = NEW_core__Array(&type_core__Array__nitcc__Element);
{ /* var904 = array_instance Array[Element] */
var905 = NEW_core__NativeArray((int)3l, &type_core__NativeArray__nitcc__Element);
((struct instance_core__NativeArray*)var905)->values[0] = (val*) var_p_alts;
((struct instance_core__NativeArray*)var905)->values[1] = (val*) var_t_pipe;
((struct instance_core__NativeArray*)var905)->values[2] = (val*) var_p_alt;
{
((void(*)(val* self, val* p0, long p1))(var904->class->vft[COLOR_core__array__Array__with_native]))(var904, var905, 3l); /* with_native on <var904:Array[Element]>*/
}
}
{
var906 = ((val*(*)(val* self, val* p0, val* p1))(var_p_alts->class->vft[COLOR_nitcc__grammar__Production__new_alt]))(var_p_alts, var897, var904); /* new_alt on <var_p_alts:Production>*/
}
if (likely(varonce907!=NULL)) {
var908 = varonce907;
} else {
var909 = "alts_one";
var911 = (val*)(8l<<2|1);
var912 = (val*)(8l<<2|1);
var913 = (val*)((long)(0)<<2|3);
var914 = (val*)((long)(0)<<2|3);
var910 = core__flat___CString___to_s_unsafe(var909, var911, var912, var913, var914);
var908 = var910;
varonce907 = var908;
}
var915 = NEW_core__Array(&type_core__Array__nitcc__Element);
{ /* var915 = array_instance Array[Element] */
var916 = NEW_core__NativeArray((int)1l, &type_core__NativeArray__nitcc__Element);
((struct instance_core__NativeArray*)var916)->values[0] = (val*) var_p_alt;
{
((void(*)(val* self, val* p0, long p1))(var915->class->vft[COLOR_core__array__Array__with_native]))(var915, var916, 1l); /* with_native on <var915:Array[Element]>*/
}
}
{
var917 = ((val*(*)(val* self, val* p0, val* p1))(var_p_alts->class->vft[COLOR_nitcc__grammar__Production__new_alt]))(var_p_alts, var908, var915); /* new_alt on <var_p_alts:Production>*/
}
if (likely(varonce918!=NULL)) {
var919 = varonce918;
} else {
var920 = "alt";
var922 = (val*)(3l<<2|1);
var923 = (val*)(3l<<2|1);
var924 = (val*)((long)(0)<<2|3);
var925 = (val*)((long)(0)<<2|3);
var921 = core__flat___CString___to_s_unsafe(var920, var922, var923, var924, var925);
var919 = var921;
varonce918 = var919;
}
var926 = NEW_core__Array(&type_core__Array__nitcc__Element);
{ /* var926 = array_instance Array[Element] */
var927 = NEW_core__NativeArray((int)2l, &type_core__NativeArray__nitcc__Element);
((struct instance_core__NativeArray*)var927)->values[0] = (val*) var_p_altid_o;
((struct instance_core__NativeArray*)var927)->values[1] = (val*) var_p_elems;
{
((void(*)(val* self, val* p0, long p1))(var926->class->vft[COLOR_core__array__Array__with_native]))(var926, var927, 2l); /* with_native on <var926:Array[Element]>*/
}
}
{
var928 = ((val*(*)(val* self, val* p0, val* p1))(var_p_alt->class->vft[COLOR_nitcc__grammar__Production__new_alt]))(var_p_alt, var919, var926); /* new_alt on <var_p_alt:Production>*/
}
if (likely(varonce929!=NULL)) {
var930 = varonce929;
} else {
var931 = "altid_o_none";
var933 = (val*)(12l<<2|1);
var934 = (val*)(12l<<2|1);
var935 = (val*)((long)(0)<<2|3);
var936 = (val*)((long)(0)<<2|3);
var932 = core__flat___CString___to_s_unsafe(var931, var933, var934, var935, var936);
var930 = var932;
varonce929 = var930;
}
{
var937 = ((val*(*)(val* self, val* p0))(var_p_altid_o->class->vft[COLOR_nitcc__grammar__Production__new_alt0]))(var_p_altid_o, var930); /* new_alt0 on <var_p_altid_o:Production>*/
}
if (likely(varonce938!=NULL)) {
var939 = varonce938;
} else {
var940 = "altid_o_one";
var942 = (val*)(11l<<2|1);
var943 = (val*)(11l<<2|1);
var944 = (val*)((long)(0)<<2|3);
var945 = (val*)((long)(0)<<2|3);
var941 = core__flat___CString___to_s_unsafe(var940, var942, var943, var944, var945);
var939 = var941;
varonce938 = var939;
}
var946 = NEW_core__Array(&type_core__Array__nitcc__Element);
{ /* var946 = array_instance Array[Element] */
var947 = NEW_core__NativeArray((int)1l, &type_core__NativeArray__nitcc__Element);
((struct instance_core__NativeArray*)var947)->values[0] = (val*) var_p_altid;
{
((void(*)(val* self, val* p0, long p1))(var946->class->vft[COLOR_core__array__Array__with_native]))(var946, var947, 1l); /* with_native on <var946:Array[Element]>*/
}
}
{
var948 = ((val*(*)(val* self, val* p0, val* p1))(var_p_altid_o->class->vft[COLOR_nitcc__grammar__Production__new_alt]))(var_p_altid_o, var939, var946); /* new_alt on <var_p_altid_o:Production>*/
}
if (likely(varonce949!=NULL)) {
var950 = varonce949;
} else {
var951 = "altid";
var953 = (val*)(5l<<2|1);
var954 = (val*)(5l<<2|1);
var955 = (val*)((long)(0)<<2|3);
var956 = (val*)((long)(0)<<2|3);
var952 = core__flat___CString___to_s_unsafe(var951, var953, var954, var955, var956);
var950 = var952;
varonce949 = var950;
}
var957 = NEW_core__Array(&type_core__Array__nitcc__Element);
{ /* var957 = array_instance Array[Element] */
var958 = NEW_core__NativeArray((int)4l, &type_core__NativeArray__nitcc__Element);
((struct instance_core__NativeArray*)var958)->values[0] = (val*) var_t_ocur;
((struct instance_core__NativeArray*)var958)->values[1] = (val*) var_t_id;
((struct instance_core__NativeArray*)var958)->values[2] = (val*) var_t_colo;
((struct instance_core__NativeArray*)var958)->values[3] = (val*) var_t_ccur;
{
((void(*)(val* self, val* p0, long p1))(var957->class->vft[COLOR_core__array__Array__with_native]))(var957, var958, 4l); /* with_native on <var957:Array[Element]>*/
}
}
{
var959 = ((val*(*)(val* self, val* p0, val* p1))(var_p_altid->class->vft[COLOR_nitcc__grammar__Production__new_alt]))(var_p_altid, var950, var957); /* new_alt on <var_p_altid:Production>*/
}
if (likely(varonce960!=NULL)) {
var961 = varonce960;
} else {
var962 = "elems_many";
var964 = (val*)(10l<<2|1);
var965 = (val*)(10l<<2|1);
var966 = (val*)((long)(0)<<2|3);
var967 = (val*)((long)(0)<<2|3);
var963 = core__flat___CString___to_s_unsafe(var962, var964, var965, var966, var967);
var961 = var963;
varonce960 = var961;
}
var968 = NEW_core__Array(&type_core__Array__nitcc__Element);
{ /* var968 = array_instance Array[Element] */
var969 = NEW_core__NativeArray((int)2l, &type_core__NativeArray__nitcc__Element);
((struct instance_core__NativeArray*)var969)->values[0] = (val*) var_p_elems;
((struct instance_core__NativeArray*)var969)->values[1] = (val*) var_p_elem;
{
((void(*)(val* self, val* p0, long p1))(var968->class->vft[COLOR_core__array__Array__with_native]))(var968, var969, 2l); /* with_native on <var968:Array[Element]>*/
}
}
{
var970 = ((val*(*)(val* self, val* p0, val* p1))(var_p_elems->class->vft[COLOR_nitcc__grammar__Production__new_alt]))(var_p_elems, var961, var968); /* new_alt on <var_p_elems:Production>*/
}
if (likely(varonce971!=NULL)) {
var972 = varonce971;
} else {
var973 = "elems_none";
var975 = (val*)(10l<<2|1);
var976 = (val*)(10l<<2|1);
var977 = (val*)((long)(0)<<2|3);
var978 = (val*)((long)(0)<<2|3);
var974 = core__flat___CString___to_s_unsafe(var973, var975, var976, var977, var978);
var972 = var974;
varonce971 = var972;
}
{
var979 = ((val*(*)(val* self, val* p0))(var_p_elems->class->vft[COLOR_nitcc__grammar__Production__new_alt0]))(var_p_elems, var972); /* new_alt0 on <var_p_elems:Production>*/
}
if (likely(varonce980!=NULL)) {
var981 = varonce980;
} else {
var982 = "elem_list_many";
var984 = (val*)(14l<<2|1);
var985 = (val*)(14l<<2|1);
var986 = (val*)((long)(0)<<2|3);
var987 = (val*)((long)(0)<<2|3);
var983 = core__flat___CString___to_s_unsafe(var982, var984, var985, var986, var987);
var981 = var983;
varonce980 = var981;
}
var988 = NEW_core__Array(&type_core__Array__nitcc__Element);
{ /* var988 = array_instance Array[Element] */
var989 = NEW_core__NativeArray((int)3l, &type_core__NativeArray__nitcc__Element);
((struct instance_core__NativeArray*)var989)->values[0] = (val*) var_p_elem_list;
((struct instance_core__NativeArray*)var989)->values[1] = (val*) var_t_comma;
((struct instance_core__NativeArray*)var989)->values[2] = (val*) var_p_elem;
{
((void(*)(val* self, val* p0, long p1))(var988->class->vft[COLOR_core__array__Array__with_native]))(var988, var989, 3l); /* with_native on <var988:Array[Element]>*/
}
}
{
var990 = ((val*(*)(val* self, val* p0, val* p1))(var_p_elem_list->class->vft[COLOR_nitcc__grammar__Production__new_alt]))(var_p_elem_list, var981, var988); /* new_alt on <var_p_elem_list:Production>*/
}
if (likely(varonce991!=NULL)) {
var992 = varonce991;
} else {
var993 = "elem_list_one";
var995 = (val*)(13l<<2|1);
var996 = (val*)(13l<<2|1);
var997 = (val*)((long)(0)<<2|3);
var998 = (val*)((long)(0)<<2|3);
var994 = core__flat___CString___to_s_unsafe(var993, var995, var996, var997, var998);
var992 = var994;
varonce991 = var992;
}
var999 = NEW_core__Array(&type_core__Array__nitcc__Element);
{ /* var999 = array_instance Array[Element] */
var1000 = NEW_core__NativeArray((int)1l, &type_core__NativeArray__nitcc__Element);
((struct instance_core__NativeArray*)var1000)->values[0] = (val*) var_p_elem;
{
((void(*)(val* self, val* p0, long p1))(var999->class->vft[COLOR_core__array__Array__with_native]))(var999, var1000, 1l); /* with_native on <var999:Array[Element]>*/
}
}
{
var1001 = ((val*(*)(val* self, val* p0, val* p1))(var_p_elem_list->class->vft[COLOR_nitcc__grammar__Production__new_alt]))(var_p_elem_list, var992, var999); /* new_alt on <var_p_elem_list:Production>*/
}
if (likely(varonce1002!=NULL)) {
var1003 = varonce1002;
} else {
var1004 = "elem_id";
var1006 = (val*)(7l<<2|1);
var1007 = (val*)(7l<<2|1);
var1008 = (val*)((long)(0)<<2|3);
var1009 = (val*)((long)(0)<<2|3);
var1005 = core__flat___CString___to_s_unsafe(var1004, var1006, var1007, var1008, var1009);
var1003 = var1005;
varonce1002 = var1003;
}
var1010 = NEW_core__Array(&type_core__Array__nitcc__Element);
{ /* var1010 = array_instance Array[Element] */
var1011 = NEW_core__NativeArray((int)1l, &type_core__NativeArray__nitcc__Element);
((struct instance_core__NativeArray*)var1011)->values[0] = (val*) var_t_id;
{
((void(*)(val* self, val* p0, long p1))(var1010->class->vft[COLOR_core__array__Array__with_native]))(var1010, var1011, 1l); /* with_native on <var1010:Array[Element]>*/
}
}
{
var1012 = ((val*(*)(val* self, val* p0, val* p1))(var_p_elem->class->vft[COLOR_nitcc__grammar__Production__new_alt]))(var_p_elem, var1003, var1010); /* new_alt on <var_p_elem:Production>*/
}
if (likely(varonce1013!=NULL)) {
var1014 = varonce1013;
} else {
var1015 = "elem_str";
var1017 = (val*)(8l<<2|1);
var1018 = (val*)(8l<<2|1);
var1019 = (val*)((long)(0)<<2|3);
var1020 = (val*)((long)(0)<<2|3);
var1016 = core__flat___CString___to_s_unsafe(var1015, var1017, var1018, var1019, var1020);
var1014 = var1016;
varonce1013 = var1014;
}
var1021 = NEW_core__Array(&type_core__Array__nitcc__Element);
{ /* var1021 = array_instance Array[Element] */
var1022 = NEW_core__NativeArray((int)1l, &type_core__NativeArray__nitcc__Element);
((struct instance_core__NativeArray*)var1022)->values[0] = (val*) var_p_text;
{
((void(*)(val* self, val* p0, long p1))(var1021->class->vft[COLOR_core__array__Array__with_native]))(var1021, var1022, 1l); /* with_native on <var1021:Array[Element]>*/
}
}
{
var1023 = ((val*(*)(val* self, val* p0, val* p1))(var_p_elem->class->vft[COLOR_nitcc__grammar__Production__new_alt]))(var_p_elem, var1014, var1021); /* new_alt on <var_p_elem:Production>*/
}
if (likely(varonce1024!=NULL)) {
var1025 = varonce1024;
} else {
var1026 = "elem_par";
var1028 = (val*)(8l<<2|1);
var1029 = (val*)(8l<<2|1);
var1030 = (val*)((long)(0)<<2|3);
var1031 = (val*)((long)(0)<<2|3);
var1027 = core__flat___CString___to_s_unsafe(var1026, var1028, var1029, var1030, var1031);
var1025 = var1027;
varonce1024 = var1025;
}
var1032 = NEW_core__Array(&type_core__Array__nitcc__Element);
{ /* var1032 = array_instance Array[Element] */
var1033 = NEW_core__NativeArray((int)3l, &type_core__NativeArray__nitcc__Element);
((struct instance_core__NativeArray*)var1033)->values[0] = (val*) var_t_opar;
((struct instance_core__NativeArray*)var1033)->values[1] = (val*) var_p_alts;
((struct instance_core__NativeArray*)var1033)->values[2] = (val*) var_t_cpar;
{
((void(*)(val* self, val* p0, long p1))(var1032->class->vft[COLOR_core__array__Array__with_native]))(var1032, var1033, 3l); /* with_native on <var1032:Array[Element]>*/
}
}
{
var1034 = ((val*(*)(val* self, val* p0, val* p1))(var_p_elem->class->vft[COLOR_nitcc__grammar__Production__new_alt]))(var_p_elem, var1025, var1032); /* new_alt on <var_p_elem:Production>*/
}
if (likely(varonce1035!=NULL)) {
var1036 = varonce1035;
} else {
var1037 = "elem_star";
var1039 = (val*)(9l<<2|1);
var1040 = (val*)(9l<<2|1);
var1041 = (val*)((long)(0)<<2|3);
var1042 = (val*)((long)(0)<<2|3);
var1038 = core__flat___CString___to_s_unsafe(var1037, var1039, var1040, var1041, var1042);
var1036 = var1038;
varonce1035 = var1036;
}
var1043 = NEW_core__Array(&type_core__Array__nitcc__Element);
{ /* var1043 = array_instance Array[Element] */
var1044 = NEW_core__NativeArray((int)2l, &type_core__NativeArray__nitcc__Element);
((struct instance_core__NativeArray*)var1044)->values[0] = (val*) var_p_elem;
((struct instance_core__NativeArray*)var1044)->values[1] = (val*) var_t_star;
{
((void(*)(val* self, val* p0, long p1))(var1043->class->vft[COLOR_core__array__Array__with_native]))(var1043, var1044, 2l); /* with_native on <var1043:Array[Element]>*/
}
}
{
var1045 = ((val*(*)(val* self, val* p0, val* p1))(var_p_elem->class->vft[COLOR_nitcc__grammar__Production__new_alt]))(var_p_elem, var1036, var1043); /* new_alt on <var_p_elem:Production>*/
}
if (likely(varonce1046!=NULL)) {
var1047 = varonce1046;
} else {
var1048 = "elem_ques";
var1050 = (val*)(9l<<2|1);
var1051 = (val*)(9l<<2|1);
var1052 = (val*)((long)(0)<<2|3);
var1053 = (val*)((long)(0)<<2|3);
var1049 = core__flat___CString___to_s_unsafe(var1048, var1050, var1051, var1052, var1053);
var1047 = var1049;
varonce1046 = var1047;
}
var1054 = NEW_core__Array(&type_core__Array__nitcc__Element);
{ /* var1054 = array_instance Array[Element] */
var1055 = NEW_core__NativeArray((int)2l, &type_core__NativeArray__nitcc__Element);
((struct instance_core__NativeArray*)var1055)->values[0] = (val*) var_p_elem;
((struct instance_core__NativeArray*)var1055)->values[1] = (val*) var_t_ques;
{
((void(*)(val* self, val* p0, long p1))(var1054->class->vft[COLOR_core__array__Array__with_native]))(var1054, var1055, 2l); /* with_native on <var1054:Array[Element]>*/
}
}
{
var1056 = ((val*(*)(val* self, val* p0, val* p1))(var_p_elem->class->vft[COLOR_nitcc__grammar__Production__new_alt]))(var_p_elem, var1047, var1054); /* new_alt on <var_p_elem:Production>*/
}
if (likely(varonce1057!=NULL)) {
var1058 = varonce1057;
} else {
var1059 = "elem_plus";
var1061 = (val*)(9l<<2|1);
var1062 = (val*)(9l<<2|1);
var1063 = (val*)((long)(0)<<2|3);
var1064 = (val*)((long)(0)<<2|3);
var1060 = core__flat___CString___to_s_unsafe(var1059, var1061, var1062, var1063, var1064);
var1058 = var1060;
varonce1057 = var1058;
}
var1065 = NEW_core__Array(&type_core__Array__nitcc__Element);
{ /* var1065 = array_instance Array[Element] */
var1066 = NEW_core__NativeArray((int)2l, &type_core__NativeArray__nitcc__Element);
((struct instance_core__NativeArray*)var1066)->values[0] = (val*) var_p_elem;
((struct instance_core__NativeArray*)var1066)->values[1] = (val*) var_t_plus;
{
((void(*)(val* self, val* p0, long p1))(var1065->class->vft[COLOR_core__array__Array__with_native]))(var1065, var1066, 2l); /* with_native on <var1065:Array[Element]>*/
}
}
{
var1067 = ((val*(*)(val* self, val* p0, val* p1))(var_p_elem->class->vft[COLOR_nitcc__grammar__Production__new_alt]))(var_p_elem, var1058, var1065); /* new_alt on <var_p_elem:Production>*/
}
if (likely(varonce1068!=NULL)) {
var1069 = varonce1068;
} else {
var1070 = "priority_left";
var1072 = (val*)(13l<<2|1);
var1073 = (val*)(13l<<2|1);
var1074 = (val*)((long)(0)<<2|3);
var1075 = (val*)((long)(0)<<2|3);
var1071 = core__flat___CString___to_s_unsafe(var1070, var1072, var1073, var1074, var1075);
var1069 = var1071;
varonce1068 = var1069;
}
{
var1076 = ((val*(*)(val* self, val* p0))(var_p_pri->class->vft[COLOR_nitcc__grammar__Production__new_alt0]))(var_p_pri, var1069); /* new_alt0 on <var_p_pri:Production>*/
}
{
((void(*)(val* self, short int p0))(var1076->class->vft[COLOR_nitcc__grammar__Alternative__phony_61d]))(var1076, 1); /* phony= on <var1076:Alternative>*/
}
if (likely(varonce1077!=NULL)) {
var1078 = varonce1077;
} else {
var1079 = "priority_right";
var1081 = (val*)(14l<<2|1);
var1082 = (val*)(14l<<2|1);
var1083 = (val*)((long)(0)<<2|3);
var1084 = (val*)((long)(0)<<2|3);
var1080 = core__flat___CString___to_s_unsafe(var1079, var1081, var1082, var1083, var1084);
var1078 = var1080;
varonce1077 = var1078;
}
{
var1085 = ((val*(*)(val* self, val* p0))(var_p_pri->class->vft[COLOR_nitcc__grammar__Production__new_alt0]))(var_p_pri, var1078); /* new_alt0 on <var_p_pri:Production>*/
}
{
((void(*)(val* self, short int p0))(var1085->class->vft[COLOR_nitcc__grammar__Alternative__phony_61d]))(var1085, 1); /* phony= on <var1085:Alternative>*/
}
if (likely(varonce1086!=NULL)) {
var1087 = varonce1086;
} else {
var1088 = "priority_unary";
var1090 = (val*)(14l<<2|1);
var1091 = (val*)(14l<<2|1);
var1092 = (val*)((long)(0)<<2|3);
var1093 = (val*)((long)(0)<<2|3);
var1089 = core__flat___CString___to_s_unsafe(var1088, var1090, var1091, var1092, var1093);
var1087 = var1089;
varonce1086 = var1087;
}
{
var1094 = ((val*(*)(val* self, val* p0))(var_p_pri->class->vft[COLOR_nitcc__grammar__Production__new_alt0]))(var_p_pri, var1087); /* new_alt0 on <var_p_pri:Production>*/
}
{
((void(*)(val* self, short int p0))(var1094->class->vft[COLOR_nitcc__grammar__Alternative__phony_61d]))(var1094, 1); /* phony= on <var1094:Alternative>*/
}
{
var1095 = ((val*(*)(val* self))(var_g->class->vft[COLOR_nitcc__grammar__Gram__lr0]))(var_g); /* lr0 on <var_g:Gram>*/
}
var_a = var1095;
if (unlikely(varonce1096==NULL)) {
var1097 = NEW_core__NativeArray((int)3l, &type_core__NativeArray__core__String);
if (likely(varonce1098!=NULL)) {
var1099 = varonce1098;
} else {
var1100 = "LR automaton: ";
var1102 = (val*)(14l<<2|1);
var1103 = (val*)(14l<<2|1);
var1104 = (val*)((long)(0)<<2|3);
var1105 = (val*)((long)(0)<<2|3);
var1101 = core__flat___CString___to_s_unsafe(var1100, var1102, var1103, var1104, var1105);
var1099 = var1101;
varonce1098 = var1099;
}
((struct instance_core__NativeArray*)var1097)->values[0]=var1099;
if (likely(varonce1106!=NULL)) {
var1107 = varonce1106;
} else {
var1108 = " states (see nitcc0.lr.dot)";
var1110 = (val*)(27l<<2|1);
var1111 = (val*)(27l<<2|1);
var1112 = (val*)((long)(0)<<2|3);
var1113 = (val*)((long)(0)<<2|3);
var1109 = core__flat___CString___to_s_unsafe(var1108, var1110, var1111, var1112, var1113);
var1107 = var1109;
varonce1106 = var1107;
}
((struct instance_core__NativeArray*)var1097)->values[2]=var1107;
} else {
var1097 = varonce1096;
varonce1096 = NULL;
}
{
var1114 = ((val*(*)(val* self))(var_a->class->vft[COLOR_nitcc__grammar__LRAutomaton__states]))(var_a); /* states on <var_a:LRAutomaton>*/
}
{
var1115 = ((long(*)(val* self))(var1114->class->vft[COLOR_core__abstract_collection__Collection__length]))(var1114); /* length on <var1114:Array[LRState]>*/
}
var1116 = core__flat___Int___core__abstract_text__Object__to_s(var1115);
((struct instance_core__NativeArray*)var1097)->values[1]=var1116;
{
var1117 = ((val*(*)(val* self))(var1097->class->vft[COLOR_core__abstract_text__NativeArray__native_to_s]))(var1097); /* native_to_s on <var1097:NativeArray[String]>*/
}
varonce1096 = var1097;
{
((void(*)(val* self, val* p0))(self->class->vft[COLOR_core__file__Sys__print]))(self, var1117); /* print on <self:Sys>*/
}
if (likely(varonce1118!=NULL)) {
var1119 = varonce1118;
} else {
var1120 = "nitcc0.lr.dot";
var1122 = (val*)(13l<<2|1);
var1123 = (val*)(13l<<2|1);
var1124 = (val*)((long)(0)<<2|3);
var1125 = (val*)((long)(0)<<2|3);
var1121 = core__flat___CString___to_s_unsafe(var1120, var1122, var1123, var1124, var1125);
var1119 = var1121;
varonce1118 = var1119;
}
{
((void(*)(val* self, val* p0))(var_a->class->vft[COLOR_nitcc__grammar__LRAutomaton__to_dot]))(var_a, var1119); /* to_dot on <var_a:LRAutomaton>*/
}
if (likely(varonce1126!=NULL)) {
var1127 = varonce1126;
} else {
var1128 = "nitcc_parser.nit";
var1130 = (val*)(16l<<2|1);
var1131 = (val*)(16l<<2|1);
var1132 = (val*)((long)(0)<<2|3);
var1133 = (val*)((long)(0)<<2|3);
var1129 = core__flat___CString___to_s_unsafe(var1128, var1130, var1131, var1132, var1133);
var1127 = var1129;
varonce1126 = var1127;
}
if (likely(varonce1134!=NULL)) {
var1135 = varonce1134;
} else {
var1136 = "nitcc";
var1138 = (val*)(5l<<2|1);
var1139 = (val*)(5l<<2|1);
var1140 = (val*)((long)(0)<<2|3);
var1141 = (val*)((long)(0)<<2|3);
var1137 = core__flat___CString___to_s_unsafe(var1136, var1138, var1139, var1140, var1141);
var1135 = var1137;
varonce1134 = var1135;
}
{
((void(*)(val* self, val* p0, val* p1))(var_a->class->vft[COLOR_nitcc__grammar__LRAutomaton__gen_to_nit]))(var_a, var1127, var1135); /* gen_to_nit on <var_a:LRAutomaton>*/
}
var1142 = NEW_core__FileWriter(&type_core__FileWriter);
if (likely(varonce1143!=NULL)) {
var1144 = varonce1143;
} else {
var1145 = "nitcc_lexer.nit";
var1147 = (val*)(15l<<2|1);
var1148 = (val*)(15l<<2|1);
var1149 = (val*)((long)(0)<<2|3);
var1150 = (val*)((long)(0)<<2|3);
var1146 = core__flat___CString___to_s_unsafe(var1145, var1147, var1148, var1149, var1150);
var1144 = var1146;
varonce1143 = var1144;
}
{
((void(*)(val* self, val* p0))(var1142->class->vft[COLOR_core__file__FileWriter__open]))(var1142, var1144); /* open on <var1142:FileWriter>*/
}
var_f = var1142;
if (likely(varonce1151!=NULL)) {
var1152 = varonce1151;
} else {
var1153 = "import nitcc_lexer0\n";
var1155 = (val*)(20l<<2|1);
var1156 = (val*)(20l<<2|1);
var1157 = (val*)((long)(0)<<2|3);
var1158 = (val*)((long)(0)<<2|3);
var1154 = core__flat___CString___to_s_unsafe(var1153, var1155, var1156, var1157, var1158);
var1152 = var1154;
varonce1151 = var1152;
}
{
((void(*)(val* self, val* p0))(var_f->class->vft[COLOR_core__stream__Writer__write]))(var_f, var1152); /* write on <var_f:FileWriter>*/
}
{
((void(*)(val* self))(var_f->class->vft[COLOR_core__stream__Stream__close]))(var_f); /* close on <var_f:FileWriter>*/
}
RET_LABEL:;
}
