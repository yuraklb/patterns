#ifndef WALL_H
#define WALL_H

#include "mapsite.h"

class Wall : public MapSite
{
public:
    Wall();

    virtual void Enter();
};

#endif // WALL_H
