#ifndef ESPRESSO_HPP
#define ESPRESSO_HPP

#include "BeverageBase.hpp"

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

#endif // ESPRESSO_HPP
