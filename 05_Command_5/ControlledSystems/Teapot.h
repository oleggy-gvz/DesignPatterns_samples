#ifndef TEAPOT_H
#define TEAPOT_H

#include "Commands\ICommand.h"

class Teapot
{
public:
    State _state;

    void TurnOn()
    {
        cout << "Teapot on" << endl;
        _state = State::On;
    }

    void TurnOff()
    {
        cout << "Teapot off" << endl;
        _state = State::Off;
    }
};

#endif // TEAPOT_H
