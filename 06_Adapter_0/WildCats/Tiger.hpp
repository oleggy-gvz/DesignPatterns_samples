#ifndef TIGER_HPP
#define TIGER_HPP

#include "IWildCat.hpp"

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

#endif // TIGER_HPP
