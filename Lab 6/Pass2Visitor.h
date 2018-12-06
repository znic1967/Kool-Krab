#ifndef PASS2VISITOR_H_
#define PASS2VISITOR_H_

#include <iostream>
#include <string>

#include "wci/intermediate/SymTabStack.h"
#include "wci/intermediate/SymTabEntry.h"
#include "wci/intermediate/TypeSpec.h"

#include "MainBaseVisitor.h"
#include "antlr4-runtime.h"
#include "MainVisitor.h"

using namespace wci;
using namespace wci::intermediate;

class Pass2Visitor : public MainBaseVisitor
{
private:
	string program_name;
	ostream& j_file;

public:
	Pass2Visitor(ostream& j_file);
    virtual ~Pass2Visitor();

    antlrcpp::Any visitProgram(MainParser::ProgramContext *ctx) override;
    antlrcpp::Any visitHeader(MainParser::HeaderContext *ctx) override;
    antlrcpp::Any visitBlock(MainParser::BlockContext *ctx) override;
    antlrcpp::Any visitStmt(MainParser::StmtContext *ctx) override;
    antlrcpp::Any visitDeclaration_stmt(MainParser::Declaration_stmtContext *ctx) override;
    antlrcpp::Any visitAssignment_stmt(MainParser::Assignment_stmtContext *ctx) override;
    antlrcpp::Any visitAddSubExpr(MainParser::AddSubExprContext *ctx) override;
    antlrcpp::Any visitMulDivExpr(MainParser::MulDivExprContext *ctx) override;
    antlrcpp::Any visitVariableExpr(MainParser::VariableExprContext *ctx) override;
    antlrcpp::Any visitSignedNumber(MainParser::SignedNumberContext *ctx) override;
    antlrcpp::Any visitIntegerConst(MainParser::IntegerConstContext *ctx) override;
    antlrcpp::Any visitCharConst(MainParser::CharConstContext *ctx) override;
    antlrcpp::Any visitPrint_stmt(MainParser::Print_stmtContext *ctx) override;
    antlrcpp::Any visitStr(MainParser::StrContext *ctx) override;

    antlrcpp::Any visitDo_while(MainParser::Do_whileContext *ctx) override;
    antlrcpp::Any visitIf_stmt(MainParser::If_stmtContext *ctx) override;
    antlrcpp::Any visitRelOpExpr(MainParser::RelOpExprContext *ctx) override;
    antlrcpp::Any visitFunction_defn(MainParser::Function_defnContext *ctx) override;


};
#endif /* PASS2VISITOR_H_ */
