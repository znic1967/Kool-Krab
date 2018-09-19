/**
 * <h1>IfExecutor</h1>
 *
 * <p>Execute an IF statement.</p>
 *
 * <p>Copyright (c) 2017 by Ronald Mak</p>
 * <p>For instructional purposes only.  No warranties.</p>
 */
#include <vector>
#include "WhenExecutor.h"
#include "StatementExecutor.h"
#include "ExpressionExecutor.h"
#include "../../../Object.h"
#include "../../../intermediate/ICodeNode.h"
#include "../../../intermediate/icodeimpl/ICodeNodeImpl.h"

namespace wci { namespace backend { namespace interpreter { namespace executors {

using namespace std;
using namespace wci;
using namespace wci::backend::interpreter;
using namespace wci::intermediate;
using namespace wci::intermediate::icodeimpl;

WhenExecutor::WhenExecutor(Executor *parent)
    : StatementExecutor(parent)
{
}

Object WhenExecutor::execute(ICodeNode *node)
{
    // Get the IF node's children.
    vector<ICodeNode *> children = node->get_children();
    ICodeNode *expr_node = children[0];
    ICodeNode *otherwise_stmt_node = children[1];

    ExpressionExecutor expression_executor(this);
    StatementExecutor statement_executor(this);

    expression_executor.execute(expr_node);
    statement_executor.execute(otherwise_stmt_node);

    ++execution_count;  // count the WHEN statement itself
    return Object();    // empty
}

}}}}  // namespace wci::backend::interpreter::executors
