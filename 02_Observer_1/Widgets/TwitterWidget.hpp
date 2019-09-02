#ifndef TWITTERWIDGET_HPP
#define TWITTERWIDGET_HPP

#include "IObserver.hpp"

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

#endif // TWITTERWIDGET_HPP
