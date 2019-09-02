/*
 * Улучшение:
 * -----------
 * TODO: В интерфейсе IObserver не должно быть метода RemoveFromSubject, потому что мы можем как подписыватся на новости так и отписыватся.
 * Изменить метод IObserver::Update что бы он не принимал ни единственного параметра. А в классе ISubject реализовать метод GetState, который выдает измененные состояния
 * информации. Какие новости от какого виджета вернуть методу GetState определяем по виртуальному методу GetTypeWidget из IWidget, он возвращает тип enum виджета.
 *
 */

#include <iostream>
#include <string>
#include <random>
#include <vector>
#include <ctime>

#include "News\NewsAgregator.hpp"
#include "Widgets\TwitterWidget.hpp"
#include "Widgets\LentaWidget.hpp"
#include "Widgets\TvWidget.hpp"

using namespace std;

int main()
{
    NewsAgregator newsAgregator;

    auto twitterWidget = new TwitterWidget(&newsAgregator);
    auto lentaWidget = new LentaWidget(&newsAgregator);
    auto tvWidget = new TvWidget(&newsAgregator);

    newsAgregator.NewNewsAvaliable();
    cout << endl;
    twitterWidget->RemoveFromSubject();
    newsAgregator.NewNewsAvaliable();

    return 0;
}
