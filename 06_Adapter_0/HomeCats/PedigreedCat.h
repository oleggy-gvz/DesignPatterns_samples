#ifndef PEDIGREEDCAT_H
#define PEDIGREEDCAT_H

#include "IHomeCat.h"

class PedigreedCat : public IHomeCat
{
public:
    void Meow()
    {
        cout << "Urrrr urrrr" << endl;
    }

    void Scratch()
    {
        cout << "I do not scratch" << endl;
    }
};

#endif // PEDIGREEDCAT_H
