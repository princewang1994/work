all:	server.o client.o
server.o:	server.c msg.h
	gcc server.c -o server.o

client.o:	client.c msg.h
	gcc client.c -o client.o		
clean:
	-rm *.o


