#ifndef LENTAWIDGET_HPP
#define LENTAWIDGET_HPP

#include "IObserver.hpp"
#include "IWidget.hpp"
#include "News\ISubject.hpp"

class LentaWidget : public IObserver, IWidget
{
private:
    string _news;
    shared_ptr<ISubject> _subject;

public:
    LentaWidget(ISubject *subject)
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
        cout << "Lenta: " << _news << endl;
    }

    void RemoveFromSubject()
    {
        _subject->RemoveObserver(this);
    }

    type_widget GetTypeWidget()
    {
        return type_widget::lenta_widget;
    }
};

#endif // LENTAWIDGET_HPP
