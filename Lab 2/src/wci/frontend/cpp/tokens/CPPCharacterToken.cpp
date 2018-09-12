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
    string value_str = "";

    char current_ch = next_char();  // consume initial quote
    text += "'";

    // Get Character characters.
    do
    {
        // Replace any whitespace character with a blank.
        if (isspace(current_ch)) current_ch = ' ';

        if ((current_ch != '\'') && (current_ch != EOF))
        {
            text += current_ch;
            value_str  += current_ch;
            current_ch = next_char();  // consume character
        }

        // Quote?  Each pair of adjacent quotes represents a single-quote.
        if (current_ch == '\'')
        {
            while ((current_ch == '\'') && (peek_char() == '\''))
            {
                text += "''";
                value_str  += current_ch;  // append single-quote
                current_ch = next_char();  // consume pair of quotes
                current_ch = next_char();
            }
        }
    } while ((current_ch != '\'') && (current_ch != Source::END_OF_FILE));

    if (current_ch == '\'')
    {
        next_char();  // consume final quote
        text += '\'';
        type = (TokenType) PT_CHAR;
        value = value_str;
    }
    else
    {
        type = (TokenType) PT_ERROR;
        value = (int) UNEXPECTED_EOF;
    }
}

}}}}  // namespace wci::frontend::CPP::tokens
