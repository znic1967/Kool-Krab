
// Generated from main.g4 by ANTLR 4.7.1


#include "mainListener.h"

#include "mainParser.h"


using namespace antlrcpp;
using namespace antlr4;

mainParser::mainParser(TokenStream *input) : Parser(input) {
  _interpreter = new atn::ParserATNSimulator(this, _atn, _decisionToDFA, _sharedContextCache);
}

mainParser::~mainParser() {
  delete _interpreter;
}

std::string mainParser::getGrammarFileName() const {
  return "main.g4";
}

const std::vector<std::string>& mainParser::getRuleNames() const {
  return _ruleNames;
}

dfa::Vocabulary& mainParser::getVocabulary() const {
  return _vocabulary;
}


//----------------- ProgramContext ------------------------------------------------------------------

mainParser::ProgramContext::ProgramContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

mainParser::HeaderContext* mainParser::ProgramContext::header() {
  return getRuleContext<mainParser::HeaderContext>(0);
}

mainParser::BlockContext* mainParser::ProgramContext::block() {
  return getRuleContext<mainParser::BlockContext>(0);
}


size_t mainParser::ProgramContext::getRuleIndex() const {
  return mainParser::RuleProgram;
}

void mainParser::ProgramContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<mainListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterProgram(this);
}

void mainParser::ProgramContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<mainListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitProgram(this);
}

mainParser::ProgramContext* mainParser::program() {
  ProgramContext *_localctx = _tracker.createInstance<ProgramContext>(_ctx, getState());
  enterRule(_localctx, 0, mainParser::RuleProgram);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(42);
    header();
    setState(43);
    block();
    setState(44);
    match(mainParser::T__0);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- HeaderContext ------------------------------------------------------------------

mainParser::HeaderContext::HeaderContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> mainParser::HeaderContext::IDENTIFIER() {
  return getTokens(mainParser::IDENTIFIER);
}

tree::TerminalNode* mainParser::HeaderContext::IDENTIFIER(size_t i) {
  return getToken(mainParser::IDENTIFIER, i);
}

tree::TerminalNode* mainParser::HeaderContext::KRABBIE() {
  return getToken(mainParser::KRABBIE, 0);
}

tree::TerminalNode* mainParser::HeaderContext::NEWLINE() {
  return getToken(mainParser::NEWLINE, 0);
}

std::vector<mainParser::VariableContext *> mainParser::HeaderContext::variable() {
  return getRuleContexts<mainParser::VariableContext>();
}

mainParser::VariableContext* mainParser::HeaderContext::variable(size_t i) {
  return getRuleContext<mainParser::VariableContext>(i);
}


size_t mainParser::HeaderContext::getRuleIndex() const {
  return mainParser::RuleHeader;
}

void mainParser::HeaderContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<mainListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterHeader(this);
}

void mainParser::HeaderContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<mainListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitHeader(this);
}

mainParser::HeaderContext* mainParser::header() {
  HeaderContext *_localctx = _tracker.createInstance<HeaderContext>(_ctx, getState());
  enterRule(_localctx, 2, mainParser::RuleHeader);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(46);
    match(mainParser::IDENTIFIER);
    setState(47);
    match(mainParser::KRABBIE);
    setState(48);
    match(mainParser::T__1);
    setState(59);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == mainParser::IDENTIFIER) {
      setState(49);
      variable();
      setState(50);
      match(mainParser::IDENTIFIER);
      setState(53); 
      _errHandler->sync(this);
      _la = _input->LA(1);
      do {
        setState(52);
        match(mainParser::T__2);
        setState(55); 
        _errHandler->sync(this);
        _la = _input->LA(1);
      } while (_la == mainParser::T__2);
      setState(61);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(62);
    match(mainParser::T__3);
    setState(63);
    match(mainParser::NEWLINE);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- BlockContext ------------------------------------------------------------------

mainParser::BlockContext::BlockContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

mainParser::Stmt_listContext* mainParser::BlockContext::stmt_list() {
  return getRuleContext<mainParser::Stmt_listContext>(0);
}

mainParser::Func_listContext* mainParser::BlockContext::func_list() {
  return getRuleContext<mainParser::Func_listContext>(0);
}


size_t mainParser::BlockContext::getRuleIndex() const {
  return mainParser::RuleBlock;
}

void mainParser::BlockContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<mainListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBlock(this);
}

void mainParser::BlockContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<mainListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBlock(this);
}

mainParser::BlockContext* mainParser::block() {
  BlockContext *_localctx = _tracker.createInstance<BlockContext>(_ctx, getState());
  enterRule(_localctx, 4, mainParser::RuleBlock);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(68);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 2, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(65);
      stmt_list();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(66);
      func_list();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);

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

mainParser::StmtContext::StmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

mainParser::Assignment_stmtContext* mainParser::StmtContext::assignment_stmt() {
  return getRuleContext<mainParser::Assignment_stmtContext>(0);
}

mainParser::Repeat_stmtContext* mainParser::StmtContext::repeat_stmt() {
  return getRuleContext<mainParser::Repeat_stmtContext>(0);
}

mainParser::If_stmtContext* mainParser::StmtContext::if_stmt() {
  return getRuleContext<mainParser::If_stmtContext>(0);
}


size_t mainParser::StmtContext::getRuleIndex() const {
  return mainParser::RuleStmt;
}

void mainParser::StmtContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<mainListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterStmt(this);
}

void mainParser::StmtContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<mainListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitStmt(this);
}

mainParser::StmtContext* mainParser::stmt() {
  StmtContext *_localctx = _tracker.createInstance<StmtContext>(_ctx, getState());
  enterRule(_localctx, 6, mainParser::RuleStmt);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(74);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case mainParser::IDENTIFIER: {
        enterOuterAlt(_localctx, 1);
        setState(70);
        assignment_stmt();
        break;
      }

      case mainParser::REPEAT: {
        enterOuterAlt(_localctx, 2);
        setState(71);
        repeat_stmt();
        break;
      }

      case mainParser::IF: {
        enterOuterAlt(_localctx, 3);
        setState(72);
        if_stmt();
        break;
      }

      case mainParser::T__5:
      case mainParser::NEWLINE: {
        enterOuterAlt(_localctx, 4);

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

//----------------- FuncContext ------------------------------------------------------------------

mainParser::FuncContext::FuncContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

mainParser::Function_callContext* mainParser::FuncContext::function_call() {
  return getRuleContext<mainParser::Function_callContext>(0);
}

mainParser::Function_declContext* mainParser::FuncContext::function_decl() {
  return getRuleContext<mainParser::Function_declContext>(0);
}


size_t mainParser::FuncContext::getRuleIndex() const {
  return mainParser::RuleFunc;
}

void mainParser::FuncContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<mainListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFunc(this);
}

void mainParser::FuncContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<mainListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFunc(this);
}

mainParser::FuncContext* mainParser::func() {
  FuncContext *_localctx = _tracker.createInstance<FuncContext>(_ctx, getState());
  enterRule(_localctx, 8, mainParser::RuleFunc);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(79);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 4, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(76);
      function_call();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(77);
      function_decl();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);

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

