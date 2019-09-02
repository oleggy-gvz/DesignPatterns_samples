#ifndef LUXURY_CAR_FACTORY_HPP
#define LUXURY_CAR_FACTORY_HPP

#include "CarFactoryBase.hpp"

class LuxuryCarFactory : public CarFactoryBase
{
public:
    LuxuryCarFactory(CarBuilderBase *builder) : CarFactoryBase(builder)
    {}

    shared_ptr<Car> Construct()
    {
        CarBuilder->BuildFrames();
        CarBuilder->BuildEngine();
        CarBuilder->BuildWheels();
        CarBuilder->BuildSafety();
        CarBuilder->BuildMultimedia();
        CarBuilder->BuildLuxury();

        return CarBuilder->GetCar();
    }
};


#endif // LUXURY_CAR_FACTORY_HPP
