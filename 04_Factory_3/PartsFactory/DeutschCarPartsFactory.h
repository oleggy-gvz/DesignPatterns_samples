#ifndef DEUTSCHCARPARTSFACTORY_H
#define DEUTSCHCARPARTSFACTORY_H

#include "CarPartsFactory.h"
#include "Parts\DieselEngine.h"
#include "Parts\WhitePaint.h"
#include "Parts\BigWheels.h"

class DeutschCarPartsFactory : public CarPartsFactory
{
public:
    shared_ptr<Engine> CreateEngine()
    {
        return shared_ptr<Engine>(new DieselEngine());
    }

    shared_ptr<Paint> CreatePaint()
    {
        return shared_ptr<Paint>(new WhitePaint());
    }

    shared_ptr<Wheels> CreateWheels()
    {
        return shared_ptr<Wheels>(new BigWheels());
    }
};

#endif // DEUTSCHCARPARTSFACTORY_H
