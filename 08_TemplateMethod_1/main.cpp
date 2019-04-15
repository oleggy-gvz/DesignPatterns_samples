/*
 * ПАТТЕРН "ШАБЛОННЫЙ МЕТОД"
 *
 * Создаем базовый класс FastFood в который переносим общие методы двух классов RoastBread и PutVegetables. Метод Prepare будет абстрактным.
 * Где его конкретная реализация происходит в каждом класса FastFood и Hamburger.
 *
 * Проблема проектирования:
 * -----------------------
 * Классы FastFood и Hamburger все еще остаются похожими за счет наличия метода Prepare, хоть он и вынесен в отдельную сущность. Каждый класс имеет два метода, готовит основное блюдо
 * FryMeat / BoilSausage и добавляет специю AddKetchup / AddMustard. Кроме того алгоритм приготовления похож, т.е. последовательность приготовления одинакова.
 * Нужно отделить этот алгоритм в базовый класс.
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
