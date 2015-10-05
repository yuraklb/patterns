#include "maze.h"

Maze::Maze()
{
    cout << "Construct Maze" << endl;

    mRooms.clear();

}

void Maze::AddRoom(Room *pRoom)
{
    cout << "Add room = " << pRoom->GetNumber() << endl;

    mRooms.push_back(pRoom);
}

Room *Maze::GetRoomByNumber(int pRoomNumber) const
{
    cout << "Return room with number " << pRoomNumber << endl;

    for(list<Room *>::const_iterator it = mRooms.begin(); it != mRooms.end(); it++) {
        if((*it)->GetNumber() == pRoomNumber) {
            return *it;
        }
    }

    return NULL;
}
