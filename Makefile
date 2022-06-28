CC = g++
FLAGS = -std=c++14 -Wall -g
OBJS = Main.o
FILES = Main.cpp Header.h

all: Hw6

Hw6: $(OBJS)
	$(CC) $(FLAGS) $(OBJS) -o Hw6

Main.o: Main.cpp Header.h
	$(CC) $(FLAGS) -c Main.cpp

tar:
	tar -cf Hw6.tar Hw6.scr Makefile $(FILES)

clean:
	rm *.o *.tar *.scr Hw6

sudoClean:
	rm *.o *.scr Hw6