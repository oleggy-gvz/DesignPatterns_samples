#ifndef TVWIDGET_HPP
#define TVWIDGET_HPP

#include "IObserver.hpp"
#include "IWidget.hpp"
#include "News\ISubject.hpp"

class TvWidget : public IObserver, IWidget
{
private:
    string _tv;
    shared_ptr<ISubject> _subject;

public:
    TvWidget(ISubject *subject)
    {
        _subject = shared_ptr<ISubject>(subject);
        _subject->RegisterObserver(this);
    }

    void Update(string &twitter, string &lenta, string &tv)
    {
        _tv = tv;
        Display();
    }

    void Display()
    {
        cout << "TV: " << _tv << endl;
    }

    void RemoveFromSubject()
    {
        _subject->RemoveObserver(this);
    }
};

#endif // TVWIDGET_HPP
