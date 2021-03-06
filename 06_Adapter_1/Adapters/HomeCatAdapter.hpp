#ifndef HOMECATADAPTER_HPP
#define HOMECATADAPTER_HPP

#include "HomeCats\IHomeCat.hpp"
#include "WildCats\IWildCat.hpp"
#include <memory>

class HomeCatAdapter : public IHomeCat
{
private:
    shared_ptr<IWildCat> _wildCat;

public:
    HomeCatAdapter(shared_ptr<IWildCat> wildCat)
    {
        _wildCat = wildCat;
        Name = wildCat->Breed();
    }

    void Meow()
    {
        _wildCat->Growl();
    }

    void Scratch()
    {
        _wildCat->Scratch();
    }
};

#endif // HOMECATADAPTER_HPP
