#ifndef RUSSIANGOLF_HPP
#define RUSSIANGOLF_HPP

#include "Car.hpp"

class RussianGolf : public Car
{
public:
    RussianGolf()
    {
        Name = "Golf";
        Body = "Hatchback";
        Engine = "Gasoline";
    }
};

#endif // RUSSIANGOLF_HPP
