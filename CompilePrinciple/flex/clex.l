%{ 
	 #include "stdio.h" 
	int linenum;
%} 

%% 



(main) 		 	printf("(main) 	  	:%s\n",yytext);
(auto)         		printf("(auto)    	:%s\n",yytext);
(short)  		printf("(short)   	:%s\n",yytext);
(int)    		printf("(int)     	:%s\n",yytext);
(long)   		printf("(long)    	:%s\n",yytext);
(float)  		printf("(float)   	:%s\n",yytext);
(double) 		printf("(double)  	:%s\n",yytext);
(char)   		printf("(char)    	:%s\n",yytext);
(struct) 		printf("(struct)  	:%s\n",yytext);
(union)  		printf("(union)   	:%s\n",yytext);
(enum)   		printf("(enum)    	:%s\n",yytext);
(typedef)		printf("(typedef) 	:%s\n",yytext);
(const)         	printf("(const)   	:%s\n",yytext);
(unsigned)      	printf("(unsigned)	:%s\n",yytext);
(signed) 		printf("(signed)  	:%s\n",yytext);
(extern)		printf("(extern)  	:%s\n",yytext);
(register)      	printf("(register)	:%s\n",yytext);
(static)        	printf("(static)  	:%s\n",yytext);
(volatile)		printf("(volatile)	:%s\n",yytext);
(void)   		printf("(void)    	:%s\n",yytext);
(if)     		printf("(if)      	:%s\n",yytext);
(else)   		printf("(else)    	:%s\n",yytext);
(switch) 		printf("(switch)  	:%s\n",yytext);
(case)   		printf("(case)    	:%s\n",yytext);
(for)    		printf("(for)     	:%s\n",yytext);
(do)     		printf("(do)      	:%s\n",yytext);
(while)  		printf("(while)   	:%s\n",yytext);
(goto)   		printf("(goto)    	:%s\n",yytext);
(continue)      	printf("(continue)	:%s\n",yytext);
(break)  		printf("(break)   	:%s\n",yytext);
(default) 		printf("(default) 	:%s\n",yytext);
(sizeof)        	printf("(sizeof)  	:%s\n",yytext);
(return)        	printf("(return)  	:%s\n",yytext);








(\()                   printf("(     	:%s\n",yytext);
(\))                   printf(")  	:%s\n",yytext);
(\[)                   printf("[  	:%s\n",yytext);
(\])                   printf("]  	:%s\n",yytext);
(->)                   printf("->	:%s\n",yytext);
(\.)                   printf(".  	:%s\n",yytext);
(!)                    printf("!   	:%s\n",yytext);
(~)                    printf("~   	:%s\n",yytext);
(\+\+)                 printf("++	:%s\n",yytext);
(--)                   printf("--	:%s\n",yytext);
(-)                    printf("-  	:%s\n",yytext);
(\*)                   printf("*  	:%s\n",yytext);
(&)                    printf("&   	:%s\n",yytext);
(\/)                   printf("/  	:%s\n",yytext);
(\%)                    printf("%   	:%s\n",yytext);
(\+)                   printf("+  	:%s\n",yytext);
(<<)                   printf("<<	:%s\n",yytext);
(>>)                   printf(">>	:%s\n",yytext);
(<)                    printf("<  	:%s\n",yytext);
(<=)                   printf("<= 	:%s\n",yytext);
(>)                    printf(">  	:%s\n",yytext);
(>=)                   printf(">= 	:%s\n",yytext);
(==)                   printf("==  	:%s\n",yytext);
(!=)                   printf("!=  	:%s\n",yytext);
(\^)                   printf("^  	:%s\n",yytext);
(\|)                   printf("|  	:%s\n",yytext);
(&&)                   printf("&&  	:%s\n",yytext);
(\|\|)                 printf("||	:%s\n",yytext);
(\?)                   printf("? 	:%s\n",yytext);
(=)                    printf("=   	:%s\n",yytext);
(\+=)                  printf("+= 	:%s\n",yytext);
(-=)                   printf("-= 	:%s\n",yytext);
(\*=)                  printf("*= 	:%s\n",yytext);
(\/=)                  printf("/=  	:%s\n",yytext);        
(\%=)                  printf("%=  	:%s\n",yytext);
(>>=)                  printf(">>=	:%s\n",yytext);
(<<=)                  printf("<<=	:%s\n",yytext);
(&=)                   printf("&=   	:%s\n",yytext);
(^=)                   printf("^=  	:%s\n",yytext);
(\|=)                  printf("|=  	:%s\n",yytext);
(,)                    printf(",    	:%s\n",yytext);
(;)                    printf(";    	:%s\n",yytext);
(:)                    printf(":    	:%s\n",yytext);
(\{)                   printf("{    	:%s\n",yytext);
(\})		       printf("}    	:%s\n",yytext);



#.*					printf("(Precompile)	:%s\n",yytext);
\".*\"					printf("(String)	:%s\n",yytext);
[\ \n\t]              
((-)?([1-9][0-9]*|0))|(0x[a-fA-f0-9]+)     printf("(Integer)     :%s\n",yytext); 
(-)?([1-9][0-9]*|0)\.[0-9]+     printf("(Float)     :%s\n",yytext); 
(\/\/.*\n)      		printf("(Notation)   : %s\n",yytext); 
[a-zA-Z_][a-zA-Z0-9_]*  printf("ID     :%s\n",yytext); 

"."              printf("Unknown : %c\n", yytext[0]);
















%%
int main()
{
	yyin=fopen("test.c","r"); 
	linenum=0;
	yylex(); /* 进行分析 */  
	printf("\nLine Count: %d\n",linenum); return 0; 
}
int yywrap() {  return 1; } 
