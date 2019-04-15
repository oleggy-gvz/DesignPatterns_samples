#ifndef THERMO_H
#define THERMO_H

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

#endif // THERMO_H
