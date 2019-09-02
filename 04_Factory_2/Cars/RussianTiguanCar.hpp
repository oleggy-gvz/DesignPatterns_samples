#ifndef RUSSIANTIGUAN_HPP
#define RUSSIANTIGUAN_HPP

#include "Car.hpp"

class RussianTiguan : public Car
{
public:
    RussianTiguan()
    {
        Name = "Tiguan";
        Body = "Crossover";
        Engine = "Gasoline";
    }
};

#endif // RUSSIANTIGUAN_HPP
