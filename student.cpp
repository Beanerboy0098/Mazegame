#include "student.hpp"

student::student(string name, room* startingpostion)
{
    this->currRoom = startingpostion;
    this->name = name;
    this->currRoom->Numofpeople++;
}

void student::move(int direction)
{
     if(direction == 1 && this->currRoom->northroom)
    {
        this->currRoom->Numofpeople--;
        this->currRoom = this->currRoom->northroom;
        this->currRoom->Numofpeople++;
    }
    else if(direction == 2 && this->currRoom->eastroom)
    {
        this->currRoom->Numofpeople--;
        this->currRoom = this->currRoom->eastroom;
        this->currRoom->Numofpeople++;
    }
    else if(direction == 3 && this->currRoom->southroom)
    {
        this->currRoom->Numofpeople--;
        this->currRoom = this->currRoom->southroom;
        this->currRoom->Numofpeople++;
    }
    else if(direction == 4 && this->currRoom->westroom)
    {
        this->currRoom->Numofpeople--;
        this->currRoom = this->currRoom->westroom;
        this->currRoom->Numofpeople++;
    }
    this->currRoom->DisplayRoomInfo();
}


room* student::getcurrRoom
{
    return this->currRoom;
}
