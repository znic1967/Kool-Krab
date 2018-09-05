/**
 * <h1>CPPToken</h1>
 *
 * <p>Base class for CPP token classes.</p>
 *
 * <p>Copyright (c) 2017 by Ronald Mak</p>
 * <p>For instructional purposes only.  No warranties.</p>
 */

#ifndef WCI_FRONTEND_CPP_CPPTOKEN_H_
#define WCI_FRONTEND_CPP_CPPTOKEN_H_

#include <string>
#include <map>
#include "../Token.h"
#include "../Source.h"

namespace wci { namespace frontend { namespace CPP {

using namespace std;
using namespace wci::frontend;

/**
 * CPP token types.
 */
enum class CPPTokenType
{
    // Reserved words.
    AND, ARRAY, BEGIN, CASE, CONST, DIV, DO, DOWNTO, ELSE, END,
    FILE, FOR, FUNCTION, GOTO, IF, IN, LABEL, MOD, NIL, NOT,
    OF, OR, PACKED, PROCEDURE, PROGRAM, RECORD, REPEAT, SET,
    THEN, TO, TYPE, UNTIL, VAR, WHILE, WITH,

    // Special symbols.
    PLUS, MINUS, STAR, SLASH, COLON_EQUALS,
    DOT, COMMA, SEMICOLON, COLON, QUOTE,
    EQUALS, NOT_EQUALS, LESS_THAN, LESS_EQUALS,
    GREATER_EQUALS, GREATER_THAN, LEFT_PAREN, RIGHT_PAREN,
    LEFT_BRACKET, RIGHT_BRACKET, LEFT_BRACE, RIGHT_BRACE,
    UP_ARROW, DOT_DOT,

