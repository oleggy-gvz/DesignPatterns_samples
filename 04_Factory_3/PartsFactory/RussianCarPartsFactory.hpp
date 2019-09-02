#ifndef RUSSIANCARPARTSFACTORY_HPP
#define RUSSIANCARPARTSFACTORY_HPP

#include "CarPartsFactory.hpp"
#include "Parts\GasolineEngine.hpp"
#include "Parts\BlackPaint.hpp"
#include "Parts\MediumWheels.hpp"

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

#endif // RUSSIANCARPARTSFACTORY_HPP
