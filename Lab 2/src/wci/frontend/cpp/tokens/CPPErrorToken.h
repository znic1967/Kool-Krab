/**
 * <h1>CPPErrorToken</h1>
 *
 * <p>CPP error token.</p>
 *
 * <p>Copyright (c) 2017 by Ronald Mak</p>
 * <p>For instructional purposes only.  No warranties.</p>
 */
#ifndef WCI_FRONTEND_CPP_TOKENS_CPPERRORTOKEN_H_
#define WCI_FRONTEND_CPP_TOKENS_CPPERRORTOKEN_H_

#include <string>

#include "../CPPError.h"
#include "../CPPToken.h"

namespace wci { namespace frontend { namespace CPP { namespace tokens {

using namespace std;
using namespace wci::frontend::CPP;

class CPPErrorToken : public CPPToken
{
public:
    /**
     * Constructor.
     * @param source the source from where to fetch subsequent characters.
     * @param errorCode the error code.
     * @param tokenText the text of the erroneous token.
     * @throw a string message if an error occurred.
     */
    CPPErrorToken(Source *source, CPPErrorCode error_code,
                     string token_text)
        throw (string);

protected:
    /**
     * Do nothing.  Do not consume any source characters.
     * Override of wci::frontend::Token.
     * @throw a string message if an error occurred.
     */
    void extract() throw (string);
};

}}}}  // namespace wci::frontend::CPP::tokens

#endif /* WCI_FRONTEND_CPP_TOKENS_CPPERRORTOKEN_H_ */
