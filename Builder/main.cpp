#include <iostream>

#include "maze.h"
#include "mazegame.h"
#include "standartmazebuilder.h"

using namespace std;

int main()
{

    MazeGame game;

    StandartMazeBuilder builder;

    game.CreateMaze(builder);

   // cout << "Hello World!" << endl;
    return 0;
}

