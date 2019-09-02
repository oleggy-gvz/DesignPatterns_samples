#ifndef LIGHTSCOMMAND_HPP
#define LIGHTSCOMMAND_HPP

#include "ICommand.hpp"
#include "ControlledSystems\Light.hpp"
#include <memory>

class LightsCommand : public ICommand
{
private:
    shared_ptr<Light> _light;

public:
    LightsCommand(Light *light)
    {
        _light = shared_ptr<Light>(light);
    }

    void Execute()
    {
       _light->TurnOn();
    }

    void Undo()
    {
       _light->TurnOff();
    }

    ostream& stream_out(ostream &out) const
    {
        out << "Turn on the light";
        return out;
    }
};

#endif // LIGHTSCOMMAND_HPP
