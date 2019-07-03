#ifndef CAR_FACTORY_BASE_H
#define CAR_FACTORY_BASE_H

#include <memory>
#include "Builder\CarBuilderBase.h"
#include "Car.h"

class CarFactoryBase
{
protected:
    shared_ptr<CarBuilderBase> CarBuilder;

    CarFactoryBase(shared_ptr<CarBuilderBase> builder)
    {
        CarBuilder = builder;
    }

public:
    virtual shared_ptr<Car> Construct() = 0;
};

#endif // CAR_FACTORY_BASE_H
