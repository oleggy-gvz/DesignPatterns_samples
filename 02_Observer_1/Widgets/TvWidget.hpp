#ifndef TVWIDGET_HPP
#define TVWIDGET_HPP

#include "IObserver.hpp"

class TvWidget : public IObserver
{
private:
    string _tv;

public:
    void Update(string &twitter, string &lenta, string &tv)
    {
        _tv = tv;
        Display();
    }

    void Display()
    {
        cout << "TV: " << _tv << endl;
    }
};

#endif // TVWIDGET_HPP
