#ifndef MILKCONDIMENT_HPP
#define MILKCONDIMENT_HPP

#include "CondimentsDecoratorBase.hpp"

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

#endif // MILKCONDIMENT_HPP
