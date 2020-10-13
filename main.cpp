#include <iostream>
#include "board.h"
#include <conio.h> 
#ifdef _WIN32
#include <Windows.h>
#else
#include <unistd.h>
#endif
using namespace std;
int input;
bool gameOn;
int size = 12;
Snake snake;
Board b(size, &snake);
void checkUserInput() {
    //TODO: not sure if getch is a good solution
    //      
    if(_kbhit()) {
    char input = getch();
    switch(input) {
        case 'w': 
            snake.setDirection(1);
            break;
        case 'a': 
            snake.setDirection(4);
            break;
        case 's': 
            snake.setDirection(3);
            break;
        case 'd': 
            snake.setDirection(2);
            break;
        default:
            break;
    }
    }
}
int main(){
    gameOn = true;
    int i = 0;
    b.newFood();
    // b.printOut();

    while (true) {
        checkUserInput();
        snake.move();
        b.checkBoundary();
        b.checkFood();
        b.printOut();
        // i++;
        //TODO: just need this for now to make it easier to test
        // Sleep(100);
        
    }

        
}

/* 
    board needs information from snake to render it onto console
    main also needs access to the same snake to change directions on input
    pointer could make mem leaks 
    however, it needs to be a pointer because if we pass snake to board constructror,
    the snake object will go out of scope if it is not dynamically allocated
 */