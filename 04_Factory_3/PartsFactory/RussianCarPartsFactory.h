#ifndef RUSSIANCARPARTSFACTORY_H
#define RUSSIANCARPARTSFACTORY_H

#include "CarPartsFactory.h"
#include "Parts\GasolineEngine.h"
#include "Parts\BlackPaint.h"
#include "Parts\MediumWheels.h"

class RussianCarPartsFactory : public CarPartsFactory
{
public:
    shared_ptr<Engine> CreateEngine()
    {
        return shared_ptr<Engine>(new GasolineEngine());
    }

    shared_ptr<Paint> CreatePaint()
    {
        return shared_ptr<Paint>(new BlackPaint());
    }

    shared_ptr<Wheels> CreateWheels()
    {
        return shared_ptr<Wheels>(new MediumWheels());
    }
};

#endif // RUSSIANCARPARTSFACTORY_H
