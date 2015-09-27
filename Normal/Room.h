#ifndef ROOM_H
#define ROOM_H

#include <iostream>

#include "Direction.h"
#include "MapSite.h"

using namespace std;

class Room : public MapSite
{
public:
    Room(int pRoomNumber);

    MapSite * GetDirection(Direction pDirerciont) const;
    void SetSide(Direction pDirerciont, MapSite * pMapSite);

    virtual void Enter();

    int GetNumber() const;

private:
    MapSite * mSides[4];
    int mRoomNumber;
};

#endif // ROOM_H
