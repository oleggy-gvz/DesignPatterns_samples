#ifndef REMOTECONTROL_HPP
#define REMOTECONTROL_HPP

#include "Commands\ICommand.hpp"
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
        _commands[buttonId] = shared_ptr<ICommand>(cmd);
    }

    friend ostream& operator<<(ostream &out, const RemoteControl &rc);
};

//ostream& operator<<(ostream &out, const RemoteControl  &rc)
//{
//     stringstream ss;

//     for (auto it = rc._commands.begin(); it != rc._commands.end(); ++it)
//        ss << it->first << " \t - " << *(it->second) << endl;
//     ss << "etc. \t - Exit" << endl;

//     out << ss.str();
//     return out;
//}

ostream& operator<<(ostream &out, const RemoteControl  &rc)
{
     for (auto it = rc._commands.begin(); it != rc._commands.end(); ++it)
        out << it->first << " \t - " << *(it->second) << endl;
     out << "etc. \t - Exit" << endl;
     return out;
}

#endif // REMOTECONTROL_HPP
