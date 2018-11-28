
#include "wci/intermediate/TypeSpec.h"
using namespace wci::intermediate;


// Generated from Main.g4 by ANTLR 4.7.1


#include "MainVisitor.h"

#include "MainParser.h"


using namespace antlrcpp;
using namespace antlr4;

MainParser::MainParser(TokenStream *input) : Parser(input) {
  _interpreter = new atn::ParserATNSimulator(this, _atn, _decisionToDFA, _sharedContextCache);
}

MainParser::~MainParser() {
  delete _interpreter;
}

std::string MainParser::getGrammarFileName() const {
  return "Main.g4";
}

const std::vector<std::string>& MainParser::getRuleNames() const {
  return _ruleNames;
}

dfa::Vocabulary& MainParser::getVocabulary() const {
  return _vocabulary;
}


//----------------- ProgramContext ------------------------------------------------------------------

MainParser::ProgramContext::ProgramContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

MainParser::HeaderContext* MainParser::ProgramContext::header() {
  return getRuleContext<MainParser::HeaderContext>(0);
}

MainParser::BlockContext* MainParser::ProgramContext::block() {
  return getRuleContext<MainParser::BlockContext>(0);
}

tree::TerminalNode* MainParser::ProgramContext::END() {
  return getToken(MainParser::END, 0);
}

MainParser::Func_listContext* MainParser::ProgramContext::func_list() {
  return getRuleContext<MainParser::Func_listContext>(0);
}


size_t MainParser::ProgramContext::getRuleIndex() const {
  return MainParser::RuleProgram;
}

antlrcpp::Any MainParser::ProgramContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MainVisitor*>(visitor))
    return parserVisitor->visitProgram(this);
  else
    return visitor->visitChildren(this);
}

MainParser::ProgramContext* MainParser::program() {
  ProgramContext *_localctx = _tracker.createInstance<ProgramContext>(_ctx, getState());
  enterRule(_localctx, 0, MainParser::RuleProgram);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(56);
    header();
    setState(57);
    block();
    setState(58);
    match(MainParser::END);
    setState(60);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 0, _ctx)) {
    case 1: {
      setState(59);
      func_list();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- HeaderContext ------------------------------------------------------------------

MainParser::HeaderContext::HeaderContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<MainParser::TypeIDContext *> MainParser::HeaderContext::typeID() {
  return getRuleContexts<MainParser::TypeIDContext>();
}

MainParser::TypeIDContext* MainParser::HeaderContext::typeID(size_t i) {
  return getRuleContext<MainParser::TypeIDContext>(i);
}

tree::TerminalNode* MainParser::HeaderContext::KRABBIE() {
  return getToken(MainParser::KRABBIE, 0);
}

std::vector<tree::TerminalNode *> MainParser::HeaderContext::IDENTIFIER() {
  return getTokens(MainParser::IDENTIFIER);
}

tree::TerminalNode* MainParser::HeaderContext::IDENTIFIER(size_t i) {
  return getToken(MainParser::IDENTIFIER, i);
}


size_t MainParser::HeaderContext::getRuleIndex() const {
  return MainParser::RuleHeader;
}

antlrcpp::Any MainParser::HeaderContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MainVisitor*>(visitor))
    return parserVisitor->visitHeader(this);
  else
    return visitor->visitChildren(this);
}

MainParser::HeaderContext* MainParser::header() {
  HeaderContext *_localctx = _tracker.createInstance<HeaderContext>(_ctx, getState());
  enterRule(_localctx, 2, MainParser::RuleHeader);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(62);
    typeID();
    setState(63);
    match(MainParser::KRABBIE);
    setState(64);
    match(MainParser::T__0);
    setState(73);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << MainParser::INTEGER_TYPE)
      | (1ULL << MainParser::CHARACTER_TYPE)
      | (1ULL << MainParser::IDENTIFIER))) != 0)) {
      setState(65);
      typeID();
      setState(66);
      match(MainParser::IDENTIFIER);
      setState(69);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == MainParser::T__1) {
        setState(68);
        match(MainParser::T__1);
      }
      setState(75);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(76);
    match(MainParser::T__2);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- BlockContext ------------------------------------------------------------------

MainParser::BlockContext::BlockContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

MainParser::Stmt_listContext* MainParser::BlockContext::stmt_list() {
  return getRuleContext<MainParser::Stmt_listContext>(0);
}

MainParser::Func_listContext* MainParser::BlockContext::func_list() {
  return getRuleContext<MainParser::Func_listContext>(0);
}


size_t MainParser::BlockContext::getRuleIndex() const {
  return MainParser::RuleBlock;
}

antlrcpp::Any MainParser::BlockContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MainVisitor*>(visitor))
    return parserVisitor->visitBlock(this);
  else
    return visitor->visitChildren(this);
}

MainParser::BlockContext* MainParser::block() {
  BlockContext *_localctx = _tracker.createInstance<BlockContext>(_ctx, getState());
  enterRule(_localctx, 4, MainParser::RuleBlock);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(80);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 3, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(78);
      stmt_list();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(79);
      func_list();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StmtContext ------------------------------------------------------------------

MainParser::StmtContext::StmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

MainParser::Assignment_stmtContext* MainParser::StmtContext::assignment_stmt() {
  return getRuleContext<MainParser::Assignment_stmtContext>(0);
}

MainParser::Declaration_stmtContext* MainParser::StmtContext::declaration_stmt() {
  return getRuleContext<MainParser::Declaration_stmtContext>(0);
}

MainParser::Repeat_stmtContext* MainParser::StmtContext::repeat_stmt() {
  return getRuleContext<MainParser::Repeat_stmtContext>(0);
}

MainParser::If_stmtContext* MainParser::StmtContext::if_stmt() {
  return getRuleContext<MainParser::If_stmtContext>(0);
}

MainParser::Do_whileContext* MainParser::StmtContext::do_while() {
  return getRuleContext<MainParser::Do_whileContext>(0);
}

MainParser::Return_stmtContext* MainParser::StmtContext::return_stmt() {
  return getRuleContext<MainParser::Return_stmtContext>(0);
}


size_t MainParser::StmtContext::getRuleIndex() const {
  return MainParser::RuleStmt;
}

antlrcpp::Any MainParser::StmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MainVisitor*>(visitor))
    return parserVisitor->visitStmt(this);
  else
    return visitor->visitChildren(this);
}

MainParser::StmtContext* MainParser::stmt() {
  StmtContext *_localctx = _tracker.createInstance<StmtContext>(_ctx, getState());
  enterRule(_localctx, 6, MainParser::RuleStmt);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(92);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 4, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(82);
      assignment_stmt();
      setState(83);
      match(MainParser::T__3);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(85);
      declaration_stmt();
      setState(86);
      match(MainParser::T__3);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(88);
      repeat_stmt();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(89);
      if_stmt();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(90);
      do_while();
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(91);
      return_stmt();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FuncContext ------------------------------------------------------------------

MainParser::FuncContext::FuncContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

MainParser::Function_callContext* MainParser::FuncContext::function_call() {
  return getRuleContext<MainParser::Function_callContext>(0);
}

MainParser::Function_declContext* MainParser::FuncContext::function_decl() {
  return getRuleContext<MainParser::Function_declContext>(0);
}

MainParser::Function_bodyContext* MainParser::FuncContext::function_body() {
  return getRuleContext<MainParser::Function_bodyContext>(0);
}


size_t MainParser::FuncContext::getRuleIndex() const {
  return MainParser::RuleFunc;
}

antlrcpp::Any MainParser::FuncContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MainVisitor*>(visitor))
    return parserVisitor->visitFunc(this);
  else
    return visitor->visitChildren(this);
}

MainParser::FuncContext* MainParser::func() {
  FuncContext *_localctx = _tracker.createInstance<FuncContext>(_ctx, getState());
  enterRule(_localctx, 8, MainParser::RuleFunc);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(97);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 5, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(94);
      function_call();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(95);
      function_decl();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(96);
      function_body();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- VarIDContext ------------------------------------------------------------------

MainParser::VarIDContext::VarIDContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* MainParser::VarIDContext::IDENTIFIER() {
  return getToken(MainParser::IDENTIFIER, 0);
}


size_t MainParser::VarIDContext::getRuleIndex() const {
  return MainParser::RuleVarID;
}

antlrcpp::Any MainParser::VarIDContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MainVisitor*>(visitor))
    return parserVisitor->visitVarID(this);
  else
    return visitor->visitChildren(this);
}

MainParser::VarIDContext* MainParser::varID() {
  VarIDContext *_localctx = _tracker.createInstance<VarIDContext>(_ctx, getState());
  enterRule(_localctx, 10, MainParser::RuleVarID);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(99);
    match(MainParser::IDENTIFIER);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Stmt_listContext ------------------------------------------------------------------

MainParser::Stmt_listContext::Stmt_listContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<MainParser::StmtContext *> MainParser::Stmt_listContext::stmt() {
  return getRuleContexts<MainParser::StmtContext>();
}

MainParser::StmtContext* MainParser::Stmt_listContext::stmt(size_t i) {
  return getRuleContext<MainParser::StmtContext>(i);
}

std::vector<MainParser::FuncContext *> MainParser::Stmt_listContext::func() {
  return getRuleContexts<MainParser::FuncContext>();
}

MainParser::FuncContext* MainParser::Stmt_listContext::func(size_t i) {
  return getRuleContext<MainParser::FuncContext>(i);
}


size_t MainParser::Stmt_listContext::getRuleIndex() const {
  return MainParser::RuleStmt_list;
}

antlrcpp::Any MainParser::Stmt_listContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MainVisitor*>(visitor))
    return parserVisitor->visitStmt_list(this);
  else
    return visitor->visitChildren(this);
}

