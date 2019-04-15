#ifndef TIGER_H
#define TIGER_H

#include "IWildCat.h"

class Tiger : public IWildCat
{
public:
    string Breed()
    {
        return "Common Tiger";
    }

    void Growl()
    {
        cout << "Grrrrrrrr" << endl;
    }

    void Scratch()
    {
        cout << "I have very sharp claws, scratching to death" << endl;
    }
};

#endif // TIGER_H
