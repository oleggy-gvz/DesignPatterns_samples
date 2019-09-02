#ifndef DEUTSCHVOLKSWAGENFACILITY_HPP
#define DEUTSCHVOLKSWAGENFACILITY_HPP

#include "Cars\DeutschGolfCar.hpp"
#include "Cars\DeutschPassatCar.hpp"
#include "Cars\DeutschTiguanCar.hpp"
#include "Cars\DeutschTouaregCar.hpp"
#include "Facilities\VolkswagenFacility.hpp"

class DeutschVolkswagenFacility : public VolkswagenFacility
{
public:
    virtual shared_ptr<Car> CreateCar(const string &type)
    {
        shared_ptr<Car> car;

        if (type == "Golf")         car = shared_ptr<Car>(new DeutschGolf());
        else if (type == "Passat")  car = shared_ptr<Car>(new DeutschPassat());
        else if (type == "Tiguan")  car = shared_ptr<Car>(new DeutschTiguan());
        else if (type == "Tuareg")  car = shared_ptr<Car>(new DeutschTuareg());
        else                        car = shared_ptr<Car>(new Car());

        return car;
    }
};

#endif // DEUTSCHVOLKSWAGENFACILITY_HPP
