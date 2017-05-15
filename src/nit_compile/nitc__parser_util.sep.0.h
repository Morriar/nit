#include "nit.common.h"
val* NEW_nitc__SourceFile(const struct type* type);
extern const struct type type_nitc__SourceFile;
val* core__abstract_text___CString___to_s_full(char* self, long p0, long p1);
void nitc___nitc__SourceFile___from_string(val* self, val* p0, val* p1);
val* NEW_nitc__Lexer(const struct type* type);
extern const struct type type_nitc__Lexer;
#define COLOR_nitc__lexer_work__Lexer__file_61d 19
#define COLOR_core__kernel__Object__init 0
val* NEW_nitc__Parser(const struct type* type);
extern const struct type type_nitc__Parser;
#define COLOR_nitc__parser_work__Parser__lexer_61d 20
val* nitc___nitc__Parser___parse(val* self);
#define COLOR_nitc__parser_nodes__Start___n_eof 4
extern const char FILE_nitc__parser_nodes[];
extern const struct type type_nitc__AError;
val* NEW_core__NativeArray(int length, const struct type* type);
extern const struct type type_core__NativeArray__core__String;
#define COLOR_nitc__lexer_work__AError___message 11
extern const char FILE_nitc__lexer_work[];
#define COLOR_core__abstract_text__NativeArray__native_to_s 15
void nitc___nitc__ToolContext___fatal_error(val* self, val* p0, val* p1);
extern const char FILE_nitc__parser_util[];
#define COLOR_nitc__parser_nodes__Start___n_base 3
val* nitc__parser_util___ToolContext___parse_module(val* self, val* p0);
#define COLOR_nitc__parser_nodes__AModule___n_classdefs 8
long nitc___nitc__ANodes___core__abstract_collection__Collection__length(val* self);
val* core___core__SequenceRead___Collection__first(val* self);
val* nitc__parser_util___ToolContext___parse_classdef(val* self, val* p0);
#define COLOR_nitc__parser_nodes__AClassdef___n_propdefs 6
extern const struct type type_nitc__AMethPropdef;
#define COLOR_nitc__parser_nodes__AMethPropdef___n_block 20
extern const struct type type_nitc__ABlockExpr;
#define COLOR_nitc__parser_nodes__ABlockExpr___n_expr 3
extern const struct type type_nitc__AVardeclExpr;
#define COLOR_nitc__parser_nodes__AVardeclExpr___n_expr 7
extern const struct type type_nitc__AStdClassdef;
val* NEW_nitc__InjectedLexer(const struct type* type);
extern const struct type type_nitc__InjectedLexer;
#define COLOR_nitc__parser_util__InjectedLexer___injected_before 8
val* NEW_nitc__TKwvar(const struct type* type);
extern const struct type type_nitc__TKwvar;
void core___core__Sequence___SimpleCollection__add(val* self, val* p0);
val* NEW_nitc__TId(const struct type* type);
extern const struct type type_nitc__TId;
val* NEW_nitc__TColumn(const struct type* type);
extern const struct type type_nitc__TColumn;
val* NEW_nitc__TClassid(const struct type* type);
extern const struct type type_nitc__TClassid;
val* NEW_nitc__TObra(const struct type* type);
extern const struct type type_nitc__TObra;
#define COLOR_nitc__parser_util__InjectedLexer___injected_after 9
val* NEW_nitc__TCbra(const struct type* type);
extern const struct type type_nitc__TCbra;
#define COLOR_nitc__parser_nodes__AVardeclExpr___n_type 5
#define COLOR_nitc__parser_nodes__AType___n_types 8
#define COLOR_nitc__parser_nodes__ANode___parent 2
val* nitc___nitc__Lexer___next(val* self);
extern const struct type type_nitc__EOF;
val* NEW_nitc__TAssign(const struct type* type);
extern const struct type type_nitc__TAssign;
val* NEW_nitc__TOpar(const struct type* type);
extern const struct type type_nitc__TOpar;
val* NEW_nitc__TCpar(const struct type* type);
extern const struct type type_nitc__TCpar;
extern const struct type type_nitc__AParExpr;
#define COLOR_nitc__parser_nodes__AParExpr___n_expr 4
#define COLOR_nitc__parser_nodes__ANode___location 1
short int core___core__Comparable____62d(val* self, val* p0);
val* NEW_nitc__TKwdo(const struct type* type);
extern const struct type type_nitc__TKwdo;
val* NEW_nitc__TEol(const struct type* type);
extern const struct type type_nitc__TEol;
val* NEW_nitc__TKwend(const struct type* type);
extern const struct type type_nitc__TKwend;
extern const struct type type_nitc__ADoExpr;
#define COLOR_nitc__parser_nodes__ADoExpr___n_block 5
void nitc__parser_prod___ABlockExpr___n_kwend_61d(val* self, val* p0);
#define COLOR_nitc__parser_util__InjectedLexer___is_finished 10
short int core___core__List___core__abstract_collection__Collection__is_empty(val* self);
val* core___core__List___core__abstract_collection__Sequence__shift(val* self);
#define COLOR_nitc___nitc__InjectedLexer___nitc__lexer_work__Lexer__get_token 32
void core___core__List___core__abstract_collection__Sequence__push(val* self, val* p0);
