#ifndef GREENTEA_HPP
#define GREENTEA_HPP

#include "BeverageBase.hpp"

const double GreenTeaPrice = 125;

class GreenTea : public BeverageBase
{
public:
    GreenTea()
    {
        Description = "Green leaf tea";
    }
    ~GreenTea()
    {
    }

    double GetCost()
    {
        return GreenTeaPrice;
    }
};

#endif // GREENTEA_HPP
