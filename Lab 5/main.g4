grammar main;  // Kool Krab Grammar File

program : header block '.' ;
header  :  IDENTIFIER KRAB '('((variable IDENTIFIER) ','+)* ')'';' ;
block   : declarations compound_stmt ;

declarations : VAR decl_list ';' ;
decl_list    : decl ( ';' decl )* ;
decl         : var_list ':' type_id ;
var_list     : var_id ( ',' var_id )* ;
var_id       : IDENTIFIER ;
type_id      : IDENTIFIER ;

compound_stmt : BEGIN stmt_list END ;

stmt : compound_stmt
     | assignment_stmt
     | repeat_stmt
     | if_stmt
     |
     ;

stmt_list       : stmt ( ';' stmt )* ;
assignment_stmt : variable ':=' expr ;
repeat_stmt     : REPEAT stmt_list UNTIL expr ;
if_stmt         : IF expr THEN stmt ( ELSE stmt )? ;
function_decl		: variable IDENTIFIER '('((variable IDENTIFIER) ','+)* ')' '{' stmt '}';
function_call	: IDENTIFIER '('((variable IDENTIFIER) ','+)* ')'; 

variable : IDENTIFIER ;

expr : expr mul_div_op expr
     | expr add_sub_op expr
     | expr rel_op expr
     | number
     | IDENTIFIER
     | '(' expr ')'
     ;

number : sign? INTEGER ;
sign   : '+' | '-' ;

mul_div_op : MUL_OP | DIV_OP ;
add_sub_op : ADD_OP | SUB_OP ;
rel_op     : EQ_OP | NE_OP | LT_OP | LE_OP | GT_OP | GE_OP ;

KRAB 	: 'Krab' ;
BEGIN   : 'BEGIN' ;
END     : 'END' ;
VAR     : 'VAR' ;
REPEAT  : 'REPEAT' ;
UNTIL   : 'UNTIL' ;
IF      : 'IF' ;
THEN    : 'THEN' ;
ELSE    : 'ELSE';

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

NEWLINE : '\r'? '\n' -> skip  ;
WS      : [ \t]+ -> skip ;