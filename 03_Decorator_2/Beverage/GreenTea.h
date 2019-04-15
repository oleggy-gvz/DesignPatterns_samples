#ifndef GREENTEA_H
#define GREENTEA_H

#include "BeverageBase.h"

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

#endif // GREENTEA_H
