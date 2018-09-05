/**
 * <h1>CPPScanner</h1>
 *
 * <p>The CPP scanner.</p>
 *
 * <p>Copyright (c) 2017 by Ronald Mak</p>
 * <p>For instructional purposes only.  No warranties.</p>
 */
#ifndef WCI_FRONTEND_CPP_CPPSCANNER_H_
#define WCI_FRONTEND_CPP_CPPSCANNER_H_

#include "../Scanner.h"
#include "../Source.h"
#include "../Token.h"

namespace wci { namespace frontend { namespace CPP {

using namespace std;
using namespace wci::frontend;

class CPPScanner : public Scanner
{
public:
    /**
     * Constructor
     * @param source the source to be used with this scanner.
     */
    CPPScanner(Source *source);

protected:
    /**
     * Extract and return the next CPP token from the source.
     * @return the next token.
     * @throw a string message if an error occurred.
     */
    Token *extract_token() throw (string);

private:
    /**
     * Skip whitespace characters by consuming them.  A comment is whitespace.
     * @throw a string message if an error occurred.
     */
    void skip_white_space() throw (string);
};

}}} // namespace wci::frontend::CPP

#endif /* WCI_FRONTEND_CPP_CPPSCANNER_H_ */
