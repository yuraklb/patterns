#ifndef MAZEFACTORY_H
#define MAZEFACTORY_H

#include "Maze.h"
#include "Door.h"
#include "Wall.h"
#include "Room.h"

class MazeFactory
{
public:
    MazeFactory();

    virtual Maze * MakeMaze() const;
    virtual Door * MakeDoor(Room * pR1 = 0, Room * pR2 = 0) const;
    virtual Wall * MakeWall() const;
    virtual Room * MakeRoom(int pRoomNumber) const;

};

#endif // MAZEFACTORY_H
