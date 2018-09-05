/**
 * <h1>CPPNumberToken</h1>
 *
 * <p>CPP number tokens (integer and real).</p>
 *
 * <p>Copyright (c) 2017 by Ronald Mak</p>
 * <p>For instructional purposes only.  No warranties.</p>
 */
#ifndef WCI_FRONTEND_CPP_TOKENS_CPPNUMBERTOKEN_H_
#define WCI_FRONTEND_CPP_TOKENS_CPPNUMBERTOKEN_H_

#include <string>

#include "../CPPToken.h"

namespace wci { namespace frontend { namespace CPP { namespace tokens {

using namespace std;
using namespace wci::frontend::CPP;

class CPPNumberToken : public CPPToken
{
public:
    /**
     * Constructor.
     * @param source the source from where to fetch the token's characters.
     * @throw a string message if an error occurred.
     */
    CPPNumberToken(Source *source) throw (string);

protected:
    /**
     * Extract a CPP number token from the source.
     * Override of wci::frontend::Token.
     * @throw a string message if an error occurred.
     */
    void extract() throw (string);

    /**
     * Extract a CPP number token from the source.
     * @param textBuffer the buffer to append the token's characters.
     * @throw a string message if an error occurred.
     */
    void extract_number(string text) throw (string);

private:
    static int MAX_EXPONENT;

    /**
     * Extract and return the digits of an unsigned integer.
     * @param textBuffer the buffer to append the token's characters.
     * @return the string of digits.
     * @throw a string message if an error occurred.
     */
    string unsigned_integer_digits() throw (string);

    /**
     * Compute and return the integer value of a string of digits.
     * Check for overflow.
     * @param digits the string of digits.
     * @return the integer value.
     */
    int compute_integer_value(string digits);

    /**
     * Compute and return the float value of a real number.
     * @param wholeDigits the string of digits before the decimal point.
     * @param fractionDigits the string of digits after the decimal point.
     * @param exponentDigits the string of exponent digits.
     * @param exponentSign the exponent sign.
     * @return the float value.
     */
    float compute_float_value(string whole_digits, string fraction_digits,
                              string exponentDigits, char exponent_sign);
};

}}}}  // namespace wci::frontend::CPP::tokens

#endif /* WCI_FRONTEND_CPP_TOKENS_CPPNUMBERTOKEN_H_ */
