#ifndef TVWIDGET_H
#define TVWIDGET_H

#include "IObserver.h"

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

#endif // TVWIDGET_H
