#ifndef WASHINGMACHINE_HPP
#define WASHINGMACHINE_HPP

#include "Dryer.hpp"
#include "Engine.hpp"
#include "Thermo.hpp"
#include "WaterManagingSubsystem.hpp"
#include <memory>

class WashingMachine
{
private:
    shared_ptr<Dryer> _dryer;
    shared_ptr<Engine> _engine;
    shared_ptr<Thermo> _thermo;
    shared_ptr<WaterManagingSubsystem> _water;

public:
    WashingMachine(shared_ptr<Dryer> dryer, shared_ptr<Engine> engine, shared_ptr<Thermo> thermo, shared_ptr<WaterManagingSubsystem> water)
    {
        _dryer = dryer;
        _engine = engine;
        _thermo = thermo;
        _water = water;
    }

    void WashCotton()
    {
        _water->FillWater(10);
        _thermo->WarmUp(70);
        _engine->Rotate();
        _engine->Rotate();
        _engine->Rotate();
        _engine->Stop();
        _water->EmptyWater();
        _dryer->Dry(30, 1000);
        _water->FillWater(15);
        _thermo->WarmUp(50);
        _engine->Rotate();
        _engine->Rotate();
        _engine->Rotate();
        _engine->Stop();
        _water->EmptyWater();
        _dryer->Dry(60, 1500);
    }

    void WashWool()
    {
        _water->FillWater(7);
        _thermo->WarmUp(30);
        _engine->Rotate();
        _engine->Stop();
        _water->EmptyWater();
        _dryer->Dry(20, 500);
        _water->FillWater(10);
        _thermo->WarmUp(20);
        _engine->Rotate();
        _engine->Stop();
        _water->EmptyWater();
        _dryer->Dry(60, 700);
    }
};

#endif // WASHINGMACHINE_HPP
