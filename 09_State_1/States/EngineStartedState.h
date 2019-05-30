#ifndef ENGINESTARTEDSTATE_H
#define ENGINESTARTEDSTATE_H

#include "States\IState.h"
#include "Car.h"

class EngineStartedState : IState
{
    shared_ptr<Car> _car;

public:
    EngineStartedState(shared_ptr<Car> car)
    {
        _car = car;
    }

    void FillTank()
    {
        cout << "Can not refuel with a running engine." << endl;
    }

    void TurnKey()
    {
        cout << "Stop." << endl;
    }

    void Drive()
    {
        TryDrive();
    }

    void Stop()
    {
        cout << "I'm already stopped." << endl;
    }

private:
    void TryDrive()
    {
        if (_car->getGasoline() > 0)
        {
            cout << "Go!" << endl;
            _car->setGasoline(_car->getGasoline() - 10);
        }
        else
        {
            cout << "Stop. Gasoline is over." << endl;
        }
    }
};

#endif // ENGINESTARTEDSTATE_H
