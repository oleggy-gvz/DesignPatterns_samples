/*
 * Для решения такой проблемы необходимо внедрить три метода в базовый класс напитка: Молоко, Сахар, Шоколад которые отображали признак - есть ли данная добавка в напитке.
 * А метод цены делаем не абстрактным, а виртуальным. В базовом классе он рассчитывался суммой цены всех добавок. Признак наличия добавки реализован в классе наследнике.
 *
 * Но у такого подхода есть недостаток. При изменении базовой цены у напитка придется менять существующий код. Но если придется добавлять добавки в напитки, к примеру Ликер,
 * следовательно придется вносить изменения в базовый класс, что неправильно. В Чае к примеру не нужны методы связанные с Молоком и Шоколадом. Еще в такой реализации
 * есть недостаток, если клиент захочет двойную порцию сахара или двойную порцию шоколада то придется делать дополнительный класс.
 *
 * Принцип проектирования:
 * -----------------------
 * Надо стремится к тому что бы у классов можно было наращивать функционал без изменения кода, т.е. классы должны быть открыты к расширению и закрыты для изменений.
 * Если к примеру объект разработанный не нами, то должна быть некоторая возможность расширить поведение этого объекта с помощью каких то дополнительных методов но так что бы
 * мы не залезали внутрь этого объекта, не вскрывали его сущность и не имели к нему доступ.
 * Но надо этот принцип использовать с умом: не всегда стоит стремится к нему и не для всех частей класса, а только для тех для которых это оправдано.
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
    double MilkPrice = 50;
    double SugarPrice = 10;
    double ChocolatePrice = 70;

public:
    string& GetDescription()
    {
        return Description;
    }

    virtual double GetCost()
    {
        double cost = 0;

        if (HasMilk())      cost += MilkPrice;
        if (HasSugar())     cost += SugarPrice;
        if (HasChocolate()) cost += ChocolatePrice;

        return cost;
    }

    virtual bool HasMilk() = 0;
    virtual bool HasSugar() = 0;
    virtual bool HasChocolate() = 0;
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
        return 150 + BeverageBase::GetCost();
    }

    virtual bool HasMilk()
    {
        return false;
    }

    virtual bool HasSugar()
    {
        return false;
    }

    virtual bool HasChocolate()
    {
        return false;
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
        return 25 + BeverageBase::GetCost();
    }


    virtual bool HasMilk()
    {
        return false;
    }

    virtual bool HasSugar()
    {
        return false;
    }

    virtual bool HasChocolate()
    {
        return false;
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
        return 100 + BeverageBase::GetCost();
    }


    virtual bool HasMilk()
    {
        return true;
    }

    virtual bool HasSugar()
    {
        return true;
    }

    virtual bool HasChocolate()
    {
        return false;
    }
};

class HotChocolate : public BeverageBase
{
public:
    HotChocolate()
    {
        Description = "Sweet hot chocolate";
    }

    double GetCost()
    {
        return 150 + BeverageBase::GetCost();
    }


    virtual bool HasMilk()
    {
        return true;
    }

    virtual bool HasSugar()
    {
        return true;
    }

    virtual bool HasChocolate()
    {
        return true;
    }
};

int main()
{
    shared_ptr<BeverageBase> capuccino(new Capuccino());
    shared_ptr<BeverageBase> hotChocolate(new HotChocolate());
    shared_ptr<BeverageBase> espresso(new Espresso());

    cout << "Beverage: " << capuccino->GetDescription() << "; Price: " << capuccino->GetCost() << endl;
    cout << "Beverage: " << hotChocolate->GetDescription() << "; Price: " << hotChocolate->GetCost() << endl;
    cout << "Beverage: " << espresso->GetDescription() << "; Price: " << espresso->GetCost() << endl;

    return 0;
}
