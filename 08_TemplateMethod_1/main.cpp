/*
 * ПАТТЕРН "ШАБЛОННЫЙ МЕТОД"
 *
 * Создаем базовый класс FastFood в который переносим общие методы двух классов RoastBread и PutVegetables. Метод Prepare будет абстрактным.
 * Где его конкретная реализация происходит в каждом класса FastFood и Hamburger.
 *
 * Проблема проектирования:
 * -----------------------
 * Классы FastFood и Hamburger все еще остаются похожими за счет наличия метода Prepare, хотя он и вынесен в отдельную сущность в базовый класс.
 * Есть две общие черты:
 * Каждый класс имеет два метода, готовит основное блюдо FryMeat / BoilSausage и добавляет специю AddKetchup / AddMustard.
 * Алгоритм приготовления продукта похож, т.е. последовательность приготовления одинакова. Состоит из 4-х шагов выполняющихся последовательно
 * друг за другом. Поэтому нужно применить шаблонный метод.
 *
 */

#include <iostream>
#include <memory>
#include "Food\Hamburger.hpp"
#include "Food\HotDog.hpp"

int main()
{
    shared_ptr<HotDog> hotDog(new HotDog());
    shared_ptr<Hamburger> hamburger(new Hamburger());

    cout << "HotDog:" << endl;
    hotDog->Prepare();
    cout << endl;

    cout << "Hamburger:" << endl;
    hamburger->Prepare();
    cout << endl;

    return 0;
}
