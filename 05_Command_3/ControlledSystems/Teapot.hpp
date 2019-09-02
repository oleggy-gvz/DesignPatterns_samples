#ifndef TEAPOT_HPP
#define TEAPOT_HPP

#include "Commands\ICommand.hpp"

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

#endif // TEAPOT_HPP
