#ifndef EXOTICQUACK_H
#define EXOTICQUACK_H

#include <iostream>
#include "IQuackable.h"

using namespace std;

class ExoticQuack : public IQuackable
{
public:
    void Quack()
    {
        cout << "Meaow! Meaow!" << endl;
    }
};

#endif // EXOTICQUACK_H
