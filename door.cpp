#include "door.hpp"
#include <iostream>
using namespace std;

door::door(room* currRoom, room* accessRoom, bool isLocked)
{
    this->currRoom = currRoom;
    this->accessRoom = accessRoom;
    this->isLocked = isLocked;
}