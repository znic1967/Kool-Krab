
// Generated from Main.g4 by ANTLR 4.7.1

#pragma once


#include "antlr4-runtime.h"
#include "MainVisitor.h"


/**
 * This class provides an empty implementation of MainVisitor, which can be
 * extended to create a visitor which only needs to handle a subset of the available methods.
 */
class  MainBaseVisitor : public MainVisitor {
public:

  virtual antlrcpp::Any visitProgram(MainParser::ProgramContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitHeader(MainParser::HeaderContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBlock(MainParser::BlockContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitStmt(MainParser::StmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFunc(MainParser::FuncContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitStmt_list(MainParser::Stmt_listContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFunc_list(MainParser::Func_listContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAssignment_stmt(MainParser::Assignment_stmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitRepeat_stmt(MainParser::Repeat_stmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitReturn_stmt(MainParser::Return_stmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitIf_stmt(MainParser::If_stmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDo_while(MainParser::Do_whileContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFunction_decl(MainParser::Function_declContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFunction_call(MainParser::Function_callContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFunction_body(MainParser::Function_bodyContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitVariable(MainParser::VariableContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitVariableExpr(MainParser::VariableExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAddSubExpr(MainParser::AddSubExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitRelOpExpr(MainParser::RelOpExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitUnsignedNumberExpr(MainParser::UnsignedNumberExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitMulDivExpr(MainParser::MulDivExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitParenExpr(MainParser::ParenExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitMulDivOp(MainParser::MulDivOpContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAddSubOp(MainParser::AddSubOpContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSignedNumber(MainParser::SignedNumberContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSign(MainParser::SignContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitIntegerConst(MainParser::IntegerConstContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCharConst(MainParser::CharConstContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTypeID(MainParser::TypeIDContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitMul_div_op(MainParser::Mul_div_opContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAdd_sub_op(MainParser::Add_sub_opContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitRel_op(MainParser::Rel_opContext *ctx) override {
    return visitChildren(ctx);
  }


};
