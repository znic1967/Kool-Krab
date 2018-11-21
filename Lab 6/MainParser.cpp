
#include "wci/intermediate/TypeSpec.h"
using namespace wci::intermediate;


// Generated from Main.g4 by ANTLR 4.7


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

MainParser::MainBlockContext* MainParser::ProgramContext::mainBlock() {
  return getRuleContext<MainParser::MainBlockContext>(0);
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
    setState(42);
    header();
    setState(43);
    mainBlock();
    setState(44);
    match(MainParser::T__0);
   
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

tree::TerminalNode* MainParser::HeaderContext::PROGRAM() {
  return getToken(MainParser::PROGRAM, 0);
}

tree::TerminalNode* MainParser::HeaderContext::IDENTIFIER() {
  return getToken(MainParser::IDENTIFIER, 0);
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

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(46);
    match(MainParser::PROGRAM);
    setState(47);
    match(MainParser::IDENTIFIER);
    setState(48);
    match(MainParser::T__1);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- MainBlockContext ------------------------------------------------------------------

MainParser::MainBlockContext::MainBlockContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

MainParser::BlockContext* MainParser::MainBlockContext::block() {
  return getRuleContext<MainParser::BlockContext>(0);
}


size_t MainParser::MainBlockContext::getRuleIndex() const {
  return MainParser::RuleMainBlock;
}

antlrcpp::Any MainParser::MainBlockContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MainVisitor*>(visitor))
    return parserVisitor->visitMainBlock(this);
  else
    return visitor->visitChildren(this);
}

MainParser::MainBlockContext* MainParser::mainBlock() {
  MainBlockContext *_localctx = _tracker.createInstance<MainBlockContext>(_ctx, getState());
  enterRule(_localctx, 4, MainParser::RuleMainBlock);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(50);
    block();
   
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

MainParser::DeclarationsContext* MainParser::BlockContext::declarations() {
  return getRuleContext<MainParser::DeclarationsContext>(0);
}

MainParser::CompoundStmtContext* MainParser::BlockContext::compoundStmt() {
  return getRuleContext<MainParser::CompoundStmtContext>(0);
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
  enterRule(_localctx, 6, MainParser::RuleBlock);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(52);
    declarations();
    setState(53);
    compoundStmt();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DeclarationsContext ------------------------------------------------------------------

MainParser::DeclarationsContext::DeclarationsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* MainParser::DeclarationsContext::VAR() {
  return getToken(MainParser::VAR, 0);
}

MainParser::DeclListContext* MainParser::DeclarationsContext::declList() {
  return getRuleContext<MainParser::DeclListContext>(0);
}


size_t MainParser::DeclarationsContext::getRuleIndex() const {
  return MainParser::RuleDeclarations;
}

antlrcpp::Any MainParser::DeclarationsContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MainVisitor*>(visitor))
    return parserVisitor->visitDeclarations(this);
  else
    return visitor->visitChildren(this);
}

MainParser::DeclarationsContext* MainParser::declarations() {
  DeclarationsContext *_localctx = _tracker.createInstance<DeclarationsContext>(_ctx, getState());
  enterRule(_localctx, 8, MainParser::RuleDeclarations);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(55);
    match(MainParser::VAR);
    setState(56);
    declList();
    setState(57);
    match(MainParser::T__1);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DeclListContext ------------------------------------------------------------------

MainParser::DeclListContext::DeclListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<MainParser::DeclContext *> MainParser::DeclListContext::decl() {
  return getRuleContexts<MainParser::DeclContext>();
}

MainParser::DeclContext* MainParser::DeclListContext::decl(size_t i) {
  return getRuleContext<MainParser::DeclContext>(i);
}


size_t MainParser::DeclListContext::getRuleIndex() const {
  return MainParser::RuleDeclList;
}

antlrcpp::Any MainParser::DeclListContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MainVisitor*>(visitor))
    return parserVisitor->visitDeclList(this);
  else
    return visitor->visitChildren(this);
}

