#ifndef YARDCAT_HPP
#define YARDCAT_HPP

#include "IHomeCat.hpp"

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

#endif // YARDCAT_HPP