//----------------- Stmt_listContext ------------------------------------------------------------------

mainParser::Stmt_listContext::Stmt_listContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<mainParser::StmtContext *> mainParser::Stmt_listContext::stmt() {
  return getRuleContexts<mainParser::StmtContext>();
}

mainParser::StmtContext* mainParser::Stmt_listContext::stmt(size_t i) {
  return getRuleContext<mainParser::StmtContext>(i);
}

std::vector<tree::TerminalNode *> mainParser::Stmt_listContext::NEWLINE() {
  return getTokens(mainParser::NEWLINE);
}

tree::TerminalNode* mainParser::Stmt_listContext::NEWLINE(size_t i) {
  return getToken(mainParser::NEWLINE, i);
}


size_t mainParser::Stmt_listContext::getRuleIndex() const {
  return mainParser::RuleStmt_list;
}

void mainParser::Stmt_listContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<mainListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterStmt_list(this);
}

void mainParser::Stmt_listContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<mainListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitStmt_list(this);
}

mainParser::Stmt_listContext* mainParser::stmt_list() {
  Stmt_listContext *_localctx = _tracker.createInstance<Stmt_listContext>(_ctx, getState());
  enterRule(_localctx, 10, mainParser::RuleStmt_list);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(86);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << mainParser::REPEAT)
      | (1ULL << mainParser::IF)
      | (1ULL << mainParser::IDENTIFIER)
      | (1ULL << mainParser::NEWLINE))) != 0)) {
      setState(81);
      stmt();
      setState(82);
      match(mainParser::NEWLINE);
      setState(88);
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

//----------------- Func_listContext ------------------------------------------------------------------

mainParser::Func_listContext::Func_listContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<mainParser::FuncContext *> mainParser::Func_listContext::func() {
  return getRuleContexts<mainParser::FuncContext>();
}

mainParser::FuncContext* mainParser::Func_listContext::func(size_t i) {
  return getRuleContext<mainParser::FuncContext>(i);
}

std::vector<tree::TerminalNode *> mainParser::Func_listContext::NEWLINE() {
  return getTokens(mainParser::NEWLINE);
}

tree::TerminalNode* mainParser::Func_listContext::NEWLINE(size_t i) {
  return getToken(mainParser::NEWLINE, i);
}


size_t mainParser::Func_listContext::getRuleIndex() const {
  return mainParser::RuleFunc_list;
}

void mainParser::Func_listContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<mainListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFunc_list(this);
}

void mainParser::Func_listContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<mainListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFunc_list(this);
}

mainParser::Func_listContext* mainParser::func_list() {
  Func_listContext *_localctx = _tracker.createInstance<Func_listContext>(_ctx, getState());
  enterRule(_localctx, 12, mainParser::RuleFunc_list);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(94);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == mainParser::IDENTIFIER

    || _la == mainParser::NEWLINE) {
      setState(89);
      func();
      setState(90);
      match(mainParser::NEWLINE);
      setState(96);
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

mainParser::Assignment_stmtContext::Assignment_stmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

mainParser::VariableContext* mainParser::Assignment_stmtContext::variable() {
  return getRuleContext<mainParser::VariableContext>(0);
}

mainParser::ExprContext* mainParser::Assignment_stmtContext::expr() {
  return getRuleContext<mainParser::ExprContext>(0);
}

mainParser::Function_callContext* mainParser::Assignment_stmtContext::function_call() {
  return getRuleContext<mainParser::Function_callContext>(0);
}

mainParser::TypeContext* mainParser::Assignment_stmtContext::type() {
  return getRuleContext<mainParser::TypeContext>(0);
}


size_t mainParser::Assignment_stmtContext::getRuleIndex() const {
  return mainParser::RuleAssignment_stmt;
}

void mainParser::Assignment_stmtContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<mainListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAssignment_stmt(this);
}

void mainParser::Assignment_stmtContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<mainListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAssignment_stmt(this);
}

mainParser::Assignment_stmtContext* mainParser::assignment_stmt() {
  Assignment_stmtContext *_localctx = _tracker.createInstance<Assignment_stmtContext>(_ctx, getState());
  enterRule(_localctx, 14, mainParser::RuleAssignment_stmt);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(98);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 7, _ctx)) {
    case 1: {
      setState(97);
      type();
      break;
    }

    }
    setState(100);
    variable();
    setState(101);
    match(mainParser::EQ_OP);
    setState(104);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 8, _ctx)) {
    case 1: {
      setState(102);
      expr(0);
      break;
    }

    case 2: {
      setState(103);
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

//----------------- Repeat_stmtContext ------------------------------------------------------------------

mainParser::Repeat_stmtContext::Repeat_stmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* mainParser::Repeat_stmtContext::REPEAT() {
  return getToken(mainParser::REPEAT, 0);
}

mainParser::Stmt_listContext* mainParser::Repeat_stmtContext::stmt_list() {
  return getRuleContext<mainParser::Stmt_listContext>(0);
}

tree::TerminalNode* mainParser::Repeat_stmtContext::UNTIL() {
  return getToken(mainParser::UNTIL, 0);
}

mainParser::ExprContext* mainParser::Repeat_stmtContext::expr() {
  return getRuleContext<mainParser::ExprContext>(0);
}


size_t mainParser::Repeat_stmtContext::getRuleIndex() const {
  return mainParser::RuleRepeat_stmt;
}

void mainParser::Repeat_stmtContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<mainListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterRepeat_stmt(this);
}

void mainParser::Repeat_stmtContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<mainListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitRepeat_stmt(this);
}

mainParser::Repeat_stmtContext* mainParser::repeat_stmt() {
  Repeat_stmtContext *_localctx = _tracker.createInstance<Repeat_stmtContext>(_ctx, getState());
  enterRule(_localctx, 16, mainParser::RuleRepeat_stmt);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(106);
    match(mainParser::REPEAT);
    setState(107);
    stmt_list();
    setState(108);
    match(mainParser::UNTIL);
    setState(109);
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

mainParser::If_stmtContext::If_stmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* mainParser::If_stmtContext::IF() {
  return getToken(mainParser::IF, 0);
}

mainParser::ExprContext* mainParser::If_stmtContext::expr() {
  return getRuleContext<mainParser::ExprContext>(0);
}

std::vector<mainParser::StmtContext *> mainParser::If_stmtContext::stmt() {
  return getRuleContexts<mainParser::StmtContext>();
}

mainParser::StmtContext* mainParser::If_stmtContext::stmt(size_t i) {
  return getRuleContext<mainParser::StmtContext>(i);
}

tree::TerminalNode* mainParser::If_stmtContext::ELSE() {
  return getToken(mainParser::ELSE, 0);
}


size_t mainParser::If_stmtContext::getRuleIndex() const {
  return mainParser::RuleIf_stmt;
}

void mainParser::If_stmtContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<mainListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIf_stmt(this);
}

void mainParser::If_stmtContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<mainListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIf_stmt(this);
}

