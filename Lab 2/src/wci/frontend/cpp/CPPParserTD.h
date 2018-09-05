/**
 * <h1>CPPParserTD</h1>
 *
 * <p>The top-down CPP parser.</p>
 *
 * <p>Copyright (c) 2017 by Ronald Mak</p>
 * <p>For instructional purposes only.  No warranties.</p>
 */
#ifndef WCI_FRONTEND_CPP_CPPPARSERTD_H_
#define WCI_FRONTEND_CPP_CPPPARSERTD_H_

#include "../Parser.h"
#include "../Scanner.h"
#include "CPPErrorHandler.h"

namespace wci { namespace frontend { namespace CPP {

using namespace std;
using namespace wci::frontend;

class CPPParserTD : public Parser
{
public:
    /**
     * Constructor.
     * @param scanner the scanner to be used with this parser.
     */
    CPPParserTD(Scanner *scanner);

    /**
     * Constructor for subclasses.
     * @param parent the parent parser.
     */
    CPPParserTD(CPPParserTD *parent);

    /**
     * Parse a CPP source program and generate the symbol table
     * and the intermediate code.
     * Implementation of wci::frontend::Parser.
     * @throw a string message if an error occurred.
     */
    void parse() throw (string);

    /**
     * Return the number of syntax errors found by the parser.
     * Implementation of wci::frontend::Parser.
     * @return the error count.
     */
    int get_error_count() const;

protected:
    static CPPErrorHandler error_handler;
};

}}} // namespace wci::frontend::CPP


#endif /* WCI_FRONTEND_CPP_CPPPARSERTD_H_ */
