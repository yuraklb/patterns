#include "standartmazebuilder.h"

StandartMazeBuilder::StandartMazeBuilder()
{
    cout << "Construct Standart Maze Builder" << endl;
}


void StandartMazeBuilder::BuildMaze()
{
    mCurrentMaze = new Maze;
}

void StandartMazeBuilder::BuildRoom(int roomNo)
{
    if(!mCurrentMaze->GetRoomByNumber(roomNo))
    {
        Room * room = new Room(roomNo);
        mCurrentMaze->AddRoom(room);

        room->SetSide(North, new Wall);
        room->SetSide(East, new Wall);
        room->SetSide(South, new Wall);
        room->SetSide(West, new Wall);

    }
}

void StandartMazeBuilder::BuildDoor(int roomFrom, int roomTo)
{
    Room * r1 = mCurrentMaze->GetRoomByNumber(roomFrom);
    Room * r2 = mCurrentMaze->GetRoomByNumber(roomTo);

    Door * d = new Door(r1, r2);

    r1->SetSide(CommonWall(r1,r2), d);
    r2->SetSide(CommonWall(r2,r1), d);
}

Maze * StandartMazeBuilder::GetMaze()
{
    return mCurrentMaze;
}

Direction StandartMazeBuilder::CommonWall(Room * r1, Room * r2)
{
    return North;
}
