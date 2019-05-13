#ifndef VOLKSWAGENFACILITY_H
#define VOLKSWAGENFACILITY_H

#include "Cars\Car.h"
#include <memory>

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
protected:
    virtual shared_ptr<Car> CreateCar(const string &type) = 0;
};

#endif // VOLKSWAGENFACILITY_H
