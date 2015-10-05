#ifndef MAZEGAME_H
#define MAZEGAME_H

#include "maze.h"
#include "room.h"
#include "door.h"
#include "wall.h"
#include "mazebuilder.h"


class MazeGame
{
public:
    MazeGame();
    Maze * CreateMaze(MazeBuilder & mazeBuilder);
};

#endif // MAZEGAME_H
