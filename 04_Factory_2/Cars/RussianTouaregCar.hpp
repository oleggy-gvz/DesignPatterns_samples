#ifndef RUSSIANTOUAREG_HPP
#define RUSSIANTOUAREG_HPP

#include "Car.hpp"

class RussianTuareg : public Car
{
public:
    RussianTuareg()
    {
        Name = "Tuareg";
        Body = "Big Crossover";
        Engine = "Gasoline";
    }
};

#endif // RUSSIANTOUAREG_HPP
