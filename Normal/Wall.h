#ifndef WALL_H
#define WALL_H

#include <iostream>

#include "MapSite.h"

using namespace std;

class Wall : public MapSite
{
public:
    Wall();

    virtual void Enter();
};

#endif // WALL_H
