/*
 * ПАТТЕРН "ШАБЛОННЫЙ МЕТОД"
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
 * В итоге имеем много повторяющихся частей, а значит нам нужно использовать подход ООП. Пока без использования паттерна.
 * Нужно придумать некую абстракцию, некий базовый класс, в котором нужно определить те общие методы которые используются. И затем с помошью
 * наследования от этого базового класса реализовать классы Гамбургер и Хот-дог как того требуется.
 *
 */

#include <iostream>
#include <memory>

using namespace std;

class Hamburger
{
public:
    void Prepare()
    {
        RoastBread();
        FryMeat();
        PutVegetables();
        AddKetchup();
    }

    void FryMeat()
    {
        cout << "Meat" << endl;
    }

    void AddKetchup()
    {
        cout << "Ketchup" << endl;
    }

    void PutVegetables()
    {
        cout << "Vegetables" << endl;
    }

    void RoastBread()
    {
        cout << "Bread" << endl;
    }
};

class HotDog
{
public:
    void Prepare()
    {
        RoastBread();
        BoilSausage();
        PutVegetables();
        AddMustard();
    }

    void BoilSausage()
    {
        cout << "Sausage" << endl;
    }

    void AddMustard()
    {
        cout << "Mustard" << endl;
    }

    void PutVegetables()
    {
        cout << "Vegetables" << endl;
    }

    void RoastBread()
    {
        cout << "Bread" << endl;
    }
};

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
