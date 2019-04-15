#ifndef RUSSIANTOUAREG_H
#define RUSSIANTOUAREG_H

#include "Car.h"

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

#endif // RUSSIANTOUAREG_H
