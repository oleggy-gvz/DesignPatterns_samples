#ifndef FASTFOOD_HPP
#define FASTFOOD_HPP

#include <iostream>

using namespace std;

class FastFood
{
public:
    void Prepare()
    {
        RoastBread();
        PrepareMainIngredient();
        PutVegetables();

        if (CustomerWantsTopings())
            AddTopings();
    }
    virtual void PrepareMainIngredient() = 0;
    virtual void AddTopings() = 0;

    virtual bool CustomerWantsTopings()
    {
        return true;
    }

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
