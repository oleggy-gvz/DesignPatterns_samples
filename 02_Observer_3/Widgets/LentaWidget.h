#ifndef LENTAWIDGET_H
#define LENTAWIDGET_H

#include "IObserver.h"
#include "IWidget.h"
#include "News\ISubject.h"

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

#endif // LENTAWIDGET_H
