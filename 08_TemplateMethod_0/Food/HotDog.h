#ifndef HOTDOG_H
#define HOTDOG_H

#include <iostream>

using namespace std;

class HotDog
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

    void PutVegetables()
    {
        cout << "Vegetables" << endl;
    }

    void RoastBread()
    {
        cout << "Bread" << endl;
    }
};

#endif // HOTDOG_H
