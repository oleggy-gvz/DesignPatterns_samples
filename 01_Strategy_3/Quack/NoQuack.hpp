#ifndef NOQUACK_HPP
#define NOQUACK_HPP

#include <iostream>
#include "IQuackable.hpp"

using namespace std;

class NoQuack : public IQuackable
{
public:
    void Quack()
    {
        cout << "<no quack>" << endl;
    }
};

#endif // NOQUACK_HPP
