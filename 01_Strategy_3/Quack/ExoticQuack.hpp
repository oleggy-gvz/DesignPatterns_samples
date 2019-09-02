#ifndef EXOTICQUACK_HPP
#define EXOTICQUACK_HPP

#include <iostream>
#include "IQuackable.hpp"

using namespace std;

class ExoticQuack : public IQuackable
{
public:
    void Quack()
    {
        cout << "Meaow! Meaow!" << endl;
    }
};

#endif // EXOTICQUACK_HPP
