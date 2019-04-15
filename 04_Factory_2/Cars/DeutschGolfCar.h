#ifndef DEUTSCHGOLF_H
#define DEUTSCHGOLF_H

#include "Car.h"

class DeutschGolf : public Car
{
public:
    DeutschGolf()
    {
        Name = "Golf";
        Body = "Hatchback";
    }
};

#endif // DEUTSCHGOLF_H
