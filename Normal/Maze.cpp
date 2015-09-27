#include "Maze.h"

Maze::Maze()
{
    cout << "Construct Maze" << endl;
}

void Maze::AddRoom(Room *pRoom)
{
    cout << "Add room = " << pRoom->GetNumber() << endl;
}
