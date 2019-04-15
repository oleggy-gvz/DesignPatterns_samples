#ifndef DRYER_H
#define DRYER_H

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

#endif // DRYER_H
