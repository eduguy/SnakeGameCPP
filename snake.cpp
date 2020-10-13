#include "snake.h"
Snake::Snake() {
    length = 1;

    speedX = 1;
    speedY = 1;
    dir = North;
}

void Snake::move() {
    if (dir == North) {
        head.second -= speedY;
    } 
    if (dir == East) {
        head.first += speedX;
    }
    if (dir == South) {
        head.second += speedY;
    }
    if (dir == West) {
        head.first -= speedX;
    }
}

void Snake::setDirection(int d) {
    if (d == 1) {
        dir = North;
    }
    if (d==2) {
        dir = East;
    }
    if (d==3) {
        dir=South;
    }
    if (d==4) {
        dir= West;
    }
    
    // switch (d) {
    //     case 1:
    //         dir = North;
    //     case 2:
    //         dir = East;
    //     case 3: 
    //         dir = South;
    //     case 4:
    //         dir = West;
    //     default:
    //         break;
    // }
}

pair<int,int> Snake::getHead() {
    return head;
}

void Snake::setX(int x) {
    head.first = x;
}

void Snake::setY(int y) {
    head.second = y;
}

void Snake::setSpeedX(int x) {
    speedX = x;

}

void Snake::setSpeedY(int y) {
    speedY = y;
    
}