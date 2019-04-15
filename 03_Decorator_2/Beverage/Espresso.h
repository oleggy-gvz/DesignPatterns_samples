#ifndef ESPRESSO_H
#define ESPRESSO_H

#include "BeverageBase.h"

const double EspressoPrice = 150;

class Espresso : public BeverageBase
{
public:
    Espresso()
    {
        Description = "Small portion of strong coffe";
    }
    ~Espresso()
    {
    }

    double GetCost()
    {
        return EspressoPrice;
    }
};

#endif // ESPRESSO_H
