/**
 * <h1>CPPStringToken</h1>
 *
 * <p> CPP string tokens.</p>
 *
 * <p>Copyright (c) 2017 by Ronald Mak</p>
 * <p>For instructional purposes only.  No warranties.</p>
 */
#include <string>
#include "CPPStringToken.h"

#include "../CPPError.h"

namespace wci { namespace frontend { namespace CPP { namespace tokens {

using namespace std;
using namespace wci::frontend;
using namespace wci::frontend::CPP;

CPPStringToken::CPPStringToken(Source *source) throw (string)
    : CPPToken(source)
{
    extract();
}

void CPPStringToken::extract() throw (string)
{
    string value_str = "";

    char current_ch = next_char();  // consume initial quote
    text += "\"";

    // Get string characters.
    do
    {
        // Replace any whitespace character with a blank.
        if (isspace(current_ch)) current_ch = ' ';

        if (current_ch=='\\'){

        	//current_ch=next_char();
        	//cout<<"Here"<<endl;
        	if (peek_char()=='\"'){ //Checks if valid escape char
        		//cout<<"Here"<<endl;
        		current_ch=next_char();
        		text += current_ch;
        		value_str += '\"';
        		current_ch = next_char();
        		//next_char();
        	}
        	if (peek_char()=='\"'){ //Checks if valid escape char
				//cout<<"Here"<<endl;
				current_ch=next_char();
				text += current_ch;
				value_str += '\n';
				current_ch = next_char();
				//next_char();
			}
        	if (peek_char()=='t'){ //Checks if valid escape char
				//cout<<"Here"<<endl;
				text+=current_ch;
				current_ch=next_char();
				text += current_ch;
				value_str += "\t";
				current_ch = next_char();
				//next_char();
			}
        	else{
        		value_str += current_ch;
        		text+=current_ch;
        		current_ch=next_char(); //Eat slash anyway if it isnt an escape char
        	}
        }
        else{
            text += current_ch;
            value_str  += current_ch;
            current_ch = next_char();  // consume character
        }

    } while ((current_ch != '\"') && (current_ch != Source::END_OF_FILE));

    if (current_ch == '\"')
    {
        next_char();  // consume final quote
        text += '\"';
        type = (TokenType) PT_STRING;
        value = value_str;
    }
    else
    {
        type = (TokenType) PT_ERROR;
        value = (int) UNEXPECTED_EOF;
    }
}

}}}}  // namespace wci::frontend::CPP::tokens
