/**
 * <h1>CPPScanner</h1>
 *
 * <p>The CPP scanner.</p>
 *
 * <p>Copyright (c) 2017 by Ronald Mak</p>
 * <p>For instructional purposes only.  No warranties.</p>
 */
#include <iostream>
#include "CPPToken.h"
#include "CPPError.h"
#include "../Source.h"
#include "CPPScanner.h"
#include "tokens/CPPWordToken.h"
#include "tokens/CPPNumberToken.h"
#include "tokens/CPPStringToken.h"
#include "tokens/CPPCharacterToken.h"
#include "tokens/CPPSpecialSymbolToken.h"
#include "tokens/CPPErrorToken.h"

namespace wci { namespace frontend { namespace CPP {

using namespace std;
using namespace wci::frontend;
using namespace wci::frontend::CPP::tokens;

CPPScanner::CPPScanner(Source *source) : Scanner(source)
{
}

Token *CPPScanner::extract_token() throw (string)
{
    skip_white_space();

    Token *token;
    char current_ch = current_char();
    string string_ch = " ";

    string_ch[0] = current_ch;

    // Construct the next token.  The current character determines the
    // token type.
    if (current_ch == Source::END_OF_FILE)
    {
        token = nullptr;
    }
    else if (isalpha(current_ch))
    {
        token = new CPPWordToken(source);
    }
    else if (isdigit(current_ch))
    {
        token = new CPPNumberToken(source);
    }
    else if (current_ch == '\"')
    {
        token = new CPPStringToken(source);
    }
    else if (current_ch == '\'')
	{
		token = new CPPCharacterToken(source);
	}
    else if (CPPToken::SPECIAL_SYMBOLS.find(string_ch)
                != CPPToken::SPECIAL_SYMBOLS.end())
    {
        token = new CPPSpecialSymbolToken(source);
    }
    else
    {
        token = new CPPErrorToken(source, INVALID_CHARACTER, string_ch);
        next_char();  // consume character
    }

    return token;
}

void CPPScanner::skip_white_space() throw (string)
{
	char current_ch = current_char();
	while(isspace(current_ch) || (current_ch =='/')){

		//Single line comment
		if ((current_ch == '/') && (peek_char() == '/')){
			current_ch= next_char(); //Consumes '/'
			do
			{
				current_ch = next_char(); //consume comment characters
			} while (current_ch != Source::END_OF_LINE);
		}

		//Multiline comment
		if ((current_ch == '/') && (peek_char() == '*')){
			current_ch= next_char(); //Consumes '*'
			do
			{
				current_ch = next_char(); //consume comment characters
			} while( !((current_ch== '*') && (next_char() == '/')));
			current_ch=next_char(); //Consumes '/'
		}
		//Not a comment
		else current_ch = next_char();
	}
}


}}} // namespace wci::frontend::CPP
