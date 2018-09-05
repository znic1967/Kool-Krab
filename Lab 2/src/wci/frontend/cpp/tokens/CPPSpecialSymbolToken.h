/**
 * <h1>CPPSpecialSymbolToken</h1>
 *
 * <p> CPP special symbol tokens.</p>
 *
 * <p>Copyright (c) 2017 by Ronald Mak</p>
 * <p>For instructional purposes only.  No warranties.</p>
 */
#ifndef WCI_FRONTEND_CPP_TOKENS_CPPSPECIALSYMBOLTOKEN_H_
#define WCI_FRONTEND_CPP_TOKENS_CPPSPECIALSYMBOLTOKEN_H_

#include <string>

#include "../CPPToken.h"

namespace wci { namespace frontend { namespace CPP { namespace tokens {

using namespace std;
using namespace wci::frontend::CPP;

class CPPSpecialSymbolToken : public CPPToken
{
public:
    /**
     * Constructor.
     * @param source the source from where to fetch the token's characters.
     * @throw a string message if an error occurred.
     */
    CPPSpecialSymbolToken(Source *source) throw (string);

protected:
    /**
     * Extract a CPP special symbol token from the source.
     * Override of wci::frontend::Token.
     * @throw a string message if an error occurred.
     */
    void extract() throw (string);
};

}}}}  // namespace wci::frontend::CPP::tokens

#endif /* WCI_FRONTEND_CPP_TOKENS_CPPSPECIALSYMBOLTOKEN_H_ */
