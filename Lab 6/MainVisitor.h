
#include "wci/intermediate/TypeSpec.h"
using namespace wci::intermediate;


// Generated from Main.g4 by ANTLR 4.7.1

#pragma once


#include "antlr4-runtime.h"
#include "MainParser.h"



/**
 * This class defines an abstract visitor for a parse tree
 * produced by MainParser.
 */
class  MainVisitor : public antlr4::tree::AbstractParseTreeVisitor {
public:

  /**
   * Visit parse trees produced by MainParser.
   */
    virtual antlrcpp::Any visitProgram(MainParser::ProgramContext *context) = 0;

    virtual antlrcpp::Any visitMain(MainParser::MainContext *context) = 0;

    virtual antlrcpp::Any visitBlock(MainParser::BlockContext *context) = 0;

    virtual antlrcpp::Any visitStmt(MainParser::StmtContext *context) = 0;

    virtual antlrcpp::Any visitFunc(MainParser::FuncContext *context) = 0;

    virtual antlrcpp::Any visitVarID(MainParser::VarIDContext *context) = 0;

    virtual antlrcpp::Any visitStmt_list(MainParser::Stmt_listContext *context) = 0;

    virtual antlrcpp::Any visitFunc_list(MainParser::Func_listContext *context) = 0;

    virtual antlrcpp::Any visitAssignment_stmt(MainParser::Assignment_stmtContext *context) = 0;

    virtual antlrcpp::Any visitDeclaration_stmt(MainParser::Declaration_stmtContext *context) = 0;

    virtual antlrcpp::Any visitDeclaration(MainParser::DeclarationContext *context) = 0;

    virtual antlrcpp::Any visitRepeat_stmt(MainParser::Repeat_stmtContext *context) = 0;

    virtual antlrcpp::Any visitReturn_stmt(MainParser::Return_stmtContext *context) = 0;

    virtual antlrcpp::Any visitIf_stmt(MainParser::If_stmtContext *context) = 0;

    virtual antlrcpp::Any visitDo_while(MainParser::Do_whileContext *context) = 0;

    virtual antlrcpp::Any visitPrint_stmt(MainParser::Print_stmtContext *context) = 0;

    virtual antlrcpp::Any visitFunction_call(MainParser::Function_callContext *context) = 0;

    virtual antlrcpp::Any visitIdentifiers(MainParser::IdentifiersContext *context) = 0;

    virtual antlrcpp::Any visitFunction_defn(MainParser::Function_defnContext *context) = 0;

    virtual antlrcpp::Any visitVariable(MainParser::VariableContext *context) = 0;

    virtual antlrcpp::Any visitVariableExpr(MainParser::VariableExprContext *context) = 0;

    virtual antlrcpp::Any visitAddSubExpr(MainParser::AddSubExprContext *context) = 0;

    virtual antlrcpp::Any visitRelOpExpr(MainParser::RelOpExprContext *context) = 0;

    virtual antlrcpp::Any visitUnsignedNumberExpr(MainParser::UnsignedNumberExprContext *context) = 0;

    virtual antlrcpp::Any visitMulDivExpr(MainParser::MulDivExprContext *context) = 0;

    virtual antlrcpp::Any visitParenExpr(MainParser::ParenExprContext *context) = 0;

    virtual antlrcpp::Any visitSignedNumber(MainParser::SignedNumberContext *context) = 0;

    virtual antlrcpp::Any visitSign(MainParser::SignContext *context) = 0;

    virtual antlrcpp::Any visitIntegerConst(MainParser::IntegerConstContext *context) = 0;

    virtual antlrcpp::Any visitCharConst(MainParser::CharConstContext *context) = 0;

    virtual antlrcpp::Any visitStr(MainParser::StrContext *context) = 0;

    virtual antlrcpp::Any visitTypeID(MainParser::TypeIDContext *context) = 0;

    virtual antlrcpp::Any visitFuncID(MainParser::FuncIDContext *context) = 0;

    virtual antlrcpp::Any visitMul_div_op(MainParser::Mul_div_opContext *context) = 0;

    virtual antlrcpp::Any visitAdd_sub_op(MainParser::Add_sub_opContext *context) = 0;

    virtual antlrcpp::Any visitRel_op(MainParser::Rel_opContext *context) = 0;


};

