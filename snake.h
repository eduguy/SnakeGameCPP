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
    pair<int,int> getHead();

    private:
    pair<int,int> head;
    int length;
    int speedX;
    int speedY;
    enum direction{North, East, South, West} dir;
};