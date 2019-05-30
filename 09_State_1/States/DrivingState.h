#ifndef DRIVINGSTATE_H
#define DRIVINGSTATE_H

#include "States\IState.h"
#include "Car.h"

class DrivingState : IState
{
    shared_ptr<Car> _car;

public:
    DrivingState(shared_ptr<Car> car)
    {
        _car = car;
    }

    void FillTank()
    {
        cout << "Crazy! Can not refuel on the go." << endl;
    }

    void TurnKey()
    {
        cout << "On the go do not touch the key" << endl;
    }

    void Drive()
    {
        TryDrive();
    }

    void Stop()
    {
        cout << "Enough driving? Stand..." << endl;
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

#endif // DRIVINGSTATE_H
