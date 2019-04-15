#ifndef MEDIUMWHEELS_H
#define MEDIUMWHEELS_H

#include "Wheels.h"

using namespace std;

class MediumWheels : public Wheels
{
public:
    MediumWheels()
    {
        cout << "Wheels are 16\"" << endl;
    }
};

#endif // MEDIUMWHEELS_H
