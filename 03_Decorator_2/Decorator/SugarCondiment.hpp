#ifndef SUGARCONDIMENT_HPP
#define SUGARCONDIMENT_HPP

#include "CondimentsDecoratorBase.hpp"

const double SugarPrice = 10;

class SugarCondiment : public CondimentsDecoratorBase
{
private:
    shared_ptr<BeverageBase> _beverage;

public:
    SugarCondiment(BeverageBase *beverage)
    {
         _beverage = shared_ptr<BeverageBase>(beverage);
         Description = _beverage->GetDescription() + " +Sugar" ;
    }

    double GetCost()
    {
        return _beverage->GetCost() + SugarPrice;
    }
};

#endif // SUGARCONDIMENT_HPP