MainParser::Stmt_listContext* MainParser::stmt_list() {
  Stmt_listContext *_localctx = _tracker.createInstance<Stmt_listContext>(_ctx, getState());
  enterRule(_localctx, 12, MainParser::RuleStmt_list);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(103); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(103);
      _errHandler->sync(this);
      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 6, _ctx)) {
      case 1: {
        setState(101);
        stmt();
        break;
      }

      case 2: {
        setState(102);
        func();
        break;
      }

      }
      setState(105); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << MainParser::REPEAT)
      | (1ULL << MainParser::IF)
      | (1ULL << MainParser::DO)
      | (1ULL << MainParser::RETURN)
      | (1ULL << MainParser::INTEGER_TYPE)
      | (1ULL << MainParser::CHARACTER_TYPE)
      | (1ULL << MainParser::IDENTIFIER))) != 0));
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Func_listContext ------------------------------------------------------------------

MainParser::Func_listContext::Func_listContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<MainParser::FuncContext *> MainParser::Func_listContext::func() {
  return getRuleContexts<MainParser::FuncContext>();
}

MainParser::FuncContext* MainParser::Func_listContext::func(size_t i) {
  return getRuleContext<MainParser::FuncContext>(i);
}


size_t MainParser::Func_listContext::getRuleIndex() const {
  return MainParser::RuleFunc_list;
}

antlrcpp::Any MainParser::Func_listContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MainVisitor*>(visitor))
    return parserVisitor->visitFunc_list(this);
  else
    return visitor->visitChildren(this);
}

MainParser::Func_listContext* MainParser::func_list() {
  Func_listContext *_localctx = _tracker.createInstance<Func_listContext>(_ctx, getState());
  enterRule(_localctx, 14, MainParser::RuleFunc_list);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(112);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << MainParser::INTEGER_TYPE)
      | (1ULL << MainParser::CHARACTER_TYPE)
      | (1ULL << MainParser::IDENTIFIER))) != 0)) {
      setState(107);
      func();
      setState(108);
      match(MainParser::T__3);
      setState(114);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Assignment_stmtContext ------------------------------------------------------------------

MainParser::Assignment_stmtContext::Assignment_stmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

MainParser::VariableContext* MainParser::Assignment_stmtContext::variable() {
  return getRuleContext<MainParser::VariableContext>(0);
}

MainParser::ExprContext* MainParser::Assignment_stmtContext::expr() {
  return getRuleContext<MainParser::ExprContext>(0);
}

MainParser::Function_callContext* MainParser::Assignment_stmtContext::function_call() {
  return getRuleContext<MainParser::Function_callContext>(0);
}


size_t MainParser::Assignment_stmtContext::getRuleIndex() const {
  return MainParser::RuleAssignment_stmt;
}

antlrcpp::Any MainParser::Assignment_stmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MainVisitor*>(visitor))
    return parserVisitor->visitAssignment_stmt(this);
  else
    return visitor->visitChildren(this);
}

MainParser::Assignment_stmtContext* MainParser::assignment_stmt() {
  Assignment_stmtContext *_localctx = _tracker.createInstance<Assignment_stmtContext>(_ctx, getState());
  enterRule(_localctx, 16, MainParser::RuleAssignment_stmt);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(115);
    variable();
    setState(116);
    match(MainParser::EQ_OP);
    setState(119);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 9, _ctx)) {
    case 1: {
      setState(117);
      expr(0);
      break;
    }

    case 2: {
      setState(118);
      function_call();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Declaration_stmtContext ------------------------------------------------------------------

MainParser::Declaration_stmtContext::Declaration_stmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

MainParser::TypeIDContext* MainParser::Declaration_stmtContext::typeID() {
  return getRuleContext<MainParser::TypeIDContext>(0);
}

MainParser::VarIDContext* MainParser::Declaration_stmtContext::varID() {
  return getRuleContext<MainParser::VarIDContext>(0);
}

MainParser::ExprContext* MainParser::Declaration_stmtContext::expr() {
  return getRuleContext<MainParser::ExprContext>(0);
}


size_t MainParser::Declaration_stmtContext::getRuleIndex() const {
  return MainParser::RuleDeclaration_stmt;
}

antlrcpp::Any MainParser::Declaration_stmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MainVisitor*>(visitor))
    return parserVisitor->visitDeclaration_stmt(this);
  else
    return visitor->visitChildren(this);
}

MainParser::Declaration_stmtContext* MainParser::declaration_stmt() {
  Declaration_stmtContext *_localctx = _tracker.createInstance<Declaration_stmtContext>(_ctx, getState());
  enterRule(_localctx, 18, MainParser::RuleDeclaration_stmt);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(121);
    typeID();
    setState(122);
    varID();
    setState(123);
    match(MainParser::EQ_OP);
    setState(124);
    expr(0);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Repeat_stmtContext ------------------------------------------------------------------

MainParser::Repeat_stmtContext::Repeat_stmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* MainParser::Repeat_stmtContext::REPEAT() {
  return getToken(MainParser::REPEAT, 0);
}

MainParser::Stmt_listContext* MainParser::Repeat_stmtContext::stmt_list() {
  return getRuleContext<MainParser::Stmt_listContext>(0);
}

tree::TerminalNode* MainParser::Repeat_stmtContext::UNTIL() {
  return getToken(MainParser::UNTIL, 0);
}

MainParser::ExprContext* MainParser::Repeat_stmtContext::expr() {
  return getRuleContext<MainParser::ExprContext>(0);
}


size_t MainParser::Repeat_stmtContext::getRuleIndex() const {
  return MainParser::RuleRepeat_stmt;
}

antlrcpp::Any MainParser::Repeat_stmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MainVisitor*>(visitor))
    return parserVisitor->visitRepeat_stmt(this);
  else
    return visitor->visitChildren(this);
}

MainParser::Repeat_stmtContext* MainParser::repeat_stmt() {
  Repeat_stmtContext *_localctx = _tracker.createInstance<Repeat_stmtContext>(_ctx, getState());
  enterRule(_localctx, 20, MainParser::RuleRepeat_stmt);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(126);
    match(MainParser::REPEAT);
    setState(127);
    stmt_list();
    setState(128);
    match(MainParser::UNTIL);
    setState(129);
    expr(0);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Return_stmtContext ------------------------------------------------------------------

MainParser::Return_stmtContext::Return_stmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* MainParser::Return_stmtContext::RETURN() {
  return getToken(MainParser::RETURN, 0);
}

MainParser::ExprContext* MainParser::Return_stmtContext::expr() {
  return getRuleContext<MainParser::ExprContext>(0);
}


size_t MainParser::Return_stmtContext::getRuleIndex() const {
  return MainParser::RuleReturn_stmt;
}

antlrcpp::Any MainParser::Return_stmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MainVisitor*>(visitor))
    return parserVisitor->visitReturn_stmt(this);
  else
    return visitor->visitChildren(this);
}

MainParser::Return_stmtContext* MainParser::return_stmt() {
  Return_stmtContext *_localctx = _tracker.createInstance<Return_stmtContext>(_ctx, getState());
  enterRule(_localctx, 22, MainParser::RuleReturn_stmt);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(131);
    match(MainParser::RETURN);
    setState(132);
    expr(0);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- If_stmtContext ------------------------------------------------------------------

MainParser::If_stmtContext::If_stmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* MainParser::If_stmtContext::IF() {
  return getToken(MainParser::IF, 0);
}

MainParser::ExprContext* MainParser::If_stmtContext::expr() {
  return getRuleContext<MainParser::ExprContext>(0);
}

std::vector<MainParser::Stmt_listContext *> MainParser::If_stmtContext::stmt_list() {
  return getRuleContexts<MainParser::Stmt_listContext>();
}

MainParser::Stmt_listContext* MainParser::If_stmtContext::stmt_list(size_t i) {
  return getRuleContext<MainParser::Stmt_listContext>(i);
}

tree::TerminalNode* MainParser::If_stmtContext::ELSE() {
  return getToken(MainParser::ELSE, 0);
}


size_t MainParser::If_stmtContext::getRuleIndex() const {
  return MainParser::RuleIf_stmt;
}

antlrcpp::Any MainParser::If_stmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MainVisitor*>(visitor))
    return parserVisitor->visitIf_stmt(this);
  else
    return visitor->visitChildren(this);
}

