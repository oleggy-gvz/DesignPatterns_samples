/*
 * Создаем производный класс адаптер который является наследником того класса (интерфейса) к которому мы хотим привести наш исходный класс.
 * И в данном класс адаптера создаем указатель на исходный класс, и через конструктор передаем исходный класс в этот указателель.
 * Т.е. создаем наследуемый класс HomeCatAdapter от базового IHomeCat, внутри класса создаем указатель на объект класса IWildCat, инициализируем
 * его передачей объекта IWildCat через конструктор.
 * Соответственно в классе HomeCatAdapter переопределяем все методы, помещая в них вызов 1-го аналогичного метода из объекта IWildCat.
 *
 * Можно помещать не только 1 метод а больше (в зависимости от задачи), можно комбинировать.
 * Пример: автомобиль который заводится с ключа и едет, с другой стороны есть самоходка, которая едет без завода двигателя. И задача преобразовать
 * автомобиль к этой самоходке. Тогда в методе "ехать" (в производном от класса самоходки), вызывали два метода из объекта автомобиль, завести мотор и ехать.
 *
 * Адаптер позволяет преобразовывать один интерфейс к другому интерфейсу, но также позволяет преобразовывать несколько интерфейсов к одному.
 * Пример: Допустм с одной стороны есть класс A имеющий 3 метода: метод a1, метод a2, метод a3, и с другой есть три исходных класса B, C, D которые имеют по
 * одному методу аналогичному: метод b1, метод c2, метод d3.
 * Соответственно в классе адаптере создаем конструктор в который передаем все три объекта классов B,С,D И при реализации метода a1, встраиваем метод b1
 * объекта класса B, при реализации метода a2, встраиваем метод c2 объекта класса C, при реализации метода a3, встраиваем метод d3 объекта класса D.
 *
 * Проблемы проектирования
 * -----------------------
 * Важно помнить что адаптировать объекты можно только в случае если они имеют аналогичный функционал. Если они выполняют совершенно разные вещи то в
 * адаптации смысла нет.
 * Пример: Из нашего примера класс собака адаптировать в кошку не получится. Собака не царапается зато кусается.
 *
 */

#include <iostream>
#include "HomeCats\PedigreedCat.hpp"
#include "HomeCats\YardCat.hpp"
#include "WildCats\Tiger.hpp"
#include "Adapters\HomeCatAdapter.hpp"
#include "CatInfoPrinter.hpp"

using namespace std;

int main()
{
    shared_ptr<IHomeCat> vaska(new YardCat());
    vaska->Name = "Vasika";
    CatInfoPrinter::PrintCatInfo(vaska);

    shared_ptr<IHomeCat> wagner(new PedigreedCat());
    wagner->Name = "Vagner";
    CatInfoPrinter::PrintCatInfo(wagner);

    shared_ptr<IWildCat> tiger(new Tiger());
    shared_ptr<HomeCatAdapter> adapter(new HomeCatAdapter(tiger));
    CatInfoPrinter::PrintCatInfo(adapter);

    return 0;
}
