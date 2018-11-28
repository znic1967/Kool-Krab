
#include "wci/intermediate/TypeSpec.h"
using namespace wci::intermediate;


// Generated from Main.g4 by ANTLR 4.7.1

#pragma once


#include "antlr4-runtime.h"




class  MainParser : public antlr4::Parser {
public:
  enum {
    T__0 = 1, T__1 = 2, T__2 = 3, T__3 = 4, T__4 = 5, T__5 = 6, KRABBIE = 7, 
    END = 8, BEGIN = 9, VAR = 10, REPEAT = 11, UNTIL = 12, IF = 13, THEN = 14, 
    ELSE = 15, DO = 16, WHILE = 17, RETURN = 18, DONE = 19, INTEGER_TYPE = 20, 
    CHARACTER_TYPE = 21, IDENTIFIER = 22, INTEGER = 23, CHARACTER = 24, 
    MUL_OP = 25, DIV_OP = 26, ADD_OP = 27, SUB_OP = 28, EQ_OP = 29, NE_OP = 30, 
    LT_OP = 31, LE_OP = 32, GT_OP = 33, GE_OP = 34, NEWLINE = 35, WS = 36
  };

  enum {
    RuleProgram = 0, RuleHeader = 1, RuleBlock = 2, RuleStmt = 3, RuleFunc = 4, 
    RuleVarID = 5, RuleStmt_list = 6, RuleFunc_list = 7, RuleAssignment_stmt = 8, 
    RuleDeclaration_stmt = 9, RuleRepeat_stmt = 10, RuleReturn_stmt = 11, 
    RuleIf_stmt = 12, RuleDo_while = 13, RuleFunction_decl = 14, RuleFunction_call = 15, 
    RuleFunction_body = 16, RuleVariable = 17, RuleExpr = 18, RuleMulDivOp = 19, 
    RuleAddSubOp = 20, RuleSignedNumber = 21, RuleSign = 22, RuleNumber = 23, 
    RuleTypeID = 24, RuleMul_div_op = 25, RuleAdd_sub_op = 26, RuleRel_op = 27
  };

  MainParser(antlr4::TokenStream *input);
  ~MainParser();

  virtual std::string getGrammarFileName() const override;
  virtual const antlr4::atn::ATN& getATN() const override { return _atn; };
  virtual const std::vector<std::string>& getTokenNames() const override { return _tokenNames; }; // deprecated: use vocabulary instead.
  virtual const std::vector<std::string>& getRuleNames() const override;
  virtual antlr4::dfa::Vocabulary& getVocabulary() const override;


  class ProgramContext;
  class HeaderContext;
  class BlockContext;
  class StmtContext;
  class FuncContext;
  class VarIDContext;
  class Stmt_listContext;
  class Func_listContext;
  class Assignment_stmtContext;
  class Declaration_stmtContext;
  class Repeat_stmtContext;
  class Return_stmtContext;
  class If_stmtContext;
  class Do_whileContext;
  class Function_declContext;
  class Function_callContext;
  class Function_bodyContext;
  class VariableContext;
  class ExprContext;
  class MulDivOpContext;
  class AddSubOpContext;
  class SignedNumberContext;
  class SignContext;
  class NumberContext;
  class TypeIDContext;
  class Mul_div_opContext;
  class Add_sub_opContext;
  class Rel_opContext; 

  class  ProgramContext : public antlr4::ParserRuleContext {
  public:
    ProgramContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    HeaderContext *header();
    BlockContext *block();
    antlr4::tree::TerminalNode *END();
    Func_listContext *func_list();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ProgramContext* program();

  class  HeaderContext : public antlr4::ParserRuleContext {
  public:
    HeaderContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<TypeIDContext *> typeID();
    TypeIDContext* typeID(size_t i);
    antlr4::tree::TerminalNode *KRABBIE();
    std::vector<antlr4::tree::TerminalNode *> IDENTIFIER();
    antlr4::tree::TerminalNode* IDENTIFIER(size_t i);

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  HeaderContext* header();

  class  BlockContext : public antlr4::ParserRuleContext {
  public:
    BlockContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Stmt_listContext *stmt_list();
    Func_listContext *func_list();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  BlockContext* block();

  class  StmtContext : public antlr4::ParserRuleContext {
  public:
    StmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Assignment_stmtContext *assignment_stmt();
    Declaration_stmtContext *declaration_stmt();
    Repeat_stmtContext *repeat_stmt();
    If_stmtContext *if_stmt();
    Do_whileContext *do_while();
    Return_stmtContext *return_stmt();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  StmtContext* stmt();

