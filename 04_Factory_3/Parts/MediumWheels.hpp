#ifndef MEDIUMWHEELS_HPP
#define MEDIUMWHEELS_HPP

#include "Wheels.hpp"

using namespace std;

class MediumWheels : public Wheels
{
public:
    MediumWheels()
    {
        cout << "Wheels are 16\"" << endl;
    }
};

#endif // MEDIUMWHEELS_HPP