MainParser::DeclListContext* MainParser::declList() {
  DeclListContext *_localctx = _tracker.createInstance<DeclListContext>(_ctx, getState());
  enterRule(_localctx, 10, MainParser::RuleDeclList);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(59);
    decl();
    setState(64);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 0, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(60);
        match(MainParser::T__1);
        setState(61);
        decl(); 
      }
      setState(66);
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

MainParser::DeclContext::DeclContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

MainParser::VarListContext* MainParser::DeclContext::varList() {
  return getRuleContext<MainParser::VarListContext>(0);
}

MainParser::TypeIdContext* MainParser::DeclContext::typeId() {
  return getRuleContext<MainParser::TypeIdContext>(0);
}


size_t MainParser::DeclContext::getRuleIndex() const {
  return MainParser::RuleDecl;
}

antlrcpp::Any MainParser::DeclContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MainVisitor*>(visitor))
    return parserVisitor->visitDecl(this);
  else
    return visitor->visitChildren(this);
}

MainParser::DeclContext* MainParser::decl() {
  DeclContext *_localctx = _tracker.createInstance<DeclContext>(_ctx, getState());
  enterRule(_localctx, 12, MainParser::RuleDecl);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(67);
    varList();
    setState(68);
    match(MainParser::T__2);
    setState(69);
    typeId();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- VarListContext ------------------------------------------------------------------

MainParser::VarListContext::VarListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<MainParser::VarIdContext *> MainParser::VarListContext::varId() {
  return getRuleContexts<MainParser::VarIdContext>();
}

MainParser::VarIdContext* MainParser::VarListContext::varId(size_t i) {
  return getRuleContext<MainParser::VarIdContext>(i);
}


size_t MainParser::VarListContext::getRuleIndex() const {
  return MainParser::RuleVarList;
}

antlrcpp::Any MainParser::VarListContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MainVisitor*>(visitor))
    return parserVisitor->visitVarList(this);
  else
    return visitor->visitChildren(this);
}

MainParser::VarListContext* MainParser::varList() {
  VarListContext *_localctx = _tracker.createInstance<VarListContext>(_ctx, getState());
  enterRule(_localctx, 14, MainParser::RuleVarList);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(71);
    varId();
    setState(76);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == MainParser::T__3) {
      setState(72);
      match(MainParser::T__3);
      setState(73);
      varId();
      setState(78);
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

//----------------- VarIdContext ------------------------------------------------------------------

MainParser::VarIdContext::VarIdContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* MainParser::VarIdContext::IDENTIFIER() {
  return getToken(MainParser::IDENTIFIER, 0);
}


size_t MainParser::VarIdContext::getRuleIndex() const {
  return MainParser::RuleVarId;
}

antlrcpp::Any MainParser::VarIdContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MainVisitor*>(visitor))
    return parserVisitor->visitVarId(this);
  else
    return visitor->visitChildren(this);
}

MainParser::VarIdContext* MainParser::varId() {
  VarIdContext *_localctx = _tracker.createInstance<VarIdContext>(_ctx, getState());
  enterRule(_localctx, 16, MainParser::RuleVarId);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(79);
    match(MainParser::IDENTIFIER);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TypeIdContext ------------------------------------------------------------------

MainParser::TypeIdContext::TypeIdContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* MainParser::TypeIdContext::IDENTIFIER() {
  return getToken(MainParser::IDENTIFIER, 0);
}


size_t MainParser::TypeIdContext::getRuleIndex() const {
  return MainParser::RuleTypeId;
}

antlrcpp::Any MainParser::TypeIdContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MainVisitor*>(visitor))
    return parserVisitor->visitTypeId(this);
  else
    return visitor->visitChildren(this);
}

