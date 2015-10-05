#ifndef MAZEFACTORY_H
#define MAZEFACTORY_H

#include "wall.h"
#include "maze.h"
#include "door.h"
#include "room.h"

class MazeFactory
{
public:
    MazeFactory();

    virtual Maze * MakeMaze() const;
    virtual Wall * MakeWall() const;
    virtual Room * MakeRoom(int roomNo) const;
    virtual Door * MakeDoor(Room * r1, Room * r2) const;

};

#endif // MAZEFACTORY_H
