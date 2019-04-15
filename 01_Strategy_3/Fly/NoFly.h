#ifndef NOFLY_H
#define NOFLY_H

#include <iostream>
#include "IFlyable.h"

using namespace std;

class NoFly : public IFlyable
{
public:
    void Fly()
    {
        cout << "<no fly>" << endl;
    }
};

#endif // NOFLY_H
