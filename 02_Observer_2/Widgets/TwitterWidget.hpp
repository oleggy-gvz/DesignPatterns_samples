#ifndef TWITTERWIDGET_HPP
#define TWITTERWIDGET_HPP

#include "IObserver.hpp"
#include "IWidget.hpp"
#include "News\ISubject.hpp"

class TwitterWidget : public IObserver, IWidget
{
private:
    string _twitter;
    shared_ptr<ISubject> _subject;

public:
    TwitterWidget(ISubject *subject)
    {
        _subject = shared_ptr<ISubject>(subject);
        _subject->RegisterObserver(this);
    }

    void Update(string &twitter, string &lenta, string &tv)
    {
        _twitter = twitter;
        Display();
    }

    void Display()
    {
        cout << "Twitter: " << _twitter << endl;
    }

    void RemoveFromSubject()
    {
        _subject->RemoveObserver(this);
    }
};

#endif // TWITTERWIDGET_HPP
