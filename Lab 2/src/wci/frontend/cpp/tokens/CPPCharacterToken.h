/**
 * <h1>CPPCharacterToken</h1>
 *
 * <p> CPP Character tokens.</p>
 *
 * <p>Copyright (c) 2017 by Ronald Mak</p>
 * <p>For instructional purposes only.  No warranties.</p>
 */
#ifndef WCI_FRONTEND_CPP_TOKENS_CPPCharacterTOKEN_H_
#define WCI_FRONTEND_CPP_TOKENS_CPPCharacterTOKEN_H_

#include <string>

#include "../CPPToken.h"

namespace wci { namespace frontend { namespace CPP { namespace tokens {

using namespace std;
using namespace wci::frontend::CPP;

class CPPCharacterToken : public CPPToken
{
public:
    /**
     * Constructor.
     * @param source the source from where to fetch the token's characters.
     * @throw a Character message if an error occurred.
     */
    CPPCharacterToken(Source *source) throw (string);

protected:
    /**
     * Extract a CPP Character token from the source.
     * Override of wci::frontend::Token.
     * @throw a Character message if an error occurred.
     */
    void extract() throw (string);
};

}}}}  // namespace wci::frontend::CPP::tokens

#endif /* WCI_FRONTEND_CPP_TOKENS_CPPCHARACTERTOKEN_H_ */
