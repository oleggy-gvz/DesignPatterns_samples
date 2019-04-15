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
        PrepareMainIngredient();
        PutVegetables();
        AddTopings();
    }

    void PrepareMainIngredient()
    {
        cout << "Meat" << endl;
    }

    void AddTopings()
    {
        cout << "Ketchup" << endl;
    }
};

#endif // HAMBURGER_H