mainParser::If_stmtContext* mainParser::if_stmt() {
  If_stmtContext *_localctx = _tracker.createInstance<If_stmtContext>(_ctx, getState());
  enterRule(_localctx, 18, mainParser::RuleIf_stmt);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(111);
    match(mainParser::IF);
    setState(112);
    match(mainParser::T__1);
    setState(113);
    expr(0);
    setState(114);
    match(mainParser::T__3);

    setState(119);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == mainParser::T__4) {
      setState(115);
      match(mainParser::T__4);
      setState(116);
      stmt();
      setState(117);
      match(mainParser::T__5);
    }
    setState(129);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == mainParser::ELSE) {
      setState(121);
      match(mainParser::ELSE);
      setState(123);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == mainParser::T__4) {
        setState(122);
        match(mainParser::T__4);
      }
      setState(125);
      stmt();
      setState(127);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 11, _ctx)) {
      case 1: {
        setState(126);
        match(mainParser::T__5);
        break;
      }

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

//----------------- Do_whileContext ------------------------------------------------------------------

mainParser::Do_whileContext::Do_whileContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* mainParser::Do_whileContext::DO() {
  return getToken(mainParser::DO, 0);
}

mainParser::Stmt_listContext* mainParser::Do_whileContext::stmt_list() {
  return getRuleContext<mainParser::Stmt_listContext>(0);
}

tree::TerminalNode* mainParser::Do_whileContext::WHILE() {
  return getToken(mainParser::WHILE, 0);
}

mainParser::ExprContext* mainParser::Do_whileContext::expr() {
  return getRuleContext<mainParser::ExprContext>(0);
}


size_t mainParser::Do_whileContext::getRuleIndex() const {
  return mainParser::RuleDo_while;
}

void mainParser::Do_whileContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<mainListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDo_while(this);
}

void mainParser::Do_whileContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<mainListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDo_while(this);
}

mainParser::Do_whileContext* mainParser::do_while() {
  Do_whileContext *_localctx = _tracker.createInstance<Do_whileContext>(_ctx, getState());
  enterRule(_localctx, 20, mainParser::RuleDo_while);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(131);
    match(mainParser::DO);
    setState(132);
    match(mainParser::T__1);
    setState(133);
    stmt_list();
    setState(134);
    match(mainParser::T__3);
    setState(135);
    match(mainParser::WHILE);
    setState(136);
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

mainParser::Function_declContext::Function_declContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<mainParser::VariableContext *> mainParser::Function_declContext::variable() {
  return getRuleContexts<mainParser::VariableContext>();
}

mainParser::VariableContext* mainParser::Function_declContext::variable(size_t i) {
  return getRuleContext<mainParser::VariableContext>(i);
}

std::vector<tree::TerminalNode *> mainParser::Function_declContext::IDENTIFIER() {
  return getTokens(mainParser::IDENTIFIER);
}

tree::TerminalNode* mainParser::Function_declContext::IDENTIFIER(size_t i) {
  return getToken(mainParser::IDENTIFIER, i);
}

mainParser::StmtContext* mainParser::Function_declContext::stmt() {
  return getRuleContext<mainParser::StmtContext>(0);
}


size_t mainParser::Function_declContext::getRuleIndex() const {
  return mainParser::RuleFunction_decl;
}

void mainParser::Function_declContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<mainListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFunction_decl(this);
}

void mainParser::Function_declContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<mainListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFunction_decl(this);
}

mainParser::Function_declContext* mainParser::function_decl() {
  Function_declContext *_localctx = _tracker.createInstance<Function_declContext>(_ctx, getState());
  enterRule(_localctx, 22, mainParser::RuleFunction_decl);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(138);
    variable();
    setState(139);
    match(mainParser::IDENTIFIER);
    setState(140);
    match(mainParser::T__1);
    setState(151);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == mainParser::IDENTIFIER) {
      setState(141);
      variable();
      setState(142);
      match(mainParser::IDENTIFIER);
      setState(145); 
      _errHandler->sync(this);
      _la = _input->LA(1);
      do {
        setState(144);
        match(mainParser::T__2);
        setState(147); 
        _errHandler->sync(this);
        _la = _input->LA(1);
      } while (_la == mainParser::T__2);
      setState(153);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(154);
    match(mainParser::T__3);
    setState(155);
    match(mainParser::T__4);
    setState(156);
    stmt();
    setState(157);
    match(mainParser::T__5);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Function_callContext ------------------------------------------------------------------

mainParser::Function_callContext::Function_callContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> mainParser::Function_callContext::IDENTIFIER() {
  return getTokens(mainParser::IDENTIFIER);
}

tree::TerminalNode* mainParser::Function_callContext::IDENTIFIER(size_t i) {
  return getToken(mainParser::IDENTIFIER, i);
}

std::vector<mainParser::VariableContext *> mainParser::Function_callContext::variable() {
  return getRuleContexts<mainParser::VariableContext>();
}

mainParser::VariableContext* mainParser::Function_callContext::variable(size_t i) {
  return getRuleContext<mainParser::VariableContext>(i);
}


size_t mainParser::Function_callContext::getRuleIndex() const {
  return mainParser::RuleFunction_call;
}

void mainParser::Function_callContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<mainListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFunction_call(this);
}

void mainParser::Function_callContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<mainListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFunction_call(this);
}

mainParser::Function_callContext* mainParser::function_call() {
  Function_callContext *_localctx = _tracker.createInstance<Function_callContext>(_ctx, getState());
  enterRule(_localctx, 24, mainParser::RuleFunction_call);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(159);
    match(mainParser::IDENTIFIER);
    setState(160);
    match(mainParser::T__1);
    setState(174);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == mainParser::T__2

    || _la == mainParser::IDENTIFIER) {
      setState(162);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 15, _ctx)) {
      case 1: {
        setState(161);
        variable();
        break;
      }

      }
      setState(165);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == mainParser::IDENTIFIER) {
        setState(164);
        match(mainParser::IDENTIFIER);
      }
      setState(168); 
      _errHandler->sync(this);
      alt = 1;
      do {
        switch (alt) {
          case 1: {
                setState(167);
                match(mainParser::T__2);
                break;
              }

        default:
          throw NoViableAltException(this);
        }
        setState(170); 
        _errHandler->sync(this);
        alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 17, _ctx);
      } while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER);
      setState(176);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(177);
    match(mainParser::T__3);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- VariableContext ------------------------------------------------------------------

mainParser::VariableContext::VariableContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* mainParser::VariableContext::IDENTIFIER() {
  return getToken(mainParser::IDENTIFIER, 0);
}


size_t mainParser::VariableContext::getRuleIndex() const {
  return mainParser::RuleVariable;
}

void mainParser::VariableContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<mainListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterVariable(this);
}

void mainParser::VariableContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<mainListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitVariable(this);
}

