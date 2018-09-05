/**
 * <h1>CPPErrorToken</h1>
 *
 * <p>CPP error token.</p>
 *
 * <p>Copyright (c) 2017 by Ronald Mak</p>
 * <p>For instructional purposes only.  No warranties.</p>
 */
#include "CPPErrorToken.h"
#include "../../Token.h"
#include "../CPPToken.h"

namespace wci { namespace frontend { namespace CPP { namespace tokens {

using namespace std;
using namespace wci::frontend::CPP;

CPPErrorToken::CPPErrorToken(Source *source, CPPErrorCode error_code,
                                   string token_text)
    throw (string)
    : CPPToken(source)
{
    type = (TokenType) PT_ERROR;
    text = token_text;
    value = (int) error_code;
}

void CPPErrorToken::extract() throw (string)
{
    // do nothing
}

}}}}  // namespace wci::frontend::CPP::tokens
