#ifndef HOTDOG_H
#define HOTDOG_H

#include <iostream>
#include "FastFood.h"

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

#endif // HOTDOG_H