  class  FuncContext : public antlr4::ParserRuleContext {
  public:
    FuncContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Function_callContext *function_call();
    Function_declContext *function_decl();
    Function_bodyContext *function_body();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FuncContext* func();

  class  VarIDContext : public antlr4::ParserRuleContext {
  public:
    VarIDContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IDENTIFIER();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  VarIDContext* varID();

  class  Stmt_listContext : public antlr4::ParserRuleContext {
  public:
    Stmt_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<StmtContext *> stmt();
    StmtContext* stmt(size_t i);
    std::vector<FuncContext *> func();
    FuncContext* func(size_t i);

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Stmt_listContext* stmt_list();

  class  Func_listContext : public antlr4::ParserRuleContext {
  public:
    Func_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<FuncContext *> func();
    FuncContext* func(size_t i);

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Func_listContext* func_list();

  class  Assignment_stmtContext : public antlr4::ParserRuleContext {
  public:
    Assignment_stmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    VariableContext *variable();
    ExprContext *expr();
    Function_callContext *function_call();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Assignment_stmtContext* assignment_stmt();

  class  Declaration_stmtContext : public antlr4::ParserRuleContext {
  public:
    Declaration_stmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TypeIDContext *typeID();
    VarIDContext *varID();
    ExprContext *expr();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Declaration_stmtContext* declaration_stmt();

  class  Repeat_stmtContext : public antlr4::ParserRuleContext {
  public:
    Repeat_stmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *REPEAT();
    Stmt_listContext *stmt_list();
    antlr4::tree::TerminalNode *UNTIL();
    ExprContext *expr();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Repeat_stmtContext* repeat_stmt();

  class  Return_stmtContext : public antlr4::ParserRuleContext {
  public:
    Return_stmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *RETURN();
    ExprContext *expr();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Return_stmtContext* return_stmt();

  class  If_stmtContext : public antlr4::ParserRuleContext {
  public:
    If_stmtContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IF();
    ExprContext *expr();
    std::vector<Stmt_listContext *> stmt_list();
    Stmt_listContext* stmt_list(size_t i);
    antlr4::tree::TerminalNode *ELSE();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  If_stmtContext* if_stmt();

  class  Do_whileContext : public antlr4::ParserRuleContext {
  public:
    Do_whileContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DO();
    Stmt_listContext *stmt_list();
    antlr4::tree::TerminalNode *WHILE();
    ExprContext *expr();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Do_whileContext* do_while();

  class  Function_declContext : public antlr4::ParserRuleContext {
  public:
    Function_declContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<VariableContext *> variable();
    VariableContext* variable(size_t i);
    std::vector<antlr4::tree::TerminalNode *> IDENTIFIER();
    antlr4::tree::TerminalNode* IDENTIFIER(size_t i);
    StmtContext *stmt();
    antlr4::tree::TerminalNode *END();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Function_declContext* function_decl();

  class  Function_callContext : public antlr4::ParserRuleContext {
  public:
    Function_callContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> IDENTIFIER();
    antlr4::tree::TerminalNode* IDENTIFIER(size_t i);
    std::vector<VariableContext *> variable();
    VariableContext* variable(size_t i);

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Function_callContext* function_call();

  class  Function_bodyContext : public antlr4::ParserRuleContext {
  public:
    Function_bodyContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<TypeIDContext *> typeID();
    TypeIDContext* typeID(size_t i);
    std::vector<antlr4::tree::TerminalNode *> IDENTIFIER();
    antlr4::tree::TerminalNode* IDENTIFIER(size_t i);
    Stmt_listContext *stmt_list();
    antlr4::tree::TerminalNode *END();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Function_bodyContext* function_body();

  class  VariableContext : public antlr4::ParserRuleContext {
  public:
    VariableContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IDENTIFIER();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  VariableContext* variable();

