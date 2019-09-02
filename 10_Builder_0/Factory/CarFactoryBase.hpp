#ifndef CAR_FACTORY_BASE_HPP
#define CAR_FACTORY_BASE_HPP

#include <memory>
#include "Builder\CarBuilderBase.hpp"
#include "Car.hpp"

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

#endif // CAR_FACTORY_BASE_HPP
