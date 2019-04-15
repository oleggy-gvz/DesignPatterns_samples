#ifndef TIGUANCAR_H
#define TIGUANCAR_H

#include "Car.h"
#include "PartsFactory\CarPartsFactory.h"

class Tiguan : public Car
{
private:
    shared_ptr<CarPartsFactory> _factory;

public:
    Tiguan(shared_ptr<CarPartsFactory> factory)
    {
        Name = "Tiguan";
        Body = "Crossover";

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

#endif // RUSSIANTIGUAN_H
