#ifndef SIMPLEDUCK_H
#define SIMPLEDUCK_H

#include "DuckBase.h"

class SimpleDuck : public DuckBase
{
public:
    void Display()
    {
        cout << "Hi! I'm an simple duck!" << endl;
    }
};

#endif // SIMPLEDUCK_H
