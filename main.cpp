#include <iostream>
#include "board.h"
using namespace std;
int input;
bool gameOn;
int size = 12;
int main(){
    Snake snake;
    gameOn = true;
    Board b(size, &snake);
    int i = 0;
    // while (i<3){
    //     snake.move();
    //     b.printOut();
    //     i++;
    // }
        
}

/* 
    board needs information from snake to render it onto console
    main also needs access to the same snake to change directions on input
    pointer could make mem leaks 
    however, it needs to be a pointer because if we pass snake to board constructror,
    the snake object will go out of scope if it is not dynamically allocated
 */