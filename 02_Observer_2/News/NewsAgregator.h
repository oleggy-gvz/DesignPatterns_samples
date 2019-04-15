#ifndef NEWSAGGREGATOR_H
#define NEWSAGGREGATOR_H

#include <string>
#include <vector>
#include <list>
#include <random>
#include <ctime>
#include <memory>
#include "ISubject.h"
#include "Widgets\IObserver.h"
#include "Widgets\IWidget.h"

class NewsAgregator : public ISubject
{
private:
    std::mt19937 _random;
    list<shared_ptr<IObserver>> _observers;

public:
    NewsAgregator()
    {
        _random.seed(time(0));
    }

    void RegisterObserver(IObserver *observer)
    {
        _observers.push_back(shared_ptr<IObserver>(observer));
    }

    void RemoveObserver(IObserver *observer)
    {
        _observers.remove(shared_ptr<IObserver>(observer));
    }

    void NoryfyObservers()
    {
        string twitter = GetTwitterNews();
        string lenta = GetLentaNews();
        string tv = GetTvNews();

        for (auto observer : _observers)
        {
            observer->Update(twitter, lenta, tv);
        }
    }

    string GetTwitterNews()
    {
        vector<string> news = {
            "News from Twitter #1",
            "News from Twitter #2",
            "News from Twitter #3"
        };
        return news[_random() % 3];
    }

    string GetLentaNews()
    {
        vector<string> news = {
            "News from Lenta #1",
            "News from Lenta #2",
            "News from Lenta #3"
        };
        return news[_random() % 3];
    }

    string GetTvNews()
    {
        vector<string> news = {
            "News from TV #1",
            "News from TV #2",
            "News from TV #3"
        };
        return news[_random() % 3];
    }

    void NewNewsAvaliable()
    {
        NoryfyObservers();
    }
};

#endif // NEWSAGGREGATOR_H
