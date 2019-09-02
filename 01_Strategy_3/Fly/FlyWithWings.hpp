#ifndef FLAYWITHWINGS_HPP
#define FLAYWITHWINGS_HPP

#include <iostream>
#include "IFlyable.hpp"

using namespace std;

class FlyWithWings : public IFlyable
{
public:
    void Fly()
    {
        cout << "I'm flying with my wings" << endl;
    }
};

#endif // FLAYWITHWINGS_HPP
