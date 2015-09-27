#include "Mazefactory.h"

MazeFactory::MazeFactory()
{
}

Maze *MazeFactory::MakeMaze() const
{
    return new Maze;
}

Door *MazeFactory::MakeDoor(Room *pR1, Room *pR2) const
{
    return new Door(pR1, pR2);
}

Wall *MazeFactory::MakeWall() const
{
    return new Wall;
}

Room *MazeFactory::MakeRoom(int pRoomNumber) const
{
    return new Room(pRoomNumber);
}
