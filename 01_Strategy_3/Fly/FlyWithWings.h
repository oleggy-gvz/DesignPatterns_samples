#ifndef FLAYWITHWINGS_H
#define FLAYWITHWINGS_H

#include <iostream>
#include "IFlyable.h"

using namespace std;

class FlyWithWings : public IFlyable
{
public:
    void Fly()
    {
        cout << "I'm flying with my wings" << endl;
    }
};

#endif // FLAYWITHWINGS_H
