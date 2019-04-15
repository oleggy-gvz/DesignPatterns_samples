#ifndef HAMBURGER_H
#define HAMBURGER_H

#include <iostream>
#include "FastFood.h"

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

#endif // HAMBURGER_H
