#ifndef BLACKTEA_HPP
#define BLACKTEA_HPP

#include "BeverageBase.hpp"

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

#endif // BLACKTEA_HPP
