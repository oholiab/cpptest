build: test.cpp game.h
	g++ -Wall -o test.out test.cpp

test.o: test.cpp game.h
	g++ -Wall -c test.cpp
