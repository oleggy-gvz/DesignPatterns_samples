#ifndef FASTFOOD_HPP
#define FASTFOOD_HPP

#include <iostream>

using namespace std;

class FastFood // базовый класс
{
public:
    virtual void Prepare() = 0;

    void RoastBread()
    {
        cout << "Bread" << endl;
    }

    void PutVegetables()
    {
        cout << "Vegetables" << endl;
    }
};

#endif // FASTFOOD_HPP
