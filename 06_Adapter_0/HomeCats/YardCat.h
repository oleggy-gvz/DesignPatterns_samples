#ifndef YARDCAT_H
#define YARDCAT_H

#include "IHomeCat.h"

class YardCat : public IHomeCat
{
public:
    void Meow()
    {
        cout << "Meow meow!" << endl;
    }

    void Scratch()
    {
        cout << "I scratch, but not much" << endl;
    }
};

#endif // YARDCAT_H
