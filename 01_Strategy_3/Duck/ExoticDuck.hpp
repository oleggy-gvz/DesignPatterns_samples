#ifndef EXOTICDUCK_HPP
#define EXOTICDUCK_HPP

#include "DuckBase.hpp"
#include "Quack\ExoticQuack.hpp"

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

#endif // EXOTICDUCK_HPP
