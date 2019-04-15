#ifndef DIESELENGINE_H
#define DIESELENGINE_H

#include "Engine.h"

class DieselEngine : public Engine
{
public:
    DieselEngine()
    {
        cout << "Engine is Diesel" << endl;
    }
};

#endif // DIESELENGINE_H
