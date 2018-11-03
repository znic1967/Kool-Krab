grammar main;  // Kool Krab Grammar File

program : header block 'Pattie.' ;
header  :  IDENTIFIER KRABBIE '('((variable IDENTIFIER) ','+)* ')' NEWLINE;
block   :  stmt_list ;

//declarations : VAR decl_list ';' ;
//decl_list    : decl ( ';' decl )* ;
//decl         : var_list ':' type_id ;
//var_list     : var_id ( ',' var_id )* ;
//var_id       : IDENTIFIER ;
//type_id      : IDENTIFIER ;


stmt : assignment_stmt
     | repeat_stmt
     | if_stmt
     |
     ;

stmt_list       : (stmt NEWLINE)* ;
assignment_stmt : type variable '=' expr;
repeat_stmt     : REPEAT stmt_list UNTIL expr ;
if_stmt         : IF '(' expr ')' (('{' stmt '}')? ( ELSE  '{'? stmt '}'? )?) ;
do_while : DO '(' stmt ')' WHILE expr ;
function_decl	: variable IDENTIFIER '('((variable IDENTIFIER) ','+)* ')' '{' stmt '}';
function_call	: IDENTIFIER '('((variable IDENTIFIER) ','+)* ')'; 

variable : IDENTIFIER ;

expr : expr mul_div_op expr
     | expr add_sub_op expr
     | expr rel_op expr
     | number
     | IDENTIFIER
     | '(' expr ')'
     ;

type	: IDENTIFIER;
number : sign? INTEGER ;
sign   : '+' | '-' ;

mul_div_op : MUL_OP | DIV_OP ;
add_sub_op : ADD_OP | SUB_OP ;
rel_op     : EQ_OP | NE_OP | LT_OP | LE_OP | GT_OP | GE_OP ;

KRABBIE 	: 'Krabie' ;
BEGIN   : 'BEGIN' ;
END     : 'END' ;
VAR     : 'VAR' ;
REPEAT  : 'REPEAT' ;
UNTIL   : 'UNTIL' ;
IF      : 'IF' ;
THEN    : 'THEN' ;
ELSE    : 'ELSE';
DO		:	'DO';
WHILE	:	'WHILE';

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