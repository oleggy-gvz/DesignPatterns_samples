/*
 * ПАТТЕРН "СТРАТЕГИЯ"
 * Позволяет избегать повторного написания одного и того же кода в различных объектах и классах. Получить динамически заменяемые стратегии для того что бы выбирать их прямо
 * в real time.
 *
 * Пример:
 * -------
 * Симулятор утиного пруда, в котором представлены различные виды уток. Они обладают стандартным поведением: внешний вид (Display), крякают (Quack),
 * плавают (Swim) и летают (Fly). Т.к. все утки разные (разные виды) то метод Display будет реализован по разному.
 * Поэтому создаем базовый класс уток (DuckBase) в котором реализуем общие методы одинаковые у всех уток, а метод который отличается у уток - сделаем
 * абстрактным (Display), он будет реализован у каждой утки по своему. Каждый вид утки (каждый класс) будет наследовать все от базового класса и
 * по своему реализовывать абстрактный метод из базового класса - Display.
 *
 * Проблема проектирования:
 * ------------------------
 * При наследовании некоторые классы наследуют ненужный функционал, которым не должны обладать.
 */

#include <iostream>
#include <list>
#include <memory>

using namespace std;

class DuckBase
{
public:
    virtual void Display() = 0;
    void Quack()
    {
        cout << "Quack! Quack!" << endl;
    }

    void Swim()
    {
        cout << "I'm Swiming" << endl;
    }

    void Fly()
    {
        cout << "I'm flying" << endl;
    }
};

class SimpleDuck : public DuckBase
{
public:
    void Display()
    {
        cout << "Hi! I'm an simple duck." << endl;
    }
};

class ExoticDuck : public DuckBase
{
public:
    void Display()
    {
        cout << "Hi! I'm an exotic duck." << endl;
    }
};

class WoodenDuck : public DuckBase
{
public:
    void Display()
    {
        cout << "Hi! I'm an wooden duck." << endl;
    }
};

int main()
{
    list<shared_ptr<DuckBase>> ducks;

    ducks.push_back(shared_ptr<DuckBase>(new ExoticDuck()));
    ducks.push_back(shared_ptr<DuckBase>(new SimpleDuck()));
    ducks.push_back(shared_ptr<DuckBase>(new WoodenDuck()));

    for (auto const& duck : ducks)
    {
        duck->Display();
        duck->Swim();
        duck->Quack();
        duck->Fly();

        cout << endl;
    }
    return 0;
}
