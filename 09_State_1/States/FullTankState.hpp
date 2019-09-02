#ifndef FULLTANKSTATE_HPP
#define FULLTANKSTATE_HPP

#include "States\IState.hpp"
#include "Car.hpp"

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

#endif // FULLTANKSTATE_HPP
