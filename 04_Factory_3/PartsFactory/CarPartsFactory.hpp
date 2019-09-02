#ifndef CARPARTSFACTORY_HPP
#define CARPARTSFACTORY_HPP

#include "Parts\Engine.hpp"
#include "Parts\Paint.hpp"
#include "Parts\Wheels.hpp"
#include <memory>

class CarPartsFactory
{
public:
    virtual shared_ptr<Engine> CreateEngine() = 0;
    virtual shared_ptr<Paint> CreatePaint() = 0;
    virtual shared_ptr<Wheels> CreateWheels() = 0;
};

#endif // CARPARTSFACTORY_HPP
