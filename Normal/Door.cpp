#include "Door.h"

Door::Door(Room *pR1, Room *pR2)
{
    mRoom1 = pR1;
    mRoom2 = pR2;
    cout << "Construct Door R1 = " << pR1->GetNumber() << " R2 = " << pR2->GetNumber() << endl;
}

void Door::Enter()
{
    cout << "Enter in Door" << endl;
}

Room *Door::OtherSideFrom(Room * pR)
{
    if(pR == mRoom1)
        return mRoom2;
    else if (pR == mRoom2)
        return mRoom1;
    else
        return NULL;
}
