#include <iostream>
#include <string>
#include <vector> 

using namespace std;

class Snake
{
    public:
    Snake(); 
    void move();
    void setX(int x);
    void setY(int y);
    void setSpeedX(int x);
    void setSpeedY(int y);
    void setDirection(int d);
    pair<int,int> getHead();
    void grow();
    vector<pair<int,int>> tail;

    private:

    pair<int,int> head;
    int length;
    //list of points in the tail need to use it for collisions
    int speedX;
    int speedY;
    enum Directions {North, East, South, West} dir;

};