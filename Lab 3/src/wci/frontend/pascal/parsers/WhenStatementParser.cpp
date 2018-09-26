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

set<PascalTokenType> WhenStatementParser::DO_SET;

void WhenStatementParser::initialize()
{
    if (INITIALIZED) return;

    DO_SET = StatementParser::STMT_START_SET;
    DO_SET.insert(PascalTokenType::DO);

    set<PascalTokenType>::iterator it;
    for (it  = StatementParser::STMT_FOLLOW_SET.begin();
         it != StatementParser::STMT_FOLLOW_SET.end();
         it++)
    {
        DO_SET.insert(*it);
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
	token = next_token(token);  // consume the WHEN

	    // Create an IF node.
	    ICodeNode *when_node =
	            ICodeFactory::create_icode_node((ICodeNodeType) NT_WHEN);


	    // Parse the expression.
	    // The WHEN node adopts the expression subtree as its first child.
	    ExpressionParser expression_parser(this);
	    when_node->add_child(expression_parser.parse_statement(token));

	    // The WHEN node adopts the statement subtree as its second child.
	    StatementParser statement_parser(this);
	    when_node->add_child(statement_parser.parse_statement(token));
	    token = current_token();

	    // Look for an OTHERWISE
	    if (token->get_type() == (TokenType) PT_OTHERWISE)
	    {
	        token = next_token(token);  // consume the OTHERWISE

	        // Parse the OTHERWISE statement.
	        // The WHEN node adopts the statement subtree as its third child.
	        when_node->add_child(statement_parser.parse_statement(token));
	    }

	    return when_node;
}

}}}}  // namespace wci::frontend::pascal::parsers
