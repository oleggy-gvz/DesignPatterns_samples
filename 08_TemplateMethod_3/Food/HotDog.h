#ifndef HOTDOG_H
#define HOTDOG_H

#include <iostream>
#include <algorithm>
#include "FastFood.h"

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

#endif // HOTDOG_H
