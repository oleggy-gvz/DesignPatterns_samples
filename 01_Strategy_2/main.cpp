/*
 *
 * Проблема проектирования:
 * -----------------------
 * Если будет изменен какой либо алгоритм какого-либо метода то придется корректировать код во ВСЕХ классах проекта.
 * При добавлении нового метода (новой способности) то придется реализовать его везде во всех классах. Дублировать код.
 * Если данных классов очень много, то это очень затруднительно.
 *
 * Итого:
 * При использовании интерфейсов необходимо реализовывать один и тот же код во всех классах.
 * Проблема дальнейшего сопровождения программы. Изменения- враг проектирования, т.е. нужно проектировать код так что бы не пришлось серьезно менять уже написанный код.
 * В случае изменения программного продукта, концеции, идеи или возможности то такие изменения могут существенно поменять на работу программы.
 */

#include <iostream>
#include <list>
#include <memory>

using namespace std;

class IQuackable
{
public:
    virtual void Quack() = 0;
};

class IFlyable
{
public:
    virtual void Fly() = 0;
};


class DuckBase
{
public:
    virtual void Display() = 0;

    void Swim()
    {
        cout << "I'm Swiming" << endl;
    }
};

class SimpleDuck : public DuckBase, IQuackable, IFlyable
{
public:
    void Display()
    {
        cout << "Hi! I'm an simple duck." << endl;
    }

    void Quack()
    {
        cout << "Quack! Quack!" << endl;
    }

    void Fly()
    {
        cout << "I'm flying" << endl;
    }
};

class ExoticDuck : public DuckBase, IQuackable, IFlyable
{
public:
    void Display()
    {
        cout << "Hi! I'm an exotic duck." << endl;
    }

    void Quack()
    {
        cout << "Quack! Quack!" << endl;
    }

    void Fly()
    {
        cout << "I'm flying" << endl;
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

class RubberDuck : public DuckBase, IQuackable
{
public:
    void Display()
    {
        cout << "Hi! I'm an rubber duck." << endl;
    }

    void Quack()
    {
        cout << "Quack! Quack!" << endl;
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

        /*auto p = dynamic_cast<IQuackable*>(duck);
        if (p) p->Quack();*/
        // не работает, p становится 0
        // если приведение к <DuckBase*> то не 0

        /*if (dynamic_cast<IQuackable*>(duck))
            (dynamic_cast<IQuackable*>(duck))->Quack();

        if (dynamic_cast<IFlyable*>(duck))
            (dynamic_cast<IFlyable*>(duck))->Fly();*/

        cout << endl;
    }
    return 0;
}
