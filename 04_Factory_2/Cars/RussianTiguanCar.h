#ifndef RUSSIANTIGUAN_H
#define RUSSIANTIGUAN_H

#include "Car.h"

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

#endif // RUSSIANTIGUAN_H
