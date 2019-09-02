#ifndef NOFLY_HPP
#define NOFLY_HPP

#include <iostream>
#include "IFlyable.hpp"

using namespace std;

class NoFly : public IFlyable
{
public:
    void Fly()
    {
        cout << "<no fly>" << endl;
    }
};

#endif // NOFLY_HPP
