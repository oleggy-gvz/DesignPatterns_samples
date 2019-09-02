#ifndef GASOLINEENGINE_HPP
#define GASOLINEENGINE_HPP

#include "Engine.hpp"

using namespace std;

class GasolineEngine : public Engine
{
public:
    GasolineEngine()
    {
        cout << "Engine is gasoline" << endl;
    }
};

#endif // GASOLINEENGINE_HPP
