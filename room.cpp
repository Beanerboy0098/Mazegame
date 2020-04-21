#include "room.hpp"

room::room(string name):
{
    this->name = name;
    this->northroom = 0;
    this->westroom = 0;
    this->eastroom = 0;
    this->southroom = 0;
    this->currRoom = this;

}

void room::Pathlines(room* next, int direction)
{
    if(direction == 1)
    {
        this->northroom = next;
        next->southroom = this;
    }

    if(direction == 2)
    {
        this->eastroom = next;
        next->westroom = this;
    }

    if(direction == 3)
    {
        this->southroom = next;
        next->northroom = this;

    }

    if(direction == 4)
    {
        this->westroom = next;
        next->eastroom = this;
    }




}

void room::Add(string name, int direction)
{
    room* newerRoom = new room(name);
    this->currRoom = newerRoom;

}


void room::traveling(int direction)
{
    if(direction == 1 && this->currRoom->northroom)
    {
        this->currRoom = this->currRoom->northroom;
        cout<<"I was here";
        
    }

    else if(direction == 2 && this->currRoom->eastroom)
    {
        this->currRoom = this->currRoom->eastroom;
        cout<<"I was here";
        
    }

    else if(direction == 3)
    {
        this->currRoom = this->southroom;
        cout<<"I was here";
        
    }

    
    
    else (direction == 4 && this->currRoom->westroom)
    {
        this->currRoom = this->currRoom->westroom;
        
    }






}

room* room::getcurrRoom()
{
    return this->currRoom;
}

void room::DisplayRoomInfo()
{
    cout << "You are currently in the " << this->name << " (" << this->Numofpeople<< " people) \n";
    
    if (northroom)
    {
        cout << this->northroom->name << " is to your north." << this->northroom->Numofpeople <<" people \n type '1' to go North. \n\n";

    }

    if (eastroom)
    {
        cout << this->eastroom->name << " is to your east." << this->eastroom->Numofpeople <<" people \n type '2' to go East. \n\n";
        
    }

    if (southroom)
    {
        cout << this->southroom->name << " is to your south." << this->southroom->Numofpeople <<" people \n type '3' to go South. \n\n";
        
    }

    if (westroom)
    {
        cout << this->westroom->name << " is to your west." << this->westroom->Numofpeople <<" people \n type '4' to go West. \n\n";
        
    }

    cout<<"------------------------------\n";


}