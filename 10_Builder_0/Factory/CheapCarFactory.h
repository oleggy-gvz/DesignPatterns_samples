#ifndef CHEAP_CAR_FACTORY_H
#define CHEAP_CAR_FACTORY_H

#include "CarFactoryBase.h"

class CheapCarFactory : public CarFactoryBase
{
public:
    CheapCarFactory(shared_ptr<CarBuilderBase> builder) : CarFactoryBase(builder)
    {}

    shared_ptr<Car> Construct()
    {
        throw 1;
    }
};

#endif // CHEAP_CAR_FACTORY_H
