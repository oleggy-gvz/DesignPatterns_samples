#ifndef DEUTSCHCARPARTSFACTORY_HPP
#define DEUTSCHCARPARTSFACTORY_HPP

#include "CarPartsFactory.hpp"
#include "Parts\DieselEngine.hpp"
#include "Parts\WhitePaint.hpp"
#include "Parts\BigWheels.hpp"

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

#endif // DEUTSCHCARPARTSFACTORY_HPP
