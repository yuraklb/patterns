#ifndef MAZE_H
#define MAZE_H

//#include <iostream>

#include "Room.h"

//using namespace std;

class Maze
{
public:
    Maze();

    void AddRoom(Room * pRoom);

    Room * RoomNo(int pRoomNumber) const;
};

#endif // MAZE_H
