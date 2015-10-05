#ifndef MAZE_H
#define MAZE_H

#include "room.h"

class Maze
{
public:
    Maze();

    void AddRoom(Room *);
    Room * RoomNo(int roomNo) const;

private:

};

#endif // MAZE_H
