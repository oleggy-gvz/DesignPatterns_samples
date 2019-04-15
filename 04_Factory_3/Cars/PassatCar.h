#ifndef PASSATCAR_H
#define PASSATCAR_H

#include "Car.h"
#include "PartsFactory\CarPartsFactory.h"

class Passat : public Car
{
private:
    shared_ptr<CarPartsFactory> _factory;

public:
    Passat(shared_ptr<CarPartsFactory> factory)
    {
        Name = "Passat";
        Body = "Sedan";

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

#endif // PASSATCAR_H
