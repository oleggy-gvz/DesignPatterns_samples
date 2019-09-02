#ifndef CHOCOLATECONDIMENT_HPP
#define CHOCOLATECONDIMENT_HPP

#include "CondimentsDecoratorBase.hpp"

const double ChocolatePrice = 70;

class ChocolateCondiment : public CondimentsDecoratorBase
{
private:
    shared_ptr<BeverageBase> _beverage;

public:
    ChocolateCondiment(BeverageBase *beverage)
    {
         _beverage = shared_ptr<BeverageBase>(beverage);
         Description = _beverage->GetDescription() + " +Chocolate" ;
    }

    double GetCost()
    {
        return _beverage->GetCost() + ChocolatePrice;
    }
};

#endif // CHOCOLATECONDIMENT_HPP
