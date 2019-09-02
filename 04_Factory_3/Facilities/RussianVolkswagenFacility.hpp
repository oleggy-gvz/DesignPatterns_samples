#ifndef RUSSIANVOLKSWAGENFACILITY_HPP
#define RUSSIANVOLKSWAGENFACILITY_HPP

#include "Cars\GolfCar.hpp"
#include "Cars\PassatCar.hpp"
#include "Cars\TiguanCar.hpp"
#include "Cars\TouaregCar.hpp"
#include "Facilities\VolkswagenFacility.hpp"
#include "PartsFactory\RussianCarPartsFactory.hpp"

class RussianVolkswagenFacility : public VolkswagenFacility
{
public:
    virtual shared_ptr<Car> CreateCar(const string &type)
    {
        shared_ptr<Car> car;
        shared_ptr<CarPartsFactory> _factory = shared_ptr<CarPartsFactory>(new RussianCarPartsFactory());

        if (type == "Golf")         car = shared_ptr<Car>(new Golf(_factory));
        else if (type == "Passat")  car = shared_ptr<Car>(new Passat(_factory));
        else if (type == "Tiguan")  car = shared_ptr<Car>(new Tiguan(_factory));
        else if (type == "Tuareg")  car = shared_ptr<Car>(new Tuareg(_factory));

        return car;
    }
};

#endif // RUSSIANVOLKSWAGENFACILITY_HPP
