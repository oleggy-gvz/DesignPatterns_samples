/*
 * Пример:
 * Есть некий новостной агрегатор (сайт), у которого есть множество наблюдателей (виджетов), которые являются его клиентами.
 * Эти наблюдатели они наблюдают за новостным агрегатором. Сам новостной агрегатор при получении каких либо изменений (которые внутри него происходят),
 * посылает каждому наблюдателю уведомление, о то что у него произошли изменения (что бы наблюдатель эти изменения обработал).
 * Процесс подписки (что бы стать наблюдателем) происходит так: Сформирован новый наблюдатель (новый виджет), который посылает запрос новостному агрегатору
 * с целью подписатся. Новостной агрегатор добавляет в свой список подписчиков запись о данном наблюдателе (наблюдатель стал его подписчиком),
 * т.е. подписан на изменения новостного агрегатора.
 * Если этот наблюдатель хочет уйдти из подписчиков, то он посылает запрос новостному агрегатору с целью отписатся. Далее этот новостной агрегатор удаляет
 * в своем список подписчиков запись о данном наблюдателк, т.е. он был отписан.
 *
 * Создаем два интерфейса: ISubject для объекта-субьекта (новостной агрегатор) и IObserver для объекта-наблюдателя (виджета).
 * ISubject имеет список наблюдателей и методы регистрация наблюдателя, удаление наблюдателя, уведобление наблюдателей.
 * IObserver содержит метод Update() обновление новостей в наблюдателе.
 * От интерфейса IObserver наследуем классы: LentaWidget, TvWidget, TwitterWidget. От интерфейса ISubject навледуем NewsAgregator.
 *
 * Получаются абсолютно не связанные объекты между собой. Новостной агрегатор знает что есть некий интерфейс IObserver который может принимать метод Update.
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

    auto twitterWidget = new TwitterWidget();
    auto lentaWidget = new LentaWidget();
    auto tvWidget = new TvWidget();

    newsAgregator.RegisterObserver(twitterWidget);
    newsAgregator.RegisterObserver(lentaWidget);
    newsAgregator.RegisterObserver(tvWidget);

    newsAgregator.NewNewsAvaliable();
    cout << endl;
    newsAgregator.NewNewsAvaliable();

    return 0;
}
