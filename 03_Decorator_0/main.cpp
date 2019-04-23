/*
 * ПАТТЕРН "ДЕКОРАТОР"
 * Призван декорировать существующие объекты и добавлять к ним функциональность без модификации кода тех самых объектов. Это позволяет добавить некие новые функции
 * какие то дополнительные свойства что бы те классы доступ к которым у нас закрыт (которые мы не разрабатываем) и возможно класс от сторонних разрабодчиков.
 *
 * Пример:
 * -------
 * Симулятор меню напитков в кофейне. Базовый напиток(BeverageBase), абстрактный класс в котором реализовано: поле описание (Description) и метод узнать цену (GetCost()).
 * На основе данного класса реализованы напитки Эспрессо (Espresso), Капуччино (Capuccino), Чай (BlackTea).
 *
 * Проблема проектирования:
 * -----------------------
 * Программирование на уровне реализации, а должны на уровне интерфейса. Использовали наследование, а должны комозицию.
 *
 * В нашем случае при добавлении еще нескольких видов напитков, значит столько же классов нужно будет создать. Проблема заключается в том что при создании напитка к примеру
 * "Какао с сахором", это значит что это отдельный напиток, значит отдельная реализация класса. Далее, "Латте с сахаром" либо наоборот с меньшим кол-вом молока, значит
 * нужно создавать еще один класс. В итоге у каждого напитка может быть вариация "с сахаром", "без сахара", "с молоком", "без молока", "с двойной порцией", "без двойной порции"
 * и т.д. Будет создано огромное кол-во объектов которое СЛОЖНО поддается нормальному контролю.
 * Далее при изменении цены например на молоко, мы вынуждены менять цену ВРУЧНУЮ у всех таких напитков у которых в составе есть молоко, для этого ВРУЧНУЮ анализировать
 * какие классы имеют в составе молоко, модифицировать их код.
 *
 */

#include <iostream>
#include <string>
#include <memory>

using namespace std;

class BeverageBase
{
protected:
    string Description = "";

public:
    string& GetDescription()
    {
        return Description;
    }

    virtual double GetCost() = 0;
};

class Espresso : public BeverageBase
{
public:
    Espresso()
    {
        Description = "Small portion of strong coffe";
    }

    double GetCost()
    {
        return 150;
    }
};

class BlackTea : public BeverageBase
{
public:
    BlackTea()
    {
        Description = "Black tea from teabag";
    }

    double GetCost()
    {
        return 25;
    }
};

class Capuccino : public BeverageBase
{
public:
    Capuccino()
    {
        Description = "Coffee with steamed milk";
    }

    double GetCost()
    {
        return 200;
    }
};

int main()
{
    shared_ptr<BeverageBase> capuccino(new Capuccino());
    shared_ptr<BeverageBase> blackTea(new BlackTea());
    shared_ptr<BeverageBase> espresso(new Espresso());

    cout << "Beverage: " << capuccino->GetDescription() << "; Price: " << capuccino->GetCost() << endl;
    cout << "Beverage: " << blackTea->GetDescription() << "; Price: " << blackTea->GetCost() << endl;
    cout << "Beverage: " << espresso->GetDescription() << "; Price: " << espresso->GetCost() << endl;

    return 0;
}
