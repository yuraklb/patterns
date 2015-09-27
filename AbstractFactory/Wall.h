#ifndef WALL_H
#define WALL_H

//#include <iostream>

#include "MapSite.h"

//using namespace std;

class Wall : public MapSite
{
public:
    Wall();

    virtual void Enter();

    virtual string GetName() const;
};

#endif // WALL_H
