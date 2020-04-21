#include "door.hpp"
#include <iostream>

using namespace std;

class student
{
    private:
        string name;
        room* currRoom;
    

    public:
        student(string name, room* startingpostion);
        void move(int direction);
        room* getcurrRoom();


};