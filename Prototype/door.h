#ifndef DOOR_H
#define DOOR_H

#include "room.h"
#include "mapsite.h"

class Door : public MapSite
{
public:
    Door();
    Door(const Door &);

    virtual void Initialize(Room *, Room *);
    virtual Door * Clone() const;

    virtual void Enter();
    Room * OtherSideFrom(Room *);

private:
    Room * _room1;
    Room * _room2;
    bool _isOpen;

};

#endif // DOOR_H
