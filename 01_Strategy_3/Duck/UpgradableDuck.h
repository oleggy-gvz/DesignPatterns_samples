#ifndef UPGRADABLEDUCK_H
#define UPGRADABLEDUCK_H

#include "DuckBase.h"
#include "Quack\NoQuack.h"
#include "Fly\NoFly.h"

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

#endif // UPGRADABLEDUCK_H
