#ifndef EXOTICDUCK_H
#define EXOTICDUCK_H

#include "DuckBase.h"
#include "Quack\ExoticQuack.h"

class ExoticDuck : public DuckBase
{
public:
    ExoticDuck()
    {
        SetQuackBehaviour(new ExoticQuack());
    }

    void Display()
    {
        cout << "Hi! I'm an exotic duck!" << endl;
    }
};

#endif // EXOTICDUCK_H
