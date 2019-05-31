#ifndef EMPTYTANKSTATE_H
#define EMPTYTANKSTATE_H

#include "States\IState.h"
#include "Car.h"

class EmptyTankState : public IState
{
    Car *_car;

public:
    EmptyTankState(Car *car);
    void FillTank();
    void TurnKey();
    void Drive();
    void Stop();
};

#endif // EMPTYTANKSTATE_H
