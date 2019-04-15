#ifndef DEUTSCHPASSAT_H
#define DEUTSCHPASSAT_H

#include "Car.h"

class DeutschPassat : public Car
{
public:
    DeutschPassat()
    {
        Name = "Passat";
        Body = "Sedan";
    }
};

#endif // DEUTSCHPASSAT_H
