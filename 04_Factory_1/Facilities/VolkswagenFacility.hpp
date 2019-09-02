#ifndef VOLKSWAGENFACILITY_HPP
#define VOLKSWAGENFACILITY_HPP

#include "Factory\SimpleFactory.hpp"

class VolkswagenFacility
{
private:
    shared_ptr<SimpleFactory> _factory;

public:
    VolkswagenFacility(SimpleFactory *factory)
    {
        _factory = shared_ptr<SimpleFactory>(factory);
    }

    shared_ptr<Car> GetCar(const string &type)
    {
        shared_ptr<Car> car = _factory->GetCar(type);

        car->Configure();
        car->AssembleBody();
        car->InstallEngine();
        car->Paint();
        car->InstallWheels();

        return car;
    }
};

#endif // VOLKSWAGENFACILITY_HPP
