#include "singleton.h"

Singleton::Singleton()
{
}

Singleton * Singleton::_instance = 0;

Singleton * Singleton::GetInstance()
{
    if(_instance == 0)
    {
        cout << "Construct" << endl;

        _instance = new Singleton();
    }

    cout << "All ready constucted" << endl;

    return _instance;

}
