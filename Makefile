output: main.o board.o snake.o
	g++ main.o board.o snake.o -o output

main.o: main.cpp
	g++ -c main.cpp

board.o: board.cpp board.h
	g++ -c board.cpp

snake.o: snake.cpp snake.h
	g++ -c snake.cpp
	
clean:
	rm *.o output