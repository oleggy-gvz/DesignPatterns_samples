#ifndef VOLKSWAGENFACILITY_HPP
#define VOLKSWAGENFACILITY_HPP

#include "Cars\Car.hpp"

class VolkswagenFacility
{
public:
    shared_ptr<Car> GetCar(const string &type)
    {
        shared_ptr<Car> car = CreateCar(type);

        car->Configure();
        car->AssembleBody();
        car->InstallEngine();
        car->Paint();
        car->InstallWheels();

        return car;
    }

    virtual shared_ptr<Car> CreateCar(const string &type) = 0;
};

#endif // VOLKSWAGENFACILITY_HPP
