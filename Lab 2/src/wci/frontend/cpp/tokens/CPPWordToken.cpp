/**
 * <h1>CPPWordToken</h1>
 *
 * <p> CPP word tokens (identifiers and reserved words).</p>
 *
 * <p>Copyright (c) 2017 by Ronald Mak</p>
 * <p>For instructional purposes only.  No warranties.</p>
 */
#include <iostream>
#include <string>
#include <map>
#include "../CPPError.h"
#include "CPPWordToken.h"

namespace wci { namespace frontend { namespace CPP { namespace tokens {

using namespace std;
using namespace wci::frontend;
using namespace wci::frontend::CPP;

CPPWordToken::CPPWordToken(Source *source) throw (string)
    : CPPToken(source)
{
    extract();
}

/**
 * Extract a CPP word token from the source.
 * @throws Exception if an error occurred.
 */
void CPPWordToken::extract() throw (string)
{
    char current_ch = current_char();

    // Get the word characters (letter or digit). The scanner has
    // already determined that the first character is a letter.
    while (isalnum(current_ch))
    {
        text += current_ch;
        current_ch = next_char();  // consume character
    }

    // Is it a reserved word or an identifier?
    string rWord = text;
    if (CPPToken::RESERVED_WORDS.find(rWord)
            != CPPToken::RESERVED_WORDS.end())
    {
        // Reserved word.
        type = (TokenType) CPPToken::RESERVED_WORDS[rWord];
        value = rWord;
    }
    else
    {
        // Identifier.
        type = (TokenType) PT_IDENTIFIER;
    }
}

}}}}  // namespace wci::frontend::CPP::tokens
