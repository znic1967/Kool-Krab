#include <iostream>
#include <string>
#include <vector>

#include "Pass1Visitor.h"
#include "wci/intermediate/SymTabFactory.h"
#include "wci/intermediate/symtabimpl/Predefined.h"
#include "wci/util/CrossReferencer.h"

using namespace std;
using namespace wci;
using namespace wci::intermediate;
using namespace wci::intermediate::symtabimpl;
using namespace wci::util;

static string func_id = "";

Pass1Visitor::Pass1Visitor()
    : program_id(nullptr), j_file(nullptr)
{
    // Create and initialize the symbol table stack.
    symtab_stack = SymTabFactory::create_symtab_stack();
    Predefined::initialize(symtab_stack);
    cout << "=== Pass1Visitor(): symtab stack initialized." << endl;
}

Pass1Visitor::~Pass1Visitor() {}

ostream& Pass1Visitor::get_assembly_file() { return j_file; }

antlrcpp::Any Pass1Visitor::visitProgram(MainParser::ProgramContext *ctx)
{
    string program_name = "Krabbie";
    cout << "=== visit Program: " << endl;

    program_id = symtab_stack->enter_local(program_name);
    program_id->set_definition((Definition)DF_PROGRAM);
    program_id->set_attribute((SymTabKey) ROUTINE_SYMTAB, symtab_stack->push());
    symtab_stack->set_program_id(program_id);

    // Create the assembly output file.
    j_file.open(program_name + ".j");
    if (j_file.fail())
    {
            cout << "***** Cannot open assembly file." << endl;
            exit(-99);
    }
    // Emit the program header.
    j_file << ".class public " << program_name << endl;
    j_file << ".super java/lang/Object" << endl;

    // Emit the RunTimer and PascalTextIn fields.
    j_file << endl;
    j_file << ".field private static _runTimer LRunTimer;" << endl;
    j_file << ".field private static _standardIn LPascalTextIn;" << endl;

    auto value = visitChildren(ctx);

    // Emit the class constructor.
    j_file << endl;
    j_file << ".method public <init>()V" << endl;
    j_file << endl;
    j_file << "\taload_0" << endl;
    j_file << "\tinvokenonvirtual    java/lang/Object/<init>()V" << endl;
    j_file << "\treturn" << endl;
    j_file << endl;
    j_file << ".limit locals 1" << endl;
    j_file << ".limit stack 1" << endl;
    j_file << ".end method" << endl;

    cout << "=== visitProgram: Printing xref table." << endl;

    // Print the cross-reference table.
    CrossReferencer cross_referencer;
    cross_referencer.print(symtab_stack);
    return value;
}

antlrcpp::Any Pass1Visitor::visitBlock(MainParser::BlockContext *ctx)
 {
     cout << "=== visit Block: " << endl;
     auto value = visitChildren(ctx);
     return value;
 }
antlrcpp::Any Pass1Visitor::visitTypeID(MainParser::TypeIDContext *ctx)
{
    cout << "=== visit Type Id: " + ctx->getText() << endl;
    return visitChildren(ctx);
}
antlrcpp::Any Pass1Visitor::visitVarID(MainParser::VarIDContext *ctx)
{
    cout << "=== visit Var Id: " + ctx->getText() << endl;
    return visitChildren(ctx);
}
antlrcpp::Any Pass1Visitor::visitDeclaration(MainParser::DeclarationContext *ctx)
{
    cout << "=== visit Declaration: " + ctx->getText() << endl;

    j_file << "\n; " << ctx->getText() << "\n" << endl;
    TypeSpec *type;
    string type_indicator;
    string type_name = ctx->typeID()->getText();
    if (type_name=="int")
    {
        type = Predefined::integer_type;
        type_indicator = "I";
    }
    else if (type_name=="char")
    {
        type = Predefined::char_type;
        type_indicator = "C";
    }
    else
    {
        type = nullptr;
        type_indicator = "?";
    }

    string variable_name = func_id + ctx->varID()->getText();
    SymTabEntry *variable_id = symtab_stack->enter_local(variable_name);
    variable_id->set_definition((Definition) DF_VARIABLE);
    variable_id->set_typespec(type);
    j_file << ".field private static "<< variable_name << " " << type_indicator << endl;
    return visitChildren(ctx);
}
antlrcpp::Any Pass1Visitor::visitDeclaration_stmt(MainParser::Declaration_stmtContext *ctx)
{
	return visitChildren(ctx);
}
antlrcpp::Any Pass1Visitor::visitAddSubExpr(MainParser::AddSubExprContext *ctx)
{
    cout << "=== visit Add/Subtract Expression: " + ctx->getText() << endl;
    auto value = visitChildren(ctx);

    TypeSpec *type1 = ctx->expr(0)->type;
    TypeSpec *type2 = ctx->expr(1)->type;

    bool integer_mode =    (type1 == Predefined::integer_type)
                        && (type2 == Predefined::integer_type);
    TypeSpec *type = integer_mode ? Predefined::integer_type
                   :                nullptr;
    ctx->type = type;
    return value;
}


