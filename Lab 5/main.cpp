#include <iostream>
#include <fstream>

#include "antlr4-runtime.h"
#include "mainLexer.h"
#include "mainParser.h"

using namespace antlrcpp;
using namespace antlr4;
using namespace std;

int main(int, const char **)
{
    ifstream ins;
    ins.open("input.txt");

    ANTLRInputStream input(ins);
    mainLexer lexer(&input);
    CommonTokenStream tokens(&lexer);

    cout << "Tokens:" << endl;
    tokens.fill();
    for (Token *token : tokens.getTokens())
    {
        std::cout << token->toString() << std::endl;
    }

    mainParser parser(&tokens);
    tree::ParseTree *tree = parser.program();

    cout << endl << "Parse tree (Lisp format):" << endl;
    std::cout << tree->toStringTree(&parser) << endl;

    return 0;
}
