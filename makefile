#Makefile for "listed" C++ application
#Created by A random guy from LP :v (me) 11/09/2018

PROG = bin/listed
CC = g++
CPPFLAGS = -O0 -g -W -Wall -pedantic -std=c++11 -Iinclude
OBJS = main.o lista_encadeada.o
RM = -f *.o

$(PROG) : $(OBJS)
	$(CC) $(OBJS) -o $(PROG)
	mv *.o build/

main.o : 
	$(CC) $(CPPFLAGS) -c src/main.cpp

lista_encadeada.o : include/lista_encadeada.hpp
	$(CC) $(CPPFLAGS) -c src/lista_encadeada.cpp

clean:
	rm -f $(PROG) build/*.o