MainParser::TypeIdContext* MainParser::typeId() {
  TypeIdContext *_localctx = _tracker.createInstance<TypeIdContext>(_ctx, getState());
  enterRule(_localctx, 18, MainParser::RuleTypeId);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(81);
    match(MainParser::IDENTIFIER);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- CompoundStmtContext ------------------------------------------------------------------

MainParser::CompoundStmtContext::CompoundStmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* MainParser::CompoundStmtContext::BEGIN() {
  return getToken(MainParser::BEGIN, 0);
}

MainParser::StmtListContext* MainParser::CompoundStmtContext::stmtList() {
  return getRuleContext<MainParser::StmtListContext>(0);
}

tree::TerminalNode* MainParser::CompoundStmtContext::END() {
  return getToken(MainParser::END, 0);
}


size_t MainParser::CompoundStmtContext::getRuleIndex() const {
  return MainParser::RuleCompoundStmt;
}

antlrcpp::Any MainParser::CompoundStmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MainVisitor*>(visitor))
    return parserVisitor->visitCompoundStmt(this);
  else
    return visitor->visitChildren(this);
}

MainParser::CompoundStmtContext* MainParser::compoundStmt() {
  CompoundStmtContext *_localctx = _tracker.createInstance<CompoundStmtContext>(_ctx, getState());
  enterRule(_localctx, 20, MainParser::RuleCompoundStmt);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(83);
    match(MainParser::BEGIN);
    setState(84);
    stmtList();
    setState(85);
    match(MainParser::END);
   
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

MainParser::CompoundStmtContext* MainParser::StmtContext::compoundStmt() {
  return getRuleContext<MainParser::CompoundStmtContext>(0);
}

MainParser::AssignmentStmtContext* MainParser::StmtContext::assignmentStmt() {
  return getRuleContext<MainParser::AssignmentStmtContext>(0);
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
  enterRule(_localctx, 22, MainParser::RuleStmt);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(90);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case MainParser::BEGIN: {
        enterOuterAlt(_localctx, 1);
        setState(87);
        compoundStmt();
        break;
      }

      case MainParser::IDENTIFIER: {
        enterOuterAlt(_localctx, 2);
        setState(88);
        assignmentStmt();
        break;
      }

      case MainParser::T__1:
      case MainParser::END: {
        enterOuterAlt(_localctx, 3);

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

//----------------- StmtListContext ------------------------------------------------------------------

MainParser::StmtListContext::StmtListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<MainParser::StmtContext *> MainParser::StmtListContext::stmt() {
  return getRuleContexts<MainParser::StmtContext>();
}

MainParser::StmtContext* MainParser::StmtListContext::stmt(size_t i) {
  return getRuleContext<MainParser::StmtContext>(i);
}


size_t MainParser::StmtListContext::getRuleIndex() const {
  return MainParser::RuleStmtList;
}

antlrcpp::Any MainParser::StmtListContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MainVisitor*>(visitor))
    return parserVisitor->visitStmtList(this);
  else
    return visitor->visitChildren(this);
}

MainParser::StmtListContext* MainParser::stmtList() {
  StmtListContext *_localctx = _tracker.createInstance<StmtListContext>(_ctx, getState());
  enterRule(_localctx, 24, MainParser::RuleStmtList);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(92);
    stmt();
    setState(97);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == MainParser::T__1) {
      setState(93);
      match(MainParser::T__1);
      setState(94);
      stmt();
      setState(99);
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

//----------------- AssignmentStmtContext ------------------------------------------------------------------

MainParser::AssignmentStmtContext::AssignmentStmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

MainParser::VariableContext* MainParser::AssignmentStmtContext::variable() {
  return getRuleContext<MainParser::VariableContext>(0);
}

MainParser::ExprContext* MainParser::AssignmentStmtContext::expr() {
  return getRuleContext<MainParser::ExprContext>(0);
}


size_t MainParser::AssignmentStmtContext::getRuleIndex() const {
  return MainParser::RuleAssignmentStmt;
}

antlrcpp::Any MainParser::AssignmentStmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MainVisitor*>(visitor))
    return parserVisitor->visitAssignmentStmt(this);
  else
    return visitor->visitChildren(this);
}

