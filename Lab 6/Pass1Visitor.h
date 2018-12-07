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
    //antlrcpp::Any visitHeader(MainParser::HeaderContext *ctx) override;
    antlrcpp::Any visitBlock(MainParser::BlockContext *ctx) override;
    antlrcpp::Any visitDeclaration(MainParser::DeclarationContext *ctx) override;
    antlrcpp::Any visitDeclaration_stmt(MainParser::Declaration_stmtContext *ctx) override;
    antlrcpp::Any visitTypeID(MainParser::TypeIDContext *ctx) override;
    antlrcpp::Any visitAddSubExpr(MainParser::AddSubExprContext *ctx) override;
    antlrcpp::Any visitMulDivExpr(MainParser::MulDivExprContext *ctx) override;
    antlrcpp::Any visitVarID(MainParser::VarIDContext *ctx) override;
    antlrcpp::Any visitParenExpr(MainParser::ParenExprContext *ctx) override;
    antlrcpp::Any visitVariableExpr(MainParser::VariableExprContext *ctx) override;
    antlrcpp::Any visitSignedNumber(MainParser::SignedNumberContext *ctx) override;
    antlrcpp::Any visitUnsignedNumberExpr(MainParser::UnsignedNumberExprContext *ctx) override;
    antlrcpp::Any visitCharConst(MainParser::CharConstContext *ctx) override;
    antlrcpp::Any visitRelOpExpr(MainParser::RelOpExprContext *ctx) override;
    antlrcpp::Any visitIntegerConst(MainParser::IntegerConstContext *ctx) override;
    antlrcpp::Any visitFunction_defn(MainParser::Function_defnContext *ctx) override;
    antlrcpp::Any visitFuncID(MainParser::FuncIDContext *ctx) override;
    antlrcpp::Any visitFuncCallExpr(MainParser::FuncCallExprContext *ctx) override;

};

#endif /* PASS1VISITOR_H_ */
