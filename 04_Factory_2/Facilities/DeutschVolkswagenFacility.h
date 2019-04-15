#ifndef DEUTSCHVOLKSWAGENFACILITY_H
#define DEUTSCHVOLKSWAGENFACILITY_H

#include "Cars\DeutschGolfCar.h"
#include "Cars\DeutschPassatCar.h"
#include "Cars\DeutschTiguanCar.h"
#include "Cars\DeutschTouaregCar.h"
#include "Facilities\VolkswagenFacility.h"

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

#endif // DEUTSCHVOLKSWAGENFACILITY_H