mainParser::VariableContext* mainParser::variable() {
  VariableContext *_localctx = _tracker.createInstance<VariableContext>(_ctx, getState());
  enterRule(_localctx, 26, mainParser::RuleVariable);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(179);
    match(mainParser::IDENTIFIER);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExprContext ------------------------------------------------------------------

mainParser::ExprContext::ExprContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

mainParser::NumberContext* mainParser::ExprContext::number() {
  return getRuleContext<mainParser::NumberContext>(0);
}

tree::TerminalNode* mainParser::ExprContext::IDENTIFIER() {
  return getToken(mainParser::IDENTIFIER, 0);
}

std::vector<mainParser::ExprContext *> mainParser::ExprContext::expr() {
  return getRuleContexts<mainParser::ExprContext>();
}

mainParser::ExprContext* mainParser::ExprContext::expr(size_t i) {
  return getRuleContext<mainParser::ExprContext>(i);
}

mainParser::Mul_div_opContext* mainParser::ExprContext::mul_div_op() {
  return getRuleContext<mainParser::Mul_div_opContext>(0);
}

mainParser::Add_sub_opContext* mainParser::ExprContext::add_sub_op() {
  return getRuleContext<mainParser::Add_sub_opContext>(0);
}

mainParser::Rel_opContext* mainParser::ExprContext::rel_op() {
  return getRuleContext<mainParser::Rel_opContext>(0);
}


size_t mainParser::ExprContext::getRuleIndex() const {
  return mainParser::RuleExpr;
}

void mainParser::ExprContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<mainListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExpr(this);
}

void mainParser::ExprContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<mainListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExpr(this);
}


mainParser::ExprContext* mainParser::expr() {
   return expr(0);
}

mainParser::ExprContext* mainParser::expr(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  mainParser::ExprContext *_localctx = _tracker.createInstance<ExprContext>(_ctx, parentState);
  mainParser::ExprContext *previousContext = _localctx;
  size_t startState = 28;
  enterRecursionRule(_localctx, 28, mainParser::RuleExpr, precedence);

    

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(188);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case mainParser::INTEGER:
      case mainParser::ADD_OP:
      case mainParser::SUB_OP: {
        setState(182);
        number();
        break;
      }

      case mainParser::IDENTIFIER: {
        setState(183);
        match(mainParser::IDENTIFIER);
        break;
      }

      case mainParser::T__1: {
        setState(184);
        match(mainParser::T__1);
        setState(185);
        expr(0);
        setState(186);
        match(mainParser::T__3);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    _ctx->stop = _input->LT(-1);
    setState(204);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 21, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(202);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 20, _ctx)) {
        case 1: {
          _localctx = _tracker.createInstance<ExprContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpr);
          setState(190);

          if (!(precpred(_ctx, 6))) throw FailedPredicateException(this, "precpred(_ctx, 6)");
          setState(191);
          mul_div_op();
          setState(192);
          expr(7);
          break;
        }

        case 2: {
          _localctx = _tracker.createInstance<ExprContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpr);
          setState(194);

          if (!(precpred(_ctx, 5))) throw FailedPredicateException(this, "precpred(_ctx, 5)");
          setState(195);
          add_sub_op();
          setState(196);
          expr(6);
          break;
        }

        case 3: {
          _localctx = _tracker.createInstance<ExprContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpr);
          setState(198);

          if (!(precpred(_ctx, 4))) throw FailedPredicateException(this, "precpred(_ctx, 4)");
          setState(199);
          rel_op();
          setState(200);
          expr(5);
          break;
        }

        } 
      }
      setState(206);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 21, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- TypeContext ------------------------------------------------------------------

mainParser::TypeContext::TypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* mainParser::TypeContext::IDENTIFIER() {
  return getToken(mainParser::IDENTIFIER, 0);
}


size_t mainParser::TypeContext::getRuleIndex() const {
  return mainParser::RuleType;
}

void mainParser::TypeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<mainListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterType(this);
}

void mainParser::TypeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<mainListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitType(this);
}

mainParser::TypeContext* mainParser::type() {
  TypeContext *_localctx = _tracker.createInstance<TypeContext>(_ctx, getState());
  enterRule(_localctx, 30, mainParser::RuleType);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(207);
    match(mainParser::IDENTIFIER);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- NumberContext ------------------------------------------------------------------

mainParser::NumberContext::NumberContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* mainParser::NumberContext::INTEGER() {
  return getToken(mainParser::INTEGER, 0);
}

mainParser::SignContext* mainParser::NumberContext::sign() {
  return getRuleContext<mainParser::SignContext>(0);
}


size_t mainParser::NumberContext::getRuleIndex() const {
  return mainParser::RuleNumber;
}

void mainParser::NumberContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<mainListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterNumber(this);
}

void mainParser::NumberContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<mainListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitNumber(this);
}

mainParser::NumberContext* mainParser::number() {
  NumberContext *_localctx = _tracker.createInstance<NumberContext>(_ctx, getState());
  enterRule(_localctx, 32, mainParser::RuleNumber);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(210);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == mainParser::ADD_OP

    || _la == mainParser::SUB_OP) {
      setState(209);
      sign();
    }
    setState(212);
    match(mainParser::INTEGER);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SignContext ------------------------------------------------------------------

mainParser::SignContext::SignContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t mainParser::SignContext::getRuleIndex() const {
  return mainParser::RuleSign;
}

void mainParser::SignContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<mainListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSign(this);
}

void mainParser::SignContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<mainListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSign(this);
}

mainParser::SignContext* mainParser::sign() {
  SignContext *_localctx = _tracker.createInstance<SignContext>(_ctx, getState());
  enterRule(_localctx, 34, mainParser::RuleSign);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(214);
    _la = _input->LA(1);
    if (!(_la == mainParser::ADD_OP

    || _la == mainParser::SUB_OP)) {
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

mainParser::Mul_div_opContext::Mul_div_opContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* mainParser::Mul_div_opContext::MUL_OP() {
  return getToken(mainParser::MUL_OP, 0);
}

tree::TerminalNode* mainParser::Mul_div_opContext::DIV_OP() {
  return getToken(mainParser::DIV_OP, 0);
}


size_t mainParser::Mul_div_opContext::getRuleIndex() const {
  return mainParser::RuleMul_div_op;
}

void mainParser::Mul_div_opContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<mainListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMul_div_op(this);
}

void mainParser::Mul_div_opContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<mainListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMul_div_op(this);
}

mainParser::Mul_div_opContext* mainParser::mul_div_op() {
  Mul_div_opContext *_localctx = _tracker.createInstance<Mul_div_opContext>(_ctx, getState());
  enterRule(_localctx, 36, mainParser::RuleMul_div_op);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(216);
    _la = _input->LA(1);
    if (!(_la == mainParser::MUL_OP

    || _la == mainParser::DIV_OP)) {
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

mainParser::Add_sub_opContext::Add_sub_opContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* mainParser::Add_sub_opContext::ADD_OP() {
  return getToken(mainParser::ADD_OP, 0);
}

tree::TerminalNode* mainParser::Add_sub_opContext::SUB_OP() {
  return getToken(mainParser::SUB_OP, 0);
}


size_t mainParser::Add_sub_opContext::getRuleIndex() const {
  return mainParser::RuleAdd_sub_op;
}

void mainParser::Add_sub_opContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<mainListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAdd_sub_op(this);
}

void mainParser::Add_sub_opContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<mainListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAdd_sub_op(this);
}

