#include <iostream>
#include <string>

#include "Pass2Visitor.h"
#include "wci/intermediate/SymTabStack.h"
#include "wci/intermediate/SymTabEntry.h"
#include "wci/intermediate/TypeSpec.h"
#include "wci/intermediate/symtabimpl/Predefined.h"

using namespace wci;
using namespace wci::intermediate;
using namespace wci::intermediate::symtabimpl;

int labelNum = 0;
int label=0;

Pass2Visitor::Pass2Visitor(ostream& j_file)
    : program_name(""), j_file(j_file)
{
}

Pass2Visitor::~Pass2Visitor() {}

antlrcpp::Any Pass2Visitor::visitProgram(MainParser::ProgramContext *ctx)
{
    auto value = visitChildren(ctx);
    //j_file.close();
    return value;
}

antlrcpp::Any Pass2Visitor::visitHeader(MainParser::HeaderContext *ctx)
{
    program_name = "Krabbie";
    return visitChildren(ctx);
}

antlrcpp::Any Pass2Visitor::visitBlock(MainParser::BlockContext *ctx)
{
   // Emit the main program header.
   j_file << endl;
   j_file << ".method public static main([Ljava/lang/String;)V" << endl;
   j_file << endl;
   j_file << "\tnew RunTimer" << endl;
   j_file << "\tdup" << endl;
   j_file << "\tinvokenonvirtual RunTimer/<init>()V" << endl;
   j_file << "\tputstatic        " << program_name
          << "/_runTimer LRunTimer;" << endl;
   j_file << "\tnew PascalTextIn" << endl;
   j_file << "\tdup" << endl;
   j_file << "\tinvokenonvirtual PascalTextIn/<init>()V" << endl;
   j_file << "\tputstatic        " + program_name
          << "/_standardIn LPascalTextIn;" << endl;

   auto value = visitChildren(ctx);

   // Emit the main program epilogue.
   j_file << endl;
   j_file << "\tgetstatic     " << program_name
              << "/_runTimer LRunTimer;" << endl;
   j_file << "\tinvokevirtual RunTimer.printElapsedTime()V" << endl;
   j_file << endl;
   j_file << "\treturn" << endl;
   j_file << endl;
   j_file << ".limit locals 16" << endl;
   j_file << ".limit stack 16" << endl;
   j_file << ".end method" << endl;

   return value;
}

antlrcpp::Any Pass2Visitor::visitStmt(MainParser::StmtContext *ctx)
{
   j_file << endl << "; " + ctx->getText() << endl << endl;

   return visitChildren(ctx);
}

