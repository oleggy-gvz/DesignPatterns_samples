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
    virtual void BuildMultimedia() = 0;
    virtual void BuildWheels() = 0;
    virtual void BuildEngine() = 0;
    virtual void BuildFrames() = 0;
    virtual void BuildLuxury() = 0;
    virtual void BuildSafety() = 0;
};

#endif // CAR_BUILDER_BASE_H
