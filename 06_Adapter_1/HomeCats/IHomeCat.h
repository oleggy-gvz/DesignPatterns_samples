#ifndef IHOMECAT_H
#define IHOMECAT_H

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

#endif // IHOMECAT_H
