/**
 * <h1>CPPError</h1>
 *
 * <p>CPP translation errors.</p>
 *
 * <p>Copyright (c) 2017 by Ronald Mak</p>
 * <p>For instructional purposes only.  No warranties.</p>
 */
#include <string>
#include <vector>
#include <map>
#include "CPPError.h"

namespace wci { namespace frontend { namespace CPP {

using namespace std;

bool CPPError::INITIALIZED = false;

map<CPPErrorCode, string> CPPError::SYNTAX_ERROR_MESSAGES;

void CPPError::initialize()
{
    if (INITIALIZED) return;

    vector<CPPErrorCode> error_codes =
    {
        CPPErrorCode::ALREADY_FORWARDED,
        CPPErrorCode::CASE_CONSTANT_REUSED,
        CPPErrorCode::IDENTIFIER_REDEFINED,
        CPPErrorCode::IDENTIFIER_UNDEFINED,
        CPPErrorCode::INCOMPATIBLE_ASSIGNMENT,
        CPPErrorCode::INCOMPATIBLE_TYPES,
        CPPErrorCode::INVALID_ASSIGNMENT,
        CPPErrorCode::INVALID_CHARACTER,
        CPPErrorCode::INVALID_CONSTANT,
        CPPErrorCode::INVALID_EXPONENT,
        CPPErrorCode::INVALID_EXPRESSION,
        CPPErrorCode::INVALID_FIELD,
        CPPErrorCode::INVALID_FRACTION,
        CPPErrorCode::INVALID_IDENTIFIER_USAGE,
        CPPErrorCode::INVALID_INDEX_TYPE,
        CPPErrorCode::INVALID_NUMBER,
        CPPErrorCode::INVALID_STATEMENT,
        CPPErrorCode::INVALID_SUBRANGE_TYPE,
        CPPErrorCode::INVALID_TARGET,
        CPPErrorCode::INVALID_TYPE,
        CPPErrorCode::INVALID_VAR_PARM,
        CPPErrorCode::MIN_GT_MAX,
        CPPErrorCode::MISSING_BEGIN,
        CPPErrorCode::MISSING_COLON,
        CPPErrorCode::MISSING_COLON_EQUALS,
        CPPErrorCode::MISSING_COMMA,
        CPPErrorCode::MISSING_CONSTANT,
        CPPErrorCode::MISSING_DO,
        CPPErrorCode::MISSING_DOT_DOT,
        CPPErrorCode::MISSING_END,
        CPPErrorCode::MISSING_EQUALS,
        CPPErrorCode::MISSING_FOR_CONTROL,
        CPPErrorCode::MISSING_IDENTIFIER,
        CPPErrorCode::MISSING_LEFT_BRACKET,
        CPPErrorCode::MISSING_OF,
        CPPErrorCode::MISSING_PERIOD,
        CPPErrorCode::MISSING_PROGRAM,
        CPPErrorCode::MISSING_RIGHT_BRACKET,
        CPPErrorCode::MISSING_RIGHT_PAREN,
        CPPErrorCode::MISSING_SEMICOLON,
        CPPErrorCode::MISSING_THEN,
        CPPErrorCode::MISSING_TO_DOWNTO,
        CPPErrorCode::MISSING_UNTIL,
        CPPErrorCode::MISSING_VARIABLE,
        CPPErrorCode::NOT_CONSTANT_IDENTIFIER,
        CPPErrorCode::NOT_RECORD_VARIABLE,
        CPPErrorCode::NOT_TYPE_IDENTIFIER,
        CPPErrorCode::RANGE_INTEGER,
        CPPErrorCode::RANGE_REAL,
        CPPErrorCode::STACK_OVERFLOW,
        CPPErrorCode::TOO_MANY_LEVELS,
        CPPErrorCode::TOO_MANY_SUBSCRIPTS,
        CPPErrorCode::UNEXPECTED_EOF,
        CPPErrorCode::UNEXPECTED_TOKEN,
        CPPErrorCode::UNIMPLEMENTED,
        CPPErrorCode::UNRECOGNIZABLE,
        CPPErrorCode::WRONG_NUMBER_OF_PARMS,

        // Fatal errors.
        CPPErrorCode::IO_ERROR,
        CPPErrorCode::TOO_MANY_ERRORS
    };

    vector<string> error_messages =
    {
        "Already specified in FORWARD",
        "CASE constant reused",
        "Redefined identifier",
        "Undefined identifier",
        "Incompatible assignment",
        "Incompatible types",
        "Invalid assignment statement",
        "Invalid character",
        "Invalid constant",
        "Invalid exponent",
        "Invalid expression",
        "Invalid field",
        "Invalid fraction",
        "Invalid identifier usage",
        "Invalid index type",
        "Invalid number",
        "Invalid statement",
        "Invalid subrange type",
        "Invalid assignment target",
        "Invalid type",
        "Invalid VAR parameter",
        "Min limit greater than max limit",
        "Missing BEGIN",
        "Missing :",
        "Missing :=",
        "Missing ,",
        "Missing constant",
        "Missing DO",
        "Missing ..",
        "Missing END",
        "Missing =",
        "Invalid FOR control variable",
        "Missing identifier",
        "Missing [",
        "Missing OF",
        "Missing .",
        "Missing PROGRAM",
        "Missing ]",
        "Missing )",
        "Missing ;",
        "Missing THEN",
        "Missing TO or DOWNTO",
        "Missing UNTIL",
        "Missing variable",
        "Not a constant identifier",
        "Not a record variable",
        "Not a type identifier",
        "Integer literal out of range",
        "Real literal out of range",
        "Stack overflow",
        "Nesting level too deep",
        "Too many subscripts",
        "Unexpected end of file",
        "Unexpected token",
        "Unimplemented feature",
        "Unrecognizable input",
        "Wrong number of actual parameters",

        // Fatal errors.
        "Object I/O error",
        "Too many syntax errors"
    };

    for (int i = 0; i < error_codes.size(); i++)
    {
        SYNTAX_ERROR_MESSAGES[error_codes[i]] = error_messages[i];
    }

    INITIALIZED = true;
}

}}}  // namespace wci::frontend::CPP
