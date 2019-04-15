#ifndef MILKCONDIMENT_H
#define MILKCONDIMENT_H

#include "CondimentsDecoratorBase.h"

const double MilkPrice = 50;

class MilkCondiment : public CondimentsDecoratorBase
{
private:
    shared_ptr<BeverageBase> _beverage;

public:
    MilkCondiment(BeverageBase *beverage)
    {
         _beverage = shared_ptr<BeverageBase>(beverage);
         Description = _beverage->GetDescription() + " +Milk" ;
    }

    double GetCost()
    {
        return _beverage->GetCost() + MilkPrice;
    }
};

#endif // MILKCONDIMENT_H
