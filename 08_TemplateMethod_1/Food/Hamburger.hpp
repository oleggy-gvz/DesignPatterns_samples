#ifndef HAMBURGER_HPP
#define HAMBURGER_HPP

#include <iostream>
#include "FastFood.hpp"

using namespace std;

class Hamburger : public FastFood
{
public:
    void Prepare()
    {
        RoastBread();
        FryMeat();
        PutVegetables();
        AddKetchup();
    }

    void FryMeat()
    {
        cout << "Meat" << endl;
    }

    void AddKetchup()
    {
        cout << "Ketchup" << endl;
    }
};

#endif // HAMBURGER_HPP
