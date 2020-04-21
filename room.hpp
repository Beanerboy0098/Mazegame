#include <iostream>
using namespace std;

class room
{
    private:
        string name;
        int direction;
        room* currRoom;

    public:
        room* getcurrRoom();
        room(string room);
        int Numofpeople;
        room* northroom;
        room* westroom;
        room* eastroom;
        room* southroom;

        void Pathlines(room* next, int direction);
        void Add(string name, int direction);
        void traveling(int direction);
        void DisplayRoomInfo();
};