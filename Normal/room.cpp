#include "room.h"

Room::Room(int pRoomNumber)
{
    mRoomNumber = pRoomNumber;

    cout << "Construct room = " << mRoomNumber << endl;
}

MapSite *Room::GetDirection(Direction pDirerciont) const
{

    return mSides[pDirerciont];

//    switch (dir)
//    case North:
//        break;
//    case South:
//        break;
//    case East:
//        break;
//    case West:
//        break;
//    default:
//        return NULL;

}

void Room::SetSide(Direction pDirection, MapSite * pMapSite)
{
    mSides[pDirection] = pMapSite;

    cout << "Set side " << pDirection << " MapSite " << pMapSite->GetName() << endl;
}

void Room::Enter()
{
    cout << "Enter in Room = " << mRoomNumber << endl;
}

string Room::GetName() const
{
    return "Room";
}

int Room::GetNumber() const
{
    return mRoomNumber;
}
