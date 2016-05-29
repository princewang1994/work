%{ 
	#include<stdio.h> 
	#include"y.tab.h"
%} 

%% 


(main) 		{	return MAIN  ;	}
(auto)         	{	return AUTO  ;	}
(short)  	{	return SHORT  ;	}
(int)    	{	return INT  ;		}
(long)   	{	return LONG  ;	}
(float)  	{	return FLOAT  ;	}
(double) 	{	return DOUBLE  ;	}
(char)   	{	return CHAR  ;	}
(struct) 	{	return STRUCT  ;	}
(union)  	{	return UNION  ;	}
(enum)   	{	return ENUM  ;	}
(typedef)	{	return TYPEDEF  ;	}
(const)         {	return CONST  ;	}
(unsigned)      {	return UNSIGNED  ;	}
(signed) 	{	return SIGNED  ;	}
(extern)	{	return EXTERN  ;	}
(register)      {	return REGISTER  ;	}
(static)        {	return STATIC  ;	}
(volatile)	{	return VOLATILE  ;	}
(void)   	{	return VOID  ;	}
(if)     	{	return IF;		}
(else)   	{	return ELSE;	}
(switch) 	{	return SWITCH;	}
(case)   	{	return CASE  ;	}
(for)    	{	return FOR;	}
(do)     	{	return DO;		}
(while)  	{	return WHILE;	}
(goto)   	{	return GOTO;	}
(continue)      {	return CONTINUE ;	}
(break)  	{	return BREAK ;	}
(default) 	{	return DEFAULT  ;	}
(sizeof)        {	return SIZEOF  ;	}
(return)        {	return RETURN  ;	}








(\()                   {		return '(';		}
(\))                   {		return ')';		}
(\[)                   {		return '[';		}
(\])                   {		return ']';		}
(\.)                   {		return '.';		}
(!)                    {		return '!';		}
(~)                    {		return '~';		}
(\*)                   {		return '*';		}
(&)                    {		return '&';		}
(\/)                   {		return '/';		}
(\%)                   {		return '%';		}
(\+)                   {		return '+';		}
(<)                    {		return '<';		}
(>)                    {		return '>';		}
(\^)                   {		return '^';		}
(\|)                   {		return '|';		}
(\?)                   {		return '?';		}
(-)                    {		return '-';		}
(=)                    {		return '=';		}
(,)                    {		return ',';		}
(;)                    {		return ';';		}
(:)                    {		return ':';		}
(\{)                   {		return '{';		}
(\})		       {		return '}';		}
(\n)		       {		 		}

(\+=)                  {		return PLUS_ASSIGN ;		}
(-=)                   {		return SUB_ASSIGN ;		}
(\*=)                  {		return MUL_ASSIGN  ;		}
(\/=)                  {		return DIV_ASSIGN  ;		}      
(\%=)                  {		return MOD_ASSIGN  ;		}
(>>=)                  {		return RIGHT_SHIFT_ASSIGN ;	}
(<<=)                  {		return LEFT_SHIFT_ASSIGN;	}
(&=)                   {		return AND_ASSIGN  ;		}
(^=)                   {		return XOR_ASSIGN  ;		}
(\|=)                  {		return OR_ASSIGN ;		}
(&&)                   {		return AND ;		}
(\|\|)                 {		return OR ;			}
(==)                   {		return EQU  ;		}
(!=)                   {		return NEQ  ;		}
(>=)                   {		return GE  ;			}
(<=)                   {		return LE  ;			}
(<<)                   {		return LEFT_SHIFT  ;		}
(>>)                   {		return RIGHT_SHIFT ;	}
(\+\+)                 {		return INC;		}
(--)                   {		return DEC;		}
(->)                   {		return ARROW;		}



#.*			{		return PRECOMPILE;	 	}
\".*\"			{		return STRING;	 	}
((-)?([1-9][0-9]*|0))|(0x[a-fA-f0-9]+)     {	 return CONST_INT;  }
(-)?([1-9][0-9]*|0)\.[0-9]+     {	 return CONST_FLOAT;	 	} 
(\/\/.*\n)      		{	 return NOTATION; 		} 
[a-zA-Z_][a-zA-Z0-9_]*  	{	 return ID;	 		}

[\ \n\t]              
(.)              printf("Unknown : %c\n", yytext[0]);





%%
