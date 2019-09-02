#ifndef SIMPLEDUCK_HPP
#define SIMPLEDUCK_HPP

#include "DuckBase.hpp"

class SimpleDuck : public DuckBase
{
public:
    void Display()
    {
        cout << "Hi! I'm an simple duck!" << endl;
    }
};

#endif // SIMPLEDUCK_HPP
