#ifndef MAZEGAME_H
#define MAZEGAME_H

#include "maze.h"
#include "room.h"
#include "direction.h"
#include "door.h"
#include "wall.h"
#include "mazefactory.h"

using namespace std;

class MazeGame
{
public:
    MazeGame();

    Maze * CreateMaze(MazeFactory * pFactory);

};

#endif // MAZEGAME_H
