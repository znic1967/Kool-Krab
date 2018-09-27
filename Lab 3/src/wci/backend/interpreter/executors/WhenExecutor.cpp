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
	bool exit_loop = false;
	vector<ICodeNode *> when_children = node->get_children();
	ICodeNode *expr_node = nullptr;

	ExpressionExecutor expression_executor(this);
	StatementExecutor statement_executor(this);

    while (!exit_loop)
    {
    	for (ICodeNode *child : when_children) {
    		ICodeNodeTypeImpl child_type = (ICodeNodeTypeImpl) child->get_type();
			// Check statements
			if (child_type == NT_EQ)
			{
				expr_node = child->get_children()[0];
				Object data_value = expression_executor.execute(expr_node);
				if (cast(data_value, bool)){
					statement_executor.execute(child);
					exit_loop = cast(data_value, bool);
				}
			}

			// Otherwise node.
			else
			{
				statement_executor.execute(child);
			}
			// Exit if the TEST expression value is true,
			if (exit_loop) break;
		}
    }
}

}}}}  // namespace wci::backend::interpreter::executors
