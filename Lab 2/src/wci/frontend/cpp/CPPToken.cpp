
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
		//END CPP additions NOTE: NEED TO FIX THEM TO BE IN ORDER





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
		CPPTokenType::NOT,
        CPPTokenType::NIL,
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
		"||","&&","//","/*","*/","(",")","[", "]", "{", "}", "\n", "\t",
    };

    vector<CPPTokenType> ss_keys =
    {

    	//@Leo
    	CPPTokenType::TILDE,
		CPPTokenType::EXCLA_POINT,
		CPPTokenType::AT,
		CPPTokenType::MOD,
		CPPTokenType::CARET,
		CPPTokenType::AMPERSAND,
		CPPTokenType::STAR,
		CPPTokenType::MINUS,
		CPPTokenType::PLUS,
		CPPTokenType::EQUALS,
		CPPTokenType::OR,
		CPPTokenType::FORWARDSLASH,
		CPPTokenType::COLON,
		CPPTokenType::SEMICOLON,
		CPPTokenType::QUESTION_MARK,
		CPPTokenType::LESS_THAN,
		CPPTokenType::GREATER_THAN,
		CPPTokenType::DOT,
		CPPTokenType::COMMA,
		CPPTokenType::BACKSLASH,
		CPPTokenType::BACKSLASH_APOSTROPHE,
		CPPTokenType::PLUSPLUS,
		CPPTokenType::MINUSMINUS,
		CPPTokenType::SHIFT_LEFT,
		CPPTokenType::SHIFT_RIGHT,
		CPPTokenType::LESS_EQ,
		CPPTokenType::GREATER_EQ,
		CPPTokenType::PLUS_EQ,
		CPPTokenType::MINUS_EQ,
		CPPTokenType::TIMES_EQ,
		CPPTokenType::DIV_EQ,
		CPPTokenType::EQ_EQ,
		CPPTokenType::OR_EQ,
		CPPTokenType::MOD_EQ,
		CPPTokenType::AND_EQ,
		CPPTokenType::CARAT_EQ,
		CPPTokenType::NOT_EQ,
		CPPTokenType::SHIFT_LEFT_EQ,
		CPPTokenType::SHIFT_RIGHT_EQ,
		CPPTokenType::OR_OR,
		CPPTokenType::AND_AND,
		CPPTokenType::SLASH_SLASH,
		CPPTokenType::COMMENT_OPEN_AST,
		CPPTokenType::COMMENT_CLOSED_AST,
		CPPTokenType::LEFT_PAREN,
		CPPTokenType::RIGHT_PAREN,
		CPPTokenType::LEFT_BRACKET,
		CPPTokenType::RIGHT_BRACKET,
		CPPTokenType::LEFT_BRACE,
		CPPTokenType::RIGHT_BRACE,
		CPPTokenType::NEW_LINE,
		CPPTokenType::TAB_SPACE
		//ALL NECESSARY ASSIGNMENT SPECIAL SYMBOLS




    		/*

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
        CPPTokenType::DOT_DOT */
    };

    for (int i = 0; i < ss_strings.size(); i++)
    {
        SPECIAL_SYMBOLS[ss_strings[i]] = ss_keys[i];
    }

    vector<string> ss_names =
    {
    		//@LEO finished adding all of the SS keys and names
        "TILDE", "EXCLA_POINT", "AT", "MOD", "CARET", "AMPERSAND", "STAR", "MINUS", "PLUS", "EQUALS", "OR", "FORWARDSLASH",
		 "COLON", "SEMICOLON", "QUESTION_MARK", "LESS_THAN", "GREATER_THAN", "DOT", "COMMA", "BACKSLASH", "BACKSLASH_APOSTROPHE", "PLUSPLUS", "MINUSMINUS",
		 "SHIFT_LEFT", "SHIFT_RIGHT", "LESS_EQ", "GREATER_EQ", "PLUS_EQ", "MINUS_EQ", "TIMES_EQ",
		 "DIV_EQ", "EQ_EQ", "OR_EQ", "MOD_EQ", "AND_EQ", "CARAT_EQ", "NOT_EQ", "SHIFT_LEFT_EQ", "SHIFT_RIGHT_EQ",
		 "OR_OR","AND_AND","SLASH_SLASH","COMMENT_OPEN_AST","COMMENT_CLOSED_AST","LEFT_PAREN", "RIGHT_PAREN","LEFT_BRACKET","RIGHT_BRACKET","LEFT_BRACE","RIGHT_BRACE", "NEW_LINE",
		 "TAB_SPACE"

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
