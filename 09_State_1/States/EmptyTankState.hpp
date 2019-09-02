#ifndef EMPTYTANKSTATE_HPP
#define EMPTYTANKSTATE_HPP

#include "States\IState.hpp"
#include "Car.hpp"

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

#endif // EMPTYTANKSTATE_HPP
