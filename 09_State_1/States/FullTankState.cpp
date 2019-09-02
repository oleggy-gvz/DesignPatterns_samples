#include "States\FullTankState.hpp"
#include "Car.hpp"

FullTankState::FullTankState(Car *car)
{
    _car = car;
}

void FullTankState::FillTank()
{
    cout << "Tank is already full." << endl;
}

void FullTankState::TurnKey()
{
    cout << "Engine starting..." << endl;
    _car->SetState(_car->getEngineStartedState());
}

void FullTankState::Drive()
{
    cout << "Start the engine first." << endl;
}

void FullTankState::Stop()
{
    cout << "I'm already stopped." << endl;
}
