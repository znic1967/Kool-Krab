
#include "wci/intermediate/TypeSpec.h"
using namespace wci::intermediate;


// Generated from Main.g4 by ANTLR 4.7

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

  virtual antlrcpp::Any visitMainBlock(MainParser::MainBlockContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBlock(MainParser::BlockContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDeclarations(MainParser::DeclarationsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDeclList(MainParser::DeclListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDecl(MainParser::DeclContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitVarList(MainParser::VarListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitVarId(MainParser::VarIdContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTypeId(MainParser::TypeIdContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCompoundStmt(MainParser::CompoundStmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitStmt(MainParser::StmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitStmtList(MainParser::StmtListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAssignmentStmt(MainParser::AssignmentStmtContext *ctx) override {
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

  virtual antlrcpp::Any visitUnsignedNumberExpr(MainParser::UnsignedNumberExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitMulDivExpr(MainParser::MulDivExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitParenExpr(MainParser::ParenExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSignedNumberExpr(MainParser::SignedNumberExprContext *ctx) override {
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

  virtual antlrcpp::Any visitFloatConst(MainParser::FloatConstContext *ctx) override {
    return visitChildren(ctx);
  }


};

