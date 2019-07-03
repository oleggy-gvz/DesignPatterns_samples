#ifndef LUXURY_CAR_FACTORY_H
#define LUXURY_CAR_FACTORY_H

#include "CarFactoryBase.h"

class LuxuryCarFactory : public CarFactoryBase
{
public:
    LuxuryCarFactory(shared_ptr<CarBuilderBase> builder) : CarFactoryBase(builder)
    {}

    shared_ptr<Car> Construct()
    {
        throw 1;
    }
};


#endif // LUXURY_CAR_FACTORY_H
