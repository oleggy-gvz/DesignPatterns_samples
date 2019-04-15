#ifndef DEUTSCHVOLKSWAGENFACILITY_H
#define DEUTSCHVOLKSWAGENFACILITY_H

#include "Cars\GolfCar.h"
#include "Cars\PassatCar.h"
#include "Cars\TiguanCar.h"
#include "Cars\TouaregCar.h"
#include "Facilities\VolkswagenFacility.h"
#include "PartsFactory\DeutschCarPartsFactory.h"

class DeutschVolkswagenFacility : public VolkswagenFacility
{
public:
    virtual shared_ptr<Car> CreateCar(const string &type)
    {
        shared_ptr<Car> car;
        shared_ptr<CarPartsFactory> _factory = shared_ptr<CarPartsFactory>(new DeutschCarPartsFactory());

        if (type == "Golf")         car = shared_ptr<Car>(new Golf(_factory));
        else if (type == "Passat")  car = shared_ptr<Car>(new Passat(_factory));
        else if (type == "Tiguan")  car = shared_ptr<Car>(new Tiguan(_factory));
        else if (type == "Tuareg")  car = shared_ptr<Car>(new Tuareg(_factory));

        return car;
    }
};

#endif // DEUTSCHVOLKSWAGENFACILITY_H
