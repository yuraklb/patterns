#ifndef ENCHANTEDMAZEFACTORY_H
#define ENCHANTEDMAZEFACTORY_H

#include "mazefactory.h"

using namespace std;

class EnchantedMazeFactory : public MazeFactory
{
public:
    EnchantedMazeFactory();

    virtual Room * MakeRoom(int pRoomNumber) const;
};

#endif // ENCHANTEDMAZEFACTORY_H
