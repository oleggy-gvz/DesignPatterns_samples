#ifndef LENTAWIDGET_H
#define LENTAWIDGET_H

#include "IObserver.h"
#include "IWidget.h"
#include "News\ISubject.h"

class LentaWidget : public IObserver, IWidget
{
private:
    string _lenta;
    shared_ptr<ISubject> _subject;

public:
    LentaWidget(ISubject *subject)
    {
        _subject = shared_ptr<ISubject>(subject);
        _subject->RegisterObserver(this);
    }

    void Update(string &twitter, string &lenta, string &tv)
    {
        _lenta = lenta;
        Display();
    }

    void Display()
    {
        cout << "Lenta: " << _lenta << endl;
    }

    void RemoveFromSubject()
    {
        _subject->RemoveObserver(this);
    }
};

#endif // LENTAWIDGET_H
