#ifndef NOQUACK_H
#define NOQUACK_H

#include <iostream>
#include "IQuackable.h"

using namespace std;

class NoQuack : public IQuackable
{
public:
    void Quack()
    {
        cout << "<no quack>" << endl;
    }
};

#endif // NOQUACK_H
