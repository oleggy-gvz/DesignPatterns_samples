#include "States\EngineStartedState.h"
#include "Car.h"

EngineStartedState::EngineStartedState(Car *car)
{
    _car = car;
}

void EngineStartedState::FillTank()
{
    cout << "Can not refuel with a running engine." << endl;
}

void EngineStartedState::TurnKey()
{
    cout << "Stop." << endl;
    _car->SetState(_car->getFullTankState());
}

void EngineStartedState::Drive()
{
    // TryDrive(); // можно отказатся от метода TryDrive(), разместив код тут:
    if (_car->getGasoline() > 0)
    {
        cout << "Go!" << endl;
        _car->SetState(_car->getDrivingState());
    }
    else
    {
        cout << "I will not go. Gasoline is over." << endl;
        _car->SetState(_car->getEmptyTankState());
    }
}

void EngineStartedState::Stop()
{
    cout << "I'm already stopped." << endl;
}

/*void EngineStartedState::TryDrive()
{
    if (_car->getGasoline() > 0)
    {
        cout << "Go!" << endl;
        _car->SetState(_car->getDrivingState());
    }
    else
    {
        cout << "I will not go. Gasoline is over." << endl;
        _car->SetState(_car->getEmptyTankState());
    }
}*/
