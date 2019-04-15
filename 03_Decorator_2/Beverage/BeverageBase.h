#ifndef BEVERAGEBASE_H
#define BEVERAGEBASE_H

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

#endif // BEVERAGEBASE_H
