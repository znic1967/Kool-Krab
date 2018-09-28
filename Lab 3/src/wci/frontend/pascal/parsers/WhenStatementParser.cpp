/**
 * <h1>WhenStatementParser</h1>
 *
 * <p>Parse a Pascal WHILE statement.</p>
 *
 * <p>Copyright (c) 2017 by Ronald Mak</p>
 * <p>For instructional purposes only.  No warranties.</p>
 */
#include <string>
#include <set>
#include "WhenStatementParser.h"
#include "StatementParser.h"
#include "ExpressionParser.h"
#include "../PascalParserTD.h"
#include "../PascalToken.h"
#include "../PascalError.h"
#include "../../Token.h"
#include "../../../intermediate/ICodeNode.h"
#include "../../../intermediate/ICodeFactory.h"
#include "../../../intermediate/icodeimpl/ICodeNodeImpl.h"

namespace wci { namespace frontend { namespace pascal { namespace parsers {

using namespace std;
using namespace wci::frontend::pascal;
using namespace wci::intermediate;
using namespace wci::intermediate::icodeimpl;

bool WhenStatementParser::INITIALIZED = false;
bool WhenStatementParser::OTHERWISE = false;

set<PascalTokenType> WhenStatementParser::OTHERWISE_SET;
set<PascalTokenType> WhenStatementParser::ARROW_RIGHT_SET;
void WhenStatementParser::initialize()
{
    if (INITIALIZED) return;

    OTHERWISE_SET = StatementParser::STMT_START_SET;
    OTHERWISE_SET.insert(PascalTokenType::OTHERWISE);

    ARROW_RIGHT_SET = StatementParser::STMT_START_SET;
    ARROW_RIGHT_SET.insert(PascalTokenType::ARROW_RIGHT);

    set<PascalTokenType>::iterator it; //Inserts everything in follow set into arrow and otherwise
        for (it  = StatementParser::STMT_FOLLOW_SET.begin();
             it != StatementParser::STMT_FOLLOW_SET.end();
             it++)
        {
            ARROW_RIGHT_SET.insert(*it);
            OTHERWISE_SET.insert(*it);
        }
    INITIALIZED = true;
}

WhenStatementParser::WhenStatementParser(PascalParserTD *parent)
    : StatementParser(parent)
{
    initialize();
}

ICodeNode *WhenStatementParser::parse_statement(Token *token) throw (string)
{
    token = next_token(token);  // consume the CASE

    // Create a SELECT node.
    ICodeNode *select_node =
            ICodeFactory::create_icode_node((ICodeNodeType) NT_WHEN);

    // Parse the CASE expression.
    // The SELECT node adopts the expression subtree as its first child.



    // Set of CASE branch constants.
    set<int> constant_set;

    // Loop to parse each CASE branch until the END token
    // or the end of the source file.
    ExpressionParser expression_parser(this);

    while ((token != nullptr) &&
           (token->get_type() != (TokenType) PT_END) /*&&
		   (token->get_type() != (TokenType) PT_OTHERWISE)*/)
    {
        select_node->add_child(parse_branch(token, constant_set));

        token = current_token();
        TokenType token_type = token->get_type();

        // Look for the semicolon between CASE branches.
        if (token_type == (TokenType) PT_SEMICOLON)
        {
            token = next_token(token);  // consume the ;
        }

    }

    // Look for the END token.
    if (token->get_type() == (TokenType) PT_END)
    {
    	if (!OTHERWISE){
    		error_handler.flag(token, MISSING_OTHERWISE, this);
    	}
        token = next_token(token);  // consume END
    }
    else
    {
        error_handler.flag(token, MISSING_END, this);
    }

    return select_node;
}

ICodeNode *WhenStatementParser::parse_branch(Token *token, set<int>& constant_set) throw (string)
{
	bool otherwise = false;
    // Create an SELECT_BRANCH node and a SELECT_CONSTANTS node.
    // The SELECT_BRANCH node adopts the SELECT_CONSTANTS node as its
    // first child.
    ICodeNode *branch_node =
            ICodeFactory::create_icode_node(
                                       (ICodeNodeType) NT_SELECT_BRANCH);
    ICodeNode *expression_node =
               ICodeFactory::create_icode_node(
                                       (ICodeNodeType) NT_EXPRESSION);
    ICodeNode *otherwise_node =
                   ICodeFactory::create_icode_node(
                                           (ICodeNodeType) NT_OTHERWISE);
    branch_node->add_child(expression_node);
    ExpressionParser expression_parser(this);


	//token = synchronize(OTHERWISE_SET);
	token = current_token();

    if (token->get_type() == (TokenType) PT_OTHERWISE) //If otherwise set then no expression so goto statement
	 {
    	//branch_node->add_child(expression_node);
	   token = next_token(token);  // consume OTHERWISE
	   OTHERWISE=true;
	 }
	 else
	 {
		 //If not otherwise node execute expression.
		 expression_node->add_child(expression_parser.parse_statement(token));
	 }

    // Look for the => token.
    token = synchronize(ARROW_RIGHT_SET);
    token = current_token();
    if (token->get_type() == (TokenType) PT_ARROW_RIGHT)
    {
        token = next_token(token);  // consume the =>
    }
    else
    {
        error_handler.flag(token, MISSING_ARROW_RIGHT, this);
    }

    // Parse the CASE branch statement. The SELECT_BRANCH node adopts
    // the statement subtree as its second child.
    StatementParser statementParser(this);
    branch_node->add_child(statementParser.parse_statement(token));
    return branch_node;
}
}}}}  // namespace wci::frontend::pascal::parsers
