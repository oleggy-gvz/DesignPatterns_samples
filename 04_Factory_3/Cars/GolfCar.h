#ifndef GOLFCAR_H
#define GOLFCAR_H

#include "Car.h"
#include "PartsFactory\CarPartsFactory.h"

class Golf : public Car
{
private:
    shared_ptr<CarPartsFactory> _factory;

public:
    Golf(shared_ptr<CarPartsFactory> factory)
    {
        Name = "Golf";
        Body = "Hatchback";

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

#endif // GOLFCAR_H
