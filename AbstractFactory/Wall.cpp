#include "Wall.h"

Wall::Wall()
{
    cout << "Construct Wall" << endl;
}

void Wall::Enter()
{
    cout << "Enter in Wall" << cout;
}

string Wall::GetName() const
{
    return "Wall";
}
