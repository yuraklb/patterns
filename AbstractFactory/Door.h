#ifndef DOOR_H
#define DOOR_H

#include "MapSite.h"
#include "Room.h"

//using namespace std;

class Door : public MapSite
{
public:
    Door(Room * pR1 = 0, Room * pR2 = 0);

    virtual void Enter();

    virtual string GetName() const;

    Room * OtherSideFrom(Room * pR);

private:
    Room * mRoom1;
    Room * mRoom2;

    bool mIsOpen;
};

#endif // DOOR_H
