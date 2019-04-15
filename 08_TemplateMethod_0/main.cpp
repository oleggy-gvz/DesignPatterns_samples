/*
 * ПАТТЕРН "ШАБЛОННЫЙ МЕТОД"
 *
 *
 *
 * Пример:
 * -------
 * Процесс приготовления двух фастфудов. Гамбургера и Хот-Дога.
 *
 *
 * Проблема проектирования:
 * -----------------------
 * Класс Хот-Дога похож на класс гамбургера и отличается лишь в друх методах: BoilSausage (вместо FryMeat) и AddMustard (вместо AddKetchup).
 * И два метода являются общими: RoastBread и PutVegetables. И еще общий метод Prepare.
 * Много повторяющихся частей значит нам нужно использовать преобразования ООП. Пока без использования паттерна.
 * Пока придумываем некую абстракцию, некий базовый класс.
 *
 */

#include <iostream>
#include <memory>
#include "Food\Hamburger.h"
#include "Food\HotDog.h"

int main()
{
    shared_ptr<HotDog> hotDog(new HotDog());
    shared_ptr<Hamburger> hamburger(new Hamburger());

    cout << "HotDog" << endl;
    hotDog->Prepare();
    cout << endl;

    cout << "Hamburger" << endl;
    hamburger->Prepare();
    cout << endl;

    return 0;
}
