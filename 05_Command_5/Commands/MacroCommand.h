#ifndef MACROCOMMAND_H
#define MACROCOMMAND_H

#include "ICommand.h"
#include "ControlledSystems\Light.h"
#include <memory>
#include <list>
#include <sstream>

class MacroCommand : public ICommand
{
private:
    list<shared_ptr<ICommand>> _innerCommand;

public:
    MacroCommand(list<ICommand*> *commands)
    {
        for (auto &command : *commands)
        {
            _innerCommand.push_back(shared_ptr<ICommand>(command));
        }
    }

    void Execute()
    {
        for(auto &innerCommand : _innerCommand)
        {
            innerCommand->Execute();
        }
    }

    void Undo()
    {
        for(auto &innerCommand : _innerCommand)
        {
            innerCommand->Undo();
        }
    }

    ostream& stream_out(ostream &out) const
    {
        stringstream ss;

        for(auto &innerCommand : _innerCommand)
           ss << *innerCommand << ", ";

        out << ss.str();
        return out;
    }
};

#endif // MACROCOMMAND_H
