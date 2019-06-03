#include "States\DrivingState.h"
#include "Car.h"

DrivingState::DrivingState(Car *car)
{
    _car = car;
}

void DrivingState::FillTank()
{
    cout << "Crazy! Can not refuel on the go." << endl;
}

void DrivingState::TurnKey()
{
    cout << "On the go do not touch the key" << endl;
}

void DrivingState::Drive()
{
    // TryDrive(); // можно отказатся от метода TryDrive(), разместив код тут:
    if (_car->getGasoline() > 0)
    {
        cout << "Go!" << endl;
    }
    else
    {
        cout << "Stop. Gasoline is over." << endl;
        _car->SetState(_car->getEmptyTankState());
    }
}

void DrivingState::Stop()
{
    cout << "Enough driving? Stand..." << endl;
    _car->SetState(_car->getEngineStartedState());
}

/*void DrivingState::TryDrive()
{
    if (_car->getGasoline() > 0)
    {
        cout << "Go!" << endl;
    }
    else
    {
        cout << "Stop. Gasoline is over." << endl;
        _car->SetState(_car->getEmptyTankState());
    }
}*/
