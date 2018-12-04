grammar Main;  // Kool Krab Grammar File

@header {
#include "wci/intermediate/TypeSpec.h"
using namespace wci::intermediate;
}

program : header block END func_list?;
header  : typeID KRABBIE '('((typeID IDENTIFIER) ','?)* ')';
block   : stmt_list
		| func_list 
		;

stmt : (assignment_stmt ';')
	 | (declaration_stmt ';')
     | repeat_stmt
     | if_stmt
     | do_while
     | return_stmt
     ;

func : function_call
     | function_decl
     | function_body
     ;

varID        : IDENTIFIER ;

stmt_list       : (stmt | func)+ ;
func_list       : (func';')*;
assignment_stmt : variable '=' (expr | function_call);
declaration_stmt: typeID varID '=' expr;
repeat_stmt     : REPEAT stmt_list UNTIL expr ;
return_stmt		: RETURN expr;
if_stmt         : IF '(' expr ')' '{' (( stmt_list ) '}' ( ELSE  '{' stmt_list '}'  )?) ; 
do_while : DO '{' stmt_list '}' WHILE  expr ; //Leo was here
function_decl	: variable IDENTIFIER '('((variable IDENTIFIER) ','+)* ')' stmt END;
function_call	: IDENTIFIER '('((variable | IDENTIFIER) ','?)* ')';
function_body	: typeID IDENTIFIER '('((typeID IDENTIFIER) ','?)* ')' '{' stmt_list '}' END ; //Leo w/h

variable : IDENTIFIER ;

expr locals [ TypeSpec *type = nullptr ]
	: expr MUL_DIV_OP expr #mulDivExpr
     | expr ADD_SUB_OP expr #addSubExpr
     | expr REL_OP expr	#relOpExpr
     | number			#unsignedNumberExpr
     | variable			#variableExpr
     | '(' expr ')'		#parenExpr
     ;
     
signedNumber locals [ TypeSpec *type = nullptr ] 
    : sign number 
    ;
sign : ADD_OP | SUB_OP ;

number locals [ TypeSpec *type = nullptr ]
    : INTEGER    # integerConst
    | CHARACTER #charConst
    ;

typeID	: IDENTIFIER
		| INTEGER_TYPE
		| CHARACTER_TYPE
		;

MUL_DIV_OP : MUL_OP | DIV_OP ;
ADD_SUB_OP : ADD_OP | SUB_OP ;
REL_OP     : EQ_OP | NE_OP | LT_OP | LE_OP | GT_OP | GE_OP ;

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

NEWLINE : '\r'? '\n' -> skip; 
WS      : [ \t]+ -> skip ;