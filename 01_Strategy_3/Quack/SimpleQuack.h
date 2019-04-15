#ifndef SIMPLEQUACK_H
#define SIMPLEQUACK_H

#include <iostream>
#include "IQuackable.h"

using namespace std;

class SimpleQuack : public IQuackable
{
public:
    void Quack()
    {
        cout << "Quack! Quack!" << endl;
    }
};

#endif // SIMPLEQUACK_H
