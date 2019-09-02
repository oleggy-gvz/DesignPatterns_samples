#ifndef HOTDOG_HPP
#define HOTDOG_HPP

#include <iostream>
#include "FastFood.hpp"

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

#endif // HOTDOG_HPP
