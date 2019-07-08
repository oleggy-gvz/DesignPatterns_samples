#ifndef CHEAP_CAR_FACTORY_H
#define CHEAP_CAR_FACTORY_H

#include "CarFactoryBase.h"

class CheapCarFactory : public CarFactoryBase
{
public:
    CheapCarFactory(CarBuilderBase *builder) : CarFactoryBase(builder)
    {}

    shared_ptr<Car> Construct()
    {
        CarBuilder->BuildFrames();
        CarBuilder->BuildEngine();
        CarBuilder->BuildWheels();
        CarBuilder->BuildSafety();

        return CarBuilder->GetCar();
    }
};

#endif // CHEAP_CAR_FACTORY_H
