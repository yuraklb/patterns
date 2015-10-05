#ifndef MAZEGAME_H
#define MAZEGAME_H

#include "maze.h"
#include "room.h"
#include "door.h"
#include "wall.h"
#include "mazefactory.h"

class MazeGame
{
public:
    MazeGame();
    Maze * CreateMaze(MazeFactory& mazeFactory);
};

#endif // MAZEGAME_H