//Another situation where we need to account for Float type
antlrcpp::Any Pass1Visitor::visitMulDivExpr(MainParser::MulDivExprContext *ctx)
{
    cout << "=== visit Multiply/Divide Expression: " + ctx->getText() << endl;
    auto value = visitChildren(ctx);

    TypeSpec *type1 = ctx->expr(0)->type;
    TypeSpec *type2 = ctx->expr(1)->type;

    bool integer_mode =    (type1 == Predefined::integer_type)
                        && (type2 == Predefined::integer_type);

    TypeSpec *type = integer_mode ? Predefined::integer_type : nullptr;
    ctx->type = type;
    return value;
}
antlrcpp::Any Pass1Visitor::visitParenExpr(MainParser::ParenExprContext *ctx)
{
    cout << "=== visit Paren Expression " + ctx->getText() << endl;

    auto value = visitChildren(ctx);
    ctx->type = ctx->expr()->type;
    return value;
}
 antlrcpp::Any Pass1Visitor::visitVariableExpr(MainParser::VariableExprContext *ctx)
{
    cout << "=== visit Variable Expression: " + ctx->getText() << endl;

    string variable_name = func_id + ctx->variable()->getText();
    SymTabEntry *variable_id = symtab_stack->lookup(variable_name);
    ctx->type = variable_id->get_typespec();
    return visitChildren(ctx);
}
antlrcpp::Any Pass1Visitor::visitRelOpExpr(MainParser::RelOpExprContext *ctx)
{    
    cout << "=== visit Relation Op Expression: " + ctx->getText() << endl;
    auto value = visitChildren(ctx);

    TypeSpec *type1 = ctx->expr(0)->type;
    TypeSpec *type2 = ctx->expr(1)->type;

    bool integer_mode =    (type1 == Predefined::integer_type)
                        && (type2 == Predefined::integer_type);

    TypeSpec *type = integer_mode ? Predefined::integer_type
                   :                nullptr;
    ctx->type = type;
    return value;
}
antlrcpp::Any Pass1Visitor::visitCharConst(MainParser::CharConstContext *ctx)
{
    cout << "=== visit Character Constant: " + ctx->getText() << endl;
    ctx->type = Predefined::char_type;
    return visitChildren(ctx);
}
antlrcpp::Any Pass1Visitor::visitIntegerConst(MainParser::IntegerConstContext *ctx)
{
    cout << "=== visit Integer Constant: " + ctx->getText() << endl;
    ctx->type = Predefined::integer_type;
    return visitChildren(ctx);
}
antlrcpp::Any Pass1Visitor::visitSignedNumber(MainParser::SignedNumberContext *ctx)
{
    cout << "=== visitSignedNumber: " + ctx->getText() << endl;
    auto value = visit(ctx->number());
    ctx->type = ctx->number()->type;
    return value;
}

antlrcpp::Any Pass1Visitor::visitUnsignedNumberExpr(MainParser::UnsignedNumberExprContext *ctx)
{
    cout << "=== visitUnsignedNumberExpr: " + ctx->getText() << endl;
    auto value = visit(ctx->number());
    ctx->type = ctx->number()->type;
    return value;
}
antlrcpp::Any Pass1Visitor::visitFuncCallExpr(MainParser::FuncCallExprContext *ctx)
{
    cout << "=== visitFuncCallExpr: " + ctx->getText() << endl;
    string func_name = ctx->function_call()->funcID()->getText();
    SymTabEntry *function_id = symtab_stack->lookup(func_name);
    ctx->type = function_id->get_typespec();
    return visitChildren(ctx);
}
antlrcpp::Any Pass1Visitor::visitFuncID(MainParser::FuncIDContext *ctx)
{
    cout << "=== visit Function ID: " + ctx->getText() << endl;
    string func_name = ctx->IDENTIFIER()->toString();
    SymTabEntry *function_id = symtab_stack->enter_local(func_name);
    function_id->set_definition((Definition) DF_FUNCTION);
    variable_id_list.push_back(function_id);
    return visitChildren(ctx);
}
antlrcpp::Any Pass1Visitor::visitFunction_defn(MainParser::Function_defnContext *ctx)
{
    cout << "=== visit Function Definition: " + ctx->getText() << endl;
    func_id = ctx->funcID()->getText() + "_";
    
    variable_id_list.resize(0);
    auto value = visit(ctx->funcID());
    visit(ctx->typeID());

    TypeSpec *type;
    string type_indicator;
    string type_name = ctx->typeID()->getText();

    if (type_name == "int")
    {
        type = Predefined::integer_type;
        type_indicator = "I";
    }
    else if (type_name == "string")
    {
        type = Predefined::char_type;
        type_indicator = "C";
    }
    else if (type_name == "char")
    {
        type = Predefined::char_type;
        type_indicator = "C";
    }
    else
    {
        type = nullptr;
        type_indicator = "?";
    }
    for (SymTabEntry *id : variable_id_list) 
    {
        id->set_typespec(type);
    }
    for (unsigned int i=0; i<ctx->declaration().size(); i++)
    {
    	visit(ctx->declaration(i));
    }
    visit(ctx->stmt_list());
    func_id = "";
    return NULL;
}