MainParser::If_stmtContext* MainParser::if_stmt() {
  If_stmtContext *_localctx = _tracker.createInstance<If_stmtContext>(_ctx, getState());
  enterRule(_localctx, 24, MainParser::RuleIf_stmt);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(134);
    match(MainParser::IF);
    setState(135);
    match(MainParser::T__0);
    setState(136);
    expr(0);
    setState(137);
    match(MainParser::T__2);
    setState(138);
    match(MainParser::T__4);

    setState(139);
    stmt_list();
    setState(140);
    match(MainParser::T__5);
    setState(146);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == MainParser::ELSE) {
      setState(141);
      match(MainParser::ELSE);
      setState(142);
      match(MainParser::T__4);
      setState(143);
      stmt_list();
      setState(144);
      match(MainParser::T__5);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Do_whileContext ------------------------------------------------------------------

MainParser::Do_whileContext::Do_whileContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* MainParser::Do_whileContext::DO() {
  return getToken(MainParser::DO, 0);
}

MainParser::Stmt_listContext* MainParser::Do_whileContext::stmt_list() {
  return getRuleContext<MainParser::Stmt_listContext>(0);
}

tree::TerminalNode* MainParser::Do_whileContext::WHILE() {
  return getToken(MainParser::WHILE, 0);
}

MainParser::ExprContext* MainParser::Do_whileContext::expr() {
  return getRuleContext<MainParser::ExprContext>(0);
}


size_t MainParser::Do_whileContext::getRuleIndex() const {
  return MainParser::RuleDo_while;
}

antlrcpp::Any MainParser::Do_whileContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MainVisitor*>(visitor))
    return parserVisitor->visitDo_while(this);
  else
    return visitor->visitChildren(this);
}

MainParser::Do_whileContext* MainParser::do_while() {
  Do_whileContext *_localctx = _tracker.createInstance<Do_whileContext>(_ctx, getState());
  enterRule(_localctx, 26, MainParser::RuleDo_while);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(148);
    match(MainParser::DO);
    setState(149);
    match(MainParser::T__4);
    setState(150);
    stmt_list();
    setState(151);
    match(MainParser::T__5);
    setState(152);
    match(MainParser::WHILE);
    setState(153);
    expr(0);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Function_declContext ------------------------------------------------------------------

MainParser::Function_declContext::Function_declContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<MainParser::VariableContext *> MainParser::Function_declContext::variable() {
  return getRuleContexts<MainParser::VariableContext>();
}

MainParser::VariableContext* MainParser::Function_declContext::variable(size_t i) {
  return getRuleContext<MainParser::VariableContext>(i);
}

std::vector<tree::TerminalNode *> MainParser::Function_declContext::IDENTIFIER() {
  return getTokens(MainParser::IDENTIFIER);
}

tree::TerminalNode* MainParser::Function_declContext::IDENTIFIER(size_t i) {
  return getToken(MainParser::IDENTIFIER, i);
}

MainParser::StmtContext* MainParser::Function_declContext::stmt() {
  return getRuleContext<MainParser::StmtContext>(0);
}

tree::TerminalNode* MainParser::Function_declContext::END() {
  return getToken(MainParser::END, 0);
}


size_t MainParser::Function_declContext::getRuleIndex() const {
  return MainParser::RuleFunction_decl;
}

antlrcpp::Any MainParser::Function_declContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MainVisitor*>(visitor))
    return parserVisitor->visitFunction_decl(this);
  else
    return visitor->visitChildren(this);
}

MainParser::Function_declContext* MainParser::function_decl() {
  Function_declContext *_localctx = _tracker.createInstance<Function_declContext>(_ctx, getState());
  enterRule(_localctx, 28, MainParser::RuleFunction_decl);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(155);
    variable();
    setState(156);
    match(MainParser::IDENTIFIER);
    setState(157);
    match(MainParser::T__0);
    setState(168);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == MainParser::IDENTIFIER) {
      setState(158);
      variable();
      setState(159);
      match(MainParser::IDENTIFIER);
      setState(162); 
      _errHandler->sync(this);
      _la = _input->LA(1);
      do {
        setState(161);
        match(MainParser::T__1);
        setState(164); 
        _errHandler->sync(this);
        _la = _input->LA(1);
      } while (_la == MainParser::T__1);
      setState(170);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(171);
    match(MainParser::T__2);
    setState(172);
    stmt();
    setState(173);
    match(MainParser::END);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Function_callContext ------------------------------------------------------------------

MainParser::Function_callContext::Function_callContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> MainParser::Function_callContext::IDENTIFIER() {
  return getTokens(MainParser::IDENTIFIER);
}

tree::TerminalNode* MainParser::Function_callContext::IDENTIFIER(size_t i) {
  return getToken(MainParser::IDENTIFIER, i);
}

std::vector<MainParser::VariableContext *> MainParser::Function_callContext::variable() {
  return getRuleContexts<MainParser::VariableContext>();
}

MainParser::VariableContext* MainParser::Function_callContext::variable(size_t i) {
  return getRuleContext<MainParser::VariableContext>(i);
}


size_t MainParser::Function_callContext::getRuleIndex() const {
  return MainParser::RuleFunction_call;
}

antlrcpp::Any MainParser::Function_callContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MainVisitor*>(visitor))
    return parserVisitor->visitFunction_call(this);
  else
    return visitor->visitChildren(this);
}

MainParser::Function_callContext* MainParser::function_call() {
  Function_callContext *_localctx = _tracker.createInstance<Function_callContext>(_ctx, getState());
  enterRule(_localctx, 30, MainParser::RuleFunction_call);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(175);
    match(MainParser::IDENTIFIER);
    setState(176);
    match(MainParser::T__0);
    setState(186);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == MainParser::IDENTIFIER) {
      setState(179);
      _errHandler->sync(this);
      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 13, _ctx)) {
      case 1: {
        setState(177);
        variable();
        break;
      }

      case 2: {
        setState(178);
        match(MainParser::IDENTIFIER);
        break;
      }

      }
      setState(182);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == MainParser::T__1) {
        setState(181);
        match(MainParser::T__1);
      }
      setState(188);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(189);
    match(MainParser::T__2);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Function_bodyContext ------------------------------------------------------------------

MainParser::Function_bodyContext::Function_bodyContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<MainParser::TypeIDContext *> MainParser::Function_bodyContext::typeID() {
  return getRuleContexts<MainParser::TypeIDContext>();
}

MainParser::TypeIDContext* MainParser::Function_bodyContext::typeID(size_t i) {
  return getRuleContext<MainParser::TypeIDContext>(i);
}

std::vector<tree::TerminalNode *> MainParser::Function_bodyContext::IDENTIFIER() {
  return getTokens(MainParser::IDENTIFIER);
}

tree::TerminalNode* MainParser::Function_bodyContext::IDENTIFIER(size_t i) {
  return getToken(MainParser::IDENTIFIER, i);
}

MainParser::Stmt_listContext* MainParser::Function_bodyContext::stmt_list() {
  return getRuleContext<MainParser::Stmt_listContext>(0);
}

tree::TerminalNode* MainParser::Function_bodyContext::END() {
  return getToken(MainParser::END, 0);
}


size_t MainParser::Function_bodyContext::getRuleIndex() const {
  return MainParser::RuleFunction_body;
}

antlrcpp::Any MainParser::Function_bodyContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MainVisitor*>(visitor))
    return parserVisitor->visitFunction_body(this);
  else
    return visitor->visitChildren(this);
}

MainParser::Function_bodyContext* MainParser::function_body() {
  Function_bodyContext *_localctx = _tracker.createInstance<Function_bodyContext>(_ctx, getState());
  enterRule(_localctx, 32, MainParser::RuleFunction_body);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(191);
    typeID();
    setState(192);
    match(MainParser::IDENTIFIER);
    setState(193);
    match(MainParser::T__0);
    setState(202);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << MainParser::INTEGER_TYPE)
      | (1ULL << MainParser::CHARACTER_TYPE)
      | (1ULL << MainParser::IDENTIFIER))) != 0)) {
      setState(194);
      typeID();
      setState(195);
      match(MainParser::IDENTIFIER);
      setState(198);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == MainParser::T__1) {
        setState(197);
        match(MainParser::T__1);
      }
      setState(204);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(205);
    match(MainParser::T__2);
    setState(206);
    match(MainParser::T__4);
    setState(207);
    stmt_list();
    setState(208);
    match(MainParser::T__5);
    setState(209);
    match(MainParser::END);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- VariableContext ------------------------------------------------------------------

MainParser::VariableContext::VariableContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* MainParser::VariableContext::IDENTIFIER() {
  return getToken(MainParser::IDENTIFIER, 0);
}


size_t MainParser::VariableContext::getRuleIndex() const {
  return MainParser::RuleVariable;
}

antlrcpp::Any MainParser::VariableContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MainVisitor*>(visitor))
    return parserVisitor->visitVariable(this);
  else
    return visitor->visitChildren(this);
}

MainParser::VariableContext* MainParser::variable() {
  VariableContext *_localctx = _tracker.createInstance<VariableContext>(_ctx, getState());
  enterRule(_localctx, 34, MainParser::RuleVariable);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(211);
    match(MainParser::IDENTIFIER);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExprContext ------------------------------------------------------------------

MainParser::ExprContext::ExprContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t MainParser::ExprContext::getRuleIndex() const {
  return MainParser::RuleExpr;
}

void MainParser::ExprContext::copyFrom(ExprContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
  this->type = ctx->type;
}

//----------------- VariableExprContext ------------------------------------------------------------------

MainParser::VariableContext* MainParser::VariableExprContext::variable() {
  return getRuleContext<MainParser::VariableContext>(0);
}

MainParser::VariableExprContext::VariableExprContext(ExprContext *ctx) { copyFrom(ctx); }

antlrcpp::Any MainParser::VariableExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MainVisitor*>(visitor))
    return parserVisitor->visitVariableExpr(this);
  else
    return visitor->visitChildren(this);
}
//----------------- AddSubExprContext ------------------------------------------------------------------

