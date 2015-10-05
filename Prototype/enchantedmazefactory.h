#ifndef ENCHANTEDMAZEFACTORY_H
#define ENCHANTEDMAZEFACTORY_H

#include "mazefactory.h"

class EnchantedMazeFactory : public MazeFactory
{
public:
    EnchantedMazeFactory();

    virtual Room * MakeRoom(int roomNo) const;
    virtual Door * MakeDoor(Room *r1, Room *r2) const;

protected:
    //Spell * CastSpell() const;
};

#endif // ENCHANTEDMAZEFACTORY_H
