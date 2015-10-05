#ifndef MAZEPROTOTYPEFACTORY_H
#define MAZEPROTOTYPEFACTORY_H

#include "mazefactory.h"

class MazePrototypeFactory : public MazeFactory
{
public:
    MazePrototypeFactory(Maze *m, Wall *w, Room *r, Door *d);

    virtual Maze * MakeMaze() const;
    virtual Room * MakeRoom(int roomNo) const;
    virtual Wall * MakeWall() const;
    virtual Door * MakeDoor(Room *r1, Room *r2) const;

private:
    Maze * _prototypeMaze;
    Wall * _prototypeWall;
    Door * _prototypeDoor;
    Room * _prototypeRoom;
};

#endif // MAZEPROTOTYPEFACTORY_H
