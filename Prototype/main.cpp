#include <iostream>

#include "mazegame.h"
#include "maze.h"
#include "mazefactory.h"
#include "enchantedmazefactory.h"

using namespace std;

int main()
{
    EnchantedMazeFactory mazefactory;

    MazeGame mazegame;

    Maze * maze = mazegame.CreateMaze(mazefactory);
}

