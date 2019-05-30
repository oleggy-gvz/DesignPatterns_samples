#ifndef FULLTANKSTATE_H
#define FULLTANKSTATE_H

#include "States\IState.h"
#include "Car.h"

class FullTankState : IState
{
    shared_ptr<Car> _car;

public:
    FullTankState(shared_ptr<Car> car)
    {
        _car = car;
    }

    void FillTank()
    {
        cout << "Tank is already full." << endl;
    }

    void TurnKey()
    {
        cout << "Engine starting..." << endl;
    }

    void Drive()
    {
        cout << "Start the engine first." << endl;
    }

    void Stop()
    {
        cout << "I'm already stopped." << endl;
    }
};

#endif // FULLTANKSTATE_H
