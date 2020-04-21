#include <iostream>
#include "student.hpp"

using namespace std;

int main()

{

    room* locklair = new room("Dr. Locklair's Office");

    room* lobby = new room("Lobby");

    door* locklobby = new door(lobby, locklair, true);

    locklair->Pathlines(lobby, 2);

    room* server = new room("Server Room");

    lobby->Pathlines(server, 1);

    room* esports = new room("Esports");

    lobby->Pathlines(esports, 3);

    room* hall0 = new room("Hallway 0");

    lobby->Pathlines(hall0, 2);



    room* hall1 = new room("Hallway 1");

    hall1->Pathlines(hall0, 3);

    room* hall15 = new room("Hallway 1.5");

    hall1->Pathlines(hall15, 1);

    room* hall175 = new room("Hallway 1.75");

    hall15->Pathlines(hall175, 2);

    room* hall2 = new room("Hallway 2");

    hall15->Pathlines(hall2, 1);

    room* s120 = new room("Classroom S120");

    hall0->Pathlines(s120, 3);

    room* advLab1 = new room("Advanced Lab 1");

    hall2->Pathlines(advLab1, 2);

    room* advLab2 = new room("Advanced Lab 2");

    advLab1->Pathlines(advLab2, 1);

    room* s118 = new room("Classroom S118");

    hall2->Pathlines(s118, 4);

    room* macLab2 = new room("Mac Lab2");

    s118->Pathlines(macLab2, 1);

    room* macLab1 = new room("MacLab1");

    macLab2->Pathlines(macLab1, 2);

    hall2->Pathlines(macLab1, 1);

    student* newstudent = new student("Benjamin Huber", hall175);

    newstudent->getcurrRoom()->DisplayRoomInfo();

    int Userinput = 0;

    while(Userinput != -1)
    {
        cout<<"Which way would you like to go? (Type '-1' to quit) ";

        cin>>Userinput;

        newstudent->move(Userinput);
    }





}