
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
    setState(46);
    header();
    setState(47);
    block();
    setState(48);
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

tree::TerminalNode* mainParser::HeaderContext::PROGRAM() {
  return getToken(mainParser::PROGRAM, 0);
}

tree::TerminalNode* mainParser::HeaderContext::IDENTIFIER() {
  return getToken(mainParser::IDENTIFIER, 0);
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

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(50);
    match(mainParser::PROGRAM);
    setState(51);
    match(mainParser::IDENTIFIER);
    setState(52);
    match(mainParser::T__1);
   
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

mainParser::DeclarationsContext* mainParser::BlockContext::declarations() {
  return getRuleContext<mainParser::DeclarationsContext>(0);
}

mainParser::Compound_stmtContext* mainParser::BlockContext::compound_stmt() {
  return getRuleContext<mainParser::Compound_stmtContext>(0);
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
    enterOuterAlt(_localctx, 1);
    setState(54);
    declarations();
    setState(55);
    compound_stmt();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DeclarationsContext ------------------------------------------------------------------

mainParser::DeclarationsContext::DeclarationsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* mainParser::DeclarationsContext::VAR() {
  return getToken(mainParser::VAR, 0);
}

mainParser::Decl_listContext* mainParser::DeclarationsContext::decl_list() {
  return getRuleContext<mainParser::Decl_listContext>(0);
}


size_t mainParser::DeclarationsContext::getRuleIndex() const {
  return mainParser::RuleDeclarations;
}

void mainParser::DeclarationsContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<mainListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDeclarations(this);
}

void mainParser::DeclarationsContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<mainListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDeclarations(this);
}

mainParser::DeclarationsContext* mainParser::declarations() {
  DeclarationsContext *_localctx = _tracker.createInstance<DeclarationsContext>(_ctx, getState());
  enterRule(_localctx, 6, mainParser::RuleDeclarations);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(57);
    match(mainParser::VAR);
    setState(58);
    decl_list();
    setState(59);
    match(mainParser::T__1);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Decl_listContext ------------------------------------------------------------------

mainParser::Decl_listContext::Decl_listContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<mainParser::DeclContext *> mainParser::Decl_listContext::decl() {
  return getRuleContexts<mainParser::DeclContext>();
}

mainParser::DeclContext* mainParser::Decl_listContext::decl(size_t i) {
  return getRuleContext<mainParser::DeclContext>(i);
}


size_t mainParser::Decl_listContext::getRuleIndex() const {
  return mainParser::RuleDecl_list;
}

void mainParser::Decl_listContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<mainListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDecl_list(this);
}

void mainParser::Decl_listContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<mainListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDecl_list(this);
}

mainParser::Decl_listContext* mainParser::decl_list() {
  Decl_listContext *_localctx = _tracker.createInstance<Decl_listContext>(_ctx, getState());
  enterRule(_localctx, 8, mainParser::RuleDecl_list);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(61);
    decl();
    setState(66);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 0, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(62);
        match(mainParser::T__1);
        setState(63);
        decl(); 
      }
      setState(68);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 0, _ctx);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DeclContext ------------------------------------------------------------------

mainParser::DeclContext::DeclContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

mainParser::Var_listContext* mainParser::DeclContext::var_list() {
  return getRuleContext<mainParser::Var_listContext>(0);
}

mainParser::Type_idContext* mainParser::DeclContext::type_id() {
  return getRuleContext<mainParser::Type_idContext>(0);
}


size_t mainParser::DeclContext::getRuleIndex() const {
  return mainParser::RuleDecl;
}

void mainParser::DeclContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<mainListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDecl(this);
}

void mainParser::DeclContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<mainListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDecl(this);
}

mainParser::DeclContext* mainParser::decl() {
  DeclContext *_localctx = _tracker.createInstance<DeclContext>(_ctx, getState());
  enterRule(_localctx, 10, mainParser::RuleDecl);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(69);
    var_list();
    setState(70);
    match(mainParser::T__2);
    setState(71);
    type_id();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Var_listContext ------------------------------------------------------------------

mainParser::Var_listContext::Var_listContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<mainParser::Var_idContext *> mainParser::Var_listContext::var_id() {
  return getRuleContexts<mainParser::Var_idContext>();
}

mainParser::Var_idContext* mainParser::Var_listContext::var_id(size_t i) {
  return getRuleContext<mainParser::Var_idContext>(i);
}


size_t mainParser::Var_listContext::getRuleIndex() const {
  return mainParser::RuleVar_list;
}

void mainParser::Var_listContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<mainListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterVar_list(this);
}

