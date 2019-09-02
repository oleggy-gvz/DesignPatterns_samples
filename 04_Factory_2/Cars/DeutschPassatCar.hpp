#ifndef DEUTSCHPASSAT_HPP
#define DEUTSCHPASSAT_HPP

#include "Car.hpp"

class DeutschPassat : public Car
{
public:
    DeutschPassat()
    {
        Name = "Passat";
        Body = "Sedan";
    }
};

#endif // DEUTSCHPASSAT_HPP
