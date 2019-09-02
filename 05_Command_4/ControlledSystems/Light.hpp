#ifndef LIGHT_HPP
#define LIGHT_HPP

#include "Commands\ICommand.hpp"

class Light
{
public:
    LightsState _state;

    void ToggleLight()
    {
        switch (_state)
        {
            case LightsState::Off:
            _state = LightsState::Low;
            break;

            case LightsState::Low:
            _state = LightsState::Medium;
            break;

            case LightsState::Medium:
            _state = LightsState::High;
            break;

            case LightsState::High:
            _state = LightsState::Off;
            break;
        }
        PrintLight();
    }

    void TurnOff()
    {
        _state = LightsState::Off;
        PrintLight();
    }

    void SetState(LightsState state)
    {
        _state = state;
        PrintLight();
    }

    void PrintLight()
    {
        switch (_state)
        {
            case LightsState::Off:
            cout << "Light off" << endl;
            break;

            case LightsState::Low:
            cout << "Light low" << endl;
            break;

            case LightsState::Medium:
            cout << "Light medium" << endl;
            break;

            case LightsState::High:
            cout << "Light high" << endl;
            break;
        }
    }
};

#endif // LIGHT_HPP
