#ifndef PASS1VISITOR_H_
#define PASS1VISITOR_H_

#include <iostream>

#include "wci/intermediate/SymTabStack.h"
#include "wci/intermediate/SymTabEntry.h"
#include "wci/intermediate/TypeSpec.h"

#include "MainBaseVisitor.h"
#include "antlr4-runtime.h"
#include "MainVisitor.h"

using namespace wci;
using namespace wci::intermediate;

class Pass1Visitor : public MainBaseVisitor
{
private:
    SymTabStack *symtab_stack;
    SymTabEntry *program_id;
    vector<SymTabEntry *> variable_id_list;
    ofstream j_file;

public:
    Pass1Visitor();
    virtual ~Pass1Visitor();

    ostream& get_assembly_file();

    antlrcpp::Any visitProgram(MainParser::ProgramContext *ctx) override;
    antlrcpp::Any visitHeader(MainParser::HeaderContext *ctx) override;
  /*Leo:
   *
   * These blocks seemed declared incorrectly, redeclared a bunch of lines In the code below
   * this comment block
   *
    antlrcpp::Any visitDeclarations(MainParser::DeclarationsContext *ctx) override;
    antlrcpp::Any visitDecl(MainParser::DeclContext *ctx) override;
    antlrcpp::Any visitVarList(MainParser::VarListContext *ctx) override;
    antlrcpp::Any visitVarId(MainParser::VarIdContext *ctx) override;
    antlrcpp::Any visitTypeId(MainParser::TypeIdContext *ctx) override;
    antlrcpp::Any visitAddSubExpr(MainParser::AddSubExprContext *ctx) override;
    antlrcpp::Any visitMulDivExpr(MainParser::MulDivExprContext *ctx) override;
    antlrcpp::Any visitVariableExpr(MainParser::VariableExprContext *ctx) override;
    antlrcpp::Any visitSignedNumberExpr(MainParser::SignedNumberExprContext *ctx) override;
    antlrcpp::Any visitSignedNumber(MainParser::SignedNumberContext *ctx) override;
    antlrcpp::Any visitUnsignedNumberExpr(MainParser::UnsignedNumberExprContext *ctx) override;
    antlrcpp::Any visitIntegerConst(MainParser::IntegerConstContext *ctx) override;
    antlrcpp::Any visitFloatConst(MainParser::FloatConstContext *ctx) override;
    antlrcpp::Any visitParenExpr(MainParser::ParenExprContext *ctx) override;
*/
    antlrcpp::Any visitBlock(MainParser::BlockContext *ctx) override;
    antlrcpp::Any visitStmt(MainParser::StmtContext *ctx) override;
    antlrcpp::Any visitFunc(MainParser::FuncContext *ctx) override;
    antlrcpp::Any visitStmt_list(MainParser::Stmt_listContext *ctx) override;
    antlrcpp::Any visitFunc_list(MainParser::Func_listContext *ctx) override;
    antlrcpp::Any visitAssignment_stmt(MainParser::Assignment_stmtContext *ctx) override;
    antlrcpp::Any visitRepeat_stmt(MainParser::Repeat_stmtContext *ctx) override;
    antlrcpp::Any visitReturn_stmt(MainParser::Return_stmtContext *ctx) override;
    antlrcpp::Any visitIf_stmt(MainParser::If_stmtContext *ctx) override;
    antlrcpp::Any visitDo_while(MainParser::Do_whileContext *ctx) override;
    antlrcpp::Any visitFunction_decl(MainParser::Function_declContext *ctx) override;
    antlrcpp::Any visitFunction_call(MainParser::Function_callContext *ctx) override;
    antlrcpp::Any visitFunction_body(MainParser::Function_bodyContext *ctx) override;
    antlrcpp::Any visitVariable(MainParser::VariableContext *ctx) override;
    antlrcpp::Any visitExpr(MainParser::ExprContext *ctx) override;
    antlrcpp::Any visitType(MainParser::TypeContext *ctx) override;
    antlrcpp::Any visitNumber(MainParser::NumberContext *ctx) override;
    antlrcpp::Any visitSign(MainParser::SignContext *ctx) override;
    antlrcpp::Any visitMul_div_op(MainParser::Mul_div_opContext *ctx) override;
    antlrcpp::Any visitAdd_sub_op(MainParser::Add_sub_opContext *ctx) override;
    antlrcpp::Any visitRel_op(MainParser::Rel_opContext *ctx) override;

};

#endif /* PASS1VISITOR_H_ */
