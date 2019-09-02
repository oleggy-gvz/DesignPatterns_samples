#ifndef RUSSIANPASSAT_HPP
#define RUSSIANPASSAT_HPP

#include "Car.hpp"

class RussianPassat : public Car
{
public:
    RussianPassat()
    {
        Name = "Passat";
        Body = "Sedan";
        Engine = "Gasoline";
    }
};

#endif // RUSSIANPASSAT_HPP
