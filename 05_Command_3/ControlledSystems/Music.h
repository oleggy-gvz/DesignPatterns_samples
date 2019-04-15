#ifndef MUSIC_H
#define MUSIC_H

#include "Commands\ICommand.h"

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

#endif // MUSIC_H
