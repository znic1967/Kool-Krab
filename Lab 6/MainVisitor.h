
#include "wci/intermediate/TypeSpec.h"
using namespace wci::intermediate;


// Generated from Main.g4 by ANTLR 4.7

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

    virtual antlrcpp::Any visitHeader(MainParser::HeaderContext *context) = 0;

    virtual antlrcpp::Any visitMainBlock(MainParser::MainBlockContext *context) = 0;

    virtual antlrcpp::Any visitBlock(MainParser::BlockContext *context) = 0;

    virtual antlrcpp::Any visitDeclarations(MainParser::DeclarationsContext *context) = 0;

    virtual antlrcpp::Any visitDeclList(MainParser::DeclListContext *context) = 0;

    virtual antlrcpp::Any visitDecl(MainParser::DeclContext *context) = 0;

    virtual antlrcpp::Any visitVarList(MainParser::VarListContext *context) = 0;

    virtual antlrcpp::Any visitVarId(MainParser::VarIdContext *context) = 0;

    virtual antlrcpp::Any visitTypeId(MainParser::TypeIdContext *context) = 0;

    virtual antlrcpp::Any visitCompoundStmt(MainParser::CompoundStmtContext *context) = 0;

    virtual antlrcpp::Any visitStmt(MainParser::StmtContext *context) = 0;

    virtual antlrcpp::Any visitStmtList(MainParser::StmtListContext *context) = 0;

    virtual antlrcpp::Any visitAssignmentStmt(MainParser::AssignmentStmtContext *context) = 0;

    virtual antlrcpp::Any visitVariable(MainParser::VariableContext *context) = 0;

    virtual antlrcpp::Any visitVariableExpr(MainParser::VariableExprContext *context) = 0;

    virtual antlrcpp::Any visitAddSubExpr(MainParser::AddSubExprContext *context) = 0;

    virtual antlrcpp::Any visitUnsignedNumberExpr(MainParser::UnsignedNumberExprContext *context) = 0;

    virtual antlrcpp::Any visitMulDivExpr(MainParser::MulDivExprContext *context) = 0;

    virtual antlrcpp::Any visitParenExpr(MainParser::ParenExprContext *context) = 0;

    virtual antlrcpp::Any visitSignedNumberExpr(MainParser::SignedNumberExprContext *context) = 0;

    virtual antlrcpp::Any visitMulDivOp(MainParser::MulDivOpContext *context) = 0;

    virtual antlrcpp::Any visitAddSubOp(MainParser::AddSubOpContext *context) = 0;

    virtual antlrcpp::Any visitSignedNumber(MainParser::SignedNumberContext *context) = 0;

    virtual antlrcpp::Any visitSign(MainParser::SignContext *context) = 0;

    virtual antlrcpp::Any visitIntegerConst(MainParser::IntegerConstContext *context) = 0;

    virtual antlrcpp::Any visitFloatConst(MainParser::FloatConstContext *context) = 0;


};

