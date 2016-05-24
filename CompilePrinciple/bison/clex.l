%{ 
	#include<stdio.h> 
%} 

%% 



(main) 		{	printf("MAIN ");	}
(auto)         	{	printf("AUTO ");	}
(short)  	{	printf("SHORT ");	}
(int)    	{	printf("INT ");		}
(long)   	{	printf("LONG ");	}
(float)  	{	printf("FLOAT ");	}
(double) 	{	printf("DOUBEL ");	}
(char)   	{	printf("CHAR ");	}
(struct) 	{	printf("STRUCT ");	}
(union)  	{	printf("UNION ");	}
(enum)   	{	printf("ENUM ");	}
(typedef)	{	printf("TYPEDEF ");	}
(const)         {	printf("CONST ");	}
(unsigned)      {	printf("UNSIGNED ");	}
(signed) 	{	printf("SIGNED ");	}
(extern)	{	printf("EXTERN ");	}
(register)      {	printf("REGISTER ");	}
(static)        {	printf("STATIC ");	}
(volatile)	{	printf("VOLATILE ");	}
(void)   	{	printf("VOID ");	}
(if)     	{	printf("IF " );		}
(else)   	{	printf("ELSE ");	}
(switch) 	{	printf("SWITCH ");	}
(case)   	{	printf("CASE ");	}
(for)    	{	printf("FOR " );	}
(do)     	{	printf("DO " );		}
(while)  	{	printf("WHILE ");	}
(goto)   	{	printf("GOTO ");	}
(continue)      {	printf("CONTINUE ");	}
(break)  	{	printf("BREAK ");	}
(default) 	{	printf("DEFAULT ");	}
(sizeof)        {	printf("SIZEOF ");	}
(return)        {	printf("RETURN ");	}








(\()                   {		printf("LEFT " );		}
(\))                   {		printf("RIGHT " );		}
(\[)                   {		printf("LEFT_E " );		}
(\])                   {		printf("RIGHT_E " );		}
(->)                   {		printf("ARROW " );		}
(\.)                   {		printf("DOT " );		}
(!)                    {		printf("MARK " );		}
(~)                    {		printf("TILDE " );		}
(\+\+)                 {		printf("INC " );		}
(--)                   {		printf("DEC " );		}
(-)                    {		printf("SUB " );		}
(\*)                   {		printf("STAR " );		}
(&)                    {		printf("BIT_AND " );		}
(\/)                   {		printf("SLASH " );		}
(\%)                   {		printf("PERCENT " );		}
(\+)                   {		printf("PLUS " );		}
(<<)                   {		printf("LEFT_SHIFT " );		}
(>>)                   {		printf("RIGHT_SHIFT " );	}
(<)                    {		printf("LT " );			}
(<=)                   {		printf("LE " );			}
(>)                    {		printf("GT " );			}
(>=)                   {		printf("GE " );			}
(==)                   {		printf("EQU " );		}
(!=)                   {		printf("NEQ " );		}
(\^)                   {		printf("HAT " );		}
(\|)                   {		printf("BIT_OR " );		}
(&&)                   {		printf("AND " );		}
(\|\|)                 {		printf("OR " );			}
(\?)                   {		printf("QES " );		}
(=)                    {		printf("ASSIGN " );		}
(\+=)                  {		printf("PLUS_ASSI " );		}
(-=)                   {		printf("SUB_ASSIGN " );		}
(\*=)                  {		printf("MUL_ASSGIN " );		}
(\/=)                  {		printf("DIV_ASSIGN " );		}      
(\%=)                  {		printf("MOD_ASSIGN " );		}
(>>=)                  {		printf("RIGHT_SHIFT_ASSIGN " );	}
(<<=)                  {		printf("LEFT_SHIFT_ASSIGN " );	}
(&=)                   {		printf("AND_ASSIGN " );		}
(^=)                   {		printf("XOR_ASSIGN " );		}
(\|=)                  {		printf("OR_ASSGIN " );		}
(,)                    {		printf("COMMA " );		}
(;)                    {		printf("SEMICOLON " );		}
(:)                    {		printf("COLON " );		}
(\{)                   {		printf("LEFT_BRACE " );		}
(\})		       {		printf("RIGHT_BRACE " );	}
(\n)		       {		printf("\n" );			}



#.*			{		printf("PRECOMPILE ");	 	}
\".*\"			{		printf("STRING	");	 	}
((-)?([1-9][0-9]*|0))|(0x[a-fA-f0-9]+)     {	 printf("CONST_INT ");  }
(-)?([1-9][0-9]*|0)\.[0-9]+     {	 printf("CONSTFLOAT ");	 	} 
(\/\/.*\n)      		{	 printf("NOTATION "); 		} 
[a-zA-Z_][a-zA-Z0-9_]*  	{	 printf("ID ");	 		}

[\ \n\t]              
(.)              printf("Unknown : %c\n", yytext[0]);








%%
int main()
{
	yyin=fopen("test.c","r"); 
	yylex(); /* 进行分析 */  
}
int yywrap() {  return 1; } 
