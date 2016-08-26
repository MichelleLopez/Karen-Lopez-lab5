main:	main.o Matriz.o
	g++ main.o Matriz.o -o Matriz
	
main.o:	main.cpp Matriz.h
	g++ -c main.cpp

Matriz.o:	Matriz.cpp Matriz.h
	g++ -c Matriz.cpp 