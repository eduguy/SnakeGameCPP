#include "board.h"
Board:: Board(int size, Snake* snake) {
    //initialize the snake pointer
    sn = snake;
    s= size;
    sn->setX((int) s/2);
    sn->setY((int) s/2);
    
    //initialize the board array
    for (int i = 0; i<s; i++) {
        vector<states> vec;
        for (int j = 0; j<s; j++) {
            vec.push_back(Empty);
        }
        board.push_back(vec);
    }
}


void Board::printOut() {
    system("cls");
    for (int i = 0; i<s; i++) {
        for (int j=0; j<s;j++) {
            int x = sn->getHead().first;
            int y = sn->getHead().second;
            if (i == y && j == x) {
                cout << "S ";
            } else {
                cout << ". ";
            }
        }
        cout << endl;
    }
}