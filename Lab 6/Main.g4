grammar Main;  // Kool Krab Grammar File

@header {
#include "wci/intermediate/TypeSpec.h"
using namespace wci::intermediate;
}

program : func_list?  main block END ;
main  : typeID KRABBIE '('((typeID IDENTIFIER) ','?)* ')';
block   : stmt_list
		| func_list 
		;

stmt : (assignment_stmt ';')
	 | (declaration_stmt ';')
     | repeat_stmt
     | if_stmt
     | do_while
     | return_stmt
     | print_stmt
     ;

func : function_call | function_defn ;

varID locals [ TypeSpec *type = nullptr ] : IDENTIFIER ;

stmt_list       : (stmt | func)+ ;
func_list       : (func)*;
function_decl	: variable funcID '('((variable IDENTIFIER) ','+)* ')' stmt END;
function_call	: funcID '(' identifiers? ')' ';'?;
assignment_stmt : variable '=' expr;
declaration_stmt: declaration '=' expr;
declaration		: typeID varID;
repeat_stmt     : REPEAT stmt_list UNTIL expr ;
return_stmt		: RETURN expr ';';
if_stmt         : IF '(' expr ')' '{' (( stmt_list ) '}' ( ELSE  '{' stmt_list '}'  )?) ;
do_while : DO '{' stmt_list '}' WHILE  expr ; 
print_stmt : PRINT '(' printer ')' ';';
printer : expr | str;

identifiers		: expr  (',' expr)*  ;
function_defn	: typeID funcID '('((declaration) ','?)* ')' '{' stmt_list '}';

variable : IDENTIFIER ;

expr locals [ TypeSpec *type = nullptr ]
	 : function_call       # funcCallExpr
	 | expr mul_div_op expr #mulDivExpr
     | expr add_sub_op expr #addSubExpr
     | expr rel_op expr	#relOpExpr
     | number			#unsignedNumberExpr
     | variable			#variableExpr
     | '(' expr ')'		#parenExpr
     ;
     
signedNumber locals [ TypeSpec *type = nullptr ] : sign number ;
sign : ADD_OP | SUB_OP ;

number locals [ TypeSpec *type = nullptr ]
    : INTEGER    # integerConst
    | CHARACTER  #charConst
    ;
str          locals [ TypeSpec* type = nullptr ] : STRING ;
typeID	: IDENTIFIER
		| INTEGER_TYPE
		| CHARACTER_TYPE
		;
funcID : IDENTIFIER;

//In order of precedence
mul_div_op : MUL_OP | DIV_OP ;
add_sub_op : ADD_OP | SUB_OP ;

rel_op     : EQ_OP | NE_OP | LT_OP | LE_OP | GT_OP | GE_OP ;

KRABBIE : 'Krabie' ;
END		: 'Pattie';
BEGIN   : 'BEGIN' ;
VAR     : 'VAR' ;
REPEAT  : 'REPEAT' ;
UNTIL   : 'UNTIL' ;
IF      : 'IsMayo' ;
THEN    : 'THEN' ;
ELSE    : 'NotMayo';
DO		:	'Bringit';
WHILE	:	'Aroundtown';
RETURN  : 'Spitout';
DONE	: 'Donezo';
INTEGER_TYPE : 'int';
CHARACTER_TYPE: 'char';
PRINT	: 'Printingpress';




IDENTIFIER : [a-zA-Z][a-zA-Z0-9]* ;
INTEGER    : [0-9]+ ;
CHARACTER  : '\''[a-zA-Z0-9]'\'';
STRING	   : '"' (IDENTIFIER|' ')*? '"' ;

MUL_OP :   '*' ;
DIV_OP :   '/' ;
ADD_OP :   '+' ;
SUB_OP :   '-' ;

EQ_OP : '==' ;
NE_OP : '<>' ;
LT_OP : '<' ;
LE_OP : '<=' ;
GT_OP : '>' ;
GE_OP : '>=' ;

NEWLINE : '\r'? '\n' -> skip; 
WS      : [ \t]+ -> skip ;