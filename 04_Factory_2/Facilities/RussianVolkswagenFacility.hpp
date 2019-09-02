#ifndef RUSSIANVOLKSWAGENFACILITY_HPP
#define RUSSIANVOLKSWAGENFACILITY_HPP

#include "Cars\RussianGolfCar.hpp"
#include "Cars\RussianPassatCar.hpp"
#include "Cars\RussianTiguanCar.hpp"
#include "Cars\RussianTouaregCar.hpp"
#include "Facilities\VolkswagenFacility.hpp"

class RussianVolkswagenFacility : public VolkswagenFacility
{
public:
    virtual shared_ptr<Car> CreateCar(const string &type)
    {
        shared_ptr<Car> car;

        if (type == "Golf")         car = shared_ptr<Car>(new RussianGolf());
        else if (type == "Passat")  car = shared_ptr<Car>(new RussianPassat());
        else if (type == "Tiguan")  car = shared_ptr<Car>(new RussianTiguan());
        else if (type == "Tuareg")  car = shared_ptr<Car>(new RussianTuareg());
        else                        car = shared_ptr<Car>(new Car());

        return car;
    }
};

#endif // RUSSIANVOLKSWAGENFACILITY_HPP
