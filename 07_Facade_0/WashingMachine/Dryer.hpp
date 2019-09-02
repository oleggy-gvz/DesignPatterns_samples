#ifndef DRYER_HPP
#define DRYER_HPP

#include <iostream>

using namespace std;

class Dryer
{
public:
    void Dry(int seconds, int intensity)
    {
        cout << "Drying " << seconds << " seconds with intensity " << intensity << endl;
    }
};

#endif // DRYER_HPP
