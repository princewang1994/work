
%{
#include <stdio.h>
#include <string.h>

%}

%token 
	MAIN 	
	AUTO 	
	SHORT 	
	INT      
	LONG 	
	FLOAT 	
	DOUBLE
	CHAR 	
	STRUCT 	
	UNION 	
	ENUM 	
	TYPEDEF 	
	CONST 	
	UNSIGNED 
	SIGNED 	
	EXTERN 	
	REGISTER 
	STATIC 	
	VOLATILE 
	VOID	
	IF       
	ELSE	
	SWITCH 	
	CASE	
	FOR      
	DO       
	WHILE 	
	GOTO 	
	CONTINUE 
	BREAK 	
	DEFAULT 	
	SIZEOF 	
	RETURN 	

	LEFT 	  
	RIGHT 	 
	LEFT_E 	 
	RIGHT_E 	 
	ARROW 	 
	DOT 	 
	MARK 	 
	TILDE 	 
	INC 	 
	DEC 	 
	SUB 	 
	STAR 	 
	BIT_AND 	 
	SLASH 	 
	PERCENT 	 
	PLUS 	 
	LEFT_SHIFT  
	RIGHT_SHIFT  
	LT  
	LE  
	GT  
	GE  
	EQU 	 
	NEQ 	 
	HAT 	 
	BIT_OR 	 
	AND 	 
	OR 	 
	QES 	 
	ASSIGN 	 
	PLUS_ASSIGN  
	SUB_ASSIGN  
	MUL_ASSGIN  
	DIV_ASSIGN          
	MOD_ASSIGN  
	RIGHT_SHIFT_ASSIGN  
	LEFT_SHIFT_ASSIGN  
	AND_ASSIGN  
	XOR_ASSIGN  
	OR_ASSGIN  
	COMMA  
	SEMICOLON  
	COLON  
	LEFT_BRACE  
	RIGHT_BRACE  
	RIGHT_BRACE  

	PRECOMPILE 	 
	STRING 	 
	CONST_INT 	 
	CONST_FLOAT 	  
	NOTATION 	  
	ID 	 






%%

DESCRIBE: CONST | STATIC
	;
TYPE:	INT | SHORT | LONG | FLOAT | DOUBLE | CHAR | VOID |
	DESCRIBE TYPE | STRUCT ID 	
	;
DEFINE:	TYPE ID | SEMICOLON;

%%
void yywrap()
{
    return  1；
}

void main()
{
    yyparse();
}
