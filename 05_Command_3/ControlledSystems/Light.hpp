#ifndef LIGHT_HPP
#define LIGHT_HPP

#include "Commands\ICommand.hpp"

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

#endif // LIGHT_HPP
