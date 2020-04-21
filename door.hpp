#include "room.hpp"
#include <iostream>
using namespace std;

class door
{


 private:
    room* currRoom;
    room* accessRoom;
        
        
public:
    door(room* currRoom, room* accessRoom, bool isLocked);
    bool isLocked;



    
};