#ifndef FULLTANKSTATE_H
#define FULLTANKSTATE_H

#include "States\IState.h"
#include "Car.h"

class FullTankState : public IState
{
    Car *_car;

public:
    FullTankState(Car *car);
    void FillTank();
    void TurnKey();
    void Drive();
    void Stop();
};

#endif // FULLTANKSTATE_H
