#ifndef LIGHT_H
#define LIGHT_H

#include "Commands\ICommand.h"

class Light
{
public:
    State _state;

    void TurnOn()
    {
        cout << "Light on" << endl;
        _state = State::On;
    }

    void TurnOff()
    {
        cout << "Light off" << endl;
        _state = State::Off;
    }
};

#endif // LIGHT_H
