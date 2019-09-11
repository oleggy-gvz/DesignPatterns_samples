#ifndef MUSICCOMMAND_HPP
#define MUSICCOMMAND_HPP

#include "ICommand.hpp"
#include "ControlledSystems\Music.hpp"
#include <memory>

class MusicCommand : public ICommand
{
private:
    shared_ptr<Music> _music;

public:
    MusicCommand(Music *music) : _music(shared_ptr<Music>(music))
    {}

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

#endif // MUSICCOMMAND_HPP