std::vector<MainParser::ExprContext *> MainParser::AddSubExprContext::expr() {
  return getRuleContexts<MainParser::ExprContext>();
}

MainParser::ExprContext* MainParser::AddSubExprContext::expr(size_t i) {
  return getRuleContext<MainParser::ExprContext>(i);
}

MainParser::Add_sub_opContext* MainParser::AddSubExprContext::add_sub_op() {
  return getRuleContext<MainParser::Add_sub_opContext>(0);
}

MainParser::AddSubExprContext::AddSubExprContext(ExprContext *ctx) { copyFrom(ctx); }

antlrcpp::Any MainParser::AddSubExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MainVisitor*>(visitor))
    return parserVisitor->visitAddSubExpr(this);
  else
    return visitor->visitChildren(this);
}
//----------------- RelOpExprContext ------------------------------------------------------------------

std::vector<MainParser::ExprContext *> MainParser::RelOpExprContext::expr() {
  return getRuleContexts<MainParser::ExprContext>();
}

MainParser::ExprContext* MainParser::RelOpExprContext::expr(size_t i) {
  return getRuleContext<MainParser::ExprContext>(i);
}

MainParser::Rel_opContext* MainParser::RelOpExprContext::rel_op() {
  return getRuleContext<MainParser::Rel_opContext>(0);
}

MainParser::RelOpExprContext::RelOpExprContext(ExprContext *ctx) { copyFrom(ctx); }

antlrcpp::Any MainParser::RelOpExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MainVisitor*>(visitor))
    return parserVisitor->visitRelOpExpr(this);
  else
    return visitor->visitChildren(this);
}
//----------------- UnsignedNumberExprContext ------------------------------------------------------------------

MainParser::NumberContext* MainParser::UnsignedNumberExprContext::number() {
  return getRuleContext<MainParser::NumberContext>(0);
}

MainParser::UnsignedNumberExprContext::UnsignedNumberExprContext(ExprContext *ctx) { copyFrom(ctx); }

antlrcpp::Any MainParser::UnsignedNumberExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MainVisitor*>(visitor))
    return parserVisitor->visitUnsignedNumberExpr(this);
  else
    return visitor->visitChildren(this);
}
//----------------- MulDivExprContext ------------------------------------------------------------------

std::vector<MainParser::ExprContext *> MainParser::MulDivExprContext::expr() {
  return getRuleContexts<MainParser::ExprContext>();
}

MainParser::ExprContext* MainParser::MulDivExprContext::expr(size_t i) {
  return getRuleContext<MainParser::ExprContext>(i);
}

MainParser::Mul_div_opContext* MainParser::MulDivExprContext::mul_div_op() {
  return getRuleContext<MainParser::Mul_div_opContext>(0);
}

MainParser::MulDivExprContext::MulDivExprContext(ExprContext *ctx) { copyFrom(ctx); }

antlrcpp::Any MainParser::MulDivExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MainVisitor*>(visitor))
    return parserVisitor->visitMulDivExpr(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ParenExprContext ------------------------------------------------------------------

MainParser::ExprContext* MainParser::ParenExprContext::expr() {
  return getRuleContext<MainParser::ExprContext>(0);
}

MainParser::ParenExprContext::ParenExprContext(ExprContext *ctx) { copyFrom(ctx); }

antlrcpp::Any MainParser::ParenExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MainVisitor*>(visitor))
    return parserVisitor->visitParenExpr(this);
  else
    return visitor->visitChildren(this);
}

MainParser::ExprContext* MainParser::expr() {
   return expr(0);
}

MainParser::ExprContext* MainParser::expr(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  MainParser::ExprContext *_localctx = _tracker.createInstance<ExprContext>(_ctx, parentState);
  MainParser::ExprContext *previousContext = _localctx;
  size_t startState = 36;
  enterRecursionRule(_localctx, 36, MainParser::RuleExpr, precedence);

    

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(220);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case MainParser::INTEGER:
      case MainParser::CHARACTER: {
        _localctx = _tracker.createInstance<UnsignedNumberExprContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;

        setState(214);
        number();
        break;
      }

      case MainParser::IDENTIFIER: {
        _localctx = _tracker.createInstance<VariableExprContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(215);
        variable();
        break;
      }

      case MainParser::T__0: {
        _localctx = _tracker.createInstance<ParenExprContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(216);
        match(MainParser::T__0);
        setState(217);
        expr(0);
        setState(218);
        match(MainParser::T__2);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    _ctx->stop = _input->LT(-1);
    setState(236);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 20, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(234);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 19, _ctx)) {
        case 1: {
          auto newContext = _tracker.createInstance<MulDivExprContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(222);

          if (!(precpred(_ctx, 6))) throw FailedPredicateException(this, "precpred(_ctx, 6)");
          setState(223);
          mul_div_op();
          setState(224);
          expr(7);
          break;
        }

        case 2: {
          auto newContext = _tracker.createInstance<AddSubExprContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(226);

          if (!(precpred(_ctx, 5))) throw FailedPredicateException(this, "precpred(_ctx, 5)");
          setState(227);
          add_sub_op();
          setState(228);
          expr(6);
          break;
        }

        case 3: {
          auto newContext = _tracker.createInstance<RelOpExprContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(230);

          if (!(precpred(_ctx, 4))) throw FailedPredicateException(this, "precpred(_ctx, 4)");
          setState(231);
          rel_op();
          setState(232);
          expr(5);
          break;
        }

        } 
      }
      setState(238);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 20, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- MulDivOpContext ------------------------------------------------------------------

MainParser::MulDivOpContext::MulDivOpContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* MainParser::MulDivOpContext::MUL_OP() {
  return getToken(MainParser::MUL_OP, 0);
}

tree::TerminalNode* MainParser::MulDivOpContext::DIV_OP() {
  return getToken(MainParser::DIV_OP, 0);
}


size_t MainParser::MulDivOpContext::getRuleIndex() const {
  return MainParser::RuleMulDivOp;
}

antlrcpp::Any MainParser::MulDivOpContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MainVisitor*>(visitor))
    return parserVisitor->visitMulDivOp(this);
  else
    return visitor->visitChildren(this);
}

MainParser::MulDivOpContext* MainParser::mulDivOp() {
  MulDivOpContext *_localctx = _tracker.createInstance<MulDivOpContext>(_ctx, getState());
  enterRule(_localctx, 38, MainParser::RuleMulDivOp);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(239);
    _la = _input->LA(1);
    if (!(_la == MainParser::MUL_OP

    || _la == MainParser::DIV_OP)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AddSubOpContext ------------------------------------------------------------------

MainParser::AddSubOpContext::AddSubOpContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* MainParser::AddSubOpContext::ADD_OP() {
  return getToken(MainParser::ADD_OP, 0);
}

tree::TerminalNode* MainParser::AddSubOpContext::SUB_OP() {
  return getToken(MainParser::SUB_OP, 0);
}


size_t MainParser::AddSubOpContext::getRuleIndex() const {
  return MainParser::RuleAddSubOp;
}

antlrcpp::Any MainParser::AddSubOpContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MainVisitor*>(visitor))
    return parserVisitor->visitAddSubOp(this);
  else
    return visitor->visitChildren(this);
}

MainParser::AddSubOpContext* MainParser::addSubOp() {
  AddSubOpContext *_localctx = _tracker.createInstance<AddSubOpContext>(_ctx, getState());
  enterRule(_localctx, 40, MainParser::RuleAddSubOp);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(241);
    _la = _input->LA(1);
    if (!(_la == MainParser::ADD_OP

    || _la == MainParser::SUB_OP)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SignedNumberContext ------------------------------------------------------------------

MainParser::SignedNumberContext::SignedNumberContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

MainParser::SignContext* MainParser::SignedNumberContext::sign() {
  return getRuleContext<MainParser::SignContext>(0);
}

MainParser::NumberContext* MainParser::SignedNumberContext::number() {
  return getRuleContext<MainParser::NumberContext>(0);
}


size_t MainParser::SignedNumberContext::getRuleIndex() const {
  return MainParser::RuleSignedNumber;
}

antlrcpp::Any MainParser::SignedNumberContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MainVisitor*>(visitor))
    return parserVisitor->visitSignedNumber(this);
  else
    return visitor->visitChildren(this);
}

MainParser::SignedNumberContext* MainParser::signedNumber() {
  SignedNumberContext *_localctx = _tracker.createInstance<SignedNumberContext>(_ctx, getState());
  enterRule(_localctx, 42, MainParser::RuleSignedNumber);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(243);
    sign();
    setState(244);
    number();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SignContext ------------------------------------------------------------------

MainParser::SignContext::SignContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* MainParser::SignContext::ADD_OP() {
  return getToken(MainParser::ADD_OP, 0);
}

tree::TerminalNode* MainParser::SignContext::SUB_OP() {
  return getToken(MainParser::SUB_OP, 0);
}


size_t MainParser::SignContext::getRuleIndex() const {
  return MainParser::RuleSign;
}

antlrcpp::Any MainParser::SignContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MainVisitor*>(visitor))
    return parserVisitor->visitSign(this);
  else
    return visitor->visitChildren(this);
}

