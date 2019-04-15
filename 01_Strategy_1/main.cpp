/*
 * Проблема проектирования:
 * ------------------------
 * При добавлении новой утки, например деревянной утки (WoodenDuck) которая умеет только плаватьи и резиновой утки (RubberDuck) которая не умеет летать то нам придется
 * изменяемые методы сделать виртуальными и переопределить их в новых классах - WoodenDuck, RubberDuck.
 *
 * Т.е. при добавлении новой утки придется переопределять для нее все методы которые она выполняет. а так же делать методы заглушки для тех методов которые она не выполняет.
 * Т.е. будет очень много лишнего кода. И в базовом классе и в классах наследниках.
 * Одним из способов решения, является использование интерфейсов. Т.е. имеется абстрактный класс с единственным виртуальным методом, и далее если утка имеет данный метод,
 * то она наследует данный интерфейс и внутри нее определяем данный метод.
 */

#include <iostream>
#include <list>
#include <memory>

using namespace std;

class DuckBase
{
public:
    virtual void Display() = 0;
    virtual void Quack()
    {
        cout << "Quack! Quack!" << endl;
    }

    void Swim()
    {
        cout << "I'm Swiming" << endl;
    }

    virtual void Fly()
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

    void Fly() // пустой метод означает что функционала нет
    {
    }

    void Quack()
    {
    }
};

class RubberDuck : public DuckBase
{
public:
    void Display()
    {
        cout << "Hi! I'm an rubber duck." << endl;
    }

    void Fly()
    {
    }
};

int main()
{
    list<shared_ptr<DuckBase>> ducks;

    ducks.push_back(shared_ptr<DuckBase>(new ExoticDuck()));
    ducks.push_back(shared_ptr<DuckBase>(new SimpleDuck()));
    ducks.push_back(shared_ptr<DuckBase>(new WoodenDuck()));
    ducks.push_back(shared_ptr<DuckBase>(new RubberDuck()));

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
