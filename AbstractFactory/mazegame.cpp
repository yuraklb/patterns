#include "mazegame.h"

MazeGame::MazeGame()
{
    cout << "Construct MazeGame" << endl;
}

Maze * MazeGame::CreateMaze(MazeFactory * pFactory)
{

    Maze * aMaze = pFactory->MakeMaze();
    Room * r1 = pFactory->MakeRoom(1);
    Room * r2 = pFactory->MakeRoom(2);

    Door * theDoor = pFactory->MakeDoor(r1,r2);

    aMaze->AddRoom(r1);
    aMaze->AddRoom(r2);

    r1->SetSide(North, pFactory->MakeWall());
    r1->SetSide(East, theDoor);
    r1->SetSide(South, pFactory->MakeWall());
    r1->SetSide(West, pFactory->MakeWall());

    r2->SetSide(North, pFactory->MakeWall());
    r2->SetSide(East, pFactory->MakeWall());
    r2->SetSide(South, pFactory->MakeWall());
    r2->SetSide(West, theDoor);

    return aMaze;

}



