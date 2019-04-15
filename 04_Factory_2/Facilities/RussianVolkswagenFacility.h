#ifndef RUSSIANVOLKSWAGENFACILITY_H
#define RUSSIANVOLKSWAGENFACILITY_H

#include "Cars\RussianGolfCar.h"
#include "Cars\RussianPassatCar.h"
#include "Cars\RussianTiguanCar.h"
#include "Cars\RussianTouaregCar.h"
#include "Facilities\VolkswagenFacility.h"

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

#endif // RUSSIANVOLKSWAGENFACILITY_H
