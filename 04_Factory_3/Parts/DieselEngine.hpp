#ifndef DIESELENGINE_HPP
#define DIESELENGINE_HPP

#include "Engine.hpp"

class DieselEngine : public Engine
{
public:
    DieselEngine()
    {
        cout << "Engine is Diesel" << endl;
    }
};

#endif // DIESELENGINE_HPP
