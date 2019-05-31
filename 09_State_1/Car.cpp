#include "States\EmptyTankState.h"
#include "States\FullTankState.h"
#include "States\EngineStartedState.h"
#include "States\DrivingState.h"
#include "Car.h"

using namespace std;

int Car::getGasoline() const
{
    return _gasoline;
}

void Car::setGasoline(int gasoline)
{
    _gasoline = gasoline;
}

Car::Car()
{
    emptyTankState = shared_ptr<IState>(new EmptyTankState(this));
    fullTankState = shared_ptr<IState>(new FullTankState(this));
    engineStartedState = shared_ptr<IState>(new EngineStartedState(this));
    drivingState = shared_ptr<IState>(new DrivingState(this));
    _currentState = emptyTankState; // first state
}

shared_ptr<IState> Car::getEmptyTankState() const
{
    return emptyTankState;
}

shared_ptr<IState> Car::getFullTankState() const
{
    return fullTankState;
}

shared_ptr<IState> Car::getEngineStartedState() const
{
    return engineStartedState;
}

shared_ptr<IState> Car::getDrivingState() const
{
    return drivingState;
}

void Car::FillTank()
{
    _gasoline = 70;
    _currentState->FillTank();
}

void Car::TurnKey()
{
    _currentState->TurnKey();
}

void Car::Drive()
{
    _currentState->Drive();
    _gasoline -= 10;
}

void Car::Stop()
{
    _currentState->Stop();
}

void Car::SetState(shared_ptr<IState> currentState)
{
    _currentState = currentState;
}
