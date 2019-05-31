#ifndef ENGINESTARTEDSTATE_H
#define ENGINESTARTEDSTATE_H

#include "States\IState.h"
#include "Car.h"

class EngineStartedState : public IState
{
    Car *_car;

public:
    EngineStartedState(Car *car);
    void FillTank();
    void TurnKey();
    void Drive();
    void Stop();

private:
    void TryDrive();
};

#endif // ENGINESTARTEDSTATE_H
