#ifndef DEUTSCHGOLF_HPP
#define DEUTSCHGOLF_HPP

#include "Car.hpp"

class DeutschGolf : public Car
{
public:
    DeutschGolf()
    {
        Name = "Golf";
        Body = "Hatchback";
    }
};

#endif // DEUTSCHGOLF_HPP
