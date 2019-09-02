#ifndef THERMO_HPP
#define THERMO_HPP

#include <iostream>

using namespace std;

class Thermo
{
public:
    int GetTemperature()
    {
        return 50;
    }

    void WarmUp(int degrees)
    {
        cout << "Warm for " << degrees << " degrees" << endl;
    }
};

#endif // THERMO_HPP