void mainParser::Var_listContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<mainListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitVar_list(this);
}

mainParser::Var_listContext* mainParser::var_list() {
  Var_listContext *_localctx = _tracker.createInstance<Var_listContext>(_ctx, getState());
  enterRule(_localctx, 12, mainParser::RuleVar_list);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(73);
    var_id();
    setState(78);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == mainParser::T__3) {
      setState(74);
      match(mainParser::T__3);
      setState(75);
      var_id();
      setState(80);
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

//----------------- Var_idContext ------------------------------------------------------------------

mainParser::Var_idContext::Var_idContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* mainParser::Var_idContext::IDENTIFIER() {
  return getToken(mainParser::IDENTIFIER, 0);
}


size_t mainParser::Var_idContext::getRuleIndex() const {
  return mainParser::RuleVar_id;
}

void mainParser::Var_idContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<mainListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterVar_id(this);
}

void mainParser::Var_idContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<mainListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitVar_id(this);
}

mainParser::Var_idContext* mainParser::var_id() {
  Var_idContext *_localctx = _tracker.createInstance<Var_idContext>(_ctx, getState());
  enterRule(_localctx, 14, mainParser::RuleVar_id);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(81);
    match(mainParser::IDENTIFIER);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Type_idContext ------------------------------------------------------------------

mainParser::Type_idContext::Type_idContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* mainParser::Type_idContext::IDENTIFIER() {
  return getToken(mainParser::IDENTIFIER, 0);
}


size_t mainParser::Type_idContext::getRuleIndex() const {
  return mainParser::RuleType_id;
}

void mainParser::Type_idContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<mainListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterType_id(this);
}

void mainParser::Type_idContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<mainListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitType_id(this);
}

mainParser::Type_idContext* mainParser::type_id() {
  Type_idContext *_localctx = _tracker.createInstance<Type_idContext>(_ctx, getState());
  enterRule(_localctx, 16, mainParser::RuleType_id);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(83);
    match(mainParser::IDENTIFIER);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Compound_stmtContext ------------------------------------------------------------------

mainParser::Compound_stmtContext::Compound_stmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* mainParser::Compound_stmtContext::BEGIN() {
  return getToken(mainParser::BEGIN, 0);
}

mainParser::Stmt_listContext* mainParser::Compound_stmtContext::stmt_list() {
  return getRuleContext<mainParser::Stmt_listContext>(0);
}

tree::TerminalNode* mainParser::Compound_stmtContext::END() {
  return getToken(mainParser::END, 0);
}


size_t mainParser::Compound_stmtContext::getRuleIndex() const {
  return mainParser::RuleCompound_stmt;
}

void mainParser::Compound_stmtContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<mainListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCompound_stmt(this);
}

void mainParser::Compound_stmtContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<mainListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCompound_stmt(this);
}

