#include <iostream>

#include "maze.h"
#include "mazegame.h"
#include "enchantedmazefactory.h"

using namespace std;

int main()
{

    MazeGame game;

    MazeFactory * factory = new MazeFactory();
    MazeFactory * factory2 = new EnchantedMazeFactory();

    Maze * maze = game.CreateMaze(factory);

    Maze * maze2 = game.CreateMaze(factory2);


   // cout << "Hello World!" << endl;
    return 0;
}

