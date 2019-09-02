#ifndef SIMPLEQUACK_HPP
#define SIMPLEQUACK_HPP

#include <iostream>
#include "IQuackable.hpp"

using namespace std;

class SimpleQuack : public IQuackable
{
public:
    void Quack()
    {
        cout << "Quack! Quack!" << endl;
    }
};

#endif // SIMPLEQUACK_HPP
