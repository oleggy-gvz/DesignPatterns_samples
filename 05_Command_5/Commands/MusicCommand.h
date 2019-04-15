#ifndef MUSICCOMMAND_H
#define MUSICCOMMAND_H

#include "ICommand.h"
#include "ControlledSystems\Music.h"
#include <memory>

class MusicCommand : public ICommand
{
private:
    shared_ptr<Music> _music;

public:
    MusicCommand(Music *music)
    {
        _music = shared_ptr<Music>(music);
    }

    void Execute()
    {
       _music->TurnOn();
    }

    void Undo()
    {
       _music->TurnOff();
    }

    ostream& stream_out(ostream &out) const
    {
        out << "Turn on the music";
        return out;
    }
};

#endif // MUSICCOMMAND_H
