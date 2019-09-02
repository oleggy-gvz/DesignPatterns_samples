#ifndef CAR_HPP
#define CAR_HPP

#include <iostream>
#include "States\IState.hpp"

using namespace std;

class EmptyTankState;

class Car
{
    int _gasoline = 0;
    // статусы состояний представлены в виде экземпляров классов, которые присваиваются в текущий статус
    shared_ptr<IState> emptyTankState;
    shared_ptr<IState> fullTankState;
    shared_ptr<IState> engineStartedState;
    shared_ptr<IState> drivingState;

    shared_ptr<IState> _currentState;

public:
    shared_ptr<IState> getEmptyTankState() const;
    shared_ptr<IState> getFullTankState() const;
    shared_ptr<IState> getEngineStartedState() const;
    shared_ptr<IState> getDrivingState() const;

    int getGasoline() const;
    void setGasoline(int gasoline);
    Car();
    void FillTank();
    void TurnKey();
    void Drive();
    void Stop();
    void SetState(shared_ptr<IState> currentState);
};

#endif // CAR_HPP