  class  ExprContext : public antlr4::ParserRuleContext {
  public:
    TypeSpec * type = nullptr;
    ExprContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    ExprContext() : antlr4::ParserRuleContext() { }
    void copyFrom(ExprContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  VariableExprContext : public ExprContext {
  public:
    VariableExprContext(ExprContext *ctx);

    VariableContext *variable();
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  AddSubExprContext : public ExprContext {
  public:
    AddSubExprContext(ExprContext *ctx);

    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);
    Add_sub_opContext *add_sub_op();
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  RelOpExprContext : public ExprContext {
  public:
    RelOpExprContext(ExprContext *ctx);

    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);
    Rel_opContext *rel_op();
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  UnsignedNumberExprContext : public ExprContext {
  public:
    UnsignedNumberExprContext(ExprContext *ctx);

    NumberContext *number();
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  MulDivExprContext : public ExprContext {
  public:
    MulDivExprContext(ExprContext *ctx);

    std::vector<ExprContext *> expr();
    ExprContext* expr(size_t i);
    Mul_div_opContext *mul_div_op();
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  ParenExprContext : public ExprContext {
  public:
    ParenExprContext(ExprContext *ctx);

    ExprContext *expr();
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  ExprContext* expr();
  ExprContext* expr(int precedence);
  class  MulDivOpContext : public antlr4::ParserRuleContext {
  public:
    MulDivOpContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *MUL_OP();
    antlr4::tree::TerminalNode *DIV_OP();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  MulDivOpContext* mulDivOp();

  class  AddSubOpContext : public antlr4::ParserRuleContext {
  public:
    AddSubOpContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ADD_OP();
    antlr4::tree::TerminalNode *SUB_OP();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AddSubOpContext* addSubOp();

  class  SignedNumberContext : public antlr4::ParserRuleContext {
  public:
    TypeSpec * type = nullptr;
    SignedNumberContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    SignContext *sign();
    NumberContext *number();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SignedNumberContext* signedNumber();

  class  SignContext : public antlr4::ParserRuleContext {
  public:
    SignContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ADD_OP();
    antlr4::tree::TerminalNode *SUB_OP();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SignContext* sign();

  class  NumberContext : public antlr4::ParserRuleContext {
  public:
    TypeSpec * type = nullptr;
    NumberContext(antlr4::ParserRuleContext *parent, size_t invokingState);
   
    NumberContext() : antlr4::ParserRuleContext() { }
    void copyFrom(NumberContext *context);
    using antlr4::ParserRuleContext::copyFrom;

    virtual size_t getRuleIndex() const override;

   
  };

  class  IntegerConstContext : public NumberContext {
  public:
    IntegerConstContext(NumberContext *ctx);

    antlr4::tree::TerminalNode *INTEGER();
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  class  CharConstContext : public NumberContext {
  public:
    CharConstContext(NumberContext *ctx);

    antlr4::tree::TerminalNode *CHARACTER();
    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
  };

  NumberContext* number();

  class  TypeIDContext : public antlr4::ParserRuleContext {
  public:
    TypeIDContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IDENTIFIER();
    antlr4::tree::TerminalNode *INTEGER_TYPE();
    antlr4::tree::TerminalNode *CHARACTER_TYPE();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TypeIDContext* typeID();

  class  Mul_div_opContext : public antlr4::ParserRuleContext {
  public:
    Mul_div_opContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *MUL_OP();
    antlr4::tree::TerminalNode *DIV_OP();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Mul_div_opContext* mul_div_op();

  class  Add_sub_opContext : public antlr4::ParserRuleContext {
  public:
    Add_sub_opContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ADD_OP();
    antlr4::tree::TerminalNode *SUB_OP();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Add_sub_opContext* add_sub_op();

  class  Rel_opContext : public antlr4::ParserRuleContext {
  public:
    Rel_opContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *EQ_OP();
    antlr4::tree::TerminalNode *NE_OP();
    antlr4::tree::TerminalNode *LT_OP();
    antlr4::tree::TerminalNode *LE_OP();
    antlr4::tree::TerminalNode *GT_OP();
    antlr4::tree::TerminalNode *GE_OP();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Rel_opContext* rel_op();


  virtual bool sempred(antlr4::RuleContext *_localctx, size_t ruleIndex, size_t predicateIndex) override;
  bool exprSempred(ExprContext *_localctx, size_t predicateIndex);

private:
  static std::vector<antlr4::dfa::DFA> _decisionToDFA;
  static antlr4::atn::PredictionContextCache _sharedContextCache;
  static std::vector<std::string> _ruleNames;
  static std::vector<std::string> _tokenNames;

  static std::vector<std::string> _literalNames;
  static std::vector<std::string> _symbolicNames;
  static antlr4::dfa::Vocabulary _vocabulary;
  static antlr4::atn::ATN _atn;
  static std::vector<uint16_t> _serializedATN;


  struct Initializer {
    Initializer();
  };
  static Initializer _init;
};

