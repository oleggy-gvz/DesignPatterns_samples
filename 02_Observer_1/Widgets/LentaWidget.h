#ifndef LENTAWIDGET_H
#define LENTAWIDGET_H

#include "IObserver.h"

class LentaWidget : public IObserver
{
private:
    string _lenta;

public:
    void Update(string &twitter, string &lenta, string &tv)
    {
        _lenta = lenta;
        Display();
    }

    void Display()
    {
        cout << "Lenta: " << _lenta << endl;
    }
};

#endif // LENTAWIDGET_H
