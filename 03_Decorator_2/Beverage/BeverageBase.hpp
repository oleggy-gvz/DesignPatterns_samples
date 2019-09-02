#ifndef BEVERAGEBASE_HPP
#define BEVERAGEBASE_HPP

#include <string>
#include <iostream>

using namespace std;

class BeverageBase
{
protected:
    string Description = "";

public:
    /*BeverageBase()
    {
    }*/

    virtual ~BeverageBase()
    {
    }

    string& GetDescription()
    {
        return Description;
    }

    virtual double GetCost() = 0;
};

#endif // BEVERAGEBASE_HPP
