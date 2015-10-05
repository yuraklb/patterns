#include "enchantedmazefactory.h"

EnchantedMazeFactory::EnchantedMazeFactory()
{
    cout << "Construct enchanted maze factory" << endl;
}

Room * EnchantedMazeFactory::MakeRoom(int pRoomNumber) const
{
    cout << "Create SuperRoom" << endl;

    return new Room(pRoomNumber);
}

