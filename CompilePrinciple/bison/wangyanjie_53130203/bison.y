%{
#include <stdio.h>
#include <string.h>

extern int yylex();

extern FILE* yyin;

void yywrap()
{
    return ;
}

void main()
{
	yyin=fopen("test","r"); 
	if(yyparse()==0)
	{
		printf("success!\n");
	}	
	else
	{
		printf("failed!\n");
	}
}

int yyerror()
{
	return -1;
}


%}
	  
%token  MAIN 	
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
	INLINE

	ARROW 	 
	INC 	 
	DEC 	 
	LEFT_SHIFT  
	RIGHT_SHIFT  
	LE  
	GE  
	EQU 	 
	NEQ 	 
	AND 	 
	OR 	 
	PLUS_ASSIGN  
	SUB_ASSIGN  
	MUL_ASSIGN  
	DIV_ASSIGN          
	MOD_ASSIGN  
	RIGHT_SHIFT_ASSIGN  
	LEFT_SHIFT_ASSIGN  
	AND_ASSIGN  
	XOR_ASSIGN  
	OR_ASSIGN  

	PRECOMPILE 	 
	STRING 	 
	CONST_INT 	 
	CONST_FLOAT 	  
	NOTATION 	  
	ID 	 
	LINE

%start translation_unit

%%
primary_expression
    : ID
    | constant
    | STRING
    | '(' expression ')'
    ;
constant: CONST_INT| CONST_FLOAT;


postfix_expression : primary_expression
    | postfix_expression '[' expression ']'
    | postfix_expression '(' ')'
    | postfix_expression '.' ID
    | postfix_expression ARROW ID
    | postfix_expression INC
    | postfix_expression '(' argument_expression_list ')'
    | postfix_expression DEC
    | '(' type_name ')' '{' initializer_list '}'
    | '(' type_name ')' '{' initializer_list ',' '}'
    ;

argument_expression_list : assignment_expression | argument_expression_list ',' assignment_expression ;

unary_expression : postfix_expression
    | INC unary_expression
    | DEC unary_expression
    | unary_operator cast_expression
    | SIZEOF unary_expression
    | SIZEOF '(' type_name ')'
    ;

unary_operator : '&' | '*' | '+' | '-' | '~' | '!' ;

cast_expression : unary_expression
    | '(' type_name ')' cast_expression
    ;

multiplicative_expression : cast_expression
    | multiplicative_expression '*' cast_expression
    | multiplicative_expression '/' cast_expression
    | multiplicative_expression '%' cast_expression
    ;

additive_expression : multiplicative_expression
    | additive_expression '+' multiplicative_expression
    | additive_expression '-' multiplicative_expression
    ;

shift_expression : additive_expression
    | shift_expression LEFT_SHIFT_ASSIGN additive_expression
    | shift_expression RIGHT_SHIFT_ASSIGN additive_expression
    ;

relational_expression : shift_expression
    | relational_expression '<' shift_expression
    | relational_expression '>' shift_expression
    | relational_expression LE shift_expression
    | relational_expression GE shift_expression
    ;

equality_expression : relational_expression
    | equality_expression EQU relational_expression
    | equality_expression NEQ relational_expression
    ;

and_expression : equality_expression
    | and_expression '&' equality_expression
    ;

exclusive_or_expression : and_expression
    | exclusive_or_expression '^' and_expression
    ;

inclusive_or_expression
    : exclusive_or_expression
    | inclusive_or_expression '|' exclusive_or_expression
    ;

logical_and_expression : inclusive_or_expression
    | logical_and_expression AND inclusive_or_expression
    ;

logical_or_expression : logical_and_expression
    | logical_or_expression OR logical_and_expression
    ;

conditional_expression : logical_or_expression | logical_or_expression '?' expression ':' conditional_expression ;

assignment_expression : conditional_expression
    | unary_expression assignment_operator assignment_expression
    ;

assignment_operator
    : '='
    | MUL_ASSIGN
    | DIV_ASSIGN
    | MOD_ASSIGN
    | PLUS_ASSIGN
    | SUB_ASSIGN
    | LEFT_SHIFT_ASSIGN
    | RIGHT_SHIFT_ASSIGN
    | AND_ASSIGN
    | XOR_ASSIGN
    | OR_ASSIGN ;

expression : assignment_expression
    | expression ',' assignment_expression ;

constant_expression : conditional_expression ;

declaration : declaration_specifiers ';'
    | declaration_specifiers init_declarator_list ';'
    ;

declaration_specifiers : storage_class_specifier
    | storage_class_specifier declaration_specifiers
    | type_specifier
    | type_specifier declaration_specifiers
    | type_qualifier
    | type_qualifier declaration_specifiers
    | function_specifier
    | function_specifier declaration_specifiers
    ;

function_specifier : INLINE ;

init_declarator_list : init_declarator
    | init_declarator_list ',' init_declarator
    ;

init_declarator : declarator
    | declarator '=' initializer
    ;

storage_class_specifier : TYPEDEF
    | EXTERN
    | STATIC
    | AUTO
    | REGISTER
    ;

type_specifier : VOID
    | CHAR
    | SHORT
    | INT
    | LONG
    | FLOAT
    | DOUBLE
    | SIGNED
    | UNSIGNED
    | struct_or_union_specifier
    | enum_specifier
    ;

struct_or_union_specifier : struct_or_union ID '{' struct_declaration_list '}'
    | struct_or_union '{' struct_declaration_list '}'
    | struct_or_union ID
    ;

struct_or_union : STRUCT
    | UNION
    ;

