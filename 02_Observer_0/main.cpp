/*
 * ПАТТЕРН "НАБЛЮДАТЕЛЬ"
 * Призван уведомлять классы об изменениях в каком то другом классе.
 * Определяет отношение один ко многим между объектами, позволяя при этом оповещать зависимые объекты наблюдателей об изменениях в объекте субъекта.
 *
 * Отношение один ко многим означает:
 * Имеется ОДИН объект-субъект и у него есть МНОГО объектов-наблюдателей которые зависимы от этого субъекта тем что пописаны
 * на его изменения и получают уведомления от этого субъекта как только происходят какие либо новые события внутри него.
 *
 * Пример:
 * -------
 * Симулятор новостного агенства. Где новости собираются из Twitter, Lenta, TV. После новосное агенство рассылает уведомление его подписчикам.
 * С другой стороны имеется сайт (NewsAgregator), на котором размещаются новости из новостного агенства, но в виде виджетов
 * - TwitterWidget, LentaWidget, TvWidget. На сайте есть методы для получения новостей из новосного агенства: GetTwitterNews, GetLentaNews, GetTvNews.
 * При изменении новостей в новостном агенстве, вызывается метод (NewNewsAvaliable) который сообщает об этом.
 * У каждого виджета есть метод Update который обновляет представляемые им новости. Новости берутся из новостного агенства.
 *
 * Проблема проектирования:
 * -----------------------
 * Если мы захотим добавить новый виджет, к примеру объединяющий новости из Ленты и из Твиттера, в таком случае придется модифицировать сам сайт,
 * класс NewsAgregator, встроив в него новый виждет _twitterLentaWidget.
 * Это подход неверный -> Программирование на уровне реализаций. Т.е. работаем с конкретными объектами конкректных классов.
 * Правильный подход: Программирование на уровне интерфейсов.
 *
 */

#include <iostream>
#include <string>
#include <random>
#include <vector>
#include <ctime>

using namespace std;

class TwitterWidget
{
public:
    void Update(string& twitter, string& lenta, string& tv)
    {
        cout << "Twitter: " << twitter << endl;
    }
};

class LentaWidget
{
public:
    void Update(string& twitter, string& lenta, string& tv)
    {
        cout << "Lenta: " << lenta << endl;
    }
};

class TvWidget
{
public:
    void Update(string& twitter, string& lenta, string& tv)
    {
        cout << "TV: " << tv << endl;
    }
};

// сайт на котором выводятся новости через виджеты
class NewsAgregator
{
private:
    // список виджетов
    TwitterWidget _twitterWidget;
    LentaWidget _lentaWidget;
    TvWidget _tvWidget;

    std::mt19937 _random; // STL класс случайных чисел

public:
    NewsAgregator()
    {
        _random.seed(time(0));
    }

    // возвращаем копию объекта string т.к. исходный объект будет уничтожен
    string GetTwitterNews()
    {
        vector<string> news = {
            "News from Twitter #1",
            "News from Twitter #2",
            "News from Twitter #3"};
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
        // получаем новости из новостного агенства
        string twitter = GetTwitterNews();
        string lenta = GetLentaNews();
        string tv = GetTvNews();

        // обновляем данные виджетов
        _twitterWidget.Update(twitter, lenta, tv);
        _lentaWidget.Update(twitter, lenta, tv);
        _tvWidget.Update(twitter, lenta, tv);
    }
};

int main()
{
    NewsAgregator newsAgregator;

    newsAgregator.NewNewsAvaliable();
    cout << endl;
    newsAgregator.NewNewsAvaliable();

    return 0;
}
