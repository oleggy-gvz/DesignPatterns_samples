#ifndef WATERMANAGINGSUBSYSTEM_H
#define WATERMANAGINGSUBSYSTEM_H

#include <iostream>

using namespace std;

class WaterManagingSubsystem
{
public:
    void FillWater(int litres)
    {
        cout << "Fill with " << litres << " litres of water" << endl;
    }

    void EmptyWater()
    {
        cout << "Empty water tank" << endl;
    }
};

#endif // WATERMANAGINGSUBSYSTEM_H
