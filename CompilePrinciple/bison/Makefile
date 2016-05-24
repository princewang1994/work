CC=gcc
lex:	lex.yy.o
	$(CC) -o lex lex.yy.o
lex.yy.o:	lex.yy.c
	$(CC) -c lex.yy.c -lfl	
lex.yy.c:	clex.l
	flex clex.l
clean:
	rm *.o lex 
