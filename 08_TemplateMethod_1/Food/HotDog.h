#ifndef HOTDOG_H
#define HOTDOG_H

#include <iostream>
#include "FastFood.h"

using namespace std;

class HotDog : public FastFood
{
public:
    void Prepare()
    {
        RoastBread();
        BoilSausage();
        PutVegetables();
        AddMustard();
    }

    void BoilSausage()
    {
        cout << "Sausage" << endl;
    }

    void AddMustard()
    {
        cout << "Mustard" << endl;
    }
};

#endif // HOTDOG_H
