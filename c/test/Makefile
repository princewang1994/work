all:	app
app:	main.o	op.o
	gcc -o app main.o op.o 
main.o:	main.c	op.o
op.o:	op.h	op.c

clear:	
	-rm *.o
	-rm app