MainParser::AssignmentStmtContext* MainParser::assignmentStmt() {
  AssignmentStmtContext *_localctx = _tracker.createInstance<AssignmentStmtContext>(_ctx, getState());
  enterRule(_localctx, 26, MainParser::RuleAssignmentStmt);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(100);
    variable();
    setState(101);
    match(MainParser::T__4);
    setState(102);
    expr(0);
   
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
  enterRule(_localctx, 28, MainParser::RuleVariable);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(104);
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

MainParser::AddSubOpContext* MainParser::AddSubExprContext::addSubOp() {
  return getRuleContext<MainParser::AddSubOpContext>(0);
}

MainParser::AddSubExprContext::AddSubExprContext(ExprContext *ctx) { copyFrom(ctx); }

antlrcpp::Any MainParser::AddSubExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MainVisitor*>(visitor))
    return parserVisitor->visitAddSubExpr(this);
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

MainParser::MulDivOpContext* MainParser::MulDivExprContext::mulDivOp() {
  return getRuleContext<MainParser::MulDivOpContext>(0);
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
//----------------- SignedNumberExprContext ------------------------------------------------------------------

MainParser::SignedNumberContext* MainParser::SignedNumberExprContext::signedNumber() {
  return getRuleContext<MainParser::SignedNumberContext>(0);
}

MainParser::SignedNumberExprContext::SignedNumberExprContext(ExprContext *ctx) { copyFrom(ctx); }

antlrcpp::Any MainParser::SignedNumberExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MainVisitor*>(visitor))
    return parserVisitor->visitSignedNumberExpr(this);
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
  size_t startState = 30;
  enterRecursionRule(_localctx, 30, MainParser::RuleExpr, precedence);

    

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(114);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case MainParser::INTEGER:
      case MainParser::FLOAT: {
        _localctx = _tracker.createInstance<UnsignedNumberExprContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;

        setState(107);
        number();
        break;
      }

      case MainParser::ADD_OP:
      case MainParser::SUB_OP: {
        _localctx = _tracker.createInstance<SignedNumberExprContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(108);
        signedNumber();
        break;
      }

      case MainParser::IDENTIFIER: {
        _localctx = _tracker.createInstance<VariableExprContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(109);
        variable();
        break;
      }

      case MainParser::T__5: {
        _localctx = _tracker.createInstance<ParenExprContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(110);
        match(MainParser::T__5);
        setState(111);
        expr(0);
        setState(112);
        match(MainParser::T__6);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    _ctx->stop = _input->LT(-1);
    setState(126);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 6, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(124);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 5, _ctx)) {
        case 1: {
          auto newContext = _tracker.createInstance<MulDivExprContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(116);

          if (!(precpred(_ctx, 6))) throw FailedPredicateException(this, "precpred(_ctx, 6)");
          setState(117);
          mulDivOp();
          setState(118);
          expr(7);
          break;
        }

        case 2: {
          auto newContext = _tracker.createInstance<AddSubExprContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(120);

          if (!(precpred(_ctx, 5))) throw FailedPredicateException(this, "precpred(_ctx, 5)");
          setState(121);
          addSubOp();
          setState(122);
          expr(6);
          break;
        }

        } 
      }
      setState(128);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 6, _ctx);
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
  enterRule(_localctx, 32, MainParser::RuleMulDivOp);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(129);
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
  enterRule(_localctx, 34, MainParser::RuleAddSubOp);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(131);
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
  enterRule(_localctx, 36, MainParser::RuleSignedNumber);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(133);
    sign();
    setState(134);
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
  enterRule(_localctx, 38, MainParser::RuleSign);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(136);
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

//----------------- FloatConstContext ------------------------------------------------------------------

tree::TerminalNode* MainParser::FloatConstContext::FLOAT() {
  return getToken(MainParser::FLOAT, 0);
}

MainParser::FloatConstContext::FloatConstContext(NumberContext *ctx) { copyFrom(ctx); }

