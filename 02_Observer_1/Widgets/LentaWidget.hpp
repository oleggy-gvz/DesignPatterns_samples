#ifndef LENTAWIDGET_HPP
#define LENTAWIDGET_HPP

#include "IObserver.hpp"

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

#endif // LENTAWIDGET_HPP
