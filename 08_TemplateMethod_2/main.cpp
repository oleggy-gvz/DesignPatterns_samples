/*
 * ПАТТЕРН "ШАБЛОННЫЙ МЕТОД"
 * Паттерн основывающийся на неком методе поведение которого может быть описано как шаблон. Т.е. был определен некий набросок какого либо алгоритма где
 * должны быть произведена последовательность действий и затем выделяем те части которые являются общими для всех классов и затем выделяем части которые
 * являются приватными частями для конкретных реализаций.
 *
 *
 * В нашем примере:
 * Нужно выделить общий интерфейс для этих двух классов. Видим что в классах Hamburger / HotDog алгоритм готовки похож. Сначала готовится основное блюдо:
 * FryMeat / BoilSausage а затем броается специя: AddKetchup / AddMustard. Поэтому для начала переименуем данные методы под общим наименованием, к примеру
 * PrepareMainIngredient и AddTopings. И данные методы сделаем абстрактными, поместив их в базовый класс, а определять их будем в производных.
 * Сам алгоритм готовки Prepare(), так же одинаков, поэтому его прописываем один раз в базовом классе.
 *
 *
 * Проблема проектирования:
 * -----------------------
 * К примеру: не хотим класть горчицу в блюдо.
 *
 * Если мы хотим изменить алгоритм готовки (изменить совсем мы его не можем), но мы можем к примеру отказатся (на выбор) от каких либо шагов в алгоритме
 * готовки.
 * Т.е. нужно добавить метод валидации которые решают запусткать конкретный шаг готовки или нет.
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
