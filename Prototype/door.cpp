#include "door.h"

Door::Door()
{
}

Door::Door(const Door & d)
{
    _room1 = d._room1;
    _room2 = d._room2;
}

void Door::Initialize(Room * r1, Room * r2)
{
    _room1 = r1;
    _room2 = r2;
}

Door * Door::Clone() const
{
    return new Door(*this);
}

void Door::Enter()
{

}

Room * Door::OtherSideFrom(Room *)
{
    return 0;
}
