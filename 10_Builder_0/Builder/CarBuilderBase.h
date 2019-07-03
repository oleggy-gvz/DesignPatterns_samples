#ifndef CAR_BUILDER_BASE_H
#define CAR_BUILDER_BASE_H

#include "Car.h"
#include <memory>

class CarBuilderBase
{
protected:
    shared_ptr<Car> car;

    CarBuilderBase()
    {
        car = shared_ptr<Car>(new Car);
    }

public:
    shared_ptr<Car> GetCar()
    {
        return car;
    }
};

#endif // CAR_BUILDER_BASE_H
