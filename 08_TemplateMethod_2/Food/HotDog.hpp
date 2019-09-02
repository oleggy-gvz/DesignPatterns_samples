#ifndef HOTDOG_HPP
#define HOTDOG_HPP

#include <iostream>
#include "FastFood.hpp"

using namespace std;

class HotDog : public FastFood
{
public:
    void PrepareMainIngredient()
    {
        cout << "Sausage" << endl;
    }

    void AddTopings()
    {
        cout << "Mustard" << endl;
    }
};

#endif // HOTDOG_HPP
