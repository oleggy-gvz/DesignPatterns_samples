#ifndef TWITTERWIDGET_HPP
#define TWITTERWIDGET_HPP

#include "IObserver.hpp"
#include "IWidget.hpp"
#include "News\ISubject.hpp"

class TwitterWidget : public IObserver, IWidget
{
private:
    string _news;
    shared_ptr<ISubject> _subject;

public:
    TwitterWidget(ISubject *subject)
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
        cout << "Twitter: " << _news << endl;
    }

    void RemoveFromSubject()
    {
        _subject->RemoveObserver(this);
    }

    type_widget GetTypeWidget()
    {
        return type_widget::twitter_widget;
    }
};

#endif // TWITTERWIDGET_HPP
