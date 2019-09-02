#ifndef TVWIDGET_HPP
#define TVWIDGET_HPP

#include "IObserver.hpp"
#include "IWidget.hpp"
#include "News\ISubject.hpp"

class TvWidget : public IObserver, IWidget
{
private:
    string _news;
    shared_ptr<ISubject> _subject;

public:
    TvWidget(ISubject *subject)
    {
        _subject = shared_ptr<ISubject>(subject);
        _subject->RegisterObserver(this);
    }

    void Update()
    {
        _news = _subject->GetState(this);
        Display();
    }

    void Display()
    {
        cout << "TV: " << _news << endl;
    }

    void RemoveFromSubject()
    {
        _subject->RemoveObserver(this);
    }

    type_widget GetTypeWidget()
    {
        return type_widget::tv_widget;
    }
};

#endif // TVWIDGET_HPP
