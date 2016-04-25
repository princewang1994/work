CPP=g++

clex:	main.o	CLex.o
	$(CPP) -o clex main.o CLex.o
main.o:	main.cpp
	$(CPP) -c main.cpp
CLex.o: CLex.cpp
	$(CPP) -c CLex.cpp
clean:
	rm *.o clex
