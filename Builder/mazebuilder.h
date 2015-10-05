#ifndef MAZEBUILDER_H
#define MAZEBUILDER_H

#include "maze.h"

class MazeBuilder
{
public:


    virtual void BuildMaze() {}
    virtual void BuildRoom(int roomNo) {}
    virtual void BuildDoor(int roomFrom, int roomTo) {}

    virtual Maze * GetMaze() { return 0; }

protected:
    MazeBuilder();
};

#endif // MAZEBUILDER_H
