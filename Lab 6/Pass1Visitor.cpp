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

Pass1Visitor::Pass1Visitor()
    : program_id(nullptr), j_file(nullptr)
{
    // Create and initialize the symbol table stack.
    symtab_stack = SymTabFactory::create_symtab_stack();
    Predefined::initialize(symtab_stack);

    //cout << "=== Pass1Visitor(): symtab stack initialized." << endl;
}

Pass1Visitor::~Pass1Visitor() {}

ostream& Pass1Visitor::get_assembly_file() { return j_file; }

antlrcpp::Any Pass1Visitor::visitProgram(MainParser::ProgramContext *ctx)
{
    auto value = visitChildren(ctx);

//    cout << "=== visitProgram: Printing xref table." << endl;

    // Print the cross-reference table.
    CrossReferencer cross_referencer;
    cross_referencer.print(symtab_stack);

    return value;
}

antlrcpp::Any Pass1Visitor::visitHeader(MainParser::HeaderContext *ctx)
{
    cout << "=== visitHeader: " + ctx->getText() << endl;

    string program_name = "Krabbie";

    program_id = symtab_stack->enter_local(program_name);
    program_id->set_definition((Definition)DF_PROGRAM);
    program_id->set_attribute((SymTabKey) ROUTINE_SYMTAB,
                              symtab_stack->push());
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

    return visitChildren(ctx);
}

//*********************//
antlrcpp::Any Pass1Visitor::visitBlock(MainParser::BlockContext *ctx)
 {
     cout << "=== visitBlock: " << ctx->getText() << endl;

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

     return value;
 }

antlrcpp::Any Pass1Visitor::visitDeclaration_stmt(MainParser::Declaration_stmtContext *ctx)
{
    cout << "=== visitDeclaration_stmt: " + ctx->getText() << endl;

    TypeSpec *type;
    string type_indicator;

    string type_name = ctx->typeID()->getText();
    if (type_name == "int")
    {
        type = Predefined::integer_type;
        type_indicator = "I";
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
    // Emit a field declaration.
    for (SymTabEntry *id : variable_id_list) {
        id->set_typespec(type);
        j_file << ".field private static "<< id->get_name() << " " << type_indicator << endl;
    }

    string variable_name = ctx->variable()->toString();
    SymTabEntry *variable_id = symtab_stack->enter_local(variable_name);
    variable_id->set_definition((Definition) DF_VARIABLE);
    variable_id_list.push_back(variable_id);

    return visitChildren(ctx);
}

