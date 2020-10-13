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
            //TODO: With a tail, printing will be more difficult
            //      this code could possibly work but very jank
            int x = sn->getHead().first;
            int y = sn->getHead().second;
            if (i == y && j == x) {
                cout << "S ";
            } 
            else if (board[i][j] == Food) {
                cout << "A ";
            } 
            // else if (true) {
            //     for (pair<int,int> p : sn->tail) {
            //         if (p.first == j && p.second == i) {
            //             cout << "s ";
            //         }
            //     }
            // }
            else
            {
                cout << ". ";
            }

        }
        cout << endl;
    }

}

void Board::newFood() {
    //TODO: why is this not really random?
    int randX = rand() % s;
    int randY = rand() & s;
    board[randY][randX] = Food;
}

void Board::checkFood() {
    pair<int,int> x = sn->getHead();
    if (board[x.second][x.first] == Food) {
        sn->grow();
        int y1 = x.second;
        int x1 = x.first;
        board[y1][x1] == Empty;
        newFood();
        //TODO: Confirm that these are the right cooridnates
        //      program stops after the second food?
    }
}

void Board::checkBoundary() {
    //TODO: check to make sure s and it's tail stays in the board
}