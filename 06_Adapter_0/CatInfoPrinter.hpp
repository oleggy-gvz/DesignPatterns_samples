#ifndef CATINFOPRINTER_HPP
#define CATINFOPRINTER_HPP

#include "HomeCats\IHomeCat.hpp"
#include <memory>

class CatInfoPrinter
{
public:
    static void PrintCatInfo(shared_ptr<IHomeCat> cat)
    {
        cout << "Cat dossier:" << endl;
        cout << "Cat name: " << cat->Name << endl;
        cout << "Kind meow: ";
        cat->Meow();
        cout << "Kind sratch: ";
        cat->Scratch();
        cout << endl;
    }
};

#endif // CATINFOPRINTER_HPP
