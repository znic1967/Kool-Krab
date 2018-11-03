
// Generated from main.g4 by ANTLR 4.7.1

#pragma once


#include "antlr4-runtime.h"




class  mainLexer : public antlr4::Lexer {
public:
  enum {
    T__0 = 1, T__1 = 2, T__2 = 3, T__3 = 4, T__4 = 5, T__5 = 6, KRABBIE = 7, 
    BEGIN = 8, END = 9, VAR = 10, REPEAT = 11, UNTIL = 12, IF = 13, THEN = 14, 
    ELSE = 15, DO = 16, WHILE = 17, IDENTIFIER = 18, INTEGER = 19, CHARACTER = 20, 
    MUL_OP = 21, DIV_OP = 22, ADD_OP = 23, SUB_OP = 24, EQ_OP = 25, NE_OP = 26, 
    LT_OP = 27, LE_OP = 28, GT_OP = 29, GE_OP = 30, NEWLINE = 31, WS = 32
  };

  mainLexer(antlr4::CharStream *input);
  ~mainLexer();

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

