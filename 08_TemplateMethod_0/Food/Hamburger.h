#ifndef HAMBURGER_H
#define HAMBURGER_H

#include <iostream>

using namespace std;

class Hamburger
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

    void PutVegetables()
    {
        cout << "Vegetables" << endl;
    }

    void RoastBread()
    {
        cout << "Bread" << endl;
    }
};

#endif // HAMBURGER_H
