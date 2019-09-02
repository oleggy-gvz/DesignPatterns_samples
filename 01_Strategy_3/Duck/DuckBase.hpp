#ifndef DUCKBASE_HPP
#define DUCKBASE_HPP

#include <iostream>
#include <memory>
#include "Fly\FlyWithWings.hpp"
#include "Quack\SimpleQuack.hpp"

using namespace std;

class DuckBase
{
protected:
    // добавление указателей на интерфейсы, наследники которого содержат свои методы
    shared_ptr<IFlyable> flyBehavior;
    shared_ptr<IQuackable> quackBehavior;

public:
    DuckBase()
    {
        SetFlyBehaviour(new FlyWithWings());
        SetQuackBehaviour(new SimpleQuack());
    }

    // установка того класса метод которого хотим задать
    void SetQuackBehaviour(IQuackable *newQuackBehaviour)
    {
        quackBehavior = shared_ptr<IQuackable>(newQuackBehaviour);
    }

    // установка того класса метод которого хотим задать
    void SetFlyBehaviour(IFlyable *newFlyBehaviour)
    {
        flyBehavior = shared_ptr<IFlyable>(newFlyBehaviour);
    }

    void Swim()
    {
        cout << "I'm swiming" << endl;
    }

    // вызов изменяемого метода
    void Quack()
    {
        quackBehavior->Quack();
    }

    // вызов изменяемого метода
    void Fly()
    {
        flyBehavior->Fly();
    }

    virtual void Display() = 0;
};

#endif // DUCKBASE_HPP