MainParser::SignContext* MainParser::sign() {
  SignContext *_localctx = _tracker.createInstance<SignContext>(_ctx, getState());
  enterRule(_localctx, 44, MainParser::RuleSign);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(246);
    _la = _input->LA(1);
    if (!(_la == MainParser::ADD_OP

    || _la == MainParser::SUB_OP)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- NumberContext ------------------------------------------------------------------

MainParser::NumberContext::NumberContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t MainParser::NumberContext::getRuleIndex() const {
  return MainParser::RuleNumber;
}

void MainParser::NumberContext::copyFrom(NumberContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
  this->type = ctx->type;
}

//----------------- IntegerConstContext ------------------------------------------------------------------

tree::TerminalNode* MainParser::IntegerConstContext::INTEGER() {
  return getToken(MainParser::INTEGER, 0);
}

MainParser::IntegerConstContext::IntegerConstContext(NumberContext *ctx) { copyFrom(ctx); }

antlrcpp::Any MainParser::IntegerConstContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MainVisitor*>(visitor))
    return parserVisitor->visitIntegerConst(this);
  else
    return visitor->visitChildren(this);
}
//----------------- CharConstContext ------------------------------------------------------------------

tree::TerminalNode* MainParser::CharConstContext::CHARACTER() {
  return getToken(MainParser::CHARACTER, 0);
}

MainParser::CharConstContext::CharConstContext(NumberContext *ctx) { copyFrom(ctx); }

antlrcpp::Any MainParser::CharConstContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MainVisitor*>(visitor))
    return parserVisitor->visitCharConst(this);
  else
    return visitor->visitChildren(this);
}
MainParser::NumberContext* MainParser::number() {
  NumberContext *_localctx = _tracker.createInstance<NumberContext>(_ctx, getState());
  enterRule(_localctx, 46, MainParser::RuleNumber);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(250);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case MainParser::INTEGER: {
        _localctx = dynamic_cast<NumberContext *>(_tracker.createInstance<MainParser::IntegerConstContext>(_localctx));
        enterOuterAlt(_localctx, 1);
        setState(248);
        match(MainParser::INTEGER);
        break;
      }

      case MainParser::CHARACTER: {
        _localctx = dynamic_cast<NumberContext *>(_tracker.createInstance<MainParser::CharConstContext>(_localctx));
        enterOuterAlt(_localctx, 2);
        setState(249);
        match(MainParser::CHARACTER);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TypeIDContext ------------------------------------------------------------------

MainParser::TypeIDContext::TypeIDContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* MainParser::TypeIDContext::IDENTIFIER() {
  return getToken(MainParser::IDENTIFIER, 0);
}

tree::TerminalNode* MainParser::TypeIDContext::INTEGER_TYPE() {
  return getToken(MainParser::INTEGER_TYPE, 0);
}

tree::TerminalNode* MainParser::TypeIDContext::CHARACTER_TYPE() {
  return getToken(MainParser::CHARACTER_TYPE, 0);
}


size_t MainParser::TypeIDContext::getRuleIndex() const {
  return MainParser::RuleTypeID;
}

antlrcpp::Any MainParser::TypeIDContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MainVisitor*>(visitor))
    return parserVisitor->visitTypeID(this);
  else
    return visitor->visitChildren(this);
}

MainParser::TypeIDContext* MainParser::typeID() {
  TypeIDContext *_localctx = _tracker.createInstance<TypeIDContext>(_ctx, getState());
  enterRule(_localctx, 48, MainParser::RuleTypeID);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(252);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << MainParser::INTEGER_TYPE)
      | (1ULL << MainParser::CHARACTER_TYPE)
      | (1ULL << MainParser::IDENTIFIER))) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Mul_div_opContext ------------------------------------------------------------------

MainParser::Mul_div_opContext::Mul_div_opContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* MainParser::Mul_div_opContext::MUL_OP() {
  return getToken(MainParser::MUL_OP, 0);
}

tree::TerminalNode* MainParser::Mul_div_opContext::DIV_OP() {
  return getToken(MainParser::DIV_OP, 0);
}


size_t MainParser::Mul_div_opContext::getRuleIndex() const {
  return MainParser::RuleMul_div_op;
}

antlrcpp::Any MainParser::Mul_div_opContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MainVisitor*>(visitor))
    return parserVisitor->visitMul_div_op(this);
  else
    return visitor->visitChildren(this);
}

MainParser::Mul_div_opContext* MainParser::mul_div_op() {
  Mul_div_opContext *_localctx = _tracker.createInstance<Mul_div_opContext>(_ctx, getState());
  enterRule(_localctx, 50, MainParser::RuleMul_div_op);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(254);
    _la = _input->LA(1);
    if (!(_la == MainParser::MUL_OP

    || _la == MainParser::DIV_OP)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Add_sub_opContext ------------------------------------------------------------------

MainParser::Add_sub_opContext::Add_sub_opContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* MainParser::Add_sub_opContext::ADD_OP() {
  return getToken(MainParser::ADD_OP, 0);
}

tree::TerminalNode* MainParser::Add_sub_opContext::SUB_OP() {
  return getToken(MainParser::SUB_OP, 0);
}


size_t MainParser::Add_sub_opContext::getRuleIndex() const {
  return MainParser::RuleAdd_sub_op;
}

antlrcpp::Any MainParser::Add_sub_opContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MainVisitor*>(visitor))
    return parserVisitor->visitAdd_sub_op(this);
  else
    return visitor->visitChildren(this);
}

MainParser::Add_sub_opContext* MainParser::add_sub_op() {
  Add_sub_opContext *_localctx = _tracker.createInstance<Add_sub_opContext>(_ctx, getState());
  enterRule(_localctx, 52, MainParser::RuleAdd_sub_op);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(256);
    _la = _input->LA(1);
    if (!(_la == MainParser::ADD_OP

    || _la == MainParser::SUB_OP)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Rel_opContext ------------------------------------------------------------------

MainParser::Rel_opContext::Rel_opContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* MainParser::Rel_opContext::EQ_OP() {
  return getToken(MainParser::EQ_OP, 0);
}

tree::TerminalNode* MainParser::Rel_opContext::NE_OP() {
  return getToken(MainParser::NE_OP, 0);
}

tree::TerminalNode* MainParser::Rel_opContext::LT_OP() {
  return getToken(MainParser::LT_OP, 0);
}

tree::TerminalNode* MainParser::Rel_opContext::LE_OP() {
  return getToken(MainParser::LE_OP, 0);
}

tree::TerminalNode* MainParser::Rel_opContext::GT_OP() {
  return getToken(MainParser::GT_OP, 0);
}

tree::TerminalNode* MainParser::Rel_opContext::GE_OP() {
  return getToken(MainParser::GE_OP, 0);
}


size_t MainParser::Rel_opContext::getRuleIndex() const {
  return MainParser::RuleRel_op;
}

antlrcpp::Any MainParser::Rel_opContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MainVisitor*>(visitor))
    return parserVisitor->visitRel_op(this);
  else
    return visitor->visitChildren(this);
}

MainParser::Rel_opContext* MainParser::rel_op() {
  Rel_opContext *_localctx = _tracker.createInstance<Rel_opContext>(_ctx, getState());
  enterRule(_localctx, 54, MainParser::RuleRel_op);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(258);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << MainParser::EQ_OP)
      | (1ULL << MainParser::NE_OP)
      | (1ULL << MainParser::LT_OP)
      | (1ULL << MainParser::LE_OP)
      | (1ULL << MainParser::GT_OP)
      | (1ULL << MainParser::GE_OP))) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

bool MainParser::sempred(RuleContext *context, size_t ruleIndex, size_t predicateIndex) {
  switch (ruleIndex) {
    case 18: return exprSempred(dynamic_cast<ExprContext *>(context), predicateIndex);

  default:
    break;
  }
  return true;
}

bool MainParser::exprSempred(ExprContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 0: return precpred(_ctx, 6);
    case 1: return precpred(_ctx, 5);
    case 2: return precpred(_ctx, 4);

  default:
    break;
  }
  return true;
}

// Static vars and initialization.
std::vector<dfa::DFA> MainParser::_decisionToDFA;
atn::PredictionContextCache MainParser::_sharedContextCache;

// We own the ATN which in turn owns the ATN states.
atn::ATN MainParser::_atn;
std::vector<uint16_t> MainParser::_serializedATN;

std::vector<std::string> MainParser::_ruleNames = {
  "program", "header", "block", "stmt", "func", "varID", "stmt_list", "func_list", 
  "assignment_stmt", "declaration_stmt", "repeat_stmt", "return_stmt", "if_stmt", 
  "do_while", "function_decl", "function_call", "function_body", "variable", 
  "expr", "mulDivOp", "addSubOp", "signedNumber", "sign", "number", "typeID", 
  "mul_div_op", "add_sub_op", "rel_op"
};

std::vector<std::string> MainParser::_literalNames = {
  "", "'('", "','", "')'", "';'", "'{'", "'}'", "'Krabie'", "'Pattie'", 
  "'BEGIN'", "'VAR'", "'REPEAT'", "'UNTIL'", "'IsMayo'", "'THEN'", "'NotMayo'", 
  "'Bringit'", "'Aroundtown'", "'Spitout'", "'Donezo'", "'int'", "'char'", 
  "", "", "", "'*'", "'/'", "'+'", "'-'", "'='", "'<>'", "'<'", "'<='", 
  "'>'", "'>='"
};

