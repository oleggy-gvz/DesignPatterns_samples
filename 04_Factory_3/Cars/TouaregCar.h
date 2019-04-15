#ifndef TOUAREGCAR_H
#define TOUAREGCAR_H

#include "Car.h"
#include "PartsFactory\CarPartsFactory.h"

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

#endif // TOUAREGCAR_H
