#ifndef IWILDCAT_H
#define IWILDCAT_H

#include <iostream>
#include <string>

using namespace std;

class IWildCat
{
public:
    virtual string Breed() = 0;
    virtual void Growl() = 0;
    virtual void Scratch() = 0;
};


#endif // IWILDCAT_H
