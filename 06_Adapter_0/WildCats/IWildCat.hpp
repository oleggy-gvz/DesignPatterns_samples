#ifndef IWILDCAT_HPP
#define IWILDCAT_HPP

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


#endif // IWILDCAT_HPP
