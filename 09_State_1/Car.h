#ifndef CAR_H
#define CAR_H

#include <iostream>
#include "States\IState.h"

using namespace std;

class EmptyTankState;

class Car
{
    int _gasoline = 0;

public:

    shared_ptr<IState> EmptyTank;
    shared_ptr<IState> FullTank;
    shared_ptr<IState> EngineStarted;
    shared_ptr<IState> Driving;
    shared_ptr<IState> _currentState;

    int getGasoline() const
    {
        return _gasoline;
    }

    void setGasoline(int gasoline)
    {
        _gasoline = gasoline;
    }

    Car()
    {
        EmptyTank = shared_ptr<IState>(new EmptyTankState(this));
        FullTank = shared_ptr<IState>(new FullTankState(this));
        EngineStarted = shared_ptr<IState>(new EngineStartedState(this));
        Driving = shared_ptr<IState>(new DrivingState(this));
        _currentState = EmptyTank;
    }

    void FillTank()
    {
         _gasoline = 70;
         _currentState
    }

    void TurnKey()
    {
        if (_state == CarState::EmptyTank)
        {
            cout << "Without gasoline not start." << endl;
        }
        else if (_state == CarState::FullTank)
        {
            _state = CarState::EngineStarted;
            cout << "Engine starting..." << endl;
        }
        else if (_state == CarState::EngineStarted)
        {
            _state = CarState::FullTank;
            cout << "Stop." << endl;
        }
        else if (_state == CarState::Driving)
        {
            cout << "On the go do not touch the key" << endl;
        }
    }

    void Drive()
    {
        if (_state == CarState::EmptyTank)
        {
            cout << "How do we go without gasoline? In no way." << endl;
        }
        else if (_state == CarState::FullTank)
        {
            _state = CarState::EngineStarted;
            cout << "Start the engine first." << endl;
        }
        else if (_state == CarState::EngineStarted)
        {
            _state = CarState::Driving;
            TryDrive();
        }
        else if (_state == CarState::Driving)
        {
            TryDrive();
        }
    }

    void Stop()
    {
        if (_state == CarState::EmptyTank)
        {
            cout << "Without gasoline and so we stand." << endl;
        }
        else if (_state == CarState::FullTank)
        {
            cout << "I'm already stopped." << endl;
        }
        else if (_state == CarState::EngineStarted)
        {
            cout << "I'm already stopped." << endl;
        }
        else if (_state == CarState::Driving)
        {
            _state = CarState::EngineStarted;
            cout << "Enough driving? Stand..." << endl;
        }
    }

private:
    void TryDrive()
    {
        if (_gasoline > 0)
        {
            cout << "Go!" << endl;
            _gasoline -= 10;
        }
        else
        {
            cout << "Stop. Gasoline is over." << endl;
            _state = CarState::EmptyTank;
        }
    }
};

#endif // CAR_H
