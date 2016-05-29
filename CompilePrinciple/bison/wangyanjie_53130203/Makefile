CC=gcc

CSyntax:lex.yy.o
	$(CC) -o CSyntax *.c 

lex.yy.o: bison.tab.c lex.yy.c
	$(CC) -c lex.yy.c -lfl

bison.tab.c:	bison.y	
	yacc -d bison.y

lex.yy.c:	clex.l
	flex clex.l 

clean:
	rm *.o CSyntax *.tab.* lex.yy.c