antlrcpp::Any MainParser::FloatConstContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MainVisitor*>(visitor))
    return parserVisitor->visitFloatConst(this);
  else
    return visitor->visitChildren(this);
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
MainParser::NumberContext* MainParser::number() {
  NumberContext *_localctx = _tracker.createInstance<NumberContext>(_ctx, getState());
  enterRule(_localctx, 40, MainParser::RuleNumber);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(140);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case MainParser::INTEGER: {
        _localctx = dynamic_cast<NumberContext *>(_tracker.createInstance<MainParser::IntegerConstContext>(_localctx));
        enterOuterAlt(_localctx, 1);
        setState(138);
        match(MainParser::INTEGER);
        break;
      }

      case MainParser::FLOAT: {
        _localctx = dynamic_cast<NumberContext *>(_tracker.createInstance<MainParser::FloatConstContext>(_localctx));
        enterOuterAlt(_localctx, 2);
        setState(139);
        match(MainParser::FLOAT);
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

bool MainParser::sempred(RuleContext *context, size_t ruleIndex, size_t predicateIndex) {
  switch (ruleIndex) {
    case 15: return exprSempred(dynamic_cast<ExprContext *>(context), predicateIndex);

  default:
    break;
  }
  return true;
}

bool MainParser::exprSempred(ExprContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 0: return precpred(_ctx, 6);
    case 1: return precpred(_ctx, 5);

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
  "program", "header", "mainBlock", "block", "declarations", "declList", 
  "decl", "varList", "varId", "typeId", "compoundStmt", "stmt", "stmtList", 
  "assignmentStmt", "variable", "expr", "mulDivOp", "addSubOp", "signedNumber", 
  "sign", "number"
};

std::vector<std::string> MainParser::_literalNames = {
  "", "'.'", "';'", "':'", "','", "':='", "'('", "')'", "'PROGRAM'", "'VAR'", 
  "'BEGIN'", "'END'", "", "", "", "'*'", "'/'", "'+'", "'-'"
};

std::vector<std::string> MainParser::_symbolicNames = {
  "", "", "", "", "", "", "", "", "PROGRAM", "VAR", "BEGIN", "END", "IDENTIFIER", 
  "INTEGER", "FLOAT", "MUL_OP", "DIV_OP", "ADD_OP", "SUB_OP", "NEWLINE", 
  "WS"
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
    0x3, 0x16, 0x91, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 0x4, 0x9, 
    0x4, 0x4, 0x5, 0x9, 0x5, 0x4, 0x6, 0x9, 0x6, 0x4, 0x7, 0x9, 0x7, 0x4, 
    0x8, 0x9, 0x8, 0x4, 0x9, 0x9, 0x9, 0x4, 0xa, 0x9, 0xa, 0x4, 0xb, 0x9, 
    0xb, 0x4, 0xc, 0x9, 0xc, 0x4, 0xd, 0x9, 0xd, 0x4, 0xe, 0x9, 0xe, 0x4, 
    0xf, 0x9, 0xf, 0x4, 0x10, 0x9, 0x10, 0x4, 0x11, 0x9, 0x11, 0x4, 0x12, 
    0x9, 0x12, 0x4, 0x13, 0x9, 0x13, 0x4, 0x14, 0x9, 0x14, 0x4, 0x15, 0x9, 
    0x15, 0x4, 0x16, 0x9, 0x16, 0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 
    0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x4, 0x3, 0x4, 0x3, 0x5, 
    0x3, 0x5, 0x3, 0x5, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x7, 
    0x3, 0x7, 0x3, 0x7, 0x7, 0x7, 0x41, 0xa, 0x7, 0xc, 0x7, 0xe, 0x7, 0x44, 
    0xb, 0x7, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x9, 0x3, 0x9, 
    0x3, 0x9, 0x7, 0x9, 0x4d, 0xa, 0x9, 0xc, 0x9, 0xe, 0x9, 0x50, 0xb, 0x9, 
    0x3, 0xa, 0x3, 0xa, 0x3, 0xb, 0x3, 0xb, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 
    0x3, 0xc, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x5, 0xd, 0x5d, 0xa, 0xd, 0x3, 
    0xe, 0x3, 0xe, 0x3, 0xe, 0x7, 0xe, 0x62, 0xa, 0xe, 0xc, 0xe, 0xe, 0xe, 
    0x65, 0xb, 0xe, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0x10, 0x3, 
    0x10, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 
    0x3, 0x11, 0x3, 0x11, 0x5, 0x11, 0x75, 0xa, 0x11, 0x3, 0x11, 0x3, 0x11, 
    0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x7, 
    0x11, 0x7f, 0xa, 0x11, 0xc, 0x11, 0xe, 0x11, 0x82, 0xb, 0x11, 0x3, 0x12, 
    0x3, 0x12, 0x3, 0x13, 0x3, 0x13, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 
    0x15, 0x3, 0x15, 0x3, 0x16, 0x3, 0x16, 0x5, 0x16, 0x8f, 0xa, 0x16, 0x3, 
    0x16, 0x2, 0x3, 0x20, 0x17, 0x2, 0x4, 0x6, 0x8, 0xa, 0xc, 0xe, 0x10, 
    0x12, 0x14, 0x16, 0x18, 0x1a, 0x1c, 0x1e, 0x20, 0x22, 0x24, 0x26, 0x28, 
    0x2a, 0x2, 0x4, 0x3, 0x2, 0x11, 0x12, 0x3, 0x2, 0x13, 0x14, 0x2, 0x86, 
    0x2, 0x2c, 0x3, 0x2, 0x2, 0x2, 0x4, 0x30, 0x3, 0x2, 0x2, 0x2, 0x6, 0x34, 
    0x3, 0x2, 0x2, 0x2, 0x8, 0x36, 0x3, 0x2, 0x2, 0x2, 0xa, 0x39, 0x3, 0x2, 
    0x2, 0x2, 0xc, 0x3d, 0x3, 0x2, 0x2, 0x2, 0xe, 0x45, 0x3, 0x2, 0x2, 0x2, 
    0x10, 0x49, 0x3, 0x2, 0x2, 0x2, 0x12, 0x51, 0x3, 0x2, 0x2, 0x2, 0x14, 
    0x53, 0x3, 0x2, 0x2, 0x2, 0x16, 0x55, 0x3, 0x2, 0x2, 0x2, 0x18, 0x5c, 
    0x3, 0x2, 0x2, 0x2, 0x1a, 0x5e, 0x3, 0x2, 0x2, 0x2, 0x1c, 0x66, 0x3, 
    0x2, 0x2, 0x2, 0x1e, 0x6a, 0x3, 0x2, 0x2, 0x2, 0x20, 0x74, 0x3, 0x2, 
    0x2, 0x2, 0x22, 0x83, 0x3, 0x2, 0x2, 0x2, 0x24, 0x85, 0x3, 0x2, 0x2, 
    0x2, 0x26, 0x87, 0x3, 0x2, 0x2, 0x2, 0x28, 0x8a, 0x3, 0x2, 0x2, 0x2, 
    0x2a, 0x8e, 0x3, 0x2, 0x2, 0x2, 0x2c, 0x2d, 0x5, 0x4, 0x3, 0x2, 0x2d, 
    0x2e, 0x5, 0x6, 0x4, 0x2, 0x2e, 0x2f, 0x7, 0x3, 0x2, 0x2, 0x2f, 0x3, 
    0x3, 0x2, 0x2, 0x2, 0x30, 0x31, 0x7, 0xa, 0x2, 0x2, 0x31, 0x32, 0x7, 
    0xe, 0x2, 0x2, 0x32, 0x33, 0x7, 0x4, 0x2, 0x2, 0x33, 0x5, 0x3, 0x2, 
    0x2, 0x2, 0x34, 0x35, 0x5, 0x8, 0x5, 0x2, 0x35, 0x7, 0x3, 0x2, 0x2, 
    0x2, 0x36, 0x37, 0x5, 0xa, 0x6, 0x2, 0x37, 0x38, 0x5, 0x16, 0xc, 0x2, 
    0x38, 0x9, 0x3, 0x2, 0x2, 0x2, 0x39, 0x3a, 0x7, 0xb, 0x2, 0x2, 0x3a, 
    0x3b, 0x5, 0xc, 0x7, 0x2, 0x3b, 0x3c, 0x7, 0x4, 0x2, 0x2, 0x3c, 0xb, 
    0x3, 0x2, 0x2, 0x2, 0x3d, 0x42, 0x5, 0xe, 0x8, 0x2, 0x3e, 0x3f, 0x7, 
    0x4, 0x2, 0x2, 0x3f, 0x41, 0x5, 0xe, 0x8, 0x2, 0x40, 0x3e, 0x3, 0x2, 
    0x2, 0x2, 0x41, 0x44, 0x3, 0x2, 0x2, 0x2, 0x42, 0x40, 0x3, 0x2, 0x2, 
    0x2, 0x42, 0x43, 0x3, 0x2, 0x2, 0x2, 0x43, 0xd, 0x3, 0x2, 0x2, 0x2, 
    0x44, 0x42, 0x3, 0x2, 0x2, 0x2, 0x45, 0x46, 0x5, 0x10, 0x9, 0x2, 0x46, 
    0x47, 0x7, 0x5, 0x2, 0x2, 0x47, 0x48, 0x5, 0x14, 0xb, 0x2, 0x48, 0xf, 
    0x3, 0x2, 0x2, 0x2, 0x49, 0x4e, 0x5, 0x12, 0xa, 0x2, 0x4a, 0x4b, 0x7, 
    0x6, 0x2, 0x2, 0x4b, 0x4d, 0x5, 0x12, 0xa, 0x2, 0x4c, 0x4a, 0x3, 0x2, 
    0x2, 0x2, 0x4d, 0x50, 0x3, 0x2, 0x2, 0x2, 0x4e, 0x4c, 0x3, 0x2, 0x2, 
    0x2, 0x4e, 0x4f, 0x3, 0x2, 0x2, 0x2, 0x4f, 0x11, 0x3, 0x2, 0x2, 0x2, 
    0x50, 0x4e, 0x3, 0x2, 0x2, 0x2, 0x51, 0x52, 0x7, 0xe, 0x2, 0x2, 0x52, 
    0x13, 0x3, 0x2, 0x2, 0x2, 0x53, 0x54, 0x7, 0xe, 0x2, 0x2, 0x54, 0x15, 
    0x3, 0x2, 0x2, 0x2, 0x55, 0x56, 0x7, 0xc, 0x2, 0x2, 0x56, 0x57, 0x5, 
    0x1a, 0xe, 0x2, 0x57, 0x58, 0x7, 0xd, 0x2, 0x2, 0x58, 0x17, 0x3, 0x2, 
    0x2, 0x2, 0x59, 0x5d, 0x5, 0x16, 0xc, 0x2, 0x5a, 0x5d, 0x5, 0x1c, 0xf, 
    0x2, 0x5b, 0x5d, 0x3, 0x2, 0x2, 0x2, 0x5c, 0x59, 0x3, 0x2, 0x2, 0x2, 
    0x5c, 0x5a, 0x3, 0x2, 0x2, 0x2, 0x5c, 0x5b, 0x3, 0x2, 0x2, 0x2, 0x5d, 
    0x19, 0x3, 0x2, 0x2, 0x2, 0x5e, 0x63, 0x5, 0x18, 0xd, 0x2, 0x5f, 0x60, 
    0x7, 0x4, 0x2, 0x2, 0x60, 0x62, 0x5, 0x18, 0xd, 0x2, 0x61, 0x5f, 0x3, 
    0x2, 0x2, 0x2, 0x62, 0x65, 0x3, 0x2, 0x2, 0x2, 0x63, 0x61, 0x3, 0x2, 
    0x2, 0x2, 0x63, 0x64, 0x3, 0x2, 0x2, 0x2, 0x64, 0x1b, 0x3, 0x2, 0x2, 
    0x2, 0x65, 0x63, 0x3, 0x2, 0x2, 0x2, 0x66, 0x67, 0x5, 0x1e, 0x10, 0x2, 
    0x67, 0x68, 0x7, 0x7, 0x2, 0x2, 0x68, 0x69, 0x5, 0x20, 0x11, 0x2, 0x69, 
    0x1d, 0x3, 0x2, 0x2, 0x2, 0x6a, 0x6b, 0x7, 0xe, 0x2, 0x2, 0x6b, 0x1f, 
    0x3, 0x2, 0x2, 0x2, 0x6c, 0x6d, 0x8, 0x11, 0x1, 0x2, 0x6d, 0x75, 0x5, 
    0x2a, 0x16, 0x2, 0x6e, 0x75, 0x5, 0x26, 0x14, 0x2, 0x6f, 0x75, 0x5, 
    0x1e, 0x10, 0x2, 0x70, 0x71, 0x7, 0x8, 0x2, 0x2, 0x71, 0x72, 0x5, 0x20, 
    0x11, 0x2, 0x72, 0x73, 0x7, 0x9, 0x2, 0x2, 0x73, 0x75, 0x3, 0x2, 0x2, 
    0x2, 0x74, 0x6c, 0x3, 0x2, 0x2, 0x2, 0x74, 0x6e, 0x3, 0x2, 0x2, 0x2, 
    0x74, 0x6f, 0x3, 0x2, 0x2, 0x2, 0x74, 0x70, 0x3, 0x2, 0x2, 0x2, 0x75, 
    0x80, 0x3, 0x2, 0x2, 0x2, 0x76, 0x77, 0xc, 0x8, 0x2, 0x2, 0x77, 0x78, 
    0x5, 0x22, 0x12, 0x2, 0x78, 0x79, 0x5, 0x20, 0x11, 0x9, 0x79, 0x7f, 
    0x3, 0x2, 0x2, 0x2, 0x7a, 0x7b, 0xc, 0x7, 0x2, 0x2, 0x7b, 0x7c, 0x5, 
    0x24, 0x13, 0x2, 0x7c, 0x7d, 0x5, 0x20, 0x11, 0x8, 0x7d, 0x7f, 0x3, 
    0x2, 0x2, 0x2, 0x7e, 0x76, 0x3, 0x2, 0x2, 0x2, 0x7e, 0x7a, 0x3, 0x2, 
    0x2, 0x2, 0x7f, 0x82, 0x3, 0x2, 0x2, 0x2, 0x80, 0x7e, 0x3, 0x2, 0x2, 
    0x2, 0x80, 0x81, 0x3, 0x2, 0x2, 0x2, 0x81, 0x21, 0x3, 0x2, 0x2, 0x2, 
    0x82, 0x80, 0x3, 0x2, 0x2, 0x2, 0x83, 0x84, 0x9, 0x2, 0x2, 0x2, 0x84, 
    0x23, 0x3, 0x2, 0x2, 0x2, 0x85, 0x86, 0x9, 0x3, 0x2, 0x2, 0x86, 0x25, 
    0x3, 0x2, 0x2, 0x2, 0x87, 0x88, 0x5, 0x28, 0x15, 0x2, 0x88, 0x89, 0x5, 
    0x2a, 0x16, 0x2, 0x89, 0x27, 0x3, 0x2, 0x2, 0x2, 0x8a, 0x8b, 0x9, 0x3, 
    0x2, 0x2, 0x8b, 0x29, 0x3, 0x2, 0x2, 0x2, 0x8c, 0x8f, 0x7, 0xf, 0x2, 
    0x2, 0x8d, 0x8f, 0x7, 0x10, 0x2, 0x2, 0x8e, 0x8c, 0x3, 0x2, 0x2, 0x2, 
    0x8e, 0x8d, 0x3, 0x2, 0x2, 0x2, 0x8f, 0x2b, 0x3, 0x2, 0x2, 0x2, 0xa, 
    0x42, 0x4e, 0x5c, 0x63, 0x74, 0x7e, 0x80, 0x8e, 
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
