
#include "wci/intermediate/TypeSpec.h"
using namespace wci::intermediate;


// Generated from Main.g4 by ANTLR 4.7.1

#pragma once


#include "antlr4-runtime.h"




class  MainLexer : public antlr4::Lexer {
public:
  enum {
    T__0 = 1, T__1 = 2, T__2 = 3, T__3 = 4, T__4 = 5, T__5 = 6, MUL_DIV_OP = 7, 
    ADD_SUB_OP = 8, REL_OP = 9, KRABBIE = 10, END = 11, BEGIN = 12, VAR = 13, 
    REPEAT = 14, UNTIL = 15, IF = 16, THEN = 17, ELSE = 18, DO = 19, WHILE = 20, 
    RETURN = 21, DONE = 22, INTEGER_TYPE = 23, CHARACTER_TYPE = 24, IDENTIFIER = 25, 
    INTEGER = 26, CHARACTER = 27, MUL_OP = 28, DIV_OP = 29, ADD_OP = 30, 
    SUB_OP = 31, EQ_OP = 32, NE_OP = 33, LT_OP = 34, LE_OP = 35, GT_OP = 36, 
    GE_OP = 37, NEWLINE = 38, WS = 39
  };

  MainLexer(antlr4::CharStream *input);
  ~MainLexer();

  virtual std::string getGrammarFileName() const override;
  virtual const std::vector<std::string>& getRuleNames() const override;

  virtual const std::vector<std::string>& getChannelNames() const override;
  virtual const std::vector<std::string>& getModeNames() const override;
  virtual const std::vector<std::string>& getTokenNames() const override; // deprecated, use vocabulary instead
  virtual antlr4::dfa::Vocabulary& getVocabulary() const override;

  virtual const std::vector<uint16_t> getSerializedATN() const override;
  virtual const antlr4::atn::ATN& getATN() const override;

private:
  static std::vector<antlr4::dfa::DFA> _decisionToDFA;
  static antlr4::atn::PredictionContextCache _sharedContextCache;
  static std::vector<std::string> _ruleNames;
  static std::vector<std::string> _tokenNames;
  static std::vector<std::string> _channelNames;
  static std::vector<std::string> _modeNames;

  static std::vector<std::string> _literalNames;
  static std::vector<std::string> _symbolicNames;
  static antlr4::dfa::Vocabulary _vocabulary;
  static antlr4::atn::ATN _atn;
  static std::vector<uint16_t> _serializedATN;


  // Individual action functions triggered by action() above.

  // Individual semantic predicate functions triggered by sempred() above.

  struct Initializer {
    Initializer();
  };
  static Initializer _init;
};

