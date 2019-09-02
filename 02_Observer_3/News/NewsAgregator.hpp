#ifndef NEWSAGGREGATOR_HPP
#define NEWSAGGREGATOR_HPP

#include <string>
#include <vector>
#include <list>
#include <random>
#include <ctime>
#include <memory>
#include "ISubject.hpp"
#include "Widgets\IObserver.hpp"
#include "Widgets\IWidget.hpp"

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
        for (auto observer : _observers)
        {
            observer->Update();
        }
    }

    string GetState(IWidget *widget)
    {
        string news;

        /* TODO: Определить тип указателя widget программно, то типу указателя, не через метод.
         */
        switch(widget->GetTypeWidget())
        {
        case type_widget::lenta_widget:
            news = GetLentaNews();
            break;
        case type_widget::tv_widget:
            news = GetTvNews();
            break;
        case type_widget::twitter_widget:
            news = GetTwitterNews();
            break;
        }

        return news;
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

#endif // NEWSAGGREGATOR_HPP
