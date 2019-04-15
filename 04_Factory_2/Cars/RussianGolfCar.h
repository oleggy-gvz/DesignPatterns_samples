#ifndef RUSSIANGOLF_H
#define RUSSIANGOLF_H

#include "Car.h"

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

#endif // RUSSIANGOLF_H
