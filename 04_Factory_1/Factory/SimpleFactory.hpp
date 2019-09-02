#ifndef SIMPLEFACTORY_HPP
#define SIMPLEFACTORY_HPP

#include "Cars\Car.hpp"
#include "Cars\Car.hpp"
#include "Cars\Golf.hpp"
#include "Cars\Passat.hpp"
#include "Cars\Tiguan.hpp"
#include "Cars\Touareg.hpp"
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

#endif // SIMPLEFACTORY_HPP
