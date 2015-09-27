#ifndef MAZEGAME_H
#define MAZEGAME_H

//#include <iostream>

#include "Maze.h"
#include "Room.h"
#include "Direction.h"
#include "Door.h"
#include "Wall.h"

//using namespace std;

class MazeGame
{
public:
    MazeGame();

    Maze * CreateMaze();

};

#endif // MAZEGAME_H
