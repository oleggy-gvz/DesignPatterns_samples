#ifndef PASSAT_H
#define PASSAT_H

#include "Car.h"

class Passat : public Car
{
public:
    Passat()
    {
        Name = "Passat";
        Body = "Sedan";
    }
};

#endif // PASSAT_H
