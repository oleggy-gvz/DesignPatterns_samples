#ifndef TEAPOTCOMMAND_H
#define TEAPOTCOMMAND_H

#include "ICommand.h"
#include "ControlledSystems\Teapot.h"
#include <memory>

class TeapotCommand : public ICommand
{
private:
    shared_ptr<Teapot> _teapot;

public:
    TeapotCommand(Teapot *teapot)
    {
        _teapot = shared_ptr<Teapot>(teapot);
    }

    void Execute()
    {
       _teapot->TurnOn();
    }

    void Undo()
    {
       _teapot->TurnOff();
    }

    ostream& stream_out(ostream &out) const
    {
        out << "Turn on the teapot";
        return out;
    }
};

#endif // TEAPOTCOMMAND_H
