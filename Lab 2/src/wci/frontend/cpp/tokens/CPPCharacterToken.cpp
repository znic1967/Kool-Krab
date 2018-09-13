/**
 * <h1>CPPCharacterToken</h1>
 *
 * <p> CPP Character tokens.</p>
 *
 * <p>Copyright (c) 2017 by Ronald Mak</p>
 * <p>For instructional purposes only.  No warranties.</p>
 */
#include <string>
#include "CPPCharacterToken.h"

#include "../CPPError.h"

namespace wci { namespace frontend { namespace CPP { namespace tokens {

using namespace std;
using namespace wci::frontend;
using namespace wci::frontend::CPP;

CPPCharacterToken::CPPCharacterToken(Source *source) throw (string)
    : CPPToken(source)
{
    extract();
}

void CPPCharacterToken::extract() throw (string)
{
    string value_ch = "";
    int count=0; //Can be used later to check for strings enclosed in single quotes
    char current_ch = next_char();  // consume initial quote
    text += "'";

    while ((current_ch != '\'') && (current_ch != Source::END_OF_FILE)){
    	if (current_ch=='\\'){
    		value_ch = current_ch;
    		text+=current_ch;
    		current_ch=next_char(); //Eat backslash
    		if (peek_char()=='\''){
    			value_ch = current_ch;
    			text+=current_ch;
    			current_ch=next_char();
    		}

    	}
    	else{
    		value_ch = current_ch;
			text+=current_ch;
			current_ch = next_char();
    	}
    }
	if (current_ch == '\'')
	{
		current_ch=next_char();  // consume final quote
		text += '\'';
		type = (TokenType) PT_CHAR;
		value = value_ch;
	}
    else
    {
        type = (TokenType) PT_ERROR;
        value = (int) UNEXPECTED_EOF;
    }
}

}}}}  // namespace wci::frontend::CPP::tokens
