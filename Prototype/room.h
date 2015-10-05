#ifndef ROOM_H
#define ROOM_H

#include "main.h"
#include "mapsite.h"

class Room : public MapSite
{
public:
    Room(int roomNo);
    MapSite * GetSite(Direction) const;
    void SetSide(Direction, MapSite *);

    virtual void Enter();

private:
    MapSite * _sides[4];
    int _roomNumber;
};

#endif // ROOM_H
