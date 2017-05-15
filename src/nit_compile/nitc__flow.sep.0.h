#include "nit.common.h"
#define COLOR_nitc__flow__ToolContext___flow_phase 53
extern const char FILE_nitc__flow[];
#define COLOR_nitc__phase__Phase___toolcontext 0
extern const char FILE_nitc__phase[];
void nitc__flow___APropdef___do_flow(val* self, val* p0);
#define COLOR_nitc__flow__FlowVisitor___current_flow_context 1
#define COLOR_nitc__flow__FlowVisitor___toolcontext 2
#define COLOR_nitc__flow___nitc__flow__FlowVisitor___core__kernel__Object__init 33
#define COLOR_nitc__flow__FlowVisitor___flows 4
void core___core__Array___core__abstract_collection__SimpleCollection__add(val* self, val* p0);
#define COLOR_nitc__flow__FlowContext___is_start 6
#define COLOR_nitc__flow__FlowVisitor___first 3
#define COLOR_nitc__flow__FlowContext___node 7
#define COLOR_nitc__flow__ANode__accept_flow_visitor 36
extern const struct type type_nitc__AExpr;
#define COLOR_nitc__flow__AExpr___after_flow_context 16
#define COLOR_nitc__flow__FlowContext___when_true 9
#define COLOR_core__kernel__Object___61d_61d 3
#define COLOR_nitc__flow__FlowContext___when_false 10
val* nitc__flow___nitc__flow__FlowVisitor___make_sub_flow(val* self);
val* core__abstract_text___CString___to_s_full(char* self, long p0, long p1);
#define COLOR_nitc__flow__FlowContext___name 8
void nitc___nitc__Visitor___enter_visit(val* self, val* p0);
val* NEW_nitc__FlowContext(const struct type* type);
extern const struct type type_nitc__FlowContext;
#define COLOR_nitc__parser_nodes__Visitor___current_node 0
void nitc___nitc__FlowContext___add_previous(val* self, val* p0);
val* nitc__flow___nitc__flow__FlowVisitor___make_true_false_flow(val* self, val* p0, val* p1);
#define COLOR_nitc__flow__FlowContext___is_marked_unreachable 4
#define COLOR_nitc__scope__EscapeMark___escapes 2
extern const char FILE_nitc__scope[];
val* core___core__AbstractArrayRead___core__abstract_collection__Collection__iterator(val* self);
#define COLOR_core__abstract_collection__Iterator__is_ok 15
#define COLOR_core__abstract_collection__Iterator__item 16
val* nitc__flow___AEscapeExpr___before_flow_context(val* self);
void nitc___nitc__FlowContext___add_loop(val* self, val* p0);
#define COLOR_core__abstract_collection__Iterator__next 17
#define COLOR_core__abstract_collection__Iterator__finish 18
val* nitc__flow___nitc__flow__FlowVisitor___make_merge_flow(val* self, val* p0, val* p1);
#define COLOR_nitc__flow__FlowContext___previous 2
#define COLOR_nitc__flow__FlowContext___loops 3
#define COLOR_core__array__AbstractArrayRead___length 0
#define COLOR_nitc__flow__FlowContext___is_already_unreachable 5
short int nitc___nitc__FlowContext___is_unreachable(val* self);
short int core___core__AbstractArrayRead___core__abstract_collection__Collection__has(val* self, val* p0);
#define COLOR_nitc__parser_nodes__ANode__visit_all 22
val* NEW_nitc__flow__FlowVisitor(const struct type* type);
extern const struct type type_nitc__flow__FlowVisitor;
#define COLOR_nitc__flow__FlowVisitor__toolcontext_61d 18
#define COLOR_core__kernel__Object__init 0
#define COLOR_nitc__flow__APropdef___before_flow_context 15
#define COLOR_nitc__flow__APropdef___after_flow_context 16
#define COLOR_nitc__flow___APropdef___ANode__accept_flow_visitor 91
#define COLOR_nitc__flow___AVarAssignExpr___ANode__accept_flow_visitor 49
#define COLOR_nitc__flow___AReassignFormExpr___ANode__accept_flow_visitor 95
#define COLOR_nitc__parser_nodes__ABlockExpr___n_expr 3
extern const char FILE_nitc__parser_nodes[];
val* nitc___nitc__ANodes___core__abstract_collection__Collection__iterator(val* self);
val* nitc___nitc__ANode___hot_location(val* self);
val* nitc___nitc__ToolContext___error(val* self, val* p0, val* p1);
#define COLOR_nitc__flow___AReturnExpr___ANode__accept_flow_visitor 89
val* nitc__flow___nitc__flow__FlowVisitor___make_unreachable_flow(val* self);
val* core___core__SequenceRead___Collection__first(val* self);
#define COLOR_nitc__flow___AEscapeExpr___ANode__accept_flow_visitor 85
#define COLOR_nitc__flow___AAbortExpr___ANode__accept_flow_visitor 46
#define COLOR_nitc__parser_nodes__ADoExpr___n_block 5
#define COLOR_nitc__scope__ADoExpr___break_mark 8
void nitc__flow___nitc__flow__FlowVisitor___merge_breaks(val* self, val* p0);
#define COLOR_nitc__parser_nodes__ADoExpr___n_catch 7
#define COLOR_nitc__parser_nodes__AIfExpr___n_expr 4
val* nitc__flow___nitc__flow__FlowVisitor___visit_expr(val* self, val* p0);
#define COLOR_nitc__parser_nodes__AIfExpr___n_then 6
#define COLOR_nitc__parser_nodes__AIfExpr___n_else 8
#define COLOR_nitc__parser_nodes__AIfexprExpr___n_expr 4
#define COLOR_nitc__parser_nodes__AIfexprExpr___n_then 6
#define COLOR_nitc__parser_nodes__AIfexprExpr___n_else 8
#define COLOR_nitc__parser_nodes__AWhileExpr___n_expr 5
#define COLOR_nitc__parser_nodes__AWhileExpr___n_block 7
#define COLOR_nitc__scope__AWhileExpr___continue_mark 18
void nitc__flow___nitc__flow__FlowVisitor___merge_continues_to(val* self, val* p0, val* p1);
#define COLOR_nitc__scope__AWhileExpr___break_mark 8
#define COLOR_nitc__parser_nodes__ALoopExpr___n_block 5
#define COLOR_nitc__scope__ALoopExpr___continue_mark 7
#define COLOR_nitc__scope__ALoopExpr___break_mark 6
#define COLOR_nitc__parser_nodes__AForExpr___n_groups 5
#define COLOR_nitc__parser_nodes__AForGroup___n_expr 5
#define COLOR_nitc__parser_nodes__AForExpr___n_block 7
#define COLOR_nitc__scope__AForExpr___continue_mark 18
#define COLOR_nitc__scope__AForExpr___break_mark 8
#define COLOR_nitc__flow___AWithExpr___ANode__accept_flow_visitor 93
#define COLOR_nitc__scope__AWithExpr___break_mark 19
#define COLOR_nitc__parser_nodes__AAssertExpr___n_expr 5
#define COLOR_nitc__parser_nodes__AAssertExpr___n_else 7
#define COLOR_nitc__parser_nodes__ABinBoolExpr___n_expr 3
#define COLOR_nitc__parser_nodes__ABinBoolExpr___n_expr2 5
#define COLOR_nitc__parser_nodes__ANotExpr___n_expr 4
#define COLOR_nitc__flow___AOrElseExpr___ANode__accept_flow_visitor 85
#define COLOR_nitc__flow___AEqExpr___ANode__accept_flow_visitor 93
val* nitc__flow___nitc__flow__FlowVisitor___make_sub_true_false_flow(val* self);
#define COLOR_nitc__flow___ANeExpr___ANode__accept_flow_visitor 93
#define COLOR_nitc__flow___AIsaExpr___ANode__accept_flow_visitor 86
#define COLOR_nitc__parser_nodes__AParExpr___n_expr 4
#define COLOR_nitc__parser_nodes__AOnceExpr___n_expr 4