std::vector<std::string> MainParser::_symbolicNames = {
  "", "", "", "", "", "", "", "KRABBIE", "END", "BEGIN", "VAR", "REPEAT", 
  "UNTIL", "IF", "THEN", "ELSE", "DO", "WHILE", "RETURN", "DONE", "INTEGER_TYPE", 
  "CHARACTER_TYPE", "IDENTIFIER", "INTEGER", "CHARACTER", "MUL_OP", "DIV_OP", 
  "ADD_OP", "SUB_OP", "EQ_OP", "NE_OP", "LT_OP", "LE_OP", "GT_OP", "GE_OP", 
  "NEWLINE", "WS"
};

dfa::Vocabulary MainParser::_vocabulary(_literalNames, _symbolicNames);

std::vector<std::string> MainParser::_tokenNames;

MainParser::Initializer::Initializer() {
	for (size_t i = 0; i < _symbolicNames.size(); ++i) {
		std::string name = _vocabulary.getLiteralName(i);
		if (name.empty()) {
			name = _vocabulary.getSymbolicName(i);
		}

		if (name.empty()) {
			_tokenNames.push_back("<INVALID>");
		} else {
      _tokenNames.push_back(name);
    }
	}

  _serializedATN = {
    0x3, 0x608b, 0xa72a, 0x8133, 0xb9ed, 0x417c, 0x3be7, 0x7786, 0x5964, 
    0x3, 0x26, 0x107, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 0x4, 
    0x9, 0x4, 0x4, 0x5, 0x9, 0x5, 0x4, 0x6, 0x9, 0x6, 0x4, 0x7, 0x9, 0x7, 
    0x4, 0x8, 0x9, 0x8, 0x4, 0x9, 0x9, 0x9, 0x4, 0xa, 0x9, 0xa, 0x4, 0xb, 
    0x9, 0xb, 0x4, 0xc, 0x9, 0xc, 0x4, 0xd, 0x9, 0xd, 0x4, 0xe, 0x9, 0xe, 
    0x4, 0xf, 0x9, 0xf, 0x4, 0x10, 0x9, 0x10, 0x4, 0x11, 0x9, 0x11, 0x4, 
    0x12, 0x9, 0x12, 0x4, 0x13, 0x9, 0x13, 0x4, 0x14, 0x9, 0x14, 0x4, 0x15, 
    0x9, 0x15, 0x4, 0x16, 0x9, 0x16, 0x4, 0x17, 0x9, 0x17, 0x4, 0x18, 0x9, 
    0x18, 0x4, 0x19, 0x9, 0x19, 0x4, 0x1a, 0x9, 0x1a, 0x4, 0x1b, 0x9, 0x1b, 
    0x4, 0x1c, 0x9, 0x1c, 0x4, 0x1d, 0x9, 0x1d, 0x3, 0x2, 0x3, 0x2, 0x3, 
    0x2, 0x3, 0x2, 0x5, 0x2, 0x3f, 0xa, 0x2, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 
    0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x5, 0x3, 0x48, 0xa, 0x3, 0x7, 
    0x3, 0x4a, 0xa, 0x3, 0xc, 0x3, 0xe, 0x3, 0x4d, 0xb, 0x3, 0x3, 0x3, 0x3, 
    0x3, 0x3, 0x4, 0x3, 0x4, 0x5, 0x4, 0x53, 0xa, 0x4, 0x3, 0x5, 0x3, 0x5, 
    0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 
    0x3, 0x5, 0x5, 0x5, 0x5f, 0xa, 0x5, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x5, 
    0x6, 0x64, 0xa, 0x6, 0x3, 0x7, 0x3, 0x7, 0x3, 0x8, 0x3, 0x8, 0x6, 0x8, 
    0x6a, 0xa, 0x8, 0xd, 0x8, 0xe, 0x8, 0x6b, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 
    0x7, 0x9, 0x71, 0xa, 0x9, 0xc, 0x9, 0xe, 0x9, 0x74, 0xb, 0x9, 0x3, 0xa, 
    0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x5, 0xa, 0x7a, 0xa, 0xa, 0x3, 0xb, 0x3, 
    0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 
    0xc, 0x3, 0xc, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xe, 0x3, 0xe, 0x3, 
    0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 
    0xe, 0x3, 0xe, 0x3, 0xe, 0x5, 0xe, 0x95, 0xa, 0xe, 0x3, 0xf, 0x3, 0xf, 
    0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0x10, 0x3, 0x10, 
    0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x6, 0x10, 0xa5, 
    0xa, 0x10, 0xd, 0x10, 0xe, 0x10, 0xa6, 0x7, 0x10, 0xa9, 0xa, 0x10, 0xc, 
    0x10, 0xe, 0x10, 0xac, 0xb, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 
    0x10, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x5, 0x11, 0xb6, 0xa, 
    0x11, 0x3, 0x11, 0x5, 0x11, 0xb9, 0xa, 0x11, 0x7, 0x11, 0xbb, 0xa, 0x11, 
    0xc, 0x11, 0xe, 0x11, 0xbe, 0xb, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x12, 
    0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x5, 
    0x12, 0xc9, 0xa, 0x12, 0x7, 0x12, 0xcb, 0xa, 0x12, 0xc, 0x12, 0xe, 0x12, 
    0xce, 0xb, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 
    0x3, 0x12, 0x3, 0x13, 0x3, 0x13, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 
    0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x5, 0x14, 0xdf, 0xa, 0x14, 0x3, 
    0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 
    0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x7, 0x14, 0xed, 
    0xa, 0x14, 0xc, 0x14, 0xe, 0x14, 0xf0, 0xb, 0x14, 0x3, 0x15, 0x3, 0x15, 
    0x3, 0x16, 0x3, 0x16, 0x3, 0x17, 0x3, 0x17, 0x3, 0x17, 0x3, 0x18, 0x3, 
    0x18, 0x3, 0x19, 0x3, 0x19, 0x5, 0x19, 0xfd, 0xa, 0x19, 0x3, 0x1a, 0x3, 
    0x1a, 0x3, 0x1b, 0x3, 0x1b, 0x3, 0x1c, 0x3, 0x1c, 0x3, 0x1d, 0x3, 0x1d, 
    0x3, 0x1d, 0x2, 0x3, 0x26, 0x1e, 0x2, 0x4, 0x6, 0x8, 0xa, 0xc, 0xe, 
    0x10, 0x12, 0x14, 0x16, 0x18, 0x1a, 0x1c, 0x1e, 0x20, 0x22, 0x24, 0x26, 
    0x28, 0x2a, 0x2c, 0x2e, 0x30, 0x32, 0x34, 0x36, 0x38, 0x2, 0x6, 0x3, 
    0x2, 0x1b, 0x1c, 0x3, 0x2, 0x1d, 0x1e, 0x3, 0x2, 0x16, 0x18, 0x3, 0x2, 
    0x1f, 0x24, 0x2, 0x107, 0x2, 0x3a, 0x3, 0x2, 0x2, 0x2, 0x4, 0x40, 0x3, 
    0x2, 0x2, 0x2, 0x6, 0x52, 0x3, 0x2, 0x2, 0x2, 0x8, 0x5e, 0x3, 0x2, 0x2, 
    0x2, 0xa, 0x63, 0x3, 0x2, 0x2, 0x2, 0xc, 0x65, 0x3, 0x2, 0x2, 0x2, 0xe, 
    0x69, 0x3, 0x2, 0x2, 0x2, 0x10, 0x72, 0x3, 0x2, 0x2, 0x2, 0x12, 0x75, 
    0x3, 0x2, 0x2, 0x2, 0x14, 0x7b, 0x3, 0x2, 0x2, 0x2, 0x16, 0x80, 0x3, 
    0x2, 0x2, 0x2, 0x18, 0x85, 0x3, 0x2, 0x2, 0x2, 0x1a, 0x88, 0x3, 0x2, 
    0x2, 0x2, 0x1c, 0x96, 0x3, 0x2, 0x2, 0x2, 0x1e, 0x9d, 0x3, 0x2, 0x2, 
    0x2, 0x20, 0xb1, 0x3, 0x2, 0x2, 0x2, 0x22, 0xc1, 0x3, 0x2, 0x2, 0x2, 
    0x24, 0xd5, 0x3, 0x2, 0x2, 0x2, 0x26, 0xde, 0x3, 0x2, 0x2, 0x2, 0x28, 
    0xf1, 0x3, 0x2, 0x2, 0x2, 0x2a, 0xf3, 0x3, 0x2, 0x2, 0x2, 0x2c, 0xf5, 
    0x3, 0x2, 0x2, 0x2, 0x2e, 0xf8, 0x3, 0x2, 0x2, 0x2, 0x30, 0xfc, 0x3, 
    0x2, 0x2, 0x2, 0x32, 0xfe, 0x3, 0x2, 0x2, 0x2, 0x34, 0x100, 0x3, 0x2, 
    0x2, 0x2, 0x36, 0x102, 0x3, 0x2, 0x2, 0x2, 0x38, 0x104, 0x3, 0x2, 0x2, 
    0x2, 0x3a, 0x3b, 0x5, 0x4, 0x3, 0x2, 0x3b, 0x3c, 0x5, 0x6, 0x4, 0x2, 
    0x3c, 0x3e, 0x7, 0xa, 0x2, 0x2, 0x3d, 0x3f, 0x5, 0x10, 0x9, 0x2, 0x3e, 
    0x3d, 0x3, 0x2, 0x2, 0x2, 0x3e, 0x3f, 0x3, 0x2, 0x2, 0x2, 0x3f, 0x3, 
    0x3, 0x2, 0x2, 0x2, 0x40, 0x41, 0x5, 0x32, 0x1a, 0x2, 0x41, 0x42, 0x7, 
    0x9, 0x2, 0x2, 0x42, 0x4b, 0x7, 0x3, 0x2, 0x2, 0x43, 0x44, 0x5, 0x32, 
    0x1a, 0x2, 0x44, 0x45, 0x7, 0x18, 0x2, 0x2, 0x45, 0x47, 0x3, 0x2, 0x2, 
    0x2, 0x46, 0x48, 0x7, 0x4, 0x2, 0x2, 0x47, 0x46, 0x3, 0x2, 0x2, 0x2, 
    0x47, 0x48, 0x3, 0x2, 0x2, 0x2, 0x48, 0x4a, 0x3, 0x2, 0x2, 0x2, 0x49, 
    0x43, 0x3, 0x2, 0x2, 0x2, 0x4a, 0x4d, 0x3, 0x2, 0x2, 0x2, 0x4b, 0x49, 
    0x3, 0x2, 0x2, 0x2, 0x4b, 0x4c, 0x3, 0x2, 0x2, 0x2, 0x4c, 0x4e, 0x3, 
    0x2, 0x2, 0x2, 0x4d, 0x4b, 0x3, 0x2, 0x2, 0x2, 0x4e, 0x4f, 0x7, 0x5, 
    0x2, 0x2, 0x4f, 0x5, 0x3, 0x2, 0x2, 0x2, 0x50, 0x53, 0x5, 0xe, 0x8, 
    0x2, 0x51, 0x53, 0x5, 0x10, 0x9, 0x2, 0x52, 0x50, 0x3, 0x2, 0x2, 0x2, 
    0x52, 0x51, 0x3, 0x2, 0x2, 0x2, 0x53, 0x7, 0x3, 0x2, 0x2, 0x2, 0x54, 
    0x55, 0x5, 0x12, 0xa, 0x2, 0x55, 0x56, 0x7, 0x6, 0x2, 0x2, 0x56, 0x5f, 
    0x3, 0x2, 0x2, 0x2, 0x57, 0x58, 0x5, 0x14, 0xb, 0x2, 0x58, 0x59, 0x7, 
    0x6, 0x2, 0x2, 0x59, 0x5f, 0x3, 0x2, 0x2, 0x2, 0x5a, 0x5f, 0x5, 0x16, 
    0xc, 0x2, 0x5b, 0x5f, 0x5, 0x1a, 0xe, 0x2, 0x5c, 0x5f, 0x5, 0x1c, 0xf, 
    0x2, 0x5d, 0x5f, 0x5, 0x18, 0xd, 0x2, 0x5e, 0x54, 0x3, 0x2, 0x2, 0x2, 
    0x5e, 0x57, 0x3, 0x2, 0x2, 0x2, 0x5e, 0x5a, 0x3, 0x2, 0x2, 0x2, 0x5e, 
    0x5b, 0x3, 0x2, 0x2, 0x2, 0x5e, 0x5c, 0x3, 0x2, 0x2, 0x2, 0x5e, 0x5d, 
    0x3, 0x2, 0x2, 0x2, 0x5f, 0x9, 0x3, 0x2, 0x2, 0x2, 0x60, 0x64, 0x5, 
    0x20, 0x11, 0x2, 0x61, 0x64, 0x5, 0x1e, 0x10, 0x2, 0x62, 0x64, 0x5, 
    0x22, 0x12, 0x2, 0x63, 0x60, 0x3, 0x2, 0x2, 0x2, 0x63, 0x61, 0x3, 0x2, 
    0x2, 0x2, 0x63, 0x62, 0x3, 0x2, 0x2, 0x2, 0x64, 0xb, 0x3, 0x2, 0x2, 
    0x2, 0x65, 0x66, 0x7, 0x18, 0x2, 0x2, 0x66, 0xd, 0x3, 0x2, 0x2, 0x2, 
    0x67, 0x6a, 0x5, 0x8, 0x5, 0x2, 0x68, 0x6a, 0x5, 0xa, 0x6, 0x2, 0x69, 
    0x67, 0x3, 0x2, 0x2, 0x2, 0x69, 0x68, 0x3, 0x2, 0x2, 0x2, 0x6a, 0x6b, 
    0x3, 0x2, 0x2, 0x2, 0x6b, 0x69, 0x3, 0x2, 0x2, 0x2, 0x6b, 0x6c, 0x3, 
    0x2, 0x2, 0x2, 0x6c, 0xf, 0x3, 0x2, 0x2, 0x2, 0x6d, 0x6e, 0x5, 0xa, 
    0x6, 0x2, 0x6e, 0x6f, 0x7, 0x6, 0x2, 0x2, 0x6f, 0x71, 0x3, 0x2, 0x2, 
    0x2, 0x70, 0x6d, 0x3, 0x2, 0x2, 0x2, 0x71, 0x74, 0x3, 0x2, 0x2, 0x2, 
    0x72, 0x70, 0x3, 0x2, 0x2, 0x2, 0x72, 0x73, 0x3, 0x2, 0x2, 0x2, 0x73, 
    0x11, 0x3, 0x2, 0x2, 0x2, 0x74, 0x72, 0x3, 0x2, 0x2, 0x2, 0x75, 0x76, 
    0x5, 0x24, 0x13, 0x2, 0x76, 0x79, 0x7, 0x1f, 0x2, 0x2, 0x77, 0x7a, 0x5, 
    0x26, 0x14, 0x2, 0x78, 0x7a, 0x5, 0x20, 0x11, 0x2, 0x79, 0x77, 0x3, 
    0x2, 0x2, 0x2, 0x79, 0x78, 0x3, 0x2, 0x2, 0x2, 0x7a, 0x13, 0x3, 0x2, 
    0x2, 0x2, 0x7b, 0x7c, 0x5, 0x32, 0x1a, 0x2, 0x7c, 0x7d, 0x5, 0xc, 0x7, 
    0x2, 0x7d, 0x7e, 0x7, 0x1f, 0x2, 0x2, 0x7e, 0x7f, 0x5, 0x26, 0x14, 0x2, 
    0x7f, 0x15, 0x3, 0x2, 0x2, 0x2, 0x80, 0x81, 0x7, 0xd, 0x2, 0x2, 0x81, 
    0x82, 0x5, 0xe, 0x8, 0x2, 0x82, 0x83, 0x7, 0xe, 0x2, 0x2, 0x83, 0x84, 
    0x5, 0x26, 0x14, 0x2, 0x84, 0x17, 0x3, 0x2, 0x2, 0x2, 0x85, 0x86, 0x7, 
    0x14, 0x2, 0x2, 0x86, 0x87, 0x5, 0x26, 0x14, 0x2, 0x87, 0x19, 0x3, 0x2, 
    0x2, 0x2, 0x88, 0x89, 0x7, 0xf, 0x2, 0x2, 0x89, 0x8a, 0x7, 0x3, 0x2, 
    0x2, 0x8a, 0x8b, 0x5, 0x26, 0x14, 0x2, 0x8b, 0x8c, 0x7, 0x5, 0x2, 0x2, 
    0x8c, 0x8d, 0x7, 0x7, 0x2, 0x2, 0x8d, 0x8e, 0x5, 0xe, 0x8, 0x2, 0x8e, 
    0x94, 0x7, 0x8, 0x2, 0x2, 0x8f, 0x90, 0x7, 0x11, 0x2, 0x2, 0x90, 0x91, 
    0x7, 0x7, 0x2, 0x2, 0x91, 0x92, 0x5, 0xe, 0x8, 0x2, 0x92, 0x93, 0x7, 
    0x8, 0x2, 0x2, 0x93, 0x95, 0x3, 0x2, 0x2, 0x2, 0x94, 0x8f, 0x3, 0x2, 
    0x2, 0x2, 0x94, 0x95, 0x3, 0x2, 0x2, 0x2, 0x95, 0x1b, 0x3, 0x2, 0x2, 
    0x2, 0x96, 0x97, 0x7, 0x12, 0x2, 0x2, 0x97, 0x98, 0x7, 0x7, 0x2, 0x2, 
    0x98, 0x99, 0x5, 0xe, 0x8, 0x2, 0x99, 0x9a, 0x7, 0x8, 0x2, 0x2, 0x9a, 
    0x9b, 0x7, 0x13, 0x2, 0x2, 0x9b, 0x9c, 0x5, 0x26, 0x14, 0x2, 0x9c, 0x1d, 
    0x3, 0x2, 0x2, 0x2, 0x9d, 0x9e, 0x5, 0x24, 0x13, 0x2, 0x9e, 0x9f, 0x7, 
    0x18, 0x2, 0x2, 0x9f, 0xaa, 0x7, 0x3, 0x2, 0x2, 0xa0, 0xa1, 0x5, 0x24, 
    0x13, 0x2, 0xa1, 0xa2, 0x7, 0x18, 0x2, 0x2, 0xa2, 0xa4, 0x3, 0x2, 0x2, 
    0x2, 0xa3, 0xa5, 0x7, 0x4, 0x2, 0x2, 0xa4, 0xa3, 0x3, 0x2, 0x2, 0x2, 
    0xa5, 0xa6, 0x3, 0x2, 0x2, 0x2, 0xa6, 0xa4, 0x3, 0x2, 0x2, 0x2, 0xa6, 
    0xa7, 0x3, 0x2, 0x2, 0x2, 0xa7, 0xa9, 0x3, 0x2, 0x2, 0x2, 0xa8, 0xa0, 
    0x3, 0x2, 0x2, 0x2, 0xa9, 0xac, 0x3, 0x2, 0x2, 0x2, 0xaa, 0xa8, 0x3, 
    0x2, 0x2, 0x2, 0xaa, 0xab, 0x3, 0x2, 0x2, 0x2, 0xab, 0xad, 0x3, 0x2, 
    0x2, 0x2, 0xac, 0xaa, 0x3, 0x2, 0x2, 0x2, 0xad, 0xae, 0x7, 0x5, 0x2, 
    0x2, 0xae, 0xaf, 0x5, 0x8, 0x5, 0x2, 0xaf, 0xb0, 0x7, 0xa, 0x2, 0x2, 
    0xb0, 0x1f, 0x3, 0x2, 0x2, 0x2, 0xb1, 0xb2, 0x7, 0x18, 0x2, 0x2, 0xb2, 
    0xbc, 0x7, 0x3, 0x2, 0x2, 0xb3, 0xb6, 0x5, 0x24, 0x13, 0x2, 0xb4, 0xb6, 
    0x7, 0x18, 0x2, 0x2, 0xb5, 0xb3, 0x3, 0x2, 0x2, 0x2, 0xb5, 0xb4, 0x3, 
    0x2, 0x2, 0x2, 0xb6, 0xb8, 0x3, 0x2, 0x2, 0x2, 0xb7, 0xb9, 0x7, 0x4, 
    0x2, 0x2, 0xb8, 0xb7, 0x3, 0x2, 0x2, 0x2, 0xb8, 0xb9, 0x3, 0x2, 0x2, 
    0x2, 0xb9, 0xbb, 0x3, 0x2, 0x2, 0x2, 0xba, 0xb5, 0x3, 0x2, 0x2, 0x2, 
    0xbb, 0xbe, 0x3, 0x2, 0x2, 0x2, 0xbc, 0xba, 0x3, 0x2, 0x2, 0x2, 0xbc, 
    0xbd, 0x3, 0x2, 0x2, 0x2, 0xbd, 0xbf, 0x3, 0x2, 0x2, 0x2, 0xbe, 0xbc, 
    0x3, 0x2, 0x2, 0x2, 0xbf, 0xc0, 0x7, 0x5, 0x2, 0x2, 0xc0, 0x21, 0x3, 
    0x2, 0x2, 0x2, 0xc1, 0xc2, 0x5, 0x32, 0x1a, 0x2, 0xc2, 0xc3, 0x7, 0x18, 
    0x2, 0x2, 0xc3, 0xcc, 0x7, 0x3, 0x2, 0x2, 0xc4, 0xc5, 0x5, 0x32, 0x1a, 
    0x2, 0xc5, 0xc6, 0x7, 0x18, 0x2, 0x2, 0xc6, 0xc8, 0x3, 0x2, 0x2, 0x2, 
    0xc7, 0xc9, 0x7, 0x4, 0x2, 0x2, 0xc8, 0xc7, 0x3, 0x2, 0x2, 0x2, 0xc8, 
    0xc9, 0x3, 0x2, 0x2, 0x2, 0xc9, 0xcb, 0x3, 0x2, 0x2, 0x2, 0xca, 0xc4, 
    0x3, 0x2, 0x2, 0x2, 0xcb, 0xce, 0x3, 0x2, 0x2, 0x2, 0xcc, 0xca, 0x3, 
    0x2, 0x2, 0x2, 0xcc, 0xcd, 0x3, 0x2, 0x2, 0x2, 0xcd, 0xcf, 0x3, 0x2, 
    0x2, 0x2, 0xce, 0xcc, 0x3, 0x2, 0x2, 0x2, 0xcf, 0xd0, 0x7, 0x5, 0x2, 
    0x2, 0xd0, 0xd1, 0x7, 0x7, 0x2, 0x2, 0xd1, 0xd2, 0x5, 0xe, 0x8, 0x2, 
    0xd2, 0xd3, 0x7, 0x8, 0x2, 0x2, 0xd3, 0xd4, 0x7, 0xa, 0x2, 0x2, 0xd4, 
    0x23, 0x3, 0x2, 0x2, 0x2, 0xd5, 0xd6, 0x7, 0x18, 0x2, 0x2, 0xd6, 0x25, 
    0x3, 0x2, 0x2, 0x2, 0xd7, 0xd8, 0x8, 0x14, 0x1, 0x2, 0xd8, 0xdf, 0x5, 
    0x30, 0x19, 0x2, 0xd9, 0xdf, 0x5, 0x24, 0x13, 0x2, 0xda, 0xdb, 0x7, 
    0x3, 0x2, 0x2, 0xdb, 0xdc, 0x5, 0x26, 0x14, 0x2, 0xdc, 0xdd, 0x7, 0x5, 
    0x2, 0x2, 0xdd, 0xdf, 0x3, 0x2, 0x2, 0x2, 0xde, 0xd7, 0x3, 0x2, 0x2, 
    0x2, 0xde, 0xd9, 0x3, 0x2, 0x2, 0x2, 0xde, 0xda, 0x3, 0x2, 0x2, 0x2, 
    0xdf, 0xee, 0x3, 0x2, 0x2, 0x2, 0xe0, 0xe1, 0xc, 0x8, 0x2, 0x2, 0xe1, 
    0xe2, 0x5, 0x34, 0x1b, 0x2, 0xe2, 0xe3, 0x5, 0x26, 0x14, 0x9, 0xe3, 
    0xed, 0x3, 0x2, 0x2, 0x2, 0xe4, 0xe5, 0xc, 0x7, 0x2, 0x2, 0xe5, 0xe6, 
    0x5, 0x36, 0x1c, 0x2, 0xe6, 0xe7, 0x5, 0x26, 0x14, 0x8, 0xe7, 0xed, 
    0x3, 0x2, 0x2, 0x2, 0xe8, 0xe9, 0xc, 0x6, 0x2, 0x2, 0xe9, 0xea, 0x5, 
    0x38, 0x1d, 0x2, 0xea, 0xeb, 0x5, 0x26, 0x14, 0x7, 0xeb, 0xed, 0x3, 
    0x2, 0x2, 0x2, 0xec, 0xe0, 0x3, 0x2, 0x2, 0x2, 0xec, 0xe4, 0x3, 0x2, 
    0x2, 0x2, 0xec, 0xe8, 0x3, 0x2, 0x2, 0x2, 0xed, 0xf0, 0x3, 0x2, 0x2, 
    0x2, 0xee, 0xec, 0x3, 0x2, 0x2, 0x2, 0xee, 0xef, 0x3, 0x2, 0x2, 0x2, 
    0xef, 0x27, 0x3, 0x2, 0x2, 0x2, 0xf0, 0xee, 0x3, 0x2, 0x2, 0x2, 0xf1, 
    0xf2, 0x9, 0x2, 0x2, 0x2, 0xf2, 0x29, 0x3, 0x2, 0x2, 0x2, 0xf3, 0xf4, 
    0x9, 0x3, 0x2, 0x2, 0xf4, 0x2b, 0x3, 0x2, 0x2, 0x2, 0xf5, 0xf6, 0x5, 
    0x2e, 0x18, 0x2, 0xf6, 0xf7, 0x5, 0x30, 0x19, 0x2, 0xf7, 0x2d, 0x3, 
    0x2, 0x2, 0x2, 0xf8, 0xf9, 0x9, 0x3, 0x2, 0x2, 0xf9, 0x2f, 0x3, 0x2, 
    0x2, 0x2, 0xfa, 0xfd, 0x7, 0x19, 0x2, 0x2, 0xfb, 0xfd, 0x7, 0x1a, 0x2, 
    0x2, 0xfc, 0xfa, 0x3, 0x2, 0x2, 0x2, 0xfc, 0xfb, 0x3, 0x2, 0x2, 0x2, 
    0xfd, 0x31, 0x3, 0x2, 0x2, 0x2, 0xfe, 0xff, 0x9, 0x4, 0x2, 0x2, 0xff, 
    0x33, 0x3, 0x2, 0x2, 0x2, 0x100, 0x101, 0x9, 0x2, 0x2, 0x2, 0x101, 0x35, 
    0x3, 0x2, 0x2, 0x2, 0x102, 0x103, 0x9, 0x3, 0x2, 0x2, 0x103, 0x37, 0x3, 
    0x2, 0x2, 0x2, 0x104, 0x105, 0x9, 0x5, 0x2, 0x2, 0x105, 0x39, 0x3, 0x2, 
    0x2, 0x2, 0x18, 0x3e, 0x47, 0x4b, 0x52, 0x5e, 0x63, 0x69, 0x6b, 0x72, 
    0x79, 0x94, 0xa6, 0xaa, 0xb5, 0xb8, 0xbc, 0xc8, 0xcc, 0xde, 0xec, 0xee, 
    0xfc, 
  };

  atn::ATNDeserializer deserializer;
  _atn = deserializer.deserialize(_serializedATN);

  size_t count = _atn.getNumberOfDecisions();
  _decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    _decisionToDFA.emplace_back(_atn.getDecisionState(i), i);
  }
}

MainParser::Initializer MainParser::_init;
