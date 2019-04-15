#ifndef TV_H
#define TV_H

#include "Commands\ICommand.h"

class Tv
{
public:
    State _state;

    void TurnOn()
    {
        cout << "TV on" << endl;
        _state = State::On;
    }

    void TurnOff()
    {
        cout << "TV off" << endl;
        _state = State::Off;
    }
};

#endif // TV_H