mainParser::Add_sub_opContext* mainParser::add_sub_op() {
  Add_sub_opContext *_localctx = _tracker.createInstance<Add_sub_opContext>(_ctx, getState());
  enterRule(_localctx, 38, mainParser::RuleAdd_sub_op);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(218);
    _la = _input->LA(1);
    if (!(_la == mainParser::ADD_OP

    || _la == mainParser::SUB_OP)) {
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

mainParser::Rel_opContext::Rel_opContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* mainParser::Rel_opContext::EQ_OP() {
  return getToken(mainParser::EQ_OP, 0);
}

tree::TerminalNode* mainParser::Rel_opContext::NE_OP() {
  return getToken(mainParser::NE_OP, 0);
}

tree::TerminalNode* mainParser::Rel_opContext::LT_OP() {
  return getToken(mainParser::LT_OP, 0);
}

tree::TerminalNode* mainParser::Rel_opContext::LE_OP() {
  return getToken(mainParser::LE_OP, 0);
}

tree::TerminalNode* mainParser::Rel_opContext::GT_OP() {
  return getToken(mainParser::GT_OP, 0);
}

tree::TerminalNode* mainParser::Rel_opContext::GE_OP() {
  return getToken(mainParser::GE_OP, 0);
}


size_t mainParser::Rel_opContext::getRuleIndex() const {
  return mainParser::RuleRel_op;
}

void mainParser::Rel_opContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<mainListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterRel_op(this);
}

void mainParser::Rel_opContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<mainListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitRel_op(this);
}