mainParser::Compound_stmtContext* mainParser::compound_stmt() {
  Compound_stmtContext *_localctx = _tracker.createInstance<Compound_stmtContext>(_ctx, getState());
  enterRule(_localctx, 18, mainParser::RuleCompound_stmt);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(85);
    match(mainParser::BEGIN);
    setState(86);
    stmt_list();
    setState(87);
    match(mainParser::END);
   
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

mainParser::Compound_stmtContext* mainParser::StmtContext::compound_stmt() {
  return getRuleContext<mainParser::Compound_stmtContext>(0);
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
  enterRule(_localctx, 20, mainParser::RuleStmt);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(94);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case mainParser::BEGIN: {
        enterOuterAlt(_localctx, 1);
        setState(89);
        compound_stmt();
        break;
      }

      case mainParser::IDENTIFIER: {
        enterOuterAlt(_localctx, 2);
        setState(90);
        assignment_stmt();
        break;
      }

      case mainParser::REPEAT: {
        enterOuterAlt(_localctx, 3);
        setState(91);
        repeat_stmt();
        break;
      }

      case mainParser::IF: {
        enterOuterAlt(_localctx, 4);
        setState(92);
        if_stmt();
        break;
      }

      case mainParser::T__1:
      case mainParser::T__8:
      case mainParser::END:
      case mainParser::UNTIL:
      case mainParser::ELSE: {
        enterOuterAlt(_localctx, 5);

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
  enterRule(_localctx, 22, mainParser::RuleStmt_list);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(96);
    stmt();
    setState(101);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == mainParser::T__1) {
      setState(97);
      match(mainParser::T__1);
      setState(98);
      stmt();
      setState(103);
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
  enterRule(_localctx, 24, mainParser::RuleAssignment_stmt);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(104);
    variable();
    setState(105);
    match(mainParser::T__4);
    setState(106);
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
  enterRule(_localctx, 26, mainParser::RuleRepeat_stmt);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(108);
    match(mainParser::REPEAT);
    setState(109);
    stmt_list();
    setState(110);
    match(mainParser::UNTIL);
    setState(111);
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

tree::TerminalNode* mainParser::If_stmtContext::THEN() {
  return getToken(mainParser::THEN, 0);
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
  enterRule(_localctx, 28, mainParser::RuleIf_stmt);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(113);
    match(mainParser::IF);
    setState(114);
    expr(0);
    setState(115);
    match(mainParser::THEN);
    setState(116);
    stmt();
    setState(119);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 4, _ctx)) {
    case 1: {
      setState(117);
      match(mainParser::ELSE);
      setState(118);
      stmt();
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

//----------------- FunctionContext ------------------------------------------------------------------

mainParser::FunctionContext::FunctionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<mainParser::VariableContext *> mainParser::FunctionContext::variable() {
  return getRuleContexts<mainParser::VariableContext>();
}

mainParser::VariableContext* mainParser::FunctionContext::variable(size_t i) {
  return getRuleContext<mainParser::VariableContext>(i);
}

std::vector<tree::TerminalNode *> mainParser::FunctionContext::IDENTIFIER() {
  return getTokens(mainParser::IDENTIFIER);
}

tree::TerminalNode* mainParser::FunctionContext::IDENTIFIER(size_t i) {
  return getToken(mainParser::IDENTIFIER, i);
}

mainParser::StmtContext* mainParser::FunctionContext::stmt() {
  return getRuleContext<mainParser::StmtContext>(0);
}


size_t mainParser::FunctionContext::getRuleIndex() const {
  return mainParser::RuleFunction;
}

void mainParser::FunctionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<mainListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFunction(this);
}

void mainParser::FunctionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<mainListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFunction(this);
}

mainParser::FunctionContext* mainParser::function() {
  FunctionContext *_localctx = _tracker.createInstance<FunctionContext>(_ctx, getState());
  enterRule(_localctx, 30, mainParser::RuleFunction);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(121);
    variable();
    setState(122);
    match(mainParser::IDENTIFIER);
    setState(123);
    match(mainParser::T__5);
    setState(134);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == mainParser::IDENTIFIER) {
      setState(124);
      variable();
      setState(125);
      match(mainParser::IDENTIFIER);
      setState(128); 
      _errHandler->sync(this);
      _la = _input->LA(1);
      do {
        setState(127);
        match(mainParser::T__3);
        setState(130); 
        _errHandler->sync(this);
        _la = _input->LA(1);
      } while (_la == mainParser::T__3);
      setState(136);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(137);
    match(mainParser::T__6);
    setState(138);
    match(mainParser::T__7);
    setState(139);
    stmt();
    setState(140);
    match(mainParser::T__8);
   
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
  enterRule(_localctx, 32, mainParser::RuleVariable);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(142);
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
  size_t startState = 34;
  enterRecursionRule(_localctx, 34, mainParser::RuleExpr, precedence);

    

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(151);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case mainParser::INTEGER:
      case mainParser::ADD_OP:
      case mainParser::SUB_OP: {
        setState(145);
        number();
        break;
      }

      case mainParser::IDENTIFIER: {
        setState(146);
        match(mainParser::IDENTIFIER);
        break;
      }

      case mainParser::T__5: {
        setState(147);
        match(mainParser::T__5);
        setState(148);
        expr(0);
        setState(149);
        match(mainParser::T__6);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    _ctx->stop = _input->LT(-1);
    setState(167);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 9, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(165);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 8, _ctx)) {
        case 1: {
          _localctx = _tracker.createInstance<ExprContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpr);
          setState(153);

          if (!(precpred(_ctx, 6))) throw FailedPredicateException(this, "precpred(_ctx, 6)");
          setState(154);
          mul_div_op();
          setState(155);
          expr(7);
          break;
        }

        case 2: {
          _localctx = _tracker.createInstance<ExprContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpr);
          setState(157);

          if (!(precpred(_ctx, 5))) throw FailedPredicateException(this, "precpred(_ctx, 5)");
          setState(158);
          add_sub_op();
          setState(159);
          expr(6);
          break;
        }

        case 3: {
          _localctx = _tracker.createInstance<ExprContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExpr);
          setState(161);

          if (!(precpred(_ctx, 4))) throw FailedPredicateException(this, "precpred(_ctx, 4)");
          setState(162);
          rel_op();
          setState(163);
          expr(5);
          break;
        }

        } 
      }
      setState(169);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 9, _ctx);
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
  enterRule(_localctx, 36, mainParser::RuleNumber);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(171);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == mainParser::ADD_OP

    || _la == mainParser::SUB_OP) {
      setState(170);
      sign();
    }
    setState(173);
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
  enterRule(_localctx, 38, mainParser::RuleSign);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(175);
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
  enterRule(_localctx, 40, mainParser::RuleMul_div_op);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(177);
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
  enterRule(_localctx, 42, mainParser::RuleAdd_sub_op);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(179);
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
  enterRule(_localctx, 44, mainParser::RuleRel_op);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(181);
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
    case 17: return exprSempred(dynamic_cast<ExprContext *>(context), predicateIndex);

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
  "program", "header", "block", "declarations", "decl_list", "decl", "var_list", 
  "var_id", "type_id", "compound_stmt", "stmt", "stmt_list", "assignment_stmt", 
  "repeat_stmt", "if_stmt", "function", "variable", "expr", "number", "sign", 
  "mul_div_op", "add_sub_op", "rel_op"
};

