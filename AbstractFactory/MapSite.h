#ifndef MAPSITE_H
#define MAPSITE_H

#include <iostream>

using namespace std;

class MapSite {
public :
    virtual void Enter() = 0;
    virtual string GetName() const = 0;

};

#endif // MAPSITE_H
