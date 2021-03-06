#include <iostream>
#include <fstream>

#include "antlr4-runtime.h"
#include "MainLexer.h"
#include "MainParser.h"
#include "Pass1Visitor.h"
#include "Pass2Visitor.h"

using namespace std;
using namespace antlrcpp;
using namespace antlr4;

int main(int argc, const char *args[])
{
    ifstream ins;
    ins.open(args[1]);

    ANTLRInputStream input(ins);
    MainLexer lexer(&input);
    CommonTokenStream tokens(&lexer);

    MainParser parser(&tokens);
    tree::ParseTree *tree = parser.program();

    Pass1Visitor *pass1 = new Pass1Visitor();
    pass1->visit(tree);

    ostream& j_file = pass1->get_assembly_file();

    cout<<endl<<endl;
    cout<<"||==================================================||"<<endl;
    cout<<"||=====================Pass 2=======================||"<<endl<<endl;

    Pass2Visitor *pass2 = new Pass2Visitor(j_file);
    pass2->visit(tree);

    //delete tree;
    return 0;
}
