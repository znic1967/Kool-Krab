
/**
 * <h1>CPPToken</h1>
 *
 * <p>Base class for CPP token classes.</p>
 *
 * <p>Copyright (c) 2017 by Ronald Mak</p>
 * <p>For instructional purposes only.  No warranties.</p>
 */
#include <string>
#include <vector>
#include <map>
#include "CPPToken.h"

namespace wci { namespace frontend { namespace CPP {

using namespace std;

map<string, CPPTokenType> CPPToken::RESERVED_WORDS;
map<string, CPPTokenType> CPPToken::SPECIAL_SYMBOLS;
map<CPPTokenType, string> CPPToken::SPECIAL_SYMBOL_NAMES;

bool CPPToken::INITIALIZED = false;

void CPPToken::initialize()
{
    if (INITIALIZED) return;

    vector<string> rw_strings =
    {
        "auto","double","int","struct","break","else","long","switch", //ELSE INCKYDED
		"case","enum","namespace","template","char","exterm","operator", //CASE INCLUDED
		"this","class","float","package","throw","const","for","public", //Const, for included
		"union","continue","goto","return","void","do","if","static","while" //goto, do, if, while, included
    };

    vector<CPPTokenType> rw_keys =
    {
    	//@Leo CPP additions
    	CPPTokenType::AUTO,
		CPPTokenType:: DOUBLE,
		CPPTokenType:: INTEGER,
		CPPTokenType:: STRUCT,
		CPPTokenType::BREAK,
		CPPTokenType::LONG,
		CPPTokenType::SWITCH,
		CPPTokenType::ENUM,
		CPPTokenType::NAMESPACE,
		CPPTokenType::TEMPLATE,
		CPPTokenType::CHAR,
		CPPTokenType::EXTERM,
		CPPTokenType::OPERATOR,
		CPPTokenType::THIS,
		CPPTokenType::CLASS,
		CPPTokenType::FLOAT,
		CPPTokenType::PACKAGE,
		CPPTokenType::THROW,
		CPPTokenType::PUBLIC,
		CPPTokenType::UNION,
		CPPTokenType::CONTINUE,
		CPPTokenType::RETURN,
		CPPTokenType::VOID,
		CPPTokenType::STATIC,
		//END CPP additions





        CPPTokenType::AND,
        CPPTokenType::ARRAY,
        CPPTokenType::BEGIN,
        CPPTokenType::CASE,
        CPPTokenType::CONST,
        CPPTokenType::DIV,
        CPPTokenType::DO,
        CPPTokenType::DOWNTO,

        CPPTokenType::ELSE,
        CPPTokenType::END,
        CPPTokenType::FILE,
        CPPTokenType::FOR,
        CPPTokenType::FUNCTION,
        CPPTokenType::GOTO,
        CPPTokenType::IF,
        CPPTokenType::IN,

        CPPTokenType::LABEL,
        CPPTokenType::MOD,
        CPPTokenType::NIL,
        CPPTokenType::NOT,
        CPPTokenType::OF,
        CPPTokenType::OR,
        CPPTokenType::PACKED,
        CPPTokenType::PROCEDURE,

        CPPTokenType::PROGRAM,
        CPPTokenType::RECORD,
        CPPTokenType::REPEAT,
        CPPTokenType::SET,
        CPPTokenType::THEN,
        CPPTokenType::TO,
        CPPTokenType::TYPE,

        CPPTokenType::UNTIL,
        CPPTokenType::VAR,
        CPPTokenType::WHILE,
        CPPTokenType::WITH
    };

    for (int i = 0; i < rw_strings.size(); i++)
    {
        RESERVED_WORDS[rw_strings[i]] = rw_keys[i];
    }

    vector<string> ss_strings =
    {
        "~","!","@","%","^","&","*","-","+","=","|","/",":",";","?",
		"<",">",".",",","\'","\"","++","--","<<",">>","<=",">=","+=",
		"-=","*=","/=","==","|=","%=","&=","^=","!=","<<=",">>=",
		"||","&&","//","/*","*/"
    };

    vector<CPPTokenType> ss_keys =
    {
        CPPTokenType::PLUS,
        CPPTokenType::MINUS,
        CPPTokenType::STAR,
        CPPTokenType::SLASH,
        CPPTokenType::COLON_EQUALS,
        CPPTokenType::DOT,
        CPPTokenType::COMMA,
        CPPTokenType::SEMICOLON,
        CPPTokenType::COLON,
        CPPTokenType::QUOTE,
        CPPTokenType::EQUALS,
        CPPTokenType::NOT_EQUALS,

        CPPTokenType::LESS_THAN,
        CPPTokenType::LESS_EQUALS,
        CPPTokenType::GREATER_EQUALS,
        CPPTokenType::GREATER_THAN,
        CPPTokenType::LEFT_PAREN,
        CPPTokenType::RIGHT_PAREN,
        CPPTokenType::LEFT_BRACKET,
        CPPTokenType::RIGHT_BRACKET,
        CPPTokenType::LEFT_BRACE,
        CPPTokenType::RIGHT_BRACE,
        CPPTokenType::UP_ARROW,
        CPPTokenType::DOT_DOT
    };

    for (int i = 0; i < ss_strings.size(); i++)
    {
        SPECIAL_SYMBOLS[ss_strings[i]] = ss_keys[i];
    }

    vector<string> ss_names =
    {
        "PLUS", "MINUS", "STAR", "SLASH", "COLON_EQUALS", "DOT", "COMMA",
        "SEMICOLON", "COLON", "QUOTE", "EQUALS", "NOT_EQUALS",

        "LESS_THAN", "LESS_EQUALS", "GREATER_EQUALS", "GREATER_THAN",
        "LEFT_PAREN", "RIGHT_PAREN", "LEFT_BRACKET", "RIGHT_BRACKET",
        "LEFT_BRACE", "RIGHT_BRACE", "UP_ARROW", "DOT_DOT"
    };

    for (int i = 0; i < ss_names.size(); i++)
    {
        SPECIAL_SYMBOL_NAMES[ss_keys[i]] = ss_names[i];
    }

    INITIALIZED = true;
}

CPPToken::CPPToken(Source *source) throw (string)
    : Token(source)
{
    initialize();
}

}}}  // namespace wci::frontend::CPP
