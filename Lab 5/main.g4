grammar main;  // Kool Krab Grammar File

program : header block END NEWLINE func_list?;
header  : type KRABBIE '('((type IDENTIFIER) ','?)* ')' NEWLINE;
block   : stmt_list
		| func_list 
		|
		;

stmt : assignment_stmt
     | repeat_stmt
     | if_stmt
     | do_while
     | return_stmt
     |
     ;

func : function_call
     | function_decl
     | function_body
     |
     ;

stmt_list       : ((stmt | func) NEWLINE)* ;
func_list       : (func (NEWLINE|DONE))*;
assignment_stmt : type? variable '=' (expr | function_call);
repeat_stmt     : REPEAT stmt_list UNTIL expr ;
return_stmt		: RETURN expr;
if_stmt         : IF '(' expr ')' NEWLINE (( stmt_list )?  ( ELSE   stmt_list  )?) ;
do_while : DO NEWLINE stmt_list WHILE expr;
function_decl	: variable IDENTIFIER '('((variable IDENTIFIER) ','+)* ')' stmt END;
function_call	: IDENTIFIER '('((variable | IDENTIFIER) ','?)* ')';
function_body	: type IDENTIFIER '('((type IDENTIFIER) ','?)* ')' NEWLINE stmt_list END NEWLINE?;

variable : IDENTIFIER ;

expr : expr mul_div_op expr
     | expr add_sub_op expr
     | expr rel_op expr
     | number
     | IDENTIFIER
     | '(' expr ')'
     ;

type	: IDENTIFIER
		| INTEGER_TYPE
		| CHARACTER_TYPE
		;
number : sign? INTEGER ;
sign   : '+' | '-' ;

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
ELSE    : 'ELSE';
DO		:	'Bringit';
WHILE	:	'Aroundtown';
RETURN  : 'Spitout';
DONE	: 'Donezo';
INTEGER_TYPE : 'int';
CHARACTER_TYPE: 'char';




IDENTIFIER : [a-zA-Z][a-zA-Z0-9]* ;
INTEGER    : [0-9]+ ;
CHARACTER : '\''[a-zA-Z0-9]'\'';

MUL_OP :   '*' ;
DIV_OP :   '/' ;
ADD_OP :   '+' ;
SUB_OP :   '-' ;

EQ_OP : '=' ;
NE_OP : '<>' ;
LT_OP : '<' ;
LE_OP : '<=' ;
GT_OP : '>' ;
GE_OP : '>=' ;

NEWLINE : '\r'? '\n' ;
WS      : [ \t]+ -> skip ;