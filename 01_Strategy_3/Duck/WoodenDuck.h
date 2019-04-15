#ifndef WOODENDUCK_H
#define WOODENDUCK_H

#include "DuckBase.h"
#include "Fly\NoFly.h"
#include "Quack\NoQuack.h"

class WoodenDuck : public DuckBase
{
public:
    WoodenDuck()
    {
        SetFlyBehaviour(new NoFly());
        SetQuackBehaviour(new NoQuack());
    }

    void Display()
    {
        cout << "Hi! I'm an wooden duck!" << endl;
    }
};

#endif // WOODENDUCK_H