//antlrcpp::Any Pass2Visitor::visitDeclaration(MainParser::DeclarationContext *ctx)
//{
//	    cout << "=== visitDefinition      " << ctx->getText() << endl;
//	    auto value = visit(ctx->expr());
//
//	    string type_indicator =
//	                  (ctx->expr()->type == Predefined::integer_type) ? "I"
//	                : (ctx->expr()->type == Predefined::boolean_type) ? "Z"
//					: (ctx->expr()->type == Predefined::char_type)    ? "C"
//	                :                                                   "?";
//
//	    // Emit a field put instruction.
//	    j_file << "\tputstatic\t" << program_name
//	           << "/" << ctx->declaration()->varID()->IDENTIFIER()->toString()
//	           << " " << type_indicator << endl;
//
//	    return value;
//}
antlrcpp::Any Pass2Visitor::visitDeclaration_stmt(MainParser::Declaration_stmtContext *ctx)
{
	    cout << "=== visitDefinition      " << ctx->getText() << endl;
	    auto value = visit(ctx->expr());

	    string type_indicator =
	                  (ctx->expr()->type == Predefined::integer_type) ? "I"
	                : (ctx->expr()->type == Predefined::boolean_type) ? "Z"
					: (ctx->expr()->type == Predefined::char_type)    ? "C"
	                :                                                   "?";

	    // Emit a field put instruction.
	    j_file << "\tputstatic\t" << program_name
	           << "/" << ctx->declaration()->varID()->IDENTIFIER()->toString()
	           << " " << type_indicator << endl;

	    return value;
}
//Assign and print
antlrcpp::Any Pass2Visitor::visitAssignment_stmt(MainParser::Assignment_stmtContext *ctx)
{
   auto value = visit(ctx->expr());

   string type_indicator =
                 (ctx->expr()->type == Predefined::integer_type) ? "I"
               : (ctx->expr()->type == Predefined::real_type)    ? "F"
               :                                                   "?";

   // Emit a field put instruction.
   	   j_file << "\tputstatic\t" << program_name << "/" << ctx->variable()->IDENTIFIER()->toString() << " " << type_indicator << endl;
//
//   j_file << "\t; Assignment" << endl;
//   j_file << "\t\tgetstatic\tjava/lang/System/out Ljava/io/PrintStream;" << endl;
//   j_file << "\t\tldc" << "\t\"Variable " << ctx->variable()->IDENTIFIER()->toString() << " = %d\\n\"" << endl;
//
//   j_file << "\t\ticonst_1\t" << endl;
//   j_file << "\t\tanewarray\tjava/lang/Object" << endl;
//   j_file << "\t\tdup" << endl;
//
//   j_file << "\t\ticonst_0" << endl;
//   j_file << "\t\tgetstatic\t" << program_name << "/" << ctx->variable()->IDENTIFIER()->toString()<< " " << type_indicator << endl;
//   j_file << "\t\tinvokestatic\tjava/lang/Integer.valueOf(I)Ljava/lang/Integer;" << endl;
//   j_file << "\t\taastore" << endl;
//
//
//   j_file << "\t\tinvokestatic  java/lang/String.format(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;" << endl;
//   j_file << "\t\tinvokevirtual java/io/PrintStream.print(Ljava/lang/String;)V" << endl;

   return value;
}
antlrcpp::Any Pass2Visitor::visitStr(MainParser::StrContext *ctx)
{
	cout << "=== visitStr" << ctx->getText() << endl;
	string value = ctx->STRING()->getText();
	value=value.substr(1,value.length()-1);
	j_file << "\tldc\t" << value << endl;
	return visitChildren(ctx);
}
antlrcpp::Any Pass2Visitor::visitPrint_stmt(MainParser::Print_stmtContext *ctx)
{
	cout << "=== visitPrint_stmt" << endl;
	//auto value = visit(ctx->expr());

	if (ctx->expr()!=NULL)
	{
		auto value = visit(ctx->expr());
		string type_indicator =
			                 (ctx->expr()->type == Predefined::integer_type) ? "I"
			               : (ctx->expr()->type == Predefined::real_type)    ? "F"
			               :                                                   "?";
		   j_file << "\t\tputstatic\t" << program_name << "/" << ctx->expr()->children[0]->getText() << " " << type_indicator << endl;
		   j_file << "\t\tgetstatic\tjava/lang/System/out Ljava/io/PrintStream;" << endl;
		   j_file << "\t\tldc \"" << ctx->expr()->children[0]->getText() << " = %d\\n\"" << endl;

		   j_file << "\t\ticonst_1\t" << endl;
		   j_file << "\t\tanewarray\tjava/lang/Object" << endl;
		   j_file << "\t\tdup" << endl;

		   j_file << "\t\ticonst_0" << endl;
		   j_file << "\t\tgetstatic\t" << program_name << "/" << ctx->expr()->children[0]->getText()<< " " << type_indicator << endl;
		   j_file << "\t\tinvokestatic\tjava/lang/Integer.valueOf(I)Ljava/lang/Integer;" << endl;
		   j_file << "\t\taastore" << endl;


		   j_file << "\t\tinvokestatic  java/lang/String.format(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;" << endl;
		   j_file << "\t\tinvokevirtual java/io/PrintStream.print(Ljava/lang/String;)V" << endl;
	}
	else{
		   j_file << "\t; Assignment" << endl;
		   j_file << "\t\tgetstatic\tjava/lang/System/out Ljava/io/PrintStream;" << endl;
		   j_file << "\t\tldc " << ctx->str()->getText() << "\n" << endl;
		   j_file << "\t\tinvokevirtual java/io/PrintStream.print(Ljava/lang/String;)V" << endl;
	}






	   return NULL;
}
antlrcpp::Any Pass2Visitor::visitAddSubExpr(MainParser::AddSubExprContext *ctx)
{
   auto value = visitChildren(ctx);

   TypeSpec *type1 = ctx->expr(0)->type;
   TypeSpec *type2 = ctx->expr(1)->type;

   bool integer_mode =    (type1 == Predefined::integer_type)
                       && (type2 == Predefined::integer_type);

   string op = ctx->add_sub_op()->getText();
   string opcode;

   if (op == "+")
   {
       opcode = integer_mode ? "iadd":"????";
   }
   else
   {
       opcode = integer_mode ? "isub":"????";
   }

   // Emit an add or subtract instruction.
   j_file << "\t" << opcode << endl;

   return value;
}

antlrcpp::Any Pass2Visitor::visitMulDivExpr(MainParser::MulDivExprContext *ctx)
{
   auto value = visitChildren(ctx);

   TypeSpec *type1 = ctx->expr(0)->type;
   TypeSpec *type2 = ctx->expr(1)->type;

   bool integer_mode =    (type1 == Predefined::integer_type)
                       && (type2 == Predefined::integer_type);
   bool real_mode    =    (type1 == Predefined::real_type)
                       && (type2 == Predefined::real_type);

   string op = ctx->mul_div_op()->getText();
   string opcode;

   if (op == "*")
   {
       opcode = integer_mode ? "imul"
              : real_mode    ? "fmul"
              :                "????";
   }
   else
   {
       opcode = integer_mode ? "idpv"
              : real_mode    ? "fdiv"
              :                "????";
   }

   // Emit a multiply or divide instruction.
   j_file << "\t" << opcode << endl;

   return value;
}

