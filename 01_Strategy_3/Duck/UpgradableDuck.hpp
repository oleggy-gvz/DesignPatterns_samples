#ifndef UPGRADABLEDUCK_HPP
#define UPGRADABLEDUCK_HPP

#include "DuckBase.hpp"
#include "Quack\NoQuack.hpp"
#include "Fly\NoFly.hpp"

class UpgradableDuck : public DuckBase
{
public:
    UpgradableDuck()
    {
        SetFlyBehaviour(new NoFly());
        SetQuackBehaviour(new NoQuack());
    }

    void Display()
    {
        cout << "Hi! I'm an upgradable duck!" << endl;
    }
};

#endif // UPGRADABLEDUCK_HPP
