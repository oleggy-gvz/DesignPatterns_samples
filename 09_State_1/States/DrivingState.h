#ifndef DRIVINGSTATE_H
#define DRIVINGSTATE_H

#include "States\IState.h"
#include "Car.h"

class DrivingState : public IState
{
    Car *_car;

public:
    DrivingState(Car *car);
    void FillTank();
    void TurnKey();
    void Drive();
    void Stop();

private:
    void TryDrive();
};

#endif // DRIVINGSTATE_H
