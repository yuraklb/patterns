#ifndef STANDARTMAZEBUILDER_H
#define STANDARTMAZEBUILDER_H

#include "mazebuilder.h"
#include "wall.h"
#include "door.h"
#include "room.h"
#include "direction.h"


using namespace std;

class StandartMazeBuilder : public MazeBuilder
{
public:
    StandartMazeBuilder();

    virtual void BuildMaze();
    virtual void BuildRoom(int roomNo);
    virtual void BuildDoor(int roomFrom, int roomTo);

    virtual Maze * GetMaze();

private:
    Direction CommonWall(Room * r1, Room * r2);
    Maze * mCurrentMaze;

};

#endif // STANDARTMAZEBUILDER_H
