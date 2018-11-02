
// Generated from main.g4 by ANTLR 4.7.1

#pragma once


#include "antlr4-runtime.h"
#include "mainListener.h"


/**
 * This class provides an empty implementation of mainListener,
 * which can be extended to create a listener which only needs to handle a subset
 * of the available methods.
 */
class  mainBaseListener : public mainListener {
public:

  virtual void enterProgram(mainParser::ProgramContext * /*ctx*/) override { }
  virtual void exitProgram(mainParser::ProgramContext * /*ctx*/) override { }

  virtual void enterHeader(mainParser::HeaderContext * /*ctx*/) override { }
  virtual void exitHeader(mainParser::HeaderContext * /*ctx*/) override { }

  virtual void enterBlock(mainParser::BlockContext * /*ctx*/) override { }
  virtual void exitBlock(mainParser::BlockContext * /*ctx*/) override { }

  virtual void enterStmt(mainParser::StmtContext * /*ctx*/) override { }
  virtual void exitStmt(mainParser::StmtContext * /*ctx*/) override { }

  virtual void enterStmt_list(mainParser::Stmt_listContext * /*ctx*/) override { }
  virtual void exitStmt_list(mainParser::Stmt_listContext * /*ctx*/) override { }

  virtual void enterAssignment_stmt(mainParser::Assignment_stmtContext * /*ctx*/) override { }
  virtual void exitAssignment_stmt(mainParser::Assignment_stmtContext * /*ctx*/) override { }

  virtual void enterRepeat_stmt(mainParser::Repeat_stmtContext * /*ctx*/) override { }
  virtual void exitRepeat_stmt(mainParser::Repeat_stmtContext * /*ctx*/) override { }

  virtual void enterIf_stmt(mainParser::If_stmtContext * /*ctx*/) override { }
  virtual void exitIf_stmt(mainParser::If_stmtContext * /*ctx*/) override { }

  virtual void enterDo_while(mainParser::Do_whileContext * /*ctx*/) override { }
  virtual void exitDo_while(mainParser::Do_whileContext * /*ctx*/) override { }

  virtual void enterFunction_decl(mainParser::Function_declContext * /*ctx*/) override { }
  virtual void exitFunction_decl(mainParser::Function_declContext * /*ctx*/) override { }

  virtual void enterFunction_call(mainParser::Function_callContext * /*ctx*/) override { }
  virtual void exitFunction_call(mainParser::Function_callContext * /*ctx*/) override { }

  virtual void enterVariable(mainParser::VariableContext * /*ctx*/) override { }
  virtual void exitVariable(mainParser::VariableContext * /*ctx*/) override { }

  virtual void enterExpr(mainParser::ExprContext * /*ctx*/) override { }
  virtual void exitExpr(mainParser::ExprContext * /*ctx*/) override { }

  virtual void enterType(mainParser::TypeContext * /*ctx*/) override { }
  virtual void exitType(mainParser::TypeContext * /*ctx*/) override { }

  virtual void enterNumber(mainParser::NumberContext * /*ctx*/) override { }
  virtual void exitNumber(mainParser::NumberContext * /*ctx*/) override { }

  virtual void enterSign(mainParser::SignContext * /*ctx*/) override { }
  virtual void exitSign(mainParser::SignContext * /*ctx*/) override { }

  virtual void enterMul_div_op(mainParser::Mul_div_opContext * /*ctx*/) override { }
  virtual void exitMul_div_op(mainParser::Mul_div_opContext * /*ctx*/) override { }

  virtual void enterAdd_sub_op(mainParser::Add_sub_opContext * /*ctx*/) override { }
  virtual void exitAdd_sub_op(mainParser::Add_sub_opContext * /*ctx*/) override { }

  virtual void enterRel_op(mainParser::Rel_opContext * /*ctx*/) override { }
  virtual void exitRel_op(mainParser::Rel_opContext * /*ctx*/) override { }


  virtual void enterEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void exitEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void visitTerminal(antlr4::tree::TerminalNode * /*node*/) override { }
  virtual void visitErrorNode(antlr4::tree::ErrorNode * /*node*/) override { }

};

