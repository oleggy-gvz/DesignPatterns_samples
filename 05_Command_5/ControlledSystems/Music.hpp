#ifndef MUSIC_HPP
#define MUSIC_HPP

#include "Commands\ICommand.hpp"

class Music
{
public:
    State _state;

    void TurnOn()
    {
        cout << "Music on" << endl;
        _state = State::On;
    }

    void TurnOff()
    {
        cout << "Music off" << endl;
        _state = State::Off;
    }
};

#endif // MUSIC_HPP