std::vector<std::string> mainParser::_literalNames = {
  "", "'.'", "';'", "':'", "','", "':='", "'('", "')'", "'{'", "'}'", "'PROGRAM'", 
  "'BEGIN'", "'END'", "'VAR'", "'REPEAT'", "'UNTIL'", "'IF'", "'THEN'", 
  "'ELSE'", "", "", "", "'*'", "'/'", "'+'", "'-'", "'='", "'<>'", "'<'", 
  "'<='", "'>'", "'>='"
};

std::vector<std::string> mainParser::_symbolicNames = {
  "", "", "", "", "", "", "", "", "", "", "PROGRAM", "BEGIN", "END", "VAR", 
  "REPEAT", "UNTIL", "IF", "THEN", "ELSE", "IDENTIFIER", "INTEGER", "CHARACTER", 
  "MUL_OP", "DIV_OP", "ADD_OP", "SUB_OP", "EQ_OP", "NE_OP", "LT_OP", "LE_OP", 
  "GT_OP", "GE_OP", "NEWLINE", "WS"
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
    0x3, 0x23, 0xba, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 0x4, 0x9, 
    0x4, 0x4, 0x5, 0x9, 0x5, 0x4, 0x6, 0x9, 0x6, 0x4, 0x7, 0x9, 0x7, 0x4, 
    0x8, 0x9, 0x8, 0x4, 0x9, 0x9, 0x9, 0x4, 0xa, 0x9, 0xa, 0x4, 0xb, 0x9, 
    0xb, 0x4, 0xc, 0x9, 0xc, 0x4, 0xd, 0x9, 0xd, 0x4, 0xe, 0x9, 0xe, 0x4, 
    0xf, 0x9, 0xf, 0x4, 0x10, 0x9, 0x10, 0x4, 0x11, 0x9, 0x11, 0x4, 0x12, 
    0x9, 0x12, 0x4, 0x13, 0x9, 0x13, 0x4, 0x14, 0x9, 0x14, 0x4, 0x15, 0x9, 
    0x15, 0x4, 0x16, 0x9, 0x16, 0x4, 0x17, 0x9, 0x17, 0x4, 0x18, 0x9, 0x18, 
    0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 
    0x3, 0x3, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 
    0x3, 0x5, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x7, 0x6, 0x43, 0xa, 0x6, 0xc, 
    0x6, 0xe, 0x6, 0x46, 0xb, 0x6, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 
    0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x7, 0x8, 0x4f, 0xa, 0x8, 0xc, 0x8, 0xe, 
    0x8, 0x52, 0xb, 0x8, 0x3, 0x9, 0x3, 0x9, 0x3, 0xa, 0x3, 0xa, 0x3, 0xb, 
    0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 
    0x3, 0xc, 0x5, 0xc, 0x61, 0xa, 0xc, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x7, 
    0xd, 0x66, 0xa, 0xd, 0xc, 0xd, 0xe, 0xd, 0x69, 0xb, 0xd, 0x3, 0xe, 0x3, 
    0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 
    0xf, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 
    0x5, 0x10, 0x7a, 0xa, 0x10, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 
    0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x6, 0x11, 0x83, 0xa, 0x11, 0xd, 0x11, 
    0xe, 0x11, 0x84, 0x7, 0x11, 0x87, 0xa, 0x11, 0xc, 0x11, 0xe, 0x11, 0x8a, 
    0xb, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 
    0x12, 0x3, 0x12, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 
    0x3, 0x13, 0x3, 0x13, 0x5, 0x13, 0x9a, 0xa, 0x13, 0x3, 0x13, 0x3, 0x13, 
    0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 
    0x13, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x7, 0x13, 0xa8, 0xa, 0x13, 0xc, 
    0x13, 0xe, 0x13, 0xab, 0xb, 0x13, 0x3, 0x14, 0x5, 0x14, 0xae, 0xa, 0x14, 
    0x3, 0x14, 0x3, 0x14, 0x3, 0x15, 0x3, 0x15, 0x3, 0x16, 0x3, 0x16, 0x3, 
    0x17, 0x3, 0x17, 0x3, 0x18, 0x3, 0x18, 0x3, 0x18, 0x2, 0x3, 0x24, 0x19, 
    0x2, 0x4, 0x6, 0x8, 0xa, 0xc, 0xe, 0x10, 0x12, 0x14, 0x16, 0x18, 0x1a, 
    0x1c, 0x1e, 0x20, 0x22, 0x24, 0x26, 0x28, 0x2a, 0x2c, 0x2e, 0x2, 0x5, 
    0x3, 0x2, 0x1a, 0x1b, 0x3, 0x2, 0x18, 0x19, 0x3, 0x2, 0x1c, 0x21, 0x2, 
    0xb2, 0x2, 0x30, 0x3, 0x2, 0x2, 0x2, 0x4, 0x34, 0x3, 0x2, 0x2, 0x2, 
    0x6, 0x38, 0x3, 0x2, 0x2, 0x2, 0x8, 0x3b, 0x3, 0x2, 0x2, 0x2, 0xa, 0x3f, 
    0x3, 0x2, 0x2, 0x2, 0xc, 0x47, 0x3, 0x2, 0x2, 0x2, 0xe, 0x4b, 0x3, 0x2, 
    0x2, 0x2, 0x10, 0x53, 0x3, 0x2, 0x2, 0x2, 0x12, 0x55, 0x3, 0x2, 0x2, 
    0x2, 0x14, 0x57, 0x3, 0x2, 0x2, 0x2, 0x16, 0x60, 0x3, 0x2, 0x2, 0x2, 
    0x18, 0x62, 0x3, 0x2, 0x2, 0x2, 0x1a, 0x6a, 0x3, 0x2, 0x2, 0x2, 0x1c, 
    0x6e, 0x3, 0x2, 0x2, 0x2, 0x1e, 0x73, 0x3, 0x2, 0x2, 0x2, 0x20, 0x7b, 
    0x3, 0x2, 0x2, 0x2, 0x22, 0x90, 0x3, 0x2, 0x2, 0x2, 0x24, 0x99, 0x3, 
    0x2, 0x2, 0x2, 0x26, 0xad, 0x3, 0x2, 0x2, 0x2, 0x28, 0xb1, 0x3, 0x2, 
    0x2, 0x2, 0x2a, 0xb3, 0x3, 0x2, 0x2, 0x2, 0x2c, 0xb5, 0x3, 0x2, 0x2, 
    0x2, 0x2e, 0xb7, 0x3, 0x2, 0x2, 0x2, 0x30, 0x31, 0x5, 0x4, 0x3, 0x2, 
    0x31, 0x32, 0x5, 0x6, 0x4, 0x2, 0x32, 0x33, 0x7, 0x3, 0x2, 0x2, 0x33, 
    0x3, 0x3, 0x2, 0x2, 0x2, 0x34, 0x35, 0x7, 0xc, 0x2, 0x2, 0x35, 0x36, 
    0x7, 0x15, 0x2, 0x2, 0x36, 0x37, 0x7, 0x4, 0x2, 0x2, 0x37, 0x5, 0x3, 
    0x2, 0x2, 0x2, 0x38, 0x39, 0x5, 0x8, 0x5, 0x2, 0x39, 0x3a, 0x5, 0x14, 
    0xb, 0x2, 0x3a, 0x7, 0x3, 0x2, 0x2, 0x2, 0x3b, 0x3c, 0x7, 0xf, 0x2, 
    0x2, 0x3c, 0x3d, 0x5, 0xa, 0x6, 0x2, 0x3d, 0x3e, 0x7, 0x4, 0x2, 0x2, 
    0x3e, 0x9, 0x3, 0x2, 0x2, 0x2, 0x3f, 0x44, 0x5, 0xc, 0x7, 0x2, 0x40, 
    0x41, 0x7, 0x4, 0x2, 0x2, 0x41, 0x43, 0x5, 0xc, 0x7, 0x2, 0x42, 0x40, 
    0x3, 0x2, 0x2, 0x2, 0x43, 0x46, 0x3, 0x2, 0x2, 0x2, 0x44, 0x42, 0x3, 
    0x2, 0x2, 0x2, 0x44, 0x45, 0x3, 0x2, 0x2, 0x2, 0x45, 0xb, 0x3, 0x2, 
    0x2, 0x2, 0x46, 0x44, 0x3, 0x2, 0x2, 0x2, 0x47, 0x48, 0x5, 0xe, 0x8, 
    0x2, 0x48, 0x49, 0x7, 0x5, 0x2, 0x2, 0x49, 0x4a, 0x5, 0x12, 0xa, 0x2, 
    0x4a, 0xd, 0x3, 0x2, 0x2, 0x2, 0x4b, 0x50, 0x5, 0x10, 0x9, 0x2, 0x4c, 
    0x4d, 0x7, 0x6, 0x2, 0x2, 0x4d, 0x4f, 0x5, 0x10, 0x9, 0x2, 0x4e, 0x4c, 
    0x3, 0x2, 0x2, 0x2, 0x4f, 0x52, 0x3, 0x2, 0x2, 0x2, 0x50, 0x4e, 0x3, 
    0x2, 0x2, 0x2, 0x50, 0x51, 0x3, 0x2, 0x2, 0x2, 0x51, 0xf, 0x3, 0x2, 
    0x2, 0x2, 0x52, 0x50, 0x3, 0x2, 0x2, 0x2, 0x53, 0x54, 0x7, 0x15, 0x2, 
    0x2, 0x54, 0x11, 0x3, 0x2, 0x2, 0x2, 0x55, 0x56, 0x7, 0x15, 0x2, 0x2, 
    0x56, 0x13, 0x3, 0x2, 0x2, 0x2, 0x57, 0x58, 0x7, 0xd, 0x2, 0x2, 0x58, 
    0x59, 0x5, 0x18, 0xd, 0x2, 0x59, 0x5a, 0x7, 0xe, 0x2, 0x2, 0x5a, 0x15, 
    0x3, 0x2, 0x2, 0x2, 0x5b, 0x61, 0x5, 0x14, 0xb, 0x2, 0x5c, 0x61, 0x5, 
    0x1a, 0xe, 0x2, 0x5d, 0x61, 0x5, 0x1c, 0xf, 0x2, 0x5e, 0x61, 0x5, 0x1e, 
    0x10, 0x2, 0x5f, 0x61, 0x3, 0x2, 0x2, 0x2, 0x60, 0x5b, 0x3, 0x2, 0x2, 
    0x2, 0x60, 0x5c, 0x3, 0x2, 0x2, 0x2, 0x60, 0x5d, 0x3, 0x2, 0x2, 0x2, 
    0x60, 0x5e, 0x3, 0x2, 0x2, 0x2, 0x60, 0x5f, 0x3, 0x2, 0x2, 0x2, 0x61, 
    0x17, 0x3, 0x2, 0x2, 0x2, 0x62, 0x67, 0x5, 0x16, 0xc, 0x2, 0x63, 0x64, 
    0x7, 0x4, 0x2, 0x2, 0x64, 0x66, 0x5, 0x16, 0xc, 0x2, 0x65, 0x63, 0x3, 
    0x2, 0x2, 0x2, 0x66, 0x69, 0x3, 0x2, 0x2, 0x2, 0x67, 0x65, 0x3, 0x2, 
    0x2, 0x2, 0x67, 0x68, 0x3, 0x2, 0x2, 0x2, 0x68, 0x19, 0x3, 0x2, 0x2, 
    0x2, 0x69, 0x67, 0x3, 0x2, 0x2, 0x2, 0x6a, 0x6b, 0x5, 0x22, 0x12, 0x2, 
    0x6b, 0x6c, 0x7, 0x7, 0x2, 0x2, 0x6c, 0x6d, 0x5, 0x24, 0x13, 0x2, 0x6d, 
    0x1b, 0x3, 0x2, 0x2, 0x2, 0x6e, 0x6f, 0x7, 0x10, 0x2, 0x2, 0x6f, 0x70, 
    0x5, 0x18, 0xd, 0x2, 0x70, 0x71, 0x7, 0x11, 0x2, 0x2, 0x71, 0x72, 0x5, 
    0x24, 0x13, 0x2, 0x72, 0x1d, 0x3, 0x2, 0x2, 0x2, 0x73, 0x74, 0x7, 0x12, 
    0x2, 0x2, 0x74, 0x75, 0x5, 0x24, 0x13, 0x2, 0x75, 0x76, 0x7, 0x13, 0x2, 
    0x2, 0x76, 0x79, 0x5, 0x16, 0xc, 0x2, 0x77, 0x78, 0x7, 0x14, 0x2, 0x2, 
    0x78, 0x7a, 0x5, 0x16, 0xc, 0x2, 0x79, 0x77, 0x3, 0x2, 0x2, 0x2, 0x79, 
    0x7a, 0x3, 0x2, 0x2, 0x2, 0x7a, 0x1f, 0x3, 0x2, 0x2, 0x2, 0x7b, 0x7c, 
    0x5, 0x22, 0x12, 0x2, 0x7c, 0x7d, 0x7, 0x15, 0x2, 0x2, 0x7d, 0x88, 0x7, 
    0x8, 0x2, 0x2, 0x7e, 0x7f, 0x5, 0x22, 0x12, 0x2, 0x7f, 0x80, 0x7, 0x15, 
    0x2, 0x2, 0x80, 0x82, 0x3, 0x2, 0x2, 0x2, 0x81, 0x83, 0x7, 0x6, 0x2, 
    0x2, 0x82, 0x81, 0x3, 0x2, 0x2, 0x2, 0x83, 0x84, 0x3, 0x2, 0x2, 0x2, 
    0x84, 0x82, 0x3, 0x2, 0x2, 0x2, 0x84, 0x85, 0x3, 0x2, 0x2, 0x2, 0x85, 
    0x87, 0x3, 0x2, 0x2, 0x2, 0x86, 0x7e, 0x3, 0x2, 0x2, 0x2, 0x87, 0x8a, 
    0x3, 0x2, 0x2, 0x2, 0x88, 0x86, 0x3, 0x2, 0x2, 0x2, 0x88, 0x89, 0x3, 
    0x2, 0x2, 0x2, 0x89, 0x8b, 0x3, 0x2, 0x2, 0x2, 0x8a, 0x88, 0x3, 0x2, 
    0x2, 0x2, 0x8b, 0x8c, 0x7, 0x9, 0x2, 0x2, 0x8c, 0x8d, 0x7, 0xa, 0x2, 
    0x2, 0x8d, 0x8e, 0x5, 0x16, 0xc, 0x2, 0x8e, 0x8f, 0x7, 0xb, 0x2, 0x2, 
    0x8f, 0x21, 0x3, 0x2, 0x2, 0x2, 0x90, 0x91, 0x7, 0x15, 0x2, 0x2, 0x91, 
    0x23, 0x3, 0x2, 0x2, 0x2, 0x92, 0x93, 0x8, 0x13, 0x1, 0x2, 0x93, 0x9a, 
    0x5, 0x26, 0x14, 0x2, 0x94, 0x9a, 0x7, 0x15, 0x2, 0x2, 0x95, 0x96, 0x7, 
    0x8, 0x2, 0x2, 0x96, 0x97, 0x5, 0x24, 0x13, 0x2, 0x97, 0x98, 0x7, 0x9, 
    0x2, 0x2, 0x98, 0x9a, 0x3, 0x2, 0x2, 0x2, 0x99, 0x92, 0x3, 0x2, 0x2, 
    0x2, 0x99, 0x94, 0x3, 0x2, 0x2, 0x2, 0x99, 0x95, 0x3, 0x2, 0x2, 0x2, 
    0x9a, 0xa9, 0x3, 0x2, 0x2, 0x2, 0x9b, 0x9c, 0xc, 0x8, 0x2, 0x2, 0x9c, 
    0x9d, 0x5, 0x2a, 0x16, 0x2, 0x9d, 0x9e, 0x5, 0x24, 0x13, 0x9, 0x9e, 
    0xa8, 0x3, 0x2, 0x2, 0x2, 0x9f, 0xa0, 0xc, 0x7, 0x2, 0x2, 0xa0, 0xa1, 
    0x5, 0x2c, 0x17, 0x2, 0xa1, 0xa2, 0x5, 0x24, 0x13, 0x8, 0xa2, 0xa8, 
    0x3, 0x2, 0x2, 0x2, 0xa3, 0xa4, 0xc, 0x6, 0x2, 0x2, 0xa4, 0xa5, 0x5, 
    0x2e, 0x18, 0x2, 0xa5, 0xa6, 0x5, 0x24, 0x13, 0x7, 0xa6, 0xa8, 0x3, 
    0x2, 0x2, 0x2, 0xa7, 0x9b, 0x3, 0x2, 0x2, 0x2, 0xa7, 0x9f, 0x3, 0x2, 
    0x2, 0x2, 0xa7, 0xa3, 0x3, 0x2, 0x2, 0x2, 0xa8, 0xab, 0x3, 0x2, 0x2, 
    0x2, 0xa9, 0xa7, 0x3, 0x2, 0x2, 0x2, 0xa9, 0xaa, 0x3, 0x2, 0x2, 0x2, 
    0xaa, 0x25, 0x3, 0x2, 0x2, 0x2, 0xab, 0xa9, 0x3, 0x2, 0x2, 0x2, 0xac, 
    0xae, 0x5, 0x28, 0x15, 0x2, 0xad, 0xac, 0x3, 0x2, 0x2, 0x2, 0xad, 0xae, 
    0x3, 0x2, 0x2, 0x2, 0xae, 0xaf, 0x3, 0x2, 0x2, 0x2, 0xaf, 0xb0, 0x7, 
    0x16, 0x2, 0x2, 0xb0, 0x27, 0x3, 0x2, 0x2, 0x2, 0xb1, 0xb2, 0x9, 0x2, 
    0x2, 0x2, 0xb2, 0x29, 0x3, 0x2, 0x2, 0x2, 0xb3, 0xb4, 0x9, 0x3, 0x2, 
    0x2, 0xb4, 0x2b, 0x3, 0x2, 0x2, 0x2, 0xb5, 0xb6, 0x9, 0x2, 0x2, 0x2, 
    0xb6, 0x2d, 0x3, 0x2, 0x2, 0x2, 0xb7, 0xb8, 0x9, 0x4, 0x2, 0x2, 0xb8, 
    0x2f, 0x3, 0x2, 0x2, 0x2, 0xd, 0x44, 0x50, 0x60, 0x67, 0x79, 0x84, 0x88, 
    0x99, 0xa7, 0xa9, 0xad, 
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
