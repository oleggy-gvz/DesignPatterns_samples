#ifndef HOTDOG_HPP
#define HOTDOG_HPP

#include <iostream>
#include <algorithm>
#include "FastFood.hpp"

using namespace std;

class HotDog : public FastFood
{
public:
    void PrepareMainIngredient()
    {
        cout << "Sausage" << endl;
    }

    bool CustomerWantsTopings()
    {
        string userImput;
        cout << "Do you want mustard? (yes/y/no/n)" << endl;
        cin >> userImput;
        transform(userImput.begin(), userImput.end(), userImput.begin(), ::tolower);
        return userImput == "yes" || userImput == "y";
    }

    void AddTopings()
    {
        cout << "Mustard" << endl;
    }
};

#endif // HOTDOG_HPP
