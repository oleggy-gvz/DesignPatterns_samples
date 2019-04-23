/*
 * Улучшение:
 * -----------
 * Реализовать отдельный интерфейс виджета - IWidget, в котором только один метод - Display.
 *
 * Можно сделать что бы виджет сам регестрировал себя в агрегаторе (ISubject) через конструктор. В конструкторе он сам себя регестрировал в агрегаторе (NewsAgregator).
 * Для это в виджет добавляем поле ISubject в которое через конструктор копируем адрес агрегатора, и через него регистрируем сами себя.
 * Так же добавим метод удаление виджета из агрегатора (субъекта), так же через ISubject удаляем себя.
 *
 */

#include <iostream>
#include <string>
#include <random>
#include <vector>
#include <ctime>

#include "News\NewsAgregator.h"
#include "Widgets\TwitterWidget.h"
#include "Widgets\LentaWidget.h"
#include "Widgets\TvWidget.h"

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
