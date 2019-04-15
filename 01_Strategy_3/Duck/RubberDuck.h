#ifndef RUBBERDUCK_H
#define RUBBERDUCK_H

#include "DuckBase.h"
#include "Fly\NoFly.h"

class RubberDuck : public DuckBase
{
public:
    RubberDuck()
    {
        SetFlyBehaviour(new NoFly());
    }

    void Display()
    {
        cout << "Hi! I'm an rubber duck!" << endl;
    }
};

#endif // RUBBERDUCK_H
