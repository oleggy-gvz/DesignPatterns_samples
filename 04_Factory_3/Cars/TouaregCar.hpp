#ifndef TOUAREGCAR_HPP
#define TOUAREGCAR_HPP

#include "Car.hpp"
#include "PartsFactory\CarPartsFactory.hpp"

class Tuareg : public Car
{
private:
    shared_ptr<CarPartsFactory> _factory;

public:
    Tuareg(shared_ptr<CarPartsFactory> factory)
    {
        Name = "Tuareg";
        Body = "Big Crossover";

        _factory = factory;
    }

    void Configure()
    {
        cout << "Configuring " << Name << endl;
        cout << "Body is: " << Body << endl;

        engine = _factory->CreateEngine();
        paintColor = _factory->CreatePaint();
        wheels = _factory->CreateWheels();
    }

};

#endif // TOUAREGCAR_HPP
