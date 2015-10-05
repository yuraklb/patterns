#include "mazegame.h"

MazeGame::MazeGame()
{
}

Maze * MazeGame::CreateMaze(MazeFactory &mazeFactory)
{
    Maze * aMaze = mazeFactory.MakeMaze();

    Room * r1 = mazeFactory.MakeRoom(1);
    Room * r2 = mazeFactory.MakeRoom(2);

    Door * theDoor = mazeFactory.MakeDoor(r1,r2);
    aMaze->AddRoom(r1);
    aMaze->AddRoom(r2);

    r1->SetSide(Noth, mazeFactory.MakeWall());
    r1->SetSide(East, theDoor);
    r1->SetSide(South, mazeFactory.MakeWall());
    r1->SetSide(West, mazeFactory.MakeWall());

    r2->SetSide(Noth, mazeFactory.MakeWall());
    r2->SetSide(East, mazeFactory.MakeWall());
    r2->SetSide(South, mazeFactory.MakeWall());
    r2->SetSide(West, theDoor);

    return aMaze;
}
