#ifndef DRIVINGSTATE_HPP
#define DRIVINGSTATE_HPP

#include "States\IState.hpp"
#include "Car.hpp"

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

#endif // DRIVINGSTATE_HPP
