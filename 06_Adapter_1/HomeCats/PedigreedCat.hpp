#ifndef PEDIGREEDCAT_HPP
#define PEDIGREEDCAT_HPP

#include "IHomeCat.hpp"

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

#endif // PEDIGREEDCAT_HPP
