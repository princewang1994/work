%{
#include "stdio.h"
#include "stdlib.h"
int num_num=0,num_id=0;
%}


main    	main      
auto    	auto 
short   	short 
int     	int   
long    	long   
float   	float   
double  	double   
char    	char   
struct  	struct   
union   	union   
enum    	enum   
typedef 	typedef   
const   	const  
unsigned	unsigned   
signed  	signed   
extern  	extern   
register	register   
static  	static   
volatile	volatile   
void    	void   
if      	if   
else    	else   
switch  	switch   
case    	case   
for     	for   
do      	do  
while   	while   
goto    	goto   
continue	continue   
break   	break   
default 	default   
sizeof  	sizeof 
return  	return 

LEFT_S (   
RIGHT_s ) 
LEFT_INDEX [ 
RIGHT_INDEX ] 
MESSAGE ->   
DOT .   
BANG !   
TILDE ~   
PLUSPLUS ++   
SUBSUB --   
PLUS +   
SUB -   
MULTIPLY *   
SLASH /   
AMPERSAND &   
BAR |   
PERCENT % 
LEFT_SHIFT <<   
RIGHT_SHIFT >>   
LESS <   
LESS_EQU <=   
GREATER >   
GREATER_EQU >=   
EQU ==   
NEQU !=   
AND &&   
OR ||   
ASSIGN =   
PLUS_ASSIGN +=   
SUB_ASSIGN -=   
MULTI_ASSIGN *=   
DIV_ASSIGN /= 
AND_ASSIGN &=   
OR_ASSIGN |=   
LEFT_SHIFT_ASSIGN <<=   
RIGHT_SHIFT_ASSIGN >>=   
COMMA ,  
SEMICOLON ;  

INTEGER [-+]?[1-9][0-9]*
STRING \".*\"
CHAR \'[a-zA-Z]\'
PRECOMPILE #[a-zA-z0-9_<>\.]*
ID [a-zA-Z][a-zA-Z_0-9]*
NOTATION [(//.*\n)/\*.*\*/]
SPACE [\ \n\r\t]


%%
{PRECOMPILE} {
	printf("(precompile=%s\n)",yytext);
}
{main} {
	printf("(main=%s\n)",yytext);
}
{STRING} {
	
	printf("(string=%s\n)",yytext);
}
{INTEGER} {
	num_num++;
	printf("(num=%s)\n",yytext);//打印数字值
}
{ID} {
num_id++;
	printf("(id=%s)\n",yytext);
}
{SPACE}.
{
	
}
%%
void main()
{
	yyin=fopen("test1.c","r"); 
	yylex();
	printf("num=%d,id=%d",num_num,num_id);
}
int yywrap()//此函数必须由用户提供
{return 1;}
