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
        head.first -= speedX;
    }
    if (dir == South) {
        head.second += speedY;
    }
    if (dir == West) {
        head.first += speedX;
    }
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