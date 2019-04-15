#ifndef RUSSIANPASSAT_H
#define RUSSIANPASSAT_H

#include "Car.h"

class RussianPassat : public Car
{
public:
    RussianPassat()
    {
        Name = "Passat";
        Body = "Sedan";
        Engine = "Gasoline";
    }
};

#endif // RUSSIANPASSAT_H
