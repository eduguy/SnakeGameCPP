#include <iostream>
#include <string>
#include <vector> 
#include "snake.h"

using namespace std;

class Board
{
    public:

    Board(int size, Snake* snake); 
    void printOut();
    private:

    enum states {Occupied, Empty, Food} state;
    //2d vector to represent a board, each spot can have a state
    //occupied if your tail is in it, empty if nothing, food if food in it
    vector<vector<states>> board;
    int s;
    Snake* sn;
};