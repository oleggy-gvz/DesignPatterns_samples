/*
 * ПАТТЕРН "АДАПТЕР"
 * Преобразование интерфейса одного класса к интерфейсу другого.
 *
 * Пример:
 * -------
 * Создание различных объектов котов и вывод краткой информации о них.
 *
 *
 * Проблема проектирования:
 * -----------------------
 * Имеется класс CatInfoPrinter с методом PrintCatInfo который мы не можем менять (считать это некий сторонний компонент который изменять не можем).
 * При попытке передать другой интерфейс другого класса в функцию PrintCatInfo, возникает ошибка.
 */

#include <iostream>
#include "HomeCats\PedigreedCat.h"
#include "HomeCats\YardCat.h"
#include "WildCats\Tiger.h"
#include "CatInfoPrinter.h"

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
    //CatInfoPrinter::PrintCatInfo(tiger); // - ошибка

    return 0;
}
