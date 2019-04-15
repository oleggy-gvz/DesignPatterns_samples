#ifndef CARPARTSFACTORY_H
#define CARPARTSFACTORY_H

#include "Parts\Engine.h"
#include "Parts\Paint.h"
#include "Parts\Wheels.h"
#include <memory>

class CarPartsFactory
{
public:
    virtual shared_ptr<Engine> CreateEngine() = 0;
    virtual shared_ptr<Paint> CreatePaint() = 0;
    virtual shared_ptr<Wheels> CreateWheels() = 0;
};

#endif // CARPARTSFACTORY_H
