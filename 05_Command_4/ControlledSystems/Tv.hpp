#ifndef TV_HPP
#define TV_HPP

#include "Commands\ICommand.hpp"

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

#endif // TV_HPP
