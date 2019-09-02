#ifndef PASSAT_HPP
#define PASSAT_HPP

#include "Car.hpp"

class Passat : public Car
{
public:
    Passat()
    {
        Name = "Passat";
        Body = "Sedan";
    }
};

#endif // PASSAT_HPP
