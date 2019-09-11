#ifndef LIGHTSCOMMAND_HPP
#define LIGHTSCOMMAND_HPP

#include "ICommand.hpp"
#include "ControlledSystems\Light.hpp"
#include <memory>
#include <stack>

class LightsCommand : public ICommand
{
private:
    shared_ptr<Light> _light;
    stack<LightsState> _states;

public:
    LightsCommand(Light *light) : _light(shared_ptr<Light>(light))
    {}

    void Execute()
    {
        _states.push(_light->_state);
       _light->ToggleLight();
    }

    void Undo()
    {
        if (_states.empty()) return;

        LightsState prevState = _states.top();
        _states.pop();
        _light->SetState(prevState);
    }

    ostream& stream_out(ostream &out) const
    {
        out << "Turn on the light";
        return out;
    }
};

#endif // LIGHTSCOMMAND_HPP
