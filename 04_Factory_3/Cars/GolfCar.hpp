#ifndef GOLFCAR_HPP
#define GOLFCAR_HPP

#include "Car.hpp"
#include "PartsFactory\CarPartsFactory.hpp"

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

#endif // GOLFCAR_HPP