    IDENTIFIER, INTEGER, REAL, STRING,
    ERROR, END_OF_FILE,
};

constexpr CPPTokenType PT_AND = CPPTokenType::AND;
constexpr CPPTokenType PT_ARRAY = CPPTokenType::ARRAY;
constexpr CPPTokenType PT_BEGIN = CPPTokenType::BEGIN;
constexpr CPPTokenType PT_CASE = CPPTokenType::CASE;
constexpr CPPTokenType PT_CONST = CPPTokenType::CONST;
constexpr CPPTokenType PT_DIV = CPPTokenType::DIV;
constexpr CPPTokenType PT_DO = CPPTokenType::DO;
constexpr CPPTokenType PT_DOWNTO = CPPTokenType::DOWNTO;

constexpr CPPTokenType PT_ELSE = CPPTokenType::ELSE;
constexpr CPPTokenType PT_END = CPPTokenType::END;
constexpr CPPTokenType PT_FILE = CPPTokenType::FILE;
constexpr CPPTokenType PT_FOR = CPPTokenType::FOR;
constexpr CPPTokenType PT_FUNCTION = CPPTokenType::FUNCTION;
constexpr CPPTokenType PT_GOTO = CPPTokenType::GOTO;
constexpr CPPTokenType PT_IF = CPPTokenType::IF;
constexpr CPPTokenType PT_IN = CPPTokenType::IN;

constexpr CPPTokenType PT_LABEL = CPPTokenType::LABEL;
constexpr CPPTokenType PT_MOD = CPPTokenType::MOD;
constexpr CPPTokenType PT_NIL = CPPTokenType::NIL;
constexpr CPPTokenType PT_NOT = CPPTokenType::NOT;
constexpr CPPTokenType PT_OF = CPPTokenType::OF;
constexpr CPPTokenType PT_OR = CPPTokenType::OR;
constexpr CPPTokenType PT_PACKED = CPPTokenType::PACKED;
constexpr CPPTokenType PT_PROCEDURE = CPPTokenType::PROCEDURE;

constexpr CPPTokenType PT_PROGRAM = CPPTokenType::PROGRAM;
constexpr CPPTokenType PT_RECORD = CPPTokenType::RECORD;
constexpr CPPTokenType PT_REPEAT = CPPTokenType::REPEAT;
constexpr CPPTokenType PT_SET = CPPTokenType::SET;
constexpr CPPTokenType PT_THEN = CPPTokenType::THEN;
constexpr CPPTokenType PT_TO = CPPTokenType::TO;
constexpr CPPTokenType PT_TYPE = CPPTokenType::TYPE;

constexpr CPPTokenType PT_UNTIL = CPPTokenType::UNTIL;
constexpr CPPTokenType PT_VAR = CPPTokenType::VAR;
constexpr CPPTokenType PT_WHILE = CPPTokenType::WHILE;
constexpr CPPTokenType PT_WITH = CPPTokenType::WITH;

constexpr CPPTokenType PT_PLUS = CPPTokenType::PLUS;
constexpr CPPTokenType PT_MINUS = CPPTokenType::MINUS;
constexpr CPPTokenType PT_STAR = CPPTokenType::STAR;
constexpr CPPTokenType PT_SLASH = CPPTokenType::SLASH;
constexpr CPPTokenType PT_COLON_EQUALS = CPPTokenType::COLON_EQUALS;
constexpr CPPTokenType PT_DOT = CPPTokenType::DOT;
constexpr CPPTokenType PT_COMMA = CPPTokenType::COMMA;
constexpr CPPTokenType PT_SEMICOLON = CPPTokenType::SEMICOLON;
constexpr CPPTokenType PT_COLON = CPPTokenType::COLON;
constexpr CPPTokenType PT_QUOTE = CPPTokenType::QUOTE;
constexpr CPPTokenType PT_EQUALS = CPPTokenType::EQUALS;
constexpr CPPTokenType PT_NOT_EQUALS = CPPTokenType::NOT_EQUALS;

constexpr CPPTokenType PT_LESS_THAN = CPPTokenType::LESS_THAN;
constexpr CPPTokenType PT_LESS_EQUALS = CPPTokenType::LESS_EQUALS;
constexpr CPPTokenType PT_GREATER_EQUALS = CPPTokenType::GREATER_EQUALS;
constexpr CPPTokenType PT_GREATER_THAN = CPPTokenType::GREATER_THAN;
constexpr CPPTokenType PT_LEFT_PAREN = CPPTokenType::LEFT_PAREN;
constexpr CPPTokenType PT_RIGHT_PAREN = CPPTokenType::RIGHT_PAREN;
constexpr CPPTokenType PT_LEFT_BRACKET = CPPTokenType::LEFT_BRACKET;
constexpr CPPTokenType PT_RIGHT_BRACKET = CPPTokenType::RIGHT_BRACKET;
constexpr CPPTokenType PT_LEFT_BRACE = CPPTokenType::LEFT_BRACE;
constexpr CPPTokenType PT_RIGHT_BRACE = CPPTokenType::RIGHT_BRACE;
constexpr CPPTokenType PT_UP_ARROW = CPPTokenType::UP_ARROW;
constexpr CPPTokenType PT_DOT_DOT = CPPTokenType::DOT_DOT;

constexpr CPPTokenType PT_IDENTIFIER = CPPTokenType::IDENTIFIER;
constexpr CPPTokenType PT_INTEGER = CPPTokenType::INTEGER;
constexpr CPPTokenType PT_REAL = CPPTokenType::REAL;
constexpr CPPTokenType PT_STRING = CPPTokenType::STRING;
constexpr CPPTokenType PT_ERROR = CPPTokenType::ERROR;
constexpr CPPTokenType PT_END_OF_FILE = CPPTokenType::END_OF_FILE;

class CPPToken : public Token
{
public:
    static map<string, CPPTokenType> RESERVED_WORDS;
    static map<string, CPPTokenType> SPECIAL_SYMBOLS;
    static map<CPPTokenType, string> SPECIAL_SYMBOL_NAMES;

protected:
    /**
     * Constructor.
     * @param source the source from where to fetch the token's characters.
     * @throw a string message if an error occurred.
     */
    CPPToken(Source *source) throw (string);

private:
    static bool INITIALIZED;

    /**
     * Initialize the static maps.
     */
    static void initialize();
};

}}}  // namespace wci::frontend::CPP

#endif /* WCI_FRONTEND_CPP_CPPTOKEN_H_ */
