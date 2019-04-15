#ifndef TWITTERWIDGET_H
#define TWITTERWIDGET_H

#include "IObserver.h"

class TwitterWidget : public IObserver
{
private:
    string _twitter;

public:
    void Update(string &twitter, string &lenta, string &tv)
    {
        _twitter = twitter;
        Display();
    }

    void Display()
    {
        cout << "Twitter: " << _twitter << endl;
    }
};

#endif // TWITTERWIDGET_H
