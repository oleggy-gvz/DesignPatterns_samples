#ifndef WOODENDUCK_HPP
#define WOODENDUCK_HPP

#include "DuckBase.hpp"
#include "Fly\NoFly.hpp"
#include "Quack\NoQuack.hpp"

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

#endif // WOODENDUCK_HPP
