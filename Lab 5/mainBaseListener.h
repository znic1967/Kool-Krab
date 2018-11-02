
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

  virtual void enterDeclarations(mainParser::DeclarationsContext * /*ctx*/) override { }
  virtual void exitDeclarations(mainParser::DeclarationsContext * /*ctx*/) override { }

  virtual void enterDecl_list(mainParser::Decl_listContext * /*ctx*/) override { }
  virtual void exitDecl_list(mainParser::Decl_listContext * /*ctx*/) override { }

  virtual void enterDecl(mainParser::DeclContext * /*ctx*/) override { }
  virtual void exitDecl(mainParser::DeclContext * /*ctx*/) override { }

  virtual void enterVar_list(mainParser::Var_listContext * /*ctx*/) override { }
  virtual void exitVar_list(mainParser::Var_listContext * /*ctx*/) override { }

  virtual void enterVar_id(mainParser::Var_idContext * /*ctx*/) override { }
  virtual void exitVar_id(mainParser::Var_idContext * /*ctx*/) override { }

  virtual void enterType_id(mainParser::Type_idContext * /*ctx*/) override { }
  virtual void exitType_id(mainParser::Type_idContext * /*ctx*/) override { }

  virtual void enterCompound_stmt(mainParser::Compound_stmtContext * /*ctx*/) override { }
  virtual void exitCompound_stmt(mainParser::Compound_stmtContext * /*ctx*/) override { }

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

  virtual void enterFunction(mainParser::FunctionContext * /*ctx*/) override { }
  virtual void exitFunction(mainParser::FunctionContext * /*ctx*/) override { }

  virtual void enterVariable(mainParser::VariableContext * /*ctx*/) override { }
  virtual void exitVariable(mainParser::VariableContext * /*ctx*/) override { }

  virtual void enterExpr(mainParser::ExprContext * /*ctx*/) override { }
  virtual void exitExpr(mainParser::ExprContext * /*ctx*/) override { }

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

