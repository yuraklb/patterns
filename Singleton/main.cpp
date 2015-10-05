#include <iostream>

#include "singleton.h"

using namespace std;

int main()
{
    Singleton * sing = Singleton::GetInstance();

    sing = Singleton::GetInstance();

    sing = Singleton::GetInstance();


    return 0;
}

