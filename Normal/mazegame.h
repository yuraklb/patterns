#ifndef MAZEGAME_H
#define MAZEGAME_H

#include <iostream>

#include "maze.h"
#include "room.h"
#include "direction.h"
#include "door.h"
#include "wall.h"

using namespace std;

class MazeGame
{
public:
    MazeGame();

    Maze * CreateMaze();

};

#endif // MAZEGAME_H