struct_declaration_list : struct_declaration
    | struct_declaration_list struct_declaration
    ;

struct_declaration : specifier_qualifier_list struct_declarator_list ';'
    ;

specifier_qualifier_list : type_specifier specifier_qualifier_list
    | type_specifier
    | type_qualifier specifier_qualifier_list
    | type_qualifier
    ;

struct_declarator_list : struct_declarator
    | struct_declarator_list ',' struct_declarator
    ;

struct_declarator : declarator
    | ':' constant_expression
    | declarator ':' constant_expression
    ;

enum_specifier : ENUM '{' enumerator_list '}'
    | ENUM '{' enumerator_list ',' '}'
    | ENUM ID '{' enumerator_list '}'
    | ENUM ID '{' enumerator_list ',' '}'
    | ENUM ID
    ;

enumerator_list : enumerator
    | enumerator_list ',' enumerator
    ;

enumerator : ID
    | ID '=' constant_expression
    ;

type_qualifier : CONST
    | VOLATILE
    ;

declarator : pointer direct_declarator
    | direct_declarator
    ;

direct_declarator : ID
    | '(' declarator ')'
    | direct_declarator '[' assignment_expression ']'
    | direct_declarator '[' type_qualifier_list assignment_expression ']'
    | direct_declarator '[' type_qualifier_list ']'
    | direct_declarator '[' STATIC type_qualifier_list assignment_expression ']'
    | direct_declarator '[' STATIC assignment_expression ']'
    | direct_declarator '[' type_qualifier_list STATIC assignment_expression ']'
    | direct_declarator '[' type_qualifier_list '*' ']'
    | direct_declarator '[' '*' ']'
    | direct_declarator '[' ']'
    | direct_declarator '(' parameter_type_list ')'
    | direct_declarator '(' identifier_list ')'
    | direct_declarator '(' ')'
    ;

pointer : '*'
    | '*' type_qualifier_list
    | '*' pointer
    | '*' type_qualifier_list pointer
    ;

type_qualifier_list : type_qualifier
    | type_qualifier_list type_qualifier
    ;

parameter_type_list : parameter_list
    ;

parameter_list : parameter_declaration
    | parameter_list ',' parameter_declaration
    ;

parameter_declaration : declaration_specifiers declarator
    | declaration_specifiers abstract_declarator
    | declaration_specifiers
    ;

identifier_list : ID
    | identifier_list ',' ID
    ;

type_name : specifier_qualifier_list
    | specifier_qualifier_list abstract_declarator
    ;

abstract_declarator : pointer
    | direct_abstract_declarator
    | pointer direct_abstract_declarator
    ;

direct_abstract_declarator : '(' abstract_declarator ')'
    | direct_abstract_declarator '[' type_qualifier_list assignment_expression ']'
    | direct_abstract_declarator '[' type_qualifier_list ']'
    | direct_abstract_declarator '[' assignment_expression ']'
    | direct_abstract_declarator '[' ']'
    | '[' type_qualifier_list assignment_expression ']'
    | '[' assignment_expression ']'
    | '[' type_qualifier_list ']'
    | '[' ']'
    | direct_abstract_declarator '[' STATIC type_qualifier_list assignment_expression ']'
    | direct_abstract_declarator '[' STATIC assignment_expression ']'
    | '[' STATIC type_qualifier_list assignment_expression ']'
    | '[' STATIC assignment_expression ']'
    | direct_abstract_declarator '[' type_qualifier_list STATIC assignment_expression ']'
    | '[' type_qualifier_list STATIC assignment_expression ']'
    | direct_abstract_declarator '[' '*' ']'
    | '[' '*' ']'
    | direct_abstract_declarator '(' parameter_type_list ')'
    | direct_abstract_declarator '(' ')'
    | '(' parameter_type_list ')'
    | '(' ')'
    ;

initializer : assignment_expression
    | '{' initializer_list '}'
    | '{' initializer_list ',' '}'
    ;

initializer_list : initializer
    | initializer_list ',' initializer
    | designator_list '=' initializer
    ;

designator_list : designator
    | designator_list designator
    ;

designator : '[' constant_expression ']'
    | '.' ID
    ;

statement : labeled_statement
    | compound_statement
    | expression_statement
    | selection_statement
    | iteration_statement
    | jump_statement
    ;

labeled_statement : ID ':' statement
    | CASE constant_expression ':' statement
    | DEFAULT ':' statement
    ;

compound_statement : '{' '}'
    | '{' block_item_list '}'
    ;

block_item_list : block_item
    | block_item_list block_item
    ;

block_item : declaration
    | statement
    ;

declaration_list : declaration
    | declaration_list declaration
    ;

expression_statement : ';'
    | expression ';'
    ;

selection_statement : IF '(' expression ')' statement
    | IF '(' expression ')' statement ELSE statement
    | SWITCH '(' expression ')' statement
    ;

iteration_statement : WHILE '(' expression ')' statement
    | DO statement WHILE '(' expression ')' ';'
    | FOR '(' expression_statement expression_statement ')' statement
    | FOR '(' expression_statement expression_statement expression ')' statement
    ;

jump_statement : GOTO ID ';'
    | CONTINUE ';'
    | BREAK ';'
    | RETURN ';'
    | RETURN expression ';'
    ;

translation_unit : external_declaration
    | translation_unit external_declaration
    ;

external_declaration : function_definition
    | declaration
    ;

function_definition : declaration_specifiers declarator declaration_list compound_statement
    | declaration_specifiers declarator compound_statement
    | declarator declaration_list compound_statement
    | declarator compound_statement
    ;
%%
