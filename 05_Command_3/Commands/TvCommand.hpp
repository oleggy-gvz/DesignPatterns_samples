#ifndef TVCOMMAND_HPP
#define TVCOMMAND_HPP

#include "ICommand.hpp"
#include "ControlledSystems\Tv.hpp"
#include <memory>

class TvCommand : public ICommand
{
private:
    shared_ptr<Tv> _tv;

public:
    TvCommand(Tv *tv)
    {
        _tv = shared_ptr<Tv>(tv);
    }

    void Execute()
    {
       _tv->TurnOn();
    }

    void Undo()
    {
       _tv->TurnOff();
    }

    ostream& stream_out(ostream &out) const
    {
        out << "Turn on the TV";
        return out;
    }
};

#endif // TVCOMMAND_HPP
