
// Generated from Main.g4 by ANTLR 4.7.1

#pragma once


#include "antlr4-runtime.h"




class  MainLexer : public antlr4::Lexer {
public:
  enum {
    T__0 = 1, T__1 = 2, T__2 = 3, T__3 = 4, T__4 = 5, KRABBIE = 6, END = 7, 
    BEGIN = 8, VAR = 9, REPEAT = 10, UNTIL = 11, IF = 12, THEN = 13, ELSE = 14, 
    DO = 15, WHILE = 16, RETURN = 17, DONE = 18, INTEGER_TYPE = 19, CHARACTER_TYPE = 20, 
    IDENTIFIER = 21, INTEGER = 22, CHARACTER = 23, MUL_OP = 24, DIV_OP = 25, 
    ADD_OP = 26, SUB_OP = 27, EQ_OP = 28, NE_OP = 29, LT_OP = 30, LE_OP = 31, 
    GT_OP = 32, GE_OP = 33, NEWLINE = 34, WS = 35
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

