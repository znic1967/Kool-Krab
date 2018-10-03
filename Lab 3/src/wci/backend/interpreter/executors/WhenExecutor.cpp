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
	bool exprs = false;
	int i=0;
	vector<ICodeNode *> when_children = node->get_children();
	vector<ICodeNode *> expr_children;
	ICodeNode *expr_node = nullptr;
	ICodeNode *select_node = nullptr;
	ICodeNode *statement_node = nullptr;


	ExpressionExecutor expression_executor(this);
	StatementExecutor statement_executor(this);

	for (ICodeNode *child : when_children) { //Parse each "select branch"
		select_node=child;
		expr_node=select_node->get_children()[0];
		expr_children=expr_node->get_children();
		statement_node=select_node->get_children()[1];
		for (ICodeNode *child : expr_children) { //Parse every expression in node
			Object data_value = expression_executor.execute(child);
			if (cast(data_value, bool)){
				exprs = true;
			}
			else {
				exprs = false;
			}
		}
		if (exprs){ //If all expressions are true, execute corresponding statement.
			 statement_executor.execute(statement_node);
		}

	}
	return Object();  // empty
}

}}}}  // namespace wci::backend::interpreter::executors
