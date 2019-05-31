#include "States\EmptyTankState.h"
#include "Car.h"

EmptyTankState::EmptyTankState(Car *car)
{
    _car = car;
}

void EmptyTankState::FillTank()
{
    cout << "Now tank is full." << endl;
    _car->SetState(_car->getFullTankState());
}

void EmptyTankState::TurnKey()
{
    cout << "Without gasoline not start." << endl;
}

void EmptyTankState::Drive()
{
    cout << "How do we go without gasoline? In no way." << endl;
}

void EmptyTankState::Stop()
{
    cout << "Without gasoline and so we stand." << endl;
}
