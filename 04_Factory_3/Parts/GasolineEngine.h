#ifndef GASOLINEENGINE_H
#define GASOLINEENGINE_H

#include "Engine.h"

using namespace std;

class GasolineEngine : public Engine
{
public:
    GasolineEngine()
    {
        cout << "Engine is gasoline" << endl;
    }
};

#endif // GASOLINEENGINE_H
