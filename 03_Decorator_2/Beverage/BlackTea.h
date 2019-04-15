#ifndef BLACKTEA_H
#define BLACKTEA_H

#include "BeverageBase.h"

const double BlackTeaPrice = 25;

class BlackTea : public BeverageBase
{
public:
    BlackTea()
    {
        Description = "Black tea from teabag";
    }
    ~BlackTea()
    {
    }

    double GetCost()
    {
        return BlackTeaPrice;
    }
};

#endif // BLACKTEA_H