mainParser::Rel_opContext* mainParser::rel_op() {
  Rel_opContext *_localctx = _tracker.createInstance<Rel_opContext>(_ctx, getState());
  enterRule(_localctx, 40, mainParser::RuleRel_op);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(220);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << mainParser::EQ_OP)
      | (1ULL << mainParser::NE_OP)
      | (1ULL << mainParser::LT_OP)
      | (1ULL << mainParser::LE_OP)
      | (1ULL << mainParser::GT_OP)
      | (1ULL << mainParser::GE_OP))) != 0))) {
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

bool mainParser::sempred(RuleContext *context, size_t ruleIndex, size_t predicateIndex) {
  switch (ruleIndex) {
    case 14: return exprSempred(dynamic_cast<ExprContext *>(context), predicateIndex);

  default:
    break;
  }
  return true;
}

bool mainParser::exprSempred(ExprContext *_localctx, size_t predicateIndex) {
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
std::vector<dfa::DFA> mainParser::_decisionToDFA;
atn::PredictionContextCache mainParser::_sharedContextCache;

// We own the ATN which in turn owns the ATN states.
atn::ATN mainParser::_atn;
std::vector<uint16_t> mainParser::_serializedATN;

std::vector<std::string> mainParser::_ruleNames = {
  "program", "header", "block", "stmt", "func", "stmt_list", "func_list", 
  "assignment_stmt", "repeat_stmt", "if_stmt", "do_while", "function_decl", 
  "function_call", "variable", "expr", "type", "number", "sign", "mul_div_op", 
  "add_sub_op", "rel_op"
};

std::vector<std::string> mainParser::_literalNames = {
  "", "'Pattie.'", "'('", "','", "')'", "'{'", "'}'", "'Krabie'", "'BEGIN'", 
  "'END'", "'VAR'", "'REPEAT'", "'UNTIL'", "'IF'", "'THEN'", "'ELSE'", "'DO'", 
  "'WHILE'", "'Spitout'", "", "", "", "'*'", "'/'", "'+'", "'-'", "'='", 
  "'<>'", "'<'", "'<='", "'>'", "'>='"
};

std::vector<std::string> mainParser::_symbolicNames = {
  "", "", "", "", "", "", "", "KRABBIE", "BEGIN", "END", "VAR", "REPEAT", 
  "UNTIL", "IF", "THEN", "ELSE", "DO", "WHILE", "RETURN", "IDENTIFIER", 
  "INTEGER", "CHARACTER", "MUL_OP", "DIV_OP", "ADD_OP", "SUB_OP", "EQ_OP", 
  "NE_OP", "LT_OP", "LE_OP", "GT_OP", "GE_OP", "NEWLINE", "WS"
};

dfa::Vocabulary mainParser::_vocabulary(_literalNames, _symbolicNames);

std::vector<std::string> mainParser::_tokenNames;

mainParser::Initializer::Initializer() {
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
    0x3, 0x23, 0xe1, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 0x4, 0x9, 
    0x4, 0x4, 0x5, 0x9, 0x5, 0x4, 0x6, 0x9, 0x6, 0x4, 0x7, 0x9, 0x7, 0x4, 
    0x8, 0x9, 0x8, 0x4, 0x9, 0x9, 0x9, 0x4, 0xa, 0x9, 0xa, 0x4, 0xb, 0x9, 
    0xb, 0x4, 0xc, 0x9, 0xc, 0x4, 0xd, 0x9, 0xd, 0x4, 0xe, 0x9, 0xe, 0x4, 
    0xf, 0x9, 0xf, 0x4, 0x10, 0x9, 0x10, 0x4, 0x11, 0x9, 0x11, 0x4, 0x12, 
    0x9, 0x12, 0x4, 0x13, 0x9, 0x13, 0x4, 0x14, 0x9, 0x14, 0x4, 0x15, 0x9, 
    0x15, 0x4, 0x16, 0x9, 0x16, 0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 
    0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 
    0x6, 0x3, 0x38, 0xa, 0x3, 0xd, 0x3, 0xe, 0x3, 0x39, 0x7, 0x3, 0x3c, 
    0xa, 0x3, 0xc, 0x3, 0xe, 0x3, 0x3f, 0xb, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 
    0x3, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x5, 0x4, 0x47, 0xa, 0x4, 0x3, 0x5, 
    0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x5, 0x5, 0x4d, 0xa, 0x5, 0x3, 0x6, 0x3, 
    0x6, 0x3, 0x6, 0x5, 0x6, 0x52, 0xa, 0x6, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 
    0x7, 0x7, 0x57, 0xa, 0x7, 0xc, 0x7, 0xe, 0x7, 0x5a, 0xb, 0x7, 0x3, 0x8, 
    0x3, 0x8, 0x3, 0x8, 0x7, 0x8, 0x5f, 0xa, 0x8, 0xc, 0x8, 0xe, 0x8, 0x62, 
    0xb, 0x8, 0x3, 0x9, 0x5, 0x9, 0x65, 0xa, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 
    0x9, 0x3, 0x9, 0x5, 0x9, 0x6b, 0xa, 0x9, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 
    0x3, 0xa, 0x3, 0xa, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 
    0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x5, 0xb, 0x7a, 0xa, 0xb, 0x3, 0xb, 0x3, 
    0xb, 0x5, 0xb, 0x7e, 0xa, 0xb, 0x3, 0xb, 0x3, 0xb, 0x5, 0xb, 0x82, 0xa, 
    0xb, 0x5, 0xb, 0x84, 0xa, 0xb, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 
    0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 
    0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x6, 0xd, 0x94, 0xa, 0xd, 0xd, 0xd, 0xe, 
    0xd, 0x95, 0x7, 0xd, 0x98, 0xa, 0xd, 0xc, 0xd, 0xe, 0xd, 0x9b, 0xb, 
    0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xe, 0x3, 
    0xe, 0x3, 0xe, 0x5, 0xe, 0xa5, 0xa, 0xe, 0x3, 0xe, 0x5, 0xe, 0xa8, 0xa, 
    0xe, 0x3, 0xe, 0x6, 0xe, 0xab, 0xa, 0xe, 0xd, 0xe, 0xe, 0xe, 0xac, 0x7, 
    0xe, 0xaf, 0xa, 0xe, 0xc, 0xe, 0xe, 0xe, 0xb2, 0xb, 0xe, 0x3, 0xe, 0x3, 
    0xe, 0x3, 0xf, 0x3, 0xf, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 
    0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x5, 0x10, 0xbf, 0xa, 0x10, 0x3, 0x10, 
    0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 
    0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x7, 0x10, 0xcd, 0xa, 
    0x10, 0xc, 0x10, 0xe, 0x10, 0xd0, 0xb, 0x10, 0x3, 0x11, 0x3, 0x11, 0x3, 
    0x12, 0x5, 0x12, 0xd5, 0xa, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x13, 0x3, 
    0x13, 0x3, 0x14, 0x3, 0x14, 0x3, 0x15, 0x3, 0x15, 0x3, 0x16, 0x3, 0x16, 
    0x3, 0x16, 0x2, 0x3, 0x1e, 0x17, 0x2, 0x4, 0x6, 0x8, 0xa, 0xc, 0xe, 
    0x10, 0x12, 0x14, 0x16, 0x18, 0x1a, 0x1c, 0x1e, 0x20, 0x22, 0x24, 0x26, 
    0x28, 0x2a, 0x2, 0x5, 0x3, 0x2, 0x1a, 0x1b, 0x3, 0x2, 0x18, 0x19, 0x3, 
    0x2, 0x1c, 0x21, 0x2, 0xe8, 0x2, 0x2c, 0x3, 0x2, 0x2, 0x2, 0x4, 0x30, 
    0x3, 0x2, 0x2, 0x2, 0x6, 0x46, 0x3, 0x2, 0x2, 0x2, 0x8, 0x4c, 0x3, 0x2, 
    0x2, 0x2, 0xa, 0x51, 0x3, 0x2, 0x2, 0x2, 0xc, 0x58, 0x3, 0x2, 0x2, 0x2, 
    0xe, 0x60, 0x3, 0x2, 0x2, 0x2, 0x10, 0x64, 0x3, 0x2, 0x2, 0x2, 0x12, 
    0x6c, 0x3, 0x2, 0x2, 0x2, 0x14, 0x71, 0x3, 0x2, 0x2, 0x2, 0x16, 0x85, 
    0x3, 0x2, 0x2, 0x2, 0x18, 0x8c, 0x3, 0x2, 0x2, 0x2, 0x1a, 0xa1, 0x3, 
    0x2, 0x2, 0x2, 0x1c, 0xb5, 0x3, 0x2, 0x2, 0x2, 0x1e, 0xbe, 0x3, 0x2, 
    0x2, 0x2, 0x20, 0xd1, 0x3, 0x2, 0x2, 0x2, 0x22, 0xd4, 0x3, 0x2, 0x2, 
    0x2, 0x24, 0xd8, 0x3, 0x2, 0x2, 0x2, 0x26, 0xda, 0x3, 0x2, 0x2, 0x2, 
    0x28, 0xdc, 0x3, 0x2, 0x2, 0x2, 0x2a, 0xde, 0x3, 0x2, 0x2, 0x2, 0x2c, 
    0x2d, 0x5, 0x4, 0x3, 0x2, 0x2d, 0x2e, 0x5, 0x6, 0x4, 0x2, 0x2e, 0x2f, 
    0x7, 0x3, 0x2, 0x2, 0x2f, 0x3, 0x3, 0x2, 0x2, 0x2, 0x30, 0x31, 0x7, 
    0x15, 0x2, 0x2, 0x31, 0x32, 0x7, 0x9, 0x2, 0x2, 0x32, 0x3d, 0x7, 0x4, 
    0x2, 0x2, 0x33, 0x34, 0x5, 0x1c, 0xf, 0x2, 0x34, 0x35, 0x7, 0x15, 0x2, 
    0x2, 0x35, 0x37, 0x3, 0x2, 0x2, 0x2, 0x36, 0x38, 0x7, 0x5, 0x2, 0x2, 
    0x37, 0x36, 0x3, 0x2, 0x2, 0x2, 0x38, 0x39, 0x3, 0x2, 0x2, 0x2, 0x39, 
    0x37, 0x3, 0x2, 0x2, 0x2, 0x39, 0x3a, 0x3, 0x2, 0x2, 0x2, 0x3a, 0x3c, 
    0x3, 0x2, 0x2, 0x2, 0x3b, 0x33, 0x3, 0x2, 0x2, 0x2, 0x3c, 0x3f, 0x3, 
    0x2, 0x2, 0x2, 0x3d, 0x3b, 0x3, 0x2, 0x2, 0x2, 0x3d, 0x3e, 0x3, 0x2, 
    0x2, 0x2, 0x3e, 0x40, 0x3, 0x2, 0x2, 0x2, 0x3f, 0x3d, 0x3, 0x2, 0x2, 
    0x2, 0x40, 0x41, 0x7, 0x6, 0x2, 0x2, 0x41, 0x42, 0x7, 0x22, 0x2, 0x2, 
    0x42, 0x5, 0x3, 0x2, 0x2, 0x2, 0x43, 0x47, 0x5, 0xc, 0x7, 0x2, 0x44, 
    0x47, 0x5, 0xe, 0x8, 0x2, 0x45, 0x47, 0x3, 0x2, 0x2, 0x2, 0x46, 0x43, 
    0x3, 0x2, 0x2, 0x2, 0x46, 0x44, 0x3, 0x2, 0x2, 0x2, 0x46, 0x45, 0x3, 
    0x2, 0x2, 0x2, 0x47, 0x7, 0x3, 0x2, 0x2, 0x2, 0x48, 0x4d, 0x5, 0x10, 
    0x9, 0x2, 0x49, 0x4d, 0x5, 0x12, 0xa, 0x2, 0x4a, 0x4d, 0x5, 0x14, 0xb, 
    0x2, 0x4b, 0x4d, 0x3, 0x2, 0x2, 0x2, 0x4c, 0x48, 0x3, 0x2, 0x2, 0x2, 
    0x4c, 0x49, 0x3, 0x2, 0x2, 0x2, 0x4c, 0x4a, 0x3, 0x2, 0x2, 0x2, 0x4c, 
    0x4b, 0x3, 0x2, 0x2, 0x2, 0x4d, 0x9, 0x3, 0x2, 0x2, 0x2, 0x4e, 0x52, 
    0x5, 0x1a, 0xe, 0x2, 0x4f, 0x52, 0x5, 0x18, 0xd, 0x2, 0x50, 0x52, 0x3, 
    0x2, 0x2, 0x2, 0x51, 0x4e, 0x3, 0x2, 0x2, 0x2, 0x51, 0x4f, 0x3, 0x2, 
    0x2, 0x2, 0x51, 0x50, 0x3, 0x2, 0x2, 0x2, 0x52, 0xb, 0x3, 0x2, 0x2, 
    0x2, 0x53, 0x54, 0x5, 0x8, 0x5, 0x2, 0x54, 0x55, 0x7, 0x22, 0x2, 0x2, 
    0x55, 0x57, 0x3, 0x2, 0x2, 0x2, 0x56, 0x53, 0x3, 0x2, 0x2, 0x2, 0x57, 
    0x5a, 0x3, 0x2, 0x2, 0x2, 0x58, 0x56, 0x3, 0x2, 0x2, 0x2, 0x58, 0x59, 
    0x3, 0x2, 0x2, 0x2, 0x59, 0xd, 0x3, 0x2, 0x2, 0x2, 0x5a, 0x58, 0x3, 
    0x2, 0x2, 0x2, 0x5b, 0x5c, 0x5, 0xa, 0x6, 0x2, 0x5c, 0x5d, 0x7, 0x22, 
    0x2, 0x2, 0x5d, 0x5f, 0x3, 0x2, 0x2, 0x2, 0x5e, 0x5b, 0x3, 0x2, 0x2, 
    0x2, 0x5f, 0x62, 0x3, 0x2, 0x2, 0x2, 0x60, 0x5e, 0x3, 0x2, 0x2, 0x2, 
    0x60, 0x61, 0x3, 0x2, 0x2, 0x2, 0x61, 0xf, 0x3, 0x2, 0x2, 0x2, 0x62, 
    0x60, 0x3, 0x2, 0x2, 0x2, 0x63, 0x65, 0x5, 0x20, 0x11, 0x2, 0x64, 0x63, 
    0x3, 0x2, 0x2, 0x2, 0x64, 0x65, 0x3, 0x2, 0x2, 0x2, 0x65, 0x66, 0x3, 
    0x2, 0x2, 0x2, 0x66, 0x67, 0x5, 0x1c, 0xf, 0x2, 0x67, 0x6a, 0x7, 0x1c, 
    0x2, 0x2, 0x68, 0x6b, 0x5, 0x1e, 0x10, 0x2, 0x69, 0x6b, 0x5, 0x1a, 0xe, 
    0x2, 0x6a, 0x68, 0x3, 0x2, 0x2, 0x2, 0x6a, 0x69, 0x3, 0x2, 0x2, 0x2, 
    0x6b, 0x11, 0x3, 0x2, 0x2, 0x2, 0x6c, 0x6d, 0x7, 0xd, 0x2, 0x2, 0x6d, 
    0x6e, 0x5, 0xc, 0x7, 0x2, 0x6e, 0x6f, 0x7, 0xe, 0x2, 0x2, 0x6f, 0x70, 
    0x5, 0x1e, 0x10, 0x2, 0x70, 0x13, 0x3, 0x2, 0x2, 0x2, 0x71, 0x72, 0x7, 
    0xf, 0x2, 0x2, 0x72, 0x73, 0x7, 0x4, 0x2, 0x2, 0x73, 0x74, 0x5, 0x1e, 
    0x10, 0x2, 0x74, 0x79, 0x7, 0x6, 0x2, 0x2, 0x75, 0x76, 0x7, 0x7, 0x2, 
    0x2, 0x76, 0x77, 0x5, 0x8, 0x5, 0x2, 0x77, 0x78, 0x7, 0x8, 0x2, 0x2, 
    0x78, 0x7a, 0x3, 0x2, 0x2, 0x2, 0x79, 0x75, 0x3, 0x2, 0x2, 0x2, 0x79, 
    0x7a, 0x3, 0x2, 0x2, 0x2, 0x7a, 0x83, 0x3, 0x2, 0x2, 0x2, 0x7b, 0x7d, 
    0x7, 0x11, 0x2, 0x2, 0x7c, 0x7e, 0x7, 0x7, 0x2, 0x2, 0x7d, 0x7c, 0x3, 
    0x2, 0x2, 0x2, 0x7d, 0x7e, 0x3, 0x2, 0x2, 0x2, 0x7e, 0x7f, 0x3, 0x2, 
    0x2, 0x2, 0x7f, 0x81, 0x5, 0x8, 0x5, 0x2, 0x80, 0x82, 0x7, 0x8, 0x2, 
    0x2, 0x81, 0x80, 0x3, 0x2, 0x2, 0x2, 0x81, 0x82, 0x3, 0x2, 0x2, 0x2, 
    0x82, 0x84, 0x3, 0x2, 0x2, 0x2, 0x83, 0x7b, 0x3, 0x2, 0x2, 0x2, 0x83, 
    0x84, 0x3, 0x2, 0x2, 0x2, 0x84, 0x15, 0x3, 0x2, 0x2, 0x2, 0x85, 0x86, 
    0x7, 0x12, 0x2, 0x2, 0x86, 0x87, 0x7, 0x4, 0x2, 0x2, 0x87, 0x88, 0x5, 
    0xc, 0x7, 0x2, 0x88, 0x89, 0x7, 0x6, 0x2, 0x2, 0x89, 0x8a, 0x7, 0x13, 
    0x2, 0x2, 0x8a, 0x8b, 0x5, 0x1e, 0x10, 0x2, 0x8b, 0x17, 0x3, 0x2, 0x2, 
    0x2, 0x8c, 0x8d, 0x5, 0x1c, 0xf, 0x2, 0x8d, 0x8e, 0x7, 0x15, 0x2, 0x2, 
    0x8e, 0x99, 0x7, 0x4, 0x2, 0x2, 0x8f, 0x90, 0x5, 0x1c, 0xf, 0x2, 0x90, 
    0x91, 0x7, 0x15, 0x2, 0x2, 0x91, 0x93, 0x3, 0x2, 0x2, 0x2, 0x92, 0x94, 
    0x7, 0x5, 0x2, 0x2, 0x93, 0x92, 0x3, 0x2, 0x2, 0x2, 0x94, 0x95, 0x3, 
    0x2, 0x2, 0x2, 0x95, 0x93, 0x3, 0x2, 0x2, 0x2, 0x95, 0x96, 0x3, 0x2, 
    0x2, 0x2, 0x96, 0x98, 0x3, 0x2, 0x2, 0x2, 0x97, 0x8f, 0x3, 0x2, 0x2, 
    0x2, 0x98, 0x9b, 0x3, 0x2, 0x2, 0x2, 0x99, 0x97, 0x3, 0x2, 0x2, 0x2, 
    0x99, 0x9a, 0x3, 0x2, 0x2, 0x2, 0x9a, 0x9c, 0x3, 0x2, 0x2, 0x2, 0x9b, 
    0x99, 0x3, 0x2, 0x2, 0x2, 0x9c, 0x9d, 0x7, 0x6, 0x2, 0x2, 0x9d, 0x9e, 
    0x7, 0x7, 0x2, 0x2, 0x9e, 0x9f, 0x5, 0x8, 0x5, 0x2, 0x9f, 0xa0, 0x7, 
    0x8, 0x2, 0x2, 0xa0, 0x19, 0x3, 0x2, 0x2, 0x2, 0xa1, 0xa2, 0x7, 0x15, 
    0x2, 0x2, 0xa2, 0xb0, 0x7, 0x4, 0x2, 0x2, 0xa3, 0xa5, 0x5, 0x1c, 0xf, 
    0x2, 0xa4, 0xa3, 0x3, 0x2, 0x2, 0x2, 0xa4, 0xa5, 0x3, 0x2, 0x2, 0x2, 
    0xa5, 0xa7, 0x3, 0x2, 0x2, 0x2, 0xa6, 0xa8, 0x7, 0x15, 0x2, 0x2, 0xa7, 
    0xa6, 0x3, 0x2, 0x2, 0x2, 0xa7, 0xa8, 0x3, 0x2, 0x2, 0x2, 0xa8, 0xaa, 
    0x3, 0x2, 0x2, 0x2, 0xa9, 0xab, 0x7, 0x5, 0x2, 0x2, 0xaa, 0xa9, 0x3, 
    0x2, 0x2, 0x2, 0xab, 0xac, 0x3, 0x2, 0x2, 0x2, 0xac, 0xaa, 0x3, 0x2, 
    0x2, 0x2, 0xac, 0xad, 0x3, 0x2, 0x2, 0x2, 0xad, 0xaf, 0x3, 0x2, 0x2, 
    0x2, 0xae, 0xa4, 0x3, 0x2, 0x2, 0x2, 0xaf, 0xb2, 0x3, 0x2, 0x2, 0x2, 
    0xb0, 0xae, 0x3, 0x2, 0x2, 0x2, 0xb0, 0xb1, 0x3, 0x2, 0x2, 0x2, 0xb1, 
    0xb3, 0x3, 0x2, 0x2, 0x2, 0xb2, 0xb0, 0x3, 0x2, 0x2, 0x2, 0xb3, 0xb4, 
    0x7, 0x6, 0x2, 0x2, 0xb4, 0x1b, 0x3, 0x2, 0x2, 0x2, 0xb5, 0xb6, 0x7, 
    0x15, 0x2, 0x2, 0xb6, 0x1d, 0x3, 0x2, 0x2, 0x2, 0xb7, 0xb8, 0x8, 0x10, 
    0x1, 0x2, 0xb8, 0xbf, 0x5, 0x22, 0x12, 0x2, 0xb9, 0xbf, 0x7, 0x15, 0x2, 
    0x2, 0xba, 0xbb, 0x7, 0x4, 0x2, 0x2, 0xbb, 0xbc, 0x5, 0x1e, 0x10, 0x2, 
    0xbc, 0xbd, 0x7, 0x6, 0x2, 0x2, 0xbd, 0xbf, 0x3, 0x2, 0x2, 0x2, 0xbe, 
    0xb7, 0x3, 0x2, 0x2, 0x2, 0xbe, 0xb9, 0x3, 0x2, 0x2, 0x2, 0xbe, 0xba, 
    0x3, 0x2, 0x2, 0x2, 0xbf, 0xce, 0x3, 0x2, 0x2, 0x2, 0xc0, 0xc1, 0xc, 
    0x8, 0x2, 0x2, 0xc1, 0xc2, 0x5, 0x26, 0x14, 0x2, 0xc2, 0xc3, 0x5, 0x1e, 
    0x10, 0x9, 0xc3, 0xcd, 0x3, 0x2, 0x2, 0x2, 0xc4, 0xc5, 0xc, 0x7, 0x2, 
    0x2, 0xc5, 0xc6, 0x5, 0x28, 0x15, 0x2, 0xc6, 0xc7, 0x5, 0x1e, 0x10, 
    0x8, 0xc7, 0xcd, 0x3, 0x2, 0x2, 0x2, 0xc8, 0xc9, 0xc, 0x6, 0x2, 0x2, 
    0xc9, 0xca, 0x5, 0x2a, 0x16, 0x2, 0xca, 0xcb, 0x5, 0x1e, 0x10, 0x7, 
    0xcb, 0xcd, 0x3, 0x2, 0x2, 0x2, 0xcc, 0xc0, 0x3, 0x2, 0x2, 0x2, 0xcc, 
    0xc4, 0x3, 0x2, 0x2, 0x2, 0xcc, 0xc8, 0x3, 0x2, 0x2, 0x2, 0xcd, 0xd0, 
    0x3, 0x2, 0x2, 0x2, 0xce, 0xcc, 0x3, 0x2, 0x2, 0x2, 0xce, 0xcf, 0x3, 
    0x2, 0x2, 0x2, 0xcf, 0x1f, 0x3, 0x2, 0x2, 0x2, 0xd0, 0xce, 0x3, 0x2, 
    0x2, 0x2, 0xd1, 0xd2, 0x7, 0x15, 0x2, 0x2, 0xd2, 0x21, 0x3, 0x2, 0x2, 
    0x2, 0xd3, 0xd5, 0x5, 0x24, 0x13, 0x2, 0xd4, 0xd3, 0x3, 0x2, 0x2, 0x2, 
    0xd4, 0xd5, 0x3, 0x2, 0x2, 0x2, 0xd5, 0xd6, 0x3, 0x2, 0x2, 0x2, 0xd6, 
    0xd7, 0x7, 0x16, 0x2, 0x2, 0xd7, 0x23, 0x3, 0x2, 0x2, 0x2, 0xd8, 0xd9, 
    0x9, 0x2, 0x2, 0x2, 0xd9, 0x25, 0x3, 0x2, 0x2, 0x2, 0xda, 0xdb, 0x9, 
    0x3, 0x2, 0x2, 0xdb, 0x27, 0x3, 0x2, 0x2, 0x2, 0xdc, 0xdd, 0x9, 0x2, 
    0x2, 0x2, 0xdd, 0x29, 0x3, 0x2, 0x2, 0x2, 0xde, 0xdf, 0x9, 0x4, 0x2, 
    0x2, 0xdf, 0x2b, 0x3, 0x2, 0x2, 0x2, 0x19, 0x39, 0x3d, 0x46, 0x4c, 0x51, 
    0x58, 0x60, 0x64, 0x6a, 0x79, 0x7d, 0x81, 0x83, 0x95, 0x99, 0xa4, 0xa7, 
    0xac, 0xb0, 0xbe, 0xcc, 0xce, 0xd4, 
  };

  atn::ATNDeserializer deserializer;
  _atn = deserializer.deserialize(_serializedATN);

  size_t count = _atn.getNumberOfDecisions();
  _decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    _decisionToDFA.emplace_back(_atn.getDecisionState(i), i);
  }
}

mainParser::Initializer mainParser::_init;
