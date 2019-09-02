#ifndef HAMBURGER_HPP
#define HAMBURGER_HPP

#include <iostream>
#include "FastFood.hpp"

using namespace std;

class Hamburger : public FastFood
{
public:
    void PrepareMainIngredient()
    {
        cout << "Meat" << endl;
    }

    void AddTopings()
    {
        cout << "Ketchup" << endl;
    }
};

#endif // HAMBURGER_HPP
