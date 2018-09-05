/**
 * <h1>CPPErrorHandler</h1>
 *
 * <p>Error handler CPP syntax errors.</p>
 *
 * <p>Copyright (c) 2017 by Ronald Mak</p>
 * <p>For instructional purposes only.  No warranties.</p>
 */
#ifndef WCI_FRONTEND_CPP_CPPERRORHANDLER_H_
#define WCI_FRONTEND_CPP_CPPERRORHANDLER_H_

#include "../Token.h"
#include "../Parser.h"
#include "CPPError.h"

namespace wci { namespace frontend { namespace CPP {

using namespace std;
using namespace wci::frontend;

class CPPErrorHandler
{
public:
    /**
     * Getter.
     * @return the syntax error count.
     */
    int get_error_count() const;

    /**
     * Flag an error in the source line.
     * @param token the bad token.
     * @param errorCode the error code.
     * @param parser the parser.
     * @return the flagger string.
     */
    void flag(Token *token, CPPErrorCode error_code, Parser *parser);

    /**
     * Abort the translation.
     * @param errorCode the error code.
     * @param parser the parser.
     */
    void abort_translation(CPPErrorCode error_code, Parser *parser);

private:
    static int error_count;
    static const int MAX_ERRORS;
};

}}}  // namespace wci::frontend::CPP

#endif /* WCI_FRONTEND_CPP_CPPERRORHANDLER_H_ */
