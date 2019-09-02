#ifndef IHOMECAT_HPP
#define IHOMECAT_HPP

#include <iostream>
#include <string>

using namespace std;

class IHomeCat
{
public:
    string Name;
    virtual void Meow() = 0;
    virtual void Scratch() = 0;
};

#endif // IHOMECAT_HPP
