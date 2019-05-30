#ifndef EMPTYTANKSTATE_H
#define EMPTYTANKSTATE_H

#include "States\IState.h"
#include "Car.h"

class EmptyTankState : IState
{
    shared_ptr<Car> _car;

public:
    EmptyTankState(shared_ptr<Car> car)
    {
        _car = car;
    }

    void FillTank()
    {
        _car->setGasoline(70);
        cout << "Now tank is full." << endl;
    }

    void TurnKey()
    {
        cout << "Without gasoline not start." << endl;
    }

    void Drive()
    {
        cout << "How do we go without gasoline? In no way." << endl;
    }

    void Stop()
    {
        cout << "Without gasoline and so we stand." << endl;
    }
};

#endif // EMPTYTANKSTATE_H
