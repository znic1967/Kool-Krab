
// Generated from main.g4 by ANTLR 4.7.1

#pragma once


#include "antlr4-runtime.h"
#include "mainParser.h"


/**
 * This interface defines an abstract listener for a parse tree produced by mainParser.
 */
class  mainListener : public antlr4::tree::ParseTreeListener {
public:

  virtual void enterProgram(mainParser::ProgramContext *ctx) = 0;
  virtual void exitProgram(mainParser::ProgramContext *ctx) = 0;

  virtual void enterHeader(mainParser::HeaderContext *ctx) = 0;
  virtual void exitHeader(mainParser::HeaderContext *ctx) = 0;

  virtual void enterBlock(mainParser::BlockContext *ctx) = 0;
  virtual void exitBlock(mainParser::BlockContext *ctx) = 0;

  virtual void enterStmt(mainParser::StmtContext *ctx) = 0;
  virtual void exitStmt(mainParser::StmtContext *ctx) = 0;

  virtual void enterFunc(mainParser::FuncContext *ctx) = 0;
  virtual void exitFunc(mainParser::FuncContext *ctx) = 0;

  virtual void enterStmt_list(mainParser::Stmt_listContext *ctx) = 0;
  virtual void exitStmt_list(mainParser::Stmt_listContext *ctx) = 0;

  virtual void enterFunc_list(mainParser::Func_listContext *ctx) = 0;
  virtual void exitFunc_list(mainParser::Func_listContext *ctx) = 0;

  virtual void enterAssignment_stmt(mainParser::Assignment_stmtContext *ctx) = 0;
  virtual void exitAssignment_stmt(mainParser::Assignment_stmtContext *ctx) = 0;

  virtual void enterRepeat_stmt(mainParser::Repeat_stmtContext *ctx) = 0;
  virtual void exitRepeat_stmt(mainParser::Repeat_stmtContext *ctx) = 0;

  virtual void enterIf_stmt(mainParser::If_stmtContext *ctx) = 0;
  virtual void exitIf_stmt(mainParser::If_stmtContext *ctx) = 0;

  virtual void enterDo_while(mainParser::Do_whileContext *ctx) = 0;
  virtual void exitDo_while(mainParser::Do_whileContext *ctx) = 0;

  virtual void enterFunction_decl(mainParser::Function_declContext *ctx) = 0;
  virtual void exitFunction_decl(mainParser::Function_declContext *ctx) = 0;

  virtual void enterFunction_call(mainParser::Function_callContext *ctx) = 0;
  virtual void exitFunction_call(mainParser::Function_callContext *ctx) = 0;

  virtual void enterVariable(mainParser::VariableContext *ctx) = 0;
  virtual void exitVariable(mainParser::VariableContext *ctx) = 0;

  virtual void enterExpr(mainParser::ExprContext *ctx) = 0;
  virtual void exitExpr(mainParser::ExprContext *ctx) = 0;

  virtual void enterType(mainParser::TypeContext *ctx) = 0;
  virtual void exitType(mainParser::TypeContext *ctx) = 0;

  virtual void enterNumber(mainParser::NumberContext *ctx) = 0;
  virtual void exitNumber(mainParser::NumberContext *ctx) = 0;

  virtual void enterSign(mainParser::SignContext *ctx) = 0;
  virtual void exitSign(mainParser::SignContext *ctx) = 0;

  virtual void enterMul_div_op(mainParser::Mul_div_opContext *ctx) = 0;
  virtual void exitMul_div_op(mainParser::Mul_div_opContext *ctx) = 0;

  virtual void enterAdd_sub_op(mainParser::Add_sub_opContext *ctx) = 0;
  virtual void exitAdd_sub_op(mainParser::Add_sub_opContext *ctx) = 0;

  virtual void enterRel_op(mainParser::Rel_opContext *ctx) = 0;
  virtual void exitRel_op(mainParser::Rel_opContext *ctx) = 0;


};

