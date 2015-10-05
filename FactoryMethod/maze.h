#ifndef MAZE_H
#define MAZE_H

#include <iostream>
#include <list>

#include "room.h"

using namespace std;


class Maze
{
public:
    Maze();

    void AddRoom(Room * pRoom);

    Room * GetRoomByNumber(int pRoomNumber) const;

private :

    list<Room *> mRooms;

};

#endif // MAZE_H
