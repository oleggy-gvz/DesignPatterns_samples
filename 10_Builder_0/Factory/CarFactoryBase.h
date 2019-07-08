#ifndef CAR_FACTORY_BASE_H
#define CAR_FACTORY_BASE_H

#include <memory>
#include "Builder\CarBuilderBase.h"
#include "Car.h"

class CarFactoryBase
{
protected:
    shared_ptr<CarBuilderBase> CarBuilder;

    CarFactoryBase(CarBuilderBase *builder)
    {
        CarBuilder = shared_ptr<CarBuilderBase>(builder);
    }

public:
    virtual shared_ptr<Car> Construct() = 0;
};

#endif // CAR_FACTORY_BASE_H
