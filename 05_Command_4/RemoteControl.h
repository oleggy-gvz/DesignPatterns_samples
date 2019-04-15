#ifndef REMOTECONTROL_H
#define REMOTECONTROL_H

#include "Commands\ICommand.h"
#include <map>
#include <string>
#include <memory>
#include <iostream>
#include <sstream>

class RemoteControl
{
private:
    map<int, shared_ptr<ICommand>> _commands;

public:
    void PushButton(int buttonId)
    {
        if (_commands.find(buttonId) != _commands.end())
            _commands[buttonId]->Execute();
    }

    void UndoButton(int buttonId)
    {
        if (_commands.find(buttonId) != _commands.end())
            _commands[buttonId]->Undo();
    }

    void SetCommandOnButton(int buttonId, ICommand *cmd)
    {
        //_commands.insert(pair<int, shared_ptr<ICommand>> (buttonId, shared_ptr<ICommand>(cmd)));
        _commands[buttonId] = shared_ptr<ICommand>(cmd);
    }

    ostream& stream_out(ostream &out) const
    {
        stringstream ss;

        for (auto it = _commands.begin(); it != _commands.end(); ++it)
           ss << it->first << " \t - " << *(it->second) << endl;
        ss << "etc. \t - Exit" << endl;

        out << ss.str();
        return out;
    }
};

ostream & operator<<(ostream & out, RemoteControl const & rc)
{
    return rc.stream_out(out);
}

#endif // REMOTECONTROL_H