antlrcpp::Any Pass2Visitor::visitVariableExpr(MainParser::VariableExprContext *ctx)
{
	//cout<<"=== visiVariableExpr"<<endl;
   string variable_name = ctx->variable()->IDENTIFIER()->toString();
   TypeSpec *type = ctx->type;

   string type_indicator = (type == Predefined::integer_type) ? "I"
                         : (type == Predefined::real_type)    ? "F"
                         :                                      "?";

   // Emit a field get instruction.
   j_file << "\tgetstatic\t" << program_name
          << "/" << variable_name << " " << type_indicator << endl;

   return visitChildren(ctx);
}

antlrcpp::Any Pass2Visitor::visitSignedNumber(MainParser::SignedNumberContext *ctx)
{
    auto value = visitChildren(ctx);
    TypeSpec *type = ctx->number()->type;

    if (ctx->sign()->children[0] == ctx->sign()->SUB_OP())
    {
        string opcode = (type == Predefined::integer_type) ? "ineg"
                      : (type == Predefined::real_type)    ? "fneg"
                      :                                      "?neg";

        // Emit a negate instruction.
        j_file << "\t" << opcode << endl;
    }

    return value;
}

antlrcpp::Any Pass2Visitor::visitIntegerConst(MainParser::IntegerConstContext *ctx)
{
    // Emit a load constant instruction.
    j_file << "\tldc\t" << ctx->getText() << endl;

    return visitChildren(ctx);
}
antlrcpp::Any Pass2Visitor::visitCharConst(MainParser::CharConstContext *ctx)
{
    // Emit a load constant instruction.
	string str=ctx->getText();
	//string output=str.substr(1,1);
	char ch=str[1];
	int ch_int=(int)ch;
	//str="\""+ output +"\"";
    j_file << "\tldc\t" << ch_int << endl;

    return visitChildren(ctx);
}
antlrcpp::Any Pass2Visitor::visitDo_while(MainParser::Do_whileContext *ctx)
{
	cout << "=== visitDo_WhileStatement: "<< ctx->getText() << endl;

	int loop_start=labelNum++;

	//cout<<"Loop Start: "<<loop_start<<endl;
	j_file << "Label_" << loop_start << ":" << endl;
	visit(ctx->stmt_list());
	//int loop_end=labelNum++;
	label=loop_start;
	visit(ctx->expr()); //if the condition is still true go to loop start, else fall through
	return NULL;
}
antlrcpp::Any Pass2Visitor::visitIf_stmt(MainParser::If_stmtContext *ctx)
{
	cout << "=== visitIfStatement " << ctx->getText() << endl;

   int original_label = labelNum++;
   int true_label=labelNum++;
   int last_label=labelNum++;
   int statement_size = ctx->stmt_list().size();
   //cout<<"Stmt size:"<<statement_size<<endl;

  bool has_else = (statement_size > 1) ? true : false;

  //cout<<"Last label: "<<last_label<<endl;

  j_file << "Label_" << original_label << ":" << endl;
  label=true_label;
  visit(ctx->expr()); //If the expression is true jump to true statements

  if(has_else)
  {
  	visitChildren(ctx->stmt_list(statement_size -1));
  	j_file << "\tgoto " << "Label_" << last_label << endl;
  }

  j_file << "Label_" << true_label << ":" << endl;
  visitChildren(ctx->stmt_list(statement_size-2));
  j_file << "Label_" << last_label << ":" << endl;
  return NULL;
}

antlrcpp::Any Pass2Visitor::visitRelOpExpr(MainParser::RelOpExprContext *ctx)
{
	cout << "=== visitRelOpExpr " << ctx->getText() << endl;

	//j_file << "\tlcmp" << endl; //Pushes integer to stack to be checked in other visitor

    auto value = visitChildren(ctx);

    TypeSpec *type1 = ctx->expr(0)->type;
    TypeSpec *type2 = ctx->expr(1)->type;

    bool integer_mode =    (type1 == Predefined::integer_type)
                        && (type2 == Predefined::integer_type);
    bool boolean_mode =    (type1 == Predefined::boolean_type)
                        && (type2 == Predefined::boolean_type);

    string op = ctx->rel_op()->getText();
    string jas_op;

    if (op == "==")
    {
        jas_op = integer_mode ? "if_icmpeq" : boolean_mode ? "if_icmpeq"
               :                "????";
    }
    else if (op == "!=")
    {
        jas_op = integer_mode ? "if_icmpne":"????";
    }
    else if (op == "<")
    {
        jas_op = integer_mode ? "if_icmplt":"????";
    }
    else if (op == "<=")
    {
        jas_op = integer_mode ? "if_icmple":"????";
    }
    else if (op == ">")
    {
        jas_op = integer_mode ? "if_icmpgt":"????";
    }
    else // >=
    {
        jas_op = integer_mode ? "if_icmpge":"????";
    }

    //label=labelNum++;
    //cout<<"Label_rel: "<<label<<endl;
    j_file << "\t" << jas_op << " Label_" << label << endl;
    //cout<<"Jas op: "<<jas_op<<endl;

    return NULL;
}
