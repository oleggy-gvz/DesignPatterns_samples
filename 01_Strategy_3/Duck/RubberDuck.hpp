#ifndef RUBBERDUCK_HPP
#define RUBBERDUCK_HPP

#include "DuckBase.hpp"
#include "Fly\NoFly.hpp"

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

#endif // RUBBERDUCK_HPP
