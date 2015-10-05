#include "mazeprototypefactory.h"

MazePrototypeFactory::MazePrototypeFactory(Maze * m, Wall * w, Room * r, Door * d)
{
    _prototypeMaze = m;
    _prototypeWall = w;
    _prototypeDoor = d;
    _prototypeRoom = r;
}

Maze * MazePrototypeFactory::MakeMaze() const
{
return 0;
}

Room * MazePrototypeFactory::MakeRoom(int roomNo) const
{
return 0;
}

Wall * MazePrototypeFactory::MakeWall() const
{
    return 0;//_prototypeWall->Clone();
}

Door * MazePrototypeFactory::MakeDoor(Room *r1, Room *r2) const
{
    Door * door = _prototypeDoor->Clone();
    door->Initialize(r1, r2);
    return door;
}
