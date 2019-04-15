#ifndef SIMPLEFACTORY_H
#define SIMPLEFACTORY_H

#include "Cars\Car.h"
#include "Cars\Car.h"
#include "Cars\Golf.h"
#include "Cars\Passat.h"
#include "Cars\Tiguan.h"
#include "Cars\Touareg.h"
#include <memory>

class SimpleFactory
{
public:
    shared_ptr<Car> GetCar(const string &type)
    {
        shared_ptr<Car> car;

        if (type == "Golf")         car = shared_ptr<Car>(new Golf());
        else if (type == "Passat")  car = shared_ptr<Car>(new Passat());
        else if (type == "Tiguan")  car = shared_ptr<Car>(new Tiguan());
        else if (type == "Tuareg")  car = shared_ptr<Car>(new Tuareg());
        else                        car = shared_ptr<Car>(new Car());

        return car;
    }
};

#endif // SIMPLEFACTORY_H
