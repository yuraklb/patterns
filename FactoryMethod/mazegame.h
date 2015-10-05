#ifndef MAZEGAME_H
#define MAZEGAME_H

#include "maze.h"
#include "room.h"
#include "door.h"
#include "wall.h"

class MazeGame
{
public:
    MazeGame();

    virtual Maze * MakeMaze() const;
    virtual Room * MakeRoom(int roomNo) const;
    virtual Door * MakeDoor(Room * r1, Room * r2) const;
    virtual Wall * MakeWall() const;

    Maze * CreateMaze();
};

#endif // MAZEGAME_H
