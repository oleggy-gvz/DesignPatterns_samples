#ifndef ENGINESTARTEDSTATE_HPP
#define ENGINESTARTEDSTATE_HPP

#include "States\IState.hpp"
#include "Car.hpp"

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

#endif // ENGINESTARTEDSTATE_HPP
